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
	int iLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<437> Local_239 = { 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = -1;
	var uLocal_244 = 0;
	var uLocal_245 = 3;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 16;
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
	var uLocal_282 = 12;
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
	var uLocal_980 = 1065353216;
	var uLocal_981 = 0;
	var uLocal_982 = 16;
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
	var uLocal_1022 = 3;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
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
	struct<19> Local_1055 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_1056 = -1;
	var uLocal_1057 = -1;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<5> Var0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int* iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int* iVar13;
	int iVar14[2];
	struct<97> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	struct<26> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<4> Var24;
	int iVar25;
	int iVar26;
	struct<25> Var27;
	struct<682> Var28;
	int* iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	var uVar33;
	int iVar34;
	struct<13> Var35[2];
	var uVar36;
	int* iVar37;
	int* iVar38;
	int* iVar39;
	int* iVar40;
	int* iVar41;
	int* iVar42;
	int* iVar43;
	int* iVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50[2];
	int iVar51;
	int iVar52;
	int iVar53;
	var uVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	struct<2> Var77[2];
	struct<8> Var78;
	struct<6> Var79;
	char* sVar80[2];
	int iVar81;
	struct<4> Var82;
	struct<64> Var83;
	struct<34> Var84[16];
	int iVar85;
	bool bVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	struct<3> Var104;
	float fVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	float fVar113;
	struct<3> Var114;
	struct<26> Var115;
	struct<26> Var116;
	struct<26> Var117;
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
	iLocal_232 = 1;
	Var0.f_1 = 2;
	Local_173 = { Local_173 };
	bVar1 = false;
	bVar2 = false;
	bVar4 = true;
	bVar5 = false;
	iVar7 = 0;
	bVar8 = false;
	Local_171 = { 1f, 1f, 1f };
	Var15 = 2;
	Var15.f_1 = 3;
	Var15.f_1.f_84 = 3;
	Var15.f_1.f_90.f_2 = 1;
	Var15.f_1.f_90.f_3 = 1;
	Var15.f_1.f_97 = 3;
	Var15.f_1.f_97.f_84 = 3;
	Var15.f_1.f_97.f_90.f_2 = 1;
	Var15.f_1.f_97.f_90.f_3 = 1;
	iVar14[0] = -1;
	iVar14[iLocal_232] = -1;
	iVar16 = 0;
	iVar17 = 0;
	Var21 = 3;
	Var21.f_84 = 2;
	Var21.f_87 = 2;
	Var21.f_96 = 16;
	Var27.f_1 = 2;
	Var27.f_1.f_1 = 7;
	Var27.f_1.f_1.f_8 = 7;
	Var28.f_3 = 8;
	Var28.f_12 = 8;
	Var28.f_21 = 4;
	Var28.f_26.f_3 = 8;
	Var28.f_26.f_12 = 8;
	Var28.f_26.f_21 = 4;
	Var28.f_72 = 3;
	Var28.f_72.f_44.f_3.f_1 = 4;
	Var28.f_72.f_113 = 2;
	Var28.f_72.f_113.f_1.f_1 = 4;
	Var28.f_72.f_113.f_1.f_66.f_1 = 4;
	Var28.f_72.f_246.f_6 = 12;
	Var28.f_72.f_246.f_187 = 3;
	Var28.f_509.f_2 = 8;
	Var28.f_509.f_2.f_1.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var28.f_681 = 2;
	iVar34 = 2;
	iVar46 = 0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		iVar81 = func_974(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	func_973(&Var82, iVar81);
	Var22 = { Var82 };
	Var22.f_3 = Var82.f_3;
	iVar31 = iVar81;
	fLocal_176 = 0.06f;
	fLocal_177 = 0.08f;
	fLocal_174 = fLocal_176;
	fLocal_175 = fLocal_177;
	Global_2703735.f_3580.f_37 = 0;
	bVar72 = false;
	if (BitTest(ScriptParam_1055.f_18, 1))
	{
		bVar1 = true;
	}
	if (BitTest(ScriptParam_1055.f_18, 2))
	{
		bVar2 = true;
	}
	if (BitTest(ScriptParam_1055.f_18, 3))
	{
		bVar8 = true;
	}
	Var83.f_1 = 4;
	Var83.f_19 = 4;
	Var83.f_24 = 4;
	Var83.f_29 = 4;
	Var83.f_34 = 4;
	Var83.f_51 = 4;
	Var83.f_63.f_4 = 1;
	if (!func_962(&ScriptParam_1055, &Var83, &Var84, bVar1))
	{
		func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
	}
	if (bVar1)
	{
		func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18);
	}
	if (bVar8)
	{
		func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 30);
	}
	if (!bVar1)
	{
		__LIB_18__::func_305(0, ScriptParam_1055.f_16);
		__LIB_1__::func_898(0);
		__LIB_7__::func_79();
	}
	if (bVar2)
	{
		func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 23);
		Var83.f_39 = Global_4718592.f_116945;
		Var83.f_40 = Global_4718592.f_116946;
	}
	Var84[iLocal_234 /*34*/].f_32 = iLocal_234;
	func_930(&(Var84[iLocal_234 /*34*/]), 20);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Var84[iLocal_234 /*34*/].f_33 = 1;
	}
	else
	{
		Var84[iLocal_234 /*34*/].f_33 = 0;
	}
	if (!bVar1)
	{
		__LIB_1__::func_640(0f);
		__LIB_1__::func_896();
		__LIB_1__::func_27(38);
		AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", true);
		__LIB_1__::func_895(&(Var21.f_79), &Var22);
		__LIB_18__::func_304(&(Var21.f_79), &Var24, &Var23, 1);
		func_918(bVar8, &Var24, Var21.f_79);
	}
	while (!bVar67)
	{
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		if (!__LIB_1__::func_296(PLAYER::GET_PLAYER_INDEX()) && !__LIB_1__::func_352(PLAYER::PLAYER_ID()))
		{
			if ((!__LIB_18__::func_303(PLAYER::GET_PLAYER_INDEX(), 0, -1) && !__LIB_4__::func_520(PLAYER::GET_PLAYER_INDEX())) && !__LIB_2__::func_331(PLAYER::PLAYER_ID()))
			{
				if (Var84[iLocal_234 /*34*/] < 21)
				{
					func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
				}
			}
		}
		if (__LIB_0__::func_304(PLAYER::PLAYER_ID()) && __LIB_1__::func_352(PLAYER::PLAYER_ID()))
		{
			if (Var84[iLocal_234 /*34*/] < 21)
			{
				func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
			}
		}
		__LIB_18__::func_302(&Local_239);
		iLocal_238 = func_902(&Var84, 0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
		}
		else if (func_901(&(Var84[iLocal_234 /*34*/]), 18) || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			if ((MISC::GET_GAME_TIMER() % 30000) < 50)
			{
			}
			if (iLocal_238 >= 2)
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (!__LIB_0__::func_736(&iVar37))
				{
					__LIB_18__::func_276(&iVar37);
				}
				else if (__LIB_7__::func_78(&iVar37) > 4f)
				{
					bVar67 = true;
				}
			}
			else if (iLocal_238 >= 1)
			{
				if (!__LIB_0__::func_736(&iVar37))
				{
					__LIB_18__::func_276(&iVar37);
				}
				else if (__LIB_7__::func_78(&iVar37) > 4f)
				{
					bVar67 = true;
					func_930(&(Var84[iLocal_234 /*34*/]), 16);
				}
			}
			else if (iLocal_238 < 1)
			{
				if (!__LIB_0__::func_736(&iVar37))
				{
					__LIB_18__::func_276(&iVar37);
				}
				else if (__LIB_7__::func_78(&iVar37) > 3f)
				{
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
				}
			}
		}
		else if (iLocal_238 >= 2)
		{
			if (!__LIB_0__::func_736(&iVar37))
			{
				__LIB_18__::func_276(&iVar37);
			}
			else if (__LIB_7__::func_78(&iVar37) > 0f)
			{
				iVar85 = func_895(&Var84, &iLocal_235);
				if (iVar85 == 2)
				{
					bVar67 = true;
					if (__LIB_0__::func_736(&iVar37))
					{
						if (__LIB_7__::func_78(&iVar37) > 10f)
						{
							func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
						}
					}
				}
			}
			else if (!bVar67)
			{
				if (__LIB_0__::func_736(&iVar37))
				{
				}
			}
		}
		else if (Global_2703735.f_3580.f_37 == 1)
		{
			HUD::CLEAR_HELP(true);
			__LIB_18__::func_301(PLAYER::PLAYER_ID(), 0, 1);
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
		}
		else if (BitTest(Global_2703735.f_3580.f_35, 5))
		{
			__LIB_0__::func_210("DARTS_ENEMIES" /* GXT: Enemies in gang house, game ending. */, 7500, 0);
			__LIB_18__::func_301(PLAYER::PLAYER_ID(), 0, 1);
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		else
		{
			if (!bVar67)
			{
				if (!__LIB_0__::func_736(&iVar37))
				{
					__LIB_18__::func_276(&iVar37);
					func_892(0);
				}
				else if (__LIB_7__::func_78(&iVar37) > 3f)
				{
					bVar67 = true;
					func_930(&(Var84[iLocal_234 /*34*/]), 16);
					iLocal_236 = 1;
					Var84[iLocal_234 /*34*/].f_33 = 1;
					if (__LIB_0__::func_736(&iVar37))
					{
						__LIB_0__::func_735(&iVar37);
					}
				}
			}
			if (!bVar68)
			{
				bVar68 = true;
			}
		}
		SYSTEM::WAIT(0);
	}
	iVar17 = 0;
	iVar16 = 1;
	if (!bVar2 && !bVar1)
	{
		iVar17 = 1;
		iVar16 = 0;
	}
	if (func_901(&(Var84[iLocal_234 /*34*/]), 16))
	{
		iLocal_232 = 0;
		iVar16 = iVar17;
	}
	func_890(&Var84, &iVar14, iLocal_238, iVar17, iVar16, bVar1);
	if (!func_901(&(Var84[iLocal_234 /*34*/]), 16) && iVar14[iLocal_232] < 0)
	{
		func_930(&(Var84[iLocal_234 /*34*/]), 16);
		iLocal_232 = 0;
		iVar16 = iVar17;
		func_890(&Var84, &iVar14, iLocal_238, iVar17, iVar16, bVar1);
	}
	func_889(iLocal_238);
	iLocal_235 = iVar14[iVar16];
	Var15[0 /*97*/].f_79 = iVar14[0];
	Var15[iLocal_232 /*97*/].f_79 = iVar14[iLocal_232];
	if (bVar1)
	{
		bVar86 = func_901(&(Var84[Var15[0 /*97*/].f_79 /*34*/]), 30);
		Var15[iLocal_232 /*97*/].f_94 = { func_886(func_888(iVar81, !bVar86), Var22) };
		Var15[0 /*97*/].f_94 = { func_886(func_888(iVar81, bVar86), Var22) };
	}
	if (!bVar1)
	{
		if (iLocal_234 != iVar14[iVar17])
		{
		}
		if (iVar17 < 0 || iVar17 > 1)
		{
		}
	}
	if (bVar2 && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 16) && !bVar1)
	{
		iLocal_235 = iLocal_234;
	}
	iLocal_230 = iLocal_232;
	if (__LIB_0__::func_3() != 0)
	{
		SYSTEM::WAIT(500);
	}
	if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 16) && iLocal_235 >= 0)
	{
		if (((func_901(&(Var84[iLocal_235 /*34*/]), 5) && __LIB_0__::func_3() != 0) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18)) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			while (true)
			{
				if (!bVar69)
				{
					__LIB_18__::func_276(&iVar37);
					bVar69 = true;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || __LIB_7__::func_78(&iVar37) >= 8f)
				{
					HUD::CLEAR_HELP(true);
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 0, 0, 0);
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
	{
		HUD::DISPLAY_AREA_NAME(false);
	}
	if ((!func_901(&(Var84[iLocal_234 /*34*/]), 16) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18)) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		Var84[iLocal_234 /*34*/].f_3 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
	}
	iVar55 = __LIB_1__::func_556(65, -1, 0);
	fVar65 = (SYSTEM::TO_FLOAT(iVar55) / 100f);
	fVar66 = (fVar65 * 540f);
	iLocal_213 = SYSTEM::ROUND(fVar66) + 660;
	if (iLocal_213 < 660)
	{
		iLocal_213 = 660;
	}
	if (Global_2725346)
	{
		Global_2725346 = 0;
	}
	__LIB_31__::func_892(0);
	bVar5 = true;
	bVar4 = func_901(&(Var84[iVar14[0] /*34*/]), 16);
	if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		__LIB_1__::func_21(1);
	}
	while (true)
	{
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		SYSTEM::WAIT(0);
		iLocal_238 = func_902(&Var84, 0);
		if (__LIB_6__::func_949())
		{
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		iVar63 = 0;
		iVar61 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		iVar88 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (iVar88 != iLocal_234)
		{
			iLocal_234 = iVar88;
		}
		if (iVar62 != iVar61)
		{
			bVar74 = true;
			iVar62 = iVar61;
		}
		if (bVar74)
		{
			iVar87 = 0;
			while (iVar87 < iVar61)
			{
				iVar89 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar87);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar89))
				{
					if (__LIB_6__::func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar89), 0) || func_901(&(Var84[iVar87 /*34*/]), 18))
					{
						if (__LIB_6__::func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar89), 0))
						{
						}
						if (func_901(&(Var84[iVar87 /*34*/]), 18))
						{
						}
					}
					else
					{
						iVar63++;
						if (iVar63 != iVar64)
						{
						}
					}
				}
				iVar87++;
			}
		}
		iVar64 = iVar63;
		bVar74 = false;
		if (__LIB_6__::func_949() || __LIB_24__::func_987(1))
		{
			if (((Var84[iLocal_234 /*34*/] < 18 && Var83.f_1[func_869(&iVar14, iLocal_234)] < 3) && Var21.f_90 == 0) && Var21.f_91 == 0)
			{
				if (func_868(&Var83, &Var84, &iVar14))
				{
					__LIB_5__::func_113(23, 1, -1);
					iVar60 = __LIB_42__::func_782(PLAYER::PLAYER_ID());
				}
				else
				{
					iVar60 = __LIB_41__::func_960();
				}
				if (__LIB_0__::func_193(159))
				{
					Global_2725346 = 1;
				}
			}
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		if (__LIB_24__::func_987(1))
		{
			if (((Var84[iLocal_234 /*34*/] < 18 && Var83.f_1[func_869(&iVar14, iLocal_234)] < 3) && Var21.f_90 == 0) && Var21.f_91 == 0)
			{
				if (func_868(&Var83, &Var84, &iVar14))
				{
					__LIB_5__::func_113(23, 1, -1);
					iVar60 = __LIB_42__::func_782(PLAYER::PLAYER_ID());
				}
				else
				{
					iVar60 = __LIB_41__::func_960();
				}
			}
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		if (((Var84[iLocal_234 /*34*/] > 6 && Var84[iLocal_234 /*34*/] < 21) && !func_901(&(Var84[iLocal_234 /*34*/]), 18)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			__LIB_9__::func_490(&iVar9, 2, 1);
		}
		if (!func_901(&(Var84[iLocal_234 /*34*/]), 18))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (HUD::GET_PAUSE_MENU_STATE() == 15)
				{
					if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
					{
						HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
					}
				}
			}
		}
		if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 25))
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_901(&(Var84[iLocal_234 /*34*/]), 18))
			{
				func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
			}
			if (func_901(&(Var84[iLocal_234 /*34*/]), 18))
			{
				if (iLocal_238 < 1)
				{
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
				}
			}
			if (__LIB_1__::func_17())
			{
				MISC::SET_BIT(&uVar10, 1);
				MISC::SET_BIT(&uVar10, 0);
				func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
			}
			if (Global_1931434)
			{
				MISC::SET_BIT(&uVar10, 0);
				func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
			}
			if (!__LIB_1__::func_296(PLAYER::GET_PLAYER_INDEX()))
			{
				if (((!__LIB_18__::func_303(PLAYER::GET_PLAYER_INDEX(), 0, -1) && !__LIB_4__::func_520(PLAYER::GET_PLAYER_INDEX())) && !__LIB_2__::func_331(PLAYER::PLAYER_ID())) || __LIB_1__::func_890(PLAYER::GET_PLAYER_INDEX()))
				{
					if (func_901(&(Var84[iLocal_234 /*34*/]), 18))
					{
						func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					}
					else if (Var84[iLocal_234 /*34*/] < 18)
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
					}
				}
			}
			if (__LIB_1__::func_889() || Global_1931433)
			{
				if (Var84[iLocal_234 /*34*/] < 18)
				{
					MISC::SET_BIT(&uVar10, 0);
					func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
				}
			}
			if ((((iLocal_238 < 2 && Var84[iLocal_234 /*34*/] < 18) || (Var84[iLocal_235 /*34*/] > 19 && Var84[iLocal_234 /*34*/] < 18)) && !func_901(&(Var84[iLocal_234 /*34*/]), 16)) && !func_901(&(Var84[iLocal_234 /*34*/]), 18))
			{
				if (Var84[iLocal_234 /*34*/] == 18 || Var84[iLocal_234 /*34*/] == 19)
				{
					iVar25 = 3;
				}
				else
				{
					iVar25 = 1;
					if (func_868(&Var83, &Var84, &iVar14))
					{
						__LIB_5__::func_113(23, 1, -1);
						iVar60 = __LIB_42__::func_782(PLAYER::PLAYER_ID());
					}
					else
					{
						iVar60 = __LIB_41__::func_960();
					}
				}
				__LIB_18__::func_301(PLAYER::PLAYER_ID(), 0, 1);
				Var84[iLocal_234 /*34*/] = 20;
			}
			else if ((MISC::GET_GAME_TIMER() % 30000) < 50)
			{
			}
		}
		if (func_901(&(Var84[iLocal_234 /*34*/]), 16) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 2)
		{
			if (func_901(&(Var84[iLocal_235 /*34*/]), 18))
			{
				if (!func_901(&(Var84[iLocal_234 /*34*/]), 17))
				{
					func_930(&(Var84[iLocal_234 /*34*/]), 17);
				}
			}
		}
		else if (func_901(&(Var84[iLocal_234 /*34*/]), 17) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
		{
			func_771(&(Var84[iLocal_234 /*34*/]), 17);
		}
		if (BitTest(Global_2703735.f_3580.f_35, 5))
		{
			__LIB_0__::func_210("DARTS_ENEMIES" /* GXT: Enemies in gang house, game ending. */, 7500, 0);
			__LIB_18__::func_301(PLAYER::PLAYER_ID(), 0, 1);
			func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
		}
		if (func_770(&Var83, &(Var84[iLocal_234 /*34*/]), &iVar29))
		{
			if (func_868(&Var83, &Var84, &iVar14))
			{
				__LIB_5__::func_113(23, 1, -1);
				iVar60 = __LIB_42__::func_782(PLAYER::PLAYER_ID());
			}
			else
			{
				iVar60 = __LIB_41__::func_960();
			}
		}
		if (Var84[iLocal_234 /*34*/] >= 12 && Var84[iLocal_234 /*34*/] < 18)
		{
			if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
			{
				if (func_768(&(Var84[iLocal_234 /*34*/]), &Var28, &uVar54))
				{
					MISC::CLEAR_BIT(&iVar9, 0);
					MISC::CLEAR_BIT(&iVar9, 1);
					MISC::CLEAR_BIT(&iVar9, 2);
					Global_2725346 = 1;
					if (func_868(&Var83, &Var84, &iVar14))
					{
						__LIB_5__::func_113(23, 1, -1);
						iVar60 = __LIB_42__::func_782(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
					}
					else
					{
						iVar60 = __LIB_41__::func_960();
					}
					func_767(&Var0);
					if (func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 22) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 16))
					{
						iVar90 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])));
						if (__LIB_0__::func_121(iVar90))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar90, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 3))
							{
								TASK::TASK_PLAY_ANIM(iVar90, "anim@amb@clubhouse@mini@darts@", "outro", 1000f, -8f, -1, 0, 0f, false, false, true);
							}
						}
					}
					func_766(&(Var15[iLocal_232 /*97*/]));
					func_766(&(Var15[0 /*97*/]));
					Var28.f_669++;
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
				}
			}
		}
		if (bVar1)
		{
			iVar91 = 0;
			iVar91 = 0;
			while (iVar91 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
			{
				switch (SCRIPT::GET_EVENT_AT_INDEX(1, iVar91))
				{
					case 174:
						if (func_765(iVar91, &Var3))
						{
							if (Var3.f_0)
							{
							}
							else if (Var3.f_4)
							{
							}
						}
						break;
				}
				iVar91++;
			}
			iVar92 = 0;
			while (iVar92 < 2)
			{
				if (__LIB_13__::func_17(Var15[iVar92 /*97*/].f_79))
				{
					func_760(&(Var15[iVar92 /*97*/]), &(Var21.f_79), Var3.f_1);
				}
				iVar92++;
			}
			if (Var3.f_6 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Var27.f_0))
			{
				Var3.f_6 = 0;
				if (Var3.f_8 != -1)
				{
					__LIB_1__::func_888(&Var27, func_759(Var3.f_7), Var3.f_8);
				}
				__LIB_1__::func_887(&Var27, __LIB_0__::func_138(Var3.f_7 == 1, 0, 1));
				iVar93 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
				func_755(&(Var15[0 /*97*/]), &iVar93);
				func_751(&(Var15[0 /*97*/]), &iVar93, 0);
				if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
				{
					iVar94 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
					func_755(&(Var15[iLocal_232 /*97*/]), &iVar94);
					func_751(&(Var15[iLocal_232 /*97*/]), &iVar94, 0);
				}
			}
			switch (Var84[iLocal_234 /*34*/])
			{
				case 1:
					func_907(&(Var84[iLocal_234 /*34*/]), 4, 2);
					break;
				case 4:
					__LIB_1__::func_895(&(Var21.f_79), &Var22);
					Var21.f_79.f_4 = (Var21.f_79.f_4 + 0.01f);
					__LIB_1__::func_886(&Var27, iVar31, Var21.f_79.f_1, Var21.f_79.f_4);
					MISC::SET_BIT(&iVar9, 0);
					func_747(&Var27, bVar1);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					func_907(&(Var84[iLocal_234 /*34*/]), 5, 2);
					break;
				case 5:
					if (func_746(&Var27, bVar1))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 6, 2);
					}
					break;
				case 6:
					iVar95 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
					func_745(&(Var15[0 /*97*/]), iLocal_159);
					func_755(&(Var15[0 /*97*/]), &iVar95);
					func_751(&(Var15[0 /*97*/]), &iVar95, 0);
					func_744(&(Var15[0 /*97*/]), Var21.f_79.f_1);
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						iVar96 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
						func_745(&(Var15[iLocal_232 /*97*/]), iLocal_159);
						func_755(&(Var15[iLocal_232 /*97*/]), &iVar96);
						func_751(&(Var15[iLocal_232 /*97*/]), &iVar96, 0);
						func_744(&(Var15[iLocal_232 /*97*/]), Var21.f_79.f_1);
					}
					MISC::SET_BIT(&iVar9, 6);
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						sVar80[iLocal_232] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
						Var35[iLocal_232 /*13*/] = { __LIB_0__::func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232]))) };
						Var77[iLocal_232 /*2*/] = { __LIB_1__::func_885(&(Var35[iLocal_232 /*13*/])) };
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])))))
						{
							iVar50[iLocal_232] = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
						}
						if (!__LIB_1__::func_884(&(Var77[iLocal_232 /*2*/])))
						{
							func_737(&Var27, func_759(iLocal_232), &(Var77[iLocal_232 /*2*/]), 0);
						}
						__LIB_1__::func_883(&Var27, func_759(iLocal_232));
					}
					sVar80[0] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
					Var35[0 /*13*/] = { __LIB_0__::func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0]))) };
					Var77[0 /*2*/] = { __LIB_1__::func_885(&(Var35[0 /*13*/])) };
					iVar20 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
					if (!PED::IS_PED_INJURED(iVar20))
					{
						iVar50[0] = iVar20;
					}
					if (!__LIB_1__::func_884(&(Var77[0 /*2*/])))
					{
						func_737(&Var27, func_759(0), &(Var77[0 /*2*/]), 0);
					}
					__LIB_1__::func_883(&Var27, func_759(0));
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						__LIB_1__::func_882(&Var27, sVar80[iLocal_232], sVar80[0]);
					}
					else
					{
						__LIB_1__::func_882(&Var27, "", sVar80[0]);
					}
					func_734(&Var27, bVar4, 1, Var83.f_34[iLocal_232], Var83.f_34[0]);
					func_907(&(Var84[iLocal_234 /*34*/]), 8, 2);
					break;
				case 8:
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						if (!func_733(&Var83, 26))
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 11, 2);
						}
						else
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
						}
					}
					else
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
					}
					break;
				case 11:
					if (!__LIB_0__::func_736(&iVar37))
					{
						__LIB_18__::func_276(&iVar37);
					}
					else if ((__LIB_7__::func_42(&iVar37) >= 5f || Var84[iVar14[0] /*34*/] == 12) || Var84[iVar14[0] /*34*/] == 12)
					{
						__LIB_0__::func_735(&iVar37);
						if (Var83.f_46 == iVar17)
						{
							__LIB_1__::func_887(&Var27, 1);
						}
						else
						{
							__LIB_1__::func_887(&Var27, 0);
						}
						__LIB_7__::func_65(&iVar29);
						func_907(&(Var84[iLocal_234 /*34*/]), 12, 2);
						iVar12 = 1;
						iVar11 = 0;
						iVar18 = Var83.f_45;
					}
					break;
				case 12:
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (func_733(&Var83, 22))
					{
						if (Var83.f_1[0] == 3 || Var83.f_1[iLocal_232] == 3)
						{
							iVar12 = 3;
						}
						switch (iVar12)
						{
							case 1:
								switch (iVar11)
								{
									case 0:
										if (Var3.f_0)
										{
											Var3.f_0 = 0;
											__LIB_1__::func_881(&(Var28.f_666), 11, 0);
											iVar11 = 1;
										}
										else if ((MISC::GET_GAME_TIMER() % 1500) < 50)
										{
										}
										break;
									case 1:
										bVar19 = false;
										iVar11 = 2;
										iVar12 = 2;
										break;
									case 2:
										if ((MISC::GET_GAME_TIMER() % 2000) < 50)
										{
										}
										break;
								}
								break;
							case 2:
								if (!__LIB_0__::func_492(&(Var28.f_666), 11))
								{
									__LIB_1__::func_881(&(Var28.f_666), 11, 1);
								}
								if (!bVar19)
								{
									if ((func_727(&(Var84[iVar14[0] /*34*/]), 5) || func_727(&(Var84[iVar14[iLocal_232] /*34*/]), 5)) || Var3.f_4)
									{
										Var3.f_4 = 0;
										iVar11 = 0;
										__LIB_6__::func_892(&iVar13);
										bVar19 = true;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
								{
								}
								if (((bVar19 && (Var83.f_1[0] == 0 || Var83.f_1[iLocal_232] == 0)) && (Var84[iVar14[0] /*34*/].f_1 == 0 || Var84[iVar14[iLocal_232] /*34*/].f_1 == 0)) && __LIB_7__::func_42(&iVar13) > 1f)
								{
									if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
									{
										if (iVar18 == 1)
										{
											iVar18 = 0;
										}
										else if (iVar18 == 0)
										{
											iVar18 = 1;
										}
									}
									iVar18 = Var83.f_45;
									if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
									{
										__LIB_1__::func_887(&Var27, func_759(Var83.f_46));
									}
									__LIB_0__::func_735(&iVar13);
									Var3.f_0 = 0;
									Var3.f_4 = 0;
									iVar12 = 1;
								}
								break;
							case 3:
								iVar97 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])));
								iVar98 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iLocal_232])));
								func_755(&(Var15[0 /*97*/]), &iVar97);
								func_755(&(Var15[iLocal_232 /*97*/]), &iVar98);
								func_751(&(Var15[0 /*97*/]), &iVar97, 0);
								func_751(&(Var15[iLocal_232 /*97*/]), &iVar98, 0);
								__LIB_0__::func_735(&iVar37);
								func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
								break;
						}
					}
					else if (func_733(&Var83, 26))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
					}
					break;
				case 13:
					iVar51 = 0;
					iVar52 = 0;
					iVar51 = 0;
					while (iVar51 < 2)
					{
						Var21.f_84[iVar51] = 0;
						Var21.f_87[iVar51] = 0;
						__LIB_1__::func_883(&Var27, iVar51);
						iVar51++;
					}
					iVar99 = Var83.f_19[func_759(0)];
					if (iVar99 == 0)
					{
						iVar99 = 301;
					}
					__LIB_1__::func_888(&Var27, func_759(0), iVar99);
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						iVar99 = Var83.f_19[func_759(iLocal_232)];
						if (iVar99 == 0)
						{
							iVar99 = 301;
						}
						__LIB_1__::func_888(&Var27, func_759(iLocal_232), iVar99);
					}
					iVar52 = 0;
					while (iVar52 < 3)
					{
						Var21[iVar52 /*26*/].f_25 = 0;
						iVar52++;
					}
					__LIB_7__::func_65(&iVar29);
					iVar11 = 0;
					Var21.f_92 = 0;
					Var21.f_93 = 0;
					bVar70 = false;
					func_907(&(Var84[iLocal_234 /*34*/]), 14, 2);
					break;
				case 14:
					if (Var83.f_0 == 16)
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 16, 2);
						iVar12 = 1;
						iVar11 = 0;
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							iVar18 = __LIB_0__::func_138(Var83.f_44 == 1, iLocal_232, 0);
						}
						else
						{
							iVar18 = 0;
						}
						iVar18 = Var83.f_45;
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							__LIB_1__::func_887(&Var27, __LIB_0__::func_138(Var83.f_44 == 1, 0, 1));
						}
						else
						{
							__LIB_1__::func_887(&Var27, 1);
						}
						bVar71 = false;
					}
					break;
				case 16:
					break;
				case 17:
					switch (iVar53)
					{
						case 0:
							if (__LIB_7__::func_42(&iVar37) > 1.5f)
							{
								func_734(&Var27, bVar4, 1, Var83.f_34[iLocal_232], Var83.f_34[0]);
								iVar53++;
							}
							break;
						case 1:
							iVar51 = 0;
							while (iVar51 < 2)
							{
								__LIB_1__::func_883(&Var27, iVar51);
								iVar51++;
							}
							iVar53++;
							break;
						case 2:
							iVar53 = 0;
							func_907(&(Var84[iLocal_234 /*34*/]), 19, 2);
							break;
					}
					break;
				case 18:
					if ((MISC::GET_GAME_TIMER() % 2500) < 50 && __LIB_0__::func_736(&iVar37))
					{
					}
					if (!__LIB_0__::func_736(&iVar37))
					{
						__LIB_6__::func_892(&iVar37);
					}
					else if (__LIB_7__::func_42(&iVar37) > 0.75f)
					{
						if (func_901(&(Var84[iLocal_234 /*34*/]), 18) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 23, 2);
						}
						if ((func_901(&(Var84[iLocal_234 /*34*/]), 16) && func_727(&(Var84[iVar14[0] /*34*/]), 7)) || !((func_901(&(Var84[iLocal_234 /*34*/]), 16) && func_727(&(Var84[iVar14[0] /*34*/]), 7)) && func_727(&(Var84[iVar14[iLocal_232] /*34*/]), 7)))
						{
							if (Var83.f_0 >= 6)
							{
								iVar100 = 0;
								iVar101 = 1;
								__LIB_1__::func_883(&Var27, iVar100);
								__LIB_1__::func_883(&Var27, iVar101);
								func_907(&(Var84[iLocal_234 /*34*/]), 19, 2);
							}
						}
						Var28.f_668 = (Var28.f_668 + Var83.f_34[0]);
						Var28.f_669 = (Var28.f_669 + Var83.f_34[iLocal_232]);
						StringCopy(&(Var28.f_648), sVar80[0], 24);
						StringCopy(&(Var28.f_654), sVar80[iLocal_232], 24);
						Var28.f_671 = MISC::GET_GAME_TIMER();
					}
					break;
				case 19:
					__LIB_1__::func_880("spectate DARTS_MPSTATE_WAIT_POST_GAME", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (((func_727(&(Var84[iVar14[0] /*34*/]), 7) && func_727(&(Var84[iVar14[iLocal_232] /*34*/]), 7)) || (func_727(&(Var84[iVar14[0] /*34*/]), 7) && func_901(&(Var84[iVar14[0] /*34*/]), 16))) || Var84[iVar14[0] /*34*/] == 16)
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 13, 2);
					}
					break;
				case 20:
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
						if (func_901(&(Var84[iLocal_234 /*34*/]), 18))
						{
						}
					}
					break;
				case 23:
					if (__LIB_0__::func_649(&uVar36))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 21, 2);
					}
					else
					{
						__LIB_0__::func_580(&uVar36, 0, 0);
					}
					break;
				case 21:
					__LIB_0__::func_518(0);
					func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					break;
			}
		}
		else
		{
			iVar102 = 0;
			while (iVar102 < 2)
			{
				if (__LIB_13__::func_17(Var15[iVar102 /*97*/].f_79))
				{
					func_718(&(Var15[iVar102 /*97*/]));
				}
				iVar102++;
			}
			switch (Var84[iLocal_234 /*34*/])
			{
				case 1:
					if (Var83.f_0 > 4)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 66048, 0);
							}
							STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
							STREAMING::REQUEST_ANIM_DICT("mini@darts");
							STREAMING::REQUEST_ANIM_DICT("anim@amb@clubhouse@mini@darts@");
							func_907(&(Var84[iLocal_234 /*34*/]), 2, 0);
						}
					}
					break;
				case 2:
					func_907(&(Var84[iLocal_234 /*34*/]), 3, 0);
					break;
				case 3:
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 8))
					{
						iVar30 = 0;
						func_930(&(Var84[iLocal_234 /*34*/]), 8);
					}
					else
					{
						func_901(&(Var84[iLocal_234 /*34*/]), 8);
						func_907(&(Var84[iLocal_234 /*34*/]), 4, 0);
					}
					break;
				case 4:
					if (!__LIB_0__::func_736(&iVar43))
					{
						__LIB_18__::func_276(&iVar43);
					}
					__LIB_1__::func_895(&(Var21.f_79), &Var22);
					__LIB_18__::func_295(Var21.f_79.f_1, Var21.f_79.f_4);
					func_704(&(Var0.f_4), Var21.f_79.f_1);
					iVar103 = 0;
					while (iVar103 < 3)
					{
						__LIB_1__::func_878(&(Var21[iVar103 /*26*/]), 0);
						iVar103++;
					}
					__LIB_1__::func_877(0);
					Var21.f_79.f_4 = (Var21.f_79.f_4 + 0.01f);
					__LIB_1__::func_886(&Var27, iVar31, Var21.f_79.f_1, Var21.f_79.f_4);
					func_747(&Var27, bVar1);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					__LIB_8__::func_770(1);
					iLocal_213 = 770;
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
							}
						}
					}
					func_907(&(Var84[iLocal_234 /*34*/]), 5, 0);
					break;
				case 5:
					if (func_746(&Var27, bVar1))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 6, 0);
					}
					break;
				case 6:
					func_930(&(Var84[iLocal_234 /*34*/]), 5);
					if (__LIB_0__::func_3() == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_698();
							func_892(0);
						}
					}
					iLocal_167 = OBJECT::CREATE_OBJECT(iLocal_168, Var23, false, false, false);
					__LIB_18__::func_294(&Var28);
					__LIB_24__::func_985(&(Var28.f_26));
					sVar80[iVar17] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar17])));
					Var35[iVar17 /*13*/] = { __LIB_0__::func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar17]))) };
					Var77[iVar17 /*2*/] = { __LIB_1__::func_885(&(Var35[iVar17 /*13*/])) };
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
					{
						sVar80[iVar16] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])));
						Var35[iVar16 /*13*/] = { __LIB_0__::func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16]))) };
						Var77[iVar16 /*2*/] = { __LIB_1__::func_885(&(Var35[iVar16 /*13*/])) };
						iVar50[0] = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
						iVar50[1] = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
						__LIB_1__::func_882(&Var27, sVar80[iVar16], sVar80[iVar17]);
						if (!__LIB_1__::func_884(&(Var77[iVar16 /*2*/])))
						{
							func_737(&Var27, 0, &(Var77[iVar16 /*2*/]), 0);
						}
						if (!__LIB_1__::func_884(&(Var77[iVar17 /*2*/])))
						{
							func_737(&Var27, 1, &(Var77[iVar17 /*2*/]), 0);
						}
						__LIB_1__::func_883(&Var27, 0);
						__LIB_1__::func_883(&Var27, 1);
					}
					else
					{
						__LIB_1__::func_882(&Var27, "", sVar80[iVar17]);
						if (!__LIB_1__::func_884(&(Var77[iVar17 /*2*/])))
						{
							func_737(&Var27, 1, &(Var77[iVar17 /*2*/]), 0);
						}
						__LIB_1__::func_883(&Var27, 1);
					}
					if (Var83.f_39 > 0 || Var83.f_40 > 0)
					{
						func_734(&Var27, bVar4, bVar5, 0, 0);
					}
					if (bVar72)
					{
						__LIB_41__::func_38(13, "MN_DART" /* GXT: DARTS */, 0, 1, -1, 2, 1, 0);
						__LIB_18__::func_276(&iVar37);
						__LIB_1__::func_875(PLAYER::PLAYER_PED_ID());
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					__LIB_0__::func_994(1);
					func_907(&(Var84[iLocal_234 /*34*/]), 7, 0);
					break;
				case 7:
					if ((((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_7__::func_42(&iVar37) > 1f) && bVar72) && !__LIB_7__::func_62(PLAYER::PLAYER_ID()))
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if ((!func_901(&(Var84[iLocal_234 /*34*/]), 12) && ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && __LIB_7__::func_42(&iVar37) > 1.6f) || __LIB_7__::func_42(&iVar37) > 20f)) || !bVar72)
					{
						if (bVar72)
						{
							__LIB_1__::func_3();
							__LIB_0__::func_735(&iVar37);
						}
						func_930(&(Var84[iLocal_234 /*34*/]), 11);
						func_907(&(Var84[iLocal_234 /*34*/]), 9, 0);
						func_930(&(Var84[iLocal_234 /*34*/]), 12);
					}
					else if (!func_901(&(Var84[iLocal_234 /*34*/]), 12) && bVar72)
					{
						__LIB_18__::func_293("MN_DART" /* GXT: DARTS */);
					}
					break;
				case 8:
					if ((func_901(&(Var84[iLocal_234 /*34*/]), 12) && func_901(&(Var84[iLocal_235 /*34*/]), 12)) || (func_901(&(Var84[iLocal_234 /*34*/]), 12) && func_901(&(Var84[iLocal_234 /*34*/]), 16)))
					{
						if (__LIB_0__::func_3() == 0 && (!(func_901(&(Var84[iLocal_234 /*34*/]), 11) && func_901(&(Var84[iLocal_235 /*34*/]), 11)) && !(func_901(&(Var84[iLocal_234 /*34*/]), 11) && func_901(&(Var84[iLocal_234 /*34*/]), 16))))
						{
							if (func_634(&uVar32, &(Var21.f_79), &uVar33, &iVar34, &Var21, &iVar41, &Var84))
							{
								__LIB_6__::func_905(136, 1, -1, 1);
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									func_907(&(Var84[iLocal_234 /*34*/]), 9, 0);
								}
								else
								{
									if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29))
									{
										__LIB_42__::func_739(14, Var83.f_50, Var83.f_49, 0, 0);
										func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29);
									}
									func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
								}
							}
						}
						else
						{
							HUD::CLEAR_HELP(true);
							__LIB_1__::func_868();
							__LIB_9__::func_490(&iVar9, 0, 1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
							{
								func_907(&(Var84[iLocal_234 /*34*/]), 11, 0);
							}
							else
							{
								if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29))
								{
									__LIB_42__::func_739(14, Var83.f_50, Var83.f_49, 0, 0);
									func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29);
								}
								func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
							}
						}
					}
					break;
				case 9:
					func_454(iVar81, &iVar6, func_901(&(Var84[iLocal_234 /*34*/]), 16));
					func_907(&(Var84[iLocal_234 /*34*/]), 10, 0);
					break;
				case 10:
					switch (iVar7)
					{
						case 0:
							iVar7 = 1;
							__LIB_0__::func_735(&iVar38);
							break;
						case 1:
							Var104 = { func_888(iVar81, bVar8) };
							fVar105 = __LIB_0__::func_670(Var104, Var21.f_79.f_1);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iVar49);
								TASK::OPEN_SEQUENCE_TASK(&iVar49);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var104, 1f, 6000, fVar105, 0.02f);
								TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", func_452(bVar2), 8f, -8f, -1, 2, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar49);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar49);
							}
							iVar7 = 3;
							break;
						case 3:
							func_417(&Var84, &Var15, &Var0, iVar81);
							if (CAM::DOES_CAM_EXIST(iVar6))
							{
								CAM::SET_CAM_ACTIVE(iVar6, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								CAM::SHAKE_CAM(iVar6, "HAND_SHAKE", 0.3f);
							}
							__LIB_9__::func_490(&iVar9, 5, 1);
							__LIB_9__::func_490(&iVar9, 1, 1);
							__LIB_9__::func_490(&iVar9, 2, 1);
							__LIB_9__::func_490(&iVar9, 3, 1);
							iVar7 = 8;
							break;
						case 8:
							if (!__LIB_0__::func_736(&iVar39))
							{
								__LIB_18__::func_276(&iVar39);
							}
							else if (__LIB_7__::func_78(&iVar39) > 5.5f || PED::GET_SYNCHRONIZED_SCENE_PHASE(Var0.f_0) >= 0.95f)
							{
								__LIB_0__::func_735(&iVar39);
								func_907(&(Var84[iLocal_234 /*34*/]), 8, 0);
							}
							break;
					}
					break;
				case 11:
					if (!__LIB_0__::func_736(&iVar37))
					{
						__LIB_24__::func_969(&uLocal_1035, "DARTS_THRW_OFF", "DARTS_THRW_STR", 3000, 0, 2);
						__LIB_18__::func_276(&iVar37);
						if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_7__::func_62(PLAYER::PLAYER_ID()))
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					else if (__LIB_7__::func_42(&iVar37) >= 3.5f || !__LIB_24__::func_984(&uLocal_1035, 0))
					{
						__LIB_1__::func_3();
						__LIB_0__::func_735(&iVar37);
						if (!func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29))
						{
							__LIB_42__::func_739(14, Var83.f_50, Var83.f_49, 0, 0);
							func_930(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 29);
						}
						if (Var83.f_46 == iVar17)
						{
							__LIB_1__::func_887(&Var27, 1);
						}
						else
						{
							__LIB_1__::func_887(&Var27, 0);
						}
						__LIB_7__::func_65(&iVar29);
						__LIB_7__::func_41(&uLocal_1035);
						func_930(&(Var84[iLocal_234 /*34*/]), 15);
						func_907(&(Var84[iLocal_234 /*34*/]), 12, 0);
					}
					break;
				case 12:
					if (func_733(&Var83, 22))
					{
						if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_7__::func_62(PLAYER::PLAYER_ID()))
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
						{
							if ((!Var83.f_1[iVar17] == 3 && (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 1) == 1 || !func_727(&(Var84[iVar14[iVar16] /*34*/]), 1) == 1)) && !__LIB_0__::func_492(&(Var83.f_48), 1))
							{
								if (!bLocal_223)
								{
									if (!Var83.f_1[iVar17] == 2)
									{
										if (bVar73 && !__LIB_0__::func_492(&(Var28.f_666), 13))
										{
											if (!BitTest(Global_113347, 5))
											{
												__LIB_0__::func_151("DARTS_TIOT", -1);
												MISC::SET_BIT(&Global_113347, 5);
											}
											__LIB_1__::func_881(&(Var28.f_666), 13, 1);
										}
									}
									Var28.f_672 = 1;
								}
								else if (Var28.f_672)
								{
									HUD::CLEAR_HELP(true);
									Var28.f_672 = 0;
								}
							}
							if ((Var84[iLocal_234 /*34*/].f_1 == 0 && Var83.f_1[iVar17] == 0) || bVar71)
							{
								__LIB_18__::func_287(&Var28, Var83.f_1[iVar17] == 0);
							}
						}
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						switch (Var83.f_1[iVar17])
						{
							case 0:
								switch (Var84[iLocal_234 /*34*/].f_1)
								{
									case 0:
										if (!BitTest(Global_113347, 9))
										{
											__LIB_0__::func_151("DARTS_AIM_HLP", -1);
											MISC::SET_BIT(&Global_113347, 9);
										}
										else if (!__LIB_0__::func_1("DARTS_AIM_HLP") && !BitTest(Global_113347, 7))
										{
											__LIB_0__::func_151("DARTS_CLOCK", -1);
											MISC::SET_BIT(&Global_113347, 7);
										}
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
										{
											__LIB_18__::func_286(&(Var83.f_6), 1);
										}
										if (Var83.f_6.f_10)
										{
										}
										if (Var83.f_6.f_12)
										{
										}
										if ((!func_901(&(Var84[iLocal_234 /*34*/]), 7) && !HUD::IS_PAUSE_MENU_ACTIVE()) || Var83.f_6.f_12)
										{
											if (__LIB_35__::func_532(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), &Var23, 0, Var83.f_6.f_12, 1, 0))
											{
												func_396(Var21[Var83.f_41 /*26*/].f_11);
												if (Var83.f_6.f_12 && !bVar73)
												{
													bVar73 = true;
												}
												__LIB_1__::func_881(&(Var28.f_666), 11, 0);
												func_395(&(Var84[iLocal_234 /*34*/]), Var21[Var83.f_41 /*26*/]);
												if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
												{
													func_771(&(Var84[iLocal_234 /*34*/]), 6);
												}
												if (Global_2703735.f_3580.f_36 <= 0 || !BitTest(Global_2703735.f_3580.f_35, 2))
												{
													func_771(&(Var84[iLocal_234 /*34*/]), 9);
												}
												else
												{
													func_930(&(Var84[iLocal_234 /*34*/]), 9);
												}
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 1);
												TASK::CLEAR_SEQUENCE_TASK(&iVar49);
												TASK::OPEN_SEQUENCE_TASK(&iVar49);
												TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_overlay", 8f, -8f, -1, 2, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 1000f, -8f, -1, 1, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iVar49);
												TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar49);
												func_393(&(Var84[iLocal_234 /*34*/].f_1), 1, 0);
											}
										}
										break;
									case 1:
										__LIB_1__::func_880("[AM_DARTS] current client is THROWING", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 9))
										{
											if (__LIB_24__::func_981(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
											{
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
												func_393(&(Var84[iLocal_234 /*34*/].f_1), 2, 0);
											}
										}
										else if (!__LIB_0__::func_736(&iVar40))
										{
											if (__LIB_1__::func_854(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
											{
												__LIB_18__::func_283(PLAYER::PLAYER_ID(), 2, 0);
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
												__LIB_6__::func_892(&iVar40);
											}
										}
										else if (__LIB_7__::func_42(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
										{
											if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_930(&(Var84[iLocal_234 /*34*/]), 6);
											}
											__LIB_0__::func_735(&iVar40);
											func_393(&(Var84[iLocal_234 /*34*/].f_1), 0, 0);
										}
										break;
									case 2:
										__LIB_18__::func_282(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
										Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
										Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
										Var84[iLocal_234 /*34*/].f_4.f_22 = Var21[Var83.f_41 /*26*/].f_22;
										func_393(&(Var84[iLocal_234 /*34*/].f_1), 3, 0);
										__LIB_1__::func_880("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
									case 3:
										if (Var84[iLocal_235 /*34*/].f_2 >= 3)
										{
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
											func_930(&(Var84[iLocal_234 /*34*/]), 21);
											if (!Var21[Var83.f_41 /*26*/].f_25)
											{
												Var21[Var83.f_41 /*26*/].f_25 = 1;
												Var84[iLocal_234 /*34*/].f_4.f_25 = 1;
												func_379();
											}
											SYSTEM::SETTIMERA(0);
										}
										__LIB_1__::func_880("Waiting for other client to get to DARTS_MPWAIT_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
								}
								break;
							case 1:
								switch (Var84[iLocal_234 /*34*/].f_2)
								{
									case 0:
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
										{
											__LIB_18__::func_286(&(Var83.f_6), 0);
										}
										if (!bVar71)
										{
											bVar71 = true;
										}
										if (func_727(&(Var84[iVar14[iVar16] /*34*/]), 1))
										{
											__LIB_1__::func_881(&(Var28.f_666), 11, 0);
											func_378(&(Var21[Var83.f_41 /*26*/]), &(Var84[iLocal_235 /*34*/]), iLocal_235);
											if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_771(&(Var84[iLocal_234 /*34*/]), 6);
											}
											Var84[iLocal_234 /*34*/].f_2 = 1;
										}
										else
										{
											__LIB_1__::func_880("Current client is waiting for other client to throw", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										}
										break;
									case 1:
										if (!func_901(&(Var84[iLocal_235 /*34*/]), 9))
										{
											if (__LIB_24__::func_981(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
											{
												func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
												Var84[iLocal_234 /*34*/].f_2 = 2;
											}
										}
										else if (!__LIB_0__::func_736(&iVar40))
										{
											if (__LIB_1__::func_854(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
											{
												__LIB_6__::func_892(&iVar40);
											}
										}
										else if (__LIB_7__::func_78(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
										{
											if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_930(&(Var84[iLocal_234 /*34*/]), 6);
											}
											__LIB_0__::func_735(&iVar40);
											Var84[iLocal_234 /*34*/].f_2 = 0;
										}
										break;
									case 2:
										if (Var84[iLocal_235 /*34*/].f_1 >= 2)
										{
											__LIB_18__::func_282(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
											Var84[iLocal_234 /*34*/].f_4.f_22 = Var21[Var83.f_41 /*26*/].f_22;
											Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
											Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
											Var84[iLocal_234 /*34*/].f_2 = 3;
										}
										__LIB_1__::func_880("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
									case 3:
										if (Var84[iLocal_235 /*34*/].f_1 >= 3)
										{
											func_930(&(Var84[iLocal_234 /*34*/]), 21);
											if (!Var21[Var83.f_41 /*26*/].f_25)
											{
												Var21[Var83.f_41 /*26*/].f_25 = 1;
											}
											SYSTEM::SETTIMERA(0);
										}
										__LIB_1__::func_880("Waiting for other client to get to DARTS_MPTHROW_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
										break;
								}
								break;
							case 2:
								if (!__LIB_0__::func_492(&(Var28.f_666), 11))
								{
									if (iLocal_234 == Var83.f_45)
									{
									}
									__LIB_1__::func_881(&(Var28.f_666), 11, 1);
								}
								if (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 5) && SYSTEM::TIMERA() > 1000)
								{
									Var84[iLocal_234 /*34*/].f_2 = 0;
									Var84[iLocal_234 /*34*/].f_1 = 0;
									Var21[Var83.f_41 /*26*/].f_25 = 0;
									func_771(&(Var84[iLocal_234 /*34*/]), 21);
									HUD::CLEAR_HELP(true);
									if (__LIB_0__::func_492(&(Var83.f_48), 1))
									{
										iVar106 = 0;
										while (iVar106 < 3)
										{
											Var21[iVar106 /*26*/].f_25 = 0;
											iVar106++;
										}
										if (iVar17 != Var83.f_45)
										{
											bVar71 = false;
										}
										if (Var83.f_45 == iVar17)
										{
											func_377(Var83.f_45, -1);
										}
										if (Var83.f_46 == iVar17)
										{
											__LIB_1__::func_887(&Var27, 1);
										}
										else
										{
											__LIB_1__::func_887(&Var27, 0);
										}
										iLocal_179 = 0;
									}
									func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 1);
								}
								break;
							case 3:
								if (!__LIB_0__::func_736(&iVar37))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									if (Var83.f_43 == iVar17)
									{
										StringCopy(&Var78, "<C>", 64);
										StringConCat(&Var78, "~HUD_COLOUR_BLUE~", 64);
										StringConCat(&Var78, sVar80[iVar17], 64);
										StringConCat(&Var78, "</C>", 64);
										StringConCat(&Var78, "~s~", 64);
										__LIB_24__::func_980(&uLocal_1035, "DARTS_THRW_WIN", "DARTS_FIRST_DT", &Var78, 3000, 0, 1);
										AUDIO::PLAY_SOUND_FRONTEND(-1, "WINNER", "CELEBRATION_SOUNDSET", true);
									}
									else
									{
										StringCopy(&Var78, "<C>", 64);
										StringConCat(&Var78, "~HUD_COLOUR_RED~", 64);
										StringConCat(&Var78, sVar80[iVar16], 64);
										StringConCat(&Var78, "</C>", 64);
										StringConCat(&Var78, "~s~", 64);
										__LIB_24__::func_980(&uLocal_1035, "DARTS_THRW_LOS", "DARTS_FIRST_DT", &Var78, 3000, 0, 6);
										AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "CELEBRATION_SOUNDSET", true);
									}
									CAM::SET_CAM_ACTIVE(iLocal_191, true);
									__LIB_18__::func_276(&iVar37);
								}
								else if (__LIB_7__::func_42(&iVar37) >= 5f || !__LIB_24__::func_984(&uLocal_1035, 1))
								{
									iVar107 = 0;
									while (iVar107 < 3)
									{
										__LIB_1__::func_852(&(Var21[iVar107 /*26*/]));
										Var21[iVar107 /*26*/].f_25 = 0;
										iVar107++;
									}
									__LIB_0__::func_735(&iVar37);
									__LIB_7__::func_41(&uLocal_1035);
									func_930(&(Var84[iLocal_234 /*34*/]), 15);
									func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
								}
								break;
							}
					}
					break;
				case 13:
					iVar51 = 0;
					iVar52 = 0;
					iVar51 = 0;
					while (iVar51 < 2)
					{
						Var21.f_84[iVar51] = 0;
						Var21.f_87[iVar51] = 0;
						__LIB_1__::func_883(&Var27, iVar51);
						iVar51++;
					}
					__LIB_1__::func_888(&Var27, 1, 301);
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
					{
						__LIB_1__::func_888(&Var27, 0, 301);
					}
					iVar52 = 0;
					while (iVar52 < 3)
					{
						__LIB_1__::func_852(&(Var21[iVar52 /*26*/]));
						Var21[iVar52 /*26*/].f_25 = 0;
						iVar52++;
					}
					func_373(&(Var84[iLocal_234 /*34*/]));
					__LIB_7__::func_65(&iVar29);
					func_393(&(Var84[iLocal_234 /*34*/].f_1), 0, 0);
					Var84[iLocal_234 /*34*/].f_2 = 0;
					func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
					Var21.f_92 = 0;
					Var21.f_93 = 0;
					bVar70 = false;
					iLocal_179 = 0;
					iLocal_181 = 0;
					__LIB_1__::func_881(&(Var28.f_666), 12, 0);
					__LIB_0__::func_994(0);
					func_930(&(Var84[iLocal_234 /*34*/]), 1);
					func_907(&(Var84[iLocal_234 /*34*/]), 14, 0);
					break;
				case 14:
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !__LIB_0__::func_497())
					{
						__LIB_18__::func_281(&Var28, 0);
					}
					if (Var83.f_0 == 16)
					{
						func_394(&(Var84[iVar14[iVar17] /*34*/]), 7, 0);
						func_767(&Var0);
						__LIB_1__::func_167();
						HUD::DISPLAY_RADAR(false);
						__LIB_1__::func_868();
						__LIB_9__::func_490(&iVar9, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (__LIB_1__::func_850(__LIB_1__::func_556(1260, -1, 0), &iVar56))
						{
							__LIB_1__::func_881(&(Var28.f_666), 24, 1);
						}
						fLocal_176 = __LIB_1__::func_849(__LIB_1__::func_556(1260, -1, 0));
						fLocal_177 = __LIB_1__::func_848(__LIB_1__::func_556(1260, -1, 0));
						fLocal_174 = fLocal_176;
						fLocal_175 = fLocal_177;
						func_771(&(Var84[iLocal_234 /*34*/]), 1);
						if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
						{
							uLocal_222[4]++;
						}
						__LIB_18__::func_280(&Var28);
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							__LIB_1__::func_887(&Var27, __LIB_0__::func_138(Var83.f_44 == iVar17, 1, 0));
						}
						else
						{
							__LIB_1__::func_887(&Var27, 1);
						}
						bVar71 = false;
						__LIB_1__::func_846(&iVar9, 7);
						__LIB_0__::func_735(&iVar44);
						func_907(&(Var84[iLocal_234 /*34*/]), 16, 0);
					}
					else if (!__LIB_0__::func_736(&iVar44))
					{
						__LIB_18__::func_276(&iVar44);
					}
					else if (__LIB_7__::func_78(&iVar44) >= 25f)
					{
						__LIB_1__::func_846(&iVar9, 7);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					}
					else if (__LIB_7__::func_78(&iVar44) >= 12f && __LIB_7__::func_78(&iVar44) < 25f)
					{
						if (!__LIB_5__::func_70(&iVar9, 7))
						{
							__LIB_1__::func_845(&iVar9, 7);
						}
					}
					break;
				case 15:
					if (func_733(&Var83, 20))
					{
						func_907(&(Var84[iLocal_234 /*34*/]), 16, 0);
					}
					break;
				case 16:
					if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_7__::func_62(PLAYER::PLAYER_ID()))
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar30)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_10__::func_567(Var24, 1) > 1.5f)
							{
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
							{
								iVar30 = 0;
							}
							break;
					}
					if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
					{
						if ((!Var83.f_1[iVar17] == 3 && (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 1) || !func_727(&(Var84[iVar14[iVar16] /*34*/]), 1))) && !__LIB_0__::func_492(&(Var83.f_48), 1))
						{
							if (!bLocal_223)
							{
								if (__LIB_0__::func_492(&(Var28.f_666), 18) && Var83.f_1[iVar17] == 0)
								{
									if (!__LIB_0__::func_492(&(Var28.f_666), 21))
									{
										if (!BitTest(Global_113347, 3))
										{
											__LIB_0__::func_151("DARTS_INSTR_W", -1);
											MISC::SET_BIT(&Global_113347, 3);
										}
										__LIB_1__::func_881(&(Var28.f_666), 21, 1);
									}
									else if (!__LIB_0__::func_492(&(Var28.f_666), 20) && __LIB_0__::func_492(&(Var28.f_666), 19))
									{
										if (!BitTest(Global_113347, 4))
										{
											__LIB_0__::func_151("DARTS_INSTR_B", -1);
											MISC::SET_BIT(&Global_113347, 4);
										}
										__LIB_1__::func_881(&(Var28.f_666), 20, 1);
									}
								}
								if (((bVar70 && !__LIB_0__::func_1("DARTS_SHT_USE")) && !__LIB_0__::func_1("DARTS_FST_HLP")) && Var83.f_1[iVar17] == 0)
								{
								}
								else if (!Var83.f_1[iVar17] == 2)
								{
									if ((((bVar73 && !__LIB_0__::func_492(&(Var28.f_666), 13)) && !__LIB_0__::func_1("DARTS_INSTR_W")) && !__LIB_0__::func_1("DARTS_INSTR_B")) && (__LIB_0__::func_736(&(Var83.f_6)) && __LIB_7__::func_42(&(Var83.f_6)) < 5f))
									{
										if (!BitTest(Global_113347, 5))
										{
											__LIB_0__::func_151("DARTS_TIOT", -1);
											MISC::SET_BIT(&Global_113347, 5);
										}
										__LIB_1__::func_881(&(Var28.f_666), 13, 1);
									}
								}
								Var28.f_672 = 1;
							}
							else if (Var28.f_672)
							{
								HUD::CLEAR_HELP(true);
								Var28.f_672 = 0;
							}
						}
						if ((Var84[iLocal_234 /*34*/].f_1 == 0 && Var83.f_1[iVar17] == 0) || bVar71)
						{
							if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !__LIB_0__::func_497())
							{
								__LIB_18__::func_281(&Var28, Var83.f_1[iVar17] == 0);
							}
						}
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							func_346(&Var28);
							if (bVar75)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_NEW_RECORD", "HUD_AWARDS", true);
								bVar75 = false;
							}
						}
					}
					switch (Var83.f_1[iVar17])
					{
						case 0:
							switch (Var84[iLocal_234 /*34*/].f_1)
							{
								case 0:
									func_394(&(Var84[iVar14[iVar17] /*34*/]), 2, 1);
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
									{
										func_342(&(Var83.f_6), 1);
									}
									__LIB_7__::func_58(Var83.f_41, 1);
									if (__LIB_0__::func_492(&(Var28.f_666), 24))
									{
										if ((((((!__LIB_0__::func_1("DARTS_SHT_USE") && !__LIB_0__::func_1("DARTS_CLOCK")) && !__LIB_0__::func_1("DARTS_INSTR_W")) && !__LIB_0__::func_1("DARTS_INSTR_B")) && !__LIB_0__::func_1("DARTS_AIM_HLP")) && !__LIB_0__::func_1("DARTS_STD_HLP")) && !__LIB_0__::func_1("DARTS_FST_HLP"))
										{
											__LIB_0__::func_151("DARTS_LEVEL", -1);
											MISC::SET_BIT(&(Global_113386.f_18970.f_6), iVar56);
											__LIB_1__::func_881(&(Var28.f_666), 24, 0);
										}
									}
									if (Var83.f_6.f_10)
									{
									}
									if (Var83.f_6.f_12)
									{
									}
									if ((((!func_901(&(Var84[iLocal_234 /*34*/]), 7) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__::func_497()) || Var83.f_6.f_12)
									{
										if (__LIB_35__::func_532(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), &Var23, 0, Var83.f_6.f_12, 0, 0))
										{
											func_396(Var21[Var83.f_41 /*26*/].f_11);
											if (Var83.f_6.f_12 && !bVar73)
											{
												bVar73 = true;
											}
											Var28.f_670 = (Var28.f_670 - 1);
											__LIB_1__::func_881(&(Var28.f_666), 11, 0);
											func_395(&(Var84[iLocal_234 /*34*/]), Var21[Var83.f_41 /*26*/]);
											if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
											{
												func_771(&(Var84[iLocal_234 /*34*/]), 6);
											}
											if (Global_2703735.f_3580.f_36 <= 0 || !BitTest(Global_2703735.f_3580.f_35, 2))
											{
												func_771(&(Var84[iLocal_234 /*34*/]), 9);
											}
											else
											{
												func_930(&(Var84[iLocal_234 /*34*/]), 9);
											}
											if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
											{
												uLocal_222[10]++;
											}
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 1);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 2, 0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar49);
											TASK::OPEN_SEQUENCE_TASK(&iVar49);
											TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_overlay", 8f, -8f, -1, 2, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, "anim@amb@clubhouse@mini@darts@", "throw_idle_a_down", 1000f, -8f, -1, 1, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iVar49);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar49);
											func_393(&(Var84[iLocal_234 /*34*/].f_1), 1, 0);
										}
									}
									break;
								case 1:
									__LIB_1__::func_880("[AM_DARTS] current client is THROWING", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 9))
									{
										if (__LIB_24__::func_981(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
										{
											Var21.f_84[iVar17]++;
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
											func_393(&(Var84[iLocal_234 /*34*/].f_1), 2, 0);
										}
									}
									else if (!__LIB_0__::func_736(&iVar40))
									{
										if (__LIB_1__::func_854(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
										{
											__LIB_18__::func_283(PLAYER::PLAYER_ID(), 2, 0);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 2, 0);
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
											__LIB_6__::func_892(&iVar40);
										}
									}
									else if (__LIB_7__::func_78(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
									{
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
										{
											func_930(&(Var84[iLocal_234 /*34*/]), 6);
										}
										__LIB_0__::func_735(&iVar40);
										func_393(&(Var84[iLocal_234 /*34*/].f_1), 0, 0);
									}
									break;
								case 2:
									__LIB_18__::func_282(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
									Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
									Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
									if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										Var21.f_87[iVar17]++;
									}
									if (Var84[iLocal_234 /*34*/].f_4.f_21 == 2 || Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 1);
									}
									else
									{
										func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 0);
									}
									func_393(&(Var84[iLocal_234 /*34*/].f_1), 3, 0);
									__LIB_1__::func_880("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
								case 3:
									if (Var84[iLocal_235 /*34*/].f_2 >= 3 || func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										func_394(&(Var84[iVar14[iVar17] /*34*/]), 1, 0);
										func_930(&(Var84[iLocal_234 /*34*/]), 21);
										if (!Var21[Var83.f_41 /*26*/].f_25)
										{
											Var21[Var83.f_41 /*26*/].f_25 = 1;
											Var84[iLocal_234 /*34*/].f_4.f_25 = 1;
											func_379();
										}
										SYSTEM::SETTIMERA(0);
									}
									__LIB_1__::func_880("Waiting for other client to get to DARTS_MPWAIT_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
							}
							break;
						case 1:
							switch (Var84[iLocal_234 /*34*/].f_2)
							{
								case 0:
									__LIB_1__::func_842("DART_A_P_WAIT" /* GXT: Wait for ~a~ to take their shot. */, sVar80[iVar16], 20000, 0);
									if (!bVar71)
									{
										bVar71 = true;
									}
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 7))
									{
										func_342(&(Var83.f_6), 0);
									}
									if (func_727(&(Var84[iVar14[iVar16] /*34*/]), 1))
									{
										Var28.f_670 = (Var28.f_670 - 1);
										__LIB_1__::func_881(&(Var28.f_666), 11, 0);
										func_378(&(Var21[Var83.f_41 /*26*/]), &(Var84[iLocal_235 /*34*/]), iLocal_235);
										if (func_901(&(Var84[iLocal_234 /*34*/]), 6))
										{
											func_771(&(Var84[iLocal_234 /*34*/]), 6);
										}
										Var84[iLocal_234 /*34*/].f_2 = 1;
									}
									else
									{
										__LIB_1__::func_880("Current client is waiting for other client to throw", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									}
									break;
								case 1:
									if (!func_901(&(Var84[iLocal_235 /*34*/]), 9))
									{
										if (__LIB_24__::func_981(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0, 0))
										{
											Var21.f_84[iVar16]++;
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 0);
											Var84[iLocal_234 /*34*/].f_2 = 2;
										}
									}
									else if (!__LIB_0__::func_736(&iVar40))
									{
										if (__LIB_1__::func_854(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 988.1219f, -99.3023f, 73.8456f))
										{
											__LIB_6__::func_892(&iVar40);
										}
									}
									else if (__LIB_7__::func_78(&iVar40) > 1f || func_901(&(Var84[iLocal_235 /*34*/]), 6))
									{
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 6))
										{
											func_930(&(Var84[iLocal_234 /*34*/]), 6);
										}
										__LIB_0__::func_735(&iVar40);
										Var84[iLocal_234 /*34*/].f_2 = 0;
									}
									break;
								case 2:
									if (Var84[iLocal_235 /*34*/].f_1 >= 2)
									{
										__LIB_18__::func_282(&(Var21[Var83.f_41 /*26*/]), &(Var21.f_79), 0);
										Var84[iLocal_234 /*34*/].f_4.f_20 = Var21[Var83.f_41 /*26*/].f_20;
										Var84[iLocal_234 /*34*/].f_4.f_21 = Var21[Var83.f_41 /*26*/].f_21;
										if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											Var21.f_87[iVar16]++;
										}
										if (Var84[iLocal_234 /*34*/].f_4.f_21 == 2 || Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 1);
										}
										else
										{
											func_394(&(Var84[iVar14[iVar17] /*34*/]), 4, 0);
										}
										Var84[iLocal_234 /*34*/].f_2 = 3;
									}
									__LIB_1__::func_880("Current client is waiting for other client to finish throwing", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
								case 3:
									if (Var84[iLocal_235 /*34*/].f_1 >= 3)
									{
										func_930(&(Var84[iLocal_234 /*34*/]), 21);
										if (!Var21[Var83.f_41 /*26*/].f_25)
										{
											Var21[Var83.f_41 /*26*/].f_25 = 1;
										}
										SYSTEM::SETTIMERA(0);
									}
									__LIB_1__::func_880("Waiting for other client to get to DARTS_MPTHROW_TURN_CHANGE", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
									break;
							}
							break;
						case 2:
							if (((Var83.f_19[iVar17] < 41 && Var83.f_19[iVar17] > 0) && (Var83.f_19[iVar17] % 2) == 0) || Var83.f_19[iVar17] == 50)
							{
								if (!bVar70)
								{
									bVar70 = true;
								}
								else
								{
									__LIB_1__::func_880("DARTS UIFLAG IS DARTS_UIFLAGS_IN_WIN_RANGE IS ALREADY SET", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
								}
							}
							if (Var83.f_19[iVar17] <= 170 && !__LIB_0__::func_492(&(Var28.f_666), 18))
							{
								__LIB_1__::func_881(&(Var28.f_666), 18, 1);
							}
							if (!__LIB_0__::func_492(&(Var28.f_666), 19) && __LIB_0__::func_492(&(Var28.f_666), 21))
							{
								__LIB_1__::func_881(&(Var28.f_666), 19, 1);
							}
							if (!__LIB_0__::func_492(&(Var28.f_666), 11))
							{
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								if (iVar17 == Var83.f_45)
								{
									if (__LIB_0__::func_492(&(Var83.f_48), 0))
									{
										__LIB_1__::func_841("DARTS_REMAIN", (Var83.f_24[iVar17] - Var83.f_19[iVar17]), Var83.f_19[iVar17], 20000, 0);
										if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											__LIB_1__::func_840(&Var28, 1);
											bVar75 = true;
										}
									}
									else if (__LIB_0__::func_492(&(Var83.f_48), 2))
									{
										__LIB_1__::func_839("DARTS_BUST_L", Var83.f_42, 5000, 0);
									}
									else if (__LIB_0__::func_492(&(Var83.f_48), 3))
									{
										__LIB_1__::func_839("DARTS_DOUBLE_L", Var84[iLocal_234 /*34*/].f_4.f_20, 5000, 0);
									}
									else if (__LIB_0__::func_492(&(Var83.f_48), 4))
									{
										__LIB_0__::func_210("DARTS_ONE_PT", 5000, 0);
									}
									else if (__LIB_0__::func_492(&(Var83.f_48), 1))
									{
										if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
										{
											__LIB_1__::func_840(&Var28, 1);
											bVar75 = true;
										}
										else if (Var83.f_42 == 180)
										{
											__LIB_1__::func_840(&Var28, 0);
											bVar75 = true;
										}
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
										{
											__LIB_1__::func_838("DARTS_SWITCH_L", sVar80[iVar16], Var83.f_19[iVar17], 5000, 0);
										}
										else
										{
											__LIB_1__::func_841("DARTS_REMAIN", (Var83.f_24[iVar17] - Var83.f_19[iVar17]), Var83.f_19[iVar17], 5000, 0);
										}
									}
								}
								else if (__LIB_0__::func_492(&(Var83.f_48), 0))
								{
									__LIB_1__::func_841("DARTS_REMAIN", (Var83.f_24[iVar16] - Var83.f_19[iVar16]), Var83.f_19[iVar16], 20000, 0);
								}
								else if (__LIB_0__::func_492(&(Var83.f_48), 2))
								{
									__LIB_1__::func_839("DARTS_BUST_L", Var83.f_42, 5000, 0);
								}
								else if (__LIB_0__::func_492(&(Var83.f_48), 3))
								{
									__LIB_1__::func_839("DARTS_DOUBLE_L", Var84[iLocal_234 /*34*/].f_4.f_20, 5000, 0);
								}
								else if (__LIB_0__::func_492(&(Var83.f_48), 4))
								{
									__LIB_0__::func_210("DARTS_ONE_PT", 5000, 0);
								}
								else if (__LIB_0__::func_492(&(Var83.f_48), 1))
								{
									__LIB_1__::func_838("DARTS_SWITCH_L", PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Var83.f_19[iVar16], 5000, 0);
								}
								__LIB_1__::func_881(&(Var28.f_666), 11, 1);
							}
							if (!func_727(&(Var84[iVar14[iVar17] /*34*/]), 5) && ((__LIB_0__::func_492(&(Var83.f_48), 0) && SYSTEM::TIMERA() > 1000) || SYSTEM::TIMERA() > 2000))
							{
								Var84[iLocal_234 /*34*/].f_2 = 0;
								Var84[iLocal_234 /*34*/].f_1 = 0;
								Var21[Var83.f_41 /*26*/].f_25 = 0;
								func_771(&(Var84[iLocal_234 /*34*/]), 21);
								if (iVar17 == iVar14[Var83.f_45])
								{
									if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										uLocal_222[1]++;
										iVar59 = SYSTEM::ROUND((10f * Global_262145.f_4310 /* Tunable: XP_TUNABLE_DARTS_BULLSEYE */));
										iVar57 = (iVar57 + __LIB_37__::func_803(1, "XPT_DARTS", joaat("XPTYPE_SKILL"), 2124178747, iVar59, 1, -1, 0));
									}
								}
								if (__LIB_0__::func_492(&(Var83.f_48), 1))
								{
									Var28.f_670 = 3;
									iVar108 = 0;
									while (iVar108 < 3)
									{
										__LIB_1__::func_852(&(Var21[iVar108 /*26*/]));
										Var21[iVar108 /*26*/].f_25 = 0;
										iVar108++;
									}
									if (Var83.f_45 == iVar17)
									{
										func_377(Var83.f_45, Var83.f_19[Var83.f_45]);
									}
									if (Var83.f_24[Var83.f_45] != Var83.f_19[Var83.f_45])
									{
										if (Var83.f_45 == iVar17)
										{
											__LIB_1__::func_888(&Var27, 1, Var83.f_19[Var83.f_45]);
										}
										else
										{
											__LIB_1__::func_888(&Var27, 0, Var83.f_19[Var83.f_45]);
										}
									}
									if (iVar17 == Var83.f_45)
									{
										if (Var83.f_42 == 180 && !func_901(&(Var84[iLocal_234 /*34*/]), 16))
										{
											uLocal_222[2]++;
										}
									}
									else
									{
										bVar71 = false;
									}
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										if (Var83.f_46 == iVar17)
										{
											__LIB_1__::func_887(&Var27, 1);
										}
										else
										{
											__LIB_1__::func_887(&Var27, 0);
										}
									}
									iLocal_179 = 0;
								}
								func_394(&(Var84[iVar14[iVar17] /*34*/]), 5, 1);
							}
							break;
						case 3:
							HUD::CLEAR_PRINTS();
							if (!Global_2703735.f_3580.f_39)
							{
								Global_2703735.f_3580.f_39 = 1;
							}
							if (Var83.f_43 == iVar17)
							{
								Var21.f_94 = 1;
								Var21.f_90++;
								if (iVar17 == Var83.f_45)
								{
									if (Var84[iLocal_234 /*34*/].f_4.f_20 == 50)
									{
										uLocal_222[1]++;
										iVar59 = SYSTEM::ROUND((10f * Global_262145.f_4310 /* Tunable: XP_TUNABLE_DARTS_BULLSEYE */));
										iVar57 = (iVar57 + __LIB_37__::func_803(1, "XPT_DARTS", joaat("XPTYPE_SKILL"), 2124178747, iVar59, 1, -1, 0));
									}
								}
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									uLocal_222[8]++;
									iVar58 = (iVar58 + SYSTEM::ROUND((50f * Global_262145.f_4311 /* Tunable: XP_TUNABLE_DARTS_LEG_WON */)));
								}
								if (Var21.f_84[iVar17] <= 6)
								{
									__LIB_1__::func_602(7, 1, -1);
								}
							}
							else
							{
								Var21.f_94 = 0;
								Var21.f_91++;
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									uLocal_222[9]++;
								}
							}
							__LIB_6__::func_892(&iVar37);
							if (func_733(&Var83, 23))
							{
								func_907(&(Var84[iLocal_234 /*34*/]), 17, 0);
							}
							else
							{
								__LIB_31__::func_889(&Local_239, 1);
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									if (Var21.f_94)
									{
										if (Var83.f_39 < 5)
										{
											__LIB_13__::func_55(3, 2, 1);
										}
										else
										{
											__LIB_13__::func_55(3, 2, 2);
										}
										__LIB_5__::func_113(23, 1, -1);
										__LIB_7__::func_57(joaat("MPPLY_DARTS_TOTAL_WINS"), 1);
										uLocal_222[3]++;
										uLocal_222[6]++;
									}
									else
									{
										uLocal_222[5]++;
										uLocal_222[7]++;
									}
									__LIB_7__::func_57(joaat("MPPLY_DARTS_TOTAL_MATCHES"), 1);
								}
								Var28.f_668 = (Var28.f_668 + Var83.f_34[iVar17]);
								Var28.f_669 = (Var28.f_669 + Var83.f_34[iVar16]);
								StringCopy(&(Var28.f_648), sVar80[iVar17], 24);
								StringCopy(&(Var28.f_654), sVar80[iVar16], 24);
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									if (Var21.f_94)
									{
										iVar58 = (iVar58 + SYSTEM::ROUND((250f * Global_262145.f_4313 /* Tunable: XP_TUNABLE_DARTS_MATCH_WIN */)));
										iVar60 = __LIB_42__::func_782(PLAYER::PLAYER_ID());
									}
									else
									{
										iVar60 = __LIB_42__::func_782(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
									}
								}
								if (Var21.f_94)
								{
								}
								if (iVar60 > 0)
								{
								}
								iVar58 = (iVar58 + SYSTEM::ROUND((100f * Global_262145.f_4312 /* Tunable: XP_TUNABLE_DARTS_TAKING_PART */)));
								__LIB_2__::func_8(37);
								func_907(&(Var84[iLocal_234 /*34*/]), 18, 0);
							}
							break;
					}
					break;
				case 17:
					switch (iVar53)
					{
						case 0:
							if (__LIB_7__::func_42(&iVar37) > 0.75f)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								func_734(&Var27, bVar4, bVar5, Var83.f_34[iVar16], Var83.f_34[iVar17]);
								if (func_733(&Var83, 24))
								{
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										if (Var21.f_94)
										{
											uLocal_222[6]++;
										}
										else
										{
											uLocal_222[7]++;
										}
									}
									if (Var21.f_94)
									{
										if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
										{
											__LIB_24__::func_969(&uLocal_1045, "DARTS_WINNER", "DARTS_GAMEW", 4000, 5, 1);
										}
										else
										{
											__LIB_24__::func_969(&uLocal_1045, "DARTS_WINP", "DARTS_GAMEW", 4000, 5, 1);
										}
									}
									else
									{
										__LIB_24__::func_969(&uLocal_1045, "BM_R2P_LOSS" /* GXT: LOSER */, "DARTS_GAMEL", 4000, 5, 6);
									}
								}
								else if (Var21.f_94)
								{
									if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
									{
										__LIB_24__::func_969(&uLocal_1045, "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 1);
									}
									else
									{
										__LIB_24__::func_969(&uLocal_1045, "DARTS_WINP", "DARTS_LEGW", 4000, 5, 1);
									}
								}
								else
								{
									__LIB_24__::func_969(&uLocal_1045, "BM_R2P_LOSS" /* GXT: LOSER */, "DARTS_LEGL", 4000, 5, 6);
								}
								if (Var21.f_94)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "WINNER", "CELEBRATION_SOUNDSET", true);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "CELEBRATION_SOUNDSET", true);
								}
								iVar53++;
							}
							break;
						case 1:
							if (!__LIB_24__::func_984(&uLocal_1045, 1))
							{
								__LIB_7__::func_41(&uLocal_1045);
								iVar51 = 0;
								while (iVar51 < 2)
								{
									__LIB_1__::func_883(&Var27, iVar51);
									iVar51++;
								}
								iVar52 = 0;
								while (iVar52 < 3)
								{
									__LIB_1__::func_852(&(Var21[iVar52 /*26*/]));
									iVar52++;
								}
								iVar53++;
							}
							break;
						case 2:
							if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
							{
								if (!PED::IS_PED_INJURED(iVar50[iLocal_232]) && !PED::IS_PED_INJURED(iVar50[0]))
								{
									__LIB_1__::func_868();
									CAM::DESTROY_CAM(iLocal_1034, false);
								}
							}
							else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_1__::func_868();
								CAM::DESTROY_CAM(iLocal_1034, false);
							}
							func_394(&(Var84[iVar14[iVar17] /*34*/]), 7, 1);
							__LIB_1__::func_836();
							iVar53 = 0;
							func_907(&(Var84[iLocal_234 /*34*/]), 19, 0);
							break;
					}
					break;
				case 18:
					__LIB_1__::func_880("Reached Client side GAME END", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (__LIB_7__::func_42(&iVar37) > 0.75f)
					{
						if (Var84[iLocal_235 /*34*/] >= 18 || func_901(&(Var84[iLocal_234 /*34*/]), 16))
						{
							if (!Var21.f_95)
							{
								HUD::CLEAR_HELP(true);
								HUD::CLEAR_PRINTS();
								if (__LIB_18__::func_447(1))
								{
									if (Var21.f_94)
									{
										__LIB_24__::func_979(1);
									}
								}
								func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
								if (!func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									if (Var21.f_94)
									{
										__LIB_0__::func_932();
									}
									else
									{
										__LIB_0__::func_930();
									}
								}
								else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
								}
								Var21.f_95 = 1;
							}
						}
						if (iVar57 > 0)
						{
						}
						if (Var21.f_94)
						{
							iVar109 = 0;
							iVar47 = PLAYER::PLAYER_ID();
						}
						else
						{
							iVar109 = 1;
							iVar47 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235));
						}
						if (__LIB_7__::func_42(&iVar37) > 2.15f)
						{
							if (func_66(&Local_239, &iLocal_1031, "XPT_DARTS", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DARTS_WIN"), iVar58, iVar109, Global_1837285, &iVar46, iVar47, 1, 0, 0, 1, 0, 3))
							{
								if (!__LIB_0__::func_736(&iVar42))
								{
									__LIB_6__::func_892(&iVar42);
									if (Var21.f_94)
									{
										GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Win");
									}
									else
									{
										GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Lose");
									}
								}
								else if (__LIB_7__::func_78(&iVar42) > 0.1f)
								{
								}
								if (Var21.f_92)
								{
									__LIB_24__::func_973(1, 0f, 0f, 0f, Var79);
									HUD::CLEAR_PRINTS();
									func_394(&(Var84[iVar14[iVar17] /*34*/]), 8, 1);
									func_907(&(Var84[iLocal_234 /*34*/]), 23, 0);
								}
								else if (Var84[iLocal_235 /*34*/] >= 18 || func_901(&(Var84[iLocal_234 /*34*/]), 16))
								{
									Var21.f_92 = 1;
								}
							}
							if (Local_239.f_436 == 3 && __LIB_2__::func_47(&(Local_239.f_430), 416, 0))
							{
								if (!bVar76)
								{
									if (__LIB_0__::func_922() == 0)
									{
										__LIB_0__::func_921(1);
									}
									__LIB_18__::func_721(0, 0);
									bVar76 = true;
								}
							}
						}
					}
					break;
				case 19:
					__LIB_1__::func_880("CLIENT DARTS_MPSTATE_WAIT_POST_GAME", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if ((func_727(&(Var84[iVar14[iVar17] /*34*/]), 7) && func_727(&(Var84[iVar14[iVar16] /*34*/]), 7)) || (func_727(&(Var84[iVar14[iVar17] /*34*/]), 7) && func_901(&(Var84[iLocal_234 /*34*/]), 16)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Var84[iLocal_234 /*34*/].f_3))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
						if (func_901(&(Var84[iLocal_234 /*34*/]), 17))
						{
							sVar80[iVar17] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234)));
							Var35[iVar17 /*13*/] = { __LIB_0__::func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234))) };
							Var77[iVar17 /*2*/] = { __LIB_1__::func_885(&(Var35[iVar17 /*13*/])) };
							sVar80[iVar16] = PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235)));
							Var35[iVar16 /*13*/] = { __LIB_0__::func_604(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_235))) };
							Var77[iVar16 /*2*/] = { __LIB_1__::func_885(&(Var35[iVar16 /*13*/])) };
							iVar110 = 0;
							iVar111 = 1;
							__LIB_1__::func_882(&Var27, sVar80[iVar16], sVar80[iVar17]);
							if (!__LIB_1__::func_884(&(Var77[iVar16 /*2*/])))
							{
								func_737(&Var27, iVar110, &(Var77[iVar16 /*2*/]), 0);
							}
							if (!__LIB_1__::func_884(&(Var77[iVar17 /*2*/])))
							{
								func_737(&Var27, iVar111, &(Var77[iVar17 /*2*/]), 0);
							}
							__LIB_1__::func_883(&Var27, iVar110);
							__LIB_1__::func_883(&Var27, iVar111);
							func_771(&(Var84[iLocal_234 /*34*/]), 16);
							func_771(&(Var84[iLocal_234 /*34*/]), 17);
						}
						HUD::CLEAR_HELP(true);
						__LIB_1__::func_3();
						if (Var83.f_0 == 6)
						{
							func_907(&(Var84[iLocal_234 /*34*/]), 13, 0);
						}
					}
					if (func_727(&(Var84[iVar14[iVar16] /*34*/]), 8))
					{
						__LIB_1__::func_836();
						HUD::CLEAR_PRINTS();
						__LIB_1__::func_3();
						func_907(&(Var84[iLocal_234 /*34*/]), 20, 0);
					}
					break;
				case 20:
					__LIB_1__::func_880("Reached Client side TERMINATE SPLASH", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (__LIB_0__::func_3() == 0)
					{
						if (__LIB_0__::func_649(&uVar36))
						{
							if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !__LIB_7__::func_62(PLAYER::PLAYER_ID()))
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (!Global_2715699.f_2846.f_26)
							{
								__LIB_0__::func_495(&uVar36, 0, 0);
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								__LIB_0__::func_518(0);
								if (Global_2703735.f_3580.f_39)
								{
									Global_2703735.f_3580.f_39 = 0;
								}
								func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
								if (iVar25 == 1)
								{
									func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
									__LIB_24__::func_969(&uLocal_1035, "DARTS_WINNER", "DARTS_OPP_LFT", 15000, 0, 1);
									__LIB_0__::func_924(&(Var28.f_509), 0, 0, 0, 1);
									__LIB_0__::func_713(&(Var28.f_509), "CMRC_CONT" /* GXT: Continue */, 2, 201, 1, 1, 0);
									func_24(&iVar26, 0, 0);
									__LIB_24__::func_973(1, 0f, 0f, 0f, Var79);
								}
								else if (iVar25 == 2)
								{
									func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
									__LIB_24__::func_969(&uLocal_1035, "DARTS_WINNER", "", 15000, 0, 1);
									__LIB_0__::func_924(&(Var28.f_509), 0, 0, 0, 1);
									__LIB_0__::func_713(&(Var28.f_509), "CMRC_CONT" /* GXT: Continue */, 2, 201, 1, 1, 0);
									func_24(&iVar26, 0, 0);
									__LIB_24__::func_973(1, 0f, 0f, 0f, Var79);
								}
								else
								{
									if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
									{
										if (MISC::IS_STRING_NULL(sVar80[Var84[iLocal_235 /*34*/].f_33]))
										{
											__LIB_0__::func_210("DARTS_OPP_LFT", 7500, 0);
										}
										else
										{
											__LIB_1__::func_842("DARTS_PLYR_LFT", sVar80[Var84[iLocal_235 /*34*/].f_33], 7500, 0);
										}
									}
									func_24(&iVar26, 2, 0);
								}
							}
						}
						else
						{
							__LIB_0__::func_580(&uVar36, 0, 0);
						}
					}
					else
					{
						func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
					}
					break;
				case 23:
					if (__LIB_0__::func_649(&uVar36))
					{
						__LIB_1__::func_3();
						func_269(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]));
						__LIB_0__::func_495(&uVar36, 0, 0);
						__LIB_0__::func_518(0);
						if (Global_2703735.f_3580.f_39)
						{
							Global_2703735.f_3580.f_39 = 0;
						}
						func_907(&(Var84[iLocal_234 /*34*/]), 21, 0);
						func_24(&iVar26, 3, 0);
					}
					else
					{
						__LIB_0__::func_580(&uVar36, 0, 0);
					}
					break;
				case 21:
					switch (iVar26)
					{
						case 0:
							if (!__LIB_24__::func_984(&uLocal_1035, 1) || __LIB_2__::func_47(&uVar36, 3000, 0))
							{
								__LIB_1__::func_3();
								iVar59 = SYSTEM::ROUND((100f * Global_262145.f_4312 /* Tunable: XP_TUNABLE_DARTS_TAKING_PART */));
								iVar58 = (iVar58 + __LIB_37__::func_803(1, "XPT_DARTS", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DARTS_WIN"), iVar59, 1, -1, 0));
								Var28.f_668++;
								func_24(&iVar26, 3, 0);
							}
							break;
						case 1:
							func_24(&iVar26, 2, 0);
							break;
						case 2:
							__LIB_0__::func_518(0);
							func_931(bVar1, &Var0, &ScriptParam_1055, &Var83, &Var27, &Var84, &Var15, &Var21, &Var28, 1, 0, 0);
							break;
						case 3:
							func_24(&iVar26, 4, 0);
							break;
						case 4:
							func_24(&iVar26, 2, 0);
							break;
					}
					break;
				}
		}
		if (BitTest(iVar9, 0))
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Var27.f_0))
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var27.f_0, Var27.f_18, Var27.f_21, Var27.f_24, Var27.f_24, 2);
			}
		}
		if (BitTest(iVar9, 1))
		{
			func_21();
		}
		if (BitTest(iVar9, 5))
		{
			__LIB_0__::func_480(4, -1);
		}
		if (BitTest(iVar9, 2) && !func_901(&(Var84[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), 18))
		{
			func_19();
		}
		if (BitTest(iVar9, 4))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])))
			{
				iVar112 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[iVar16])));
				if (__LIB_0__::func_121(iVar112))
				{
					fVar113 = __LIB_0__::func_670(Var24.f_3, Var21.f_79.f_1);
					Var114 = { ENTITY::GET_ENTITY_COORDS(iVar112, true) };
					Var24.f_3.f_2 = Var114.f_2;
					NETWORK::NETWORK_OVERRIDE_COORDS_AND_HEADING(iVar112, Var114, fVar113);
				}
			}
		}
		if (BitTest(iVar9, 6))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var15[0 /*97*/].f_89))
			{
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Var15[0 /*97*/].f_89);
				if ((MISC::GET_GAME_TIMER() % 1000) > 100)
				{
				}
			}
			if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var15[iLocal_232 /*97*/].f_89))
				{
					CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Var15[iLocal_232 /*97*/].f_89);
					if ((MISC::GET_GAME_TIMER() % 1000) > 100)
					{
					}
				}
			}
		}
		if (__LIB_5__::func_70(&iVar9, 7))
		{
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(0);
			}
		}
		else if (HUD::BUSYSPINNER_IS_ON())
		{
			HUD::BUSYSPINNER_OFF();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (Var83.f_0)
			{
				case 4:
					if (iLocal_238 >= 2)
					{
						func_907(&Var83, 11, 1);
					}
					else if (func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						func_907(&Var83, 6, 1);
					}
					break;
				case 11:
					if (BitTest(Var84[iVar14[iLocal_232] /*34*/].f_31, 27) && BitTest(Var84[iVar14[0] /*34*/].f_31, 27))
					{
						if (!func_733(&Var83, 27))
						{
							func_18(&Var83, 27);
						}
					}
					else if ((MISC::GET_GAME_TIMER() % 1000) > 50)
					{
					}
					__LIB_1__::func_880("Reached Server side THROW_OFF_SETUP", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					if (BitTest(Var84[iVar14[iLocal_232] /*34*/].f_31, 15) && BitTest(Var84[iVar14[0] /*34*/].f_31, 15))
					{
						__LIB_9__::func_490(&Var83);
						func_907(&Var83, 12, 1);
					}
					break;
				case 12:
					Var115 = { Var21[Var83.f_41 /*26*/] };
					if (bVar1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (Var84[iVar14[0] /*34*/].f_1 < 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 < 3)
						{
							Var115.f_25 = 0;
						}
						if (Var84[iVar14[0] /*34*/].f_1 >= 3 || Var84[iVar14[iLocal_232] /*34*/].f_1 >= 3)
						{
							Var115.f_25 = 1;
							Var115.f_20 = Var84[iVar14[0] /*34*/].f_4.f_20;
							Var115.f_21 = Var84[iVar14[0] /*34*/].f_4.f_21;
						}
					}
					func_15(&Var83, &Var84, &Var115, &iVar14);
					break;
				case 6:
					if (!func_733(&Var83, 26))
					{
						func_18(&Var83, 26);
					}
					__LIB_1__::func_880("Reached Server side SETUP", &uVar54, 0, 0, 0, 0, 0, 0, 1000);
					bVar45 = false;
					if (BitTest(Var84[iVar14[0] /*34*/].f_31, 16))
					{
						if (BitTest(Var84[iVar14[0] /*34*/].f_31, 1))
						{
							bVar45 = true;
						}
					}
					else if (iVar14[iLocal_232] >= 0)
					{
						if (BitTest(Var84[iVar14[iLocal_232] /*34*/].f_31, 1) && BitTest(Var84[iVar14[0] /*34*/].f_31, 1))
						{
							bVar45 = true;
						}
					}
					if (bVar45)
					{
						func_14(&Var83, func_901(&(Var84[iVar14[0] /*34*/]), 16), 0);
						__LIB_18__::func_301(PLAYER::PLAYER_ID(), 0, 1);
						if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
						{
							iVar48 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_234));
							__LIB_24__::func_971(iVar48, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar14[0])), Var83.f_19[iLocal_230], Var83.f_19[iLocal_231], PLAYER::GET_PLAYER_TEAM(iVar48), 1, 1);
						}
						func_907(&Var83, 16, 1);
					}
					break;
				case 16:
					if (func_9(&Var84, 0))
					{
						func_18(&Var83, 25);
					}
					else
					{
						func_8(&Var83, 25);
					}
					if (!func_901(&(Var84[iVar14[0] /*34*/]), 16))
					{
						Var116 = { Var21[Var83.f_41 /*26*/] };
						if (bVar1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							if (Var84[iVar14[0] /*34*/].f_1 < 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 < 3)
							{
								Var116.f_25 = 0;
							}
							if (Var84[iVar14[0] /*34*/].f_1 >= 3 || Var84[iVar14[iLocal_232] /*34*/].f_1 >= 3)
							{
								Var116.f_25 = 1;
								Var116.f_20 = Var84[iVar14[0] /*34*/].f_4.f_20;
								Var116.f_21 = Var84[iVar14[0] /*34*/].f_4.f_21;
							}
						}
						func_7(&Var83, &Var84, &Var116, &iVar14);
					}
					else
					{
						Var117 = { Var21[Var83.f_41 /*26*/] };
						if (bVar1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							if (Var84[iVar14[0] /*34*/].f_1 < 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 < 3)
							{
								Var117.f_25 = 0;
							}
							if (Var84[iVar14[0] /*34*/].f_1 >= 3 && Var84[iVar14[iLocal_232] /*34*/].f_1 >= 3)
							{
								Var117.f_25 = 1;
								Var117.f_20 = Var84[iVar14[0] /*34*/].f_4.f_20;
								Var117.f_21 = Var84[iVar14[0] /*34*/].f_4.f_21;
							}
						}
						func_1(&Var83, &Var84, &Var117, &iVar14);
					}
					break;
				}
		}
	}
}

