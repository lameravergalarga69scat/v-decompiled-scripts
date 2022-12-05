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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 17;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
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
	var uLocal_88 = 17;
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
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = -1;
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
	int iLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_165 = 0f;
	struct<3> Local_166 = { 0, 0, 0 } ;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	struct<9> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_170 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_173 = { 0, 0, 0 } ;
	float fLocal_174 = 0f;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	float fLocal_205 = 0f;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	float fLocal_217 = 0f;
	float fLocal_218 = 0f;
	float fLocal_219 = 0f;
	float fLocal_220 = 0f;
	float fLocal_221 = 0f;
	var uLocal_222[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_223 = 0;
	struct<68> Local_224 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	char* sLocal_237 = NULL;
	char* sLocal_238[3] = { NULL, NULL, NULL };
	char* sLocal_239 = NULL;
	char* sLocal_240[3] = { NULL, NULL, NULL };
	int iLocal_241 = 0;
	struct<437> Local_242 = { 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = -1;
	var uLocal_247 = 0;
	var uLocal_248 = 3;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = -1;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = -1;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 16;
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
	var uLocal_285 = 12;
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
	var uLocal_983 = 1065353216;
	var uLocal_984 = 0;
	var uLocal_985 = 16;
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
	var uLocal_1025 = 3;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
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
	struct<2> Local_1058 = { 0, -1 } ;
	var uLocal_1059 = -1;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = -1;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = -1;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = -1;
	var uLocal_1077 = -1;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<26> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	struct<25> Var6;
	struct<682> Var7;
	int* iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<13> Var17[2];
	var uVar18;
	int* iVar19;
	int* iVar20;
	int* iVar21;
	int* iVar22;
	int* iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29[2];
	int iVar30;
	struct<3> Var31;
	struct<3> Var32;
	struct<3> Var33;
	struct<3> Var34;
	struct<3> Var35;
	struct<3> Var36;
	struct<3> Var37;
	int iVar38;
	int iVar39;
	int iVar40;
	var uVar41;
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
	var uVar52[2];
	int iVar53;
	int iVar54;
	int iVar55[2];
	int iVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	struct<2> Var72[2];
	struct<8> Var73;
	struct<6> Var74;
	char* sVar75[2];
	char* sVar76[3];
	char* sVar77[3];
	char* sVar78[3];
	struct<78> Var79;
	struct<123> Var80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	float fVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	float fVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	float fVar103;
	int iVar104;
	int iVar105;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_156 = -1;
	iLocal_159 = joaat("prop_dart_1");
	iLocal_160 = joaat("prop_dart_2");
	iLocal_163 = joaat("prop_dart_bd_cab_01");
	fLocal_165 = 0.063f;
	Local_166 = { -0.0035f, 0f, -0.001f };
	iLocal_168 = joaat("prop_target_bull");
	Local_173 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_178 = 0.1f;
	iLocal_211 = 65;
	iLocal_213 = 660;
	fLocal_218 = 0.27f;
	fLocal_219 = 0.1f;
	fLocal_220 = -120f;
	fLocal_221 = 127f;
	Var0 = 3;
	Var0.f_84 = 2;
	Var0.f_87 = 2;
	Var0.f_96 = 16;
	Var6.f_1 = 2;
	Var6.f_1.f_1 = 7;
	Var6.f_1.f_1.f_8 = 7;
	Var7.f_3 = 8;
	Var7.f_12 = 8;
	Var7.f_21 = 4;
	Var7.f_26.f_3 = 8;
	Var7.f_26.f_12 = 8;
	Var7.f_26.f_21 = 4;
	Var7.f_72 = 3;
	Var7.f_72.f_44.f_3.f_1 = 4;
	Var7.f_72.f_113 = 2;
	Var7.f_72.f_113.f_1.f_1 = 4;
	Var7.f_72.f_113.f_1.f_66.f_1 = 4;
	Var7.f_72.f_246.f_6 = 12;
	Var7.f_72.f_246.f_187 = 3;
	Var7.f_509.f_2 = 8;
	Var7.f_509.f_2.f_1.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var7.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var7.f_681 = 2;
	iVar13 = 2;
	iVar14 = 4;
	iVar24 = 0;
	Var35 = { 1993.2574f, 3044.215f, 46.2151f };
	fVar59 = 42.3856f;
	sVar76[0] = "darts_outro_01_guy1";
	sVar76[1] = "darts_outro_02_guy2";
	sVar76[2] = "darts_outro_03_guy2";
	sVar77[0] = "darts_outro_01_guy2";
	sVar77[1] = "darts_outro_02_guy1";
	sVar77[2] = "darts_outro_03_guy1";
	sVar78[0] = "darts_outro_01_cam";
	sVar78[1] = "darts_outro_02_cam";
	sVar78[2] = "darts_outro_03_cam";
	sLocal_237 = "facials@gen_male@variations@happy";
	sLocal_239 = "facials@gen_male@variations@angry";
	sLocal_238[0] = "mood_happy_1";
	sLocal_238[1] = "mood_happy_2";
	sLocal_238[2] = "mood_happy_3";
	sLocal_240[0] = "mood_angry_1";
	sLocal_240[1] = "mood_angry_2";
	sLocal_240[2] = "mood_angry_3";
	Var34 = { 1992.2932f, 3050.5828f, 47.98973f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar10 = 1;
		Var1 = { Var34 };
		Var1.f_3 = 57.783146f;
	}
	__LIB_7__.func_79();
	Global_2703735.f_3580.f_37 = 0;
	bVar66 = false;
	Var79.f_1 = 4;
	Var79.f_19 = 4;
	Var79.f_24 = 4;
	Var79.f_29 = 4;
	Var79.f_34 = 4;
	Var79.f_51 = 4;
	Var79.f_63.f_4 = 1;
	Var80 = 4;
	Var80.f_1.f_4 = 3;
	Var80.f_1.f_123.f_4 = 3;
	Var80.f_1.f_123.f_123.f_4 = 3;
	Var80.f_1.f_123.f_123.f_123.f_4 = 3;
	if (!func_1352(&ScriptParam_1058, &Var79, &Var80))
	{
		func_1097(&Var0, &Var7, 0, 0, 0);
	}
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 49156, 0);
	}
	fLocal_176 = 0.06f;
	fLocal_177 = 0.08f;
	fLocal_174 = fLocal_176;
	fLocal_175 = fLocal_177;
	Var80[iLocal_233 /*123*/].f_121 = iLocal_233;
	func_1085(&(Var80[iLocal_233 /*123*/]), 20);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Var80[iLocal_233 /*123*/].f_122 = 1;
	}
	else
	{
		Var80[iLocal_233 /*123*/].f_122 = 0;
	}
	__LIB_1__.func_640(0f);
	__LIB_1__.func_896();
	while (!bVar60)
	{
		SYSTEM::WAIT(0);
		func_1080(&Local_242);
		iLocal_241 = func_1079(&Var80, 0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_1097(&Var0, &Var7, 0, 0, 0);
		}
		else if (__LIB_0__.func_80() || __LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_241 >= 2)
			{
				if (func_1077(&Var80, &uVar52))
				{
					bVar60 = true;
				}
			}
			else if (iLocal_241 >= 1)
			{
				if (!__LIB_0__.func_736(&iVar19))
				{
					__LIB_18__.func_276(&iVar19);
				}
				else if (__LIB_7__.func_78(&iVar19) > 4f)
				{
					func_1077(&Var80, &uVar52);
					bVar60 = true;
				}
			}
			else if (!__LIB_0__.func_736(&iVar19))
			{
				__LIB_18__.func_276(&iVar19);
			}
			else if (__LIB_7__.func_78(&iVar19) > 10f)
			{
				func_1097(&Var0, &Var7, 0, 0, 0);
			}
		}
		else if (iLocal_241 >= 2)
		{
			if (func_1073(&Var80, &iLocal_234) == 2)
			{
				bVar60 = true;
				if (__LIB_0__.func_736(&iVar19))
				{
					__LIB_0__.func_735(&iVar19);
				}
				__LIB_1__.func_639();
			}
		}
		else if (Global_2703735.f_3580.f_37 == 1)
		{
			HUD::CLEAR_HELP(true);
			__LIB_18__.func_301(PLAYER::PLAYER_ID(), 0, 0);
			func_1097(&Var0, &Var7, 0, 0, 0);
		}
		else if (BitTest(Global_2703735.f_3580.f_35, 5))
		{
			__LIB_0__.func_210("DARTS_ENEMIES" /* GXT: Enemies in gang house, game ending. */, 7500, 0);
			__LIB_18__.func_301(PLAYER::PLAYER_ID(), 0, 0);
			func_1097(&Var0, &Var7, 1, 0, 0);
		}
		else
		{
			if (__LIB_0__.func_3() == 0)
			{
				if (!__LIB_0__.func_736(&iVar19))
				{
					__LIB_18__.func_276(&iVar19);
				}
				else if (__LIB_7__.func_78(&iVar19) > 4f)
				{
					bVar60 = true;
					func_1085(&(Var80[iLocal_233 /*123*/]), 16);
					iLocal_235 = 1;
					Var80[iLocal_233 /*123*/].f_122 = 1;
					if (__LIB_0__.func_736(&iVar19))
					{
						__LIB_0__.func_735(&iVar19);
					}
					__LIB_1__.func_639();
				}
			}
			iLocal_1035 = CAM::GET_RENDERING_CAM();
			if (CAM::DOES_CAM_EXIST(iLocal_1035))
			{
				Var32 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					Var31 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
			}
			else
			{
				Var32 = { Var31 };
			}
			if (Var32.f_2 > (Var31.f_2 + 50f))
			{
				__LIB_18__.func_301(PLAYER::PLAYER_ID(), 0, 0);
				func_1097(&Var0, &Var7, 0, 0, 0);
			}
			else if (!bVar62)
			{
				bVar62 = true;
			}
		}
	}
	if (__LIB_0__.func_3() != 0)
	{
		SYSTEM::WAIT(500);
	}
	if (((func_1067(&(Var80[iLocal_234 /*123*/]), 5) && __LIB_0__.func_3() != 0) && !__LIB_0__.func_80()) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		while (true)
		{
			if (!bVar63)
			{
				__LIB_18__.func_276(&iVar19);
				bVar63 = true;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || __LIB_7__.func_78(&iVar19) >= 8f)
			{
				HUD::CLEAR_HELP(true);
				func_1097(&Var0, &Var7, 0, 0, 0);
			}
			SYSTEM::WAIT(0);
		}
	}
	HUD::DISPLAY_AREA_NAME(false);
	if ((!func_1067(&(Var80[iLocal_233 /*123*/]), 16) && !__LIB_0__.func_80()) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		Var80[iLocal_233 /*123*/].f_3 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
	}
	iVar42 = __LIB_1__.func_556(65, -1, 0);
	fVar57 = (SYSTEM::TO_FLOAT(iVar42) / 100f);
	fVar58 = (fVar57 * 540f);
	iLocal_213 = SYSTEM::ROUND(fVar58) + 660;
	if (iLocal_213 < 660)
	{
		iLocal_213 = 660;
	}
	if (Global_2725346)
	{
		Global_2725346 = 0;
	}
	__LIB_31__.func_892(0);
	if (!__LIB_0__.func_80())
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	__LIB_1__.func_21(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		iLocal_241 = func_1079(&Var80, 0);
		if (__LIB_6__.func_949())
		{
			func_1097(&Var0, &Var7, 1, 0, 0);
		}
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		iVar50 = 0;
		iVar48 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		iVar82 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (iVar82 != iLocal_233)
		{
			iLocal_233 = iVar82;
		}
		if (iVar49 != iVar48)
		{
			bVar69 = true;
			iVar49 = iVar48;
		}
		iVar81 = 0;
		while (iVar81 < iVar48)
		{
			iVar83 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar81);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar83))
			{
				if (__LIB_6__.func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar83), 0) || __LIB_0__.func_911(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar83)))
				{
					if (__LIB_6__.func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar83), 0))
					{
						if (bVar69)
						{
						}
					}
					if (__LIB_0__.func_911(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar83)))
					{
						if (bVar69)
						{
						}
					}
				}
				else if (bVar69)
				{
					iVar50++;
					if (iVar50 != iVar51)
					{
					}
				}
			}
			else if (bVar69)
			{
			}
			iVar81++;
		}
		iVar51 = iVar50;
		bVar69 = false;
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		__LIB_0__.func_186();
		__LIB_0__.func_733(1);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
		func_1051(Var80[iLocal_233 /*123*/]);
		if (__LIB_0__.func_80() || __LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			if (((__LIB_6__.func_949() || Var80[uVar52[1] /*123*/] > 19) || Var80[uVar52[0] /*123*/] > 20) || iLocal_241 < 1)
			{
				func_1097(&Var0, &Var7, 1, 0, 0);
			}
			if (Var80[uVar52[1] /*123*/] > 6 && iVar14 > 6)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var6.f_0, Var6.f_18, Var6.f_21, Var6.f_24, Var6.f_24, 2);
			}
			if (iVar14 >= 12 && iVar14 < 18)
			{
				if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (!__LIB_0__.func_492(&(Var7.f_666), 15))
						{
							__LIB_0__.func_924(&(Var7.f_509), 0, 0, 0, 1);
							__LIB_0__.func_713(&(Var7.f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
							__LIB_1__.func_881(&(Var7.f_666), 15, 1);
						}
						if (!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
						{
							__LIB_7__.func_44(&(Var7.f_509), 200f, 1, 0, 0, 1065353216);
						}
						if (func_1041(&(Var80[iLocal_233 /*123*/]), &Var7, &uVar41))
						{
							iVar14 = 23;
						}
					}
				}
				else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (func_1039(&(Var80[iLocal_233 /*123*/]), &Var7, &uVar41))
					{
						iVar14 = 23;
					}
				}
			}
			switch (iVar14)
			{
				case 4:
					__LIB_1__.func_895(&(Var0.f_79), &Var1);
					__LIB_18__.func_295(Var0.f_79.f_1, Var0.f_79.f_4);
					iVar84 = 0;
					while (iVar84 < 3)
					{
						__LIB_1__.func_878(&(Var0[iVar84 /*26*/]), 0);
						iVar84++;
					}
					__LIB_1__.func_886(&Var6, iVar10, Var0.f_79.f_1, Var0.f_79.f_4);
					func_1031(&Var6);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					__LIB_1__.func_167();
					HUD::DISPLAY_RADAR(false);
					__LIB_8__.func_770(1);
					__LIB_18__.func_304(&(Var0.f_79), &Var3, &Var2, 1);
					Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, -0.4f, (-2.4f + fLocal_165), (-0.7744f - 1f)) };
					Var3.f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, 0.5f, (-2.4f + fLocal_165), -0.7744f) };
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var35, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar59);
						if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						if (__LIB_1__.func_876() != joaat("WEAPON_UNARMED"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						}
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							}
						}
					}
					iVar14 = 5;
					break;
				case 5:
					if (func_1021(&Var6))
					{
						iVar14 = 6;
					}
					break;
				case 6:
					__LIB_18__.func_294(&Var7);
					__LIB_24__.func_985(&(Var7.f_26));
					if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
					{
						sVar75[0] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0])));
						Var17[0 /*13*/] = { __LIB_0__.func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0]))) };
						Var72[0 /*2*/] = { __LIB_1__.func_885(&(Var17[0 /*13*/])) };
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0])))))
						{
							iVar29[0] = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0]))), false, false, true);
						}
						if (!__LIB_1__.func_884(&(Var72[0 /*2*/])))
						{
							func_1014(&Var6, 0, &(Var72[0 /*2*/]), 0);
						}
						__LIB_1__.func_883(&Var6, 0);
						if (__LIB_7__.func_43(iVar29[0]))
						{
							func_1011(&(iVar29[0]));
						}
					}
					sVar75[1] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[1])));
					Var17[1 /*13*/] = { __LIB_0__.func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[1]))) };
					Var72[1 /*2*/] = { __LIB_1__.func_885(&(Var17[1 /*13*/])) };
					iVar28 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[1])));
					if (!PED::IS_PED_INJURED(iVar28))
					{
						iVar29[1] = PED::CLONE_PED(iVar28, false, false, true);
					}
					if (__LIB_7__.func_43(iVar29[1]))
					{
						func_1011(&(iVar29[1]));
					}
					if (!__LIB_1__.func_884(&(Var72[1 /*2*/])))
					{
						func_1014(&Var6, 1, &(Var72[1 /*2*/]), 0);
					}
					__LIB_1__.func_883(&Var6, 1);
					if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
					{
						__LIB_1__.func_882(&Var6, sVar75[0], sVar75[1]);
					}
					else
					{
						__LIB_1__.func_882(&Var6, "", sVar75[1]);
					}
					if (Global_4718592.f_116945 > 0 || Global_4718592.f_116946 > 0)
					{
						func_1009(&Var6, 0, 0, 0, 0);
					}
					MISC::CLEAR_AREA(Var1, 0.5f, true, false, false, false);
					__LIB_1__.func_868();
					iVar14 = 8;
					break;
				case 8:
					if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16) && Var79.f_0 < 6)
					{
						iVar14 = 11;
					}
					else
					{
						func_1006(14, Var79.f_50, Var79.f_49, 0, 0);
						iVar14 = 13;
					}
					break;
				case 11:
					if (!__LIB_0__.func_736(&iVar19))
					{
						__LIB_18__.func_276(&iVar19);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					else if ((__LIB_7__.func_42(&iVar19) >= 5f || Var80[uVar52[1] /*123*/] == 12) || Var80[uVar52[0] /*123*/] == 12)
					{
						__LIB_1__.func_3();
						__LIB_0__.func_735(&iVar19);
						__LIB_1__.func_887(&Var6, 1);
						__LIB_7__.func_65(&iVar8);
						func_1006(14, Var79.f_50, Var79.f_49, 0, 0);
						iVar14 = 12;
						iVar16 = 1;
						iVar15 = 0;
						iVar54 = 1;
					}
					break;
				case 12:
					if (func_1000(&Var79, 22))
					{
						if (Var79.f_1[uVar52[1]] == 3 || Var79.f_1[uVar52[0]] == 3)
						{
							iVar16 = 3;
						}
						switch (iVar16)
						{
							case 1:
								switch (iVar15)
								{
									case 0:
										if (Var80[uVar52[iVar54] /*123*/].f_112)
										{
											__LIB_1__.func_881(&(Var7.f_666), 11, 0);
											iVar53 = Var79.f_41;
											func_999(&(Var0[iVar53 /*26*/]), &(Var80[uVar52[iVar54] /*123*/]), 0);
											iVar15 = 1;
										}
										else if ((MISC::GET_GAME_TIMER() % 1500) < 50)
										{
										}
										break;
									case 1:
										if (__LIB_24__.func_981(&(Var0[iVar53 /*26*/]), &(Var0.f_79), 0, 0))
										{
											bVar68 = false;
											iVar15 = 2;
											iVar16 = 2;
										}
										break;
									case 2:
										if ((MISC::GET_GAME_TIMER() % 2000) < 50)
										{
										}
										break;
								}
								break;
							case 2:
								if (!__LIB_0__.func_492(&(Var7.f_666), 11))
								{
									__LIB_1__.func_881(&(Var7.f_666), 11, 1);
								}
								if (!bVar68)
								{
									if (Var80[uVar52[1] /*123*/].f_116 || Var80[uVar52[0] /*123*/].f_116)
									{
										iVar15 = 0;
										__LIB_6__.func_892(&iVar22);
										bVar68 = true;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
								{
								}
								if (((bVar68 && (Var79.f_1[uVar52[1]] == 0 || Var79.f_1[uVar52[0]] == 0)) && (Var80[uVar52[1] /*123*/].f_1 == 0 || Var80[uVar52[0] /*123*/].f_1 == 0)) && __LIB_7__.func_42(&iVar22) > 1f)
								{
									iVar54 = Var80[uVar52[0] /*123*/].f_122;
									if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
									{
										__LIB_1__.func_887(&Var6, Var80[Var79.f_46 /*123*/].f_122);
									}
									__LIB_0__.func_735(&iVar22);
									iVar16 = 1;
								}
								break;
							case 3:
								iVar85 = 0;
								while (iVar85 < 3)
								{
									__LIB_1__.func_852(&(Var0[iVar85 /*26*/]));
									Var0[iVar85 /*26*/].f_25 = 0;
									iVar85++;
								}
								__LIB_0__.func_735(&iVar19);
								iVar14 = 13;
								break;
							}
					}
					break;
				case 13:
					iVar38 = 0;
					iVar39 = 0;
					iVar38 = 0;
					while (iVar38 < 2)
					{
						Var0.f_84[iVar38] = 0;
						Var0.f_87[iVar38] = 0;
						__LIB_1__.func_883(&Var6, iVar38);
						iVar55[iVar38] = 301;
						iVar38++;
					}
					__LIB_1__.func_888(&Var6, 1, 301);
					if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
					{
						__LIB_1__.func_888(&Var6, 0, 301);
					}
					iVar39 = 0;
					while (iVar39 < 3)
					{
						__LIB_1__.func_852(&(Var0[iVar39 /*26*/]));
						Var0[iVar39 /*26*/].f_25 = 0;
						iVar39++;
					}
					__LIB_7__.func_65(&iVar8);
					iVar15 = 0;
					Var0.f_92 = 0;
					Var0.f_93 = 0;
					bVar64 = false;
					MISC::CLEAR_AREA(Var1, 0.5f, true, false, false, false);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(Var1, 0.5f);
					iVar14 = 14;
					break;
				case 14:
					if (Var79.f_0 == 16)
					{
						__LIB_1__.func_868();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						iVar14 = 16;
						iVar16 = 1;
						iVar15 = 0;
						if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
						{
							iVar54 = __LIB_0__.func_138(Var79.f_44 == 0, 0, 1);
						}
						else
						{
							iVar54 = 1;
						}
						if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
						{
							__LIB_1__.func_887(&Var6, __LIB_0__.func_138(Var79.f_44 == 0, 0, 1));
						}
						else
						{
							__LIB_1__.func_887(&Var6, 1);
						}
						bVar65 = false;
					}
					break;
				case 15:
					if (func_1000(&Var79, 20))
					{
						Var80[uVar52[1] /*123*/] = 16;
					}
					break;
				case 16:
					if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0) && __LIB_10__.func_567(Var35, 1) > 2f)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var35, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar59);
						if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
					else if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
					}
					if (Var79.f_1[uVar52[1]] == 3 || Var79.f_1[uVar52[0]] == 3)
					{
						iVar16 = 3;
					}
					switch (iVar16)
					{
						case 1:
							switch (iVar15)
							{
								case 0:
									if (Var80[uVar52[iVar54] /*123*/].f_112)
									{
										__LIB_1__.func_881(&(Var7.f_666), 11, 0);
										iVar53 = Var79.f_41;
										func_999(&(Var0[iVar53 /*26*/]), &(Var80[uVar52[iVar54] /*123*/]), 0);
										iVar15 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
									{
									}
									break;
								case 1:
									if (__LIB_24__.func_981(&(Var0[iVar53 /*26*/]), &(Var0.f_79), 0, 0))
									{
										bVar68 = false;
										iVar15 = 2;
										iVar16 = 2;
									}
									break;
								case 2:
									if ((MISC::GET_GAME_TIMER() % 2000) < 50)
									{
									}
									break;
							}
							break;
						case 2:
							if (!__LIB_0__.func_492(&(Var7.f_666), 11))
							{
								__LIB_1__.func_881(&(Var7.f_666), 11, 1);
							}
							if (!bVar68)
							{
								if (Var80[uVar52[1] /*123*/].f_116 || Var80[uVar52[0] /*123*/].f_116)
								{
									iVar15 = 0;
									__LIB_6__.func_892(&iVar22);
									bVar68 = true;
								}
							}
							else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
							{
							}
							if (((bVar68 && (Var79.f_1[uVar52[1]] == 0 || (Var79.f_1[uVar52[0]] == 0 && !func_1067(&(Var80[uVar52[1] /*123*/]), 16)))) && (Var80[uVar52[1] /*123*/].f_1 == 0 || (Var80[uVar52[0] /*123*/].f_1 == 0 && !func_1067(&(Var80[uVar52[1] /*123*/]), 16)))) && __LIB_7__.func_42(&iVar22) > 1f)
							{
								if (__LIB_0__.func_492(&(Var79.f_48), 1))
								{
									iVar86 = 0;
									while (iVar86 < 3)
									{
										__LIB_1__.func_852(&(Var0[iVar86 /*26*/]));
										Var0[iVar86 /*26*/].f_25 = 0;
										iVar86++;
									}
									if (iVar55[Var80[Var79.f_45 /*123*/].f_122] != Var79.f_19[Var79.f_45])
									{
										__LIB_1__.func_888(&Var6, Var80[Var79.f_45 /*123*/].f_122, Var79.f_19[Var79.f_45]);
									}
									if (Var79.f_1[uVar52[1]] == 0)
									{
										iVar54 = Var80[uVar52[1] /*123*/].f_122;
									}
									else
									{
										iVar54 = Var80[uVar52[0] /*123*/].f_122;
									}
									if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
									{
										__LIB_1__.func_887(&Var6, Var80[Var79.f_46 /*123*/].f_122);
									}
								}
								__LIB_0__.func_735(&iVar22);
								iVar16 = 1;
							}
							break;
						case 3:
							HUD::CLEAR_PRINTS();
							if (func_1000(&Var79, 23))
							{
								iVar40 = 0;
								__LIB_6__.func_892(&iVar19);
								iVar14 = 17;
							}
							else
							{
								__LIB_6__.func_892(&iVar19);
								iVar14 = 18;
							}
							break;
					}
					break;
				case 17:
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[1])), false);
					if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
					{
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0])), false);
					}
					switch (iVar40)
					{
						case 0:
							if (__LIB_7__.func_42(&iVar19) > 1.5f)
							{
								HUD::CLEAR_HELP(true);
								func_989();
								__LIB_24__.func_969(&uLocal_1048, "DARTS_WINP", "", 2500, 5, 1);
								if (func_1067(&(Var80[uVar52[1] /*123*/]), 16))
								{
									func_1009(&Var6, 0, Var79.f_34[uVar52[1]], 0, Var79.f_29[uVar52[1]]);
								}
								else
								{
									func_1009(&Var6, Var79.f_34[uVar52[0]], Var79.f_34[uVar52[1]], Var79.f_29[uVar52[0]], Var79.f_29[uVar52[1]]);
								}
								fVar88 = GRAPHICS::GET_ASPECT_RATIO(true);
								if (fVar88 > 2f)
								{
									Var36 = { 1992.2941f, 3047.577f, 46.21517f };
									Var37 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var36 = { 1992.3357f, 3047.9243f, 46.21517f };
									Var37 = { 0f, 0f, 136.74f };
								}
								iVar87 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
								iVar56 = PED::CREATE_SYNCHRONIZED_SCENE(Var36, Var37, 2);
								iLocal_1037 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1037, iVar56, sVar78[iVar87], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(iLocal_1037, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
								{
									if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
									{
										if (Var79.f_43 == uVar52[1])
										{
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsoutro", sVar76[iVar87], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[0], iVar56, "mini@dartsoutro", sVar77[iVar87], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_PLAY_ANIM(iVar29[1], sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
										}
										else
										{
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[0], iVar56, "mini@dartsoutro", sVar76[iVar87], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsoutro", sVar77[iVar87], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_PLAY_ANIM(iVar29[0], sLocal_239, sLocal_240[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
										}
									}
								}
								else if (!PED::IS_PED_INJURED(iVar29[1]))
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsoutro", sVar76[iVar87], 1000f, -1.5f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(iVar29[1], sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
								}
								iVar40++;
							}
							break;
						case 1:
							if (!__LIB_24__.func_984(&uLocal_1048, 1))
							{
								__LIB_7__.func_41(&uLocal_1048);
								iVar38 = 0;
								while (iVar38 < 2)
								{
									__LIB_1__.func_883(&Var6, iVar38);
									iVar38++;
								}
								iVar39 = 0;
								while (iVar39 < 3)
								{
									__LIB_1__.func_852(&(Var0[iVar39 /*26*/]));
									iVar39++;
								}
								iVar40++;
							}
							break;
						case 2:
							__LIB_1__.func_868();
							if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
							{
								if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
								{
									CAM::DESTROY_CAM(iLocal_1037, false);
									TASK::CLEAR_PED_TASKS(iVar29[0]);
									TASK::CLEAR_PED_TASKS(iVar29[1]);
								}
							}
							else if (!PED::IS_PED_INJURED(iVar29[1]))
							{
								CAM::DESTROY_CAM(iLocal_1037, false);
								TASK::CLEAR_PED_TASKS(iVar29[1]);
							}
							iVar40 = 0;
							iVar14 = 19;
							break;
					}
					break;
				case 18:
					if ((MISC::GET_GAME_TIMER() % 2500) < 50)
					{
					}
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[1])))
					{
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[1])), false);
						if ((MISC::GET_GAME_TIMER() % 2500) < 50)
						{
						}
					}
					if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0])))
						{
							NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uVar52[0])), false);
						}
					}
					if (__LIB_7__.func_42(&iVar19) > 0.75f)
					{
						if (Var0.f_92)
						{
							__LIB_24__.func_984(&uLocal_1038, 0);
							if (__LIB_0__.func_80() && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_0__.func_649(&(Var79.f_77)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar56) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar56) >= 0.995f)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar56))
								{
									iVar14 = 23;
								}
							}
							if (Var80[uVar52[1] /*123*/].f_118 || Var80[uVar52[0] /*123*/].f_118)
							{
								if (Var79.f_0 >= 6)
								{
									iVar89 = 0;
									iVar90 = 1;
									__LIB_1__.func_883(&Var6, iVar89);
									__LIB_1__.func_883(&Var6, iVar90);
									if (__LIB_0__.func_80() && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
									{
									}
									else
									{
										iVar14 = 19;
									}
								}
							}
						}
						else if (!Var0.f_95)
						{
							HUD::CLEAR_HELP(true);
							HUD::CLEAR_PRINTS();
							Var7.f_668 = (Var7.f_668 + Var79.f_34[iLocal_233]);
							Var7.f_669 = (Var7.f_669 + Var79.f_34[iLocal_234]);
							StringCopy(&(Var7.f_648), sVar75[Var80[iLocal_233 /*123*/].f_122], 24);
							StringCopy(&(Var7.f_654), sVar75[Var80[iLocal_234 /*123*/].f_122], 24);
							__LIB_24__.func_969(&uLocal_1038, "DARTS_WINP", "DARTS_WINSP", 4000, 0, 2);
							fVar92 = GRAPHICS::GET_ASPECT_RATIO(true);
							if (fVar92 > 2f)
							{
								Var36 = { 1992.2941f, 3047.577f, 46.21517f };
								Var37 = { 0f, 0f, 138.74f };
							}
							else
							{
								Var36 = { 1992.3357f, 3047.9243f, 46.21517f };
								Var37 = { 0f, 0f, 136.74f };
							}
							iVar91 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
							iVar56 = PED::CREATE_SYNCHRONIZED_SCENE(Var36, Var37, 2);
							iLocal_1037 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1037, iVar56, sVar78[iVar91], "mini@dartsoutro");
							CAM::SET_CAM_ACTIVE(iLocal_1037, true);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							if (!func_1067(&(Var80[uVar52[1] /*123*/]), 16))
							{
								if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
								{
									if (Var79.f_43 == uVar52[1])
									{
										TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsoutro", sVar76[iVar91], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iVar29[0], iVar56, "mini@dartsoutro", sVar77[iVar91], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_PLAY_ANIM(iVar29[1], sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
									}
									else
									{
										TASK::TASK_SYNCHRONIZED_SCENE(iVar29[0], iVar56, "mini@dartsoutro", sVar76[iVar91], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsoutro", sVar77[iVar91], 1000f, -1.5f, 0, 0, 1000f, 0);
										TASK::TASK_PLAY_ANIM(iVar29[0], sLocal_239, sLocal_240[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
									}
								}
							}
							else if (!PED::IS_PED_INJURED(iVar29[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsoutro", sVar76[iVar91], 1000f, -1.5f, 0, 0, 1000f, 0);
								TASK::TASK_PLAY_ANIM(iVar29[1], sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
							}
							Var7.f_671 = MISC::GET_GAME_TIMER();
							__LIB_0__.func_151("DARTS_SPECAD", -1);
							Var0.f_95 = 1;
						}
						else if ((MISC::GET_GAME_TIMER() - Var7.f_671) > 400)
						{
							Var0.f_92 = 1;
						}
					}
					break;
				case 19:
					__LIB_1__.func_880("spectate DARTS_MPSTATE_WAIT_POST_GAME", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if (((Var80[uVar52[1] /*123*/].f_118 && Var80[uVar52[0] /*123*/].f_118) || (Var80[uVar52[1] /*123*/].f_118 && func_1067(&(Var80[uVar52[1] /*123*/]), 16))) || Var80[uVar52[1] /*123*/] == 16)
					{
						iVar14 = 13;
					}
					break;
				case 20:
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
						if (__LIB_0__.func_80())
						{
						}
					}
					break;
				case 23:
					if (__LIB_0__.func_649(&uVar18))
					{
						func_981();
						__LIB_1__.func_3();
						if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						func_1097(&Var0, &Var7, 1, 0, 0);
						if (!Global_2715699.f_2846.f_26)
						{
							__LIB_35__.func_531(0, 0, 0);
						}
						else if (__LIB_13__.func_80(1))
						{
							__LIB_0__.func_495(&uVar18, 0, 0);
							__LIB_0__.func_518(0);
							Var80[iLocal_233 /*123*/] = 21;
						}
					}
					else
					{
						__LIB_0__.func_580(&uVar18, 0, 0);
					}
					break;
				case 21:
					func_827(14, Var79.f_50, ScriptParam_1058.f_1, __LIB_0__.func_138(Var0.f_94, 1, 0), __LIB_0__.func_138(Var0.f_94, 1, 2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					__LIB_0__.func_518(0);
					func_1097(&Var0, &Var7, 1, 0, 0);
					break;
			}
		}
		else
		{
			if (__LIB_6__.func_949() || __LIB_24__.func_987(1))
			{
				if (((Var80[iLocal_233 /*123*/] < 18 && Var79.f_1[iLocal_233] < 3) && Var0.f_90 == 0) && Var0.f_91 == 0)
				{
					if (func_823(&Var79, &Var80))
					{
						__LIB_5__.func_113(23, 1, -1);
						iVar47 = __LIB_1__.func_888(PLAYER::PLAYER_ID());
					}
					else
					{
						iVar47 = func_718();
					}
					if (__LIB_0__.func_193(159))
					{
						Global_2725346 = 1;
					}
				}
				func_1097(&Var0, &Var7, 1, 0, 0);
			}
			if (__LIB_24__.func_987(1))
			{
				if (((Var80[iLocal_233 /*123*/] < 18 && Var79.f_1[iLocal_233] < 3) && Var0.f_90 == 0) && Var0.f_91 == 0)
				{
					if (func_823(&Var79, &Var80))
					{
						__LIB_5__.func_113(23, 1, -1);
						iVar47 = __LIB_1__.func_888(PLAYER::PLAYER_ID());
					}
					else
					{
						iVar47 = func_718();
					}
				}
				func_1097(&Var0, &Var7, 1, 0, 0);
			}
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_1097(&Var0, &Var7, 1, 0, 0);
			}
			if (((iLocal_241 < 2 && Var80[iLocal_233 /*123*/] < 18) || (Var80[iLocal_234 /*123*/] > 19 && Var80[iLocal_233 /*123*/] < 18)) && !func_1067(&(Var80[iLocal_233 /*123*/]), 16))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (Var80[iLocal_233 /*123*/] == 18 || Var80[iLocal_233 /*123*/] == 19)
				{
					iVar4 = 3;
				}
				else
				{
					iVar4 = 1;
					if (func_823(&Var79, &Var80))
					{
						__LIB_5__.func_113(23, 1, -1);
						iVar47 = __LIB_1__.func_888(PLAYER::PLAYER_ID());
					}
					else
					{
						iVar47 = func_718();
					}
				}
				__LIB_18__.func_301(PLAYER::PLAYER_ID(), 0, 0);
				Var80[iLocal_233 /*123*/] = 20;
			}
			else if ((MISC::GET_GAME_TIMER() % 10000) < 50)
			{
			}
			if (func_1067(&(Var80[iLocal_233 /*123*/]), 16) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 2)
			{
				if (func_1067(&(Var80[iLocal_234 /*123*/]), 18))
				{
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 17))
					{
						func_1085(&(Var80[iLocal_233 /*123*/]), 17);
					}
				}
			}
			else if (func_1067(&(Var80[iLocal_233 /*123*/]), 17) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
			{
				func_716(&(Var80[iLocal_233 /*123*/]), 17);
			}
			if (BitTest(Global_2703735.f_3580.f_35, 5))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				__LIB_0__.func_210("DARTS_ENEMIES" /* GXT: Enemies in gang house, game ending. */, 7500, 0);
				__LIB_18__.func_301(PLAYER::PLAYER_ID(), 0, 0);
				func_1097(&Var0, &Var7, 1, 0, 0);
			}
			if (func_715(&Var79, &(Var80[iLocal_233 /*123*/]), &iVar8))
			{
				if (func_823(&Var79, &Var80))
				{
					__LIB_5__.func_113(23, 1, -1);
					iVar47 = __LIB_1__.func_888(PLAYER::PLAYER_ID());
				}
				else
				{
					iVar47 = func_718();
				}
			}
			if (Var80[iLocal_233 /*123*/] > 6)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var6.f_0, Var6.f_18, Var6.f_21, Var6.f_24, Var6.f_24, 2);
			}
			if (Var80[iLocal_233 /*123*/] == 7)
			{
				if (!PED::IS_PED_INJURED(iVar28))
				{
				}
			}
			if (Var80[iLocal_233 /*123*/] >= 12 && Var80[iLocal_233 /*123*/] < 18)
			{
				if (func_1041(&(Var80[iLocal_233 /*123*/]), &Var7, &uVar41))
				{
					Global_2725346 = 1;
					if (func_823(&Var79, &Var80))
					{
						__LIB_5__.func_113(23, 1, -1);
						iVar47 = __LIB_1__.func_888(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
					}
					else
					{
						iVar47 = func_718();
					}
					func_688(6, 0f, 0f, 0f, Var74);
					Var7.f_669++;
					Var80[iLocal_233 /*123*/] = 23;
				}
			}
			switch (Var80[iLocal_233 /*123*/])
			{
				case 1:
					if (Var79.f_0 > 4)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							if (__LIB_0__.func_3() == 0)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								func_687();
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
								bVar61 = true;
							}
							if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
							{
								__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 66052, 0);
							}
							Var80[iLocal_233 /*123*/] = 2;
						}
					}
					break;
				case 2:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (__LIB_0__.func_3() != 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_173, true, false, false, true);
								STREAMING::NEW_LOAD_SCENE_START(Local_173, -3.4831f, 0.0223f, 60.6925f, 20f, 0);
							}
						}
						Var80[iLocal_233 /*123*/] = 3;
					}
					else
					{
						__LIB_1__.func_895(&(Var0.f_79), &Var1);
						__LIB_18__.func_304(&(Var0.f_79), &Var3, &Var2, 1);
						if (iLocal_233 == iLocal_230)
						{
							Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, -0.3f, (-2.6f + fLocal_165), -1.7272f) };
						}
						else
						{
							Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, 0.3f, (-2.6f + fLocal_165), -1.7272f) };
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							Var33 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							TASK::CLEAR_SEQUENCE_TASK(&iVar27);
							TASK::OPEN_SEQUENCE_TASK(&iVar27);
							if (iLocal_233 == iLocal_230)
							{
								TASK::TASK_STAND_STILL(0, 500);
							}
							if (Var33.f_2 > 75.2f)
							{
								TASK::TASK_JUMP(0, false, false, false);
							}
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var3, 1f, 5000, 0.3f, 0, 40000f);
							TASK::TASK_ACHIEVE_HEADING(0, Var0.f_79.f_4, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar27);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar27);
						}
						Var80[iLocal_233 /*123*/] = 3;
					}
					break;
				case 3:
					if (!bVar61)
					{
						if (__LIB_0__.func_3() != 0 && STREAMING::NETWORK_UPDATE_LOAD_SCENE())
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							Var80[iLocal_233 /*123*/] = 4;
						}
						else
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							Var80[iLocal_233 /*123*/] = 4;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 && !func_1067(&(Var80[iLocal_233 /*123*/]), 8))
					{
						iVar9 = 0;
						func_1085(&(Var80[iLocal_233 /*123*/]), 8);
					}
					else if (func_1067(&(Var80[iLocal_233 /*123*/]), 8) && func_1067(&(Var80[iLocal_234 /*123*/]), 8))
					{
						Var80[iLocal_233 /*123*/] = 4;
					}
					break;
				case 4:
					__LIB_1__.func_895(&(Var0.f_79), &Var1);
					__LIB_18__.func_295(Var0.f_79.f_1, Var0.f_79.f_4);
					iVar93 = 0;
					while (iVar93 < 3)
					{
						__LIB_1__.func_878(&(Var0[iVar93 /*26*/]), 0);
						if (__LIB_0__.func_3() == 0)
						{
						}
						iVar93++;
					}
					__LIB_1__.func_877(0);
					__LIB_1__.func_886(&Var6, iVar10, Var0.f_79.f_1, Var0.f_79.f_4);
					func_1031(&Var6);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					__LIB_1__.func_167();
					HUD::DISPLAY_RADAR(false);
					__LIB_8__.func_770(1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					iLocal_213 = 770;
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							}
						}
					}
					Var80[iLocal_233 /*123*/] = 5;
					break;
				case 5:
					if (func_1021(&Var6))
					{
						Var80[iLocal_233 /*123*/] = 6;
					}
					break;
				case 6:
					func_1085(&(Var80[iLocal_233 /*123*/]), 5);
					if (__LIB_0__.func_3() == 0 || !bVar61)
					{
						__LIB_18__.func_304(&(Var0.f_79), &Var3, &Var2, 1);
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, 0.5f, (-2.4f + fLocal_165), (-0.7744f - 1f)) };
							Var3.f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, -0.4f, (-2.4f + fLocal_165), -0.7744f) };
						}
						else
						{
							Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, -0.4f, (-2.4f + fLocal_165), (-0.7744f - 1f)) };
							Var3.f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0.f_79.f_1, Var0.f_79.f_4, 0.5f, (-2.4f + fLocal_165), -0.7744f) };
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var0.f_79.f_4);
							if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
								}
							}
							if (__LIB_1__.func_876() != joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							}
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								}
							}
						}
					}
					iLocal_167 = OBJECT::CREATE_OBJECT(iLocal_168, Var2, false, false, false);
					iVar30 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), Var2, false, false, false);
					__LIB_18__.func_294(&Var7);
					__LIB_24__.func_985(&(Var7.f_26));
					sVar75[Var80[iLocal_233 /*123*/].f_122] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233)));
					Var17[Var80[iLocal_233 /*123*/].f_122 /*13*/] = { __LIB_0__.func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233))) };
					Var72[Var80[iLocal_233 /*123*/].f_122 /*2*/] = { __LIB_1__.func_885(&(Var17[Var80[iLocal_233 /*123*/].f_122 /*13*/])) };
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
					{
						sVar75[Var80[iLocal_234 /*123*/].f_122] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
						Var17[Var80[iLocal_234 /*123*/].f_122 /*13*/] = { __LIB_0__.func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234))) };
						Var72[Var80[iLocal_234 /*123*/].f_122 /*2*/] = { __LIB_1__.func_885(&(Var17[Var80[iLocal_234 /*123*/].f_122 /*13*/])) };
						iVar28 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)))))
						{
							iVar29[Var80[iLocal_234 /*123*/].f_122] = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234))), false, false, true);
						}
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233)))))
						{
							iVar29[Var80[iLocal_233 /*123*/].f_122] = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233))), false, false, true);
						}
						if (__LIB_7__.func_43(iVar29[Var80[iLocal_233 /*123*/].f_122]))
						{
							func_1011(&(iVar29[Var80[iLocal_233 /*123*/].f_122]));
						}
						if (__LIB_7__.func_43(iVar29[Var80[iLocal_234 /*123*/].f_122]))
						{
							func_1011(&(iVar29[Var80[iLocal_234 /*123*/].f_122]));
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1991.1589f, 3045.9758f, 46.2151f, true, false, false, true);
							if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
							}
						}
						iVar94 = 0;
						iVar95 = 1;
						__LIB_1__.func_882(&Var6, sVar75[iVar94], sVar75[iVar95]);
						if (!__LIB_1__.func_884(&(Var72[iVar94 /*2*/])))
						{
							func_1014(&Var6, iVar94, &(Var72[iVar94 /*2*/]), 0);
						}
						if (!__LIB_1__.func_884(&(Var72[iVar95 /*2*/])))
						{
							func_1014(&Var6, iVar95, &(Var72[iVar95 /*2*/]), 0);
						}
						__LIB_1__.func_883(&Var6, iVar94);
						__LIB_1__.func_883(&Var6, iVar95);
					}
					else
					{
						__LIB_1__.func_882(&Var6, "", sVar75[Var80[iLocal_233 /*123*/].f_122]);
						if (!__LIB_1__.func_884(&(Var72[Var80[iLocal_233 /*123*/].f_122 /*2*/])))
						{
							func_1014(&Var6, 1, &(Var72[Var80[iLocal_233 /*123*/].f_122 /*2*/]), 0);
						}
						__LIB_1__.func_883(&Var6, 1);
					}
					if (Global_4718592.f_116945 > 0 || Global_4718592.f_116946 > 0)
					{
						func_1009(&Var6, 0, 0, 0, 0);
					}
					if (bVar66)
					{
						__LIB_1__.func_871(13, "MN_DART" /* GXT: DARTS */, 0, 1, -1, 2, 1, 0);
						__LIB_18__.func_276(&iVar19);
						__LIB_1__.func_875(PLAYER::PLAYER_PED_ID());
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					MISC::CLEAR_AREA(Var1, 0.5f, true, false, false, false);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(Var1, 0.5f);
					__LIB_0__.func_994(1);
					Var80[iLocal_233 /*123*/] = 7;
					break;
				case 7:
					if (((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_7__.func_42(&iVar19) > 1f) && bVar66)
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if ((!func_1067(&(Var80[iLocal_233 /*123*/]), 12) && ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && __LIB_7__.func_42(&iVar19) > 1.6f) || __LIB_7__.func_42(&iVar19) > 20f)) || !bVar66)
					{
						if (bVar66)
						{
							__LIB_1__.func_3();
							__LIB_0__.func_735(&iVar19);
						}
						func_1085(&(Var80[iLocal_233 /*123*/]), 11);
						Var80[iLocal_233 /*123*/] = 8;
						func_1085(&(Var80[iLocal_233 /*123*/]), 12);
					}
					else if (!func_1067(&(Var80[iLocal_233 /*123*/]), 12) && bVar66)
					{
						__LIB_18__.func_293("MN_DART" /* GXT: DARTS */);
					}
					break;
				case 8:
					if ((func_1067(&(Var80[iLocal_233 /*123*/]), 12) && func_1067(&(Var80[iLocal_234 /*123*/]), 12)) || (func_1067(&(Var80[iLocal_233 /*123*/]), 12) && func_1067(&(Var80[iLocal_233 /*123*/]), 16)))
					{
						if (__LIB_0__.func_3() == 0 && (!(func_1067(&(Var80[iLocal_233 /*123*/]), 11) && func_1067(&(Var80[iLocal_234 /*123*/]), 11)) && !(func_1067(&(Var80[iLocal_233 /*123*/]), 11) && func_1067(&(Var80[iLocal_233 /*123*/]), 16))))
						{
							if (func_624(&uVar11, &(Var0.f_79), &uVar12, &iVar13, &Var0, &iVar21, &Var80))
							{
								__LIB_6__.func_905(136, 1, -1, 1);
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									Var80[iLocal_233 /*123*/] = 9;
								}
								else
								{
									func_1006(14, Var79.f_50, Var79.f_49, 0, 0);
									Var80[iLocal_233 /*123*/] = 13;
								}
							}
						}
						else
						{
							HUD::CLEAR_HELP(true);
							__LIB_1__.func_868();
							if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
							{
								Var80[iLocal_233 /*123*/] = 9;
							}
							else
							{
								func_1006(14, Var79.f_50, Var79.f_49, 0, 0);
								Var80[iLocal_233 /*123*/] = 13;
							}
						}
					}
					break;
				case 9:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)), false);
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
						if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
						{
							iVar56 = PED::CREATE_SYNCHRONIZED_SCENE(1992.679f, 3050.739f, 47.66f, 0f, 0f, 54f, 2);
							iLocal_1037 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1037, iVar56, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
							CAM::SET_CAM_ACTIVE(iLocal_1037, true);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iVar29[0], iVar56, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iVar29[1], iVar56, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_PLAY_ANIM(iVar29[0], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iVar29[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2_face", 8f, -8f, -1, 32, 0f, false, false, false);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar30, iVar56, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1000f);
							Var80[iLocal_233 /*123*/] = 10;
						}
					}
					break;
				case 10:
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)), false);
					NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar56) == 1f)
					{
						if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
						{
							__LIB_1__.func_868();
							CAM::DESTROY_CAM(iLocal_1037, false);
							TASK::CLEAR_PED_TASKS(iVar29[0]);
							TASK::CLEAR_PED_TASKS(iVar29[1]);
							OBJECT::DELETE_OBJECT(&iVar30);
							Var80[iLocal_233 /*123*/] = 11;
							iVar40 = 0;
						}
					}
					break;
				case 11:
					if (!__LIB_0__.func_736(&iVar19))
					{
						__LIB_24__.func_969(&uLocal_1038, "DARTS_THRW_OFF", "DARTS_THRW_STR", 3000, 0, 2);
						__LIB_18__.func_276(&iVar19);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					else if (__LIB_7__.func_42(&iVar19) >= 3.5f || !__LIB_24__.func_984(&uLocal_1038, 0))
					{
						__LIB_1__.func_3();
						__LIB_0__.func_735(&iVar19);
						func_1006(14, Var79.f_50, Var79.f_49, 0, 0);
						__LIB_1__.func_887(&Var6, 1);
						__LIB_7__.func_65(&iVar8);
						__LIB_7__.func_41(&uLocal_1038);
						func_1085(&(Var80[iLocal_233 /*123*/]), 15);
						Var80[iLocal_233 /*123*/] = 12;
					}
					break;
				case 12:
					if (func_1000(&Var79, 22))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (!func_1067(&(Var80[iLocal_233 /*123*/]), 7))
						{
							if ((!Var79.f_1[iLocal_233] == 3 && (!Var80[iLocal_233 /*123*/].f_112 == 1 || !Var80[iLocal_234 /*123*/].f_112 == 1)) && !__LIB_0__.func_492(&(Var79.f_48), 1))
							{
								if (!bLocal_223)
								{
									if (!Var79.f_1[iLocal_233] == 2)
									{
										if (bVar67 && !__LIB_0__.func_492(&(Var7.f_666), 13))
										{
											if (!BitTest(Global_113347, 5))
											{
												__LIB_0__.func_151("DARTS_TIOT", -1);
												MISC::SET_BIT(&Global_113347, 5);
											}
											__LIB_1__.func_881(&(Var7.f_666), 13, 1);
										}
									}
									Var7.f_672 = 1;
								}
								else if (Var7.f_672)
								{
									HUD::CLEAR_HELP(true);
									Var7.f_672 = 0;
								}
							}
							if ((Var80[iLocal_233 /*123*/].f_1 == 0 && Var79.f_1[iLocal_233] == 0) || bVar65)
							{
								__LIB_18__.func_287(&Var7, Var79.f_1[iLocal_233] == 0);
							}
						}
						switch (Var79.f_1[iLocal_233])
						{
							case 0:
								switch (Var80[iLocal_233 /*123*/].f_1)
								{
									case 0:
										if (!BitTest(Global_113347, 9))
										{
											__LIB_0__.func_151("DARTS_AIM_HLP", -1);
											MISC::SET_BIT(&Global_113347, 9);
										}
										else if (!__LIB_0__.func_1("DARTS_AIM_HLP") && !BitTest(Global_113347, 7))
										{
											__LIB_0__.func_151("DARTS_CLOCK", -1);
											MISC::SET_BIT(&Global_113347, 7);
										}
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 7))
										{
											__LIB_18__.func_286(&(Var79.f_6), 1);
										}
										if (Var79.f_6.f_10)
										{
										}
										if (Var79.f_6.f_12)
										{
										}
										if ((!func_1067(&(Var80[iLocal_233 /*123*/]), 7) && !HUD::IS_PAUSE_MENU_ACTIVE()) || Var79.f_6.f_12)
										{
											if (__LIB_35__.func_532(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), &Var2, 0, Var79.f_6.f_12, 1, 0))
											{
												if (Var79.f_6.f_12 && !bVar67)
												{
													bVar67 = true;
												}
												__LIB_1__.func_881(&(Var7.f_666), 11, 0);
												func_598(&(Var80[iLocal_233 /*123*/]), Var0[Var79.f_41 /*26*/]);
												if (func_1067(&(Var80[iLocal_233 /*123*/]), 6))
												{
													func_716(&(Var80[iLocal_233 /*123*/]), 6);
												}
												if (Global_2703735.f_3580.f_36 <= 0 || !BitTest(Global_2703735.f_3580.f_35, 2))
												{
													func_716(&(Var80[iLocal_233 /*123*/]), 9);
												}
												else
												{
													func_1085(&(Var80[iLocal_233 /*123*/]), 9);
												}
												Var80[iLocal_233 /*123*/].f_112 = 1;
												Var80[iLocal_233 /*123*/].f_1 = 1;
											}
										}
										break;
									case 1:
										__LIB_1__.func_880("[AM_DARTS] current client is THROWING", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 9))
										{
											if (__LIB_24__.func_981(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0, 0))
											{
												Var80[iLocal_233 /*123*/].f_116 = 0;
												Var80[iLocal_233 /*123*/].f_1 = 2;
											}
										}
										else if (!__LIB_0__.func_736(&iVar20))
										{
											if (__LIB_1__.func_854(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 988.1219f, -99.3023f, 73.8456f))
											{
												__LIB_18__.func_283(PLAYER::PLAYER_ID(), 2, 0);
												Var80[iLocal_233 /*123*/].f_112 = 0;
												Var80[iLocal_233 /*123*/].f_116 = 0;
												__LIB_6__.func_892(&iVar20);
											}
										}
										else if (__LIB_7__.func_78(&iVar20) > 1f || func_1067(&(Var80[iLocal_234 /*123*/]), 6))
										{
											if (!func_1067(&(Var80[iLocal_233 /*123*/]), 6))
											{
												func_1085(&(Var80[iLocal_233 /*123*/]), 6);
											}
											__LIB_0__.func_735(&iVar20);
											Var80[iLocal_233 /*123*/].f_1 = 0;
										}
										break;
									case 2:
										__LIB_18__.func_282(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0);
										Var80[iLocal_233 /*123*/].f_83.f_22 = Var0[Var79.f_41 /*26*/].f_22;
										Var80[iLocal_233 /*123*/].f_1 = 3;
										__LIB_1__.func_880("Current client is waiting for other client to finish throwing", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
										break;
									case 3:
										if (Var80[iLocal_234 /*123*/].f_2 >= 3)
										{
											Var80[iLocal_233 /*123*/].f_112 = 0;
											func_1085(&(Var80[iLocal_233 /*123*/]), 21);
											if (!Var0[Var79.f_41 /*26*/].f_25)
											{
												Var0[Var79.f_41 /*26*/].f_25 = 1;
											}
											SYSTEM::SETTIMERA(0);
										}
										__LIB_1__.func_880("Waiting for other client to get to DARTS_MPWAIT_TURN_CHANGE", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
										break;
								}
								break;
							case 1:
								switch (Var80[iLocal_233 /*123*/].f_2)
								{
									case 0:
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 7))
										{
											__LIB_18__.func_286(&(Var79.f_6), 0);
										}
										if (!bVar65)
										{
											bVar65 = true;
										}
										if (Var80[iLocal_234 /*123*/].f_112)
										{
											__LIB_1__.func_881(&(Var7.f_666), 11, 0);
											func_999(&(Var0[Var79.f_41 /*26*/]), &(Var80[iLocal_234 /*123*/]), iLocal_234);
											if (func_1067(&(Var80[iLocal_233 /*123*/]), 6))
											{
												func_716(&(Var80[iLocal_233 /*123*/]), 6);
											}
											Var80[iLocal_233 /*123*/].f_2 = 1;
										}
										else
										{
											__LIB_1__.func_880("Current client is waiting for other client to throw", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
										}
										break;
									case 1:
										if (!func_1067(&(Var80[iLocal_234 /*123*/]), 9))
										{
											if (__LIB_24__.func_981(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0, 0))
											{
												Var80[iLocal_233 /*123*/].f_116 = 0;
												Var80[iLocal_233 /*123*/].f_2 = 2;
											}
										}
										else if (!__LIB_0__.func_736(&iVar20))
										{
											if (__LIB_1__.func_854(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 988.1219f, -99.3023f, 73.8456f))
											{
												__LIB_6__.func_892(&iVar20);
											}
										}
										else if (__LIB_7__.func_78(&iVar20) > 1f || func_1067(&(Var80[iLocal_234 /*123*/]), 6))
										{
											if (!func_1067(&(Var80[iLocal_233 /*123*/]), 6))
											{
												func_1085(&(Var80[iLocal_233 /*123*/]), 6);
											}
											__LIB_0__.func_735(&iVar20);
											Var80[iLocal_233 /*123*/].f_2 = 0;
										}
										break;
									case 2:
										if (Var80[iLocal_234 /*123*/].f_1 >= 2)
										{
											__LIB_18__.func_282(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0);
											Var80[iLocal_233 /*123*/].f_83.f_22 = Var0[Var79.f_41 /*26*/].f_22;
											Var80[iLocal_233 /*123*/].f_2 = 3;
										}
										__LIB_1__.func_880("Current client is waiting for other client to finish throwing", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
										break;
									case 3:
										if (Var80[iLocal_234 /*123*/].f_1 >= 3)
										{
											func_1085(&(Var80[iLocal_233 /*123*/]), 21);
											if (!Var0[Var79.f_41 /*26*/].f_25)
											{
												Var0[Var79.f_41 /*26*/].f_25 = 1;
											}
											SYSTEM::SETTIMERA(0);
										}
										__LIB_1__.func_880("Waiting for other client to get to DARTS_MPTHROW_TURN_CHANGE", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
										break;
								}
								break;
							case 2:
								if (!__LIB_0__.func_492(&(Var7.f_666), 11))
								{
									if (iLocal_233 == Var79.f_45)
									{
									}
									__LIB_1__.func_881(&(Var7.f_666), 11, 1);
								}
								if (!Var80[iLocal_233 /*123*/].f_116 && SYSTEM::TIMERA() > 1000)
								{
									Var80[iLocal_233 /*123*/].f_2 = 0;
									Var80[iLocal_233 /*123*/].f_1 = 0;
									Var0[Var79.f_41 /*26*/].f_25 = 0;
									func_716(&(Var80[iLocal_233 /*123*/]), 21);
									HUD::CLEAR_HELP(true);
									if (__LIB_0__.func_492(&(Var79.f_48), 1))
									{
										iVar96 = 0;
										while (iVar96 < 3)
										{
											Var0[iVar96 /*26*/].f_25 = 0;
											iVar96++;
										}
										if (iLocal_233 != Var79.f_45)
										{
											bVar65 = false;
										}
										__LIB_1__.func_887(&Var6, Var80[Var79.f_46 /*123*/].f_122);
										iLocal_179 = 0;
									}
									Var80[iLocal_233 /*123*/].f_116 = 1;
								}
								break;
							case 3:
								if (!__LIB_0__.func_736(&iVar19))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									if (Var79.f_43 == Var80[iLocal_233 /*123*/].f_122)
									{
										StringCopy(&Var73, "<C>", 64);
										StringConCat(&Var73, "~HUD_COLOUR_BLUE~", 64);
										StringConCat(&Var73, sVar75[Var80[iLocal_233 /*123*/].f_122], 64);
										StringConCat(&Var73, "</C>", 64);
										StringConCat(&Var73, "~s~", 64);
										__LIB_24__.func_980(&uLocal_1038, "DARTS_THRW_WIN", "DARTS_FIRST", &Var73, 3000, 0, 1);
										AUDIO::PLAY_SOUND_FRONTEND(-1, "WIN", "HUD_AWARDS", true);
									}
									else
									{
										StringCopy(&Var73, "<C>", 64);
										StringConCat(&Var73, "~HUD_COLOUR_RED~", 64);
										StringConCat(&Var73, sVar75[Var80[iLocal_234 /*123*/].f_122], 64);
										StringConCat(&Var73, "</C>", 64);
										StringConCat(&Var73, "~s~", 64);
										__LIB_24__.func_980(&uLocal_1038, "DARTS_THRW_LOS", "DARTS_FIRST", &Var73, 3000, 0, 6);
										AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "HUD_AWARDS", true);
									}
									CAM::SET_CAM_ACTIVE(iLocal_191, true);
									__LIB_18__.func_276(&iVar19);
								}
								else if (__LIB_7__.func_42(&iVar19) >= 5f || !__LIB_24__.func_984(&uLocal_1038, 1))
								{
									iVar97 = 0;
									while (iVar97 < 3)
									{
										__LIB_1__.func_852(&(Var0[iVar97 /*26*/]));
										Var0[iVar97 /*26*/].f_25 = 0;
										iVar97++;
									}
									__LIB_0__.func_735(&iVar19);
									__LIB_7__.func_41(&uLocal_1038);
									func_1085(&(Var80[iLocal_233 /*123*/]), 15);
									Var80[iLocal_233 /*123*/] = 13;
								}
								break;
							}
					}
					break;
				case 13:
					iVar38 = 0;
					iVar39 = 0;
					iVar38 = 0;
					while (iVar38 < 2)
					{
						Var0.f_84[iVar38] = 0;
						Var0.f_87[iVar38] = 0;
						__LIB_1__.func_883(&Var6, iVar38);
						iVar38++;
					}
					__LIB_1__.func_888(&Var6, 1, 301);
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
					{
						__LIB_1__.func_888(&Var6, 0, 301);
					}
					iVar39 = 0;
					while (iVar39 < 3)
					{
						__LIB_1__.func_852(&(Var0[iVar39 /*26*/]));
						Var0[iVar39 /*26*/].f_25 = 0;
						iVar39++;
					}
					func_591(&(Var80[iLocal_233 /*123*/]));
					__LIB_7__.func_65(&iVar8);
					Var80[iLocal_233 /*123*/].f_1 = 0;
					Var80[iLocal_233 /*123*/].f_2 = 0;
					Var80[iLocal_233 /*123*/].f_112 = 0;
					Var0.f_92 = 0;
					Var0.f_93 = 0;
					bVar64 = false;
					iLocal_179 = 0;
					iLocal_181 = 0;
					__LIB_1__.func_881(&(Var7.f_666), 12, 0);
					__LIB_0__.func_994(0);
					func_1085(&(Var80[iLocal_233 /*123*/]), 1);
					Var80[iLocal_233 /*123*/] = 14;
					break;
				case 14:
					__LIB_1__.func_880("Client DARTS_MPSTATE_SETUP_POST", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if (Var79.f_0 == 16)
					{
						Var80[iLocal_233 /*123*/].f_118 = 0;
						__LIB_1__.func_868();
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (__LIB_1__.func_850(__LIB_1__.func_556(1260, -1, 0), &iVar43))
						{
							__LIB_1__.func_881(&(Var7.f_666), 24, 1);
						}
						fLocal_176 = __LIB_1__.func_849(__LIB_1__.func_556(1260, -1, 0));
						fLocal_177 = __LIB_1__.func_848(__LIB_1__.func_556(1260, -1, 0));
						fLocal_174 = fLocal_176;
						fLocal_175 = fLocal_177;
						func_716(&(Var80[iLocal_233 /*123*/]), 1);
						Var80[iLocal_233 /*123*/] = 16;
						if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
						{
							uLocal_222[4]++;
						}
						__LIB_18__.func_280(&Var7);
						if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
						{
							__LIB_1__.func_887(&Var6, __LIB_0__.func_138(Var79.f_44 == 0, 0, 1));
						}
						else
						{
							__LIB_1__.func_887(&Var6, 1);
						}
						bVar65 = false;
					}
					break;
				case 15:
					if (func_1000(&Var79, 20))
					{
						Var80[iLocal_233 /*123*/] = 16;
					}
					break;
				case 16:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar9)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_10__.func_567(Var3, 1) > 1.5f)
							{
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								iVar9 = 0;
							}
							break;
					}
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 7))
					{
						if ((!Var79.f_1[iLocal_233] == 3 && (!Var80[iLocal_233 /*123*/].f_112 == 1 || !Var80[iLocal_234 /*123*/].f_112 == 1)) && !__LIB_0__.func_492(&(Var79.f_48), 1))
						{
							if (!bLocal_223)
							{
								if (__LIB_0__.func_492(&(Var7.f_666), 18) && Var79.f_1[iLocal_233] == 0)
								{
									if (!__LIB_0__.func_492(&(Var7.f_666), 21))
									{
										if (!BitTest(Global_113347, 3))
										{
											__LIB_0__.func_151("DARTS_INSTR_W", -1);
											MISC::SET_BIT(&Global_113347, 3);
										}
										__LIB_1__.func_881(&(Var7.f_666), 21, 1);
									}
									else if (!__LIB_0__.func_492(&(Var7.f_666), 20) && __LIB_0__.func_492(&(Var7.f_666), 19))
									{
										if (!BitTest(Global_113347, 4))
										{
											__LIB_0__.func_151("DARTS_INSTR_B", -1);
											MISC::SET_BIT(&Global_113347, 4);
										}
										__LIB_1__.func_881(&(Var7.f_666), 20, 1);
									}
								}
								if (((bVar64 && !__LIB_0__.func_1("DARTS_SHT_USE")) && !__LIB_0__.func_1("DARTS_FST_HLP")) && Var79.f_1[iLocal_233] == 0)
								{
								}
								else if (!Var79.f_1[iLocal_233] == 2)
								{
									if ((((bVar67 && !__LIB_0__.func_492(&(Var7.f_666), 13)) && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B")) && (__LIB_0__.func_736(&(Var79.f_6)) && __LIB_7__.func_42(&(Var79.f_6)) < 5f))
									{
										if (!BitTest(Global_113347, 5))
										{
											__LIB_0__.func_151("DARTS_TIOT", -1);
											MISC::SET_BIT(&Global_113347, 5);
										}
										__LIB_1__.func_881(&(Var7.f_666), 13, 1);
									}
								}
								Var7.f_672 = 1;
							}
							else if (Var7.f_672)
							{
								HUD::CLEAR_HELP(true);
								Var7.f_672 = 0;
							}
						}
						if ((Var80[iLocal_233 /*123*/].f_1 == 0 && Var79.f_1[iLocal_233] == 0) || bVar65)
						{
							if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !__LIB_0__.func_497())
							{
								__LIB_18__.func_281(&Var7, Var79.f_1[iLocal_233] == 0);
							}
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							func_577(&Var7);
							if (bVar70)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_NEW_RECORD", "HUD_AWARDS", true);
								bVar70 = false;
							}
						}
					}
					switch (Var79.f_1[iLocal_233])
					{
						case 0:
							switch (Var80[iLocal_233 /*123*/].f_1)
							{
								case 0:
									Var80[iLocal_233 /*123*/].f_113 = 1;
									if (!func_1067(&(Var80[iLocal_233 /*123*/]), 7))
									{
										__LIB_7__.func_61(&(Var79.f_6), 1);
									}
									__LIB_7__.func_58(Var79.f_41, 1);
									if (__LIB_0__.func_492(&(Var7.f_666), 24))
									{
										if ((((((!__LIB_0__.func_1("DARTS_SHT_USE") && !__LIB_0__.func_1("DARTS_CLOCK")) && !__LIB_0__.func_1("DARTS_INSTR_W")) && !__LIB_0__.func_1("DARTS_INSTR_B")) && !__LIB_0__.func_1("DARTS_AIM_HLP")) && !__LIB_0__.func_1("DARTS_STD_HLP")) && !__LIB_0__.func_1("DARTS_FST_HLP"))
										{
											__LIB_0__.func_151("DARTS_LEVEL", -1);
											MISC::SET_BIT(&(Global_113386.f_18970.f_6), iVar43);
											__LIB_1__.func_881(&(Var7.f_666), 24, 0);
										}
									}
									if (Var79.f_6.f_10)
									{
									}
									if (Var79.f_6.f_12)
									{
									}
									if ((((!func_1067(&(Var80[iLocal_233 /*123*/]), 7) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__.func_497()) || Var79.f_6.f_12)
									{
										if (__LIB_35__.func_532(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), &Var2, 0, Var79.f_6.f_12, 0, 0))
										{
											if (Var79.f_6.f_12 && !bVar67)
											{
												bVar67 = true;
											}
											Var7.f_670 = (Var7.f_670 - 1);
											__LIB_1__.func_881(&(Var7.f_666), 11, 0);
											func_598(&(Var80[iLocal_233 /*123*/]), Var0[Var79.f_41 /*26*/]);
											if (func_1067(&(Var80[iLocal_233 /*123*/]), 6))
											{
												func_716(&(Var80[iLocal_233 /*123*/]), 6);
											}
											if (Global_2703735.f_3580.f_36 <= 0 || !BitTest(Global_2703735.f_3580.f_35, 2))
											{
												func_716(&(Var80[iLocal_233 /*123*/]), 9);
											}
											else
											{
												func_1085(&(Var80[iLocal_233 /*123*/]), 9);
											}
											if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
											{
												uLocal_222[10]++;
											}
											Var80[iLocal_233 /*123*/].f_112 = 1;
											Var80[iLocal_233 /*123*/].f_113 = 0;
											Var80[iLocal_233 /*123*/].f_1 = 1;
										}
									}
									break;
								case 1:
									__LIB_1__.func_880("[AM_DARTS] current client is THROWING", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
									if (!func_1067(&(Var80[iLocal_233 /*123*/]), 9))
									{
										if (__LIB_24__.func_981(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0, 0))
										{
											Var0.f_84[Var80[iLocal_233 /*123*/].f_122]++;
											Var80[iLocal_233 /*123*/].f_116 = 0;
											Var80[iLocal_233 /*123*/].f_1 = 2;
										}
									}
									else if (!__LIB_0__.func_736(&iVar20))
									{
										if (__LIB_1__.func_854(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 988.1219f, -99.3023f, 73.8456f))
										{
											__LIB_18__.func_283(PLAYER::PLAYER_ID(), 2, 0);
											Var80[iLocal_233 /*123*/].f_112 = 0;
											Var80[iLocal_233 /*123*/].f_113 = 1;
											Var80[iLocal_233 /*123*/].f_116 = 0;
											__LIB_6__.func_892(&iVar20);
										}
									}
									else if (__LIB_7__.func_78(&iVar20) > 1f || func_1067(&(Var80[iLocal_234 /*123*/]), 6))
									{
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 6))
										{
											func_1085(&(Var80[iLocal_233 /*123*/]), 6);
										}
										__LIB_0__.func_735(&iVar20);
										Var80[iLocal_233 /*123*/].f_1 = 0;
									}
									break;
								case 2:
									__LIB_18__.func_282(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0);
									Var80[iLocal_233 /*123*/].f_83.f_20 = Var0[Var79.f_41 /*26*/].f_20;
									if (Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
									{
										Var0.f_87[Var80[iLocal_233 /*123*/].f_122]++;
									}
									if (Var80[iLocal_233 /*123*/].f_83.f_21 == 2 || Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
									{
										Var80[iLocal_233 /*123*/].f_115 = 1;
									}
									else
									{
										Var80[iLocal_233 /*123*/].f_115 = 0;
									}
									Var80[iLocal_233 /*123*/].f_1 = 3;
									__LIB_1__.func_880("Current client is waiting for other client to finish throwing", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
									break;
								case 3:
									if (Var80[iLocal_234 /*123*/].f_2 >= 3 || func_1067(&(Var80[iLocal_233 /*123*/]), 16))
									{
										Var80[iLocal_233 /*123*/].f_112 = 0;
										func_1085(&(Var80[iLocal_233 /*123*/]), 21);
										if (!Var0[Var79.f_41 /*26*/].f_25)
										{
											Var0[Var79.f_41 /*26*/].f_25 = 1;
										}
										SYSTEM::SETTIMERA(0);
									}
									__LIB_1__.func_880("Waiting for other client to get to DARTS_MPWAIT_TURN_CHANGE", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
									break;
							}
							break;
						case 1:
							switch (Var80[iLocal_233 /*123*/].f_2)
							{
								case 0:
									if (!bVar65)
									{
										bVar65 = true;
									}
									if (!func_1067(&(Var80[iLocal_233 /*123*/]), 7))
									{
										__LIB_7__.func_61(&(Var79.f_6), 0);
									}
									if (Var80[iLocal_234 /*123*/].f_112)
									{
										Var7.f_670 = (Var7.f_670 - 1);
										__LIB_1__.func_881(&(Var7.f_666), 11, 0);
										func_999(&(Var0[Var79.f_41 /*26*/]), &(Var80[iLocal_234 /*123*/]), iLocal_234);
										if (func_1067(&(Var80[iLocal_233 /*123*/]), 6))
										{
											func_716(&(Var80[iLocal_233 /*123*/]), 6);
										}
										Var80[iLocal_233 /*123*/].f_2 = 1;
									}
									else
									{
										__LIB_1__.func_880("Current client is waiting for other client to throw", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
									}
									break;
								case 1:
									if (!func_1067(&(Var80[iLocal_234 /*123*/]), 9))
									{
										if (__LIB_24__.func_981(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0, 0))
										{
											Var0.f_84[Var80[iLocal_234 /*123*/].f_122]++;
											Var80[iLocal_233 /*123*/].f_116 = 0;
											Var80[iLocal_233 /*123*/].f_2 = 2;
										}
									}
									else if (!__LIB_0__.func_736(&iVar20))
									{
										if (__LIB_1__.func_854(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 988.1219f, -99.3023f, 73.8456f))
										{
											__LIB_6__.func_892(&iVar20);
										}
									}
									else if (__LIB_7__.func_78(&iVar20) > 1f || func_1067(&(Var80[iLocal_234 /*123*/]), 6))
									{
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 6))
										{
											func_1085(&(Var80[iLocal_233 /*123*/]), 6);
										}
										__LIB_0__.func_735(&iVar20);
										Var80[iLocal_233 /*123*/].f_2 = 0;
									}
									break;
								case 2:
									if (Var80[iLocal_234 /*123*/].f_1 >= 2)
									{
										__LIB_18__.func_282(&(Var0[Var79.f_41 /*26*/]), &(Var0.f_79), 0);
										Var80[iLocal_233 /*123*/].f_83.f_20 = Var0[Var79.f_41 /*26*/].f_20;
										if (Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
										{
											Var0.f_87[Var80[iLocal_234 /*123*/].f_122]++;
										}
										if (Var80[iLocal_233 /*123*/].f_83.f_21 == 2 || Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
										{
											Var80[iLocal_233 /*123*/].f_115 = 1;
										}
										else
										{
											Var80[iLocal_233 /*123*/].f_115 = 0;
										}
										Var80[iLocal_233 /*123*/].f_2 = 3;
									}
									__LIB_1__.func_880("Current client is waiting for other client to finish throwing", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
									break;
								case 3:
									if (Var80[iLocal_234 /*123*/].f_1 >= 3)
									{
										func_1085(&(Var80[iLocal_233 /*123*/]), 21);
										if (!Var0[Var79.f_41 /*26*/].f_25)
										{
											Var0[Var79.f_41 /*26*/].f_25 = 1;
										}
										SYSTEM::SETTIMERA(0);
									}
									__LIB_1__.func_880("Waiting for other client to get to DARTS_MPTHROW_TURN_CHANGE", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
									break;
							}
							break;
						case 2:
							if (((Var79.f_19[iLocal_233] < 41 && Var79.f_19[iLocal_233] > 0) && (Var79.f_19[iLocal_233] % 2) == 0) || Var79.f_19[iLocal_233] == 50)
							{
								if (!bVar64)
								{
									bVar64 = true;
								}
								else
								{
									__LIB_1__.func_880("DARTS UIFLAG IS DARTS_UIFLAGS_IN_WIN_RANGE IS ALREADY SET", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
								}
							}
							if (Var79.f_19[iLocal_233] <= 170 && !__LIB_0__.func_492(&(Var7.f_666), 18))
							{
								__LIB_1__.func_881(&(Var7.f_666), 18, 1);
							}
							if (!__LIB_0__.func_492(&(Var7.f_666), 19) && __LIB_0__.func_492(&(Var7.f_666), 21))
							{
								__LIB_1__.func_881(&(Var7.f_666), 19, 1);
							}
							if (!__LIB_0__.func_492(&(Var7.f_666), 11))
							{
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								if (iLocal_233 == Var79.f_45)
								{
									if (__LIB_0__.func_492(&(Var79.f_48), 0))
									{
										__LIB_1__.func_841("DARTS_REMAIN", (Var79.f_24[iLocal_233] - Var79.f_19[iLocal_233]), Var79.f_19[iLocal_233], 20000, 0);
										if (Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
										{
											__LIB_1__.func_840(&Var7, 1);
											bVar70 = true;
										}
									}
									else if (__LIB_0__.func_492(&(Var79.f_48), 2))
									{
										__LIB_1__.func_839("DARTS_BUST_L", Var79.f_42, 5000, 0);
									}
									else if (__LIB_0__.func_492(&(Var79.f_48), 3))
									{
										__LIB_1__.func_839("DARTS_DOUBLE_L", Var80[iLocal_233 /*123*/].f_83.f_20, 5000, 0);
									}
									else if (__LIB_0__.func_492(&(Var79.f_48), 4))
									{
										__LIB_0__.func_210("DARTS_ONE_PT", 5000, 0);
									}
									else if (__LIB_0__.func_492(&(Var79.f_48), 1))
									{
										if (Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
										{
											__LIB_1__.func_840(&Var7, 1);
											bVar70 = true;
										}
										else if (Var79.f_42 == 180)
										{
											__LIB_1__.func_840(&Var7, 0);
											bVar70 = true;
										}
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
										{
											__LIB_1__.func_838("DARTS_SWITCH_L", sVar75[Var80[iLocal_234 /*123*/].f_122], Var79.f_19[iLocal_233], 5000, 0);
										}
										else
										{
											__LIB_1__.func_841("DARTS_REMAIN", (Var79.f_24[iLocal_233] - Var79.f_19[iLocal_233]), Var79.f_19[iLocal_233], 5000, 0);
										}
									}
								}
								else if (__LIB_0__.func_492(&(Var79.f_48), 0))
								{
									__LIB_1__.func_841("DARTS_REMAIN", (Var79.f_24[iLocal_234] - Var79.f_19[iLocal_234]), Var79.f_19[iLocal_234], 20000, 0);
								}
								else if (__LIB_0__.func_492(&(Var79.f_48), 2))
								{
									__LIB_1__.func_839("DARTS_BUST_L", Var79.f_42, 5000, 0);
								}
								else if (__LIB_0__.func_492(&(Var79.f_48), 3))
								{
									__LIB_1__.func_839("DARTS_DOUBLE_L", Var80[iLocal_233 /*123*/].f_83.f_20, 5000, 0);
								}
								else if (__LIB_0__.func_492(&(Var79.f_48), 4))
								{
									__LIB_0__.func_210("DARTS_ONE_PT", 5000, 0);
								}
								else if (__LIB_0__.func_492(&(Var79.f_48), 1))
								{
									__LIB_1__.func_838("DARTS_SWITCH_L", PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Var79.f_19[iLocal_234], 5000, 0);
								}
								__LIB_1__.func_881(&(Var7.f_666), 11, 1);
							}
							if (!Var80[iLocal_233 /*123*/].f_116 && ((__LIB_0__.func_492(&(Var79.f_48), 0) && SYSTEM::TIMERA() > 1000) || SYSTEM::TIMERA() > 2000))
							{
								Var80[iLocal_233 /*123*/].f_2 = 0;
								Var80[iLocal_233 /*123*/].f_1 = 0;
								Var0[Var79.f_41 /*26*/].f_25 = 0;
								func_716(&(Var80[iLocal_233 /*123*/]), 21);
								if (iLocal_233 == Var79.f_45)
								{
									if (Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
									{
										uLocal_222[1]++;
										iVar46 = SYSTEM::ROUND((10f * Global_262145.f_4310 /* Tunable: XP_TUNABLE_DARTS_BULLSEYE */));
										iVar44 = (iVar44 + func_533(1, "XPT_DARTS", joaat("XPTYPE_SKILL"), 2124178747, iVar46, 1, -1, 0));
									}
								}
								if (__LIB_0__.func_492(&(Var79.f_48), 1))
								{
									Var7.f_670 = 3;
									iVar98 = 0;
									while (iVar98 < 3)
									{
										__LIB_1__.func_852(&(Var0[iVar98 /*26*/]));
										Var0[iVar98 /*26*/].f_25 = 0;
										iVar98++;
									}
									if (Var79.f_24[Var79.f_45] != Var79.f_19[Var79.f_45])
									{
										__LIB_1__.func_888(&Var6, Var80[Var79.f_45 /*123*/].f_122, Var79.f_19[Var79.f_45]);
									}
									if (iLocal_233 == Var79.f_45)
									{
										if (Var79.f_42 == 180 && !func_1067(&(Var80[iLocal_233 /*123*/]), 16))
										{
											uLocal_222[2]++;
										}
									}
									else
									{
										bVar65 = false;
									}
									if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
									{
										__LIB_1__.func_887(&Var6, Var80[Var79.f_46 /*123*/].f_122);
									}
									iLocal_179 = 0;
								}
								Var80[iLocal_233 /*123*/].f_116 = 1;
							}
							break;
						case 3:
							HUD::CLEAR_PRINTS();
							if (!Global_2703735.f_3580.f_39)
							{
								Global_2703735.f_3580.f_39 = 1;
							}
							if (Var79.f_43 == iLocal_233)
							{
								Var0.f_94 = 1;
								Var0.f_90++;
								if (iLocal_233 == Var79.f_45)
								{
									if (Var80[iLocal_233 /*123*/].f_83.f_20 == 50)
									{
										uLocal_222[1]++;
										iVar46 = SYSTEM::ROUND((10f * Global_262145.f_4310 /* Tunable: XP_TUNABLE_DARTS_BULLSEYE */));
										iVar44 = (iVar44 + func_533(1, "XPT_DARTS", joaat("XPTYPE_SKILL"), 2124178747, iVar46, 1, -1, 0));
									}
								}
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									uLocal_222[8]++;
									iVar45 = (iVar45 + SYSTEM::ROUND((50f * Global_262145.f_4311 /* Tunable: XP_TUNABLE_DARTS_LEG_WON */)));
								}
								if (Var0.f_84[Var80[iLocal_233 /*123*/].f_122] <= 6)
								{
									__LIB_1__.func_602(7, 1, -1);
								}
							}
							else
							{
								Var0.f_94 = 0;
								Var0.f_91++;
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									uLocal_222[9]++;
								}
							}
							__LIB_6__.func_892(&iVar19);
							if (func_1000(&Var79, 23))
							{
								Var80[iLocal_233 /*123*/] = 17;
							}
							else
							{
								__LIB_31__.func_889(&Local_242, 1);
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									if (Var0.f_94)
									{
										if (Var79.f_39 < 5)
										{
											__LIB_13__.func_55(3, 2, 1);
										}
										else
										{
											__LIB_13__.func_55(3, 2, 2);
										}
										__LIB_5__.func_113(23, 1, -1);
										__LIB_7__.func_57(joaat("MPPLY_DARTS_TOTAL_WINS"), 1);
										uLocal_222[3]++;
										uLocal_222[6]++;
									}
									else
									{
										uLocal_222[5]++;
										uLocal_222[7]++;
									}
									__LIB_7__.func_57(joaat("MPPLY_DARTS_TOTAL_MATCHES"), 1);
								}
								Var7.f_668 = (Var7.f_668 + Var79.f_34[iLocal_233]);
								Var7.f_669 = (Var7.f_669 + Var79.f_34[iLocal_234]);
								StringCopy(&(Var7.f_648), sVar75[Var80[iLocal_233 /*123*/].f_122], 24);
								StringCopy(&(Var7.f_654), sVar75[Var80[iLocal_234 /*123*/].f_122], 24);
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									if (Var0.f_94)
									{
										iVar45 = (iVar45 + SYSTEM::ROUND((250f * Global_262145.f_4313 /* Tunable: XP_TUNABLE_DARTS_MATCH_WIN */)));
										iVar47 = __LIB_1__.func_888(PLAYER::PLAYER_ID());
									}
									else
									{
										iVar47 = __LIB_1__.func_888(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
									}
								}
								if (Var0.f_94)
								{
								}
								if (iVar47 > 0)
								{
								}
								iVar45 = (iVar45 + SYSTEM::ROUND((100f * Global_262145.f_4312 /* Tunable: XP_TUNABLE_DARTS_TAKING_PART */)));
								__LIB_2__.func_8(37);
								Var80[iLocal_233 /*123*/] = 18;
							}
							break;
					}
					break;
				case 17:
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
					{
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)), false);
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
					}
					switch (iVar40)
					{
						case 0:
							if (__LIB_7__.func_42(&iVar19) > 0.75f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								if (func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									func_1009(&Var6, 0, Var79.f_34[iLocal_233], 0, Var79.f_29[iLocal_233]);
								}
								else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
								{
									func_1009(&Var6, Var79.f_34[iLocal_234], Var79.f_34[iLocal_233], Var79.f_29[iLocal_234], Var79.f_29[iLocal_233]);
								}
								else
								{
									func_1009(&Var6, Var79.f_34[iLocal_233], Var79.f_34[iLocal_234], Var79.f_29[iLocal_233], Var79.f_29[iLocal_234]);
								}
								if (func_1000(&Var79, 24))
								{
									if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
									{
										if (Var0.f_94)
										{
											uLocal_222[6]++;
										}
										else
										{
											uLocal_222[7]++;
										}
									}
									if (Var0.f_94)
									{
										if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
										{
											__LIB_24__.func_969(&uLocal_1048, "DARTS_WINNER", "DARTS_SETW", 4000, 5, 1);
										}
										else
										{
											__LIB_24__.func_969(&uLocal_1048, "DARTS_WINP", "DARTS_SETW", 4000, 5, 1);
										}
									}
									else
									{
										__LIB_24__.func_969(&uLocal_1048, "BM_R2P_LOSS" /* GXT: LOSER */, "DARTS_SETL", 4000, 5, 6);
									}
								}
								else if (Var0.f_94)
								{
									if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
									{
										__LIB_24__.func_969(&uLocal_1048, "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 1);
									}
									else
									{
										__LIB_24__.func_969(&uLocal_1048, "DARTS_WINP", "DARTS_LEGW", 4000, 5, 1);
									}
								}
								else
								{
									__LIB_24__.func_969(&uLocal_1048, "BM_R2P_LOSS" /* GXT: LOSER */, "DARTS_LEGL", 4000, 5, 6);
								}
								if (Var0.f_94)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WIN", "HUD_AWARDS", true);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "HUD_AWARDS", true);
								}
								fVar100 = GRAPHICS::GET_ASPECT_RATIO(true);
								if (fVar100 > 2f)
								{
									Var36 = { 1992.2941f, 3047.577f, 46.21517f };
									Var37 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var36 = { 1992.3357f, 3047.9243f, 46.21517f };
									Var37 = { 0f, 0f, 136.74f };
								}
								iVar99 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
								iVar56 = PED::CREATE_SYNCHRONIZED_SCENE(Var36, Var37, 2);
								iLocal_1037 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1037, iVar56, sVar78[iVar99], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(iLocal_1037, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
									{
										if (Var0.f_94)
										{
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_233 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar76[iVar99], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_234 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar77[iVar99], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_PLAY_ANIM(iVar29[Var80[iLocal_233 /*123*/].f_122], sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
										}
										else
										{
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_234 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar76[iVar99], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_233 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar77[iVar99], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_PLAY_ANIM(iVar29[Var80[iLocal_233 /*123*/].f_122], sLocal_239, sLocal_240[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
										}
									}
								}
								else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar56, "mini@dartsoutro", sVar76[iVar99], 1000f, -1.5f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
								}
								iVar40++;
							}
							break;
						case 1:
							if (!__LIB_24__.func_984(&uLocal_1048, 1))
							{
								__LIB_7__.func_41(&uLocal_1048);
								iVar38 = 0;
								while (iVar38 < 2)
								{
									__LIB_1__.func_883(&Var6, iVar38);
									iVar38++;
								}
								iVar39 = 0;
								while (iVar39 < 3)
								{
									__LIB_1__.func_852(&(Var0[iVar39 /*26*/]));
									iVar39++;
								}
								iVar40++;
							}
							break;
						case 2:
							if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
							{
								if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
								{
									__LIB_1__.func_868();
									CAM::DESTROY_CAM(iLocal_1037, false);
									TASK::CLEAR_PED_TASKS(iVar29[0]);
									TASK::CLEAR_PED_TASKS(iVar29[1]);
								}
							}
							else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_1__.func_868();
								CAM::DESTROY_CAM(iLocal_1037, false);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							}
							Var80[iLocal_233 /*123*/].f_118 = 1;
							__LIB_1__.func_836();
							iVar40 = 0;
							Var80[iLocal_233 /*123*/] = 19;
							break;
					}
					break;
				case 18:
					__LIB_1__.func_880("Reached Client side GAME END", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)))
						{
							NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)), false);
						}
						NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
					}
					if (__LIB_7__.func_42(&iVar19) > 0.75f)
					{
						if (Var80[iLocal_234 /*123*/] >= 18 || func_1067(&(Var80[iLocal_233 /*123*/]), 16))
						{
							if (!Var0.f_95)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								fVar103 = GRAPHICS::GET_ASPECT_RATIO(true);
								if (fVar103 > 2f)
								{
									Var36 = { 1992.2941f, 3047.577f, 46.21517f };
									Var37 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var36 = { 1992.3357f, 3047.9243f, 46.21517f };
									Var37 = { 0f, 0f, 136.74f };
								}
								iVar102 = 2;
								iVar56 = PED::CREATE_SYNCHRONIZED_SCENE(Var36, Var37, 2);
								iLocal_1037 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1037, iVar56, sVar78[iVar102], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(iLocal_1037, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
								{
									if (!PED::IS_PED_INJURED(iVar29[0]) && !PED::IS_PED_INJURED(iVar29[1]))
									{
										if (Var0.f_94)
										{
											__LIB_0__.func_932();
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_233 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar76[iVar102], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_234 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar77[iVar102], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_PLAY_ANIM(iVar29[Var80[iLocal_233 /*123*/].f_122], sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
										}
										else
										{
											__LIB_0__.func_930();
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_234 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar76[iVar102], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iVar29[Var80[iLocal_233 /*123*/].f_122], iVar56, "mini@dartsoutro", sVar77[iVar102], 1000f, -1.5f, 0, 0, 1000f, 0);
											TASK::TASK_PLAY_ANIM(iVar29[Var80[iLocal_233 /*123*/].f_122], sLocal_239, sLocal_240[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
										}
									}
								}
								else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_0__.func_932();
									TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar56, "mini@dartsoutro", sVar76[iVar102], 1000f, -1.5f, 0, 0, 1000f, 0);
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_237, sLocal_238[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)], 1.5f, -1.5f, -1, 33, 0f, false, false, false);
								}
								Var0.f_95 = 1;
							}
							else if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar56) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar56) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar56))
							{
							}
						}
						if (iVar44 > 0)
						{
						}
						if (Var0.f_94)
						{
							iVar101 = 0;
							iVar25 = PLAYER::PLAYER_ID();
						}
						else
						{
							iVar101 = 1;
							iVar25 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234));
						}
						if (__LIB_7__.func_42(&iVar19) > 2.15f)
						{
							if (func_384(&Local_242, &iLocal_1034, "XPT_DARTS", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DARTS_WIN"), iVar45, iVar101, Global_1837285, &iVar24, iVar25, 1, 0, 0, 1, 0, 3))
							{
								if (!__LIB_0__.func_736(&iVar23))
								{
									__LIB_6__.func_892(&iVar23);
									if (Var0.f_94)
									{
										GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Win");
									}
									else
									{
										GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Lose");
									}
								}
								else if (__LIB_7__.func_78(&iVar23) > 0.1f)
								{
								}
								if (func_28(1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
								{
									if (Var0.f_92)
									{
										func_688(1, 0f, 0f, 0f, Var74);
										HUD::CLEAR_PRINTS();
										Var80[iLocal_233 /*123*/].f_119 = 1;
										Var80[iLocal_233 /*123*/] = 23;
									}
									else if (Var80[iLocal_234 /*123*/] >= 18 || func_1067(&(Var80[iLocal_233 /*123*/]), 16))
									{
										Var0.f_92 = 1;
									}
								}
							}
							if (Local_242.f_436 == 3 && __LIB_2__.func_47(&(Local_242.f_430), 416, 0))
							{
								if (!bVar71)
								{
									if (__LIB_0__.func_922() == 0)
									{
										__LIB_0__.func_921(1);
									}
									__LIB_18__.func_721(0, 0);
									bVar71 = true;
								}
							}
						}
					}
					break;
				case 19:
					__LIB_1__.func_880("CLIENT DARTS_MPSTATE_WAIT_POST_GAME", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if ((Var80[iLocal_233 /*123*/].f_118 && Var80[iLocal_234 /*123*/].f_118) || (Var80[iLocal_233 /*123*/].f_118 && func_1067(&(Var80[iLocal_233 /*123*/]), 16)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Var80[iLocal_233 /*123*/].f_3))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
						if (func_1067(&(Var80[iLocal_233 /*123*/]), 17))
						{
							sVar75[Var80[iLocal_233 /*123*/].f_122] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233)));
							Var17[Var80[iLocal_233 /*123*/].f_122 /*13*/] = { __LIB_0__.func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233))) };
							Var72[Var80[iLocal_233 /*123*/].f_122 /*2*/] = { __LIB_1__.func_885(&(Var17[Var80[iLocal_233 /*123*/].f_122 /*13*/])) };
							sVar75[Var80[iLocal_234 /*123*/].f_122] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
							Var17[Var80[iLocal_234 /*123*/].f_122 /*13*/] = { __LIB_0__.func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234))) };
							Var72[Var80[iLocal_234 /*123*/].f_122 /*2*/] = { __LIB_1__.func_885(&(Var17[Var80[iLocal_234 /*123*/].f_122 /*13*/])) };
							iVar28 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
							iVar104 = 0;
							iVar105 = 1;
							__LIB_1__.func_882(&Var6, sVar75[iVar104], sVar75[iVar105]);
							if (!__LIB_1__.func_884(&(Var72[iVar104 /*2*/])))
							{
								func_1014(&Var6, iVar104, &(Var72[iVar104 /*2*/]), 0);
							}
							if (!__LIB_1__.func_884(&(Var72[iVar105 /*2*/])))
							{
								func_1014(&Var6, iVar105, &(Var72[iVar105 /*2*/]), 0);
							}
							__LIB_1__.func_883(&Var6, iVar104);
							__LIB_1__.func_883(&Var6, iVar105);
							func_716(&(Var80[iLocal_233 /*123*/]), 16);
							func_716(&(Var80[iLocal_233 /*123*/]), 17);
						}
						HUD::CLEAR_HELP(true);
						__LIB_1__.func_3();
						if (Var79.f_0 == 6)
						{
							Var80[iLocal_233 /*123*/] = 13;
						}
					}
					if (Var80[iLocal_234 /*123*/].f_119)
					{
						__LIB_1__.func_836();
						HUD::CLEAR_PRINTS();
						__LIB_1__.func_3();
						Var80[iLocal_233 /*123*/] = 20;
					}
					break;
				case 20:
					__LIB_1__.func_880("Reached Client side TERMINATE SPLASH", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if (__LIB_0__.func_3() == 0)
					{
						if (__LIB_0__.func_649(&uVar18))
						{
							func_981();
							if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (!Global_2715699.f_2846.f_26)
							{
								__LIB_35__.func_531(0, 0, 0);
							}
							else if (__LIB_13__.func_80(1))
							{
								__LIB_0__.func_495(&uVar18, 0, 0);
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								__LIB_0__.func_518(0);
								if (Global_2703735.f_3580.f_39)
								{
									Global_2703735.f_3580.f_39 = 0;
								}
								Var80[iLocal_233 /*123*/] = 21;
								if (iVar4 == 1)
								{
									__LIB_24__.func_969(&uLocal_1038, "DARTS_WINNER", "DARTS_OPP_LFT", 15000, 0, 1);
									__LIB_0__.func_924(&(Var7.f_509), 0, 0, 0, 1);
									__LIB_0__.func_713(&(Var7.f_509), "CMRC_CONT" /* GXT: Continue */, 2, 201, 1, 1, 0);
									iVar5 = 0;
									func_688(1, 0f, 0f, 0f, Var74);
								}
								else
								{
									if (!func_1067(&(Var80[iLocal_231 /*123*/]), 16))
									{
										if (MISC::IS_STRING_NULL(sVar75[Var80[iLocal_234 /*123*/].f_122]))
										{
											__LIB_0__.func_210("DARTS_OPP_LFT", 7500, 0);
										}
										else
										{
											__LIB_1__.func_842("DARTS_PLYR_LFT", sVar75[Var80[iLocal_234 /*123*/].f_122], 7500, 0);
										}
									}
									iVar5 = 2;
								}
							}
						}
						else
						{
							__LIB_0__.func_580(&uVar18, 0, 0);
						}
					}
					else
					{
						__LIB_1__.func_842("DARTS_PLYR_LFT", sVar75[Var80[iLocal_234 /*123*/].f_122], 7500, 0);
						func_1097(&Var0, &Var7, 1, 0, 0);
					}
					break;
				case 23:
					if (__LIB_0__.func_3() == 0)
					{
						if (__LIB_0__.func_649(&uVar18))
						{
							func_981();
							__LIB_1__.func_3();
							if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (func_28(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
							{
								__LIB_0__.func_495(&uVar18, 0, 0);
								__LIB_0__.func_518(0);
								if (Global_2703735.f_3580.f_39)
								{
									Global_2703735.f_3580.f_39 = 0;
								}
								Var80[iLocal_233 /*123*/] = 21;
								iVar5 = 2;
							}
						}
						else
						{
							__LIB_0__.func_580(&uVar18, 0, 0);
						}
					}
					else
					{
						func_1097(&Var0, &Var7, 1, 0, 1);
					}
					break;
				case 21:
					switch (iVar5)
					{
						case 0:
							if (!__LIB_24__.func_984(&uLocal_1038, 1) || __LIB_2__.func_47(&uVar18, 15000, 0))
							{
								__LIB_1__.func_3();
								iVar46 = SYSTEM::ROUND((100f * Global_262145.f_4312 /* Tunable: XP_TUNABLE_DARTS_TAKING_PART */));
								iVar45 = (iVar45 + func_533(1, "XPT_DARTS", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DARTS_WIN"), iVar46, 1, -1, 0));
								Var7.f_668++;
								iVar5 = 1;
							}
							else if (!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
							{
								__LIB_7__.func_44(&(Var7.f_509), 1128792064, 1, 0, 1, 1065353216);
							}
							break;
						case 1:
							if (func_28(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
							{
								iVar5 = 2;
							}
							break;
						case 2:
							func_827(14, Var79.f_50, ScriptParam_1058.f_1, __LIB_0__.func_138(Var0.f_94, 1, 0), __LIB_0__.func_138(Var0.f_94, 1, 2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
							__LIB_0__.func_518(0);
							func_1097(&Var0, &Var7, 1, 0, 0);
							break;
					}
					break;
				}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (Var79.f_0)
			{
				case 4:
					if (iLocal_241 >= 2)
					{
						if (func_1073(&Var80, &iLocal_230) == 2)
						{
							iLocal_231 = NETWORK::PARTICIPANT_ID_TO_INT();
							Var79.f_0 = 11;
						}
					}
					else if (func_1067(&(Var80[iLocal_233 /*123*/]), 16))
					{
						iLocal_231 = NETWORK::PARTICIPANT_ID_TO_INT();
						Var79.f_0 = 6;
					}
					break;
				case 11:
					__LIB_1__.func_880("Reached Server side THROW_OFF_SETUP", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if (BitTest(Var80[iLocal_234 /*123*/].f_120, 15) && BitTest(Var80[iLocal_233 /*123*/].f_120, 15))
					{
						func_17(&Var79);
						Var79.f_0 = 12;
					}
					break;
				case 12:
					func_15(&Var79, &Var80, &(Var0[Var79.f_41 /*26*/]));
					break;
				case 6:
					__LIB_1__.func_880("Reached Server side SETUP", &uVar41, 0, 0, 0, 0, 0, 0, 1000);
					if ((BitTest(Var80[iLocal_234 /*123*/].f_120, 1) && BitTest(Var80[iLocal_233 /*123*/].f_120, 1)) || (BitTest(Var80[iLocal_233 /*123*/].f_120, 1) && BitTest(Var80[iLocal_233 /*123*/].f_120, 16)))
					{
						func_14(&Var79, func_1067(&(Var80[iLocal_233 /*123*/]), 16), iLocal_233);
						__LIB_18__.func_301(PLAYER::PLAYER_ID(), 0, 0);
						if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
						{
							iVar26 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_233));
							__LIB_24__.func_971(iVar26, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)), Var79.f_19[iLocal_230], Var79.f_19[iLocal_231], PLAYER::GET_PLAYER_TEAM(iVar26), 1, 0);
						}
						Var79.f_0 = 16;
					}
					break;
				case 16:
					if (!func_1067(&(Var80[iLocal_233 /*123*/]), 16))
					{
						if ((MISC::GET_GAME_TIMER() % 5000) < 50)
						{
						}
						func_9(&Var79, &Var80, &(Var0[Var79.f_41 /*26*/]));
					}
					else
					{
						func_1(&Var79, &Var80, &(Var0[Var79.f_41 /*26*/]));
					}
					break;
				}
		}
	}
}

void func_1(int iParam0, int* iParam1, var uParam2)//Position - 0x603A
{
	int iVar0;
	if ((*iParam1)[iLocal_231 /*123*/] == 16)
	{
		if ((iParam1[iLocal_231 /*123*/])->f_1 == 0)
		{
			__LIB_24__.func_970(&(iParam0->f_6));
		}
		if (iParam0->f_1[iLocal_231] == 0 && !iParam0->f_57)
		{
			if (func_1067(iParam1[iLocal_231 /*123*/], 9) && (iParam1[iLocal_231 /*123*/])->f_1 == 1)
			{
				iParam0->f_6.f_10 = 1;
			}
			if (__LIB_1__.func_830(uParam2))
			{
				__LIB_1__.func_881(&(iParam0->f_48), 1, 0);
				iParam0->f_45 = iLocal_231;
				iParam0->f_42 = (iParam0->f_42 + uParam2->f_20);
				iVar0 = (iParam0->f_19[iParam0->f_45] - uParam2->f_20);
				if ((iParam1[iLocal_231 /*123*/])->f_115)
				{
				}
				if (iVar0 == 0 && (uParam2->f_21 == 2 || uParam2->f_20 == 50))
				{
					iParam0->f_19[iParam0->f_45] = iVar0;
					iParam0->f_62 = 1;
				}
				else if ((iVar0 == 1 || iVar0 < 0) || (iVar0 == 0 && (iParam1[iParam0->f_45 /*123*/])->f_115 == 0))
				{
					iParam0->f_19[iParam0->f_45] = iParam0->f_24[iParam0->f_45];
					__LIB_1__.func_881(&(iParam0->f_48), 1, 1);
					if (iVar0 < 0)
					{
						__LIB_1__.func_881(&(iParam0->f_48), 2, 1);
					}
					else if (iVar0 == 1)
					{
						__LIB_1__.func_881(&(iParam0->f_48), 4, 1);
					}
					else if (iVar0 == 0 && (iParam1[iParam0->f_45 /*123*/])->f_115 == 0)
					{
						__LIB_1__.func_881(&(iParam0->f_48), 3, 1);
					}
				}
				else
				{
					iParam0->f_41++;
					iParam0->f_19[iParam0->f_45] = iVar0;
					if (iParam0->f_41 >= 3)
					{
						iParam0->f_41 = (iParam0->f_41 - 1);
						__LIB_1__.func_881(&(iParam0->f_48), 1, 1);
					}
					else
					{
						__LIB_1__.func_881(&(iParam0->f_48), 0, 1);
					}
				}
				iParam0->f_57 = 1;
				iParam0->f_1[iLocal_231] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_231] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (iParam0->f_62)
			{
				iParam0->f_43 = iLocal_231;
				iParam0->f_29[iParam0->f_43]++;
				if (__LIB_1__.func_830(iParam0))
				{
					func_4(iParam0, 23);
				}
				else
				{
					func_3(iParam0, 23);
				}
				iParam0->f_1[iLocal_231] = 3;
				iParam0->f_57 = 0;
				*iParam0 = 6;
			}
			if (__LIB_0__.func_492(&(iParam0->f_48), 0))
			{
				__LIB_1__.func_880("[MP DARTS] Server is continuing turn", &uLocal_232, 0, 0, 0, 0, 0, 0, 1000);
				if ((iParam1[iLocal_231 /*123*/])->f_116)
				{
					iParam0->f_1[iParam0->f_45] = 0;
					iParam0->f_57 = 0;
					__LIB_1__.func_881(&(iParam0->f_48), 0, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (__LIB_0__.func_492(&(iParam0->f_48), 1))
			{
				if ((iParam1[iLocal_231 /*123*/])->f_116)
				{
					iParam0->f_24[iLocal_231] = iParam0->f_19[iLocal_231];
					iParam0->f_42 = 0;
					iParam0->f_1[iLocal_231] = 0;
					iParam0->f_41 = 0;
					iParam0->f_57 = 0;
					__LIB_1__.func_881(&(iParam0->f_48), 3, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 4, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
		}
		else if (iParam0->f_1[iLocal_231] == 3)
		{
			if ((iParam1[iLocal_231 /*123*/])->f_118)
			{
				*iParam0 = 6;
			}
		}
	}
	if ((*iParam1)[iLocal_231 /*123*/] == 19)
	{
		func_3(iParam0, 21);
		func_4(iParam0, 20);
		func_4(iParam0, 10);
		func_4(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_2(var uParam0)//Position - 0x6374
{
	uParam0->f_19[iLocal_230] = 301;
	uParam0->f_19[iLocal_231] = 301;
}

void func_3(var uParam0, int iParam1)//Position - 0x6394
{
	MISC::SET_BIT(&(uParam0->f_47), iParam1);
}

void func_4(var uParam0, int iParam1)//Position - 0x63A6
{
	MISC::CLEAR_BIT(&(uParam0->f_47), iParam1);
}

int func_6(var uParam0)//Position - 0x6433
{
	switch (uParam0->f_39)
	{
		case 1:
			return 1;
		case 3:
			return 2;
		case 5:
			return 3;
		default:
	}
	return 1;
}

void func_9(int iParam0, int* iParam1, var uParam2)//Position - 0x64D6
{
	int iVar0;
	if ((*iParam1)[iLocal_230 /*123*/] == 16 && (*iParam1)[iLocal_231 /*123*/] == 16)
	{
		if (((iParam1[iLocal_230 /*123*/])->f_1 == 0 || (iParam1[iLocal_230 /*123*/])->f_2 == 0) && ((iParam1[iLocal_231 /*123*/])->f_1 == 0 || (iParam1[iLocal_231 /*123*/])->f_2 == 0))
		{
			__LIB_24__.func_970(&(iParam0->f_6));
		}
		if ((iParam0->f_1[iLocal_230] == 0 || iParam0->f_1[iLocal_231] == 0) && !iParam0->f_57)
		{
			if (((func_1067(iParam1[iLocal_230 /*123*/], 9) || func_1067(iParam1[iLocal_231 /*123*/], 9)) && ((iParam1[iLocal_230 /*123*/])->f_1 == 1 || (iParam1[iLocal_230 /*123*/])->f_2 == 1)) && ((iParam1[iLocal_231 /*123*/])->f_1 == 1 || (iParam1[iLocal_231 /*123*/])->f_2 == 1))
			{
				iParam0->f_6.f_10 = 1;
			}
			if ((__LIB_1__.func_830(uParam2) && func_1067(iParam1[iLocal_231 /*123*/], 21)) && func_1067(iParam1[iLocal_230 /*123*/], 21))
			{
				__LIB_1__.func_881(&(iParam0->f_48), 1, 0);
				if (iParam0->f_1[iLocal_231] == 0)
				{
					iParam0->f_45 = iLocal_231;
					iParam0->f_46 = iLocal_230;
				}
				else
				{
					iParam0->f_45 = iLocal_230;
					iParam0->f_46 = iLocal_231;
				}
				iParam0->f_42 = (iParam0->f_42 + uParam2->f_20);
				iVar0 = (iParam0->f_19[iParam0->f_45] - uParam2->f_20);
				if ((iParam1[iLocal_231 /*123*/])->f_115)
				{
				}
				if ((iParam1[iLocal_230 /*123*/])->f_115)
				{
				}
				if (iVar0 == 0 && (uParam2->f_21 == 2 || uParam2->f_20 == 50))
				{
					iParam0->f_19[iParam0->f_45] = iVar0;
					iParam0->f_62 = 1;
				}
				else if ((iVar0 == 1 || iVar0 < 0) || (iVar0 == 0 && (iParam1[iParam0->f_45 /*123*/])->f_115 == 0))
				{
					iParam0->f_19[iParam0->f_45] = iParam0->f_24[iParam0->f_45];
					__LIB_1__.func_881(&(iParam0->f_48), 1, 1);
					if (iVar0 < 0)
					{
						__LIB_1__.func_881(&(iParam0->f_48), 2, 1);
					}
					else if (iVar0 == 1)
					{
						__LIB_1__.func_881(&(iParam0->f_48), 4, 1);
					}
					else if (iVar0 == 0 && (iParam1[iParam0->f_45 /*123*/])->f_115 == 0)
					{
						__LIB_1__.func_881(&(iParam0->f_48), 3, 1);
					}
				}
				else
				{
					iParam0->f_41++;
					iParam0->f_19[iParam0->f_45] = iVar0;
					if (iParam0->f_41 >= 3)
					{
						iParam0->f_41 = (iParam0->f_41 - 1);
						__LIB_1__.func_881(&(iParam0->f_48), 1, 1);
					}
					else
					{
						__LIB_1__.func_881(&(iParam0->f_48), 0, 1);
					}
				}
				iParam0->f_57 = 1;
				iParam0->f_1[iLocal_230] = 2;
				iParam0->f_1[iLocal_231] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_230] == 2 || iParam0->f_1[iLocal_231] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (iParam0->f_62)
			{
				if (iParam0->f_45 == iLocal_231)
				{
					iParam0->f_43 = iLocal_231;
				}
				else
				{
					iParam0->f_43 = iLocal_230;
				}
				iParam0->f_29[iParam0->f_43]++;
				if (__LIB_1__.func_830(iParam0))
				{
					func_4(iParam0, 23);
				}
				else
				{
					func_3(iParam0, 23);
				}
				iParam0->f_1[iLocal_231] = 3;
				iParam0->f_1[iLocal_230] = 3;
				iParam0->f_57 = 0;
				*iParam0 = 6;
			}
			if (__LIB_0__.func_492(&(iParam0->f_48), 0))
			{
				__LIB_1__.func_880("[MP DARTS] Server is continuing turn", &uLocal_232, 0, 0, 0, 0, 0, 0, 1000);
				if ((iParam1[iLocal_231 /*123*/])->f_116 && (iParam1[iLocal_230 /*123*/])->f_116)
				{
					iParam0->f_1[iParam0->f_45] = 0;
					iParam0->f_1[iParam0->f_46] = 1;
					iParam0->f_57 = 0;
					__LIB_1__.func_881(&(iParam0->f_48), 0, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (__LIB_0__.func_492(&(iParam0->f_48), 1))
			{
				if ((iParam1[iLocal_231 /*123*/])->f_116 && (iParam1[iLocal_230 /*123*/])->f_116)
				{
					iParam0->f_24[iLocal_231] = iParam0->f_19[iLocal_231];
					iParam0->f_24[iLocal_230] = iParam0->f_19[iLocal_230];
					iParam0->f_42 = 0;
					if (iParam0->f_45 == iLocal_231)
					{
						iParam0->f_1[iLocal_231] = 1;
						iParam0->f_1[iLocal_230] = 0;
					}
					else
					{
						iParam0->f_1[iLocal_231] = 0;
						iParam0->f_1[iLocal_230] = 1;
					}
					iParam0->f_41 = 0;
					iParam0->f_57 = 0;
					__LIB_1__.func_881(&(iParam0->f_48), 3, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 4, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
		}
		else if (iParam0->f_1[iLocal_230] == 3 || iParam0->f_1[iLocal_231] == 3)
		{
			if ((iParam1[iLocal_230 /*123*/])->f_118 && (iParam1[iLocal_231 /*123*/])->f_118)
			{
				*iParam0 = 6;
			}
		}
	}
	if ((*iParam1)[iLocal_230 /*123*/] == 19 && (*iParam1)[iLocal_231 /*123*/] == 19)
	{
		func_3(iParam0, 21);
		func_4(iParam0, 20);
		func_4(iParam0, 10);
		func_4(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_14(int iParam0, bool bParam1, int iParam2)//Position - 0x6B60
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_19[iVar0] = 301;
		iParam0->f_24[iVar0] = 301;
		iVar0++;
	}
	if (!func_1000(iParam0, 23))
	{
		iParam0->f_29[iLocal_231] = 0;
		iParam0->f_29[iLocal_230] = 0;
		iParam0->f_34[iLocal_231] = 0;
		iParam0->f_34[iLocal_230] = 0;
	}
	iVar1 = Global_4718592.f_116945;
	iVar2 = Global_4718592.f_116946;
	switch (iVar1)
	{
		case 0:
			iParam0->f_39 = 1;
			break;
		case 1:
			iParam0->f_39 = 3;
			break;
		case 2:
			iParam0->f_39 = 5;
			break;
	}
	switch (iVar2)
	{
		case 0:
			iParam0->f_40 = 1;
			break;
		case 1:
			iParam0->f_40 = 3;
			break;
		case 2:
			iParam0->f_40 = 6;
			break;
		case 3:
			iParam0->f_40 = 9;
			break;
		case 4:
			iParam0->f_40 = 11;
			break;
		case 5:
			iParam0->f_40 = 13;
			break;
		case 6:
			iParam0->f_40 = 15;
			break;
	}
	if (bParam1)
	{
		iParam0->f_1[iParam2] = 0;
	}
	else
	{
		if (!iParam0->f_62)
		{
			iParam0->f_44 = iParam0->f_43;
		}
		else
		{
			iParam0->f_44 = (1 - iParam0->f_44);
		}
		if (iParam0->f_44 == 0)
		{
			iParam0->f_1[iLocal_230] = 0;
			iParam0->f_1[iLocal_231] = 1;
		}
		else
		{
			iParam0->f_1[iLocal_231] = 0;
			iParam0->f_1[iLocal_230] = 1;
		}
	}
	iParam0->f_41 = 0;
	iParam0->f_42 = 0;
	iParam0->f_48 = 0;
	iParam0->f_62 = 0;
	iParam0->f_58 = 0;
	iParam0->f_59 = 0;
	iParam0->f_60 = 0;
	iParam0->f_61 = 0;
	iParam0->f_6.f_10 = 1;
	__LIB_7__.func_65(&(iParam0->f_6));
}

void func_15(int iParam0, int* iParam1, var uParam2)//Position - 0x6D12
{
	if ((*iParam1)[iLocal_230 /*123*/] == 12 && (*iParam1)[iLocal_231 /*123*/] == 12)
	{
		if (((iParam1[iLocal_230 /*123*/])->f_1 == 0 || (iParam1[iLocal_230 /*123*/])->f_2 == 0) && ((iParam1[iLocal_231 /*123*/])->f_1 == 0 || (iParam1[iLocal_231 /*123*/])->f_2 == 0))
		{
			__LIB_24__.func_972(&(iParam0->f_6));
		}
		if ((iParam0->f_1[iLocal_230] == 0 || iParam0->f_1[iLocal_231] == 0) && !iParam0->f_57)
		{
			if ((__LIB_1__.func_830(uParam2) && func_1067(iParam1[iLocal_231 /*123*/], 21)) && func_1067(iParam1[iLocal_230 /*123*/], 21))
			{
				if (iParam0->f_1[iLocal_231] == 0)
				{
					iParam0->f_45 = iLocal_231;
					iParam0->f_46 = iLocal_230;
				}
				else
				{
					iParam0->f_45 = iLocal_230;
					iParam0->f_46 = iLocal_231;
				}
				iParam0->f_51[iParam0->f_45] = uParam2->f_22;
				if (iParam0->f_45 == iLocal_231)
				{
					__LIB_1__.func_881(&(iParam0->f_48), 1, 1);
				}
				else
				{
					iParam0->f_62 = 1;
				}
				iParam0->f_57 = 1;
				iParam0->f_1[iLocal_230] = 2;
				iParam0->f_1[iLocal_231] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_230] == 2 || iParam0->f_1[iLocal_231] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (__LIB_0__.func_492(&(iParam0->f_48), 1))
			{
				if ((iParam1[iLocal_231 /*123*/])->f_116 && (iParam1[iLocal_230 /*123*/])->f_116)
				{
					iParam0->f_24[iLocal_231] = iParam0->f_19[iLocal_231];
					iParam0->f_24[iLocal_230] = iParam0->f_19[iLocal_230];
					iParam0->f_42 = 0;
					if (iParam0->f_45 == iLocal_231)
					{
						iParam0->f_1[iLocal_231] = 1;
						iParam0->f_1[iLocal_230] = 0;
					}
					else
					{
						iParam0->f_1[iLocal_231] = 0;
						iParam0->f_1[iLocal_230] = 1;
					}
					iParam0->f_41++;
					iParam0->f_57 = 0;
					__LIB_1__.func_881(&(iParam0->f_48), 1, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 3, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 4, 0);
					__LIB_1__.func_881(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (iParam0->f_62)
			{
				if ((iParam1[iLocal_231 /*123*/])->f_116 && (iParam1[iLocal_230 /*123*/])->f_116)
				{
					if (iParam0->f_51[iLocal_231] < iParam0->f_51[iLocal_230])
					{
						iParam0->f_43 = 1;
					}
					else
					{
						iParam0->f_43 = 0;
					}
					iParam0->f_1[iLocal_230] = 3;
					iParam0->f_1[iLocal_231] = 3;
					iParam0->f_57 = 0;
					iParam0->f_62 = 0;
					*iParam0 = 6;
				}
			}
		}
	}
	if ((*iParam1)[iLocal_230 /*123*/] == 19 && (*iParam1)[iLocal_231 /*123*/] == 19)
	{
		func_3(iParam0, 21);
		func_4(iParam0, 20);
		func_4(iParam0, 10);
		func_4(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_17(int iParam0)//Position - 0x7039
{
	iParam0->f_44 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
	iParam0->f_44 = (iParam0->f_44 % 2);
	iParam0->f_1[iLocal_230] = 0;
	iParam0->f_1[iLocal_231] = 1;
	iParam0->f_1[iLocal_231] = 0;
	iParam0->f_1[iLocal_230] = 1;
	func_3(iParam0, 22);
	iParam0->f_6.f_10 = 1;
	__LIB_7__.func_65(&(iParam0->f_6));
}

int func_28(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x7220
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_1__.func_598() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__.func_496() == 63)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		func_87();
		__LIB_33__.func_239(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_0__.func_921(0);
			__LIB_7__.func_6(0);
		}
		return 0;
	}
	if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__.func_81())
		{
			if (__LIB_0__.func_496() == 58)
			{
				__LIB_1__.func_594(1);
			}
			if (__LIB_1__.func_593())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__.func_491() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__.func_708(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_33__.func_239(1, 0);
		if (bParam10)
		{
			__LIB_0__.func_921(0);
			__LIB_7__.func_6(0);
		}
		return 0;
	}
	__LIB_8__.func_626();
	__LIB_6__.func_298();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_1__.func_592())
		{
			__LIB_1__.func_591();
		}
	}
	if (!__LIB_2__.func_283())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
		{
			if (bParam1)
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
		}
		if (Global_1585311)
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
		}
		if (HUD::IS_ONLINE_POLICIES_MENU_ACTIVE() == 0)
		{
			if (HUD::GET_PAUSE_MENU_STATE() == 25)
			{
				HUD::CLOSE_SOCIAL_CLUB_MENU();
			}
		}
		if ((__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0) && __LIB_0__.func_3() == 0) && !__LIB_0__.func_394(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__.func_217())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_7__.func_8(-1046478848)) || __LIB_4__.func_977())
			{
				if (__LIB_24__.func_965(0))
				{
					bParam12 = true;
					if (__LIB_1__.func_590() > 800 || (__LIB_33__.func_238() && !__LIB_7__.func_7()))
					{
						if (__LIB_4__.func_715() && !__LIB_0__.func_706())
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (!CAM::IS_SCREEN_FADING_OUT())
								{
									CAM::DO_SCREEN_FADE_OUT(800);
								}
							}
						}
					}
					__LIB_0__.func_705();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_7__.func_6(1);
			bParam2 = false;
		}
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			bParam4 = true;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			bParam4 = true;
		}
		if (bParam2 && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_16__.func_621(1, 0, 1);
		}
		if (((__LIB_4__.func_715() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_6__.func_297())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
					STREAMING::END_SRL();
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			HUD::CLEAR_PRINTS();
			iVar2 = 0;
			if (bParam4)
			{
				iVar2 = 1;
			}
			Var3 = { iParam5, iParam6, iParam7 };
			if (iParam3 == 3)
			{
				if (__LIB_0__.func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (__LIB_0__.func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			GRAPHICS::DONT_RENDER_IN_GAME_UI(true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (bParam12)
			{
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
			}
			__LIB_1__.func_589();
			__LIB_1__.func_210();
			if (__LIB_0__.func_791())
			{
				if (__LIB_1__.func_588())
				{
					iVar2 = 1;
					iVar2 += 32;
					iVar2 += 16384;
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577841, iVar2, __LIB_0__.func_109());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || __LIB_1__.func_217())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__.func_217())
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2725371, "", 32);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					StringCopy(&Global_2725371, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			__LIB_0__.func_708(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_16__.func_621(1, 0, 1);
			}
		}
		if (__LIB_0__.func_491() == 1)
		{
			if (__LIB_0__.func_791())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__.func_214();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_16__.func_621(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__.func_493())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__.func_708(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_7__.func_311();
						__LIB_16__.func_621(0, 0, 1);
						if (((__LIB_1__.func_241() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						__LIB_7__.func_311();
					}
					__LIB_16__.func_621(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_7__.func_311())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_7__.func_311();
						}
						__LIB_16__.func_621(0, 0, 1);
					}
					__LIB_0__.func_708(2);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_87()//Position - 0x8D65
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
	{
		if (__LIB_6__.func_945(PLAYER::PLAYER_ID()))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_579 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
			iVar0 = 2600;
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), false);
			GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar2 = -1;
			Var1[0] = __LIB_0__.func_228(387, iVar2);
			Var1[1] = __LIB_0__.func_228(388, iVar2);
			Var1[2] = __LIB_0__.func_228(389, iVar2);
			Var1[3] = __LIB_0__.func_228(390, iVar2);
			Var1[4] = __LIB_0__.func_228(391, iVar2);
			Var1[5] = __LIB_0__.func_228(392, iVar2);
			Var1[6] = __LIB_0__.func_228(393, iVar2);
			Var1[7] = __LIB_0__.func_228(394, iVar2);
			Var1[8] = __LIB_0__.func_228(395, iVar2);
			Var1[9] = __LIB_0__.func_228(396, iVar2);
			Var1[10] = __LIB_0__.func_228(397, iVar2);
			Var1[11] = __LIB_0__.func_228(398, iVar2);
			Var1.f_13[0] = __LIB_0__.func_228(399, iVar2);
			Var1.f_13[1] = (__LIB_0__.func_228(400, iVar2) + __LIB_0__.func_228(18092, iVar2));
			Var1.f_13[2] = __LIB_0__.func_228(401, iVar2);
			Var1.f_13[3] = (__LIB_0__.func_228(402, iVar2) + __LIB_0__.func_228(18093, iVar2));
			Var1.f_13[4] = __LIB_0__.func_228(403, iVar2);
			Var1.f_13[5] = __LIB_0__.func_228(404, iVar2);
			Var1.f_13[6] = __LIB_0__.func_228(405, iVar2);
			Var1.f_13[7] = __LIB_0__.func_228(406, iVar2);
			Var1.f_13[8] = (__LIB_0__.func_228(407, iVar2) + __LIB_0__.func_228(18094, iVar2));
			Var1.f_13[9] = __LIB_0__.func_228(408, iVar2);
			Var1.f_13[10] = __LIB_0__.func_228(409, iVar2);
			Var1.f_13[11] = (__LIB_0__.func_228(410, iVar2) + __LIB_0__.func_228(18095, iVar2));
			Var1.f_26[0] = __LIB_0__.func_228(411, iVar2);
			Var1.f_26[1] = __LIB_0__.func_228(412, iVar2);
			Var1.f_26[2] = __LIB_0__.func_228(413, iVar2);
			Var1.f_26[3] = __LIB_0__.func_228(414, iVar2);
			Var1.f_26[4] = __LIB_0__.func_228(415, iVar2);
			Var1.f_26[5] = __LIB_0__.func_228(416, iVar2);
			Var1.f_26[6] = __LIB_0__.func_228(417, iVar2);
			Var1.f_26[7] = __LIB_0__.func_228(418, iVar2);
			Var1.f_26[8] = __LIB_0__.func_228(419, iVar2);
			Var1.f_26[9] = __LIB_0__.func_228(420, iVar2);
			Var1.f_26[10] = __LIB_0__.func_228(421, iVar2);
			Var1.f_26[11] = __LIB_0__.func_228(422, iVar2);
			Var1.f_39[0] = __LIB_0__.func_228(423, iVar2);
			Var1.f_39[1] = __LIB_0__.func_228(424, iVar2);
			Var1.f_39[2] = __LIB_0__.func_228(425, iVar2);
			Var1.f_39[3] = __LIB_0__.func_228(426, iVar2);
			Var1.f_39[4] = __LIB_0__.func_228(427, iVar2);
			Var1.f_39[5] = __LIB_0__.func_228(428, iVar2);
			Var1.f_39[6] = __LIB_0__.func_228(429, iVar2);
			Var1.f_39[7] = __LIB_0__.func_228(430, iVar2);
			Var1.f_39[8] = __LIB_0__.func_228(431, iVar2);
			Var1.f_49[0] = __LIB_0__.func_228(432, iVar2);
			Var1.f_49[1] = __LIB_0__.func_228(433, iVar2);
			Var1.f_49[2] = __LIB_0__.func_228(434, iVar2);
			Var1.f_49[3] = __LIB_0__.func_228(435, iVar2);
			Var1.f_49[4] = __LIB_0__.func_228(436, iVar2);
			Var1.f_49[5] = __LIB_0__.func_228(437, iVar2);
			Var1.f_49[6] = __LIB_0__.func_228(438, iVar2);
			Var1.f_49[7] = __LIB_0__.func_228(439, iVar2);
			Var1.f_49[8] = __LIB_0__.func_228(440, iVar2);
			if (__LIB_1__.func_563(161, -1))
			{
				Var1.f_59 = __LIB_1__.func_556(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__.func_556(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__.func_556(754, iVar2, 0);
			Var1.f_61 = __LIB_1__.func_556(755, iVar2, 0);
			func_88(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_88(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x923F
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
		iVar0 = __LIB_18__.func_168(iParam0);
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
		if (__LIB_0__.func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_373(iParam0, iVar1, &iVar2, 0))
			{
				func_358(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_299(iParam0, iVar1, &iVar2))
			{
				func_358(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_296(iParam0);
			__LIB_1__.func_597(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__.func_597(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_7__.func_242(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_97(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_97(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_97(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_7__.func_242(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_1__.func_597(753, iVar9, Global_78127, 1, 0);
			__LIB_1__.func_597(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_905(161, 1, -1, 1);
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

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x9F6E
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
		Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_242(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { func_248(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_242(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { func_248(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { func_248(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_242(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_97(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_242(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_248(iVar5, iVar0, func_232(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_97(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_231();
			if (iVar17 != -1)
			{
				func_228(iVar17, 0, iParam10);
			}
			func_226(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_248(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_242(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_224(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_97(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_242(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_97(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_217(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_224(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_97(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_224(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_97(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_214(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_224(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_97(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = func_209(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_97(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_97(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_248(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_97(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { func_248(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { func_248(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = func_209(iParam0, iParam2);
							Global_78130[1 /*14*/] = { func_248(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_248(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_248(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_248(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_97(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { func_248(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_97(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_97(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_202(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_226(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_214(iVar5, func_232(iParam0, 8, -1), iParam2, func_232(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__.func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__.func_556(2160, iParam10, 0);
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
						iVar42 = __LIB_7__.func_242(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_149(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_214(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_224(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_226(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				func_202(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_214(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__.func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__.func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__.func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__.func_97(135, iParam10);
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
				__LIB_25__.func_44(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_97(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_97(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_248(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_214(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_214(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_224(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_224(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_97(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_214(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_224(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_97(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_121(iParam0, 9, iVar63))
						{
							func_97(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_97(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_97(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__.func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_97(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_232(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_232(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_97(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_97(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_97(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_97(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_97(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_97(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_97(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_97(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_97(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_97(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_217(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_224(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_97(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_224(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_97(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_98(iParam0, &uVar4))
		{
			func_97(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_97(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_97(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_97(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_232(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_97(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_98(int iParam0, var uParam1)//Position - 0xBE18
{
	int iVar0;
	int iVar1;
	*uParam1 = func_232(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__.func_556(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__.func_556(754, Global_78127, 0) == 0 && __LIB_1__.func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__.func_563(161, Global_78127))
			{
				if (__LIB_1__.func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__.func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__.func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__.func_556(755, Global_78127, 0);
		if (!func_121(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__.func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__.func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__.func_556(753, Global_78127, 0);
			}
			__LIB_1__.func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__.func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x1014A
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
	Global_78130[1 /*14*/] = { func_248(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_121(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_121(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_248(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_121(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { func_248(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_1__.func_556(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_121(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_121(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_121(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_149(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x17EAA
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_201(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		func_228(iVar1, 1, iParam2);
	}
	func_150(iParam0, bParam3, 0, -1);
}

void func_150(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x17EF7
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_194(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_185(iParam0, iParam3);
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
			if (__LIB_7__.func_109(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_172(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_7__.func_109(123, iVar0))
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
					if (__LIB_7__.func_109(iVar10, iVar0))
					{
						if (func_172(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_901(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x21815
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = __LIB_0__.func_242(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(__LIB_0__.func_241(iVar1));
	}
	if (iParam3 == joaat("mpDummy"))
	{
		return 0;
	}
	switch (iParam4)
	{
		case joaat("CHEST_FULL"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_MID"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("SIDE_RIGHT"):
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case -1238079313:
		case joaat("STOMACH_FULL"):
		case joaat("STOMACH_LEFT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("STOMACH_MID"):
		case joaat("STOMACH_RIGHT"):
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == joaat("CHEST_FULL") || (iParam4 == joaat("CHEST_MID") && iVar0 == joaat("MP_F_Freemode_01"))) || iParam4 == joaat("CHEST_RIGHT")) || iParam4 == joaat("CHEST_STOM")) || iParam4 == joaat("CHEST_STOM_FULL"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_7__.func_109(13, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(14, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(15, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(16, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(71, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
						return 0;
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("CHEST_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_7__.func_109(13, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(14, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(15, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(16, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(71, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
						return 0;
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if ((iParam4 == joaat("STOMACH_FULL") || iParam4 == joaat("STOMACH_MID")) || iParam4 == joaat("STOMACH_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_7__.func_109(13, -1))
							{
							}
							else if (__LIB_7__.func_109(14, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(15, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(16, -1))
							{
							}
							else if (__LIB_7__.func_109(71, -1))
							{
								return 0;
							}
							else if (__LIB_7__.func_109(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
					}
					else if (Global_4539561 == 14)
					{
						return 0;
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
						return 0;
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("BACK_UPPER"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_7__.func_109(13, -1))
							{
							}
							else if (__LIB_7__.func_109(14, -1))
							{
							}
							else if (__LIB_7__.func_109(15, -1))
							{
							}
							else if (__LIB_7__.func_109(16, -1))
							{
							}
							else if (__LIB_7__.func_109(71, -1))
							{
							}
							else if (__LIB_7__.func_109(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
					}
					else if (Global_4539561 == 14)
					{
					}
					else if (Global_4539561 == 15)
					{
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			break;
		case joaat("BACK_1"):
		case joaat("BACK_FULL"):
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
		case joaat("BACK_FULL_SHORT"):
		case joaat("BACK_LOWER"):
		case joaat("BACK_MID"):
		case joaat("BACK_UPPER"):
		case joaat("BACK_UPPER_LEFT"):
		case joaat("BACK_UPPER_RIGHT"):
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4539561 == -1)
				{
					if (!Global_100493.f_1554)
					{
						if (__LIB_7__.func_109(13, -1))
						{
						}
						else if (__LIB_7__.func_109(14, -1))
						{
						}
						else if (__LIB_7__.func_109(15, -1))
						{
							return 0;
						}
						else if (__LIB_7__.func_109(16, -1))
						{
						}
						else if (__LIB_7__.func_109(71, -1))
						{
						}
						else if (__LIB_7__.func_109(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4539561 == 13)
				{
				}
				else if (Global_4539561 == 14)
				{
				}
				else if (Global_4539561 == 15)
				{
					return 0;
				}
				else if (Global_4539561 == 16)
				{
				}
				else if (Global_4539561 == 71)
				{
				}
				else if (Global_4539561 == 72)
				{
					return 0;
				}
			}
			break;
		case joaat("crewLogo"):
			if (bParam8)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_7__.func_109(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4539561 == -1)
				{
					if (!Global_100493.f_1554)
					{
						if (__LIB_7__.func_109(13, -1))
						{
							return 0;
						}
						else if (__LIB_7__.func_109(14, -1))
						{
							return 0;
						}
						else if (__LIB_7__.func_109(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
							{
								return 0;
							}
						}
						else if (__LIB_7__.func_109(16, -1))
						{
						}
						else if (__LIB_7__.func_109(71, -1))
						{
						}
						else if (__LIB_7__.func_109(72, -1))
						{
						}
					}
				}
				else if (Global_4539561 == 13)
				{
					return 0;
				}
				else if (Global_4539561 == 14)
				{
					return 0;
				}
				else if (Global_4539561 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
					{
						return 0;
					}
				}
				else if (Global_4539561 == 16)
				{
				}
				else if (Global_4539561 == 71)
				{
				}
				else if (Global_4539561 == 72)
				{
				}
			}
			break;
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("MP_M_Freemode_01"))
			{
			}
			else if (iVar0 == joaat("MP_F_Freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4539561 == -1)
					{
						if (!Global_100493.f_1554)
						{
							if (__LIB_7__.func_109(13, -1))
							{
							}
							else if (__LIB_7__.func_109(14, -1))
							{
							}
							else if (__LIB_7__.func_109(15, -1))
							{
							}
							else if (__LIB_7__.func_109(16, -1))
							{
							}
							else if (__LIB_7__.func_109(71, -1))
							{
							}
							else if (__LIB_7__.func_109(72, -1))
							{
							}
						}
					}
					else if (Global_4539561 == 13)
					{
						return 0;
					}
					else if (Global_4539561 == 14)
					{
					}
					else if (Global_4539561 == 15)
					{
						return 0;
					}
					else if (Global_4539561 == 16)
					{
					}
					else if (Global_4539561 == 71)
					{
					}
					else if (Global_4539561 == 72)
					{
					}
				}
			}
			break;
		case joaat("torsoDecal"):
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_185(int iParam0, int iParam1)//Position - 0x270D3
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
			iVar2 = __LIB_1__.func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_232(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_1__.func_556(1759, -1, 0);
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
				iVar5 = func_232(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_194(int iParam0, bool bParam1)//Position - 0x27531
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
							iVar2 = __LIB_25__.func_18(joaat("MP_M_Freemode_01"), 11, func_232(iParam0, 11, -1), 0);
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
						if (__LIB_7__.func_109(13, -1))
						{
							return 1;
						}
						else if (__LIB_7__.func_109(14, -1))
						{
							return 1;
						}
						else if (__LIB_7__.func_109(15, -1))
						{
							return 1;
						}
						else if (__LIB_7__.func_109(16, -1))
						{
							return 1;
						}
						else if (__LIB_7__.func_109(71, -1))
						{
							return 1;
						}
						else if (__LIB_7__.func_109(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_232(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_232(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_232(iParam0, 11, -1), 0);
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
						iVar8 = func_232(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_232(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_232(iParam0, 11, -1), 0);
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
						iVar12 = func_232(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

void func_201(int iParam0, int iParam1)//Position - 0x294C8
{
	struct<12> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar8;
	int iVar9;
	struct<7> Var10;
	int iVar11;
	int iVar12;
	struct<7> Var13;
	int iVar14;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar1 = __LIB_0__.func_250(iParam1);
		if (iParam0 != 0)
		{
			if (iVar1 == 3 || iVar1 == 4)
			{
				if (iParam0 == joaat("crewLogo"))
				{
					func_228(13, 0, Global_78127);
					func_228(14, 0, Global_78127);
					func_228(15, 0, Global_78127);
					func_228(16, 0, Global_78127);
					func_228(71, 0, Global_78127);
					func_228(72, 0, Global_78127);
					return;
				}
				else if (iParam0 == joaat("torsoDecal"))
				{
					if (iVar1 == 3)
					{
						func_228(73, 0, Global_78127);
						func_228(74, 0, Global_78127);
						func_228(75, 0, Global_78127);
						func_228(76, 0, Global_78127);
						func_228(77, 0, Global_78127);
						func_228(78, 0, Global_78127);
						func_228(79, 0, Global_78127);
						func_228(80, 0, Global_78127);
						func_228(81, 0, Global_78127);
						func_228(82, 0, Global_78127);
						func_228(83, 0, Global_78127);
						func_228(84, 0, Global_78127);
						func_228(85, 0, Global_78127);
						func_228(86, 0, Global_78127);
						func_228(90, 0, Global_78127);
						func_228(91, 0, Global_78127);
						func_228(124, 0, Global_78127);
						func_228(125, 0, Global_78127);
						func_228(87, 0, Global_78127);
						func_228(88, 0, Global_78127);
						func_228(89, 0, Global_78127);
						iVar3 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == joaat("torsoDecal"))
								{
									func_228((129 + iVar2), 0, Global_78127);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_228(73, 0, Global_78127);
						func_228(74, 0, Global_78127);
						func_228(75, 0, Global_78127);
						func_228(76, 0, Global_78127);
						func_228(77, 0, Global_78127);
						func_228(78, 0, Global_78127);
						func_228(79, 0, Global_78127);
						func_228(80, 0, Global_78127);
						func_228(81, 0, Global_78127);
						func_228(82, 0, Global_78127);
						func_228(83, 0, Global_78127);
						func_228(84, 0, Global_78127);
						func_228(85, 0, Global_78127);
						func_228(92, 0, Global_78127);
						func_228(87, 0, Global_78127);
						func_228(88, 0, Global_78127);
						func_228(89, 0, Global_78127);
						iVar6 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == joaat("torsoDecal"))
								{
									func_228((129 + iVar5), 0, Global_78127);
								}
							}
							iVar5++;
						}
					}
				}
				else if (iParam0 == joaat("hairOverlay"))
				{
					if (iVar1 == 3)
					{
						func_228(93, 0, Global_78127);
						func_228(94, 0, Global_78127);
						func_228(95, 0, Global_78127);
						func_228(96, 0, Global_78127);
						func_228(97, 0, Global_78127);
						func_228(98, 0, Global_78127);
						func_228(99, 0, Global_78127);
						func_228(100, 0, Global_78127);
						func_228(101, 0, Global_78127);
						func_228(102, 0, Global_78127);
						func_228(103, 0, Global_78127);
						func_228(104, 0, Global_78127);
						func_228(105, 0, Global_78127);
						func_228(106, 0, Global_78127);
						func_228(107, 0, Global_78127);
						func_228(108, 0, Global_78127);
						func_228(109, 0, Global_78127);
						func_228(110, 0, Global_78127);
						func_228(111, 0, Global_78127);
						func_228(112, 0, Global_78127);
						func_228(113, 0, Global_78127);
						func_228(114, 0, Global_78127);
						func_228(115, 0, Global_78127);
						func_228(116, 0, Global_78127);
						func_228(117, 0, Global_78127);
						func_228(123, 0, Global_78127);
						iVar9 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == joaat("hairOverlay"))
								{
									func_228((129 + iVar8), 0, Global_78127);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_228(93, 0, Global_78127);
						func_228(94, 0, Global_78127);
						func_228(95, 0, Global_78127);
						func_228(96, 0, Global_78127);
						func_228(97, 0, Global_78127);
						func_228(98, 0, Global_78127);
						func_228(99, 0, Global_78127);
						func_228(100, 0, Global_78127);
						func_228(101, 0, Global_78127);
						func_228(102, 0, Global_78127);
						func_228(103, 0, Global_78127);
						func_228(104, 0, Global_78127);
						func_228(105, 0, Global_78127);
						func_228(106, 0, Global_78127);
						func_228(107, 0, Global_78127);
						func_228(108, 0, Global_78127);
						func_228(109, 0, Global_78127);
						func_228(110, 0, Global_78127);
						func_228(111, 0, Global_78127);
						func_228(112, 0, Global_78127);
						func_228(113, 0, Global_78127);
						func_228(114, 0, Global_78127);
						func_228(115, 0, Global_78127);
						func_228(116, 0, Global_78127);
						func_228(117, 0, Global_78127);
						func_228(118, 0, Global_78127);
						func_228(119, 0, Global_78127);
						func_228(120, 0, Global_78127);
						func_228(121, 0, Global_78127);
						func_228(122, 0, Global_78127);
						func_228(123, 0, Global_78127);
						iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == joaat("hairOverlay"))
								{
									func_228((129 + iVar11), 0, Global_78127);
								}
							}
							iVar11++;
						}
					}
					return;
				}
			}
			iVar14 = 0;
			while (iVar14 < 127)
			{
				if (__LIB_6__.func_785(&Var0, iVar14, iVar1, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_228(Var0.f_11, 0, Global_78127);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_202(int iParam0, int iParam1)//Position - 0x29AC5
{
	int iVar0;
	iVar0 = func_231();
	if (iVar0 != -1)
	{
		if (!__LIB_25__.func_28(iParam0, iParam1, iVar0))
		{
			func_228(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)//Position - 0x2BCE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_103234 != -99)
	{
		if (Global_103235 == 11)
		{
			Global_78130[1 /*14*/] = { func_248(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_103234, -1) };
			iVar0 = __LIB_6__.func_809(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103234, iParam1, Global_78130[1 /*14*/].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_103235 == 8)
		{
			iVar1 = __LIB_6__.func_807(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103234, Global_103236);
			if (iVar1 != -99)
			{
				Global_78130[1 /*14*/] = { func_248(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, -1) };
				iVar2 = __LIB_6__.func_809(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_78130[1 /*14*/].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_103234;
			}
		}
	}
	return -99;
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x303E3
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_214(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_214(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_217(int iParam0)//Position - 0x31898
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
		if (!func_222(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__.func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__.func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__.func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__.func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__.func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_222(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_222(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x32262
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_232(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x329DA
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
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_225(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = __LIB_6__.func_795(iParam0, 8);
					iVar15 = __LIB_0__.func_420(iParam1, iVar2, 8, 3);
					iVar16 = __LIB_0__.func_252(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar15, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_11"), 0))
						{
							iVar2 = __LIB_6__.func_795(iParam0, 8);
							iVar18 = __LIB_0__.func_420(iParam1, iVar2, 8, 3);
							iVar19 = __LIB_0__.func_252(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("VEST_SHIRT"), 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar20 = __LIB_6__.func_795(iParam0, 11);
					iVar21 = __LIB_0__.func_420(iParam1, iVar20, 11, 3);
					if (iVar20 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("OPEN_SHORT"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam1, joaat("DLC_MP_H4_M_TORSO_0_0"), 3, 3);
					}
					else
					{
						iVar0 = 14;
					}
				}
				else if (iParam3 >= 241)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar22 = -1;
				if (iParam3 >= 237)
				{
					iVar22 = __LIB_0__.func_252(__LIB_0__.func_420(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar22 == 11)
				{
					iVar2 = __LIB_6__.func_795(iParam0, 8);
					iVar23 = __LIB_0__.func_420(iParam1, iVar2, 8, 3);
					iVar24 = __LIB_0__.func_252(iVar23);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar24 == 6)) || (iVar2 >= 241 && iVar24 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar23, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar25 = -1;
				iVar26 = -1;
				if (iParam3 >= 92)
				{
					iVar26 = __LIB_0__.func_420(iParam1, iParam3, 7, 3);
					iVar25 = __LIB_0__.func_252(iVar26);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar25 == 10) || iVar25 == 11) || iVar25 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("TIE"), 0)))
				{
					iVar2 = __LIB_6__.func_795(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = __LIB_0__.func_420(iParam1, iVar2, 8, 3);
						iVar27 = __LIB_0__.func_252(iVar14);
						bVar28 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TUX_VEST"), 0);
						if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("SLACK_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("LOOSE_BOWTIE"), 0)))
				{
					iVar14 = __LIB_0__.func_420(iParam1, iVar2, 8, 3);
					iVar29 = __LIB_0__.func_252(iVar14);
					bVar30 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TUX_VEST"), 0);
					if (((iVar29 == 3 || iVar29 == 7) || iVar29 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar30) || (iVar7 == 10 && bVar30))
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar31 = -1;
				iVar32 = -1;
				if (iParam3 >= 92)
				{
					iVar32 = __LIB_0__.func_420(iParam1, iParam3, 7, 3);
					iVar31 = __LIB_0__.func_252(iVar32);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar31 == 10) || iVar31 == 11) || iVar31 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, joaat("TIE"), 0))
				{
					iVar33 = __LIB_6__.func_795(iParam0, 11);
					if (iVar33 >= 237)
					{
						iVar14 = __LIB_0__.func_420(iParam1, iVar33, 11, 3);
						if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SHIRT_BRACES"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("H3_DRAW_7"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = __LIB_6__.func_758(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar34 = __LIB_6__.func_795(iParam0, 11);
				if (iVar34 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iVar34, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SHIRT_BRACES"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("H3_DRAW_7"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						bVar35 = false;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BASIC_VEST"), 0))
						{
							iVar2 = __LIB_6__.func_795(iParam0, 8);
							iVar36 = __LIB_0__.func_420(iParam1, iVar2, 8, 4);
							if (iVar2 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("VEST_SHIRT"), 0))
							{
							}
							else
							{
								iVar0 = __LIB_6__.func_758(iParam1, joaat("DLC_MP_H3_F_SPECIAL_6_0"), 8, 4);
								bVar35 = true;
							}
						}
						if (!bVar35)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar37 = -1;
				if (iParam3 >= 55)
				{
					iVar37 = __LIB_0__.func_420(iParam1, iParam3, 7, 4);
				}
				if ((iVar37 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("TIE"), 0)) || (iVar37 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("BOWTIE"), 0)))
				{
					iVar14 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar38 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("CLOSED_COLLAR"), 0))
						{
							bVar38 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						bVar38 = true;
					}
					if (bVar38)
					{
						iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__.func_420(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x34982
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= __LIB_0__.func_25(iParam1, 1))
					{
						func_248(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = __LIB_6__.func_795(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = __LIB_0__.func_420(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = __LIB_0__.func_420(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = __LIB_6__.func_758(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= __LIB_0__.func_25(iParam1, 1))
					{
						func_248(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = __LIB_6__.func_795(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = __LIB_0__.func_420(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = __LIB_0__.func_420(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = __LIB_6__.func_758(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		__LIB_1__.func_597(754, iParam3, Global_78127, 1, 0);
		__LIB_1__.func_597(755, iParam2, Global_78127, 1, 0);
		return 1;
	}
	return 0;
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x34C4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_296(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			func_201(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_28(iVar0, iParam2, 13) && !__LIB_25__.func_28(iVar0, iParam2, 14)) && !__LIB_25__.func_28(iVar0, iParam2, 15)) && !__LIB_25__.func_28(iVar0, iParam2, 16)) && !__LIB_25__.func_28(iVar0, iParam2, 71)) && !__LIB_25__.func_28(iVar0, iParam2, 72))
				{
					func_201(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__.func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_227(iParam0, iVar2, 0);
				}
				else
				{
					func_228(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

void func_227(int iParam0, int iParam1, int iParam2)//Position - 0x34D7D
{
	int iVar0;
	struct<6> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = __LIB_0__.func_250(iParam0);
			if (!__LIB_7__.func_109(iParam1, -1) || iParam2)
			{
				if (__LIB_6__.func_785(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					__LIB_0__.func_235(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_228(int iParam0, bool bParam1, int iParam2)//Position - 0x34DDC
{
	if (bParam1)
	{
		if (!__LIB_7__.func_109(iParam0, iParam2))
		{
			__LIB_7__.func_191(iParam0, 1, iParam2);
		}
	}
	else if (__LIB_7__.func_109(iParam0, iParam2))
	{
		__LIB_7__.func_191(iParam0, 0, iParam2);
	}
}

int func_231()//Position - 0x34E8D
{
	int iVar0;
	iVar0 = Global_78127;
	if (__LIB_7__.func_109(13, iVar0))
	{
		return 13;
	}
	if (__LIB_7__.func_109(14, iVar0))
	{
		return 14;
	}
	if (__LIB_7__.func_109(15, iVar0))
	{
		return 15;
	}
	if (__LIB_7__.func_109(16, iVar0))
	{
		return 16;
	}
	if (__LIB_7__.func_109(71, iVar0))
	{
		return 71;
	}
	if (__LIB_7__.func_109(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_232(int iParam0, int iParam1, int iParam2)//Position - 0x34EFC
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
				if (func_121(iParam0, iParam1, iVar0))
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
				if (func_121(iParam0, iParam1, iVar1))
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

void func_242(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x37C6F
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { func_248(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_242(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_242(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_242(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_1__.func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__.func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_242(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_242(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_242(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_242(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { func_248(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_242(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_242(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_242(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

struct<14> func_248(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B96D
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		func_273(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		__LIB_31__.func_911(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0x48398
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_417(iParam1, iParam2);
			break;
		case 11:
			__LIB_7__.func_57(iParam1, iParam2);
			break;
		case 8:
			__LIB_24__.func_990(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_416(iParam1, iParam2);
			break;
		case 3:
			__LIB_1__.func_836(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__.func_414(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_434(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__.func_413(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_412(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_411(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__.func_410(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_409(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_408(iParam1, iParam2);
			break;
		case 0:
			__LIB_18__.func_407(iParam1, iParam2);
			break;
		case 13:
			__LIB_18__.func_375(iParam1);
			break;
	}
}

int func_296(int iParam0)//Position - 0x54F62
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_232(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_232(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_299(int iParam0, int iParam1, int iParam2)//Position - 0x552D4
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_300(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_300(int iParam0, int iParam1, int iParam2)//Position - 0x55360
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
	Global_78130[1 /*14*/] = { func_301(iVar0, iParam1, iParam2, -1) };
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
				if (!func_300(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_300(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_301(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_300(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { func_301(iVar0, iVar2, iVar1, -1) };
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
			if (!func_300(iParam0, 14, uVar8[iVar7]))
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

struct<14> func_301(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x555B8
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		__LIB_1__.func_841(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		func_320(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		func_302(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_302(int iParam0, int iParam1)//Position - 0x5560A
{
	switch (iParam0)
	{
		case 0:
			__LIB_21__.func_989(iParam1);
			break;
		case 2:
			__LIB_21__.func_988(iParam1);
			break;
		case 3:
			__LIB_31__.func_913(iParam1);
			break;
		case 4:
			__LIB_21__.func_985(iParam1);
			break;
		case 6:
			__LIB_21__.func_984(iParam1);
			break;
		case 5:
			__LIB_21__.func_983(iParam1);
			break;
		case 8:
			__LIB_21__.func_982(iParam1);
			break;
		case 9:
			__LIB_21__.func_981(iParam1);
			break;
		case 10:
			__LIB_21__.func_980(iParam1);
			break;
		case 1:
			__LIB_21__.func_979(iParam1);
			break;
		case 7:
			__LIB_21__.func_978(iParam1);
			break;
		case 11:
			__LIB_21__.func_977(iParam1);
			break;
		case 12:
			__LIB_21__.func_976(iParam1);
			break;
		case 13:
			__LIB_1__.func_837(iParam1);
			break;
		case 14:
			__LIB_21__.func_974(iParam1);
			break;
	}
}

void func_320(int iParam0, int iParam1)//Position - 0x5ACDF
{
	switch (iParam0)
	{
		case 0:
			__LIB_1__.func_840(iParam1);
			break;
		case 2:
			__LIB_1__.func_839(iParam1);
			break;
		case 3:
			func_333(iParam1);
			break;
		case 4:
			__LIB_22__.func_1(iParam1);
			break;
		case 6:
			__LIB_22__.func_0(iParam1);
			break;
		case 5:
			__LIB_21__.func_999(iParam1);
			break;
		case 8:
			__LIB_21__.func_998(iParam1);
			break;
		case 9:
			__LIB_21__.func_997(iParam1);
			break;
		case 10:
			__LIB_21__.func_996(iParam1);
			break;
		case 1:
			__LIB_21__.func_995(iParam1);
			break;
		case 7:
			__LIB_21__.func_994(iParam1);
			break;
		case 11:
			__LIB_21__.func_993(iParam1);
			break;
		case 12:
			__LIB_21__.func_992(iParam1);
			break;
		case 13:
			__LIB_21__.func_991(iParam1);
			break;
		case 14:
			__LIB_21__.func_990(iParam1);
			break;
	}
}

void func_333(int iParam0)//Position - 0x5FC8C
{
	if (iParam0 < 107)
	{
		__LIB_1__.func_838(iParam0);
	}
	else if (iParam0 < 227)
	{
		__LIB_22__.func_3(iParam0);
	}
	else
	{
		__LIB_22__.func_2(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		__LIB_18__.func_374(3, iParam0, 318, -1);
	}
}

void func_352(int iParam0)//Position - 0x66745
{
	if (iParam0 < 60)
	{
		__LIB_1__.func_847(iParam0);
	}
	else
	{
		__LIB_18__.func_280(iParam0);
	}
	if (Global_78130[0 /*14*/].f_2 == -1)
	{
		__LIB_18__.func_374(3, iParam0, 181, -1);
	}
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x67E69
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
		Global_78130[1 /*14*/] = { func_301(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_8__.func_105(iParam1);
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
				Global_78130[1 /*14*/] = { func_301(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { func_301(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_8__.func_105(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_364(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_358(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_8__.func_105(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_364(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_358(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_301(iVar10, iVar0, func_362(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_373(iParam0, iVar10, &iVar4, 1))
							{
								func_358(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_358(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_301(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_358(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_358(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_358(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_358(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_301(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_358(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { func_301(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_8__.func_105(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_364(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_358(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_8__.func_105(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_364(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_358(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = func_364(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_358(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_359(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_373(iParam0, iVar10, &iVar4, 0))
		{
			func_358(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_299(iParam0, iVar10, &iVar4))
		{
			func_358(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_359(int iParam0, int iParam1, int iParam2)//Position - 0x6867A
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (__LIB_18__.func_281(iParam0, 12, iVar0))
	{
		if (__LIB_0__.func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__.func_19(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_362(int iParam0, int iParam1, int iParam2)//Position - 0x6880A
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
				if (func_300(iParam0, iParam1, iVar0))
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
				if (func_300(iParam0, iParam1, iVar1))
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

int func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x68BB2
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
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_6__.func_795(iParam0, 1);
				iVar0 = __LIB_0__.func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_6__.func_795(iParam0, 2);
				iVar0 = __LIB_0__.func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__.func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__.func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__.func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 135, 150))
									{
										iVar0 = func_367(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 209, 222))
									{
										iVar0 = func_367(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_367(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_367(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_367(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_367(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 176, 191) && !__LIB_6__.func_829(iParam0, 3, 227, 242))
									{
										iVar0 = func_367(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_6__.func_795(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_6__.func_795(iParam0, 11);
								iVar5 = func_366(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_6__.func_795(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__.func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_6__.func_795(iParam0, 8);
								iVar8 = __LIB_6__.func_795(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_366(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_366(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_6__.func_795(iParam0, 11);
								iVar0 = func_366(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_366(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69A49
{
	int iVar0;
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_367(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_367(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_367(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69D10
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (__LIB_18__.func_281(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_373(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6A4C7
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_300(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_384(int* iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x6A662
{
	char* sVar0;
	char[] cVar1[8];
	bool bVar2;
	char* sVar3;
	char* sVar4;
	struct<8> Var5;
	char cVar6[64];
	bool bVar7;
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	char cVar17[64];
	if (iParam0->f_436 > 0)
	{
		__LIB_24__.func_978(0);
	}
	bVar2 = iParam9;
	*iParam8 = 1;
	if (bParam14)
	{
		__LIB_0__.func_824();
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		__LIB_31__.func_888(&(iParam0->f_23), &(iParam0->f_145), iParam0->f_436, iParam0->f_2);
	}
	else
	{
		__LIB_24__.func_977(iParam0, &(iParam0->f_451), &(iParam0->f_452), &(iParam0->f_23), &(iParam0->f_145), iParam0->f_436, &(iParam0->f_2), &(iParam0->f_3), &(iParam0->f_475));
	}
	__LIB_0__.func_816(iParam0);
	switch (*iParam8)
	{
		case 0:
			switch (iParam0->f_436)
			{
				case 0:
					__LIB_0__.func_815(iParam0, 0);
					if (__LIB_0__.func_814(iParam0))
					{
						__LIB_0__.func_813(iParam0, 0);
						if ((__LIB_2__.func_47(&(iParam0->f_432), 500, 0) || CAM::IS_SCREEN_FADED_OUT()) && func_461(iParam0, iParam1, iParam9, 0))
						{
							__LIB_7__.func_16(Global_2689235[bVar2 /*453*/].f_258, PED::IS_PED_MALE(iParam0->f_23[0]), 0, &sVar0, &cVar1, Global_2689235[bVar2 /*453*/].f_257, Global_2689235[bVar2 /*453*/].f_259, 0, -1);
							STREAMING::REQUEST_ANIM_DICT(&sVar0);
							if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0) || __LIB_7__.func_56(iParam0))
							{
								__LIB_0__.func_579(&(iParam0->f_430));
								__LIB_0__.func_580(&(iParam0->f_430), 0, 0);
								__LIB_7__.func_15(1, 1);
								iParam0->f_436 = 1;
							}
						}
					}
					break;
				case 1:
					__LIB_0__.func_800(iParam0, &(iParam0->f_20), 0, 1);
					__LIB_0__.func_799(iParam0, 0);
					if (__LIB_2__.func_47(&(iParam0->f_430), 375, 0))
					{
						__LIB_0__.func_798(iParam0);
					}
					if (__LIB_2__.func_47(&(iParam0->f_430), 750, 0))
					{
						sVar3 = "WINNER";
						StringCopy(&Var5, PLAYER::GET_PLAYER_NAME(iParam9), 64);
						cVar6 = { __LIB_18__.func_278(iParam9) };
						iParam0->f_419 = 666;
						if (!__LIB_0__.func_795() || !__LIB_0__.func_794(PLAYER::PLAYER_ID()))
						{
							StringCopy(&cVar6, "", 64);
						}
						if (iParam6 == 0)
						{
							sVar4 = "HUD_COLOUR_FRIENDLY";
						}
						else
						{
							sVar4 = "HUD_COLOUR_NET_PLAYER1";
						}
						__LIB_1__.func_599(iParam0, sVar3, sVar4, 1, 0);
						__LIB_18__.func_225(iParam0, sVar3, iParam6, &Var5, &cVar6, "", iParam7, 1, 0, 0, 0);
						iParam0->f_419 += 4666;
						iParam0->f_419 += 666;
						__LIB_0__.func_793(iParam0, sVar3, 75, 0);
						__LIB_0__.func_792(iParam0, sVar3);
						__LIB_0__.func_579(&(iParam0->f_430));
						__LIB_0__.func_580(&(iParam0->f_430), 0, 0);
						__LIB_16__.func_621(1, 0, 1);
						GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
						GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
						__LIB_7__.func_14(iParam0);
						HUD::MP_TEXT_CHAT_DISABLE(true);
						iParam0->f_436 = 3;
					}
					break;
				case 3:
					__LIB_0__.func_800(iParam0, &(iParam0->f_20), 0, 1);
					if (__LIB_2__.func_47(&(iParam0->f_430), iParam0->f_419, 0))
					{
						iParam0->f_436 = 5;
					}
					break;
				case 5:
					__LIB_6__.func_882(iParam0);
					HUD::MP_TEXT_CHAT_DISABLE(false);
					*iParam8 = 1;
					iParam0->f_436 = 0;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_436)
			{
				case 0:
					if (!bParam10)
					{
						if (func_431(iParam0, iParam1, &bVar7, 0, 0))
						{
							__LIB_0__.func_815(iParam0, 0);
							__LIB_7__.func_15(1, 1);
							__LIB_24__.func_967(0);
							__LIB_24__.func_978(0);
							__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
							if (bVar7)
							{
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							iParam0->f_436 = 1;
						}
					}
					else
					{
						__LIB_0__.func_815(iParam0, 0);
						__LIB_7__.func_15(1, 1);
						__LIB_24__.func_967(0);
						__LIB_24__.func_978(0);
						__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
						iParam0->f_436 = 1;
					}
					break;
				case 1:
					__LIB_0__.func_815(iParam0, 0);
					if ((__LIB_0__.func_814(iParam0) && CAM::IS_SCREEN_FADED_IN()) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
					{
						StringCopy(&Var16, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
						cVar17 = { __LIB_18__.func_278(PLAYER::PLAYER_ID()) };
						iParam0->f_419 = 666;
						sVar8 = "SUMMARY";
						sVar9 = "HUD_COLOUR_BLACK" /* GXT: Black */;
						iVar10 = __LIB_1__.func_555(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
						iVar15 = func_533(iParam15, sParam2, iParam3, iParam4, iParam5, 1, -1, 0);
						iVar11 = __LIB_0__.func_689(iVar10, 0);
						iVar12 = iVar11 + 1;
						iVar13 = __LIB_0__.func_778(iVar11, 0, 0);
						iVar14 = __LIB_0__.func_778(iVar12, 0, 0);
						iParam0->f_419 = 666;
						if (!__LIB_0__.func_795() || !__LIB_0__.func_794(PLAYER::PLAYER_ID()))
						{
							StringCopy(&cVar17, "", 64);
						}
						__LIB_1__.func_599(iParam0, sVar8, sVar9, 1, 0);
						if (iParam6 == 2)
						{
							__LIB_18__.func_225(iParam0, sVar8, iParam6, "", "", "", iParam7, 1, 0, 0, 0);
						}
						else
						{
							__LIB_18__.func_225(iParam0, sVar8, iParam6, &Var16, &cVar17, "", iParam7, 1, 0, 0, 0);
						}
						iParam0->f_419 += 2333;
						if (iParam12 > 0)
						{
							__LIB_18__.func_277(iParam0, sVar8, iParam11, iParam12);
							iParam0->f_419 += 2333;
						}
						__LIB_0__.func_777(iParam0, sVar8, iVar15, iVar10, iVar13, iVar14, iVar11, iVar12);
						iParam0->f_419 += 2333;
						if ((iVar10 + iVar15) >= iVar14)
						{
							iParam0->f_419 = (iParam0->f_419 + SYSTEM::ROUND((SYSTEM::TO_FLOAT(2333) / 1.75f)));
						}
						__LIB_0__.func_793(iParam0, sVar8, -1, 0);
						__LIB_0__.func_792(iParam0, sVar8);
						__LIB_0__.func_579(&(iParam0->f_430));
						__LIB_0__.func_580(&(iParam0->f_430), 0, 0);
						if (__LIB_0__.func_493())
						{
							AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
						}
						else
						{
							AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
						}
						__LIB_7__.func_14(iParam0);
						iParam0->f_436 = 3;
						HUD::MP_TEXT_CHAT_DISABLE(true);
					}
					else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
					{
						if (!__LIB_0__.func_649(&(iParam0->f_456)))
						{
							__LIB_0__.func_580(&(iParam0->f_456), 0, 0);
						}
						else if (__LIB_2__.func_47(&(iParam0->f_456), 1000, 0))
						{
							__LIB_7__.func_11();
						}
					}
					break;
				case 3:
					__LIB_0__.func_773(iParam0, 0);
					if (__LIB_2__.func_47(&(iParam0->f_430), iParam0->f_419, 0))
					{
						if (bParam13)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
							__LIB_6__.func_952();
							__LIB_0__.func_772(iParam0, "SUMMARY");
							__LIB_7__.func_59(iParam0, 1, "SUMMARY", 0);
							__LIB_7__.func_15(0, 1);
							if (CAM::DOES_CAM_EXIST(*iParam1))
							{
								CAM::DESTROY_CAM(*iParam1, true);
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							}
							iParam0->f_436 = 5;
							if (__LIB_0__.func_493())
							{
								AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
							}
							else
							{
								AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
							}
							return 1;
						}
						else
						{
							if (!bParam10)
							{
								__LIB_1__.func_864(iParam1);
							}
							__LIB_0__.func_579(&(iParam0->f_430));
							__LIB_0__.func_580(&(iParam0->f_430), 0, 0);
							iParam0->f_436 = 4;
						}
					}
					break;
				case 4:
					__LIB_0__.func_773(iParam0, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					__LIB_6__.func_952();
					__LIB_0__.func_772(iParam0, "SUMMARY");
					__LIB_7__.func_59(iParam0, 1, "SUMMARY", 0);
					__LIB_7__.func_15(0, 1);
					if (CAM::DOES_CAM_EXIST(*iParam1))
					{
						CAM::DESTROY_CAM(*iParam1, true);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iParam0->f_436 = 5;
					if (__LIB_0__.func_493())
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
				case 5:
					HUD::MP_TEXT_CHAT_DISABLE(false);
					if (__LIB_0__.func_493())
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					else
					{
						AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
					}
					return 1;
					break;
			}
			break;
	}
	if (iParam0->f_436 > 0 && iParam0->f_436 < 5)
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			if (CAM::IS_CAM_RENDERING(*iParam1))
			{
				__LIB_18__.func_284(iParam0, &(iParam0->f_20), bVar2, 0, 0, 0, 0, 0, -1, -1, 200, 0, 0, -1);
			}
		}
	}
	return 0;
}

void func_404(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6C6EC
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		__LIB_0__.func_83(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!__LIB_0__.func_73())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		__LIB_0__.func_686(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		__LIB_0__.func_83(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		__LIB_0__.func_686(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_7__.func_60(PLAYER::PLAYER_ID())) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__.func_80()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_7__.func_60(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

int func_431(int* iParam0, var uParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x6D12B
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	float fVar20;
	struct<3> Var21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar13 = true;
		if (bParam3)
		{
			if (iParam0->f_437 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				}
				else
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (iParam0->f_421 < 6)
			{
				if (iParam0->f_422 == 0)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.305f, 3.404f, 1.873f };
					Var5 = { 0.3318f, 0.6829f, 0.782f };
					fVar7 = 48.872f;
				}
				else if (iParam0->f_422 == 1)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.3027f, 1.9371f, 0.8861f };
					Var5 = { 0.7526f, -0.7846f, 0.1942f };
					fVar7 = 49.9607f;
				}
				else if (iParam0->f_422 == 2)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.3685f, 5.6646f, 3.8144f };
					Var5 = { 0.3407f, 3.2028f, 2.2534f };
					fVar7 = 49.9607f;
				}
				else if (iParam0->f_422 == 3)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.551f, 1.5299f, 0.0099f };
					Var5 = { 1.1136f, -0.8876f, 0.6298f };
					fVar7 = 40.5195f;
				}
				else if (iParam0->f_422 == 4)
				{
					Var6 = { -0.6761f, 2.3219f, 0.3315f };
					Var4 = { 0.1252f, 1.692f, 0.0052f };
					Var5 = { -0.9193f, -1.0597f, 0.5854f };
					fVar7 = 40.5195f;
				}
				else if (iParam0->f_422 == 5)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.098f, 1.4671f, 0.0645f };
					Var5 = { 0.3334f, -1.4352f, 0.6893f };
					fVar7 = 40.5195f;
				}
			}
			else
			{
				*uParam2 = 0;
				iParam0->f_437 = 0;
				iParam0->f_421 = 0;
				return 1;
			}
		}
		else
		{
			if (iParam0->f_437 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				}
				else
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (!__LIB_7__.func_43(PLAYER::PLAYER_PED_ID()))
			{
				fVar8 = -0.09f;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar14 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				iVar15 = ENTITY::GET_ENTITY_MODEL(iVar14);
				if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar15))
				{
					bVar13 = false;
					bVar11 = true;
				}
			}
			else
			{
				bVar13 = false;
			}
			if (bVar13 && iParam4)
			{
				if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				}
				else
				{
					iParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (!__LIB_7__.func_13(iParam0, fVar9, fVar8, bVar11, (iParam4 && bVar13), &Var6, &Var4, &Var5, &fVar7, &bVar12, &bVar10))
			{
				*uParam2 = 0;
				iParam0->f_437 = 0;
				iParam0->f_421 = 0;
				return 1;
			}
			if (bVar13 && iParam4)
			{
				bVar13 = false;
			}
		}
		Var16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var4) };
		Var17 = { Var16 };
		Var18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var19 = { ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
		fVar20 = SYSTEM::VMAG(Var19);
		if (MISC::ABSF(fVar20) > 0.5f)
		{
			Var21 = { Var19 / Vector(fVar20, fVar20, fVar20) };
			Var17 = { Var16 + Var21 };
		}
		if (iParam0->f_437 == 0)
		{
			iVar22 = 343;
			iParam0->f_437 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var17, Var18, 0.25f, iVar22, PLAYER::PLAYER_PED_ID(), 7);
		}
		else
		{
			iVar23 = SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_437, &iVar0, &uVar1, &uVar2, &uVar3);
			switch (iVar23)
			{
				case 2:
					iParam0->f_437 = 0;
					if (iVar0 > 0)
					{
						iParam0->f_421++;
					}
					else if (((((!bVar13 && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var18, &fVar24, false, false);
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var16, &fVar25, false, false);
						if (MISC::ABSF((fVar24 - fVar25)) > 5f)
						{
							iParam0->f_421++;
						}
						else
						{
							if (!CAM::DOES_CAM_EXIST(*uParam1))
							{
								*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
							}
							CAM::STOP_CAM_POINTING(*uParam1);
							if (!__LIB_7__.func_60(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								CAM::ATTACH_CAM_TO_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var4, true);
							}
							CAM::POINT_CAM_AT_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var5, true);
							CAM::SET_CAM_FOV(*uParam1, fVar7);
							__LIB_6__.func_880(uParam1, 0.3f);
							CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.15f);
							if (!bVar12)
							{
								if (bVar10)
								{
									TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 2048, 2);
								}
								else
								{
									TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 10240, 2);
								}
							}
							*uParam2 = 1;
							iParam0->f_421 = 0;
							return 1;
						}
					}
					else
					{
						iParam0->f_421++;
					}
					break;
				case 0:
					iParam0->f_437 = 0;
					iParam0->f_421++;
					break;
				}
		}
	}
	else
	{
		*uParam2 = 0;
		iParam0->f_421 = 0;
		return 1;
	}
	return 0;
}

int func_461(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6F75E
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
	{
		return 1;
	}
	else
	{
		Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var1 = { Var0.f_0, Var0.f_1, 1320f };
		if (iParam3 != 0)
		{
			func_479(&(uParam0->f_20), iParam3, Var1, 0f, -1, 0, 1);
		}
		else
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iParam2);
			if (PED::IS_PED_INJURED(iVar3))
			{
				iParam2 = PLAYER::PLAYER_ID();
				iVar3 = PLAYER::PLAYER_PED_ID();
			}
			bVar2 = func_463(iVar3, Global_2689235[iParam2 /*453*/].f_257, Global_2689235[iParam2 /*453*/].f_258, 1, 0, 0);
			func_479(&(uParam0->f_20), iVar3, Var1, 0f, iParam2, bVar2, 1);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_20, __LIB_0__.func_804(Global_1853348[iParam2 /*834*/].f_266), 0);
		}
		if (!PED::IS_PED_INJURED(uParam0->f_20))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_20, Var1 + Vector(-2.85f, -0.26f, (20f + IntToFloat(PLAYER::PLAYER_ID()))), true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, 0f, 0f, 0f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20, true);
			if (PED::IS_PED_MALE(uParam0->f_20))
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_20, "move_m@generic", "idle", 1000f, -1.5f, -1, 9, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_20, "move_f@generic", "idle", 1000f, -1.5f, -1, 9, 0f, false, false, false);
			}
			TASK::TASK_LOOK_AT_COORD(uParam0->f_20, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_20, 0.7866f, 2.2904f, 0.7608f), -1, 2048, 2);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_20, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20, true);
		}
		if (!CAM::DOES_CAM_EXIST(*uParam1))
		{
			*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
		}
		CAM::STOP_CAM_POINTING(*uParam1);
		CAM::SET_CAM_COORD(*uParam1, Var1);
		CAM::SET_CAM_ROT(*uParam1, 0f, 0f, 0f, 2);
		CAM::SET_CAM_FOV(*uParam1, 45f);
		__LIB_6__.func_880(uParam1, 0.05f);
		CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.01f);
		if (!CAM::IS_CAM_RENDERING(*uParam1))
		{
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		return 1;
	}
	return 0;
}

int func_463(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x6F9E2
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (__LIB_0__.func_810())
	{
		return 0;
	}
	uVar0 = 6;
	uVar1 = 6;
	uVar2 = 7;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_471(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar3 = __LIB_0__.func_807(iParam0);
			if (!iVar3 == -1)
			{
				if (__LIB_1__.func_600(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = __LIB_0__.func_807(iParam0);
			if (!iVar4 == -1)
			{
				if (__LIB_1__.func_600(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = __LIB_0__.func_806(iParam0);
			if (!iVar5 == 0)
			{
				if (__LIB_0__.func_805(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_471(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x6FB91
{
	__LIB_0__.func_809(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			__LIB_7__.func_18(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 4, 1);
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 5, 1);
							__LIB_0__.func_809(uParam4, 7, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_0__.func_809(uParam4, 115, 1);
							__LIB_0__.func_809(uParam4, 116, 1);
							__LIB_0__.func_809(uParam4, 136, 1);
							__LIB_0__.func_809(uParam4, 138, 1);
							__LIB_0__.func_809(uParam4, 139, 1);
							__LIB_0__.func_809(uParam4, 143, 1);
							__LIB_0__.func_809(uParam4, 144, 1);
							__LIB_0__.func_809(uParam4, 145, 1);
							__LIB_0__.func_809(uParam4, 147, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_0__.func_809(uParam4, 115, 1);
							__LIB_0__.func_809(uParam4, 116, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 5, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_0__.func_809(uParam4, 115, 1);
							__LIB_0__.func_809(uParam4, 116, 1);
							__LIB_0__.func_809(uParam4, 136, 1);
							__LIB_0__.func_809(uParam4, 138, 1);
							__LIB_0__.func_809(uParam4, 139, 1);
							__LIB_0__.func_809(uParam4, 143, 1);
							__LIB_0__.func_809(uParam4, 144, 1);
							__LIB_0__.func_809(uParam4, 145, 1);
							__LIB_0__.func_809(uParam4, 147, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 59:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 66, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 77, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 60:
				case 63:
					__LIB_1__.func_601(uParam3, 67, 1);
					__LIB_1__.func_601(uParam3, 68, 1);
					__LIB_1__.func_601(uParam3, 69, 1);
					__LIB_1__.func_601(uParam3, 70, 1);
					__LIB_1__.func_601(uParam3, 71, 1);
					__LIB_1__.func_601(uParam3, 72, 1);
					__LIB_1__.func_601(uParam3, 73, 1);
					__LIB_1__.func_601(uParam3, 74, 1);
					__LIB_1__.func_601(uParam3, 78, 1);
					__LIB_1__.func_601(uParam3, 79, 1);
					__LIB_1__.func_601(uParam3, 80, 1);
					__LIB_1__.func_601(uParam3, 81, 1);
					__LIB_1__.func_601(uParam3, 82, 1);
					__LIB_1__.func_601(uParam3, 91, 1);
					__LIB_1__.func_601(uParam3, 92, 1);
					__LIB_1__.func_601(uParam2, 66, 1);
					__LIB_1__.func_601(uParam2, 67, 1);
					__LIB_1__.func_601(uParam2, 68, 1);
					__LIB_1__.func_601(uParam2, 69, 1);
					__LIB_1__.func_601(uParam2, 70, 1);
					__LIB_1__.func_601(uParam2, 71, 1);
					__LIB_1__.func_601(uParam2, 72, 1);
					__LIB_1__.func_601(uParam2, 73, 1);
					__LIB_1__.func_601(uParam2, 77, 1);
					__LIB_1__.func_601(uParam2, 78, 1);
					__LIB_1__.func_601(uParam2, 79, 1);
					__LIB_1__.func_601(uParam2, 80, 1);
					__LIB_1__.func_601(uParam2, 81, 1);
					__LIB_1__.func_601(uParam2, 90, 1);
					__LIB_1__.func_601(uParam2, 91, 1);
					__LIB_1__.func_601(uParam3, 38, 1);
					__LIB_1__.func_601(uParam3, 47, 1);
					__LIB_1__.func_601(uParam3, 111, 1);
					__LIB_1__.func_601(uParam2, 37, 1);
					__LIB_1__.func_601(uParam2, 46, 1);
					__LIB_1__.func_601(uParam2, 110, 1);
					__LIB_0__.func_809(uParam4, 92, 1);
					__LIB_0__.func_809(uParam4, 93, 1);
					__LIB_0__.func_809(uParam4, 94, 1);
					__LIB_0__.func_809(uParam4, 96, 1);
					__LIB_0__.func_809(uParam4, 97, 1);
					__LIB_0__.func_809(uParam4, 98, 1);
					__LIB_0__.func_809(uParam4, 100, 1);
					__LIB_0__.func_809(uParam4, 103, 1);
					__LIB_0__.func_809(uParam4, 104, 1);
					__LIB_0__.func_809(uParam4, 105, 1);
					__LIB_0__.func_809(uParam4, 106, 1);
					__LIB_0__.func_809(uParam4, 107, 1);
					__LIB_0__.func_809(uParam4, 108, 1);
					__LIB_7__.func_17(uParam2, uParam3, uParam4);
					break;
				case 61:
					__LIB_1__.func_601(uParam3, 67, 1);
					__LIB_1__.func_601(uParam3, 68, 1);
					__LIB_1__.func_601(uParam3, 69, 1);
					__LIB_1__.func_601(uParam3, 70, 1);
					__LIB_1__.func_601(uParam3, 71, 1);
					__LIB_1__.func_601(uParam3, 72, 1);
					__LIB_1__.func_601(uParam3, 73, 1);
					__LIB_1__.func_601(uParam3, 74, 1);
					__LIB_1__.func_601(uParam3, 78, 1);
					__LIB_1__.func_601(uParam3, 79, 1);
					__LIB_1__.func_601(uParam3, 80, 1);
					__LIB_1__.func_601(uParam3, 81, 1);
					__LIB_1__.func_601(uParam3, 82, 1);
					__LIB_1__.func_601(uParam3, 91, 1);
					__LIB_1__.func_601(uParam3, 92, 1);
					__LIB_1__.func_601(uParam2, 66, 1);
					__LIB_1__.func_601(uParam2, 67, 1);
					__LIB_1__.func_601(uParam2, 68, 1);
					__LIB_1__.func_601(uParam2, 69, 1);
					__LIB_1__.func_601(uParam2, 70, 1);
					__LIB_1__.func_601(uParam2, 71, 1);
					__LIB_1__.func_601(uParam2, 72, 1);
					__LIB_1__.func_601(uParam2, 73, 1);
					__LIB_1__.func_601(uParam2, 77, 1);
					__LIB_1__.func_601(uParam2, 78, 1);
					__LIB_1__.func_601(uParam2, 79, 1);
					__LIB_1__.func_601(uParam2, 80, 1);
					__LIB_1__.func_601(uParam2, 81, 1);
					__LIB_1__.func_601(uParam2, 90, 1);
					__LIB_1__.func_601(uParam2, 91, 1);
					__LIB_1__.func_601(uParam3, 38, 1);
					__LIB_1__.func_601(uParam3, 47, 1);
					__LIB_1__.func_601(uParam3, 111, 1);
					__LIB_1__.func_601(uParam2, 37, 1);
					__LIB_1__.func_601(uParam2, 46, 1);
					__LIB_1__.func_601(uParam2, 110, 1);
					__LIB_0__.func_809(uParam4, 92, 1);
					__LIB_0__.func_809(uParam4, 93, 1);
					__LIB_0__.func_809(uParam4, 94, 1);
					__LIB_0__.func_809(uParam4, 96, 1);
					__LIB_0__.func_809(uParam4, 97, 1);
					__LIB_0__.func_809(uParam4, 98, 1);
					__LIB_0__.func_809(uParam4, 100, 1);
					__LIB_0__.func_809(uParam4, 103, 1);
					__LIB_0__.func_809(uParam4, 104, 1);
					__LIB_0__.func_809(uParam4, 105, 1);
					__LIB_0__.func_809(uParam4, 106, 1);
					__LIB_0__.func_809(uParam4, 107, 1);
					__LIB_0__.func_809(uParam4, 108, 1);
					__LIB_7__.func_17(uParam2, uParam3, uParam4);
					break;
				case 62:
					__LIB_1__.func_601(uParam3, 67, 1);
					__LIB_1__.func_601(uParam3, 68, 1);
					__LIB_1__.func_601(uParam3, 69, 1);
					__LIB_1__.func_601(uParam3, 70, 1);
					__LIB_1__.func_601(uParam3, 71, 1);
					__LIB_1__.func_601(uParam3, 72, 1);
					__LIB_1__.func_601(uParam3, 73, 1);
					__LIB_1__.func_601(uParam3, 74, 1);
					__LIB_1__.func_601(uParam3, 78, 1);
					__LIB_1__.func_601(uParam3, 79, 1);
					__LIB_1__.func_601(uParam3, 80, 1);
					__LIB_1__.func_601(uParam3, 81, 1);
					__LIB_1__.func_601(uParam3, 82, 1);
					__LIB_1__.func_601(uParam3, 91, 1);
					__LIB_1__.func_601(uParam3, 92, 1);
					__LIB_1__.func_601(uParam2, 66, 1);
					__LIB_1__.func_601(uParam2, 67, 1);
					__LIB_1__.func_601(uParam2, 68, 1);
					__LIB_1__.func_601(uParam2, 69, 1);
					__LIB_1__.func_601(uParam2, 70, 1);
					__LIB_1__.func_601(uParam2, 71, 1);
					__LIB_1__.func_601(uParam2, 72, 1);
					__LIB_1__.func_601(uParam2, 73, 1);
					__LIB_1__.func_601(uParam2, 77, 1);
					__LIB_1__.func_601(uParam2, 78, 1);
					__LIB_1__.func_601(uParam2, 79, 1);
					__LIB_1__.func_601(uParam2, 80, 1);
					__LIB_1__.func_601(uParam2, 81, 1);
					__LIB_1__.func_601(uParam2, 90, 1);
					__LIB_1__.func_601(uParam2, 91, 1);
					__LIB_1__.func_601(uParam3, 38, 1);
					__LIB_1__.func_601(uParam3, 47, 1);
					__LIB_1__.func_601(uParam3, 111, 1);
					__LIB_1__.func_601(uParam2, 37, 1);
					__LIB_1__.func_601(uParam2, 46, 1);
					__LIB_1__.func_601(uParam2, 110, 1);
					__LIB_0__.func_809(uParam4, 92, 1);
					__LIB_0__.func_809(uParam4, 93, 1);
					__LIB_0__.func_809(uParam4, 94, 1);
					__LIB_0__.func_809(uParam4, 96, 1);
					__LIB_0__.func_809(uParam4, 97, 1);
					__LIB_0__.func_809(uParam4, 98, 1);
					__LIB_0__.func_809(uParam4, 100, 1);
					__LIB_0__.func_809(uParam4, 103, 1);
					__LIB_0__.func_809(uParam4, 104, 1);
					__LIB_0__.func_809(uParam4, 105, 1);
					__LIB_0__.func_809(uParam4, 106, 1);
					__LIB_0__.func_809(uParam4, 107, 1);
					__LIB_0__.func_809(uParam4, 108, 1);
					__LIB_7__.func_17(uParam2, uParam3, uParam4);
					break;
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 10:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 3, 1);
							__LIB_1__.func_601(uParam3, 4, 1);
							__LIB_1__.func_601(uParam3, 6, 1);
							__LIB_1__.func_601(uParam3, 10, 1);
							__LIB_1__.func_601(uParam3, 54, 1);
							__LIB_1__.func_601(uParam3, 55, 1);
							__LIB_1__.func_601(uParam3, 56, 1);
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 20, 1);
							__LIB_1__.func_601(uParam3, 26, 1);
							__LIB_1__.func_601(uParam3, 27, 1);
							__LIB_1__.func_601(uParam3, 32, 1);
							__LIB_1__.func_601(uParam3, 33, 1);
							__LIB_1__.func_601(uParam3, 37, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam3, 55, 1);
							__LIB_1__.func_601(uParam3, 106, 1);
							__LIB_1__.func_601(uParam3, 114, 1);
							__LIB_1__.func_601(uParam3, 116, 1);
							__LIB_1__.func_601(uParam3, 117, 1);
							__LIB_1__.func_601(uParam3, 118, 1);
							__LIB_1__.func_601(uParam3, 119, 1);
							__LIB_1__.func_601(uParam2, 3, 1);
							__LIB_1__.func_601(uParam2, 4, 1);
							__LIB_1__.func_601(uParam2, 6, 1);
							__LIB_1__.func_601(uParam2, 8, 1);
							__LIB_1__.func_601(uParam2, 9, 1);
							__LIB_1__.func_601(uParam2, 10, 1);
							__LIB_1__.func_601(uParam2, 53, 1);
							__LIB_1__.func_601(uParam2, 56, 1);
							__LIB_1__.func_601(uParam2, 55, 1);
							__LIB_1__.func_601(uParam2, 13, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 21, 1);
							__LIB_1__.func_601(uParam2, 26, 1);
							__LIB_1__.func_601(uParam2, 27, 1);
							__LIB_1__.func_601(uParam2, 28, 1);
							__LIB_1__.func_601(uParam2, 32, 1);
							__LIB_1__.func_601(uParam2, 36, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_1__.func_601(uParam2, 55, 1);
							__LIB_1__.func_601(uParam2, 14, 1);
							__LIB_1__.func_601(uParam2, 105, 1);
							__LIB_1__.func_601(uParam2, 113, 1);
							__LIB_1__.func_601(uParam2, 114, 1);
							__LIB_1__.func_601(uParam2, 115, 1);
							__LIB_1__.func_601(uParam2, 116, 1);
							__LIB_1__.func_601(uParam2, 117, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_1__.func_601(uParam3, 65, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 76, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 64, 1);
							__LIB_1__.func_601(uParam2, 65, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 75, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 3, 1);
							__LIB_1__.func_601(uParam3, 4, 1);
							__LIB_1__.func_601(uParam3, 6, 1);
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 19, 1);
							__LIB_1__.func_601(uParam3, 20, 1);
							__LIB_1__.func_601(uParam3, 26, 1);
							__LIB_1__.func_601(uParam3, 27, 1);
							__LIB_1__.func_601(uParam3, 32, 1);
							__LIB_1__.func_601(uParam3, 33, 1);
							__LIB_1__.func_601(uParam3, 37, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam3, 55, 1);
							__LIB_1__.func_601(uParam3, 106, 1);
							__LIB_1__.func_601(uParam3, 114, 1);
							__LIB_1__.func_601(uParam3, 116, 1);
							__LIB_1__.func_601(uParam3, 117, 1);
							__LIB_1__.func_601(uParam3, 118, 1);
							__LIB_1__.func_601(uParam3, 119, 1);
							__LIB_1__.func_601(uParam2, 3, 1);
							__LIB_1__.func_601(uParam2, 4, 1);
							__LIB_1__.func_601(uParam2, 6, 1);
							__LIB_1__.func_601(uParam2, 8, 1);
							__LIB_1__.func_601(uParam2, 9, 1);
							__LIB_1__.func_601(uParam2, 10, 1);
							__LIB_1__.func_601(uParam2, 53, 1);
							__LIB_1__.func_601(uParam2, 56, 1);
							__LIB_1__.func_601(uParam2, 55, 1);
							__LIB_1__.func_601(uParam2, 11, 1);
							__LIB_1__.func_601(uParam2, 13, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 21, 1);
							__LIB_1__.func_601(uParam2, 22, 1);
							__LIB_1__.func_601(uParam2, 54, 1);
							__LIB_1__.func_601(uParam2, 26, 1);
							__LIB_1__.func_601(uParam2, 27, 1);
							__LIB_1__.func_601(uParam2, 28, 1);
							__LIB_1__.func_601(uParam2, 30, 1);
							__LIB_1__.func_601(uParam2, 31, 1);
							__LIB_1__.func_601(uParam2, 32, 1);
							__LIB_1__.func_601(uParam2, 36, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_1__.func_601(uParam2, 55, 1);
							__LIB_1__.func_601(uParam2, 14, 1);
							__LIB_1__.func_601(uParam2, 105, 1);
							__LIB_1__.func_601(uParam2, 113, 1);
							__LIB_1__.func_601(uParam2, 114, 1);
							__LIB_1__.func_601(uParam2, 115, 1);
							__LIB_1__.func_601(uParam2, 116, 1);
							__LIB_1__.func_601(uParam2, 117, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_1__.func_601(uParam3, 65, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 76, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 64, 1);
							__LIB_1__.func_601(uParam2, 65, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 75, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam3, 106, 1);
							__LIB_1__.func_601(uParam3, 114, 1);
							__LIB_1__.func_601(uParam3, 116, 1);
							__LIB_1__.func_601(uParam3, 117, 1);
							__LIB_1__.func_601(uParam3, 118, 1);
							__LIB_1__.func_601(uParam3, 119, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_1__.func_601(uParam2, 14, 1);
							__LIB_1__.func_601(uParam2, 105, 1);
							__LIB_1__.func_601(uParam2, 113, 1);
							__LIB_1__.func_601(uParam2, 114, 1);
							__LIB_1__.func_601(uParam2, 115, 1);
							__LIB_1__.func_601(uParam2, 116, 1);
							__LIB_1__.func_601(uParam2, 117, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_1__.func_601(uParam3, 65, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 76, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 64, 1);
							__LIB_1__.func_601(uParam2, 65, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 75, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 13:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 19, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_0__.func_809(uParam4, 115, 1);
							__LIB_0__.func_809(uParam4, 116, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 7, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_0__.func_809(uParam4, 115, 1);
							__LIB_0__.func_809(uParam4, 116, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 5, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_0__.func_809(uParam4, 115, 1);
							__LIB_0__.func_809(uParam4, 116, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 16:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 4, 1);
							break;
						case 1:
							__LIB_0__.func_809(uParam4, 43, 1);
							break;
						case 2:
							break;
					}
					break;
				case 23:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_0__.func_809(uParam4, 110, 1);
							__LIB_0__.func_809(uParam4, 112, 1);
							__LIB_7__.func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 17:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 5, 1);
							__LIB_0__.func_809(uParam4, 6, 1);
							__LIB_0__.func_809(uParam4, 7, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 5, 1);
							__LIB_0__.func_809(uParam4, 6, 1);
							__LIB_0__.func_809(uParam4, 7, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 5, 1);
							__LIB_0__.func_809(uParam4, 6, 1);
							__LIB_0__.func_809(uParam4, 7, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 19:
					switch (iParam5)
					{
						case 0:
							__LIB_1__.func_601(uParam3, 3, 1);
							__LIB_1__.func_601(uParam3, 7, 1);
							__LIB_1__.func_601(uParam3, 0, 1);
							__LIB_1__.func_601(uParam3, 12, 1);
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 15, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 17, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 20, 1);
							__LIB_1__.func_601(uParam3, 21, 1);
							__LIB_1__.func_601(uParam3, 25, 1);
							__LIB_1__.func_601(uParam3, 26, 1);
							__LIB_1__.func_601(uParam3, 27, 1);
							__LIB_1__.func_601(uParam3, 30, 1);
							__LIB_1__.func_601(uParam3, 31, 1);
							__LIB_1__.func_601(uParam3, 32, 1);
							__LIB_1__.func_601(uParam3, 33, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam3, 37, 1);
							__LIB_1__.func_601(uParam2, 0, 1);
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 3, 1);
							__LIB_1__.func_601(uParam2, 4, 1);
							__LIB_1__.func_601(uParam2, 6, 1);
							__LIB_1__.func_601(uParam2, 7, 1);
							__LIB_1__.func_601(uParam2, 8, 1);
							__LIB_1__.func_601(uParam2, 11, 1);
							__LIB_1__.func_601(uParam2, 13, 1);
							__LIB_1__.func_601(uParam2, 15, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 17, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 19, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							__LIB_1__.func_601(uParam2, 21, 1);
							__LIB_1__.func_601(uParam2, 22, 1);
							__LIB_1__.func_601(uParam2, 54, 1);
							__LIB_1__.func_601(uParam2, 24, 1);
							__LIB_1__.func_601(uParam2, 26, 1);
							__LIB_1__.func_601(uParam2, 27, 1);
							__LIB_1__.func_601(uParam2, 28, 1);
							__LIB_1__.func_601(uParam2, 30, 1);
							__LIB_1__.func_601(uParam2, 31, 1);
							__LIB_1__.func_601(uParam2, 32, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_1__.func_601(uParam2, 36, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 65, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 76, 1);
							__LIB_1__.func_601(uParam3, 77, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 64, 1);
							__LIB_1__.func_601(uParam2, 65, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 75, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__.func_601(uParam3, 3, 1);
							__LIB_1__.func_601(uParam3, 7, 1);
							__LIB_1__.func_601(uParam3, 0, 1);
							__LIB_1__.func_601(uParam3, 12, 1);
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 15, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 17, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 20, 1);
							__LIB_1__.func_601(uParam3, 21, 1);
							__LIB_1__.func_601(uParam3, 25, 1);
							__LIB_1__.func_601(uParam3, 26, 1);
							__LIB_1__.func_601(uParam3, 27, 1);
							__LIB_1__.func_601(uParam3, 30, 1);
							__LIB_1__.func_601(uParam3, 31, 1);
							__LIB_1__.func_601(uParam3, 32, 1);
							__LIB_1__.func_601(uParam3, 33, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam2, 0, 1);
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 3, 1);
							__LIB_1__.func_601(uParam2, 4, 1);
							__LIB_1__.func_601(uParam2, 6, 1);
							__LIB_1__.func_601(uParam2, 7, 1);
							__LIB_1__.func_601(uParam2, 11, 1);
							__LIB_1__.func_601(uParam2, 13, 1);
							__LIB_1__.func_601(uParam2, 15, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 17, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 19, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							__LIB_1__.func_601(uParam2, 21, 1);
							__LIB_1__.func_601(uParam2, 22, 1);
							__LIB_1__.func_601(uParam2, 54, 1);
							__LIB_1__.func_601(uParam2, 24, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 6, 1);
							__LIB_0__.func_809(uParam4, 7, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 43, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 65, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 76, 1);
							__LIB_1__.func_601(uParam3, 77, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 64, 1);
							__LIB_1__.func_601(uParam2, 65, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 75, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__.func_601(uParam3, 1, 1);
							__LIB_1__.func_601(uParam3, 3, 1);
							__LIB_1__.func_601(uParam3, 4, 1);
							__LIB_1__.func_601(uParam3, 5, 1);
							__LIB_1__.func_601(uParam3, 7, 1);
							__LIB_1__.func_601(uParam3, 10, 1);
							__LIB_1__.func_601(uParam3, 54, 1);
							__LIB_1__.func_601(uParam3, 55, 1);
							__LIB_1__.func_601(uParam3, 56, 1);
							__LIB_1__.func_601(uParam3, 0, 1);
							__LIB_1__.func_601(uParam3, 12, 1);
							__LIB_1__.func_601(uParam3, 13, 1);
							__LIB_1__.func_601(uParam3, 15, 1);
							__LIB_1__.func_601(uParam3, 16, 1);
							__LIB_1__.func_601(uParam3, 48, 1);
							__LIB_1__.func_601(uParam3, 49, 1);
							__LIB_1__.func_601(uParam3, 17, 1);
							__LIB_1__.func_601(uParam3, 18, 1);
							__LIB_1__.func_601(uParam3, 50, 1);
							__LIB_1__.func_601(uParam3, 51, 1);
							__LIB_1__.func_601(uParam3, 52, 1);
							__LIB_1__.func_601(uParam3, 53, 1);
							__LIB_1__.func_601(uParam3, 62, 1);
							__LIB_1__.func_601(uParam3, 38, 1);
							__LIB_1__.func_601(uParam3, 47, 1);
							__LIB_1__.func_601(uParam3, 111, 1);
							__LIB_1__.func_601(uParam3, 20, 1);
							__LIB_1__.func_601(uParam3, 21, 1);
							__LIB_1__.func_601(uParam3, 25, 1);
							__LIB_1__.func_601(uParam3, 26, 1);
							__LIB_1__.func_601(uParam3, 27, 1);
							__LIB_1__.func_601(uParam3, 30, 1);
							__LIB_1__.func_601(uParam3, 31, 1);
							__LIB_1__.func_601(uParam3, 32, 1);
							__LIB_1__.func_601(uParam3, 33, 1);
							__LIB_1__.func_601(uParam3, 37, 1);
							__LIB_1__.func_601(uParam3, 39, 1);
							__LIB_1__.func_601(uParam2, 0, 1);
							__LIB_1__.func_601(uParam2, 1, 1);
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 3, 1);
							__LIB_1__.func_601(uParam2, 4, 1);
							__LIB_1__.func_601(uParam2, 5, 1);
							__LIB_1__.func_601(uParam2, 6, 1);
							__LIB_1__.func_601(uParam2, 7, 1);
							__LIB_1__.func_601(uParam2, 8, 1);
							__LIB_1__.func_601(uParam2, 9, 1);
							__LIB_1__.func_601(uParam2, 10, 1);
							__LIB_1__.func_601(uParam2, 53, 1);
							__LIB_1__.func_601(uParam2, 56, 1);
							__LIB_1__.func_601(uParam2, 55, 1);
							__LIB_1__.func_601(uParam2, 11, 1);
							__LIB_1__.func_601(uParam2, 12, 1);
							__LIB_1__.func_601(uParam2, 13, 1);
							__LIB_1__.func_601(uParam2, 14, 1);
							__LIB_1__.func_601(uParam2, 15, 1);
							__LIB_1__.func_601(uParam2, 16, 1);
							__LIB_1__.func_601(uParam2, 47, 1);
							__LIB_1__.func_601(uParam2, 48, 1);
							__LIB_1__.func_601(uParam2, 17, 1);
							__LIB_1__.func_601(uParam2, 18, 1);
							__LIB_1__.func_601(uParam2, 49, 1);
							__LIB_1__.func_601(uParam2, 50, 1);
							__LIB_1__.func_601(uParam2, 51, 1);
							__LIB_1__.func_601(uParam2, 52, 1);
							__LIB_1__.func_601(uParam2, 62, 1);
							__LIB_1__.func_601(uParam2, 37, 1);
							__LIB_1__.func_601(uParam2, 46, 1);
							__LIB_1__.func_601(uParam2, 110, 1);
							__LIB_1__.func_601(uParam2, 19, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							__LIB_1__.func_601(uParam2, 21, 1);
							__LIB_1__.func_601(uParam2, 22, 1);
							__LIB_1__.func_601(uParam2, 54, 1);
							__LIB_1__.func_601(uParam2, 23, 1);
							__LIB_1__.func_601(uParam2, 24, 1);
							__LIB_1__.func_601(uParam2, 26, 1);
							__LIB_1__.func_601(uParam2, 27, 1);
							__LIB_1__.func_601(uParam2, 28, 1);
							__LIB_1__.func_601(uParam2, 29, 1);
							__LIB_1__.func_601(uParam2, 30, 1);
							__LIB_1__.func_601(uParam2, 31, 1);
							__LIB_1__.func_601(uParam2, 32, 1);
							__LIB_1__.func_601(uParam2, 33, 1);
							__LIB_1__.func_601(uParam2, 36, 1);
							__LIB_1__.func_601(uParam2, 38, 1);
							__LIB_1__.func_601(uParam2, 55, 1);
							__LIB_0__.func_809(uParam4, 1, 1);
							__LIB_0__.func_809(uParam4, 2, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 3, 1);
							__LIB_0__.func_809(uParam4, 4, 1);
							__LIB_0__.func_809(uParam4, 14, 1);
							__LIB_0__.func_809(uParam4, 15, 1);
							__LIB_0__.func_809(uParam4, 16, 1);
							__LIB_0__.func_809(uParam4, 6, 1);
							__LIB_0__.func_809(uParam4, 8, 1);
							__LIB_0__.func_809(uParam4, 9, 1);
							__LIB_0__.func_809(uParam4, 10, 1);
							__LIB_0__.func_809(uParam4, 12, 1);
							__LIB_0__.func_809(uParam4, 13, 1);
							__LIB_0__.func_809(uParam4, 17, 1);
							__LIB_0__.func_809(uParam4, 18, 1);
							__LIB_0__.func_809(uParam4, 19, 1);
							__LIB_0__.func_809(uParam4, 20, 1);
							__LIB_0__.func_809(uParam4, 59, 1);
							__LIB_0__.func_809(uParam4, 60, 1);
							__LIB_0__.func_809(uParam4, 61, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 62, 1);
							__LIB_0__.func_809(uParam4, 63, 1);
							__LIB_0__.func_809(uParam4, 64, 1);
							__LIB_0__.func_809(uParam4, 65, 1);
							__LIB_0__.func_809(uParam4, 66, 1);
							__LIB_0__.func_809(uParam4, 67, 1);
							__LIB_0__.func_809(uParam4, 68, 1);
							__LIB_0__.func_809(uParam4, 69, 1);
							__LIB_0__.func_809(uParam4, 70, 1);
							__LIB_0__.func_809(uParam4, 71, 1);
							__LIB_0__.func_809(uParam4, 72, 1);
							__LIB_0__.func_809(uParam4, 21, 1);
							__LIB_0__.func_809(uParam4, 22, 1);
							__LIB_0__.func_809(uParam4, 23, 1);
							__LIB_0__.func_809(uParam4, 24, 1);
							__LIB_0__.func_809(uParam4, 25, 1);
							__LIB_0__.func_809(uParam4, 26, 1);
							__LIB_0__.func_809(uParam4, 36, 1);
							__LIB_0__.func_809(uParam4, 46, 1);
							__LIB_0__.func_809(uParam4, 38, 1);
							__LIB_0__.func_809(uParam4, 29, 1);
							__LIB_0__.func_809(uParam4, 28, 1);
							__LIB_0__.func_809(uParam4, 31, 1);
							__LIB_0__.func_809(uParam4, 33, 1);
							__LIB_0__.func_809(uParam4, 34, 1);
							__LIB_0__.func_809(uParam4, 32, 1);
							__LIB_0__.func_809(uParam4, 92, 1);
							__LIB_0__.func_809(uParam4, 93, 1);
							__LIB_0__.func_809(uParam4, 94, 1);
							__LIB_0__.func_809(uParam4, 96, 1);
							__LIB_0__.func_809(uParam4, 97, 1);
							__LIB_0__.func_809(uParam4, 98, 1);
							__LIB_0__.func_809(uParam4, 100, 1);
							__LIB_0__.func_809(uParam4, 103, 1);
							__LIB_0__.func_809(uParam4, 104, 1);
							__LIB_0__.func_809(uParam4, 105, 1);
							__LIB_0__.func_809(uParam4, 106, 1);
							__LIB_0__.func_809(uParam4, 107, 1);
							__LIB_0__.func_809(uParam4, 108, 1);
							__LIB_1__.func_601(uParam3, 65, 1);
							__LIB_1__.func_601(uParam3, 67, 1);
							__LIB_1__.func_601(uParam3, 68, 1);
							__LIB_1__.func_601(uParam3, 69, 1);
							__LIB_1__.func_601(uParam3, 70, 1);
							__LIB_1__.func_601(uParam3, 71, 1);
							__LIB_1__.func_601(uParam3, 72, 1);
							__LIB_1__.func_601(uParam3, 73, 1);
							__LIB_1__.func_601(uParam3, 74, 1);
							__LIB_1__.func_601(uParam3, 75, 1);
							__LIB_1__.func_601(uParam3, 76, 1);
							__LIB_1__.func_601(uParam3, 77, 1);
							__LIB_1__.func_601(uParam3, 78, 1);
							__LIB_1__.func_601(uParam3, 79, 1);
							__LIB_1__.func_601(uParam3, 80, 1);
							__LIB_1__.func_601(uParam3, 81, 1);
							__LIB_1__.func_601(uParam3, 82, 1);
							__LIB_1__.func_601(uParam3, 91, 1);
							__LIB_1__.func_601(uParam3, 92, 1);
							__LIB_1__.func_601(uParam2, 64, 1);
							__LIB_1__.func_601(uParam2, 65, 1);
							__LIB_1__.func_601(uParam2, 66, 1);
							__LIB_1__.func_601(uParam2, 67, 1);
							__LIB_1__.func_601(uParam2, 68, 1);
							__LIB_1__.func_601(uParam2, 69, 1);
							__LIB_1__.func_601(uParam2, 70, 1);
							__LIB_1__.func_601(uParam2, 71, 1);
							__LIB_1__.func_601(uParam2, 72, 1);
							__LIB_1__.func_601(uParam2, 73, 1);
							__LIB_1__.func_601(uParam2, 74, 1);
							__LIB_1__.func_601(uParam2, 75, 1);
							__LIB_1__.func_601(uParam2, 77, 1);
							__LIB_1__.func_601(uParam2, 78, 1);
							__LIB_1__.func_601(uParam2, 79, 1);
							__LIB_1__.func_601(uParam2, 80, 1);
							__LIB_1__.func_601(uParam2, 81, 1);
							__LIB_1__.func_601(uParam2, 90, 1);
							__LIB_1__.func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						case 1:
							__LIB_1__.func_601(uParam2, 2, 1);
							__LIB_1__.func_601(uParam2, 20, 1);
							break;
						case 2:
							break;
					}
					break;
				case 0:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_471(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				case 32:
					func_471(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_479(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x77410
{
	Param2.f_2 = (Param2.f_2 + 1f);
	func_481(uParam0, iParam1, Param2, fParam3, iParam4, bParam5);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_0__.func_811(*uParam0) && iParam6)
		{
			WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("WEAPON_MINIGUN"), -1, true, true);
		}
		if (__LIB_0__.func_493())
		{
			if (__LIB_7__.func_43(*uParam0))
			{
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 3, 0, 0);
			}
		}
	}
}

void func_481(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5)//Position - 0x774B2
{
	struct<14> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
		}
		*uParam0 = PED::CLONE_PED(iParam1, false, false, false);
		if (PED::IS_PED_INJURED(*uParam0))
		{
			PED::REVIVE_INJURED_PED(*uParam0);
		}
		PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
		ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), true);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
		if (bParam5)
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
			PED::CLEAR_PED_PROP(*uParam0, 0);
			if (iParam4 > -1 && iParam4 < 32)
			{
				Var0 = { func_248(ENTITY::GET_ENTITY_MODEL(*uParam0), 2, Global_2689235[iParam4 /*453*/].f_248, -1) };
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, Var0.f_3, Var0.f_4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
			}
		}
		if (__LIB_0__.func_812(*uParam0, 11))
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
}

int func_533(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x78B13
{
	return func_534(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_534(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x78B2F
{
	var uVar0;
	uVar0 = __LIB_18__.func_289(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

void func_577(var uParam0)//Position - 0x7A97F
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			__LIB_24__.func_969(&uLocal_1048, __LIB_1__.func_843(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		case 1:
			if (!__LIB_24__.func_984(&uLocal_1048, 0))
			{
				__LIB_7__.func_41(&uLocal_1048);
				uParam0->f_681 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_591(var uParam0)//Position - 0x7AF33
{
	uParam0->f_83.f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_83.f_5 = { 0f, 0f, 0f };
	uParam0->f_83.f_8 = { 0f, 0f, 0f };
	uParam0->f_83.f_23 = 0;
	uParam0->f_83.f_24 = 0;
	uParam0->f_83.f_20 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_83));
	}
}

void func_598(var uParam0, struct<25> Param1, var uParam2)//Position - 0x7B433
{
	uParam0->f_83.f_2 = { Param1.f_2 };
	uParam0->f_83.f_5 = { Param1.f_5 };
	uParam0->f_83.f_8 = { Param1.f_8 };
	uParam0->f_83.f_17 = { Param1.f_17 };
	uParam0->f_83.f_11 = { Param1.f_11 };
	uParam0->f_83.f_23 = Param1.f_23;
	uParam0->f_83.f_24 = Param1.f_24;
}

int func_624(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int* iParam5, int iParam6)//Position - 0x7C550
{
	int iVar0;
	int iVar1;
	if (func_1067(iParam6[iLocal_233 /*123*/], 10) && func_1067(iParam6[iLocal_234 /*123*/], 10))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		*uParam0 = 8;
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_6__.func_892(iParam5);
			HUD::DISPLAY_RADAR(false);
			__LIB_1__.func_872(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(0), __LIB_1__.func_873(0), 0, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			*uParam0 = 1;
			break;
		case 1:
			switch (iLocal_162)
			{
				case 0:
					if (__LIB_7__.func_42(iParam5) > 1f)
					{
						__LIB_0__.func_151("DARTS_HOW_TO_2", -1);
						__LIB_6__.func_892(iParam5);
						iLocal_162++;
					}
					break;
				case 1:
					if (__LIB_7__.func_42(iParam5) > 2f)
					{
						if (*iParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							__LIB_18__.func_292(uParam4[0 /*26*/], uParam1, iParam3, uParam2, 1);
						}
						if (*iParam3 == 3)
						{
							if (__LIB_24__.func_981(uParam4[0 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_162++;
								__LIB_6__.func_892(iParam5);
								*iParam3 = 2;
							}
						}
					}
					break;
				case 2:
					if (__LIB_7__.func_42(iParam5) > 5f)
					{
						__LIB_0__.func_151("DARTS_HOW_TO_3", -1);
						__LIB_6__.func_892(iParam5);
						iLocal_162++;
					}
					break;
				case 3:
					if (__LIB_7__.func_42(iParam5) > 2f)
					{
						if (*iParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							__LIB_18__.func_292(uParam4[1 /*26*/], uParam1, iParam3, uParam2, 1);
						}
						if (*iParam3 == 3)
						{
							if (__LIB_24__.func_981(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								__LIB_6__.func_892(iParam5);
								*iParam3 = 2;
								iLocal_162++;
							}
						}
					}
					break;
				case 4:
					if (__LIB_7__.func_42(iParam5) > 5f)
					{
						__LIB_0__.func_151("DARTS_HOW_3A", -1);
						__LIB_6__.func_892(iParam5);
						iLocal_162++;
					}
					break;
				case 5:
					if (__LIB_7__.func_42(iParam5) > 2f)
					{
						if (*iParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 2;
							__LIB_18__.func_292(uParam4[2 /*26*/], uParam1, iParam3, uParam2, 1);
						}
						if (*iParam3 == 3)
						{
							if (__LIB_24__.func_981(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								__LIB_6__.func_892(iParam5);
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								*iParam3 = 2;
								*uParam0 = 2;
							}
						}
					}
					break;
			}
			break;
		case 2:
			if (__LIB_7__.func_42(iParam5) > 5f)
			{
				__LIB_6__.func_892(iParam5);
				HUD::CLEAR_HELP(true);
				__LIB_1__.func_870(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(2), __LIB_1__.func_873(0), 1500);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_199) && !__LIB_0__.func_1("DARTS_DOUBLE_T"))
			{
				__LIB_0__.func_151("DARTS_DOUBLE_T", -1);
			}
			if (__LIB_7__.func_42(iParam5) > 6f)
			{
				__LIB_6__.func_892(iParam5);
				__LIB_1__.func_872(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(3), __LIB_1__.func_873(0), 1000, 0);
				*uParam0 = 4;
			}
			break;
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_198) && !__LIB_0__.func_1("DARTS_TRIPLE_T"))
			{
				__LIB_0__.func_151("DARTS_TRIPLE_T", -1);
			}
			if (__LIB_7__.func_42(iParam5) > 6f)
			{
				__LIB_6__.func_892(iParam5);
				__LIB_1__.func_870(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(4), __LIB_1__.func_873(0), 1000);
				*uParam0 = 5;
			}
			break;
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_199) && !__LIB_0__.func_1("DARTS_BULL_T"))
			{
				__LIB_0__.func_151("DARTS_BULL_T", -1);
			}
			if (__LIB_7__.func_42(iParam5) > 6f)
			{
				__LIB_6__.func_892(iParam5);
				__LIB_1__.func_872(uParam1->f_1, uParam1->f_4, __LIB_1__.func_874(5), __LIB_1__.func_873(0), 1500, 0);
				*uParam0 = 6;
			}
			break;
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_198) && !__LIB_0__.func_1("DARTS_DBL_WIN"))
			{
				__LIB_0__.func_151("DARTS_DBL_WIN", -1);
			}
			if (__LIB_7__.func_42(iParam5) > 6f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_191, iLocal_198, 1500, 1, 1);
				*uParam0 = 7;
			}
			break;
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_191))
			{
				iLocal_162 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_7__.func_20(1);
				iVar0 = 0;
				while (iVar0 < 3)
				{
					__LIB_1__.func_869(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_162 = 0;
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_7__.func_20(1);
				iVar1 = 0;
				while (iVar1 < 3)
				{
					__LIB_1__.func_869(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(iLocal_191, true);
				return 1;
			}
			break;
	}
	return 0;
}

void func_654(var uParam0, int iParam1)//Position - 0x7DA74
{
	if (__LIB_0__.func_970(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == __LIB_0__.func_160() || !__LIB_0__.func_154(iParam1, 0, 1))
	{
		return;
	}
	if (__LIB_0__.func_966(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_655(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_655(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7DACB
{
	int iVar0;
	int iVar1;
	if (__LIB_7__.func_60(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_7__.func_60(PLAYER::PLAYER_ID()) || (__LIB_0__.func_80() && __LIB_0__.func_728())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_0__.func_727();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_0__.func_154(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return __LIB_18__.func_275(iParam1, iParam0, 0);
							}
							else
							{
								return __LIB_24__.func_963(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return __LIB_24__.func_963(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return __LIB_18__.func_275(iParam1, iParam0, 0);
				}
				else
				{
					return __LIB_19__.func_520(0, -1, 0);
				}
			}
			else
			{
				return __LIB_19__.func_520(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return __LIB_18__.func_275(iParam1, iParam0, 0);
		}
		else
		{
			return __LIB_24__.func_963(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return __LIB_24__.func_963(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

void func_687()//Position - 0x7E8A6
{
	CAM::DO_SCREEN_FADE_OUT(500);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}

void func_688(int iParam0, struct<3> Param1, struct<6> Param2)//Position - 0x7E8BF
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	__LIB_0__.func_955();
	__LIB_0__.func_954();
	__LIB_0__.func_953();
	__LIB_0__.func_952();
	__LIB_0__.func_951();
	__LIB_0__.func_950();
	Global_1922955.f_9 = iParam0;
	switch (Global_1922955.f_9)
	{
		case 1:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			__LIB_1__.func_879();
			break;
		case 2:
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { Param2 };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 3:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1)
			{
				__LIB_0__.func_947(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
			}
			__LIB_0__.func_946();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			if (__LIB_0__.func_945())
			{
				Global_1922955.f_17 = { Param2 };
			}
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 4:
			__LIB_0__.func_944();
			__LIB_0__.func_946();
			Global_1922955 = 1;
			if (__LIB_0__.func_694(PLAYER::PLAYER_ID()) || __LIB_0__.func_693(PLAYER::PLAYER_ID()))
			{
				__LIB_0__.func_943(1);
			}
			if ((__LIB_0__.func_919() || __LIB_0__.func_942()) && __LIB_0__.func_941())
			{
				Global_1922955.f_17 = { __LIB_0__.func_940() };
				Param2 = { Global_1922955.f_17 };
				Global_1922955.f_23 = { __LIB_0__.func_939() };
			}
			else if (__LIB_0__.func_919() || __LIB_0__.func_942())
			{
				if (__LIB_0__.func_938())
				{
					Global_1922955.f_23 = { __LIB_0__.func_937() };
				}
				else
				{
					Global_1922955.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1922955.f_23 = { Param1 };
			}
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 5:
			__LIB_0__.func_944();
			__LIB_0__.func_936();
			__LIB_0__.func_946();
			if (__LIB_0__.func_694(PLAYER::PLAYER_ID()) || __LIB_0__.func_693(PLAYER::PLAYER_ID()))
			{
				__LIB_0__.func_943(1);
			}
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 8:
			Global_1922955 = 0;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { Param2 };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 9:
			__LIB_0__.func_946();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
		case 10:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
			break;
	}
	__LIB_0__.func_935();
	__LIB_0__.func_934();
	__LIB_1__.func_605(Global_1922955.f_9);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_221 = { Global_1922955.f_23 };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224 = { Param2 };
}

int func_715(var uParam0, var uParam1, int* iParam2)//Position - 0x7EE72
{
	if (((func_1000(uParam0, 1) && *uParam1 != 20) && *uParam1 != 21) && *uParam1 != 23)
	{
		return 1;
		HUD::CLEAR_HELP(true);
		*uParam1 = 20;
		__LIB_6__.func_892(&(iParam2->f_3));
		func_4(uParam0, 1);
	}
	return 0;
}

void func_716(var uParam0, int iParam1)//Position - 0x7EEC3
{
	MISC::CLEAR_BIT(&(uParam0->f_120), iParam1);
}

var func_718()//Position - 0x7EEEC
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	Global_1837285 = 0;
	if (__LIB_1__.func_885(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_2703735.f_3307.f_72 > 0)
		{
			if (__LIB_0__.func_112())
			{
				__LIB_1__.func_881(joaat("SERVICE_EARN_BETTING"), Global_2703735.f_3307.f_72, &iVar0, 0, 0, 0);
				Global_4534105[iVar0 /*85*/].f_14.f_34 = { Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_150 };
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_BETTING(Global_2703735.f_3307.f_72, &(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_150));
				__LIB_7__.func_67(Global_2703735.f_3307.f_72, 0);
			}
		}
		Global_1837285 = 0;
		__LIB_24__.func_986();
	}
	return Global_1837285;
}

int func_747()//Position - 0x8008E
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	func_751(1, 27);
	switch (Global_4718592)
	{
		case 0:
			switch (Global_4718592.f_2)
			{
				case 5:
					if (Global_262145.f_8727 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_LTS */)
					{
						bVar0 = true;
						bVar1 = true;
					}
					break;
				case 6:
					if (Global_262145.f_8726 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_CAPTURE */)
					{
						bVar0 = true;
						bVar1 = true;
					}
					break;
				default:
					if (Global_262145.f_8723 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_MISSIONS */)
					{
						bVar0 = true;
						bVar1 = true;
					}
					break;
			}
			break;
		case 1:
			if (Global_262145.f_8718 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_DM */)
			{
				bVar0 = true;
				if (Global_2711251[13] > 1)
				{
					bVar1 = true;
				}
			}
			break;
		case 8:
			if (Global_262145.f_8725 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_BASEJUMP */)
			{
				bVar0 = true;
			}
			break;
		case 3:
			if (Global_262145.f_8724 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_SURVIAL */)
			{
				bVar0 = true;
			}
			break;
		case 2:
			if (__LIB_0__.func_898(Global_4718592.f_107227))
			{
				if (Global_262145.f_8721 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_RACES_AIR */)
				{
					bVar0 = true;
				}
			}
			else if (__LIB_0__.func_897(Global_4718592.f_107227))
			{
				if (Global_262145.f_8722 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_RACES_SEA */)
				{
					bVar0 = true;
				}
			}
			else if (__LIB_1__.func_613(Global_4718592.f_107227))
			{
				if (Global_262145.f_8720 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_RACES_CYCLE */)
				{
					bVar0 = true;
				}
			}
			else if (Global_262145.f_8719 /* Tunable: TOGGLE_ON_BET_STAKE_GIFT_RACES_CAR */)
			{
				bVar0 = true;
			}
			break;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			if (Global_4718592 == 1)
			{
				return (Global_262145.f_8728 /* Tunable: CASH_REWARD_BET_STAKE_GIFT */ * Global_2711251[13]);
			}
			else
			{
				return (Global_262145.f_8728 /* Tunable: CASH_REWARD_BET_STAKE_GIFT */ * Global_2711251[12]);
			}
		}
		else
		{
			return Global_262145.f_8728 /* Tunable: CASH_REWARD_BET_STAKE_GIFT */;
		}
	}
	return 0;
}

void func_751(int iParam0, int iParam1)//Position - 0x80287
{
	Global_262145.f_8727 = 0;
	Global_262145.f_8728 = 100;
	Global_262145.f_8729 = 100;
	Global_262145.f_8718 = 0;
	Global_262145.f_8719 = 0;
	Global_262145.f_8720 = 0;
	Global_262145.f_8721 = 0;
	Global_262145.f_8722 = 0;
	Global_262145.f_8723 = 0;
	Global_262145.f_8724 = 0;
	Global_262145.f_8725 = 0;
	Global_262145.f_8726 = 0;
	func_755(iParam0, iParam1, joaat("CASH_REWARD_BET_STAKE_GIFT"), &(Global_262145.f_8728), 1);
	func_755(iParam0, iParam1, joaat("ARMOUR_REWARD_GIFT"), &(Global_262145.f_8729), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_DM"), &(Global_262145.f_8718), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_CAR"), &(Global_262145.f_8719), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_CYCLE"), &(Global_262145.f_8720), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_AIR"), &(Global_262145.f_8721), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_SEA"), &(Global_262145.f_8722), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_MISSIONS"), &(Global_262145.f_8723), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_SURVIAL"), &(Global_262145.f_8724), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_BASEJUMP"), &(Global_262145.f_8725), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_CAPTURE"), &(Global_262145.f_8726), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("DISABLE_MODIFIER_BADGES"), &(Global_262145.f_8572), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_LTS"), &(Global_262145.f_8727), 1);
	__LIB_22__.func_504(iParam0, iParam1, joaat("PLAYLIST_EVENT_GIFT_ACTIVE"), &(Global_262145.f_7123), 1);
}

void func_755(int iParam0, int iParam1, int iParam2, int* iParam3, bool bParam4)//Position - 0x80A8F
{
	__LIB_1__.func_887(0, iParam2, iParam3, bParam4);
	if (iParam0 == 0)
	{
		return;
	}
	switch (iParam0)
	{
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 26:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			__LIB_1__.func_887(1, iParam2, iParam3, bParam4);
			if (iParam0 == 1)
			{
				return;
			}
			switch (iParam0)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					__LIB_1__.func_887(2, iParam2, iParam3, bParam4);
					if (iParam0 == 2)
					{
						return;
					}
					switch (iParam0)
					{
						case 3:
						case 4:
						case 5:
							__LIB_1__.func_887(iParam0, iParam2, iParam3, bParam4);
							return;
						case 1:
						case 2:
						case 6:
						case 7:
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
						case 15:
						case 16:
						case 17:
						case 18:
						case 19:
						case 26:
						case 20:
						case 21:
						case 22:
						case 23:
						case 24:
						case 25:
							return;
						default:
					}
					return;
					return;
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 26:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
					__LIB_1__.func_887(6, iParam2, iParam3, bParam4);
					if (iParam0 == 6)
					{
						return;
					}
					switch (iParam0)
					{
						case 7:
						case 16:
						case 17:
						case 18:
						case 19:
						case 26:
						case 24:
							__LIB_1__.func_887(iParam0, iParam2, iParam3, bParam4);
							if (iParam1 != 27)
							{
								__LIB_1__.func_887(iParam1, iParam2, iParam3, bParam4);
							}
							return;
						case 15:
						case 20:
						case 21:
						case 22:
						case 23:
						case 25:
							__LIB_1__.func_887(15, iParam2, iParam3, bParam4);
							if (iParam0 == 15)
							{
								if (iParam1 != 27)
								{
									__LIB_1__.func_887(iParam1, iParam2, iParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 20:
								case 21:
								case 22:
								case 23:
								case 25:
									__LIB_1__.func_887(iParam0, iParam2, iParam3, bParam4);
									if (iParam1 != 27)
									{
										__LIB_1__.func_887(iParam1, iParam2, iParam3, bParam4);
									}
									return;
								default:
							}
							return;
							return;
						case 8:
						case 9:
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
							__LIB_1__.func_887(8, iParam2, iParam3, bParam4);
							if (iParam0 == 8)
							{
								if (iParam1 != 27)
								{
									__LIB_1__.func_887(iParam1, iParam2, iParam3, bParam4);
								}
								return;
							}
							switch (iParam0)
							{
								case 9:
								case 10:
								case 11:
								case 12:
								case 13:
								case 14:
									__LIB_1__.func_887(iParam0, iParam2, iParam3, bParam4);
									if (iParam1 != 27)
									{
										__LIB_1__.func_887(iParam1, iParam2, iParam3, bParam4);
									}
									return;
								default:
							}
							return;
							return;
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
							return;
						default:
					}
					return;
					return;
					break;
				case 1:
					return;
			}
			break;
	}
}

int func_761(int iParam0)//Position - 0x8102E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1 > 0)
	{
		iVar2 = (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1 - Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/]);
		__LIB_5__.func_113(49, iVar2, -1);
		func_765(49, 9);
		__LIB_0__.func_521(7, 1, -1);
		__LIB_18__.func_299(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1, 0);
		iVar1 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1;
		Global_1837286 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/];
		if (__LIB_0__.func_112())
		{
			__LIB_1__.func_881(joaat("SERVICE_EARN_BETTING"), iVar1, &iVar0, 0, 0, 0);
			Global_4534105[iVar0 /*85*/].f_14.f_34 = { Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_150 };
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_BETTING(iVar1, &(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_150));
			__LIB_7__.func_67(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_6[iParam0 /*2*/].f_1, 0);
		}
	}
	return iVar1;
}

void func_765(int iParam0, int iParam1)//Position - 0x815F0
{
	if (!func_819(iParam0))
	{
		if (__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 2, iParam1)))
		{
			__LIB_7__.func_69(iParam0, 1, iParam1, 6, 1);
		}
	}
	else if (!__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 2, iParam1)))
	{
		__LIB_7__.func_69(iParam0, 0, iParam1, 6, 1);
	}
	if (!__LIB_17__.func_527(iParam0))
	{
		if (__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 3, iParam1)))
		{
			__LIB_31__.func_891(iParam0, 1, iParam1, 5, 1);
		}
	}
	else if (!__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 3, iParam1)))
	{
		__LIB_31__.func_891(iParam0, 0, iParam1, 5, 1);
	}
	if (!__LIB_17__.func_526(iParam0))
	{
		if (__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 4, iParam1)))
		{
			func_795(iParam0, 1, iParam1, 4, 1);
		}
	}
	else if (!__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 4, iParam1)))
	{
		func_795(iParam0, 0, iParam1, 4, 1);
	}
	if (!__LIB_17__.func_525(iParam0))
	{
		if (__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 5, iParam1)))
		{
			func_766(iParam0, 1, iParam1, 2, 1);
		}
	}
	else if (!__LIB_1__.func_632(__LIB_1__.func_596(iParam0, -1), __LIB_0__.func_238(iParam0, 5, iParam1)))
	{
		func_766(iParam0, 0, iParam1, 2, 1);
	}
}

void func_766(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x81740
{
	if (bParam1)
	{
		if (!__LIB_17__.func_525(iParam0))
		{
			__LIB_21__.func_637(iParam0, 1);
			func_776();
			if (bParam4 == 1)
			{
			}
		}
		if (bParam4)
		{
			if (__LIB_7__.func_70(iParam0) == 0)
			{
				__LIB_7__.func_69(iParam3, __LIB_1__.func_620(iParam0, iParam2), __LIB_1__.func_619(iParam0, 5, iParam2), __LIB_1__.func_618(iParam0, 5, iParam2), __LIB_1__.func_617(iParam0, 5, iParam2), __LIB_0__.func_238(iParam0, 5, iParam2), 0, 0, 0, -1, 0);
				__LIB_1__.func_615(iParam0, 1);
			}
		}
	}
	else
	{
		if (__LIB_17__.func_525(iParam0))
		{
			__LIB_21__.func_637(iParam0, 0);
			if (bParam4 == 1)
			{
			}
		}
		if (__LIB_7__.func_70(iParam0) == 1)
		{
			__LIB_1__.func_615(iParam0, 0);
		}
	}
}

void func_776()//Position - 0x83BCD
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(756, -1, 0) + 1;
	__LIB_1__.func_597(756, iVar0, -1, 1, 0);
	if (iVar0 >= 30)
	{
		func_778(43, 1);
	}
	else
	{
		__LIB_0__.func_4(43, iVar0);
	}
}

int func_778(int iParam0, int iParam1)//Position - 0x83C5A
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_779(iParam0, iParam1);
}

int func_779(int iParam0, int iParam1)//Position - 0x83C75
{
	if (__LIB_0__.func_39(14) && !__LIB_0__.func_146(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (__LIB_0__.func_145(&Global_4541529))
	{
		if (__LIB_6__.func_822(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (__LIB_7__.func_66(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_795(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x840A4
{
	if (bParam1)
	{
		if (!__LIB_17__.func_526(iParam0))
		{
			__LIB_1__.func_891(iParam0, 1);
			if (bParam4 == 1)
			{
			}
		}
		if (bParam4)
		{
			if (__LIB_7__.func_72(iParam0) == 0)
			{
				__LIB_7__.func_69(iParam3, __LIB_1__.func_620(iParam0, iParam2), __LIB_1__.func_619(iParam0, 4, iParam2), __LIB_1__.func_618(iParam0, 4, iParam2), __LIB_1__.func_617(iParam0, 4, iParam2), __LIB_0__.func_238(iParam0, 4, iParam2), 0, 0, 0, -1, 0);
				__LIB_1__.func_623(iParam0, 1);
			}
		}
	}
	else
	{
		if (__LIB_17__.func_526(iParam0))
		{
			__LIB_1__.func_891(iParam0, 0);
			if (bParam4 == 1)
			{
			}
		}
		if (__LIB_7__.func_72(iParam0) == 1)
		{
			__LIB_1__.func_623(iParam0, 0);
		}
	}
}

void func_815(int iParam0, bool bParam1)//Position - 0x8479E
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_7__.func_70(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__.func_158(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__.func_158(iVar1));
		}
		__LIB_1__.func_603(__LIB_1__.func_631(iParam0), iVar0, -1, 1);
	}
}

bool func_819(int iParam0)//Position - 0x848DE
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_7__.func_70(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__.func_158(iVar1));
}

int func_823(var uParam0, int iParam1)//Position - 0x84957
{
	int iVar0;
	if (!func_1067(iParam1[iLocal_233 /*123*/], 16))
	{
		if ((((uParam0->f_39 == 1 && uParam0->f_40 == 1) && (uParam0->f_19[iLocal_233] < 101 || uParam0->f_19[iLocal_234] < 101)) || (uParam0->f_40 > 1 && (uParam0->f_34[iLocal_233] >= SYSTEM::FLOOR((IntToFloat(uParam0->f_40) * 0.66f)) || uParam0->f_34[iLocal_234] >= SYSTEM::FLOOR((IntToFloat(uParam0->f_40) * 0.66f))))) || (uParam0->f_39 > 1 && (uParam0->f_29[iLocal_233] >= SYSTEM::FLOOR((IntToFloat(uParam0->f_39) * 0.33f)) || uParam0->f_29[iLocal_234] >= SYSTEM::FLOOR((IntToFloat(uParam0->f_39) * 0.33f)))))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_827(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x84AA6
{
	if (__LIB_0__.func_697())
	{
		return;
	}
	func_971(1);
	func_828(iParam0, uParam1, 0, 0, iParam2, iParam5, iParam6, iParam7, iParam8, iParam9, iParam3, iParam4, iParam10, iParam11, iParam12, bParam13, iParam14, iParam15, iParam16, iParam17);
}

void func_828(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, int iParam17, int iParam18, int iParam19)//Position - 0x84AE8
{
	char cVar0[32];
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	bool bVar7;
	int iVar8;
	var uVar9;
	struct<35> Var10;
	bool bVar11;
	struct<47> Var12;
	struct<25> Var13;
	struct<6> Var14;
	struct<6> Var15;
	struct<33> Var16;
	struct<6> Var17;
	if (iParam17 == 0)
	{
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	switch (iParam0)
	{
		case 6:
		case 8:
		case 1:
		case 3:
		case 0:
		case 2:
			MemCopy(&cVar0, {Global_4718592.f_116525}, 8);
			MemCopy(&Var1, {Global_4718592.f_116811}, 8);
			break;
		case 32:
		case 25:
		case 19:
		case 31:
			StringCopy(&cVar0, "ROCKSTAR_AMBIANT", 32);
			__LIB_0__.func_914(&Var1, iParam0, iParam4);
			break;
		case 11:
		case 13:
		case 12:
		case 15:
		case 14:
		case 122:
		case 5:
		case 148:
			StringCopy(&cVar0, "ROCKSTAR_MINIGAME", 32);
			__LIB_0__.func_913(&Var1, iParam0, iParam4);
			break;
	}
	iVar2 = 0;
	iVar3 = 0;
	if (iParam0 == 1)
	{
		iVar2 = iParam19;
	}
	else if (iParam0 == 2)
	{
		if (__LIB_0__.func_912())
		{
			iParam0 += 100;
		}
		iVar3 = Global_4456449.f_34;
		if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0) || __LIB_0__.func_911(PLAYER::PLAYER_ID()))
		{
			iParam11 = 0;
		}
		if (iParam11 < 0)
		{
			iParam11 = 32;
		}
	}
	else if (iParam0 == 0)
	{
		if (__LIB_0__.func_912())
		{
			iParam0 += 100;
		}
	}
	else if (iParam0 == 3)
	{
		if (!__LIB_6__.func_884())
		{
			iParam0 += 100;
		}
	}
	if (bParam3)
	{
		if (__LIB_0__.func_910() && __LIB_0__.func_909())
		{
			return;
		}
		Global_1057161 = NETWORK::GET_NETWORK_TIME();
		__LIB_0__.func_908();
		Global_1837284 = 0;
		if (iParam0 == 0 || iParam0 == 1)
		{
			Global_1837298 = 1;
		}
		Global_1057153 = { Var1 };
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, &(Global_1880037[PLAYER::PLAYER_ID() /*16*/]));
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_16);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, &Global_1057153);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()));
		if (__LIB_6__.func_926())
		{
			iParam0 = 222;
		}
		else if (__LIB_7__.func_40())
		{
			iParam0 = 228;
		}
		else if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
		{
			iParam0 = 7;
		}
		else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
		{
			iParam0 = 4;
		}
		else if (__LIB_0__.func_903(PLAYER::PLAYER_ID()))
		{
			iParam0 = 165;
		}
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			iVar4 = 17;
		}
		else if (__LIB_0__.func_902() != -1)
		{
			iVar4 = __LIB_0__.func_902();
		}
		Var5.f_0 = iParam0;
		Var5.f_1 = iParam2;
		Var5.f_2 = uParam1;
		Var5.f_3 = Global_1837295;
		Var5.f_4 = Global_1837296;
		Var5.f_5 = uParam16;
		Var5.f_6 = iVar4;
		Var5.f_7 = Global_4718592.f_116524;
		STATS::PLAYSTATS_MATCH_STARTED(&cVar0, &Var1, &Var5);
		__LIB_0__.func_901();
		if (!__LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			Global_2715699.f_3475.f_2 = iParam2;
			Global_2715699.f_3475.f_3 = uParam1;
			if (Global_2715699.f_3475 == 0 || Global_2715699.f_3475.f_1 == 0)
			{
				Global_2715699.f_3475 = iParam2;
				Global_2715699.f_3475.f_1 = uParam1;
			}
		}
		else if (Global_2715699.f_3475 == 0 || Global_2715699.f_3475.f_1 == 0)
		{
			Global_2715699.f_3475 = iParam2;
			Global_2715699.f_3475.f_1 = uParam1;
		}
		Global_1057406.f_1 = __LIB_0__.func_900();
		if (Global_1837291)
		{
			iVar6 = Global_1837287;
			if (Global_4718592 == 2)
			{
				if (__LIB_0__.func_899(PLAYER::PLAYER_ID(), 0) || func_889())
				{
					Global_1837287 = (Global_1837287 - Global_262145.f_2352 /* Tunable: VEHICLE_RENTAL_PRICE_MODIFIER */);
				}
				else
				{
					bVar7 = true;
					iVar6 = (iVar6 - Global_262145.f_2352 /* Tunable: VEHICLE_RENTAL_PRICE_MODIFIER */);
				}
			}
			if ((((Global_1837287 > 0 && !__LIB_0__.func_80()) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_18__.func_289()) && MONEY::NETWORK_CAN_SPEND_MONEY(Global_1837287, false, false, true, -1, 0))
			{
				if (!bVar7)
				{
					if (Global_1837287 > 0)
					{
						if (__LIB_0__.func_112())
						{
							__LIB_1__.func_881(joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"), Global_1837287, &iVar8, 0, 1, 0);
							Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
						}
						else
						{
							MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837287, &Var1, false, true);
						}
					}
				}
				else
				{
					if (iVar6 > 0)
					{
						if (__LIB_0__.func_112())
						{
							__LIB_1__.func_881(joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"), iVar6, &iVar8, 0, 1, 0);
							Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
						}
					}
					if (__LIB_0__.func_112())
					{
						__LIB_1__.func_881(joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"), Global_262145.f_2352 /* Tunable: VEHICLE_RENTAL_PRICE_MODIFIER */, &iVar8, 0, 1, 0);
						Global_4534105[iVar8 /*85*/].f_14.f_26 = { Var1 };
					}
					else
					{
						MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837287, &Var1, false, true);
					}
				}
			}
			Global_1837291 = 0;
		}
		__LIB_0__.func_866();
	}
	else
	{
		if (__LIB_12__.func_697() == 1)
		{
			uVar9 = Global_4521801.f_915;
		}
		else
		{
			uVar9 = __LIB_12__.func_696();
		}
		StringCopy(&Global_1057153, "", 32);
		Var10 = { __LIB_6__.func_944(PLAYER::PLAYER_ID()) };
		if (Var10.f_0 < 0)
		{
			Var10.f_0 = 0;
		}
		iParam12 = iParam12;
		if (__LIB_24__.func_987(0))
		{
			bVar11 = true;
		}
		else if (!__LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			Global_1837290++;
			__LIB_1__.func_597(1914, Global_1837290, -1, 1, 0);
		}
		if (__LIB_6__.func_926())
		{
			iParam0 = 222;
		}
		else if (__LIB_7__.func_40())
		{
			iParam0 = 228;
		}
		else if (__LIB_0__.func_905(PLAYER::PLAYER_ID()))
		{
			iParam0 = 7;
		}
		else if (__LIB_0__.func_904(PLAYER::PLAYER_ID()))
		{
			iParam0 = 4;
		}
		else if (__LIB_0__.func_903(PLAYER::PLAYER_ID()))
		{
			iParam0 = 165;
		}
		Var12.f_0 = Global_1837284;
		Var12.f_1 = Global_1837285;
		if (Var12.f_1 < 0)
		{
			Var12.f_1 = 0;
		}
		Var12.f_2 = Global_1837282;
		Var12.f_9 = iParam18;
		Var12.f_3 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
		if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 148)
		{
			Var12.f_4 = 17;
		}
		else if (__LIB_0__.func_902() != -1)
		{
			Var12.f_4 = __LIB_0__.func_902();
		}
		if (Global_1837299 >= 0)
		{
			Var12.f_39 = Global_1837299;
		}
		if (Global_1837300 >= 0)
		{
			Var12.f_38 = Global_1837300;
		}
		if ((((__LIB_0__.func_910() && !__LIB_0__.func_863()) && !bParam15) && Global_2714762.f_669.f_9 != 0) && !__LIB_6__.func_786(0))
		{
			Global_2714762.f_669.f_15 = 1;
			Var13.f_0 = Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_3;
			Var13.f_1 = Global_2714762.f_669.f_10;
			Var13.f_2 = Global_1837284;
			Var13.f_3 = Global_1837285;
			if (Var13.f_3 < 0)
			{
				Var13.f_3 = 0;
			}
			Var13.f_4 = Global_1837282;
			Var13.f_5 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var13.f_6 = Var12.f_4;
			if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
			{
				Var13.f_21 = Global_2715699.f_3475;
				Var13.f_22 = Global_2715699.f_3475.f_1 + 1;
			}
			else
			{
				Var13.f_7 = Global_2715699.f_3475;
				Var13.f_8 = Global_2715699.f_3475.f_1;
			}
			Var13.f_9 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
			Var13.f_10 = iParam5;
			Var13.f_11 = iParam6;
			Var13.f_12 = iParam7;
			Var13.f_13 = iParam11;
			Var13.f_14 = Var10.f_0;
			Var13.f_15 = Global_1837286;
			Var13.f_16 = iParam9;
			Var13.f_17 = iParam10;
			Var13.f_18 = (__LIB_0__.func_900() - Global_1057406.f_1);
			if (__LIB_0__.func_862() || __LIB_6__.func_869(PLAYER::PLAYER_ID()))
			{
				Var13.f_19 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
			}
			Var13.f_20 = bVar11;
			if (Global_1837299 >= 0)
			{
				Var13.f_23 = Global_1837299;
			}
			else if (Global_1837299 == -2)
			{
				Var13.f_23 = 998;
			}
			else
			{
				Var13.f_23 = 999;
			}
			if (Global_1837300 >= 0)
			{
				Var13.f_24 = Global_1837300;
			}
			else if (Global_1837300 == -2)
			{
				Var13.f_24 = 998;
			}
			else
			{
				Var13.f_24 = 999;
			}
			StringCopy(&Var14, "", 24);
			if (__LIB_0__.func_862() || __LIB_6__.func_869(PLAYER::PLAYER_ID()))
			{
				Var14 = { Global_1048576.f_44 };
			}
			STATS::PLAYSTATS_JOB_LTS_ROUND_END(&cVar0, &Var1, &Var13, &Var14);
			return;
		}
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1837293 = NETWORK::NETWORK_SESSION_IS_VISIBLE();
		}
		Var12.f_7 = iVar2;
		Var12.f_8 = bVar11;
		Var12.f_11 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
		Var12.f_12 = iParam8;
		Var12.f_13 = iParam5;
		Var12.f_14 = iParam6;
		Var12.f_15 = iParam7;
		Var12.f_16 = iParam11;
		Var12.f_17 = Var10.f_0;
		Var12.f_18 = iParam13;
		Var12.f_19 = Global_1837286;
		Var12.f_20 = iParam14;
		Var12.f_21 = iParam9;
		Var12.f_22 = iParam0;
		Var12.f_23 = Global_4718592.f_107227;
		if (__LIB_18__.func_289())
		{
			if (Var12.f_23 == 6)
			{
				Var12.f_23 = 14;
			}
			else if (Var12.f_23 == 7)
			{
				Var12.f_23 = 15;
			}
		}
		else if (__LIB_0__.func_861(Global_4718592.f_116524))
		{
			if (Var12.f_23 == 6)
			{
				Var12.f_23 = 16;
			}
			else if (Var12.f_23 == 7)
			{
				Var12.f_23 = 17;
			}
		}
		Var12.f_24 = iVar3;
		Var12.f_25 = iParam10;
		Var12.f_34 = Global_1837292;
		Var12.f_26 = (__LIB_0__.func_900() - Global_1057406.f_1);
		Var12.f_29 = __LIB_1__.func_556(1301, -1, 0);
		if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			Var12.f_40 = Global_2715699.f_3475;
			Var12.f_41 = Global_2715699.f_3475.f_1 + 1;
		}
		else
		{
			Var12.f_5 = Global_2715699.f_3475;
			Var12.f_6 = Global_2715699.f_3475.f_1;
		}
		Var12.f_36 = Global_1837293;
		Var12.f_37 = uParam16;
		Var12.f_30 = uVar9;
		if (__LIB_0__.func_860() || __LIB_0__.func_859())
		{
			Var12.f_35 = 1;
		}
		if (iParam0 == 2)
		{
			Var12.f_27 = Global_4456449.f_8;
			Var12.f_10 = Global_4456484.f_31;
			if (((__LIB_18__.func_288(0) && Global_1837297 != -1) && !__LIB_0__.func_862()) && !__LIB_6__.func_869(PLAYER::PLAYER_ID()))
			{
				Var12.f_31 = Global_1837297;
			}
			Global_1837297 = -1;
			Var12.f_42 = Global_1659950[__LIB_0__.func_856() /*26*/].f_20;
			Var12.f_43 = Global_1659950[__LIB_0__.func_856() /*26*/].f_21;
			Var12.f_44 = Global_1659950[__LIB_0__.func_856() /*26*/].f_22;
			Var12.f_45 = Global_1659950[__LIB_0__.func_856() /*26*/].f_23;
			Var12.f_46 = Global_1659950[__LIB_0__.func_856() /*26*/].f_24;
		}
		if (__LIB_0__.func_862() || __LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			Var12.f_28 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
			if (__LIB_0__.func_855() || __LIB_0__.func_854())
			{
				Var12.f_32 = 1;
			}
			else if (__LIB_0__.func_853() || __LIB_0__.func_852())
			{
				Var12.f_33 = 1;
			}
		}
		if (__LIB_0__.func_862() || __LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			Var15 = { Global_1048576.f_44 };
		}
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, "");
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, 0);
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, "");
		SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, 0);
		if (!__LIB_0__.func_851())
		{
			if ((__LIB_0__.func_850() || __LIB_0__.func_863()) || bParam15)
			{
				Var16.f_0 = Global_2714762.f_669.f_9;
				Var16.f_1 = Global_2714762.f_669.f_10;
				Global_2714762.f_669.f_15 = 0;
				Var16.f_2 = Global_1837284;
				Var16.f_3 = Global_1837285;
				if (Var16.f_3 < 0)
				{
					Var16.f_3 = 0;
				}
				Var16.f_4 = Global_1837282;
				Var16.f_5 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
				Var16.f_6 = Var12.f_4;
				if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
				{
					Var16.f_29 = Global_2715699.f_3475;
					Var16.f_30 = Global_2715699.f_3475.f_1 + 1;
				}
				else
				{
					Var16.f_7 = Global_2715699.f_3475;
					Var16.f_8 = Global_2715699.f_3475.f_1;
				}
				Var16.f_9 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
				Var16.f_10 = iParam8;
				Var16.f_11 = iParam5;
				Var16.f_12 = iParam6;
				Var16.f_13 = iParam7;
				Var16.f_14 = iParam11;
				Var16.f_15 = Var10.f_0;
				Var16.f_16 = Global_1837286;
				Var16.f_17 = iParam9;
				Var16.f_18 = iParam10;
				Var16.f_19 = (__LIB_0__.func_900() - Global_1057406.f_1);
				if (__LIB_0__.func_862() || __LIB_6__.func_869(PLAYER::PLAYER_ID()))
				{
					Var16.f_20 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
					Var16.f_23 = (__LIB_0__.func_855() || __LIB_0__.func_854());
					Var16.f_24 = (__LIB_0__.func_853() || __LIB_0__.func_852());
				}
				Var16.f_21 = __LIB_1__.func_556(1301, -1, 0);
				Var16.f_22 = uVar9;
				Var16.f_25 = Global_1837292;
				Var16.f_26 = (__LIB_0__.func_860() || __LIB_0__.func_859());
				Var16.f_27 = Global_1837293;
				Var16.f_28 = bVar11;
				if (Global_1837299 >= 0)
				{
					Var16.f_31 = Global_1837299;
				}
				else if (Global_1837299 == -2)
				{
					Var16.f_31 = 998;
				}
				else
				{
					Var16.f_31 = 999;
				}
				if (Global_1837300 >= 0)
				{
					Var16.f_32 = Global_1837300;
				}
				else if (Global_1837300 == -2)
				{
					Var16.f_32 = 998;
				}
				else
				{
					Var16.f_32 = 999;
				}
				StringCopy(&Var17, "", 24);
				if (__LIB_0__.func_862() || __LIB_6__.func_869(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_1048576.f_44 };
				}
				STATS::PLAYSTATS_JOB_LTS_END(&cVar0, &Var1, &Var16, &Var17);
				__LIB_0__.func_849();
				Global_1837298 = 0;
				return;
			}
		}
		if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			Global_786435.f_3 = Var12.f_13;
			Global_786435.f_4 = Var12.f_14;
			Global_786435.f_6 = Global_1837284;
			Global_786435.f_7 = Global_1837282;
			Global_786435.f_8 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_786435.f_9 = Var12.f_4;
			Global_786435.f_10 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_786435.f_11 = iParam7;
			Global_786435.f_12 = iParam11;
			Global_786435.f_13 = Var10.f_0;
			Global_786435.f_14 = iParam9;
			Global_786435.f_15 = iParam10;
			Global_786435.f_16 = (__LIB_0__.func_900() - Global_1057406.f_1);
			Global_786435.f_17 = __LIB_1__.func_556(1301, -1, 0);
			Global_786435.f_18 = uVar9;
			Global_786435.f_19 = Global_1837293;
			Global_786435.f_20 = bVar11;
			Global_786435.f_28 = uParam16;
			Global_786435.f_43 = Global_786547;
			Global_786435.f_44 = Global_786547.f_1;
			Global_786435.f_23 = Global_786547.f_2;
			if (__LIB_7__.func_76(96, 0, 0))
			{
				Global_786435.f_22 = 1;
			}
			else
			{
				Global_786435.f_22 = 0;
			}
			STATS::PLAYSTATS_JOB_BEND(&cVar0, &Var1, &Global_786435, &Var15);
			__LIB_0__.func_849();
			Global_1837298 = 0;
			return;
		}
		if (__LIB_0__.func_175())
		{
			Global_786481.f_3 = Var12.f_13;
			Global_786481.f_4 = Var12.f_14;
			Global_786481.f_6 = Global_1837284;
			Global_786481.f_7 = Global_1837282;
			Global_786481.f_8 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_786481.f_9 = Var12.f_4;
			Global_786481.f_10 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_786481.f_11 = iParam7;
			Global_786481.f_12 = iParam11;
			Global_786481.f_13 = Var10.f_0;
			Global_786481.f_14 = iParam9;
			Global_786481.f_15 = iParam10;
			Global_786481.f_19 = Global_1837293;
			Global_786481.f_20 = bVar11;
			Global_786481.f_28 = uParam16;
			Global_786481.f_43 = Global_786547;
			Global_786481.f_44 = Global_786547.f_1;
			Global_786481.f_23 = __LIB_0__.func_848();
			STATS::PLAYSTATS_INSTANCED_HEIST_ENDED(&cVar0, &Var1, &Var15, &Global_786481);
			__LIB_0__.func_849();
			Global_1837298 = 0;
			return;
		}
		if (__LIB_0__.func_851())
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944345 = iParam2;
			Global_1944345.f_4 = __LIB_0__.func_847(bVar11);
			Global_1944345.f_5 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_1944345.f_6 = iParam5;
			Global_1944345.f_7 = iParam6;
			Global_1944345.f_8 = iParam7;
			Global_1944345.f_9 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
			Global_1944345.f_10 = iParam13;
			Global_1944345.f_11 = iParam17;
			Global_1944345.f_13 = iParam10;
			Global_1944345.f_15 = __LIB_1__.func_556(7849, -1, 0);
			Global_1944345.f_19 = iParam0;
			Global_1944345.f_20 = Global_4718592.f_116524;
			if (__LIB_7__.func_24())
			{
				Global_1944345.f_24 = 1;
			}
			else
			{
				Global_1944345.f_24 = 0;
			}
			Global_1944345.f_25 = iParam9;
			Global_1944345.f_40 = Global_1659922;
			Global_1944345.f_41 = Global_1659923;
			Global_1944345.f_42 = Global_1659924;
			Global_1944345.f_43 = Global_1659925;
			Global_1659922 = -2;
			Global_1659923 = -2;
			Global_1659924 = -2;
			Global_1659925 = -2;
			Global_1944345.f_3 = __LIB_0__.func_902();
			Global_1944345.f_26 = __LIB_0__.func_138(__LIB_0__.func_899(PLAYER::PLAYER_ID(), 0), 1, 0);
			__LIB_0__.func_849();
			Global_1837298 = 0;
			STATS::PLAYSTATS_ARENA_WARS_ENDED(&Global_1944345);
			__LIB_0__.func_866();
			return;
		}
		if (__LIB_0__.func_835(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944421.f_17 = bVar11;
			Global_1944421.f_20 = (__LIB_1__.func_555(PLAYER::PLAYER_ID()) - Global_1837283);
			Global_1944421.f_3 = iParam5;
			Global_1944421.f_4 = iParam6;
			Global_1944421.f_21 = iParam7;
			Global_1944421.f_22 = __LIB_0__.func_846(PLAYER::PLAYER_ID());
			Global_1944421.f_24 = iParam10;
			if (iParam10 == 0)
			{
				Global_1944421.f_13 = 0;
			}
			Global_1944421.f_16 = Global_1837293;
			Global_1944421.f_5 = Global_1837284;
			Global_1944421.f_6 = Global_1837282;
			Global_1944421.f_7 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Global_1944421.f_8 = Var12.f_4;
			Global_1944421.f_9 = uParam16;
			Global_1944421.f_10 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
			Global_1944421.f_38 = __LIB_0__.func_834(PLAYER::PLAYER_ID());
			Global_1944421.f_39 = __LIB_0__.func_833(PLAYER::PLAYER_ID());
			Global_1944421.f_40 = __LIB_1__.func_635(PLAYER::PLAYER_ID());
			Global_1944421.f_17 = bVar11;
			Global_1944421.f_27 = Global_786547.f_1;
			Global_1944421.f_16 = Global_1837293;
			Global_1944421.f_23 = Var10.f_0;
			Global_1944421.f_25 = (__LIB_0__.func_900() - Global_1057406.f_1);
			Global_1944421.f_26 = NETWORK::NETWORK_HAS_HEADSET();
			Global_1944421.f_28 = 0;
			Global_1944421.f_29 = 0;
			if (Global_1575016 == 8 || __LIB_0__.func_832())
			{
				Global_1944421.f_30 = 1;
			}
			else
			{
				Global_1944421.f_30 = 0;
			}
			Global_1944421.f_31 = __LIB_0__.func_832();
			Global_1944421.f_41 = 0;
			__LIB_0__.func_849();
			Global_1837298 = 0;
			STATS::PLAYSTATS_CASINO_STORY_MISSION_ENDED(&Global_1944421, &Var1);
			__LIB_0__.func_831();
			return;
		}
		if (__LIB_0__.func_830(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944501 = __LIB_1__.func_556(8916, -1, 0);
			Global_1944501.f_1 = Global_4718592.f_116524;
			Global_1944501.f_10 = iParam2;
			Global_1944501.f_18 = (__LIB_2__.func_370(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::PLAYSTATS_HEIST3_FINALE(&Global_1944501);
			__LIB_0__.func_849();
			Global_1837298 = 0;
		}
		if (__LIB_0__.func_829(Global_4718592.f_116524))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944587 = __LIB_1__.func_556(9572, -1, 0);
			IntToString(&(Global_1944587.f_3), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			Global_1944587.f_11 = iParam2;
			Global_1944587.f_19 = (__LIB_2__.func_370(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::PLAYSTATS_HEIST4_FINALE(&Global_1944587);
			__LIB_0__.func_849();
			Global_1837298 = 0;
		}
		if ((__LIB_0__.func_247(Global_4718592.f_116524) || __LIB_0__.func_699(Global_4718592.f_116524)) || (__LIB_7__.func_23() && __LIB_0__.func_827(249)))
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944719 = Global_786547.f_1;
			Global_1944719.f_1 = Global_4718592.f_116524;
			Global_1944719.f_2 = Global_786547.f_1;
			if (__LIB_0__.func_247(Global_4718592.f_116524))
			{
				Global_1944719.f_3 = __LIB_0__.func_826(Global_4718592.f_116524);
			}
			IntToString(&(Global_1944719.f_4), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			Global_1944719.f_32 = iParam2;
			Global_1944719.f_19 = (__LIB_2__.func_370(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			STATS::PLAYSTATS_ROBBERY_FINALE(&Global_1944719);
			__LIB_0__.func_849();
			Global_1837298 = 0;
		}
		if (__LIB_0__.func_825(5) || __LIB_7__.func_23())
		{
			Global_2714762.f_669.f_15 = 0;
			Global_1944783.f_25 = (__LIB_2__.func_370(PLAYER::PLAYER_ID(), 1) - Global_1837283);
			IntToString(&(Global_1944783.f_7), MISC::GET_HASH_KEY(&(Global_4718592.f_116811)), 32);
			STATS::PLAYSTATS_INST_MISSION_END(&Global_1944783);
			__LIB_0__.func_849();
			Global_1837298 = 0;
		}
		Global_2714762.f_669.f_15 = 0;
		STATS::PLAYSTATS_JOB_ACTIVITY_END(&cVar0, &Var1, &Var12, &Var15);
		__LIB_0__.func_849();
		Global_1837298 = 0;
	}
}

int func_889()//Position - 0x86DE2
{
	if (__LIB_0__.func_898(Global_4718592.f_107227) || __LIB_0__.func_897(Global_4718592.f_107227))
	{
		if (func_952())
		{
			return func_890(func_893(__LIB_0__.func_896(Global_1659902), 0));
		}
	}
	return 0;
}

int func_890(int iParam0)//Position - 0x86E2B
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_112())
	{
		if (iParam0 == func_893(245, 0) && __LIB_1__.func_556(3171, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_893(323, 0) && __LIB_1__.func_556(5396, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_893(324, 0) && __LIB_0__.func_137(9461, -1))
		{
			return 1;
		}
		if (iParam0 == func_893(357, 0) && __LIB_1__.func_556(6159, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_893(402, 0) && __LIB_1__.func_556(7210, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_893(518, 0) && __LIB_1__.func_556(9517, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				case 1:
					iVar1 = 451;
					break;
				case 2:
					iVar1 = 452;
					break;
				case 3:
					iVar1 = 453;
					break;
				case 4:
					iVar1 = 454;
					break;
				case 5:
					iVar1 = 455;
					break;
				case 6:
					iVar1 = 456;
					break;
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_893(iVar1, 0) && __LIB_6__.func_943(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (BitTest(Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

int func_893(int iParam0, int iParam1)//Position - 0x88AC2
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 5;
		case 14:
			return 6;
		case 15:
			return 7;
		case 16:
			return 8;
		case 19:
			return 9;
		case 22:
			return 10;
		case 23:
			return 11;
		case 24:
			return 12;
		case 25:
			return 13;
		case 27:
			return 14;
		case 28:
			return 15;
		case 29:
			return 16;
		case 30:
			return 17;
		case 31:
			return 18;
		case 20:
			return 19;
		case 32:
			return 20;
		case 21:
			return 21;
		case 78:
			return 22;
		case 79:
			return 23;
		case 80:
			return 24;
		case 18:
			return 25;
		case 81:
			return 26;
		case 82:
			return 27;
		case 83:
			return 28;
		case 84:
			return 29;
		case 85:
			return 30;
		case 86:
			return 31;
		case 87:
			return 32;
		case 88:
			return 33;
		case 102:
			return 34;
		case 113:
			return 35;
		case 160:
			return 36;
		case 163:
			return 37;
		case 162:
			return 38;
		case 164:
			if (__LIB_18__.func_301(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		case 199:
			return 41;
		case 201:
			return 42;
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				case 2:
					return 44;
				case 3:
					return 45;
				case 4:
					return 46;
				case 5:
					return 47;
				case 6:
					return 48;
				case 7:
					return 49;
				case 8:
					return 50;
				case 9:
					return 51;
				case 10:
					return 52;
				case 11:
					return 53;
				case 12:
					return 54;
				case 13:
					return 55;
				case 14:
					return 56;
				case 15:
					return 57;
				case 16:
					return 58;
				case 17:
					return 59;
				case 18:
					return 60;
				case 19:
					return 61;
				case 20:
					return 62;
				case 21:
					return 63;
				case 22:
					return 64;
				case 23:
					return 65;
				case 24:
					return 66;
				case 25:
					return 67;
				default:
			}
			return 43;
		case 171:
			return 68;
		case 187:
			return 69;
		case 177:
			return 70;
		case 183:
			return 71;
		case 185:
			return 72;
		case 184:
			return 73;
		case 188:
			return 74;
		case 173:
			return 75;
		case 178:
			return 76;
		case 186:
			return 77;
		case 215:
			return 78;
		case 217:
			return 79;
		case 224:
			return 80;
		case 237:
			return 81;
		case 243:
			return 82;
		case 244:
			return 83;
		case 245:
			return 84;
		case 253:
			return 85;
		case 254:
			return 86;
		case 256:
			return 87;
		case 257:
			return 88;
		case 258:
			return 89;
		case 276:
			if (__LIB_18__.func_301(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		case 323:
			return 92;
		case 324:
			return 93;
		case 337:
			return 94;
		case 357:
			return 95;
		case 402:
			return 96;
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				case 2:
					return 98;
				case 3:
					return 99;
				case 4:
					return 100;
				case 5:
					return 101;
				case 6:
					return 102;
				case 7:
					return 103;
				case 8:
					return 104;
				default:
			}
			return 97;
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				case 2:
					return 106;
				case 3:
					return 107;
				case 4:
					return 108;
				case 5:
					return 109;
				case 6:
					return 110;
				case 7:
					return 111;
				case 8:
					return 112;
				case 9:
					return 113;
				case 10:
					return 114;
				default:
			}
			return 105;
		case 450:
			return 115;
		case 451:
			return 116;
		case 452:
			return 117;
		case 453:
			return 118;
		case 454:
			return 119;
		case 455:
			return 120;
		case 456:
			return 121;
		case 457:
			return 122;
		case 480:
			return 123;
		case 482:
			return 124;
		case 483:
			return 125;
		case 518:
			return 126;
			break;
		case 531:
			return 127;
			break;
		case 533:
			return 128;
			break;
		case 527:
			return 129;
			break;
		case 525:
			return 130;
	}
	return -1;
}

int func_938(int iParam0)//Position - 0x8AAD1
{
	int iVar0;
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		case 177:
			iVar0 = 12;
			break;
		case 185:
			iVar0 = 14;
			break;
		case 174:
			iVar0 = 9;
			break;
		case 171:
			iVar0 = 20;
			break;
		case 172:
			iVar0 = 7;
			break;
		case 173:
			iVar0 = 8;
			break;
		case 175:
			iVar0 = 10;
			break;
		case 176:
			iVar0 = 11;
			break;
		case 178:
			iVar0 = 5;
			break;
		case 179:
			iVar0 = 6;
			break;
		case 183:
			iVar0 = 21;
			break;
		case 180:
			iVar0 = 18;
			break;
		case 181:
			iVar0 = 22;
			break;
		case 182:
			iVar0 = 19;
			break;
		case 184:
			iVar0 = 13;
			break;
		case 186:
			iVar0 = 15;
			break;
		case 188:
			iVar0 = 17;
			break;
	}
	return __LIB_1__.func_901(iVar0);
}

int func_952()//Position - 0x8F5AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[iVar0] != 0)
		{
			iVar1 = Global_2359296[__LIB_0__.func_153() /*5567*/].f_1[iVar0];
			iVar2 = func_893(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar2 % 32));
			}
			iVar3 = func_893(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar3 % 32));
			}
			iVar4 = func_893(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar4 % 32));
			}
			iVar5 = func_893(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar5 % 32));
			}
			iVar6 = func_893(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar6 % 32));
			}
			iVar7 = func_893(518, 0);
			if (iVar0 == (iVar7 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar7 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_971(bool bParam0)//Position - 0x8F9D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_6__.func_781())
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	iVar2 = __LIB_1__.func_556(757, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_0__.func_915(iVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_778(45, 1);
		return 1;
	}
	return 0;
}

void func_981()//Position - 0x8FD46
{
	if (!CAM::DOES_CAM_EXIST(iLocal_1036))
	{
		iLocal_1036 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	}
	CAM::SET_CAM_COORD(iLocal_1036, 1993.8f, 3049.7f, 47.8f);
	CAM::SET_CAM_ROT(iLocal_1036, 5.8f, 0f, 55.6f, 2);
	CAM::SET_CAM_FOV(iLocal_1036, 50f);
	CAM::SET_CAM_ACTIVE(iLocal_1036, true);
}

void func_989()//Position - 0x8FF9A
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_193, iLocal_191, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(iLocal_194, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_193, iLocal_194, 8000, 1, 1);
}

void func_999(var uParam0, var uParam1, int iParam2)//Position - 0x90249
{
	int iVar0;
	uParam0->f_2 = { uParam1->f_83.f_2 };
	uParam0->f_5 = { uParam1->f_83.f_5 };
	uParam0->f_8 = { uParam1->f_83.f_8 };
	uParam0->f_17 = { uParam1->f_83.f_17 };
	uParam0->f_11 = { uParam1->f_83.f_11 };
	uParam0->f_23 = uParam1->f_83.f_23;
	uParam0->f_24 = uParam1->f_83.f_24;
	iVar0 = iLocal_159;
	iParam2 = iParam2;
	*uParam0 = OBJECT::CREATE_OBJECT(iVar0, Local_171, false, false, false);
}

bool func_1000(var uParam0, int iParam1)//Position - 0x902C3
{
	return BitTest(uParam0->f_47, iParam1);
}

void func_1006(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x903B1
{
	if (__LIB_0__.func_697())
	{
		return;
	}
	Global_1837282 = (__LIB_0__.func_864(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
	Global_1837283 = __LIB_1__.func_555(PLAYER::PLAYER_ID());
	Global_1837285 = 0;
	Global_1837286 = 0;
	func_828(iParam0, uParam1, uParam2, 1, iParam4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, iParam3, 0, 0, 0);
	if (iParam0 != 6)
	{
		__LIB_0__.func_989();
	}
	Global_1837294 = 1;
}

void func_1009(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x904D9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_1011(var uParam0)//Position - 0x9052F
{
	PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
}

void func_1014(int iParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x9067F
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_CREW_TAG");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	__LIB_0__.func_514(sParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_1021(int iParam0)//Position - 0x90882
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", false, -1))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_159))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_168))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@darts"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_237))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_239))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro_alt1"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts"))
	{
		return 0;
	}
	return 1;
}

void func_1031(int iParam0)//Position - 0x90B9F
{
	STREAMING::REQUEST_MODEL(iLocal_159);
	STREAMING::REQUEST_MODEL(iLocal_168);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", false);
	STREAMING::REQUEST_ANIM_DICT("mini@darts");
	STREAMING::REQUEST_ANIM_DICT(sLocal_237);
	STREAMING::REQUEST_ANIM_DICT(sLocal_239);
	STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
	STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("darts_scoreboard");
	uLocal_1038 = __LIB_0__.func_729();
	uLocal_1048 = __LIB_1__.func_638();
	HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}

int func_1039(var uParam0, var uParam1, var uParam2)//Position - 0x910C4
{
	if (func_1067(uParam0, 7))
	{
		__LIB_1__.func_880("CLIENT DARTS_MPSTATE_LEAVE", uParam2, 0, 0, 0, 0, 0, 0, 1000);
		__LIB_18__.func_296(uParam1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				HUD::CLEAR_PRINTS();
				iLocal_236 = 1;
				return 1;
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				__LIB_1__.func_881(&(uParam1->f_666), 8, 0);
				func_716(uParam0, 7);
			}
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_1067(uParam0, 7))
		{
			func_1085(uParam0, 7);
			HUD::CLEAR_HELP(true);
		}
	}
	return 0;
}

int func_1041(var uParam0, var uParam1, var uParam2)//Position - 0x911E1
{
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_1067(uParam0, 7))
		{
			func_1085(uParam0, 7);
			HUD::CLEAR_HELP(true);
		}
	}
	if (func_1067(uParam0, 7))
	{
		__LIB_1__.func_880("CLIENT DARTS_MPSTATE_LEAVE", uParam2, 0, 0, 0, 0, 0, 0, 1000);
		__LIB_18__.func_296(uParam1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				HUD::CLEAR_PRINTS();
				func_1085(uParam0, 22);
				iLocal_236 = 1;
				return 1;
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				__LIB_1__.func_881(&(uParam1->f_666), 8, 0);
				func_716(uParam0, 7);
			}
		}
	}
	return 0;
}

void func_1051(int iParam0)//Position - 0x9170A
{
	if (iParam0 < 16)
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
}

bool func_1067(var uParam0, int iParam1)//Position - 0x91A34
{
	return BitTest(uParam0->f_120, iParam1);
}

int func_1073(int* iParam0, int iParam1)//Position - 0x91AEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar3 = 4;
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4) && func_1067(iParam0[iVar1 /*123*/], 20))
		{
			if (!__LIB_6__.func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4), 0) && !__LIB_0__.func_911(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4)))
			{
				if (iVar0 != (iParam0[iVar1 /*123*/])->f_121)
				{
					*iParam1 = (iParam0[iVar1 /*123*/])->f_121;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_1077(int* iParam0, var uParam1)//Position - 0x91BD2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 4;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && func_1067(iParam0[iVar0 /*123*/], 20))
		{
			if (!__LIB_6__.func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3), 0) && !__LIB_0__.func_911(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3)))
			{
				(*uParam1)[(iParam0[iVar0 /*123*/])->f_122] = (iParam0[iVar0 /*123*/])->f_121;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 == 2)
	{
		return 1;
	}
	return 0;
}

int func_1079(int* iParam0, bool bParam1)//Position - 0x91C73
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 4;
	if (bParam1)
	{
	}
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			if (__LIB_6__.func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4), 0) || __LIB_0__.func_911(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4)))
			{
				if (__LIB_6__.func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4), 0))
				{
					if (bParam1)
					{
						iVar3 = (iParam0[iVar1 /*123*/])->f_121;
						if (iVar3 == iVar1)
						{
						}
					}
				}
				if (__LIB_0__.func_911(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4)))
				{
					if (bParam1)
					{
					}
				}
			}
			else
			{
				iVar0++;
				if (bParam1)
				{
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1080(int* iParam0)//Position - 0x91D0B
{
	if (!iParam0->f_453)
	{
		if (Global_1574971)
		{
			__LIB_0__.func_815(iParam0, 0);
			if (__LIB_0__.func_814(iParam0))
			{
				iParam0->f_453 = 1;
			}
		}
	}
	else if ((__LIB_7__.func_60(PLAYER::PLAYER_ID()) && !__LIB_0__.func_734()) && !__LIB_1__.func_19())
	{
		if (!__LIB_0__.func_649(&(iParam0->f_454)))
		{
			__LIB_0__.func_580(&(iParam0->f_454), 0, 0);
		}
		else if (__LIB_2__.func_47(&(iParam0->f_454), 5000, 0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_1));
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_2));
			iParam0->f_453 = 0;
			Global_1574971 = 0;
			__LIB_0__.func_579(&(iParam0->f_454));
		}
	}
}

void func_1085(var uParam0, int iParam1)//Position - 0x91E68
{
	MISC::SET_BIT(&(uParam0->f_120), iParam1);
}

void func_1097(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x925D2
{
	int iVar0;
	int iVar1;
	if (!iLocal_236)
	{
		__LIB_0__.func_955();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
		TASK::TASK_SWAP_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}
	HUD::DISPLAY_AREA_NAME(true);
	if (iParam2 && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		__LIB_8__.func_770(0);
		__LIB_1__.func_32();
		HUD::DISPLAY_RADAR(true);
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(NETWORK::PARTICIPANT_ID_TO_INT()));
		__LIB_18__.func_306(iVar0, PLAYER::GET_PLAYER_TEAM(iVar0), 0);
	}
	if (bParam4)
	{
		HUD::CLEAR_PRINTS();
	}
	__LIB_6__.func_952();
	func_1349(3);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		__LIB_1__.func_869(uParam0[iVar1 /*26*/]);
		iVar1++;
	}
	__LIB_1__.func_907(&(uParam0->f_79));
	__LIB_1__.func_906();
	__LIB_19__.func_72(&(uParam1->f_72), 0);
	if (!bParam3)
	{
		__LIB_1__.func_900();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_159);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	if (uParam0->f_90 == uParam0->f_91 && !bParam4)
	{
		iVar1 = 3;
	}
	else if (uParam0->f_90 > uParam0->f_91)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 2;
	}
	if (__LIB_0__.func_3() == 0)
	{
		func_1101(1, 0, iVar1, 1, 1);
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && !iLocal_235)
	{
		__LIB_7__.func_80(190, 1);
	}
	else if (iLocal_235)
	{
	}
	if (Global_2703735.f_3580.f_39)
	{
		Global_2703735.f_3580.f_39 = 0;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	__LIB_0__.func_518(0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	__LIB_7__.func_15(0, 1);
	__LIB_7__.func_59(&Local_242, 1, 0, 0);
	__LIB_1__.func_897();
	__LIB_1__.func_21(0);
	__LIB_0__.func_994(0);
	if (CAM::DOES_CAM_EXIST(iLocal_1035))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1035))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1035, false);
		}
		CAM::DESTROY_CAM(iLocal_1035, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1036))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1036))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1036, false);
		}
		CAM::DESTROY_CAM(iLocal_1036, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1037))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1037))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1037, false);
		}
		CAM::DESTROY_CAM(iLocal_1037, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1034))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1034))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1034, false);
		}
		CAM::DESTROY_CAM(iLocal_1034, false);
	}
	__LIB_0__.func_199();
}

void func_1101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x928E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var9;
	int iVar10;
	char* sVar11;
	struct<2> Var12;
	bool bVar13;
	int iVar14;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1853348[iVar0 /*834*/];
	__LIB_1__.func_804();
	__LIB_13__.func_123();
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/);
	__LIB_1__.func_800();
	Global_1057165 = 0;
	Global_1835453 = 0;
	__LIB_1__.func_799();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
	__LIB_1__.func_798();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836370 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	__LIB_1__.func_797(0);
	Global_1836359 = 0;
	Global_1836358 = 0;
	Global_1836382 = 0;
	Global_1836598 = 0;
	Global_1836604 = 0;
	Global_1836090 = 0;
	Global_1837298 = 1;
	Global_1836570 = 0;
	Global_1836371 = -1;
	__LIB_1__.func_796(0);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 5);
	if (!__LIB_0__.func_910() && !__LIB_7__.func_50())
	{
		__LIB_1__.func_795();
	}
	__LIB_1__.func_794();
	__LIB_1__.func_793();
	__LIB_1__.func_792();
	__LIB_1__.func_791();
	__LIB_1__.func_790();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__.func_789();
		__LIB_1__.func_788();
	}
	if (__LIB_0__.func_863() || !__LIB_0__.func_850())
	{
		__LIB_1__.func_787();
		__LIB_1__.func_786(1, 1, 1);
		__LIB_0__.func_950();
		__LIB_1__.func_785();
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	__LIB_1__.func_784();
	if ((((Global_4718592 != 6 && __LIB_1__.func_783(Global_4718592.f_116524) != 14) && __LIB_1__.func_783(Global_4718592.f_116524) != 15) && !__LIB_0__.func_493()) && !__LIB_7__.func_50())
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
		}
	}
	Global_1835474 = 0;
	if (Global_1922955.f_9 == 4)
	{
		if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			Global_1835474 = 1;
		}
	}
	__LIB_6__.func_771();
	if (__LIB_1__.func_782())
	{
		__LIB_1__.func_781();
	}
	__LIB_1__.func_780();
	Global_4718592.f_117081 = 0;
	Global_1922915.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !__LIB_0__.func_851())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
		}
		else
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		}
	}
	StringCopy(&(Global_4718592.f_116516), "", 32);
	if (!__LIB_7__.func_50())
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		if ((bParam3 && !__LIB_0__.func_698()) && !__LIB_0__.func_697())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1888144[iVar3] = 0;
		Global_1888111[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		MISC::SET_BIT(&(Global_2715699.f_5986), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2715699.f_5986), 3);
	}
	if (iVar0 != -1 && Global_2714762.f_669.f_10 != 0)
	{
		Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_2 = Global_2714762.f_669.f_10;
	}
	if (__LIB_0__.func_865() || (iVar0 != -1 && BitTest(Global_1853348[iVar0 /*834*/].f_833, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			__LIB_15__.func_119();
			Global_4718592 = 0;
		}
		else
		{
			__LIB_15__.func_119();
		}
		__LIB_1__.func_778();
		__LIB_1__.func_777(1, 1);
		__LIB_1__.func_786(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
		__LIB_12__.func_681(1);
		if (__LIB_1__.func_212())
		{
			__LIB_1__.func_776();
		}
		if (!__LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			__LIB_8__.func_104(4);
		}
		__LIB_0__.func_950();
		__LIB_1__.func_774(0);
		__LIB_1__.func_773();
		Global_1837290 = 0;
	}
	if (!__LIB_1__.func_215())
	{
		__LIB_1__.func_772();
		if (__LIB_1__.func_771())
		{
			if (__LIB_1__.func_770())
			{
				__LIB_1__.func_778();
			}
		}
		__LIB_12__.func_681(1);
		if (!__LIB_0__.func_747())
		{
			Global_2715699.f_6325 = 0;
			Global_2715699.f_6326 = 0;
			Global_2715699.f_6324 = 0;
			Global_2715699.f_6323 = 0;
			Global_2715699.f_6504 = 0;
		}
	}
	else
	{
		__LIB_1__.func_769(PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__.func_768((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	__LIB_13__.func_122((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	__LIB_1__.func_767((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	__LIB_1__.func_766((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	if (__LIB_0__.func_747())
	{
		Global_2715699.f_6415 = 1;
	}
	else
	{
		Global_2715699.f_6415 = 0;
	}
	if (!__LIB_1__.func_215())
	{
		if (__LIB_0__.func_747())
		{
			Global_2715699.f_6416 = 1;
		}
		else
		{
			Global_2715699.f_6416 = 0;
		}
	}
	if (__LIB_6__.func_931())
	{
		if (__LIB_1__.func_765())
		{
			Global_2715699.f_6417 = 1;
		}
		else
		{
			Global_2715699.f_6417 = 0;
		}
	}
	if (!__LIB_0__.func_910())
	{
		Global_1922981.f_1345 = 0;
	}
	if (!__LIB_1__.func_215() && !__LIB_0__.func_910())
	{
		__LIB_1__.func_777(1, Global_1922955.f_9 != 4);
		__LIB_1__.func_786(1, 1, 0);
		__LIB_13__.func_121(0);
		__LIB_0__.func_371();
		Global_1837292 = 0;
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	__LIB_7__.func_49(1, -1);
	if (__LIB_1__.func_764())
	{
		__LIB_1__.func_763();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE();
	}
	if ((!__LIB_0__.func_698() && !__LIB_1__.func_215()) && !__LIB_0__.func_697())
	{
		__LIB_18__.func_435();
	}
	Global_4718592.f_117077 = 0;
	__LIB_0__.func_744();
	Global_1836352 = -1;
	Global_1888192 = -1;
	Global_1888182 = -1;
	Global_1888185 = -1;
	Global_1836357 = 0;
	Global_1888183 = 0;
	Global_1836581 = 0;
	Global_1836573 = 0;
	Global_1888193 = 0;
	__LIB_1__.func_762(0);
	__LIB_1__.func_761();
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 7);
	Global_1888180 = 0f;
	Global_1888181 = 0f;
	Global_1836582 = 0;
	Global_1836583 = -1;
	__LIB_1__.func_21(0);
	Global_1836571 = 0;
	Global_1836091 = 0;
	__LIB_1__.func_760();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	__LIB_1__.func_759(1);
	if (__LIB_1__.func_758())
	{
		__LIB_1__.func_757();
	}
	if (__LIB_0__.func_912())
	{
		if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				__LIB_1__.func_756();
				__LIB_1__.func_755(1);
			}
			else
			{
				__LIB_1__.func_754();
			}
			if (Global_1922955.f_9 != -1)
			{
				__LIB_27__.func_96();
			}
		}
		else if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
		{
			if (Global_1922955.f_9 != -1)
			{
				__LIB_27__.func_96();
			}
		}
	}
	bVar4 = __LIB_0__.func_611(iVar0);
	Global_1853348[iVar0 /*834*/].f_194 = 0;
	if (bVar4 && !__LIB_0__.func_910())
	{
		__LIB_1__.func_753();
	}
	if (!bVar4)
	{
		__LIB_1__.func_752(0);
	}
	if ((__LIB_0__.func_742() != 40 && __LIB_0__.func_742() != 39) && !__LIB_1__.func_751())
	{
		Global_1835428 = { 0f, 0f, 0f };
	}
	if (__LIB_1__.func_750() && __LIB_0__.func_80())
	{
	}
	else
	{
		__LIB_1__.func_749();
	}
	__LIB_1__.func_748();
	__LIB_1__.func_755(0);
	bVar6 = false;
	if (!bVar4)
	{
		if (Global_1922955.f_9 == 6)
		{
			bVar6 = true;
		}
		if (!__LIB_1__.func_747())
		{
			__LIB_1__.func_746(0, bVar6);
		}
	}
	NETWORK::NETWORK_SET_PROXIMITY_AFFECTS_TEAM(false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1922955.f_9)
		{
			case 1:
				if (!__LIB_1__.func_300() && __LIB_18__.func_323(0) > 0)
				{
					Global_1941273[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					__LIB_15__.func_514();
					__LIB_0__.func_849();
				}
				break;
			case 6:
				Global_1837290 = 0;
				if (!bVar4)
				{
					__LIB_15__.func_514();
				}
				__LIB_0__.func_849();
				Global_1922955 = 0;
				Global_1922955.f_23 = { 0f, 0f, 0f };
				MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
				StringCopy(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224), "", 24);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_221 = { 0f, 0f, 0f };
				__LIB_1__.func_745(0);
				break;
			case 2:
				__LIB_1__.func_744(0);
				if (!__LIB_1__.func_743() || (__LIB_1__.func_743() && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2714762.f_33))))
				{
					__LIB_1__.func_742(Global_1922955.f_17);
					__LIB_1__.func_741(Global_1922955.f_17);
				}
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != __LIB_0__.func_160())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2715699.f_5987 = { __LIB_0__.func_604(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && __LIB_1__.func_743()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2715699.f_5987 = { __LIB_0__.func_593() };
				}
				if (((((Global_4718592.f_593 > 1 && !__LIB_12__.func_676()) && !__LIB_1__.func_735(Global_4718592.f_116524)) && !__LIB_1__.func_734(Global_4718592.f_116524)) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4)
				{
					__LIB_1__.func_733(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
				}
				else
				{
					__LIB_1__.func_732();
				}
				break;
			case 3:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				__LIB_1__.func_731();
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != __LIB_0__.func_160())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2715699.f_5987 = { __LIB_0__.func_604(iVar5) };
					}
				}
				if (((Global_4718592.f_593 > 1 && !__LIB_12__.func_676()) && !__LIB_1__.func_735(Global_4718592.f_116524)) && !__LIB_1__.func_734(Global_4718592.f_116524))
				{
					__LIB_1__.func_733(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
				}
				else
				{
					__LIB_1__.func_732();
				}
				break;
			case 4:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				if (__LIB_0__.func_942())
				{
					__LIB_1__.func_730();
				}
				else if (__LIB_0__.func_633())
				{
				}
				else
				{
					if (!(__LIB_1__.func_206() || __LIB_0__.func_747()) || !__LIB_0__.func_725())
					{
						Global_2715699.f_6325 = 0;
						Global_2715699.f_6326 = 0;
					}
					if (!__LIB_0__.func_725())
					{
						Global_2715699.f_6324 = 0;
						Global_2715699.f_6323 = 0;
					}
				}
				if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				else if (__LIB_0__.func_175())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (__LIB_7__.func_47())
				{
					Global_1944501.f_17++;
				}
				else if (__LIB_0__.func_490())
				{
					Global_1944587.f_18++;
				}
				else if ((__LIB_0__.func_247(Global_4718592.f_116524) || __LIB_0__.func_699(Global_4718592.f_116524)) || (__LIB_7__.func_23() && __LIB_0__.func_827(249)))
				{
					Global_1944719.f_18++;
				}
				if (__LIB_0__.func_835(Global_4718592.f_116524))
				{
					if (Global_1944421.f_14 == 0)
					{
						Global_1944421.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (__LIB_1__.func_729() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							__LIB_1__.func_728(Global_4718592.f_116980);
						}
						else
						{
							__LIB_1__.func_727(Global_4718592.f_165269, Global_4718592.f_165270);
						}
						if (Global_1922955.f_14 > -1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1922955.f_14, Global_1922955.f_15, 0);
						}
						else if (__LIB_1__.func_726() > -1)
						{
							__LIB_7__.func_46(__LIB_1__.func_726(), 0);
						}
					}
					else
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(__LIB_1__.func_729(), 0, 0);
					}
				}
				if (__LIB_0__.func_941())
				{
					Var8 = { __LIB_0__.func_940() };
					__LIB_1__.func_725(Var8);
					if (__LIB_1__.func_724() != -1)
					{
						Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_1__.func_724();
					}
					__LIB_1__.func_723();
					__LIB_1__.func_722();
				}
				else
				{
					__LIB_1__.func_731();
				}
				if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					__LIB_7__.func_176(0, 0, 1);
				}
				break;
			case 5:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				__LIB_1__.func_731();
				break;
			case 8:
				if (!__LIB_1__.func_743())
				{
					__LIB_1__.func_742(Global_1922955.f_17);
				}
				break;
			case 9:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				__LIB_1__.func_731();
				__LIB_1__.func_741(Global_4718592.f_116811);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224 = { Global_4718592.f_116811 };
				if (__LIB_1__.func_721())
				{
					__LIB_1__.func_720();
				}
				if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					__LIB_7__.func_176(0, 0, 1);
				}
				break;
			case 10:
				func_688(10, 0f, 0f, 0f, Var9);
				__LIB_1__.func_719();
				break;
		}
	}
	else
	{
		Global_1837290 = 0;
	}
	if (iVar2 || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_1__.func_718(PLAYER::PLAYER_ID()) || __LIB_0__.func_693(PLAYER::PLAYER_ID())) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			if (Global_1931908 > 0)
			{
				Global_2715699.f_1.f_2828.f_13 = Global_1931908;
				Global_2715699.f_1.f_2828 = { Global_1931908.f_1 };
			}
		}
		else
		{
			__LIB_1__.func_717();
		}
	}
	Global_2715699.f_1.f_842 = 0;
	MISC::CLEAR_BIT(&Global_1836095, 0);
	__LIB_1__.func_716(0);
	Global_1836362 = 0;
	Global_1836566 = -1;
	Global_1888110 = 0;
	Global_1574602 = 0;
	Global_1922955.f_1 = 0;
	Global_1922955.f_2 = 0;
	if (__LIB_1__.func_715() == 0)
	{
		if (Global_1922955.f_9 == -1 && bVar4 == 0)
		{
			__LIB_27__.func_95(0);
		}
		else
		{
			Global_1922955.f_9 = -1;
		}
	}
	__LIB_1__.func_710();
	if (__LIB_1__.func_709())
	{
		__LIB_1__.func_708();
	}
	if (__LIB_1__.func_203())
	{
		__LIB_1__.func_707();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	if (__LIB_1__.func_715() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!__LIB_1__.func_706(Global_1853348[iVar0 /*834*/]) && !__LIB_0__.func_698()) && !bVar4) && !__LIB_0__.func_155(0)) && !__LIB_1__.func_215()) && !__LIB_0__.func_697())
			{
				__LIB_1__.func_705(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	__LIB_1__.func_704();
	Global_1922955.f_1 = 0;
	if (!__LIB_0__.func_912())
	{
		__LIB_1__.func_703();
	}
	if (Global_1853348[iVar0 /*834*/] != -1)
	{
		iParam2 = iParam2;
		if (__LIB_1__.func_702(Global_1853348[iVar0 /*834*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar10 = __LIB_33__.func_143(0);
				__LIB_2__.func_281(1213, -1);
				__LIB_7__.func_57(joaat("MPPLY_MGAME_CHEAT_END"), iVar10);
				if (iVar10 > 0)
				{
					__LIB_7__.func_57(joaat("MPPLY_ACTIVITY_ENDED"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
	}
	__LIB_21__.func_602();
	if (Global_1922955 == 0)
	{
		if (!bVar4)
		{
			Global_1853348[iVar0 /*834*/].f_10 = -1;
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 1);
		}
	}
	if (bVar4)
	{
		__LIB_1__.func_705(0);
		MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 1);
		Global_1853348[iVar0 /*834*/].f_10 = __LIB_1__.func_691(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		__LIB_7__.func_176(0, 0, 1);
		if (__LIB_1__.func_690())
		{
			__LIB_20__.func_926();
		}
	}
	if ((Global_1853348[iVar0 /*834*/] < 10 && Global_1853348[iVar0 /*834*/] != -1) && !__LIB_0__.func_155(0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1853348[iVar0 /*834*/].f_144)) && Global_1853348[iVar0 /*834*/] != 5) && Global_1853348[iVar0 /*834*/] != 148)
		{
			__LIB_13__.func_120(&(Global_1853348[iVar0 /*834*/].f_144));
		}
	}
	if (Global_1853348[iVar0 /*834*/] != 6)
	{
		Global_1922902 = 1;
	}
	Global_1853348[iVar0 /*834*/] = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_2 = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_16 = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar4)
	{
		__LIB_1__.func_687(0);
	}
	Global_1853348[iVar0 /*834*/].f_36.f_18 = 0;
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_768), 0);
	HUD::SET_MISSION_NAME_FOR_UGC_MISSION(false, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		HUD::THEFEED_FLUSH_QUEUE();
		Global_2726719 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1853348[iVar0 /*834*/].f_144), sVar11, 24);
		StringCopy(&(Global_1853348[iVar0 /*834*/].f_150), sVar11, 24);
		__LIB_1__.func_686();
	}
	StringCopy(&(Global_1880037[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1853348[iVar0 /*834*/].f_164), sVar11, 64);
	Global_1888862[iVar0 /*120*/].f_31 = { Var12 };
	Global_1888862[iVar0 /*120*/].f_33 = { Var12 };
	Global_1836576 = 0;
	Global_1836577 = 0;
	Global_1836103 = -1;
	bVar13 = false;
	__LIB_1__.func_685();
	__LIB_1__.func_684();
	__LIB_1__.func_683();
	if (__LIB_1__.func_682())
	{
		__LIB_1__.func_681();
	}
	if (__LIB_1__.func_680() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_1__.func_679();
		__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 57348, 0);
	}
	if (__LIB_1__.func_678())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_239())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_240())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_676())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_675())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_715())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_0__.func_194() && __LIB_1__.func_674())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_673())
	{
		__LIB_1__.func_677();
	}
	else
	{
		__LIB_1__.func_672();
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 1) && !__LIB_0__.func_910())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (__LIB_1__.func_690())
				{
					__LIB_1__.func_671();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							Global_2715699.f_2846.f_198 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
						}
					}
					__LIB_1__.func_670();
					__LIB_0__.func_950();
					__LIB_1__.func_605(6);
					__LIB_0__.func_849();
					if (bVar4)
					{
						__LIB_1__.func_774(0);
					}
				}
				__LIB_1__.func_669();
				__LIB_1__.func_668();
				__LIB_1__.func_667();
				if (Global_2715699.f_2846.f_4 == 2)
				{
					Global_2715699.f_2846.f_4 = 1;
				}
				if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__.func_666();
				}
				__LIB_1__.func_665();
				Global_2715699.f_2846 = 0;
			}
			else
			{
				__LIB_1__.func_664();
				__LIB_1__.func_677();
			}
		}
		else
		{
			if (!__LIB_0__.func_747() && !__LIB_0__.func_910())
			{
			}
			__LIB_1__.func_664();
			__LIB_1__.func_677();
		}
	}
	if ((((((((((!__LIB_1__.func_678() && !__LIB_1__.func_663()) && !__LIB_1__.func_674()) && !__LIB_0__.func_194()) && !__LIB_1__.func_240()) && !__LIB_1__.func_239()) && !__LIB_1__.func_238()) && !__LIB_1__.func_675()) && !__LIB_1__.func_715()) && !__LIB_1__.func_676()) && !__LIB_1__.func_662())
	{
		if (!__LIB_0__.func_739())
		{
			__LIB_1__.func_661();
			__LIB_20__.func_934();
			__LIB_1__.func_659();
			__LIB_7__.func_694(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!__LIB_1__.func_657())
				{
					if (!bVar13)
					{
						if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__.func_155(0))
	{
		StringCopy(&(Global_4718592.f_116531), "", 64);
	}
	if (__LIB_1__.func_656(116, &iVar14))
	{
		__LIB_1__.func_655(iVar14);
	}
	if (__LIB_1__.func_656(123, &iVar14))
	{
		__LIB_1__.func_655(iVar14);
	}
	if (!__LIB_0__.func_910())
	{
		__LIB_24__.func_986();
	}
	else if (__LIB_1__.func_654())
	{
		__LIB_1__.func_653();
	}
	__LIB_1__.func_652();
	if (!__LIB_1__.func_215() && !__LIB_0__.func_747())
	{
		__LIB_1__.func_651();
	}
	__LIB_1__.func_650();
	__LIB_13__.func_119();
	__LIB_36__.func_315(bParam3);
}

int func_1349(int iParam0)//Position - 0x9747E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!__LIB_6__.func_781())
	{
		return 0;
	}
	iVar2 = __LIB_1__.func_556(757, -1, 0);
	MISC::SET_BIT(&iVar2, iParam0);
	__LIB_1__.func_597(757, iVar2, -1, 1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_0__.func_915(iVar2, iVar0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_778(45, 1);
	}
	return 1;
}

int func_1352(var uParam0, int* iParam1, int* iParam2)//Position - 0x9759A
{
	int iVar0;
	int iVar1;
	int iVar2;
	HUD::CLEAR_HELP(true);
	if (*uParam0 != 9)
	{
		*uParam0 = 9;
	}
	if (__LIB_0__.func_3() == 0)
	{
		iVar0 = 40;
		iVar1 = 0;
		iVar2 = 4;
		func_1362(uParam0, &iVar0, &iVar1, iVar2, 1, 1, 1, 0);
		Global_1853348[PLAYER::PLAYER_ID() /*834*/] = 14;
		func_1361(uParam0->f_2, uParam0->f_1, uParam0->f_16);
	}
	else
	{
		__LIB_0__.func_673(__LIB_6__.func_875(*uParam0), *uParam0);
		__LIB_1__.func_569(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(5);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(iParam1, 79, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam2, 493, 0);
	iLocal_233 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (__LIB_0__.func_80() || __LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
	{
		iLocal_233 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (__LIB_0__.func_80())
		{
			func_1085(iParam2[iLocal_233 /*123*/], 18);
		}
		if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
		{
			func_1085(iParam2[iLocal_233 /*123*/], 19);
			func_716(iParam2[iLocal_233 /*123*/], 18);
		}
	}
	__LIB_1__.func_0(iParam2[iLocal_233 /*123*/], 1);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_1__.func_1(iParam1, 4);
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(iParam1->f_49), &(iParam1->f_50));
	}
	if (!__LIB_0__.func_672())
	{
		return 0;
	}
	return 1;
}

void func_1361(var uParam0, var uParam1, var uParam2)//Position - 0x986A8
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	Global_1853348[iVar0 /*834*/].f_36.f_2 = uParam0;
	Global_1853348[iVar0 /*834*/].f_36.f_1 = uParam1;
	Global_1853348[iVar0 /*834*/].f_36.f_16 = uParam2;
	Global_1853348[iVar0 /*834*/].f_1 = -1;
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_36.f_18), 0);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_36.f_18), 7);
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_7__.func_60(PLAYER::PLAYER_ID())) && !__LIB_0__.func_80())
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_1362(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x9874F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_1__.func_829();
	__LIB_1__.func_828();
	Global_1931427 = 0;
	__LIB_1__.func_827();
	__LIB_1__.func_826(2);
	Global_1057165 = 0;
	if (__LIB_0__.func_494() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_0__.func_748();
	}
	__LIB_1__.func_789();
	__LIB_1__.func_787();
	Global_1922915.f_4 = 0;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam3, false, uParam0->f_16);
	if ((!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0) && __LIB_0__.func_80()) && !__LIB_7__.func_205())
	{
		iVar0 = __LIB_1__.func_825();
		if (iVar0 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				__LIB_7__.func_176(1, PLAYER::GET_PLAYER_PED(iVar0), 1);
			}
		}
	}
	__LIB_13__.func_123();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(true);
	if (__LIB_1__.func_680())
	{
		__LIB_1__.func_679();
	}
	iVar1 = __LIB_1__.func_825();
	if (iVar1 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
	}
	__LIB_1__.func_824();
	__LIB_1__.func_823();
	__LIB_1__.func_822();
	__LIB_1__.func_821();
	__LIB_1__.func_820();
	__LIB_1__.func_819();
	bVar2 = false;
	if (__LIB_0__.func_912())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
		}
	}
	__LIB_1__.func_769(PLAYER::PLAYER_ID(), 0);
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(false);
	}
	__LIB_1__.func_752(0);
	Global_1888183 = 0;
	if (__LIB_7__.func_52(8))
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 28);
	}
	if (__LIB_6__.func_884())
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 27);
	}
	__LIB_1__.func_818();
	__LIB_1__.func_817();
	if ((__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0) || __LIB_0__.func_80()) || __LIB_7__.func_205())
	{
		__LIB_18__.func_451(8, 0, 1);
	}
	else
	{
		__LIB_18__.func_451(2, 0, 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((Global_4718592 != 5 && Global_4718592 != 6) && Global_4718592 != 32) && Global_4718592 != 148)
		{
			__LIB_1__.func_816();
		}
		if (Global_4718592 != 5 || *iParam1 != 40)
		{
			if (bParam5)
			{
				if (Global_4980736.f_78574 > 0 || Global_4980736.f_202536 > 0)
				{
					iVar3 = Global_4980736.f_78574;
					iVar3 = (iVar3 + Global_4980736.f_202536);
					if (__LIB_0__.func_912())
					{
						iVar3++;
					}
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar3);
				}
			}
			if (bParam4)
			{
				if (Global_4980736.f_94384 > 0 || Global_4980736.f_202537 > 0)
				{
					if (Global_4718592 == 1)
					{
					}
					else
					{
						iVar4 = Global_4980736.f_94384;
						if (Global_4718592.f_116990 != 0)
						{
							iVar4++;
						}
						iVar4 = (iVar4 + Global_4980736.f_202537);
						if (iVar4 > 50)
						{
							iVar4 = 50;
						}
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar4);
					}
				}
			}
			if ((((Global_4980736.f_5739 > 0 || Global_4980736.f_63310 > 0) || Global_4980736.f_36354 > 0) || BitTest(Global_4718592.f_13, 24)) || Global_4980736.f_202535 > 0)
			{
				iVar5 = Global_4980736.f_5739;
				iVar5 = (iVar5 + __LIB_1__.func_815(iParam7) * 3);
				if (BitTest(Global_4718592.f_13, 24))
				{
					iVar5 += 16;
				}
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((((iVar5 + Global_4980736.f_63310) + Global_4980736.f_36354) + Global_4980736.f_202535));
			}
		}
		if (!bVar2)
		{
			if (__LIB_0__.func_912() && __LIB_9__.func_831())
			{
				NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, uParam0->f_16);
			}
		}
	}
	__LIB_1__.func_569(0, -1, 0);
	if (!__LIB_1__.func_814())
	{
		__LIB_1__.func_813();
	}
	if (!__LIB_1__.func_812())
	{
		__LIB_1__.func_811();
	}
	if (__LIB_6__.func_517())
	{
		__LIB_1__.func_810();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (uParam0->f_16 != -1)
		{
			*iParam1 = uParam0->f_2;
			*iParam2 = uParam0->f_1;
		}
		else
		{
			*iParam1 = PLAYER::PLAYER_ID();
			*iParam2 = 0;
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	func_1361(uParam0->f_2, uParam0->f_1, uParam0->f_16);
	if (bParam6)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	if (Global_4718592 == 0)
	{
		if (!__LIB_0__.func_80() && !__LIB_1__.func_215())
		{
			if (!__LIB_0__.func_912())
			{
				MISC::CLEAR_AREA(0f, 0f, 0f, 16000f, true, false, false, false);
			}
		}
	}
	else if (Global_4718592 == 6)
	{
		__LIB_1__.func_27(17);
	}
	if (__LIB_0__.func_80())
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
		if ((((Global_4718592 != 2 && Global_4718592 != 8) && Global_4718592 != 0) && Global_4718592 != 1) && Global_4718592 != 3)
		{
			__LIB_1__.func_809();
			__LIB_1__.func_808();
			__LIB_1__.func_807();
		}
	}
	if (((((((((Global_4718592 == 10 || Global_4718592 == 15) || Global_4718592 == 14) || Global_4718592 == 11) || Global_4718592 == 92) || Global_4718592 == 35) || Global_4718592 == 33) || Global_4718592 == 34) || Global_4718592 == 13) || Global_4718592 == 12)
	{
		if (__LIB_27__.func_195(0) > 0)
		{
			__LIB_1__.func_910(4, -1);
		}
	}
	if (!__LIB_0__.func_912())
	{
		__LIB_1__.func_806(Global_4718592, uParam0->f_1);
	}
	Global_1922955 = 0;
	Global_1922955.f_23 = { 0f, 0f, 0f };
	Global_2703735.f_61.f_69 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_1__.func_805();
}

