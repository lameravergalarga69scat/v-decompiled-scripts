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
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	struct<53> Local_108 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<535> Local_109 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_110 = -1;
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
	var uLocal_131 = 0;
	var uLocal_132 = -1082130432;
	var uLocal_133 = 3;
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
	var uLocal_149 = -1;
	var uLocal_150 = 0;
	var uLocal_151 = -1;
	var uLocal_152 = -1;
	var uLocal_153 = 0;
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
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = -1082130432;
	var uLocal_175 = 3;
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
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = -1;
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
	var uLocal_216 = -1082130432;
	var uLocal_217 = 3;
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
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
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
	var uLocal_258 = -1082130432;
	var uLocal_259 = 3;
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
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = -1;
	var uLocal_278 = -1;
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
	var uLocal_300 = -1082130432;
	var uLocal_301 = 3;
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
	var uLocal_317 = -1;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = -1;
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
	var uLocal_342 = -1082130432;
	var uLocal_343 = 3;
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
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = -1;
	var uLocal_362 = -1;
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
	var uLocal_384 = -1082130432;
	var uLocal_385 = 3;
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
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = -1;
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
	var uLocal_426 = -1082130432;
	var uLocal_427 = 3;
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
	var uLocal_443 = -1;
	var uLocal_444 = 0;
	var uLocal_445 = -1;
	var uLocal_446 = -1;
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
	var uLocal_468 = -1082130432;
	var uLocal_469 = 3;
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
	var uLocal_485 = -1;
	var uLocal_486 = 0;
	var uLocal_487 = -1;
	var uLocal_488 = -1;
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
	var uLocal_510 = -1082130432;
	var uLocal_511 = 3;
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
	var uLocal_527 = -1;
	var uLocal_528 = 0;
	var uLocal_529 = -1;
	var uLocal_530 = -1;
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
	var uLocal_552 = -1082130432;
	var uLocal_553 = 3;
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
	var uLocal_569 = -1;
	var uLocal_570 = 0;
	var uLocal_571 = -1;
	var uLocal_572 = -1;
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
	var uLocal_594 = -1082130432;
	var uLocal_595 = 3;
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
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = -1;
	var uLocal_614 = -1;
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
	var uLocal_636 = -1082130432;
	var uLocal_637 = 3;
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
	var uLocal_653 = -1;
	var uLocal_654 = 0;
	var uLocal_655 = -1;
	var uLocal_656 = -1;
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
	var uLocal_678 = -1082130432;
	var uLocal_679 = 3;
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
	var uLocal_695 = -1;
	var uLocal_696 = 0;
	var uLocal_697 = -1;
	var uLocal_698 = -1;
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
	var uLocal_720 = -1082130432;
	var uLocal_721 = 3;
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
	var uLocal_737 = -1;
	var uLocal_738 = 0;
	var uLocal_739 = -1;
	var uLocal_740 = -1;
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
	var uLocal_762 = -1082130432;
	var uLocal_763 = 3;
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
	var uLocal_779 = -1;
	var uLocal_780 = 0;
	var uLocal_781 = -1;
	var uLocal_782 = -1;
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
	var uLocal_804 = -1082130432;
	var uLocal_805 = 3;
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
	var uLocal_821 = -1;
	var uLocal_822 = 0;
	var uLocal_823 = -1;
	var uLocal_824 = -1;
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
	var uLocal_846 = -1082130432;
	var uLocal_847 = 3;
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
	var uLocal_863 = -1;
	var uLocal_864 = 0;
	var uLocal_865 = -1;
	var uLocal_866 = -1;
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
	var uLocal_888 = -1082130432;
	var uLocal_889 = 3;
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
	var uLocal_905 = -1;
	var uLocal_906 = 0;
	var uLocal_907 = -1;
	var uLocal_908 = -1;
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
	var uLocal_930 = -1082130432;
	var uLocal_931 = 3;
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
	var uLocal_947 = -1;
	var uLocal_948 = 0;
	var uLocal_949 = -1;
	var uLocal_950 = -1;
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
	var uLocal_972 = -1082130432;
	var uLocal_973 = 3;
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
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = -1;
	var uLocal_990 = 0;
	var uLocal_991 = -1;
	var uLocal_992 = -1;
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
	var uLocal_1014 = -1082130432;
	var uLocal_1015 = 3;
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
	var uLocal_1031 = -1;
	var uLocal_1032 = 0;
	var uLocal_1033 = -1;
	var uLocal_1034 = -1;
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
	var uLocal_1056 = -1082130432;
	var uLocal_1057 = 3;
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
	var uLocal_1073 = -1;
	var uLocal_1074 = 0;
	var uLocal_1075 = -1;
	var uLocal_1076 = -1;
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
	var uLocal_1098 = -1082130432;
	var uLocal_1099 = 3;
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
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = -1;
	var uLocal_1118 = -1;
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
	var uLocal_1140 = -1082130432;
	var uLocal_1141 = 3;
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
	var uLocal_1157 = -1;
	var uLocal_1158 = 0;
	var uLocal_1159 = -1;
	var uLocal_1160 = -1;
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
	var uLocal_1182 = -1082130432;
	var uLocal_1183 = 3;
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
	var uLocal_1199 = -1;
	var uLocal_1200 = 0;
	var uLocal_1201 = -1;
	var uLocal_1202 = -1;
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
	var uLocal_1224 = -1082130432;
	var uLocal_1225 = 3;
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
	var uLocal_1241 = -1;
	var uLocal_1242 = 0;
	var uLocal_1243 = -1;
	var uLocal_1244 = -1;
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
	var uLocal_1266 = -1082130432;
	var uLocal_1267 = 3;
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
	var uLocal_1283 = -1;
	var uLocal_1284 = 0;
	var uLocal_1285 = -1;
	var uLocal_1286 = -1;
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
	var uLocal_1308 = -1082130432;
	var uLocal_1309 = 3;
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
	var uLocal_1325 = -1;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1;
	var uLocal_1328 = -1;
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
	var uLocal_1350 = -1082130432;
	var uLocal_1351 = 3;
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
	var uLocal_1367 = -1;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1;
	var uLocal_1370 = -1;
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
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = -1082130432;
	var uLocal_1393 = 3;
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
	var uLocal_1409 = -1;
	var uLocal_1410 = 0;
	var uLocal_1411 = -1;
	var uLocal_1412 = -1;
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
	var uLocal_1434 = -1082130432;
	var uLocal_1435 = 3;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
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
	var uLocal_1451 = -1;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1;
	struct<7> Local_1454[32];
	struct<12> Local_1455 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1456 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_106 = -1;
	bLocal_107 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_716(ScriptParam_1456))
		{
			func_671();
		}
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_6__::func_949() || func_664())
		{
			func_671();
		}
		func_636();
		switch (func_635(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_634() == 1)
				{
					if (func_633())
					{
						func_632(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_634() == 1)
				{
					func_96();
				}
				else if (func_634() == 3)
				{
					func_632(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_671();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_634())
			{
				case 0:
					if (func_95())
					{
						func_94(1);
					}
					break;
				case 1:
					if (Local_108.f_37 == 5)
					{
						func_94(2);
					}
					else
					{
						func_3();
					}
					break;
				case 2:
					if (__LIB_2__::func_47(&uLocal_91, 1000, 0))
					{
						func_94(3);
					}
					break;
				case 3:
					func_671();
					break;
				}
		}
	}
}

void func_3()//Position - 0x238
{
	if (func_17(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_108.f_1, 0))
		{
			MISC::SET_BIT(&(Local_108.f_1), 0);
			Local_108.f_2 = NETWORK::GET_NETWORK_TIME();
		}
	}
	switch (Local_108.f_37)
	{
		case 0:
			func_16(1);
			break;
		case 1:
			if (__LIB_2__::func_47(&(Local_108.f_43), Global_262145.f_11675 /* Tunable: CRIMINAL_DAMAGE_EVENT_START_COUNTDOWN_TIME */, 0) || BitTest(Local_108.f_1, 0))
			{
				func_16(2);
			}
			break;
		case 2:
			Local_108.f_38 = NETWORK::GET_NETWORK_TIME();
			func_16(3);
			break;
		case 3:
			if (__LIB_2__::func_47(&(Local_108.f_39), func_15(), 0) || BitTest(Local_108.f_1, 0))
			{
				Local_108.f_2 = NETWORK::GET_NETWORK_TIME();
				func_16(4);
			}
			func_11();
			func_7(&bLocal_107, &iLocal_106);
			break;
		case 4:
			if ((__LIB_2__::func_47(&(Local_108.f_41), 20000, 0) || Local_108.f_4[0] < 0) || func_4())
			{
				func_16(5);
			}
			break;
		case 5:
			break;
	}
}

