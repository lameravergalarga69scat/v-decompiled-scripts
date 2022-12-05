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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_70 = 0;
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
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
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
	struct<26> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_112[32];
	struct<535> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_114 = -1;
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
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = -1082130432;
	var uLocal_137 = 3;
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
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = -1;
	var uLocal_156 = -1;
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
	var uLocal_178 = -1082130432;
	var uLocal_179 = 3;
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
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = -1;
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
	var uLocal_220 = -1082130432;
	var uLocal_221 = 3;
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
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
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
	var uLocal_262 = -1082130432;
	var uLocal_263 = 3;
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
	var uLocal_279 = -1;
	var uLocal_280 = 0;
	var uLocal_281 = -1;
	var uLocal_282 = -1;
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
	var uLocal_304 = -1082130432;
	var uLocal_305 = 3;
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
	var uLocal_321 = -1;
	var uLocal_322 = 0;
	var uLocal_323 = -1;
	var uLocal_324 = -1;
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
	var uLocal_346 = -1082130432;
	var uLocal_347 = 3;
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
	var uLocal_363 = -1;
	var uLocal_364 = 0;
	var uLocal_365 = -1;
	var uLocal_366 = -1;
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
	var uLocal_388 = -1082130432;
	var uLocal_389 = 3;
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
	var uLocal_405 = -1;
	var uLocal_406 = 0;
	var uLocal_407 = -1;
	var uLocal_408 = -1;
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
	var uLocal_430 = -1082130432;
	var uLocal_431 = 3;
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
	var uLocal_447 = -1;
	var uLocal_448 = 0;
	var uLocal_449 = -1;
	var uLocal_450 = -1;
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
	var uLocal_472 = -1082130432;
	var uLocal_473 = 3;
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
	var uLocal_489 = -1;
	var uLocal_490 = 0;
	var uLocal_491 = -1;
	var uLocal_492 = -1;
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
	var uLocal_514 = -1082130432;
	var uLocal_515 = 3;
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
	var uLocal_531 = -1;
	var uLocal_532 = 0;
	var uLocal_533 = -1;
	var uLocal_534 = -1;
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
	var uLocal_556 = -1082130432;
	var uLocal_557 = 3;
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
	var uLocal_573 = -1;
	var uLocal_574 = 0;
	var uLocal_575 = -1;
	var uLocal_576 = -1;
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
	var uLocal_598 = -1082130432;
	var uLocal_599 = 3;
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
	var uLocal_615 = -1;
	var uLocal_616 = 0;
	var uLocal_617 = -1;
	var uLocal_618 = -1;
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
	var uLocal_640 = -1082130432;
	var uLocal_641 = 3;
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
	var uLocal_657 = -1;
	var uLocal_658 = 0;
	var uLocal_659 = -1;
	var uLocal_660 = -1;
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
	var uLocal_682 = -1082130432;
	var uLocal_683 = 3;
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
	var uLocal_699 = -1;
	var uLocal_700 = 0;
	var uLocal_701 = -1;
	var uLocal_702 = -1;
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
	var uLocal_724 = -1082130432;
	var uLocal_725 = 3;
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
	var uLocal_741 = -1;
	var uLocal_742 = 0;
	var uLocal_743 = -1;
	var uLocal_744 = -1;
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
	var uLocal_766 = -1082130432;
	var uLocal_767 = 3;
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
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = -1;
	var uLocal_786 = -1;
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
	var uLocal_808 = -1082130432;
	var uLocal_809 = 3;
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
	var uLocal_825 = -1;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
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
	var uLocal_850 = -1082130432;
	var uLocal_851 = 3;
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
	var uLocal_867 = -1;
	var uLocal_868 = 0;
	var uLocal_869 = -1;
	var uLocal_870 = -1;
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
	var uLocal_892 = -1082130432;
	var uLocal_893 = 3;
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
	var uLocal_909 = -1;
	var uLocal_910 = 0;
	var uLocal_911 = -1;
	var uLocal_912 = -1;
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
	var uLocal_934 = -1082130432;
	var uLocal_935 = 3;
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
	var uLocal_951 = -1;
	var uLocal_952 = 0;
	var uLocal_953 = -1;
	var uLocal_954 = -1;
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
	var uLocal_976 = -1082130432;
	var uLocal_977 = 3;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
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
	var uLocal_993 = -1;
	var uLocal_994 = 0;
	var uLocal_995 = -1;
	var uLocal_996 = -1;
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
	var uLocal_1018 = -1082130432;
	var uLocal_1019 = 3;
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
	var uLocal_1035 = -1;
	var uLocal_1036 = 0;
	var uLocal_1037 = -1;
	var uLocal_1038 = -1;
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
	var uLocal_1060 = -1082130432;
	var uLocal_1061 = 3;
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
	var uLocal_1077 = -1;
	var uLocal_1078 = 0;
	var uLocal_1079 = -1;
	var uLocal_1080 = -1;
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
	var uLocal_1102 = -1082130432;
	var uLocal_1103 = 3;
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
	var uLocal_1119 = -1;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1;
	var uLocal_1122 = -1;
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
	var uLocal_1144 = -1082130432;
	var uLocal_1145 = 3;
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
	var uLocal_1161 = -1;
	var uLocal_1162 = 0;
	var uLocal_1163 = -1;
	var uLocal_1164 = -1;
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
	var uLocal_1186 = -1082130432;
	var uLocal_1187 = 3;
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
	var uLocal_1203 = -1;
	var uLocal_1204 = 0;
	var uLocal_1205 = -1;
	var uLocal_1206 = -1;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
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
	var uLocal_1228 = -1082130432;
	var uLocal_1229 = 3;
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
	var uLocal_1245 = -1;
	var uLocal_1246 = 0;
	var uLocal_1247 = -1;
	var uLocal_1248 = -1;
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
	var uLocal_1270 = -1082130432;
	var uLocal_1271 = 3;
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
	var uLocal_1287 = -1;
	var uLocal_1288 = 0;
	var uLocal_1289 = -1;
	var uLocal_1290 = -1;
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
	var uLocal_1312 = -1082130432;
	var uLocal_1313 = 3;
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
	var uLocal_1329 = -1;
	var uLocal_1330 = 0;
	var uLocal_1331 = -1;
	var uLocal_1332 = -1;
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
	var uLocal_1354 = -1082130432;
	var uLocal_1355 = 3;
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
	var uLocal_1371 = -1;
	var uLocal_1372 = 0;
	var uLocal_1373 = -1;
	var uLocal_1374 = -1;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
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
	var uLocal_1396 = -1082130432;
	var uLocal_1397 = 3;
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
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = -1;
	var uLocal_1414 = 0;
	var uLocal_1415 = -1;
	var uLocal_1416 = -1;
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
	var uLocal_1438 = -1082130432;
	var uLocal_1439 = 3;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
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
	var uLocal_1455 = -1;
	var uLocal_1456 = 0;
	var uLocal_1457 = -1;
	struct<12> Local_1458 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	int iLocal_1461 = 0;
	int iLocal_1462 = 0;
	int iLocal_1463 = 0;
	int iLocal_1464 = 0;
	int iLocal_1465 = 0;
	struct<21> Local_1466 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_1597(ScriptParam_1466))
		{
			func_1577();
		}
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949() || __LIB_19__.func_764())
		{
			func_1577();
		}
		func_1543();
		func_1537();
		switch (__LIB_24__.func_783(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (__LIB_24__.func_782() == 1)
				{
					if (func_1527())
					{
						__LIB_24__.func_781(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (__LIB_24__.func_782() == 1)
				{
					func_126();
				}
				else if (__LIB_24__.func_782() == 3)
				{
					__LIB_24__.func_781(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_1577();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_24__.func_782())
			{
				case 0:
					if (func_107())
					{
						__LIB_18__.func_386(__LIB_2__.func_231(138, func_106(), 0, 0));
						__LIB_24__.func_778(1);
					}
					break;
				case 1:
					if (Local_111.f_3 == 5)
					{
						__LIB_24__.func_778(2);
					}
					else
					{
						func_3();
					}
					break;
				case 2:
					if (__LIB_2__.func_47(&uLocal_92, 1000, 0))
					{
						__LIB_24__.func_778(3);
					}
					break;
				case 3:
					func_1577();
					break;
				}
		}
	}
}

void func_3()//Position - 0x246
{
	if (func_25(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_111.f_1, 3))
		{
			Local_111.f_2 = NETWORK::GET_NETWORK_TIME();
			MISC::SET_BIT(&(Local_111.f_1), 3);
		}
	}
	switch (Local_111.f_3)
	{
		case 0:
			if (func_18())
			{
				__LIB_24__.func_777(1);
			}
			break;
		case 1:
			func_12();
			if (Local_111.f_21 != __LIB_0__.func_160())
			{
				__LIB_0__.func_495(&(Local_111.f_5), 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_111.f_17, 5f, 1);
				__LIB_24__.func_777(2);
			}
			if (__LIB_2__.func_47(&(Local_111.f_11), Global_262145.f_11627 /* Tunable: PASS_THE_PARCEL_EVENT_EXPIRY_TIME */, 0) || func_9())
			{
				__LIB_24__.func_777(3);
			}
			break;
		case 2:
			if (func_9() || (BitTest(Local_111.f_1, 1) && Local_111.f_21 != __LIB_0__.func_160()))
			{
				Local_111.f_2 = NETWORK::GET_NETWORK_TIME();
				__LIB_24__.func_777(3);
			}
			else if (__LIB_1__.func_295(&(Local_111.f_5), 0, 0) >= func_7())
			{
				if (!BitTest(Local_111.f_1, 1))
				{
					if (Local_111.f_21 == __LIB_0__.func_160())
					{
						if (__LIB_1__.func_295(&(Local_111.f_5), 0, 0) >= func_7() + 250)
						{
							MISC::SET_BIT(&(Local_111.f_1), 1);
							__LIB_0__.func_495(&(Local_111.f_5), 0, 0);
						}
					}
					else
					{
						Local_111.f_2 = NETWORK::GET_NETWORK_TIME();
						__LIB_24__.func_777(3);
					}
				}
				else
				{
					Local_111.f_2 = NETWORK::GET_NETWORK_TIME();
					__LIB_24__.func_777(3);
				}
			}
			func_12();
			break;
		case 3:
			if (__LIB_2__.func_47(&(Local_111.f_7), 20000, 0) || func_4())
			{
				__LIB_0__.func_495(&(Local_111.f_9), 0, 0);
				__LIB_24__.func_777(5);
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_111.f_16), false))
			{
				__LIB_24__.func_777(5);
			}
			break;
		case 5:
			break;
	}
}

int func_4()//Position - 0x3EA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!__LIB_2__.func_197(bVar2))
			{
				if (!BitTest(Local_112[iVar1 /*4*/].f_1, 1) || Local_112[iVar1 /*4*/].f_3 != 5)
				{
					return 0;
				}
				else if ((BitTest(Local_112[iVar1 /*4*/].f_1, 0) || Local_111.f_21 == __LIB_0__.func_160()) || BitTest(Local_111.f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_7()//Position - 0x4BD
{
	if (BitTest(Local_111.f_1, 1))
	{
		return Global_262145.f_11633 /* Tunable: PASS_THE_PARCEL_SUDDEN_DEATH_TIME_LIMIT */;
	}
	return Global_262145.f_11626 /* Tunable: PASS_THE_PARCEL_EVENT_TIME_LIMIT */;
}

int func_9()//Position - 0x529
{
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_111.f_16), false) || BitTest(Local_111.f_1, 4))
	{
		MISC::SET_BIT(&(Local_111.f_1), 0);
		return 1;
	}
	if (BitTest(Local_111.f_1, 3))
	{
		return 1;
	}
	return 0;
}

void func_12()//Position - 0x5AE
{
	bool bVar0;
	if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_111.f_16) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_111.f_16), false))
	{
		if ((VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_111.f_16), -1, false) || !func_16()) || (Local_111.f_21 != __LIB_0__.func_160() && !__LIB_1__.func_264(Local_111.f_21, 1, 1)))
		{
			if (Local_111.f_21 != __LIB_0__.func_160())
			{
				Local_111.f_21 = __LIB_0__.func_160();
			}
		}
		else if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_94)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_94));
			if (__LIB_1__.func_264(bVar0, 1, 1))
			{
				if (func_13(bVar0))
				{
					if (Local_111.f_21 != bVar0)
					{
						Local_111.f_25++;
						Local_111.f_21 = bVar0;
						MISC::SET_BIT(&(Local_111.f_1), 2);
					}
				}
			}
		}
	}
	if (BitTest(Local_112[iLocal_94 /*4*/].f_1, 5))
	{
		MISC::SET_BIT(&(Local_111.f_1), 4);
	}
	iLocal_94++;
	if (iLocal_94 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_94 = 0;
	}
}

int func_13(bool bParam0)//Position - 0x6A8
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, NETWORK::NET_TO_VEH(Local_111.f_16), false))
		{
			if (__LIB_0__.func_306(iVar0, 0) == -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_16()//Position - 0x7C9
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_111.f_16), false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_111.f_16), -1, false) != 0)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_111.f_16), -1, false);
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_18()//Position - 0x82B
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_584(Local_111.f_15))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_111.f_16))
		{
			if (__LIB_18__.func_220(&(Local_111.f_16), Local_111.f_15, Local_111.f_17, Local_111.f_20, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_111.f_16), 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_111.f_16), true);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_111.f_16), false);
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_111.f_16), true);
				VEHICLE::SET_VEHICLE_OCCUPANTS_TAKE_EXPLOSIVE_DAMAGE(NETWORK::NET_TO_VEH(Local_111.f_16), true);
				iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_111.f_16));
				ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_111.f_16), SYSTEM::ROUND((func_20() * IntToFloat(iVar0 * 2))));
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_111.f_16), SYSTEM::ROUND((func_20() * IntToFloat(iVar0 * 2))), 0);
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_111.f_16), false, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_111.f_16), true);
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_111.f_16), "Not_Allow_As_Saved_Veh", 1);
				}
				__LIB_1__.func_119(NETWORK::NET_TO_VEH(Local_111.f_16));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_111.f_16), "MPBitset"))
					{
						iVar1 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_111.f_16), "MPBitset");
					}
					MISC::SET_BIT(&iVar1, 10);
					MISC::SET_BIT(&iVar1, 11);
					MISC::SET_BIT(&iVar1, 12);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_111.f_16), "MPBitset", iVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_111.f_15);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_111.f_16))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

float func_20()//Position - 0x9C1
{
	return Global_262145.f_11632 /* Tunable: PASS_THE_PARCEL_VEHICLE_HEALTH_MODIFIER */;
}