void func_1(int* iParam0, int* iParam1, var uParam2, int iParam3)//Position - 0x58E8
{
	int iVar0;
	if ((*iParam1)[(*iParam3)[0] /*34*/] == 16)
	{
		if ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 0)
		{
			__LIB_24__::func_970(&(iParam0->f_6));
		}
		if (iParam0->f_1[0] == 0 && !iParam0->f_57)
		{
			if (func_901(iParam1[(*iParam3)[0] /*34*/], 9) && (iParam1[(*iParam3)[0] /*34*/])->f_1 == 1)
			{
				iParam0->f_6.f_10 = 1;
			}
			if (__LIB_1__::func_830(uParam2) && func_901(iParam1[(*iParam3)[0] /*34*/], 21))
			{
				__LIB_1__::func_881(&(iParam0->f_48), 1, 0);
				iParam0->f_45 = 0;
				iParam0->f_42 = (iParam0->f_42 + uParam2->f_20);
				iVar0 = (iParam0->f_19[iParam0->f_45] - uParam2->f_20);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 4))
				{
				}
				if (iVar0 == 0 && (uParam2->f_21 == 2 || uParam2->f_20 == 50))
				{
					iParam0->f_19[iParam0->f_45] = iVar0;
					iParam0->f_62 = 1;
				}
				else if ((iVar0 == 1 || iVar0 < 0) || (iVar0 == 0 && func_727(iParam1[(*iParam3)[0] /*34*/], 4) == 0))
				{
					iParam0->f_19[iParam0->f_45] = iParam0->f_24[iParam0->f_45];
					__LIB_1__::func_881(&(iParam0->f_48), 1, 1);
					if (iVar0 < 0)
					{
						__LIB_1__::func_881(&(iParam0->f_48), 2, 1);
					}
					else if (iVar0 == 1)
					{
						__LIB_1__::func_881(&(iParam0->f_48), 4, 1);
					}
					else if (iVar0 == 0 && func_727(iParam1[(*iParam3)[iParam0->f_45] /*34*/], 4) == 0)
					{
						__LIB_1__::func_881(&(iParam0->f_48), 3, 1);
					}
				}
				else
				{
					iParam0->f_41++;
					iParam0->f_19[iParam0->f_45] = iVar0;
					if (iParam0->f_41 >= 3)
					{
						iParam0->f_41 = (iParam0->f_41 - 1);
						__LIB_1__::func_881(&(iParam0->f_48), 1, 1);
					}
					else
					{
						__LIB_1__::func_881(&(iParam0->f_48), 0, 1);
					}
				}
				iParam0->f_57 = 1;
				iParam0->f_1[0] = 2;
			}
		}
		else if (iParam0->f_1[0] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (iParam0->f_62)
			{
				iParam0->f_43 = 0;
				iParam0->f_29[iParam0->f_43]++;
				if (func_3(iParam0))
				{
					func_8(iParam0, 23);
				}
				else
				{
					func_18(iParam0, 23);
				}
				iParam0->f_1[0] = 3;
				iParam0->f_57 = 0;
				*iParam0 = 6;
			}
			if (__LIB_0__::func_492(&(iParam0->f_48), 0))
			{
				__LIB_1__::func_880("[MP DARTS] Server is continuing turn", &uLocal_233, 0, 0, 0, 0, 0, 0, 1000);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5))
				{
					iParam0->f_1[iParam0->f_45] = 0;
					iParam0->f_57 = 0;
					__LIB_1__::func_881(&(iParam0->f_48), 0, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (__LIB_0__::func_492(&(iParam0->f_48), 1))
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5))
				{
					iParam0->f_24[0] = iParam0->f_19[0];
					iParam0->f_42 = 0;
					iParam0->f_1[0] = 0;
					iParam0->f_41 = 0;
					iParam0->f_57 = 0;
					__LIB_1__::func_881(&(iParam0->f_48), 3, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 4, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
		}
		else if (iParam0->f_1[0] == 3)
		{
			if (func_727(iParam1[(*iParam3)[0] /*34*/], 7))
			{
				*iParam0 = 6;
			}
		}
	}
	if ((*iParam1)[(*iParam3)[0] /*34*/] == 19)
	{
		func_18(iParam0, 21);
		func_8(iParam0, 20);
		func_8(iParam0, 10);
		func_8(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_2(int* iParam0)//Position - 0x5C4B
{
	iParam0->f_19[iLocal_230] = 301;
	iParam0->f_19[iLocal_231] = 301;
}

int func_3(int* iParam0)//Position - 0x5C6B
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0->f_43;
	iVar1 = func_4(iParam0);
	if (iParam0->f_29[iVar0] == iVar1)
	{
		iParam0->f_34[iVar0]++;
		iParam0->f_29[0] = 0;
		iParam0->f_29[iLocal_232] = 0;
		func_18(iParam0, 24);
		if (iParam0->f_34[iVar0] == iParam0->f_40)
		{
			return 1;
		}
	}
	else if (func_733(iParam0, 24))
	{
		func_8(iParam0, 24);
	}
	return 0;
}

int func_4(var uParam0)//Position - 0x5CE4
{
	switch (uParam0->f_39)
	{
		case 1:
			return 1;
		case 3:
			return 1;
		case 5:
			return 1;
		default:
	}
	return 1;
}

void func_7(int* iParam0, int* iParam1, var uParam2, int iParam3)//Position - 0x5D87
{
	int iVar0;
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 16 && (*iParam1)[(*iParam3)[0] /*34*/] == 16)
	{
		if ((MISC::GET_GAME_TIMER() % 1000) > 50)
		{
		}
		if (((iParam1[(*iParam3)[iLocal_232] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[iLocal_232] /*34*/])->f_2 == 0) && ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[0] /*34*/])->f_2 == 0))
		{
			__LIB_24__::func_970(&(iParam0->f_6));
		}
		if ((iParam0->f_1[iLocal_232] == 0 || iParam0->f_1[0] == 0) && !iParam0->f_57)
		{
			if (((func_901(iParam1[(*iParam3)[iLocal_232] /*34*/], 9) || func_901(iParam1[(*iParam3)[0] /*34*/], 9)) && ((iParam1[(*iParam3)[iLocal_232] /*34*/])->f_1 == 1 || (iParam1[(*iParam3)[iLocal_232] /*34*/])->f_2 == 1)) && ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 1 || (iParam1[(*iParam3)[0] /*34*/])->f_2 == 1))
			{
				iParam0->f_6.f_10 = 1;
			}
			if ((__LIB_1__::func_830(uParam2) && func_901(iParam1[(*iParam3)[0] /*34*/], 21)) && func_901(iParam1[(*iParam3)[iLocal_232] /*34*/], 21))
			{
				__LIB_1__::func_881(&(iParam0->f_48), 1, 0);
				if (iParam0->f_1[0] == 0)
				{
					iParam0->f_45 = 0;
					iParam0->f_46 = iLocal_232;
				}
				else
				{
					iParam0->f_45 = iLocal_232;
					iParam0->f_46 = 0;
				}
				iParam0->f_42 = (iParam0->f_42 + uParam2->f_20);
				iVar0 = (iParam0->f_19[iParam0->f_45] - uParam2->f_20);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 4))
				{
				}
				if (func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 4))
				{
				}
				if (iVar0 == 0 && (uParam2->f_21 == 2 || uParam2->f_20 == 50))
				{
					iParam0->f_19[iParam0->f_45] = iVar0;
					iParam0->f_62 = 1;
				}
				else if ((iVar0 == 1 || iVar0 < 0) || (iVar0 == 0 && func_727(iParam1[(*iParam3)[iParam0->f_45] /*34*/], 4) == 0))
				{
					iParam0->f_19[iParam0->f_45] = iParam0->f_24[iParam0->f_45];
					__LIB_1__::func_881(&(iParam0->f_48), 1, 1);
					if (iVar0 < 0)
					{
						__LIB_1__::func_881(&(iParam0->f_48), 2, 1);
					}
					else if (iVar0 == 1)
					{
						__LIB_1__::func_881(&(iParam0->f_48), 4, 1);
					}
					else if (iVar0 == 0 && func_727(iParam1[(*iParam3)[iParam0->f_45] /*34*/], 4) == 0)
					{
						__LIB_1__::func_881(&(iParam0->f_48), 3, 1);
					}
				}
				else
				{
					iParam0->f_41++;
					iParam0->f_19[iParam0->f_45] = iVar0;
					if (iParam0->f_41 >= 3)
					{
						iParam0->f_41 = (iParam0->f_41 - 1);
						__LIB_1__::func_881(&(iParam0->f_48), 1, 1);
					}
					else
					{
						__LIB_1__::func_881(&(iParam0->f_48), 0, 1);
					}
				}
				iParam0->f_57 = 1;
				iParam0->f_1[iLocal_232] = 2;
				iParam0->f_1[0] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_232] == 2 || iParam0->f_1[0] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (iParam0->f_62)
			{
				if (iParam0->f_45 == 0)
				{
					iParam0->f_43 = 0;
				}
				else
				{
					iParam0->f_43 = iLocal_232;
				}
				iParam0->f_29[iParam0->f_43]++;
				if (func_3(iParam0))
				{
					func_8(iParam0, 23);
				}
				else
				{
					func_18(iParam0, 23);
				}
				iParam0->f_1[0] = 3;
				iParam0->f_1[iLocal_232] = 3;
				iParam0->f_57 = 0;
				*iParam0 = 6;
			}
			if (__LIB_0__::func_492(&(iParam0->f_48), 0))
			{
				__LIB_1__::func_880("[MP DARTS] Server is continuing turn", &uLocal_233, 0, 0, 0, 0, 0, 0, 1000);
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					iParam0->f_1[iParam0->f_45] = 0;
					iParam0->f_1[iParam0->f_46] = 1;
					iParam0->f_57 = 0;
					__LIB_1__::func_881(&(iParam0->f_48), 0, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (__LIB_0__::func_492(&(iParam0->f_48), 1))
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					iParam0->f_24[0] = iParam0->f_19[0];
					iParam0->f_24[iLocal_232] = iParam0->f_19[iLocal_232];
					iParam0->f_42 = 0;
					if (iParam0->f_45 == 0)
					{
						iParam0->f_1[0] = 1;
						iParam0->f_1[iLocal_232] = 0;
					}
					else
					{
						iParam0->f_1[0] = 0;
						iParam0->f_1[iLocal_232] = 1;
					}
					iParam0->f_41 = 0;
					iParam0->f_57 = 0;
					__LIB_1__::func_881(&(iParam0->f_48), 3, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 4, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
		}
		else if (iParam0->f_1[iLocal_232] == 3 || iParam0->f_1[0] == 3)
		{
			if (func_727(iParam1[(*iParam3)[0] /*34*/], 7) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 7))
			{
				*iParam0 = 6;
			}
		}
	}
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 19 && (*iParam1)[(*iParam3)[0] /*34*/] == 19)
	{
		func_18(iParam0, 21);
		func_8(iParam0, 20);
		func_8(iParam0, 10);
		func_8(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_8(int* iParam0, int iParam1)//Position - 0x62DD
{
	MISC::CLEAR_BIT(&(iParam0->f_47), iParam1);
}

int func_9(int* iParam0, bool bParam1)//Position - 0x62EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 16;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (bParam1)
	{
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_901(iParam0[iVar0 /*34*/], 20))
		{
			if (func_901(iParam0[iVar0 /*34*/], 18))
			{
				iVar2++;
				if (func_901(iParam0[iVar0 /*34*/], 21))
				{
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	if (iVar3 >= iVar2)
	{
		iVar4 = 1;
	}
	return iVar4;
}

void func_14(int* iParam0, bool bParam1, int iParam2)//Position - 0x64F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_19[iVar0] = 301;
		iParam0->f_24[iVar0] = 301;
		iVar0++;
	}
	if (!func_733(iParam0, 23))
	{
		iParam0->f_29[0] = 0;
		iParam0->f_29[iLocal_232] = 0;
		iParam0->f_34[0] = 0;
		iParam0->f_34[iLocal_232] = 0;
	}
	iVar1 = Global_4718592.f_116945;
	iVar2 = Global_4718592.f_116946;
	switch (iVar1)
	{
		case 0:
			iParam0->f_39 = 0;
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
			iParam0->f_40 = 0;
			break;
		case 1:
			iParam0->f_40 = 1;
			break;
		case 2:
			iParam0->f_40 = 2;
			break;
		case 3:
			iParam0->f_40 = 3;
			break;
		case 4:
			iParam0->f_40 = 4;
			break;
		case 5:
			iParam0->f_40 = 5;
			break;
		case 6:
			iParam0->f_40 = 15;
			break;
	}
	if (bParam1)
	{
		iParam0->f_1[0] = 0;
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
		if (iParam0->f_44 == 1)
		{
			iParam0->f_1[iLocal_232] = 0;
			iParam0->f_1[0] = 1;
		}
		else
		{
			iParam0->f_1[0] = 0;
			iParam0->f_1[iLocal_232] = 1;
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
	__LIB_7__::func_65(&(iParam0->f_6));
}

void func_15(int* iParam0, int* iParam1, var uParam2, int iParam3)//Position - 0x669C
{
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 12 && (*iParam1)[(*iParam3)[0] /*34*/] == 12)
	{
		if (((iParam1[(*iParam3)[iLocal_232] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[iLocal_232] /*34*/])->f_2 == 0) && ((iParam1[(*iParam3)[0] /*34*/])->f_1 == 0 || (iParam1[(*iParam3)[0] /*34*/])->f_2 == 0))
		{
			__LIB_24__::func_972(&(iParam0->f_6));
		}
		if ((iParam0->f_1[iLocal_232] == 0 || iParam0->f_1[0] == 0) && !iParam0->f_57)
		{
			if ((__LIB_1__::func_830(uParam2) && func_901(iParam1[(*iParam3)[0] /*34*/], 21)) && func_901(iParam1[(*iParam3)[iLocal_232] /*34*/], 21))
			{
				if (iParam0->f_1[0] == 0)
				{
					iParam0->f_45 = 0;
					iParam0->f_46 = iLocal_232;
				}
				else
				{
					iParam0->f_45 = iLocal_232;
					iParam0->f_46 = 0;
				}
				iParam0->f_51[iParam0->f_45] = uParam2->f_22;
				if (iParam0->f_45 == 0)
				{
					__LIB_1__::func_881(&(iParam0->f_48), 1, 1);
				}
				else
				{
					iParam0->f_62 = 1;
				}
				iParam0->f_57 = 1;
				iParam0->f_1[0] = 2;
				iParam0->f_1[iLocal_232] = 2;
			}
		}
		else if (iParam0->f_1[iLocal_232] == 2 || iParam0->f_1[0] == 2)
		{
			iParam0->f_6.f_12 = 0;
			if (__LIB_0__::func_492(&(iParam0->f_48), 1))
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					iParam0->f_24[0] = iParam0->f_19[0];
					iParam0->f_24[iLocal_232] = iParam0->f_19[iLocal_232];
					iParam0->f_42 = 0;
					if (iParam0->f_45 == 0)
					{
						iParam0->f_1[0] = 1;
						iParam0->f_1[iLocal_232] = 0;
					}
					else
					{
						iParam0->f_1[0] = 0;
						iParam0->f_1[iLocal_232] = 1;
					}
					iParam0->f_41++;
					iParam0->f_57 = 0;
					__LIB_1__::func_881(&(iParam0->f_48), 1, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 3, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 4, 0);
					__LIB_1__::func_881(&(iParam0->f_48), 2, 0);
					iParam0->f_6.f_10 = 1;
				}
			}
			if (iParam0->f_62)
			{
				if (func_727(iParam1[(*iParam3)[0] /*34*/], 5) && func_727(iParam1[(*iParam3)[iLocal_232] /*34*/], 5))
				{
					if (iParam0->f_51[0] < iParam0->f_51[iLocal_232])
					{
						iParam0->f_43 = 0;
					}
					else
					{
						iParam0->f_43 = iLocal_232;
					}
					iParam0->f_1[iLocal_232] = 3;
					iParam0->f_1[0] = 3;
					iParam0->f_57 = 0;
					iParam0->f_62 = 0;
					*iParam0 = 6;
				}
			}
		}
	}
	if ((*iParam1)[(*iParam3)[iLocal_232] /*34*/] == 19 && (*iParam1)[(*iParam3)[0] /*34*/] == 19)
	{
		func_18(iParam0, 21);
		func_8(iParam0, 20);
		func_8(iParam0, 10);
		func_8(iParam0, 11);
		func_2(iParam0);
		*iParam0 = 6;
	}
}

void func_18(int* iParam0, int iParam1)//Position - 0x6A38
{
	MISC::SET_BIT(&(iParam0->f_47), iParam1);
}

void func_19()//Position - 0x6A4A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
		}
		iVar0++;
	}
}