int func_4()//Position - 0x33E
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
			if (!__LIB_2__::func_197(bVar2))
			{
				if (!BitTest(Local_1454[iVar1 /*7*/].f_1, 1) || Local_1454[iVar1 /*7*/].f_2 != 5)
				{
					return 0;
				}
				else if (BitTest(Local_1454[iVar1 /*7*/].f_1, 0))
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

void func_7(bool bParam0, int iParam1)//Position - 0x3F9
{
	struct<14> Var0;
	int iVar1;
	if (*bParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*bParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -951694168;
			Var0.f_10 = iVar1;
			__LIB_1__::func_226(Var0, __LIB_6__::func_553(1));
		}
	}
	*bParam0 = -1;
	*iParam1 = -1;
}

void func_11()//Position - 0x536
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
		{
			MISC::SET_BIT(&uVar3, bVar0);
		}
		else
		{
			func_14(bVar0);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar0))
		{
			func_12(bVar0);
			MISC::SET_BIT(&(Local_108.f_45), bVar0);
			iVar1++;
			if (BitTest(Local_1454[bVar0 /*7*/].f_1, 2))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	if (iVar1 > Local_108.f_48)
	{
		Local_108.f_48 = iVar1;
	}
	else
	{
		Local_108.f_51 = (Local_108.f_48 - iVar1);
	}
	if (iVar2 > Local_108.f_52)
	{
		Local_108.f_52 = iVar2;
	}
}

void func_12(bool bParam0)//Position - 0x5E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = Local_1454[bParam0 /*7*/].f_3;
	iVar1 = Local_1454[bParam0 /*7*/].f_3.f_2;
	if (!BitTest(Local_108.f_46, bParam0))
	{
		iVar2 = (Local_108.f_4[0] / 2);
		if (iVar0 >= iVar2)
		{
			Local_108.f_47++;
			MISC::SET_BIT(&(Local_108.f_46), bParam0);
		}
	}
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_108.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				__LIB_1__::func_418(&(Local_108.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_108.f_4[iVar3] < 0 || iVar0 > Local_1454[Local_108.f_4[iVar3] /*7*/].f_3) || (iVar0 == Local_1454[Local_108.f_4[iVar3] /*7*/].f_3 && iVar1 > Local_1454[Local_108.f_4[iVar3] /*7*/].f_3.f_2))
		{
			iVar4 = Local_108.f_4[iVar3];
			if (iVar0 != 0)
			{
				iLocal_106 = iVar3;
				bLocal_107 = bParam0;
			}
			Local_108.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_108.f_4[iVar5] == bParam0)
				{
					Local_108.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

void func_14(bool bParam0)//Position - 0x748
{
	int iVar0;
	if (BitTest(Local_108.f_45, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_108.f_4[iVar0] == bParam0)
			{
				Local_108.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_108.f_46), bParam0);
		MISC::CLEAR_BIT(&(Local_108.f_45), bParam0);
	}
}

int func_15()//Position - 0x79B
{
	return Global_262145.f_11674 /* Tunable: CRIMINAL_DAMAGE_EVENT_TIME_LIMIT */;
}

void func_16(int iParam0)//Position - 0x7AA
{
	Local_108.f_37 = iParam0;
}