int func_25(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0xC68
{
	if (__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0) || __LIB_18__.func_259(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_33(sParam3, sParam4, 1);
		}
		if (__LIB_2__.func_300(26, -1))
		{
			__LIB_2__.func_221(26, -1);
		}
		return 1;
	}
	if (__LIB_0__.func_649(&(Global_1836844.f_18)))
	{
		if (!__LIB_2__.func_47(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		__LIB_0__.func_579(&(Global_1836844.f_18));
	}
	if (__LIB_1__.func_422())
	{
		if (bParam2)
		{
			func_33(sParam3, sParam4, 0);
		}
		if (__LIB_2__.func_300(26, -1))
		{
			__LIB_2__.func_221(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_33(sParam3, sParam4, 1);
		}
		if (__LIB_2__.func_300(26, -1))
		{
			__LIB_2__.func_221(26, -1);
		}
		return 1;
	}
	return 0;
}

void func_33(char* sParam0, char* sParam1, bool bParam2)//Position - 0xE79
{
	if ((!BitTest(Global_1836844.f_1, 2) && !__LIB_1__.func_417(PLAYER::PLAYER_ID())) && !__LIB_2__.func_197(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		__LIB_42__.func_822(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
	}
}

int func_106()//Position - 0x327A
{
	switch (Local_111.f_15)
	{
		case joaat("caddy"):
			return 0;
		case joaat("bmx"):
			return 1;
		case joaat("tribike"):
			return 2;
		case joaat("sanchez"):
			return 3;
		case joaat("faggio2"):
			return 4;
		case joaat("lectro"):
			return 5;
		case joaat("tractor2"):
			return 6;
		default:
	}
	return 0;
}

int func_107()//Position - 0x32D2
{
	func_122();
	func_108();
	Local_111.f_21 = __LIB_0__.func_160();
	return 1;
}

void func_108()//Position - 0x32EB
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_121(Local_111.f_15));
	switch (Local_111.f_15)
	{
		case joaat("caddy"):
			Local_111.f_17 = { -1343.6919f, 131.86f, 55.2396f };
			Local_111.f_20 = 274.9769f;
			break;
		case joaat("bmx"):
			Local_111.f_17 = { 271.5271f, -207.4667f, 60.5707f };
			Local_111.f_20 = 69.8638f;
			break;
		case joaat("tribike"):
			Local_111.f_17 = { -1858.1632f, -1229.8375f, 12.0171f };
			Local_111.f_20 = 265.1099f;
			break;
		case joaat("sanchez"):
			switch (iVar0)
			{
				case 0:
					Local_111.f_17 = { 2395.7415f, 3307.7502f, 46.5735f };
					Local_111.f_20 = 130.8036f;
					break;
				case 1:
					Local_111.f_17 = { -1207.1279f, -2790.5757f, 12.9522f };
					Local_111.f_20 = 105.9907f;
					Local_111.f_22 = 1;
					break;
			}
			break;
		case joaat("faggio2"):
			Local_111.f_17 = { -3033.599f, 550.3338f, 6.5127f };
			Local_111.f_20 = 253.5783f;
			break;
		case joaat("lectro"):
			Local_111.f_17 = { -1819.1906f, 785.0829f, 136.8941f };
			Local_111.f_20 = 223.8026f;
			break;
		case joaat("tractor2"):
			Local_111.f_17 = { 2358.6633f, 4891.2314f, 41.0573f };
			Local_111.f_20 = 157.8569f;
			break;
	}
	if (func_120(iVar0) || !__LIB_25__.func_365(Local_111.f_17, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		func_122();
		func_108();
	}
}

int func_120(int iParam0)//Position - 0x3A20
{
	switch (Local_111.f_15)
	{
		case joaat("sanchez"):
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_11637 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_4 */;
				case 1:
					return Global_262145.f_11638 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_5 */;
				default:
			}
			break;
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x3A62
{
	switch (iParam0)
	{
		case joaat("sanchez"):
			return 2;
		default:
	}
	return 1;
}

void func_122()//Position - 0x3A7C
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	if ((func_125(iVar0) || __LIB_7__.func_210(138, iVar0, 0, 0)) && iLocal_1465 < 100)
	{
		iLocal_1465++;
		func_122();
	}
	else
	{
		iLocal_1465 = 0;
		switch (iVar0)
		{
			case 0:
				Local_111.f_15 = joaat("caddy");
				break;
			case 1:
				Local_111.f_15 = joaat("bmx");
				break;
			case 2:
				Local_111.f_15 = joaat("tribike");
				break;
			case 3:
				Local_111.f_15 = joaat("sanchez");
				break;
			case 4:
				Local_111.f_15 = joaat("faggio2");
				break;
			case 5:
				Local_111.f_15 = joaat("lectro");
				break;
			case 6:
				Local_111.f_15 = joaat("tractor2");
				break;
			}
	}
}

int func_125(int iParam0)//Position - 0x3C6C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11634 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_1 */;
		case 1:
			return Global_262145.f_11635 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_2 */;
		case 2:
			return Global_262145.f_11636 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_3 */;
		case 3:
			return (Global_262145.f_11637 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_4 */ && Global_262145.f_11638 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_5 */);
		case 4:
			return Global_262145.f_11639 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_6 */;
		case 5:
			return Global_262145.f_11640 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_7 */;
		case 6:
			return Global_262145.f_11641 /* Tunable: PASS_THE_PARCEL_DISABLE_VARIANT_8 */;
		default:
	}
	return 0;
}

void func_126()//Position - 0x3CF8
{
	if (!__LIB_2__.func_197(PLAYER::PLAYER_ID()) && func_1512(0, 1, 1))
	{
		if (__LIB_32__.func_422())
		{
			func_1390();
		}
		if (Local_111.f_21 != __LIB_0__.func_160())
		{
			if (!BitTest(uLocal_91, 2))
			{
				func_1376(138, 1065353216, 1065353216, 0, 0, 0, 0);
				MISC::SET_BIT(&uLocal_91, 2);
			}
			func_1362(8);
		}
		switch (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (Local_111.f_3 > 0)
				{
					if (Local_111.f_22)
					{
						__LIB_1__.func_468();
					}
					HUD::FLASH_MINIMAP_DISPLAY();
					func_1349();
					__LIB_24__.func_780(1);
				}
				break;
			case 1:
				func_1362(13);
				if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
				{
					func_1338();
				}
				if (Local_1458.f_9 == 0)
				{
					Local_1458.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (Local_111.f_3 > 2)
				{
					__LIB_24__.func_780(3);
				}
				else if (Local_111.f_21 == PLAYER::PLAYER_ID())
				{
					if (Local_1458.f_11 == 0)
					{
						Local_1458.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					func_1337();
					__LIB_24__.func_780(2);
				}
				else
				{
					if (BitTest(Local_111.f_1, 1))
					{
						if (func_1336(NETWORK::PARTICIPANT_ID_TO_INT()))
						{
							func_1362(5);
						}
					}
					if (Local_111.f_3 == 1 && func_1335(0))
					{
						func_1362(6);
					}
					func_1334(0);
				}
				func_1333(0);
				func_1329();
				func_414(&(Local_111.f_16), &uLocal_107, &uLocal_109, 1);
				func_413();
				func_402();
				func_400();
				func_375();
				func_372();
				func_1390();
				break;
			case 2:
				if (Local_111.f_3 > 2)
				{
					__LIB_24__.func_780(3);
				}
				else if (Local_111.f_21 != PLAYER::PLAYER_ID())
				{
					__LIB_6__.func_966(83);
					__LIB_24__.func_780(1);
				}
				else
				{
					if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 2))
					{
						func_1338();
					}
					if (Local_1458.f_11 == 0)
					{
						Local_1458.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
				if (!BitTest(Local_111.f_1, 1))
				{
					func_1362(0);
				}
				if (__LIB_0__.func_1("AMPP_NEAR" /* GXT: Enter the vehicle to start Hold the Wheel. */) || __LIB_0__.func_1("AMPP_NEAR2" /* GXT: Get on the vehicle to start Hold the Wheel. */))
				{
					HUD::CLEAR_HELP(true);
				}
				func_1329();
				func_414(&(Local_111.f_16), &uLocal_107, &uLocal_109, 1);
				func_413();
				func_402();
				func_375();
				func_1390();
				break;
			case 3:
				if (func_360(&uLocal_100, 0) || BitTest(Local_111.f_1, 3))
				{
					__LIB_24__.func_780(5);
				}
				if (Local_111.f_21 == PLAYER::PLAYER_ID())
				{
					if (Local_1458.f_11 == 0)
					{
						Local_1458.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
				__LIB_1__.func_433();
				func_358();
				func_272();
				func_270();
				func_1334(0);
				func_269();
				func_1390();
				break;
			case 4:
				if (Local_111.f_3 > 4)
				{
					__LIB_24__.func_780(5);
				}
				else
				{
					func_264();
				}
				break;
			case 5:
				break;
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_97))
	{
		HUD::REMOVE_BLIP(&iLocal_97);
	}
	func_242();
	func_217();
	func_167();
	func_143();
	func_137();
	func_133();
	func_127();
}

void func_127()//Position - 0x3FBA
{
	if (__LIB_2__.func_198())
	{
		__LIB_25__.func_935(Local_111.f_16);
	}
}

void func_133()//Position - 0x4344
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_95)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_95));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			__LIB_7__.func_106(bVar0, 2);
			if (func_134(iLocal_95))
			{
				iLocal_1462++;
			}
			iLocal_1461++;
		}
	}
	iLocal_95++;
	if (iLocal_95 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_1461 > iLocal_1459)
		{
			iLocal_1459 = iLocal_1461;
		}
		else
		{
			iLocal_1460 = (iLocal_1459 - iLocal_1461);
		}
		if (iLocal_1462 > iLocal_1463)
		{
			iLocal_1463 = iLocal_1462;
		}
		iLocal_1461 = 0;
		iLocal_95 = 0;
		iLocal_1462 = 0;
	}
}

int func_134(int iParam0)//Position - 0x43D3
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return (BitTest(Local_112[iParam0 /*4*/].f_1, 2) || BitTest(Local_112[iParam0 /*4*/].f_1, 4));
	}
	return 0;
}

void func_137()//Position - 0x44E5
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_111.f_16), false))
		{
			if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) || __LIB_2__.func_197(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_111.f_16), false);
				if (func_138(0, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_111.f_16), 0);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_111.f_16), true);
			}
		}
	}
}

int func_138(bool bParam0, bool bParam1)//Position - 0x4558
{
	if (Local_111.f_21 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
		{
			if (__LIB_2__.func_15(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_111.f_16), 1))
			{
				if (bParam1)
				{
					if (__LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 1) == -1)
					{
						return 1;
					}
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

void func_143()//Position - 0x467D
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_111.f_16), false) };
		iVar1 = __LIB_31__.func_908(Var0, 6, -1, 0, 1, -1);
		Var2 = { __LIB_31__.func_882(iVar1, 0) };
		iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var2, __LIB_18__.func_444(iVar1));
		iVar4 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_111.f_16));
		if (iVar3 != 0 && iVar3 == iVar4)
		{
			if (!Global_2815059.f_5117)
			{
				Global_2815059.f_5117 = 1;
			}
			return;
		}
	}
	if (Global_2815059.f_5117)
	{
		Global_2815059.f_5117 = 0;
	}
}

void func_167()//Position - 0x6CCC
{
	if (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 2)
	{
		if (!__LIB_0__.func_740(PLAYER::PLAYER_ID()))
		{
			func_168(1);
		}
	}
	else if (__LIB_0__.func_740(PLAYER::PLAYER_ID()))
	{
		func_168(0);
	}
}

void func_168(bool bParam0)//Position - 0x6D06
{
	int iVar0;
	int iVar1;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
		{
			Global_2727723 = __LIB_1__.func_182(PLAYER::PLAYER_ID());
			if (Global_2727723 == -1)
			{
				Global_2727723 = Global_1836844.f_4;
			}
			if (__LIB_1__.func_699(Global_2727723) == 0)
			{
				if (__LIB_25__.func_54(1) > 0)
				{
					__LIB_1__.func_910(26, -1);
				}
			}
			if (__LIB_0__.func_674())
			{
				__LIB_18__.func_738(2, 0, 1);
				__LIB_1__.func_284();
			}
			if (__LIB_6__.func_989(__LIB_1__.func_487(__LIB_1__.func_182(PLAYER::PLAYER_ID()))))
			{
				iVar1 = __LIB_1__.func_556(2483, -1, 0);
				MISC::CLEAR_BIT(&iVar1, __LIB_1__.func_487(__LIB_1__.func_182(PLAYER::PLAYER_ID())));
				__LIB_1__.func_284();
			}
			if (__LIB_1__.func_156())
			{
				__LIB_1__.func_284();
			}
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
	{
		if ((!__LIB_0__.func_497() && !__LIB_1__.func_241()) && !__LIB_1__.func_700())
		{
			Global_2727723 = -1;
			__LIB_2__.func_221(26, -1);
		}
		else if (__LIB_1__.func_699(Global_2727723) == 0)
		{
			iVar0 = __LIB_33__.func_173(1);
			if (iVar0 > 0)
			{
				__LIB_7__.func_57(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				__LIB_6__.func_981(1934, 1, -1);
				__LIB_7__.func_57(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (__LIB_2__.func_300(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__.func_221(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
	}
}

void func_217()//Position - 0x881F
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (((((((Local_111.f_3 == 2 && BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3)) && !__LIB_2__.func_197(PLAYER::PLAYER_ID())) && !__LIB_6__.func_991(PLAYER::PLAYER_ID())) && func_1512(0, 1, 1)) && !__LIB_0__.func_706()) && !func_237(PLAYER::PLAYER_ID(), 0, -1)) && !__LIB_1__.func_154(PLAYER::PLAYER_ID()))
	{
		__LIB_26__.func_812(10, 0, 0, 0, 0);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_111.f_16), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_111.f_16), true) };
				fVar1 = 250f;
				fVar2 = 75f;
				if (Local_111.f_15 == joaat("caddy"))
				{
					fVar1 = 100f;
					fVar2 = 50f;
				}
				func_222(Var0, 0f, fVar1, 1, fVar2, 0, 1, 1115815936, 1, 1, 0, 1, -1082130432);
				__LIB_1__.func_477(Var0, 1, 0);
			}
		}
		if (iLocal_99 == 0)
		{
			iLocal_99 = 1;
		}
	}
	else
	{
		__LIB_1__.func_431();
		__LIB_7__.func_177();
		if (iLocal_99)
		{
			iLocal_99 = 0;
		}
	}
}

void func_222(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x89F9
{
	struct<28> Var0;
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		Global_2676213.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2676213.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = iParam7;
	Var0.f_22 = iParam8;
	if (__LIB_26__.func_806(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676213 = { Var0 };
}

int func_237(bool bParam0, bool bParam1, int iParam2)//Position - 0x8DCD
{
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || __LIB_0__.func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return __LIB_36__.func_994(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

void func_242()//Position - 0x93E5
{
	char* sVar0;
	char* sVar1;
	if ((((__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) && func_1336(NETWORK::PARTICIPANT_ID_TO_INT())) && !__LIB_2__.func_197(PLAYER::PLAYER_ID())) && !__LIB_6__.func_991(PLAYER::PLAYER_ID())) && func_1512(0, 1, 1))
	{
		if (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 2)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_111.f_15))
			{
				sVar0 = "AMPP_HOLD" /* GXT: Stay in the vehicle until time runs out. */;
			}
			else
			{
				sVar0 = "AMPP_HOLD2" /* GXT: Stay on the vehicle until time runs out. */;
			}
			__LIB_25__.func_25(sVar0, 0);
		}
		else if (Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1 && Local_111.f_3 == 2)
		{
			if (Local_111.f_21 != __LIB_0__.func_160() && __LIB_1__.func_264(Local_111.f_21, 1, 1))
			{
				if (__LIB_3__.func_999(PLAYER::PLAYER_ID(), Local_111.f_21))
				{
					__LIB_31__.func_919("AMPP_GBOWNER" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~has the ~a~.~s~ Help them hold on to it. */, Local_111.f_21, "AMPP_VEHICLE" /* GXT: vehicle */, 1, func_258(0), 0);
				}
				else
				{
					__LIB_25__.func_39("AMPP_OWNER" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~has the ~r~vehicle.~s~ Take it from them. */, PLAYER::GET_PLAYER_NAME(Local_111.f_21), 0, 1);
				}
			}
			else if (!func_138(1, 0))
			{
				if (BitTest(Local_111.f_1, 1))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_111.f_15))
					{
						sVar1 = "AMPP_NOWNERSD" /* GXT: Enter the ~g~vehicle~s~ to win. */;
					}
					else
					{
						sVar1 = "AMPP_NOWNER2SD" /* GXT: Get on the ~g~vehicle~s~ to win. */;
					}
				}
				else if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_111.f_15))
				{
					sVar1 = "AMPP_NOWNER" /* GXT: Enter the ~g~vehicle~s~ and stay in it until time runs out. */;
				}
				else
				{
					sVar1 = "AMPP_NOWNER2" /* GXT: Get on the ~g~vehicle~s~ and stay on it until time runs out. */;
				}
				__LIB_25__.func_25(sVar1, 0);
			}
			else
			{
				__LIB_18__.func_455();
			}
		}
		else
		{
			__LIB_18__.func_455();
		}
	}
	else
	{
		__LIB_18__.func_455();
	}
}

int func_258(bool bParam0)//Position - 0x9C00
{
	if (Local_111.f_21 != __LIB_0__.func_160())
	{
		if (__LIB_19__.func_760(1) && __LIB_2__.func_191(Local_111.f_21) == __LIB_0__.func_582())
		{
			return __LIB_41__.func_245(Local_111.f_21, -2, 0, 0, 0);
		}
	}
	if (bParam0)
	{
		return 29;
	}
	return 6;
}

void func_264()//Position - 0x9D51
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_111.f_16))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_111.f_16), false))
		{
			if ((10000 - __LIB_1__.func_295(&(Local_111.f_9), 0, 0)) >= 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_111.f_16), 50f, 50f, 50f, false, true, 0))
				{
					__LIB_6__.func_929((Global_262145.f_10663 /* Tunable: VEHICLEEXPLOSIONTIME */ - __LIB_1__.func_295(&(Local_111.f_9), 0, 0)), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					__LIB_1__.func_428();
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_111.f_16), 50f, 50f, 50f, false, true, 0))
				{
					__LIB_6__.func_929(0, "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					__LIB_1__.func_428();
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_111.f_16))
				{
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_111.f_16), true, false, -1);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_97))
	{
		HUD::REMOVE_BLIP(&iLocal_97);
	}
}

void func_269()//Position - 0x9FE5
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_111.f_16))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_111.f_16);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				VEHICLE::SET_VEHICLE_OCCUPANTS_TAKE_EXPLOSIVE_DAMAGE(NETWORK::NET_TO_VEH(Local_111.f_16), false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_111.f_16), true);
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_111.f_16), true, false);
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
					{
						iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
					}
					MISC::CLEAR_BIT(&iVar1, 10);
					MISC::CLEAR_BIT(&iVar1, 11);
					MISC::CLEAR_BIT(&iVar1, 12);
					DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar1);
				}
			}
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_97))
	{
		HUD::REMOVE_BLIP(&iLocal_97);
	}
}

void func_270()//Position - 0xA0A2
{
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1) && (__LIB_1__.func_438() || BitTest(Local_111.f_1, 3)))
	{
		if (func_1336(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (BitTest(Local_111.f_1, 3))
			{
				Local_1458.f_5 = 6;
				func_33("", "", 1);
			}
			else if (BitTest(Local_111.f_1, 0))
			{
				Local_1458.f_5 = 2;
				func_1362(4);
			}
			else if (Local_111.f_21 == __LIB_0__.func_160())
			{
				Local_1458.f_5 = 2;
				func_1362(11);
			}
			else if (func_138(0, 0))
			{
				Local_1458.f_5 = 1;
				func_1362(1);
			}
			else
			{
				Local_1458.f_5 = 2;
				func_1362(2);
			}
		}
		else if (BitTest(Local_111.f_1, 3))
		{
			func_33("", "", 1);
		}
		else if (BitTest(Local_111.f_1, 0))
		{
			func_1362(9);
		}
		else if (Local_111.f_21 == __LIB_0__.func_160())
		{
			func_1362(12);
		}
		else
		{
			func_1362(7);
		}
		MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 1);
	}
}