void func_21()//Position - 0x6AAF
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_0__::func_186();
	__LIB_0__::func_733(1);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
}

void func_24(int iParam0, int iParam1, bool bParam2)//Position - 0x6AEA
{
	if (*iParam0 != iParam1)
	{
		if (bParam2)
		{
		}
		*iParam0 = iParam1;
		if (bParam2)
		{
		}
	}
}

int func_66(int* iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x73CE
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
		__LIB_24__::func_978(0);
	}
	bVar2 = iParam9;
	*iParam8 = 1;
	if (bParam14)
	{
		__LIB_0__::func_824();
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		__LIB_31__::func_888(&(iParam0->f_23), &(iParam0->f_145), iParam0->f_436, iParam0->f_2);
	}
	else
	{
		__LIB_24__::func_977(iParam0, &(iParam0->f_451), &(iParam0->f_452), &(iParam0->f_23), &(iParam0->f_145), iParam0->f_436, &(iParam0->f_2), &(iParam0->f_3), &(iParam0->f_475));
	}
	__LIB_0__::func_816(iParam0);
	switch (*iParam8)
	{
		case 0:
			switch (iParam0->f_436)
			{
				case 0:
					__LIB_0__::func_815(iParam0, 0);
					if (__LIB_0__::func_814(iParam0))
					{
						__LIB_0__::func_813(iParam0, 0);
						if ((__LIB_2__::func_47(&(iParam0->f_432), 500, 0) || CAM::IS_SCREEN_FADED_OUT()) && func_162(iParam0, iParam1, iParam9, 0))
						{
							__LIB_7__::func_16(Global_2689235[bVar2 /*453*/].f_258, PED::IS_PED_MALE(iParam0->f_23[0]), 0, &sVar0, &cVar1, Global_2689235[bVar2 /*453*/].f_257, Global_2689235[bVar2 /*453*/].f_259, 0, -1);
							STREAMING::REQUEST_ANIM_DICT(&sVar0);
							if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0) || __LIB_7__::func_56(iParam0))
							{
								__LIB_0__::func_579(&(iParam0->f_430));
								__LIB_0__::func_580(&(iParam0->f_430), 0, 0);
								__LIB_7__::func_15(1, 1);
								iParam0->f_436 = 1;
							}
						}
					}
					break;
				case 1:
					__LIB_0__::func_800(iParam0, &(iParam0->f_20), 0, 1);
					__LIB_0__::func_799(iParam0, 0);
					if (__LIB_2__::func_47(&(iParam0->f_430), 375, 0))
					{
						__LIB_0__::func_798(iParam0);
					}
					if (__LIB_2__::func_47(&(iParam0->f_430), 750, 0))
					{
						sVar3 = "WINNER";
						StringCopy(&Var5, PLAYER::GET_PLAYER_NAME(iParam9), 64);
						cVar6 = { __LIB_18__::func_278(iParam9) };
						iParam0->f_419 = 666;
						if (!__LIB_0__::func_795() || !__LIB_0__::func_794(PLAYER::PLAYER_ID()))
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
						__LIB_1__::func_599(iParam0, sVar3, sVar4, 1, 0);
						__LIB_18__::func_225(iParam0, sVar3, iParam6, &Var5, &cVar6, "", iParam7, 1, 0, 0, 0);
						iParam0->f_419 += 4666;
						iParam0->f_419 += 666;
						__LIB_0__::func_793(iParam0, sVar3, 75, 0);
						__LIB_0__::func_792(iParam0, sVar3);
						__LIB_0__::func_579(&(iParam0->f_430));
						__LIB_0__::func_580(&(iParam0->f_430), 0, 0);
						__LIB_16__::func_621(1, 0, 1);
						GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
						GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
						__LIB_7__::func_14(iParam0);
						HUD::MP_TEXT_CHAT_DISABLE(true);
						iParam0->f_436 = 3;
					}
					break;
				case 3:
					__LIB_0__::func_800(iParam0, &(iParam0->f_20), 0, 1);
					if (__LIB_2__::func_47(&(iParam0->f_430), iParam0->f_419, 0))
					{
						iParam0->f_436 = 5;
					}
					break;
				case 5:
					__LIB_6__::func_882(iParam0);
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
						if (__LIB_24__::func_975(iParam0, iParam1, &bVar7, 0, 0))
						{
							__LIB_0__::func_815(iParam0, 0);
							__LIB_7__::func_15(1, 1);
							__LIB_24__::func_967(0);
							__LIB_24__::func_978(0);
							__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
							if (bVar7)
							{
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							iParam0->f_436 = 1;
						}
					}
					else
					{
						__LIB_0__::func_815(iParam0, 0);
						__LIB_7__::func_15(1, 1);
						__LIB_24__::func_967(0);
						__LIB_24__::func_978(0);
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
						iParam0->f_436 = 1;
					}
					break;
				case 1:
					__LIB_0__::func_815(iParam0, 0);
					if ((__LIB_0__::func_814(iParam0) && CAM::IS_SCREEN_FADED_IN()) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
					{
						StringCopy(&Var16, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
						cVar17 = { __LIB_18__::func_278(PLAYER::PLAYER_ID()) };
						iParam0->f_419 = 666;
						sVar8 = "SUMMARY";
						sVar9 = "HUD_COLOUR_BLACK" /* GXT: Black */;
						iVar10 = __LIB_1__::func_555(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
						iVar15 = __LIB_37__::func_803(iParam15, sParam2, iParam3, iParam4, iParam5, 1, -1, 0);
						iVar11 = __LIB_0__::func_689(iVar10, 0);
						iVar12 = iVar11 + 1;
						iVar13 = __LIB_0__::func_778(iVar11, 0, 0);
						iVar14 = __LIB_0__::func_778(iVar12, 0, 0);
						iParam0->f_419 = 666;
						if (!__LIB_0__::func_795() || !__LIB_0__::func_794(PLAYER::PLAYER_ID()))
						{
							StringCopy(&cVar17, "", 64);
						}
						__LIB_1__::func_599(iParam0, sVar8, sVar9, 1, 0);
						if (iParam6 == 2)
						{
							__LIB_18__::func_225(iParam0, sVar8, iParam6, "", "", "", iParam7, 1, 0, 0, 0);
						}
						else
						{
							__LIB_18__::func_225(iParam0, sVar8, iParam6, &Var16, &cVar17, "", iParam7, 1, 0, 0, 0);
						}
						iParam0->f_419 += 2333;
						if (iParam12 > 0)
						{
							__LIB_18__::func_277(iParam0, sVar8, iParam11, iParam12);
							iParam0->f_419 += 2333;
						}
						__LIB_0__::func_777(iParam0, sVar8, iVar15, iVar10, iVar13, iVar14, iVar11, iVar12);
						iParam0->f_419 += 2333;
						if ((iVar10 + iVar15) >= iVar14)
						{
							iParam0->f_419 = (iParam0->f_419 + SYSTEM::ROUND((SYSTEM::TO_FLOAT(2333) / 1.75f)));
						}
						__LIB_0__::func_793(iParam0, sVar8, -1, 0);
						__LIB_0__::func_792(iParam0, sVar8);
						__LIB_0__::func_579(&(iParam0->f_430));
						__LIB_0__::func_580(&(iParam0->f_430), 0, 0);
						if (__LIB_0__::func_493())
						{
							AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
						}
						else
						{
							AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
						}
						__LIB_7__::func_14(iParam0);
						iParam0->f_436 = 3;
						HUD::MP_TEXT_CHAT_DISABLE(true);
					}
					else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
					{
						if (!__LIB_0__::func_649(&(iParam0->f_456)))
						{
							__LIB_0__::func_580(&(iParam0->f_456), 0, 0);
						}
						else if (__LIB_2__::func_47(&(iParam0->f_456), 1000, 0))
						{
							__LIB_7__::func_11();
						}
					}
					break;
				case 3:
					__LIB_0__::func_773(iParam0, 0);
					if (__LIB_2__::func_47(&(iParam0->f_430), iParam0->f_419, 0))
					{
						if (bParam13)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
							__LIB_6__::func_952();
							__LIB_0__::func_772(iParam0, "SUMMARY");
							__LIB_40__::func_727(iParam0, 1, "SUMMARY", 0);
							__LIB_7__::func_15(0, 1);
							if (CAM::DOES_CAM_EXIST(*iParam1))
							{
								CAM::DESTROY_CAM(*iParam1, true);
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							}
							iParam0->f_436 = 5;
							if (__LIB_0__::func_493())
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
								__LIB_16__::func_518(iParam1);
							}
							__LIB_0__::func_579(&(iParam0->f_430));
							__LIB_0__::func_580(&(iParam0->f_430), 0, 0);
							iParam0->f_436 = 4;
						}
					}
					break;
				case 4:
					__LIB_0__::func_773(iParam0, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					__LIB_6__::func_952();
					__LIB_0__::func_772(iParam0, "SUMMARY");
					__LIB_40__::func_727(iParam0, 1, "SUMMARY", 0);
					__LIB_7__::func_15(0, 1);
					if (CAM::DOES_CAM_EXIST(*iParam1))
					{
						CAM::DESTROY_CAM(*iParam1, true);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iParam0->f_436 = 5;
					if (__LIB_0__::func_493())
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
					if (__LIB_0__::func_493())
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
				__LIB_39__::func_814(iParam0, &(iParam0->f_20), bVar2, 0, 0, 0, 0, 0, -1, -1, 200, 0, 0, -1);
			}
		}
	}
	return 0;
}