int func_17(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x7B8
{
	if (__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0) || __LIB_18__::func_259(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_1__::func_570(PLAYER::PLAYER_ID()) || __LIB_2__::func_308(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_25(sParam3, sParam4, 1);
		}
		if (__LIB_2__::func_300(26, -1))
		{
			__LIB_2__::func_221(26, -1);
		}
		return 1;
	}
	if (__LIB_0__::func_649(&(Global_1836844.f_18)))
	{
		if (!__LIB_2__::func_47(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		__LIB_0__::func_579(&(Global_1836844.f_18));
	}
	if (__LIB_1__::func_422())
	{
		if (bParam2)
		{
			func_25(sParam3, sParam4, 0);
		}
		if (__LIB_2__::func_300(26, -1))
		{
			__LIB_2__::func_221(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_25(sParam3, sParam4, 1);
		}
		if (__LIB_2__::func_300(26, -1))
		{
			__LIB_2__::func_221(26, -1);
		}
		return 1;
	}
	return 0;
}

void func_25(char* sParam0, char* sParam1, bool bParam2)//Position - 0x9C9
{
	if ((!BitTest(Global_1836844.f_1, 2) && !__LIB_1__::func_417(PLAYER::PLAYER_ID())) && !__LIB_2__::func_197(PLAYER::PLAYER_ID()))
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
		__LIB_42__::func_608(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
	}
}

void func_94(int iParam0)//Position - 0x2349
{
	Local_108.f_0 = iParam0;
}

int func_95()//Position - 0x2355
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_108.f_4[iVar0] = -1;
		iVar0++;
	}
	__LIB_0__::func_579(&(Local_108.f_39));
	return 1;
}

void func_96()//Position - 0x2382
{
	func_629();
	if (__LIB_18__::func_425())
	{
		func_506();
	}
	if (__LIB_6__::func_991(PLAYER::PLAYER_ID()) || __LIB_7__::func_101(PLAYER::PLAYER_ID()))
	{
		func_503();
	}
	if (!__LIB_2__::func_197(PLAYER::PLAYER_ID()))
	{
		if (func_471(0, 1, 1))
		{
			if (BitTest(uLocal_94, 3))
			{
				MISC::CLEAR_BIT(&uLocal_94, 3);
			}
			switch (Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2)
			{
				case 0:
					if (Local_108.f_37 > 0)
					{
						__LIB_1__::func_481(1);
						func_469(1);
					}
					break;
				case 1:
					if (!BitTest(uLocal_105, 2))
					{
						if (!HUD::IS_RADAR_HIDDEN())
						{
							__LIB_1__::func_278("AMBC_WARN" /* GXT: Criminal Damage will begin shortly. Cause the highest value of damage to vehicles and other players. The top 3 players will win cash and RP. */, 30000);
							__LIB_2__::func_239(0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
							MISC::SET_BIT(&uLocal_105, 2);
						}
					}
					if (Local_108.f_37 >= 2)
					{
						func_469(2);
					}
					__LIB_1__::func_479((Global_262145.f_11675 /* Tunable: CRIMINAL_DAMAGE_EVENT_START_COUNTDOWN_TIME */ - __LIB_1__::func_295(&(Local_108.f_43), 0, 0)));
					__LIB_18__::func_267(__LIB_1__::func_294((Global_262145.f_11675 /* Tunable: CRIMINAL_DAMAGE_EVENT_START_COUNTDOWN_TIME */ - __LIB_1__::func_295(&(Local_108.f_43), 0, 0)), 0), "HUD_STARTING" /* GXT: EVENT START */);
					break;
				case 2:
					if (Local_108.f_37 > 2)
					{
						__LIB_0__::func_371();
						__LIB_1__::func_481(0);
						func_440(144, 0f, 0f, 0, 0, 0, 0);
						__LIB_42__::func_608(63, "AMBC_TITLE" /* GXT: CRIMINAL DAMAGE */, "AMBC_BIG_START" /* GXT: Cause the highest value of damage to vehicles and other players */, __LIB_0__::func_969(), -1, __LIB_0__::func_969(), 1, 0);
						func_469(3);
						Local_1455.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
						Local_1455.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					break;
				case 3:
					if (Local_108.f_37 > 3)
					{
						func_469(4);
					}
					else
					{
						if (BitTest(uLocal_94, 0))
						{
							MISC::CLEAR_BIT(&uLocal_94, 0);
						}
						func_438();
						func_422();
						func_398();
						if (__LIB_2__::func_291(0) && !func_395(0))
						{
							__LIB_1__::func_455();
						}
						func_393();
					}
					func_392();
					func_370();
					func_506();
					break;
				case 4:
					if (__LIB_25__::func_63(&uLocal_96, !BitTest(Local_108.f_1, 0)) || BitTest(Local_108.f_1, 0))
					{
						func_469(5);
					}
					func_345();
					func_238();
					func_370();
					func_506();
					__LIB_18__::func_455();
					break;
				case 5:
					break;
			}
		}
		else
		{
			func_236();
		}
	}
	else
	{
		func_503();
		func_236();
	}
	func_223();
	func_97();
}

void func_97()//Position - 0x2590
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (BitTest(uLocal_94, 4))
	{
		if (__LIB_28__::func_30())
		{
			if (!BitTest(uLocal_94, 5))
			{
				MISC::SET_BIT(&uLocal_94, 5);
			}
		}
		else if (BitTest(uLocal_94, 5))
		{
			MISC::CLEAR_BIT(&uLocal_94, 5);
			MISC::CLEAR_BIT(&uLocal_94, 4);
		}
	}
	if (!BitTest(uLocal_94, 4))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 11, -1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 4, -1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 6, -1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 1, -1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 7, -1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 8, -1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 14, 0));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 14, 6));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 14, 7));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 14, 1));
			iVar2 = (iVar2 + func_98(iVar1, iVar0, 14, 2));
			Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_6 = iVar2;
			MISC::SET_BIT(&uLocal_94, 4);
		}
	}
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26BF
{
	int iVar0;
	var uVar1;
	bool bVar2;
	struct<4> Var3;
	iVar0 = func_196(iParam1, iParam2, iParam3);
	Global_78130[0 /*14*/] = { func_143(iParam0, iParam2, iVar0, -1) };
	uVar1 = Global_78130[0 /*14*/].f_7;
	bVar2 = BitTest(Global_78130[0 /*14*/].f_6, 6);
	Var3 = { Global_78130[0 /*14*/].f_8 };
	__LIB_37__::func_868(&Var3, &uVar1, bVar2, iParam0, iVar0, iParam2, iParam3);
	return uVar1;
}