void func_272()//Position - 0xA1AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0))
	{
		if (__LIB_2__.func_197(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
			return;
		}
		if (__LIB_6__.func_991(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
			return;
		}
		if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 2) || BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 4))
		{
			if (!BitTest(Local_111.f_1, 0))
			{
				iVar3 = (Local_111.f_2 - iLocal_1464);
				if (BitTest(Local_111.f_1, 1))
				{
					iVar3 = __LIB_2__.func_559(iVar3, (Global_262145.f_11633 /* Tunable: PASS_THE_PARCEL_SUDDEN_DEATH_TIME_LIMIT */ + Global_262145.f_11626 /* Tunable: PASS_THE_PARCEL_EVENT_TIME_LIMIT */));
				}
				else
				{
					iVar3 = __LIB_2__.func_559(iVar3, Global_262145.f_11626 /* Tunable: PASS_THE_PARCEL_EVENT_TIME_LIMIT */);
				}
				iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar3) / 60f) / 1000f));
				if (iVar3 > Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */)
				{
					iVar3 = Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */;
				}
				else if (iVar3 < 1)
				{
					iVar3 = 1;
				}
				iVar2 = (func_356() * iVar3);
				if (func_138(0, 0) && !BitTest(Local_111.f_1, 3))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(func_355()) * Global_262145.f_11928 /* Tunable: HOLD_THE_WHEEL_EVENT_MULTIPLIER_CASH */));
					iVar1 = (SYSTEM::ROUND((IntToFloat(func_354()) * Global_262145.f_11929 /* Tunable: HOLD_THE_WHEEL_EVENT_MULTIPLIER_RP */)) + (func_353() * iVar3));
				}
				else
				{
					__LIB_7__.func_247(1);
					iVar1 = (func_353() * iVar3);
				}
				__LIB_42__.func_483(&iVar0, 1);
				iVar0 = (iVar0 + iVar2);
				if (iVar0 > 0)
				{
					if (__LIB_0__.func_112())
					{
						__LIB_35__.func_547(joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"), iVar0, &uVar4, 0, 1, 0);
					}
					else
					{
						MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PASS_THE_PARCEL", &uVar5);
					}
				}
				if (iVar1 > 0)
				{
					__LIB_1__.func_444();
					__LIB_41__.func_868(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
				}
				Global_2727753 = iVar0;
				Local_1458.f_6 = (Local_1458.f_6 + iVar0);
				if (!Global_262145.f_11877 /* Tunable: PASS_THE_PARCEL_DISABLE_SHARE_CASH */)
				{
					if (Local_1458.f_6 > 0)
					{
						__LIB_1__.func_445(13, Local_1458.f_6);
					}
				}
				Local_1458.f_7 = (Local_1458.f_7 + iVar1);
			}
		}
		else
		{
			__LIB_7__.func_247(0);
		}
		MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	}
}

int func_353()//Position - 0xC734
{
	return Global_262145.f_11481 /* Tunable: PASS_THE_PARCEL_EOM_DEFAULT_RP_REWARD */;
}

int func_354()//Position - 0xC743
{
	return Global_262145.f_11483 /* Tunable: PASS_THE_PARCEL_RP_REWARD_BASE */;
}

int func_355()//Position - 0xC752
{
	return Global_262145.f_11482 /* Tunable: PASS_THE_PARCEL_CASH_REWARD_BASE */;
}

int func_356()//Position - 0xC761
{
	return Global_262145.f_11480 /* Tunable: PASS_THE_PARCEL_EOM_DEFAULT_CASH_REWARD */;
}

void func_358()//Position - 0xC786
{
	if (BitTest(uLocal_91, 3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_SUDDEN_DEATH_STOP_MUSIC");
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		MISC::CLEAR_BIT(&uLocal_91, 3);
	}
}

int func_360(var uParam0, bool bParam1)//Position - 0xC852
{
	bool bVar0;
	if ((((*uParam0 > 0 && !__LIB_1__.func_159()) && !(__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0) && (__LIB_0__.func_286(PLAYER::PLAYER_ID()) || __LIB_9__.func_280(PLAYER::PLAYER_ID())))) && !__LIB_6__.func_984(PLAYER::PLAYER_ID())) && !__LIB_1__.func_279(PLAYER::PLAYER_ID()))
	{
		__LIB_1__.func_432();
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__.func_649(&(uParam0->f_3)))
			{
				__LIB_0__.func_580(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_2__.func_47(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__.func_580(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__.func_580(&(uParam0->f_1), 0, 0);
				__LIB_1__.func_0(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__.func_649(&(uParam0->f_5)))
			{
				if (__LIB_2__.func_47(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_18__.func_264();
				__LIB_1__.func_0(uParam0, 2);
			}
			break;
		case 2:
			__LIB_18__.func_264();
			if (__LIB_2__.func_47(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__.func_1("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__.func_0(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_2__.func_47(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				__LIB_1__.func_0(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			return 1;
	}
	return 0;
}

void func_372()//Position - 0xCBA9
{
	float fVar0;
	if (Local_111.f_3 >= 2)
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
			{
				fVar0 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_ENT(Local_111.f_16), 1);
				if (fVar0 <= IntToFloat(Global_262145.f_11969 /* Tunable: FREEMODE_EVENT_UI_ENTRY_DISTANCE */))
				{
					if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
					}
				}
				else if (fVar0 > IntToFloat(Global_262145.f_11970 /* Tunable: FREEMODE_EVENT_UI_EXIT_DISTANCE */))
				{
					if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
					{
						MISC::CLEAR_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
					}
				}
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_ENT(Local_111.f_16), 1) <= IntToFloat(func_373()))
				{
					if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 4))
					{
						MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 4);
						if (iLocal_1464 == 0)
						{
							iLocal_1464 = NETWORK::GET_NETWORK_TIME();
						}
					}
				}
				else if (BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 4))
				{
					MISC::CLEAR_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 4);
				}
			}
		}
	}
}

int func_373()//Position - 0xCCA8
{
	return Global_262145.f_11486 /* Tunable: PASS_THE_PARCEL_REWARD_PARTICIPATION_RANGE */;
}

void func_375()//Position - 0xCD15
{
	struct<3> Var0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_111.f_16), true) };
		func_376(138, Var0, &uLocal_98, SYSTEM::TO_FLOAT(Global_262145.f_11969 /* Tunable: FREEMODE_EVENT_UI_ENTRY_DISTANCE */), 1148846080, iLocal_99);
	}
}

void func_376(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, var uParam5)//Position - 0xCD57
{
	float fVar0;
	int iVar1;
	Global_1836844.f_6 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	if (fVar0 < fParam3 && !__LIB_1__.func_417(PLAYER::PLAYER_ID()))
	{
		if ((iParam0 != 146 && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
		{
			__LIB_1__.func_477(Param1, 1, 0);
		}
		if ((!*uParam2 || BitTest(Global_1836844.f_1, 3)) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			__LIB_7__.func_230(__LIB_2__.func_224(iParam0));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(__LIB_2__.func_176(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = __LIB_2__.func_223(iParam0);
				PLAYER::SET_MAX_WANTED_LEVEL(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar1, true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 8);
			}
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam4) && !__LIB_1__.func_417(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 3) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_1__.func_533();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_11873 /* Tunable: HUNT_THE_BEAST_EXTENDED_WANTED_REDUCTION_MULTIPLER */);
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
			MISC::SET_BIT(&(Global_1836844.f_1), 3);
		}
	}
	else if ((*uParam2 || BitTest(Global_1836844.f_1, 3)) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		*uParam2 = 0;
		__LIB_1__.func_533();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 8);
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 3);
		if (iParam0 != 146 && uParam5)
		{
			__LIB_38__.func_236();
		}
	}
}

void func_400()//Position - 0xD5E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		if (BitTest(Local_111.f_1, 2))
		{
			if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) && func_1336(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_138(1, 0))
				{
					if (Local_111.f_21 != __LIB_0__.func_160())
					{
						HUD::GET_HUD_COLOUR(func_258(0), &iVar0, &iVar1, &iVar2, &uVar3);
					}
					else
					{
						HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
					}
					__LIB_2__.func_240(NETWORK::NET_TO_VEH(Local_111.f_16), iVar0, iVar1, iVar2, 0);
				}
			}
		}
		else
		{
			HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
			__LIB_2__.func_240(NETWORK::NET_TO_VEH(Local_111.f_16), iVar0, iVar1, iVar2, 0);
		}
	}
}

void func_402()//Position - 0xD722
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_649(&(Local_111.f_5)))
	{
		iVar1 = (func_7() - __LIB_1__.func_295(&(Local_111.f_5), 0, 0));
		if (!BitTest(Local_111.f_1, 1))
		{
			func_410(iVar1);
		}
		else
		{
			func_409(iVar1);
		}
		if (iVar1 > 30000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 6;
		}
		iVar1 = __LIB_1__.func_294(iVar1, 0);
		__LIB_18__.func_368(iVar1, iVar0, __LIB_7__.func_178());
	}
}

void func_409(int iParam0)//Position - 0xD9F0
{
	if (!BitTest(uLocal_91, 3))
	{
		if (iParam0 <= (func_7() - 3000))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FM_SUDDEN_DEATH_START_MUSIC");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			MISC::SET_BIT(&uLocal_91, 3);
		}
	}
}

void func_410(int iParam0)//Position - 0xDA2F
{
	if (__LIB_4__.func_970(PLAYER::PLAYER_ID()) || __LIB_1__.func_453(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2815059.f_5032, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2815059.f_5034)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2815059.f_5034));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2815059.f_5042 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2815059.f_5042);
				Global_2815059.f_5042 = -1;
			}
			Global_2815059.f_5032 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2815059.f_5032, 0))
		{
			if (BitTest(Global_2815059.f_5032, 4))
			{
				if (!BitTest(Global_2815059.f_5032, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2815059.f_5034)))
						{
							StringCopy(&(Global_2815059.f_5034), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2815059.f_5032), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2815059.f_5032, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2815059.f_5032, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2815059.f_5032), 1);
			}
			else if (!BitTest(Global_2815059.f_5032, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2815059.f_5034), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2815059.f_5032), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2815059.f_5032, 3))
				{
					Global_2815059.f_5042 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2815059.f_5042, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2815059.f_5032), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2815059.f_5032, 0))
			{
				Global_2815059.f_5032 = 0;
				Global_2815059.f_5042 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2815059.f_5032), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2815059.f_5032, 2))
				{
					MISC::SET_BIT(&(Global_2815059.f_5032), 2);
					MISC::SET_BIT(&(Global_2815059.f_5032), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_5032), 5);
					MISC::CLEAR_BIT(&(Global_2815059.f_5032), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2815059.f_5032, 0))
		{
			Global_2815059.f_5032 = 0;
			Global_2815059.f_5042 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2815059.f_5032), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2815059.f_5032), 2);
				MISC::SET_BIT(&(Global_2815059.f_5032), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_5032), 2);
				MISC::CLEAR_BIT(&(Global_2815059.f_5032), 5);
			}
		}
	}
}

void func_413()//Position - 0xDE88
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_111.f_16))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_111.f_16), 3, Global_262145.f_11880 /* Tunable: FM_EVENTS_VEHICLE_STUCK_CHECK */) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_111.f_16), 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_111.f_16), 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_111.f_16), 0, 7000))
			{
				MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 5);
			}
		}
	}
}

void func_414(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xDF0F
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(*uParam0), false) };
		if (!__LIB_0__.func_649(uParam1))
		{
			__LIB_0__.func_580(uParam1, 0, 0);
		}
		else if (__LIB_2__.func_47(uParam1, 1000, 0))
		{
			if (__LIB_19__.func_465(NETWORK::NET_TO_ENT(*uParam0), joaat("MP_GAR_SIMEON"), 1, uParam2, 0, 500, 1, 0))
			{
				func_1324(&Global_1574067, &Var1, &uVar2, 10f);
				if (bParam3)
				{
					__LIB_1__.func_550(1);
					__LIB_1__.func_549(1);
					__LIB_1__.func_548(1);
					Global_2815059.f_4588 = 0;
				}
				bVar4 = true;
				bVar5 = true;
			}
			else if (__LIB_0__.func_331(Var0, __LIB_18__.func_444(39), __LIB_31__.func_882(39, 0)))
			{
				if (__LIB_7__.func_226(39, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__.func_331(Var0, __LIB_18__.func_444(40), __LIB_31__.func_882(40, 0)))
			{
				if (__LIB_7__.func_226(40, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__.func_331(Var0, __LIB_18__.func_444(41), __LIB_31__.func_882(41, 0)))
			{
				if (__LIB_7__.func_226(41, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__.func_331(Var0, __LIB_18__.func_444(42), __LIB_31__.func_882(42, 0)))
			{
				if (__LIB_7__.func_226(42, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__.func_331(Var0, __LIB_18__.func_444(43), __LIB_31__.func_882(43, 0)))
			{
				if (__LIB_7__.func_226(43, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__.func_331(Var0, __LIB_18__.func_444(44), __LIB_31__.func_882(44, 0)))
			{
				if (__LIB_7__.func_226(44, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				MISC::SET_BIT(&(Global_2815059.f_1798), 5);
				if (bParam3)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(*uParam0), true))
					{
						iVar7 = 1;
					}
					else if (__LIB_7__.func_225(NETWORK::NET_TO_VEH(*uParam0), 1, 0, 0, 0, 0, 1, 0, 1))
					{
						iVar7 = 2;
					}
				}
				else if (__LIB_1__.func_909() && !bVar5)
				{
					iVar7 = 1;
				}
				else if (__LIB_37__.func_63() && !bVar5)
				{
					iVar7 = 1;
					bVar6 = true;
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(*uParam0)))
				{
					iVar7 = 2;
				}
				if (iVar7 == 1)
				{
					if (!BitTest(Global_2815059.f_1798, 3))
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						MISC::SET_BIT(&(Global_2815059.f_1798), 6);
						MISC::SET_BIT(&(Global_2815059.f_1798), 3);
					}
					else if (!BitTest(Global_2815059.f_1798, 4))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							MISC::SET_BIT(&(Global_2815059.f_1798), 4);
						}
					}
					else
					{
						bVar8 = false;
						if (__LIB_3__.func_997(PLAYER::PLAYER_ID(), -1))
						{
							bVar8 = true;
						}
						if (!bVar6)
						{
							if (func_415(5, 0, 0, 0, 1, 0, 0, bVar8, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
							{
								CAM::DO_SCREEN_FADE_IN(800);
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
								MISC::CLEAR_BIT(&(Global_2815059.f_1798), 6);
								MISC::CLEAR_BIT(&(Global_2815059.f_1798), 3);
								MISC::CLEAR_BIT(&(Global_2815059.f_1798), 4);
							}
						}
					}
				}
				else if (iVar7 == 2)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(*uParam0)))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(*uParam0), Var1, false, false, true);
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(*uParam0), true, 1);
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
					}
				}
			}
			else if (BitTest(Global_2815059.f_1798, 6))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_1798), 3);
					MISC::CLEAR_BIT(&(Global_2815059.f_1798), 4);
					MISC::CLEAR_BIT(&(Global_2815059.f_1798), 6);
				}
			}
			else if (BitTest(Global_2815059.f_1798, 5))
			{
				Global_2815059.f_4588 = 0;
				__LIB_1__.func_550(0);
				__LIB_1__.func_549(0);
				__LIB_1__.func_548(0);
				MISC::CLEAR_BIT(&(Global_2815059.f_1798), 5);
			}
			__LIB_0__.func_579(uParam1);
		}
	}
}