int func_162(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xCDF1
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
			__LIB_42__::func_350(&(uParam0->f_20), iParam3, Var1, 0f, -1, 0, 1);
		}
		else
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iParam2);
			if (PED::IS_PED_INJURED(iVar3))
			{
				iParam2 = PLAYER::PLAYER_ID();
				iVar3 = PLAYER::PLAYER_PED_ID();
			}
			bVar2 = func_164(iVar3, Global_2689235[iParam2 /*453*/].f_257, Global_2689235[iParam2 /*453*/].f_258, 1, 0, 0);
			__LIB_42__::func_350(&(uParam0->f_20), iVar3, Var1, 0f, iParam2, bVar2, 1);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_20, __LIB_0__::func_804(Global_1853348[iParam2 /*834*/].f_266), 0);
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
		__LIB_6__::func_880(uParam1, 0.05f);
		CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.01f);
		if (!CAM::IS_CAM_RENDERING(*uParam1))
		{
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		return 1;
	}
	return 0;
}

int func_164(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD068
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (__LIB_0__::func_810())
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
	func_172(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar3 = __LIB_0__::func_807(iParam0);
			if (!iVar3 == -1)
			{
				if (__LIB_1__::func_600(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = __LIB_0__::func_807(iParam0);
			if (!iVar4 == -1)
			{
				if (__LIB_1__::func_600(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = __LIB_0__::func_806(iParam0);
			if (!iVar5 == 0)
			{
				if (__LIB_0__::func_805(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xD217
{
	__LIB_0__::func_809(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			__LIB_7__::func_18(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 4, 1);
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 5, 1);
							__LIB_0__::func_809(uParam4, 7, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_0__::func_809(uParam4, 115, 1);
							__LIB_0__::func_809(uParam4, 116, 1);
							__LIB_0__::func_809(uParam4, 136, 1);
							__LIB_0__::func_809(uParam4, 138, 1);
							__LIB_0__::func_809(uParam4, 139, 1);
							__LIB_0__::func_809(uParam4, 143, 1);
							__LIB_0__::func_809(uParam4, 144, 1);
							__LIB_0__::func_809(uParam4, 145, 1);
							__LIB_0__::func_809(uParam4, 147, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_0__::func_809(uParam4, 115, 1);
							__LIB_0__::func_809(uParam4, 116, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 5, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_0__::func_809(uParam4, 115, 1);
							__LIB_0__::func_809(uParam4, 116, 1);
							__LIB_0__::func_809(uParam4, 136, 1);
							__LIB_0__::func_809(uParam4, 138, 1);
							__LIB_0__::func_809(uParam4, 139, 1);
							__LIB_0__::func_809(uParam4, 143, 1);
							__LIB_0__::func_809(uParam4, 144, 1);
							__LIB_0__::func_809(uParam4, 145, 1);
							__LIB_0__::func_809(uParam4, 147, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 59:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 66, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 77, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 60:
				case 63:
					__LIB_1__::func_601(uParam3, 67, 1);
					__LIB_1__::func_601(uParam3, 68, 1);
					__LIB_1__::func_601(uParam3, 69, 1);
					__LIB_1__::func_601(uParam3, 70, 1);
					__LIB_1__::func_601(uParam3, 71, 1);
					__LIB_1__::func_601(uParam3, 72, 1);
					__LIB_1__::func_601(uParam3, 73, 1);
					__LIB_1__::func_601(uParam3, 74, 1);
					__LIB_1__::func_601(uParam3, 78, 1);
					__LIB_1__::func_601(uParam3, 79, 1);
					__LIB_1__::func_601(uParam3, 80, 1);
					__LIB_1__::func_601(uParam3, 81, 1);
					__LIB_1__::func_601(uParam3, 82, 1);
					__LIB_1__::func_601(uParam3, 91, 1);
					__LIB_1__::func_601(uParam3, 92, 1);
					__LIB_1__::func_601(uParam2, 66, 1);
					__LIB_1__::func_601(uParam2, 67, 1);
					__LIB_1__::func_601(uParam2, 68, 1);
					__LIB_1__::func_601(uParam2, 69, 1);
					__LIB_1__::func_601(uParam2, 70, 1);
					__LIB_1__::func_601(uParam2, 71, 1);
					__LIB_1__::func_601(uParam2, 72, 1);
					__LIB_1__::func_601(uParam2, 73, 1);
					__LIB_1__::func_601(uParam2, 77, 1);
					__LIB_1__::func_601(uParam2, 78, 1);
					__LIB_1__::func_601(uParam2, 79, 1);
					__LIB_1__::func_601(uParam2, 80, 1);
					__LIB_1__::func_601(uParam2, 81, 1);
					__LIB_1__::func_601(uParam2, 90, 1);
					__LIB_1__::func_601(uParam2, 91, 1);
					__LIB_1__::func_601(uParam3, 38, 1);
					__LIB_1__::func_601(uParam3, 47, 1);
					__LIB_1__::func_601(uParam3, 111, 1);
					__LIB_1__::func_601(uParam2, 37, 1);
					__LIB_1__::func_601(uParam2, 46, 1);
					__LIB_1__::func_601(uParam2, 110, 1);
					__LIB_0__::func_809(uParam4, 92, 1);
					__LIB_0__::func_809(uParam4, 93, 1);
					__LIB_0__::func_809(uParam4, 94, 1);
					__LIB_0__::func_809(uParam4, 96, 1);
					__LIB_0__::func_809(uParam4, 97, 1);
					__LIB_0__::func_809(uParam4, 98, 1);
					__LIB_0__::func_809(uParam4, 100, 1);
					__LIB_0__::func_809(uParam4, 103, 1);
					__LIB_0__::func_809(uParam4, 104, 1);
					__LIB_0__::func_809(uParam4, 105, 1);
					__LIB_0__::func_809(uParam4, 106, 1);
					__LIB_0__::func_809(uParam4, 107, 1);
					__LIB_0__::func_809(uParam4, 108, 1);
					__LIB_7__::func_17(uParam2, uParam3, uParam4);
					break;
				case 61:
					__LIB_1__::func_601(uParam3, 67, 1);
					__LIB_1__::func_601(uParam3, 68, 1);
					__LIB_1__::func_601(uParam3, 69, 1);
					__LIB_1__::func_601(uParam3, 70, 1);
					__LIB_1__::func_601(uParam3, 71, 1);
					__LIB_1__::func_601(uParam3, 72, 1);
					__LIB_1__::func_601(uParam3, 73, 1);
					__LIB_1__::func_601(uParam3, 74, 1);
					__LIB_1__::func_601(uParam3, 78, 1);
					__LIB_1__::func_601(uParam3, 79, 1);
					__LIB_1__::func_601(uParam3, 80, 1);
					__LIB_1__::func_601(uParam3, 81, 1);
					__LIB_1__::func_601(uParam3, 82, 1);
					__LIB_1__::func_601(uParam3, 91, 1);
					__LIB_1__::func_601(uParam3, 92, 1);
					__LIB_1__::func_601(uParam2, 66, 1);
					__LIB_1__::func_601(uParam2, 67, 1);
					__LIB_1__::func_601(uParam2, 68, 1);
					__LIB_1__::func_601(uParam2, 69, 1);
					__LIB_1__::func_601(uParam2, 70, 1);
					__LIB_1__::func_601(uParam2, 71, 1);
					__LIB_1__::func_601(uParam2, 72, 1);
					__LIB_1__::func_601(uParam2, 73, 1);
					__LIB_1__::func_601(uParam2, 77, 1);
					__LIB_1__::func_601(uParam2, 78, 1);
					__LIB_1__::func_601(uParam2, 79, 1);
					__LIB_1__::func_601(uParam2, 80, 1);
					__LIB_1__::func_601(uParam2, 81, 1);
					__LIB_1__::func_601(uParam2, 90, 1);
					__LIB_1__::func_601(uParam2, 91, 1);
					__LIB_1__::func_601(uParam3, 38, 1);
					__LIB_1__::func_601(uParam3, 47, 1);
					__LIB_1__::func_601(uParam3, 111, 1);
					__LIB_1__::func_601(uParam2, 37, 1);
					__LIB_1__::func_601(uParam2, 46, 1);
					__LIB_1__::func_601(uParam2, 110, 1);
					__LIB_0__::func_809(uParam4, 92, 1);
					__LIB_0__::func_809(uParam4, 93, 1);
					__LIB_0__::func_809(uParam4, 94, 1);
					__LIB_0__::func_809(uParam4, 96, 1);
					__LIB_0__::func_809(uParam4, 97, 1);
					__LIB_0__::func_809(uParam4, 98, 1);
					__LIB_0__::func_809(uParam4, 100, 1);
					__LIB_0__::func_809(uParam4, 103, 1);
					__LIB_0__::func_809(uParam4, 104, 1);
					__LIB_0__::func_809(uParam4, 105, 1);
					__LIB_0__::func_809(uParam4, 106, 1);
					__LIB_0__::func_809(uParam4, 107, 1);
					__LIB_0__::func_809(uParam4, 108, 1);
					__LIB_7__::func_17(uParam2, uParam3, uParam4);
					break;
				case 62:
					__LIB_1__::func_601(uParam3, 67, 1);
					__LIB_1__::func_601(uParam3, 68, 1);
					__LIB_1__::func_601(uParam3, 69, 1);
					__LIB_1__::func_601(uParam3, 70, 1);
					__LIB_1__::func_601(uParam3, 71, 1);
					__LIB_1__::func_601(uParam3, 72, 1);
					__LIB_1__::func_601(uParam3, 73, 1);
					__LIB_1__::func_601(uParam3, 74, 1);
					__LIB_1__::func_601(uParam3, 78, 1);
					__LIB_1__::func_601(uParam3, 79, 1);
					__LIB_1__::func_601(uParam3, 80, 1);
					__LIB_1__::func_601(uParam3, 81, 1);
					__LIB_1__::func_601(uParam3, 82, 1);
					__LIB_1__::func_601(uParam3, 91, 1);
					__LIB_1__::func_601(uParam3, 92, 1);
					__LIB_1__::func_601(uParam2, 66, 1);
					__LIB_1__::func_601(uParam2, 67, 1);
					__LIB_1__::func_601(uParam2, 68, 1);
					__LIB_1__::func_601(uParam2, 69, 1);
					__LIB_1__::func_601(uParam2, 70, 1);
					__LIB_1__::func_601(uParam2, 71, 1);
					__LIB_1__::func_601(uParam2, 72, 1);
					__LIB_1__::func_601(uParam2, 73, 1);
					__LIB_1__::func_601(uParam2, 77, 1);
					__LIB_1__::func_601(uParam2, 78, 1);
					__LIB_1__::func_601(uParam2, 79, 1);
					__LIB_1__::func_601(uParam2, 80, 1);
					__LIB_1__::func_601(uParam2, 81, 1);
					__LIB_1__::func_601(uParam2, 90, 1);
					__LIB_1__::func_601(uParam2, 91, 1);
					__LIB_1__::func_601(uParam3, 38, 1);
					__LIB_1__::func_601(uParam3, 47, 1);
					__LIB_1__::func_601(uParam3, 111, 1);
					__LIB_1__::func_601(uParam2, 37, 1);
					__LIB_1__::func_601(uParam2, 46, 1);
					__LIB_1__::func_601(uParam2, 110, 1);
					__LIB_0__::func_809(uParam4, 92, 1);
					__LIB_0__::func_809(uParam4, 93, 1);
					__LIB_0__::func_809(uParam4, 94, 1);
					__LIB_0__::func_809(uParam4, 96, 1);
					__LIB_0__::func_809(uParam4, 97, 1);
					__LIB_0__::func_809(uParam4, 98, 1);
					__LIB_0__::func_809(uParam4, 100, 1);
					__LIB_0__::func_809(uParam4, 103, 1);
					__LIB_0__::func_809(uParam4, 104, 1);
					__LIB_0__::func_809(uParam4, 105, 1);
					__LIB_0__::func_809(uParam4, 106, 1);
					__LIB_0__::func_809(uParam4, 107, 1);
					__LIB_0__::func_809(uParam4, 108, 1);
					__LIB_7__::func_17(uParam2, uParam3, uParam4);
					break;
				case 64:
				case 65:
				case 66:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 10:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 3, 1);
							__LIB_1__::func_601(uParam3, 4, 1);
							__LIB_1__::func_601(uParam3, 6, 1);
							__LIB_1__::func_601(uParam3, 10, 1);
							__LIB_1__::func_601(uParam3, 54, 1);
							__LIB_1__::func_601(uParam3, 55, 1);
							__LIB_1__::func_601(uParam3, 56, 1);
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 20, 1);
							__LIB_1__::func_601(uParam3, 26, 1);
							__LIB_1__::func_601(uParam3, 27, 1);
							__LIB_1__::func_601(uParam3, 32, 1);
							__LIB_1__::func_601(uParam3, 33, 1);
							__LIB_1__::func_601(uParam3, 37, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam3, 55, 1);
							__LIB_1__::func_601(uParam3, 106, 1);
							__LIB_1__::func_601(uParam3, 114, 1);
							__LIB_1__::func_601(uParam3, 116, 1);
							__LIB_1__::func_601(uParam3, 117, 1);
							__LIB_1__::func_601(uParam3, 118, 1);
							__LIB_1__::func_601(uParam3, 119, 1);
							__LIB_1__::func_601(uParam2, 3, 1);
							__LIB_1__::func_601(uParam2, 4, 1);
							__LIB_1__::func_601(uParam2, 6, 1);
							__LIB_1__::func_601(uParam2, 8, 1);
							__LIB_1__::func_601(uParam2, 9, 1);
							__LIB_1__::func_601(uParam2, 10, 1);
							__LIB_1__::func_601(uParam2, 53, 1);
							__LIB_1__::func_601(uParam2, 56, 1);
							__LIB_1__::func_601(uParam2, 55, 1);
							__LIB_1__::func_601(uParam2, 13, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 21, 1);
							__LIB_1__::func_601(uParam2, 26, 1);
							__LIB_1__::func_601(uParam2, 27, 1);
							__LIB_1__::func_601(uParam2, 28, 1);
							__LIB_1__::func_601(uParam2, 32, 1);
							__LIB_1__::func_601(uParam2, 36, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_1__::func_601(uParam2, 55, 1);
							__LIB_1__::func_601(uParam2, 14, 1);
							__LIB_1__::func_601(uParam2, 105, 1);
							__LIB_1__::func_601(uParam2, 113, 1);
							__LIB_1__::func_601(uParam2, 114, 1);
							__LIB_1__::func_601(uParam2, 115, 1);
							__LIB_1__::func_601(uParam2, 116, 1);
							__LIB_1__::func_601(uParam2, 117, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_1__::func_601(uParam3, 65, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 76, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 64, 1);
							__LIB_1__::func_601(uParam2, 65, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 75, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 3, 1);
							__LIB_1__::func_601(uParam3, 4, 1);
							__LIB_1__::func_601(uParam3, 6, 1);
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 19, 1);
							__LIB_1__::func_601(uParam3, 20, 1);
							__LIB_1__::func_601(uParam3, 26, 1);
							__LIB_1__::func_601(uParam3, 27, 1);
							__LIB_1__::func_601(uParam3, 32, 1);
							__LIB_1__::func_601(uParam3, 33, 1);
							__LIB_1__::func_601(uParam3, 37, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam3, 55, 1);
							__LIB_1__::func_601(uParam3, 106, 1);
							__LIB_1__::func_601(uParam3, 114, 1);
							__LIB_1__::func_601(uParam3, 116, 1);
							__LIB_1__::func_601(uParam3, 117, 1);
							__LIB_1__::func_601(uParam3, 118, 1);
							__LIB_1__::func_601(uParam3, 119, 1);
							__LIB_1__::func_601(uParam2, 3, 1);
							__LIB_1__::func_601(uParam2, 4, 1);
							__LIB_1__::func_601(uParam2, 6, 1);
							__LIB_1__::func_601(uParam2, 8, 1);
							__LIB_1__::func_601(uParam2, 9, 1);
							__LIB_1__::func_601(uParam2, 10, 1);
							__LIB_1__::func_601(uParam2, 53, 1);
							__LIB_1__::func_601(uParam2, 56, 1);
							__LIB_1__::func_601(uParam2, 55, 1);
							__LIB_1__::func_601(uParam2, 11, 1);
							__LIB_1__::func_601(uParam2, 13, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 21, 1);
							__LIB_1__::func_601(uParam2, 22, 1);
							__LIB_1__::func_601(uParam2, 54, 1);
							__LIB_1__::func_601(uParam2, 26, 1);
							__LIB_1__::func_601(uParam2, 27, 1);
							__LIB_1__::func_601(uParam2, 28, 1);
							__LIB_1__::func_601(uParam2, 30, 1);
							__LIB_1__::func_601(uParam2, 31, 1);
							__LIB_1__::func_601(uParam2, 32, 1);
							__LIB_1__::func_601(uParam2, 36, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_1__::func_601(uParam2, 55, 1);
							__LIB_1__::func_601(uParam2, 14, 1);
							__LIB_1__::func_601(uParam2, 105, 1);
							__LIB_1__::func_601(uParam2, 113, 1);
							__LIB_1__::func_601(uParam2, 114, 1);
							__LIB_1__::func_601(uParam2, 115, 1);
							__LIB_1__::func_601(uParam2, 116, 1);
							__LIB_1__::func_601(uParam2, 117, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_1__::func_601(uParam3, 65, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 76, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 64, 1);
							__LIB_1__::func_601(uParam2, 65, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 75, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam3, 106, 1);
							__LIB_1__::func_601(uParam3, 114, 1);
							__LIB_1__::func_601(uParam3, 116, 1);
							__LIB_1__::func_601(uParam3, 117, 1);
							__LIB_1__::func_601(uParam3, 118, 1);
							__LIB_1__::func_601(uParam3, 119, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_1__::func_601(uParam2, 14, 1);
							__LIB_1__::func_601(uParam2, 105, 1);
							__LIB_1__::func_601(uParam2, 113, 1);
							__LIB_1__::func_601(uParam2, 114, 1);
							__LIB_1__::func_601(uParam2, 115, 1);
							__LIB_1__::func_601(uParam2, 116, 1);
							__LIB_1__::func_601(uParam2, 117, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_1__::func_601(uParam3, 65, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 76, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 64, 1);
							__LIB_1__::func_601(uParam2, 65, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 75, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 13:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 19, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_0__::func_809(uParam4, 115, 1);
							__LIB_0__::func_809(uParam4, 116, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 7, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_0__::func_809(uParam4, 115, 1);
							__LIB_0__::func_809(uParam4, 116, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 5, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_0__::func_809(uParam4, 115, 1);
							__LIB_0__::func_809(uParam4, 116, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 16:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 4, 1);
							break;
						case 1:
							__LIB_0__::func_809(uParam4, 43, 1);
							break;
						case 2:
							break;
					}
					break;
				case 23:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_0__::func_809(uParam4, 110, 1);
							__LIB_0__::func_809(uParam4, 112, 1);
							__LIB_7__::func_17(uParam2, uParam3, uParam4);
							break;
					}
					break;
				case 17:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 5, 1);
							__LIB_0__::func_809(uParam4, 6, 1);
							__LIB_0__::func_809(uParam4, 7, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 5, 1);
							__LIB_0__::func_809(uParam4, 6, 1);
							__LIB_0__::func_809(uParam4, 7, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 5, 1);
							__LIB_0__::func_809(uParam4, 6, 1);
							__LIB_0__::func_809(uParam4, 7, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 19:
					switch (iParam5)
					{
						case 0:
							__LIB_1__::func_601(uParam3, 3, 1);
							__LIB_1__::func_601(uParam3, 7, 1);
							__LIB_1__::func_601(uParam3, 0, 1);
							__LIB_1__::func_601(uParam3, 12, 1);
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 15, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 17, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 20, 1);
							__LIB_1__::func_601(uParam3, 21, 1);
							__LIB_1__::func_601(uParam3, 25, 1);
							__LIB_1__::func_601(uParam3, 26, 1);
							__LIB_1__::func_601(uParam3, 27, 1);
							__LIB_1__::func_601(uParam3, 30, 1);
							__LIB_1__::func_601(uParam3, 31, 1);
							__LIB_1__::func_601(uParam3, 32, 1);
							__LIB_1__::func_601(uParam3, 33, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam3, 37, 1);
							__LIB_1__::func_601(uParam2, 0, 1);
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 3, 1);
							__LIB_1__::func_601(uParam2, 4, 1);
							__LIB_1__::func_601(uParam2, 6, 1);
							__LIB_1__::func_601(uParam2, 7, 1);
							__LIB_1__::func_601(uParam2, 8, 1);
							__LIB_1__::func_601(uParam2, 11, 1);
							__LIB_1__::func_601(uParam2, 13, 1);
							__LIB_1__::func_601(uParam2, 15, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 17, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 19, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
							__LIB_1__::func_601(uParam2, 21, 1);
							__LIB_1__::func_601(uParam2, 22, 1);
							__LIB_1__::func_601(uParam2, 54, 1);
							__LIB_1__::func_601(uParam2, 24, 1);
							__LIB_1__::func_601(uParam2, 26, 1);
							__LIB_1__::func_601(uParam2, 27, 1);
							__LIB_1__::func_601(uParam2, 28, 1);
							__LIB_1__::func_601(uParam2, 30, 1);
							__LIB_1__::func_601(uParam2, 31, 1);
							__LIB_1__::func_601(uParam2, 32, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_1__::func_601(uParam2, 36, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 65, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 76, 1);
							__LIB_1__::func_601(uParam3, 77, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 64, 1);
							__LIB_1__::func_601(uParam2, 65, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 75, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 1:
							__LIB_1__::func_601(uParam3, 3, 1);
							__LIB_1__::func_601(uParam3, 7, 1);
							__LIB_1__::func_601(uParam3, 0, 1);
							__LIB_1__::func_601(uParam3, 12, 1);
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 15, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 17, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 20, 1);
							__LIB_1__::func_601(uParam3, 21, 1);
							__LIB_1__::func_601(uParam3, 25, 1);
							__LIB_1__::func_601(uParam3, 26, 1);
							__LIB_1__::func_601(uParam3, 27, 1);
							__LIB_1__::func_601(uParam3, 30, 1);
							__LIB_1__::func_601(uParam3, 31, 1);
							__LIB_1__::func_601(uParam3, 32, 1);
							__LIB_1__::func_601(uParam3, 33, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam2, 0, 1);
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 3, 1);
							__LIB_1__::func_601(uParam2, 4, 1);
							__LIB_1__::func_601(uParam2, 6, 1);
							__LIB_1__::func_601(uParam2, 7, 1);
							__LIB_1__::func_601(uParam2, 11, 1);
							__LIB_1__::func_601(uParam2, 13, 1);
							__LIB_1__::func_601(uParam2, 15, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 17, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 19, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
							__LIB_1__::func_601(uParam2, 21, 1);
							__LIB_1__::func_601(uParam2, 22, 1);
							__LIB_1__::func_601(uParam2, 54, 1);
							__LIB_1__::func_601(uParam2, 24, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 6, 1);
							__LIB_0__::func_809(uParam4, 7, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 43, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 65, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 76, 1);
							__LIB_1__::func_601(uParam3, 77, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 64, 1);
							__LIB_1__::func_601(uParam2, 65, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 75, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
						case 2:
							__LIB_1__::func_601(uParam3, 1, 1);
							__LIB_1__::func_601(uParam3, 3, 1);
							__LIB_1__::func_601(uParam3, 4, 1);
							__LIB_1__::func_601(uParam3, 5, 1);
							__LIB_1__::func_601(uParam3, 7, 1);
							__LIB_1__::func_601(uParam3, 10, 1);
							__LIB_1__::func_601(uParam3, 54, 1);
							__LIB_1__::func_601(uParam3, 55, 1);
							__LIB_1__::func_601(uParam3, 56, 1);
							__LIB_1__::func_601(uParam3, 0, 1);
							__LIB_1__::func_601(uParam3, 12, 1);
							__LIB_1__::func_601(uParam3, 13, 1);
							__LIB_1__::func_601(uParam3, 15, 1);
							__LIB_1__::func_601(uParam3, 16, 1);
							__LIB_1__::func_601(uParam3, 48, 1);
							__LIB_1__::func_601(uParam3, 49, 1);
							__LIB_1__::func_601(uParam3, 17, 1);
							__LIB_1__::func_601(uParam3, 18, 1);
							__LIB_1__::func_601(uParam3, 50, 1);
							__LIB_1__::func_601(uParam3, 51, 1);
							__LIB_1__::func_601(uParam3, 52, 1);
							__LIB_1__::func_601(uParam3, 53, 1);
							__LIB_1__::func_601(uParam3, 62, 1);
							__LIB_1__::func_601(uParam3, 38, 1);
							__LIB_1__::func_601(uParam3, 47, 1);
							__LIB_1__::func_601(uParam3, 111, 1);
							__LIB_1__::func_601(uParam3, 20, 1);
							__LIB_1__::func_601(uParam3, 21, 1);
							__LIB_1__::func_601(uParam3, 25, 1);
							__LIB_1__::func_601(uParam3, 26, 1);
							__LIB_1__::func_601(uParam3, 27, 1);
							__LIB_1__::func_601(uParam3, 30, 1);
							__LIB_1__::func_601(uParam3, 31, 1);
							__LIB_1__::func_601(uParam3, 32, 1);
							__LIB_1__::func_601(uParam3, 33, 1);
							__LIB_1__::func_601(uParam3, 37, 1);
							__LIB_1__::func_601(uParam3, 39, 1);
							__LIB_1__::func_601(uParam2, 0, 1);
							__LIB_1__::func_601(uParam2, 1, 1);
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 3, 1);
							__LIB_1__::func_601(uParam2, 4, 1);
							__LIB_1__::func_601(uParam2, 5, 1);
							__LIB_1__::func_601(uParam2, 6, 1);
							__LIB_1__::func_601(uParam2, 7, 1);
							__LIB_1__::func_601(uParam2, 8, 1);
							__LIB_1__::func_601(uParam2, 9, 1);
							__LIB_1__::func_601(uParam2, 10, 1);
							__LIB_1__::func_601(uParam2, 53, 1);
							__LIB_1__::func_601(uParam2, 56, 1);
							__LIB_1__::func_601(uParam2, 55, 1);
							__LIB_1__::func_601(uParam2, 11, 1);
							__LIB_1__::func_601(uParam2, 12, 1);
							__LIB_1__::func_601(uParam2, 13, 1);
							__LIB_1__::func_601(uParam2, 14, 1);
							__LIB_1__::func_601(uParam2, 15, 1);
							__LIB_1__::func_601(uParam2, 16, 1);
							__LIB_1__::func_601(uParam2, 47, 1);
							__LIB_1__::func_601(uParam2, 48, 1);
							__LIB_1__::func_601(uParam2, 17, 1);
							__LIB_1__::func_601(uParam2, 18, 1);
							__LIB_1__::func_601(uParam2, 49, 1);
							__LIB_1__::func_601(uParam2, 50, 1);
							__LIB_1__::func_601(uParam2, 51, 1);
							__LIB_1__::func_601(uParam2, 52, 1);
							__LIB_1__::func_601(uParam2, 62, 1);
							__LIB_1__::func_601(uParam2, 37, 1);
							__LIB_1__::func_601(uParam2, 46, 1);
							__LIB_1__::func_601(uParam2, 110, 1);
							__LIB_1__::func_601(uParam2, 19, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
							__LIB_1__::func_601(uParam2, 21, 1);
							__LIB_1__::func_601(uParam2, 22, 1);
							__LIB_1__::func_601(uParam2, 54, 1);
							__LIB_1__::func_601(uParam2, 23, 1);
							__LIB_1__::func_601(uParam2, 24, 1);
							__LIB_1__::func_601(uParam2, 26, 1);
							__LIB_1__::func_601(uParam2, 27, 1);
							__LIB_1__::func_601(uParam2, 28, 1);
							__LIB_1__::func_601(uParam2, 29, 1);
							__LIB_1__::func_601(uParam2, 30, 1);
							__LIB_1__::func_601(uParam2, 31, 1);
							__LIB_1__::func_601(uParam2, 32, 1);
							__LIB_1__::func_601(uParam2, 33, 1);
							__LIB_1__::func_601(uParam2, 36, 1);
							__LIB_1__::func_601(uParam2, 38, 1);
							__LIB_1__::func_601(uParam2, 55, 1);
							__LIB_0__::func_809(uParam4, 1, 1);
							__LIB_0__::func_809(uParam4, 2, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 3, 1);
							__LIB_0__::func_809(uParam4, 4, 1);
							__LIB_0__::func_809(uParam4, 14, 1);
							__LIB_0__::func_809(uParam4, 15, 1);
							__LIB_0__::func_809(uParam4, 16, 1);
							__LIB_0__::func_809(uParam4, 6, 1);
							__LIB_0__::func_809(uParam4, 8, 1);
							__LIB_0__::func_809(uParam4, 9, 1);
							__LIB_0__::func_809(uParam4, 10, 1);
							__LIB_0__::func_809(uParam4, 12, 1);
							__LIB_0__::func_809(uParam4, 13, 1);
							__LIB_0__::func_809(uParam4, 17, 1);
							__LIB_0__::func_809(uParam4, 18, 1);
							__LIB_0__::func_809(uParam4, 19, 1);
							__LIB_0__::func_809(uParam4, 20, 1);
							__LIB_0__::func_809(uParam4, 59, 1);
							__LIB_0__::func_809(uParam4, 60, 1);
							__LIB_0__::func_809(uParam4, 61, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 62, 1);
							__LIB_0__::func_809(uParam4, 63, 1);
							__LIB_0__::func_809(uParam4, 64, 1);
							__LIB_0__::func_809(uParam4, 65, 1);
							__LIB_0__::func_809(uParam4, 66, 1);
							__LIB_0__::func_809(uParam4, 67, 1);
							__LIB_0__::func_809(uParam4, 68, 1);
							__LIB_0__::func_809(uParam4, 69, 1);
							__LIB_0__::func_809(uParam4, 70, 1);
							__LIB_0__::func_809(uParam4, 71, 1);
							__LIB_0__::func_809(uParam4, 72, 1);
							__LIB_0__::func_809(uParam4, 21, 1);
							__LIB_0__::func_809(uParam4, 22, 1);
							__LIB_0__::func_809(uParam4, 23, 1);
							__LIB_0__::func_809(uParam4, 24, 1);
							__LIB_0__::func_809(uParam4, 25, 1);
							__LIB_0__::func_809(uParam4, 26, 1);
							__LIB_0__::func_809(uParam4, 36, 1);
							__LIB_0__::func_809(uParam4, 46, 1);
							__LIB_0__::func_809(uParam4, 38, 1);
							__LIB_0__::func_809(uParam4, 29, 1);
							__LIB_0__::func_809(uParam4, 28, 1);
							__LIB_0__::func_809(uParam4, 31, 1);
							__LIB_0__::func_809(uParam4, 33, 1);
							__LIB_0__::func_809(uParam4, 34, 1);
							__LIB_0__::func_809(uParam4, 32, 1);
							__LIB_0__::func_809(uParam4, 92, 1);
							__LIB_0__::func_809(uParam4, 93, 1);
							__LIB_0__::func_809(uParam4, 94, 1);
							__LIB_0__::func_809(uParam4, 96, 1);
							__LIB_0__::func_809(uParam4, 97, 1);
							__LIB_0__::func_809(uParam4, 98, 1);
							__LIB_0__::func_809(uParam4, 100, 1);
							__LIB_0__::func_809(uParam4, 103, 1);
							__LIB_0__::func_809(uParam4, 104, 1);
							__LIB_0__::func_809(uParam4, 105, 1);
							__LIB_0__::func_809(uParam4, 106, 1);
							__LIB_0__::func_809(uParam4, 107, 1);
							__LIB_0__::func_809(uParam4, 108, 1);
							__LIB_1__::func_601(uParam3, 65, 1);
							__LIB_1__::func_601(uParam3, 67, 1);
							__LIB_1__::func_601(uParam3, 68, 1);
							__LIB_1__::func_601(uParam3, 69, 1);
							__LIB_1__::func_601(uParam3, 70, 1);
							__LIB_1__::func_601(uParam3, 71, 1);
							__LIB_1__::func_601(uParam3, 72, 1);
							__LIB_1__::func_601(uParam3, 73, 1);
							__LIB_1__::func_601(uParam3, 74, 1);
							__LIB_1__::func_601(uParam3, 75, 1);
							__LIB_1__::func_601(uParam3, 76, 1);
							__LIB_1__::func_601(uParam3, 77, 1);
							__LIB_1__::func_601(uParam3, 78, 1);
							__LIB_1__::func_601(uParam3, 79, 1);
							__LIB_1__::func_601(uParam3, 80, 1);
							__LIB_1__::func_601(uParam3, 81, 1);
							__LIB_1__::func_601(uParam3, 82, 1);
							__LIB_1__::func_601(uParam3, 91, 1);
							__LIB_1__::func_601(uParam3, 92, 1);
							__LIB_1__::func_601(uParam2, 64, 1);
							__LIB_1__::func_601(uParam2, 65, 1);
							__LIB_1__::func_601(uParam2, 66, 1);
							__LIB_1__::func_601(uParam2, 67, 1);
							__LIB_1__::func_601(uParam2, 68, 1);
							__LIB_1__::func_601(uParam2, 69, 1);
							__LIB_1__::func_601(uParam2, 70, 1);
							__LIB_1__::func_601(uParam2, 71, 1);
							__LIB_1__::func_601(uParam2, 72, 1);
							__LIB_1__::func_601(uParam2, 73, 1);
							__LIB_1__::func_601(uParam2, 74, 1);
							__LIB_1__::func_601(uParam2, 75, 1);
							__LIB_1__::func_601(uParam2, 77, 1);
							__LIB_1__::func_601(uParam2, 78, 1);
							__LIB_1__::func_601(uParam2, 79, 1);
							__LIB_1__::func_601(uParam2, 80, 1);
							__LIB_1__::func_601(uParam2, 81, 1);
							__LIB_1__::func_601(uParam2, 90, 1);
							__LIB_1__::func_601(uParam2, 91, 1);
							break;
					}
					break;
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						case 1:
							__LIB_1__::func_601(uParam2, 2, 1);
							__LIB_1__::func_601(uParam2, 20, 1);
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
					func_172(2, 59, uParam2, uParam3, uParam4, 0, 0);
					break;
				case 32:
					func_172(2, 60, uParam2, uParam3, uParam4, 0, 0);
					break;
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_269(var uParam0)//Position - 0x30D0A
{
	STREAMING::REQUEST_ANIM_DICT("anim@amb@clubhouse@mini@darts@");
	if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@clubhouse@mini@darts@"))
	{
		if (!func_901(uParam0, 26))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "anim@amb@clubhouse@mini@darts@", "outro", 8f, -8f, -1, 0, 0f, false, false, false);
				func_930(uParam0, 26);
			}
		}
	}
}

void func_342(int* iParam0, bool bParam1)//Position - 0x3340A
{
	int iVar0;
	iVar0 = SYSTEM::ROUND(((iParam0->f_7 - __LIB_7__::func_42(iParam0)) * 1000f));
	if (iVar0 < 0 || iParam0->f_12)
	{
		iVar0 = 0;
	}
	if (!iParam0->f_10)
	{
		if (bParam1)
		{
			if (iVar0 < 6000)
			{
				__LIB_6__::func_929(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_6__::func_929(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
		else
		{
			__LIB_6__::func_929(iVar0, "DARTS_SHT_CLCK", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_346(var uParam0)//Position - 0x33632
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
			__LIB_24__::func_969(&uLocal_1045, __LIB_1__::func_843(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		case 1:
			if (!__LIB_24__::func_984(&uLocal_1045, 0))
			{
				__LIB_7__::func_41(&uLocal_1045);
				uParam0->f_681 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_373(var uParam0)//Position - 0x3401C
{
	uParam0->f_4.f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_4.f_5 = { 0f, 0f, 0f };
	uParam0->f_4.f_8 = { 0f, 0f, 0f };
	uParam0->f_4.f_23 = 0;
	uParam0->f_4.f_24 = 0;
	uParam0->f_4.f_20 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_4));
	}
}

void func_377(var uParam0, int iParam1)//Position - 0x3419E
{
	struct<8> Var0;
	Var0.f_0 = 685163154;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_6 = uParam0;
	Var0.f_7 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, __LIB_6__::func_900(1, 1));
}

void func_378(var uParam0, var uParam1, int iParam2)//Position - 0x341D0
{
	int iVar0;
	uParam0->f_2 = { uParam1->f_4.f_2 };
	uParam0->f_5 = { uParam1->f_4.f_5 };
	uParam0->f_8 = { uParam1->f_4.f_8 };
	uParam0->f_17 = { uParam1->f_4.f_17 };
	uParam0->f_11 = { uParam1->f_4.f_11 };
	uParam0->f_23 = uParam1->f_4.f_23;
	uParam0->f_24 = uParam1->f_4.f_24;
	iVar0 = iLocal_159;
	iParam2 = iParam2;
	*uParam0 = OBJECT::CREATE_OBJECT(iVar0, Local_171, false, false, false);
}

void func_379()//Position - 0x3424A
{
	struct<2> Var0;
	Var0.f_0 = 1275703771;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, __LIB_6__::func_900(1, 1));
}

void func_393(var uParam0, int iParam1, bool bParam2)//Position - 0x34911
{
	if (bParam2)
	{
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
	}
}

void func_394(var uParam0, int iParam1, bool bParam2)//Position - 0x3492E
{
	bool bVar0;
	bVar0 = BitTest(uParam0->f_30, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			MISC::SET_BIT(&(uParam0->f_30), iParam1);
		}
	}
	else if (bVar0)
	{
		MISC::CLEAR_BIT(&(uParam0->f_30), iParam1);
	}
}

void func_395(var uParam0, struct<25> Param1, var uParam2)//Position - 0x34966
{
	uParam0->f_4.f_2 = { Param1.f_2 };
	uParam0->f_4.f_5 = { Param1.f_5 };
	uParam0->f_4.f_8 = { Param1.f_8 };
	uParam0->f_4.f_17 = { Param1.f_17 };
	uParam0->f_4.f_11 = { Param1.f_11 };
	uParam0->f_4.f_23 = Param1.f_23;
	uParam0->f_4.f_24 = Param1.f_24;
}

void func_396(struct<3> Param0)//Position - 0x349C8
{
	struct<3> Var0;
	Var0.f_0 = -1548998837;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, __LIB_6__::func_900(1, 1));
}

int func_417(int* iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x35A59
{
	*uParam2 = func_451(iParam3);
	if (func_419((uParam1[0 /*97*/])->f_82, &(uParam2->f_1[0])))
	{
	}
	else
	{
		return 0;
	}
	if (!func_901(iParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 16))
	{
		if (func_419((uParam1[iLocal_232 /*97*/])->f_82, &(uParam2->f_1[iLocal_232])))
		{
		}
		else
		{
			return 0;
		}
	}
	if ((func_901(iParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 16) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iLocal_232])) || (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[0]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iLocal_232])))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[0], true, false);
			func_418(PLAYER::PLAYER_PED_ID(), uParam2->f_1[0], 0);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam2->f_1[0], *uParam2, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1000f, 0);
		}
		else
		{
			return 0;
		}
		if (!func_901(iParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 16))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1[iLocal_232]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam2->f_1[iLocal_232], true, false);
				func_418(PLAYER::PLAYER_PED_ID(), uParam2->f_1[iLocal_232], 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam2->f_1[iLocal_232], *uParam2, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1000f, 0);
			}
			else
			{
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_4))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam2->f_4, *uParam2, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, -1000f, 131072, 1000f);
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(*uParam2, 0.45f);
		return 1;
	}
	return 0;
}

int func_418(int iParam0, int iParam1, bool bParam2)//Position - 0x35C11
{
	if (__LIB_0__::func_121(iParam0) && __LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iParam1, bParam2);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, iParam0, bParam2);
		return 1;
	}
	return 0;
}

int func_419(int iParam0, var uParam1)//Position - 0x35C46
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = PED::CLONE_PED(iVar0, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
		if (__LIB_18__::func_185(iParam0, 1))
		{
			if (__LIB_39__::func_257(iParam0) == 2)
			{
				if (__LIB_1__::func_359(iParam0))
				{
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(iParam0, 0), false);
				if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam1, __LIB_1__::func_867(iParam0, 0), __LIB_7__::func_239(iParam0, 2)))
				{
				}
			}
		}
		if (!PED::IS_PED_INJURED(*uParam1))
		{
			if (func_420(iVar0))
			{
				PED::SET_PED_HELMET(*uParam1, true);
			}
			else
			{
				PED::SET_PED_HELMET(*uParam1, false);
				PED::REMOVE_PED_HELMET(*uParam1, true);
				if (PED::GET_PED_PROP_INDEX(*uParam1, 1) == 26 || PED::GET_PED_PROP_INDEX(iVar0, 1) == 26)
				{
					PED::CLEAR_PED_PROP(*uParam1, 1);
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x35D27
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_422(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_422(int iParam0, int iParam1, int iParam2)//Position - 0x35E28
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
				if (func_429(iParam0, iParam1, iVar0))
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
				if (func_429(iParam0, iParam1, iVar1))
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

int func_429(int iParam0, int iParam1, int iParam2)//Position - 0x362E9
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar0, iParam1, iParam2, -1) };
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
				if (!func_429(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_429(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_429(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_429(iParam0, 14, uVar11[iVar10]))
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
						return func_429(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_429(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x3A64A
{
	switch (iParam0)
	{
		case 0:
			return PED::CREATE_SYNCHRONIZED_SCENE(1119.07f, -3157.373f, -36.63106f, 0f, 0f, -72f, 2);
			break;
		case 1:
			return PED::CREATE_SYNCHRONIZED_SCENE(1000.93f, -3163.369f, -33.6125f, 0f, 0f, 7.56f, 2);
			break;
		case 2:
			return PED::CREATE_SYNCHRONIZED_SCENE(2708.5498f, -358.2208f, -54.6002f, 0f, 0f, 7.56f, 2);
			break;
	}
	return -1;
}

char* func_452(bool bParam0)//Position - 0x3A6CF
{
	if (bParam0)
	{
		return "Intro";
	}
	return "Intro_B";
}

void func_454(int iParam0, var uParam1, bool bParam2)//Position - 0x3A704
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1118.0883f, -3159.119f, -36.3843f, -3.1143f, 0f, 45.6699f, 47.0142f, false, 2);
			}
			else
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1118.0822f, -3158.723f, -36.3498f, -5.6008f, 0f, 45.8057f, 47.0142f, false, 2);
			}
			break;
		case 1:
			if (bParam2)
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1002.8469f, -3164.9526f, -33.4244f, -3.567f, 0f, 112.2157f, 40.3693f, false, 2);
			}
			else
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1002.3334f, -3164.7175f, -33.4356f, -1.6441f, 0f, 122.4329f, 40.3693f, false, 2);
			}
			break;
		case 2:
			if (bParam2)
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2710.4666f, -359.8044f, -54.4121f, -3.567f, 0f, 112.2157f, 40.3693f, false, 2);
			}
			else
			{
				*uParam1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2709.9531f, -359.5693f, -54.4233f, -1.6441f, 0f, 122.4329f, 40.3693f, false, 2);
			}
			break;
	}
}

int func_634(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int* iParam5, int* iParam6)//Position - 0x46AF3
{
	int iVar0;
	int iVar1;
	if (func_901(iParam6[iLocal_234 /*34*/], 10) && func_901(iParam6[iLocal_235 /*34*/], 10))
	{
		*uParam0 = 8;
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_6__::func_892(iParam5);
			HUD::DISPLAY_RADAR(false);
			__LIB_1__::func_872(uParam1->f_1, uParam1->f_4, __LIB_1__::func_874(0), __LIB_1__::func_873(0), 0, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !__LIB_7__::func_62(PLAYER::PLAYER_ID()))
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			*uParam0 = 1;
			break;
		case 1:
			switch (iLocal_162)
			{
				case 0:
					if (__LIB_7__::func_42(iParam5) > 1f)
					{
						__LIB_0__::func_151("DARTS_HOW_TO_2", -1);
						__LIB_6__::func_892(iParam5);
						iLocal_162++;
					}
					break;
				case 1:
					if (__LIB_7__::func_42(iParam5) > 2f)
					{
						if (*iParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							__LIB_18__::func_292(uParam4[0 /*26*/], uParam1, iParam3, uParam2, 1);
						}
						if (*iParam3 == 3)
						{
							if (__LIB_24__::func_981(uParam4[0 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								iLocal_162++;
								__LIB_6__::func_892(iParam5);
								*iParam3 = 2;
							}
						}
					}
					break;
				case 2:
					if (__LIB_7__::func_42(iParam5) > 5f)
					{
						__LIB_0__::func_151("DARTS_HOW_TO_3", -1);
						__LIB_6__::func_892(iParam5);
						iLocal_162++;
					}
					break;
				case 3:
					if (__LIB_7__::func_42(iParam5) > 2f)
					{
						if (*iParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							__LIB_18__::func_292(uParam4[1 /*26*/], uParam1, iParam3, uParam2, 1);
						}
						if (*iParam3 == 3)
						{
							if (__LIB_24__::func_981(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, false, 0, false);
								__LIB_6__::func_892(iParam5);
								*iParam3 = 2;
								iLocal_162++;
							}
						}
					}
					break;
				case 4:
					if (__LIB_7__::func_42(iParam5) > 5f)
					{
						__LIB_0__::func_151("DARTS_HOW_3A", -1);
						__LIB_6__::func_892(iParam5);
						iLocal_162++;
					}
					break;
				case 5:
					if (__LIB_7__::func_42(iParam5) > 2f)
					{
						if (*iParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 2;
							__LIB_18__::func_292(uParam4[2 /*26*/], uParam1, iParam3, uParam2, 1);
						}
						if (*iParam3 == 3)
						{
							if (__LIB_24__::func_981(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								__LIB_6__::func_892(iParam5);
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
			if (__LIB_7__::func_42(iParam5) > 5f)
			{
				__LIB_6__::func_892(iParam5);
				HUD::CLEAR_HELP(true);
				__LIB_1__::func_870(uParam1->f_1, uParam1->f_4, __LIB_1__::func_874(2), __LIB_1__::func_873(0), 1500);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_199) && !__LIB_0__::func_1("DARTS_DOUBLE_T"))
			{
				__LIB_0__::func_151("DARTS_DOUBLE_T", -1);
			}
			if (__LIB_7__::func_42(iParam5) > 6f)
			{
				__LIB_6__::func_892(iParam5);
				__LIB_1__::func_872(uParam1->f_1, uParam1->f_4, __LIB_1__::func_874(3), __LIB_1__::func_873(0), 1000, 0);
				*uParam0 = 4;
			}
			break;
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_198) && !__LIB_0__::func_1("DARTS_TRIPLE_T"))
			{
				__LIB_0__::func_151("DARTS_TRIPLE_T", -1);
			}
			if (__LIB_7__::func_42(iParam5) > 6f)
			{
				__LIB_6__::func_892(iParam5);
				__LIB_1__::func_870(uParam1->f_1, uParam1->f_4, __LIB_1__::func_874(4), __LIB_1__::func_873(0), 1000);
				*uParam0 = 5;
			}
			break;
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_199) && !__LIB_0__::func_1("DARTS_BULL_T"))
			{
				__LIB_0__::func_151("DARTS_BULL_T", -1);
			}
			if (__LIB_7__::func_42(iParam5) > 6f)
			{
				__LIB_6__::func_892(iParam5);
				__LIB_1__::func_872(uParam1->f_1, uParam1->f_4, __LIB_1__::func_874(5), __LIB_1__::func_873(0), 1500, 0);
				*uParam0 = 6;
			}
			break;
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_198) && !__LIB_0__::func_1("DARTS_DBL_WIN"))
			{
				__LIB_0__::func_151("DARTS_DBL_WIN", -1);
			}
			if (__LIB_7__::func_42(iParam5) > 6f)
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
				__LIB_7__::func_20(1);
				iVar0 = 0;
				while (iVar0 < 3)
				{
					__LIB_1__::func_869(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		case 8:
			iLocal_162 = 0;
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			__LIB_7__::func_20(1);
			iVar1 = 0;
			while (iVar1 < 3)
			{
				__LIB_1__::func_869(uParam4[iVar1 /*26*/]);
				iVar1++;
			}
			CAM::SET_CAM_ACTIVE(iLocal_191, true);
			return 1;
			break;
	}
	return 0;
}

void func_698()//Position - 0x48ED3
{
	if (__LIB_1__::func_876() != joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}
}

void func_704(var uParam0, struct<3> Param1)//Position - 0x49087
{
	*uParam0 = OBJECT::CREATE_OBJECT(iLocal_159, Param1, false, false, false);
}

void func_718(var uParam0)//Position - 0x49A25
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_79)))
	{
		iVar0 = uParam0->f_88;
		iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_79)));
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_79);
		fVar3 = 0f;
		func_719(iVar2, "anim@amb@clubhouse@mini@darts@", "intro", &fVar3);
		func_719(iVar2, "anim@amb@clubhouse@mini@darts@", "Intro_B", &fVar3);
		uParam0->f_90 = fVar3;
		if (uParam0->f_90 < uParam0->f_90.f_1)
		{
			uParam0->f_90.f_2 = 1;
			uParam0->f_90.f_3 = 1;
		}
		if (iVar0 < 3)
		{
			if (uParam0->f_90.f_3)
			{
				if (fVar3 >= 0.17f && fVar3 < 0.5f)
				{
					if (!uParam0->f_84[iVar0])
					{
						uParam0->f_90.f_3 = 0;
						func_751(uParam0, &iVar1, iVar0);
					}
				}
			}
		}
		uParam0->f_90.f_1 = fVar3;
	}
}