struct<14> func_143(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x63FF9
{
	__LIB_0__::func_41();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		__LIB_32__::func_57(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		func_144(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_144(int iParam0, int iParam1, int iParam2)//Position - 0x6403C
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__::func_888(iParam1, iParam2);
			break;
		case 11:
			__LIB_25__::func_105(iParam1, iParam2);
			break;
		case 8:
			__LIB_25__::func_534(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__::func_887(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__::func_886(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__::func_885(iParam1, iParam2);
			break;
		case 6:
			__LIB_19__::func_171(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__::func_884(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__::func_883(iParam1, iParam2);
			break;
		case 10:
			__LIB_7__::func_179(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__::func_882(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__::func_881(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__::func_880(iParam1, iParam2);
			break;
		case 0:
			__LIB_25__::func_292(iParam1, iParam2);
			break;
		case 13:
			__LIB_25__::func_104(iParam1);
			break;
	}
}

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0x7F28F
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
				if (func_205(iParam0, iParam1, iVar0))
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
				if (func_205(iParam0, iParam1, iVar1))
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

int func_205(int iParam0, int iParam1, int iParam2)//Position - 0x7F807
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
	Global_78130[1 /*14*/] = { func_143(iVar0, iParam1, iParam2, -1) };
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
				if (!func_205(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_205(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_143(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_205(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { func_143(iVar0, iVar4, iVar1, -1) };
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
			if (!func_205(iParam0, 14, uVar11[iVar10]))
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
						return func_205(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_205(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_223()//Position - 0x837F4
{
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_2__::func_197(PLAYER::PLAYER_ID())) && !__LIB_6__::func_991(PLAYER::PLAYER_ID())) && func_471(0, 1, 1))
	{
		if (Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 == 1)
		{
			__LIB_25__::func_25("AMBC_PREP" /* GXT: Prepare for Criminal Damage. */, 0);
		}
		else if (Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 == 3)
		{
			__LIB_25__::func_25("AMBC_START" /* GXT: Cause the highest value of damage to vehicles and other players. */, 0);
		}
		else
		{
			__LIB_18__::func_455();
		}
	}
	else
	{
		__LIB_18__::func_455();
	}
}

void func_236()//Position - 0x83D2B
{
	if (!BitTest(uLocal_94, 3))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		MISC::SET_BIT(&uLocal_94, 3);
	}
}

void func_238()//Position - 0x83D73
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (!BitTest(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1, 0))
	{
		if (__LIB_2__::func_197(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1), 0);
			return;
		}
		if (__LIB_6__::func_991(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1), 0);
			return;
		}
		func_308(&iVar0, &iVar1);
		Local_1455.f_6 = iVar0;
		if (!Global_262145.f_11973 /* Tunable: CRIMINAL_DAMAGE_DISABLE_SHARE_CASH */)
		{
			if (Local_1455.f_6 > 0)
			{
				__LIB_1__::func_445(18, Local_1455.f_6);
			}
		}
		Local_1455.f_7 = iVar1;
		if (iVar0 > 0)
		{
			if (__LIB_0__::func_112())
			{
				func_294(joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"), iVar0, &uVar2, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CRIMINAL_DAMAGE", &uVar3);
			}
			Global_2727753 = iVar0;
		}
		if (iVar1 > 0)
		{
			__LIB_1__::func_444();
			func_239(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CRIMINAL_DAMAGE"), iVar1, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1), 0);
	}
}

int func_239(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x83E67
{
	return func_240(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_240(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x83E89
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_40__::func_274(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				__LIB_6__::func_970(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_241(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_241(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x83F1C
{
	struct<3> Var0;
	Var0 = { func_244(iParam0, 1) };
	if (iParam0 == __LIB_0__::func_346(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_1__::func_439(1);
	}
	__LIB_6__::func_970(Var0, iParam1, 0, sParam2, iParam3);
}

Vector3 func_244(int iParam0, bool bParam1)//Position - 0x83F6B
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	var uVar4;
	float fVar5;
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == __LIB_0__::func_346(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &uVar4);
	if (bParam1)
	{
		fVar5 = (uVar4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

void func_294(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x85E0D
{
	int iVar0;
	if (!__LIB_0__::func_112())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28363 /* Tunable: 1103207774 */)
			{
				__LIB_1__::func_597(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			__LIB_1__::func_597(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
			if (iParam1 > 0 || Global_262145.f_28363 /* Tunable: 1103207774 */)
			{
				__LIB_1__::func_597(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			__LIB_1__::func_597(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

void func_308(var uParam0, var uParam1)//Position - 0x86C6A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = 0;
	*uParam0 = 0;
	*uParam1 = 0;
	if (Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 >= __LIB_24__::func_891() || func_343())
	{
		fVar1 = func_342();
		fVar2 = func_341();
		iVar3 = func_340();
		iVar4 = func_339();
		iVar5 = Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3;
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		if (func_395(0))
		{
			iVar6 = func_338();
			iVar7 = func_337();
		}
		else
		{
			__LIB_7__::func_247(1);
		}
		if (iVar5 > func_334())
		{
			iVar5 = func_334();
		}
		iVar9 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_108.f_2 - iLocal_104)) / 60f) / 1000f));
		if (iVar9 > Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */)
		{
			iVar9 = Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */;
		}
		else if (iVar9 < 1)
		{
			iVar9 = 1;
		}
		iVar0 = (__LIB_24__::func_890() * iVar9);
		iVar8 = (__LIB_24__::func_889() * iVar9);
		*uParam0 = __LIB_1__::func_572(SYSTEM::ROUND((IntToFloat(((iVar3 + SYSTEM::FLOOR((IntToFloat(iVar5) * fVar1))) + iVar6)) * Global_262145.f_11908 /* Tunable: CRIMINAL_DAMAGE_EVENT_MULTIPLIER_CASH */)), 50, 0);
		*uParam1 = __LIB_1__::func_572(SYSTEM::ROUND(((IntToFloat(((iVar4 + SYSTEM::FLOOR((IntToFloat(iVar5) * fVar2))) + iVar7)) * Global_262145.f_11909 /* Tunable: CRIMINAL_DAMAGE_EVENT_MULTIPLIER_RP */) + IntToFloat(iVar8))), 50, 0);
	}
	else
	{
		__LIB_7__::func_247(0);
	}
	func_309(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_309(var uParam0, int iParam1)//Position - 0x86DAD
{
	int iVar0;
	if (*uParam0 > 0)
	{
		if (!__LIB_2__::func_232())
		{
			if (__LIB_4__::func_973(0))
			{
				if (!__LIB_18__::func_436(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__::func_582()))
					{
						if (__LIB_1__::func_449() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * __LIB_1__::func_449());
							*uParam0 = (*uParam0 - iVar0);
						}
						__LIB_6__::func_976(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_314("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__::func_582(), iVar0, 0, 0, 1);
						}
						__LIB_1__::func_447(20);
						__LIB_6__::func_982(__LIB_0__::func_582(), iVar0, 1);
					}
				}
			}
		}
	}
}

int func_314(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x86EFA
{
	int iVar0;
	struct<8> Var1;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_38__::func_4(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__::func_957(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		__LIB_18__::func_263(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_334()//Position - 0x87346
{
	return Global_262145.f_11940 /* Tunable: CRIMINAL_DAMAGE_S_CAP */;
}

int func_337()//Position - 0x87434
{
	return Global_262145.f_11939 /* Tunable: CRIMINAL_DAMAGE_BONUS_RP */;
}

int func_338()//Position - 0x87443
{
	return Global_262145.f_11938 /* Tunable: CRIMINAL_DAMAGE_BONUS_CASH */;
}

var func_339()//Position - 0x87452
{
	return Global_262145.f_11453 /* Tunable: CRIMINAL_DAMAGE_GET_RP_REWARD_BASE */;
}

var func_340()//Position - 0x87461
{
	return Global_262145.f_11452 /* Tunable: CRIMINAL_DAMAGE_GET_CASH_REWARD_BASE */;
}

var func_341()//Position - 0x87470
{
	return Global_262145.f_11937 /* Tunable: CRIMINAL_DAMAGE_PERCENT_RP */;
}

var func_342()//Position - 0x8747F
{
	return Global_262145.f_11936 /* Tunable: CRIMINAL_DAMAGE_PERCENT_CASH */;
}

int func_343()//Position - 0x8748E
{
	if ((func_395(0) || func_395(1)) || func_395(2))
	{
		return 1;
	}
	return 0;
}

void func_345()//Position - 0x874C8
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;
	if (!BitTest(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1, 1) && (__LIB_1__::func_438() || BitTest(Local_108.f_1, 0)))
	{
		if (__LIB_0__::func_970(__LIB_1__::func_437()))
		{
			__LIB_6__::func_952();
		}
		if (!BitTest(Local_108.f_1, 0))
		{
			if (__LIB_2__::func_291(0))
			{
				uVar1 = Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3;
				func_356(&iVar0, uVar1);
				if (func_395(0))
				{
					func_355(73, iVar0, "AMBC_WIN" /* GXT: You won Criminal Damage by causing $~a~ worth of destruction */, "AMCH_WIN" /* GXT: WINNER */, 1, 15000, -1082130432, 2, 0);
				}
				else
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_108.f_4[0]);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						if (func_395(1))
						{
							func_355(73, iVar0, "AMBC_2ND" /* GXT: You came second in Criminal Damage by causing $~a~ worth of destruction */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else if (func_395(2))
						{
							func_355(73, iVar0, "AMBC_3RD" /* GXT: You came third in Criminal Damage by causing $~a~ worth of destruction */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else
						{
							bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
							uVar1 = Local_1454[Local_108.f_4[0] /*7*/].f_3;
							func_356(&iVar0, uVar1);
							sVar4 = "AMBC_LOSE" /* GXT: <C>~a~</C>~s~ won Criminal Damage by causing $~a~ worth of destruction */;
							sVar5 = PLAYER::GET_PLAYER_NAME(bVar3);
							if (__LIB_4__::func_682(bVar3, 1))
							{
								sVar5 = __LIB_31__::func_905(bVar3);
							}
							func_347(78, iVar0, sVar4, sVar5, "AMPP_LOSER" /* GXT: EVENT OVER */, 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				__LIB_42__::func_608(66, "CPC_OVER" /* GXT: EVENT OVER */, "AMCH_NOWIN" /* GXT: No players achieved a score */, 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_25("", "", 1);
		}
		MISC::SET_BIT(&(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1), 1);
		__LIB_1__::func_434(144);
	}
}

int func_347(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0x87659
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
	__LIB_0__::func_975(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return __LIB_42__::func_88(&Var0);
}

int func_355(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x878D6
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
	__LIB_0__::func_975(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_6__::func_896(&(Var0.f_69), iParam8);
	}
	return __LIB_42__::func_88(&Var0);
}

void func_356(int iParam0, var uParam1)//Position - 0x87957
{
	*iParam0 = uParam1;
}

void func_370()//Position - 0x884A6
{
	bool bVar0[3];
	bool bVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9[3];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (Local_108.f_4[0] > -1)
	{
		iVar7 = 0;
		iVar5 = 0;
		while (iVar5 < 3)
		{
			bVar0[iVar5] = __LIB_0__::func_160();
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 3)
		{
			if (Local_108.f_4[iVar5] > -1)
			{
				iVar10 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_108.f_4[iVar5]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar10))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar10);
					if (__LIB_1__::func_264(bVar1, 0, 1))
					{
						if (!__LIB_6__::func_978(bVar1, 0))
						{
							bVar0[iVar5] = bVar1;
							uVar2[iVar5] = Local_1454[Local_108.f_4[iVar5] /*7*/].f_3;
							if (__LIB_4__::func_973(1))
							{
								if (__LIB_4__::func_682(bVar1, 1))
								{
									uVar9[iVar5] = __LIB_38__::func_4(bVar1, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar5++;
		}
		if (__LIB_7__::func_211(PLAYER::PLAYER_ID()))
		{
			iVar11 = __LIB_6__::func_544();
			iVar12 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
			{
				iVar13 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar12);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar13))
				{
					iVar6 = iVar13;
				}
			}
		}
		else
		{
			iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
		}
		iVar3 = __LIB_1__::func_294(0, Local_1454[iVar6 /*7*/].f_3);
		iVar4 = __LIB_1__::func_294(0, (func_15() - __LIB_1__::func_295(&(Local_108.f_39), 0, 0)));
		__LIB_18__::func_265(iVar4);
		if (iVar4 > 30000)
		{
			iVar8 = 1;
		}
		else
		{
			iVar8 = 6;
		}
		func_371(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, &iVar7, iVar8, __LIB_7__::func_178(), 0, 0, 0, uVar9[0], uVar9[1], uVar9[2]);
	}
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, int iParam12, int iParam13, var uParam14, var uParam15, var uParam16)//Position - 0x88638
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	if (__LIB_6__::func_987(0) == 0)
	{
		return;
	}
	__LIB_1__::func_451();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam8)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__::func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__::func_450(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			__LIB_6__::func_986(iParam3, &(Global_2726613[0 /*16*/]), -1, 109, 8, 1, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__::func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__::func_450(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			__LIB_6__::func_986(iParam4, &(Global_2726613[1 /*16*/]), -1, 108, 7, 1, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__::func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__::func_450(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			__LIB_6__::func_986(iParam5, &(Global_2726613[2 /*16*/]), -1, 107, 6, 1, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	sVar2 = "TIM_DAMAGE" /* GXT: DAMAGE */;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		sVar2 = sParam11;
	}
	if (!__LIB_6__::func_991(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_986(iParam6, sVar2, -1, 1, 5, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam12 > 0 || iParam13)
	{
		if (!__LIB_6__::func_991(PLAYER::PLAYER_ID()))
		{
			__LIB_6__::func_986(iParam12, "GB_SNG_HT0" /* GXT: CASH HELD */, -1, 1, 4, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	sVar3 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__::func_786(sParam10))
	{
		sVar3 = sParam10;
	}
	__LIB_6__::func_985(iParam7, sVar3, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
	*iParam8 = 0;
	__LIB_1__::func_428();
}

void func_392()//Position - 0x894A0
{
	int iVar0;
	struct<42> Var1;
	bool bVar2;
	int iVar3;
	var uVar4;
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_109.f_534[iVar0 /*42*/] = { Var1 };
		Local_109.f_534[iVar0 /*42*/].f_1 = __LIB_0__::func_160();
		if (Local_108.f_4[iVar0] > -1)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_108.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!__LIB_6__::func_978(bVar2, 0))
				{
					Local_109.f_534[iVar0 /*42*/] = Local_108.f_4[iVar0];
					Local_109.f_534[iVar0 /*42*/].f_1 = bVar2;
					uVar4 = Local_1454[Local_108.f_4[iVar0] /*7*/].f_3;
					Local_109.f_534[iVar0 /*42*/].f_9 = uVar4;
					Local_109.f_534[iVar0 /*42*/].f_31 = -1;
					Local_109.f_1.f_108 = 9;
				}
			}
		}
		iVar0++;
	}
}

void func_393()//Position - 0x89586
{
	if (func_395(0))
	{
		if (!BitTest(uLocal_94, 7))
		{
			if (__LIB_18__::func_436(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_94, 7);
		}
	}
	else if (BitTest(uLocal_94, 7))
	{
		if (__LIB_18__::func_436(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_94, 7);
	}
}

int func_395(int iParam0)//Position - 0x89617
{
	if (iParam0 >= 0)
	{
		if (Local_108.f_4[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_398()//Position - 0x8968D
{
	int iVar0;
	if (!__LIB_6__::func_991(PLAYER::PLAYER_ID()) && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_31__::func_173();
		if (iVar0 != Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3)
		{
			if (iLocal_104 == 0)
			{
				iLocal_104 = NETWORK::GET_NETWORK_TIME();
				if (Local_1455.f_11 == 0)
				{
					Local_1455.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
			}
			if (iVar0 > iLocal_93)
			{
				iLocal_93 = iVar0;
				Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 = iVar0;
				func_399();
			}
		}
	}
}

void func_399()//Position - 0x89700
{
	if (!BitTest(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_1), 2);
		func_400(1);
	}
}

void func_400(bool bParam0)//Position - 0x8972E
{
	var uVar0;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!__LIB_2__::func_308(PLAYER::PLAYER_ID()) && !__LIB_2__::func_197(PLAYER::PLAYER_ID())) && !__LIB_6__::func_991(PLAYER::PLAYER_ID())) && !__LIB_0__::func_665(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_674())
				{
					__LIB_18__::func_738(2, 0, 1);
					__LIB_1__::func_284();
				}
				if (__LIB_6__::func_989(__LIB_1__::func_487(__LIB_1__::func_182(PLAYER::PLAYER_ID()))))
				{
					uVar0 = __LIB_1__::func_556(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, __LIB_1__::func_487(__LIB_1__::func_182(PLAYER::PLAYER_ID())));
					__LIB_1__::func_284();
				}
				if (__LIB_1__::func_156())
				{
					__LIB_1__::func_284();
				}
				if (__LIB_1__::func_182(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (__LIB_1__::func_458(PLAYER::PLAYER_ID()))
					{
						__LIB_1__::func_578();
					}
					__LIB_2__::func_8(__LIB_1__::func_457(__LIB_1__::func_182(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		__LIB_6__::func_988();
	}
}

void func_422()//Position - 0x89D3C
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_991(PLAYER::PLAYER_ID()))
	{
		iVar0 = 0;
		while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
			switch (iVar1)
			{
				case 186:
					func_423(iVar0);
					break;
			}
			iVar0++;
		}
	}
}

void func_423(int iParam0)//Position - 0x89D85
{
	struct<6> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
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
						if (Var0.f_0 != Var0.f_1)
						{
							if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
							{
								iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
								if (((((!__LIB_0__::func_657(iVar2, 0) && !__LIB_10__::func_898(iVar2)) && !__LIB_0__::func_656(iVar2, 0)) && !__LIB_1__::func_580(iVar2, 0)) && !__LIB_0__::func_655(iVar2, 0)) && !__LIB_2__::func_291(iVar2, 0))
								{
									iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
									if (__LIB_7__::func_973(&iVar4, iVar3, __LIB_9__::func_908(iVar2), -1))
									{
										fVar1 = SYSTEM::TO_FLOAT(iVar4);
									}
									if (fVar1 <= 0f)
									{
										fVar1 = SYSTEM::TO_FLOAT(VEHICLE::GET_VEHICLE_MODEL_VALUE(iVar3));
									}
									fVar1 = (fVar1 * func_426());
									fVar5 = SYSTEM::TO_FLOAT(Global_262145.f_11944 /* Tunable: CRIMINAL_DAMAGE_VEHICLE_VALUE_CAP */);
									if (fVar1 > fVar5)
									{
										fVar1 = fVar5;
									}
								}
								else if (!BitTest(uLocal_94, 6))
								{
									__LIB_1__::func_278("AMBC_PERS" /* GXT: Personal vehicles will not be counted for Criminal Damage. */, 30000);
									__LIB_2__::func_239(0);
									MISC::SET_BIT(&uLocal_94, 6);
								}
							}
							else if (ENTITY::IS_ENTITY_AN_OBJECT(Var0.f_0))
							{
							}
							else if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
								if (PED::IS_PED_A_PLAYER(iVar6))
								{
									iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
									{
										iVar8 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar7);
										if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
										{
											iVar9 = iVar8;
											if ((iVar9 > -1 && iVar9 < 32) && iVar9 != NETWORK::PARTICIPANT_ID_TO_INT())
											{
												fVar1 = SYSTEM::TO_FLOAT(Local_1454[iVar9 /*7*/].f_6);
												fVar1 = (fVar1 * func_425());
											}
										}
									}
								}
							}
							else
							{
								return;
							}
							if (fVar1 > 0f)
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
								{
									iVar10 = SYSTEM::ROUND(((fVar1 * Global_262145.f_11681 /* Tunable: CRIMINAL_DAMAGE_DAMAGE_VALUE_MODIFIER */) * Var0.f_2));
									if (iVar10 < Global_262145.f_11977 /* Tunable: CRIMINAL_DAMAGE_BULLET_MIN_CASH */)
									{
										iVar10 = Global_262145.f_11977 /* Tunable: CRIMINAL_DAMAGE_BULLET_MIN_CASH */;
									}
									if (iVar10 > Global_262145.f_11978 /* Tunable: CRIMINAL_DAMAGE_BULLET_MAX_CASH */)
									{
										iVar10 = Global_262145.f_11978 /* Tunable: CRIMINAL_DAMAGE_BULLET_MAX_CASH */;
									}
								}
								else if (ENTITY::GET_ENTITY_HEALTH(Var0.f_0) > 0)
								{
									fVar11 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Var0.f_0));
									fVar12 = __LIB_1__::func_283(Var0.f_2, fVar11);
									fVar13 = (fVar12 / fVar11);
									fVar14 = (fVar13 * fVar1);
									iVar10 = SYSTEM::ROUND((Global_262145.f_11950 /* Tunable: CRIMINAL_DAMAGE_PLAYER_DAMAGE_VALUE_MODIFIER */ * fVar14));
									if (iVar10 < Global_262145.f_11987 /* Tunable: CRIMINAL_DAMAGE_PLAYER_BULLET_MIN_CASH */)
									{
										iVar10 = Global_262145.f_11987 /* Tunable: CRIMINAL_DAMAGE_PLAYER_BULLET_MIN_CASH */;
									}
									if (iVar10 > Global_262145.f_11988 /* Tunable: CRIMINAL_DAMAGE_PLAYER_BULLET_MAX_CASH */)
									{
										iVar10 = Global_262145.f_11988 /* Tunable: CRIMINAL_DAMAGE_PLAYER_BULLET_MAX_CASH */;
									}
									if (fVar12 == fVar11)
									{
										iVar10 = 0;
									}
								}
								else
								{
									iVar10 = 0;
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Criminal_Damage_Low_Value", "GTAO_FM_Events_Soundset", false);
								if (Var0.f_5)
								{
									if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
									{
										fVar15 = Global_262145.f_11682 /* Tunable: CRIMINAL_DAMAGE_DESTRUCTION_VALUE_MODIFIER */;
									}
									else
									{
										fVar15 = Global_262145.f_11951 /* Tunable: CRIMINAL_DAMAGE_PLAYER_DEATH_VALUE_MODIFIER */;
									}
									iVar10 = SYSTEM::ROUND((fVar15 * fVar1));
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Criminal_Damage_Kill_Player", "GTAO_FM_Events_Soundset", false);
									}
									else
									{
										AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_Blade_Scene");
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Criminal_Damage_High_Value", "GTAO_FM_Events_Soundset", false);
									}
								}
								if (iVar10 > 0)
								{
									iLocal_103 = (iLocal_103 + iVar10);
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_425()//Position - 0x8A08E
{
	return Global_262145.f_11680 /* Tunable: CRIMINAL_DAMAGE_BASE_VALUE_MODIFIER_APPLIED_TO_CLOTHING */;
}

float func_426()//Position - 0x8A09D
{
	return Global_262145.f_11679 /* Tunable: CRIMINAL_DAMAGE_BASE_VALUE_MODIFIER_APPLIED_TO_VEHICLES */;
}

void func_438()//Position - 0x92915
{
	if (!HUD::IS_RADAR_HIDDEN())
	{
		if (!__LIB_1__::func_480(63) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!BitTest(uLocal_105, 0))
			{
				__LIB_1__::func_278("AMBC_HELP" /* GXT: Achieve the highest cost in damages to earn a cash and RP reward. More expensive vehicles will give you a higher score for damaging them. */, 30000);
				__LIB_2__::func_239(1);
				MISC::SET_BIT(&uLocal_105, 0);
			}
			else if (!BitTest(uLocal_105, 1))
			{
				__LIB_1__::func_278("AMBC_HELP1" /* GXT: Taking out players wearing expensive clothing and accessories will give you a higher score. You will not be rewarded for harming citizens of Los Santos and Blaine County. */, 30000);
				__LIB_2__::func_239(1);
				MISC::SET_BIT(&uLocal_105, 1);
			}
		}
	}
}

void func_440(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x92991
{
	bool bVar0;
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0) && __LIB_1__::func_570(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		__LIB_1__::func_103(__LIB_1__::func_475(iParam0), 1);
	}
	else
	{
		__LIB_7__::func_99(iParam0, -1);
		if (__LIB_1__::func_417(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			__LIB_1__::func_474(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (__LIB_1__::func_417(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 5);
		}
		if (((__LIB_0__::func_674() && !__LIB_1__::func_459()) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
		MISC::SET_BIT(&(Global_1836844.f_1), 20);
		if (__LIB_1__::func_473(iParam0))
		{
			__LIB_1__::func_472();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			__LIB_7__::func_230(fParam1);
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
		if (__LIB_2__::func_277(iParam0))
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
				__LIB_6__::func_990(1);
				if (__LIB_2__::func_266(0))
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
			__LIB_6__::func_960(1);
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (bParam5)
		{
			__LIB_1__::func_469();
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (!bParam6)
		{
			if (__LIB_18__::func_266(iParam0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 21);
			}
		}
	}
	Global_2787396 = 1;
}

void func_469(int iParam0)//Position - 0x9320A
{
	Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_2 = iParam0;
}

int func_471(bool bParam0, bool bParam1, bool bParam2)//Position - 0x93253
{
	if (__LIB_1__::func_298(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
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
	if (__LIB_7__::func_427(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_41())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_1__::func_486(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_698())
	{
		return 0;
	}
	if (bParam0)
	{
		if (__LIB_2__::func_308(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_491(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (__LIB_1__::func_483(PLAYER::PLAYER_ID()) != __LIB_0__::func_160() && __LIB_1__::func_483(PLAYER::PLAYER_ID()) == __LIB_2__::func_191(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_6__::func_946(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (__LIB_1__::func_482(__LIB_1__::func_437()) && !__LIB_1__::func_458(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_497())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_6__::func_869(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((__LIB_0__::func_702(PLAYER::PLAYER_ID(), 12) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 14)) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (__LIB_1__::func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!__LIB_0__::func_93() && !Global_2787784)
		{
			return 0;
		}
	}
	if (__LIB_1__::func_296(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_527())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (__LIB_1__::func_466(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_810())
	{
		return 0;
	}
	if (__LIB_2__::func_246(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (__LIB_0__::func_618())
	{
		return 0;
	}
	if (__LIB_1__::func_288())
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
	if (__LIB_1__::func_279(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_1__::func_476(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_385(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_491(bool bParam0)//Position - 0x93948
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_0__::func_738(bParam0) && !__LIB_1__::func_417(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_2__::func_308(bParam0);
	uVar3 = __LIB_0__::func_674();
	uVar4 = __LIB_18__::func_456();
	if ((bVar1 && (__LIB_1__::func_476(bParam0) || __LIB_1__::func_471(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !__LIB_1__::func_570(bParam0)) && !__LIB_1__::func_575(bParam0)))
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

void func_503()//Position - 0x93BAC
{
	if (Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 != 0)
	{
		Local_1454[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/].f_3 = 0;
	}
}

void func_506()//Position - 0x93C7A
{
	func_507(&(Local_109.f_534), &Local_109, 27, &(Local_109.f_1), &(Local_109.f_117), -1, 0, 0);
}

void func_507(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x93C9A
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
	if (func_626(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_31__::func_922() || iParam2 == 28)
	{
		if (func_578(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_18__::func_425(), sParam7))
		{
			__LIB_1__::func_512(1);
			if ((!__LIB_1__::func_511() && !__LIB_1__::func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_509())
				{
					__LIB_6__::func_997();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_507(iParam1, 0, 0);
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
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__::func_978(bVar4, 0))
									{
										if (__LIB_25__::func_66(bVar4) || __LIB_2__::func_201(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_2__::func_192(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_7__::func_185(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__::func_259(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_396(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_561())
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_7__::func_103(bVar4) && __LIB_35__::func_554(bVar4, iParam2, bVar3)) && __LIB_1__::func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_18__::func_269(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
								iVar6 = __LIB_1__::func_603(bVar4);
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
									if (!func_561())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__::func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_500(iParam5, 1, 0, 0), 16);
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
								iVar17 = __LIB_25__::func_65(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_4__::func_682(bVar4, 1) && iVar1[bVar10] != -1)
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
								if (__LIB_1__::func_499(iParam5))
								{
									func_537(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_537(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_1__::func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_160();
							}
							if (__LIB_7__::func_103(bVar4))
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_18__::func_269(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
									iVar6 = __LIB_1__::func_603(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_25__::func_65(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_4__::func_682(bVar4, 1))
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
									func_520(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_6__::func_994(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_579(&(uParam3->f_21));
						__LIB_1__::func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_491(uParam3, iParam1);
							__LIB_1__::func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__::func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__::func_992(uParam3);
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
			__LIB_1__::func_492();
			__LIB_1__::func_508(0);
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

void func_520(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x94625
{
	int iVar0;
	char* sVar1;
	if (iParam4 >= __LIB_1__::func_498() && iParam4 < __LIB_1__::func_497())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				__LIB_0__::func_514("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			__LIB_0__::func_514(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				__LIB_0__::func_514("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			__LIB_0__::func_514("");
			if (uParam3->f_108 == 6)
			{
				__LIB_0__::func_514("");
			}
			else
			{
				__LIB_0__::func_514(&sParam5);
			}
			func_525(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (__LIB_1__::func_581(uParam3))
			{
				__LIB_0__::func_478("DPAD_FRIEND" /* GXT: F */);
			}
			else if (__LIB_1__::func_496(uParam3))
			{
				__LIB_0__::func_478("DPAD_FRIEND" /* GXT: F */);
			}
			else if (__LIB_1__::func_495(uParam3))
			{
				__LIB_0__::func_478("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				__LIB_0__::func_478("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_525(var uParam0, bool bParam1)//Position - 0x9479B
{
	if (func_533(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_529(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2689235[bParam1 /*453*/].f_425, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (__LIB_16__::func_405())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_529(bool bParam0)//Position - 0x94899
{
	if ((__LIB_1__::func_264(bParam0, 0, 1) && __LIB_21__::func_174()) && __LIB_18__::func_367(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_533(bool bParam0)//Position - 0x9495F
{
	if (__LIB_16__::func_405())
	{
		if (__LIB_1__::func_264(bParam0, 0, 1))
		{
			return __LIB_2__::func_192(bParam0);
		}
	}
	if ((__LIB_1__::func_264(bParam0, 0, 1) && __LIB_21__::func_174()) && __LIB_1__::func_436(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_537(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x949E9
{
	int iVar0;
	char* sVar1;
	if (iParam3 >= __LIB_1__::func_498() && iParam3 < __LIB_1__::func_497())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					__LIB_0__::func_514("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					__LIB_0__::func_478(sParam16);
				}
				else
				{
					__LIB_0__::func_514(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_514("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_561())
				{
					__LIB_0__::func_514("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						__LIB_0__::func_478(&(uParam2->f_104));
					}
					else
					{
						__LIB_0__::func_514("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					__LIB_0__::func_514("");
				}
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_514("");
				}
				else
				{
					__LIB_0__::func_514(&sParam4);
				}
				func_525(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					__LIB_0__::func_514("");
					__LIB_0__::func_514("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (__LIB_1__::func_581(uParam2))
				{
					__LIB_0__::func_478("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_496(uParam2))
				{
					__LIB_0__::func_478("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_495(uParam2))
				{
					__LIB_0__::func_478("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					__LIB_0__::func_478("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_561()//Position - 0x954DA
{
	switch (__LIB_0__::func_396(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		default:
	}
	switch (__LIB_1__::func_182(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (__LIB_2__::func_308(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_0__::func_396(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (__LIB_1__::func_582(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_578(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x9595D
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = __LIB_1__::func_525(iParam1);
	fVar4 = __LIB_1__::func_524();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (__LIB_1__::func_383())
		{
			if (__LIB_1__::func_523() > 0 && Global_1836359)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!__LIB_25__::func_937())
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		__LIB_1__::func_586(iParam0, uParam2, 1);
		return 0;
	}
	if (!__LIB_0__::func_649(&(uParam2->f_19)))
	{
		if (__LIB_1__::func_523() == 1)
		{
			__LIB_1__::func_521(bVar3, iParam0, 0);
			__LIB_0__::func_580(&(uParam2->f_19), 0, 0);
			__LIB_1__::func_586(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (__LIB_0__::func_649(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (__LIB_2__::func_47(&(uParam2->f_19), 10000, 0) || (__LIB_1__::func_523() == 0 && !bParam5))
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				__LIB_1__::func_520();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					__LIB_1__::func_520();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (__LIB_1__::func_521(bVar3, iParam0, 0))
				{
					__LIB_1__::func_507(iParam0, 0, 0);
					sVar1 = __LIB_18__::func_271(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { __LIB_18__::func_270(iParam1) };
					if (bParam4)
					{
						__LIB_7__::func_0(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						__LIB_1__::func_515(iParam0, __LIB_6__::func_999(uParam2), __LIB_6__::func_998(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = __LIB_31__::func_921(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						__LIB_1__::func_514(iParam0, sVar6, __LIB_1__::func_584(), -1);
					}
					else if (__LIB_16__::func_405())
					{
						uParam2->f_34 = Global_1836358;
						__LIB_7__::func_0(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						uParam2->f_34 = Global_1836358;
						__LIB_7__::func_0(iParam0, sVar1, "", 0, iVar5, __LIB_1__::func_513(), 1);
					}
					else
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						__LIB_7__::func_0(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836357 = uParam3;
				Global_1836356 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836358)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_626(int iParam0)//Position - 0x97169
{
	if (iParam0 == 28)
	{
		if ((__LIB_0__::func_738(PLAYER::PLAYER_ID()) && !__LIB_2__::func_308(PLAYER::PLAYER_ID())) && !__LIB_1__::func_582(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_308(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_491(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_629()//Position - 0x97216
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_95)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_95));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			__LIB_7__::func_106(bVar0, 2);
		}
	}
	iLocal_95++;
	if (iLocal_95 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_95 = 0;
	}
}

void func_632(int iParam0, int iParam1)//Position - 0x97334
{
	Local_1454[iParam0 /*7*/] = iParam1;
}

int func_633()//Position - 0x97345
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_109.f_534[iVar0 /*42*/].f_1 = __LIB_0__::func_160();
		iVar0++;
	}
	return 1;
	return 0;
}

int func_634()//Position - 0x97374
{
	return Local_108.f_0;
}

int func_635(int iParam0)//Position - 0x9737E
{
	return Local_1454[iParam0 /*7*/];
}

void func_636()//Position - 0x9738D
{
	if (BitTest(Global_1836844.f_1, 6))
	{
		__LIB_7__::func_2();
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 6);
	}
	if (!BitTest(Global_1836844.f_1, 7))
	{
		if (BitTest(Global_1836844.f_1, 4) || BitTest(Global_1836844.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_159()) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 7);
				__LIB_1__::func_278("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				__LIB_2__::func_239(1);
			}
		}
		else if (BitTest(Global_1836844.f_1, 17))
		{
			if (__LIB_0__::func_674() && !__LIB_1__::func_459())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
				MISC::SET_BIT(&(Global_1836844.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836844.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_7__::func_272())
			{
				__LIB_1__::func_278("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) != 200)
				{
					__LIB_2__::func_239(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (__LIB_1__::func_471(PLAYER::PLAYER_ID()))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_159()) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 9);
			__LIB_2__::func_305(0);
			__LIB_1__::func_278("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			__LIB_2__::func_239(1);
		}
	}
	if (__LIB_0__::func_738(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 18))
		{
			if ((__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836844.f_1, 20)) && !BitTest(Global_1836844.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 18);
			}
		}
		else if (BitTest(Global_1836844.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_159()) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_1__::func_531())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				__LIB_1__::func_278("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				__LIB_2__::func_239(1);
			}
		}
	}
	if (((((__LIB_0__::func_738(PLAYER::PLAYER_ID()) && !__LIB_1__::func_417(PLAYER::PLAYER_ID())) && __LIB_1__::func_182(PLAYER::PLAYER_ID()) != 146) && !__LIB_2__::func_197(PLAYER::PLAYER_ID())) && !__LIB_6__::func_991(PLAYER::PLAYER_ID())) && !__LIB_5__::func_804())
	{
		if (__LIB_2__::func_277(__LIB_1__::func_182(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (__LIB_1__::func_476(PLAYER::PLAYER_ID()) || __LIB_6__::func_959())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (__LIB_7__::func_1(__LIB_1__::func_182(PLAYER::PLAYER_ID())))
				{
					if (__LIB_2__::func_266(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					if (!Global_2653189)
					{
						__LIB_6__::func_990(1);
						MISC::SET_BIT(&(Global_1836844.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 10);
			}
		}
		if (__LIB_1__::func_471(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836844.f_1, 11))
			{
				if (!Global_100493.f_8)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 12);
					__LIB_6__::func_960(1);
				}
				if (!__LIB_1__::func_305())
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 13);
					__LIB_1__::func_469();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
					if (__LIB_2__::func_266(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					__LIB_6__::func_990(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 11);
			}
		}
		else
		{
			__LIB_7__::func_209(0);
		}
	}
	else
	{
		__LIB_7__::func_209(1);
	}
	__LIB_18__::func_459();
	if (__LIB_18__::func_266(__LIB_1__::func_182(PLAYER::PLAYER_ID())) && !BitTest(Global_1836844.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 21);
	}
	if (((__LIB_0__::func_674() && !__LIB_1__::func_459()) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
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

int func_664()//Position - 0x98060
{
	if (__LIB_1__::func_534())
	{
		return 1;
	}
	if (__LIB_0__::func_665(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_671()//Position - 0x98154
{
	if (__LIB_6__::func_949())
	{
		Local_1455.f_5 = 5;
	}
	else if (BitTest(Local_108.f_1, 0))
	{
		Local_1455.f_5 = 6;
	}
	else if (func_395(0))
	{
		Local_1455.f_5 = 1;
	}
	else
	{
		Local_1455.f_5 = 2;
	}
	__LIB_1__::func_481(0);
	func_674(144, 0, Local_108.f_37 == 5);
	__LIB_1__::func_103(30, 0);
	Local_1455.f_0 = Local_108.f_49;
	Local_1455.f_1 = Local_108.f_50;
	Local_1455.f_4 = Local_108.f_51;
	Local_1455.f_3 = Local_108.f_52;
	Local_1455.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_1455.f_9);
	__LIB_7__::func_107(Local_1455, iLocal_93, -1, -1, -1, -1, -1);
	if (!Global_262145.f_11973 /* Tunable: CRIMINAL_DAMAGE_DISABLE_SHARE_CASH */)
	{
		if (Local_1455.f_6 > 0)
		{
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_674(int iParam0, bool bParam1, bool bParam2)//Position - 0x984A5
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
	__LIB_2__::func_230();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = __LIB_1__::func_587(__LIB_1__::func_182(PLAYER::PLAYER_ID()));
		__LIB_1__::func_103(__LIB_1__::func_475(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && __LIB_0__::func_846(PLAYER::PLAYER_ID()) >= 12)
		{
			__LIB_2__::func_281(2549, -1);
			iVar1 = __LIB_1__::func_556(2549, -1, 0);
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
		__LIB_1__::func_547();
		__LIB_1__::func_546();
		__LIB_1__::func_545();
		if ((!__LIB_1__::func_570(PLAYER::PLAYER_ID()) && !__LIB_1__::func_575(PLAYER::PLAYER_ID())) && !__LIB_1__::func_224())
		{
			__LIB_42__::func_605();
		}
		__LIB_1__::func_540();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			__LIB_7__::func_2();
		}
		__LIB_1__::func_539();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		__LIB_1__::func_433();
		__LIB_1__::func_430();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25)) && !__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_6__::func_990(0);
			__LIB_6__::func_960(0);
			if (!bParam1)
			{
				__LIB_1__::func_538();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (__LIB_2__::func_300(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__::func_221(26, -1);
		}
	}
	if (!__LIB_7__::func_3())
	{
		Global_2787396 = 1;
	}
}

int func_716(struct<21> Param0)//Position - 0x99133
{
	__LIB_0__::func_673(__LIB_6__::func_875(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	__LIB_1__::func_569(0, -1, 0);
	__LIB_18__::func_313(144);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_108, 53, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1454, 225, 0);
	if (!__LIB_0__::func_672())
	{
		func_671();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_108.f_49), &(Local_108.f_50));
	}
	Local_1455.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_1__::func_103(30, 1);
	return 1;
}

