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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31[5] = { 0, 0, 0, 0, 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_38[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41[3] = { 0, 0, 0 };
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
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
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_72[4];
	float fLocal_73[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_74[42];
	float fLocal_75[42] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_80[40];
	struct<3> Local_81[14];
	struct<3> Local_82[14];
	float fLocal_83[14] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84 = 0f;
	struct<3> Local_85[3];
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	char cLocal_94[24] = "";
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char* sLocal_123 = NULL;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	int iLocal_139 = 0;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	int iLocal_142 = 0;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	struct<3> Local_147 = { 0, 0, 0 } ;
	struct<3> Local_148 = { 0, 0, 0 } ;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_150 = { 0, 0, 0 } ;
	int iLocal_151 = 0;
	struct<3> Local_152 = { 0, 0, 0 } ;
	struct<3> Local_153 = { 0, 0, 0 } ;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int* iLocal_162 = NULL;
	int iLocal_163 = 0;
	int* iLocal_164 = NULL;
	int iLocal_165 = 0;
	int iLocal_166[4] = { 0, 0, 0, 0 };
	int iLocal_167 = 0;
	int iLocal_168[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_169[2] = { 0, 0 };
	int* iLocal_170 = NULL;
	struct<8> Local_171[42];
	int* iLocal_172 = NULL;
	int iLocal_173[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[2] = { 0, 0 };
	int iLocal_175 = 0;
	var uLocal_176[2] = { 0, 0 };
	int iLocal_177[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_178[2] = { 0, 0 };
	int iLocal_179 = 0;
	int* iLocal_180 = NULL;
	int* iLocal_181 = NULL;
	int* iLocal_182 = NULL;
	int* iLocal_183 = NULL;
	int* iLocal_184 = NULL;
	int* iLocal_185 = NULL;
	int* iLocal_186 = NULL;
	var uLocal_187[4] = { 0, 0, 0, 0 };
	int* iLocal_188 = NULL;
	var uLocal_189[42] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_190[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197[4] = { 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int* iLocal_199 = NULL;
	int* iLocal_200 = NULL;
	int* iLocal_201 = NULL;
	int* iLocal_202 = NULL;
	int* iLocal_203 = NULL;
	int* iLocal_204 = NULL;
	int* iLocal_205 = NULL;
	int* iLocal_206 = NULL;
	int* iLocal_207 = NULL;
	int* iLocal_208 = NULL;
	int iLocal_209[4] = { 0, 0, 0, 0 };
	int* iLocal_210 = NULL;
	int iLocal_211[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_212[3] = { 0, 0, 0 };
	int iLocal_213[4] = { 0, 0, 0, 0 };
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220[5] = { 0, 0, 0, 0, 0 };
	int iLocal_221[4] = { 0, 0, 0, 0 };
	int iLocal_222[5] = { 0, 0, 0, 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
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
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	char[] cLocal_255[8] = 0;
	int iLocal_256[314] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_257[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_258[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_259[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_260 = 4;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 4;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 4;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 4;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 4;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 4;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 4;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	struct<21> Local_304 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_318 = 16;
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
	int* iLocal_483 = NULL;
	var uLocal_484 = 3;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 1092616192;
	var uLocal_491 = 1101004800;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 3;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	bool bLocal_508 = 0;
	struct<2> Local_509[10];
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	struct<3> Local_514 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	char* sLocal_516 = NULL;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525[4] = { 0, 0, 0, 0 };
	int iLocal_526 = 0;
	bool bLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
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
	iLocal_36 = -1;
	Local_67 = { 0f, 0f, 0f };
	Local_68 = { 5311.2363f, -5212.5635f, (85.7187f - 3.2f) };
	Local_69 = { 5308.4175f, -5212.3984f, (85.7187f - 3.2f) };
	Local_70 = { 5311.9736f, -5211.524f, (85.7187f - 3.2f) };
	Local_71 = { 5428.791f, -5115.189f, 77.2632f };
	Local_76 = { 5320.6f, -5188.56f, 82.5f };
	Local_77 = { 0f, 0f, -90f };
	Local_78 = { 5308.8574f, -5208.156f, ((86.9186f - 3.2f) - 0.05f) };
	Local_79 = { 0f, 0f, 0f };
	sLocal_98 = "ALPrologue";
	sLocal_99 = "Map_Objects";
	sLocal_100 = "missprologuesnow_moves";
	sLocal_101 = "missprologuedead_guard";
	sLocal_102 = "missprologueig_1";
	sLocal_103 = "facials@blend_out@static_hostage_2-pro_mcs_1_face@guard-pro_mcs_1";
	sLocal_104 = "missprologueig_2";
	sLocal_105 = "missprologuemcs_1";
	sLocal_106 = "missprologueig_3@get_into_cover";
	sLocal_107 = "missprologueig_3@react_to_explosion";
	sLocal_108 = "missprologueig_3";
	sLocal_109 = "missprologueig_3@cover_impatient";
	sLocal_110 = "missprologuebrad_alert_idle";
	sLocal_111 = "missbigscore2big_2";
	sLocal_112 = "missprologuemcs_2_walkout_vault";
	sLocal_113 = "missprologueig_4@hold_head_base";
	sLocal_114 = "missprologueig_4@wipe_blood";
	sLocal_115 = "missprologueig_4_p2";
	sLocal_116 = "missprologueig_4@kill_michael";
	sLocal_117 = "missprologueig_5@set_c4_start_loop";
	sLocal_118 = "missprologueig_5@set_c4_mainaction";
	sLocal_119 = "missprologueig_5@set_c4_end_loop";
	sLocal_120 = "missprologueig_5@press_button_duck";
	sLocal_121 = "missprologueleadinoutpro_mcs_5_p3";
	sLocal_122 = "missprologueig_6";
	sLocal_123 = "MISSPROLOGUEIG_6@FIRST_PERSON";
	sLocal_124 = "missprologueig_5@cough";
	sLocal_125 = "missprologueig_5@clean_smoke";
	sLocal_126 = "prolog2";
	sLocal_127 = "prolog5";
	Local_133 = { 5310.14f, -5208.314f, (82.557f - 0.04f) };
	Local_134 = { 0f, 0f, 0f };
	Local_137 = { 5310.14f, -5208.27f, 82.52f };
	Local_138 = { 0f, 0f, 0f };
	Local_140 = { 5310.14f, -5208.279f, 82.52f };
	Local_141 = { 0f, 0f, 0f };
	Local_143 = { 5310.083f, -5204.825f, 82.52f };
	Local_144 = { 0f, 0f, 0f };
	Local_147 = { 5298.805f, -5188.455f, 82.54f };
	Local_148 = { 0f, 0f, -90f };
	Local_149 = { 5297.25f, -5192.246f, 82.523f };
	Local_150 = { 0f, 0f, 180f };
	Local_152 = { 5316.087f, -5178.637f, 82.519f };
	Local_153 = { 0f, 0f, 0f };
	Local_156 = { (5320.469f + 0.25f), -5186.864f, 82.519f };
	Local_157 = { 0f, 0f, 0f };
	iLocal_224 = joaat("WEAPON_PISTOL");
	iLocal_225 = joaat("WEAPON_SMG");
	iLocal_226 = joaat("WEAPON_CARBINERIFLE");
	iLocal_227 = joaat("WEAPON_PUMPSHOTGUN");
	iLocal_231 = 145;
	iLocal_234 = -1;
	iLocal_235 = -1;
	iLocal_236 = -1;
	iLocal_237 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	iLocal_240 = -1;
	iLocal_241 = -1;
	iLocal_242 = -1;
	iLocal_243 = -1;
	iLocal_244 = -1;
	iLocal_245 = joaat("prop_c4_final");
	iLocal_246 = joaat("prop_c4_final_green");
	iLocal_247 = joaat("prop_c4_num_0003");
	iLocal_248 = joaat("prop_c4_num_0002");
	iLocal_249 = joaat("prop_c4_num_0001");
	iLocal_250 = joaat("prop_barrier_work06a");
	cLocal_255 = "PROAUD";
	bLocal_508 = true;
	iLocal_510 = 1739830342;
	iLocal_511 = 1008345977;
	iLocal_512 = -1838261400;
	iLocal_513 = -88189184;
	iLocal_523 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_799();
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		iVar0 = 0;
		while (iVar0 < iLocal_168)
		{
			if (!PED::IS_PED_INJURED(iLocal_168[iVar0]))
			{
				if (!PED::IS_PED_IN_COMBAT(iLocal_168[iVar0], 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_161))
					{
						TASK::TASK_COMBAT_PED(iLocal_168[iVar0], iLocal_161, 0, 16);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_164) && !PED::IS_PED_INJURED(iLocal_164))
					{
						TASK::TASK_COMBAT_PED(iLocal_168[iVar0], iLocal_164, 0, 16);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_168[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_160, false), -1, false, false);
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[iVar0], true);
				PED::SET_PED_KEEP_TASK(iLocal_168[iVar0], true);
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_161))
		{
			PED::SET_PED_KEEP_TASK(iLocal_161, true);
		}
		if (!PED::IS_PED_INJURED(iLocal_164))
		{
			PED::SET_PED_KEEP_TASK(iLocal_164, true);
		}
		if (__LIB_20__::func_728() == 0)
		{
			if (iLocal_251 < 13)
			{
				__LIB_0__::func_324("PRO_MDIED");
			}
		}
		else if (__LIB_20__::func_728() == 2)
		{
			if (iLocal_251 < 13)
			{
				__LIB_0__::func_324("PRO_TDIED");
			}
		}
		func_796(34);
		__LIB_11__::func_864(7);
		func_793();
		func_752(0, 1);
	}
	MISC::SET_MISSION_FLAG(true);
	NETWORK::NETWORK_SET_CAN_RECEIVE_RS_INVITES(false);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Prologue", 0);
		func_799();
		func_747();
		func_746();
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (iLocal_251 > 0)
		{
			if (iLocal_251 <= 5)
			{
				if (!func_745(263))
				{
					ENTITY::CREATE_MODEL_HIDE(5310.872f, -5196.34f, 84.6373f, 1f, joaat("v_ilev_cd_lampal"), true);
					func_744(263, 1);
				}
			}
			else if (func_745(263))
			{
				ENTITY::REMOVE_MODEL_HIDE(5310.872f, -5196.34f, 84.6373f, 1f, joaat("v_ilev_cd_lampal"), false);
				func_744(263, 0);
			}
			if (iLocal_251 <= 5)
			{
				ENTITY::REMOVE_MODEL_SWAP(5293.14f, -5162.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), false);
				ENTITY::REMOVE_MODEL_SWAP(5295.89f, -5192.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), false);
			}
			else
			{
				ENTITY::CREATE_MODEL_SWAP(5293.14f, -5162.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), true);
				ENTITY::CREATE_MODEL_SWAP(5295.89f, -5192.17f, 85.92f, 1f, joaat("v_ilev_cd_sprklr"), joaat("v_ilev_cd_sprklr_on"), true);
			}
		}
		if (iLocal_251 > 0 && iLocal_251 < 12)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5307.03f, -5180.6987f, 84.018654f, 15f, 5f, 1.5f, false, true, 0))
			{
				func_743(3, joaat("v_ilev_cd_door3"), 5305.46f, -5177.75f, 83.67f, 1, 1f, 1f, 0f);
			}
		}
		if (iLocal_251 > 0 && iLocal_251 > 6)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5310.5464f, -5206.499f, 84.51863f, 7f, 12f, 2f, false, true, 0))
			{
				func_743(0, joaat("v_ilev_cd_door2"), 5316.65f, -5205.74f, 83.67f, 1, 1f, 1f, 0f);
			}
		}
		if (iLocal_251 > 0 && iLocal_251 <= 6)
		{
			if (!func_745(264))
			{
				func_742(0, joaat("v_ilev_cd_door2"));
			}
		}
		if (iLocal_251 >= 4 && iLocal_251 <= 5)
		{
			if (func_745(37))
			{
				func_743(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
				func_743(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5307.03f, -5180.6987f, 84.018654f, 15f, 5f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5328.0083f, -5188.6914f, 83.78484f, 15f, 10f, 2.5f, false, true, 0))
		{
			if (iLocal_62 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
				{
					if (iLocal_63 == 0)
					{
						if (func_739(16, joaat("prop_gar_door_a_01")))
						{
							ENTITY::CREATE_MODEL_HIDE(5320.6f, -5188.56f, 82.52f, 1f, joaat("prop_gar_door_a_01"), false);
							iLocal_200 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_gar_door_a_01"), Local_76, true, true, false);
							ENTITY::SET_ENTITY_COLLISION(iLocal_200, false, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_200, Local_77, 2, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gar_door_a_01"));
							if (iLocal_200 != 0)
							{
								iLocal_63 = 1;
							}
						}
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_208))
				{
					if (iLocal_63 == 1)
					{
						if (func_739(19, joaat("p_gdoor1colobject_s")))
						{
							iLocal_208 = OBJECT::CREATE_OBJECT(joaat("p_gdoor1colobject_s"), 5320.59f, -5188.49f, 82.52f, true, true, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_208, true);
							ENTITY::SET_ENTITY_COORDS(iLocal_208, 5320.59f, -5188.49f, 82.52f, true, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(iLocal_208, 0f, 0f, 90f, 2, true);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_208, false, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_gdoor1colobject_s"));
						}
					}
				}
				else if (iLocal_251 >= 11)
				{
					if (func_738(sLocal_99))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_208, 5320.59f, -5188.49f, (82.52f + 2.6f), true, false, false, true);
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_200))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3))
							{
								ENTITY::PLAY_ENTITY_ANIM(iLocal_200, "GDoor_Open", sLocal_99, 1000f, false, true, false, 0f, 0);
							}
							else
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open", 1f);
								ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_200, sLocal_99, "GDoor_Open", 0f);
								iLocal_62 = 0;
							}
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_208, 5320.59f, -5188.49f, 82.52f, true, false, false, true);
					if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_200))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3))
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open", 0f);
							ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_200, sLocal_99, "GDoor_Open", 0f);
						}
					}
					iLocal_62 = 0;
				}
			}
			if (!func_745(243))
			{
				if (iLocal_251 >= 10 || iLocal_251 <= 11)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_200))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open") <= 1f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_208, 5320.59f, -5188.49f, __LIB_2__::func_495(82.52f, (82.52f + 2.6f), 0f, 0.888f, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open")), true, false, false, true);
								}
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open") == 1f)
								{
									func_744(243, 1);
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_251 >= 11 && iLocal_251 <= 13)
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5333.214f, -5187.637f, 84.804016f, 20f, 10f, 3f, false, true, 0))
				{
					iLocal_233 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
					func_744(239, 0);
				}
			}
			else if (!func_745(239))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233, 9);
					func_744(239, 1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[0], false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(uLocal_260[0]) <= 101 && iLocal_251 == 8)
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_260[0], true);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_260[0], joaat("SCRIPT_TASK_ANY")) != 1 && !PED::IS_PED_RAGDOLL(uLocal_260[0]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_260[0], false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[2], false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_260[2], joaat("SCRIPT_TASK_ANY")) != 1 && !PED::IS_PED_RAGDOLL(uLocal_260[2]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_260[2], false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_164, false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_ANY")) != 1 && !PED::IS_PED_RAGDOLL(iLocal_164))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_164, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_162, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_163, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_164, false);
		}
		if ((iLocal_251 >= 2 && iLocal_251 <= 10) && iLocal_251 != 8)
		{
			if ((CAM::IS_SCREEN_FADED_IN() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !__LIB_0__::func_77(0))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_160, joaat("WEAPON_CARBINERIFLE"), false))
				{
					iVar1 = joaat("WEAPON_CARBINERIFLE");
					iVar2 = 0;
					WEAPON::GET_AMMO_IN_CLIP(iLocal_160, iVar1, &iVar2);
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_160, iVar1) <= 0 && iVar2 <= 0)
					{
						iLocal_252 = 8;
						func_727();
					}
				}
			}
		}
		switch (iLocal_251)
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
				func_726(5, 0, 0);
				break;
			case 12:
				if (iLocal_29 < 1)
				{
					func_726(5, 0, 0);
				}
				else
				{
					func_726(6, 0, 0);
				}
				break;
			case 13:
				func_726(6, 0, 0);
				break;
			case 14:
			case 15:
				if (iLocal_29 < 3)
				{
					func_726(7, 0, 0);
				}
				else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("pro_mcs_7_concat") && CUTSCENE::IS_CUTSCENE_PLAYING()) && func_745(278))
				{
					CLOCK::SET_CLOCK_TIME(12, 0, 0);
				}
				break;
		}
		if (iLocal_251 > 0)
		{
			if (iLocal_251 < 11)
			{
				fLocal_84 = 0f;
			}
			else if (iLocal_251 >= 11 || iLocal_251 <= 12)
			{
				if (fLocal_84 < 1f)
				{
					fLocal_84 = (fLocal_84 + (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			else if (iLocal_251 == 13)
			{
				if (fLocal_84 > 0.4f)
				{
					fLocal_84 = (fLocal_84 - (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			else if (iLocal_251 >= 14 || iLocal_251 <= 15)
			{
				if (fLocal_84 < 1f)
				{
					fLocal_84 = (fLocal_84 + (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			if (fLocal_84 > 1f)
			{
				fLocal_84 = 1f;
			}
			if (fLocal_84 < 0f)
			{
				fLocal_84 = 0f;
			}
			if (!PED::IS_PED_INJURED(iLocal_162))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_162) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_162)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_162))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(iLocal_162);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_162, true);
					if (PED::GET_PED_ENVEFF_SCALE(iLocal_162) != fLocal_84)
					{
						PED::SET_PED_ENVEFF_SCALE(iLocal_162, fLocal_84);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_163))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_163) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_163)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_163))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(iLocal_163);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_163, true);
					if (PED::GET_PED_ENVEFF_SCALE(iLocal_163) != fLocal_84)
					{
						PED::SET_PED_ENVEFF_SCALE(iLocal_163, fLocal_84);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_164))
			{
				if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_164) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_164)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_164))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(iLocal_164);
					PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_164, true);
					if (iLocal_251 >= 12)
					{
						if (iLocal_251 != 14)
						{
							PED::SET_PED_ENVEFF_SCALE(iLocal_164, 0.6f);
						}
						else
						{
							PED::SET_PED_ENVEFF_SCALE(iLocal_164, 0.8f);
							PED::SET_PED_ENVEFF_CPV_ADD(iLocal_164, 0.15f);
						}
					}
					else if (PED::GET_PED_ENVEFF_SCALE(iLocal_164) != fLocal_84)
					{
						PED::SET_PED_ENVEFF_SCALE(iLocal_164, fLocal_84);
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_162))
		{
			PED::SET_PED_RESET_FLAG(iLocal_162, 227, true);
		}
		if (!PED::IS_PED_INJURED(iLocal_163))
		{
			PED::SET_PED_RESET_FLAG(iLocal_163, 227, true);
		}
		if (!PED::IS_PED_INJURED(iLocal_164))
		{
			PED::SET_PED_RESET_FLAG(iLocal_164, 227, true);
		}
		if (((iLocal_251 >= 11 && iLocal_251 <= 13) && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!PED::IS_PED_INJURED(iLocal_161))
			{
				func_725();
			}
		}
		if (iLocal_231 != __LIB_20__::func_728())
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_160) && ENTITY::DOES_ENTITY_EXIST(iLocal_161)) && ENTITY::DOES_ENTITY_EXIST(iLocal_164))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_160, 185, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_161, 185, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_164, 185, true);
				iLocal_231 = __LIB_20__::func_728();
			}
		}
		if (iLocal_57 == 0)
		{
			if (iLocal_251 != 1)
			{
				HUD::DISPLAY_RADAR(false);
			}
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
		}
		else
		{
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		if (iLocal_251 <= 10)
		{
			if (!func_745(117))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			}
		}
		if ((CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS() || CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS()) || (CAM::DOES_CAM_EXIST(iLocal_191) && CAM::IS_CAM_INTERPOLATING(iLocal_191)))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		}
		TASK::SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(100f);
		if (PED::GET_VEHICLE_PED_IS_USING(iLocal_160) != 0)
		{
			__LIB_0__::func_409(PED::GET_VEHICLE_PED_IS_USING(iLocal_160), -1);
		}
		iVar3 = 0;
		iVar4 = __LIB_0__::func_459();
		iVar3 = 0;
		while (iVar3 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar5 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar3);
			switch (iVar5)
			{
				case 142:
					SCRIPT::GET_EVENT_DATA(0, iVar3, &iVar4, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
							{
								__LIB_0__::func_401(458, 1, 0);
							}
						}
					}
					break;
			}
			iVar3++;
		}
		__LIB_0__::func_320(iLocal_160, -1);
		func_717();
		func_716();
		if (!__LIB_0__::func_368(138))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (__LIB_0__::func_1("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */))
				{
					__LIB_30__::func_214(1);
				}
				__LIB_0__::func_503(138, 1);
			}
		}
		if ((iLocal_251 >= 11 && iLocal_251 <= 12) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
		}
		else
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
		}
		if ((iLocal_251 >= 6 && iLocal_251 <= 10) && iLocal_521 > 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_196))
			{
				if (!(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("pro_mcs_7_concat") && CUTSCENE::IS_CUTSCENE_PLAYING()))
				{
					func_705();
				}
			}
		}
		if (iLocal_66)
		{
			if (!AUDIO::IS_STREAM_PLAYING())
			{
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
				iLocal_66 = 0;
			}
		}
		switch (iLocal_251)
		{
			case 0:
				if ((func_739(9, __LIB_19__::func_811(0)) && func_739(10, __LIB_19__::func_811(2))) && func_739(11, joaat("IG_Brad")))
				{
					func_689();
				}
				break;
			case 1:
				if ((((func_739(3, joaat("A_M_M_ProlHost_01")) && func_739(0, joaat("A_F_M_ProlHost_01"))) && func_739(12, joaat("IG_ProlSec_02"))) && func_739(36, joaat("prop_1st_prologue_scene"))) && func_738(sLocal_102))
				{
					func_683();
				}
				break;
			case 2:
				func_682();
				break;
			case 3:
				if ((((func_739(37, joaat("prop_1st_hostage_scene")) && func_738(sLocal_102)) && func_738(sLocal_104)) && func_738(sLocal_105)) && func_738(sLocal_103))
				{
					func_681();
				}
				break;
			case 4:
				if ((((((func_739(37, joaat("prop_1st_hostage_scene")) && func_738(sLocal_104)) && func_738(sLocal_105)) && func_738(sLocal_106)) && func_738(sLocal_109)) && func_738(sLocal_103)) && func_738(sLocal_110))
				{
					func_680();
				}
				break;
			case 5:
				if ((((((((((func_739(31, iLocal_245) && func_739(32, iLocal_246)) && func_739(33, iLocal_247)) && func_739(34, iLocal_248)) && func_739(35, iLocal_249)) && func_739(38, joaat("prop_vault_door_scene"))) && func_738(sLocal_107)) && func_738(sLocal_108)) && func_738(sLocal_109)) && func_738(sLocal_110)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_126))
				{
					func_669();
				}
				break;
			case 6:
				if (((((func_739(30, joaat("v_ilev_cd_dust")) && func_738(sLocal_111)) && func_738(sLocal_112)) && func_738(sLocal_124)) && func_738(sLocal_109)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_127))
				{
					func_665();
				}
				break;
			case 7:
				if (func_739(4, joaat("CSB_ProlSec")) && func_738(sLocal_112))
				{
					func_663();
				}
				break;
			case 8:
				if ((((((((((((func_739(4, joaat("CSB_ProlSec")) && func_739(15, joaat("prop_cs_heist_bag_02"))) && func_739(20, joaat("p_ld_heist_bag_s_1"))) && func_739(18, joaat("p_csh_strap_01_s"))) && func_739(17, joaat("prop_michael_balaclava"))) && func_739(39, joaat("prop_2nd_hostage_scene"))) && func_738(sLocal_113)) && func_738(sLocal_114)) && func_738(sLocal_115)) && func_738(sLocal_116)) && func_738(sLocal_117)) && func_738(sLocal_118)) && func_738(sLocal_119))
				{
					func_651();
				}
				break;
			case 9:
				if (((((((func_739(31, iLocal_245) && func_739(32, iLocal_246)) && func_739(33, iLocal_247)) && func_739(34, iLocal_248)) && func_739(35, iLocal_249)) && func_738(sLocal_117)) && func_738(sLocal_118)) && func_738(sLocal_119))
				{
					func_647();
				}
				break;
			case 10:
				if ((func_738(sLocal_120) && func_738(sLocal_125)) && func_738(sLocal_119))
				{
					func_645();
				}
				break;
			case 11:
				if (((((((((((((((((((((((func_739(25, joaat("S_M_M_SnowCop_01")) && func_739(28, joaat("U_M_Y_ProlDriver_01"))) && func_739(27, joaat("U_M_M_ProlSec_01"))) && func_739(13, joaat("policeold1"))) && func_739(14, joaat("policeold2"))) && func_739(24, joaat("stockade3"))) && func_739(23, joaat("rancherxl2"))) && func_739(5, joaat("emperor3"))) && func_739(21, joaat("p_trevor_prologe_bally_s"))) && func_739(22, joaat("p_trev_ski_mask_s"))) && func_642(3, sLocal_98)) && func_642(4, sLocal_98)) && func_642(5, sLocal_98)) && func_642(6, sLocal_98)) && func_642(8, sLocal_98)) && func_642(9, sLocal_98)) && func_642(11, sLocal_98)) && func_642(26, sLocal_98)) && func_642(700, sLocal_98)) && func_738(sLocal_122)) && func_738(sLocal_123)) && func_738(sLocal_101)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("policeold1"))) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("policeold2")))
				{
					func_574();
				}
				break;
			case 12:
				if (((func_642(26, sLocal_98) && func_642(701, sLocal_98)) && func_642(702, sLocal_98)) && func_738(sLocal_121))
				{
					func_569();
				}
				break;
			case 13:
				if ((((func_739(25, joaat("S_M_M_SnowCop_01")) && func_739(13, joaat("policeold1"))) && func_739(14, joaat("policeold2"))) && func_739(23, joaat("rancherxl2"))) && func_738(sLocal_121))
				{
					func_540();
				}
				break;
			case 14:
				if ((((func_739(15, joaat("prop_cs_heist_bag_02")) && func_739(20, joaat("p_ld_heist_bag_s_1"))) && func_642(27, sLocal_98)) && func_642(28, sLocal_98)) && func_642(29, sLocal_98))
				{
					func_538();
				}
				break;
			case 15:
				if (((((((((((((((func_739(25, joaat("S_M_M_SnowCop_01")) && func_739(13, joaat("policeold1"))) && func_739(14, joaat("policeold2"))) && func_739(23, joaat("rancherxl2"))) && func_739(6, joaat("freight"))) && func_739(7, joaat("freightcont1"))) && func_739(8, joaat("freightcont2"))) && func_739(15, joaat("prop_cs_heist_bag_02"))) && func_642(27, sLocal_98)) && func_642(28, sLocal_98)) && func_642(29, sLocal_98)) && func_642(32, sLocal_98)) && func_642(33, sLocal_98)) && func_642(34, sLocal_98)) && func_642(35, sLocal_98)) && func_738(sLocal_122))
				{
					func_411();
				}
				break;
			case 16:
				func_1();
				break;
			case 17:
				func_727();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x18C5
{
	while (!func_10(1, 1))
	{
		SYSTEM::WAIT(0);
	}
	func_799();
	__LIB_5__::func_674(&(uLocal_260[0]));
	__LIB_5__::func_674(&(uLocal_260[2]));
	func_6();
	__LIB_6__::func_823(0, 1);
	iLocal_61 = 1;
	func_752(0, 0);
}

void func_6()//Position - 0x1A72
{
	HUD::CLEAR_PRINTS();
	__LIB_30__::func_214(1);
	__LIB_6__::func_771();
}

int func_10(int iParam0, bool bParam1)//Position - 0x1AD0
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
	iVar0 = __LIB_0__::func_388(iParam0);
	iVar1 = __LIB_19__::func_811(iVar0);
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
		func_409(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_91(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_42__::func_600(&Global_22965, 0, 0, 0);
	__LIB_6__::func_846(iParam0);
	return 1;
}

int func_91(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9978
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
			func_401(*iParam0);
			__LIB_32__::func_730(*iParam0, 1, 0);
			__LIB_20__::func_721(*iParam0);
			__LIB_20__::func_720(*iParam0);
			func_93(*iParam0, bParam6);
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

int func_93(int iParam0, bool bParam1)//Position - 0x9A90
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_10__::func_3(iVar0))
	{
		__LIB_10__::func_2(iVar0, 0);
		func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_184(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_10__::func_2(iVar0, 0);
			func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_184(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_162(iParam0, 3, 169))
					{
						func_369(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_162(iParam0, 12, 6))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 11))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 12, 10))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 12, 50))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 14, 59))
			{
				func_369(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_162(iParam0, 8, 22))
			{
				func_369(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_162(iParam0, 12, 14))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_162(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 4))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 12, 3))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 14, 82))
			{
				func_369(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_162(iParam0, 8, 76))
			{
				func_369(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_162(iParam0, 12, 1))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_162(iParam0, 12, 12))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 12, 15))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_162(iParam0, 3, 71))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_162(iParam0, 12, 7))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 12, 6))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_162(iParam0, 14, 88))
			{
				func_369(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_162(iParam0, 8, 17))
			{
				func_369(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_162(iParam0, 12, 11))
			{
				func_369(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x20ECA
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
				if (!func_162(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_162(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_162(iParam0, 14, iVar4))
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
			if (!func_162(iParam0, 14, uVar8[iVar7]))
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

void func_184(int iParam0, int iParam1)//Position - 0x25549
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
				iVar1 = func_368(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_186(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
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

void func_186(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x257C4
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
			if (func_366(iParam0, iVar1, &iVar2, 0))
			{
				func_369(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_364(iParam0, iVar1, &iVar2))
			{
				func_369(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_361(iParam0);
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
			func_192(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_192(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_192(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x25F60
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
			func_319(iVar5, iParam1, iParam2, 1);
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
						func_319(iVar5, 10, 0, 1);
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
									func_319(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_192(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_319(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_316(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_192(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_310(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_319(iVar5, 14, uVar18[iVar1], 1);
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
							func_192(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_319(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_192(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_40__::func_705(iParam0);
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
						func_192(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_192(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_300(iVar5, iVar24, iVar23, iVar25);
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
							func_192(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_192(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_192(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_192(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_192(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_192(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_192(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_310(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_300(iVar5, func_316(iParam0, 8, -1), iParam2, func_316(iParam0, 4, -1));
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
				func_235(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_300(iVar5, iParam2, iVar44, iVar45);
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
			func_310(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_300(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
						func_192(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_192(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_300(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_300(iVar5, iVar58, iVar57, iParam2);
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
						func_192(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_300(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_192(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_212(iParam0, 9, iVar63))
						{
							func_192(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_192(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_192(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_192(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_316(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_316(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_192(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_192(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_192(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_192(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_192(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_192(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_192(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_192(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_192(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_192(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_40__::func_705(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_192(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_192(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_193(iParam0, &uVar4))
		{
			func_192(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_192(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_192(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_192(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_316(iParam0, 3, -1), iVar10);
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
				func_192(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_193(int iParam0, var uParam1)//Position - 0x27E0A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_316(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_212(iParam0, iVar1, iVar0))
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

int func_212(int iParam0, int iParam1, int iParam2)//Position - 0x2C0C6
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
				if (!func_212(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_212(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_212(iParam0, 14, iVar6))
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
			if (!func_212(iParam0, 14, uVar11[iVar10]))
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
						return func_212(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_212(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_235(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x32DDC
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
	func_236(iParam0, bParam3, 0, -1);
}

void func_236(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x32E29
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
		bVar3 = func_280(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_271(iParam0, iParam3);
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

int func_271(int iParam0, int iParam1)//Position - 0x41FF3
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
				iVar3 = func_316(iParam0, 11, -1);
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
				iVar5 = func_316(iParam0, 11, -1);
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

int func_280(int iParam0, bool bParam1)//Position - 0x42451
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
						iVar3 = func_316(iParam0, 11, -1);
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
						iVar5 = func_316(iParam0, 8, -1);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
						iVar8 = func_316(iParam0, 11, -1);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
						iVar12 = func_316(iParam0, 8, -1);
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

int func_300(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4B2DF
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
					iVar0 = func_300(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_300(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4F9CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_361(iParam0))
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

int func_316(int iParam0, int iParam1, int iParam2)//Position - 0x4FC7C
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
				if (func_212(iParam0, iParam1, iVar0))
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
				if (func_212(iParam0, iParam1, iVar1))
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

void func_319(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4FDFB
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
							func_319(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_319(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_319(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_319(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_319(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_319(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_319(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_319(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_361(int iParam0)//Position - 0x68AF2
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
				iVar1 = func_316(iParam0, 11, -1);
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
				iVar3 = func_316(iParam0, 11, -1);
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

int func_364(int iParam0, int iParam1, int iParam2)//Position - 0x68E64
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_162(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x68F2B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_162(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_368(int iParam0, int iParam1, int iParam2)//Position - 0x691EB
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
				if (func_162(iParam0, iParam1, iVar0))
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
				if (func_162(iParam0, iParam1, iVar1))
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

int func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6928C
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
										func_369(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_369(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_368(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_366(iParam0, iVar10, &iVar4, 1))
							{
								func_369(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_369(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_369(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_369(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_369(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_369(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_369(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_369(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_369(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_369(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_366(iParam0, iVar10, &iVar4, 0))
		{
			func_369(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_364(iParam0, iVar10, &iVar4))
		{
			func_369(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_401(int iParam0)//Position - 0x6C8BE
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
		func_186(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_368(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_402(__LIB_19__::func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_368(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_368(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_402(__LIB_19__::func_811(0), 3, 70, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 3, 71, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 3, 72, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 3, 73, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 3, 74, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 3, 75, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 4, 41, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 4, 42, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 4, 43, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 4, 44, 1, 0, 0, 0);
					func_402(__LIB_19__::func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_368(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_186(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_402(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6CB1B
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_405(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_405(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6CCD6
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
								func_405(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_405(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_405(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_405(iParam0, 14, iVar5, 1, 0);
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
								func_405(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_405(iParam0, 14, 17, 1, 0);
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

int func_409(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6D2BB
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
				func_401(*iParam0);
				__LIB_32__::func_730(*iParam0, 1, 0);
				__LIB_20__::func_721(*iParam0);
				__LIB_20__::func_720(*iParam0);
				func_93(*iParam0, bParam6);
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

void func_411()//Position - 0x6D39B
{
	int iVar0;
	int iVar1;
	if (func_537())
	{
		__LIB_42__::func_876(5, "stageFinale", 1, 0, 0, 1);
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_521 = 0;
		Global_100441.f_12[0] = iLocal_521;
		MISC::SET_FAKE_WANTED_LEVEL(5);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_163, 1);
		iLocal_57 = 1;
		iLocal_49 = 0;
		STREAMING::REMOVE_IPL("prologue04_cover");
		iLocal_91 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3551.478f, -4690.381f, 112.995f, 15f, 15f, 6f, 0.017f, false, 7);
		iLocal_92 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3518.557f, -4670.0737f, 112.22583f, 18f, 3f, 6f, ((-1.39f / 360f) * 6.28f), false, 7);
		iLocal_93 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3528.0913f, -4673.3794f, 112.289085f, 2f, 8f, 6f, 0f, false, 7);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_164, iLocal_228);
		__LIB_10__::func_7(&iLocal_180);
		__LIB_10__::func_7(&iLocal_182);
		__LIB_10__::func_7(&iLocal_184);
		func_744(164, 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
		}
		__LIB_30__::func_733(&(iLocal_177[0]), joaat("freight"), 3461.96f, -4732.633f, (113.0537f - 1.6f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[0], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[0], true);
		__LIB_30__::func_733(&(iLocal_177[1]), joaat("freightcont1"), 3478.5854f, -4734.4746f, (112.1684f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[1], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[1], true);
		__LIB_30__::func_733(&(iLocal_177[2]), joaat("freightcont2"), 3494.1167f, -4736.199f, (112.2295f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[2], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[2], true);
		__LIB_30__::func_733(&(iLocal_177[3]), joaat("freightcont2"), 3509.6353f, -4737.9224f, (112.2905f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[3], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[3], true);
		__LIB_30__::func_733(&(iLocal_177[4]), joaat("freightcont1"), 3525.1606f, -4739.6465f, (112.3516f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[4], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[4], true);
		__LIB_30__::func_733(&(iLocal_177[5]), joaat("freightcont2"), 3540.698f, -4741.3716f, (112.4128f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[5], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[5], true);
		__LIB_30__::func_733(&(iLocal_177[6]), joaat("freightcont1"), 3556.2366f, -4743.097f, (112.4739f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[6], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[6], true);
		__LIB_30__::func_733(&(iLocal_177[7]), joaat("freightcont2"), 3571.7502f, -4744.82f, (112.5349f - 0.5f), 83.6637f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_177[7], 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_177[7], true);
		if (func_474())
		{
			MISC::CLEAR_AREA(3549.7505f, -4660.526f, 113.5495f, 1000f, true, false, false, false);
			if (!PED::IS_PED_INJURED(iLocal_165))
			{
				__LIB_30__::func_217(iLocal_165, Local_71, 0f, 0);
				PED::EXPLODE_PED_HEAD(iLocal_165, joaat("WEAPON_SNIPERRIFLE"));
			}
			__LIB_0__::func_202(&uLocal_318, 5);
			if (__LIB_20__::func_728() != 2)
			{
				__LIB_35__::func_983(&uLocal_260, 2);
				__LIB_42__::func_600(&uLocal_260, 1, 1, 0);
				func_799();
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
			}
			__LIB_0__::func_203(&uLocal_318, 1, iLocal_162, "MICHAEL", 0, 1);
			__LIB_0__::func_203(&uLocal_318, 2, iLocal_163, "TREVOR", 0, 1);
			__LIB_11__::func_102(iLocal_172, 3532.2458f, -4716.9336f, 111.8443f, 125.7299f);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 0);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 2);
			__LIB_30__::func_217(iLocal_164, 3550.345f, -4691.488f, 113.09f, 351.6286f, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_164, false);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_164, sLocal_122, "lying_dead_brad", 3550.345f, -4691.505f, 114.368f, Local_67, 1000f, -1000f, -1, 792585, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[4]))
			{
				iLocal_211[4] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3545.981f, -4692.626f, 112.8602f, true, true, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_211[4], 3545.981f, -4692.626f, 112.8602f, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_211[4], -103.32f, 0f, -115.2f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[4], true);
			}
			AUDIO::STOP_PED_SPEAKING(iLocal_164, true);
			__LIB_30__::func_217(iLocal_162, 3543.8826f, -4696.1963f, 112.6563f, 351.6286f, 0);
			iLocal_158 = PED::CREATE_SYNCHRONIZED_SCENE(3550.345f, -4691.505f, 114.368f, Local_67, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_162, iLocal_158, sLocal_122, "lying_dead_player0", 1000f, -1000f, 4, 8191, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_158, true);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_162, false, false);
			AUDIO::STOP_PED_SPEAKING(iLocal_162, true);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_162, iLocal_226, false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_162, iLocal_226, 500, true, true);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_162, iLocal_226, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[3]))
			{
				iLocal_211[3] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3547.381f, -4695.846f, 112.9602f, true, true, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_211[3], 3547.381f, -4695.846f, 112.9602f, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_211[3], 0f, 0f, -57.96f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[3], true);
			}
			if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(3550.82f, -4691.85f, 113.4f))
			{
				iLocal_220[0] = TASK::ADD_COVER_POINT(3550.82f, -4691.85f, 113.4f, 0f, 1, 0, 0, false);
			}
			__LIB_30__::func_217(iLocal_163, 3550.82f, -4691.85f, 113.4f, 0f, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
			PED::CLEAR_PED_PROP(iLocal_163, 1);
			__LIB_0__::func_503(125, 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_163, 3550.82f, -4691.85f, 113.4f, -1, false, 0f, true, true, iLocal_220[0], false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_163, true, false);
			if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_163, iLocal_226, false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, iLocal_226, 500, true, true);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_163, iLocal_226, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_163, true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((29.60337f - ENTITY::GET_ENTITY_HEADING(iLocal_163)));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_796(29);
		}
	}
	else
	{
		if (iLocal_29 < 3)
		{
			CUTSCENE::REQUEST_CUTSCENE("PRO_MCS_7_Concat", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (__LIB_20__::func_728() != 2)
				{
					__LIB_35__::func_983(&uLocal_260, 2);
					__LIB_42__::func_600(&uLocal_260, 1, 1, 0);
					func_799();
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_162, iLocal_228);
				}
				__LIB_0__::func_203(&uLocal_318, 1, iLocal_162, "MICHAEL", 0, 1);
				__LIB_0__::func_203(&uLocal_318, 2, iLocal_163, "TREVOR", 0, 1);
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_160, iLocal_226, false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_160, iLocal_226, 500, true, true);
				}
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_160, iLocal_226) < WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_226) * 2)
				{
					WEAPON::SET_PED_AMMO(iLocal_160, iLocal_226, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_226) * 2, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
				iLocal_57 = 1;
				func_477(PLAYER::PLAYER_ID(), 1, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_172, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_172, 5f);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_172);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
				func_464(31);
				func_796(30);
				func_463();
				break;
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				iLocal_59 = 0;
				if (!func_745(20))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[16]))
					{
						__LIB_30__::func_733(&(iLocal_173[16]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_98), sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(27, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_98), sLocal_98)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[16], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[16], true);
						func_457(0);
						func_457(1);
						PED::SET_PED_ACCURACY(iLocal_168[0], 5);
						PED::SET_PED_ACCURACY(iLocal_168[1], 5);
						PED::SET_PED_INTO_VEHICLE(iLocal_168[0], iLocal_173[16], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_168[1], iLocal_173[16], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[16], 27, sLocal_98, true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[16], 500f);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[17]))
					{
						__LIB_30__::func_733(&(iLocal_173[17]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_98), sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(28, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_98), sLocal_98)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[17], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[17], true);
						func_457(2);
						func_457(3);
						PED::SET_PED_ACCURACY(iLocal_168[2], 5);
						PED::SET_PED_ACCURACY(iLocal_168[3], 5);
						PED::SET_PED_INTO_VEHICLE(iLocal_168[2], iLocal_173[17], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_168[3], iLocal_173[17], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[17], 28, sLocal_98, true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_173[17], 0.75f);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[18]))
					{
						__LIB_30__::func_733(&(iLocal_173[18]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_98), sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(29, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_98), sLocal_98)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[18], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[18], true);
						func_457(4);
						func_457(5);
						PED::SET_PED_ACCURACY(iLocal_168[4], 5);
						PED::SET_PED_ACCURACY(iLocal_168[5], 5);
						PED::SET_PED_INTO_VEHICLE(iLocal_168[4], iLocal_173[18], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_168[5], iLocal_173[18], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[18], 29, sLocal_98, true);
					}
					func_744(20, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold2"));
				iVar0 = 0;
				while (iVar0 < 3)
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[iVar0 + 16], false);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 == 0 || iVar0 == 3)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0], iLocal_225, -1, true, true);
					}
					if (iVar0 == 2 || iVar0 == 5)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0], iLocal_227, -1, true, true);
					}
					iVar0++;
				}
				func_463();
				break;
			case 2:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 2.5f);
				if (MISC::GET_PROFILE_SETTING(0) == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_455(72, "PROHLP_AIM3", 1, -1, 2000);
					}
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3567.7236f, -4664.9497f, 111.65386f, 3557.7136f, -4704.931f, 118.520966f, 35f, false, true, 0))
				{
					iLocal_252 = 15;
					func_727();
				}
				if (SYSTEM::TIMERA() > 24000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[16], false) && ((ENTITY::GET_ENTITY_HEALTH(iLocal_173[16]) < 1000 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[16]) < 1000f) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[16]) < 1000f))
					{
						VEHICLE::EXPLODE_VEHICLE(iLocal_173[16], true, true);
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_COORDS(iLocal_173[16], true), true) < 10f)
						{
							CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_COORDS(iLocal_173[16], true), true) >= 10f)
						{
							CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.25f);
						}
					}
				}
				if (SYSTEM::TIMERA() > 18000)
				{
					if (!func_745(19))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[19]))
						{
							__LIB_30__::func_733(&(iLocal_173[19]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_98)), -1, 1097859072);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_173[19], true);
							AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[19], true);
							func_457(9);
							func_457(10);
							PED::SET_PED_ACCURACY(iLocal_168[9], 5);
							PED::SET_PED_ACCURACY(iLocal_168[10], 5);
							PED::SET_PED_INTO_VEHICLE(iLocal_168[9], iLocal_173[19], -1);
							PED::SET_PED_INTO_VEHICLE(iLocal_168[10], iLocal_173[19], 0);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[19], 32, sLocal_98, true);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[19], false);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[10], iLocal_227, -1, true, true);
						}
						iVar0 = 0;
						while (iVar0 < iLocal_168)
						{
							if (!PED::IS_PED_INJURED(iLocal_168[iVar0]))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_168[iVar0], false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[iVar0], 51, true);
								PED::SET_PED_COMBAT_MOVEMENT(iLocal_168[iVar0], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[iVar0], 50, true);
							}
							iVar0++;
						}
						func_744(19, 1);
					}
				}
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SIREN_DISTANT", false, -1))
				{
					if (SYSTEM::TIMERA() > 23000)
					{
						if (!func_745(35))
						{
							iLocal_242 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_242, "Cops_Arrive_2", 3532.4004f, -4676.85f, 113.2428f, "Prologue_Sounds", false, 0, false);
							func_744(35, 1);
						}
					}
				}
				if ((SYSTEM::TIMERA() > 33000 && !__LIB_0__::func_75()) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_163, 3550.0107f, -4691.8555f, 114.759544f, 2.5f, 3f, 2f, false, true, 0))
				{
					if (__LIB_0__::func_90())
					{
						func_477(PLAYER::PLAYER_ID(), 0, 0);
						__LIB_10__::func_7(&iLocal_186);
						func_6();
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
						{
							AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
						}
						func_796(32);
						MISC::SET_FAKE_WANTED_LEVEL(0);
						iLocal_57 = 0;
						__LIB_30__::func_733(&(iLocal_173[0]), joaat("policeold1"), 3493.12f, -4681.604f, 113.4866f, 260.0987f, -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[0], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[0], true);
						__LIB_30__::func_733(&(iLocal_173[1]), joaat("policeold2"), 3492.824f, -4678.94f, 113.5952f, 260.1201f, -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[1], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[1], true);
						__LIB_30__::func_733(&(iLocal_173[2]), joaat("policeold2"), 3491.9338f, -4676.019f, 113.8171f, 260.2887f, -1, 1097859072);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[2], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[2], true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_173[0], "1st_car", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_173[1], "2nd_car", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_173[2], "3rd_car", 1, 0, 0);
						iLocal_197[1] = __LIB_20__::func_765(iLocal_160, iLocal_226, 1, 0, 0, 0, 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[1], "Trevors_weapon", 0, 0, 0);
						__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
						CUTSCENE::START_CUTSCENE(0);
						func_441(0, 0);
						if (!__LIB_0__::func_2(0))
						{
							CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
						}
						__LIB_5__::func_674(&iLocal_162);
						__LIB_11__::func_100(&iLocal_172);
						iVar0 = 0;
						while (iVar0 < iLocal_168)
						{
							__LIB_5__::func_674(&(iLocal_168[iVar0]));
							iVar0++;
						}
						__LIB_11__::func_100(&(iLocal_173[19]));
						iVar0 = 0;
						while (iVar0 < iLocal_177)
						{
							__LIB_11__::func_100(&(iLocal_177[iVar0]));
							iVar0++;
						}
						__LIB_11__::func_108(&(iLocal_197[0]));
						__LIB_11__::func_108(&(iLocal_197[2]));
						__LIB_11__::func_108(&(iLocal_211[3]));
						INTERIOR::UNPIN_INTERIOR(iLocal_196);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_SnowCop_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_heist_bag_02"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_ld_heist_bag_s_1"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_csh_strap_01_s"));
						VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(6, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(8, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(9, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(11, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(26, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(27, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(28, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(29, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(32, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(33, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(34, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(35, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(700, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(701, sLocal_98);
						VEHICLE::REMOVE_VEHICLE_RECORDING(702, sLocal_98);
						STREAMING::REMOVE_ANIM_DICT(sLocal_100);
						STREAMING::REMOVE_ANIM_DICT(sLocal_99);
						STREAMING::REMOVE_ANIM_DICT(sLocal_122);
						__LIB_22__::func_614(&Local_171);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0f);
						}
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("prologue_ending_fog", 4f);
						RECORDING::REPLAY_START_EVENT(3);
						iLocal_40 = 0;
						func_463();
					}
				}
				break;
			case 3:
				if (!iLocal_519)
				{
					iLocal_518 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");
					iLocal_519 = 1;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_518))
				{
					switch (iLocal_40)
					{
						case 0:
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((59.25f * 1000f)))
							{
								func_436("presents", 0.5f, 0.5f, 70f, 125f, "left");
								func_435("presents", "ROCKSTAR GAMES", "$font2", "HUD_COLOUR_WHITE" /* GXT: White */, 1);
								func_435("presents", "presents", "$font5", "HUD_COLOUR_FREEMODE", 1);
								func_434("presents", 0.166f);
								iLocal_40++;
							}
							break;
						case 1:
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((62.5f * 1000f)))
							{
								func_433("presents", 0.166f);
								iLocal_40++;
							}
							break;
						case 2:
							GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((70f * 1000f)))
							{
								func_436("production", 0.5f, 0.5f, 0f, 190f, "right");
								func_435("production", "a", "$font5", "HUD_COLOUR_MICHAEL", 1);
								func_435("production", "ROCKSTAR NORTH", "$font2", "HUD_COLOUR_WHITE" /* GXT: White */, 1);
								func_435("production", "production", "$font5", "HUD_COLOUR_MICHAEL", 1);
								func_434("production", 0.166f);
								iLocal_40++;
							}
							break;
						case 3:
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((73.56667f * 1000f)))
							{
								func_433("production", 0.166f);
								iLocal_40++;
							}
							break;
					}
					if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_IN())
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(8);
					}
					HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
					HUD::SET_WIDESCREEN_FORMAT(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_518, 255, 255, 255, 255, 0);
					iLocal_520 = 1;
				}
				if (!func_745(298))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5f * 1000f)))
					{
						__LIB_11__::func_100(&(iLocal_173[16]));
						__LIB_11__::func_100(&(iLocal_173[17]));
						__LIB_11__::func_100(&(iLocal_173[18]));
						__LIB_5__::func_674(&iLocal_164);
						__LIB_11__::func_108(&(iLocal_211[4]));
						__LIB_11__::func_108(&(iLocal_211[0]));
						func_744(298, 1);
					}
				}
				if (!func_745(280))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((9.6f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						STREAMING::REMOVE_IPL("prologue01z");
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("BLIZZARD");
						func_744(280, 1);
					}
				}
				if (!func_745(277))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((23.6f * 1000f)))
					{
						func_796(31);
						func_744(277, 1);
					}
				}
				if (!func_745(278))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((38.053f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						func_744(278, 1);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
						{
							GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0f);
						}
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("NEUTRAL");
						MISC::LOAD_CLOUD_HAT("RAIN", 0f);
						iVar0 = 0;
						while (iVar0 < iLocal_173)
						{
							__LIB_11__::func_100(&(iLocal_173[iVar0]));
							iVar0++;
						}
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((38.053f * 1000f)))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 3254.4f, -4574.3f, 116.3f, 2f, 2f, 2f, false, true, 0))
					{
						__LIB_30__::func_217(iLocal_160, 3254.4f, -4574.3f, 116.3f, 0f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_160, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (iLocal_519)
					{
						func_432();
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_518);
						iLocal_519 = 0;
						iLocal_520 = 0;
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
					{
						GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0f);
					}
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_160, false);
					__LIB_11__::func_108(&(iLocal_197[1]));
					__LIB_5__::func_674(&iLocal_164);
					__LIB_5__::func_674(&(uLocal_260[0]));
					iVar0 = 0;
					while (iVar0 < iLocal_173)
					{
						__LIB_11__::func_100(&(iLocal_173[iVar0]));
						iVar0++;
					}
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_30__::func_731();
				}
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[16], false))
		{
			if (!func_745(21))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[16]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[16]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[16]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[16], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[0]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[0], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[0], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[0], 3, true);
						func_744(21, 1);
					}
				}
			}
			if (!func_745(22))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[16]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[16]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(27, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[16]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[16], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[1]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[1], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[1], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[1], 3, true);
						func_744(22, 1);
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[17], false))
		{
			if (!func_745(23))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[17]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[17]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[17]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[17], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[2]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[2], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[2], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[2], 3, true);
						func_744(23, 1);
					}
				}
			}
			if (!func_745(24))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[17]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[17]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(28, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[17]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[17], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[3]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[3], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[3], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[3], 3, true);
						func_744(24, 1);
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[18], false))
		{
			if (!func_745(25))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[18]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[18]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[18]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[18], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[4]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[4], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[4], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[4], 3, true);
						func_744(25, 1);
					}
				}
			}
			if (!func_745(26))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[18]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[18]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(29, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[18]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[18], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[5]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[5], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[5], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[5], 3, true);
						func_744(26, 1);
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[19], false))
		{
			if (!func_745(27))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[19]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[19]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(32, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[19]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[19], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[9]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[9], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[9], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[9], 3, true);
						func_744(27, 1);
					}
				}
			}
			if (!func_745(28))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[19]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[19]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(32, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[19]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[19], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(32, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[10]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[10], 1000f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[10], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[10], 3, true);
						func_744(28, 1);
					}
				}
			}
		}
		if (iLocal_29 > 1 && iLocal_29 < 3)
		{
			if (iLocal_33 < 7)
			{
				iLocal_33++;
			}
			else
			{
				iLocal_33 = 0;
			}
			iVar0 = iLocal_33;
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar0]) && PED::IS_PED_INJURED(iLocal_168[iVar0])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar0]))
			{
				if (iLocal_38[iVar0] == 0)
				{
					iLocal_38[iVar0] = MISC::GET_GAME_TIMER() + 2000;
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_168[iVar0]));
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_38[iVar0])
				{
					func_457(iVar0);
					if (iVar0 == 0)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3504.7551f, -4676.247f, 113.1829f, 271.0395f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3532.4004f, -4676.85f, 113.2428f, 10f, false, false);
					}
					else if (iVar0 == 1)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3481.3945f, -4661.1577f, 115.0043f, 253.3929f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3533.6455f, -4674.185f, 113.2056f, 10f, false, false);
					}
					else if (iVar0 == 2)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3500.8f, -4651.9f, 115.4f, 229.4754f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3530.3618f, -4667.201f, 113.208f, 10f, false, false);
					}
					else if (iVar0 == 3)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3547.185f, -4643.0996f, 113.0261f, 172.3108f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3544.0862f, -4660.0444f, 113.3841f, 10f, false, false);
					}
					else if (iVar0 == 4)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3548.8083f, -4634.831f, 113.621f, 180.2456f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3546.593f, -4660.562f, 113.1514f, 10f, false, false);
					}
					else if (iVar0 == 5)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3512.2898f, -4674.848f, 113.1897f, 251.4869f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3536.6877f, -4683.6567f, 113.4076f, 2f, false, false);
					}
					else if (iVar0 == 6)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3507.311f, -4670.993f, 113.203f, 250.4445f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3537.1406f, -4688.0933f, 113.5309f, 2f, false, false);
					}
					else if (iVar0 == 7)
					{
						__LIB_30__::func_217(iLocal_168[iVar0], 3559.7903f, -4634.553f, 113.5299f, 168.8337f, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0], 3551.6704f, -4660.004f, 113.1956f, 10f, false, false);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[iVar0], 37, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[iVar0], 500f, 0);
					if (iVar0 == 0 || iVar0 == 3)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0], iLocal_225, -1, true, true);
					}
					if (iVar0 == 1)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0], iLocal_227, -1, true, true);
					}
					PED::SET_PED_ACCURACY(iLocal_168[iVar0], __LIB_0__::func_310((1 + iLocal_49), 0, 100));
					iLocal_49++;
					iLocal_38[iVar0] = 0;
				}
			}
		}
		if ((((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75()) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && iLocal_29 < 3)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_32)
			{
				if (!func_745(118))
				{
					func_428(118, "PRO_COPFARM", 7500, 1);
					func_413(198, "PRO_Rage", "PRO_Rage_1", 7, 1, 1, 0);
				}
				else if (!func_745(199))
				{
					func_413(199, "PRO_Rage", "PRO_Rage_2", 7, 1, 0, 0);
				}
				else if (!func_745(200))
				{
					func_413(200, "PRO_Rage", "PRO_Rage_3", 7, 1, 0, 0);
				}
				else if (!func_745(201))
				{
					func_413(201, "PRO_Rage", "PRO_Rage_4", 7, 1, 0, 0);
				}
				else if (!func_745(202))
				{
					func_413(202, "PRO_Rage", "PRO_Rage_5", 7, 1, 0, 0);
				}
				else if (!func_745(203))
				{
					func_413(203, "PRO_Rage", "PRO_Rage_6", 7, 1, 0, 0);
				}
				else if (!func_745(204))
				{
					func_413(204, "PRO_Rage", "PRO_Rage_7", 7, 1, 0, 0);
				}
				else if (!func_745(205))
				{
					func_413(205, "PRO_Rage", "PRO_Rage_8", 7, 1, 0, 0);
				}
				iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000));
			}
		}
		PED::SET_PED_RESET_FLAG(iLocal_160, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (func_412())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
		}
		RECORDING::REPLAY_STOP_EVENT();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_441(0, 0);
		}
		if (iLocal_519)
		{
			func_432();
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_518);
			iLocal_519 = 0;
			iLocal_520 = 0;
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0f);
		}
		iVar1 = 0;
		while (iVar1 < iLocal_197)
		{
			__LIB_11__::func_108(&(iLocal_197[iVar1]));
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < iLocal_220)
		{
			TASK::REMOVE_COVER_POINT(iLocal_220[iVar1]);
			iVar1++;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_160, false);
		if (Global_113386.f_9085 || __LIB_0__::func_2(0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_160, true);
		}
		iLocal_251++;
	}
}

int func_412()//Position - 0x6F527
{
	int iVar0;
	if (iLocal_56 == 1)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_55 = 0;
		iLocal_56 = 0;
		iLocal_29 = 0;
		iLocal_30 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_31)
		{
			iLocal_31[iVar0] = -1;
			iVar0++;
		}
		iLocal_32 = 0;
		return 1;
	}
	return 0;
}

void func_413(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6F56B
{
	if (!func_745(iParam0))
	{
		while (!__LIB_36__::func_30(&uLocal_318, cLocal_255, sParam1, sParam2, iParam3, iParam5, iParam6))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
			}
			func_441(0, 0);
		}
		func_744(iParam0, iParam4);
	}
}

void func_428(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x6FCE3
{
	if (!func_745(iParam0))
	{
		__LIB_0__::func_210(sParam1, iParam2, 1);
		func_744(iParam0, iParam3);
	}
}

void func_432()//Position - 0x6FD4F
{
	if (iLocal_520)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_518, "REMOVE_ALL");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_433(char* sParam0, float fParam1)//Position - 0x6FD6E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_518, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_434(char* sParam0, float fParam1)//Position - 0x6FDA0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_518, "SHOW_SINGLE_LINE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_435(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)//Position - 0x6FDD2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_518, "ADD_TEXT_TO_SINGLE_LINE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_436(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, char* sParam5)//Position - 0x6FE3D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_518, "SETUP_SINGLE_LINE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_441(int iParam0, bool bParam1)//Position - 0x6FF5C
{
	int iVar0;
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		if (iLocal_251 == 4)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		}
		if (bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		}
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		if ((iLocal_251 >= 6 && iLocal_251 <= 10) && iLocal_521 > 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_196))
			{
				if (!(CUTSCENE::HAS_THIS_CUTSCENE_LOADED("pro_mcs_7_concat") && CUTSCENE::IS_CUTSCENE_PLAYING()))
				{
					func_705();
				}
			}
		}
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (iLocal_251 <= 11)
		{
			if (!func_745(117))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			}
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Prologue", 0);
		func_747();
	}
}

void func_455(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7070B
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && MISC::GET_GAME_TIMER() > iLocal_36))
	{
		if (!func_745(iParam0))
		{
			__LIB_0__::func_151(sParam1, iParam3);
			func_744(iParam0, iParam2);
			iLocal_36 = (MISC::GET_GAME_TIMER() + iParam4);
		}
	}
}

void func_457(int iParam0)//Position - 0x7076B
{
	int iVar0;
	if (!__LIB_0__::func_78(Local_74[iParam0 /*3*/], Local_67, 0))
	{
		iVar0 = joaat("S_M_M_SnowCop_01");
		__LIB_30__::func_732(&(iLocal_168[iParam0]), iVar0, Local_74[iParam0 /*3*/], fLocal_75[iParam0], 1);
		func_459(&(iLocal_168[iParam0]));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[iParam0], true);
		__LIB_0__::func_477(iLocal_168[iParam0], 0);
	}
}

void func_459(var uParam0)//Position - 0x7086A
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_230);
		PED::SET_PED_AS_ENEMY(*uParam0, true);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 200, 0);
		PED::SET_PED_MAX_HEALTH(*uParam0, 200);
		PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
		PED::SET_PED_ACCURACY(*uParam0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, iLocal_224, -1, true, true);
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 6, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 188, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 249, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 272, true);
	}
}

void func_463()//Position - 0x70998
{
	SYSTEM::SETTIMERA(0);
	iLocal_29++;
}

void func_464(int iParam0)//Position - 0x709AB
{
	iLocal_253 = iParam0;
	func_716();
}

int func_474()//Position - 0x70D57
{
	if (iLocal_58 == 1)
	{
		iLocal_58 = 0;
		return 1;
	}
	return 0;
}

void func_477(int iParam0, bool bParam1, int iParam2)//Position - 0x70DCF
{
	PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iParam2);
	bLocal_508 = bParam1;
}

int func_537()//Position - 0x77A4D
{
	if (iLocal_55 == 0)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_55 = 1;
		return 1;
	}
	return 0;
}

void func_538()//Position - 0x77A6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_537())
	{
		__LIB_42__::func_876(5, "stageFinale", 0, 0, 0, 1);
		__LIB_0__::func_402(0, 456);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_163, 1);
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(3550.8804f, -4691.863f, 113.4f))
		{
			iLocal_220[0] = TASK::ADD_COVER_POINT(3550.82f, -4691.85f, 113.4f, 0f, 1, 0, 0, false);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 0, 0, 0);
		CUTSCENE::REQUEST_CUTSCENE("PRO_MCS_6", 4);
		if (func_474())
		{
			if (!PED::IS_PED_INJURED(iLocal_165))
			{
				__LIB_30__::func_217(iLocal_165, Local_71, 0f, 0);
				PED::EXPLODE_PED_HEAD(iLocal_165, joaat("WEAPON_SNIPERRIFLE"));
			}
			__LIB_0__::func_202(&uLocal_318, 5);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_162, iLocal_172, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_162, iLocal_172, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_163, iLocal_172, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_163, iLocal_172, 1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_164, iLocal_172, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_164, iLocal_172, 2);
			}
			__LIB_30__::func_217(iLocal_160, 3539.7244f, -4718.3975f, 111.8996f, 346.1237f, 1);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 0);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_164, 0);
		}
		if (MISC::GET_GAME_TIMER() > iLocal_43)
		{
			if (iLocal_244 != -1)
			{
				AUDIO::STOP_SOUND(iLocal_244);
				AUDIO::RELEASE_SOUND_ID(iLocal_244);
				iLocal_244 = -1;
			}
		}
		if (!func_745(262))
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((3.5f * 1000f)))
			{
				func_796(26);
				func_464(27);
				func_744(262, 1);
			}
		}
		if (!func_745(256))
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((26.2f * 1000f)))
			{
				func_796(27);
				func_744(256, 1);
			}
		}
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 2, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SNIPERRIFLE"), 31, 0);
		switch (iLocal_29)
		{
			case 0:
				if (__LIB_0__::func_90() && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SNIPERRIFLE")))
				{
					if (__LIB_20__::func_728() != 2)
					{
						__LIB_35__::func_983(&uLocal_260, 2);
						__LIB_42__::func_600(&uLocal_260, 1, 1, 1);
						func_799();
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_260[0]);
					}
					__LIB_0__::func_203(&uLocal_318, 1, iLocal_162, "MICHAEL", 0, 1);
					__LIB_0__::func_203(&uLocal_318, 2, iLocal_163, "TREVOR", 0, 1);
					func_6();
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_172, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_172, 1000f);
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_260[0], "Michael", 0, __LIB_19__::func_811(0), 3);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_160, "Michael", 0, __LIB_19__::func_811(0), 3);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_260[2], "Trevor", 0, __LIB_19__::func_811(2), 3);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_160, "Trevor", 0, __LIB_19__::func_811(0), 3);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_164, "Brad", 0, joaat("IG_Brad"), 3);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_172, "getaway_car", 0, 0, 0);
					iLocal_197[0] = __LIB_20__::func_765(iLocal_162, iLocal_226, 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[0], "Michaels_weapon", 0, 0, 0);
					iLocal_197[1] = __LIB_20__::func_765(iLocal_163, iLocal_226, 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[1], "Trevors_weapon", 0, 0, 0);
					iLocal_197[2] = __LIB_20__::func_765(iLocal_164, iLocal_227, 1, 0, 0, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[2], "Brads_Shotgun", 0, 0, 0);
					iLocal_197[3] = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_160, true) - Vector(10f, 0f, 0f), true, 1f, 0, 0, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_197[3], joaat("COMPONENT_SNIPERRIFLE_CLIP_01"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_197[3], joaat("COMPONENT_AT_SCOPE_LARGE"));
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[3], "Daves_Rifle", 0, 0, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[5]))
					{
						iLocal_211[5] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 3547.381f, -4695.846f, 112.9602f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_211[5], 3547.381f, -4695.846f, 112.9602f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_211[5], 0f, 0f, -57.96f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[5], true);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_211[5], "Trevors_Heist_Bag", 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_172, 2, 0, 0f);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					func_441(0, 0);
					RECORDING::REPLAY_START_EVENT(4);
					if (!__LIB_0__::func_2(0))
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
					}
					iLocal_57 = 0;
					MISC::CLEAR_AREA(3549.7505f, -4660.526f, 113.5495f, 1000f, true, false, false, false);
					STREAMING::REMOVE_IPL("DES_ProTree_start_lod");
					CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					func_463();
				}
				break;
			case 1:
				if (!func_745(271))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2.70242f * 1000f)))
					{
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 256);
						func_744(271, 1);
					}
				}
				if (!func_745(272))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((3.946786f * 1000f)))
					{
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 256);
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_162, 1, 0.383f, 0.5f, 320.966f, 1f, 1, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_162, 1, 0.401f, 0.461f, 322.404f, 1f, 3, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_162, 1, 0.455f, 0.772f, 305.206f, 1f, 3, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_162, 1, 0.515f, 0.467f, 316.088f, 1f, 4, 0f, "BulletSmall");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_163, 1, 0.533f, 0.629f, 306.584f, 1f, 3, 0f, "ShotgunSmall");
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_163, 1, 0.479f, 0.467f, 318.127f, 1f, 6, 0f, "ShotgunSmall");
						func_744(272, 1);
					}
				}
				if (!func_745(273))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5.333333f * 1000f)))
					{
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_216))
							{
								iLocal_216 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_pro_car_steam", 3530.8f, -4717.9f, 113.1f, -3.3f, 0f, -54.3f, 1f, false, false, false, false);
								func_744(273, 1);
							}
						}
					}
				}
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("CS_Brad"));
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() < 45701)
					{
						PED::SET_ENABLE_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), true);
						PED::SET_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0.6f);
					}
					else
					{
						PED::SET_ENABLE_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), true);
						PED::SET_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0.8f);
						PED::SET_PED_ENVEFF_CPV_ADD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0.15f);
					}
				}
				if (!func_745(6))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((16.133335f * 1000f)))
					{
						iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("CS_Brad"));
						if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.479f, 0.467f, 318.127f, 1f, 5, 0f, "BulletSmall");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.521f, 0.467f, 315.71f, 1f, 6, 0f, "ShotgunSmall");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.575f, 0.617f, 304.56f, 1f, 4, 0f, "ShotgunLarge");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 1, 0.305f, 0.76f, 312.434f, 0f, 1, 0f, "ShotgunSmallMonolithic");
							func_744(6, 1);
						}
					}
				}
				if (!func_745(8))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((35.86667f * 1000f)))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("CS_Brad"));
						if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 0, 0.898f, 0.739f, 277.828f, 1f, 1, 0f, "BulletLarge");
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 0, 0.369f, 0.756f, 309.838f, 1f, 4, 0f, "BulletSmall");
							func_744(8, 1);
						}
					}
				}
				if (!func_745(254))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((6.567667f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						STREAMING::REMOVE_IPL("prologue04_cover");
						func_744(254, 1);
					}
				}
				if (!func_745(275))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((35.86667f * 1000f)))
					{
						iLocal_521 = (iLocal_521 - 84000);
						Global_100441.f_12[0] = iLocal_521;
						func_744(275, 1);
					}
				}
				if (!func_745(61))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((45.166668f * 1000f)))
					{
						iLocal_521 = 0;
						Global_100441.f_12[0] = iLocal_521;
						func_744(61, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Brad", 0))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_164, false);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_164, sLocal_122, "lying_dead_brad", 3550.345f, -4691.505f, 114.368f, Local_67, 1000f, -1000f, -1, 792585, 0f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[4]))
					{
						iLocal_211[4] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3545.981f, -4692.626f, 112.8602f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_211[4], 3545.981f, -4692.626f, 112.8602f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_211[4], -103.32f, 0f, -115.2f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[4], true);
					}
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_164, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_164, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (!func_745(62))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_162, sLocal_122, "lying_dead_player0", 3))
						{
							iLocal_158 = PED::CREATE_SYNCHRONIZED_SCENE(3550.345f, -4691.505f, 114.368f, Local_67, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_162, iLocal_158, sLocal_122, "lying_dead_player0", 1000f, -1000f, 4, 8191, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_158, true);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_162, false, false);
							func_744(62, 1);
						}
					}
					AUDIO::STOP_PED_SPEAKING(iLocal_162, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[3]))
					{
						iLocal_211[3] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 3547.381f, -4695.846f, 112.9602f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_211[3], 3547.381f, -4695.846f, 112.9602f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_211[3], 0f, 0f, -57.96f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[3], true);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_162, iLocal_226, false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_162, iLocal_226, 500, true, true);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_162, iLocal_226, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					__LIB_30__::func_217(iLocal_163, 3550.82f, -4691.85f, 113.4f, 90f, 0);
					PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_163, 3550.82f, -4691.85f, 113.4f, -1, false, 0f, true, true, iLocal_220[0], false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_163, false, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_163, iLocal_226, false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, iLocal_226, 500, true, true);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_163, iLocal_226, true);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(-37.5f);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(-5f);
						func_744(309, 1);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((29.6f - ENTITY::GET_ENTITY_HEADING(iLocal_163)));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
					}
				}
				if (func_745(309))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-37.5f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_Heist_Bag", 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[5], true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_197[0], true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[1], iLocal_163);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Brads_Shotgun", 0))
				{
					ENTITY::SET_ENTITY_ROTATION(iLocal_197[2], 90f, 0f, 0f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_197[2], true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Daves_Rifle", 0))
				{
					__LIB_11__::func_108(&(iLocal_197[3]));
				}
				if (!func_745(20))
				{
					if (func_739(14, joaat("policeold2")))
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((55.76667f * 1000f)))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[16]))
								{
									__LIB_30__::func_733(&(iLocal_173[16]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(27, 0f, sLocal_98)), -1, 1097859072);
									VEHICLE::SET_VEHICLE_SIREN(iLocal_173[16], true);
									AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[16], true);
									func_457(0);
									func_457(1);
									PED::SET_PED_INTO_VEHICLE(iLocal_168[0], iLocal_173[16], -1);
									PED::SET_PED_INTO_VEHICLE(iLocal_168[1], iLocal_173[16], 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[16], 27, sLocal_98, true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[16], 500f);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[17]))
								{
									__LIB_30__::func_733(&(iLocal_173[17]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(28, 0f, sLocal_98)), -1, 1097859072);
									VEHICLE::SET_VEHICLE_SIREN(iLocal_173[17], true);
									AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[17], true);
									func_457(2);
									func_457(3);
									PED::SET_PED_INTO_VEHICLE(iLocal_168[2], iLocal_173[17], -1);
									PED::SET_PED_INTO_VEHICLE(iLocal_168[3], iLocal_173[17], 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[17], 28, sLocal_98, true);
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_173[17], 0.75f);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[18]))
								{
									__LIB_30__::func_733(&(iLocal_173[18]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(29, 0f, sLocal_98)), -1, 1097859072);
									VEHICLE::SET_VEHICLE_SIREN(iLocal_173[18], true);
									AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[18], true);
									func_457(4);
									func_457(5);
									PED::SET_PED_INTO_VEHICLE(iLocal_168[4], iLocal_173[18], -1);
									PED::SET_PED_INTO_VEHICLE(iLocal_168[5], iLocal_173[18], 0);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[18], 29, sLocal_98, true);
								}
								MISC::SET_FAKE_WANTED_LEVEL(5);
								func_744(20, 1);
							}
						}
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_60 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_60)
					{
						while (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_CARBINERIFLE")))
						{
							func_441(0, 0);
						}
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					RECORDING::REPLAY_STOP_EVENT();
					iLocal_60 = 0;
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					__LIB_30__::func_731();
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				break;
			}
	}
	if (func_412())
	{
		CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_441(0, 0);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_216))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_216, false);
		}
		if (iLocal_243 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_243);
			AUDIO::RELEASE_SOUND_ID(iLocal_243);
			iLocal_243 = -1;
		}
		if (iLocal_244 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_244);
			AUDIO::RELEASE_SOUND_ID(iLocal_244);
			iLocal_244 = -1;
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
		__LIB_11__::func_108(&(iLocal_197[3]));
		__LIB_11__::func_108(&(iLocal_197[1]));
		__LIB_10__::func_7(&iLocal_180);
		__LIB_10__::func_7(&iLocal_182);
		__LIB_10__::func_7(&iLocal_184);
		iLocal_251++;
	}
}

void func_540()//Position - 0x78AEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (func_537())
	{
		__LIB_42__::func_876(4, "stageGetAway", 0, 0, 0, 1);
		__LIB_0__::func_403(456, 0);
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_20__::func_728() != 0)
		{
			__LIB_35__::func_983(&uLocal_260, 0);
			__LIB_42__::func_600(&uLocal_260, 1, 0, 0);
			func_799();
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[2], iLocal_229);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_163, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 0, 0, 0);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_162, "mood_angry_1", 0);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_164, "Mood_Angry_1", 0);
		__LIB_0__::func_203(&uLocal_318, 1, iLocal_160, "MICHAEL", 0, 1);
		__LIB_0__::func_203(&uLocal_318, 2, uLocal_260[2], "TREVOR", 0, 1);
		iLocal_57 = 1;
		MISC::SET_FAKE_WANTED_LEVEL(0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_172, false);
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
		__LIB_30__::func_733(&(iLocal_173[11]), joaat("policeold2"), 3497.637f, -4871.3413f, 110.6404f, 262.8277f, -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[12]), joaat("policeold2"), 3497.4355f, -4864.6685f, 110.7156f, 226.5504f, -1, 1097859072);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeold1"));
		iVar0 = 0;
		while (iVar0 < iLocal_173)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_173[iVar0], 0, false, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_173[iVar0], 1, false, false);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_173[iVar0], true);
				AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[iVar0], true);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_173[iVar0], true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[iVar0], false);
			}
			iVar0++;
		}
		func_441(0, 0);
		iLocal_209[0] = OBJECT::CREATE_OBJECT(iLocal_250, 3498.559f, -4874.11f, 110.9715f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_209[0], 0f, -13.999998f, -95.189995f, 2, true);
		func_441(0, 0);
		iLocal_209[1] = OBJECT::CREATE_OBJECT(iLocal_250, 3498.9f, -4861.6f, 110.9f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_209[1], 0f, -12.999997f, 69.42f, 2, true);
		func_441(0, 0);
		iLocal_209[2] = OBJECT::CREATE_OBJECT(iLocal_250, 3500.0007f, -4869.24f, 110.770584f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_209[2], 0f, 0f, 68.18196f, 2, true);
		func_441(0, 0);
		iLocal_209[3] = OBJECT::CREATE_OBJECT(iLocal_250, 3500.2231f, -4866.932f, 110.77084f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_209[3], 0f, 0f, 100.2676f, 2, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_250);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_457(iVar0 + 18);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[iVar0 + 18], Local_74[iVar0 + 18 /*3*/], 10f, false, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[iVar0 + 18], 5000f, 0);
			if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 4)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0 + 18], iLocal_225, -1, true, true);
			}
			if (iVar0 == 2 || iVar0 == 5)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0 + 18], iLocal_227, -1, true, true);
			}
			func_441(0, 0);
			iVar0++;
		}
		func_6();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
		func_796(23);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_163, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_160, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_161, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 81, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 81, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 29, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 29, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 29, false);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(3477.8196f, -4862.903f, 109.78864f, 3504.164f, -4869.103f, 120.770584f, 16f, false, false, true);
		iLocal_37[0] = 0;
		iLocal_37[1] = 0;
		if (func_474())
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_172))
			{
				if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_172) == VEHICLE::GET_VEHICLE_RECORDING_ID(26, sLocal_98))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_172);
				}
			}
			func_744(238, 1);
			TASK::CLEAR_PED_TASKS(iLocal_162);
			TASK::CLEAR_PED_TASKS(iLocal_163);
			TASK::CLEAR_PED_TASKS(iLocal_164);
			__LIB_30__::func_734(iLocal_172);
			PED::SET_PED_INTO_VEHICLE(iLocal_162, iLocal_172, -1);
			PED::SET_PED_INTO_VEHICLE(iLocal_163, iLocal_172, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_164, iLocal_172, 2);
			__LIB_11__::func_102(iLocal_172, 4339.5576f, -5080.9526f, 110.0518f, 80.3059f);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 0);
			VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_162, iLocal_224, 350, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, iLocal_224, 350, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, joaat("WEAPON_MICROSMG"), 350, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_164, iLocal_224, -1, false, true);
			func_441(500, 0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_172, true, true, false);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_172, 30f);
			CAM::STOP_CAM_SHAKING(iLocal_191, true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(6, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((4400f - 2500f), (-5100f - 1500f), (4400f + 2500f), (-5100f + 1500f));
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if (!func_745(156))
			{
				func_565(156, "PRO_Where", 7, 1, 0, 0);
			}
			else
			{
				func_428(155, "PRO_GETAWAY", 3500, 1);
			}
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_164, 0);
		}
		if ((!__LIB_0__::func_405("PRO_GETAWAY", 0, 0) && func_745(156)) && !func_745(111))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_173[9]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_173[10])) || func_745(150)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_168[2]) && PED::IS_PED_INJURED(iLocal_168[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[4])) && PED::IS_PED_INJURED(iLocal_168[4])))
					{
						if (!func_745(136))
						{
							func_413(136, "PRO_Drive1", "PRO_Drive1_1", 7, 1, 0, 0);
						}
						else if (!func_745(137))
						{
							func_413(137, "PRO_Drive1", "PRO_Drive1_2", 7, 1, 0, 0);
						}
						else if (!func_745(138))
						{
							func_413(138, "PRO_Drive1", "PRO_Drive1_3", 7, 1, 0, 0);
						}
						else if (!func_745(139))
						{
							func_413(139, "PRO_Drive1", "PRO_Drive1_4", 7, 1, 0, 0);
						}
						else if (!func_745(140))
						{
							func_413(140, "PRO_Drive1", "PRO_Drive1_5", 7, 1, 0, 0);
						}
					}
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false) && !(PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_160) && PED::GET_VEHICLE_PED_IS_USING(iLocal_160) == iLocal_172))
		{
			iLocal_30 = 2;
			if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_32)
				{
					if (iLocal_31[iLocal_30] == -1)
					{
						iLocal_31[iLocal_30] = 5;
					}
					else if (iLocal_31[iLocal_30] > 0)
					{
						if (iLocal_31[iLocal_30] >= 4)
						{
							if (!func_745(12))
							{
								func_428(12, "CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 7500, 1);
							}
							else if (!func_745(11))
							{
								func_428(11, "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
							}
							func_565(194, "PRO_LeftCar", 7, 0, 1, 0);
						}
						else
						{
							func_565(194, "PRO_LeftCar", 7, 0, 0, 0);
						}
						iLocal_31[iLocal_30] = (iLocal_31[iLocal_30] - 1);
					}
					iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_39)
			{
				iLocal_252 = 14;
				func_727();
			}
		}
		else
		{
			__LIB_0__::func_444("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */);
			__LIB_0__::func_444("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */);
			iLocal_39 = MISC::GET_GAME_TIMER() + 10000;
		}
		if (iLocal_160 == iLocal_162 || ENTITY::DOES_ENTITY_EXIST(uLocal_176[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
			{
				if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
					{
						if (!func_745(79))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
							func_455(79, "PROHLP_CAR2", 1, -1, 2000);
							SYSTEM::SETTIMERB(0);
						}
						else if (!func_745(81))
						{
							if (SYSTEM::TIMERB() > 10000 || (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) && SYSTEM::TIMERB() > 1000))
							{
								func_455(81, "PROHLP_CAR4", 1, -1, 2000);
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (!func_745(80))
						{
							if (SYSTEM::TIMERB() > 10000 || (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/) && SYSTEM::TIMERB() > 1000))
							{
								func_455(80, "PROHLP_CAR3", 1, -1, 2000);
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (!func_745(86))
						{
							if (SYSTEM::TIMERB() > 10000 || (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) && SYSTEM::TIMERB() > 1000))
							{
								func_455(86, "PROHLP_DEST1", 1, -1, 2000);
								if (HUD::DOES_BLIP_EXIST(iLocal_186))
								{
									func_562(iLocal_186, 5000);
								}
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (!func_745(87))
						{
							if (SYSTEM::TIMERB() > 10000)
							{
								HUD::SET_GPS_FLASHES(true);
								func_455(87, "PROHLP_DEST2", 1, -1, 2000);
								SYSTEM::SETTIMERB(0);
							}
						}
						else if (SYSTEM::TIMERB() > 10000)
						{
							HUD::SET_GPS_FLASHES(false);
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			else
			{
				__LIB_30__::func_214(1);
			}
		}
		if (iLocal_160 == iLocal_163)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((4400f - 2500f), (-5100f - 1500f), (4400f + 2500f), (-5100f + 1500f)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_162, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, true);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_162, iLocal_172, 3546.0022f, -4670.4585f, 113.2054f, 4, 40f, 786599, -1f, -1f, true);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_162, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, true);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_162, iLocal_172, 15f, 786599);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 4092.9468f, -5062.042f, 107.4313f, 300f, 300f, 20f, false, true, 0) && !ENTITY::DOES_ENTITY_EXIST(uLocal_176[0]))
		{
			if (func_739(5, joaat("emperor3")) && func_739(1, joaat("A_M_M_Hillbilly_01")))
			{
				if (PED::CAN_CREATE_RANDOM_DRIVER())
				{
					__LIB_30__::func_733(&(uLocal_176[0]), joaat("emperor3"), 4092.9468f, -5062.042f, 107.4313f, 265.1335f, -1, 1097859072);
					iLocal_169[0] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_176[0], true);
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_169[0], uLocal_176[0], 15f, 786599);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_169[0], 17, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_169[0], 131072, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor3"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_01"));
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 3675.6301f, -4915.411f, 110.7071f, 300f, 300f, 20f, false, true, 0) && !ENTITY::DOES_ENTITY_EXIST(uLocal_176[1]))
		{
			if (func_739(26, joaat("tractor3")) && func_739(2, joaat("A_M_M_Hillbilly_02")))
			{
				if (PED::CAN_CREATE_RANDOM_DRIVER())
				{
					__LIB_30__::func_733(&(uLocal_176[1]), joaat("tractor3"), 3676.4517f, -4928.2305f, 110.6588f, 185.1477f, -1, 1097859072);
					iLocal_169[1] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_176[1], true);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_169[1], uLocal_176[1], 5415.8516f, -5128.4233f, 77.163f, 8f, 0, joaat("tractor3"), 786599, 5f, 5f);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_169[1], 17, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_169[1], 131072, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tractor3"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
				}
			}
		}
		if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 3670.4436f, -4940.1943f, 110.6677f, 400f, 400f, 20f, false, true, 0) && !ENTITY::DOES_ENTITY_EXIST(iLocal_173[9])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_173[10]))
		{
			__LIB_30__::func_733(&(iLocal_173[9]), joaat("policeold2"), 3670.4436f, -4940.1943f, 110.6677f, 243.7315f, -1, 1097859072);
			__LIB_30__::func_733(&(iLocal_173[10]), joaat("policeold2"), 3773.0398f, -4986.8f, 110.339f, 247.815f, -1, 1097859072);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[9], false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[10], false);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_173[9], true);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[9], true);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_173[10], true);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[10], true);
			func_457(2);
			func_457(3);
			func_457(4);
			func_457(5);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[2], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[2], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[3], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[3], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[4], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[4], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[5], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[5], 1, true);
			PED::SET_PED_ACCURACY(iLocal_168[2], 40);
			PED::SET_PED_ACCURACY(iLocal_168[3], 40);
			PED::SET_PED_ACCURACY(iLocal_168[4], 40);
			PED::SET_PED_ACCURACY(iLocal_168[5], 40);
			PED::SET_PED_INTO_VEHICLE(iLocal_168[2], iLocal_173[9], -1);
			PED::SET_PED_INTO_VEHICLE(iLocal_168[3], iLocal_173[9], 0);
			PED::SET_PED_INTO_VEHICLE(iLocal_168[4], iLocal_173[10], -1);
			PED::SET_PED_INTO_VEHICLE(iLocal_168[5], iLocal_173[10], 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[2], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[3], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[4], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[5], true);
			VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_173[9], true);
			VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_173[10], true);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_168[4], iLocal_173[10], 5415.8516f, -5128.4233f, 77.163f, 14, 40f, 262275, 0.1f, 0.1f, true);
			TASK::TASK_VEHICLE_ESCORT(iLocal_168[2], iLocal_173[9], iLocal_173[10], -1, 40f, 262275, -1f, 20, 20f);
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[10]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_COORDS(iLocal_173[10], true), true) < 150f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_565(135, "PRO_Drive", 7, 1, 0, 0);
					}
					func_744(149, 1);
					func_796(24);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[2]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 3501.7795f, -4879.914f, 108.446884f, 3500.7783f, -4848.7686f, 117.26048f, 20f, false, true, 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_260[2], false);
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_260[2], true);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_164, 3501.7795f, -4879.914f, 108.446884f, 3500.7783f, -4848.7686f, 117.26048f, 20f, false, true, 0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_164, false);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_164, true);
		}
		if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_163, 3498.4185f, -4868.5903f, 109.773926f, 3471.5264f, -4867.0293f, 126.71127f, 20f, false, true, 0) && (!PED::IS_PED_INJURED(iLocal_168[18]) && PED::IS_PED_SHOOTING(iLocal_168[18]))) && (!PED::IS_PED_INJURED(iLocal_168[19]) && PED::IS_PED_SHOOTING(iLocal_168[19]))) && (!PED::IS_PED_INJURED(iLocal_168[20]) && PED::IS_PED_SHOOTING(iLocal_168[20]))) && (!PED::IS_PED_INJURED(iLocal_168[21]) && PED::IS_PED_SHOOTING(iLocal_168[21]))) && (!PED::IS_PED_INJURED(iLocal_168[22]) && PED::IS_PED_SHOOTING(iLocal_168[22])))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_163, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[9]) && ENTITY::DOES_ENTITY_EXIST(iLocal_173[10]))
		{
			if (func_745(149) && !__LIB_0__::func_75())
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_173[9]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_173[10]))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[2]) && !PED::IS_PED_INJURED(iLocal_168[4]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_168[2], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
							{
								func_744(150, 1);
							}
						}
					}
				}
			}
			if (((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_172, iLocal_173[9]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_172, iLocal_173[10])) || (PED::IS_PED_SHOOTING(iLocal_160) && ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_173[9]) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_173[10])) || (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_173[9], true), 20f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_173[10], true), 20f, true))))) || ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_172, ENTITY::GET_ENTITY_COORDS(iLocal_173[9], true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_173[9], 0f, 6f, 3f), 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_172, ENTITY::GET_ENTITY_COORDS(iLocal_173[9], true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_173[9], 0f, 6f, 3f), 3f, false, true, 0)) && ENTITY::GET_ENTITY_SPEED(iLocal_172) < 5f))
			{
				if (!PED::IS_PED_INJURED(iLocal_168[4]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_168[4], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_168[4]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[4], false);
						TASK::TASK_COMBAT_PED(iLocal_168[4], iLocal_160, 0, 16);
						if (!PED::IS_PED_INJURED(iLocal_168[5]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_168[5]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[5], false);
							TASK::TASK_COMBAT_PED(iLocal_168[5], iLocal_160, 0, 16);
						}
						if (!PED::IS_PED_INJURED(iLocal_168[2]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_168[2]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[2], false);
							TASK::TASK_COMBAT_PED(iLocal_168[2], iLocal_160, 0, 16);
							if (!PED::IS_PED_INJURED(iLocal_168[3]))
							{
								TASK::CLEAR_PED_TASKS(iLocal_168[3]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[3], false);
								TASK::TASK_COMBAT_PED(iLocal_168[3], iLocal_160, 0, 16);
							}
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_163, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, false);
						MISC::SET_FAKE_WANTED_LEVEL(5);
					}
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
		{
			if (!func_745(111))
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (func_745(140))
					{
						if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_173[9]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_173[10])) || func_745(150)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_168[2]) && PED::IS_PED_INJURED(iLocal_168[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[4])) && PED::IS_PED_INJURED(iLocal_168[4])))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), 3499.7742f, -4868.1226f, 110.77395f, true) > 400f)
							{
								if (!func_745(141))
								{
									func_413(141, "PRO_Drive2", "PRO_Drive2_1", 7, 1, 0, 0);
								}
								else if (!func_745(142))
								{
									func_413(142, "PRO_Drive2", "PRO_Drive2_2", 7, 1, 0, 0);
								}
								else if (!func_745(143))
								{
									func_413(143, "PRO_Drive2", "PRO_Drive2_3", 7, 1, 0, 0);
								}
								else if (!func_745(144))
								{
									func_413(144, "PRO_Drive2", "PRO_Drive2_4", 7, 1, 0, 0);
								}
								else if (!func_745(145))
								{
									func_413(145, "PRO_Drive2", "PRO_Drive2_5", 7, 1, 0, 0);
								}
								else if (!func_745(146))
								{
									func_413(146, "PRO_Drive2", "PRO_Drive2_6", 7, 1, 0, 0);
								}
								else if (!func_745(147))
								{
									func_413(147, "PRO_Drive2", "PRO_Drive2_7", 7, 1, 0, 0);
								}
								else if (!func_745(148))
								{
									func_413(148, "PRO_Drive2", "PRO_Drive2_8", 7, 1, 0, 0);
								}
							}
						}
					}
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3474.5203f, -4860.8745f, 109.789116f, 3731.3f, -4966.4f, 139.6237f, 200f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_172) > 15f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3474.5203f, -4860.8745f, 109.789116f, 3671.1f, -4937.4f, 139.6237f, 200f, false, true, 0)) && CAM::IS_SPHERE_VISIBLE(3498f, -4867.9f, 113f, 5f))
			{
				if (!func_745(242))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_163, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, false);
					func_464(26);
					func_796(25);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_ESCAPE"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_DRIVE_ESCAPE");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 3);
					func_744(242, 1);
				}
				if (!func_745(111))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_565(111, "PRO_Blockade", 7, 1, 0, 0);
					}
					else if (__LIB_0__::func_75())
					{
						__LIB_6__::func_833();
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), 3539.7244f, -4718.3975f, 111.8996f, true) < (100f * 5f))
		{
			CUTSCENE::REQUEST_CUTSCENE("PRO_MCS_6", 8);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), 3539.7244f, -4718.3975f, 111.8996f, true) > ((100f * 4f) + 120f))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3417.7546f, -4849.399f, 100.70746f, 3654.7893f, -4920.36f, 120.700195f, 200f, false, true, 0))
		{
			if (!func_745(265))
			{
				func_744(265, 1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3522.6643f, -4850.235f, 105.6712f, 3530.7559f, -4748.1387f, 121.42651f, 20f, false, true, 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_833();
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3501.274f, -4884.2314f, 109.66962f, 3509.9905f, -4840.174f, 116.0802f, 70f, false, true, 0))
		{
			MISC::SET_FAKE_WANTED_LEVEL(5);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 3501.274f, -4884.2314f, 109.66962f, 3509.9905f, -4840.174f, 116.0802f, 70f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_172) > 10f)
		{
			if ((!func_559(&(iLocal_168[18])) && !PED::IS_PED_RAGDOLL(iLocal_168[18])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_168[18], true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > 15f)
			{
				iVar1 = iLocal_168[18];
			}
			else if ((!func_559(&(iLocal_168[19])) && !PED::IS_PED_RAGDOLL(iLocal_168[19])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_168[19], true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > 15f)
			{
				iVar1 = iLocal_168[19];
			}
			else if ((!func_559(&(iLocal_168[20])) && !PED::IS_PED_RAGDOLL(iLocal_168[20])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_168[20], true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > 15f)
			{
				iVar1 = iLocal_168[20];
			}
			else if ((!func_559(&(iLocal_168[21])) && !PED::IS_PED_RAGDOLL(iLocal_168[21])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_168[21], true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > 15f)
			{
				iVar1 = iLocal_168[21];
			}
			else if ((!func_559(&(iLocal_168[22])) && !PED::IS_PED_RAGDOLL(iLocal_168[22])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_168[22], true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > 15f)
			{
				iVar1 = iLocal_168[22];
			}
			if (((!PED::IS_PED_INJURED(iVar1) && !PED::IS_PED_RAGDOLL(iVar1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > 15f) && PED::IS_PED_SHOOTING(iVar1))
			{
				func_558(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_172, 0.5f, 0f, 0f), iVar1, &(iLocal_37[0]), 0f, 0.6f, 0f, 60);
				func_556(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_172, 0.5f, 0f, 0f), iVar1, &(iLocal_37[1]), 0f, 0.6f, 0f, 60, -1065772646, -1082130432, -1069966950, 1081711002);
				if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iLocal_172, 2))
				{
					VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 2);
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
		{
			if (__LIB_0__::func_405("PRO_CAR2", 0, 0))
			{
				__LIB_0__::func_444("PRO_CAR2");
			}
			__LIB_10__::func_7(&iLocal_184);
			if (PED::IS_PED_IN_VEHICLE(iLocal_163, iLocal_172, false) && PED::IS_PED_IN_VEHICLE(iLocal_164, iLocal_172, false))
			{
				__LIB_10__::func_7(&iLocal_181);
				__LIB_10__::func_7(&iLocal_182);
				if (!func_745(265))
				{
					__LIB_26__::func_360(&iLocal_186, 3546.0022f, -4670.4585f, 113.2054f, 1);
				}
				else
				{
					__LIB_26__::func_360(&iLocal_186, 3546.0022f, -4670.4585f, 113.2054f, 1);
				}
			}
			else
			{
				__LIB_10__::func_7(&iLocal_186);
				if (!PED::IS_PED_IN_VEHICLE(iLocal_163, iLocal_172, false) && !PED::IS_PED_IN_VEHICLE(iLocal_164, iLocal_172, false))
				{
					func_428(221, "PRO_TEAM", 7500, 1);
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_163, iLocal_172, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_163))
				{
					if (!func_745(221))
					{
						func_428(107, "PRO_BUDDY", 7500, 1);
					}
					if (__LIB_20__::func_728() != 2)
					{
						__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_163, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_163, iLocal_172, -1, 1, 2f, 1, 0);
					}
				}
				else
				{
					__LIB_10__::func_7(&iLocal_181);
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_164, iLocal_172, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_164))
				{
					if (!func_745(221))
					{
						func_428(107, "PRO_BUDDY", 7500, 1);
					}
					__LIB_37__::func_503(&iLocal_182, &iLocal_164, 0);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_164, iLocal_172, -1, 2, 2f, 1, 0);
					}
				}
				else
				{
					__LIB_10__::func_7(&iLocal_182);
				}
			}
		}
		else
		{
			__LIB_10__::func_7(&iLocal_186);
			__LIB_32__::func_665(&iLocal_184, &iLocal_172, 0);
			func_428(113, "PRO_CAR2", 7500, 1);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_172, 3629.041f, -4750.029f, 109.96534f, 3435.5894f, -4728.4673f, 130.48978f, 175f, false, true, 0))
		{
			if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_162, iLocal_172) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_163, iLocal_172)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_164, iLocal_172))
			{
				if (__LIB_20__::func_728() == 0)
				{
					if (func_544(0f, 0, 1, 0))
					{
						__LIB_30__::func_731();
					}
				}
				else
				{
					__LIB_30__::func_731();
				}
			}
		}
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < Local_81.f_0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, Local_81[iVar2 /*3*/], Local_82[iVar2 /*3*/], fLocal_83[iVar2], false, true, 0))
			{
				iVar3 = 1;
			}
			iVar2++;
		}
		if (iVar3 == 0)
		{
			__LIB_0__::func_498(462);
			if (!__LIB_11__::func_869("PRO_OffRoute"))
			{
				iLocal_30 = 0;
				if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_32)
					{
						if (iLocal_31[iLocal_30] == -1)
						{
							iLocal_31[iLocal_30] = 6;
						}
						else if (iLocal_31[iLocal_30] > 0)
						{
							func_565(196, "PRO_OffRoute", 7, 0, 0, 0);
							iLocal_31[iLocal_30] = (iLocal_31[iLocal_30] - 1);
						}
						iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
					}
				}
			}
		}
		Var4 = { Local_80[0 /*3*/] };
		iVar2 = 0;
		while (iVar2 < Local_80.f_0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), Local_80[iVar2 /*3*/], true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), Var4, true))
			{
				Var4 = { Local_80[iVar2 /*3*/] };
				if (iVar2 > 2)
				{
					Local_80[(iVar2 - 3) /*3*/] = { Local_67 };
				}
			}
			iVar2++;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), Var4, true) > 30f && iVar3 == 0)
		{
			if (!__LIB_11__::func_869("PRO_WrongWay"))
			{
				iLocal_30 = 1;
				if (PED::IS_PED_IN_VEHICLE(iLocal_160, iLocal_172, false))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_32)
					{
						if (iLocal_31[iLocal_30] == -1)
						{
							iLocal_31[iLocal_30] = 5;
						}
						else if (iLocal_31[iLocal_30] > 0)
						{
							func_565(226, "PRO_WrongWay", 7, 0, 0, 0);
							iLocal_31[iLocal_30] = (iLocal_31[iLocal_30] - 1);
						}
						iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
					}
				}
			}
		}
		iVar5 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(iLocal_172);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_172) < 3f)
		{
			if ((iVar5 == -1937569590 || iVar5 == 1619704960) || iVar5 == -878560889)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_47)
				{
					iLocal_252 = 10;
					func_727();
				}
			}
		}
		else
		{
			iLocal_47 = MISC::GET_GAME_TIMER() + 10000;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), Var4, true) > 60f)
		{
			iLocal_252 = 9;
			func_727();
		}
		if (__LIB_0__::func_78(Local_44, Local_67, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_172, 3875.8813f, -5020.976f, 113.53164f, 10f, 25f, 8f, false, true, 0))
			{
				iLocal_43 = MISC::GET_GAME_TIMER() + 2000;
				Local_44 = { 3885.477f, -5082.061f, 110.29445f };
			}
		}
		else if (__LIB_0__::func_78(Local_44, 3885.477f, -5082.061f, 110.29445f, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_172, 3669.3044f, -4935.353f, 110.68387f, 10f, 25f, 8f, false, true, 0))
			{
				iLocal_43 = MISC::GET_GAME_TIMER() + 2000;
				Local_44 = { 3685.6064f, -4884.99f, 110.76416f };
			}
		}
		else if (__LIB_0__::func_78(Local_44, 3685.6064f, -4884.99f, 110.76416f, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_172, 3523.4111f, -4856.0513f, 110.64999f, 10f, 25f, 8f, false, true, 0))
			{
				iLocal_43 = MISC::GET_GAME_TIMER() + 2000;
				Local_44 = { 3549.0542f, -4828.0757f, 112.12215f };
			}
		}
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds", false, -1))
		{
			if (iLocal_243 == -1)
			{
				iLocal_243 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_243, "Train_Bell", 3875.8813f, -5020.976f, 113.53164f, "Prologue_Sounds", false, 0, false);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_43)
			{
				if (iLocal_244 != -1)
				{
					AUDIO::STOP_SOUND(iLocal_244);
					AUDIO::RELEASE_SOUND_ID(iLocal_244);
					iLocal_244 = -1;
				}
			}
			else if (!__LIB_0__::func_78(Local_44, Local_67, 0))
			{
				if (iLocal_244 == -1)
				{
					iLocal_244 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_244, "Train_Horn", Local_44, "Prologue_Sounds", false, 0, false);
				}
			}
		}
		iVar6 = MISC::GET_GAME_TIMER();
		if ((iVar6 % 8000) < 3000)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 2, false);
		}
		else if ((iVar6 % 8000) >= 4000 && (iVar6 % 8000) < 7000)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 2, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 2, true);
		}
		else if (((iVar6 % 8000) >= 3000 && (iVar6 % 8000) < 4000) || (iVar6 % 8000) >= 7000)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 2, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 2, false);
		}
	}
	if (func_412())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_ESCAPE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_ESCAPE");
		}
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_162);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_164);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_162, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_163, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_164, false);
		HUD::SET_GPS_FLASHES(false);
		__LIB_10__::func_7(&(uLocal_189[2]));
		__LIB_10__::func_7(&iLocal_184);
		__LIB_10__::func_7(&iLocal_186);
		__LIB_5__::func_674(&(iLocal_169[0]));
		__LIB_5__::func_674(&(iLocal_169[1]));
		__LIB_11__::func_100(&(uLocal_176[0]));
		__LIB_11__::func_100(&(uLocal_176[1]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tractor3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
		iVar7 = 0;
		while (iVar7 < iLocal_168)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar7]))
			{
				if (!PED::IS_PED_INJURED(iLocal_168[iVar7]))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_168[iVar7], true);
					AUDIO::STOP_PED_SPEAKING(iLocal_168[iVar7], true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_168[iVar7], 0, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_168[iVar7]));
			}
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < iLocal_173)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar7]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_173[iVar7]));
			}
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < iLocal_209)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_209[iVar7]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_209[iVar7]));
			}
			iVar7++;
		}
		__LIB_11__::func_108(&iLocal_200);
		MISC::SET_FAKE_WANTED_LEVEL(0);
		iLocal_251++;
	}
}

bool func_544(float fParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7AEA7
{
	if (__LIB_0__::func_398(1, 0, 1) == 1)
	{
		if (fParam0 != 0f)
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), fParam0, true, false, false, false);
		}
		if (!bParam3)
		{
			if (bParam2)
			{
				func_6();
			}
			else
			{
				HUD::CLEAR_PRINTS();
				__LIB_30__::func_214(1);
				__LIB_6__::func_833();
			}
		}
		else
		{
			HUD::CLEAR_PRINTS();
			if (bParam2)
			{
				__LIB_6__::func_771();
			}
			else
			{
				__LIB_6__::func_833();
			}
		}
		__LIB_20__::func_507();
		__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
		if (iParam1 == 1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_160, false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			}
		}
	}
	return __LIB_0__::func_398(1, 0, 1);
}

void func_556(struct<3> Param0, int iParam1, var uParam2, struct<3> Param3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8)//Position - 0x7B259
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam2) > iParam4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !PED::IS_PED_INJURED(iParam1))
		{
			if (__LIB_11__::func_815(iParam1, 0))
			{
				Var1 = { Param0 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam7, fParam8), MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam5, fParam6)) };
				Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Param3) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2), false, false);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var2, Var1, 1, false, joaat("WEAPON_ASSAULTRIFLE"), iParam1, true, true, -1f);
				*uParam2 = iVar0;
			}
		}
	}
}

void func_558(struct<3> Param0, int iParam1, var uParam2, struct<3> Param3, int iParam4)//Position - 0x7B6AE
{
	int iVar0;
	struct<3> Var1;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam2) > iParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Param3) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), false, false);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, Param0, 1, false, joaat("WEAPON_ASSAULTRIFLE"), iParam1, true, true, -1f);
			*uParam2 = iVar0;
		}
	}
}

int func_559(int iParam0)//Position - 0x7B710
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_562(int iParam0, int iParam1)//Position - 0x7B765
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Local_509.f_0)
	{
		if (Local_509[iVar0 /*2*/] == iParam0)
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_509.f_0)
		{
			if (iVar2 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_509[iVar0 /*2*/]))
				{
					Local_509[iVar0 /*2*/] = iParam0;
					Local_509[iVar0 /*2*/].f_1 = (MISC::GET_GAME_TIMER() + iParam1);
					HUD::SET_BLIP_FLASHES(Local_509[iVar0 /*2*/], true);
					iVar2 = 1;
				}
			}
			iVar0++;
		}
		if (iVar2 == 0)
		{
		}
	}
}

void func_565(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7B823
{
	if (!func_745(iParam0))
	{
		while (!__LIB_35__::func_984(&uLocal_318, cLocal_255, sParam1, iParam2, iParam4, iParam5, 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
			}
			func_441(0, 0);
		}
		func_744(iParam0, iParam3);
	}
}

void func_569()//Position - 0x7B98A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iLocal_29 > 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	}
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_57 = 1;
		__LIB_32__::func_665(&iLocal_184, &iLocal_172, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_161, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_161, false);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_161, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_164, false);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_164, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_160, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_161, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 3, false);
		if (__LIB_20__::func_728() == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("pro_mcs_5", 57, 8);
		}
		else if (__LIB_20__::func_728() == 2)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("pro_mcs_5", 62, 8);
		}
		Local_85[0 /*3*/] = { 5425.2314f, -5160.551f, 77.2905f };
		Local_85[1 /*3*/] = { 5431.374f, -5144.494f, 77.2632f };
		Local_85[2 /*3*/] = { 5428.26f, -5129.7495f, 77.0241f };
		if (CAM::DOES_CAM_EXIST(iLocal_191))
		{
			CAM::DESTROY_CAM(iLocal_191, false);
		}
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, 5423.205f, -5118.927f, 76.9971f, 38.6371f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_161);
			__LIB_30__::func_217(iLocal_161, 5421.7095f, -5116.1396f, 77.0704f, 192.0948f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_164);
			__LIB_30__::func_217(iLocal_164, 5422.533f, -5115.939f, 77.0794f, 192.0846f, 1);
			func_744(240, 1);
			if (iLocal_59 == 0)
			{
				__LIB_11__::func_102(iLocal_173[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_98), sLocal_98), 90f);
				__LIB_11__::func_102(iLocal_173[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_98), sLocal_98), 90f);
				__LIB_11__::func_102(iLocal_173[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_98), sLocal_98), 90f);
				__LIB_11__::func_102(iLocal_173[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_98), sLocal_98), 90f);
				__LIB_11__::func_102(iLocal_173[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_98), sLocal_98), 90f);
				__LIB_11__::func_102(iLocal_173[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(700, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_98), sLocal_98), 90f);
				__LIB_11__::func_102(iLocal_172, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(26, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(26, sLocal_98), sLocal_98), 105f);
				func_744(238, 1);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_172);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
			}
			else
			{
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 2, 5, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 2, 7, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 1, 1, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_164, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 2, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 6, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 9, 0, 0, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Getaway_driver", iLocal_165, 0);
					}
					func_441(0, 0);
				}
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 2, 5, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 2, 7, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_164, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Getaway_driver", iLocal_165, 0);
		}
		switch (iLocal_29)
		{
			case 0:
				if (iLocal_161 == uLocal_260[0])
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_161, iLocal_172, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_161))
					{
						if (!func_745(268))
						{
							TASK::CLEAR_PED_TASKS(iLocal_161);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85[0 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85[1 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) && !func_745(241))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85[2 /*3*/], 5447.4683f, -5130.345f, 78.35157f, 2f, true, 0.5f, 4f, false, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(5423.0547f, -5119.155f, 77.0883f, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5423.0547f, -5119.155f, 77.0883f, 2f, 40000, 0.25f, 0, 40000f);
							}
							TASK::TASK_ENTER_VEHICLE(0, iLocal_172, -1, 0, 2f, 1179713, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_161, iLocal_195);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							func_744(268, 1);
						}
					}
					else
					{
						__LIB_10__::func_7(&iLocal_180);
					}
				}
				else if (iLocal_161 == uLocal_260[2])
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_161, 5423.0547f, -5119.155f, 76.8883f, 2f, 2f, 3f, false, true, 0))
					{
						if (!func_745(269))
						{
							TASK::CLEAR_PED_TASKS(iLocal_161);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
							TASK::TASK_AIM_GUN_AT_COORD(0, Local_85[1 /*3*/], 1500, false, false);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85[0 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85[1 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) && !func_745(241))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_85[2 /*3*/], 5448.063f, -5123.2837f, 78.31491f, 2f, true, 0.5f, 4f, false, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(5423.0547f, -5119.155f, 77.0883f, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5423.0547f, -5119.155f, 77.0883f, 2f, 40000, 0.25f, 0, 40000f);
							}
							TASK::TASK_ENTER_VEHICLE(0, iLocal_172, -1, 1, 2f, 1179713, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_161, iLocal_195);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							func_744(269, 1);
						}
					}
					else
					{
						__LIB_10__::func_7(&iLocal_181);
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_164, iLocal_172, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_164))
				{
					if (!func_745(266))
					{
						TASK::CLEAR_PED_TASKS(iLocal_164);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_85[0 /*3*/], 2f, 40000, 0.25f, 0, 40000f);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(5435.0527f, -5140.256f, 77.1114f, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5435.0527f, -5140.256f, 77.1114f, 2f, 40000, 0.25f, 0, 40000f);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) > MISC::GET_DISTANCE_BETWEEN_COORDS(5427.95f, -5122.7476f, 77.0983f, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), true) && !func_745(241))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 5427.95f, -5122.7476f, 77.0983f, 5448.063f, -5123.2837f, 78.31491f, 2f, true, 0.5f, 4f, false, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						TASK::TASK_ENTER_VEHICLE(0, iLocal_172, -1, 2, 2f, 1310785, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_164, iLocal_195);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
						func_744(266, 1);
					}
				}
				else
				{
					__LIB_10__::func_7(&iLocal_182);
				}
				if ((func_745(268) || func_745(269)) || func_745(266))
				{
					if (func_745(39))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_161) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 7f)) || (PED::IS_PED_SHOOTING(iLocal_164) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 7f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_168[17]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[17], ENTITY::GET_ENTITY_HEALTH(iLocal_168[17]) + 100, true, 0);
							}
						}
					}
					if (func_745(40))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_161) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 5f)) || (PED::IS_PED_SHOOTING(iLocal_164) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 5f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_168[18]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[18], ENTITY::GET_ENTITY_HEALTH(iLocal_168[18]) + 100, true, 0);
							}
						}
					}
					if (func_745(41))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_161) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 4f)) || (PED::IS_PED_SHOOTING(iLocal_164) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 4f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_168[19]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[19], ENTITY::GET_ENTITY_HEALTH(iLocal_168[19]) + 100, true, 0);
							}
						}
					}
					if (func_745(42))
					{
						if ((PED::IS_PED_SHOOTING(iLocal_161) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 3f)) || (PED::IS_PED_SHOOTING(iLocal_164) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), Local_85[2 /*3*/], true) < ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_85[1 /*3*/], Local_85[2 /*3*/], true) / 10f) * 3f)))
						{
							if (!PED::IS_PED_INJURED(iLocal_168[20]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[20], ENTITY::GET_ENTITY_HEALTH(iLocal_168[20]) + 100, true, 0);
							}
						}
					}
					if (!func_745(241))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_168[17]) && PED::IS_PED_INJURED(iLocal_168[17])) && (ENTITY::DOES_ENTITY_EXIST(iLocal_168[18]) && PED::IS_PED_INJURED(iLocal_168[18]))) && (ENTITY::DOES_ENTITY_EXIST(iLocal_168[19]) && PED::IS_PED_INJURED(iLocal_168[19])))
						{
							func_744(268, 0);
							func_744(269, 0);
							func_744(266, 0);
							func_744(241, 1);
						}
					}
				}
				if (!func_745(238))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_161, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_164, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, false, true, 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_172, 5425.9536f, -5116.231f, 76.60962f, 5434.421f, -5113.6416f, 79.724915f, 5f, false, true, 0) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_172))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_172, 26, sLocal_98, true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_172, 500f);
						}
						func_744(238, 1);
					}
					if (!func_745(159))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							__LIB_6__::func_834(iLocal_164, "GET_OUT_OF_HERE", 10);
							func_744(159, 1);
						}
					}
				}
				if (!func_745(267))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5430.2236f, -5157.384f, 86.30035f, 5437.865f, -5089.6914f, 76.0554f, 150f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_161, 5430.2236f, -5157.384f, 86.30035f, 5437.865f, -5089.6914f, 76.0554f, 150f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_164, 5430.2236f, -5157.384f, 86.30035f, 5437.865f, -5089.6914f, 76.0554f, 150f, false, true, 0))
					{
						__LIB_30__::func_733(&(iLocal_173[7]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_98)), -1, 1097859072);
						__LIB_30__::func_733(&(iLocal_173[8]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_98)), -1, 1097859072);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[7], false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[8], false);
						func_457(17);
						func_457(18);
						func_457(19);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[17]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_168[17], iLocal_173[7], -1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[18]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_168[18], iLocal_173[7], 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[19]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_168[19], iLocal_173[8], -1);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[20]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_168[20], iLocal_173[8], 0);
						}
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(701, sLocal_98))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[7], 701, sLocal_98, true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[7], 3000f);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_173[7], true);
						}
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(702, sLocal_98))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[8], 702, sLocal_98, true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[8], 3000f);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_173[8], true);
						}
						if (func_745(240))
						{
							VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[7]);
							VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[8]);
							if (!PED::IS_PED_INJURED(iLocal_168[17]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[17], ENTITY::GET_ENTITY_HEALTH(iLocal_168[17]) + 100, true, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_168[18]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[18], ENTITY::GET_ENTITY_HEALTH(iLocal_168[18]) + 100, true, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_168[19]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[19], ENTITY::GET_ENTITY_HEALTH(iLocal_168[19]) + 100, true, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_168[20]))
							{
								PED::APPLY_DAMAGE_TO_PED(iLocal_168[20], ENTITY::GET_ENTITY_HEALTH(iLocal_168[20]) + 100, true, 0);
							}
						}
						func_744(267, 1);
					}
				}
				else
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_745(251))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
							{
								VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[7], true);
								func_744(251, 1);
							}
						}
						if (!func_745(39))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_168[17]))
								{
									VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[7], true);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[17], 100f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[17], 1, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[17], 3, true);
									func_744(39, 1);
								}
							}
						}
						if (!func_745(40))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[7]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(701, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[7]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[7], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(701, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_168[18]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[18], false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[18], 1000f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[18], 1, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[18], 3, true);
									func_744(40, 1);
								}
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_745(252))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
							{
								VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[8], true);
								VEHICLE::SET_VEHICLE_SIREN(iLocal_173[8], false);
								func_744(252, 1);
							}
						}
						if (!func_745(41))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_168[19]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[19], false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[19], 1000f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[19], 1, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[19], 3, true);
									func_744(41, 1);
								}
							}
						}
						if (!func_745(42))
						{
							if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[8]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(702, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[8]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[8], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(702, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_168[20]))
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[20], 100f, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[20], 1, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[20], 3, true);
									func_744(42, 1);
								}
							}
						}
					}
				}
				if (iLocal_34 < (iLocal_173 - 1))
				{
					iLocal_34++;
				}
				else
				{
					iLocal_34 = 0;
				}
				iVar0 = iLocal_34;
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[iVar0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar0], -1, false)) && PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar0], -1, false)))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_168)
				{
					if (!PED::IS_PED_INJURED(iLocal_168[iVar0]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_168[iVar0], true))
						{
							PED::SET_PED_RESET_FLAG(iLocal_168[iVar0], 282, true);
						}
					}
					iVar0++;
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PED::SET_PED_RESET_FLAG(iLocal_161, 304, true);
				PED::SET_PED_RESET_FLAG(iLocal_164, 304, true);
				if (((((!PED::IS_PED_INJURED(iLocal_168[17]) || !PED::IS_PED_INJURED(iLocal_168[18])) || !PED::IS_PED_INJURED(iLocal_168[19])) && ENTITY::IS_ENTITY_AT_COORD(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), 5f, 5f, 3f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_161, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), 5f, 5f, 3f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_164, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), 5f, 5f, 3f, false, true, 0))
				{
					func_428(114, "PRO_CARCREW", 7500, 1);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), 30f, 30f, 3f, false, true, 0))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_172, true);
				}
				if ((((((((((ENTITY::DOES_ENTITY_EXIST(iLocal_168[17]) && PED::IS_PED_INJURED(iLocal_168[17])) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[18])) && PED::IS_PED_INJURED(iLocal_168[18])) && ENTITY::DOES_ENTITY_EXIST(iLocal_168[19])) && PED::IS_PED_INJURED(iLocal_168[19])) || ((PED::IS_PED_IN_VEHICLE(iLocal_161, iLocal_172, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_161)) && (PED::IS_PED_IN_VEHICLE(iLocal_164, iLocal_172, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_164)))) && ENTITY::IS_ENTITY_AT_COORD(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_172, true), 5f, 5f, 3f, false, true, 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || iLocal_59 == 1)
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_172, true);
					if (__LIB_0__::func_405("PRO_CARCREW", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!__LIB_0__::func_1("PROHLP_CAR1"))
					{
						__LIB_0__::func_187("PROHLP_CAR1");
					}
					if (!func_745(160))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							__LIB_6__::func_834(iLocal_164, "GET_IN_VEHICLE", 10);
							func_744(160, 1);
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_160, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_160);
							if (iLocal_160 == iLocal_162)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_160, iLocal_172, -1, 0, 2f, 1310785, 0);
							}
							else if (iLocal_160 == iLocal_163)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_160, iLocal_172, -1, 1, 2f, 1179713, 0);
							}
						}
					}
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/) || iLocal_59 == 1)
					{
						if (__LIB_0__::func_90())
						{
							if (__LIB_20__::func_728() != 0)
							{
								__LIB_35__::func_983(&uLocal_260, 0);
								__LIB_42__::func_600(&uLocal_260, 1, 0, 1);
								func_799();
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[2], iLocal_229);
								CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_260[2]);
							}
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_165, true);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_162, true);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_163, true);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_164, true);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_172))
							{
								if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_172) == VEHICLE::GET_VEHICLE_RECORDING_ID(26, sLocal_98))
								{
									VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_172);
								}
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_172, true, true, false);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
							{
								AUDIO::STOP_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
							}
							func_6();
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_172, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_172, 1000f);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_260[0], "Michael", 0, __LIB_19__::func_811(0), 3);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[2]))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_260[2], "Trevor", 0, 0, 0);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_164, "Brad", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_165, "PRO_Getaway_driver", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_172, "getaway_car", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_179, "chase_cop_car", 2, joaat("policeold2"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_178[0], "PRO_Cop_Driving_Car", 2, joaat("S_M_M_SnowCop_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_178[1], "PRO_COP_Shooting_car", 2, joaat("S_M_M_SnowCop_01"), 0);
							iLocal_197[1] = __LIB_20__::func_765(iLocal_163, iLocal_226, 1, 0, 0, 0, 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[1], "Trevors_weapon", 0, 0, 0);
							__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
							func_464(20);
							func_796(18);
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
							RECORDING::REPLAY_START_EVENT(4);
							func_441(0, 0);
							if (!__LIB_0__::func_2(0))
							{
								CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
							}
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_172, 2, 0, 0f);
							VEHICLE::FIX_VEHICLE_WINDOW(iLocal_172, 2);
							VEHICLE::FIX_VEHICLE_WINDOW(iLocal_172, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 2, 5, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
							PED::CLEAR_PED_PROP(iLocal_163, 1);
							if (iLocal_59 == 1)
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(1000);
								}
								iLocal_59 = 0;
							}
							func_463();
						}
					}
				}
				else if (__LIB_0__::func_1("PROHLP_CAR1") && !HUD::IS_HELP_MESSAGE_FADING_OUT())
				{
					__LIB_30__::func_214(1);
				}
				break;
			case 1:
				PED::SET_PED_RESET_FLAG(iLocal_162, 287, true);
				PED::SET_PED_RESET_FLAG(iLocal_163, 287, true);
				PED::SET_PED_RESET_FLAG(iLocal_164, 287, true);
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_172, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_179))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("chase_cop_car", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_179 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_179, true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_179, true);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_179, 2);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178[0]))
				{
					iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("PRO_Cop_Driving_Car", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						iLocal_178[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178[1]))
				{
					iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("PRO_COP_Shooting_car", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iLocal_178[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					}
				}
				if (!func_745(36))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((11f * 1000f)))
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 0, 0, 0);
						func_744(36, 1);
					}
				}
				if (!func_745(283))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((27.533335f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 2);
						func_744(283, 1);
					}
				}
				if (!func_745(284))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((33.233334f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 0);
						PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_162, 1, 0.6f, 0.55f, 0f, 1f, -1, 0f, "Scripted_Ped_Splash_Back");
						func_744(284, 1);
					}
				}
				if (!func_745(285))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((41.600002f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 6);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_179, false))
						{
							VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_179, 7);
						}
						func_744(285, 1);
					}
				}
				if (!func_745(286))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((41.600002f * 1000f)))
					{
						VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 7);
						func_744(286, 1);
					}
				}
				if (!func_745(259))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((16.3f * 1000f)))
					{
						func_796(20);
						func_744(259, 1);
					}
				}
				if (!func_745(258))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((23f * 1000f)))
					{
						func_796(21);
						func_744(258, 1);
					}
				}
				if (!func_745(260))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((41.600002f * 1000f)))
					{
						func_796(22);
						func_744(260, 1);
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (!func_745(310))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((44.600002f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							func_744(310, 1);
						}
					}
					if (func_745(310))
					{
						if (!CAM::DOES_CAM_EXIST(iLocal_193))
						{
							iLocal_193 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
							iLocal_159 = PED::CREATE_SYNCHRONIZED_SCENE(Local_67, Local_67, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_159, iLocal_172, -1);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_159, false);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_159, false);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_193, iLocal_159, "leadout_action_rear_cam", sLocal_121);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						}
						if (!func_745(311))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								func_744(311, 1);
							}
						}
						CAM::BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE();
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Getaway_driver", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_162);
					PED::SET_PED_INTO_VEHICLE(iLocal_162, iLocal_172, 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_162, iLocal_224, 350, false, true);
					PED::SET_PED_INTO_VEHICLE(iLocal_162, iLocal_172, -1);
					TASK::TASK_PLAY_ANIM(iLocal_162, sLocal_121, "leadout_action_michael", 8f, -8f, -1, 48, 0f, false, false, false);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_162, iLocal_224, 350, false, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_163, iLocal_172, 1);
					TASK::TASK_PLAY_ANIM(iLocal_163, sLocal_121, "leadout_action_trevor", 8f, -8f, -1, 48, 0f, false, false, false);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, iLocal_224, 350, false, true);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, joaat("WEAPON_MICROSMG"), 350, false, true);
				}
				iVar4 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Brad", joaat("CS_Brad"));
				if (!ENTITY::IS_ENTITY_DEAD(iVar4, false))
				{
					PED::SET_ENABLE_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), true);
					PED::SET_PED_ENVEFF_SCALE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), 0.6f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Brad", 0))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_164, iLocal_172, 2);
					TASK::TASK_PLAY_ANIM(iLocal_164, sLocal_121, "leadout_action_brad", 8f, -8f, -1, 48, 0f, false, false, false);
					PED::PLAY_FACIAL_ANIM(iLocal_164, "leadout_action_brad_facial", sLocal_121);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_164, iLocal_224, -1, false, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("getaway_car", 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_172, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_172, true);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_172, 30f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[1], iLocal_163);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Cop_Driving_Car", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_178[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_178[0], iLocal_179, -1);
						}
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_178[0], false);
						PED::SET_PED_MAX_HEALTH(iLocal_178[0], 800);
						ENTITY::SET_ENTITY_HEALTH(iLocal_178[0], PED::GET_PED_MAX_HEALTH(iLocal_178[0]), 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_178[0], iLocal_224, 350, false, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_178[0], iLocal_230);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_COP_Shooting_car", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_178[1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_178[1], iLocal_179, 0);
						}
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_178[1], false);
						PED::SET_PED_MAX_HEALTH(iLocal_178[1], 800);
						ENTITY::SET_ENTITY_HEALTH(iLocal_178[1], PED::GET_PED_MAX_HEALTH(iLocal_178[1]), 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_178[1], iLocal_224, 350, false, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_178[1], iLocal_230);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("chase_cop_car", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_179) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_179, true, true, false);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_179, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_179, true, true, true, true, true, false, false, false);
						VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_179, 1);
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_60 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_60)
					{
						if (AUDIO::IS_MUSIC_ONESHOT_PLAYING())
						{
							AUDIO::CANCEL_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS");
						}
						func_570(4541.338f, -5082.698f, 109.5979f, 100f, 1);
						__LIB_11__::func_102(iLocal_172, 4541.338f, -5082.698f, 109.5979f, 118.0337f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_172, true, true, false);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_172, true);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_172, 20f);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					iLocal_60 = 0;
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					func_477(PLAYER::PLAYER_ID(), 1, 0);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					__LIB_30__::func_731();
				}
				break;
		}
		if (iLocal_29 > 0)
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((4400f - 2500f), (-5100f - 1500f), (4400f + 2500f), (-5100f + 1500f));
		}
	}
	if (func_412())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_441(0, 1);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_193))
		{
			CAM::DESTROY_CAM(iLocal_193, false);
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, false, false, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_163, 1);
		__LIB_0__::func_503(125, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_160, false);
		if (__LIB_20__::func_728() == 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_260[2], false);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_260[0], false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_164, false);
		__LIB_10__::func_7(&iLocal_180);
		__LIB_10__::func_7(&iLocal_181);
		__LIB_10__::func_7(&iLocal_182);
		__LIB_10__::func_7(&iLocal_184);
		__LIB_10__::func_7(&iLocal_186);
		__LIB_5__::func_674(&iLocal_165);
		__LIB_0__::func_202(&uLocal_318, 5);
		__LIB_5__::func_674(&(iLocal_168[0]));
		__LIB_5__::func_674(&(iLocal_168[1]));
		__LIB_5__::func_674(&iLocal_170);
		__LIB_11__::func_100(&(iLocal_173[8]));
		iVar5 = 0;
		while (iVar5 < iLocal_197)
		{
			__LIB_11__::func_108(&(iLocal_197[iVar5]));
			iVar5++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_179);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178[0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_178[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178[1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_178[1]));
		}
		iVar5 = 0;
		while (iVar5 < iLocal_168)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar5]))
			{
				if (!PED::IS_PED_INJURED(iLocal_168[iVar5]))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_168[iVar5], true);
					AUDIO::STOP_PED_SPEAKING(iLocal_168[iVar5], true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_168[iVar5], 0, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_168[iVar5]));
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_173)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar5]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_173[iVar5]));
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_174)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar5]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_174[iVar5]));
			}
			iVar5++;
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_172))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_172);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_172, true);
		iLocal_251++;
	}
}

void func_570(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x7DF06
{
	int iVar0;
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam1, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 20000;
	while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
	{
		func_441(0, bParam2);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_574()//Position - 0x7E195
{
	int iVar0;
	int iVar1;
	struct<20> Var2;
	struct<22> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (func_537())
	{
		iLocal_528 = 0;
		iLocal_529 = 0;
		iLocal_530 = 0;
		iLocal_531 = 0;
		__LIB_42__::func_876(3, "stageShootOut", 0, 0, 0, 1);
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			func_796(14);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
		}
		iLocal_57 = 1;
		if (iLocal_64 == 0)
		{
			ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
			ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
			iLocal_64 = 1;
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5336.8643f, -5193.5386f, 81.9129f))
		{
			iLocal_220[0] = TASK::ADD_COVER_POINT(5336.8174f, -5193.3325f, 81.911f, 270.8514f, 1, 0, 1, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5332.273f, -5185.271f, 81.7757f))
		{
			iLocal_220[1] = TASK::ADD_COVER_POINT(5332.273f, -5185.271f, 81.7757f, 276.6267f, 0, 2, 3, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5332.1934f, -5191.9116f, 81.7758f))
		{
			iLocal_220[2] = TASK::ADD_COVER_POINT(5332.1934f, -5191.9116f, 81.7758f, 276.6232f, 1, 2, 3, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5326.3535f, -5185.2485f, 81.7796f))
		{
			iLocal_220[3] = TASK::ADD_COVER_POINT(5326.3535f, -5185.2485f, 81.7796f, 276.997f, 0, 2, 3, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5326.3535f, -5191.832f, 81.7743f))
		{
			iLocal_220[4] = TASK::ADD_COVER_POINT(5326.3535f, -5191.832f, 81.7743f, 277.2627f, 1, 2, 3, false);
		}
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		ENTITY::SET_ENTITY_PROOFS(iLocal_160, false, false, false, false, false, true, false, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_161, false, false, false, false, false, true, false, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_164, false, false, false, false, false, true, false, false);
		PED::SET_PED_UPPER_BODY_DAMAGE_ONLY(iLocal_160, true);
		PED::SET_PED_UPPER_BODY_DAMAGE_ONLY(iLocal_161, true);
		PED::SET_PED_UPPER_BODY_DAMAGE_ONLY(iLocal_164, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 118, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 38, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 35, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 26, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 29, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 208, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_163, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_163, 0, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 131, false);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_162, false);
		PED::SET_PED_MAX_HEALTH(iLocal_162, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_162, 800, 0);
		PED::SET_COMBAT_FLOAT(iLocal_162, 3, 2f);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 208, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_162, 38, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_162, 35, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_162, 26, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_162, 29, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_162, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_162, 0, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 131, false);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_164, false);
		WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_164, 100f, 100f);
		PED::SET_PED_MAX_HEALTH(iLocal_164, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_164, 800, 0);
		PED::SET_COMBAT_FLOAT(iLocal_164, 3, 2f);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 118, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 38, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 35, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 26, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 29, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 208, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_164, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 0, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 131, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_164, 12, true);
		PED::SET_PED_FIRING_PATTERN(iLocal_164, joaat("FIRING_PATTERN_SHORT_BURSTS"));
		__LIB_37__::func_503(&iLocal_180, &(uLocal_260[0]), 0);
		__LIB_10__::func_7(&iLocal_181);
		__LIB_30__::func_732(&iLocal_170, joaat("U_M_M_ProlSec_01"), 5362.9f, -5180.634f, 82.802f, 0f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_170, true);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_170, sLocal_101, "dead_guard", 5362.9f, -5180.634f, 82.802f, 0f, 0f, 0f, 1000f, -1000f, -1, 2103816, 0f, 2, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_170, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_ProlSec_01"));
		__LIB_30__::func_733(&iLocal_172, joaat("rancherxl2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(26, 500f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(26, 500f, sLocal_98)), 0, 1097859072);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_172, "87ALN974");
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_172, true);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_172, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 0, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 1, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 2, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 3, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_172, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_172, false);
		func_441(0, 0);
		iLocal_165 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_172, 26, joaat("U_M_Y_ProlDriver_01"), -1, true, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_165, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_165, 9, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_165, iLocal_228);
		__LIB_0__::func_203(&uLocal_318, 5, iLocal_165, "PROGETAWAY", 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_Y_ProlDriver_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_165, true);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_174[0]), joaat("stockade3"), (5341.3525f + 1.365f), -5177.149f, 81.762f, 0.3367f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_174[0], false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_174[0], true);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_174[1]), joaat("stockade3"), (5337.0996f + 1.365f), -5177.0317f, 81.762f, 2.5903f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_174[1], false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_174[1], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stockade3"));
		func_441(0, 0);
		__LIB_30__::func_733(&iLocal_175, joaat("emperor3"), 5355.211f, -5179.921f, 81.8178f, 341.248f, -1, 1097859072);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_175, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_175, true);
		__LIB_30__::func_733(&(iLocal_173[0]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_98)), -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[1]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_98)), -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[2]), joaat("policeold1"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_98)), -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[3]), joaat("policeold1"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_98)), -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[4]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_98)), -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[5]), joaat("policeold2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_98), __LIB_11__::func_128(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_98)), -1, 1097859072);
		func_441(0, 0);
		__LIB_30__::func_733(&(iLocal_173[6]), joaat("policeold2"), 5505.63f, -5128.1724f, 77.3763f, 87.963f, -1, 1097859072);
		func_441(0, 0);
		iVar0 = 0;
		while (iVar0 < iLocal_173)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false))
			{
				VEHICLE::SET_VEHICLE_STRONG(iLocal_173[iVar0], true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_173[iVar0], false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_173[iVar0], true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[iVar0], true);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 17)
		{
			if (iVar0 != 7)
			{
				func_457(iVar0);
				if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 7)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0], iLocal_225, -1, true, true);
				}
				if ((((iVar0 == 4 || iVar0 == 5) || iVar0 == 9) || iVar0 == 14) || iVar0 == 16)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_168[iVar0], iLocal_227, -1, true, true);
				}
				if (iVar0 >= 0 && iVar0 <= 8)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[iVar0], 4, false);
					PED::SET_COMBAT_FLOAT(iLocal_168[iVar0], 5, 1f);
				}
				func_441(0, 0);
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[0]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[0], iLocal_173[0], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[1]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[1], iLocal_173[0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[2]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[2], iLocal_173[1], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[3]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[3], iLocal_173[1], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[4]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[4], iLocal_173[2], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[5]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[5], iLocal_173[2], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[9]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[9], iLocal_173[3], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[10]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[10], iLocal_173[3], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[11]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[11], iLocal_173[4], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[12]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[12], iLocal_173[4], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[13]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[13], iLocal_173[5], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[14]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[14], iLocal_173[5], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[15]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[15], iLocal_173[6], -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[16]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_168[16], iLocal_173[6], 0);
		}
		TASK::ADD_COVER_BLOCKING_AREA(5370.142f, -5212.455f, 78.9143f, 5359.361f, -5191.83f, 86.8785f, true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(5375.438f, -5180.967f, 79.4894f, 5360.391f, -5161.3555f, 88.813f, true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(5366.0146f, -5162.681f, 81.0458f, 5274.0205f, -5152.04f, 89.9633f, true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(5397.5415f, -5174.056f, 79.035f, 5373.813f, -5160.871f, 87.0641f, true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(5428.415f, -5193.0215f, 76.6645f, 5411.4014f, -5185.282f, 82.3215f, true, true, true, true);
		iLocal_86 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5324.8066f, -5130.89f, 75.4401f, 90f, 70f, 15f, 0f, false, 7);
		iLocal_87 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5370.8306f, -5156.042f, 80.358f, 19.5f, 50f, 15f, 0f, false, 7);
		iLocal_88 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5370.3306f, -5226.042f, 80.358f, 15f, 50f, 15f, 0f, false, 7);
		iLocal_89 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(5357.09f, -5164.394f, 82.90531f, 8f, 5f, 3f, 0f, false, 7);
		iLocal_48 = MISC::GET_GAME_TIMER() + 7500;
		__LIB_0__::func_203(&uLocal_318, 4, 0, "PROCOP" /* GXT: Procopio Promenade */, 0, 1);
		func_744(119, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_163, 2, 7, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_163, 1, 1, 0);
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_163);
			__LIB_30__::func_217(iLocal_163, 5321.248f, -5188.4775f, 82.5189f, 271.967f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_162);
			__LIB_30__::func_217(iLocal_162, 5323.168f, -5190.459f, 82.5189f, 181.1772f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_164);
			__LIB_30__::func_217(iLocal_164, 5323.296f, -5188.045f, 82.5189f, 182.8223f, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), 5318.2f, -5185.1f, 83.7f) - ENTITY::GET_ENTITY_HEADING(iLocal_160)));
			iLocal_233 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
			{
				iLocal_233 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
			}
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233, 9);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3))
				{
					ENTITY::PLAY_ENTITY_ANIM(iLocal_200, "GDoor_Open", sLocal_99, 1000f, false, true, false, 0.25f, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open", 0f);
					ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_200, sLocal_99, "GDoor_Open", 1f);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (!func_745(15))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_155) >= 0.95f)
			{
				TASK::CLEAR_PED_TASKS(iLocal_160);
				func_796(13);
				func_744(15, 1);
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open") == 1f)
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_796(14);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
			}
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 2, 5, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 2, 7, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Brad", iLocal_164, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Brad", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Getaway_driver", iLocal_165, 0);
		}
		if (func_745(221))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
			{
				func_565(197, "PRO_OffShoot", 7, 1, 1, 0);
			}
		}
		if (!func_745(83))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_455(83, "PROHLP_COVER1", 1, -1, 2000);
			}
		}
		else if (!func_745(84))
		{
			if (((PED::IS_PED_IN_COVER(iLocal_160, false) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160)) && __LIB_0__::func_1("PROHLP_COVER1")) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_455(84, "PROHLP_COVER2", 1, -1, 2000);
			}
		}
		else if (!func_745(89))
		{
			if ((((PED::IS_PED_IN_COVER(iLocal_160, false) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160)) && PED::IS_PED_AIMING_FROM_COVER(iLocal_160)) && __LIB_0__::func_1("PROHLP_COVER2")) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_455(89, "PROHLP_FREEAIM3", 1, -1, 2000);
			}
		}
		if (func_745(119))
		{
			if (!__LIB_0__::func_405("PRO_COVER1", 0, 0))
			{
				func_428(117, "PRO_COP", 7500, 1);
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_163) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					if (iLocal_160 == iLocal_163 && ((PED::IS_PED_IN_COVER(iLocal_160, false) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160)) || func_745(106)))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(iLocal_160, &iVar1, true);
						if (!PED::IS_PED_RELOADING(iLocal_160) && iVar1 == joaat("WEAPON_CARBINERIFLE"))
						{
							if (((((((ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5332.1675f, -5185.254f, 83.80939f, 0.5f, 0.5f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5332.145f, -5191.843f, 83.77327f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5326.206f, -5185.222f, 83.79367f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5326.217f, -5191.865f, 83.776054f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5332.157f, -5178.68f, 83.87281f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5332.796f, -5195.6123f, 83.999756f, 0.5f, 0.75f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5336.999f, -5178.899f, 83.83877f, 0.75f, 2.25f, 2f, false, true, 0)) || func_745(106))
							{
								if (!func_745(106))
								{
									func_477(PLAYER::PLAYER_ID(), 0, 256);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_160);
								}
								func_441(100, 0);
								if (!PED::IS_PED_RELOADING(iLocal_160) && iVar1 == joaat("WEAPON_CARBINERIFLE"))
								{
									if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_163, iLocal_226, false))
									{
										WEAPON::GIVE_WEAPON_TO_PED(iLocal_163, iLocal_226, 500, true, true);
									}
									WEAPON::SET_CURRENT_PED_WEAPON(iLocal_163, iLocal_226, true);
									if (PED::IS_PED_IN_COVER_FACING_LEFT(iLocal_163))
									{
										iLocal_65 = 0;
									}
									else
									{
										iLocal_65 = 1;
									}
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_212[1]))
										{
											iLocal_212[1] = OBJECT::CREATE_OBJECT(joaat("p_trevor_prologe_bally_s"), ENTITY::GET_ENTITY_COORDS(iLocal_163, true), true, true, false);
											ENTITY::SET_ENTITY_COLLISION(iLocal_212[1], false, false);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_212[1], iLocal_163, PED::GET_PED_BONE_INDEX(iLocal_163, 31086), Local_67, Local_67, false, false, false, false, 2, true, 0);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_212[2]))
										{
											iLocal_212[2] = OBJECT::CREATE_OBJECT(joaat("p_trev_ski_mask_s"), ENTITY::GET_ENTITY_COORDS(iLocal_163, true), true, true, false);
											ENTITY::SET_ENTITY_COLLISION(iLocal_212[2], false, false);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_212[2], iLocal_163, PED::GET_PED_BONE_INDEX(iLocal_163, 31086), Local_67, Local_67, false, false, false, false, 2, true, 0);
										}
									}
									Var2.f_4 = 1065353216;
									Var2.f_5 = 1065353216;
									Var2.f_9 = 1065353216;
									Var2.f_10 = 1065353216;
									Var2.f_14 = 1065353216;
									Var2.f_15 = 1065353216;
									Var2.f_17 = 1040187392;
									Var2.f_18 = 1040187392;
									Var2.f_19 = -1;
									Var3.f_4 = 1065353216;
									Var3.f_5 = 1065353216;
									Var3.f_9 = 1065353216;
									Var3.f_10 = 1065353216;
									Var3.f_14 = 1065353216;
									Var3.f_15 = 1065353216;
									Var3.f_17 = 1040187392;
									Var3.f_18 = 1040187392;
									Var3.f_19 = -1;
									Var3.f_0 = 1;
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										Var3.f_1 = sLocal_123;
									}
									else
									{
										Var3.f_1 = sLocal_122;
									}
									Var3.f_16 = MISC::GET_HASH_KEY("NoMover_filter");
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										Var3.f_21 = 1024;
									}
									else
									{
										Var3.f_21 = 2;
									}
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										Var3.f_2 = "REMOVE_BALACLAVA";
										Var3.f_20 = 48;
										TASK::TASK_SCRIPTED_ANIMATION(iLocal_163, &Var3, &Var2, &Var2, 0f, 0.125f);
									}
									else if (iLocal_65 == 0)
									{
										Var3.f_2 = "remove_balaclava_right";
										Var3.f_20 = 32;
										TASK::TASK_SCRIPTED_ANIMATION(iLocal_163, &Var3, &Var2, &Var2, 0f, 0.125f);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_212[1], "remove_balaclava_right_balaclava", sLocal_122, 1000f, false, true, false, 0f, 0);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_212[2], "remove_balaclava_right_skimask", sLocal_122, 1000f, false, true, false, 0f, 0);
									}
									else
									{
										if (func_745(106))
										{
											Var3.f_2 = "remove_balaclava_right";
											Var3.f_20 = 48;
											TASK::TASK_SCRIPTED_ANIMATION(iLocal_163, &Var3, &Var2, &Var2, 0.25f, 0.25f);
										}
										else
										{
											Var3.f_2 = "remove_balaclava";
											Var3.f_20 = 32;
											TASK::TASK_SCRIPTED_ANIMATION(iLocal_163, &Var3, &Var2, &Var2, 0f, 0.125f);
										}
										ENTITY::PLAY_ENTITY_ANIM(iLocal_212[1], "remove_balaclava_balaclava", sLocal_122, 1000f, false, true, false, 0f, 0);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_212[2], "remove_balaclava_skimask", sLocal_122, 1000f, false, true, false, 0f, 0);
									}
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_163, false, false);
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
									{
										ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_212[1]);
										ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_212[2]);
									}
									PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 0, 0, 0);
									PED::CLEAR_PED_PROP(iLocal_163, 1);
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
									{
										PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
									}
									__LIB_0__::func_503(125, 1);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 3f, 4);
									iLocal_532 = MISC::GET_GAME_TIMER() + 5000;
									func_463();
								}
							}
						}
					}
				}
				break;
			case 1:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava_right", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_123, "REMOVE_BALACLAVA", 3)) || MISC::GET_GAME_TIMER() > iLocal_532)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_122, "remove_balaclava") > 0.48f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava_right", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_122, "remove_balaclava_right") > 0.48f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_123, "REMOVE_BALACLAVA", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_123, "REMOVE_BALACLAVA") > 0.48f))
						{
							func_565(222, "PRO_Unmask", 7, 1, 0, 0);
						}
					}
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_122, "remove_balaclava") > 0.488f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava_right", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_122, "remove_balaclava_right") > 0.488f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_123, "REMOVE_BALACLAVA", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_123, "REMOVE_BALACLAVA") > 0.488f))
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 7, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 1, 1, 0, 0);
						func_463();
					}
				}
				break;
			case 2:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				if ((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava_right", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_123, "REMOVE_BALACLAVA", 3)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_163, sLocal_122, "remove_balaclava") > 0.92f)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_122, "remove_balaclava_right", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_163, sLocal_123, "REMOVE_BALACLAVA", 3)) || MISC::GET_GAME_TIMER() > iLocal_532)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_163);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_212[1]))
					{
						ENTITY::DETACH_ENTITY(iLocal_212[1], true, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_212[1], false);
						ENTITY::SET_ENTITY_ALPHA(iLocal_212[1], 0, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_212[2]))
					{
						ENTITY::DETACH_ENTITY(iLocal_212[2], true, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_212[2], false);
						ENTITY::SET_ENTITY_ALPHA(iLocal_212[2], 0, true);
					}
					iLocal_57 = 1;
					func_477(PLAYER::PLAYER_ID(), 1, 0);
					__LIB_10__::func_7(&iLocal_185);
					SYSTEM::SETTIMERB(0);
					func_428(117, "PRO_COP", 7500, 1);
					func_463();
				}
				break;
			case 3:
				if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::REMOVE_COVER_POINT(iLocal_220[1]);
					func_463();
				}
				break;
		}
		bLocal_527 = true;
		iVar5 = 0;
		iVar7 = 0;
		iVar4 = 0;
		while (iVar4 < 9)
		{
			if (!PED::IS_PED_INJURED(iLocal_168[iVar4]))
			{
				bLocal_527 = false;
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_168[iVar4], 5323.8535f, -5194.2f, 93.5186f, 41f, 36f, 13f, false, true, 0))
				{
					iVar7 = 1;
				}
			}
			else
			{
				iVar5++;
			}
			iVar4++;
		}
		if (iLocal_34 < (iLocal_173 - 1))
		{
			iLocal_34++;
		}
		else
		{
			iLocal_34 = 0;
		}
		iVar4 = iLocal_34;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar4], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[iVar4]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar4], -1, false)) && PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar4], -1, false)))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar4]);
				}
			}
		}
		if (iLocal_33 < (iLocal_168 - 1))
		{
			iLocal_33++;
		}
		else
		{
			iLocal_33 = 0;
		}
		iVar4 = iLocal_33;
		if (!PED::IS_PED_INJURED(iLocal_168[iVar4]))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_161, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_161, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_161) == iLocal_50) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_161, Local_52, 1f, 1f, 2f, false, true, 0))) || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_164) == iLocal_51) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_164, Local_53, 1f, 1f, 2f, false, true, 0))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_168[iVar4], true), true) < 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), ENTITY::GET_ENTITY_COORDS(iLocal_168[iVar4], true), true) < 50f)
				{
					iVar6 = iVar4;
				}
			}
		}
		iVar4 = 0;
		while (iVar4 < iLocal_168)
		{
			if (!PED::IS_PED_INJURED(iLocal_168[iVar4]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_168[iVar4], true))
				{
					PED::SET_PED_RESET_FLAG(iLocal_168[iVar4], 282, true);
				}
			}
			iVar4++;
		}
		if (!func_745(16) && SYSTEM::TIMERA() > 1000)
		{
			MISC::SET_FAKE_WANTED_LEVEL(5);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[1], false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[1], 4, sLocal_98, true);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_173[1], true);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_173[1], true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[0], false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[0], 3, sLocal_98, true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_173[0]);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_173[0], true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[2], false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[2], 5, sLocal_98, true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_173[2]);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_173[2], true);
			func_744(16, 1);
		}
		if (!func_745(17))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5334.1455f, -5195.717f, 80.342f, 5324.581f, -5173.136f, 87.0081f, 10f, false, true, 0) || MISC::GET_GAME_TIMER() > iLocal_48)
			{
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_173[0]);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_173[0], true);
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_173[2]);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_173[2], true);
				if (!PED::IS_PED_INJURED(iLocal_168[6]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[6], 5366.3364f, -5184.4507f, 81.5742f, 2f, true, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[6], 100f, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_168[8]))
				{
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_168[8], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[8], 50, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_168[8], 286, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[8], 100f, 0);
				}
				func_744(17, 1);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_168[6]))
			{
				if (!func_745(1))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_COORDS(iLocal_168[6], true), true) < 10f || ENTITY::GET_ENTITY_HEALTH(iLocal_168[6]) < PED::GET_PED_MAX_HEALTH(iLocal_168[6])) || iVar5 >= 3)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_168[6], false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_168[6], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[6], 50, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[6], 100f, 0);
						func_744(1, 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_168[0], false))
			{
				if (!func_745(0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_COORDS(iLocal_168[0], true), true) < 8f)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_168[0], false);
						func_744(0, 1);
					}
				}
			}
			if (!func_745(18))
			{
				if (((iVar5 > 3 && ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_98) / 100f) * 95f)) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]))) && ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_98) / 100f) * 95f)) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]))) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5354.3447f, -5188.611f, 87.81207f, 5367.5015f, -5188.863f, 79.542175f, 70f, false, true, 0))
				{
					func_744(18, 1);
				}
			}
		}
		if (!bLocal_527)
		{
			if (!func_745(236))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5336.4517f, -5185.1997f, 92.82875f, 21f, 20f, 13f, false, true, 0) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_428(221, "PRO_TEAM", 7500, 0);
					func_744(236, 1);
				}
			}
			if ((!ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5323.8535f, -5194.2f, 93.5186f, 41f, 36f, 13f, false, true, 0) && iVar7 == 1) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5301.347f, -5180.395f, 84.01892f, 4f, 3f, 1.5f, false, true, 0))
			{
				iLocal_252 = 13;
				func_727();
			}
		}
		else
		{
			if (!func_745(44))
			{
				func_464(17);
				func_796(15);
				func_744(44, 1);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5301.347f, -5180.395f, 84.01892f, 4f, 3f, 1.5f, false, true, 0))
			{
				iLocal_252 = 13;
				func_727();
			}
		}
		if (iLocal_50 != -1)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_161, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				iLocal_50 = -1;
			}
		}
		if (iLocal_51 != -1)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				iLocal_51 = -1;
			}
		}
		func_639();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_161, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_161, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_161) == iLocal_50) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_161, Local_52, 1f, 1f, 2f, false, true, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_168[iVar6], false))
			{
				PED::SET_PED_SHOOTS_AT_COORD(iLocal_161, ENTITY::GET_ENTITY_COORDS(iLocal_168[iVar6], true), false);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_161, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_161, true) - Vector(0.25f, 0f, 0f), 1f, 1f, 2f, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_161);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_161, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_161, 500f, 0);
					}
				}
			}
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) == 1 || ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_164) == iLocal_51) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_164, Local_53, 1f, 1f, 2f, false, true, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_168[iVar6], false))
			{
				PED::SET_PED_SHOOTS_AT_COORD(iLocal_164, ENTITY::GET_ENTITY_COORDS(iLocal_168[iVar6], true), false);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_164, true) - Vector(0.25f, 0f, 0f), 1f, 1f, 2f, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_164);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_164, 500f, 0);
					}
				}
			}
		}
		switch (iLocal_528)
		{
			case 0:
				if (func_745(17))
				{
					if (!func_745(244))
					{
						if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[0], true);
							func_744(244, 1);
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_559(&(iLocal_168[0])))
						{
							if (!func_745(29))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_168[0], 5344.2725f, -5180.306f, 81.7773f, 2f, true, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[0], 100f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[0], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[0], 3, true);
								func_744(29, 1);
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[0]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[0]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_559(&(iLocal_168[1])))
						{
							if (!func_745(30))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[1], false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[1], 1000f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[1], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[1], 3, true);
								func_744(30, 1);
							}
						}
					}
				}
				if (func_745(16))
				{
					if (!func_745(245))
					{
						if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[1]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[1]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[1]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[1], true);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_173[1], false);
							func_744(245, 1);
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[1]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[1]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[1]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_559(&(iLocal_168[2])))
						{
							if (!func_745(31))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[2], 100f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[2], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[2], 3, true);
								func_744(31, 1);
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[1]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[1]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(4, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[1]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_559(&(iLocal_168[3])))
						{
							if (!func_745(32))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[3], false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[3], 1000f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[3], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[3], 3, true);
								func_744(32, 1);
							}
						}
					}
				}
				if (func_745(17))
				{
					if (!func_745(246))
					{
						if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[2], true);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_173[2], false);
							func_744(246, 1);
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_98) / 100f) * 90f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_559(&(iLocal_168[4])))
						{
							if (!func_745(33))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[4], false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[4], 1000f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[4], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[4], 3, true);
								func_744(33, 1);
							}
						}
					}
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[2]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(5, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[2]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(5, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!func_559(&(iLocal_168[5])))
						{
							if (!func_745(34))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[5], 100f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[5], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[5], 3, true);
								func_744(34, 1);
							}
						}
					}
				}
				if ((((((func_559(&(iLocal_168[0])) || !PED::IS_PED_IN_VEHICLE(iLocal_168[0], iLocal_173[0], false)) && (func_559(&(iLocal_168[1])) || !PED::IS_PED_IN_VEHICLE(iLocal_168[1], iLocal_173[0], false))) && (func_559(&(iLocal_168[2])) || !PED::IS_PED_IN_VEHICLE(iLocal_168[2], iLocal_173[1], false))) && (func_559(&(iLocal_168[3])) || !PED::IS_PED_IN_VEHICLE(iLocal_168[3], iLocal_173[1], false))) && (func_559(&(iLocal_168[4])) || !PED::IS_PED_IN_VEHICLE(iLocal_168[4], iLocal_173[2], false))) && (func_559(&(iLocal_168[5])) || !PED::IS_PED_IN_VEHICLE(iLocal_168[5], iLocal_173[2], false)))
				{
					iLocal_528++;
				}
				break;
			case 1:
				if (bLocal_527 == 1)
				{
					__LIB_10__::func_7(&iLocal_185);
					if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						func_565(208, "PRO_RunToCar", 7, 0, 0, 0);
						func_744(106, 1);
						iLocal_528++;
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_455(99, "PROHLP_SPRINT_KM", 1, -1, 2000);
						}
						else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							func_455(99, "PROHLP_SPRINT_FP", 1, -1, 2000);
						}
						else
						{
							func_455(99, "PROHLP_SPRINT", 1, -1, 2000);
						}
						iLocal_528++;
					}
				}
				break;
			case 3:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
					{
						func_455(98, "PROHLP_RUNANDGUN", 1, -1, 2000);
						iLocal_528++;
					}
				}
				break;
		}
		switch (iLocal_529)
		{
			case 0:
				if (bLocal_527 == 1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5338.454f, -5212.938f, 81.762024f, 5338.228f, -5161.655f, 86.762024f, 35f, false, true, 0))
				{
					if (!func_638(&(iLocal_173[0])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[0], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[0], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_173[0], false, false, false, false, false, false, false, false);
					}
					if (!func_638(&(iLocal_173[1])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[1], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[1], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_173[1], false, false, false, false, false, false, false, false);
					}
					if (!func_638(&(iLocal_173[2])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[2]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[2], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[2]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[2], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_173[2], false, false, false, false, false, false, false, false);
					}
					if (!func_638(&(iLocal_174[0])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_174[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_174[0], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_174[0]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_174[0], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_174[0], false, false, false, false, false, false, false, false);
					}
					if (!func_638(&(iLocal_174[1])))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_174[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_174[1], 500f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_174[1]) < 500f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_174[1], 500f);
						}
						ENTITY::SET_ENTITY_PROOFS(iLocal_174[1], false, false, false, false, false, false, false, false);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_529++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					func_565(121, "PRO_Combat2", 7, 1, 0, 0);
				}
				if (PED::IS_PED_INJURED(iLocal_168[9]) && PED::IS_PED_INJURED(iLocal_168[10]))
				{
					iLocal_529++;
				}
				break;
		}
		if (iLocal_530 > 0)
		{
			if (!func_745(247))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[3]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[3]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(6, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[3]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[3], true);
					func_744(247, 1);
				}
			}
			if (!func_745(295))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[3]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[3]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(6, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[3]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[9]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[9], 100f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[9], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[9], 3, true);
						func_744(295, 1);
					}
				}
			}
			if (!func_745(288))
			{
				if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[3]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[3]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(6, sLocal_98) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[3]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[3], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(6, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
				{
					if (!PED::IS_PED_INJURED(iLocal_168[10]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[10], 100f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[10], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[10], 3, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_168[10], true);
						PED::SET_PED_MAX_HEALTH(iLocal_168[10], 215);
						ENTITY::SET_ENTITY_HEALTH(iLocal_168[10], 215, 0);
						func_744(288, 1);
					}
				}
			}
		}
		if (iLocal_530 > 1)
		{
			if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				func_565(122, "PRO_Combat3", 7, 1, 0, 0);
			}
		}
		switch (iLocal_530)
		{
			case 0:
				if (bLocal_527 == 1 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_163, 5364.965f, -5187.168f, 89.64108f, 5477.842f, -5189.212f, 75.91235f, 100f, false, true, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[3], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[3], 6, sLocal_98, true);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_173[3], true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[3], 1500f);
					iLocal_530++;
				}
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[3]) && ENTITY::DOES_ENTITY_EXIST(iLocal_160))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_COORDS(iLocal_173[3], true), true) <= 17.5f || (PED::IS_PED_INJURED(iLocal_168[9]) && PED::IS_PED_INJURED(iLocal_168[10])))
					{
						__LIB_10__::func_7(&iLocal_185);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[4], false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[4], 8, sLocal_98, true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[4], true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[4], 3000f);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[5], false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[5], 9, sLocal_98, true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[5], true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_173[4], 2000f);
						iLocal_530++;
					}
				}
				break;
			case 2:
				if (!func_745(248))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[4]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[4], true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[4], false);
						func_744(248, 1);
					}
				}
				if (!func_745(289))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[4]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_168[11]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[11], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[11], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[11], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[11], 3, true);
							func_744(289, 1);
						}
					}
				}
				if (!func_745(290))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[4]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(8, sLocal_98) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[4], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_168[12]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[12], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[12], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[12], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[12], 3, true);
							func_744(290, 1);
						}
					}
				}
				if (!func_745(249))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[5]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[5], true);
						func_744(249, 1);
					}
				}
				if (!func_745(291))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[5]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_168[13]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[13], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[13], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[13], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[13], 3, true);
							func_744(291, 1);
						}
					}
				}
				if (!func_745(292))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[5]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(9, sLocal_98) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[5], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(9, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_168[14]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[14], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[14], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[14], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[14], 3, true);
							func_744(292, 1);
						}
					}
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[4]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[5]))
				{
					iLocal_530++;
				}
				break;
			case 3:
				if (PED::IS_PED_INJURED(iLocal_168[9]) && PED::IS_PED_INJURED(iLocal_168[10]))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_530++;
				}
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[4], false))
				{
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Explosions_Cop_Car", false, -1);
				}
				if (iLocal_241 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_241))
					{
						AUDIO::STOP_SOUND(iLocal_241);
						AUDIO::RELEASE_SOUND_ID(iLocal_241);
						iLocal_241 = -1;
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Explosions_Cop_Car");
					}
				}
				if ((((PED::IS_PED_INJURED(iLocal_168[11]) && PED::IS_PED_INJURED(iLocal_168[12])) && PED::IS_PED_INJURED(iLocal_168[13])) && PED::IS_PED_INJURED(iLocal_168[14])) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5473.0723f, -5128.806f, 80.06776f, 56f, 43f, 5f, false, true, 0))
				{
					if (!func_638(&(iLocal_173[3])))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_173[3], false, false, false, false, false, false, false, false);
					}
					if (!func_638(&(iLocal_173[4])))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_173[4], false, false, false, false, false, false, false, false);
					}
					if (!func_638(&(iLocal_173[5])))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_173[5], false, false, false, false, false, false, false, false);
					}
					__LIB_32__::func_665(&iLocal_184, &iLocal_172, 0);
					func_796(17);
					SYSTEM::SETTIMERA(0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[6], false);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_173[6], true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_173[6], 11, sLocal_98, true);
					iLocal_530++;
				}
				break;
			case 5:
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)) || SYSTEM::TIMERA() > 10000)
				{
					func_428(112, "PRO_CAR1", 7500, 0);
					if (!__LIB_0__::func_75())
					{
						func_565(186, "PRO_ToCar", 7, 1, 1, 0);
					}
					SYSTEM::SETTIMERA(0);
					iLocal_530++;
				}
				break;
			case 6:
				if (!func_745(250))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[6]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[6]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[6]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[6], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(11, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iLocal_173[6], true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_173[6], false);
						func_744(250, 1);
					}
				}
				if (!func_745(293))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[6]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[6]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_98) / 100f) * 95f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[6]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[6], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(11, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_168[15]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[15], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[15], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[15], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[15], 3, true);
							func_744(293, 1);
						}
					}
				}
				if (!func_745(294))
				{
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[6]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_173[6]) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_98) / 100f) * 99f)) || (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[6]) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_173[6], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(11, 0f, sLocal_98), 5f, 5f, 5f, false, true, 0)))
					{
						if (!PED::IS_PED_INJURED(iLocal_168[16]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_168[16], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_168[16], 1000f, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[16], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_168[16], 3, true);
							func_744(294, 1);
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_168[15]) && PED::IS_PED_INJURED(iLocal_168[16]))
				{
					iLocal_530++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 7:
				if (!func_638(&(iLocal_173[6])))
				{
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[6]) < 500f)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[6], 500f);
					}
					if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[6]) < 500f)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[6], 500f);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_173[6], false, false, false, false, false, false, false, false);
				}
				if (!__LIB_0__::func_198() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_565(208, "PRO_RunToCar", 7, 0, 0, 0);
					__LIB_30__::func_731();
				}
				break;
		}
		if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if (func_745(186))
			{
				func_565(187, "PRO_RespCar", 7, 1, 0, 0);
			}
		}
		if (iLocal_530 > 0 || iLocal_29 == 4)
		{
			if (!Local_304.f_20)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_745(103))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5474.493f, -5165.2886f, 72.70976f, 5364.6216f, -5163.0303f, 101.90911f, 100f, false, true, 0))
						{
							func_455(103, "PROHLP_SWITCH6", 1, -1, 2000);
						}
					}
				}
				if (__LIB_38__::func_177(&uLocal_260, 1, 1))
				{
					if (!__LIB_11__::func_106(&uLocal_260, 3))
					{
						__LIB_0__::func_401(463, 1, 0);
						if (__LIB_0__::func_1("PROHLP_SWITCH6"))
						{
							__LIB_30__::func_214(1);
						}
						Local_304.f_12 = uLocal_260[uLocal_260.f_7];
						Local_304.f_20 = 1;
						if ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/))
						{
							func_744(253, 1);
						}
						__LIB_11__::func_179(&uLocal_260, 2, 0);
					}
				}
			}
			else if (__LIB_42__::func_714(&Local_304, 0, 1148829696, 1148829696))
			{
				if (Local_304.f_18)
				{
					if (!Local_304.f_19)
					{
						if (__LIB_42__::func_600(&uLocal_260, 1, 1, 0))
						{
							func_799();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5352.877f, -5184.8613f, 80.78445f, 5322.01f, -5184.812f, 87.51882f, 23f, false, true, 0))
							{
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(iLocal_160);
							}
							func_725();
							__LIB_0__::func_203(&uLocal_318, 1, iLocal_162, "MICHAEL", 0, 1);
							__LIB_0__::func_203(&uLocal_318, 2, iLocal_163, "TREVOR", 0, 1);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[2]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[2], iLocal_229);
							}
							PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(iLocal_162, iLocal_164, 5f, 0f, 5f, -5f, 0f, -5f, 5f, true, false);
							PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(iLocal_163, iLocal_164, 5f, 0f, 5f, -5f, 0f, -5f, 5f, true, false);
							__LIB_10__::func_7(&iLocal_180);
							__LIB_10__::func_7(&iLocal_181);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
							{
								__LIB_37__::func_503(&iLocal_180, &(uLocal_260[0]), 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_260[0], 36, true);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[2]))
							{
								__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_260[2], 36, true);
							}
							PED::SET_PED_FIRING_PATTERN(iLocal_161, joaat("FIRING_PATTERN_SHORT_BURSTS"));
							if (func_745(253))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_161, 1000f, 0);
							}
							else
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_161, 1000f, 134217728);
							}
							func_744(253, 0);
							Local_304.f_19 = 1;
						}
					}
				}
			}
			if ((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS()) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_160, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_160);
			}
		}
		if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_32)
			{
				if (iLocal_31[iLocal_30] == -1)
				{
					iLocal_31[iLocal_30] = 6;
				}
				else if (iLocal_31[iLocal_30] > 0)
				{
					iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000));
					iLocal_31[iLocal_30] = (iLocal_31[iLocal_30] - 1);
					if (iLocal_30 == 0)
					{
						func_565(124, "PRO_CombatM", 7, 0, 0, 0);
						iLocal_30++;
					}
					else if (iLocal_30 == 1)
					{
						func_565(125, "PRO_CombatT", 7, 0, 0, 0);
						iLocal_30++;
					}
					else if (iLocal_30 == 2)
					{
						func_565(123, "PRO_CombatB", 7, 0, 0, 0);
						iLocal_30 = 0;
					}
				}
			}
		}
		if (!func_745(96))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_160, &iVar9, true);
			WEAPON::GET_AMMO_IN_CLIP(iLocal_160, iVar9, &iVar8);
			if (WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_160, iVar9, true) > 1)
			{
				if (iVar8 <= (WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_160, iVar9, true) / 5) * 4)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_455(96, "PROHLP_RELOAD", 1, -1, 2000);
					}
				}
			}
		}
		else if (__LIB_0__::func_1("PROHLP_RELOAD") && MISC::GET_GAME_TIMER() > iLocal_36)
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_160, &iVar9, true);
			WEAPON::GET_AMMO_IN_CLIP(iLocal_160, iVar9, &iVar8);
			if (iVar8 > (WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_160, iVar9, true) / 5) * 4)
			{
				__LIB_30__::func_214(1);
			}
		}
		if (iLocal_530 > 5)
		{
			if (!func_638(&(iLocal_173[3])))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[3]) < -100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[3], -100f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[3]) < -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[3], -100f);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_173[3], false, false, false, false, false, false, false, false);
			}
			if (!func_638(&(iLocal_173[4])))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[4]) < -100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[4], -100f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[4]) < -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[4], -100f);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_173[4], false, false, false, false, false, false, false, false);
			}
			if (!func_638(&(iLocal_173[5])))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_173[5]) < -100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173[5], -100f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[5]) < -100f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_173[5], -100f);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_173[5], false, false, false, false, false, false, false, false);
			}
		}
		if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_161, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_164, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5421.871f, -5115.145f, 80.35356f, 30f, 30f, 3.5f, false, true, 0))
		{
			if (!func_745(238))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_172, 5425.9536f, -5116.231f, 76.60962f, 5434.421f, -5113.6416f, 79.724915f, 5f, false, true, 0) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_172))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_172, 26, sLocal_98, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_172, 500f);
				}
				func_744(238, 1);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_161, 5341.267f, -5218.448f, 83.83739f, 1.5f, 7.5f, 2.5f, false, true, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_161, true), ENTITY::GET_ENTITY_COORDS(iLocal_160, true), true) > 50f)
			{
				__LIB_30__::func_217(iLocal_161, 5343.741f, -5209.257f, 81.7604f, 317.6852f, 1);
			}
		}
	}
	if (func_412())
	{
		MISC::SET_GAME_PAUSED(false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor3"));
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_163);
		if (iLocal_241 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_241);
			AUDIO::RELEASE_SOUND_ID(iLocal_241);
			iLocal_241 = -1;
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Explosions_Cop_Car");
		if (AUDIO::IS_ALARM_PLAYING("PROLOGUE_VAULT_ALARMS"))
		{
			AUDIO::STOP_ALARM("PROLOGUE_VAULT_ALARMS", true);
		}
		INTERIOR::UNPIN_INTERIOR(iLocal_196);
		MISC::SET_FAKE_WANTED_LEVEL(0);
		iVar10 = 0;
		while (iVar10 < iLocal_220)
		{
			TASK::REMOVE_COVER_POINT(iLocal_220[iVar10]);
			iVar10++;
		}
		__LIB_10__::func_7(&iLocal_185);
		__LIB_10__::func_7(&iLocal_186);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		if (CAM::DOES_CAM_EXIST(iLocal_193))
		{
			CAM::DESTROY_CAM(iLocal_193, false);
		}
		__LIB_11__::func_108(&iLocal_208);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_198);
		}
		__LIB_11__::func_108(&iLocal_210);
		__LIB_0__::func_202(&uLocal_318, 4);
		iVar10 = 0;
		while (iVar10 < iLocal_168)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar10]))
			{
				if (!PED::IS_PED_INJURED(iLocal_168[iVar10]))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_168[iVar10], true);
					AUDIO::STOP_PED_SPEAKING(iLocal_168[iVar10], true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_168[iVar10], 0, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_168[iVar10]));
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < iLocal_173)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar10], false))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_173[iVar10], false, false, false, false, false, false, false, false);
			}
			iVar10++;
		}
		if (PED::IS_PED_IN_GROUP(iLocal_161))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_161);
		}
		if (PED::IS_PED_IN_GROUP(iLocal_164))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_164);
		}
		iLocal_251++;
	}
}

int func_638(var uParam0)//Position - 0x850C0
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_639()//Position - 0x850E2
{
	switch (iLocal_531)
	{
		case 0:
			iLocal_531 = 1;
			break;
		case 1:
			if (!func_745(63))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_161, sLocal_120, "duck_shutter_player0", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_161, sLocal_120, "duck_shutter_player0", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_161, sLocal_120, "duck_shutter_player0") > 0.784f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_161);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_161, 5336.7935f, -5193.3403f, 81.9088f, 2f, false, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_161, 5329.6567f, -5195.1406f, 81.703f, 2f, true, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 5322.7285f, -5195.13f, 82.519f, 5343.3496f, -5190.2065f, 82.777f, 2f, false, 0.5f, 4f, false, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 5328.259f, -5195.131f, 81.6819f, 2f, 20000, 40000f, 0.5f);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_161, iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					iLocal_50 = 1;
					Local_52 = { ENTITY::GET_ENTITY_COORDS(iLocal_161, true) };
					PED::SET_PED_ACCURACY(iLocal_161, 2);
					func_744(63, 1);
				}
			}
			if (!func_745(9))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_120, "duck_shutter_brad", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_120, "duck_shutter_brad", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_164, sLocal_120, "duck_shutter_brad") > 0.95f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_164);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_164, 5331.9883f, -5191.7563f, 81.7708f, 2f, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_SHOOT_AT_COORD(0, 5343.3496f, -5190.2065f, 82.777f, 1000, 0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 5323.0347f, -5192.4453f, 82.519f, 5343.3496f, -5190.2065f, 82.777f, 1f, false, 0.5f, 4f, false, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 5325.671f, -5191.8677f, 81.7683f, 2f, 20000, 40000f, 0.5f);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_164, iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					iLocal_51 = 2;
					Local_53 = { ENTITY::GET_ENTITY_COORDS(iLocal_164, true) };
					PED::SET_PED_ACCURACY(iLocal_164, 2);
					func_744(9, 1);
				}
			}
			if (func_745(63) && func_745(9))
			{
				iLocal_531 = 2;
			}
			break;
		case 2:
			if (bLocal_527)
			{
				func_640(iLocal_161, 5353.9634f, -5190.479f, 81.7737f);
				func_640(iLocal_164, 5355.9717f, -5186.069f, 81.784f);
				iLocal_531 = 3;
			}
			break;
		case 3:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5356.7324f, -5201.1553f, 80.83122f, 5356.5454f, -5179.6f, 96.83691f, 20f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5417.894f, -5108.7925f, 75.56319f, 5412.488f, -5240.66f, 95.59789f, 100f, false, true, 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_168[9], true) && PED::IS_PED_DEAD_OR_DYING(iLocal_168[10], true)))
			{
				func_640(iLocal_161, 5373.1367f, -5189.1504f, 81.2204f);
				func_640(iLocal_164, 5372.17f, -5182.887f, 81.2387f);
				iLocal_531 = 4;
			}
			break;
		case 4:
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_168[9], true) && PED::IS_PED_DEAD_OR_DYING(iLocal_168[10], true))
			{
				func_640(iLocal_161, 5383.888f, -5184.4175f, 80.3353f);
				func_640(iLocal_164, 5384.1724f, -5190.8066f, 80.5079f);
				iLocal_531 = 5;
			}
			break;
		case 5:
			if (PED::IS_PED_INJURED(iLocal_168[11]) && PED::IS_PED_INJURED(iLocal_168[12]))
			{
				iLocal_531 = 6;
			}
			break;
		case 6:
			func_640(iLocal_161, 5398.9614f, -5178.0063f, 79.4069f);
			func_640(iLocal_164, 5400.8267f, -5180.272f, 79.3336f);
			iLocal_531 = 7;
			break;
		case 7:
			if (((PED::IS_PED_DEAD_OR_DYING(iLocal_168[11], true) && PED::IS_PED_DEAD_OR_DYING(iLocal_168[12], true)) && PED::IS_PED_DEAD_OR_DYING(iLocal_168[13], true)) && PED::IS_PED_DEAD_OR_DYING(iLocal_168[14], true))
			{
				func_640(iLocal_161, 5417.76f, -5175.6465f, 78.1579f);
				func_640(iLocal_164, 5417.4375f, -5168.9175f, 77.9954f);
				iLocal_531 = 8;
			}
			break;
		case 8:
			iLocal_531 = 9;
			break;
		case 9:
			break;
	}
}

void func_640(int iParam0, struct<3> Param1)//Position - 0x855CD
{
	float fVar0;
	int iVar1;
	fVar0 = 5f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 500);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, fVar0, false, false);
		if (!PED::IS_PED_IN_COMBAT(iParam0, 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_AIM_GUN_AT_COORD(0, Param1 - Vector(1f, 0f, 0f), iVar1, false, false);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 1000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_195);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
		}
	}
}

int func_642(int iParam0, char* sParam1)//Position - 0x85674
{
	if (!func_644(iParam0, sParam1))
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			func_643(iParam0, sParam1, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_643(int iParam0, char* sParam1, bool bParam2)//Position - 0x856AF
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	bool bVar3;
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iLocal_258 && !bVar3)
	{
		if (bParam2)
		{
			if (iLocal_258[iVar2] == 0)
			{
				iLocal_258[iVar2] = iVar1;
				bVar3 = true;
			}
		}
		else if (iLocal_258[iVar2] == iVar1)
		{
			iLocal_258[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_644(int iParam0, char* sParam1)//Position - 0x85721
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = 0;
	while (iVar2 < iLocal_258)
	{
		if (iLocal_258[iVar2] == iVar1)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_645()//Position - 0x85762
{
	int iVar0;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_57 = 1;
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_160, iLocal_226, false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_160, iLocal_226, 500, true, true);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SNOW_FOOTSTEPS", false, -1) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ICE_FOOTSTEPS", false, -1))
		{
			func_441(0, 0);
		}
		if (!__LIB_0__::func_75())
		{
			func_565(126, "PRO_Cover", 7, 1, 0, 0);
		}
		__LIB_26__::func_360(&iLocal_186, 5320.226f, -5186.1284f, 82.5187f, 0);
		if (func_474())
		{
			__LIB_30__::func_217(iLocal_160, 5317.109f, -5182.1265f, 82.5186f, 201.2845f, 0);
			__LIB_30__::func_217(uLocal_260[0], 5320.071f, -5187.5234f, 82.5186f, 97.2528f, 0);
			__LIB_30__::func_217(iLocal_164, 5316.591f, -5187.215f, 82.5186f, 269.9326f, 0);
			iLocal_154 = PED::CREATE_SYNCHRONIZED_SCENE(Local_156, Local_157, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[0], iLocal_154, sLocal_119, "set_c4_end_loop_player0", 1000f, -2f, 5, 51, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_154, sLocal_119, "set_c4_end_loop_brad", 1000f, -2f, 5, 51, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_154, true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) >= 1f)
		{
			iLocal_154 = PED::CREATE_SYNCHRONIZED_SCENE(Local_156, Local_157, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[0], iLocal_154, sLocal_119, "set_c4_end_loop_player0", 1000f, -2f, 5, 51, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_154, sLocal_119, "set_c4_end_loop_brad", 1000f, -2f, 5, 51, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_154, true);
		}
		switch (iLocal_29)
		{
			case 0:
				if (!__LIB_0__::func_75())
				{
					if (!func_745(218))
					{
						func_428(218, "PRO_SHUTTER", 7500, 1);
						__LIB_26__::func_360(&iLocal_186, 5320.226f, -5186.1284f, 82.5187f, 0);
						HUD::SET_BLIP_COLOUR(iLocal_186, 2);
					}
					else if (!__LIB_0__::func_405("PRO_SHUTTER", 0, 0))
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
						{
							switch (iLocal_30)
							{
								case 0:
									if (MISC::GET_GAME_TIMER() > iLocal_32)
									{
										func_413(178, "PRO_Under", "PRO_Under_1", 6, 1, 0, 0);
										if (!__LIB_0__::func_75())
										{
											iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											iLocal_30++;
										}
									}
									break;
								case 1:
									if (MISC::GET_GAME_TIMER() > iLocal_32)
									{
										func_413(179, "PRO_Under", "PRO_Under_2", 6, 1, 0, 0);
										if (!__LIB_0__::func_75())
										{
											iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											iLocal_30++;
										}
									}
									break;
								}
							}
						}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5318.1904f, -5187.5776f, 84.26867f, 2.5f, 4f, 1.75f, false, true, 0) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_125, "walk", 3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5318.1904f, -5187.5776f, 84.26867f, 10f, 10f, 1.75f, false, true, 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5320.486f, -5186.8735f, 82.51864f, 5315.874f, -5186.868f, 86.01864f, 3f, false, true, 0))
				{
					__LIB_10__::func_7(&iLocal_186);
					if (__LIB_0__::func_405("PRO_SHUTTER", 0, 0))
					{
						__LIB_0__::func_444("PRO_SHUTTER");
					}
					TASK::CLEAR_PED_TASKS(iLocal_160);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_160, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_120, "press_button_player2", Local_156 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_157, 0f, 2), 1f, 20000, 0.25f, 516, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_120, "press_button_player2", Local_156 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_157, 0f, 2)));
					CAM::SET_GAMEPLAY_COORD_HINT(5320.464f, -5186.7456f, 84.1165f, 2000, 2000, 2000, joaat("NO_FOV_HINT_HELPER"));
					func_463();
				}
				break;
			case 1:
				if (!func_745(255))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_120, "press_button_player2", Local_156 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_157, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0))
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							iLocal_155 = PED::CREATE_SYNCHRONIZED_SCENE(Local_156 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_157, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_160, iLocal_155, sLocal_120, "press_button_player2", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_155, false);
							func_744(255, 1);
						}
						else
						{
							iLocal_155 = PED::CREATE_SYNCHRONIZED_SCENE(Local_156 - Vector(0f, 0.41f, 0f) + Vector(0f, -0.06f, -0.18f), Local_157, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_160, iLocal_155, sLocal_120, "press_button_player2", 8f, -1.5f, 4, 0, 8f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_155, false);
							func_744(255, 1);
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155) || (func_745(255) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155)))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (!func_745(219))
						{
							func_565(218, "PRO_Shutter", 7, 0, 0, 0);
							func_744(219, 1);
						}
						func_463();
					}
					else if (!__LIB_11__::func_869("PRO_Shutter"))
					{
						__LIB_6__::func_833();
					}
				}
				break;
			case 2:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_155) > 0.178f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3))
						{
							ENTITY::PLAY_ENTITY_ANIM(iLocal_200, "GDoor_Open", sLocal_99, 1000f, false, true, false, 0f, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open", 0f);
							ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_200, sLocal_99, "GDoor_Open", 1f);
						}
					}
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_pro_door_snow", 5320.537f, -5188.5547f, 82.51863f, 0f, 0f, 0f, 1f, false, false, false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0.5f, 5f, 3);
					func_463();
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, sLocal_99, "GDoor_Open", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_200, sLocal_99, "GDoor_Open") >= 0.05f)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[0], sLocal_120, "duck_shutter_player0", Local_156, Local_157, 8f, -1.5f, -1, 790536, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_164, sLocal_120, "duck_shutter_brad", Local_156, Local_157, 4f, -1.5f, -1, 790536, 0.221f, 2, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_208, uLocal_260[0], false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_208, iLocal_164, false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_260[0], iLocal_208, false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_164, iLocal_208, false);
						func_463();
					}
				}
				break;
			case 4:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_155) >= 0.5f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_155))
				{
					__LIB_30__::func_731();
				}
				break;
		}
		if (SYSTEM::TIMERA() < 10000)
		{
			if (!func_745(10))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5320.4204f, -5182.821f, 82.51867f, 5315.8784f, -5182.8667f, 85.51867f, 3.5f, false, true, 0) && !PED::IS_PED_IN_COVER(iLocal_160, false)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160))
				{
					__LIB_5__::func_759(iLocal_160, "COUGH", "WAVELOAD_PAIN_MALE", 24);
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						TASK::TASK_PLAY_ANIM(iLocal_160, sLocal_125, "walk", 4f, -4f, -1, 48, 0f, false, false, false);
					}
					func_744(10, 1);
				}
			}
		}
		if (iLocal_29 >= 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_125, "walk", 3))
		{
			PED::SET_PED_CAPSULE(iLocal_160, 0.75f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_218))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_217)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_218, false);
			}
		}
		PED::SET_PED_RESET_FLAG(iLocal_160, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (func_412())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
		}
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			TASK::REMOVE_COVER_POINT(iLocal_222[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_221)
		{
			TASK::REMOVE_COVER_POINT(iLocal_221[iVar0]);
			iVar0++;
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_167);
		__LIB_0__::func_202(&uLocal_318, 4);
		if (iLocal_237 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_237);
			AUDIO::RELEASE_SOUND_ID(iLocal_237);
			iLocal_237 = -1;
		}
		if (iLocal_238 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_238);
			AUDIO::RELEASE_SOUND_ID(iLocal_238);
			iLocal_238 = -1;
		}
		if (iLocal_239 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_239);
			AUDIO::RELEASE_SOUND_ID(iLocal_239);
			iLocal_239 = -1;
		}
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_218))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_218, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_219))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_219, false);
		}
		iLocal_251++;
	}
}

void func_647()//Position - 0x861E3
{
	int iVar0;
	int iVar1;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		__LIB_0__::func_131();
		PED::SET_PED_TO_LOAD_COVER(iLocal_162, false);
		PED::SET_PED_TO_LOAD_COVER(iLocal_164, false);
		PED::SET_PED_STEERS_AROUND_PEDS(iLocal_162, false);
		iLocal_57 = 1;
		__LIB_26__::func_360(&iLocal_186, 5313.5903f, -5177.6826f, 82.5186f, 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
		iLocal_233 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5318.2f, -5185.1f, 83.7f, 10f, "des_prologue_door");
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) != 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233, 2);
			}
		}
		if (func_474())
		{
			__LIB_30__::func_217(iLocal_160, 5306.587f, -5179.8296f, 82.5187f, 269.0729f, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[0]);
			TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[0], sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 2f, -8f, -1, 790537, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[0], false, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_164);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_164, sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 8f, -8f, -1, 790537, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[0], sLocal_117, "set_c4_start_loop_a_player0", 3) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
		{
			PED::SET_PED_CAPSULE(iLocal_162, 0.75f);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[0], 5294.8237f, -5194.945f, 82.51883f, 5294.976f, -5177.9346f, 85.51878f, 4f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_164, 5294.8237f, -5194.945f, 82.51883f, 5294.976f, -5177.9346f, 85.51878f, 4f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
			PED::SET_PED_RESET_FLAG(iLocal_160, 102, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 2f);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				func_455(97, "PROHLP_RUN_KM", 1, -1, 2000);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
			{
				func_455(97, "PROHLP_RUN", 1, -1, 2000);
			}
		}
		if (MISC::IS_PC_VERSION())
		{
			if (__LIB_0__::func_1("PROHLP_RUN_KM"))
			{
				if (TASK::IS_PED_RUNNING(iLocal_163))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_36)
					{
						__LIB_30__::func_214(1);
					}
				}
			}
		}
		if (__LIB_0__::func_1("PROHLP_RUN"))
		{
			if (TASK::IS_PED_RUNNING(iLocal_163))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_36)
				{
					__LIB_30__::func_214(1);
				}
			}
		}
		if (__LIB_0__::func_1("PROHLP_RUN_FP"))
		{
			if (TASK::IS_PED_RUNNING(iLocal_163))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_36)
				{
					__LIB_30__::func_214(1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_260[0], PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2), 1f, 1f, 2f, false, true, 0))
		{
			uLocal_41[0] = MISC::GET_GAME_TIMER() + 1500;
		}
		if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_164, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 0f, 2), 1f, 1f, 2f, false, true, 0))
		{
			uLocal_41[2] = MISC::GET_GAME_TIMER() + 1500;
		}
		if (!func_745(4))
		{
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[0], sLocal_117, "set_c4_start_loop_a_player0", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_117, "set_c4_start_loop_a_brad", 3)) && MISC::GET_GAME_TIMER() > uLocal_41[0]) && MISC::GET_GAME_TIMER() > uLocal_41[2])
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					iLocal_151 = PED::CREATE_SYNCHRONIZED_SCENE(Local_152, Local_153, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[0], iLocal_151, sLocal_117, "set_c4_start_loop_a_player0", 4f, -2f, 5, 51, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_151, sLocal_117, "set_c4_start_loop_a_brad", 4f, -2f, 5, 51, 4f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_151, true);
					func_744(4, 1);
				}
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5320.482f, -5177.932f, 82.51865f, 5306.32f, -5177.9053f, 85.52598f, 12f, false, true, 0))
				{
					if (!func_745(119))
					{
						__LIB_10__::func_7(&iLocal_186);
						__LIB_26__::func_360(&iLocal_186, 5313.5903f, -5177.6826f, 82.5186f, 0);
						func_428(119, "PRO_COVER1", 7500, 1);
						func_455(83, "PROHLP_COVER1", 1, -1, 2000);
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							TASK::REMOVE_COVER_POINT(iLocal_221[iVar0]);
							iVar0++;
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5317.699f, -5175.994f, 82.5187f))
						{
							iLocal_221[0] = TASK::ADD_COVER_POINT(5317.699f, -5175.994f, 82.5187f, 187.3502f, 0, 0, 0, true);
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5314.7065f, -5175.741f, 82.5187f))
						{
							iLocal_221[1] = TASK::ADD_COVER_POINT(5314.7065f, -5175.741f, 82.5187f, 175.9433f, 0, 0, 0, true);
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5313.544f, -5176.6865f, 82.5186f))
						{
							iLocal_221[2] = TASK::ADD_COVER_POINT(5313.544f, -5176.6865f, 82.5186f, 269.647f, 0, 0, 0, true);
						}
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5313.5723f, -5177.626f, 82.5186f))
						{
							iLocal_221[3] = TASK::ADD_COVER_POINT(5313.5723f, -5177.626f, 82.5186f, 255.5294f, 0, 0, 0, true);
						}
						iLocal_223 = ITEMSET::CREATE_ITEMSET(true);
						iVar0 = 0;
						while (iVar0 < iLocal_221)
						{
							if (iLocal_221[iVar0] != 0)
							{
								if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_221[iVar0])))
								{
									ITEMSET::ADD_TO_ITEMSET(iLocal_221[iVar0], iLocal_223);
								}
							}
							iVar0++;
						}
						PED::SET_PED_PREFERRED_COVER_SET(iLocal_160, iLocal_223);
						TASK::ADD_COVER_BLOCKING_AREA(Vector(83.76878f, -5179.026f, 5313.6133f) - Vector(1.75f, 5.5f, 8f), Vector(83.76878f, -5179.026f, 5313.6133f) + Vector(1.75f, 5.5f, 8f), true, true, true, false);
						func_463();
					}
				}
				else
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_565(185, "PRO_move_hst", 7, 1, 0, 0);
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 1:
				if ((!PED::IS_PED_IN_COVER(iLocal_160, false) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160)) && func_649())
				{
					if (CAM::DOES_CAM_EXIST(iLocal_191))
					{
						if (!CAM::IS_CAM_RENDERING(iLocal_191))
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
							{
								switch (iLocal_30)
								{
									case 0:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									case 1:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											func_413(128, "PRO_Doors", "PRO_Doors_1", 8, 1, 0, 0);
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									case 2:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											func_565(131, "PRO_Set2", 7, 1, 0, 0);
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									case 3:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											func_413(129, "PRO_Doors", "PRO_Doors_3", 8, 1, 0, 0);
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									case 4:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											func_565(133, "PRO_cover1", 7, 1, 0, 0);
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									case 5:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											func_565(132, "PRO_Set3", 7, 1, 0, 0);
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									case 6:
										if (MISC::GET_GAME_TIMER() > iLocal_32)
										{
											func_565(134, "PRO_cover2", 7, 1, 0, 0);
											if (!__LIB_0__::func_75())
											{
												iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
												iLocal_30++;
											}
										}
										break;
									}
								}
							}
						}
				}
				if ((PED::IS_PED_IN_COVER(iLocal_160, false) && ((((ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.699f, -5175.994f, 82.5187f, 0.5f, 0.5f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.699f, -5175.994f, 82.5187f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5314.7065f, -5175.741f, 82.5187f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5313.544f, -5176.6865f, 82.5186f, 0.5f, 0.5f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5313.5723f, -5177.626f, 82.5186f, 0.5f, 0.5f, 2f, false, true, 0))) || PED::IS_PED_GOING_INTO_COVER(iLocal_160))
				{
					func_477(PLAYER::PLAYER_ID(), 0, 256);
					PED::SET_PED_RESET_FLAG(iLocal_160, 406, true);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
					}
				}
				else
				{
					func_477(PLAYER::PLAYER_ID(), 1, 0);
				}
				if ((((((((PED::IS_PED_IN_COVER(iLocal_160, true) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160)) && !PED::IS_PED_IN_COVER_FACING_LEFT(iLocal_160)) && ((((ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.699f, -5175.994f, 82.5187f, 1f, 1f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.699f, -5175.994f, 82.5187f, 1f, 1f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5314.7065f, -5175.741f, 82.5187f, 1f, 1f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5313.544f, -5176.6865f, 82.5186f, 1f, 1f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5313.5723f, -5177.626f, 82.5186f, 1f, 1f, 2f, false, true, 0))) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5320.4766f, -5178.7534f, 82.518654f, 5307.015f, -5178.6616f, 85.518654f, 10f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5317.8433f, -5185.008f, 82.518654f, 5317.71f, -5177.2324f, 85.518654f, 5.25f, false, true, 0)) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151)) && MISC::GET_GAME_TIMER() > uLocal_41[0]) && MISC::GET_GAME_TIMER() > uLocal_41[2])
				{
					func_477(PLAYER::PLAYER_ID(), 0, 256);
					SYSTEM::SETTIMERB(0);
					if (__LIB_0__::func_405("PRO_COVER1", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_30__::func_214(1);
					}
					__LIB_10__::func_7(&iLocal_186);
					if (!__LIB_4__::func_739() || PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER())
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						TASK::TASK_PLAY_ANIM(0, sLocal_118, "set_c4_mainaction_trevor", 4f, -4f, -1, 2, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.699f, -5175.994f, 82.5187f, 1f, 1f, 2f, false, true, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						TASK::TASK_PLAY_ANIM(0, sLocal_118, "SET_C4_MainAction_Trevor_Fps_Pos2", 4f, -4f, -1, 2, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						TASK::TASK_PLAY_ANIM(0, sLocal_118, "set_c4_mainaction_trevor_fps", 4f, -4f, -1, 2, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					}
					TASK::TASK_PERFORM_SEQUENCE(iLocal_160, iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, false, false);
					iLocal_151 = PED::CREATE_SYNCHRONIZED_SCENE(Local_152, Local_153, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[0], iLocal_151, sLocal_118, "set_c4_mainaction_player0", 4f, -2f, 5, 51, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_151, sLocal_118, "set_c4_mainaction_brad", 4f, -2f, 5, 51, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_151, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_151, false);
					iLocal_202 = OBJECT::CREATE_OBJECT(iLocal_245, PED::GET_PED_BONE_COORDS(iLocal_164, 60309, Local_67), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_202, iLocal_164, PED::GET_PED_BONE_INDEX(iLocal_164, 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
					iLocal_203 = OBJECT::CREATE_OBJECT(iLocal_246, 5298.27f, -5187.85f, 83.87f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_203, 0f, 0f, -90.52732f, 2, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_203, iLocal_164, PED::GET_PED_BONE_INDEX(iLocal_164, 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_203, false, false);
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) != 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233, 4);
						}
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 0f, 3);
					func_463();
				}
				break;
			case 2:
				AUDIO::LOAD_STREAM("PROLOGUE_BLAST_SECURITY_DOORS_MASTER", 0);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (!__LIB_0__::func_75())
				{
					func_413(130, "PRO_Doors", "PRO_Doors_4", 8, 1, 0, 0);
				}
				if (!func_745(53))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) > 0.037f)
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_202, Local_67, true, 5000, 2500, 2500, joaat("NO_FOV_HINT_HELPER"));
							if (!iLocal_54)
							{
								RECORDING::REPLAY_START_EVENT(3);
								iLocal_54 = 1;
							}
							func_744(53, 1);
						}
					}
				}
				if (!func_745(54))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) > 0.232f)
						{
							CAM::STOP_GAMEPLAY_HINT(false);
							func_744(54, 1);
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) > 0.239f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_202))
						{
							ENTITY::DETACH_ENTITY(iLocal_202, false, true);
							ENTITY::DETACH_ENTITY(iLocal_203, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_202, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_203, true);
						}
						func_463();
					}
				}
				break;
			case 3:
				AUDIO::LOAD_STREAM("PROLOGUE_BLAST_SECURITY_DOORS_MASTER", 0);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) > 0.403f)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_202, false, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_203, true, false);
						if (iLocal_236 == -1)
						{
							iLocal_236 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_236, "Security_Door_Bomb_Bleeps", iLocal_203, "Prologue_Sounds", false, 0);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) > 0.453f)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_202, false, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_203, true, false);
						MISC::CLEAR_AREA(5318.122f, -5185.5044f, (85.7186f - 3.2f), 4f, true, false, false, false);
						CAM::SHAKE_CAM(iLocal_191, "MEDIUM_EXPLOSION_SHAKE", 0.1f);
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_door_blast", 5318f, -5185.06f, 83.82f, 0f, 0f, 0f, 1f, false, false, false);
						}
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_219))
							{
								iLocal_219 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_fog", 5313.3545f, -5177.7656f, 82.5186f, 0f, 0f, 0f, 1f, false, false, false, false);
							}
						}
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_218))
							{
								iLocal_218 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_ray_pro_door_embers", 5318.1626f, -5184.8325f, 82.5186f, 0f, 0f, 0f, 1f, false, false, false, false);
								iLocal_217 = MISC::GET_GAME_TIMER() + 15000;
							}
						}
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 500, 256);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
						iLocal_238 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_238, "COPS_ARRIVE", 5359.9f, -5190f, 83f, "Prologue_Sounds", false, 0, false);
						iLocal_239 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_239, "Security_Door_Alarm", 5318.2f, -5184.8f, 84.1f, "Prologue_Sounds", false, 0, false);
						if (iLocal_236 != -1)
						{
							AUDIO::STOP_SOUND(iLocal_236);
							AUDIO::RELEASE_SOUND_ID(iLocal_236);
							iLocal_236 = -1;
						}
						if (!iLocal_66)
						{
							AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
							iLocal_66 = 1;
						}
						AUDIO::PLAY_STREAM_FRONTEND();
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) == 5)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233, 6);
							}
						}
						func_796(12);
						__LIB_11__::func_108(&iLocal_202);
						__LIB_11__::func_108(&iLocal_203);
						__LIB_6__::func_834(iLocal_164, "GENERIC_CURSE_HIGH", 10);
						func_463();
					}
				}
				break;
			case 4:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_151) > 0.63f)
					{
						if (iLocal_54)
						{
							RECORDING::REPLAY_STOP_EVENT();
							iLocal_54 = 0;
						}
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_160, true), -1, false, 0.5f, true, false, 0, false);
						while (!PED::IS_PED_IN_COVER(iLocal_160, false) || PED::IS_PED_GOING_INTO_COVER(iLocal_160))
						{
							if (PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER())
							{
								if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_118, "set_c4_mainaction_trevor", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_118, "set_c4_mainaction_trevor_fps", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_118, "SET_C4_MainAction_Trevor_Fps_Pos2", 3)) || PED::IS_PED_IN_COVER(iLocal_160, false)) || PED::IS_PED_GOING_INTO_COVER(iLocal_160))
								{
									CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
								}
							}
							func_441(0, 0);
						}
						func_477(PLAYER::PLAYER_ID(), 1, 0);
						func_565(126, "PRO_Cover", 7, 1, 0, 0);
						HUD::CLEAR_PRINTS();
						__LIB_30__::func_214(1);
						func_455(85, "PROHLP_COVER3", 1, -1, 2000);
						__LIB_30__::func_731();
					}
				}
				break;
		}
		if (PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER())
		{
			if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_118, "set_c4_mainaction_trevor", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_118, "set_c4_mainaction_trevor_fps", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_118, "SET_C4_MainAction_Trevor_Fps_Pos2", 3)) || PED::IS_PED_IN_COVER(iLocal_160, false)) || PED::IS_PED_GOING_INTO_COVER(iLocal_160))
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
		}
		if (iLocal_29 < 3)
		{
			if (((((((ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5306.9014f, -5175.9985f, 83.51878f, 1.75f, 3f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5309.8574f, -5173.8364f, 83.51878f, 3.75f, 1.75f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5319.7017f, -5174.7817f, 83.51878f, 1.25f, 2f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5316.188f, -5178.3506f, 83.51878f, 1.25f, 2f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.588f, -5178.854f, 83.51878f, 3.25f, 0.75f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.539f, -5183.494f, 83.51878f, 3f, 1.5f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5317.539f, -5183.494f, 83.51878f, 3f, 1.5f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5310.659f, -5182.642f, 84.51878f, 6.5f, 1f, 2f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PED::SET_PED_RESET_FLAG(iLocal_160, 102, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_218))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_217)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_218, false);
			}
		}
	}
	if (func_412())
	{
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_RESET_FLAG(iLocal_160, 102, false);
		PED::SET_PED_STEERS_AROUND_PEDS(iLocal_162, true);
		iVar1 = 0;
		while (iVar1 < iLocal_220)
		{
			TASK::REMOVE_COVER_POINT(iLocal_220[iVar1]);
			iVar1++;
		}
		TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
		if (ITEMSET::IS_ITEMSET_VALID(iLocal_223))
		{
			ITEMSET::DESTROY_ITEMSET(iLocal_223);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_233))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) != 10 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233) != 7)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_233, 9);
			}
		}
		__LIB_11__::func_108(&iLocal_202);
		__LIB_11__::func_108(&iLocal_203);
		__LIB_11__::func_108(&iLocal_204);
		__LIB_11__::func_108(&iLocal_205);
		__LIB_11__::func_108(&iLocal_206);
		__LIB_10__::func_7(&iLocal_186);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_245);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_247);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_248);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_249);
		iLocal_251++;
	}
}

int func_649()//Position - 0x8767F
{
	if (bLocal_508)
	{
		return 1;
	}
	return 0;
}

void func_651()//Position - 0x876A0
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	struct<3> Var27;
	float fVar28;
	int iVar29;
	if (func_537())
	{
		__LIB_42__::func_876(1, "cutGuard", 0, 0, 0, 1);
		__LIB_11__::func_153(&uLocal_260, 4, 4, 4);
		func_477(PLAYER::PLAYER_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			__LIB_30__::func_732(&iLocal_167, joaat("CSB_ProlSec"), 5297.831f, -5186.644f, (85.719f - 3.2f), 91.975f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167, 3, 1, 0, 0);
			__LIB_0__::func_203(&uLocal_318, 4, iLocal_167, "PROGUARD", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CSB_ProlSec"));
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_167, iLocal_224, -1, true, true);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_167, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_167, true);
			PED::SET_PED_AS_ENEMY(iLocal_167, true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_167, true);
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_167);
		}
		ENTITY::SET_ENTITY_VISIBLE(iLocal_167, true, false);
		func_796(7);
		iLocal_57 = 0;
		HUD::CLEAR_PRINTS();
		__LIB_30__::func_214(1);
		iLocal_526 = 0;
		if (iLocal_59 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("pro_mcs_3_pt1", 8);
		}
		PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_162, 2, 5, 0);
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, 5299.933f, -5187.6924f, (85.7184f - 3.2f), 165.5154f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[2]);
			__LIB_30__::func_217(uLocal_260[2], 5297.2866f, -5189.6323f, (85.7187f - 3.2f), 113.4281f, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_796(35);
			iLocal_232 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5298.889f, -5189.087f, 82.5182f, 10f, "DES_VaultDoor001");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_232))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232, 9);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_212[0]))
			{
				iLocal_212[0] = OBJECT::CREATE_OBJECT(joaat("prop_michael_balaclava"), 5296.5527f, -5187.3887f, 82.51867f, true, true, false);
			}
			if (iLocal_64 == 0)
			{
				ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
				ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
				iLocal_64 = 1;
			}
			if (iLocal_59 == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 2, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 8, 0, 0, 0);
				__LIB_0__::func_503(124, 1);
				__LIB_11__::func_108(&(iLocal_211[1]));
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[0]))
				{
					iLocal_211[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 5293.26f, -5192.22f, 82.63f, true, true, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_211[0], 5293.26f, -5192.22f, 82.63f, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_211[0], 77.76f, -1.08f, -130.68f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[0], true);
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_211[0], iLocal_196);
				}
				iLocal_197[0] = __LIB_35__::func_97(iLocal_162, 1, 0, 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[0]))
				{
					iLocal_201 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_CARBINERIFLE")), 5295.052f, -5188.801f, 82.562f, true, true, false);
				}
				else
				{
					iLocal_201 = iLocal_197[0];
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_201, 5295.052f, -5188.801f, 82.562f, false, false, true);
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_201, -85.792f, -1.133f, -92.236f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_201, true);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_160, true);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_160, sLocal_113, "hold_head_loop_base_player0", Local_149, Local_150, 1000f, -1000f, -1, 790537, 0f, 2, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_167, sLocal_113, "hold_head_loop_base_guard", Local_149, Local_150, 1000f, -1000f, -1, 790537, 0f, 2, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_167, iLocal_224, true);
				__LIB_30__::func_217(uLocal_260[2], 5294.4834f, -5191.221f, 82.5187f, 329.4068f, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_260[2], iLocal_226, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
				TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Aiming"), false);
				TASK::TASK_AIM_GUN_AT_COORD(0, 5296.375f, -5187.973f, (83.83895f + 0.1f), -1, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_260[2], iLocal_195);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
				func_477(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_57 = 1;
				func_6();
				__LIB_35__::func_983(&uLocal_260, 2);
				__LIB_42__::func_600(&uLocal_260, 1, 0, 0);
				func_799();
				__LIB_0__::func_203(&uLocal_318, 1, uLocal_260[0], "MICHAEL", 0, 1);
				__LIB_0__::func_203(&uLocal_318, 2, iLocal_160, "TREVOR", 0, 1);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_163, iLocal_167, -1, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_163, true, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_194))
				{
					CAM::SET_CAM_ACTIVE(iLocal_194, false);
					CAM::DESTROY_CAM(iLocal_194, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[0], false))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_260[0], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
					PED::SET_PED_ACCURACY(uLocal_260[0], 50);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_260[0], false);
					ENTITY::SET_ENTITY_HEALTH(uLocal_260[0], 400, 0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_260[0], true);
					PED::SET_PED_ACCURACY(uLocal_260[0], 0);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_167, sLocal_113, "hold_head_loop_base_guard", 3))
					{
						fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_167, sLocal_113, "hold_head_loop_base_guard");
					}
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[0], sLocal_113, "hold_head_loop_base_player0", Local_149, Local_150, 1000f, -1000f, -1, 793097, fVar0, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[0], false, false);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_167, sLocal_113, "hold_head_loop_base_guard", 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_167, sLocal_113, "hold_head_loop_base_guard", fVar0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_167, false, false);
					}
					__LIB_37__::func_503(&iLocal_180, &(uLocal_260[0]), 0);
					__LIB_10__::func_7(&iLocal_181);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_260[0], false);
					PED::SET_PED_COMPONENT_VARIATION(uLocal_260[0], 9, 12, 0, 0);
				}
				iLocal_29 = 5;
				__LIB_11__::func_179(&uLocal_260, 2, 1);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Grabs_mike", iLocal_167, 0);
		}
		if ((iLocal_29 > 0 && iLocal_59 == 0) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
		if (iLocal_29 > 0 && iLocal_29 <= 4)
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((8f * 1000f)))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[0]))
					{
						iLocal_211[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 5293.26f, -5192.22f, 82.63f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_211[0], 5293.26f, -5192.22f, 82.63f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_211[0], 77.76f, -1.08f, -130.68f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[0], true);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_211[0], iLocal_196);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true))
			{
				CAM::STOP_CAM_SHAKING(iLocal_191, true);
				CAM::SET_CAM_PARAMS(iLocal_191, 5297.0195f, -5186.3037f, 84.22712f, -7.860384f, -0.000164f, 165.09369f, 24f, 0, 0, 0, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_191, 4f);
				CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 1f);
				CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_191, 2f);
				CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((155f - ENTITY::GET_ENTITY_HEADING(iLocal_160)));
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[0]))
				{
					iLocal_211[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), 5293.26f, -5192.22f, 82.63f, true, true, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_211[0], 5293.26f, -5192.22f, 82.63f, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_211[0], 77.76f, -1.08f, -130.68f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_211[0], true);
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_211[0], iLocal_196);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				func_6();
				PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 2, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 8, 0, 0, 0);
				__LIB_0__::func_503(124, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_160, true);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_160, sLocal_113, "hold_head_loop_base_player0", Local_149, Local_150, 1000f, -1000f, -1, 790537, 0f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, false, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_SecurityGuard_Grabs_mike", 0))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_167, sLocal_113, "hold_head_loop_base_guard", Local_149, Local_150, 1000f, -4f, -1, 790537, 0f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_167, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_167, iLocal_224, true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				__LIB_30__::func_217(uLocal_260[2], 5294.4834f, -5191.221f, 82.5187f, 329.4068f, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_260[2], iLocal_226, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
				TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Aiming"), false);
				TASK::TASK_AIM_GUN_AT_COORD(0, 5296.375f, -5187.973f, (83.83895f + 0.1f), -1, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_260[2], iLocal_195);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[1], iLocal_163);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Security_guard_pistol", 0))
			{
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (__LIB_0__::func_90() && ((PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_162) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_146)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_146) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_146) > 0.95f)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_260[2], "Trevor", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_167, "PRO_SecurityGuard_Grabs_mike", 0, 0, 0);
					iLocal_197[0] = __LIB_35__::func_97(iLocal_162, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[0], "Michaels_weapon", 0, 0, 0);
					iLocal_197[1] = __LIB_35__::func_97(iLocal_163, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[1], "Trevors_weapon", 0, 0, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(2048);
					func_441(0, 0);
					if (!__LIB_0__::func_2(0))
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_212[0]))
					{
						iLocal_212[0] = OBJECT::CREATE_OBJECT(joaat("prop_michael_balaclava"), 5296.5527f, -5187.3887f, 82.51867f, true, true, false);
					}
					if (iLocal_64 == 0)
					{
						ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
						ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
						iLocal_64 = 1;
					}
					__LIB_11__::func_108(&(iLocal_211[1]));
					MISC::CLEAR_AREA(5298.8394f, -5189.151f, (85.7183f - 3.2f), 10f, true, false, false, false);
					__LIB_0__::func_503(124, 1);
					RECORDING::REPLAY_START_EVENT(3);
					func_463();
				}
				break;
			case 1:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_796(35);
					iLocal_29 = 4;
				}
				if (!func_745(257))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2f * 1000f)))
					{
						func_796(6);
						func_744(257, 1);
					}
				}
				if ((CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2.234332f * 1000f)) && !CUTSCENE::WAS_CUTSCENE_SKIPPED()) || !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 2, 5, 0, 0);
					__LIB_0__::func_503(124, 1);
					func_463();
				}
				break;
			case 2:
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_463();
				}
				else
				{
					func_796(35);
					iLocal_29 = 4;
				}
				break;
			case 3:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_796(35);
					iLocal_29 = 4;
				}
				if ((CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((11.621325f * 1000f)) && !CUTSCENE::WAS_CUTSCENE_SKIPPED()) || !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_463();
				}
				break;
			case 4:
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213[3]))
					{
						iLocal_213[3] = OBJECT::CREATE_OBJECT(joaat("prop_2nd_hostage_scene"), 5297.717f, -5188.909f, (80.549f + 1f), true, true, false);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_213[3], iLocal_196, joaat("V_CashD_side"));
					}
					RECORDING::REPLAY_STOP_EVENT();
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					__LIB_0__::func_403(455, 0);
					func_477(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_57 = 1;
					func_6();
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[0]))
					{
						iLocal_201 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_CARBINERIFLE")), 5295.052f, -5188.801f, 82.562f, true, true, false);
					}
					else
					{
						iLocal_201 = iLocal_197[0];
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_201, 5295.052f, -5188.801f, 82.562f, false, false, true);
					}
					ENTITY::SET_ENTITY_ROTATION(iLocal_201, -85.792f, -1.133f, -92.236f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_201, true);
					__LIB_7__::func_279(1, 1, 0, 0, 0, 0, 0);
					INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_CashD_vault");
					CAM::SET_CAM_NEAR_CLIP(iLocal_191, 0.5f);
					__LIB_0__::func_131();
					__LIB_11__::func_179(&uLocal_260, 2, 1);
					func_463();
				}
				break;
			case 5:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
				{
					AUDIO::START_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
				{
					if (!func_745(43))
					{
						if (__LIB_6__::func_964(1))
						{
							if (SYSTEM::TIMERA() > 500)
							{
								if (!func_745(102))
								{
									if (!__LIB_0__::func_1("PROHLP_SWITCH4"))
									{
										__LIB_30__::func_214(1);
										__LIB_0__::func_187("PROHLP_SWITCH4");
									}
								}
							}
						}
						else
						{
							if (!__LIB_0__::func_1("PROHLP_SWITCH2"))
							{
								if (!__LIB_0__::func_1("PROHLP_SWITCH2"))
								{
									__LIB_30__::func_214(1);
									__LIB_0__::func_187("PROHLP_SWITCH2");
								}
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
				}
				if (func_745(51))
				{
					if (!PED::IS_PED_INJURED(iLocal_167))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_167))
							{
								TASK::CLEAR_PED_TASKS(iLocal_167);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_116, "KILL_Michael_Guard", Local_149, Local_150, 8f, -1.5f, -1, 790536, 0.133f, 2, 1);
								TASK::TASK_COMBAT_PED(0, uLocal_260[2], 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_167, iLocal_195);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_167, iLocal_230);
								PED::SET_PED_KEEP_TASK(iLocal_167, true);
							}
						}
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_167, PED::GET_PED_BONE_COORDS(iLocal_162, 31086, Local_67), false);
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(5296.7f, -5188f, 84.1f, PED::GET_PED_BONE_COORDS(iLocal_162, 31086, Local_67), 1000, true, joaat("WEAPON_PISTOL"), 0, true, true, -1f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_162, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_167))
						{
							TASK::CLEAR_PED_TASKS(iLocal_167);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_116, "KILL_Michael_Guard", Local_149, Local_150, 8f, -1.5f, -1, 790536, 0.133f, 2, 1);
							TASK::TASK_COMBAT_PED(0, iLocal_160, 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_167, iLocal_195);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_167, iLocal_230);
						}
					}
				}
				if ((PED::IS_PED_SHOOTING(iLocal_160) && !PED::IS_PED_INJURED(iLocal_167)) || (func_745(64) && MISC::GET_GAME_TIMER() > iLocal_32))
				{
					if (!PED::IS_PED_INJURED(iLocal_162))
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_162) > 101)
						{
							PED::SET_PED_ACCURACY(iLocal_167, 100);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_167, 27, true);
							func_744(51, 1);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[0], false))
				{
					if (!CAM::DOES_CAM_EXIST(Local_304.f_9))
					{
						if (!PED::IS_PED_INJURED(iLocal_167))
						{
							if ((!func_745(91) && !func_745(92)) && !func_745(93))
							{
								__LIB_42__::func_876(2, "cutGuard(AimAtGuard)", 0, 0, 0, 1);
								PED::SET_PED_DIES_WHEN_INJURED(uLocal_260[0], true);
								if (__LIB_11__::func_869("PRO_Idle4"))
								{
									cLocal_94 = { __LIB_0__::func_389() };
								}
								__LIB_30__::func_214(1);
								__LIB_6__::func_833();
								if (MISC::GET_PROFILE_SETTING(0) == 0)
								{
									func_455(92, "PROHLP_FREEAIMb", 1, -1, 2000);
								}
								else if (MISC::GET_PROFILE_SETTING(0) == 1)
								{
									func_455(93, "PROHLP_FREEAIMc", 1, -1, 2000);
								}
								else if (MISC::GET_PROFILE_SETTING(0) == 2)
								{
									func_455(93, "PROHLP_FREEAIMc", 1, -1, 2000);
								}
								__LIB_37__::func_503(&iLocal_183, &iLocal_167, 1);
								HUD::SET_BLIP_PRIORITY(iLocal_183, 8);
								iLocal_57 = 1;
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								iLocal_59 = 0;
								SYSTEM::SETTIMERB(0);
							}
							if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_160, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_160, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_160, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
							{
								iVar1 = 2;
								__LIB_0__::func_471(&iVar2, &iVar3, &iVar4, &iVar5, 0);
								if (((((((iVar2 < -iVar1 || iVar2 > iVar1) || (iVar3 < -iVar1 || iVar3 > iVar1)) || (iVar4 < -iVar1 || iVar4 > iVar1)) || (iVar5 < -iVar1 || iVar5 > iVar1)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/))
								{
									TASK::CLEAR_PED_TASKS(iLocal_160);
								}
							}
							if ((func_745(91) || func_745(92)) || func_745(93))
							{
								iVar6 = 8;
								__LIB_0__::func_471(&uVar7, &uVar8, &iVar9, &iVar10, 0);
								if (!func_745(88) && (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)))
								{
									func_455(88, "PROHLP_FREEAIM2", 1, 7000, 4000);
									SYSTEM::SETTIMERB(0);
								}
								else if ((func_745(88) && !func_745(89)) && (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (SYSTEM::TIMERB() > 2000 && ((iVar9 < -iVar6 || iVar9 > iVar6) || (iVar10 < -iVar6 || iVar10 > iVar6)))))
								{
									func_455(89, "PROHLP_FREEAIM3", 1, 5000, 2000);
									SYSTEM::SETTIMERB(0);
								}
								else if (((func_745(88) && func_745(89)) && !func_745(90)) && (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/)))
								{
									func_455(90, "PROHLP_FREEAIM4", 1, -1, 2000);
								}
							}
						}
						else
						{
							iLocal_240 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_240, "Guard_Headshot", 5296.7f, -5188f, 84.1f, "Prologue_Sounds", false, 0, false);
							WEAPON::SET_PED_DROPS_WEAPON(iLocal_167);
							func_796(10);
							__LIB_0__::func_402(0, 455);
							func_477(PLAYER::PLAYER_ID(), 0, 0);
							PED::SET_PED_TO_LOAD_COVER(uLocal_260[0], true);
							TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[0], sLocal_114, "wipe_blood_player0", Local_149, Local_150, 1000f, -1.5f, -1, 790536, 0f, 2, 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_260[0], 16);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[0], false, false);
							PED::APPLY_PED_BLOOD_SPECIFIC(uLocal_260[0], 1, 0.424f, 0.671f, 310.632f, 0.7f, 3, 0f, "Scripted_Ped_Splash_Back");
							TASK::TASK_PLAY_ANIM(iLocal_160, sLocal_115, "shot_guard_player2", 1000f, -1.5f, -1, 0, 0f, false, true, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, false, false);
							PED::SET_PED_TO_LOAD_COVER(iLocal_164, true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_114, "wipe_blood_brad", Local_149, Local_150, 1000f, -1.5f, -1, 790536, 0.133f, 2, 1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_164, iLocal_195);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
							__LIB_10__::func_7(&iLocal_183);
							iLocal_57 = 1;
							func_6();
							func_565(206, "PRO_Rescued", 7, 1, 0, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 4f, 3);
							if (!func_559(&iLocal_167))
							{
								PED::SET_PED_CAN_RAGDOLL(iLocal_167, true);
								TASK::CLEAR_PED_TASKS(iLocal_167);
							}
							func_441(10, 0);
							func_477(PLAYER::PLAYER_ID(), 1, 0);
							PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_164, 9, 1, 0);
							__LIB_11__::func_108(&(iLocal_213[3]));
							func_463();
						}
					}
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (!func_745(177))
					{
						func_565(177, "PRO_Idle4", 7, 1, 0, 0);
					}
					else if (!func_745(157))
					{
						if (__LIB_20__::func_728() == 2)
						{
							func_428(157, "PRO_GUARD", 3500, 1);
							if (!__LIB_0__::func_75())
							{
								func_565(191, "PRO_shoot", 6, 1, 1, 0);
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_32)
						{
							if (!func_745(64))
							{
								iLocal_32 = MISC::GET_GAME_TIMER() + 30000;
								func_744(64, 1);
							}
						}
					}
					else if (iLocal_526 == 0)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_94))
						{
							func_656("PRO_Idle4", &cLocal_94, 7, 0, 0);
							StringCopy(&cLocal_94, __LIB_0__::func_459(), 24);
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_32)
						{
							if (!func_745(64))
							{
								iLocal_32 = MISC::GET_GAME_TIMER() + 20000;
								func_744(64, 1);
							}
						}
					}
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				break;
			case 6:
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_201))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[0], sLocal_114, "wipe_blood_player0", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_260[0], sLocal_114, "wipe_blood_player0") >= 0.396f)
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_260[0], iLocal_226, false))
							{
								WEAPON::GIVE_WEAPON_TO_PED(uLocal_260[0], iLocal_226, 500, true, true);
							}
							__LIB_11__::func_108(&iLocal_201);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_211[0]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_114, "wipe_blood_brad", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_164, sLocal_114, "wipe_blood_brad") >= 0.318f)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[1]))
							{
								iLocal_211[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, true, true, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211[1], iLocal_164, PED::GET_PED_BONE_INDEX(iLocal_164, 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[2]))
							{
								iLocal_211[2] = OBJECT::CREATE_OBJECT(joaat("p_csh_strap_01_s"), 5293.26f, -5192.22f, 82.63f, true, true, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211[2], iLocal_164, PED::GET_PED_BONE_INDEX(iLocal_164, 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
							}
							ENTITY::PLAY_ENTITY_ANIM(iLocal_211[1], "wipe_blood_bag", sLocal_114, 1000f, false, false, false, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_164, sLocal_114, "wipe_blood_brad"), 0);
							ENTITY::PLAY_ENTITY_ANIM(iLocal_211[2], "wipe_blood_strap", sLocal_114, 1000f, false, false, false, ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_164, sLocal_114, "wipe_blood_brad"), 0);
							__LIB_11__::func_108(&(iLocal_211[0]));
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 4.5f, 3);
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_211[1]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_114, "wipe_blood_brad", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_164, sLocal_114, "wipe_blood_brad") >= 0.465f)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_164))
							{
								PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 1, 0, 0);
								func_441(0, 0);
								__LIB_11__::func_108(&(iLocal_211[1]));
								__LIB_11__::func_108(&(iLocal_211[2]));
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[0], sLocal_114, "wipe_blood_player0", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_260[0], sLocal_114, "wipe_blood_player0") >= 0.9f)
					{
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2) - Vector(1f, 0f, 0f)))
						{
							iLocal_220[0] = TASK::ADD_COVER_POINT(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2) - Vector(1f, 0f, 0f), -__LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2)), 1, 2, 0, false);
						}
						TASK::CLEAR_PED_TASKS(uLocal_260[0]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2), 2f, 20000, 2f, 1, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2), 1000, false, 0.9f, true, true, iLocal_220[0], true);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 2f, -8f, -1, 790537, 0f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_260[0], iLocal_195);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
						PED::FORCE_PED_MOTION_STATE(uLocal_260[0], joaat("MotionState_Idle"), true, 0, false);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_114, "wipe_blood_brad", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_164, sLocal_114, "wipe_blood_brad") >= 0.781f)
					{
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 0f, 2) - Vector(1f, 0f, 0f)))
						{
							iLocal_220[1] = TASK::ADD_COVER_POINT(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 0f, 2) - Vector(1f, 0f, 0f), (-__LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 0f, 2)) - 90f), 1, 2, 0, false);
						}
						TASK::CLEAR_PED_TASKS(iLocal_164);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 0f, 2), 2f, 20000, 2f, 1, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 0f, 2), 1000, false, 0.9f, true, true, iLocal_220[1], true);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "set_c4_start_loop_a_brad", Local_152, Local_153, 8f, -8f, -1, 790537, 0f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_164, iLocal_195);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
						PED::FORCE_PED_MOTION_STATE(iLocal_164, joaat("MotionState_Run"), true, 0, false);
					}
				}
				if (!func_745(296))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_115, "shot_guard_player2", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_160, sLocal_115, "shot_guard_player2") >= 0.65f)
						{
							iVar11 = 8;
							__LIB_0__::func_471(&iVar12, &iVar13, &uVar14, &uVar15, 0);
							if ((iVar12 < -iVar11 || iVar12 > iVar11) || (iVar13 < -iVar11 || iVar13 > iVar11))
							{
								func_477(PLAYER::PLAYER_ID(), 1, 0);
								TASK::CLEAR_PED_TASKS(iLocal_160);
								PED::FORCE_PED_MOTION_STATE(iLocal_160, joaat("MotionState_Idle"), false, 0, false);
								func_744(296, 1);
							}
						}
					}
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[0], sLocal_114, "wipe_blood_player0", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_114, "wipe_blood_brad", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_115, "shot_guard_player2", 3))
				{
					__LIB_30__::func_731();
				}
				break;
		}
		if (iLocal_526 == 1)
		{
			HUD::CLEAR_PRINTS();
			__LIB_30__::func_214(1);
			func_744(100, 1);
			func_744(101, 1);
			func_744(102, 1);
			iLocal_32 = MISC::GET_GAME_TIMER() + 20000;
			func_744(64, 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_194))
			{
				iLocal_194 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			}
			CAM::SET_CAM_NEAR_CLIP(iLocal_194, 0.5f);
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_194, 0.5f);
			Var16 = { CAM::GET_CAM_COORD(iLocal_191) };
			Var17 = { CAM::GET_CAM_ROT(iLocal_191, 2) };
			Var18 = { 5293.8896f, -5193.0474f, 84.12897f };
			Var19 = { 0f, 0f, 329.96875f };
			Var20 = { -9.213379f, 0.828125f, 2.509613f };
			Var21 = { (7.010742f - 3f), (-3.646972f - 0.75f), -2.416809f };
			fVar22 = CAM::GET_CAM_FOV(iLocal_191);
			fVar23 = 35f;
			CAM::SET_CAM_PARAMS(iLocal_194, Var16, Var17, fVar22, 0, 1, 1, 2);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
			func_441(0, 0);
			INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_CashD_vault");
			func_796(9);
			while (fVar24 <= 45f)
			{
				CAM::SET_CAM_PARAMS(iLocal_194, func_653(Var16, Var20, Var18, Var21, 0f, 45f, fVar24), func_653(Var17, Var20, Var19, Var21, 0f, 45f, fVar24), __LIB_2__::func_495(fVar22, fVar23, 0f, 45f, fVar24), 0, 1, 1, 2);
				fVar24 = (fVar24 + ((fVar25 * 10f) * SYSTEM::TIMESTEP()));
				if (fVar24 < 2f)
				{
					if (fVar25 < 1f)
					{
						fVar25 = (fVar25 + 0.1f);
					}
				}
				else if (fVar24 > 43f)
				{
					if (fVar25 > 0.2f)
					{
						fVar25 = (fVar25 - 0.1f);
					}
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				func_441(0, 0);
			}
			iLocal_526 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_167))
		{
			PED::SET_PED_RESET_FLAG(iLocal_160, 69, true);
		}
		if (iLocal_29 > 4)
		{
			if (!Local_304.f_20)
			{
				if (__LIB_20__::func_728() == 0)
				{
					if (__LIB_38__::func_177(&uLocal_260, 1, 1))
					{
						if (uLocal_260.f_7 == 2)
						{
							__LIB_0__::func_401(463, 1, 0);
							Local_304.f_12 = uLocal_260[uLocal_260.f_7];
							Local_304.f_20 = 1;
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
							PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
							func_744(100, 1);
							func_744(101, 1);
							func_744(102, 1);
							func_744(43, 1);
							__LIB_30__::func_214(1);
							iLocal_32 = MISC::GET_GAME_TIMER() + 20000;
							func_744(64, 0);
							func_796(9);
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
							{
								AUDIO::START_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
							}
						}
					}
				}
			}
			else if (__LIB_42__::func_714(&Local_304, 0, 1148829696, 1148829696))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (Local_304.f_18)
				{
					if (!Local_304.f_19)
					{
						if (__LIB_42__::func_600(&uLocal_260, 1, 1, 0))
						{
							func_799();
							Var27 = { 5297.4f, -5186.3f, 84f };
							TASK::TASK_AIM_GUN_AT_COORD(iLocal_160, Var27, 3000, true, false);
							PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), true);
							while (__LIB_20__::func_728() != 2)
							{
								func_441(0, 0);
							}
							__LIB_0__::func_203(&uLocal_318, 1, uLocal_260[0], "MICHAEL", 0, 1);
							__LIB_0__::func_203(&uLocal_318, 2, iLocal_160, "TREVOR", 0, 1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::RENDER_SCRIPT_CAMS(false, true, 500, false, false, 0);
							__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[0], false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_260[0], true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
								PED::SET_PED_ACCURACY(uLocal_260[0], 50);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_260[0], false);
								ENTITY::SET_ENTITY_HEALTH(uLocal_260[0], 400, 0);
								WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_260[0], true);
								PED::SET_PED_ACCURACY(uLocal_260[0], 0);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_167, sLocal_113, "hold_head_loop_base_guard", 3))
								{
									fVar28 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_167, sLocal_113, "hold_head_loop_base_guard");
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[0], sLocal_113, "hold_head_loop_base_player0", Local_149, Local_150, 1000f, -1000f, -1, 793097, fVar28, 2, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[0], false, false);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_167, sLocal_113, "hold_head_loop_base_guard", 3))
								{
									ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_167, sLocal_113, "hold_head_loop_base_guard", fVar28);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_167, false, false);
								}
								__LIB_37__::func_503(&iLocal_180, &(uLocal_260[0]), 0);
								__LIB_10__::func_7(&iLocal_181);
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_260[0], false);
								PED::SET_PED_COMPONENT_VARIATION(uLocal_260[0], 9, 12, 0, 0);
							}
							Local_304.f_19 = 1;
						}
					}
				}
			}
			else if (!bVar26)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_160, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
						PED::FORCE_PED_MOTION_STATE(iLocal_160, joaat("MotionState_Aiming"), true, 0, true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, true, false);
					}
				}
				bVar26 = true;
			}
		}
	}
	if (func_412())
	{
		__LIB_0__::func_402(0, 455);
		MISC::SET_GAME_PAUSED(false);
		__LIB_12__::func_100(&uLocal_260);
		__LIB_11__::func_108(&(iLocal_213[3]));
		if (iLocal_240 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_240);
			AUDIO::RELEASE_SOUND_ID(iLocal_240);
			iLocal_240 = -1;
		}
		Local_304.f_19 = 0;
		Local_304.f_20 = 0;
		__LIB_10__::func_7(&iLocal_183);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		CAM::STOP_CAM_SHAKING(iLocal_191, true);
		if (CAM::DOES_CAM_EXIST(iLocal_194))
		{
			CAM::SET_CAM_ACTIVE(iLocal_194, false);
			CAM::DESTROY_CAM(iLocal_194, false);
		}
		iVar29 = 0;
		while (iVar29 < iLocal_197)
		{
			__LIB_11__::func_108(&(iLocal_197[iVar29]));
			iVar29++;
		}
		if (__LIB_20__::func_728() != 2)
		{
			__LIB_35__::func_983(&uLocal_260, 2);
			__LIB_42__::func_600(&uLocal_260, 1, 0, 0);
			func_799();
		}
		__LIB_0__::func_203(&uLocal_318, 1, uLocal_260[0], "MICHAEL", 0, 1);
		__LIB_0__::func_203(&uLocal_318, 2, iLocal_160, "TREVOR", 0, 1);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[0], false))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_260[0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
			PED::SET_PED_ACCURACY(uLocal_260[0], 50);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(uLocal_260[0], false);
			ENTITY::SET_ENTITY_HEALTH(uLocal_260[0], 400, 0);
			PED::SET_PED_DIES_WHEN_INJURED(uLocal_260[0], false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_260[0], true);
			__LIB_37__::func_503(&iLocal_180, &(uLocal_260[0]), 0);
			__LIB_10__::func_7(&iLocal_181);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_260[0], false);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_260[0], 2, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_260[0], 8, 0, 0, 0);
			__LIB_0__::func_503(124, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_260[0], 9, 12, 0, 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_260[0], iLocal_226, false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_260[0], iLocal_226, 500, true, true);
			}
			TASK::CLEAR_PED_TASKS(uLocal_260[0]);
			PED::SET_PED_TO_LOAD_COVER(uLocal_260[0], true);
			if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2) - Vector(1f, 0f, 0f)))
			{
				iLocal_220[0] = TASK::ADD_COVER_POINT(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2) - Vector(1f, 0f, 0f), -__LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2)), 1, 2, 0, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2), 2f, 20000, 2f, 1, 40000f);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 0f, 2), 1000, false, 0.9f, true, true, iLocal_220[0], true);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "set_c4_start_loop_a_player0", Local_152, Local_153, 2f, -8f, -1, 790537, 0f, 2, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_260[0], iLocal_195);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
		}
		__LIB_10__::func_7(&iLocal_181);
		__LIB_11__::func_108(&iLocal_201);
		__LIB_11__::func_108(&(iLocal_197[0]));
		__LIB_11__::func_108(&(iLocal_211[0]));
		__LIB_11__::func_108(&(iLocal_211[1]));
		__LIB_11__::func_108(&(iLocal_211[2]));
		if (!PED::IS_PED_INJURED(iLocal_167))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_167);
			PED::SET_PED_CAN_RAGDOLL(iLocal_167, true);
			PED::EXPLODE_PED_HEAD(iLocal_167, joaat("WEAPON_SNIPERRIFLE"));
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 1, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_164);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_162);
		iLocal_251++;
	}
}

Vector3 func_653(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, float fParam5, float fParam6)//Position - 0x89AEB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	fVar0 = (fParam6 / (fParam5 - fParam4));
	fVar1 = (((2f * func_654(fVar0, 3)) - (3f * func_654(fVar0, 2))) + 1f);
	fVar2 = ((-2f * func_654(fVar0, 3)) + (3f * func_654(fVar0, 2)));
	fVar3 = ((func_654(fVar0, 3) - (2f * func_654(fVar0, 2))) + fVar0);
	fVar4 = (func_654(fVar0, 3) - func_654(fVar0, 2));
	Var5 = { Vector(fVar1, fVar1, fVar1) * Param0 + Vector(fVar2, fVar2, fVar2) * Param2 + Vector(fVar3, fVar3, fVar3) * Param1 + Vector(fVar4, fVar4, fVar4) * Param3 };
	return Var5;
}

float func_654(float fParam0, int iParam1)//Position - 0x89B7F
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar1 = fParam0;
	fVar2 = 0f;
	if (iParam1 == 0)
	{
		fVar2 = 1f;
	}
	else if (iParam1 == 1)
	{
		fVar2 = fParam0;
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1 + 1;
		while (iVar0 > 0)
		{
			fParam0 = (fParam0 * fVar1);
			iVar0 = (iVar0 - 1);
		}
		fVar2 = (1f / fParam0);
	}
	else if (iParam1 > 1)
	{
		iVar0 = (iParam1 - 1);
		while (iVar0 > 0)
		{
			fParam0 = (fParam0 * fVar1);
			iVar0 = (iVar0 - 1);
		}
		fVar2 = fParam0;
	}
	return fVar2;
}

void func_656(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x89C05
{
	while (!__LIB_36__::func_67(&uLocal_318, cLocal_255, sParam0, sParam1, iParam2, iParam3, iParam4))
	{
		if (__LIB_0__::func_75())
		{
			__LIB_6__::func_771();
		}
		func_441(0, 0);
	}
}

void func_663()//Position - 0x89F3E
{
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		iLocal_57 = 1;
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Pro_S1a");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			__LIB_30__::func_732(&iLocal_167, joaat("CSB_ProlSec"), 5297.831f, -5186.644f, (85.719f - 3.2f), 91.975f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167, 3, 1, 0, 0);
			__LIB_0__::func_203(&uLocal_318, 4, iLocal_167, "PROGUARD", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CSB_ProlSec"));
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_167, iLocal_224, -1, true, true);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_167, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_167, true);
			PED::SET_PED_AS_ENEMY(iLocal_167, true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_167, true);
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_167);
		}
		ENTITY::SET_ENTITY_VISIBLE(iLocal_167, false, false);
		if (iLocal_64 == 0)
		{
			ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
			ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
			iLocal_64 = 1;
		}
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_3_pt1", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
		}
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, 5303.301f, -5189.0464f, 82.5187f, 98.0764f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[2]);
			__LIB_30__::func_217(uLocal_260[2], 5299.9536f, -5188.4478f, 82.5183f, 242.6358f, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[1]))
			{
				iLocal_211[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211[1], uLocal_260[2], PED::GET_PED_BONE_INDEX(uLocal_260[2], 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_145))
			{
				iLocal_145 = PED::CREATE_SYNCHRONIZED_SCENE(Local_147, Local_148, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_145, sLocal_112, "mcs_2_idle_player2", 1000f, -1000f, 4, 0, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_260[2], iLocal_160, -1, 0, 2);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_211[1], "mcs_2_idle_bag", sLocal_112, 1000f, true, false, false, 0f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_145, true);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Grabs_mike", iLocal_167, 0);
		}
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((89.4f - ENTITY::GET_ENTITY_HEADING(iLocal_160)));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.344316f, 1f);
		}
		switch (iLocal_29)
		{
			case 0:
				if (!func_745(192))
				{
					if (func_745(193) && AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
					{
						__LIB_9__::func_990();
						func_744(192, 1);
					}
					else
					{
						func_565(192, "PRO_Leave", 7, 1, 0, 0);
					}
					iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7500));
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5298.024f, -5189.135f, 82.51832f, 5302.9756f, -5189.083f, 85.5186f, 5.5f, false, true, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 4f, 3);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[1]))
					{
						iLocal_211[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211[1], uLocal_260[2], PED::GET_PED_BONE_INDEX(uLocal_260[2], 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
					}
					iLocal_146 = PED::CREATE_SYNCHRONIZED_SCENE(Local_147, Local_148, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_146, sLocal_112, "mcs_2_walkout_player2", 8f, -1000f, 4, 0, 1000f, 0);
					TASK::TASK_CLEAR_LOOK_AT(uLocal_260[2]);
					ENTITY::PLAY_ENTITY_ANIM(iLocal_211[1], "mcs_2_walkout_bag", sLocal_112, 8f, false, true, false, 0f, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_160, 5298.3516f, -5188.909f, 82.5182f, 1f, 20000, 40000f, 0.5f);
					func_463();
				}
				if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_32)
					{
						if (iLocal_31[iLocal_30] == -1)
						{
							iLocal_31[iLocal_30] = 4;
						}
						iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000));
						iLocal_31[iLocal_30] = (iLocal_31[iLocal_30] - 1);
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					func_565(195, "PRO_MCS3LI", 7, 1, 0, 0);
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_146) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_146) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_146) > 0.75f))
				{
					__LIB_30__::func_731();
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_211[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_211[1], false))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_211[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_211[1]))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			}
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
	}
	if (func_412())
	{
		__LIB_10__::func_7(&iLocal_188);
		TASK::TASK_CLEAR_LOOK_AT(uLocal_260[2]);
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1a");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
		}
		iLocal_251++;
	}
}

void func_665()//Position - 0x8A506
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	struct<21> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		iLocal_57 = 1;
		HUD::CLEAR_PRINTS();
		func_656("PRO_Safe", "PRO_Safe_2", 8, 0, 0);
		__LIB_26__::func_360(&iLocal_186, 5303.5576f, -5188.414f, (85.7189f - 3.2f), 0);
		func_562(iLocal_186, 5000);
		func_455(77, "PROHLP_BLIPS4", 1, -1, 2000);
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_214))
		{
			iLocal_214 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_haze", 5299f, -5189f, 82.6f, Local_67, 1f, false, false, false, false);
		}
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_215))
		{
			iLocal_215 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_fog", 5299f, -5189f, 82.6f, Local_67, 1f, false, false, false, false);
		}
		iLocal_521 = 0;
		iLocal_522 = 0;
		OBJECT::CREATE_MONEY_PICKUPS(5303.3105f, -5189.0005f, 82.51867f, 2500, 5, 0);
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
		iLocal_45 = uVar0;
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_2", 8);
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, 5308.856f, -5206.294f, (85.7187f - 3.2f), 355.824f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[2]);
			__LIB_30__::func_217(uLocal_260[2], 5310.6885f, -5204.9897f, 82.5199f, (355.824f + 90f), 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_260[2], 5310.6885f, -5204.9897f, 82.5199f, -1, false, 0f, true, true, iLocal_220[0], false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_164);
			__LIB_30__::func_217(iLocal_164, 5313.9053f, -5205.749f, 82.5187f, 98.053f, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar1, -1);
		if (iVar1 > iLocal_45)
		{
			iLocal_521 = (iLocal_521 + (iVar1 - iLocal_45));
			Global_100441.f_12[0] = iLocal_521;
			iLocal_45 = iVar1;
		}
		func_742(1, joaat("v_ilev_cd_door"));
		func_742(2, joaat("v_ilev_cd_door"));
		if (((TASK::IS_PED_RUNNING(iLocal_160) && !PED::IS_PED_SHOOTING(iLocal_160)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5308.8135f, -5204.5776f, 84.01863f, 1.25f, 1.5f, 1.5f, false, true, 0)) && (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_511) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_512) != 0f))
		{
			if (iLocal_234 == -1)
			{
				iLocal_234 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_234, "Barge_Door", 5308.8135f, -5204.5776f, 84.01863f, "Prologue_Sounds", false, 0, false);
			}
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
		}
		if (!func_745(276))
		{
			if (iLocal_29 <= 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 5308.731f, -5188.501f, 82.51867f, 5298.839f, -5188.5127f, 86.018364f, 9f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(uLocal_260[2]);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_260[2]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 5300.742f, -5190.498f, 82.5184f, 1f, 20000, 0.25f, 0, (248.5686f + 46f));
					TASK::TASK_PLAY_ANIM(0, sLocal_111, "idle_d", 8f, -8f, -1, 786433, 0f, false, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_260[2], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					func_744(276, 1);
				}
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (!func_745(223))
				{
					if (SYSTEM::TIMERA() > 1000)
					{
						if (func_745(217) && !__LIB_0__::func_75())
						{
							func_428(224, "PRO_VAULT", 3500, 0);
							func_744(223, 1);
						}
					}
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_260[2]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5310.5493f, -5202.8857f, 82.51868f, 5307.0835f, -5202.865f, 85.51868f, 3f, false, true, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(uLocal_260[2]);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_260[2], sLocal_126, 0, 0, -1);
						PED::SET_COMBAT_FLOAT(uLocal_260[2], 3, 2f);
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
						{
							AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
						}
					}
					if (PED::IS_PED_IN_COVER(uLocal_260[2], true) && ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5310.699f, -5205.046f, 84.01867f, 0.5f, 0.5f, 1.5f, false, true, 0))
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_C", 3))
						{
							if (iLocal_42 == -1)
							{
								iLocal_42 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
							}
							if (MISC::GET_GAME_TIMER() > iLocal_42)
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								Var3.f_4 = 1065353216;
								Var3.f_5 = 1065353216;
								Var3.f_9 = 1065353216;
								Var3.f_10 = 1065353216;
								Var3.f_14 = 1065353216;
								Var3.f_15 = 1065353216;
								Var3.f_17 = 1040187392;
								Var3.f_18 = 1040187392;
								Var3.f_19 = -1;
								Var4.f_4 = 1065353216;
								Var4.f_5 = 1065353216;
								Var4.f_9 = 1065353216;
								Var4.f_10 = 1065353216;
								Var4.f_14 = 1065353216;
								Var4.f_15 = 1065353216;
								Var4.f_17 = 1040187392;
								Var4.f_18 = 1040187392;
								Var4.f_19 = -1;
								Var4.f_0 = 1;
								Var4.f_2 = "Trevor_Cover_Impatient_A";
								Var4.f_1 = sLocal_109;
								Var4.f_20 = 32;
								if (iVar2 == 0)
								{
									Var4.f_2 = "Trevor_Cover_Impatient_A";
									TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var4, &Var3, &Var3, 0.25f, 0.25f);
								}
								else if (iVar2 == 1)
								{
									Var4.f_2 = "Trevor_Cover_Impatient_B";
									TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var4, &Var3, &Var3, 0.25f, 0.25f);
								}
								else if (iVar2 == 2)
								{
									Var4.f_2 = "Trevor_Cover_Impatient_C";
									TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var4, &Var3, &Var3, 0.25f, 0.25f);
								}
								iLocal_42 = -1;
							}
						}
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_260[2]))
				{
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_126, &iVar7);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_126, ENTITY::GET_ENTITY_COORDS(iLocal_160, true), &iVar5);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_126, ENTITY::GET_ENTITY_COORDS(uLocal_260[2], true), &iVar6);
					iVar5 = __LIB_0__::func_310(((iVar5 - 1) - 1), 0, iVar7);
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_260[2], __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_160), 1f, 3f), false);
				}
				if ((iVar5 > iVar6 || iVar6 > 16) || iVar6 == 1)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_260[2]))
					{
						if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_260[2]))
						{
							TASK::WAYPOINT_PLAYBACK_RESUME(uLocal_260[2], false, -1, 0);
						}
					}
				}
				else
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_260[2]))
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_260[2]))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_260[2], false, false);
						}
					}
					if (!func_745(237) && MISC::GET_GAME_TIMER() > iLocal_32)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5306.7085f, -5180.154f, 84.51867f, 14.5f, 3f, 2f, false, true, 0))
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
							{
								if (iLocal_31[1] > 0)
								{
									func_565(224, "PRO_Vault", 7, 0, 0, 0);
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									func_744(237, 1);
								}
							}
						}
					}
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (!func_745(109))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5295.0254f, -5185.919f, 82.51878f, 5295.1294f, -5178.219f, 86.01878f, 6.5f, false, true, 0))
							{
								func_565(109, "PRO_BackHere", 7, 1, 0, 0);
								iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_32)
					{
						if (iLocal_31[0] == -1)
						{
							iLocal_31[0] = 5;
						}
						else if (iLocal_31[1] == -1)
						{
							iLocal_31[1] = 4;
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5308.731f, -5188.501f, 82.51867f, 5298.839f, -5188.5127f, 86.018364f, 9f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 5308.731f, -5188.501f, 82.51867f, 5298.839f, -5188.5127f, 86.018364f, 9f, false, true, 0))
						{
							iLocal_30 = 1;
						}
						else
						{
							iLocal_30 = 0;
						}
						if (iLocal_31[iLocal_30] > 0)
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
							{
								if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_163) < 1f && !ENTITY::IS_ENTITY_AT_COORD(iLocal_162, ENTITY::GET_ENTITY_COORDS(iLocal_163, true), 3.5f, 3.5f, 3f, false, true, 0))
								{
									if (iLocal_30 == 0)
									{
										func_565(158, "PRO_GenIdle", 7, 0, 0, 0);
									}
									else if (iLocal_30 == 1)
									{
										func_565(224, "PRO_Vault", 7, 0, 0, 0);
									}
								}
								iLocal_31[iLocal_30] = (iLocal_31[iLocal_30] - 1);
							}
						}
						iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
				if (!func_745(13))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5296.6294f, -5186.646f, 82.51863f, 5296.793f, -5191.115f, 85.51863f, 3f, false, true, 0) && !PED::IS_PED_IN_COVER(iLocal_160, false)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_160))
					{
						__LIB_5__::func_759(iLocal_160, "COUGH", "WAVELOAD_PAIN_MALE", 24);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
						{
							TASK::TASK_PLAY_ANIM(iLocal_160, sLocal_124, "walk", 8f, -8f, -1, 48, 0f, false, false, false);
						}
						func_744(13, 1);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_124, "walk", 3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_160, 1f);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5303.912f, -5184.688f, (85.69025f - 3.2f), 5303.9165f, -5191.5337f, (88.71863f - 3.2f), 10f, false, true, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_188))
					{
						iLocal_199 = OBJECT::CREATE_OBJECT(joaat("prop_ping_pong"), 5307.6753f, -5191.0527f, 83.0186f, true, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_199, true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_199, false, false);
						iLocal_188 = __LIB_6__::func_840(iLocal_199);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_188, "PRO_BLIPCASH");
						__LIB_10__::func_7(&iLocal_186);
						HUD::CLEAR_PRINTS();
						__LIB_30__::func_214(1);
						func_428(115, "PRO_CASH", 7500, 1);
						if (!__LIB_0__::func_75())
						{
							func_565(190, "PRO_see", 6, 1, 1, 0);
						}
						func_562(iLocal_188, 3000);
					}
					func_463();
				}
				break;
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_455(75, "PROHLP_BLIPS2", 1, -1, 2000);
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (MISC::GET_GAME_TIMER() > iLocal_32)
					{
						if (!func_745(110))
						{
							func_565(110, "PRO_Bills", 7, 1, 0, 0);
						}
						else if (iLocal_31[0] > 0)
						{
							func_565(158, "PRO_GenIdle", 7, 0, 0, 0);
							iLocal_31[0] = (iLocal_31[0] - 1);
						}
						iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_188))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5307.5835f, -5184.533f, 82.01889f, 5307.441f, -5191.547f, 86.567856f, 3f, false, true, 0) || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5307.5835f, -5184.533f, 82.01889f, 5307.441f, -5191.547f, 86.567856f, 4.5f, false, true, 0)))
					{
						if (func_544(0f, 0, 1, 0))
						{
							if (__LIB_0__::func_90())
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_260[2], "Trevor", 0, 0, 0);
								iLocal_197[0] = __LIB_35__::func_97(iLocal_162, 1, 0, 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[0], "Michaels_weapon", 0, 0, 0);
								iLocal_197[1] = __LIB_35__::func_97(iLocal_163, 1, 0, 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[1], "Trevors_weapon", 0, 0, 0);
								__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
								func_464(6);
								func_796(5);
								CUTSCENE::START_CUTSCENE(0);
								func_441(0, 0);
								if (!__LIB_0__::func_2(0))
								{
									CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
								}
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), 10f, true, false, false, false);
								if (iLocal_64 == 0)
								{
									ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
									ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
									iLocal_64 = 1;
								}
								PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 0, 0, 0);
								iLocal_57 = 0;
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
								RECORDING::REPLAY_START_EVENT(4);
								func_463();
							}
						}
					}
				}
				break;
			case 2:
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_260[2], iLocal_226, true);
					__LIB_30__::func_731();
				}
				break;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!func_745(193))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_38__::func_139(&uLocal_318, cLocal_255, "PRO_Leave", 6, 0, 0, 0, 0);
					func_744(193, 1);
				}
			}
			if (!func_745(49))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((89.4f - ENTITY::GET_ENTITY_HEADING(iLocal_160)));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.344316f, 1f);
			}
			if (!func_745(59))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((7.411327f * 1000f)))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 12, 0, 0);
					func_744(59, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 12, 0, 0);
				func_744(49, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				__LIB_30__::func_217(uLocal_260[2], 5299.9536f, -5188.4478f, 82.5183f, 242.6358f, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_211[1]))
				{
					iLocal_211[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 5293.26f, -5192.22f, 82.63f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_211[1], uLocal_260[2], PED::GET_PED_BONE_INDEX(uLocal_260[2], 60309), Local_67, Local_67, false, false, false, false, 2, true, 0);
				}
				iLocal_145 = PED::CREATE_SYNCHRONIZED_SCENE(Local_147, Local_148, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_145, sLocal_112, "mcs_2_idle_player2", 1000f, -1000f, 4, 0, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_260[2], iLocal_160, -1, 0, 2);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_211[1], "mcs_2_idle_bag", sLocal_112, 1000f, true, false, false, 0f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_145, true);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 9, 1, 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_260[2], iLocal_226, true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[0], iLocal_162);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[1], iLocal_163);
			}
			if (!func_745(60))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5.4f * 1000f)))
				{
					iLocal_521 = (iLocal_521 + 93000);
					Global_100441.f_12[0] = iLocal_521;
					func_744(60, 1);
				}
			}
			if (!func_745(274))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((7.6f * 1000f)))
				{
					iLocal_521 = (iLocal_521 + 84000);
					Global_100441.f_12[0] = iLocal_521;
					func_744(274, 1);
				}
			}
			if (iLocal_54)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((5.1f * 1000f)))
				{
					RECORDING::REPLAY_STOP_EVENT();
					iLocal_54 = 0;
				}
			}
		}
	}
	if (func_412())
	{
		RECORDING::REPLAY_STOP_EVENT();
		PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 12, 0, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_160, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_199);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_214))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_214, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_215))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_215, false);
		}
		if (iLocal_234 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_234);
			AUDIO::RELEASE_SOUND_ID(iLocal_234);
			iLocal_234 = -1;
		}
		iVar8 = 0;
		while (iVar8 < iLocal_220)
		{
			TASK::REMOVE_COVER_POINT(iLocal_220[iVar8]);
			iVar8++;
		}
		__LIB_10__::func_7(&iLocal_188);
		__LIB_10__::func_7(&iLocal_186);
		__LIB_11__::func_108(&iLocal_199);
		__LIB_11__::func_108(&iLocal_207);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 9, 12, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 9, 1, 0, 0);
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S2");
		PED::SET_PED_CAN_PEEK_IN_COVER(uLocal_260[2], true);
		iVar8 = 0;
		while (iVar8 < iLocal_197)
		{
			__LIB_11__::func_108(&(iLocal_197[iVar8]));
			iVar8++;
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_441(0, 0);
		}
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		iLocal_251++;
	}
}

void func_669()//Position - 0x8B6CA
{
	int iVar0;
	struct<20> Var1;
	struct<21> Var2;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		iLocal_57 = 1;
		__LIB_36__::func_488(128, 0, 0);
		__LIB_8__::func_770(0);
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Pro_S2");
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5310.6816f, -5205.025f, 82.5146f))
		{
			iLocal_220[0] = TASK::ADD_COVER_POINT(5310.6885f, -5204.9897f, 82.5199f, 0f, 2, 2, 0, false);
		}
		iLocal_202 = OBJECT::CREATE_OBJECT(iLocal_245, 5298.27f, -5187.85f, 83.87f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_202, 0f, 0f, -90.52732f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_202, true);
		iLocal_203 = OBJECT::CREATE_OBJECT(iLocal_246, 5298.27f, -5187.85f, 83.87f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_203, 0f, 0f, -90.52732f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_203, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_203, false, false);
		iLocal_205 = OBJECT::CREATE_OBJECT(iLocal_248, 5298.27f, -5187.85f, (83.87f + 0.075f), true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_205, 0f, 0f, -90.52732f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_205, true);
		iLocal_206 = OBJECT::CREATE_OBJECT(iLocal_249, 5298.27f, -5187.85f, (83.87f + 0.075f), true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_206, 0f, 0f, -90.52732f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_206, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_206, false, false);
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_164);
			__LIB_30__::func_217(iLocal_164, 5313.574f, -5205.261f, 82.519f, 114.018f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[2]);
			__LIB_30__::func_217(uLocal_260[2], 5310.6885f, -5204.9897f, 82.5199f, (355.824f + 90f), 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_260[2], 5310.6885f, -5204.9897f, 82.5199f, -1, false, 1f, true, true, iLocal_220[0], false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, 5308.856f, -5206.294f, (85.7187f - 3.2f), 355.824f, 1);
			func_743(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1f, 1f, 0f);
			func_743(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1f, 1f, 0f);
			__LIB_5__::func_674(&(iLocal_166[2]));
			__LIB_5__::func_674(&(iLocal_166[0]));
			__LIB_0__::func_202(&uLocal_318, 7);
			__LIB_0__::func_202(&uLocal_318, 8);
			__LIB_5__::func_674(&(iLocal_166[1]));
			__LIB_5__::func_674(&(iLocal_166[3]));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_IN_COVER(iLocal_162, false))
		{
			PED::SET_PED_CAPSULE(iLocal_162, 0.5f);
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if (!func_745(207))
			{
				func_413(207, "PRO_Return", "PRO_Return_1", 8, 1, 0, 0);
				iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000));
			}
		}
		if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_110, "Brad_Alert_Idle", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_111, "idle_d", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_107, "react_to_explosion_brad", 3))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_136) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136))
			{
				TASK::TASK_PLAY_ANIM(iLocal_164, sLocal_110, "Brad_Alert_Idle", 2f, -2f, -1, 786433, 0f, false, false, false);
			}
		}
		else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_164, true), 3f, 3f, 2f, false, true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_164, iLocal_160, 5000, 0, 2);
		}
		if (PED::IS_PED_IN_COVER(uLocal_260[2], true) && ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5310.699f, -5205.046f, 84.01867f, 0.5f, 0.5f, 1.5f, false, true, 0))
		{
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_C", 3))
			{
				if (iLocal_42 == -1)
				{
					iLocal_42 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
				}
				if (MISC::GET_GAME_TIMER() > iLocal_42)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					Var1.f_4 = 1065353216;
					Var1.f_5 = 1065353216;
					Var1.f_9 = 1065353216;
					Var1.f_10 = 1065353216;
					Var1.f_14 = 1065353216;
					Var1.f_15 = 1065353216;
					Var1.f_17 = 1040187392;
					Var1.f_18 = 1040187392;
					Var1.f_19 = -1;
					Var2.f_4 = 1065353216;
					Var2.f_5 = 1065353216;
					Var2.f_9 = 1065353216;
					Var2.f_10 = 1065353216;
					Var2.f_14 = 1065353216;
					Var2.f_15 = 1065353216;
					Var2.f_17 = 1040187392;
					Var2.f_18 = 1040187392;
					Var2.f_19 = -1;
					Var2.f_0 = 1;
					Var2.f_2 = "Trevor_Cover_Impatient_A";
					Var2.f_1 = sLocal_109;
					Var2.f_20 = 32;
					if (iVar0 == 0)
					{
						Var2.f_2 = "Trevor_Cover_Impatient_A";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var2, &Var1, &Var1, 0.25f, 0.25f);
					}
					else if (iVar0 == 1)
					{
						Var2.f_2 = "Trevor_Cover_Impatient_B";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var2, &Var1, &Var1, 0.25f, 0.25f);
					}
					else if (iVar0 == 2)
					{
						Var2.f_2 = "Trevor_Cover_Impatient_C";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var2, &Var1, &Var1, 0.25f, 0.25f);
					}
					iLocal_42 = -1;
				}
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (!__LIB_0__::func_77(1))
				{
					if (__LIB_0__::func_1("PROHLP_PHONE4") || __LIB_0__::func_1("PROHLP_PHONE5"))
					{
						__LIB_30__::func_214(1);
					}
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5305.638f, -5209.354f, 82.51868f, 5317.59f, -5209.529f, 85.51868f, 11f, false, true, 0))
				{
					if (!__LIB_1__::func_414())
					{
						__LIB_30__::func_214(1);
						__LIB_8__::func_770(1);
					}
					func_428(210, "PRO_STAY2", 7500, 1);
					__LIB_10__::func_7(&iLocal_181);
					__LIB_10__::func_7(&iLocal_182);
					__LIB_26__::func_360(&iLocal_186, 5309.4556f, -5207.3184f, (85.7187f - 3.2f), 0);
				}
				else
				{
					if (__LIB_0__::func_405("PRO_STAY2", 0, 0))
					{
						__LIB_0__::func_444("PRO_STAY2");
					}
					__LIB_10__::func_7(&iLocal_186);
					__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
					__LIB_37__::func_503(&iLocal_182, &iLocal_164, 0);
					if (__LIB_1__::func_414())
					{
						__LIB_8__::func_770(0);
					}
					if (iLocal_525[0] == 0)
					{
						if (func_745(207) && !__LIB_0__::func_75())
						{
							func_428(116, "PRO_CHARGES", 7500, 1);
							if (!__LIB_0__::func_75())
							{
								func_565(189, "PRO_call", 6, 1, 1, 0);
							}
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136))
							{
								TASK::CLEAR_PED_TASKS(iLocal_164);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_164, 5313.9053f, -5205.749f, 82.5187f, 1f, -1, 98.053f, 0.5f);
							}
							SYSTEM::SETTIMERB(0);
							iLocal_525[0] = 1;
						}
					}
					else if (SYSTEM::TIMERB() > 11500)
					{
						if (!__LIB_0__::func_405("PRO_STAY2", 0, 0))
						{
							if (!__LIB_0__::func_405("PRO_CHARGES", 0, 0))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_32)
								{
									if ((func_745(207) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && !__LIB_0__::func_75())
									{
										if (!func_745(171))
										{
											func_413(171, "PRO_Idle3", "PRO_Idle3_1", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_163, iLocal_162, 3000, 2048, 2);
										}
										else if (!func_745(172))
										{
											func_413(172, "PRO_Idle3", "PRO_Idle3_2", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_163, iLocal_162, 3000, 2048, 2);
										}
										else if (!func_745(173))
										{
											func_413(173, "PRO_Idle3", "PRO_Idle3_3", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_163, iLocal_162, 3000, 2048, 2);
										}
										else if (!func_745(174))
										{
											func_413(174, "PRO_Idle3", "PRO_Idle3_4", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_163, iLocal_162, 3000, 2048, 2);
										}
										else if (!func_745(175))
										{
											func_413(175, "PRO_Idle3", "PRO_Idle3_5", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_163, iLocal_162, 3000, 2048, 2);
										}
										else if (!func_745(176))
										{
											func_413(176, "PRO_Idle3", "PRO_Idle3_6", 7, 1, 0, 0);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_163, iLocal_162, 3000, 2048, 2);
										}
										iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000));
									}
								}
							}
						}
					}
					if (!__LIB_0__::func_77(0))
					{
						if (!__LIB_0__::func_1("PROHLP_PHONE1"))
						{
							__LIB_0__::func_187("PROHLP_PHONE1");
						}
					}
					else
					{
						if (__LIB_0__::func_77(1) && !__LIB_0__::func_507())
						{
							if (!__LIB_0__::func_1("PROHLP_PHONE4"))
							{
								__LIB_0__::func_187("PROHLP_PHONE4");
							}
							if (!func_745(170))
							{
								if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
								{
									if (MISC::GET_GAME_TIMER() > (iLocal_32 - 1000))
									{
										func_565(170, "PRO_detonate", 7, 1, 0, 0);
										iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
									}
								}
							}
						}
						if (__LIB_0__::func_77(1) && __LIB_0__::func_507())
						{
							if (!__LIB_0__::func_1("PROHLP_PHONE5"))
							{
								__LIB_0__::func_187("PROHLP_PHONE5");
							}
							if (!func_745(169))
							{
								if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
								{
									if (MISC::GET_GAME_TIMER() > (iLocal_32 - 1000))
									{
										func_565(169, "PRO_callit", 7, 1, 0, 0);
										iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
									}
								}
							}
						}
					}
					if (iLocal_525[1] == 0)
					{
						if (__LIB_0__::func_77(1) && !__LIB_0__::func_507())
						{
							iLocal_525[1] = 1;
						}
					}
					else if (iLocal_525[2] == 0)
					{
						if (iLocal_525[3] == 0)
						{
							if (__LIB_0__::func_77(1) && __LIB_0__::func_507())
							{
								iLocal_525[3] = 1;
							}
						}
					}
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_232))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232) != 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232, 4);
						}
					}
					if (__LIB_0__::func_571(128))
					{
						func_477(PLAYER::PLAYER_ID(), 0, 0);
						func_796(3);
						HUD::CLEAR_PRINTS();
						__LIB_30__::func_214(1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
						{
							AUDIO::STOP_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
						{
							AUDIO::START_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_MUTE_SPRINKLERS"))
						{
							AUDIO::START_AUDIO_SCENE("PROLOGUE_MUTE_SPRINKLERS");
						}
						if (!func_745(297))
						{
							AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_PROLOGUE_VAULT");
							func_744(297, 1);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1.5f, 1f, 3);
						func_463();
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_164, 5313.7812f, -5205.144f, 83.5237f, 0.5f, 0.5f, 2f, false, true, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_164, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_164, 5313.7812f, -5205.144f, 83.5237f, 1f, 20000, 0.25f, 0, 114.0175f);
						}
					}
				}
				break;
			case 1:
				AUDIO::LOAD_STREAM("PROLOGUE_BLOW_THE_VAULT_MASTER", 0);
				AUDIO::PREPARE_ALARM("PROLOGUE_VAULT_ALARMS");
				if (SYSTEM::TIMERA() > 2500)
				{
					__LIB_5__::func_674(&(iLocal_166[2]));
					__LIB_5__::func_674(&(iLocal_166[0]));
					__LIB_0__::func_202(&uLocal_318, 7);
					__LIB_0__::func_202(&uLocal_318, 8);
					__LIB_5__::func_674(&(iLocal_166[1]));
					__LIB_5__::func_674(&(iLocal_166[3]));
					__LIB_6__::func_849(1);
					func_6();
					iLocal_57 = 0;
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					func_441(0, 0);
					MISC::CLEAR_AREA(5296.97f, -5188.88f, 82.74f, 10f, true, false, false, false);
					CAM::SET_CAM_PARAMS(iLocal_191, 5297.292f, -5187.3296f, 83.824295f, 6.358143f, -8.767557f, -122.514175f, 28.3404f, 0, 3, 3, 2);
					CAM::SET_CAM_PARAMS(iLocal_191, 5297.325f, -5187.351f, 83.82872f, 6.358143f, -8.767557f, -122.514175f, 28.3404f, 1800, 3, 3, 2);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_191, 1.1f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_191, 2.8f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					if (!iLocal_66)
					{
						AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
						iLocal_66 = 1;
					}
					AUDIO::PLAY_STREAM_FRONTEND();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("cashdepot");
					func_441(0, 0);
					INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_CashD_vault");
					__LIB_30__::func_217(iLocal_160, 5308.671f, -5206.5474f, 82.5186f, 269.1302f, 1);
					if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_160, iLocal_226, false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_160, iLocal_226, 500, true, true);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
					if (!iLocal_54)
					{
						RECORDING::REPLAY_START_EVENT(3);
						iLocal_54 = 1;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213[2]))
					{
						iLocal_213[2] = OBJECT::CREATE_OBJECT(joaat("prop_vault_door_scene"), 5297.717f, -5188.909f, 81.575f, true, true, false);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_213[2], iLocal_196, joaat("V_CashD_side"));
					}
					func_463();
				}
				break;
			case 2:
				AUDIO::PREPARE_ALARM("PROLOGUE_VAULT_ALARMS");
				if (ENTITY::IS_ENTITY_VISIBLE(iLocal_205) && SYSTEM::TIMERA() > 500)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_205, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_206, true, false);
				}
				if (ENTITY::IS_ENTITY_VISIBLE(iLocal_206) && SYSTEM::TIMERA() > 1500)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_206, false, false);
				}
				if (SYSTEM::TIMERA() > 1000)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_202, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_203, true, false);
				}
				if (SYSTEM::TIMERA() > 1800)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_202, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_203, true, false);
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_232))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232, 6);
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
					}
					if (CAM::DOES_CAM_EXIST(iLocal_191))
					{
						CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_191, 0f);
						CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 0f);
						CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_191, 2.8f);
						CAM::DESTROY_CAM(iLocal_191, false);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_191))
					{
						iLocal_191 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
					}
					CAM::SET_CAM_PARAMS(iLocal_191, 5292.704f, -5185.751f, 82.84772f, 9.034329f, -2.898424f, -131.66974f, 45f, 0, 0, 0, 2);
					__LIB_11__::func_108(&(iLocal_213[2]));
					func_463();
				}
				break;
			case 3:
				AUDIO::PREPARE_ALARM("PROLOGUE_VAULT_ALARMS");
				if (!func_745(282))
				{
					if (SYSTEM::TIMERA() > 300)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("ent_ray_pro1_vault_exp_lit", 5298.2007f, -5189.052f, 83.86238f, Local_67, 1f, false, false, false);
						CAM::SHAKE_CAM(iLocal_191, "GRENADE_EXPLOSION_SHAKE", 3f);
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 500, 256);
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_214))
							{
								iLocal_214 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_haze", 5299f, -5189f, 82.6f, Local_67, 1f, false, false, false, false);
							}
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_215))
							{
								iLocal_215 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_prologue_vault_fog", 5299f, -5189f, 82.6f, Local_67, 1f, false, false, false, false);
							}
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_MUTE_SPRINKLERS"))
						{
							AUDIO::STOP_AUDIO_SCENE("PROLOGUE_MUTE_SPRINKLERS");
						}
						MISC::SET_TIME_SCALE(0.5f);
						func_744(282, 1);
					}
				}
				if (SYSTEM::TIMERA() > 400)
				{
					func_796(4);
					AUDIO::START_ALARM("PROLOGUE_VAULT_ALARMS", false);
					__LIB_11__::func_108(&iLocal_202);
					__LIB_11__::func_108(&iLocal_203);
					__LIB_11__::func_108(&iLocal_204);
					__LIB_11__::func_108(&iLocal_205);
					__LIB_11__::func_108(&iLocal_206);
					func_463();
				}
				break;
			case 4:
				if (SYSTEM::TIMERA() > 250)
				{
					func_463();
				}
				break;
			case 5:
				if (SYSTEM::TIMERA() > 450)
				{
					MISC::SET_TIME_SCALE(1f);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
					}
					CAM::STOP_CAM_SHAKING(iLocal_191, false);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					func_413(216, "PRO_Safe", "PRO_Safe_1", 8, 1, 0, 0);
					if (!CAM::DOES_CAM_EXIST(iLocal_193))
					{
						iLocal_193 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					}
					iLocal_139 = PED::CREATE_SYNCHRONIZED_SCENE(Local_140, Local_141, 2);
					iLocal_142 = PED::CREATE_SYNCHRONIZED_SCENE(Local_143, Local_144, 2);
					__LIB_30__::func_217(iLocal_160, Vector(82.5187f, -5207.1147f, 5307.475f) + Vector(0f, 0.32f, -0.08f), 272.3664f, 1);
					TASK::TASK_PLAY_ANIM(iLocal_160, sLocal_107, "react_to_explosion_player_zero", 1000f, -8f, -1, 0, (0.075f + 0.05f), false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, false, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[2]);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_139, sLocal_107, "react_to_explosion_player_two", 1000f, -1000f, 4, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_139, sLocal_107, "react_to_explosion_brad", 1000f, -1000f, 4, 0, 1000f, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_193, iLocal_142, "react_to_explosion_cam", sLocal_108);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_139, (0.075f + 0.05f));
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_142, 0.421f);
					CAM::SET_CAM_ACTIVE(iLocal_193, true);
					func_441(0, 0);
					INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_CashD_reception");
					func_463();
				}
				break;
			case 6:
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5310.245f, -5205.663f, 85.2259f, 0f, 0f, 0f, 1f, false, false, false);
				}
				func_463();
				break;
			case 7:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_139) >= (0.085f + 0.05f))
				{
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5309.8f, -5207.6f, 85.40824f, 0f, 0f, 90f, 1f, false, false, false);
					}
					func_463();
				}
				break;
			case 8:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_139) >= (0.087f + 0.05f))
				{
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5313.9927f, -5207.3f, 85.34588f, 0f, 0f, 180f, 1f, false, false, false);
					}
					func_463();
				}
				break;
			case 9:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_139) >= (0.35f + 0.05f))
				{
					CAM::STOP_CAM_SHAKING(iLocal_191, true);
					if (!CAM::DOES_CAM_EXIST(iLocal_192))
					{
						iLocal_192 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					}
					CAM::SET_CAM_PARAMS(iLocal_192, 5295.859f, -5188.994f, 82.99249f, 3.961173f, -0.003078f, -90.428894f, 35.788742f, 0, 0, 0, 2);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_192, 8f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_192, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_192, 1f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_192, 0f);
					CAM::SHAKE_CAM(iLocal_192, "HAND_SHAKE", 0.5f);
					CAM::SET_CAM_PARAMS(iLocal_191, 5296.3735f, -5188.994f, 83.0277f, 3.408814f, -0.003078f, -91.27811f, 35.788742f, 0, 0, 0, 2);
					if (CAM::DOES_CAM_EXIST(iLocal_193))
					{
						CAM::DESTROY_CAM(iLocal_193, false);
					}
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_191, 8f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_191, 1.3f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 0f);
					CAM::SHAKE_CAM(iLocal_191, "HAND_SHAKE", 0.5f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_191, iLocal_192, 3000, 0, 0);
					TASK::CLEAR_PED_TASKS(iLocal_160);
					TASK::CLEAR_PED_TASKS(uLocal_260[2]);
					TASK::CLEAR_PED_TASKS(iLocal_164);
					func_441(0, 0);
					INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_CashD_vault");
					iLocal_210 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cd_dust"), 5312.14f, -5209.04f, 83.02f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_210, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cd_dust"));
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_prologue_ceiling_debris", 5298.206f, -5189.0635f, 85.281166f, 0f, 0f, 180f, 1f, false, false, false);
					}
					func_463();
				}
				break;
			case 10:
				if (SYSTEM::TIMERA() > 3000)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_260[2]);
					__LIB_30__::func_217(uLocal_260[2], 5310.6885f, -5204.9897f, 82.5199f, (355.824f + 90f), 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_260[2], 5310.6885f, -5204.9897f, 82.5199f, -1, false, 0f, true, true, iLocal_220[0], false);
					__LIB_30__::func_217(iLocal_160, 5308.856f, -5206.294f, (85.7187f - 3.2f), 355.824f, 1);
					PED::FORCE_PED_MOTION_STATE(iLocal_160, joaat("MotionState_ActionMode_Idle"), false, 0, false);
					iLocal_57 = 1;
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					func_441(0, 0);
					if (iLocal_54)
					{
						RECORDING::REPLAY_STOP_EVENT();
						iLocal_54 = 0;
					}
					if (CAM::DOES_CAM_EXIST(iLocal_191))
					{
						CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_191, 0f);
						CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_191, 0f);
						CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_191, 2.8f);
						CAM::DESTROY_CAM(iLocal_191, false);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_191))
					{
						iLocal_191 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1f);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
					}
					__LIB_20__::func_439(128);
					func_477(PLAYER::PLAYER_ID(), 1, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_30__::func_731();
				}
				break;
		}
		if (iLocal_29 > 1 && iLocal_29 < 10)
		{
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5308.8022f, -5204.5786f, 84.01863f, 1f, 1f, 1.5f, false, true, 0)))
		{
			func_744(37, 1);
		}
		else
		{
			func_742(1, joaat("v_ilev_cd_door"));
			func_742(2, joaat("v_ilev_cd_door"));
		}
	}
	if (func_412())
	{
		CAM::SET_CAM_ACTIVE(iLocal_191, true);
		if (CAM::DOES_CAM_EXIST(iLocal_193))
		{
			CAM::DESTROY_CAM(iLocal_193, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_192))
		{
			CAM::DESTROY_CAM(iLocal_192, false);
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		__LIB_11__::func_108(&(iLocal_213[2]));
		__LIB_5__::func_674(&(iLocal_166[2]));
		__LIB_5__::func_674(&(iLocal_166[0]));
		__LIB_0__::func_202(&uLocal_318, 8);
		__LIB_5__::func_674(&(iLocal_166[1]));
		__LIB_5__::func_674(&(iLocal_166[3]));
		__LIB_11__::func_108(&iLocal_202);
		__LIB_11__::func_108(&iLocal_203);
		__LIB_11__::func_108(&iLocal_204);
		__LIB_11__::func_108(&iLocal_205);
		__LIB_11__::func_108(&iLocal_206);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_210))
		{
			iLocal_210 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cd_dust"), 5312.14f, -5209.04f, 83.02f, true, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_210, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cd_dust"));
		}
		func_796(4);
		if (iLocal_235 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_235);
			AUDIO::RELEASE_SOUND_ID(iLocal_235);
			iLocal_235 = -1;
		}
		if (func_745(297))
		{
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_PROLOGUE_VAULT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_MUTE_SPRINKLERS"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_MUTE_SPRINKLERS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
		}
		__LIB_10__::func_7(&iLocal_186);
		__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
		__LIB_37__::func_503(&iLocal_182, &iLocal_164, 0);
		__LIB_30__::func_214(1);
		__LIB_20__::func_439(128);
		MISC::SET_TIME_SCALE(1f);
		__LIB_6__::func_849(1);
		if (CAM::DOES_CAM_EXIST(iLocal_191))
		{
			if (CAM::IS_CAM_RENDERING(iLocal_191))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			}
		}
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		__LIB_8__::func_770(1);
		TASK::CLEAR_PED_TASKS(iLocal_160);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_232))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232) != 10)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232, 9);
			}
		}
		func_742(1, joaat("v_ilev_cd_door"));
		func_742(2, joaat("v_ilev_cd_door"));
		iLocal_251++;
	}
}

void func_680()//Position - 0x8D2F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	struct<20> Var6;
	struct<21> Var7;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 0, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		iLocal_57 = 1;
		if (!__LIB_11__::func_869("PRO_Charges"))
		{
			func_6();
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5310.6885f, -5204.9897f, 82.5199f))
		{
			iLocal_220[0] = TASK::ADD_COVER_POINT(5310.6885f, -5204.9897f, 82.5199f, 0f, 2, 2, 0, false);
		}
		PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_166[0], 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213[1]))
		{
			iLocal_213[1] = OBJECT::CREATE_OBJECT(joaat("prop_1st_hostage_scene"), 5310.661f, -5206.56f, 81.575f, true, true, false);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_213[1], iLocal_196, joaat("V_CashD_reception"));
		}
		iLocal_232 = OBJECT::GET_RAYFIRE_MAP_OBJECT(5298.889f, -5189.087f, 82.5182f, 10f, "DES_VaultDoor001");
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_232))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232) != 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_232, 2);
			}
		}
		if (!func_745(270))
		{
			func_742(1, joaat("v_ilev_cd_door"));
			func_742(2, joaat("v_ilev_cd_door"));
		}
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, 5308.832f, -5206.525f, 82.5187f, 284.3977f, 1);
			CAM::STOP_CAM_SHAKING(iLocal_191, true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		if (!func_745(307))
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(5313.327f, -5208.2446f, 82.5107f, 0.01f, joaat("v_corp_cd_chair"), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				func_744(307, 1);
			}
		}
		if (!func_745(308))
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(5314.8643f, -5208.2363f, 82.5107f, 0.01f, joaat("v_corp_cd_chair"), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
				func_744(308, 1);
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_104, "main_player_two", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_105, "kick_down_player_zero", Local_137, Local_138, 1000f, -2f, -1, 790536, 0.125f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_160, iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_160, false);
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[2], sLocal_104, "main_player_two", Local_137, Local_138, 1000f, -8f, -1, 790536, 1f, 2, 0);
					fVar3 = 0.442f;
					fVar4 = 0.883f;
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131))
					{
						iLocal_131 = PED::CREATE_SYNCHRONIZED_SCENE(Local_137, Local_138, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_131, sLocal_104, "main_brad", 1000f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_131, fVar3);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_164, iLocal_227, true);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_132))
					{
						iLocal_132 = PED::CREATE_SYNCHRONIZED_SCENE(Local_137, Local_138, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_166[1], iLocal_132, sLocal_104, "main_femalehostage", 1000f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_132, fVar4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[1], false, false);
					}
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", Local_137, Local_138, 1000f, -8f, -1, 790529, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", Local_137, Local_138, 1000f, -8f, -1, 790529, 0f, 2, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_105, "kick_down_gaurd", Local_137, Local_138, 1000f, -8f, -1, 790536, 0.1f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_on_floor_gaurd", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[0], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					PED::PLAY_FACIAL_ANIM(iLocal_166[0], "002907_03_gc_pro_mcs_1", sLocal_103);
				}
				func_463();
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_104, "main_player_two", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_260[2], sLocal_104, "main_player_two") > 0.75f)
					{
						__LIB_10__::func_7(&iLocal_181);
					}
				}
				if (!func_745(261))
				{
					func_464(3);
					func_744(261, 1);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_181))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_104, "main_player_two", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_260[2], sLocal_104, "main_player_two") >= 1f)
						{
							func_743(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1f, 1f, 0);
							func_743(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1f, 1f, 0);
						}
					}
					func_743(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
					func_743(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0);
					if (func_743(1, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0) && func_743(2, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, 1, 1017370378, 1017370378, 0))
					{
						if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
						{
							if (MISC::GET_PROFILE_SETTING(0) == 0)
							{
								func_455(68, "PROHLP_AIM1b", 1, -1, 2000);
							}
							else if (MISC::GET_PROFILE_SETTING(0) == 1)
							{
								func_455(69, "PROHLP_AIM1c", 1, -1, 2000);
							}
							else if (MISC::GET_PROFILE_SETTING(0) == 2)
							{
								func_455(69, "PROHLP_AIM1c", 1, -1, 2000);
							}
							func_463();
						}
					}
				}
				else
				{
					func_742(1, joaat("v_ilev_cd_door"));
					func_742(2, joaat("v_ilev_cd_door"));
				}
				break;
			case 2:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						func_455(73, "PROHLP_TRADAIM", 1, -1, 2000);
					}
				}
				if ((func_745(227) || func_745(228)) || func_745(229))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[2]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[2]))) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3])))) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[0]))))
						{
							if (!func_745(230))
							{
								func_413(230, "PRO_bradhost", "PRO_bradhost_4", 6, 1, 0, 0);
							}
							else if (!func_745(231))
							{
								func_413(231, "PRO_bradhost", "PRO_bradhost_5", 6, 1, 0, 0);
							}
							else if (!func_745(232))
							{
								func_413(232, "PRO_bradhost", "PRO_bradhost_6", 6, 1, 0, 0);
							}
							else if (!func_745(233))
							{
								func_413(233, "PRO_bradhost", "PRO_bradhost_7", 6, 1, 0, 0);
							}
							else if (!func_745(234))
							{
								func_413(234, "PRO_bradhost", "PRO_bradhost_9", 6, 1, 0, 0);
							}
						}
					}
				}
				if (!__LIB_0__::func_75())
				{
					if (!func_745(105))
					{
						iVar2 = 0;
						while (iVar2 < iLocal_166)
						{
							__LIB_37__::func_503(&(uLocal_187[iVar2]), &(iLocal_166[iVar2]), 1);
							iVar2++;
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_186))
						{
							func_428(105, "PRO_AIM", 3500, 1);
							if (!__LIB_0__::func_75())
							{
								func_565(188, "PRO_listen", 6, 1, 1, 0);
							}
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
					{
						if (__LIB_0__::func_405("PRO_AIM", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				if ((func_745(67) || func_745(68)) || func_745(69))
				{
					if (!func_745(70) && !func_745(71))
					{
						if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || ((!__LIB_0__::func_1("PROHLP_AIM1a") && !__LIB_0__::func_1("PROHLP_AIM1b")) && !__LIB_0__::func_1("PROHLP_AIM1c")))
						{
							__LIB_30__::func_214(1);
							func_744(71, 1);
						}
					}
				}
				if (MISC::GET_PROFILE_SETTING(0) == 0)
				{
					if (func_745(70) || func_745(71))
					{
						if (!func_745(72))
						{
							if (__LIB_0__::func_1("PROHLP_AIM2a") || __LIB_0__::func_1("PROHLP_AIM2b"))
							{
								if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/)))
								{
									func_744(66, 1);
								}
								if (MISC::GET_GAME_TIMER() > iLocal_36)
								{
									if (func_745(66))
									{
										__LIB_30__::func_214(1);
									}
								}
							}
							if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_455(72, "PROHLP_AIM3", 1, -1, 2000);
								}
							}
						}
					}
				}
				if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[2]))
				{
					iLocal_46[2] = MISC::GET_GAME_TIMER() + 250;
				}
				if (!func_745(57))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_35)
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), 2.5f, true))
						{
							AUDIO::PLAY_PAIN(iLocal_166[2], 6, 0, 0);
							iLocal_35 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(750, 1000));
							func_744(57, 1);
						}
					}
				}
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[2]) && MISC::GET_GAME_TIMER() > iLocal_46[2]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[2])) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "hostage01_standup_malehostage01", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_malehostage01", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[2], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "hostage01_standup_malehostage01", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[2], sLocal_104, "hostage01_standup_malehostage01") > 0.4f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[2], sLocal_104, "hostage01_standup_malehostage01") < 0.5f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_166[2], iLocal_160, 1000, 0, 2);
				}
				if (!__LIB_0__::func_75())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3))
					{
						if (!__LIB_0__::func_405("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_186))
						{
							func_413(227, "PRO_bradhost", "PRO_bradhost_1", 6, 1, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd") < 0.05f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd") > 0.267f)))
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_outside_cuboard_malehostage01", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[2], sLocal_104, "idle_outside_cuboard_malehostage01") > 0.1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "hostage01_standup_malehostage01", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[3], sLocal_104, "hostage01_standup_malehostage01") > 0.9f))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "hostage01_enter_cuboard_malehostage01", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_104, "idle_inside_cuboard_malehostage01", 8f, -8f, -1, 262145, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_166[2], iLocal_195);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
						func_441(10, 0);
					}
				}
				if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3]))
				{
					iLocal_46[3] = MISC::GET_GAME_TIMER() + 250;
				}
				if (!func_745(58))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_35)
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_166[3], true), 2.5f, true))
						{
							AUDIO::PLAY_PAIN(iLocal_166[3], 7, 0, 0);
							iLocal_35 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(750, 1000));
							func_744(58, 1);
						}
					}
				}
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3]) && MISC::GET_GAME_TIMER() > iLocal_46[3]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3])) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "hostage_02_standup_malehostage02", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_malehostage02", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[3], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "hostage_02_standup_malehostage02", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[3], sLocal_104, "hostage_02_standup_malehostage02") > 0.4f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[3], sLocal_104, "hostage_02_standup_malehostage02") < 0.5f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_166[3], iLocal_160, 1000, 0, 2);
				}
				if (!__LIB_0__::func_75())
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[3])))
					{
						if (!__LIB_0__::func_405("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_186))
						{
							func_413(228, "PRO_bradhost", "PRO_bradhost_2", 6, 1, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "hostage01_enter_cuboard_malehostage01", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "hostage01_enter_cuboard_malehostage01", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[2], sLocal_104, "hostage01_enter_cuboard_malehostage01") > 0.349f))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd") < 0.1f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd") > 0.371f)))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_outside_cuboard_malehostage02", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[3], sLocal_104, "idle_outside_cuboard_malehostage02") > 0.1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "hostage_02_standup_malehostage02", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[3], sLocal_104, "hostage_02_standup_malehostage02") > 0.9f))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "hostage02_enter_cuboard_malehostage02", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM(0, sLocal_104, "idle_inside_cuboard_malehostage02", 8f, -8f, -1, 262145, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_166[3], iLocal_195);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							func_441(10, 0);
						}
					}
				}
				if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[0]))
				{
					iLocal_46[0] = MISC::GET_GAME_TIMER() + 250;
				}
				if (!func_745(56))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_35)
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_166[0], true), 2.5f, true))
						{
							AUDIO::PLAY_PAIN(iLocal_166[0], 6, 0, 0);
							iLocal_35 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(750, 1000));
							func_744(56, 1);
						}
					}
				}
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[0]) && MISC::GET_GAME_TIMER() > iLocal_46[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_166[0])) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "guard_standup_gaurd", Local_137, Local_138, 2f, -2f, -1, 790528, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_gaurd", Local_137, Local_138, 2f, -2f, -1, 790529, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[0], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "guard_standup_gaurd", 3) && (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "guard_standup_gaurd") > 0.4f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "guard_standup_gaurd") < 0.5f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_166[0], iLocal_160, 1000, 0, 2);
				}
				if (!__LIB_0__::func_75())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
					{
						if (!__LIB_0__::func_405("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_186))
						{
							func_413(229, "PRO_bradhost", "PRO_bradhost_3", 6, 1, 0, 0);
						}
					}
				}
				if ((!func_745(227) || !func_745(228)) || !func_745(229))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
						{
							if (!func_745(180))
							{
								func_413(180, "PRO_Idle", "PRO_Idle_1", 6, 1, 0, 0);
							}
							else if (!func_745(181) && SYSTEM::TIMERA() > 15000)
							{
								func_413(181, "PRO_Idle", "PRO_Idle_2", 6, 1, 0, 0);
							}
						}
					}
				}
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_outside_cuboard_gaurd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "idle_outside_cuboard_gaurd") > 0.1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "guard_standup_gaurd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_166[0], sLocal_104, "guard_standup_gaurd") > 0.9f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "gaurd_enter_cuboard_gaurd", Local_137, Local_138, 2f, -2f, -1, 790528, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_104, "idle_inside_cuboard_gaurd", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[0], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					func_441(10, 0);
				}
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
				{
					if (!func_745(165))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_260[2], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER")) != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0))
						{
							if (SYSTEM::TIMERA() > 18000)
							{
								if (!__LIB_0__::func_405("PRO_STAY1", 0, 0) && !HUD::DOES_BLIP_EXIST(iLocal_186))
								{
									if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
									{
										func_565(165, "PRO_HostageF", 7, 1, 0, 0);
									}
								}
							}
						}
					}
				}
				if (__LIB_0__::func_1("PROHLP_HURRY"))
				{
					if (((ENTITY::IS_ENTITY_AT_COORD(iLocal_166[2], 5318.4575f, -5206.782f, 84.268654f, 2f, 2.5f, 2f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[0], 5318.4575f, -5206.782f, 84.268654f, 2f, 2.5f, 2f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[1], 5318.4575f, -5206.782f, 84.268654f, 2f, 2.5f, 2f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[3], 5318.4575f, -5206.782f, 84.268654f, 2f, 2.5f, 2f, false, true, 0))
					{
						__LIB_30__::func_214(1);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[0], true, 0f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[2], true, 0f);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[0], false, 0f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[3], true, 0f);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[2], false, 0f);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[0], false, 0f);
				}
				else
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[3], false, 0f);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[2], false, 0f);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_166[0], false, 0f);
				}
				if ((((ENTITY::IS_ENTITY_AT_COORD(iLocal_166[2], 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[0], 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[1], 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[3], 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0)) || SYSTEM::TIMERA() > 20000)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5308.8022f, -5204.5786f, 84.01863f, 1f, 1f, 1.5f, false, true, 0)))
					{
						func_744(37, 1);
					}
					else
					{
						func_742(1, joaat("v_ilev_cd_door"));
						func_742(2, joaat("v_ilev_cd_door"));
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5310.6074f, -5204.71f, 83.518654f, 0.5f, 0.75f, 1f, false, true, 0))
					{
						if (!func_745(287))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_106, "get_into_cover_player_two", 5310.146f, -5208.317f, 82.519f, 0f, 0f, 0f, 1000f, -2f, -1, 790536, 0f, 2, 0);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 5310.6885f, -5204.9897f, 82.5199f, -1, false, 1f, true, true, iLocal_220[0], false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_260[2], iLocal_195);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
							func_744(287, 1);
						}
						else
						{
							__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
						}
					}
				}
				if (!func_745(7))
				{
					if (func_745(165))
					{
						if (!__LIB_0__::func_75())
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_164, sLocal_104, "shut_cuboard_door_brad", 3))
							{
								TASK::CLEAR_PED_TASKS(iLocal_164);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_166[2], 1500, false);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_166[3], 1500, false);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_166[0], 1500, false);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_brad", Local_137, Local_138, 2f, -2f, -1, 790537, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_164, iLocal_195);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "hostage01_standup_malehostage01", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_malehostage01", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_166[2], iLocal_195);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
								func_441(500, 0);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "hostage_02_standup_malehostage02", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_malehostage02", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_166[3], iLocal_195);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
								func_441(500, 0);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_on_floor_gaurd", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "guard_standup_gaurd", Local_137, Local_138, 8f, -8f, -1, 790528, 0f, 2, 0);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_outside_cuboard_gaurd", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_166[0], iLocal_195);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
								func_441(500, 0);
							}
							func_744(7, 1);
						}
					}
				}
				if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "idle_inside_cuboard_malehostage01", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "idle_inside_cuboard_gaurd", 3)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[1], sLocal_104, "idle_inside_cuboard_femalehostage", 3)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "idle_inside_cuboard_malehostage02", 3)) || ((((((ENTITY::IS_ENTITY_AT_COORD(iLocal_166[2], 5318.615f, -5206.9595f, 84.01863f, 2f, 2.5f, 2f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[0], 5318.615f, -5206.9595f, 84.01863f, 2f, 2.5f, 2f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[1], 5318.615f, -5206.9595f, 84.01863f, 2f, 2.5f, 2f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_166[3], 5318.615f, -5206.9595f, 84.01863f, 2f, 2.5f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_164, 5318.4575f, -5206.782f, 84.268654f, 1.75f, 2.25f, 1.75f, false, true, 0)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
					{
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_136) > 0.287f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_260[2], 5311.4976f, -5204.6772f, (85.71863f - 3.2f), 5311.415f, -5220.3394f, (88.71863f - 3.2f), 12f, false, true, 0))
							{
								__LIB_30__::func_731();
							}
						}
					}
					else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(5316.64f, -5205.74f, 83.67f, 1f, joaat("v_ilev_cd_door2"), false))
					{
						iLocal_198 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(5316.64f, -5205.74f, 83.67f, 1f, joaat("v_ilev_cd_door2"), true, false, true);
						iLocal_136 = PED::CREATE_SYNCHRONIZED_SCENE(Local_137, Local_138, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_136, sLocal_104, "shut_cuboard_door_brad", 8f, -8f, 5, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_198, iLocal_136, "shut_cuboard_door_door", sLocal_104, 1.5f, -8f, 0, 1.5f);
					}
				}
				break;
		}
		if (!func_745(14))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_135) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_135) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_135))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_135))
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 1, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_135, false);
				}
				else
				{
					func_477(PLAYER::PLAYER_ID(), 1, 0);
					func_744(14, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_105, "kick_down_player_zero", 3))
		{
			func_744(3, 1);
			PED::SET_PED_RESET_FLAG(iLocal_160, 156, true);
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_105, "kick_down_player_zero", 3))
		{
			if (func_745(3))
			{
				if (!func_745(48))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_160, joaat("MotionState_Aiming"), false, 0, false);
					SYSTEM::SETTIMERB(0);
					func_744(48, 1);
				}
			}
		}
		if (func_745(48))
		{
			if (!func_745(2))
			{
				PED::SET_PED_RESET_FLAG(iLocal_160, 156, true);
				if (SYSTEM::TIMERB() > 2000)
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_160, true);
					func_744(2, 1);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5305.638f, -5209.354f, 82.51868f, (5317.59f - 1.13f), -5209.529f, 85.51868f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5317.081f, -5209.4844f, 82.518654f, 5317.0703f, -5214.3403f, 86.018654f, 1f, false, true, 0))
		{
			func_428(209, "PRO_STAY1", 7500, 1);
			iVar2 = 0;
			while (iVar2 < iLocal_166)
			{
				__LIB_10__::func_7(&(uLocal_187[iVar2]));
				iVar2++;
			}
			__LIB_10__::func_7(&iLocal_181);
			__LIB_10__::func_7(&iLocal_182);
			__LIB_26__::func_360(&iLocal_186, 5309.4556f, -5207.3184f, (85.7187f - 3.2f), 0);
		}
		else
		{
			if (__LIB_0__::func_405("PRO_STAY1", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			__LIB_10__::func_7(&iLocal_186);
			iVar2 = 0;
			while (iVar2 < iLocal_166)
			{
				__LIB_37__::func_503(&(uLocal_187[iVar2]), &(iLocal_166[iVar2]), 1);
				iVar2++;
			}
			if (func_745(287))
			{
				__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
			}
			__LIB_37__::func_503(&iLocal_182, &iLocal_164, 0);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_131) == 1f)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_164, sLocal_104, "idle_outside_cuboard_brad", Local_137, Local_138, 2f, -2f, -1, 790529, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_164, false);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_132) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_132) == 1f)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[1], sLocal_104, "idle_inside_cuboard_femalehostage", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[1], false, false);
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[1], false);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "hostage01_enter_cuboard_malehostage01", 3))
		{
			if (!func_745(46))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[2], true);
				func_744(46, 1);
			}
		}
		else if (func_745(46))
		{
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[2], false);
			func_744(46, 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "hostage02_enter_cuboard_malehostage02", 3))
		{
			if (!func_745(47))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[3], true);
				func_744(47, 1);
			}
		}
		else if (func_745(47))
		{
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[3], false);
			func_744(47, 0);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd", 3))
		{
			if (!func_745(45))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[0], true);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 2);
				func_744(45, 1);
			}
		}
		else if (func_745(45))
		{
			PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[0], false);
			func_744(45, 0);
		}
		if (PED::IS_PED_IN_COVER(uLocal_260[2], true) && ENTITY::IS_ENTITY_AT_COORD(uLocal_260[2], 5310.699f, -5205.046f, 84.01867f, 0.5f, 0.5f, 1.5f, false, true, 0))
		{
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_109, "Trevor_Cover_Impatient_C", 3))
			{
				if (iLocal_42 == -1)
				{
					iLocal_42 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
				}
				if (MISC::GET_GAME_TIMER() > iLocal_42)
				{
					iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					Var6.f_4 = 1065353216;
					Var6.f_5 = 1065353216;
					Var6.f_9 = 1065353216;
					Var6.f_10 = 1065353216;
					Var6.f_14 = 1065353216;
					Var6.f_15 = 1065353216;
					Var6.f_17 = 1040187392;
					Var6.f_18 = 1040187392;
					Var6.f_19 = -1;
					Var7.f_4 = 1065353216;
					Var7.f_5 = 1065353216;
					Var7.f_9 = 1065353216;
					Var7.f_10 = 1065353216;
					Var7.f_14 = 1065353216;
					Var7.f_15 = 1065353216;
					Var7.f_17 = 1040187392;
					Var7.f_18 = 1040187392;
					Var7.f_19 = -1;
					Var7.f_0 = 1;
					Var7.f_2 = "Trevor_Cover_Impatient_A";
					Var7.f_1 = sLocal_109;
					Var7.f_20 = 32;
					if (iVar5 == 0)
					{
						Var7.f_2 = "Trevor_Cover_Impatient_A";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var7, &Var6, &Var6, 0.25f, 0.25f);
					}
					else if (iVar5 == 1)
					{
						Var7.f_2 = "Trevor_Cover_Impatient_B";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var7, &Var6, &Var6, 0.25f, 0.25f);
					}
					else if (iVar5 == 2)
					{
						Var7.f_2 = "Trevor_Cover_Impatient_C";
						TASK::TASK_SCRIPTED_ANIMATION(uLocal_260[2], &Var7, &Var6, &Var6, 0.25f, 0.25f);
					}
					iLocal_42 = -1;
				}
			}
		}
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[2], sLocal_104, "hostage01_enter_cuboard_malehostage01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[3], sLocal_104, "hostage02_enter_cuboard_malehostage02", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_104, "gaurd_enter_cuboard_gaurd", 3))
		{
			if ((!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_166[2]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_166[3])) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_166[0]))
			{
				if (!func_745(151))
				{
					__LIB_0__::func_203(&uLocal_318, 8, iLocal_166[0], "PROVICTIM1", 0, 1);
					__LIB_5__::func_759(iLocal_166[0], "PRO_FLAA", "PROVICTIM1", 3);
					func_744(151, 1);
				}
				else if (!func_745(152))
				{
					__LIB_0__::func_203(&uLocal_318, 8, iLocal_166[3], "PROVICTIM1", 0, 1);
					__LIB_5__::func_759(iLocal_166[3], "PRO_FLAB", "PROVICTIM1", 3);
					func_744(152, 1);
				}
				else if (!func_745(153))
				{
					__LIB_0__::func_203(&uLocal_318, 8, iLocal_166[2], "PROVICTIM1", 0, 1);
					__LIB_5__::func_759(iLocal_166[2], "PRO_FLAC", "PROVICTIM1", 3);
					func_744(153, 1);
				}
				else if (!func_745(154))
				{
					__LIB_0__::func_203(&uLocal_318, 8, iLocal_166[0], "PROVICTIM1", 0, 1);
					__LIB_5__::func_759(iLocal_166[0], "PRO_FLAD", "PROVICTIM1", 3);
					func_744(154, 1);
				}
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	}
	if (func_412())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::DOES_CAM_EXIST(iLocal_193))
		{
			CAM::DESTROY_CAM(iLocal_193, false);
		}
		CAM::STOP_CAM_SHAKING(iLocal_191, true);
		__LIB_10__::func_7(&iLocal_186);
		__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
		__LIB_37__::func_503(&iLocal_182, &iLocal_164, 0);
		__LIB_10__::func_7(&(uLocal_187[2]));
		__LIB_10__::func_7(&(uLocal_187[0]));
		__LIB_10__::func_7(&(uLocal_187[1]));
		__LIB_10__::func_7(&(uLocal_187[3]));
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_164, false);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[2], false);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[0], false);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[1], false);
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[3], false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_160, true);
		__LIB_11__::func_108(&(iLocal_213[1]));
		iLocal_251++;
	}
}

void func_681()//Position - 0x8FA29
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 0, 0);
		if (__LIB_0__::func_1("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */))
		{
			HUD::CLEAR_PRINTS();
			__LIB_6__::func_833();
		}
		else
		{
			func_6();
		}
		PED::SET_PED_AO_BLOB_RENDERING(iLocal_166[1], true);
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_1", 4);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213[1]))
		{
			iLocal_213[1] = OBJECT::CREATE_OBJECT(joaat("prop_1st_hostage_scene"), 5310.661f, -5206.56f, 81.575f, true, true, false);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_213[1], iLocal_196, joaat("V_CashD_reception"));
		}
		if (func_474())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_IN_COVER(iLocal_162, false))
		{
			PED::SET_PED_CAPSULE(iLocal_162, 0.5f);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			iLocal_135 = PED::CREATE_SYNCHRONIZED_SCENE(5305.51f, -5190.7f, 82.52f, Local_67, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_135, true);
			if (!CAM::DOES_CAM_EXIST(iLocal_193))
			{
				iLocal_193 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			}
			CAM::SET_CAM_ACTIVE(iLocal_193, true);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_193, iLocal_135, "blendout_pro_mcs_1_cam", sLocal_102);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-87.2f - ENTITY::GET_ENTITY_HEADING(iLocal_160)));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2f, 1f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_104, "main_player_two", 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(uLocal_260[2], sLocal_104, "main_player_two", PED::GET_SYNCHRONIZED_SCENE_RATE(iLocal_131));
		}
		if (!func_745(5))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_135) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_135) >= 0.3f)
			{
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_131, 1f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_132, 1f);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_164, true);
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[1], true);
				func_744(5, 1);
			}
		}
		if (!func_745(279))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_135) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_135) >= 0.4f)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[2], sLocal_104, "main_player_two", Local_137, Local_138, 1000f, -8f, -1, 790536, 1f, 2, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[2], sLocal_104, "main_player_two", Local_137, Local_138, 1000f, -8f, -1, 790536, 0f, 2, 0);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
				func_744(279, 1);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			__LIB_30__::func_217(iLocal_160, 5308.9097f, -5206.3105f, 82.5186f, 272.0266f, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_105, "kick_down_player_zero", Local_137, Local_138, 1000f, -2f, -1, 790536, 0.125f, 2, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_160, iLocal_195);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, false, false);
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
			{
				func_565(235, "PRO_hostf", 7, 1, 0, 0);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_260[2], iLocal_166[0], -1, true);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_SecurityGuard_Tiedup", 0))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_105, "kick_down_gaurd", Local_137, Local_138, 1000f, -8f, -1, 790536, 0.1f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_104, "idle_on_floor_gaurd", Local_137, Local_138, 8f, -8f, -1, 790529, 0f, 2, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_166[0], iLocal_195);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
			PED::PLAY_FACIAL_ANIM(iLocal_166[0], "002907_03_gc_pro_mcs_1", sLocal_103);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[0], false, false);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Male_Hostage_1", 0))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[2], sLocal_104, "idle_on_floor_malehostage01", Local_137, Local_138, 1000f, -8f, -1, 790529, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[2], false, false);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PRO_Male_Hostage_2", 0))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[3], sLocal_104, "idle_on_floor_malehostage02", Local_137, Local_138, 1000f, -8f, -1, 790529, 0f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[3], false, false);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[0], iLocal_162);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[1], iLocal_163);
		}
		switch (iLocal_29)
		{
			case 0:
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Tiedup", iLocal_166[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_1", iLocal_166[2], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_2", iLocal_166[3], 0);
				}
				if (__LIB_0__::func_90())
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_160, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_166[0], "PRO_SecurityGuard_Tiedup", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_166[2], "PRO_Male_Hostage_1", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_166[3], "PRO_Male_Hostage_2", 0, 0, 0);
					iLocal_197[0] = __LIB_35__::func_97(iLocal_162, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[0], "Michaels_weapon", 0, 0, 0);
					iLocal_197[1] = __LIB_35__::func_97(iLocal_163, 1, 0, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_197[1], "Trevors_weapon", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_163, "Trevor", 0, 0, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(2048);
					func_441(0, 0);
					if (!__LIB_0__::func_2(0))
					{
						CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
					}
					iLocal_57 = 0;
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_160, true), 15f, true, false, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_260[2], iLocal_226, true);
					fVar0 = 0.106f;
					fVar1 = 0.211f;
					iLocal_131 = PED::CREATE_SYNCHRONIZED_SCENE(Local_137, Local_138, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_131, sLocal_104, "main_brad", 1000f, -8f, 5, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_131, fVar0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_164, iLocal_227, true);
					iLocal_132 = PED::CREATE_SYNCHRONIZED_SCENE(Local_137, Local_138, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_166[1], iLocal_132, sLocal_104, "main_femalehostage", 1000f, -8f, 5, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_132, fVar1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[1], false, false);
					func_463();
				}
				break;
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_132))
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_131, 0f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_132, 0f);
					func_463();
				}
				break;
			case 2:
				if (!func_745(50))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((2.442666f * 1000f)))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("PRO_SecurityGuard_Tiedup", joaat("CS_ProlSec_02"));
						if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
							func_744(50, 1);
						}
					}
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-87.2f - ENTITY::GET_ENTITY_HEADING(iLocal_160)));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2f, 1f);
					__LIB_10__::func_7(&iLocal_181);
					func_744(270, 1);
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_260[2], sLocal_104, "main_player_two", 3))
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_260[2], sLocal_104, "main_player_two", 1f);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_131, 0.442f);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_131))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_132, 0.883f);
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_131, 1f);
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_132, 1f);
						PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_164, true);
						PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_166[1], true);
					}
					func_796(2);
					__LIB_7__::func_279(0, 1, 0, 0, 0, 0, 0);
					func_463();
				}
				break;
			case 3:
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (!func_745(120))
					{
						func_565(116, "PRO_Charges", 8, 0, 0, 0);
						func_744(120, 1);
					}
				}
				if (!func_745(312))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_160, sLocal_105, "kick_down_player_zero", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_160, sLocal_105, "kick_down_player_zero") >= 0.806f))
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
						func_744(312, 1);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_135) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_135) >= 1f)
				{
					__LIB_30__::func_731();
				}
				break;
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_510) != 3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_510, 3, false, true);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_511) != 3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_511, 3, false, true);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_512) != 3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_512, 3, false, true);
		}
	}
	if (func_412())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_197[0]))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_197[0], iLocal_162);
		}
		iVar3 = 0;
		while (iVar3 < iLocal_197)
		{
			__LIB_11__::func_108(&(iLocal_197[iVar3]));
			iVar3++;
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_441(0, 0);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_193))
		{
			if (!CAM::IS_CAM_RENDERING(iLocal_193))
			{
				CAM::DESTROY_CAM(iLocal_193, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_260[2], iLocal_226, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_164, iLocal_227, true);
		__LIB_10__::func_7(&(uLocal_187[0]));
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		iLocal_251++;
	}
}

void func_682()//Position - 0x903EE
{
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		iLocal_57 = 1;
		iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7000));
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_1", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
		{
			AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
		}
		func_428(225, "PRO_WALK", 7500, 1);
		if (func_474())
		{
			TASK::CLEAR_PED_TASKS(iLocal_160);
			TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_260[2], sLocal_102, "idle_loop_player_two", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_164, sLocal_102, "idle_loop_brad", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[1], sLocal_102, "idle_loop_femalehostage", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[2], sLocal_102, "idle_loop_malehostage01", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[3], sLocal_102, "idle_loop_malehostage02", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[0], sLocal_102, "idle_loop_gaurd", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
			PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_166[0], 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
		}
	}
	else
	{
		PED::SET_PED_CAPSULE(iLocal_164, 0.75f);
		PED::SET_PED_CAPSULE(iLocal_166[1], 0.75f);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Tiedup", iLocal_166[0], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_1", iLocal_166[2], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_2", iLocal_166[3], 0);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
			{
				if (!func_745(211))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.053f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(211, "PRO_SUBTITLE1", 3000, 1);
						}
						else
						{
							func_744(211, 1);
						}
					}
				}
				else if (!func_745(212))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.12f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(212, "PRO_SUBTITLE2", 4000, 1);
						}
						else
						{
							func_744(212, 1);
						}
					}
				}
				else if (!func_745(213))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.23f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(213, "PRO_SUBTITLE3", 4000, 1);
						}
						else
						{
							func_744(213, 1);
						}
					}
				}
				else if (!func_745(214))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.36f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(214, "PRO_SUBTITLE4", 3000, 1);
						}
						else
						{
							func_744(214, 1);
						}
					}
				}
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129))
			{
				iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(Local_133, Local_134, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_129, sLocal_102, "idle_loop_player_two", 1000f, -8f, 5, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_129, true);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_102, "idle_loop_gaurd", 3))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[0], sLocal_102, "idle_loop_gaurd", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[0], false, false);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_130))
			{
				iLocal_130 = PED::CREATE_SYNCHRONIZED_SCENE(Local_133, Local_134, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_130, sLocal_102, "idle_loop_brad", 1000f, -8f, 5, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_166[1], iLocal_130, sLocal_102, "idle_loop_femalehostage", 1000f, -8f, 5, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[1], false, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_130, true);
			}
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_455(78, "CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */, 1, -1, 2000);
			}
		}
		if (!PED::IS_PED_STOPPED(iLocal_160) && !TASK::IS_PED_STILL(iLocal_160))
		{
			func_744(104, 1);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.75f) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129))
		{
			if (!func_745(183))
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					func_413(183, "PRO_Intro", "PRO_Intro_8", 7, 1, 0, 0);
				}
			}
			else if (SYSTEM::TIMERA() > 500)
			{
				if (!func_745(104))
				{
					func_455(104, "PROHLP_WALK", 1, -1, 2000);
					if (!__LIB_0__::func_75())
					{
						func_565(184, "PRO_quiet", 7, 1, 0, 0);
					}
				}
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					switch (iLocal_30)
					{
						case 0:
							if (!__LIB_11__::func_869("PRO_Intro_8"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_32)
								{
									if (!__LIB_0__::func_75())
									{
										iLocal_32 = MISC::GET_GAME_TIMER() + 2500;
										iLocal_30++;
									}
								}
							}
							break;
						case 1:
							if (!__LIB_11__::func_869("PRO_Intro_8"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_32)
								{
									func_565(127, "PRO_Door", 7, 1, 0, 0);
									if (!__LIB_0__::func_75())
									{
										iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
										iLocal_30++;
									}
								}
							}
							break;
						case 2:
							if (!__LIB_11__::func_869("PRO_Door"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_32)
								{
									func_565(108, "PRO_Back", 7, 1, 0, 0);
									if (!__LIB_0__::func_75())
									{
										iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
										iLocal_30++;
									}
								}
							}
							break;
						case 3:
							if (!__LIB_11__::func_869("PRO_Back"))
							{
								if (MISC::GET_GAME_TIMER() > iLocal_32)
								{
									func_565(168, "PRO_Idle1T", 7, 1, 0, 0);
									if (!__LIB_0__::func_75())
									{
										iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
										iLocal_30++;
									}
								}
							}
							break;
						case 4:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						case 5:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(168, "PRO_Idle1T", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						case 6:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						case 7:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(168, "PRO_Idle1T", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						case 8:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						case 9:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(168, "PRO_Idle1T", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						case 10:
							if (MISC::GET_GAME_TIMER() > iLocal_32)
							{
								func_565(167, "PRO_Idle1B", 7, 1, 0, 0);
								if (!__LIB_0__::func_75())
								{
									iLocal_32 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_30++;
								}
							}
							break;
						}
					}
				}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5316.5796f, -5205.754f, 82.518654f, 5305.5747f, -5205.737f, 86.518654f, 5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_160, 5309.496f, -5207.672f, 84.01863f, 1f, 1.5f, 1.5f, false, true, 0))
		{
			if (func_544(0f, 0, 1, 1))
			{
				__LIB_30__::func_731();
			}
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_510) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_510) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_510, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_510, 4, false, true);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_511) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_511) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_511, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_511, 4, false, true);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_512) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_512) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_512, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_512, 4, false, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PED::SET_PED_RESET_FLAG(iLocal_160, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (func_412())
	{
		if (CAM::DOES_CAM_EXIST(iLocal_193))
		{
			CAM::DESTROY_CAM(iLocal_193, false);
		}
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
		}
		iLocal_251++;
	}
}

void func_683()//Position - 0x90E65
{
	int iVar0;
	float fVar1;
	if (func_537())
	{
		func_477(PLAYER::PLAYER_ID(), 0, 0);
		__LIB_6__::func_842();
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_161, true, -1, 0);
		PED::SET_PED_USING_ACTION_MODE(iLocal_164, true, -1, "DEFAULT_ACTION");
		__LIB_0__::func_503(124, 0);
		__LIB_0__::func_503(125, 0);
		__LIB_30__::func_732(&(iLocal_166[2]), joaat("A_M_M_ProlHost_01"), Local_72[0 /*3*/], fLocal_73[0], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[2], 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[2], 208, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_166[2], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_166[2], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_166[2], 101, 0);
		__LIB_0__::func_203(&uLocal_318, 7, iLocal_166[2], "PROHOSTAGE2", 0, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[2], true);
		__LIB_30__::func_732(&(iLocal_166[0]), joaat("IG_ProlSec_02"), Local_72[1 /*3*/], fLocal_73[1], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[0], 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[0], 208, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_166[0], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_166[0], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_166[0], 101, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[0], true);
		__LIB_30__::func_732(&(iLocal_166[1]), joaat("A_F_M_ProlHost_01"), Local_72[2 /*3*/], fLocal_73[2], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[1], 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[1], 208, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_166[1], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_166[1], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_166[1], 101, 0);
		PED::SET_PED_AO_BLOB_RENDERING(iLocal_166[1], false);
		__LIB_0__::func_203(&uLocal_318, 8, iLocal_166[1], "PROHOSTAGE", 0, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[1], true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_166[1], false);
		__LIB_30__::func_732(&(iLocal_166[3]), joaat("A_M_M_ProlHost_01"), Local_72[3 /*3*/], fLocal_73[3], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[3], 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_166[3], 208, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_166[3], 16);
		PED::SET_PED_MAX_HEALTH(iLocal_166[3], 101);
		ENTITY::SET_ENTITY_HEALTH(iLocal_166[3], 101, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_166[3], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_166[3], 3, 1, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[3], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_ProlSec_02"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_ProlHost_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_ProlHost_01"));
		__LIB_37__::func_503(&(uLocal_187[0]), &(iLocal_166[0]), 1);
		iVar0 = 0;
		while (iVar0 < iLocal_166)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_166[iVar0], true);
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_207))
		{
			iLocal_207 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cd_entrydoor"), Local_78, true, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_207, true);
		}
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Pro_S1");
		iLocal_57 = 0;
		if (!CAM::DOES_CAM_EXIST(iLocal_191))
		{
			iLocal_191 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		}
		CAM::SET_CAM_PARAMS(iLocal_191, 5314.3857f, -5210.131f, 83.93124f, 1.569747f, 0f, 83.86822f, 22.58505f, 0, 1, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
		func_441(0, 0);
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_CashD_reception");
		__LIB_6__::func_842();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
		func_570(Local_68, 1101004800, 0);
		func_464(2);
		while (((!BitTest(Global_113386.f_10016.f_25, 0) && !(__LIB_0__::func_526() || Global_100480.f_10 > 0)) && !__LIB_0__::func_294()) && !__LIB_0__::func_2(0))
		{
			func_441(0, 0);
			__LIB_6__::func_842();
		}
		func_796(1);
		while (!AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PRO_IG_1", 0))
		{
			func_441(0, 0);
			__LIB_6__::func_842();
			func_716();
		}
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		SYSTEM::SETTIMERA(0);
		HUD::LOCK_MINIMAP_ANGLE(15);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213[0]))
		{
			iLocal_213[0] = OBJECT::CREATE_OBJECT(joaat("prop_1st_prologue_scene"), 5310.661f, -5211.665f, 81.575f, true, true, false);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_213[0], iLocal_196, joaat("V_CashD_reception"));
		}
		CUTSCENE::REQUEST_CUTSCENE("pro_mcs_1", 8);
		if (func_474())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", iLocal_162, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_SecurityGuard_Tiedup", iLocal_166[0], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_1", iLocal_166[2], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("PRO_Male_Hostage_2", iLocal_166[3], 0);
		}
		switch (iLocal_29)
		{
			case 0:
				ENTITY::SET_ENTITY_HEADING(iLocal_160, 10.692f);
				if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
				{
					HUD::SET_TEXT_SCALE(0.675f, 0.675f);
					fVar1 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.675f, 0);
				}
				else
				{
					HUD::SET_TEXT_SCALE(0.45f, 0.45f);
					fVar1 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.45f, 0);
				}
				HUD::SET_TEXT_CENTRE(true);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PRO_SETTING");
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.5f - (fVar1 / 2f)), 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
				__LIB_6__::func_842();
				if (SYSTEM::TIMERA() > 4500)
				{
					iLocal_128 = PED::CREATE_SYNCHRONIZED_SCENE(Local_133, Local_134, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_160, iLocal_128, sLocal_102, "michael_main_player_zero", 1000f, -1.5f, 5, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_160, false, false);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_128, sLocal_102, "main_player_two", 1000f, -8f, 5, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_128, sLocal_102, "main_brad", 1000f, -8f, 5, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_164, iLocal_227, true);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_166[1], iLocal_128, sLocal_102, "main_femalehostage", 1000f, -8f, 5, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[1], false, false);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_207, iLocal_128, "Main_EntryDoor", sLocal_102, 8f, -8f, 0, 1000f);
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_128);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_102, "main_malehostage01", Local_133, Local_134, 1000f, -8f, -1, 790536, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_102, "idle_loop_malehostage01", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[2], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_102, "main_malehostage02", Local_133, Local_134, 1000f, -8f, -1, 790536, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_102, "idle_loop_malehostage02", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_195);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_166[3], iLocal_195);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_166[0], iLocal_128, sLocal_102, "main_gaurd", 1000f, -8f, 5, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[0], false, false);
					PED::PLAY_FACIAL_ANIM(iLocal_166[0], "main_gaurd_facial", sLocal_102);
					if (!CAM::DOES_CAM_EXIST(iLocal_193))
					{
						iLocal_193 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					}
					RECORDING::REPLAY_START_EVENT(4);
					CAM::PLAY_CAM_ANIM(iLocal_193, "main_camera", sLocal_102, Local_133, Local_134, false, 2);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(true);
					func_463();
				}
				break;
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (SYSTEM::TIMERA() > 500)
				{
					func_463();
				}
				break;
			case 2:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_128)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) > 0.21f)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
					{
						AUDIO::START_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
					}
					if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
					{
						func_455(95, "PROHLP_RADAR", 1, 7500, 2000);
						SYSTEM::SETTIMERB(0);
					}
					func_463();
				}
				break;
			case 3:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_128)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.5f)
				{
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_166[0], 1, 0.354f, 0.696f, 0f, 1f, 0, 0f, "BulletLarge");
					func_463();
				}
				break;
			case 4:
				if ((CAM::IS_CAM_PLAYING_ANIM(iLocal_193, "main_camera", sLocal_102) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_193) >= 0.99f) || !CAM::IS_CAM_PLAYING_ANIM(iLocal_193, "main_camera", sLocal_102))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_160, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5316.5796f, -5205.754f, 82.518654f, 5305.5747f, -5205.737f, 86.518654f, 5f, false, true, 0))
					{
						if (!__LIB_0__::func_1("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */))
						{
							__LIB_30__::func_214(1);
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(32.547848f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.712918f, 1f);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 1, 0);
							TASK::CLEAR_PED_TASKS(iLocal_160);
						}
						__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
						__LIB_30__::func_731();
					}
				}
				break;
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_193))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_193))
				{
					if (!func_745(313))
					{
						if (CAM::IS_CAM_PLAYING_ANIM(iLocal_193, "main_camera", sLocal_102) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_193) >= 0.606985f)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							func_744(313, 1);
						}
					}
					if (CAM::IS_CAM_PLAYING_ANIM(iLocal_193, "main_camera", sLocal_102) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_193) >= 0.625f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_160);
						func_477(PLAYER::PLAYER_ID(), 0, 256);
						ENTITY::SET_ENTITY_HEADING(iLocal_160, 20f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-1.6f, 1f);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
				}
			}
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_128))
		{
			if (!func_745(300))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0f && func_684(iLocal_193))
				{
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_193, 1.2f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_193, 3f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 0f);
					func_744(300, 1);
				}
			}
			else if (!func_745(301))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= (0.072f - 0.01f) && func_684(iLocal_193))
				{
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_193, 2.45f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_193, 3f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 0f);
					func_744(301, 1);
				}
			}
			else if (!func_745(302))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= (0.113f - 0.01f) && func_684(iLocal_193))
				{
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_193, 2f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_193, 4f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 0f);
					func_744(302, 1);
				}
			}
			else if (!func_745(303))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= (0.199f - 0.01f) && func_684(iLocal_193))
				{
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_193, 6f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_193, 2f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 0f);
					func_744(303, 1);
				}
			}
			else if (!func_745(304))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= (0.253f - 0.01f) && func_684(iLocal_193))
				{
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_193, 1.75f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_193, 2.5f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 0f);
					func_744(304, 1);
				}
			}
			else if (!func_745(305))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= (0.349f - 0.01f) && func_684(iLocal_193))
				{
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(iLocal_193, 10f);
					CAM::SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 1f);
					CAM::SET_CAM_DOF_FNUMBER_OF_LENS(iLocal_193, 2f);
					CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iLocal_193, 0f);
					__LIB_11__::func_108(&(iLocal_213[0]));
					func_744(305, 1);
				}
			}
			else if (!func_745(306))
			{
				if ((CAM::IS_CAM_PLAYING_ANIM(iLocal_193, "main_camera", sLocal_102) && CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_193) >= 0.9f) || !CAM::IS_CAM_PLAYING_ANIM(iLocal_193, "main_camera", sLocal_102))
				{
					CAM::SET_CAM_PARAMS(iLocal_191, 5312.0713f, -5213.5767f, 84.145706f, -5.135734f, 0.003036f, 15.537188f, 50f, 0, 1, 1, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_191, iLocal_193, 500, 2, 2);
					func_744(306, 1);
				}
			}
		}
		if (!func_745(299))
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && !PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_128)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.47f)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_pro_door_splinters", 5309.9f, -5208.2f, 83.7f, 0f, 0f, -90f, 1f, false, false, false);
				}
				func_744(299, 1);
			}
		}
		if (func_745(95))
		{
			if (SYSTEM::TIMERB() < 5000)
			{
				if (((SYSTEM::TIMERB() / 250) % 2) == 0)
				{
					HUD::DISPLAY_RADAR(true);
				}
				else
				{
					HUD::DISPLAY_RADAR(false);
				}
			}
			else if (SYSTEM::TIMERB() > 5000 && !func_745(74))
			{
				iLocal_57 = 1;
				func_744(74, 1);
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_455(78, "CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */, 1, -1, 2000);
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
			{
				if (!func_745(211))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.053f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(211, "PRO_SUBTITLE1", 3000, 1);
						}
						else
						{
							func_744(211, 1);
						}
					}
				}
				else if (!func_745(212))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.12f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(212, "PRO_SUBTITLE2", 4000, 1);
						}
						else
						{
							func_744(212, 1);
						}
					}
				}
				else if (!func_745(213))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.23f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(213, "PRO_SUBTITLE3", 4000, 1);
						}
						else
						{
							func_744(213, 1);
						}
					}
				}
				else if (!func_745(214))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.36f)
					{
						if (MISC::GET_PROFILE_SETTING(203) == 1)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							func_428(214, "PRO_SUBTITLE4", 3000, 1);
						}
						else
						{
							func_744(214, 1);
						}
					}
				}
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129))
			{
				iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(Local_133, Local_134, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_260[2], iLocal_129, sLocal_102, "idle_loop_player_two", 1000f, -8f, 5, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_260[2], false, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_129, true);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_166[0], sLocal_102, "idle_loop_gaurd", 3))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_166[0], sLocal_102, "idle_loop_gaurd", Local_133, Local_134, 8f, -8f, -1, 790537, 0f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[0], false, false);
			}
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_130))
			{
				iLocal_130 = PED::CREATE_SYNCHRONIZED_SCENE(Local_133, Local_134, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164, iLocal_130, sLocal_102, "idle_loop_brad", 1000f, -8f, 5, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_166[1], iLocal_130, sLocal_102, "idle_loop_femalehostage", 1000f, -8f, 5, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_164, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_166[1], false, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_130, true);
			}
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_510) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_510) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_510, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_510, 4, false, true);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_511) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_511) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_511, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_511, 4, false, true);
		}
		if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_512) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_512) != 4)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_512, 0f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_512, 4, false, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PED::SET_PED_RESET_FLAG(iLocal_160, 102, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (func_412())
	{
		Local_78.f_1 = -5208.056f;
		Local_79.f_2 = 160f;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_207, Local_78, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_207, Local_79, 2, true);
		RECORDING::REPLAY_STOP_EVENT();
		if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		}
		CAM::STOP_CAM_SHAKING(iLocal_191, true);
		HUD::UNLOCK_MINIMAP_ANGLE();
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[1], false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[0], false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[2], false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[3], false);
		iLocal_251++;
	}
}

int func_684(int iParam0)//Position - 0x92087
{
	Local_514 = { Local_515 };
	Local_515 = { CAM::GET_CAM_COORD(iParam0) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_514, Local_515, true) > 0.5f)
	{
		return 1;
	}
	return 0;
}

void func_689()//Position - 0x92111
{
	if (func_537())
	{
		__LIB_9__::func_485(23, 1);
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", true);
		CAM::SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(false);
		PATHFIND::SET_ALLOW_STREAM_PROLOGUE_NODES(true);
		HUD::ALLOW_SONAR_BLIPS(false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_YANKTON_CEMETARY", false, true);
		VEHICLE::SET_AMBIENT_VEHICLE_NEON_ENABLED(false);
		__LIB_6__::func_842();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
		func_477(PLAYER::PLAYER_ID(), 0, 0);
		__LIB_0__::func_54(0, 1);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		__LIB_30__::func_217(iLocal_160, Local_68, 10.692f, 1);
		__LIB_0__::func_130();
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_F_M_ProlHost_01"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_M_ProlHost_01"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Armoured_01"), true);
		HUD::REQUEST_ADDITIONAL_TEXT("PROLOG", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
			__LIB_6__::func_842();
		}
		STREAMING::REQUEST_PTFX_ASSET();
		while (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			SYSTEM::WAIT(0);
			__LIB_6__::func_842();
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_510))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_510, joaat("v_ilev_cd_door2"), 5316.65f, -5205.74f, 83.67f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_511))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_511, joaat("v_ilev_cd_door"), 5307.52f, -5204.54f, 83.67f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_512))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_512, joaat("v_ilev_cd_door"), 5310.12f, -5204.54f, 83.67f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_513))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_513, joaat("v_ilev_cd_door3"), 5305.46f, -5177.75f, 83.67f, true, true, false);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Foley", false, -1))
		{
			SYSTEM::WAIT(0);
			__LIB_6__::func_842();
		}
		PED::ADD_RELATIONSHIP_GROUP("FRIEND", &iLocal_228);
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_229);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_229, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_229);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_228);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_228, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_229, iLocal_228);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_228, iLocal_229);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_230, iLocal_228);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_228, iLocal_230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_229, iLocal_230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_230, iLocal_229);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_230);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_230, joaat("PLAYER"));
		func_699();
		STREAMING::REQUEST_IPL("prologue06_int");
		iLocal_196 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_68, "V_CashDepot");
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_196);
		while (!INTERIOR::IS_INTERIOR_READY(iLocal_196))
		{
			SYSTEM::WAIT(0);
			__LIB_6__::func_842();
		}
		STREAMING::REQUEST_IPL("prologue01");
		STREAMING::REQUEST_IPL("prologue02");
		STREAMING::REQUEST_IPL("prologue03");
		STREAMING::REQUEST_IPL("prologue04");
		STREAMING::REQUEST_IPL("prologue05");
		STREAMING::REQUEST_IPL("prologue06");
		STREAMING::REQUEST_IPL("prologuerd");
		STREAMING::REQUEST_IPL("Prologue01c");
		STREAMING::REQUEST_IPL("Prologue01d");
		STREAMING::REQUEST_IPL("Prologue01e");
		STREAMING::REQUEST_IPL("Prologue01f");
		STREAMING::REQUEST_IPL("Prologue01g");
		STREAMING::REQUEST_IPL("prologue01h");
		STREAMING::REQUEST_IPL("prologue01i");
		STREAMING::REQUEST_IPL("prologue01j");
		STREAMING::REQUEST_IPL("prologue01k");
		STREAMING::REQUEST_IPL("prologue01z");
		STREAMING::REQUEST_IPL("prologue03b");
		STREAMING::REQUEST_IPL("prologue04b");
		STREAMING::REQUEST_IPL("prologue05b");
		STREAMING::REQUEST_IPL("prologue06b");
		STREAMING::REQUEST_IPL("prologuerdb");
		STREAMING::REQUEST_IPL("prologue_occl");
		STREAMING::REQUEST_IPL("DES_ProTree_start");
		STREAMING::REQUEST_IPL("DES_ProTree_start_lod");
		STREAMING::REQUEST_IPL("prologue04_cover");
		STREAMING::REQUEST_IPL("prologue03_grv_fun");
		STREAMING::REQUEST_IPL("prologue_LODLights");
		__LIB_30__::func_735("prologue_LODLights");
		STREAMING::REQUEST_IPL("prologue_DistantLights");
		__LIB_30__::func_735("prologue_DistantLights");
		STREAMING::REMOVE_IPL("prologue03_grv_dug");
		STREAMING::REMOVE_IPL("prologue_grv_torch");
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", true);
		MISC::CLEAR_AREA(Local_68, 1000f, true, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_68 - Vector(1000f, 1000f, 1000f), Local_68 + Vector(1000f, 1000f, 1000f), false, true, true, true);
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5297.0796f, -5182.9907f, 82.5187f))
		{
			iLocal_222[0] = TASK::ADD_COVER_POINT(5297.0796f, -5182.9907f, 82.5187f, 274.0717f, 1, 2, 1, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5315.5337f, -5182.381f, 82.5186f))
		{
			iLocal_222[1] = TASK::ADD_COVER_POINT(5315.5337f, -5182.381f, 82.5186f, 182.4798f, 3, 2, 1, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5364.8784f, -5182.828f, 81.6339f))
		{
			iLocal_222[2] = TASK::ADD_COVER_POINT(5364.8784f, -5182.828f, 81.6339f, 88.5395f, 1, 2, 1, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5364.8784f, -5182.828f, 81.6339f))
		{
			iLocal_222[3] = TASK::ADD_COVER_POINT(5364.8784f, -5182.828f, 81.6339f, 88.5395f, 1, 2, 1, false);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(5364.8784f, -5182.828f, 81.6339f))
		{
			iLocal_222[4] = TASK::ADD_COVER_POINT(5364.8784f, -5182.828f, 81.6339f, 88.5395f, 1, 2, 1, false);
		}
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZONE_LIST_YANKTON", true, false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		VEHICLE::SET_RANDOM_TRAINS(false);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("SNOW");
		MISC::LOAD_CLOUD_HAT("RAIN", 0f);
		CLOCK::SET_CLOCK_DATE(15, 11, 2003);
		CLOCK::SET_CLOCK_TIME(5, 0, 0);
		__LIB_11__::func_501(1);
		Global_20209 = 1;
		__LIB_8__::func_770(1);
		iLocal_62 = 1;
		iLocal_63 = 0;
		while (!func_10(0, 1))
		{
			SYSTEM::WAIT(0);
			__LIB_6__::func_842();
		}
		func_799();
		__LIB_30__::func_217(iLocal_160, Local_68, 10.692f, 1);
		PED::CLEAR_PED_WETNESS(iLocal_160);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_160, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 208, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_162, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_160, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_160, iLocal_226, 500, true, true);
		WEAPON::SET_PED_AMMO(iLocal_160, iLocal_226, 500, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, iLocal_226, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_160);
		PED::CLEAR_ALL_PED_PROPS(iLocal_160);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 0, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 8, 7, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 5, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 3, 31, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 6, 14, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_160, 9, 11, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(0));
		func_696(&(uLocal_260[2]), 2, Local_69, 350.4967f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_260[2], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 208, true);
		PED::SET_PED_CAN_RAGDOLL(uLocal_260[2], false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_260[2], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[2], iLocal_229);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_260[2], true);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_260[2], iLocal_226, 500, true, true);
		WEAPON::SET_PED_AMMO(uLocal_260[2], iLocal_226, 500, false);
		PED::SET_PED_ACCURACY(uLocal_260[2], 50);
		PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_260[2], 1);
		__LIB_37__::func_503(&iLocal_181, &(uLocal_260[2]), 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_163, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uLocal_260[2]);
		PED::CLEAR_ALL_PED_PROPS(uLocal_260[2]);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 0, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 8, 13, 0, 0);
		PED::SET_PED_PROP_INDEX(iLocal_163, 1, 4, 0, false);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 3, 9, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 4, 9, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 6, 12, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 5, 4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_260[2], 9, 1, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(2));
		__LIB_30__::func_732(&iLocal_164, joaat("IG_Brad"), Local_70, 21.6992f, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 188, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_164, 208, true);
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_164, iLocal_196);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164, true);
		PED::SET_PED_CAN_RAGDOLL(iLocal_164, false);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_164, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_164, iLocal_229);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_164, iLocal_224, -1, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_164, iLocal_227, -1, true, true);
		PED::SET_PED_ACCURACY(iLocal_164, 50);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_164, 1);
		__LIB_37__::func_503(&iLocal_182, &iLocal_164, 0);
		AUDIO::STOP_PED_SPEAKING(iLocal_164, true);
		__LIB_0__::func_203(&uLocal_318, 1, iLocal_160, "MICHAEL", 0, 1);
		__LIB_0__::func_203(&uLocal_318, 2, uLocal_260[2], "TREVOR", 0, 1);
		__LIB_0__::func_203(&uLocal_318, 3, iLocal_164, "BRAD", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 6, 1, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Brad"));
		while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_162) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_163)) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_164))
		{
			func_441(0, 0);
			__LIB_6__::func_842();
		}
	}
	else
	{
		__LIB_6__::func_842();
		__LIB_30__::func_731();
	}
	if (func_412())
	{
		iLocal_251++;
		if (__LIB_0__::func_294())
		{
			if (Global_94618 == 1)
			{
				func_690(__LIB_0__::func_315() + 1);
			}
			else
			{
				func_690(__LIB_0__::func_315());
			}
			if (__LIB_0__::func_315() > 0)
			{
				iLocal_521 = Global_100441.f_12[0];
				iLocal_522 = iLocal_521;
			}
		}
	}
}

void func_690(int iParam0)//Position - 0x92A8B
{
	struct<3> Var0;
	float fVar1;
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_68 };
			fVar1 = 10.692f;
			break;
		case 1:
			Var0 = { 5299.933f, -5187.6924f, (85.7184f - 3.2f) };
			fVar1 = 165.5154f;
			break;
		case 2:
			Var0 = { 5299.933f, -5187.6924f, (85.7184f - 3.2f) };
			fVar1 = 165.5154f;
			break;
		case 3:
			Var0 = { 5326.855f, -5189.114f, (85.0058f - 3.2f) };
			fVar1 = 272.8408f;
			break;
		case 4:
			Var0 = { 4581.804f, -5059.4097f, 109.3138f };
			fVar1 = 118.5509f;
			break;
		case 5:
			Var0 = { 3543.8826f, -4696.1963f, 112.6563f };
			fVar1 = 351.6286f;
			break;
		case 6:
			Var0 = { 3272.7f, -4571.2f, 118.2f };
			fVar1 = 0f;
			break;
	}
	__LIB_0__::func_370(Var0, fVar1, 0, 0);
	__LIB_6__::func_775(0, -1, 0);
	func_747();
	if (!CAM::DOES_CAM_EXIST(iLocal_191))
	{
		iLocal_191 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	switch (iParam0)
	{
		case 0:
			__LIB_30__::func_217(iLocal_160, Local_68, 10.692f, 1);
			iLocal_251 = 1;
			break;
		case 1:
			__LIB_30__::func_217(iLocal_160, 5299.933f, -5187.6924f, (85.7184f - 3.2f), 165.5154f, 1);
			func_796(8);
			iLocal_251 = 8;
			break;
		case 2:
			__LIB_30__::func_217(iLocal_160, 5299.933f, -5187.6924f, (85.7184f - 3.2f), 165.5154f, 1);
			func_796(8);
			iLocal_59 = 1;
			iLocal_251 = 8;
			break;
		case 3:
			__LIB_0__::func_131();
			__LIB_30__::func_217(iLocal_160, 5326.855f, -5189.114f, (85.0058f - 3.2f), 272.8408f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 9, 12, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 9, 1, 0, 0);
			if (__LIB_20__::func_728() != 2)
			{
				__LIB_35__::func_983(&uLocal_260, 2);
				__LIB_42__::func_600(&uLocal_260, 1, 0, 0);
				func_799();
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
			}
			PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_163, 8, 13, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_163, 1, 4, 0, false);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 2, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_162, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 1, 0, 0);
			__LIB_0__::func_503(124, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_162, false);
			__LIB_0__::func_203(&uLocal_318, 1, uLocal_260[0], "MICHAEL", 0, 1);
			__LIB_0__::func_203(&uLocal_318, 2, iLocal_160, "TREVOR", 0, 1);
			if (iLocal_64 == 0)
			{
				ENTITY::CREATE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
				ENTITY::CREATE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), true);
				iLocal_64 = 1;
			}
			iLocal_62 = 1;
			func_796(16);
			iLocal_251 = 11;
			break;
		case 4:
			__LIB_0__::func_131();
			PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 1, 0, 0);
			__LIB_30__::func_217(iLocal_160, 4581.804f, -5059.4097f, 109.3138f, 118.5509f, 1);
			STREAMING::REQUEST_MODEL(joaat("rancherxl2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("rancherxl2")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172))
			{
				__LIB_30__::func_733(&iLocal_172, joaat("rancherxl2"), Local_71, 100.9597f, 0, 1097859072);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_172, "87ALN974");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_172, true);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_172, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 1, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 2, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 3, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_172, false);
			}
			func_796(19);
			if (Global_94618 == 1)
			{
				STREAMING::REQUEST_MODEL(joaat("U_M_Y_ProlDriver_01"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_ProlDriver_01")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_165 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_172, 26, joaat("U_M_Y_ProlDriver_01"), -1, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_165, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_165, 9, 0, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_165, iLocal_228);
				__LIB_0__::func_203(&uLocal_318, 5, iLocal_165, "PROGETAWAY", 0, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_Y_ProlDriver_01"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_165, true);
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_165))
				{
					func_441(0, 0);
				}
				iLocal_59 = 1;
				iLocal_251 = 12;
			}
			else
			{
				iLocal_251 = 13;
			}
			break;
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(iLocal_164, 9, 1, 0, 0);
			__LIB_30__::func_217(iLocal_160, 3543.8826f, -4696.1963f, 112.6563f, 351.6286f, 0);
			STREAMING::REQUEST_MODEL(joaat("rancherxl2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("rancherxl2")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172))
			{
				__LIB_30__::func_733(&iLocal_172, joaat("rancherxl2"), Local_71, 100.9597f, 0, 1097859072);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_172, "87ALN974");
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 0);
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 1);
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 2);
				VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_172, 3);
				VEHICLE::SET_VEHICLE_DAMAGE(iLocal_172, 0.5f, -0.4f, 0.05f, 750f, 750f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(iLocal_172, 0.5f, 0.4f, 0.05f, 750f, 750f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(iLocal_172, 0f, -2f, 1f, 250f, 250f, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rancherxl2"));
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_172, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 1, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 2, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_172, 3, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_172, false);
			}
			if (Global_94618 == 1)
			{
				iLocal_251 = 14;
			}
			else
			{
				iLocal_59 = 1;
				iLocal_251 = 15;
			}
			break;
		case 6:
			CUTSCENE::REQUEST_CUTSCENE("Pro_mcs_7_concat", 2);
			__LIB_30__::func_217(iLocal_160, 3272.7f, -4571.2f, 118.2f, 0f, 0);
			if (__LIB_20__::func_728() != 2)
			{
				__LIB_35__::func_983(&uLocal_260, 2);
				__LIB_42__::func_600(&uLocal_260, 1, 0, 0);
				func_799();
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_260[0], iLocal_229);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_160, joaat("WEAPON_UNARMED"), true);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_163))
			{
				func_441(0, 0);
			}
			while (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_163, 0);
				}
				SYSTEM::WAIT(0);
			}
			__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, true, true, false);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			CUTSCENE::START_CUTSCENE(0);
			MISC::LOAD_CLOUD_HAT("Stormy 01", 0f);
			while (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				SYSTEM::WAIT(0);
			}
			if (!__LIB_0__::func_2(0))
			{
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
			}
			while (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				SYSTEM::WAIT(0);
			}
			__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			iLocal_251 = 16;
			break;
	}
	iLocal_58 = 1;
}

void func_696(int* iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x93346
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		while (!func_91(iParam0, iParam1, Param2, fParam3, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
		func_799();
	}
}

void func_699()//Position - 0x9342C
{
	Local_72[0 /*3*/] = { 5311.921f, -5206.0557f, (85.7187f - 3.2f) };
	fLocal_73[0] = 272.2921f;
	Local_72[1 /*3*/] = { 5310.6543f, -5207.032f, (85.7187f - 3.2f) };
	fLocal_73[1] = 139.6356f;
	Local_72[2 /*3*/] = { 5311.576f, -5211.303f, (85.7187f - 3.2f) };
	fLocal_73[2] = 22.0567f;
	Local_72[3 /*3*/] = { 5314.795f, -5205.6216f, (85.7187f - 3.2f) };
	fLocal_73[3] = 151.4604f;
	Local_74[0 /*3*/] = { 5353.823f, -5184.7437f, 81.762f };
	fLocal_75[0] = 169.0588f;
	Local_74[1 /*3*/] = { 5355.1685f, -5182.404f, 81.762f };
	fLocal_75[1] = 61.0588f;
	Local_74[2 /*3*/] = { 5353.92f, -5190.8887f, 81.762f };
	fLocal_75[2] = 130.9412f;
	Local_74[3 /*3*/] = { 5352.0396f, -5188.7974f, 81.762f };
	fLocal_75[3] = 21.5294f;
	Local_74[4 /*3*/] = { 5353.89f, -5192.23f, 81.762f };
	fLocal_75[4] = 115.6477f;
	Local_74[5 /*3*/] = { 5343.47f, -5196.2905f, 81.762f };
	fLocal_75[5] = 358.9412f;
	Local_74[6 /*3*/] = { 5382.5513f, -5176.6104f, 80.4568f };
	fLocal_75[6] = 108.5755f;
	Local_74[7 /*3*/] = { 5381.8916f, -5175.5967f, 80.4709f };
	fLocal_75[7] = 123.564f;
	Local_74[8 /*3*/] = { 5381.189f, -5173.658f, 80.4267f };
	fLocal_75[8] = 117.5804f;
	Local_74[9 /*3*/] = { 5389.69f, -5191.0996f, 80.2098f };
	fLocal_75[9] = 143.6466f;
	Local_74[10 /*3*/] = { 5390.5415f, -5186.277f, 79.9868f };
	fLocal_75[10] = 59.6471f;
	Local_74[11 /*3*/] = { 5410.387f, -5182.0073f, 78.6563f };
	fLocal_75[11] = 135.1765f;
	Local_74[12 /*3*/] = { 5408.598f, -5180.1704f, 78.6633f };
	fLocal_75[12] = 133.0588f;
	Local_74[13 /*3*/] = { 5419.569f, -5171.7134f, 77.9652f };
	fLocal_75[13] = 201.5294f;
	Local_74[14 /*3*/] = { 5411.251f, -5179.0444f, 78.4814f };
	fLocal_75[14] = 45.5294f;
	Local_74[15 /*3*/] = { 5432.578f, -5151.1963f, 77.1536f };
	fLocal_75[15] = 104.1176f;
	Local_74[16 /*3*/] = { 5431.671f, -5148.8687f, 77.062f };
	fLocal_75[16] = 106.2353f;
	Local_74[17 /*3*/] = { 5410.832f, -5177.5654f, 79.483f };
	fLocal_75[17] = 115.8309f;
	Local_74[18 /*3*/] = { 3497.6106f, -4872.6333f, 110.5807f };
	fLocal_75[18] = 262.9412f;
	Local_74[19 /*3*/] = { 3497.8025f, -4870.141f, 110.7024f };
	fLocal_75[19] = 266.0508f;
	Local_74[20 /*3*/] = { 3494.8452f, -4869.093f, 110.7144f };
	fLocal_75[20] = 279.8827f;
	Local_74[21 /*3*/] = { 3494.4653f, -4866.5806f, 110.7753f };
	fLocal_75[21] = 280.5879f;
	Local_74[22 /*3*/] = { 3496.471f, -4865.463f, 110.7407f };
	fLocal_75[22] = 226.2353f;
	Local_74[23 /*3*/] = { 3495.5537f, -4864.558f, 110.7269f };
	fLocal_75[23] = 222f;
	Local_74[24 /*3*/] = { 3530.2092f, -4673.253f, 113.2062f };
	fLocal_75[24] = 274.9412f;
	Local_74[25 /*3*/] = { 3532.4717f, -4673.429f, 113.2055f };
	fLocal_75[25] = 189.5294f;
	Local_74[26 /*3*/] = { 3533.283f, -4671.6245f, 113.206f };
	fLocal_75[26] = 213.2454f;
	Local_74[27 /*3*/] = { 3536.7886f, -4671.368f, 113.2061f };
	fLocal_75[27] = 270.7059f;
	Local_74[28 /*3*/] = { 3533.1016f, -4666.006f, 113.1611f };
	fLocal_75[28] = 176.8235f;
	Local_74[29 /*3*/] = { 3542.2075f, -4660.9946f, 113.4237f };
	fLocal_75[29] = 131.647f;
	Local_74[30 /*3*/] = { 3546.6194f, -4659.553f, 113.1374f };
	fLocal_75[30] = 212.8229f;
	Local_74[31 /*3*/] = { 3550.46f, -4651.6206f, 113.2091f };
	fLocal_75[31] = 92.1176f;
	Local_74[32 /*3*/] = { 3552.158f, -4654.5864f, 113.2239f };
	fLocal_75[32] = 174.4004f;
	Local_74[33 /*3*/] = { 3548.897f, -4650.2505f, 113.2084f };
	fLocal_75[33] = 177.3907f;
	Local_74[34 /*3*/] = { 3541.2754f, -4662.743f, 113.3224f };
	fLocal_75[34] = 255.1765f;
	Local_74[35 /*3*/] = { 3514.9692f, -4655.0806f, 113.5005f };
	fLocal_75[35] = 226.6858f;
	Local_74[36 /*3*/] = { 3544.4329f, -4643.0356f, 113.1429f };
	fLocal_75[36] = 233.6201f;
	Local_74[37 /*3*/] = { 3560.461f, -4635.5728f, 113.8873f };
	fLocal_75[37] = 166.5792f;
	Local_74[38 /*3*/] = { 3510.5347f, -4675.332f, 113.2635f };
	fLocal_75[38] = 320.8466f;
	Local_81[0 /*3*/] = { 4587.6562f, -5054.247f, 106.987206f };
	Local_81[1 /*3*/] = { 4558.9673f, -5074.1216f, 107.6574f };
	Local_81[2 /*3*/] = { 4528.416f, -5091.893f, 107.54001f };
	Local_81[3 /*3*/] = { 4487.4487f, -5103.482f, 107.970634f };
	Local_81[4 /*3*/] = { 4438.861f, -5102.147f, 107.90377f };
	Local_81[5 /*3*/] = { 4337.2856f, -5082.3687f, 106.054886f };
	Local_81[6 /*3*/] = { 4067.198f, -5057.17f, 103.58461f };
	Local_81[7 /*3*/] = { 3966.1216f, -5043.0513f, 104.90844f };
	Local_81[8 /*3*/] = { 3880.6858f, -5022.593f, 106.33589f };
	Local_81[9 /*3*/] = { 3782.2087f, -4988.3267f, 106.596f };
	Local_81[10 /*3*/] = { 3630.5034f, -4916.527f, 106.600075f };
	Local_81[11 /*3*/] = { 3570.7683f, -4890.1543f, 106.696304f };
	Local_81[12 /*3*/] = { 3546.5784f, -4883.236f, 106.738144f };
	Local_81[13 /*3*/] = { 3514.123f, -4852.97f, 110.168335f };
	Local_82[0 /*3*/] = { 4552.2227f, -5078.523f, 117.63541f };
	Local_82[1 /*3*/] = { 4515.1274f, -5096.6846f, 117.5443f };
	Local_82[2 /*3*/] = { 4471.4673f, -5106.2354f, 118.19864f };
	Local_82[3 /*3*/] = { 4426.5903f, -5100.461f, 117.97717f };
	Local_82[4 /*3*/] = { 4317.046f, -5079.535f, 117.86976f };
	Local_82[5 /*3*/] = { 4054.0195f, -5055.5933f, 115.67789f };
	Local_82[6 /*3*/] = { 3955.334f, -5040.765f, 117.07636f };
	Local_82[7 /*3*/] = { 3862.413f, -5017.1587f, 118.46008f };
	Local_82[8 /*3*/] = { 3771.8252f, -4984.1226f, 118.26788f };
	Local_82[9 /*3*/] = { 3621.113f, -4912.029f, 118.616516f };
	Local_82[10 /*3*/] = { 3561.086f, -4886.649f, 118.70961f };
	Local_82[11 /*3*/] = { 3477.8438f, -4862.327f, 118.78803f };
	Local_82[12 /*3*/] = { 3512.0752f, -4850.8267f, 119.8924f };
	Local_82[13 /*3*/] = { 3544.632f, -4882.23f, 115.74004f };
	fLocal_83[0] = 20f;
	fLocal_83[1] = 20f;
	fLocal_83[2] = 20f;
	fLocal_83[3] = 20f;
	fLocal_83[4] = 20f;
	fLocal_83[5] = 20f;
	fLocal_83[6] = 20f;
	fLocal_83[7] = 20f;
	fLocal_83[8] = 20f;
	fLocal_83[9] = 20f;
	fLocal_83[10] = 20f;
	fLocal_83[11] = 20f;
	fLocal_83[12] = 20f;
	fLocal_83[13] = 21f;
	Local_80[0 /*3*/] = { 4970.8247f, -5091.4155f, 88.9819f };
	Local_80[1 /*3*/] = { 4905.5083f, -5074.94f, 93.4457f };
	Local_80[2 /*3*/] = { 4853.338f, -5078.555f, 95.662f };
	Local_80[3 /*3*/] = { 4802.635f, -5084.3965f, 103.6738f };
	Local_80[4 /*3*/] = { 4749.6914f, -5081.7344f, 106.0403f };
	Local_80[5 /*3*/] = { 4687.349f, -5076.968f, 104.7117f };
	Local_80[6 /*3*/] = { 4642.827f, -5078.2974f, 104.5495f };
	Local_80[7 /*3*/] = { 4584.667f, -5061.9907f, 109.1664f };
	Local_80[8 /*3*/] = { 4565.508f, -5068.2544f, 109.6636f };
	Local_80[9 /*3*/] = { 4526.3853f, -5088.662f, 109.4986f };
	Local_80[10 /*3*/] = { 4483.2266f, -5101.435f, 110.0345f };
	Local_80[11 /*3*/] = { 4449.3604f, -5100.788f, 109.9771f };
	Local_80[12 /*3*/] = { 4413.38f, -5095.3276f, 110.1241f };
	Local_80[13 /*3*/] = { 4372.285f, -5087.948f, 109.977f };
	Local_80[14 /*3*/] = { 4324.6626f, -5080.5264f, 109.9992f };
	Local_80[15 /*3*/] = { 4292.9604f, -5075.0874f, 109.5519f };
	Local_80[16 /*3*/] = { 4245.478f, -5071.1367f, 109.7107f };
	Local_80[17 /*3*/] = { 4204.5264f, -5067.857f, 110.2702f };
	Local_80[18 /*3*/] = { 4163.5806f, -5064.159f, 108.8908f };
	Local_80[19 /*3*/] = { 4118.8467f, -5061.0415f, 107.8974f };
	Local_80[20 /*3*/] = { 4079.5952f, -5057.554f, 107.4726f };
	Local_80[21 /*3*/] = { 4035.8784f, -5052.0747f, 107.7924f };
	Local_80[22 /*3*/] = { 3989.1301f, -5045.0024f, 108.5552f };
	Local_80[23 /*3*/] = { 3942.575f, -5035.9556f, 109.3346f };
	Local_80[24 /*3*/] = { 3898.9187f, -5026.5864f, 110.1669f };
	Local_80[25 /*3*/] = { 3857.748f, -5013.563f, 110.4648f };
	Local_80[26 /*3*/] = { 3817.7344f, -4999.7656f, 110.7629f };
	Local_80[27 /*3*/] = { 3778.094f, -4985.4976f, 110.4797f };
	Local_80[28 /*3*/] = { 3741.1372f, -4970.3735f, 110.1673f };
	Local_80[29 /*3*/] = { 3700.5952f, -4951.1714f, 110.696f };
	Local_80[30 /*3*/] = { 3660.6372f, -4930.7935f, 110.6758f };
	Local_80[31 /*3*/] = { 3627.8958f, -4913.8423f, 110.6055f };
	Local_80[32 /*3*/] = { 3609.6926f, -4905.1797f, 110.6365f };
	Local_80[33 /*3*/] = { 3574.8577f, -4890.786f, 110.6897f };
	Local_80[34 /*3*/] = { 3543.4487f, -4876.323f, 110.6801f };
	Local_80[35 /*3*/] = { 3526.9912f, -4858.039f, 110.659f };
	Local_80[36 /*3*/] = { 3522.7896f, -4836.8965f, 110.8203f };
	Local_80[37 /*3*/] = { 3525.263f, -4812.351f, 110.9858f };
	Local_80[38 /*3*/] = { 3526.695f, -4799.765f, 111.0327f };
	Local_80[39 /*3*/] = { 3528.125f, -4785.9927f, 111.0324f };
}

void func_705()//Position - 0x94173
{
	if (iLocal_524 != MISC::GET_FRAME_COUNT())
	{
		iLocal_524 = MISC::GET_FRAME_COUNT();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		__LIB_1__::func_428();
		if (iLocal_522 != iLocal_521)
		{
			if (iLocal_523 == -1)
			{
				iLocal_523 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_523, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
			}
			if (iLocal_522 > iLocal_521)
			{
				iLocal_522 = (iLocal_522 - SYSTEM::ROUND((0f + (500000f * SYSTEM::TIMESTEP()))));
				if (iLocal_522 < iLocal_521)
				{
					iLocal_522 = iLocal_521;
				}
				__LIB_18__::func_254(iLocal_522, "CMN_TAKE" /* GXT: TAKE */, 5000, 6, 2, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0f, 1, 250, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			else
			{
				if ((iLocal_521 - iLocal_522) < 10000)
				{
					iLocal_522 = iLocal_521;
				}
				else
				{
					iLocal_522 = (iLocal_522 + SYSTEM::ROUND((0f + (500000f * SYSTEM::TIMESTEP()))));
				}
				if (iLocal_522 > iLocal_521)
				{
					iLocal_522 = iLocal_521;
				}
				__LIB_18__::func_254(iLocal_522, "CMN_TAKE" /* GXT: TAKE */, 5000, 18, 2, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0f, 1, 250, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
		}
		else
		{
			if (iLocal_523 != -1)
			{
				AUDIO::STOP_SOUND(iLocal_523);
				iLocal_523 = -1;
			}
			__LIB_18__::func_254(iLocal_522, "CMN_TAKE" /* GXT: TAKE */, 5000, 18, 2, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0f, 1, 250, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_716()//Position - 0x94684
{
	if (iLocal_254 == 0 && (!AUDIO::IS_MUSIC_ONESHOT_PLAYING() || MISC::GET_GAME_TIMER() > iLocal_517))
	{
		switch (iLocal_253)
		{
			case 1:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_MISSION_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_MISSION_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
				{
					iLocal_253 = 0;
				}
				break;
			case 2:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_HOSTAGES"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_HOSTAGES";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HOSTAGES"))
				{
					iLocal_253 = 0;
				}
				break;
			case 3:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_PRE_SAFE_EXPLOSION";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
				{
					iLocal_253 = 0;
				}
				break;
			case 6:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_GUARD_HOSTAGE_OS";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
				{
					iLocal_253 = 0;
				}
				break;
			case 13:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_SHUTTER_OPEN_OS"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_SHUTTER_OPEN_OS";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_SHUTTER_OPEN_OS"))
				{
					iLocal_253 = 0;
				}
				break;
			case 17:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
				{
					iLocal_253 = 0;
				}
				break;
			case 20:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_POLICE_CAR_CHASE_OS";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
				{
					iLocal_253 = 0;
				}
				break;
			case 26:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_TRAIN_CRASH"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_TRAIN_CRASH";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_TRAIN_CRASH"))
				{
					iLocal_253 = 0;
				}
				break;
			case 27:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_BRAD_DOWN"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_BRAD_DOWN";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_BRAD_DOWN"))
				{
					iLocal_253 = 0;
				}
				break;
			case 31:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_FINAL_CUTSCENE"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
					}
					sLocal_516 = "PROLOGUE_TEST_FINAL_CUTSCENE";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE"))
				{
					iLocal_253 = 0;
				}
				break;
			}
	}
	switch (iLocal_254)
	{
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_MISSION_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_MISSION_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 2:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_HOSTAGES"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_HOSTAGES";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HOSTAGES"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_HOSTAGES"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 3:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_PRE_SAFE_EXPLOSION";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_PRE_SAFE_EXPLOSION"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 4:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COLLECT_MONEY"))
			{
				iLocal_254 = 0;
			}
			break;
		case 5:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COLLECT_CASH"))
			{
				iLocal_254 = 0;
			}
			break;
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE"))
			{
				iLocal_254 = 0;
			}
			break;
		case 6:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_GUARD_HOSTAGE_OS";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_OS"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 8:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_HOSTAGE_RT"))
			{
				iLocal_254 = 0;
			}
			break;
		case 9:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GUARD_SWITCH"))
			{
				iLocal_254 = 0;
			}
			break;
		case 10:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_SECURITY_ROOM_MA"))
			{
				iLocal_254 = 0;
			}
			break;
		case 11:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COVER_AT_BLAST_DOORS"))
			{
				iLocal_254 = 0;
			}
			break;
		case 12:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_BLAST_DOORS_EXPLODE"))
			{
				iLocal_254 = 0;
			}
			break;
		case 13:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_SHUTTER_OPEN_OS"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_SHUTTER_OPEN_OS";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_SHUTTER_OPEN_OS"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_SHUTTER_OPEN_OS"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 14:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COP_GUNFIGHT"))
			{
				iLocal_254 = 0;
			}
			break;
		case 15:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COP_GUNFIGHT_PROGRESS"))
			{
				iLocal_254 = 0;
			}
			break;
		case 16:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_COP_GUNFIGHT_RT"))
			{
				iLocal_254 = 0;
			}
			break;
		case 17:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_HEAD_TO_GETAWAY_VEHICLE"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 18:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GETAWAY_CUTSCENE"))
			{
				iLocal_254 = 0;
			}
			break;
		case 19:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GETAWAY_RT"))
			{
				iLocal_254 = 0;
			}
			break;
		case 21:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_POLICE_CAR_CHASE"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_POLICE_CAR_CHASE";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 22:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CRASH"))
			{
				iLocal_254 = 0;
			}
			break;
		case 23:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_CAR_CHASE"))
			{
				iLocal_254 = 0;
			}
			break;
		case 24:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_DRIVE_BY"))
			{
				iLocal_254 = 0;
			}
			break;
		case 25:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_ROADBLOCK_WARNING"))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 6f, 3);
				iLocal_254 = 0;
			}
			break;
		case 20:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_POLICE_CAR_CHASE_OS";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_POLICE_CAR_CHASE_OS"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 26:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_TRAIN_CRASH"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_TRAIN_CRASH";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_TRAIN_CRASH"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_TRAIN_CRASH"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 27:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_BRAD_DOWN"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_BRAD_DOWN";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_BRAD_DOWN"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_BRAD_DOWN"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 28:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_AFTER_TRAIN"))
			{
				iLocal_254 = 0;
			}
			break;
		case 29:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FINALE_RT"))
			{
				iLocal_254 = 0;
			}
			break;
		case 30:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_GRAB_WOMAN"))
			{
				iLocal_254 = 0;
			}
			break;
		case 32:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE_MA"))
			{
				iLocal_254 = 0;
			}
			break;
		case 31:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516) || !MISC::ARE_STRINGS_EQUAL(sLocal_516, "PROLOGUE_TEST_FINAL_CUTSCENE"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_516);
				}
				sLocal_516 = "PROLOGUE_TEST_FINAL_CUTSCENE";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FINAL_CUTSCENE"))
				{
					iLocal_517 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_254 = 0;
				}
			}
			break;
		case 33:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_MISSION_END"))
			{
				iLocal_254 = 0;
			}
			break;
		case 34:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_FAIL"))
			{
				iLocal_254 = 0;
			}
			break;
		case 35:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_KILL_ONESHOT"))
			{
				iLocal_254 = 0;
			}
			break;
		case 36:
			if (AUDIO::TRIGGER_MUSIC_EVENT("PROLOGUE_TEST_MISSION_CLEANUP"))
			{
				iLocal_254 = 0;
			}
			break;
	}
}

void func_717()//Position - 0x9510A
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]) && iLocal_160 == iLocal_162) && iLocal_251 <= 1)
	{
		func_739(9, __LIB_19__::func_811(0));
	}
	if (iLocal_251 <= 1)
	{
		func_739(10, __LIB_19__::func_811(2));
	}
	if (iLocal_251 <= 1)
	{
		func_739(11, joaat("IG_Brad"));
	}
	if (iLocal_251 == 1)
	{
		func_739(3, joaat("A_M_M_ProlHost_01"));
	}
	if (iLocal_251 == 1)
	{
		func_739(0, joaat("A_F_M_ProlHost_01"));
	}
	if (iLocal_251 == 1)
	{
		func_739(12, joaat("IG_ProlSec_02"));
	}
	if (iLocal_251 >= 4 && iLocal_251 <= 5)
	{
		func_739(30, joaat("v_ilev_cd_dust"));
	}
	if (iLocal_251 >= 6 && iLocal_251 <= 8)
	{
		func_739(4, joaat("CSB_ProlSec"));
	}
	if (iLocal_251 >= 10)
	{
		func_739(23, joaat("rancherxl2"));
	}
	if (iLocal_251 >= 10 && iLocal_251 <= 11)
	{
		func_739(28, joaat("U_M_Y_ProlDriver_01"));
	}
	if (iLocal_251 >= 10)
	{
		func_739(25, joaat("S_M_M_SnowCop_01"));
	}
	if (iLocal_251 >= 10 && iLocal_251 <= 11)
	{
		func_739(27, joaat("U_M_M_ProlSec_01"));
	}
	if (iLocal_251 >= 10)
	{
		func_739(13, joaat("policeold1"));
		func_739(14, joaat("policeold2"));
		VEHICLE::REQUEST_VEHICLE_ASSET(joaat("policeold1"), 4);
		VEHICLE::REQUEST_VEHICLE_ASSET(joaat("policeold2"), 4);
	}
	if (iLocal_251 >= 10 && iLocal_251 <= 11)
	{
		func_739(24, joaat("stockade3"));
	}
	if (iLocal_251 >= 14)
	{
		func_739(6, joaat("freight"));
	}
	if (iLocal_251 >= 14)
	{
		func_739(7, joaat("freightcont1"));
	}
	if (iLocal_251 >= 14)
	{
		func_739(8, joaat("freightcont2"));
	}
	if (iLocal_251 >= 6)
	{
		func_739(15, joaat("prop_cs_heist_bag_02"));
		func_739(20, joaat("p_ld_heist_bag_s_1"));
		func_739(18, joaat("p_csh_strap_01_s"));
	}
	if (iLocal_251 >= 10 && iLocal_251 <= 11)
	{
		func_739(21, joaat("p_trevor_prologe_bally_s"));
		func_739(22, joaat("p_trev_ski_mask_s"));
	}
	if (iLocal_251 >= 7 && iLocal_251 <= 8)
	{
		func_739(17, joaat("prop_michael_balaclava"));
	}
	if (iLocal_251 == 1)
	{
		func_739(36, joaat("prop_1st_prologue_scene"));
	}
	if (iLocal_251 >= 2 && iLocal_251 <= 4)
	{
		func_739(37, joaat("prop_1st_hostage_scene"));
	}
	if (iLocal_251 >= 4 && iLocal_251 <= 5)
	{
		func_739(38, joaat("prop_vault_door_scene"));
	}
	if (iLocal_251 >= 7 && iLocal_251 <= 8)
	{
		func_739(39, joaat("prop_2nd_hostage_scene"));
	}
	if (iLocal_251 >= 9)
	{
		func_642(3, sLocal_98);
		func_642(4, sLocal_98);
		func_642(5, sLocal_98);
		func_642(6, sLocal_98);
		func_642(8, sLocal_98);
		func_642(9, sLocal_98);
		func_642(11, sLocal_98);
		func_642(26, sLocal_98);
		func_642(27, sLocal_98);
		func_642(28, sLocal_98);
		func_642(29, sLocal_98);
		func_642(32, sLocal_98);
		func_642(33, sLocal_98);
		func_642(34, sLocal_98);
		func_642(35, sLocal_98);
	}
	if (iLocal_251 == 5)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_126);
	}
	else if (iLocal_251 > 7)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_126))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_126);
		}
	}
	if (iLocal_251 == 6)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_127);
	}
	else if (iLocal_251 > 7)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_127))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_127);
		}
	}
	if (iLocal_251 >= 10)
	{
		func_738(sLocal_100);
	}
	if (iLocal_251 >= 9 && iLocal_251 <= 10)
	{
		func_738(sLocal_99);
	}
	if (iLocal_251 <= 3)
	{
		func_738(sLocal_102);
	}
	else
	{
		func_718(sLocal_102);
	}
	if (iLocal_251 >= 2 && iLocal_251 <= 4)
	{
		func_738(sLocal_104);
		func_738(sLocal_105);
		func_738(sLocal_103);
		func_738(sLocal_106);
	}
	else
	{
		func_718(sLocal_104);
		func_718(sLocal_105);
		func_718(sLocal_103);
		func_718(sLocal_106);
	}
	if (iLocal_251 >= 4 && iLocal_251 <= 5)
	{
		func_738(sLocal_107);
		func_738(sLocal_108);
	}
	else
	{
		func_718(sLocal_107);
		func_718(sLocal_108);
	}
	if (iLocal_251 >= 3 && iLocal_251 <= 6)
	{
		func_738(sLocal_109);
	}
	else
	{
		func_718(sLocal_109);
	}
	if (iLocal_251 >= 3 && iLocal_251 <= 5)
	{
		func_738(sLocal_110);
	}
	else
	{
		func_718(sLocal_110);
	}
	if (iLocal_251 >= 5 && iLocal_251 <= 6)
	{
		func_738(sLocal_111);
	}
	else
	{
		func_718(sLocal_111);
	}
	if (iLocal_251 >= 4 && iLocal_251 <= 7)
	{
		func_738(sLocal_112);
	}
	else
	{
		func_718(sLocal_112);
	}
	if (iLocal_251 >= 5 && iLocal_251 <= 6)
	{
		func_738(sLocal_124);
	}
	else
	{
		func_718(sLocal_124);
	}
	if (iLocal_251 >= 7 && iLocal_251 <= 8)
	{
		func_738(sLocal_113);
		func_738(sLocal_114);
		func_738(sLocal_115);
		func_738(sLocal_116);
	}
	else
	{
		func_718(sLocal_113);
		func_718(sLocal_114);
		func_718(sLocal_115);
		func_718(sLocal_116);
	}
	if (iLocal_251 >= 8 && iLocal_251 <= 10)
	{
		func_738(sLocal_117);
		func_738(sLocal_118);
		func_738(sLocal_119);
	}
	else
	{
		func_718(sLocal_117);
		func_718(sLocal_118);
		func_718(sLocal_119);
	}
	if (iLocal_251 >= 9 && iLocal_251 <= 10)
	{
		func_738(sLocal_120);
	}
	else
	{
		func_718(sLocal_120);
	}
	if (iLocal_251 >= 11 && iLocal_251 <= 13)
	{
		func_738(sLocal_121);
	}
	else
	{
		func_718(sLocal_121);
	}
	if ((iLocal_251 >= 9 && iLocal_251 <= 11) || (iLocal_251 >= 13 && iLocal_251 <= 15))
	{
		func_738(sLocal_122);
	}
	else
	{
		func_718(sLocal_122);
	}
	if (iLocal_251 >= 9 && iLocal_251 <= 11)
	{
		func_738(sLocal_123);
	}
	else
	{
		func_718(sLocal_123);
	}
	if (iLocal_251 >= 9 && iLocal_251 <= 10)
	{
		func_738(sLocal_125);
	}
	else
	{
		func_718(sLocal_125);
	}
	if (iLocal_251 >= 10 && iLocal_251 <= 11)
	{
		func_738(sLocal_101);
	}
	else
	{
		func_718(sLocal_101);
	}
}

void func_718(char* sParam0)//Position - 0x957AF
{
	if (func_720(sParam0))
	{
		STREAMING::REMOVE_ANIM_DICT(sParam0);
		func_719(sParam0, 0);
	}
}

void func_719(char* sParam0, bool bParam1)//Position - 0x957CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_259;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_259[iVar2] == 0)
			{
				iLocal_259[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_259[iVar2] == iVar0)
		{
			iLocal_259[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_720(char* sParam0)//Position - 0x95837
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_259;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_259[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_725()//Position - 0x959A4
{
	int iVar0;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_161, iLocal_224, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_161, iLocal_224, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_224), false, true);
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_161, iLocal_224, false))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_161, iLocal_224) < WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_224))
		{
			WEAPON::SET_PED_AMMO(iLocal_161, iLocal_224, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_224) * 2, false);
		}
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_161, iLocal_226, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_161, iLocal_226, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_226), false, true);
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_161, iLocal_226, false))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_161, iLocal_226) < WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_226))
		{
			WEAPON::SET_PED_AMMO(iLocal_161, iLocal_226, WEAPON::GET_WEAPON_CLIP_SIZE(iLocal_226) * 2, false);
		}
	}
	iVar0 = joaat("WEAPON_UNARMED");
	WEAPON::GET_CURRENT_PED_WEAPON(iLocal_161, &iVar0, true);
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_161, false))
	{
		if (iVar0 != iLocal_224)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_161, iLocal_224, true);
		}
	}
	else if (iVar0 != iLocal_226)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_161, iLocal_226, true);
	}
}

void func_726(int iParam0, int iParam1, int iParam2)//Position - 0x95AA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = 0;
	iParam2 = iParam2;
	if (iVar0 < iParam0)
	{
		if (iVar1 < 59)
		{
			iVar1++;
		}
		else
		{
			iVar1 = 0;
			iVar0++;
		}
	}
	else if (iVar0 > iParam0)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = 59;
			iVar0 = (iVar0 - 1);
		}
	}
	else if (iVar1 < iParam1)
	{
		iVar1++;
	}
	else if (iVar1 > iParam1)
	{
		iVar1 = (iVar1 - 1);
	}
	CLOCK::SET_CLOCK_TIME(iVar0, iVar1, iVar2);
}

void func_727()//Position - 0x95B2A
{
	HUD::CLEAR_PRINTS();
	__LIB_30__::func_214(1);
	func_796(34);
	switch (iLocal_252)
	{
		case 0:
			__LIB_0__::func_324("PRO_FAIL");
			break;
		case 1:
			__LIB_0__::func_324("PRO_FAIL");
			break;
		case 2:
			if (iLocal_251 < 13)
			{
				__LIB_0__::func_324("PRO_MDIED");
			}
			else
			{
				__LIB_0__::func_324("CMN_MDIED" /* GXT: ~s~Michael died. */);
			}
			break;
		case 3:
			if (iLocal_251 < 13)
			{
				__LIB_0__::func_324("PRO_TDIED");
			}
			else
			{
				__LIB_0__::func_324("CMN_TDIED" /* GXT: ~s~Trevor died. */);
			}
			break;
		case 4:
			__LIB_0__::func_324("PRO_BDIED");
			break;
		case 5:
			__LIB_0__::func_324("PRO_DDIED");
			break;
		case 6:
			__LIB_0__::func_324("PRO_HDIED");
			__LIB_35__::func_984(&uLocal_318, cLocal_255, "PRO_KillHost", 7, 0, 0, 0);
			while (__LIB_0__::func_75())
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 7:
			__LIB_0__::func_324("PRO_FCAR");
			break;
		case 8:
			__LIB_0__::func_324("PRO_FAMMO");
			break;
		case 9:
			__LIB_0__::func_324("PRO_FROUTE");
			break;
		case 10:
			__LIB_0__::func_324("PRO_FSTUCK");
			break;
		case 11:
			__LIB_0__::func_324("CMN_TLEFT" /* GXT: ~s~Trevor was left behind. */);
			break;
		case 12:
			__LIB_0__::func_324("CMN_MLEFT" /* GXT: ~s~Michael was left behind. */);
			break;
		case 13:
			__LIB_0__::func_324("PRO_FLEFT");
			break;
		case 14:
			__LIB_0__::func_324("PRO_FABANCAR");
			break;
		case 15:
			__LIB_0__::func_324("PRO_FRANAWAY");
			break;
		case 16:
			__LIB_0__::func_324("PRO_FHOSTAWAY");
			break;
	}
	func_729(0);
	while (!__LIB_0__::func_204())
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		SYSTEM::WAIT(0);
	}
	func_752(0, 0);
}

void func_729(int iParam0)//Position - 0x95D10
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_730(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_730(int iParam0)//Position - 0x95D55
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
	func_731(&(Global_113386.f_2363.f_539), iVar1);
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

void func_731(var uParam0, int iParam1)//Position - 0x95E65
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
			if (!func_733(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_733(int iParam0, var uParam1, float fParam2)//Position - 0x96039
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
			return func_733(8, uParam1, fParam2);
			break;
		case 10:
			return func_733(8, uParam1, fParam2);
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

int func_738(char* sParam0)//Position - 0x96B4E
{
	if (!func_720(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			func_719(sParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_739(int iParam0, int iParam1)//Position - 0x96B7E
{
	if (!func_741(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			func_740(iParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_740(int iParam0, int iParam1)//Position - 0x96BAE
{
	iLocal_257[iParam0] = iParam1;
}

int func_741(int iParam0)//Position - 0x96BBF
{
	if (iLocal_257[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_742(int iParam0, int iParam1)//Position - 0x96BD6
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar0 = iLocal_510;
			break;
		case 1:
			iVar0 = iLocal_511;
			break;
		case 2:
			iVar0 = iLocal_512;
			break;
		case 3:
			iVar0 = iLocal_513;
			break;
	}
	iParam1 = iParam1;
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
	if (iVar1 == 1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, false, true);
	}
}

int func_743(int iParam0, int iParam1, struct<3> Param2, bool bParam3, float fParam4, float fParam5, float fParam6)//Position - 0x96C38
{
	int iVar0;
	int iVar1;
	float fVar2;
	switch (iParam0)
	{
		case 0:
			iVar0 = iLocal_510;
			break;
		case 1:
			iVar0 = iLocal_511;
			break;
		case 2:
			iVar0 = iLocal_512;
			break;
		case 3:
			iVar0 = iLocal_513;
			break;
	}
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
	fVar2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iVar0);
	iVar1 = iVar1;
	iParam1 = iParam1;
	if (fVar2 <= (fParam6 + -fParam5) || fVar2 >= (fParam6 + fParam5))
	{
		if (fVar2 > fParam6)
		{
			fVar2 = (fVar2 - fParam4);
		}
		else if (fVar2 < fParam6)
		{
			fVar2 = (fVar2 + fParam4);
		}
		MISC::CLEAR_AREA_OF_OBJECTS(Param2, 2f, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar0, fVar2, false, false);
		if (bParam3)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, false, true);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, false, true);
		}
		return 0;
	}
	fVar2 = fParam6;
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar0, fVar2, false, false);
	if (bParam3)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, false, true);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, false, true);
	}
	return 1;
}

void func_744(int iParam0, int iParam1)//Position - 0x96D30
{
	iLocal_256[iParam0] = iParam1;
}

int func_745(int iParam0)//Position - 0x96D41
{
	if (iLocal_256[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_746()//Position - 0x96D58
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_509.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_509[iVar0 /*2*/]))
		{
			if (MISC::GET_GAME_TIMER() > Local_509[iVar0 /*2*/].f_1)
			{
				HUD::SET_BLIP_FLASHES(Local_509[iVar0 /*2*/], false);
				Local_509[iVar0 /*2*/] = 0;
				Local_509[iVar0 /*2*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}

void func_747()//Position - 0x96DB0
{
	int iVar0;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_160, false))
	{
		iLocal_252 = 1;
		func_727();
	}
	if (iLocal_251 < 15)
	{
		if (__LIB_11__::func_143(&(uLocal_260[0])))
		{
			iLocal_252 = 2;
			func_727();
		}
	}
	if (__LIB_11__::func_143(&(uLocal_260[2])))
	{
		iLocal_252 = 3;
		func_727();
	}
	if (iLocal_58 == 0)
	{
		if (iLocal_251 != 15)
		{
			if ((CAM::IS_GAMEPLAY_CAM_RENDERING() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!PED::IS_PED_INJURED(iLocal_162) && !PED::IS_PED_INJURED(iLocal_163))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162, true), ENTITY::GET_ENTITY_COORDS(iLocal_163, true), true) > 75f || ((iLocal_251 == 11 || (iLocal_251 == 12 && iLocal_29 == 0)) && (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162, true), ENTITY::GET_ENTITY_COORDS(iLocal_163, true), true) > 50f || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5284.031f, -5195.382f, 76.65635f, 5417.995f, -5195.2554f, 93.967865f, 70f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5360.42f, -5167.9443f, 76.75192f, 5463.676f, -5171.3467f, 92.769196f, 140f, false, true, 0)))))
					{
						func_428(221, "PRO_TEAM", 7500, 1);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162, true), ENTITY::GET_ENTITY_COORDS(iLocal_163, true), true) > 100f || ((iLocal_251 == 11 || (iLocal_251 == 12 && iLocal_29 == 0)) && (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162, true), ENTITY::GET_ENTITY_COORDS(iLocal_163, true), true) > 75f || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5261.5093f, -5196.847f, 101.5037f, 5380.444f, -5196.9f, 71.41113f, 110f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_160, 5481.102f, -5169.1445f, 97.66674f, 5342.796f, -5165.1685f, 72.45739f, 180f, false, true, 0)))))
					{
						if (!PED::IS_PED_INJURED(iLocal_164) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_164, true), ENTITY::GET_ENTITY_COORDS(iLocal_161, true), true) < 30f)
						{
							iLocal_252 = 13;
						}
						else if (__LIB_20__::func_509(iLocal_160) == 0)
						{
							iLocal_252 = 11;
						}
						else if (__LIB_20__::func_509(iLocal_160) == 2)
						{
							iLocal_252 = 12;
						}
						func_727();
					}
				}
			}
		}
	}
	if (__LIB_11__::func_143(&iLocal_164))
	{
		if (iLocal_251 < 15)
		{
			iLocal_252 = 4;
			func_727();
		}
	}
	if (__LIB_11__::func_143(&iLocal_165))
	{
		if (iLocal_251 < 12)
		{
			iLocal_252 = 5;
			func_727();
		}
	}
	if (func_749(&iLocal_172) || (!ENTITY::IS_ENTITY_DEAD(iLocal_172, false) && FIRE::IS_ENTITY_ON_FIRE(iLocal_172)))
	{
		if (iLocal_251 < 15)
		{
			iLocal_252 = 7;
			func_727();
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_166)
	{
		if (__LIB_11__::func_143(&(iLocal_166[iVar0])))
		{
			if (!PED::IS_PED_INJURED(iLocal_164))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_164, iLocal_160, 10000);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_164, iLocal_160, 10000, 0, 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_136))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_198, -1000f, true);
				}
			}
			iLocal_252 = 6;
			func_727();
		}
		iVar0++;
	}
	__LIB_11__::func_143(&iLocal_167);
	iVar0 = 0;
	while (iVar0 < iLocal_168)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar0]))
		{
			HUD::REMOVE_COP_BLIP_FROM_PED(iLocal_168[iVar0]);
		}
		__LIB_0__::func_499(iLocal_168[iVar0], &(Local_171[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_173)
	{
		func_749(&(iLocal_173[iVar0]));
		iVar0++;
	}
}

int func_749(int iParam0)//Position - 0x97376
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false)) || __LIB_10__::func_566(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_752(int iParam0, int iParam1)//Position - 0x9743C
{
	int iVar0;
	bool bVar1;
	NETWORK::NETWORK_SET_CAN_RECEIVE_RS_INVITES(true);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
	if (iLocal_54)
	{
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_54 = 0;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
	{
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_128);
	}
	__LIB_0__::func_320(0, -1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_160);
			__LIB_30__::func_217(iLocal_160, ENTITY::GET_ENTITY_COORDS(iLocal_160, true), ENTITY::GET_ENTITY_HEADING(iLocal_160), 0);
		}
		PED::SET_PED_USING_ACTION_MODE(iLocal_160, false, -1, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_160, true);
		if (__LIB_20__::func_728() == 0)
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_162);
		}
	}
	__LIB_0__::func_54(1, 1);
	__LIB_20__::func_784(&Local_304);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_YANKTON_CEMETARY", true, true);
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_220)
	{
		TASK::REMOVE_COVER_POINT(iLocal_220[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		TASK::REMOVE_COVER_POINT(iLocal_222[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_221)
	{
		TASK::REMOVE_COVER_POINT(iLocal_221[iVar0]);
		iVar0++;
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_223))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_223);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[0], false))
		{
			PED::SET_PED_KEEP_TASK(uLocal_260[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_260[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_260[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_260[2], false))
		{
			PED::SET_PED_KEEP_TASK(uLocal_260[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_260[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_164, false))
		{
			PED::SET_PED_KEEP_TASK(iLocal_164, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_164);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_166)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_166[iVar0], false))
			{
				PED::SET_PED_KEEP_TASK(iLocal_166[iVar0], true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_166[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_167, false))
		{
			PED::SET_PED_KEEP_TASK(iLocal_167, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_167);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_168)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_168[iVar0], false))
			{
				PED::SET_PED_KEEP_TASK(iLocal_168[iVar0], true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_168[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_165, false))
		{
			PED::SET_PED_KEEP_TASK(iLocal_165, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_165);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_169[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_169[0], false))
		{
			PED::SET_PED_KEEP_TASK(iLocal_169[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_169[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_169[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_169[1], false))
		{
			PED::SET_PED_KEEP_TASK(iLocal_169[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_169[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_170, false))
		{
			PED::SET_PED_KEEP_TASK(iLocal_170, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_170);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_172);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_173)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_173[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_174)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_174[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_175);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_176[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_176[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_176[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_176[1]));
	}
	iVar0 = 0;
	while (iVar0 < iLocal_197)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_197[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_197[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_198);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_199))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_199);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_200);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_201))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_201);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_207))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_207);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_208);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_209)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_209[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_209[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_210);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_211)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_211[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_211[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_212)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_212[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_212[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_202))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_202);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_203))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_203);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_213)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_213[iVar0]));
		}
		iVar0++;
	}
	__LIB_10__::func_7(&iLocal_180);
	__LIB_10__::func_7(&iLocal_181);
	__LIB_10__::func_7(&iLocal_182);
	__LIB_10__::func_7(&iLocal_183);
	__LIB_10__::func_7(&iLocal_184);
	__LIB_10__::func_7(&iLocal_185);
	__LIB_10__::func_7(&iLocal_186);
	__LIB_10__::func_7(&iLocal_188);
	iVar0 = 0;
	while (iVar0 < iLocal_166)
	{
		__LIB_10__::func_7(&(uLocal_187[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_168)
	{
		__LIB_10__::func_7(&(uLocal_189[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_190)
	{
		__LIB_10__::func_7(&(iLocal_190[iVar0]));
		iVar0++;
	}
	CAM::STOP_GAMEPLAY_HINT(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	__LIB_12__::func_100(&uLocal_260);
	func_6();
	HUD::SET_GPS_FLASHES(false);
	fLocal_84 = 0f;
	func_791();
	func_790();
	func_789();
	func_788();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	iLocal_47 = 0;
	iLocal_43 = 0;
	Local_44 = { Local_67 };
	iLocal_29 = 0;
	iLocal_30 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		iLocal_31[iVar0] = -1;
		iVar0++;
	}
	iLocal_32 = 0;
	iLocal_36 = -1;
	iLocal_55 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	__LIB_18__::func_192(&iLocal_483, 1, 0);
	iVar0 = 0;
	while (iVar0 < iLocal_37)
	{
		iLocal_37[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_46)
	{
		iLocal_46[iVar0] = 0;
		iVar0++;
	}
	iLocal_231 = 145;
	func_742(0, joaat("v_ilev_cd_door2"));
	iVar0 = 0;
	while (iVar0 < iLocal_38)
	{
		iLocal_38[iVar0] = 0;
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_214))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_214, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_215))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_215, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_218))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_218, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_219))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_219, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_216))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_216, false);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(5299f, -5189f, 82.6f, 50f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(3530.8f, -4717.9f, 113.1f, 50f);
	STREAMING::REMOVE_PTFX_ASSET();
	if (!PED::IS_PED_INJURED(iLocal_162))
	{
		if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_162) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_162)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_162))
		{
			PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_162, false);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_163))
	{
		if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_163) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_163)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_163))
		{
			PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_163, false);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_164))
	{
		if ((ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_164) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_164)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_164))
		{
			PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_164, false);
		}
	}
	__LIB_0__::func_202(&uLocal_318, 1);
	__LIB_0__::func_202(&uLocal_318, 2);
	__LIB_0__::func_202(&uLocal_318, 3);
	__LIB_0__::func_202(&uLocal_318, 4);
	__LIB_0__::func_202(&uLocal_318, 5);
	__LIB_0__::func_202(&uLocal_318, 6);
	if (__LIB_1__::func_414())
	{
		__LIB_8__::func_770(0);
	}
	if (iLocal_519)
	{
		func_432();
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_518);
		iLocal_519 = 0;
		iLocal_520 = 0;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_INSIDE_OFFICE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_INSIDE_OFFICE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_VAULT_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_VAULT_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_THREATEN_HOSTAGES"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_THREATEN_HOSTAGES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DETONATE_CHARGES"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DETONATE_CHARGES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GET_TO_VAULT"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GET_TO_VAULT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_SWITCH_TO_TREVOR"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_SWITCH_TO_TREVOR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_TAKE_COVER"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_TAKE_COVER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_POLICE_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_POLICE_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_TO_PICKUP"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_TO_PICKUP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_DRIVE_ESCAPE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_DRIVE_ESCAPE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PROLOGUE_GRAB_WOMAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("PROLOGUE_GRAB_WOMAN");
	}
	if (iLocal_61 == 0)
	{
		func_796(34);
	}
	if (AUDIO::CANCEL_MUSIC_EVENT("PROLOGUE_TEST_MISSION_START"))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_516))
	{
		if (AUDIO::CANCEL_MUSIC_EVENT(sLocal_516))
		{
		}
		sLocal_516 = __LIB_0__::func_459();
	}
	iLocal_253 = 0;
	iLocal_254 = 0;
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	AUDIO::STOP_STREAM();
	if (AUDIO::IS_ALARM_PLAYING("PROLOGUE_VAULT_ALARMS"))
	{
		AUDIO::STOP_ALARM("PROLOGUE_VAULT_ALARMS", true);
	}
	if (iLocal_234 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_234);
		AUDIO::RELEASE_SOUND_ID(iLocal_234);
		iLocal_234 = -1;
	}
	if (iLocal_235 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_235);
		AUDIO::RELEASE_SOUND_ID(iLocal_235);
		iLocal_235 = -1;
	}
	if (iLocal_236 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_236);
		AUDIO::RELEASE_SOUND_ID(iLocal_236);
		iLocal_236 = -1;
	}
	if (iLocal_237 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_237);
		AUDIO::RELEASE_SOUND_ID(iLocal_237);
		iLocal_237 = -1;
	}
	if (iLocal_238 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_238);
		AUDIO::RELEASE_SOUND_ID(iLocal_238);
		iLocal_238 = -1;
	}
	if (iLocal_242 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_242);
		AUDIO::RELEASE_SOUND_ID(iLocal_242);
		iLocal_242 = -1;
	}
	if (iLocal_239 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_239);
		AUDIO::RELEASE_SOUND_ID(iLocal_239);
		iLocal_239 = -1;
	}
	if (iLocal_240 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_240);
		AUDIO::RELEASE_SOUND_ID(iLocal_240);
		iLocal_240 = -1;
	}
	if (iLocal_241 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_241);
		AUDIO::RELEASE_SOUND_ID(iLocal_241);
		iLocal_241 = -1;
	}
	if (iLocal_243 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_243);
		AUDIO::RELEASE_SOUND_ID(iLocal_243);
		iLocal_243 = -1;
	}
	if (iLocal_244 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_244);
		AUDIO::RELEASE_SOUND_ID(iLocal_244);
		iLocal_244 = -1;
	}
	if (func_745(297))
	{
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_PROLOGUE_VAULT");
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_742(1, joaat("v_ilev_cd_door"));
	func_742(2, joaat("v_ilev_cd_door"));
	func_742(0, joaat("v_ilev_cd_door2"));
	Local_78 = { 5308.8574f, -5208.156f, ((86.9186f - 3.2f) - 0.05f) };
	Local_79 = { Local_67 };
	ENTITY::REMOVE_MODEL_HIDE(5316.64f, -5205.74f, 83.67f, 1f, joaat("v_ilev_cd_door2"), false);
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("policeold1"));
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("policeold2"));
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_126))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_126);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_127))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_127);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_195);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S1a");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Pro_S2");
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_228);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_229);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_230);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(3477.8196f, -4862.903f, 109.78864f, 3504.164f, -4869.103f, 120.770584f, 16f, 1);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_86))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_86);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_87))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_87);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_88))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_88);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_89))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_89);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_90))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_90);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_91))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_91);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_92))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_92);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_93))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_93);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	VEHICLE::SET_RANDOM_TRAINS(true);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_160, true);
		__LIB_42__::func_715();
	}
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	Global_20209 = 0;
	__LIB_9__::func_485(23, 0);
	bVar1 = false;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		bVar1 = true;
	}
	ENTITY::REMOVE_MODEL_SWAP(5302.142f, -5191.521f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), bVar1);
	ENTITY::REMOVE_MODEL_SWAP(5308.04f, -5191.028f, 82.992f, 1f, joaat("prop_cash_trolly"), joaat("prop_gold_trolly"), bVar1);
	iLocal_61 = 0;
	if (iParam0 == 0 || iParam1)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_510))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_510, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_511))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_511, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_512))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_512, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_513))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_513, 0);
		}
		INTERIOR::UNPIN_INTERIOR(iLocal_196);
		if (iParam1 == 0)
		{
			STREAMING::REMOVE_IPL("prologue01");
			STREAMING::REMOVE_IPL("prologue02");
			STREAMING::REMOVE_IPL("prologue03");
			STREAMING::REMOVE_IPL("prologue04");
			STREAMING::REMOVE_IPL("prologue05");
			STREAMING::REMOVE_IPL("prologue06");
			STREAMING::REMOVE_IPL("prologuerd");
			STREAMING::REMOVE_IPL("Prologue01c");
			STREAMING::REMOVE_IPL("Prologue01d");
			STREAMING::REMOVE_IPL("Prologue01e");
			STREAMING::REMOVE_IPL("Prologue01f");
			STREAMING::REMOVE_IPL("Prologue01g");
			STREAMING::REMOVE_IPL("prologue01h");
			STREAMING::REMOVE_IPL("prologue01i");
			STREAMING::REMOVE_IPL("prologue01j");
			STREAMING::REMOVE_IPL("prologue01k");
			STREAMING::REMOVE_IPL("prologue01z");
			STREAMING::REMOVE_IPL("prologue03b");
			STREAMING::REMOVE_IPL("prologue04b");
			STREAMING::REMOVE_IPL("prologue05b");
			STREAMING::REMOVE_IPL("prologue06b");
			STREAMING::REMOVE_IPL("prologuerdb");
			STREAMING::REMOVE_IPL("prologue_occl");
			STREAMING::REMOVE_IPL("prologue06_int");
			STREAMING::REMOVE_IPL("prologue04_cover");
			STREAMING::REMOVE_IPL("prologue03_grv_dug");
			STREAMING::REMOVE_IPL("prologue03_grv_cov");
			STREAMING::REMOVE_IPL("prologue03_grv_fun");
			STREAMING::REMOVE_IPL("prologue_grv_torch");
			__LIB_30__::func_47("prologue_DistantLights");
			__LIB_30__::func_47("prologue_LODLights");
			STREAMING::REMOVE_IPL("DES_ProTree_start");
			STREAMING::REMOVE_IPL("DES_ProTree_start_lod");
			STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", false);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			MISC::UNLOAD_ALL_CLOUD_HATS();
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			__LIB_11__::func_501(0);
		}
		PATHFIND::SET_ALLOW_STREAM_PROLOGUE_NODES(false);
		CAM::SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(true);
		HUD::ALLOW_SONAR_BLIPS(true);
		VEHICLE::SET_AMBIENT_VEHICLE_NEON_ENABLED(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_788()//Position - 0x9A842
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_259;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_259[iVar1] = 0;
		iVar1++;
	}
}

void func_789()//Position - 0x9A86D
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		iLocal_258[iVar0] = 0;
		iVar0++;
	}
}

void func_790()//Position - 0x9A894
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iLocal_257[iVar0] = 0;
		iVar0++;
	}
}

void func_791()//Position - 0x9A8BA
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 314)
	{
		iLocal_256[iVar0] = 0;
		iVar0++;
	}
}

void func_793()//Position - 0x9A985
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
				if (!func_730(iVar0))
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

void func_796(int iParam0)//Position - 0x9AA58
{
	iLocal_254 = iParam0;
	func_716();
}

void func_799()//Position - 0x9AAC2
{
	iLocal_160 = PLAYER::PLAYER_PED_ID();
	iLocal_161 = func_801();
	iLocal_162 = func_800(0);
	iLocal_163 = func_800(2);
}

int func_800(int iParam0)//Position - 0x9AAE8
{
	if (__LIB_20__::func_728() == iParam0)
	{
		return iLocal_160;
	}
	return uLocal_260[__LIB_0__::func_504(iParam0)];
}

var func_801()//Position - 0x9AB0D
{
	if (__LIB_20__::func_728() == 0)
	{
		return uLocal_260[__LIB_0__::func_504(2)];
	}
	return uLocal_260[__LIB_0__::func_504(0)];
}