int func_719(int iParam0, char* sParam1, char* sParam2, float fParam3)//Position - 0x49AF2
{
	int iVar0;
	int iVar1;
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iParam0);
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (__LIB_0__::func_121(iVar1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, sParam1, sParam2, 3))
		{
			*fParam3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar1, sParam1, sParam2);
			return 0;
		}
	}
	return 0;
}

bool func_727(var uParam0, int iParam1)//Position - 0x49C49
{
	return BitTest(uParam0->f_30, iParam1);
}

bool func_733(int* iParam0, int iParam1)//Position - 0x49D1B
{
	return BitTest(iParam0->f_47, iParam1);
}

void func_734(int* iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x49D2A
{
	int iVar0;
	int iVar1;
	iVar0 = iParam3;
	iVar1 = iParam4;
	if (!bParam2)
	{
		iVar1 = iParam3;
		iVar0 = iParam4;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PLAYER_SETS_AND_LEGS");
	if (bParam1)
	{
		__LIB_0__::func_478("");
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	__LIB_0__::func_478("");
	__LIB_0__::func_478("");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_737(int* iParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x49DC3
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if ((!__LIB_0__::func_163(PLAYER::PLAYER_ID(), 28) && !__LIB_9__::func_509(PLAYER::PLAYER_ID())) || (__LIB_9__::func_772(PLAYER::PLAYER_ID()) && !__LIB_0__::func_163(PLAYER::PLAYER_ID(), 28)))
		{
			iParam1++;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_CREW_TAG");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			__LIB_0__::func_514(sParam2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_744(var uParam0, struct<3> Param1)//Position - 0x49F78
{
	STREAMING::REQUEST_MODEL(joaat("prop_phonebox_03"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_phonebox_03")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89))
		{
			uParam0->f_89 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_phonebox_03"), uParam0->f_94, false, false, false);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_89, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_89, true);
			func_418(uParam0->f_81, uParam0->f_89, 0);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_89, true);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_89, false, false);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_89, (__LIB_0__::func_670(uParam0->f_94, Param1) - 90f));
			ENTITY::SET_ENTITY_COORDS(uParam0->f_89, uParam0->f_94, true, false, false, true);
		}
		return 1;
	}
	return 0;
}

void func_745(var uParam0, int iParam1)//Position - 0x4A021
{
	struct<3> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		Var0 = { 1f, 1f, 1f };
		Var0.f_0 = (Var0.f_0 + SYSTEM::TO_FLOAT(iVar1 * 10));
		(*uParam0)[iVar1 /*26*/] = OBJECT::CREATE_OBJECT(iParam1, Var0, false, false, false);
		ENTITY::SET_ENTITY_COLLISION((*uParam0)[iVar1 /*26*/], false, false);
		iVar1++;
	}
}

int func_746(int* iParam0, bool bParam1)//Position - 0x4A06E
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_phonebox_03")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_159))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@darts"))
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
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@clubhouse@mini@darts@"))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_168))
		{
			return 0;
		}
		if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(10))
		{
			return 0;
		}
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts"))
		{
			return 0;
		}
	}
	return 1;
}