int func_415(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0xE2E1
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__.func_186();
	if (__LIB_2__.func_214(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__.func_496() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__.func_638(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_8__.func_138())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_1039(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_18__.func_989(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__.func_232();
						__LIB_25__.func_366(&iVar2);
					}
					if (__LIB_8__.func_138())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_4__.func_318();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_1011(iVar2);
							__LIB_25__.func_270(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_25__.func_270(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_1007())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_695(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__.func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_1__.func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_485(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_37__.func_834(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__.func_578(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_18__.func_391(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_32__.func_10();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_32__.func_10();
			}
			else if (__LIB_31__.func_915(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_4__.func_940())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_32__.func_10();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__.func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__.func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_18__.func_493(iParam9, 0, 0);
				}
			}
			__LIB_25__.func_132(__LIB_1__.func_265(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_4__.func_318();
			}
			if (!(__LIB_1__.func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_436(0, 0);
			}
			__LIB_3__.func_678(0, 0);
			if (bParam10)
			{
				__LIB_1__.func_914();
			}
			__LIB_0__.func_744();
			__LIB_35__.func_573();
			if (bParam13)
			{
				__LIB_0__.func_639();
			}
			__LIB_0__.func_643();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_25__.func_366(&(Global_2667225.f_45.f_173));
		__LIB_0__.func_643();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_436(int iParam0, bool bParam1)//Position - 0xF499
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_436(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_485(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x112DD
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_1__.func_927(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_7__.func_131(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_486(0);
			}
		}
	}
}

void func_486(bool bParam0)//Position - 0x113E7
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__.func_709(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__.func_556(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_35__.func_588(__LIB_1__.func_558(), 14, iVar1, -1) };
			__LIB_1__.func_924(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_487(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_487(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_487(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x114BE
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
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
			func_639(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 10, 0, -1) };
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
						func_639(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_639(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_487(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_639(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iVar0, func_626(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_487(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = func_625();
			if (iVar17 != -1)
			{
				func_623(iVar17, 0, iParam10);
			}
			func_619(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_639(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_617(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_487(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_639(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_487(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_611(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_617(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_487(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_617(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_487(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_607(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_617(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_487(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__.func_827(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_487(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_487(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iVar32, -1) };
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
								func_487(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_827(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iVar38, -1) };
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
								func_487(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_487(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_487(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_594(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_619(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_607(iVar5, func_626(iParam0, 8, -1), iParam2, func_626(iParam0, 4, -1));
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
						iVar42 = __LIB_18__.func_181(iParam2);
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
				func_543(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_607(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_617(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_619(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				func_594(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_607(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
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
						func_487(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_487(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_607(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_607(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_617(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = func_617(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_487(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_607(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_617(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_487(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_515(iParam0, 9, iVar63))
						{
							func_487(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_487(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_487(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_487(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_626(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_626(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_487(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_487(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_487(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_487(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_487(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_487(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_487(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_487(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_487(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_487(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_611(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_617(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_487(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_617(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_487(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_488(iParam0, &uVar4))
		{
			func_487(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_487(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_487(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_487(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_626(iParam0, 3, -1), iVar10);
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
				func_487(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_488(int iParam0, var uParam1)//Position - 0x13368
{
	int iVar0;
	int iVar1;
	*uParam1 = func_626(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_515(iParam0, iVar1, iVar0))
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

int func_515(int iParam0, int iParam1, int iParam2)//Position - 0x17BB3
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar0, iParam1, iParam2, -1) };
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
				if (!func_515(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_515(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_515(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__.func_588(iVar0, iVar4, iVar1, -1) };
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
			if (!func_515(iParam0, 14, uVar11[iVar10]))
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
						return func_515(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_515(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_543(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1F8FC
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_589(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		func_623(iVar1, 1, iParam2);
	}
	func_544(iParam0, bParam3, 0, -1);
}

void func_544(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1F949
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
		bVar3 = func_585(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_578(iParam0, iParam3);
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
			if (__LIB_19__.func_767(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (func_565(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_19__.func_767(123, iVar0))
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
					if (__LIB_19__.func_767(iVar10, iVar0))
					{
						if (func_565(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
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

int func_565(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x29380
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
							if (__LIB_19__.func_767(13, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(14, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(15, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(16, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(71, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(72, -1))
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
							if (__LIB_19__.func_767(13, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(14, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(15, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(16, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(71, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(72, -1))
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
							if (__LIB_19__.func_767(13, -1))
							{
							}
							else if (__LIB_19__.func_767(14, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(15, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(16, -1))
							{
							}
							else if (__LIB_19__.func_767(71, -1))
							{
								return 0;
							}
							else if (__LIB_19__.func_767(72, -1))
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
							if (__LIB_19__.func_767(13, -1))
							{
							}
							else if (__LIB_19__.func_767(14, -1))
							{
							}
							else if (__LIB_19__.func_767(15, -1))
							{
							}
							else if (__LIB_19__.func_767(16, -1))
							{
							}
							else if (__LIB_19__.func_767(71, -1))
							{
							}
							else if (__LIB_19__.func_767(72, -1))
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
						if (__LIB_19__.func_767(13, -1))
						{
						}
						else if (__LIB_19__.func_767(14, -1))
						{
						}
						else if (__LIB_19__.func_767(15, -1))
						{
							return 0;
						}
						else if (__LIB_19__.func_767(16, -1))
						{
						}
						else if (__LIB_19__.func_767(71, -1))
						{
						}
						else if (__LIB_19__.func_767(72, -1))
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
							if (__LIB_19__.func_767(15, -1))
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
						if (__LIB_19__.func_767(13, -1))
						{
							return 0;
						}
						else if (__LIB_19__.func_767(14, -1))
						{
							return 0;
						}
						else if (__LIB_19__.func_767(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */))
							{
								return 0;
							}
						}
						else if (__LIB_19__.func_767(16, -1))
						{
						}
						else if (__LIB_19__.func_767(71, -1))
						{
						}
						else if (__LIB_19__.func_767(72, -1))
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
							if (__LIB_19__.func_767(13, -1))
							{
							}
							else if (__LIB_19__.func_767(14, -1))
							{
							}
							else if (__LIB_19__.func_767(15, -1))
							{
							}
							else if (__LIB_19__.func_767(16, -1))
							{
							}
							else if (__LIB_19__.func_767(71, -1))
							{
							}
							else if (__LIB_19__.func_767(72, -1))
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

int func_578(int iParam0, int iParam1)//Position - 0x2EB9A
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
				iVar3 = func_626(iParam0, 11, -1);
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
				iVar5 = func_626(iParam0, 11, -1);
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

int func_585(int iParam0, bool bParam1)//Position - 0x2EFA8
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
							iVar2 = __LIB_25__.func_18(joaat("MP_M_Freemode_01"), 11, func_626(iParam0, 11, -1), 0);
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
						if (__LIB_19__.func_767(13, -1))
						{
							return 1;
						}
						else if (__LIB_19__.func_767(14, -1))
						{
							return 1;
						}
						else if (__LIB_19__.func_767(15, -1))
						{
							return 1;
						}
						else if (__LIB_19__.func_767(16, -1))
						{
							return 1;
						}
						else if (__LIB_19__.func_767(71, -1))
						{
							return 1;
						}
						else if (__LIB_19__.func_767(72, -1))
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
						iVar3 = func_626(iParam0, 11, -1);
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
						iVar5 = func_626(iParam0, 8, -1);
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
							iVar7 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_626(iParam0, 11, -1), 0);
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
						iVar8 = func_626(iParam0, 11, -1);
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
							iVar10 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_626(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_626(iParam0, 11, -1), 0);
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
						iVar12 = func_626(iParam0, 8, -1);
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

void func_589(int iParam0, int iParam1)//Position - 0x30E83
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
					func_623(13, 0, Global_78127);
					func_623(14, 0, Global_78127);
					func_623(15, 0, Global_78127);
					func_623(16, 0, Global_78127);
					func_623(71, 0, Global_78127);
					func_623(72, 0, Global_78127);
					return;
				}
				else if (iParam0 == joaat("torsoDecal"))
				{
					if (iVar1 == 3)
					{
						func_623(73, 0, Global_78127);
						func_623(74, 0, Global_78127);
						func_623(75, 0, Global_78127);
						func_623(76, 0, Global_78127);
						func_623(77, 0, Global_78127);
						func_623(78, 0, Global_78127);
						func_623(79, 0, Global_78127);
						func_623(80, 0, Global_78127);
						func_623(81, 0, Global_78127);
						func_623(82, 0, Global_78127);
						func_623(83, 0, Global_78127);
						func_623(84, 0, Global_78127);
						func_623(85, 0, Global_78127);
						func_623(86, 0, Global_78127);
						func_623(90, 0, Global_78127);
						func_623(91, 0, Global_78127);
						func_623(124, 0, Global_78127);
						func_623(125, 0, Global_78127);
						func_623(87, 0, Global_78127);
						func_623(88, 0, Global_78127);
						func_623(89, 0, Global_78127);
						iVar3 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar2, &Var4))
							{
								if (Var4.f_6 == joaat("torsoDecal"))
								{
									func_623((129 + iVar2), 0, Global_78127);
								}
							}
							iVar2++;
						}
					}
					else
					{
						func_623(73, 0, Global_78127);
						func_623(74, 0, Global_78127);
						func_623(75, 0, Global_78127);
						func_623(76, 0, Global_78127);
						func_623(77, 0, Global_78127);
						func_623(78, 0, Global_78127);
						func_623(79, 0, Global_78127);
						func_623(80, 0, Global_78127);
						func_623(81, 0, Global_78127);
						func_623(82, 0, Global_78127);
						func_623(83, 0, Global_78127);
						func_623(84, 0, Global_78127);
						func_623(85, 0, Global_78127);
						func_623(92, 0, Global_78127);
						func_623(87, 0, Global_78127);
						func_623(88, 0, Global_78127);
						func_623(89, 0, Global_78127);
						iVar6 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar5 = 0;
						while (iVar5 < iVar6)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar5, &Var7))
							{
								if (Var7.f_6 == joaat("torsoDecal"))
								{
									func_623((129 + iVar5), 0, Global_78127);
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
						func_623(93, 0, Global_78127);
						func_623(94, 0, Global_78127);
						func_623(95, 0, Global_78127);
						func_623(96, 0, Global_78127);
						func_623(97, 0, Global_78127);
						func_623(98, 0, Global_78127);
						func_623(99, 0, Global_78127);
						func_623(100, 0, Global_78127);
						func_623(101, 0, Global_78127);
						func_623(102, 0, Global_78127);
						func_623(103, 0, Global_78127);
						func_623(104, 0, Global_78127);
						func_623(105, 0, Global_78127);
						func_623(106, 0, Global_78127);
						func_623(107, 0, Global_78127);
						func_623(108, 0, Global_78127);
						func_623(109, 0, Global_78127);
						func_623(110, 0, Global_78127);
						func_623(111, 0, Global_78127);
						func_623(112, 0, Global_78127);
						func_623(113, 0, Global_78127);
						func_623(114, 0, Global_78127);
						func_623(115, 0, Global_78127);
						func_623(116, 0, Global_78127);
						func_623(117, 0, Global_78127);
						func_623(123, 0, Global_78127);
						iVar9 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar8 = 0;
						while (iVar8 < iVar9)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar8, &Var10))
							{
								if (Var10.f_6 == joaat("hairOverlay"))
								{
									func_623((129 + iVar8), 0, Global_78127);
								}
							}
							iVar8++;
						}
					}
					else
					{
						func_623(93, 0, Global_78127);
						func_623(94, 0, Global_78127);
						func_623(95, 0, Global_78127);
						func_623(96, 0, Global_78127);
						func_623(97, 0, Global_78127);
						func_623(98, 0, Global_78127);
						func_623(99, 0, Global_78127);
						func_623(100, 0, Global_78127);
						func_623(101, 0, Global_78127);
						func_623(102, 0, Global_78127);
						func_623(103, 0, Global_78127);
						func_623(104, 0, Global_78127);
						func_623(105, 0, Global_78127);
						func_623(106, 0, Global_78127);
						func_623(107, 0, Global_78127);
						func_623(108, 0, Global_78127);
						func_623(109, 0, Global_78127);
						func_623(110, 0, Global_78127);
						func_623(111, 0, Global_78127);
						func_623(112, 0, Global_78127);
						func_623(113, 0, Global_78127);
						func_623(114, 0, Global_78127);
						func_623(115, 0, Global_78127);
						func_623(116, 0, Global_78127);
						func_623(117, 0, Global_78127);
						func_623(118, 0, Global_78127);
						func_623(119, 0, Global_78127);
						func_623(120, 0, Global_78127);
						func_623(121, 0, Global_78127);
						func_623(122, 0, Global_78127);
						func_623(123, 0, Global_78127);
						iVar12 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar11 = 0;
						while (iVar11 < iVar12)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar11, &Var13))
							{
								if (Var13.f_6 == joaat("hairOverlay"))
								{
									func_623((129 + iVar11), 0, Global_78127);
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
						func_623(Var0.f_11, 0, Global_78127);
					}
				}
				iVar14++;
			}
		}
	}
}

int func_594(int iParam0, int iParam1)//Position - 0x32372
{
	int iVar0;
	iVar0 = func_625();
	if (iVar0 != -1)
	{
		if (!__LIB_25__.func_28(iParam0, iParam1, iVar0))
		{
			func_623(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

int func_607(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38D3C
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
					iVar0 = func_607(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_607(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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

void func_611(int iParam0)//Position - 0x3A248
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
		if (!func_616(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_616(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_616(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3AC12
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_626(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_617(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3B2BC
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
		__LIB_19__.func_768(iParam0, iParam1, iParam2, iParam3, &iVar0);
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

void func_619(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3D52D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_621(iParam0))
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
			func_589(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_28(iVar0, iParam2, 13) && !__LIB_25__.func_28(iVar0, iParam2, 14)) && !__LIB_25__.func_28(iVar0, iParam2, 15)) && !__LIB_25__.func_28(iVar0, iParam2, 16)) && !__LIB_25__.func_28(iVar0, iParam2, 71)) && !__LIB_25__.func_28(iVar0, iParam2, 72))
				{
					func_589(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__.func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_620(iParam0, iVar2, 0);
				}
				else
				{
					func_623(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

void func_620(int iParam0, int iParam1, int iParam2)//Position - 0x3D65D
{
	int iVar0;
	struct<6> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = __LIB_0__.func_250(iParam0);
			if (!__LIB_19__.func_767(iParam1, -1) || iParam2)
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

int func_621(int iParam0)//Position - 0x3D6BC
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
				iVar1 = func_626(iParam0, 11, -1);
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
				iVar3 = func_626(iParam0, 11, -1);
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

void func_623(int iParam0, bool bParam1, int iParam2)//Position - 0x3DA16
{
	if (bParam1)
	{
		if (!__LIB_19__.func_767(iParam0, iParam2))
		{
			__LIB_7__.func_191(iParam0, 1, iParam2);
		}
	}
	else if (__LIB_19__.func_767(iParam0, iParam2))
	{
		__LIB_7__.func_191(iParam0, 0, iParam2);
	}
}

int func_625()//Position - 0x3DAB6
{
	int iVar0;
	iVar0 = Global_78127;
	if (__LIB_19__.func_767(13, iVar0))
	{
		return 13;
	}
	if (__LIB_19__.func_767(14, iVar0))
	{
		return 14;
	}
	if (__LIB_19__.func_767(15, iVar0))
	{
		return 15;
	}
	if (__LIB_19__.func_767(16, iVar0))
	{
		return 16;
	}
	if (__LIB_19__.func_767(71, iVar0))
	{
		return 71;
	}
	if (__LIB_19__.func_767(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_626(int iParam0, int iParam1, int iParam2)//Position - 0x3DB25
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
				if (func_515(iParam0, iParam1, iVar0))
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
				if (func_515(iParam0, iParam1, iVar1))
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

void func_639(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x40B84
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
		Global_78130[2 /*14*/] = { __LIB_35__.func_588(iParam0, iParam1, iParam2, -1) };
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
							func_639(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_639(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_639(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
							func_639(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_639(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_639(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_639(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_639(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_639(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_639(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_695(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x5D11C
{
	int* iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_7__.func_211(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__.func_232();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_1001() && !bVar3)
	{
		if (func_1000())
		{
			if (func_994(&bVar2))
			{
				if (__LIB_4__.func_942(bVar2))
				{
					if (!bVar4)
					{
						func_485(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_1__.func_946() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_1__.func_945(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false));
						iVar5 = __LIB_1__.func_944(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_1__.func_946(), false))
						{
							iVar5 = __LIB_1__.func_946();
						}
						func_485(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_8__.func_769(iVar0))
		{
			if ((__LIB_8__.func_138() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__.func_138())
			{
				if (!__LIB_8__.func_197(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1011(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__.func_851())
	{
		__LIB_25__.func_366(&iVar0);
	}
	if (func_1007())
	{
		__LIB_25__.func_366(&(Global_2667225.f_45.f_173));
		if (__LIB_2__.func_65())
		{
			if (__LIB_1__.func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__.func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__.func_64(), __LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__.func_64(), fParam1);
				func_967(__LIB_2__.func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__.func_662())
			{
				if (__LIB_7__.func_138(__LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__.func_165(), 1))
				{
					func_967(__LIB_2__.func_64());
					return 1;
				}
			}
			else if (func_698(__LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__.func_165(), 0, 1, 0))
			{
				func_967(__LIB_2__.func_64());
				return 1;
			}
		}
		else if (__LIB_18__.func_220(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_1__.func_930(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_1__.func_929(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_967(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_698(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5D7B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__.func_190(8))
	{
		__LIB_3__.func_437(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__.func_245(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__.func_190(16))
		{
			__LIB_1__.func_245(16);
		}
	}
	__LIB_1__.func_245(31);
	if (!__LIB_7__.func_94())
	{
		if (!__LIB_1__.func_190(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_7__.func_194(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__.func_648())
					{
						if (!__LIB_4__.func_316())
						{
							func_949(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__.func_371(iVar1) || !__LIB_7__.func_193(iVar1, 1))
							{
								if (!__LIB_0__.func_113(iVar1))
								{
								}
								else
								{
									func_937(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__.func_584(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_0__.func_747())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_5__.func_694(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_838(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_838(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_25__.func_21(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_838(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_838(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_18__.func_220(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									func_757(&iVar0, iParam3);
									if ((__LIB_1__.func_221() || __LIB_1__.func_936()) || __LIB_1__.func_935())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_31__.func_898(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__.func_245(34);
									}
									else
									{
										__LIB_1__.func_191(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													func_736(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													func_714(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									func_714(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_18__.func_986(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__.func_245(0);
									__LIB_1__.func_245(44);
									__LIB_1__.func_191(10);
									__LIB_1__.func_191(1);
									__LIB_1__.func_191(2);
									__LIB_1__.func_191(9);
									__LIB_1__.func_191(12);
									__LIB_1__.func_191(31);
									__LIB_1__.func_191(32);
									__LIB_1__.func_191(33);
									__LIB_1__.func_191(35);
									__LIB_1__.func_191(37);
									__LIB_1__.func_191(38);
									__LIB_1__.func_931();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
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

int func_714(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x5EBA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_734(1411, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_734(1412, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__.func_322(iParam0))
	{
	}
	else
	{
		iVar1 = func_734(1413, iParam0);
		__LIB_1__.func_39(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_734(1414, iParam0) + iVar0);
				__LIB_1__.func_39(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (__LIB_25__.func_338(iParam0) + (iVar0 - 25));
				__LIB_1__.func_39(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_734(1439, iParam0) + iVar0);
			__LIB_1__.func_39(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_734(1441, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_734(1442, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_734(1443, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (__LIB_1__.func_322(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_734(1444, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_734(1445, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_67, iParam3);
	if (__LIB_1__.func_322(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_734(1446, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_734(1447, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_734(1448, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_70, -1);
	iVar1 = func_734(1449, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_734(1450, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_734(1451, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_734(1452, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_734(1453, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_734(1454, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_734(1455, iParam0);
	__LIB_1__.func_39(iVar1, uParam1->f_8, iParam3);
	if (__LIB_1__.func_322(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_734(3880, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_734(3881, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_734(3882, iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_76, iParam3);
		iVar1 = __LIB_25__.func_337(iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_97, iParam3);
		iVar1 = __LIB_25__.func_336(iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_99, iParam3);
		iVar1 = __LIB_25__.func_335(iParam0);
		__LIB_1__.func_39(iVar1, uParam1->f_98, iParam3);
		iVar1 = __LIB_25__.func_465(iParam0, 0);
		__LIB_1__.func_39(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	__LIB_1__.func_597(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	__LIB_1__.func_597(__LIB_1__.func_368(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	__LIB_1__.func_597(__LIB_1__.func_368(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!__LIB_1__.func_322(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			__LIB_2__.func_205(__LIB_1__.func_368(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

int func_734(int iParam0, int iParam1)//Position - 0x67C4F
{
	int iVar0;
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < __LIB_25__.func_172(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < __LIB_25__.func_172(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - __LIB_25__.func_172(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - __LIB_25__.func_172(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824/*func_228*/);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	return iVar0;
}

void func_736(int iParam0)//Position - 0x692D5
{
	int iVar0;
	if (!BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
	{
		MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 8);
	}
	if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 6))
	{
		__LIB_6__.func_981(1915, 1, -1);
		__LIB_4__.func_314(iParam0);
	}
	if (Global_1585857[iParam0 /*142*/].f_66 == joaat("oppressor2"))
	{
		__LIB_0__.func_495(&Global_2789823, 1, 0);
	}
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 6);
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 3);
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 11);
	Global_1585857[iParam0 /*142*/].f_104 = 0;
	if (__LIB_7__.func_88(Global_1585857[iParam0 /*142*/].f_66, 0))
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
			__LIB_1__.func_245(39);
			if (__LIB_1__.func_176(Global_1585857[iParam0 /*142*/].f_66))
			{
				__LIB_2__.func_206(53);
			}
			else
			{
				__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[45 /*2*/]), 1, 0);
				Global_2715699.f_4316.f_388[45] = 0;
			}
			if (__LIB_24__.func_998(4))
			{
				Global_4535616 = 1;
			}
			else
			{
				func_714(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
				__LIB_6__.func_881(-1948815871, 3, 0);
			}
		}
	}
	else if (!__LIB_16__.func_381(iParam0))
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
		}
	}
	else if (__LIB_1__.func_168() && Global_1946223 == iParam0)
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
			if (__LIB_24__.func_998(4))
			{
				Global_4535616 = 1;
			}
			else
			{
				func_714(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
				__LIB_6__.func_881(-1948815871, 3, 0);
			}
		}
	}
	else if (__LIB_1__.func_177(Global_1585857[iParam0 /*142*/].f_66))
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
		{
			__LIB_1__.func_245(39);
			MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 1);
			if (__LIB_24__.func_998(4))
			{
				Global_4535616 = 1;
			}
			else
			{
				func_714(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
				__LIB_6__.func_881(-1948815871, 3, 0);
			}
		}
	}
	else if (!BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
	{
		MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 1);
		if (__LIB_24__.func_998(4))
		{
			Global_4535616 = 1;
		}
		else
		{
			func_714(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
			__LIB_6__.func_881(-1948815871, 3, 0);
		}
		if (!BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
		{
			Global_2815059.f_425 = iParam0;
			Global_2815059.f_426 = 0;
			__LIB_1__.func_252(iParam0, &iVar0);
			if (iVar0 >= 0)
			{
				func_737(iVar0, -1, -1);
			}
			if (!__LIB_0__.func_112())
			{
				func_937(Global_2815059.f_425, -1);
				Global_2815059.f_425 = -1;
			}
		}
	}
	MISC::CLEAR_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 0);
}

void func_737(int iParam0, int iParam1, int iParam2)//Position - 0x6958B
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_738(iParam0, iParam1, iParam2);
	if (iParam0 >= 363)
	{
		return;
	}
	if (iParam2 == __LIB_0__.func_5() || iParam2 == -1)
	{
		Global_1940666[iParam0] = iParam1;
	}
}

void func_738(int iParam0, int iParam1, int iParam2)//Position - 0x695D5
{
	if (iParam1 <= 255)
	{
		__LIB_1__.func_39(func_740(iParam0), iParam1, iParam2);
		__LIB_1__.func_39(__LIB_1__.func_369(iParam0), 0, iParam2);
	}
	else
	{
		__LIB_1__.func_39(func_740(iParam0), 255, iParam2);
		__LIB_1__.func_39(__LIB_1__.func_369(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_740(int iParam0)//Position - 0x696D2
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568/*func_239*/ + iParam0) - 337);
	}
	return (4036 + iParam0);
}

void func_757(int iParam0, int iParam1)//Position - 0x69C19
{
	func_776(*iParam0, &(Global_1585857[iParam1 /*142*/]), 1, 1, 0);
	__LIB_35__.func_581(iParam0, iParam1);
}

void func_776(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6A34A
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			__LIB_39__.func_246(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (__LIB_0__.func_596(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (__LIB_0__.func_595(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (__LIB_0__.func_594(iParam0))
			{
				__LIB_6__.func_921(iParam0, __LIB_7__.func_253(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				__LIB_38__.func_262(iParam0, &(uParam1->f_81));
			}
			if ((!__LIB_24__.func_998(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_25__.func_30(iParam0);
			}
			if (__LIB_0__.func_586(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (__LIB_6__.func_909(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21791 /* Tunable: -1001087518 */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21791 /* Tunable: -1001087518 */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (__LIB_0__.func_585(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
				}
		}
	}
}

int func_838(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x72796
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_2__.func_61())
	{
		return 0;
	}
	if (__LIB_1__.func_122() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__.func_639();
			__LIB_0__.func_599();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__.func_638(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__.func_638(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_929(Param0))
		{
			if (__LIB_2__.func_60(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__.func_636();
		__LIB_0__.func_639();
		if (!uParam6->f_27 || (((((((__LIB_40__.func_520(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_41__.func_928(Param0, iParam2);
		}
		if (__LIB_42__.func_300(Param0))
		{
			__LIB_41__.func_928(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_25__.func_365(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__.func_133(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_848(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_18__.func_378(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_18__.func_420(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						__LIB_24__.func_782(Global_2667225.f_683, 0);
						__LIB_0__.func_606(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__.func_606(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_24__.func_781(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_25__.func_612(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									__LIB_24__.func_782(Global_2667225.f_683, 0);
									__LIB_0__.func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								__LIB_24__.func_782(Global_2667225.f_683, 0);
								__LIB_0__.func_606(-1);
							}
						}
					}
					else
					{
						__LIB_0__.func_606(-1);
					}
				}
				else
				{
					__LIB_0__.func_606(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_848(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_6__.func_912(1);
		return 1;
	}
	return 0;
}

void func_848(var uParam0, var uParam1, var uParam2)//Position - 0x73595
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_889(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_849(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_849(var uParam0, var uParam1, var uParam2)//Position - 0x73604
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_885(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_18__.func_371(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_6__.func_902(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_24__.func_959(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__.func_38(Var1))
									{
										Var1 = { __LIB_24__.func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__.func_373(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__.func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__.func_371(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_861(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_885(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_25__.func_72(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_25__.func_365(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_25__.func_365(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_25__.func_612(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_41__.func_233(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_857(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_7__.func_119(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_855(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_31__.func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_885(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__.func_371(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_37__.func_866(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_855(int iParam0, var uParam1)//Position - 0x74363
{
	if (!__LIB_7__.func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__.func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_855(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_855(iParam0 + 1, uParam1);
	}
}

void func_857(struct<3> Param0, float fParam1, int iParam2)//Position - 0x74409
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_857(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_861(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x74697
{
	if (__LIB_24__.func_781(Param0, fParam1, iParam2, bParam3, iParam4) || __LIB_25__.func_133(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_885(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x75B25
{
	int iVar0;
	bool bVar1;
	if (func_929(Param0))
	{
		if (func_888(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_18__.func_494(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__.func_607(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__.func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_888(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x75D6F
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_6__.func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_7__.func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_888(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__.func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_889(var uParam0, var uParam1, var uParam2)//Position - 0x75E4A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_885(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_18__.func_371(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_6__.func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__.func_623();
		}
		else
		{
			__LIB_0__.func_622();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_861(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_885(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_25__.func_72(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_25__.func_365(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_25__.func_365(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_25__.func_612(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_41__.func_233(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_857(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_855(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_929(struct<3> Param0)//Position - 0x7EE27
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_7__.func_137(Param0, 1008981770))
			{
				if (!func_888(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_888(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_7__.func_136(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__.func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_888(&Var1, 0, 0, 0, 1))
					{
						if (!func_888(&Param0, 0, 0, 0, 1))
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

void func_937(int iParam0, int iParam1)//Position - 0x7F08C
{
	int iVar0;
	__LIB_1__.func_252(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_737(iVar0, -1, -1);
	}
	__LIB_4__.func_819(&(Global_1585857[iParam0 /*142*/]));
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_714(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, iParam1, 0, 0);
}

void func_949(int iParam0)//Position - 0x82DDD
{
	if (__LIB_1__.func_373(&(Global_1585857[iParam0 /*142*/].f_66)))
	{
		func_950(iParam0);
	}
}

void func_950(int iParam0)//Position - 0x82DFC
{
	__LIB_1__.func_372(&(Global_1585857[iParam0 /*142*/].f_66));
	func_714(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, -1, 0, 0);
}

void func_967(int iParam0)//Position - 0x8324C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_1011(iParam0);
	__LIB_1__.func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		func_984(iParam0, 1);
	}
	else
	{
		__LIB_32__.func_12(iParam0, __LIB_1__.func_267(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

void func_984(int iParam0, bool bParam1)//Position - 0x83CBD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		func_776(iParam0, &(Global_2667225.f_45.f_69), bParam1, 1, 0);
	}
}

int func_994(var uParam0)//Position - 0x83FEC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_1__.func_949())
		{
			iVar2 = __LIB_1__.func_947(__LIB_1__.func_948());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_1__.func_947(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_2__.func_214(bVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar7)))
						{
							*uParam0 = bVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @556; //curOff = 336
						if (!__LIB_1__.func_389())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__.func_264(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__.func_264(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_995(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_995(bool bParam0)//Position - 0x8421C
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1000()//Position - 0x84295
{
	bool bVar0;
	if (__LIB_1__.func_389())
	{
		if (func_994(&bVar0))
		{
			if (func_995(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_1__.func_949())
	{
		return 1;
	}
	return 0;
}

int func_1001()//Position - 0x842DA
{
	var uVar0;
	if (__LIB_1__.func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_994(&uVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_1007()//Position - 0x8444F
{
	bool bVar0;
	var uVar1;
	if (__LIB_8__.func_138())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1001())
		{
			if (func_1000())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__.func_65())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__.func_165() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_7__.func_211(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_32__.func_12(Global_2667225.f_2669, __LIB_1__.func_267(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_1__.func_953();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_1__.func_952();
			}
		}
		else if (!__LIB_2__.func_65())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__.func_255())
				{
					__LIB_1__.func_953();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
			{
				return 1;
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
		return 1;
	}
	return 0;
}

void func_1011(int iParam0)//Position - 0x84729
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_7__.func_129(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_1__.func_964(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_8__.func_764(PLAYER::PLAYER_ID()))
			{
				__LIB_19__.func_557(iParam0);
			}
		}
		__LIB_18__.func_379(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_485(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_1__.func_959(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_0__.func_851());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_1__.func_958(iParam0, 1);
					__LIB_1__.func_957(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_1__.func_956(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_1__.func_955(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_1__.func_954() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_1039(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x8565B
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__.func_114())
	{
		if (!__LIB_0__.func_640(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__.func_638(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__.func_638(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__.func_636();
		if (bParam10)
		{
			__LIB_0__.func_639();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_1048(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_18__.func_380(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_6__.func_510()) && __LIB_6__.func_509(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							__LIB_24__.func_782(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_1__.func_967(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_18__.func_420(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__.func_68(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_1040(&(Global_2667225.f_623));
						__LIB_1__.func_967(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								__LIB_24__.func_782(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_1__.func_967(-1);
							}
						}
					}
					else
					{
						__LIB_1__.func_967(-1);
					}
				}
				else
				{
					__LIB_1__.func_967(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_1048(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__.func_636();
		if (bParam10)
		{
			if (!__LIB_2__.func_202(PLAYER::PLAYER_ID()))
			{
				__LIB_0__.func_639();
			}
		}
		return 1;
	}
	return 0;
}

void func_1040(var uParam0)//Position - 0x85BE3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_24__.func_782(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1048(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x8600E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	var uVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__.func_264(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_8__.func_197(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_18__.func_382(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_7__.func_149();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_20__.func_341();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_6__.func_978(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1279();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_18__.func_441(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__.func_57(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__.func_1())
			{
				__LIB_1__.func_225();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__.func_0(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__.func_0(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__.func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__.func_0(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__.func_0(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__.func_0(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__.func_0(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__.func_0(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__.func_0(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__.func_0(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__.func_0(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__.func_0(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__.func_0(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__.func_0(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__.func_0(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__.func_0(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__.func_0(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__.func_0(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__.func_0(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__.func_0(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__.func_0(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__.func_0(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__.func_0(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__.func_0(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__.func_0(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__.func_0(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__.func_0(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__.func_0(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__.func_0(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__.func_0(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__.func_0(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__.func_0(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__.func_0(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__.func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__.func_0(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__.func_0(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__.func_0(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__.func_0(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__.func_0(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__.func_0(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__.func_0(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__.func_0(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__.func_0(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__.func_0(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__.func_0(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__.func_0(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__.func_0(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__.func_0(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__.func_0(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__.func_0(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__.func_0(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__.func_0(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__.func_0(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__.func_0(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__.func_0(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__.func_0(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__.func_0(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__.func_0(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__.func_0(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__.func_0(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__.func_0(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__.func_0(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__.func_0(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__.func_0(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__.func_0(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__.func_0(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__.func_0(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__.func_0(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				func_1275(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				func_1273(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				func_1324(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1270(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_3__.func_679();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				func_1324(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_7__.func_148();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__.func_89(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_26__.func_806(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_7__.func_135(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_1__.func_996(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_1__.func_264(Global_1888188, 0, 1))
					{
						if (__LIB_39__.func_169(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__.func_265(Global_1888188) };
							if (!__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__.func_613(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__.func_120(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__.func_942(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_26__.func_806(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_26__.func_806(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { func_1264(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1262(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_1__.func_994(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_8__.func_138() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_1262(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__.func_160())
					{
						if (__LIB_1__.func_264(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__.func_265(Global_1836068.f_14) };
							if (__LIB_8__.func_138())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__.func_613(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__.func_120(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__.func_942(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_8__.func_138())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_4__.func_946() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__.func_88(__LIB_1__.func_265(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__.func_88(Global_2667225.f_512);
				}
				__LIB_1__.func_993(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__.func_265(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_26__.func_806(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_6__.func_922(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_7__.func_202(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = __LIB_41__.func_233(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { func_1254(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { func_1254(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { func_1253(Var21, fVar35) };
						Var23 = { func_1252(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__.func_602(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_6__.func_922(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_7__.func_202(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_41__.func_233(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__.func_156(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_1__.func_990());
				__LIB_1__.func_993(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_888(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_1__.func_265(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_1__.func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__.func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__.func_48(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_25__.func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_1__.func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__.func_993(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1199(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_1__.func_989(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__.func_993(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__.func_993(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_1__.func_989(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_1__.func_993(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_1__.func_993(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1199(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_1__.func_989(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__.func_993(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__.func_993(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_1__.func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__.func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__.func_48(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_25__.func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_1__.func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__.func_993(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_25__.func_340();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_25__.func_340();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_25__.func_53(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_40__.func_397())
				{
					iVar20 = __LIB_1__.func_332(__LIB_0__.func_582());
					if (iVar20 <= 0)
					{
					}
					__LIB_7__.func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1199(__LIB_0__.func_582()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_4__.func_319();
				if (iVar20 <= 0)
				{
				}
				__LIB_7__.func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__.func_222(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__.func_146(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_4__.func_319();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__.func_261())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_18__.func_421(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_25__.func_340();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__.func_261())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_25__.func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_8__.func_48(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_1__.func_985(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__.func_261())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_18__.func_381(iVar15, 612, &Var44, __LIB_1__.func_984(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_25__.func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_8__.func_48(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_1__.func_985(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__.func_261())
				{
					case 5:
						__LIB_18__.func_381(iVar15, 612, &Var45, __LIB_1__.func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_18__.func_381(iVar15, 912, &Var45, __LIB_1__.func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_25__.func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__.func_261())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_0__.func_598(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__.func_260(__LIB_2__.func_78(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__.func_248(__LIB_1__.func_292(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__.func_246(__LIB_1__.func_40(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__.func_243(__LIB_1__.func_374(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__.func_231(__LIB_1__.func_234(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__.func_160())
								{
									iVar46 = __LIB_1__.func_227(__LIB_1__.func_228(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__.func_227(__LIB_1__.func_228(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__.func_222(__LIB_1__.func_223(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__.func_218(__LIB_1__.func_219(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__.func_195(__LIB_1__.func_196(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__.func_166(__LIB_0__.func_598(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_31__.func_904(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_4__.func_945() };
					Global_2667225.f_555 = { __LIB_2__.func_75(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__.func_581(PLAYER::PLAYER_ID()))
				{
					bVar37 = __LIB_6__.func_513(PLAYER::PLAYER_ID(), 1);
					if (!bVar37 == __LIB_0__.func_160())
					{
						Global_2667225.f_555 = { func_1199(bVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1199(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1199(__LIB_0__.func_582()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_0__.func_581(PLAYER::PLAYER_ID()))
				{
					bVar37 = __LIB_6__.func_513(PLAYER::PLAYER_ID(), 1);
					if (!bVar37 == __LIB_0__.func_160())
					{
						Global_2667225.f_555 = { func_1199(bVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1199(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1199(__LIB_0__.func_582()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_1__.func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__.func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_1199(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1199(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_7__.func_199(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__.func_73(__LIB_1__.func_265(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__.func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_6__.func_509(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !func_1133(Global_2676213))
				{
					Global_2667225.f_555 = { func_1132() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_888(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_41__.func_331(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_20__.func_341())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_1__.func_977(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_1130();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__.func_698() && __LIB_8__.func_138()) && func_888(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_20__.func_340();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_2__.func_202(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_848(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1122(&(Var18[iVar0 /*3*/]), __LIB_7__.func_137(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1119(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1119(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1119(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__.func_62(Global_2667225.f_489) && !__LIB_7__.func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_20__.func_341())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1130();
						return 0;
					}
					else
					{
						__LIB_1__.func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_8__.func_197(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_32__.func_184(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1130();
						return 0;
					}
					else
					{
						__LIB_1__.func_973(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_1__.func_973(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_20__.func_340();
		Global_2667225.f_520.f_10 = 0;
		if (func_1049(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_1049(var uParam0, var uParam1, var uParam2)//Position - 0x8B305
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__.func_638(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__.func_638(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__.func_93();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__.func_638(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_7__.func_98();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__.func_93();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_25__.func_365(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__.func_87(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__.func_86(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_848(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__.func_613(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_6__.func_978(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_7__.func_97(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__.func_85() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_7__.func_98();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_1__.func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_1__.func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_1059(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__.func_66(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__.func_65(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_1__.func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_1059(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__.func_613(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_6__.func_903(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_1051(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__.func_62(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__.func_61(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1051(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__.func_93();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_1051(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x8C34E
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__.func_66(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__.func_65(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__.func_65(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_1053(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_4__.func_21(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_848(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_7__.func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_1053(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_7__.func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_888(uParam0, 1, 1, 1, 1))
			{
				func_1051(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_1053(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8C82E
{
	if (__LIB_1__.func_64(Param0, uParam1))
	{
		if (func_1054(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1054(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1054(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x8C88A
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_885(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_25__.func_373(*uParam1, 1056964608))
			{
				if (!__LIB_2__.func_70(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1059(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x8CB59
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_1104(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__.func_62(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_1051(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1051(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1104(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_1104(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_1104(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_1101(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1067(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_1067(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_7__.func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__.func_62(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__.func_61(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1051(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__.func_61(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__.func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__.func_70(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1051(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1051(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__.func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__.func_62(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_1051(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_1051(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__.func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1067(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x8D41D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_26__.func_806(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_7__.func_221(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_8__.func_197(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_1095(Param0, fParam1, uParam2->f_15, __LIB_1__.func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_32__.func_184(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_8__.func_803(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_8__.func_803(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__.func_607(Param0, 0.5f))
			{
				if (func_929(Var12))
				{
					if (!func_888(&Param0, 0, 0, 0, 1) && !__LIB_24__.func_959(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_24__.func_959(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__.func_81(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_7__.func_427(PLAYER::PLAYER_ID()) && __LIB_6__.func_936(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__.func_71(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_6__.func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__.func_80(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_7__.func_117(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__.func_62(Global_2667225.f_489))
			{
				if (__LIB_7__.func_137(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__.func_79(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_18__.func_494(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__.func_70(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_7__.func_136(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_1__.func_971(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_18__.func_329(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_25__.func_373(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__.func_76(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_1074(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_1074(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__.func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__.func_220(Param0);
			}
			fVar7 = func_1072(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_1__.func_969(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_1074(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_1074(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__.func_62(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_7__.func_220(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_1070(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_1070(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_7__.func_219(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_1072(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__.func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__.func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_1070(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1070(struct<10> Param0, int iParam1)//Position - 0x8E010
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1070(Var0, iParam1 + 1);
	}
}

float func_1072(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x8E156
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	bool bVar7;
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar7 = iVar0;
		if (__LIB_1__.func_264(bVar7, 1, 1) || (iParam5 == 1 && __LIB_1__.func_264(bVar7, 0, 0)))
		{
			if (!bVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (__LIB_39__.func_169(bVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(bVar7) == -1 || !__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar7) || !bParam4)
					{
						if (__LIB_1__.func_426(bVar7))
						{
							Var5 = { __LIB_1__.func_265(bVar7) };
							if (!bVar7 == PLAYER::PLAYER_ID())
							{
								Var6 = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(bVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

float func_1074(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x8E2D1
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = __LIB_1__.func_73(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 10000000f;
	fVar4 = func_1072(Param0, 1, 0, 0, 1, 0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, __LIB_25__.func_135(), __LIB_25__.func_134(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = __LIB_7__.func_96(Param0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !__LIB_7__.func_452(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = __LIB_6__.func_511(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = __LIB_1__.func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (__LIB_1__.func_74(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = __LIB_1__.func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + __LIB_1__.func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = __LIB_1__.func_73(SYSTEM::VDIST(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_1095(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x8EFEC
{
	Global_2667225.f_3 = 0;
	if (!__LIB_32__.func_184(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam3)
		{
			if (__LIB_25__.func_365(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_25__.func_936(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_25__.func_373(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (!bParam2)
		{
			if (__LIB_25__.func_365(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_25__.func_936(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_7__.func_183(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2667225.f_3++;
						if (!__LIB_25__.func_373(Param0, 1056964608))
						{
							Global_2667225.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (__LIB_25__.func_365(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!__LIB_25__.func_936(Param0, fParam10))
			{
				Global_2667225.f_3++;
				if (!__LIB_7__.func_183(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2667225.f_3++;
					if (!__LIB_25__.func_373(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
		}
	}
	return 0;
}

void func_1101(struct<3> Param0, var uParam1, var uParam2)//Position - 0x8F4FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_1103(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_1103(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_1103(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_1102(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1102(var uParam0, var uParam1, int iParam2)//Position - 0x8F81B
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1102(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1103(var uParam0, var uParam1, int iParam2)//Position - 0x8F859
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1103(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1104(var uParam0, var uParam1)//Position - 0x8F893
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_7__.func_255(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_1067(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_7__.func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_1119(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x8FC74
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__.func_75(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_1__.func_974(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__.func_72(Param0, Param1, fParam2) };
				break;
		}
		if (func_1122(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1122(var uParam0, bool bParam1)//Position - 0x8FDB5
{
	func_1123(uParam0, bParam1);
	if (__LIB_25__.func_365(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1123(var uParam0, bool bParam1)//Position - 0x8FDEC
{
	float fVar0;
	if (!bParam1)
	{
		func_1125(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1125(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_1__.func_975(uParam0);
}

void func_1125(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8FEC2
{
	if (bParam1)
	{
		if (func_929(Global_2667225.f_512))
		{
			if (func_888(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_18__.func_494(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_24__.func_959(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_4__.func_944(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__.func_976(uParam0, 1120403456);
}

void func_1130()//Position - 0x9010D
{
	if (!Global_2667225.f_701)
	{
		if (func_929(Global_2667225.f_555))
		{
			if (func_888(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1262(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_18__.func_494(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_24__.func_959(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_20__.func_341())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1132()//Position - 0x901F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3[32];
	int iVar4;
	iVar4 = 0;
	if (Global_1836588)
	{
		iVar0 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
		iVar2 = iVar0;
	}
	while (iVar1 < 32)
	{
		if (SYSTEM::VMAG(Global_2667225.f_45.f_202[iVar2 /*3*/]) > 0f)
		{
			Var3[iVar4 /*3*/] = { Global_2667225.f_45.f_202[iVar2 /*3*/] };
			iVar4++;
			if (func_1133(Global_2667225.f_45.f_202[iVar2 /*3*/]))
			{
				return Global_2667225.f_45.f_202[iVar2 /*3*/];
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	if (iVar4 > 0)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
		return Var3[iVar2 /*3*/];
	}
	return Global_2676213;
}

int func_1133(struct<3> Param0)//Position - 0x902C0
{
	if (__LIB_5__.func_693(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !__LIB_25__.func_365(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_1199(bool bParam0)//Position - 0x953BE
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		Var0 = { __LIB_1__.func_293(Global_2678393[bParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[bParam0]) && !bParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__.func_293(Global_2678393.f_33[bParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1200(bParam0);
}

Vector3 func_1200(bool bParam0)//Position - 0x95432
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__.func_212(bParam0))
		{
			Var1 = { __LIB_2__.func_211(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_1__.func_986(__LIB_1__.func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1236(__LIB_1__.func_265(bParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__.func_986(__LIB_1__.func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_4__.func_681(bParam0))
	{
		Var1 = { func_1203(bParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_4__.func_920(bParam0))
	{
		iVar2 = __LIB_2__.func_237(bParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__.func_212(bParam0))
		{
			Var1 = { __LIB_2__.func_211(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__.func_265(bParam0);
}

Vector3 func_1203(bool bParam0)//Position - 0x9566A
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
	if (bParam0 == __LIB_0__.func_160())
	{
	}
	if (__LIB_13__.func_261(bParam0))
	{
		iVar0 = __LIB_1__.func_236(bParam0);
		if (iVar0 != __LIB_0__.func_160())
		{
			if (!__LIB_1__.func_251(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[__LIB_1__.func_236(bParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = __LIB_2__.func_210(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__.func_968(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (__LIB_4__.func_972(bParam0) && !__LIB_8__.func_210(bParam0))
	{
		iVar2 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar2 != __LIB_0__.func_160())
		{
			iVar3 = __LIB_2__.func_210(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (__LIB_4__.func_958(bParam0) && !__LIB_8__.func_209(bParam0))
	{
		if (__LIB_4__.func_681(bParam0) && __LIB_1__.func_291())
		{
			return Global_1946250.f_533[Global_2689235[bParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar4 != __LIB_0__.func_160())
		{
			if (__LIB_1__.func_233(iVar4))
			{
				iVar5 = __LIB_6__.func_933(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (__LIB_3__.func_925(bParam0))
	{
		iVar6 = __LIB_2__.func_208(bParam0);
		if (iVar6 != __LIB_0__.func_160())
		{
			if (!__LIB_1__.func_237(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[__LIB_2__.func_208(bParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = __LIB_6__.func_933(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__.func_424(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (__LIB_4__.func_22(bParam0) && !__LIB_4__.func_388(bParam0))
	{
		iVar8 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar8 != __LIB_0__.func_160())
		{
			if (__LIB_1__.func_186(iVar8))
			{
				iVar9 = __LIB_2__.func_209(iVar8);
				if (iVar9 != -1)
				{
					return __LIB_1__.func_290(iVar9);
				}
			}
		}
	}
	else if (__LIB_4__.func_22(bParam0) && !__LIB_4__.func_388(bParam0))
	{
		iVar10 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar10 != __LIB_0__.func_160())
		{
			if (__LIB_1__.func_235(iVar10))
			{
				iVar11 = __LIB_6__.func_932(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__.func_21(bParam0, 0))
	{
		iVar12 = __LIB_2__.func_208(bParam0);
		if (iVar12 != __LIB_0__.func_160())
		{
			if (!__LIB_1__.func_229(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[__LIB_2__.func_208(bParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = __LIB_6__.func_932(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__.func_6(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (__LIB_4__.func_14(bParam0))
	{
		iVar14 = __LIB_36__.func_994(bParam0);
		if (iVar14 != __LIB_0__.func_160())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_402[iVar14], false);
			}
			else
			{
				return Global_1911933[iVar14 /*260*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (__LIB_4__.func_22(bParam0))
	{
		return __LIB_1__.func_290(Global_2689235[bParam0 /*453*/].f_318.f_6);
	}
	if (__LIB_36__.func_993(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946250.f_533[Global_2689235[bParam0 /*453*/].f_318.f_6 /*3*/];
}

void func_1236(struct<3> Param0, var uParam1)//Position - 0x962AE
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1237(Param0, iVar0, 0))
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
		if (func_1237(Param0, iVar0, 0))
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
		if (func_1237(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1237(Param0, iVar0, 0))
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
	if (func_1237(Param0, iVar0, 0))
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

int func_1237(struct<3> Param0, int iParam1, float fParam2)//Position - 0x963F2
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
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1237(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1237(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1237(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1252(struct<3> Param0, float fParam1)//Position - 0x99267
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	bool bVar6;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar6 = iVar0;
		if (__LIB_39__.func_169(bVar6))
		{
			Var2 = { __LIB_1__.func_265(bVar6) };
			if (SYSTEM::VDIST(Param0, Var2) < fParam1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bVar6), false))
			{
				fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(bVar6));
				Var3 = { 0f, 1f, 0f };
				__LIB_0__.func_602(&Var3, 0f, 0f, fVar1);
				Var4 = { Var4 + Var3 };
				iVar5++;
			}
		}
		iVar0++;
	}
	Var4 = { Var4 / FtoV(SYSTEM::TO_FLOAT(iVar5)) };
	return Var4;
}

Vector3 func_1253(struct<3> Param0, float fParam1)//Position - 0x99300
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	bool bVar4;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar4 = iVar0;
		if (__LIB_39__.func_169(bVar4))
		{
			Var1 = { __LIB_1__.func_265(bVar4) };
			if (SYSTEM::VDIST(Param0, Var1) < fParam1)
			{
				Var2 = { Var2 + Var1 };
				iVar3++;
			}
		}
		iVar0++;
	}
	Var2 = { Var2 / FtoV(SYSTEM::TO_FLOAT(iVar3)) };
	return Var2;
}

Vector3 func_1254(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9)//Position - 0x9936B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	iVar1 = 999;
	fVar6 = 0f;
	Var4 = { Param0 };
	if (bParam8)
	{
		iVar8 = 0;
	}
	else
	{
		iVar8 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0, &Var3, iVar8, 0f, 0f);
		if (bParam7)
		{
			switch (iParam4)
			{
				case 0:
					if (Var3.f_2 < (Param1.f_2 - fParam3))
					{
						Var3.f_2 = Param1.f_2;
					}
					break;
				case 1:
				case 2:
					if (Var3.f_2 < Param1.f_2 && Var3.f_2 < Param2.f_2)
					{
						Var3.f_2 = ((Param1.f_2 + Param2.f_2) * 0.5f);
					}
					break;
				}
		}
		switch (iParam4)
		{
			case 0:
				bVar5 = __LIB_0__.func_613(Var3, Param1, fParam3, 0, 0);
				break;
			case 1:
				bVar5 = __LIB_6__.func_903(Var3, Param1, Param2, 0, 0);
				break;
			case 2:
				bVar5 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, Param1, Param2, fParam3, false, true);
				break;
		}
		if (bParam6)
		{
			if (bVar5)
			{
				if (__LIB_18__.func_494(&Var3, 0, 0))
				{
					bVar5 = false;
				}
			}
		}
		if (bVar5)
		{
			*uParam9 = 1;
			iVar2 = __LIB_41__.func_233(Var3, fParam5, &fVar7);
			if (iVar2 == 0)
			{
				return Var3;
			}
			else if (iVar2 < iVar1)
			{
				fVar6 = fVar7;
				Var4 = { Var3 };
				iVar1 = iVar2;
			}
			else if (iVar2 == iVar1)
			{
				if (fVar7 > fVar6)
				{
					fVar6 = fVar7;
					Var4 = { Var3 };
				}
			}
		}
		iVar0++;
	}
	return Var4;
}

int func_1262(var uParam0, bool bParam1)//Position - 0x99925
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_6__.func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_6__.func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_1__.func_995(&(Global_2672169[iVar0 /*17*/]));
						__LIB_7__.func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_888(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_7__.func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_1264(struct<3> Param0, float fParam1)//Position - 0x99A56
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (__LIB_39__.func_169(bVar1))
		{
			Var3 = { __LIB_1__.func_265(bVar1) };
			Var3.f_2 = Param0.f_2;
			if (SYSTEM::VDIST(Var3, Param0) <= fParam1)
			{
				Var4 = { Var4 + __LIB_1__.func_265(bVar1) };
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		Var4 = { Var4 / FtoV(SYSTEM::TO_FLOAT(iVar2)) };
	}
	return Var4;
}

struct<18> func_1270(bool bParam0)//Position - 0x9A2D0
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__.func_76(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__.func_607(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_8__.func_803(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_8__.func_803(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_8__.func_803(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_6__.func_511(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__.func_73(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = func_1072(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__.func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__.func_135(), __LIB_25__.func_134(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = func_1072(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__.func_73(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__.func_73(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_7__.func_96(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__.func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__.func_135(), __LIB_25__.func_134(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_1__.func_998(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__.func_73(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_1271(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1271(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_1271(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x9A733
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_1271(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

void func_1273(var uParam0, var uParam1, float fParam2)//Position - 0x9A7E0
{
	var uVar0;
	uVar0 = 11;
	__LIB_1__.func_999(&uVar0);
	func_1324(&uVar0, uParam0, uParam1, fParam2);
}

void func_1275(var uParam0, var uParam1, float fParam2)//Position - 0x9A984
{
	struct<4> Var0[15];
	Var0[0 /*4*/] = { -1690.928f, -1052.085f, 12.5375f };
	Var0[0 /*4*/].f_3 = 46.44f;
	Var0[1 /*4*/] = { -1212.403f, -952.1625f, 1.6625f };
	Var0[1 /*4*/].f_3 = 117.6f;
	Var0[2 /*4*/] = { -1772.089f, -1141.589f, 12.5375f };
	Var0[2 /*4*/].f_3 = 46.44f;
	Var0[3 /*4*/] = { -116.325f, -441.075f, 35.4125f };
	Var0[3 /*4*/].f_3 = -132.84f;
	Var0[4 /*4*/] = { -1157.281f, 927.675f, 197.5375f };
	Var0[4 /*4*/].f_3 = -143.64f;
	Var0[5 /*4*/] = { -82.85f, -880.5125f, 40.0875f };
	Var0[5 /*4*/].f_3 = -66.24f;
	Var0[6 /*4*/] = { 195.7f, -962.1625f, 29.6f };
	Var0[6 /*4*/].f_3 = 115.28f;
	Var0[7 /*4*/] = { -885.4375f, -787.9f, 15.4375f };
	Var0[7 /*4*/].f_3 = 122.34f;
	Var0[8 /*4*/] = { -829.5f, -922.1375f, 16.0125f };
	Var0[8 /*4*/].f_3 = -125.28f;
	Var0[9 /*4*/] = { -1221.905f, -1571.869f, 3.675f };
	Var0[9 /*4*/].f_3 = -106.92f;
	Var0[10 /*4*/] = { -609.65f, -622.3375f, 34.1875f };
	Var0[10 /*4*/].f_3 = -90f;
	Var0[11 /*4*/] = { -894f, -1322.775f, 4.5125f };
	Var0[11 /*4*/].f_3 = -166.32f;
	Var0[12 /*4*/] = { 386.2375f, -1514.243f, 28.7875f };
	Var0[12 /*4*/].f_3 = 119.16f;
	Var0[13 /*4*/] = { -310.9625f, -1627.762f, 31.325f };
	Var0[13 /*4*/].f_3 = -117.72f;
	Var0[14 /*4*/] = { 171.775f, -677.0125f, 42.6375f };
	Var0[14 /*4*/].f_3 = -54.37f;
	func_1324(&Var0, uParam0, uParam1, fParam2);
}

int func_1279()//Position - 0x9AC93
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_3__.func_679();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_6__.func_978(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__.func_93())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_2__.func_4(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__.func_92() && (__LIB_3__.func_680(PLAYER::PLAYER_ID()) || __LIB_2__.func_3(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__.func_697())
				{
					if (func_1291(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__.func_698())
				{
					return 20;
				}
				else if ((((((__LIB_19__.func_760(1) && func_1291(PLAYER::PLAYER_ID())) && (__LIB_0__.func_396(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 157 && __LIB_0__.func_582() != __LIB_1__.func_301()))) && !__LIB_2__.func_91()) && !__LIB_8__.func_768(PLAYER::PLAYER_ID())) && !__LIB_18__.func_447(1)) && !(__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0) == 0 && func_1286(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_40__.func_397())
					{
						return 34;
					}
					else if (__LIB_25__.func_272(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_4__.func_947(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__.func_57(iVar0) && __LIB_19__.func_762(iVar0)) && (__LIB_39__.func_185(iVar0) || __LIB_0__.func_581(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_25__.func_272(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_4__.func_947(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__.func_57(iVar0) && __LIB_19__.func_762(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_1286(bool bParam0)//Position - 0x9B153
{
	bool bVar0;
	struct<3> Var1;
	if (__LIB_13__.func_258(bParam0, 0))
	{
		bVar0 = __LIB_2__.func_191(bParam0);
		Var1 = { func_1199(bVar0) };
		return func_888(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1291(bool bParam0)//Position - 0x9B24E
{
	struct<3> Var0;
	bool bVar1;
	struct<3> Var2;
	bool bVar3;
	struct<3> Var4;
	Var0 = { func_1199(bParam0) };
	if (__LIB_13__.func_258(bParam0, 0))
	{
		bVar1 = __LIB_2__.func_191(bParam0);
		Var2 = { func_1199(bVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		bVar3 = __LIB_6__.func_513(bParam0, 1);
		if (!bVar3 == __LIB_0__.func_160())
		{
			Var4 = { func_1199(bVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1324(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0x9D50F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = (iVar0 + iVar2);
		if (!iVar1 < *uParam0)
		{
			iVar1 = (iVar1 - *uParam0);
		}
		if (func_1095(*(uParam0[iVar1 /*4*/]), (uParam0[iVar1 /*4*/])->f_3, 0, 1, 0, 0, fParam3, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			*uParam1 = { *(uParam0[iVar1 /*4*/]) };
			*uParam2 = (uParam0[iVar1 /*4*/])->f_3;
			return;
		}
		iVar0++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	*uParam1 = { *(uParam0[iVar0 /*4*/]) };
	*uParam2 = (uParam0[iVar0 /*4*/])->f_3;
}

void func_1329()//Position - 0x9E218
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_111.f_16), false)) && (!__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_111.f_16), false)))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_97))
		{
			iLocal_97 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_111.f_16));
			HUD::SET_BLIP_SPRITE(iLocal_97, func_1332());
			__LIB_6__.func_919(&iLocal_97, func_258(1));
			if (Local_111.f_3 <= 1)
			{
				HUD::SET_BLIP_FLASHES(iLocal_97, true);
				HUD::SET_BLIP_FLASH_TIMER(iLocal_97, 7000);
			}
			func_1334(0);
			HUD::SET_BLIP_PRIORITY(iLocal_97, 12);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_97, "AMPP_BLIP" /* GXT: Hold the Wheel Vehicle */);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_97))
		{
			if (Local_111.f_3 >= 2)
			{
				if (Local_111.f_21 == __LIB_0__.func_160())
				{
					__LIB_6__.func_919(&iLocal_97, 18);
				}
				else
				{
					__LIB_6__.func_919(&iLocal_97, func_258(0));
				}
			}
			else
			{
				__LIB_6__.func_919(&iLocal_97, 29);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_97))
	{
		HUD::REMOVE_BLIP(&iLocal_97);
	}
}

int func_1332()//Position - 0x9E59F
{
	switch (Local_111.f_15)
	{
		case joaat("caddy"):
		case joaat("tractor2"):
			return 225;
		case joaat("bmx"):
		case joaat("tribike"):
		case joaat("sanchez"):
		case joaat("faggio2"):
		case joaat("lectro"):
			return 348;
		default:
	}
	return 348;
}

void func_1333(bool bParam0)//Position - 0x9E5E8
{
	if (BitTest(uLocal_96, bParam0))
	{
		MISC::CLEAR_BIT(&uLocal_96, bParam0);
	}
}

void func_1334(bool bParam0)//Position - 0x9E600
{
	int iVar0;
	iVar0 = (func_7() - __LIB_1__.func_295(&(Local_111.f_5), 0, 0));
	if (iVar0 > 30000)
	{
		if (BitTest(uLocal_91, 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("PTP_STOP");
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			if (!bParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Parcel_Vehicle_Lost", "GTAO_FM_Events_Soundset", false);
			}
			MISC::CLEAR_BIT(&uLocal_91, 0);
		}
	}
}

int func_1335(bool bParam0)//Position - 0x9E655
{
	if (!bParam0 && (__LIB_2__.func_197(PLAYER::PLAYER_ID()) || __LIB_6__.func_991(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_111.f_16), false))
			{
				return __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_ENT(Local_111.f_16), 1) <= 10f;
			}
		}
	}
	return 0;
}

bool func_1336(int iParam0)//Position - 0x9E6C5
{
	return (BitTest(Local_112[iParam0 /*4*/].f_1, 2) || BitTest(Local_112[iParam0 /*4*/].f_1, 3));
}

void func_1337()//Position - 0x9E6E7
{
	int iVar0;
	iVar0 = (func_7() - __LIB_1__.func_295(&(Local_111.f_5), 0, 0));
	if (iVar0 > 30000)
	{
		if (!BitTest(uLocal_91, 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("PTP_START");
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			MISC::SET_BIT(&uLocal_91, 0);
		}
	}
}

void func_1338()//Position - 0x9E729
{
	if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 2);
		if (iLocal_1464 == 0)
		{
			iLocal_1464 = NETWORK::GET_NETWORK_TIME();
		}
		if (!__LIB_0__.func_738(PLAYER::PLAYER_ID()))
		{
			__LIB_1__.func_474(138);
		}
		func_1339(1);
	}
}

void func_1339(bool bParam0)//Position - 0x9E775
{
	var uVar0;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!__LIB_0__.func_431(PLAYER::PLAYER_ID()) && !__LIB_2__.func_197(PLAYER::PLAYER_ID())) && !__LIB_6__.func_991(PLAYER::PLAYER_ID())) && !__LIB_0__.func_665(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__.func_674())
				{
					__LIB_18__.func_738(2, 0, 1);
					__LIB_1__.func_284();
				}
				if (__LIB_6__.func_989(__LIB_1__.func_487(__LIB_1__.func_182(PLAYER::PLAYER_ID()))))
				{
					uVar0 = __LIB_1__.func_556(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, __LIB_1__.func_487(__LIB_1__.func_182(PLAYER::PLAYER_ID())));
					__LIB_1__.func_284();
				}
				if (__LIB_1__.func_156())
				{
					__LIB_1__.func_284();
				}
				if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (__LIB_1__.func_458(PLAYER::PLAYER_ID()))
					{
						__LIB_1__.func_578();
					}
					__LIB_2__.func_8(__LIB_1__.func_457(__LIB_1__.func_182(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		__LIB_6__.func_988();
	}
}

void func_1349()//Position - 0x9EA3E
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	if (Local_111.f_15 == joaat("caddy"))
	{
		Var0 = { -1113.7466f, 251.7301f, 96.32367f };
		Var1 = { -1379.408f, 200.22028f, 51.664062f };
		fVar2 = 60f;
		Var3 = { -906.9693f, -85.49005f, 69.11156f };
		Var4 = { -1122.5594f, 267.06973f, 35.508194f };
		fVar5 = 75f;
		Var6 = { -879.0952f, -102.1312f, 69.180756f };
		Var7 = { -1043.2687f, -168.02109f, 7.3638f };
		fVar8 = 60.5f;
		Var9 = { -1046.6127f, -168.73532f, 68.86606f };
		Var10 = { -1306.7522f, -54.28f, 17.777527f };
		fVar11 = 60f;
		Var12 = { -1447.6002f, 160.85303f, 88.64613f };
		Var13 = { -1414.0798f, -73.488495f, 22.508041f };
		fVar14 = 52f;
		Var15 = { -1421.7936f, 147.40688f, 85.78793f };
		Var16 = { -1388.4874f, 233.18999f, 28.659195f };
		fVar17 = 60f;
		func_1350(Var0, Var1, fVar2, 1);
		func_1350(Var3, Var4, fVar5, 1);
		func_1350(Var6, Var7, fVar8, 1);
		func_1350(Var9, Var10, fVar11, 1);
		func_1350(Var12, Var13, fVar14, 1);
		func_1350(Var15, Var16, fVar17, 1);
	}
}

int func_1350(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x9EBC0
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_0__.func_617() < 10)
	{
		iVar0 = __LIB_1__.func_467();
		func_1351(Param0, Param1, fParam2, iVar0, iParam3);
	}
	return iVar0;
}

void func_1351(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, var uParam4)//Position - 0x9EBF1
{
	func_1352(Param0, Param1, uParam2, 2, iParam3, uParam4);
}

void func_1352(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x9EC0C
{
	struct<12> Var0;
	if (__LIB_26__.func_806(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			__LIB_1__.func_465(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (__LIB_31__.func_886(Var0))
		{
			Global_2667225.f_45.f_64 = __LIB_3__.func_814(PLAYER::PLAYER_ID());
			__LIB_1__.func_462(Var0, iParam4);
		}
	}
}

void func_1362(bool bParam0)//Position - 0x9F0DC
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	if (!HUD::IS_RADAR_HIDDEN())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
					{
						if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_111.f_15))
						{
							sVar0 = "AMPP_BIG_HOLD" /* GXT: Stay in the vehicle until time runs out */;
						}
						else
						{
							sVar0 = "AMPP_BIG_HOLD2" /* GXT: Stay on the vehicle until time runs out */;
						}
						if (!BitTest(uLocal_91, 1))
						{
							iVar1 = __LIB_0__.func_969();
							iVar2 = __LIB_0__.func_969();
						}
						else
						{
							iVar1 = 1;
							iVar2 = 2;
						}
						__LIB_42__.func_822(83, "AMPP_COLLECT" /* GXT: VEHICLE COLLECTED */, sVar0, iVar1, -1, iVar2, 1, 0);
						MISC::SET_BIT(&uLocal_91, 1);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 1:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						if (BitTest(Local_111.f_1, 1))
						{
							__LIB_42__.func_822(64, "AMCH_WIN" /* GXT: WINNER */, "AMPP_WIN_SD" /* GXT: You took the Hold the Wheel vehicle during sudden death */, 1, 15000, 2, 1, 0);
						}
						else
						{
							__LIB_42__.func_822(64, "AMCH_WIN" /* GXT: WINNER */, "AMPP_WIN" /* GXT: You had the Hold the Wheel vehicle when time ran out */, 1, 15000, 2, 1, 0);
						}
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 2:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && Local_111.f_21 != __LIB_0__.func_160())
					{
						if (BitTest(Local_111.f_1, 1))
						{
							func_1375(66, "AMPP_LOSE_SD" /* GXT: <C>~a~</C>~s~ took the Hold the Wheel vehicle during sudden death */, PLAYER::GET_PLAYER_NAME(Local_111.f_21), 1, 15000, "AMPP_LOSER" /* GXT: EVENT OVER */, 2);
						}
						else
						{
							sVar3 = "AMPP_LOSE" /* GXT: <C>~a~</C>~s~ had the Hold the Wheel vehicle when time ran out */;
							sVar4 = PLAYER::GET_PLAYER_NAME(Local_111.f_21);
							if (__LIB_13__.func_258(Local_111.f_21, 1))
							{
								sVar4 = __LIB_38__.func_3(Local_111.f_21);
							}
							func_1375(66, sVar3, sVar4, 1, 15000, "AMPP_LOSER" /* GXT: EVENT OVER */, 2);
						}
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 3:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190())
					{
						__LIB_1__.func_278("AMPP_UNVLB" /* GXT: Hold the Wheel is no longer available. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 4:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_42__.func_822(66, "AMPP_LOSER" /* GXT: EVENT OVER */, "AMPP_DESTR" /* GXT: The vehicle was destroyed */, 1, 15000, 2, 1, 0);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 5:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_111.f_15))
						{
							sVar5 = "AMPP_SDGET" /* GXT: Get in the vehicle to win the event */;
						}
						else
						{
							sVar5 = "AMPP_SDGET2" /* GXT: Get on the vehicle to win the event */;
						}
						__LIB_42__.func_822(82, "AMPP_SDEATH" /* GXT: SUDDEN DEATH */, sVar5, 1, -1, 2, 1, 0);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 6:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_111.f_15))
						{
							__LIB_1__.func_278("AMPP_NEAR" /* GXT: Enter the vehicle to start Hold the Wheel. */, 30000);
						}
						else
						{
							__LIB_1__.func_278("AMPP_NEAR2" /* GXT: Get on the vehicle to start Hold the Wheel. */, 30000);
						}
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 7:
				if (!BitTest(uLocal_96, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190()) && Local_111.f_21 != __LIB_0__.func_160())
					{
						__LIB_25__.func_939("AMPP_OWON" /* GXT: ~a~ won Hold the Wheel. */, Local_111.f_21, 1, 0, 0, 0, 1, 0);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 8:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						if (Local_111.f_21 != PLAYER::PLAYER_ID())
						{
							sVar6 = "AMPP_GET" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~has the vehicle. Take it from them. */;
							if (__LIB_3__.func_999(PLAYER::PLAYER_ID(), Local_111.f_21))
							{
								sVar6 = "AMPP_GBHELP" /* GXT: ~HUD_COLOUR_WHITE~<C>~a~</C> ~s~has the vehicle. Help them hold on to it. */;
							}
							func_1375(63, sVar6, PLAYER::GET_PLAYER_NAME(Local_111.f_21), __LIB_0__.func_969(), -1, "AMPP_TITLE" /* GXT: HOLD THE WHEEL */, __LIB_0__.func_969());
						}
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 9:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190())
					{
						__LIB_18__.func_437("AMPP_DESTP" /* GXT: The Hold the Wheel vehicle was destroyed. */, 0);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 10:
				if (!BitTest(uLocal_96, bParam0))
				{
					if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_111.f_16)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_111.f_16)) > 0)
					{
						__LIB_1__.func_278("AMPP_SHARE" /* GXT: Get in with other players to share the reward. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 11:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_42__.func_822(66, "CPC_OVER" /* GXT: EVENT OVER */, "AMPP_NOWIN" /* GXT: No player had the vehicle when time ran out */, 1, 15000, 2, 1, 0);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 12:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190())
					{
						__LIB_18__.func_437("AMPP_NOWIN2" /* GXT: No player had the Hold the Wheel vehicle when time ran out. */, 0);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			case 13:
				if (!BitTest(uLocal_96, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_190())
					{
						__LIB_2__.func_238("AMPP_START" /* GXT: A Hold the Wheel ~HUD_COLOUR_NET_PLAYER2~~a~~s~ vehicle is available. Hold the vehicle when the time runs out to earn cash and RP. */, func_1364(), 30000);
						__LIB_2__.func_239(0);
						Local_1458.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_96, bParam0);
					}
				}
				break;
			}
	}
}

char* func_1364()//Position - 0x9F5AB
{
	switch (Local_111.f_15)
	{
		case joaat("caddy"):
		case joaat("tractor2"):
			return "ABLIP_CAR" /* GXT: ~BLIP_GANG_VEHICLE~ */;
		case joaat("bmx"):
		case joaat("tribike"):
		case joaat("sanchez"):
		case joaat("faggio2"):
		case joaat("lectro"):
			return "ABLIP_BIKE" /* GXT: ~BLIP_GANG_BIKE~ */;
		default:
	}
	return "ABLIP_BIKE" /* GXT: ~BLIP_GANG_BIKE~ */;
}

int func_1375(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x9F9C5
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__.func_975(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return __LIB_42__.func_654(&Var0);
}

void func_1376(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9FA37
{
	bool bVar0;
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0) && __LIB_0__.func_286(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		__LIB_1__.func_103(__LIB_1__.func_475(iParam0), 1);
	}
	else
	{
		__LIB_7__.func_99(iParam0, -1);
		if (__LIB_1__.func_417(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			__LIB_1__.func_474(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (__LIB_1__.func_417(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 5);
		}
		if (((__LIB_0__.func_674() && !__LIB_1__.func_459()) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
		MISC::SET_BIT(&(Global_1836844.f_1), 20);
		if (__LIB_1__.func_473(iParam0))
		{
			__LIB_1__.func_472();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			__LIB_7__.func_230(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (__LIB_2__.func_302(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836844.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				__LIB_6__.func_990(1);
				if (__LIB_2__.func_266(0))
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			__LIB_6__.func_960(1);
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (bParam5)
		{
			__LIB_1__.func_469();
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (!bParam6)
		{
			if (__LIB_18__.func_266(iParam0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 21);
			}
		}
	}
	Global_2787396 = 1;
}

void func_1390()//Position - 0x9FEF0
{
	func_1391(&(Local_113.f_534), &Local_113, 27, &(Local_113.f_1), &(Local_113.f_117), -1, 0, 0);
}

void func_1391(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x9FF14
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<2> Var23;
	if (func_1503(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (func_1501() || iParam2 == 28)
	{
		if (__LIB_39__.func_186(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_32__.func_422(), sParam7))
		{
			__LIB_1__.func_512(1);
			if ((!__LIB_1__.func_511() && !__LIB_1__.func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__.func_509())
				{
					__LIB_6__.func_997();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__.func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__.func_507(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__.func_978(bVar4, 0))
									{
										if (__LIB_21__.func_83(bVar4) || __LIB_9__.func_283(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__.func_581(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_26__.func_808(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__.func_259(PLAYER::PLAYER_ID(), 0) && __LIB_0__.func_396(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_13__.func_808())
							{
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__.func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__.func_768(bVar4) && func_1440(bVar4, iParam2, bVar3)) && __LIB_1__.func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_25__.func_941(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__.func_267(bVar4) };
								iVar6 = __LIB_35__.func_811(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_13__.func_808())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__.func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__.func_500(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_21__.func_114(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_13__.func_258(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__.func_499(iParam5))
								{
									__LIB_33__.func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_33__.func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__.func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__.func_160();
							}
							if (__LIB_19__.func_768(bVar4))
							{
								if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_25__.func_941(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__.func_267(bVar4) };
									iVar6 = __LIB_35__.func_811(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_21__.func_114(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_13__.func_258(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_36__.func_233(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__.func_767(uParam3, iParam1, iParam2);
						}
						__LIB_0__.func_579(&(uParam3->f_21));
						__LIB_1__.func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__.func_491(uParam3, iParam1);
							__LIB_1__.func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__.func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__.func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__.func_992(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__.func_492();
			__LIB_1__.func_508(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_1440(int iParam0, int iParam1, bool bParam2)//Position - 0xA1655
{
	if (iParam1 == 27)
	{
		if ((__LIB_1__.func_417(iParam0) || __LIB_9__.func_282(iParam0)) || __LIB_2__.func_197(iParam0))
		{
			return 0;
		}
	}
	if (!__LIB_1__.func_353(iParam0))
	{
		return 0;
	}
	if (!__LIB_21__.func_83(iParam0) && !__LIB_9__.func_283(iParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

int func_1501()//Position - 0xA328D
{
	if (__LIB_32__.func_422())
	{
		return 1;
	}
	if (__LIB_2__.func_197(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_516())
	{
		return 1;
	}
	if (__LIB_0__.func_738(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_1__.func_182(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			case 140:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 129:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 174:
				if (!__LIB_1__.func_338(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

int func_1503(int iParam0)//Position - 0xA337D
{
	if (iParam0 == 28)
	{
		if ((__LIB_0__.func_738(PLAYER::PLAYER_ID()) && !__LIB_0__.func_431(PLAYER::PLAYER_ID())) && !__LIB_2__.func_297(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0) && __LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_1504(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_1504(int iParam0)//Position - 0xA33EC
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_0__.func_738(iParam0) && !__LIB_1__.func_417(iParam0)) && !BitTest(Global_1892703[iParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_0__.func_431(iParam0);
	uVar3 = __LIB_0__.func_674();
	uVar4 = __LIB_25__.func_938();
	if ((bVar1 && (__LIB_2__.func_193(iParam0) || __LIB_0__.func_740(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !__LIB_0__.func_286(iParam0)) && !__LIB_9__.func_280(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

int func_1512(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA35C7
{
	if (__LIB_1__.func_298(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (__LIB_7__.func_427(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_41())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_1__.func_486(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (__LIB_0__.func_698())
	{
		return 0;
	}
	if (bParam0)
	{
		if (__LIB_0__.func_431(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_1504(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (__LIB_1__.func_483(PLAYER::PLAYER_ID()) != __LIB_0__.func_160() && __LIB_1__.func_483(PLAYER::PLAYER_ID()) == __LIB_2__.func_191(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_6__.func_946(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (__LIB_1__.func_482(__LIB_1__.func_437()) && !__LIB_1__.func_458(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_497())
	{
		return 0;
	}
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_4__.func_715())
	{
		return 0;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 12) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 14)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!__LIB_0__.func_93() && !Global_2787784)
		{
			return 0;
		}
	}
	if (__LIB_1__.func_296(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_527())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (__LIB_5__.func_694(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_810())
	{
		return 0;
	}
	if (__LIB_2__.func_246(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (__LIB_0__.func_618())
	{
		return 0;
	}
	if (__LIB_1__.func_288())
	{
		return 0;
	}
	if (Global_2814118)
	{
		return 0;
	}
	if (Global_1963980)
	{
		return 0;
	}
	if (__LIB_1__.func_279(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_2__.func_193(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__.func_385(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_1527()//Position - 0xA3C4C
{
	__LIB_35__.func_555(138, func_106(), 0, 0);
	return 1;
}

void func_1537()//Position - 0xA47EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (func_1512(0, 1, 1))
				{
					func_1540(iVar0);
				}
				break;
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1529596656:
						if ((func_1336(NETWORK::PARTICIPANT_ID_TO_INT()) && !__LIB_2__.func_197(PLAYER::PLAYER_ID())) && func_1512(0, 1, 1))
						{
							func_1538(iVar0);
						}
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_1538(int iParam0)//Position - 0xA4882
{
	struct<11> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 14))
	{
		iVar1 = Var0.f_1;
		if (__LIB_1__.func_264(iVar1, 0, 0))
		{
			switch (Var0.f_2)
			{
				case 179702719:
					if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 0, 1))
					{
						if (Var0.f_10 != __LIB_0__.func_160())
						{
							if (Var0.f_10 == PLAYER::PLAYER_ID())
							{
								if (Var0.f_3 == 1)
								{
									__LIB_18__.func_437("AMPP_ME" /* GXT: You have the Hold the Wheel Vehicle. */, 0);
								}
							}
							else if (Var0.f_3 == 1)
							{
								func_1539("AMPP_OTHER" /* GXT: ~a~ has the Hold the Wheel Vehicle. */, Var0.f_10, 0, 0, 0, 1, 0);
							}
						}
					}
					break;
				case 1639808887:
					if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 0, 1))
					{
						if (Var0.f_10 != __LIB_0__.func_160())
						{
							if (Var0.f_10 == PLAYER::PLAYER_ID())
							{
								__LIB_18__.func_437("AMPP_MEL" /* GXT: You lost the Hold the Wheel Vehicle. */, 0);
							}
							else
							{
								func_1539("AMPP_OTHERL" /* GXT: ~a~ lost the Hold the Wheel Vehicle. */, Var0.f_10, 0, 0, 0, 1, 0);
							}
						}
					}
					break;
				}
			}
	}
}

int func_1539(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA4958
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_26__.func_802(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_41__.func_245(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_41__.func_245(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__.func_957(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__.func_267(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar3 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { __LIB_2__.func_40(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		__LIB_18__.func_263(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_1540(int iParam0)//Position - 0xA4B18
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
						{
							iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
									{
										iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
										if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
										{
											iVar4 = iVar3;
											if (iVar2 == Local_111.f_21)
											{
												if (Var0.f_5)
												{
													Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
													if (!Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > func_1542())
													{
														iVar5 = func_1541();
														__LIB_41__.func_868(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar5, 1, -1, 0, 0, 0);
													}
												}
											}
											if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 2))
											{
												if (func_1336(iVar4))
												{
													func_1338();
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_111.f_16))
							{
								if (Var0.f_0 == NETWORK::NET_TO_ENT(Local_111.f_16))
								{
									if (!BitTest(Local_112[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 2))
									{
										func_1338();
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

var func_1541()//Position - 0xA4C5F
{
	return Global_262145.f_11484 /* Tunable: PASS_THE_PARCEL_RP_REWARD_KILL_CARRIER */;
}

int func_1542()//Position - 0xA4C6E
{
	return Global_262145.f_11485 /* Tunable: PASS_THE_PARCEL_RP_REWARD_KILL_CARRIER_CAP */;
}

void func_1543()//Position - 0xA4C7D
{
	if (BitTest(Global_1836844.f_1, 6))
	{
		__LIB_7__.func_2();
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 6);
	}
	if (!BitTest(Global_1836844.f_1, 7))
	{
		if (BitTest(Global_1836844.f_1, 4) || BitTest(Global_1836844.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__.func_159()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 7);
				__LIB_1__.func_278("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				__LIB_2__.func_239(1);
			}
		}
		else if (BitTest(Global_1836844.f_1, 17))
		{
			if (__LIB_0__.func_674() && !__LIB_1__.func_459())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
				MISC::SET_BIT(&(Global_1836844.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836844.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_7__.func_105())
			{
				__LIB_1__.func_278("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) != 200)
				{
					__LIB_2__.func_239(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (__LIB_0__.func_740(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (BitTest(Global_1836844.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__.func_159()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 9);
			__LIB_2__.func_305(0);
			__LIB_1__.func_278("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			__LIB_2__.func_239(1);
		}
	}
	if (__LIB_0__.func_738(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 18))
		{
			if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836844.f_1, 20)) && !BitTest(Global_1836844.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 18);
			}
		}
		else if (BitTest(Global_1836844.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__.func_159()) && __LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_1__.func_531())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				__LIB_1__.func_278("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				__LIB_2__.func_239(1);
			}
		}
	}
	if (((((__LIB_0__.func_738(PLAYER::PLAYER_ID()) && !__LIB_1__.func_417(PLAYER::PLAYER_ID())) && __LIB_1__.func_182(PLAYER::PLAYER_ID()) != 146) && !__LIB_2__.func_197(PLAYER::PLAYER_ID())) && !__LIB_6__.func_991(PLAYER::PLAYER_ID())) && !__LIB_5__.func_804())
	{
		if (__LIB_2__.func_302(__LIB_1__.func_182(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (__LIB_2__.func_193(PLAYER::PLAYER_ID()) || __LIB_6__.func_959())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (__LIB_7__.func_271(__LIB_1__.func_182(PLAYER::PLAYER_ID())))
				{
					if (__LIB_2__.func_266(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					if (!Global_2653189)
					{
						__LIB_6__.func_990(1);
						MISC::SET_BIT(&(Global_1836844.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 10);
			}
		}
		if (__LIB_0__.func_740(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836844.f_1, 11))
			{
				if (!Global_100493.f_8)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 12);
					__LIB_6__.func_960(1);
				}
				if (!__LIB_1__.func_305())
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 13);
					__LIB_1__.func_469();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
					if (__LIB_2__.func_266(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					__LIB_6__.func_990(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 11);
			}
		}
		else
		{
			__LIB_7__.func_209(0);
		}
	}
	else
	{
		__LIB_7__.func_209(1);
	}
	__LIB_18__.func_459();
	if (__LIB_18__.func_266(__LIB_1__.func_182(PLAYER::PLAYER_ID())) && !BitTest(Global_1836844.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 21);
	}
	if (((__LIB_0__.func_674() && !__LIB_1__.func_459()) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
	}
}

void func_1577()//Position - 0xA59B7
{
	func_1334(1);
	func_358();
	__LIB_18__.func_455();
	if (HUD::DOES_BLIP_EXIST(iLocal_97))
	{
		HUD::REMOVE_BLIP(&iLocal_97);
	}
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_269();
	}
	__LIB_1__.func_431();
	__LIB_7__.func_177();
	func_1581(138, 0, Local_111.f_3 == 5);
	if (__LIB_6__.func_949())
	{
		Local_1458.f_5 = 5;
	}
	else if (BitTest(Local_111.f_1, 3))
	{
		Local_1458.f_5 = 6;
	}
	else if (Local_1458.f_5 != 1)
	{
		Local_1458.f_5 = 2;
	}
	Local_1458.f_0 = Local_111.f_23;
	Local_1458.f_1 = Local_111.f_24;
	Local_1458.f_4 = iLocal_1460;
	Local_1458.f_3 = iLocal_1463;
	Local_1458.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_1458.f_9);
	if (!Global_262145.f_11877 /* Tunable: PASS_THE_PARCEL_DISABLE_SHARE_CASH */)
	{
		if (Local_1458.f_6 > 0)
		{
			if (Local_1458.f_5 == 1)
			{
				__LIB_2__.func_228();
			}
		}
	}
	__LIB_7__.func_107(Local_1458, Local_111.f_25, -1, -1, -1, -1, -1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1581(int iParam0, bool bParam1, bool bParam2)//Position - 0xA5D46
{
	var uVar0;
	int iVar1;
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 13);
		}
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836844.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 21);
	}
	__LIB_2__.func_230();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = __LIB_2__.func_306(__LIB_1__.func_182(PLAYER::PLAYER_ID()));
		__LIB_1__.func_103(__LIB_1__.func_475(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && __LIB_0__.func_846(PLAYER::PLAYER_ID()) >= 12)
		{
			__LIB_2__.func_281(2549, -1);
			iVar1 = __LIB_1__.func_556(2549, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836870, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836870, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836870, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836870, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836870, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836870, 5);
			}
		}
		__LIB_1__.func_547();
		__LIB_1__.func_546();
		__LIB_1__.func_545();
		if ((!__LIB_0__.func_286(PLAYER::PLAYER_ID()) && !__LIB_9__.func_280(PLAYER::PLAYER_ID())) && !__LIB_1__.func_224())
		{
			__LIB_38__.func_236();
		}
		__LIB_1__.func_540();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			__LIB_7__.func_2();
		}
		__LIB_1__.func_539();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		__LIB_1__.func_433();
		__LIB_1__.func_430();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25)) && !__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_6__.func_990(0);
			__LIB_6__.func_960(0);
			if (!bParam1)
			{
				__LIB_1__.func_538();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (__LIB_2__.func_300(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__.func_221(26, -1);
		}
	}
	if (!__LIB_7__.func_3())
	{
		Global_2787396 = 1;
	}
}

int func_1597(struct<21> Param0)//Position - 0xA631D
{
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_1__.func_552(13));
	__LIB_1__.func_569(0, -1, 0);
	__LIB_18__.func_313(138);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_111, 26, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_112, 129, 0);
	if (!__LIB_0__.func_672())
	{
		func_1577();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_111.f_23), &(Local_111.f_24));
	}
	Local_1458.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