void func_747(int* iParam0, bool bParam1)//Position - 0x4A126
{
	STREAMING::REQUEST_MODEL(iLocal_159);
	STREAMING::REQUEST_MODEL(joaat("prop_phonebox_03"));
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DARTS_SCOREBOARD_BIKER");
	STREAMING::REQUEST_ANIM_DICT("mini@darts");
	STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
	STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
	STREAMING::REQUEST_ANIM_DICT("anim@amb@clubhouse@mini@darts@");
	if (!bParam1)
	{
		STREAMING::REQUEST_MODEL(iLocal_168);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", false);
		uLocal_1035 = __LIB_0__::func_729();
		uLocal_1045 = __LIB_1__::func_638();
		HUD::REQUEST_ADDITIONAL_TEXT("DARTS", 10);
	}
}

void func_751(var uParam0, int iParam1, int iParam2)//Position - 0x4A2CE
{
	uParam0->f_84[iParam2] = 1;
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam2 /*26*/]))
	{
		func_752(uParam0[iParam2 /*26*/], *iParam1, func_754(1), 1);
	}
}

void func_752(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4A2FF
{
	int iVar0;
	if (bParam3)
	{
		if (__LIB_0__::func_121(*uParam0) && !PED::IS_PED_DEAD_OR_DYING(iParam1, true))
		{
			iVar0 = PED::GET_PED_BONE_INDEX(iParam1, iParam2);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam0, iParam1, iVar0, __LIB_0__::func_481(), __LIB_0__::func_481(), false, false, false, false, 2, true, 0);
		}
	}
	else
	{
		ENTITY::DETACH_ENTITY(*uParam0, true, true);
	}
}

int func_754(bool bParam0)//Position - 0x4A35F
{
	if (bParam0)
	{
		return 28422;
	}
	return 60309;
}

void func_755(var uParam0, int iParam1)//Position - 0x4A376
{
	int iVar0;
	uParam0->f_88 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*26*/]))
		{
			uParam0->f_84[iVar0] = 0;
			(uParam0[iVar0 /*26*/])->f_23 = 0;
			(uParam0[iVar0 /*26*/])->f_24 = 0;
			(uParam0[iVar0 /*26*/])->f_25 = 0;
			func_752(uParam0[iVar0 /*26*/], *iParam1, func_754(0), 1);
		}
		iVar0++;
	}
}

int func_759(int iParam0)//Position - 0x4A43B
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
	}
	return 1;
}

void func_760(var uParam0, var uParam1, struct<3> Param2)//Position - 0x4A45F
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_79)))
	{
		iVar0 = uParam0->f_88;
		iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_79)));
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_79);
		fVar3 = 0f;
		func_719(iVar2, "anim@amb@clubhouse@mini@darts@", "throw_overlay", &fVar3);
		uParam0->f_90 = fVar3;
		if (uParam0->f_90 < uParam0->f_90.f_1)
		{
			uParam0->f_90.f_2 = 1;
			uParam0->f_90.f_3 = 1;
		}
		if (iVar0 >= 3)
		{
			if (fVar3 >= 0.6f && fVar3 < 0.9f)
			{
				func_755(uParam0, &iVar1);
				uParam0->f_90.f_2 = 1;
				uParam0->f_90.f_3 = 1;
			}
		}
		if (iVar0 < 3)
		{
			if (uParam0->f_90.f_3)
			{
				if (fVar3 >= 0.6f && fVar3 < 0.9f)
				{
					if (!uParam0->f_84[iVar0])
					{
						uParam0->f_90.f_3 = 0;
						func_751(uParam0, &iVar1, iVar0);
					}
				}
			}
			if (uParam0->f_90.f_2)
			{
				if (fVar3 >= 0.04f && fVar3 < 0.5f)
				{
					if (!(uParam0[iVar0 /*26*/])->f_24)
					{
						func_763(uParam0, Param2);
						uParam0->f_90.f_2 = 0;
					}
				}
			}
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar4 /*26*/]))
			{
				if ((uParam0[iVar4 /*26*/])->f_24)
				{
					if (!(uParam0[iVar4 /*26*/])->f_25)
					{
						if (func_761(uParam0[iVar4 /*26*/], uParam1))
						{
							(uParam0[iVar4 /*26*/])->f_25 = 1;
						}
					}
				}
			}
			iVar4++;
		}
		uParam0->f_90.f_1 = fVar3;
	}
}

int func_761(var uParam0, var uParam1)//Position - 0x4A5E2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!uParam0->f_23)
	{
		uParam0->f_23 = 1;
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		uParam0->f_8 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_165), uParam0->f_11.f_2) };
		uParam0->f_14 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) - uParam0->f_8 };
		uParam0->f_14 = __LIB_1__::func_853(uParam0->f_14);
		uParam0->f_5 = { uParam0->f_8 - ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
		uParam0->f_5 = { __LIB_0__::func_79(uParam0->f_5) };
		Var1 = { (90f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-9f, 9f)), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f), (uParam1->f_4 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-9f, 9f)) };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Var1, 0, true);
	}
	if (uParam0->f_23)
	{
		if (uParam0->f_14 > 0f)
		{
			Var2 = { uParam0->f_5 * FtoV(MISC::GET_FRAME_TIME()) * Vector(8.5f, 8.5f, 8.5f) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) + Var2 };
			uParam0->f_14 = (uParam0->f_14 - __LIB_1__::func_853(ENTITY::GET_ENTITY_COORDS(*uParam0, true) - Var2));
			if (uParam0->f_14 <= 0f)
			{
				Var2 = { uParam0->f_8 + uParam0->f_5 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.005f)) };
			}
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var2, true, false, false, true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DLC_Biker_Darts_Hit_Board_Remote_Master", uParam1->f_1, 0, false, 0, false);
			return 1;
		}
	}
	return 0;
}

void func_763(var uParam0, struct<3> Param1)//Position - 0x4A795
{
	int iVar0;
	iVar0 = uParam0->f_88;
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*26*/]))
	{
		ENTITY::DETACH_ENTITY((*uParam0)[iVar0 /*26*/], true, true);
		(uParam0[iVar0 /*26*/])->f_24 = 1;
		(uParam0[iVar0 /*26*/])->f_11 = { Param1 };
	}
	uParam0->f_88++;
}

int func_765(int iParam0, var uParam1)//Position - 0x4A7F5
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 8))
	{
		switch (Var1.f_0)
		{
			case -1548998837:
				*uParam1 = 1;
				uParam1->f_1 = { Var1.f_2 };
				uParam1->f_5 = Var1.f_5;
				iVar0 = 1;
				break;
			case 1275703771:
				uParam1->f_4 = 1;
				iVar0 = 1;
				break;
			case 685163154:
				uParam1->f_6 = 1;
				uParam1->f_8 = Var1.f_7;
				uParam1->f_7 = Var1.f_6;
				iVar0 = 1;
				break;
			}
	}
	return iVar0;
}

void func_766(var uParam0)//Position - 0x4A86D
{
	int iVar0;
	uParam0->f_88 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*26*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE((*uParam0)[iVar0 /*26*/], false, false);
		}
		iVar0++;
	}
}

void func_767(int iParam0)//Position - 0x4A8A8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_1[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_4));
	}
}

int func_768(var uParam0, var uParam1, var uParam2)//Position - 0x4A8F6
{
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_901(uParam0, 7))
		{
			func_930(uParam0, 7);
			HUD::CLEAR_HELP(true);
		}
	}
	if (func_901(uParam0, 7))
	{
		__LIB_1__::func_880("CLIENT DARTS_MPSTATE_LEAVE", uParam2, 0, 0, 0, 0, 0, 0, 1000);
		__LIB_18__::func_296(uParam1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				HUD::CLEAR_PRINTS();
				func_930(uParam0, 22);
				iLocal_237 = 1;
				return 1;
			}
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				__LIB_1__::func_881(&(uParam1->f_666), 8, 0);
				func_771(uParam0, 7);
			}
		}
	}
	return 0;
}

int func_770(int* iParam0, var uParam1, var uParam2)//Position - 0x4AA15
{
	if (((func_733(iParam0, 1) && *uParam1 != 20) && *uParam1 != 21) && *uParam1 != 23)
	{
		return 1;
		HUD::CLEAR_HELP(true);
		*uParam1 = 20;
		__LIB_6__::func_892(&(uParam2->f_3));
		func_8(iParam0, 1);
	}
	return 0;
}

void func_771(var uParam0, bool bParam1)//Position - 0x4AA66
{
	if (BitTest(uParam0->f_31, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_31), bParam1);
	}
}

int func_868(int* iParam0, int* iParam1, int iParam2)//Position - 0x51FC3
{
	int iVar0;
	if (!func_901(iParam1[(*iParam2)[0] /*34*/], 16))
	{
		if ((((iParam0->f_39 == 1 && iParam0->f_40 == 1) && (iParam0->f_19[0] < 101 || iParam0->f_19[iLocal_232] < 101)) || (iParam0->f_40 > 1 && (iParam0->f_34[0] >= SYSTEM::FLOOR((IntToFloat(iParam0->f_40) * 0.66f)) || iParam0->f_34[iLocal_232] >= SYSTEM::FLOOR((IntToFloat(iParam0->f_40) * 0.66f))))) || (iParam0->f_39 > 1 && (iParam0->f_29[0] >= SYSTEM::FLOOR((IntToFloat(iParam0->f_39) * 0.33f)) || iParam0->f_29[iLocal_232] >= SYSTEM::FLOOR((IntToFloat(iParam0->f_39) * 0.33f)))))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_869(int iParam0, int iParam1)//Position - 0x520A9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((*iParam0)[iVar0] >= 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				if (bVar2)
				{
				}
				iVar1 = iVar0;
				bVar2 = true;
			}
		}
		iVar0++;
	}
	if (!bVar2)
	{
	}
	return iVar1;
}

Vector3 func_886(struct<3> Param0, struct<3> Param1)//Position - 0x5243A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Var0 = { 0f, 0f, 0f };
	Var1 = { __LIB_0__::func_79(Param1 - Param0) };
	Var2 = { __LIB_0__::func_620(Var1, 0f, 0f, 1f) };
	Var0 = { Var0 + Var1 * Vector(0.4f, 0.4f, 0.4f) };
	Var0 = { Var0 - Vector(1.2f, 0f, 0f) };
	Var0 = { Var0 + Var2 * Vector(0.1f, 0.1f, 0.1f) };
	return Param0 + Var0;
}

Vector3 func_888(int iParam0, bool bParam1)//Position - 0x524E3
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return 1117.34f, -3156.68f, -37.0669f;
			}
			else
			{
				return 1117.34f, -3157.38f, -38.0669f;
			}
			break;
		case 1:
			if (bParam1)
			{
				return 1000.59f, -3165.35f, -35.054f;
			}
			else
			{
				return 1001.28f, -3165.35f, -35.054f;
			}
			break;
		case 2:
			if (bParam1)
			{
				return 2708.2097f, -360.2018f, -56.0417f;
			}
			else
			{
				return 2708.8997f, -360.2018f, -56.0417f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_889(int iParam0)//Position - 0x52594
{
	Global_4196261 = iParam0;
}

void func_890(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x525A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar2 = 16;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && func_901(iParam0[iVar1 /*34*/], 20))
		{
			if (!__LIB_6__::func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3), 0) && !func_901(iParam0[iVar1 /*34*/], 18))
			{
				if (iVar0 < iParam2)
				{
					if (bParam5)
					{
						if (func_901(iParam0[iVar1 /*34*/], 23))
						{
							(*iParam1)[0] = (iParam0[iVar1 /*34*/])->f_32;
						}
						else
						{
							(*iParam1)[1] = (iParam0[iVar1 /*34*/])->f_32;
						}
					}
					else if (NETWORK::PARTICIPANT_ID() == iVar3)
					{
						(*iParam1)[iParam3] = (iParam0[iVar1 /*34*/])->f_32;
					}
					else
					{
						(*iParam1)[iParam4] = (iParam0[iVar1 /*34*/])->f_32;
					}
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

void func_892(bool bParam0)//Position - 0x52686
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
}

int func_895(int* iParam0, var uParam1)//Position - 0x52721
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar3 = 16;
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4) && func_901(iParam0[iVar1 /*34*/], 20))
		{
			if (!__LIB_6__::func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4), 0) && !func_901(iParam0[iVar1 /*34*/], 18))
			{
				if (iVar0 != (iParam0[iVar1 /*34*/])->f_32)
				{
					*uParam1 = (iParam0[iVar1 /*34*/])->f_32;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

bool func_901(var uParam0, int iParam1)//Position - 0x52896
{
	return BitTest(uParam0->f_31, iParam1);
}

int func_902(int* iParam0, bool bParam1)//Position - 0x528A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 16;
	if (bParam1)
	{
	}
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			if (__LIB_6__::func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4), 0) || func_901(iParam0[iVar1 /*34*/], 18))
			{
				if (__LIB_6__::func_768(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4), 0))
				{
					if (bParam1)
					{
						iVar3 = (iParam0[iVar1 /*34*/])->f_32;
						if (iVar3 == iVar1)
						{
						}
					}
				}
				if (func_901(iParam0[iVar1 /*34*/], 18))
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

void func_907(int iParam0, int iParam1, int iParam2)//Position - 0x52A77
{
	var uVar0;
	if (*iParam0 != iParam1)
	{
		uVar0 = func_908(iParam2);
		*iParam0 = iParam1;
	}
}

char* func_908(int iParam0)//Position - 0x52A94
{
	switch (iParam0)
	{
		case 0:
			return "NORMAL";
		case 1:
			return "HOST";
		case 2:
			return "SPECTATOR";
		default:
	}
	return "INVALID";
}

void func_918(bool bParam0, var uParam1, struct<5> Param2)//Position - 0x53260
{
	if (bParam0)
	{
		*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2.f_1, Param2.f_4, -0.35f, (-2.6f + fLocal_165), -1.7272f) };
		uParam1->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2.f_1, Param2.f_4, 0.35f, (-2.6f + fLocal_165), -1.7272f) };
	}
	else
	{
		*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2.f_1, Param2.f_4, 0.35f, (-2.6f + fLocal_165), -1.7272f) };
		uParam1->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2.f_1, Param2.f_4, -0.35f, (-2.6f + fLocal_165), -1.7272f) };
	}
}

void func_930(var uParam0, bool bParam1)//Position - 0x53606
{
	if (!BitTest(uParam0->f_31, bParam1))
	{
		MISC::SET_BIT(&(uParam0->f_31), bParam1);
	}
}

void func_931(bool bParam0, int iParam1, var uParam2, int* iParam3, int* iParam4, int* iParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x53623
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_961(uParam6[iVar0 /*97*/]);
		iVar0++;
	}
	func_961(uParam7);
	func_960(uParam6);
	if (!bParam0)
	{
		if (HUD::BUSYSPINNER_IS_ON())
		{
			HUD::BUSYSPINNER_OFF();
		}
		func_767(iParam1);
		iVar1 = uParam7->f_90 * 5;
		if (iVar1 > 0)
		{
			STATS::PLAYSTATS_EARNED_MC_POINTS(__LIB_1__::func_835(__LIB_0__::func_582()), __LIB_3__::func_639(__LIB_0__::func_582()), __LIB_1__::func_834(), __LIB_1__::func_833(), 1, iVar1);
		}
		STATS::PLAYSTATS_MC_CLUBHOUSE_ACTIVITY(__LIB_1__::func_835(__LIB_0__::func_582()), __LIB_3__::func_639(__LIB_0__::func_582()), __LIB_1__::func_834(), __LIB_1__::func_833(), 0, -1, 0);
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && (NETWORK::PARTICIPANT_ID_TO_INT() >= 0 && NETWORK::PARTICIPANT_ID_TO_INT() <= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()))
		{
			if (func_901(iParam5[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], 29))
			{
				__LIB_42__::func_719(14, iParam3->f_50, uParam2->f_1, __LIB_0__::func_138(uParam7->f_94, 1, 0), __LIB_0__::func_138(uParam7->f_94, 1, 2), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
		__LIB_1__::func_908();
		func_956();
		__LIB_34__::func_2(1, 1, 1, 1, 1, 1);
		if (!iLocal_237)
		{
			__LIB_0__::func_955();
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			}
		}
		HUD::DISPLAY_AREA_NAME(true);
		if (iParam9 && NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			__LIB_8__::func_770(0);
			__LIB_1__::func_32();
			HUD::DISPLAY_RADAR(true);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(NETWORK::PARTICIPANT_ID_TO_INT()));
			__LIB_18__::func_306(iVar2, PLAYER::GET_PLAYER_TEAM(iVar2), 1);
		}
		if (bParam11)
		{
			HUD::CLEAR_PRINTS();
		}
		__LIB_6__::func_952();
		__LIB_38__::func_106(3);
		iVar3 = 0;
		while (iVar3 < 3)
		{
			__LIB_1__::func_869(uParam7[iVar3 /*26*/]);
			iVar3++;
		}
		__LIB_1__::func_907(&(uParam7->f_79));
		__LIB_1__::func_906();
		__LIB_19__::func_72(&(uParam8->f_72), 0);
		if (!bParam10)
		{
			__LIB_1__::func_900();
		}
		if (uParam7->f_90 == uParam7->f_91 && !bParam11)
		{
			iVar3 = 3;
		}
		else if (uParam7->f_90 > uParam7->f_91)
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 2;
		}
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/);
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && !iLocal_236)
		{
			__LIB_7__::func_80(190, 1);
		}
		else if (iLocal_236)
		{
		}
		if (Global_2703735.f_3580.f_39)
		{
			Global_2703735.f_3580.f_39 = 0;
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		__LIB_0__::func_518(0);
		__LIB_7__::func_15(0, 1);
		__LIB_40__::func_727(&Local_239, 1, 0, 0);
		__LIB_1__::func_897();
		__LIB_1__::func_21(0);
		__LIB_0__::func_994(0);
		if (CAM::DOES_CAM_EXIST(iLocal_1032))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_1032))
			{
				CAM::SET_CAM_ACTIVE(iLocal_1032, false);
			}
			CAM::DESTROY_CAM(iLocal_1032, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_1033))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_1033))
			{
				CAM::SET_CAM_ACTIVE(iLocal_1033, false);
			}
			CAM::DESTROY_CAM(iLocal_1033, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_1034))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_1034))
			{
				CAM::SET_CAM_ACTIVE(iLocal_1034, false);
			}
			CAM::DESTROY_CAM(iLocal_1034, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_1031))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_1031))
			{
				CAM::SET_CAM_ACTIVE(iLocal_1031, false);
			}
			CAM::DESTROY_CAM(iLocal_1031, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	func_934(bParam0);
	if (uParam8->f_509 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam8->f_509, "CLEAR_ALL");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		__LIB_1__::func_899(&(uParam8->f_509));
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam4);
	}
	func_889(0);
	AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
	__LIB_0__::func_199();
}

void func_934(bool bParam0)//Position - 0x539AC
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_159);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phonebox_03"));
	if (!bParam0)
	{
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	}
}

void func_956()//Position - 0x5432A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iVar2, false);
		}
		iVar0++;
	}
}

void func_960(var uParam0)//Position - 0x54448
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*97*/])->f_89))
	{
		OBJECT::DELETE_OBJECT(&((uParam0[0 /*97*/])->f_89));
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[iLocal_232 /*97*/])->f_89))
	{
		OBJECT::DELETE_OBJECT(&((uParam0[iLocal_232 /*97*/])->f_89));
	}
}

bool func_961(var uParam0)//Position - 0x54486
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*26*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT((*uParam0)[iVar1 /*26*/]))
			{
				ENTITY::DETACH_ENTITY((*uParam0)[iVar1 /*26*/], true, true);
			}
			else
			{
				OBJECT::DELETE_OBJECT(uParam0[iVar1 /*26*/]);
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0 >= 3;
}

int func_962(var uParam0, int* iParam1, int* iParam2, bool bParam3)//Position - 0x544E0
{
	HUD::CLEAR_HELP(true);
	*uParam0 = 195;
	uParam0->f_2 = 14;
	uParam0->f_16 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_33;
	if (__LIB_0__::func_304(PLAYER::PLAYER_ID()))
	{
		uParam0->f_16 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7 + 32;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(__LIB_6__::func_875(195), false, uParam0->f_16);
	__LIB_1__::func_569(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	__LIB_1__::func_910(4, -1);
	if (!__LIB_0__::func_304(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_307(uParam0->f_2, uParam0->f_1, uParam0->f_16);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(iParam1, 79, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(iParam2, 545, 0);
	iLocal_234 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (bParam3 || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (bParam3)
		{
			func_930(iParam2[iLocal_234 /*34*/], 18);
		}
		if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			func_930(iParam2[iLocal_234 /*34*/], 19);
			func_771(iParam2[iLocal_234 /*34*/], 18);
		}
	}
	func_907(iParam2[iLocal_234 /*34*/], 1, 0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_1__::func_1(iParam1, 4);
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(iParam1->f_49), &(iParam1->f_50));
	}
	if (!__LIB_0__::func_672())
	{
		return 0;
	}
	return 1;
}

void func_973(var uParam0, int iParam1)//Position - 0x55725
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = { 1119.8805f, -3157.0261f, -36.3397f };
			uParam0->f_3 = -90f;
			uParam0->f_4 = { 1119.811f, -3157.026f, -36.34f };
			uParam0->f_4.f_3 = { 9.1023f, 0f, -90.762f };
			uParam0->f_4.f_6 = { 1.82f, 1.328f, 1f };
			uParam0->f_13 = { 1119.024f, -3157.138f, -36.62417f };
			uParam0->f_13.f_3 = { 0f, 0f, -63.36f };
			uParam0->f_29 = { 1119.7642f, -3155.5112f, -36.1562f };
			uParam0->f_29.f_3 = { -9.48f, 0f, 121.5339f };
			uParam0->f_29.f_9 = { 1105.4803f, -3155.668f, -38.0624f };
			uParam0->f_29.f_9.f_3 = { 9.1023f, 0f, -90.762f };
			uParam0->f_22 = { 1107.1398f, -3155.7478f, -36.2049f };
			uParam0->f_22.f_3 = { -4.3824f, 0f, 88.2424f };
			uParam0->f_22.f_6 = 50f;
			break;
		case 1:
			*uParam0 = { 1000.935f, -3162.8154f, -33.4827f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = { 1003.9058f, -3162.8079f, -33.4827f };
			uParam0->f_4.f_3 = { 9.1023f, 0f, 0f };
			uParam0->f_4.f_6 = { 1.82f, 1.328f, 1f };
			uParam0->f_13 = { 1003.857f, -3163.348f, -33.66635f };
			uParam0->f_13.f_3 = { 0f, 0f, 4.32f };
			uParam0->f_29 = { 1003.6043f, -3166.181f, -35.0826f };
			uParam0->f_29.f_3 = { 9.1023f, 0f, -90.762f };
			uParam0->f_29.f_9 = { 1003.6043f, -3166.181f, -35.0826f };
			uParam0->f_29.f_9.f_3 = { 9.1023f, 0f, -90.762f };
			uParam0->f_22 = { 1003.8449f, -3165.8247f, -33.4828f };
			uParam0->f_22.f_3 = { -0.0504f, 0f, -0.6806f };
			uParam0->f_22.f_6 = 50f;
			break;
		case 2:
			*uParam0 = { 2708.5547f, -357.6672f, -54.4704f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = { 2711.5254f, -357.6597f, -54.4704f };
			uParam0->f_4.f_3 = { 9.1023f, 0f, 0f };
			uParam0->f_4.f_6 = { 1.82f, 1.328f, 1f };
			uParam0->f_13 = { 2711.4768f, -358.1998f, -54.65405f };
			uParam0->f_13.f_3 = { 0f, 0f, 4.32f };
			uParam0->f_29 = { 2711.224f, -361.0327f, -56.0703f };
			uParam0->f_29.f_3 = { 9.1023f, 0f, -90.762f };
			uParam0->f_29.f_9 = { 2711.224f, -361.0327f, -56.0703f };
			uParam0->f_29.f_9.f_3 = { 9.1023f, 0f, -90.762f };
			uParam0->f_22 = { 2711.4646f, -360.6765f, -54.4705f };
			uParam0->f_22.f_3 = { -0.0504f, 0f, -0.6806f };
			uParam0->f_22.f_6 = 50f;
			break;
	}
}

int func_974(struct<3> Param0)//Position - 0x55A45
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	struct<65> Var3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	if (__LIB_2__::func_331(PLAYER::PLAYER_ID()))
	{
		return 2;
	}
	iVar0 = 0;
	func_975(Param0, &iVar1);
	if (iVar1 > 0)
	{
	}
	else
	{
		iVar4 = 1;
		fVar5 = 0f;
		iVar6 = 0;
		func_973(&Var2, iVar6);
		fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var3, true);
		iVar7 = 0;
		while (iVar7 <= 2)
		{
			if (iVar7 != iVar4)
			{
				func_973(&Var3, iVar7);
				fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param0, true);
				if (fVar8 < fVar5)
				{
					fVar5 = fVar8;
					iVar4 = iVar7;
					iVar6 = iVar7;
					Var2 = { Var3 };
				}
			}
			iVar7++;
		}
		iVar0 = iVar6;
	}
	return iVar0;
}

void func_975(struct<3> Param0, var uParam1)//Position - 0x55AE6
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_976(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_976(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_976(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_976(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_976(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_976(struct<3> Param0, int iParam1, float fParam2)//Position - 0x55C2A
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_976(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_976(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_976(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

