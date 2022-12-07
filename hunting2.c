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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	struct<3> Local_25 = { 0, 0, 0 } ;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 10;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	struct<36> Local_93[8];
	int iLocal_94 = 0;
	struct<5> Local_95[58];
	struct<676> Local_96 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 3;
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
	var uLocal_131 = 0;
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
	var uLocal_147 = 4;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
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
	var uLocal_212 = 2;
	var uLocal_213 = 0;
	var uLocal_214 = 4;
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
	var uLocal_280 = 4;
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
	var uLocal_351 = 12;
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
	var uLocal_532 = 3;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	float fLocal_538 = 0f;
	struct<3> Local_539 = { 0, 0, 0 } ;
	bool bLocal_540 = 0;
	float fLocal_541 = 0f;
	float fLocal_542 = 0f;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	struct<3> Local_548 = { 0, 0, 0 } ;
	var uLocal_549 = 0;
	bool bLocal_550 = 0;
	int iLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	struct<3> Local_555 = { 0, 0, 0 } ;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	float fLocal_565 = 0f;
	float fLocal_566 = 0f;
	int iLocal_567 = 0;
	var uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	bool bLocal_572 = 0;
	int iLocal_573 = 0;
	var uLocal_574 = 15;
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
	var uLocal_626 = 15;
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
	float fLocal_678 = 0f;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	var uLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	var uLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	struct<3> Local_707 = { 0, 0, 0 } ;
	int iLocal_708 = 0;
	struct<61> Local_709 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	var uLocal_716 = 16;
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
	int iLocal_881 = 0;
	int* iLocal_882 = NULL;
	bool bLocal_883 = 0;
	int iLocal_884 = 0;
	bool bLocal_885 = 0;
	int iLocal_886 = 0;
	bool bLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	bool bLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	var uLocal_900 = 0;
	bool bLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_909[5] = { 0, 0, 0, 0, 0 };
	int iLocal_910[5] = { 0, 0, 0, 0, 0 };
	int iLocal_911[5] = { 0, 0, 0, 0, 0 };
	int iLocal_912[5] = { 0, 0, 0, 0, 0 };
	int iLocal_913[5] = { 0, 0, 0, 0, 0 };
	int iLocal_914[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_915 = 0;
	float fLocal_916 = 0f;
	float fLocal_917 = 0f;
	float fLocal_918 = 0f;
	float fLocal_919 = 0f;
	float fLocal_920 = 0f;
	float fLocal_921 = 0f;
	float fLocal_922 = 0f;
	float fLocal_923 = 0f;
	float fLocal_924[5] = { 0f, 0f, 0f, 0f, 0f };
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	char* sLocal_941 = NULL;
	char* sLocal_942 = NULL;
	char* sLocal_943 = NULL;
	char* sLocal_944 = NULL;
	struct<3> Local_945 = { 0, 0, 0 } ;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	char cLocal_949[48] = "";
	struct<6> Local_950 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_951 = { 0, 0, 0 } ;
	struct<3> Local_952 = { 0, 0, 0 } ;
	struct<3> Local_953 = { 0, 0, 0 } ;
	struct<3> Local_954 = { 0, 0, 0 } ;
	struct<3> Local_955 = { 0, 0, 0 } ;
	float fLocal_956 = 0f;
	struct<3> Local_957 = { 0, 0, 0 } ;
	float fLocal_958 = 0f;
	struct<3> Local_959 = { 0, 0, 0 } ;
	struct<3> Local_960 = { 0, 0, 0 } ;
	struct<3> Local_961 = { 0, 0, 0 } ;
	struct<3> Local_962 = { 0, 0, 0 } ;
	struct<3> Local_963 = { 0, 0, 0 } ;
	struct<3> Local_964[5];
	struct<3> Local_965 = { 0, 0, 0 } ;
	struct<3> Local_966 = { 0, 0, 0 } ;
	float fLocal_967 = 0f;
	struct<3> Local_968 = { 0, 0, 0 } ;
	float fLocal_969 = 0f;
	struct<3> Local_970 = { 0, 0, 0 } ;
	float fLocal_971 = 0f;
	struct<3> Local_972 = { 0, 0, 0 } ;
	float fLocal_973 = 0f;
	struct<3> Local_974 = { 0, 0, 0 } ;
	struct<3> Local_975 = { 0, 0, 0 } ;
	struct<3> Local_976 = { 0, 0, 0 } ;
	struct<3> Local_977 = { 0, 0, 0 } ;
	struct<3> Local_978 = { 0, 0, 0 } ;
	struct<3> Local_979 = { 0, 0, 0 } ;
	struct<3> Local_980 = { 0, 0, 0 } ;
	struct<3> Local_981 = { 0, 0, 0 } ;
	float fLocal_982 = 0f;
	bool bLocal_983 = 0;
	int iLocal_984 = 0;
	bool bLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	struct<61> Local_998 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_83 = 1;
	iLocal_84 = 65;
	iLocal_85 = 49;
	iLocal_86 = 64;
	fLocal_542 = 1f;
	Local_555 = { 0f, 40f, 0f };
	iLocal_560 = -1;
	iLocal_561 = -1;
	iLocal_563 = -1;
	fLocal_565 = 0f;
	fLocal_566 = 0f;
	fLocal_678 = 1f;
	iLocal_689 = -1;
	iLocal_692 = -1;
	iLocal_695 = -1;
	uLocal_702 = __LIB_2__::func_108(54);
	iLocal_703 = joaat("dune");
	iLocal_704 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_SNIPERRIFLE"));
	iLocal_705 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_SCOPE_LARGE"));
	iLocal_706 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_AR_SUPP_02"));
	Local_707 = { -683.8261f, 5840.8096f, 16.566f };
	fLocal_916 = 301.6213f;
	fLocal_917 = 255.0691f;
	fLocal_918 = 280.2539f;
	fLocal_919 = 265.0211f;
	fLocal_920 = 301.6213f;
	fLocal_921 = 255.0691f;
	fLocal_922 = 320.8655f;
	fLocal_923 = 209.3795f;
	iLocal_936 = joaat("A_C_Deer");
	sLocal_942 = "HT2AUD";
	sLocal_943 = "Trevor";
	StringCopy(&Local_945, "HT_CUT", 24);
	StringCopy(&cLocal_949, "HT_CUT_1", 24);
	Local_951 = { -680.2113f, 5848.0083f, 16.2569f };
	Local_952 = { -677.2093f, 5847.6357f, 16.3312f };
	Local_953 = { -623.499f, 5849.976f, 22.071f };
	Local_954 = { -621.9225f, 5849.9966f, 22.1182f };
	Local_955 = { -607.6183f, 5853.483f, 22.7782f };
	fLocal_956 = 217.5379f;
	Local_957 = { -605.165f, 5856.5386f, 22.805f };
	fLocal_958 = 174.8695f;
	Local_959 = { -585.8595f, 5854.503f, 27.1148f };
	Local_960 = { -585.6373f, 5857.5254f, 27.2106f };
	Local_961 = { -581.1332f, 5844.7646f, 28.262f };
	Local_962 = { -585.0704f, 5842.9277f, 27.9043f };
	Local_963 = { 0f, 60f, 0f };
	Local_965 = { -529.062f, 5865.116f, 32.677f };
	Local_966 = { -572.7f, 5786.51f, 38.37f };
	fLocal_967 = 90.01f;
	Local_968 = { -575.36f, 5788.6f, 37.59f };
	fLocal_969 = -92.72f;
	Local_970 = { -618.4669f, 5750.4575f, 31.4123f };
	fLocal_971 = 11.9731f;
	Local_972 = { -659.7115f, 5711.5996f, 23.6818f };
	fLocal_973 = 125.9914f;
	Local_974 = { -626.5519f, 5824.6006f, 23.1475f };
	Local_975 = { -588.3788f, 5829.8975f, 29.0621f };
	Local_976 = { -578.3123f, 5876.227f, 27.3243f };
	Local_977 = { -536.2968f, 5860.105f, 32.3228f };
	Local_978 = { -680.5353f, 5847.873f, 16f };
	Local_979 = { -686.4902f, 5841.499f, 19f };
	Local_980 = { -612.2185f, 5843.3315f, 25.3576f };
	Local_981 = { -691.781f, 5835.6895f, 15.9653f };
	fLocal_982 = 318.4915f;
	Local_709 = { ScriptParam_998 };
	__LIB_20__::func_264(&Local_709);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_557();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_556();
	func_555(0);
	__LIB_6__::func_863(26);
	if (__LIB_0__::func_294())
	{
		Global_78564 = 1;
		iLocal_701 = 0;
		while (!func_544(&Local_709))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__::func_700(&Local_709, 0, 0);
		Global_78564 = 0;
	}
	iLocal_939 = Local_709.f_28[0];
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_FG", 0);
		__LIB_40__::func_690(Local_709.f_9, 0, 0, 0, 0, 0);
		VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
		{
			Local_548 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if ((iLocal_710 != 25 && iLocal_710 != 0) && iLocal_710 != 2)
			{
				func_506();
				func_499();
			}
			if ((((((iLocal_710 != 25 && iLocal_710 != 0) && iLocal_710 != 18) && iLocal_710 != 19) && iLocal_710 != 20) && iLocal_710 != 21) && iLocal_710 != 22)
			{
				func_498();
			}
			if (iLocal_884)
			{
				__LIB_17__::func_701();
				if (iLocal_904)
				{
					func_492(0, 1132920832);
				}
				else
				{
					func_492(1, 100f);
				}
			}
			switch (iLocal_710)
			{
				case 0:
					func_476();
					break;
				case 1:
					func_444();
					break;
				case 2:
					func_443();
					break;
				case 3:
					func_442();
					break;
				case 4:
					func_441();
					break;
				case 5:
					func_440();
					break;
				case 6:
					func_439();
					break;
				case 7:
					func_438();
					break;
				case 9:
					func_437();
					break;
				case 10:
					func_436();
					break;
				case 11:
					func_433();
					break;
				case 13:
					func_431();
					break;
				case 14:
					func_353();
					break;
				case 15:
					func_346();
					break;
				case 17:
					func_291();
					break;
				case 18:
					func_290();
					break;
				case 19:
					func_287();
					break;
				case 20:
					func_279();
					break;
				case 21:
					func_244();
					break;
				case 22:
					func_242();
					break;
				case 23:
					func_223();
					break;
				case 24:
					func_15();
					break;
				case 25:
					func_1();
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_1()//Position - 0x5F0
{
	switch (iLocal_711)
	{
		case 0:
			func_14(Local_93[iLocal_94 /*36*/]);
			if (!iLocal_892)
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_444("HT_CALL");
				__LIB_29__::func_693("HT_TXTMSG" /* GXT: Beauty! Got a GPS tag and everything. I reckon this could work! Calling u now. */);
				iLocal_884 = 0;
				func_10();
				if (bLocal_887)
				{
					iLocal_928 = MISC::GET_GAME_TIMER() + 3000;
				}
				else
				{
					iLocal_928 = MISC::GET_GAME_TIMER() + 1700;
				}
				iLocal_892 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_928 && !__LIB_0__::func_75())
			{
				if (iLocal_712 != 14 && iLocal_712 != 0)
				{
					if (!__LIB_1__::func_197(iLocal_939))
					{
						sLocal_941 = "HT_FAIL4A";
					}
					if (!__LIB_0__::func_121(iLocal_939))
					{
						sLocal_941 = "HT_FAIL4";
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_93[iLocal_94 /*36*/]))
				{
					if (!__LIB_0__::func_121(Local_93[iLocal_94 /*36*/]))
					{
						if (iLocal_715 == 8)
						{
							if (bLocal_901)
							{
								sLocal_941 = "HT_WGUN";
								iLocal_715 = 10;
							}
						}
					}
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_941))
				{
					__LIB_38__::func_39(1);
				}
				else
				{
					__LIB_39__::func_861(sLocal_941, 1);
				}
				iLocal_711 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_2();
				func_557();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			break;
	}
}

void func_2()//Position - 0x713
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (__LIB_0__::func_121(iLocal_939))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_939, false, 1);
			if (PED::DOES_GROUP_EXIST(__LIB_0__::func_399()))
			{
				if (PED::IS_PED_GROUP_MEMBER(iLocal_939, __LIB_0__::func_399()))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_939);
				}
			}
		}
	}
	__LIB_0__::func_0(&iLocal_939);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_0__::func_0(&(Local_93[iVar0 /*36*/]));
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_915))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_915, false);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_563);
		AUDIO::RELEASE_SOUND_ID(iLocal_563);
	}
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
}

void func_10()//Position - 0x8D4
{
	int iVar0;
	__LIB_0__::func_523(&iLocal_881);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_523(&(Local_93[iVar0 /*36*/].f_1));
		iVar0++;
	}
}

void func_14(int iParam0)//Position - 0x98C
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f))
		{
			bLocal_901 = true;
		}
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_SNIPERRIFLE"), 0) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), 0))
				{
					bLocal_901 = true;
				}
			}
		}
	}
}

void func_15()//Position - 0x9FC
{
	__LIB_29__::func_678();
	func_16();
}

void func_16()//Position - 0xA0C
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_296();
	func_17(179, 1);
	func_557();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_17(int iParam0, bool bParam1)//Position - 0xA2B
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
	__LIB_38__::func_136(iVar0, 0);
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
	func_45();
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

void func_45()//Position - 0x1BDD
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
				if (func_163(iVar1, 14, iVar2))
				{
					func_46(iVar1, 14, iVar2);
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

int func_46(int iParam0, int iParam1, int iParam2)//Position - 0x1C9E
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
	if (!func_163(iParam0, iParam1, iParam2))
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
				func_46(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_46(iParam0, 14, uVar5[iVar3]))
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
	if (func_89(iParam0, iVar0, &iVar7, 0))
	{
		func_49(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_47(iParam0, iVar0, &iVar7))
	{
		func_49(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x1E5A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_163(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1F21
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
										func_49(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_49(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_55(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_89(iParam0, iVar10, &iVar4, 1))
							{
								func_49(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_49(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_49(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_49(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_49(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_49(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_49(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_49(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_49(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_49(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_89(iParam0, iVar10, &iVar4, 0))
		{
			func_49(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_47(iParam0, iVar10, &iVar4))
		{
			func_49(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x2F5E
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
				if (func_163(iParam0, iParam1, iVar0))
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
				if (func_163(iParam0, iParam1, iVar1))
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

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9638
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_163(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2)//Position - 0x1FA23
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
				if (!func_163(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_163(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_163(iParam0, 14, iVar4))
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
			if (!func_163(iParam0, 14, uVar8[iVar7]))
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

void func_223()//Position - 0x27139
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			__LIB_29__::func_679();
			func_240();
			__LIB_0__::func_296();
			__LIB_6__::func_771();
			iLocal_711 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (__LIB_1__::func_197(iLocal_939))
				{
					TASK::CLEAR_PED_TASKS(iLocal_939);
					__LIB_0__::func_0(&iLocal_939);
				}
				if (!__LIB_0__::func_295())
				{
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_961, fLocal_919, 0, 1);
					__LIB_20__::func_665(Local_961, 1112014848, 12, 5000, 0, 0);
				}
				func_555(1);
				func_226();
				iLocal_546 = 0;
				iLocal_884 = 0;
				iLocal_711 = 2;
			}
			break;
		case 2:
			__LIB_6__::func_775(0, -1, 1);
			__LIB_29__::func_680();
			__LIB_29__::func_678();
			iLocal_934 = MISC::GET_GAME_TIMER() + 3500;
			iLocal_899 = 1;
			iLocal_710 = 21;
			break;
	}
}

void func_226()//Position - 0x272E8
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iLocal_908[iVar0] = 0;
		iVar0++;
	}
}

void func_240()//Position - 0x275F6
{
	__LIB_0__::func_0(&(Local_93[0 /*36*/]));
	__LIB_0__::func_0(&(Local_93[1 /*36*/]));
	__LIB_0__::func_0(&(Local_93[2 /*36*/]));
	__LIB_0__::func_0(&(Local_93[3 /*36*/]));
}

void func_242()//Position - 0x27643
{
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (__LIB_10__::func_564())
	{
		iLocal_710 = 24;
	}
}

void func_244()//Position - 0x27674
{
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (MISC::GET_GAME_TIMER() > iLocal_934)
	{
		if (__LIB_21__::func_414(54) || iLocal_899)
		{
			if (!iLocal_898)
			{
				iLocal_934 = MISC::GET_GAME_TIMER() + 8000;
				iLocal_898 = 1;
			}
			else if (!iLocal_897)
			{
				__LIB_37__::func_818(54, "HT_TXTMSG" /* GXT: Beauty! Got a GPS tag and everything. I reckon this could work! Calling u now. */, 1, 0, 0, 0, 0, 1, 0, 1);
				iLocal_934 = MISC::GET_GAME_TIMER() + 10000;
				iLocal_897 = 1;
			}
			else
			{
				__LIB_0__::func_203(&uLocal_716, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				__LIB_0__::func_203(&uLocal_716, 3, 0, "CLETUS", 0, 1);
				if (__LIB_35__::func_540(&uLocal_716, 54, sLocal_942, "HT2_END", 8, 0, 0, 1))
				{
					__LIB_29__::func_693("HT_TXTMSG" /* GXT: Beauty! Got a GPS tag and everything. I reckon this could work! Calling u now. */);
					iLocal_710 = 22;
				}
			}
		}
		else
		{
			__LIB_0__::func_151("HT_BADREC", -1);
		}
	}
}

void func_279()//Position - 0x28F6A
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (!__LIB_0__::func_507())
	{
		if (__LIB_9__::func_596(2, Global_20235, 0))
		{
			__LIB_14__::func_366(1);
			__LIB_14__::func_367(0);
			iLocal_881 = HUD::ADD_BLIP_FOR_ENTITY(Local_93[4 /*36*/]);
			if (HUD::DOES_BLIP_EXIST(iLocal_881))
			{
				HUD::SET_BLIP_COLOUR(iLocal_881, 1);
			}
			Global_22641 = 0;
			__LIB_34__::func_806("HT_PHOTO");
			iLocal_710 = 19;
			return;
		}
	}
	if (__LIB_14__::func_722())
	{
		if (__LIB_21__::func_414(54))
		{
			__LIB_6__::func_849(0);
			__LIB_14__::func_366(0);
			__LIB_14__::func_367(0);
			__LIB_14__::func_366(0);
			iLocal_934 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_710 = 21;
		}
		else
		{
			__LIB_14__::func_366(1);
			__LIB_14__::func_367(0);
			iLocal_881 = HUD::ADD_BLIP_FOR_ENTITY(Local_93[4 /*36*/]);
			if (HUD::DOES_BLIP_EXIST(iLocal_881))
			{
				HUD::SET_BLIP_COLOUR(iLocal_881, 1);
			}
			Global_22641 = 0;
			__LIB_34__::func_806("HT_PHOTO");
			__LIB_0__::func_151("HT_BADREC", -1);
			iLocal_710 = 19;
		}
	}
}

void func_287()//Position - 0x29161
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_93[4 /*36*/]))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_93[4 /*36*/], false) };
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, false) < 40f)
	{
		Local_96.f_675 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
		if (__LIB_11__::func_741())
		{
			fVar1 = SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &fVar2, &fVar3))
			{
				if ((((fVar2 > 0.1f && fVar2 < 0.9f) && fVar3 > 0.1f) && fVar3 < 0.9f) && fVar1 < ((100f * Local_96.f_675) * Local_96.f_675))
				{
					__LIB_14__::func_367(1);
					__LIB_14__::func_366(1);
					if (__LIB_0__::func_1("HT_NOGOOD"))
					{
						HUD::CLEAR_PRINTS();
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					__LIB_0__::func_523(&iLocal_881);
					__LIB_34__::func_806("HT_SENDPIC");
					iLocal_710 = 20;
				}
				else
				{
					__LIB_0__::func_151("HT_NOGOOD", -1);
				}
			}
			else
			{
				__LIB_0__::func_151("HT_NOGOOD", -1);
			}
		}
	}
	else
	{
		__LIB_14__::func_366(0);
		__LIB_34__::func_806("HT_RETURN");
		iLocal_710 = 18;
	}
}

void func_290()//Position - 0x292B8
{
	struct<3> Var0;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_93[4 /*36*/]))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_93[4 /*36*/], false) };
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, false) < 5f)
	{
		Local_96.f_675 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
		__LIB_14__::func_367(0);
		__LIB_14__::func_366(1);
		__LIB_34__::func_806("HT_PHOTO");
		iLocal_710 = 19;
	}
}

void func_291()//Position - 0x29321
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_345();
	if (iLocal_711 != 2)
	{
		func_300(4);
	}
	switch (iLocal_711)
	{
		case 1:
			if (!Local_93[4 /*36*/].f_9)
			{
				if (!__LIB_1__::func_197(Local_93[4 /*36*/]))
				{
					__LIB_0__::func_444("HT_OBJ");
					func_10();
					func_14(Local_93[4 /*36*/]);
					iLocal_546 = 0;
					if (!bLocal_901)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 4);
						iLocal_934 = MISC::GET_GAME_TIMER() + 1700;
						iLocal_711 = 2;
					}
					else
					{
						func_298(10);
					}
				}
				else if (!iLocal_910[4])
				{
					if (HUD::DOES_BLIP_EXIST(Local_93[4 /*36*/].f_1))
					{
						__LIB_34__::func_806("HT_OBJ");
						iLocal_910[4] = 1;
					}
				}
				else if (!iLocal_914[2])
				{
					if (!__LIB_0__::func_405("HT_OBJ", 0, 0))
					{
						func_295(2);
						iLocal_904 = 1;
					}
				}
			}
			else
			{
				func_14(Local_93[4 /*36*/]);
				if (bLocal_901)
				{
					func_298(10);
				}
				else
				{
					__LIB_0__::func_498(770);
					func_292(func_293(4));
					func_298(iLocal_715);
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_934)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_93[4 /*36*/], true, true);
				iLocal_881 = HUD::ADD_BLIP_FOR_ENTITY(Local_93[4 /*36*/]);
				if (HUD::DOES_BLIP_EXIST(iLocal_881))
				{
					HUD::SET_BLIP_COLOUR(iLocal_881, 1);
				}
				iLocal_884 = 0;
				__LIB_34__::func_806("HT_APP");
				iLocal_710 = 18;
			}
			break;
	}
}

void func_292(int iParam0)//Position - 0x29478
{
	switch (iParam0)
	{
		case 0:
			iLocal_715 = 0;
			break;
		case 1:
			iLocal_715 = 1;
			break;
		case 2:
			iLocal_715 = 3;
			break;
		case 3:
			iLocal_715 = 2;
			break;
		case 4:
			iLocal_715 = 1;
			break;
		case 5:
			iLocal_715 = 8;
			break;
	}
	bLocal_887 = true;
}

int func_293(int iParam0)//Position - 0x294DA
{
	return Local_93[iParam0 /*36*/].f_14;
}

void func_295(int iParam0)//Position - 0x2955B
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__::func_151("HT_WIND", -1);
			break;
		case 1:
			__LIB_0__::func_151("HT_DUCK", -1);
			break;
		case 2:
			__LIB_0__::func_151("HT_CHANGE", -1);
			break;
		case 3:
			__LIB_0__::func_187("HT_CALL");
			break;
		case 4:
			__LIB_0__::func_187("HT_CALL");
			break;
		case 5:
			__LIB_0__::func_187("HT_CALL");
			break;
		case 6:
			__LIB_0__::func_151("HT_MALE", -1);
			break;
	}
	if (!iLocal_914[iParam0])
	{
		iLocal_914[iParam0] = 1;
	}
}

void func_298(int iParam0)//Position - 0x29629
{
	__LIB_0__::func_296();
	HUD::CLEAR_PRINTS();
	func_299();
	func_10();
	if (iLocal_710 >= 17)
	{
		iLocal_94 = 4;
	}
	else if (iLocal_710 >= 13)
	{
		iLocal_94 = 2;
	}
	else if (iLocal_710 >= 9)
	{
		iLocal_94 = 1;
	}
	else if (iLocal_710 >= 5)
	{
		iLocal_94 = 0;
	}
	if (iLocal_712 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
		{
			if (!__LIB_1__::func_197(iLocal_939))
			{
				iParam0 = 5;
			}
			if (!__LIB_0__::func_121(iLocal_939))
			{
				iParam0 = 4;
			}
		}
	}
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 1:
			sLocal_941 = "HT_FAIL2";
			break;
		case 2:
			sLocal_941 = "HT_FAIL1A";
			break;
		case 3:
			sLocal_941 = "HT_FAIL3";
			break;
		case 4:
			sLocal_941 = "HT_FAIL4";
			break;
		case 5:
			sLocal_941 = "HT_FAIL4A";
			break;
		case 6:
			sLocal_941 = "HT_FAIL5";
			break;
		case 7:
			sLocal_941 = "HH_FAIL6";
			break;
		case 8:
			sLocal_941 = "HT_MISS";
			break;
		case 10:
			sLocal_941 = "HT_WGUN";
			break;
		case 9:
			sLocal_941 = "HH_FAILCAR";
			break;
		case 15:
			sLocal_941 = "HH_FAILCARA";
			break;
		case 11:
			sLocal_941 = "HT_DOE";
			break;
		case 13:
			sLocal_941 = "HT_INNOCENT";
			break;
		case 14:
			sLocal_941 = "HH_FAIL6A";
			break;
		case 0:
			break;
	}
	iLocal_711 = 0;
	iLocal_710 = 25;
}

void func_299()//Position - 0x297AB
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_563);
		AUDIO::RELEASE_SOUND_ID(iLocal_563);
		iLocal_563 = -1;
	}
}

void func_300(int iParam0)//Position - 0x297D6
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	struct<3> Var9;
	if (Local_93[iParam0 /*36*/].f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]) && ENTITY::IS_ENTITY_DEAD(Local_93[iParam0 /*36*/], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_93[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_567 = 1;
			}
		}
	}
	else
	{
		func_336(iParam0);
		func_335(iParam0);
		func_330(&(Local_93[iParam0 /*36*/]), iParam0);
		if (bLocal_540)
		{
			fVar0 = 9999.9f;
			if (ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]))
			{
				if (!PED::IS_PED_INJURED(Local_93[iParam0 /*36*/]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], true) };
						fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_548, Var1, true);
						if (fVar0 > 250f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var1, 2f) || CAM::IS_SCREEN_FADED_OUT())
							{
								Local_93[iParam0 /*36*/].f_16 = 16;
							}
						}
					}
				}
			}
		}
	}
	if (Local_93[iParam0 /*36*/].f_29)
	{
		Local_93[iParam0 /*36*/].f_16 = Local_93[Local_93[iParam0 /*36*/].f_30 /*36*/].f_16;
		return;
	}
	switch (Local_93[iParam0 /*36*/].f_16)
	{
		case 0:
			break;
		case 1:
			if (bLocal_540)
			{
				if (iLocal_554 < 8 && !bLocal_550)
				{
					if (!Local_93[iParam0 /*36*/].f_35)
					{
						Local_93[iParam0 /*36*/].f_16 = 2;
					}
					else if (MISC::GET_GAME_TIMER() > Local_93[iParam0 /*36*/].f_34)
					{
						Local_93[iParam0 /*36*/].f_16 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_324(iParam0, 8, 1, 1))
			{
				if (bLocal_540 && !__LIB_29__::func_690(Local_93[iParam0 /*36*/]))
				{
					if (!func_322())
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 100)
						{
							Local_93[iParam0 /*36*/].f_16 = 3;
							func_315(iParam0);
						}
					}
				}
			}
			break;
		case 3:
			if (!Local_93[iParam0 /*36*/].f_9)
			{
				iVar2 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				if (iVar2 == 0)
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				else if (iVar2 == 1)
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_c", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_93[iParam0 /*36*/], iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				Local_93[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
				Local_93[iParam0 /*36*/].f_16 = 4;
			}
			else
			{
				Local_93[iParam0 /*36*/].f_16 = 14;
			}
			break;
		case 4:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], true) };
					if ((MISC::GET_GAME_TIMER() > Local_93[iParam0 /*36*/].f_23 && __LIB_34__::func_807(Var4)) && SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar5);
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_93[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 4f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4200, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(iVar5);
						TASK::TASK_PERFORM_SEQUENCE(Local_93[iParam0 /*36*/], iVar5);
						TASK::CLEAR_SEQUENCE_TASK(&iVar5);
						Local_93[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_93[iParam0 /*36*/].f_16 = 5;
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 5:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					if (MISC::GET_GAME_TIMER() > Local_93[iParam0 /*36*/].f_23)
					{
						Local_93[iParam0 /*36*/].f_16 = 6;
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 6:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					iLocal_556 = MISC::GET_RANDOM_INT_IN_RANGE(0, 58);
					if (func_309(iParam0, iLocal_556))
					{
						Local_93[iParam0 /*36*/].f_27 = iLocal_556;
					}
					else
					{
						Local_93[iParam0 /*36*/].f_27 = func_308(iParam0);
					}
					Local_95[Local_93[iParam0 /*36*/].f_25 /*5*/].f_3 = 0;
					if (bLocal_540)
					{
						Local_95[Local_93[iParam0 /*36*/].f_27 /*5*/].f_3 = 1;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_93[iParam0 /*36*/], Local_95[Local_93[iParam0 /*36*/].f_27 /*5*/], 1f, -1, 0.25f, 0, 40000f);
					Local_93[iParam0 /*36*/].f_26 = Local_93[iParam0 /*36*/].f_25;
					Local_93[iParam0 /*36*/].f_16 = 7;
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 7:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_93[iParam0 /*36*/], Local_95[Local_93[iParam0 /*36*/].f_27 /*5*/], 3f, 3f, 3f, false, false, 0))
					{
						Local_93[iParam0 /*36*/].f_25 = Local_93[iParam0 /*36*/].f_27;
						TASK::CLEAR_PED_TASKS(Local_93[iParam0 /*36*/]);
						Local_93[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_93[iParam0 /*36*/].f_16 = 8;
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 9:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_93[iParam0 /*36*/], Local_95[Local_93[iParam0 /*36*/].f_27 /*5*/], 3f, 3f, 3f, false, false, 0))
					{
						Local_93[iParam0 /*36*/].f_25 = Local_93[iParam0 /*36*/].f_27;
						TASK::CLEAR_PED_TASKS(Local_93[iParam0 /*36*/]);
						Local_93[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_93[iParam0 /*36*/].f_16 = 10;
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 8:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					if (MISC::GET_GAME_TIMER() > Local_93[iParam0 /*36*/].f_23)
					{
						Local_93[iParam0 /*36*/].f_16 = 3;
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 14:
			if (bLocal_550)
			{
				__LIB_0__::func_523(&(Local_93[iParam0 /*36*/].f_1));
			}
			if (func_314(iParam0))
			{
				__LIB_41__::func_382(&(Local_93[iParam0 /*36*/]));
				TASK::CLEAR_PED_TASKS(Local_93[iParam0 /*36*/]);
				TASK::TASK_SMART_FLEE_PED(Local_93[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				PED::SET_PED_KEEP_TASK(Local_93[iParam0 /*36*/], true);
				Local_93[iParam0 /*36*/].f_16 = 15;
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 10:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_93[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_93[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						if (__LIB_0__::func_502())
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						if (__LIB_0__::func_502())
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_93[iParam0 /*36*/], iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_93[iParam0 /*36*/].f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
						Local_93[iParam0 /*36*/].f_16 = 11;
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 11:
			if (func_314(iParam0))
			{
				if (!Local_93[iParam0 /*36*/].f_9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_93[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_93[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						if (MISC::GET_GAME_TIMER() > Local_93[iParam0 /*36*/].f_24)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar7);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 16f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
							if (__LIB_0__::func_502())
							{
								TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 8f, -4f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar7);
							TASK::TASK_PERFORM_SEQUENCE(Local_93[iParam0 /*36*/], iVar7);
							TASK::CLEAR_SEQUENCE_TASK(&iVar7);
							Local_93[iParam0 /*36*/].f_16 = 10;
						}
					}
				}
				else
				{
					Local_93[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 15:
			if (func_314(iParam0) && __LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				Var9 = { ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], false) };
				fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var9, true);
				if (fVar8 > 70f && !CAM::IS_SPHERE_VISIBLE(Var9, 5f))
				{
					Local_93[iParam0 /*36*/].f_16 = 16;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
				Local_93[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 16:
			__LIB_0__::func_523(&(Local_93[iParam0 /*36*/].f_1));
			Local_95[Local_93[iParam0 /*36*/].f_25 /*5*/].f_3 = 0;
			Local_95[Local_93[iParam0 /*36*/].f_27 /*5*/].f_3 = 0;
			Local_95[Local_93[iParam0 /*36*/].f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
			Local_95[Local_93[iParam0 /*36*/].f_27 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
			if (ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]))
			{
				if (DECORATOR::DECOR_EXIST_ON(Local_93[iParam0 /*36*/], "doe_elk"))
				{
					iLocal_553 = (iLocal_553 - 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_93[iParam0 /*36*/]));
			}
			if (iLocal_561 == iParam0)
			{
				iLocal_561 = -1;
				iLocal_562 = 0;
			}
			iLocal_554 = (iLocal_554 - 1);
			Local_93[iParam0 /*36*/].f_34 = MISC::GET_GAME_TIMER() + 1000;
			Local_93[iParam0 /*36*/].f_35 = 1;
			Local_93[iParam0 /*36*/].f_29 = 0;
			Local_93[iParam0 /*36*/].f_28 = 0;
			func_301(iParam0, 0);
			Local_93[iParam0 /*36*/].f_13 = 0;
			Local_93[iParam0 /*36*/].f_30 = -1;
			Local_93[iParam0 /*36*/].f_6 = 0;
			Local_93[iParam0 /*36*/].f_16 = 1;
			break;
	}
}

void func_301(int iParam0, int iParam1)//Position - 0x2A37A
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	Local_93[iParam0 /*36*/].f_9 = iParam1;
}

int func_308(int iParam0)//Position - 0x2A544
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 0f;
	fVar1 = 10000f;
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 58)
	{
		if ((iVar2 != Local_93[iParam0 /*36*/].f_25 && iVar2 != Local_93[iParam0 /*36*/].f_26) && !Local_95[iVar2 /*5*/].f_3)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_95[Local_93[iParam0 /*36*/].f_25 /*5*/], Local_95[iVar2 /*5*/], false);
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

int func_309(int iParam0, int iParam1)//Position - 0x2A5CD
{
	if (bLocal_540 == 0)
	{
		return 0;
	}
	if (((iParam1 == Local_93[iParam0 /*36*/].f_25 || iParam1 == Local_93[iParam0 /*36*/].f_26) || Local_95[iParam1 /*5*/].f_3) || __LIB_0__::func_529(Local_93[iParam0 /*36*/], Local_95[iParam1 /*5*/], 1) > 50f)
	{
		return 0;
	}
	return 1;
}

bool func_314(int iParam0)//Position - 0x2A718
{
	return (ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]) && !ENTITY::IS_ENTITY_DEAD(Local_93[iParam0 /*36*/], false));
}

void func_315(int iParam0)//Position - 0x2A73B
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 3;
	while (iVar1 < 8 && iVar0 < 3)
	{
		if (!func_314(iVar1))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				func_316(iVar1, iParam0);
				iVar0++;
				Local_93[iParam0 /*36*/].f_31++;
			}
		}
		iVar1++;
	}
}

int func_316(int iParam0, int iParam1)//Position - 0x2A79A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (__LIB_1__::func_197(Local_93[iParam1 /*36*/]))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_93[iParam1 /*36*/], true) };
		fVar2 = ENTITY::GET_ENTITY_HEADING(Local_93[iParam1 /*36*/]);
		switch (iParam0)
		{
			case 3:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, -2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -2f), 0f };
				break;
			case 4:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -2f), 0f };
				break;
			case 5:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 0f };
				break;
			case 6:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, -2f), 0f };
				break;
		}
		Local_93[iParam0 /*36*/].f_17 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, Var0) };
		__LIB_29__::func_681(&(Local_93[iParam0 /*36*/].f_17), 0);
		Local_93[iParam0 /*36*/].f_32 = (fVar2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
		Local_93[iParam0 /*36*/].f_25 = Local_93[iParam1 /*36*/].f_25;
		func_301(iParam0, 0);
		Local_93[iParam0 /*36*/].f_29 = 1;
		Local_93[iParam0 /*36*/].f_30 = iParam1;
		Local_93[iParam1 /*36*/].f_28 = 1;
		while (Local_93[iParam0 /*36*/].f_32 < -180f)
		{
			Local_93[iParam0 /*36*/].f_32 = (Local_93[iParam0 /*36*/].f_32 + 360f);
		}
		while (Local_93[iParam0 /*36*/].f_32 > 180f)
		{
			Local_93[iParam0 /*36*/].f_32 = (Local_93[iParam0 /*36*/].f_32 - 360f);
		}
		iVar3 = 0;
		if (Local_93[iParam1 /*36*/].f_31 != 0)
		{
			iVar3 = 1;
		}
		if (func_318(&(Local_93[iParam0 /*36*/]), Local_93[iParam0 /*36*/].f_17, Local_93[iParam0 /*36*/].f_32, Local_93[iParam0 /*36*/].f_15, 0, iVar3))
		{
			func_317(&(Local_93[iParam0 /*36*/]), 4, 1);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_93[iParam0 /*36*/], Local_93[iParam1 /*36*/], Var0, 1f, -1, 0.1f, true);
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_317(var uParam0, int iParam1, int iParam2)//Position - 0x2A994
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, false);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 100, 0);
		PED::SET_PED_BLOCKS_PATHING_WHEN_DEAD(*uParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_92);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_92, joaat("PLAYER"));
		PED::SET_PED_SEEING_RANGE(*uParam0, 20f);
		PED::SET_PED_HEARING_RANGE(*uParam0, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
		PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		uParam0->f_31 = 0;
		uParam0->f_8 = 1;
		uParam0->f_12 = 0;
		uParam0->f_11 = iParam2;
		uParam0->f_9 = 0;
		if (bLocal_540 && !uParam0->f_29)
		{
			Local_95[uParam0->f_25 /*5*/].f_3 = 1;
			Local_95[uParam0->f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
		}
		iLocal_567 = 0;
		iLocal_554++;
		uParam0->f_16 = iParam1;
	}
}

int func_318(var uParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x2AA7E
{
	if (func_319(uParam0, iParam3, Param1, fParam2, bParam4, 0, iParam5))
	{
		if (__LIB_1__::func_197(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_319(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x2AAAB
{
	bool bVar0;
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_16__::func_640(iParam1))
		{
			*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
			if (!bParam5)
			{
				if (iParam1 == joaat("A_C_Deer"))
				{
					bVar0 = true;
					if (iLocal_553 < 3 || uParam6)
					{
						fVar1 = 50f;
						if (iLocal_554 != 0)
						{
							fVar1 = (SYSTEM::TO_FLOAT(iLocal_553) / SYSTEM::TO_FLOAT(iLocal_554));
							fVar1 = (fVar1 * 75f);
						}
						if (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 100)) > fVar1 || uParam6)
						{
							PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
							DECORATOR::DECOR_SET_BOOL(*uParam0, "doe_elk", true);
							bVar0 = false;
							iLocal_553++;
						}
					}
					if (bVar0)
					{
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 0, 0);
						if (DECORATOR::DECOR_EXIST_ON(*uParam0, "doe_elk"))
						{
							DECORATOR::DECOR_REMOVE(*uParam0, "doe_elk");
						}
					}
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
				}
				else if (iParam1 == joaat("A_C_MtLion"))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
				}
				else if (iParam1 == joaat("A_C_Boar"))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0);
				}
				ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
				PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
			}
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
				return 1;
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

int func_322()//Position - 0x2AC6C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_314(iVar0))
		{
			if (Local_93[iVar0 /*36*/].f_29)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2ACCC
{
	int iVar0;
	struct<3> Var1;
	if (iParam2 && bLocal_540)
	{
		iVar0 = func_327();
		if (iVar0 > 58)
		{
			return 0;
		}
		else
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_95[iVar0 /*5*/]) > 22500f)
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() < Local_95[iVar0 /*5*/].f_4)
			{
				return 0;
			}
			Var1 = { __LIB_22__::func_673(Local_95[iVar0 /*5*/], 5f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1 + Vector(0f, 0.5f, 0f), &(Var1.f_2), false, false);
			Local_93[iParam0 /*36*/].f_17 = { Var1 };
			Local_93[iParam0 /*36*/].f_25 = iVar0;
			func_301(iParam0, 0);
			if (bLocal_540)
			{
				Local_95[iVar0 /*5*/].f_3 = 1;
			}
		}
	}
	Local_93[iParam0 /*36*/].f_32 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359.9f);
	if (func_318(&(Local_93[iParam0 /*36*/]), Local_93[iParam0 /*36*/].f_17, Local_93[iParam0 /*36*/].f_32, Local_93[iParam0 /*36*/].f_15, 0, 0))
	{
		func_317(&(Local_93[iParam0 /*36*/]), iParam1, iParam3);
		return 1;
	}
	return 0;
}

int func_327()//Position - 0x2AE3B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 58);
	if (Local_95[iVar0 /*5*/].f_3)
	{
		return 59;
	}
	if (!__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		return 59;
	}
	if (CAM::IS_SPHERE_VISIBLE(Local_95[iVar0 /*5*/], 4f))
	{
		return 59;
	}
	Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	Var2 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	Var3 = { __LIB_0__::func_298(0f, 1f, 0f, Var2.f_2) };
	Var4 = { Local_95[iVar0 /*5*/] - Var1 };
	fVar5 = __LIB_0__::func_156(Var3, Var4);
	if (fVar5 > 0f)
	{
		return 59;
	}
	Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var6, Local_95[iVar0 /*5*/], true);
	if (fVar7 > 30f || CAM::IS_SCREEN_FADED_OUT())
	{
		return iVar0;
	}
	return 59;
}

void func_330(var uParam0, int iParam1)//Position - 0x2AF72
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	int iVar9;
	if (!func_314(iParam1))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1));
		}
		return;
	}
	if (uParam0->f_9)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_548, Var0, true);
	bVar2 = ENTITY::IS_ENTITY_ON_SCREEN(*uParam0);
	if (!uParam0->f_12)
	{
		bVar3 = true;
		if (((bVar2 && uParam0->f_2 < MISC::GET_GAME_TIMER()) && fVar1 < fLocal_541) && (iLocal_561 == iParam1 || iLocal_561 == -1))
		{
			iLocal_561 = iParam1;
			iVar4 = func_333(uParam0, Var0, fVar1);
			if (iVar4 == 1)
			{
				bVar3 = false;
			}
		}
		if (bVar2 && !bVar3)
		{
			HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Var0, &fVar5, &fVar6);
			if ((((fVar5 > 0.3f && fVar5 < 0.7f) && fVar6 > 0.3f) && fVar6 < 0.7f) && fVar1 < fLocal_541)
			{
				__LIB_0__::func_523(&(uParam0->f_1));
				__LIB_39__::func_378(&(uParam0->f_1), *uParam0, 1, 1065353216);
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, true, 11);
				uParam0->f_12 = 1;
				func_331("HUNTING_SPOT_ANIMAL", 0);
				return;
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (((iLocal_547 && MISC::GET_GAME_TIMER() > iLocal_687) && !uParam0->f_10) || uParam0->f_10)
		{
			if (uParam0->f_10)
			{
				fVar7 = (fVar1 * 0.5f);
				Var8 = { Var0 };
				uParam0->f_1 = HUD::ADD_BLIP_FOR_RADIUS(Var8, fVar7);
				HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
				HUD::SET_BLIP_COLOUR(uParam0->f_1, 1);
				HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_1, false);
				uParam0->f_5 = MISC::GET_GAME_TIMER() + 4000;
			}
			if ((uParam0->f_8 && MISC::GET_GAME_TIMER() > iLocal_687) || iLocal_547)
			{
				if (!uParam0->f_10)
				{
					if (uParam0->f_6 == 0)
					{
						uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 11) * 100);
					}
					else if (uParam0->f_6 < MISC::GET_GAME_TIMER())
					{
						uParam0->f_6 = 0;
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", *uParam0, 0, false, 0);
						uParam0->f_10 = 1;
						iLocal_558 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
					}
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if ((iLocal_547 && MISC::GET_GAME_TIMER() > iLocal_687) && !uParam0->f_10)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", *uParam0, 0, false, 0);
			uParam0->f_10 = 1;
			iLocal_558 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
			return;
		}
		if ((MISC::GET_GAME_TIMER() > uParam0->f_5 && fVar1 > 35f) && uParam0->f_11)
		{
			if (bVar2)
			{
				if ((uParam0->f_2 < MISC::GET_GAME_TIMER() && (iLocal_561 == iParam1 || iLocal_561 == -1)) && fVar1 < fLocal_541)
				{
					iLocal_561 = iParam1;
					iVar9 = func_333(uParam0, Var0, fVar1);
					if (iVar9 == 1)
					{
						if (uParam0->f_12)
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 255);
						}
						else
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
						}
						uParam0->f_5 = MISC::GET_GAME_TIMER() + 10000;
						return;
					}
					else if (iVar9 == -1)
					{
					}
					else if (iVar9 == 0)
					{
					}
				}
			}
			uParam0->f_3 = HUD::GET_BLIP_ALPHA(uParam0->f_1);
			if (uParam0->f_3 > 0)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 1000) > 666)
				{
					uParam0->f_3 = (uParam0->f_3 - 1);
					HUD::SET_BLIP_ALPHA(uParam0->f_1, uParam0->f_3);
				}
			}
			else
			{
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, false, 11);
				__LIB_0__::func_523(&(uParam0->f_1));
				uParam0->f_12 = 0;
				uParam0->f_10 = 0;
				iLocal_547 = 0;
			}
		}
	}
}

void func_331(char* sParam0, bool bParam1)//Position - 0x2B306
{
	if (!bParam1 && Local_96.f_54 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), sParam0, "TREVOR_NORMAL", __LIB_0__::func_375(3), false);
	Local_96.f_54 += 8000;
}

int func_333(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2B53C
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	if (iLocal_562 == 0)
	{
		Var0 = { Local_548 + Vector(0.75f, 0f, 0f) };
		iLocal_562 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Param1, 1, 0, 7);
	}
	else
	{
		iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_562, &iVar1, &uVar2, &uVar3, &uVar4);
		if (iVar5 == 2)
		{
			if (iVar1 == 0)
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + __LIB_29__::func_688(fParam2));
				iLocal_561 = -1;
				iLocal_562 = 0;
				return 1;
			}
			else
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + __LIB_29__::func_688(fParam2));
				iLocal_561 = -1;
				iLocal_562 = 0;
				return -1;
			}
		}
		else if (iVar5 == 0)
		{
			iLocal_561 = -1;
			iLocal_562 = 0;
			return -1;
		}
	}
	return 0;
}

void func_335(int iParam0)//Position - 0x2B621
{
	if (!func_314(iParam0))
	{
		return;
	}
	if (!Local_93[iParam0 /*36*/].f_8)
	{
		return;
	}
	if (Local_93[iParam0 /*36*/].f_9)
	{
		return;
	}
	if ((iLocal_547 && iLocal_688 + 4000 + 5000 < MISC::GET_GAME_TIMER()) && Local_93[iParam0 /*36*/].f_4 < MISC::GET_GAME_TIMER())
	{
		iLocal_547 = 0;
		Local_93[iParam0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
		Local_93[iParam0 /*36*/].f_10 = 1;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
		iLocal_560 = -1;
		iLocal_558 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	}
	if (iLocal_558 != -1 && iLocal_558 < MISC::GET_GAME_TIMER())
	{
		Local_93[iParam0 /*36*/].f_10 = 1;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
		iLocal_559 = MISC::GET_GAME_TIMER() + 4000;
		iLocal_560 = iParam0;
		iLocal_558 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	}
	else if ((iLocal_560 != -1 && iLocal_559 < MISC::GET_GAME_TIMER()) && iLocal_559 != -1)
	{
		if (iParam0 != iLocal_560)
		{
			Local_93[iParam0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
			Local_93[iParam0 /*36*/].f_10 = 1;
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_93[iParam0 /*36*/], 0, false, 0);
			iLocal_559 = MISC::GET_GAME_TIMER() + 4000;
		}
		iLocal_557 = 1;
	}
}

void func_336(int iParam0)//Position - 0x2B771
{
	bool bVar0;
	bVar0 = Local_93[iParam0 /*36*/].f_9;
	if (func_314(iParam0) && !Local_93[iParam0 /*36*/].f_9)
	{
		Local_93[iParam0 /*36*/].f_17 = { ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], false) };
		Local_93[iParam0 /*36*/].f_33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_93[iParam0 /*36*/].f_17, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), false);
		Local_93[iParam0 /*36*/].f_20 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_93[iParam0 /*36*/].f_17, fLocal_538, -Local_555) };
		if (PED::CAN_PED_SEE_HATED_PED(Local_93[iParam0 /*36*/], PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_540)
			{
				__LIB_0__::func_151("AHT_CROUCH", -1);
			}
			else
			{
				__LIB_0__::func_151("HT_CROUCH", -1);
				func_344(iParam0);
				Local_93[iParam0 /*36*/].f_14 = 1;
			}
			func_301(iParam0, 1);
		}
		if (Local_93[iParam0 /*36*/].f_33 < 8.25f)
		{
			if (bLocal_540)
			{
				__LIB_0__::func_151("AHT_NOTICED", -1);
			}
			else
			{
				__LIB_0__::func_151("HT_HEARD", -1);
			}
			Local_93[iParam0 /*36*/].f_14 = 2;
			func_301(iParam0, 1);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_93[iParam0 /*36*/].f_17 + Vector(-45f, 0f, 0f), Local_93[iParam0 /*36*/].f_20 + Vector(45f, 0f, 0f), 10f, false, false, 0))
		{
			if (bLocal_540)
			{
				__LIB_0__::func_151("AHT_SCENT", -1);
			}
			else
			{
				__LIB_0__::func_151("HT_SCENT", -1);
			}
			func_344(iParam0);
			Local_93[iParam0 /*36*/].f_14 = 3;
			func_301(iParam0, 1);
		}
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_93[iParam0 /*36*/]))
		{
			if (bLocal_540)
			{
				__LIB_0__::func_151("AHT_HEARD", -1);
			}
			else
			{
				func_344(iParam0);
				__LIB_0__::func_151("HT_HEARD", -1);
				Local_93[iParam0 /*36*/].f_14 = 2;
			}
			func_301(iParam0, 1);
		}
		if (func_342(iParam0))
		{
			if (!bLocal_540)
			{
				func_344(iParam0);
				Local_93[iParam0 /*36*/].f_14 = 4;
			}
			func_301(iParam0, 1);
		}
		if (__LIB_36__::func_80(Local_93[iParam0 /*36*/], 1090519040, 1097859072))
		{
			if (!iLocal_571)
			{
				iLocal_570 = MISC::GET_GAME_TIMER() + 500;
				iLocal_571 = 1;
			}
			if (bLocal_540)
			{
				func_331("HUNTING_MISSED", 0);
				iLocal_569 = Local_96.f_6;
				func_301(iParam0, 1);
			}
			else
			{
				func_344(iParam0);
				func_301(iParam0, 1);
				Local_93[iParam0 /*36*/].f_14 = 5;
			}
		}
		if (iLocal_571)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_570)
			{
				if (iLocal_569 == Local_96.f_6 && !bLocal_572)
				{
					if (bLocal_540)
					{
						__LIB_0__::func_151("AHT_MISS", -1);
					}
					else
					{
						__LIB_0__::func_151("HT_MISS", -1);
					}
				}
				iLocal_573 = 1;
				iLocal_571 = 0;
			}
		}
	}
	if (Local_93[iParam0 /*36*/].f_9 && !bVar0)
	{
		Local_96.f_32 = 0;
		if (Local_93[iParam0 /*36*/].f_29 || Local_93[iParam0 /*36*/].f_28)
		{
			func_337(iParam0);
		}
	}
}

void func_337(int iParam0)//Position - 0x2BA21
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (Local_93[iParam0 /*36*/].f_29)
	{
		iVar0 = Local_93[iParam0 /*36*/].f_30;
	}
	func_301(iParam0, 1);
	Local_93[iParam0 /*36*/].f_28 = 0;
	Local_93[iParam0 /*36*/].f_29 = 0;
	Local_93[iParam0 /*36*/].f_30 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Local_93[iVar1 /*36*/].f_30 == iVar0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_93[iVar1 /*36*/]) && !ENTITY::IS_ENTITY_DEAD(Local_93[iVar1 /*36*/], false))
			{
				func_344(iVar1);
				Local_93[iVar1 /*36*/].f_14 = 4;
				func_301(iVar1, 1);
				Local_93[iVar1 /*36*/].f_28 = 0;
				Local_93[iVar1 /*36*/].f_29 = 0;
				Local_93[iVar1 /*36*/].f_30 = -1;
			}
		}
		iVar1++;
	}
}

int func_342(int iParam0)//Position - 0x2BD3A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != iParam0)
		{
			if (func_314(iVar0))
			{
				if (Local_93[iVar0 /*36*/].f_9)
				{
					if (__LIB_0__::func_76(Local_93[iParam0 /*36*/], Local_93[iVar0 /*36*/], 1) < 10f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_344(int iParam0)//Position - 0x2BDF0
{
	if (!bLocal_540)
	{
		if (__LIB_0__::func_121(Local_93[iParam0 /*36*/]))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_93[iParam0 /*36*/], true, false, false, false, false, false, false, false);
			TASK::TASK_SMART_FLEE_PED(Local_93[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			PED::SET_PED_KEEP_TASK(Local_93[iParam0 /*36*/], true);
		}
		func_301(iParam0, 1);
	}
}

void func_345()//Position - 0x2BE46
{
	int iVar0;
	if (!iLocal_546)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar0) != 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(iVar0)))
	{
		return;
	}
	if (__LIB_0__::func_75())
	{
		return;
	}
	if ((((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PED::IS_PED_RAGDOLL(iVar0)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iVar0)) || iLocal_689 != -1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_690)
		{
			if (iLocal_689 == -1)
			{
				iLocal_689 = MISC::GET_GAME_TIMER() + 250;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_689)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					TASK::TASK_PLAY_ANIM(iVar0, "facials@p_m_one@variations@elkcall", "mood_elkcal_1", 8f, -8f, -1, 32, 0f, false, false, false);
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PLAYER_CALLS_ELK_MASTER", iVar0, 0, false, 0);
				HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 11);
				iLocal_690 = MISC::GET_GAME_TIMER() + 2500;
				Local_96.f_34 = 0;
				Local_96.f_48 = MISC::GET_GAME_TIMER() + 1750;
				iLocal_689 = -1;
				iLocal_558 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
				if (!iLocal_547)
				{
					iLocal_687 = MISC::GET_GAME_TIMER() + 3500;
					iLocal_688 = MISC::GET_GAME_TIMER() + 4000;
					iLocal_547 = 1;
				}
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < iLocal_688)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
}

void func_346()//Position - 0x2BF9F
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (iLocal_908[11])
	{
		if (!__LIB_0__::func_75())
		{
			if (!iLocal_914[5])
			{
				if (func_348(4))
				{
					func_347(4);
					Var0 = { Local_970 };
					fVar1 = fLocal_971;
					fVar2 = (8.25f * 4f);
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0) <= fVar2)
					{
						Var0 = { Local_972 };
						fVar1 = fLocal_973;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_93[4 /*36*/], Var0, 2f, -1, 0.25f, 0, fVar1);
					Local_93[4 /*36*/].f_27 = 0;
					Local_95[0 /*5*/] = { Var0 };
					Local_93[4 /*36*/].f_16 = 9;
					iLocal_689 = -1;
					func_295(5);
					iLocal_546 = 1;
				}
			}
			else
			{
				func_300(4);
				func_345();
				if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
				{
					HUD::CLEAR_HELP(true);
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_964[4 /*3*/], -1, 0, 2);
					iLocal_934 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_710 = 17;
					iLocal_711 = 1;
				}
				else if (Local_93[4 /*36*/].f_9)
				{
					func_14(Local_93[4 /*36*/]);
					if (bLocal_901)
					{
						func_298(10);
					}
					else
					{
						__LIB_0__::func_498(770);
						func_292(func_293(4));
						func_298(iLocal_715);
					}
				}
				else if (!__LIB_1__::func_197(Local_93[4 /*36*/]))
				{
					HUD::CLEAR_HELP(true);
					iLocal_710 = 17;
					__LIB_0__::func_444("HT_OBJ");
					func_10();
					func_14(Local_93[4 /*36*/]);
					iLocal_546 = 0;
					if (!bLocal_901)
					{
						iLocal_934 = MISC::GET_GAME_TIMER() + 1700;
						iLocal_711 = 2;
					}
					else
					{
						func_298(10);
					}
				}
			}
		}
	}
}

void func_347(int iParam0)//Position - 0x2C12A
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]) && !ENTITY::IS_ENTITY_VISIBLE(Local_93[iParam0 /*36*/]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_93[iParam0 /*36*/], true, false);
	}
}

int func_348(int iParam0)//Position - 0x2C15B
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]))
	{
		if (iParam0 == 0)
		{
			if (func_352(iParam0, 10, Local_964[iParam0 /*3*/], 0, 0))
			{
				if (__LIB_0__::func_121(Local_93[iParam0 /*36*/]))
				{
					iLocal_547 = 0;
					ENTITY::SET_ENTITY_HEADING(Local_93[iParam0 /*36*/], fLocal_924[iParam0]);
					func_351(Local_93[iParam0 /*36*/], 1);
					__LIB_4__::func_588(&(Local_93[iParam0 /*36*/]), 0);
					__LIB_29__::func_682(&(Local_93[iParam0 /*36*/]), 1);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_93[iParam0 /*36*/]);
					return 1;
				}
			}
		}
		else if (func_352(iParam0, 10, Local_964[iParam0 /*3*/], 0, 1))
		{
			if (__LIB_0__::func_121(Local_93[iParam0 /*36*/]))
			{
				iLocal_547 = 0;
				ENTITY::SET_ENTITY_HEADING(Local_93[iParam0 /*36*/], fLocal_924[iParam0]);
				__LIB_4__::func_588(&(Local_93[iParam0 /*36*/]), 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_93[iParam0 /*36*/], false, false);
				if (iParam0 == 3)
				{
					func_351(Local_93[iParam0 /*36*/], 0);
				}
				else
				{
					func_351(Local_93[iParam0 /*36*/], 1);
					__LIB_29__::func_682(&(Local_93[iParam0 /*36*/]), 1);
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_93[iParam0 /*36*/]);
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

void func_351(int iParam0, bool bParam1)//Position - 0x2C28C
{
	if (bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "doe_elk"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "doe_elk");
		}
		if (__LIB_0__::func_121(iParam0))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "doe_elk"))
	{
		if (__LIB_0__::func_121(iParam0))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
		}
		DECORATOR::DECOR_SET_BOOL(iParam0, "doe_elk", true);
	}
}

int func_352(int iParam0, int iParam1, struct<3> Param2, int iParam3, int iParam4)//Position - 0x2C2F6
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]))
	{
		if (func_324(iParam0, iParam1, iParam3, iParam4))
		{
			__LIB_10__::func_701(Local_93[iParam0 /*36*/], Param2, 0, 0, 1);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_353()//Position - 0x2C339
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			__LIB_29__::func_679();
			func_240();
			__LIB_0__::func_296();
			__LIB_6__::func_771();
			iLocal_711 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (__LIB_1__::func_197(iLocal_939))
				{
					TASK::CLEAR_PED_TASKS(iLocal_939);
					__LIB_10__::func_701(iLocal_939, Local_962, fLocal_923, 0, 1);
					func_429(0, 0);
				}
				if (!__LIB_0__::func_295())
				{
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_961, fLocal_919, 0, 1);
					__LIB_20__::func_665(Local_961, 1112014848, 12, 5000, 0, 0);
				}
				__LIB_42__::func_415(4, "Player has done third elk", 1, 0, 0, 1);
				func_555(1);
				func_226();
				iLocal_546 = 0;
				iLocal_884 = 1;
				iLocal_711 = 2;
			}
			break;
		case 2:
			__LIB_6__::func_775(0, -1, 1);
			__LIB_29__::func_680();
			__LIB_29__::func_678();
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
			iLocal_934 = MISC::GET_GAME_TIMER() + 1700;
			iLocal_914[5] = 0;
			iLocal_908[10] = 1;
			iLocal_714 = 0;
			iLocal_712 = 12;
			iLocal_711 = 0;
			iLocal_710 = 15;
			break;
	}
}

void func_429(bool bParam0, bool bParam1)//Position - 0x33526
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_882))
	{
		iLocal_882 = __LIB_10__::func_711(iLocal_939, 1, 1, 5);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_882))
	{
		if (!bParam0)
		{
			HUD::SET_BLIP_SCALE(iLocal_882, 0.75f);
		}
		HUD::SET_BLIP_FLASHES(iLocal_882, bParam1);
	}
}

void func_431()//Position - 0x335BD
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_345();
	func_300(2);
	func_300(3);
	switch (iLocal_711)
	{
		case 0:
			iLocal_711 = 1;
			break;
		case 1:
			if (!Local_93[2 /*36*/].f_9)
			{
				if (!__LIB_1__::func_197(Local_93[2 /*36*/]))
				{
					if (iLocal_546)
					{
						func_10();
						func_14(Local_93[2 /*36*/]);
						iLocal_546 = 0;
					}
					if (!iLocal_888)
					{
						if (__LIB_1__::func_197(Local_93[3 /*36*/]))
						{
							func_344(3);
						}
						iLocal_888 = 1;
					}
					if (!bLocal_901)
					{
						if (func_432(15f))
						{
							HUD::CLEAR_HELP(true);
							if (iLocal_903)
							{
								func_429(0, 0);
								__LIB_0__::func_444("HT_BAC");
								iLocal_903 = 0;
							}
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
							iLocal_934 = MISC::GET_GAME_TIMER() + 1700;
							iLocal_711 = 2;
						}
						else if (!iLocal_903 && !__LIB_0__::func_75())
						{
							HUD::CLEAR_HELP(true);
							func_429(0, 0);
							__LIB_34__::func_806("HT_BAC");
							iLocal_903 = 1;
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						HUD::CLEAR_HELP(true);
						func_298(10);
					}
				}
				else
				{
					if (!iLocal_910[2])
					{
						if (iLocal_908[9] && !__LIB_0__::func_75())
						{
							__LIB_34__::func_806("HT_OBJ");
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), false);
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_964[2 /*3*/], -1, 0, 2);
							iLocal_910[2] = 1;
						}
					}
					else if (!__LIB_0__::func_405("HT_OBJ", 0, 0))
					{
						if (!iLocal_914[6])
						{
							func_295(6);
						}
					}
					if (!__LIB_1__::func_197(Local_93[3 /*36*/]))
					{
						if (!iLocal_888)
						{
							func_344(2);
							iLocal_888 = 1;
							func_298(1);
						}
						else if (!__LIB_0__::func_75())
						{
							func_298(11);
						}
					}
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
				func_14(Local_93[2 /*36*/]);
				if (bLocal_901)
				{
					func_298(10);
				}
				else
				{
					__LIB_0__::func_498(770);
					func_292(func_293(2));
					func_298(iLocal_715);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_1("HT_MISS"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!iLocal_888)
			{
				if (__LIB_1__::func_197(Local_93[3 /*36*/]))
				{
					func_344(3);
				}
				iLocal_888 = 1;
			}
			if (MISC::GET_GAME_TIMER() > iLocal_934)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), false);
				__LIB_42__::func_415(4, "Player has done third elk", 1, 0, 0, 1);
				iLocal_711 = 0;
				iLocal_710 = 15;
			}
			break;
	}
}

int func_432(float fParam0)//Position - 0x33816
{
	float fVar0;
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_197(iLocal_939))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_939, true), false);
		if (fVar0 < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_433()//Position - 0x3385A
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (func_432(15f))
	{
		func_429(0, 0);
		if (iLocal_903)
		{
			__LIB_0__::func_444("HT_BAC");
			iLocal_903 = 0;
		}
		if (iLocal_908[8] && iLocal_712 != 2)
		{
			if (!__LIB_0__::func_75())
			{
				if (!iLocal_914[4] && !iLocal_546)
				{
					iLocal_689 = -1;
					iLocal_546 = 1;
					func_295(4);
				}
				else if (!iLocal_994)
				{
					func_345();
					if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
					{
						func_347(2);
						func_347(3);
						iLocal_934 = MISC::GET_GAME_TIMER() + 3000;
						HUD::CLEAR_HELP(true);
						iLocal_994 = 1;
					}
				}
				else if (func_348(2) && func_348(3))
				{
					func_435(&(Local_93[3 /*36*/]), 0);
					func_347(2);
					func_347(3);
					Local_93[2 /*36*/].f_27 = 0;
					Local_95[0 /*5*/] = { Local_966 };
					Local_93[2 /*36*/].f_16 = 9;
					Local_93[3 /*36*/].f_27 = 0;
					Local_95[0 /*5*/] = { Local_968 };
					Local_93[3 /*36*/].f_16 = 9;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_93[2 /*36*/], Local_966, 2f, -1, 0.25f, 0, fLocal_967);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_93[3 /*36*/], Local_968, 2f, -1, 0.25f, 0, fLocal_969);
					iLocal_710 = 13;
					iLocal_711 = 0;
				}
			}
		}
	}
	else
	{
		func_434();
		if (!iLocal_903)
		{
			iLocal_546 = 0;
			HUD::CLEAR_HELP(true);
			iLocal_914[4] = 0;
			func_429(0, 0);
			__LIB_34__::func_806("HT_BAC");
			iLocal_903 = 1;
		}
	}
}

void func_434()//Position - 0x339D4
{
	float fVar0;
	if (__LIB_1__::func_197(iLocal_939))
	{
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = __LIB_0__::func_76(iLocal_939, PLAYER::PLAYER_PED_ID(), 0);
			if (fVar0 > 100f)
			{
				if (!iLocal_902)
				{
					__LIB_34__::func_806("HT_BAC");
					iLocal_902 = 1;
				}
			}
			else if (iLocal_902)
			{
				__LIB_0__::func_444("HT_BAC");
				iLocal_902 = 0;
			}
			if (fVar0 > 150f)
			{
				func_298(6);
			}
		}
	}
}

void func_435(var uParam0, bool bParam1)//Position - 0x33A44
{
	uParam0->f_13 = !bParam1;
}

void func_436()//Position - 0x33A53
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			__LIB_29__::func_679();
			func_240();
			__LIB_0__::func_296();
			__LIB_6__::func_771();
			iLocal_711 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (!PED::IS_PED_INJURED(iLocal_939))
				{
					TASK::CLEAR_PED_TASKS(iLocal_939);
					__LIB_10__::func_701(iLocal_939, Local_960, fLocal_922, 0, 1);
					func_429(0, 0);
				}
				if (!__LIB_0__::func_295())
				{
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_959, fLocal_918, 0, 1);
					__LIB_20__::func_665(Local_961, 1112014848, 12, 5000, 0, 0);
				}
				__LIB_42__::func_415(3, "Player has done second elk", 0, 0, 0, 1);
				func_555(1);
				func_226();
				iLocal_546 = 0;
				iLocal_884 = 1;
				iLocal_711 = 2;
			}
			break;
		case 2:
			__LIB_6__::func_775(0, -1, 1);
			__LIB_29__::func_680();
			__LIB_29__::func_678();
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
			iLocal_934 = MISC::GET_GAME_TIMER() + 1700;
			iLocal_914[4] = 0;
			iLocal_714 = 0;
			iLocal_712 = 9;
			iLocal_711 = 0;
			iLocal_710 = 11;
			break;
	}
}

void func_437()//Position - 0x33B60
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_345();
	func_300(1);
	switch (iLocal_711)
	{
		case 0:
			iLocal_711 = 1;
			break;
		case 1:
			if (!Local_93[1 /*36*/].f_9)
			{
				if (!__LIB_1__::func_197(Local_93[1 /*36*/]))
				{
					if (iLocal_546)
					{
						func_10();
						__LIB_0__::func_444("HT_OBJ");
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
						func_14(Local_93[1 /*36*/]);
						iLocal_546 = 0;
					}
					if (!bLocal_901)
					{
						if (iLocal_908[6])
						{
							if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
							{
								if (func_432(6f))
								{
									if (iLocal_903)
									{
										func_429(0, 0);
										__LIB_0__::func_444("HT_BAC");
										iLocal_903 = 0;
									}
									iLocal_934 = MISC::GET_GAME_TIMER() + 1700;
									iLocal_711 = 2;
								}
								else if (!iLocal_903 && !__LIB_0__::func_75())
								{
									func_429(0, 0);
									__LIB_34__::func_806("HT_BAC");
									iLocal_903 = 1;
								}
							}
						}
					}
					else
					{
						func_298(10);
					}
				}
				else if (((HUD::DOES_BLIP_EXIST(Local_93[1 /*36*/].f_1) && !iLocal_910[1]) && iLocal_908[5]) && !__LIB_0__::func_75())
				{
					__LIB_34__::func_806("HT_OBJ");
					iLocal_910[1] = 1;
				}
			}
			else
			{
				func_14(Local_93[1 /*36*/]);
				if (bLocal_901)
				{
					func_298(10);
				}
				else
				{
					__LIB_0__::func_498(770);
					func_292(func_293(1));
					func_298(iLocal_715);
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_934)
			{
				__LIB_42__::func_415(3, "Player has done second elk", 0, 0, 0, 1);
				iLocal_711 = 0;
				iLocal_710 = 11;
			}
			break;
	}
}

void func_438()//Position - 0x33D04
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			if (func_432(15f))
			{
				if (iLocal_903)
				{
					func_429(0, 0);
					__LIB_0__::func_444("HT_BAC");
					iLocal_903 = 0;
				}
				iLocal_711 = 1;
			}
			break;
		case 1:
			if (func_432(15f))
			{
				iLocal_903 = 0;
				if (iLocal_908[4])
				{
					if (!__LIB_0__::func_75())
					{
						if (!iLocal_914[3])
						{
							iLocal_689 = -1;
							if (func_348(1))
							{
								func_347(1);
								Local_93[1 /*36*/].f_27 = 0;
								Local_95[0 /*5*/] = { Local_965 };
								Local_93[1 /*36*/].f_16 = 9;
								func_295(3);
								iLocal_546 = 1;
							}
						}
						else
						{
							if (!__LIB_0__::func_1("HT_CALL"))
							{
								if (__LIB_0__::func_405("HT_BAC", 0, 0))
								{
									HUD::CLEAR_THIS_PRINT("HT_BAC");
								}
								func_295(3);
							}
							func_345();
							func_300(1);
							if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
							{
								__LIB_0__::func_523(&iLocal_882);
								HUD::CLEAR_HELP(true);
								iLocal_711 = 2;
							}
						}
					}
				}
			}
			else
			{
				func_434();
				if (!iLocal_903)
				{
					HUD::CLEAR_HELP(true);
					func_429(0, 0);
					__LIB_34__::func_806("HT_BAC");
					iLocal_903 = 1;
				}
			}
			break;
		case 2:
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), false);
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_964[1 /*3*/], -1, 0, 2);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_93[1 /*36*/], Local_965, 2f, -1, 0.25f, 0, 40000f);
			iLocal_934 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_710 = 9;
			iLocal_711 = 0;
			break;
	}
}

void func_439()//Position - 0x33E83
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			__LIB_29__::func_679();
			func_240();
			__LIB_0__::func_296();
			__LIB_6__::func_771();
			iLocal_711 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				if (!PED::IS_PED_INJURED(iLocal_939))
				{
					TASK::CLEAR_PED_TASKS(iLocal_939);
					__LIB_10__::func_701(iLocal_939, Local_957, fLocal_958, 0, 1);
					func_429(0, 0);
				}
				if (!__LIB_0__::func_295())
				{
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_955, fLocal_956, 0, 1);
					__LIB_20__::func_665(Local_953, 1112014848, 12, 5000, 0, 0);
				}
				__LIB_42__::func_415(2, "Player has done first elk", 0, 0, 0, 1);
				func_555(1);
				iLocal_884 = 1;
				iLocal_546 = 0;
				iLocal_711 = 2;
			}
			break;
		case 2:
			__LIB_6__::func_775(0, -1, 1);
			__LIB_29__::func_678();
			iLocal_908[3] = 0;
			iLocal_714 = 0;
			iLocal_712 = 5;
			iLocal_711 = 0;
			iLocal_710 = 7;
			break;
	}
}

void func_440()//Position - 0x33F73
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_345();
	func_300(0);
	switch (iLocal_711)
	{
		case 0:
			__LIB_42__::func_415(1, "Player has done Hunter's tutorial", 0, 0, 0, 1);
			iLocal_711 = 1;
			break;
		case 1:
			if (!iLocal_910[0])
			{
				if ((iLocal_908[1] && !__LIB_0__::func_75()) && bLocal_983)
				{
					__LIB_34__::func_806("HT_OBJ");
					iLocal_547 = 1;
					if (__LIB_0__::func_405("HT_OBJ", 0, 0))
					{
						iLocal_910[0] = 1;
						__LIB_0__::func_523(&iLocal_882);
					}
				}
			}
			else if (!__LIB_0__::func_405("HT_OBJ", 0, 0))
			{
				if (!iLocal_914[1] && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
				{
					func_295(1);
				}
			}
			if (!Local_93[0 /*36*/].f_9)
			{
				if (!__LIB_1__::func_197(Local_93[0 /*36*/]))
				{
					__LIB_0__::func_444("HT_OBJ");
					func_10();
					func_14(Local_93[0 /*36*/]);
					if (!bLocal_901)
					{
						if (iLocal_908[2])
						{
							if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
							{
								if (func_432(15f))
								{
									if (iLocal_903)
									{
										__LIB_0__::func_444("HT_BAC");
										iLocal_903 = 0;
									}
									func_429(0, 0);
									PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
									iLocal_711 = 2;
								}
								else if (!iLocal_903 && !__LIB_0__::func_75())
								{
									func_429(0, 0);
									__LIB_34__::func_806("HT_BAC");
									iLocal_903 = 1;
								}
							}
						}
					}
					else
					{
						HUD::CLEAR_HELP(true);
						func_298(10);
					}
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
				func_10();
				func_14(Local_93[0 /*36*/]);
				if (bLocal_901)
				{
					func_298(10);
				}
				else
				{
					__LIB_0__::func_498(770);
					func_292(func_293(0));
					func_298(iLocal_715);
				}
			}
			break;
		case 2:
			__LIB_42__::func_415(2, "Player has done first elk", 0, 0, 0, 1);
			iLocal_711 = 0;
			iLocal_710 = 7;
			break;
	}
}

void func_441()//Position - 0x3414B
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			iLocal_711 = 1;
			break;
		case 1:
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (!Local_93[0 /*36*/].f_9)
				{
					if (func_432(15f))
					{
						if (iLocal_903)
						{
							func_429(0, 0);
							__LIB_0__::func_444("HT_BAC");
							iLocal_903 = 0;
						}
						if (iLocal_908[1])
						{
							iLocal_993 = 0;
							if (func_348(0))
							{
								iLocal_993 = 1;
								iLocal_711 = 2;
							}
						}
					}
					else
					{
						func_434();
						if (!iLocal_903)
						{
							func_429(0, 0);
							__LIB_34__::func_806("HT_BAC");
							iLocal_903 = 1;
						}
						if (iLocal_895)
						{
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), false);
							iLocal_895 = 0;
						}
					}
				}
				else
				{
					func_344(0);
					__LIB_0__::func_498(770);
					func_292(func_293(0));
					func_298(iLocal_715);
				}
			}
			break;
		case 2:
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), false);
			iLocal_711 = 0;
			iLocal_710 = 5;
			break;
	}
}

void func_442()//Position - 0x34245
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			__LIB_29__::func_679();
			func_240();
			__LIB_0__::func_296();
			__LIB_6__::func_771();
			iLocal_711 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_10();
				func_555(0);
				if (!__LIB_0__::func_295())
				{
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_953, fLocal_917, 0, 1);
					__LIB_20__::func_665(Local_953, 1112014848, 12, 5000, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_939))
				{
					TASK::CLEAR_PED_TASKS(iLocal_939);
				}
				__LIB_10__::func_701(iLocal_939, Local_954, fLocal_921, 0, 1);
				iLocal_711 = 2;
			}
			break;
		case 2:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
				__LIB_6__::func_775(0, -1, 1);
				__LIB_29__::func_678();
				__LIB_29__::func_680();
				__LIB_0__::func_296();
				__LIB_6__::func_771();
				iLocal_884 = 1;
				func_295(0);
				iLocal_714 = 0;
				iLocal_712 = 3;
				iLocal_711 = 0;
				iLocal_710 = 4;
			}
			break;
	}
}

void func_443()//Position - 0x3433B
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			__LIB_29__::func_679();
			iLocal_711 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!__LIB_0__::func_295())
				{
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_951, fLocal_916, 0, 1);
					__LIB_20__::func_665(Local_951, 1112014848, 12, 5000, 0, 0);
					__LIB_29__::func_680();
				}
				__LIB_42__::func_415(0, "Mocap Intro Done", 0, 0, 0, 1);
				__LIB_10__::func_701(iLocal_939, Local_952, fLocal_920, 0, 1);
				func_226();
				func_555(1);
				iLocal_711 = 2;
			}
			break;
		case 2:
			__LIB_6__::func_775(0, -1, 1);
			__LIB_29__::func_678();
			func_429(1, 0);
			iLocal_712 = 1;
			iLocal_714 = 0;
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
			__LIB_0__::func_210("HT_FOLLOW", 6500, 0);
			iLocal_710 = 4;
			iLocal_711 = 0;
			break;
	}
}

void func_444()//Position - 0x3441C
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_711)
	{
		case 0:
			iLocal_926 = 0;
			__LIB_26__::func_478("HUN_2_MCS_1", 0);
			iLocal_711 = 1;
			break;
		case 1:
			switch (iLocal_926)
			{
				case 0:
					if (__LIB_18__::func_170(1, 1093140480, 0))
					{
						if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_943, 0, 0, 0);
						}
						if (__LIB_0__::func_121(iLocal_939))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_939, "Cletus", 0, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cletus", PLAYER::PLAYER_PED_ID(), 0);
							iLocal_937 = __LIB_18__::func_490(iLocal_939, joaat("WEAPON_PUMPSHOTGUN"), 1, 0, 0, 0, 0, 0, 0);
							iLocal_938 = __LIB_18__::func_490(iLocal_939, joaat("WEAPON_SNIPERRIFLE"), 1, 0, 0, 0, 0, 0, 0);
							WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_938, joaat("COMPONENT_AT_AR_SUPP_02"));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_937, "Cletus_Gun", 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_938))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_938, "Trevors_Weapon", 0, 0, 0);
						}
						__LIB_26__::func_252();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						SYSTEM::WAIT(0);
						__LIB_32__::func_742(Local_978, Local_979, 5f, Local_981, fLocal_982, 1, 1, 1, 0, 0);
						__LIB_32__::func_742(Local_978, Local_980, 25f, Local_981, fLocal_982, 1, 1, 1, 0, 0);
						func_454(Local_951, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
						iLocal_926++;
					}
					break;
				case 1:
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cletus", joaat("p_cletus_necklace_s")))
					{
						if (!iLocal_889)
						{
							iLocal_712 = 1;
							iLocal_889 = 1;
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_Weapon", WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_SNIPERRIFLE"))))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_938, PLAYER::PLAYER_PED_ID());
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false))
						{
							WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 10);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cletus_Gun", WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_SNIPERRIFLE"))))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_937, iLocal_939);
						PED::FORCE_PED_MOTION_STATE(iLocal_939, joaat("MotionState_Walk"), false, 1, false);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_943, 0))
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
						bLocal_883 = true;
					}
					if (!bLocal_883)
					{
						__LIB_29__::func_680();
					}
					if (CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						RECORDING::REPLAY_STOP_EVENT();
						iLocal_926++;
					}
					break;
				case 2:
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						__LIB_10__::func_701(iLocal_939, Local_952, fLocal_920, 0, 1);
						iLocal_712 = 1;
					}
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_926++;
					}
					break;
				case 3:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					else
					{
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							CUTSCENE::REMOVE_CUTSCENE();
						}
						if (!iLocal_889)
						{
							iLocal_712 = 1;
						}
						__LIB_10__::func_700(&Local_709, 0, 0);
						__LIB_32__::func_574(1, 0, 1, 1);
						iLocal_711 = 2;
					}
					break;
			}
			break;
		case 3:
			__LIB_29__::func_679();
			__LIB_0__::func_296();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_1__::func_197(iLocal_939))
				{
					if (!iLocal_889)
					{
						TASK::CLEAR_PED_TASKS(iLocal_939);
						if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_939, joaat("WEAPON_PUMPSHOTGUN"), false))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_939, joaat("WEAPON_PUMPSHOTGUN"), true);
						}
						__LIB_10__::func_701(iLocal_939, Local_952, fLocal_920, 0, 1);
						iLocal_712 = 1;
						iLocal_889 = 1;
					}
				}
				if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				__LIB_29__::func_680();
				iLocal_711 = 2;
			}
			break;
		case 2:
			func_429(1, 0);
			__LIB_29__::func_678();
			__LIB_0__::func_210("HT_FOLLOW", 6500, 0);
			__LIB_42__::func_415(0, "Mocap Intro Done", 0, 0, 0, 1);
			iLocal_710 = 4;
			iLocal_711 = 0;
			break;
	}
}

void func_454(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x34AE8
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
					if (func_163(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_49(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_163(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_49(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_163(PLAYER::PLAYER_PED_ID(), 8, 1) || func_163(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_49(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_163(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_49(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_37 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_37 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_476()//Position - 0x35E1B
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
	PAD::INIT_PC_SCRIPTED_CONTROLS("HUNTING ELK CALL");
	__LIB_0__::func_203(&uLocal_716, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	__LIB_0__::func_203(&uLocal_716, 3, iLocal_939, "CLETUS", 0, 1);
	func_491();
	func_490();
	func_489();
	func_488();
	__LIB_12__::func_43(0);
	func_226();
	func_486();
	func_485();
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", false);
	STREAMING::REQUEST_ANIM_DICT("facials@p_m_one@variations@elkcall");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_guard_patrol@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@hunter");
	TASK::REQUEST_WAYPOINT_RECORDING("HT2_CLE_0_1");
	TASK::REQUEST_WAYPOINT_RECORDING("HT2_CLE_1_2");
	TASK::REQUEST_WAYPOINT_RECORDING("HT2_CLE_2_3");
	__LIB_24__::func_951(54, 2, 0);
	if (!PED::IS_PED_INJURED(iLocal_939))
	{
		PED::SET_PED_DIES_IN_WATER(iLocal_939, false);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_939);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_939, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_939, false);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_939, joaat("WEAPON_PUMPSHOTGUN"), -1, false, true);
	}
	iLocal_546 = 0;
	bLocal_572 = true;
	fLocal_538 = 0f;
	AUDIO::START_AUDIO_SCENE("AMBIENT_HUNTING_MIX");
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-641.6511f, 5846.5786f, 20.3501f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-642.212f, 5851.602f, 19.9536f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-627.1213f, 5833.1846f, 22.5278f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-636.4395f, 5829.735f, 22.0155f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-607.6405f, 5834.4507f, 24.6594f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-594.2007f, 5834.4136f, 27.2229f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-589.8816f, 5832.7466f, 28.4124f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-586.3449f, 5834.044f, 29.0145f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-581.4914f, 5839.4307f, 29.0466f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-587.1396f, 5844.6973f, 27.3273f, 3f, 3f, 3f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-601.9974f, 5850.203f, 24.0529f, 4f, 4f, 4f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-634.3944f, 5857.5425f, 20.5354f, 4f, 4f, 4f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-637.6848f, 5858.0264f, 20.108f, 2f, 2f, 2f, 0f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-599.4448f, 5841.063f, 25.5058f, 3f, 3f, 3f, 0f, false, 7);
	if (__LIB_0__::func_294())
	{
		iVar0 = __LIB_0__::func_315();
		iLocal_711 = 0;
		if (Global_94618)
		{
			iVar0++;
		}
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_296();
		func_226();
		func_486();
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_370(Local_951, fLocal_916, 1, 0);
				iLocal_710 = 2;
				break;
			case 1:
				__LIB_0__::func_370(Local_953, fLocal_917, 1, 0);
				iLocal_710 = 3;
				break;
			case 2:
				__LIB_0__::func_370(Local_955, fLocal_956, 1, 0);
				iLocal_710 = 6;
				break;
			case 3:
				__LIB_0__::func_370(Local_959, fLocal_918, 1, 0);
				iLocal_710 = 10;
				break;
			case 4:
				__LIB_0__::func_370(Local_961, fLocal_919, 1, 0);
				iLocal_710 = 14;
				break;
			case 5:
				__LIB_0__::func_370(Local_959, fLocal_918, 1, 0);
				iLocal_710 = 23;
				break;
			default:
				break;
		}
	}
	else
	{
		iLocal_712 = 0;
		iLocal_710 = 1;
		iLocal_711 = 0;
	}
}

void func_485()//Position - 0x36520
{
	AUDIO::START_AUDIO_SCENE("HUNTING_02_TRAFFIC_SCENE");
}

void func_486()//Position - 0x36532
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_910[iVar0] = 0;
		iLocal_911[iVar0] = 0;
		iLocal_912[iVar0] = 0;
		iLocal_913[iVar0] = 0;
		iLocal_909[iVar0] = 0;
		iVar0++;
	}
}

void func_488()//Position - 0x365BE
{
	STREAMING::REQUEST_MODEL(iLocal_936);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_CALLS", false, -1);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_VOCALS", false, -1);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_MAIN_A", false, -1);
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@enter");
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@idle_a");
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@exit");
	STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@base");
	while (((((((!STREAMING::HAS_MODEL_LOADED(iLocal_936) || !AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_CALLS", false, -1)) || !AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_VOCALS", false, -1)) || !AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_MAIN_A", false, -1)) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@enter")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@idle_a")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@exit")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@base"))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_886 = 1;
}

void func_489()//Position - 0x3669A
{
	HUD::REQUEST_ADDITIONAL_TEXT("HUNT2", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(sLocal_942, 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_490()//Position - 0x366D1
{
	Local_964[0 /*3*/] = { -588.3788f, 5829.8975f, 29.0621f };
	fLocal_924[0] = 319.3601f;
	Local_964[1 /*3*/] = { -493.6698f, 5880.7144f, 27.8661f };
	fLocal_924[1] = 48.4291f;
	Local_964[2 /*3*/] = { -609.381f, 5715.2627f, 29.0551f };
	fLocal_924[2] = 52.5746f;
	Local_964[3 /*3*/] = { -609.9327f, 5713.117f, 29.1666f };
	fLocal_924[3] = 57.7444f;
	Local_964[4 /*3*/] = { -607.819f, 5713.639f, 28.9654f };
	fLocal_924[4] = 60.308f;
}

void func_491()//Position - 0x36783
{
	if (!iLocal_893)
	{
		PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &iLocal_940);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_939, iLocal_940);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_940, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_940);
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_940, joaat("HATES_PLAYER"));
		PED::ADD_RELATIONSHIP_GROUP("Elk Group", &iLocal_92);
		iLocal_893 = 1;
	}
}

void func_492(bool bParam0, float fParam1)//Position - 0x367E9
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	if (iLocal_692 == -1)
	{
		HUD::GET_HUD_COLOUR(18, &iLocal_692, &iLocal_693, &iLocal_694, &uVar0);
		HUD::GET_HUD_COLOUR(18, &iLocal_698, &iLocal_699, &iLocal_700, &uVar0);
		HUD::GET_HUD_COLOUR(6, &iLocal_695, &iLocal_696, &iLocal_697, &uVar0);
	}
	fVar1 = 0f;
	Var2 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	if (!bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_539 = { MISC::GET_WIND_DIRECTION() };
			fLocal_538 = MISC::GET_HEADING_FROM_VECTOR_2D(Local_539.f_0, Local_539.f_1);
			fVar1 = (Var2.f_2 - fLocal_538);
		}
	}
	else
	{
		fLocal_538 = fParam1;
		fVar1 = (Var2.f_2 - fParam1);
	}
	while (fLocal_538 < 0f)
	{
		fLocal_538 = (fLocal_538 + 360f);
	}
	while (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar3 = MISC::GET_WIND_SPEED();
	if (func_496())
	{
		if (iLocal_692 < iLocal_695)
		{
			iLocal_692++;
		}
		else if (iLocal_692 > iLocal_695)
		{
			iLocal_692 = (iLocal_692 - 1);
		}
		if (iLocal_694 < iLocal_697)
		{
			iLocal_694++;
		}
		else if (iLocal_694 > iLocal_697)
		{
			iLocal_694 = (iLocal_694 - 1);
		}
		if (iLocal_693 < iLocal_696)
		{
			iLocal_693++;
		}
		else if (iLocal_693 > iLocal_696)
		{
			iLocal_693 = (iLocal_693 - 1);
		}
	}
	else
	{
		if (iLocal_692 < iLocal_698)
		{
			iLocal_692++;
		}
		else if (iLocal_692 > iLocal_698)
		{
			iLocal_692 = (iLocal_692 - 1);
		}
		if (iLocal_694 < iLocal_700)
		{
			iLocal_694++;
		}
		else if (iLocal_694 > iLocal_700)
		{
			iLocal_694 = (iLocal_694 - 1);
		}
		if (iLocal_693 < iLocal_699)
		{
			iLocal_693++;
		}
		else if (iLocal_693 > iLocal_699)
		{
			iLocal_693 = (iLocal_693 - 1);
		}
	}
	__LIB_34__::func_811("AHT_WIND_UPPR" /* GXT: ~1~ MPH */, SYSTEM::ROUND(fVar3), fVar1, iLocal_692, iLocal_693, iLocal_694, 6);
}

int func_496()//Position - 0x36A91
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_314(iVar0) && !Local_93[iVar0 /*36*/].f_9)
		{
			Var1 = { __LIB_0__::func_79(Local_93[iVar0 /*36*/].f_20 + Vector(45f, 0f, 0f) - Local_93[iVar0 /*36*/].f_17 + Vector(-45f, 0f, 0f)) };
			Var2 = { Local_93[iVar0 /*36*/].f_17 + Vector(45f, 0f, 0f) };
			Var3 = { Local_93[iVar0 /*36*/].f_20 + Vector(-45f, 0f, 0f) + Var1 * Vector(45f, 45f, 45f) };
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, (10f + 20f), false, false, 0))
			{
				if (bLocal_540)
				{
					if (!Local_96.f_667)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__::func_151("AHT_DOWNWIND", -1);
							Local_96.f_667 = 1;
						}
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_498()//Position - 0x36B8A
{
	struct<3> Var0;
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_896 && !bLocal_885)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 40f))
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_296();
				TASK::TASK_WANDER_STANDARD(iLocal_939, 40000f, 0);
				PED::SET_PED_KEEP_TASK(iLocal_939, true);
				iLocal_712 = 0;
				iLocal_930 = MISC::GET_GAME_TIMER() + 1700;
				bLocal_896 = true;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_964[0 /*3*/], 1) < 80f || __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_964[1 /*3*/], 1) < 80f) || __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_964[2 /*3*/], 1) < 80f)
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_296();
					TASK::TASK_WANDER_STANDARD(iLocal_939, 40000f, 0);
					PED::SET_PED_KEEP_TASK(iLocal_939, true);
					iLocal_712 = 0;
					iLocal_930 = MISC::GET_GAME_TIMER() + 1700;
					bLocal_885 = true;
				}
			}
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_930)
		{
			if (bLocal_885)
			{
				func_298(15);
			}
			if (bLocal_896)
			{
				func_298(3);
			}
		}
	}
}

void func_499()//Position - 0x36CAD
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (((func_504() && !bLocal_550) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (iLocal_563 == -1)
			{
				iLocal_563 = AUDIO::GET_SOUND_ID();
			}
			if (iLocal_564 >= 10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
				{
					AUDIO::START_AUDIO_SCENE("HUNTING_02_SETTINGS");
					__LIB_34__::func_810(&fLocal_565, &fLocal_566);
					AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_565);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_563, "Heart_Breathing", PLAYER::PLAYER_PED_ID(), 0, false, 0);
				}
				else
				{
					__LIB_34__::func_809(&fLocal_565, &fLocal_566);
					AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_565);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_563, "Concentration", fLocal_566);
			}
			else
			{
				iLocal_564++;
			}
		}
		else
		{
			iLocal_564 = 0;
			func_500();
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_563);
		AUDIO::RELEASE_SOUND_ID(iLocal_563);
		iLocal_563 = -1;
	}
}

void func_500()//Position - 0x36DA4
{
	fLocal_565 = (fLocal_565 - 0.05f);
	if (!func_501())
	{
		fLocal_566 = (fLocal_566 - 0.05f);
	}
	if (fLocal_565 <= 0f)
	{
		fLocal_565 = 0f;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
		{
			AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
			AUDIO::STOP_SOUND(iLocal_563);
			AUDIO::RELEASE_SOUND_ID(iLocal_563);
			iLocal_563 = -1;
		}
	}
	if (fLocal_565 >= 1f)
	{
		fLocal_565 = 1f;
	}
	if (fLocal_566 >= 100f)
	{
		fLocal_566 = 100f;
	}
	if (fLocal_566 <= 70f)
	{
		fLocal_566 = 70f;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_565);
		AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Breathing", fLocal_565);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_563, "Concentration", fLocal_566);
	}
}

int func_501()//Position - 0x36E66
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_314(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_504()//Position - 0x36F52
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_WEAPONTYPE_GROUP(__LIB_1__::func_562(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER"))
		{
			if (!iLocal_551)
			{
				iLocal_551 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_506()//Position - 0x36F9D
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	float fVar11;
	func_522();
	switch (iLocal_712)
	{
		case 0:
			break;
		case 1:
			switch (iLocal_714)
			{
				case 0:
					if (!__LIB_0__::func_75())
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_939, "HT2_CLE_0_1", iLocal_995, 2, -1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_939, false);
						SYSTEM::SETTIMERA(0);
						iLocal_714 = 1;
					}
					break;
				case 1:
					if (func_432(15f))
					{
						if (!iLocal_908[0])
						{
							if (SYSTEM::TIMERA() > 2500 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								StringCopy(&Local_945, "HT_CUT", 24);
								if (__LIB_36__::func_42(&uLocal_716, sLocal_942, &Local_945, &cLocal_949, 7, 0, 0))
								{
									if (!PED::IS_PED_HEADTRACKING_PED(iLocal_939, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									}
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_949))
									{
										cLocal_949 = { __LIB_0__::func_389() };
									}
									iLocal_908[0] = 1;
								}
							}
						}
						else if (!iLocal_914[0])
						{
							Local_950 = { __LIB_9__::func_980() };
							if (MISC::ARE_STRINGS_EQUAL(&Local_950, "HT_CUT_6"))
							{
								iLocal_884 = 1;
								func_295(0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -1689270312) == 7)
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_939, true);
							iLocal_714 = 2;
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -1689270312) == 1)
						{
							iLocal_995 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_939);
						}
						func_429(0, 0);
						iLocal_714 = 0;
						iLocal_713 = 1;
						iLocal_712 = 2;
					}
					break;
				case 2:
					iLocal_714 = 0;
					iLocal_712 = 3;
					break;
			}
			break;
		case 2:
			if (func_432(10f))
			{
				__LIB_0__::func_296();
				iLocal_908[0] = 0;
				iLocal_908[3] = 0;
				func_429(0, 0);
				iLocal_714 = 0;
				iLocal_712 = iLocal_713;
				iLocal_932 = 0;
			}
			else
			{
				if (__LIB_0__::func_405("HT_BAC", 0, 0))
				{
					if (!iLocal_932)
					{
						iLocal_933 = 0;
						iLocal_932 = 1;
					}
					if (iLocal_933 == 0)
					{
						iLocal_933 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
						TASK::TASK_STAND_STILL(iLocal_939, -1);
						TASK::CLEAR_PED_TASKS(iLocal_939);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), 0);
						if (__LIB_0__::func_75())
						{
							cLocal_949 = { __LIB_0__::func_389() };
							__LIB_6__::func_771();
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_933)
				{
					fVar0 = __LIB_8__::func_538(iLocal_939, PLAYER::PLAYER_PED_ID());
					if (__LIB_0__::func_405("HT_BAC", 0, 0))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
					if (fVar0 < 20f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WCAR", 7, iVar1, 0, 0))
							{
								iLocal_933 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
							}
						}
						else
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
							if (iVar2 < 20000)
							{
								if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_TOOFAR", 7, iVar1, 0, 0))
								{
									iLocal_933 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								}
							}
							else if (iVar2 < 40000)
							{
								if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_MOVE", 7, iVar1, 0, 0))
								{
									iLocal_933 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								}
							}
							else if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WLK1", 7, iVar1, 0, 0))
							{
								iLocal_933 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
							}
						}
					}
					else if (fVar0 < 50f)
					{
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_LEAVE", 9, iVar1, 0, 0))
						{
							iLocal_933 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
						}
					}
				}
			}
			break;
		case 3:
			if (func_432(15f))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!__LIB_0__::func_75() && !iLocal_908[1])
					{
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_HUNT", 7, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_908[1] = 1;
							iLocal_986 = 0;
						}
					}
					else if (iLocal_908[1])
					{
						if (!iLocal_986 && SYSTEM::TIMERA() > 333)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_939) && !ENTITY::IS_ENTITY_DEAD(iLocal_939, false))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar3);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, -607.1139f, 5851.3716f, 23.0589f, 0);
								TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_point", 4f, -2f, -1, 48, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar3);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_939, iVar3);
								TASK::CLEAR_SEQUENCE_TASK(&iVar3);
							}
							TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 1, 2);
							iLocal_986 = 1;
						}
						Local_950 = { __LIB_9__::func_980() };
						if (MISC::ARE_STRINGS_EQUAL(&Local_950, "HT2_HUNT_3") || !__LIB_0__::func_75())
						{
							func_516(iLocal_939, 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_939, -605.36f, 5856.5493f, 22.7741f, 1f, 60000, 0.25f, 0, 239.6328f);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_939, false);
							iLocal_712 = 4;
						}
					}
				}
			}
			else
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -1689270312) == 1)
				{
					iLocal_995 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_939);
				}
				iLocal_714 = 0;
				iLocal_713 = 3;
				iLocal_712 = 2;
			}
			if (iLocal_993)
			{
				if (!__LIB_1__::func_197(Local_93[0 /*36*/]))
				{
					__LIB_6__::func_771();
					iLocal_908[2] = 0;
					iLocal_712 = 4;
					iLocal_714 = 0;
				}
			}
			break;
		case 4:
			if (!bLocal_983)
			{
				bLocal_983 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_939, true), -605.36f, 5856.5493f, 22.7741f) < 4f;
				TASK::TASK_LOOK_AT_ENTITY(iLocal_939, Local_93[0 /*36*/], -1, 1, 2);
			}
			if (__LIB_1__::func_197(Local_93[0 /*36*/]))
			{
				if (!Local_93[0 /*36*/].f_9)
				{
					if (iLocal_910[0])
					{
						func_515(0);
						func_513(0);
						if (bLocal_983)
						{
							func_511(0);
						}
					}
				}
				else if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_SPOOK", 6, 0, 0, 0))
				{
					__LIB_0__::func_296();
					func_516(iLocal_939, 0);
					iLocal_712 = 0;
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				__LIB_6__::func_771();
				func_14(Local_93[0 /*36*/]);
				if (!bLocal_901 && !Local_93[0 /*36*/].f_9)
				{
					if (!iLocal_908[2])
					{
						sLocal_944 = func_508(0);
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, sLocal_944, 7, 0, 0, 0))
						{
							func_516(iLocal_939, 0);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_939);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							iLocal_908[2] = 1;
							iLocal_712 = 5;
						}
					}
				}
			}
			break;
		case 5:
			if (func_432(15f))
			{
				if (!iLocal_908[3])
				{
					if (!__LIB_0__::func_75() && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						iLocal_712 = 7;
						iLocal_714 = 0;
					}
				}
			}
			else
			{
				iLocal_714 = 0;
				iLocal_713 = 5;
				iLocal_712 = 2;
			}
			break;
		case 7:
			switch (iLocal_714)
			{
				case 0:
					if (iLocal_996 == 0)
					{
						if (!iLocal_908[3])
						{
							if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WHISTLE2", 7, 0, 0, 0))
							{
								StringCopy(&Local_945, "HT2_WHISTLE2", 24);
								iLocal_908[3] = 1;
							}
						}
					}
					else
					{
						__LIB_36__::func_42(&uLocal_716, sLocal_942, &Local_945, &cLocal_949, 7, 0, 0);
					}
					Local_950 = { __LIB_9__::func_980() };
					if (MISC::ARE_STRINGS_EQUAL(&Local_950, "HT2_WHISTLE2_1") || iLocal_996 != 0)
					{
						func_516(iLocal_939, 1);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_939);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_939, "HT2_CLE_1_2", iLocal_996, 258, -1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_939, false);
						iLocal_714 = 1;
					}
					break;
				case 1:
					if (!iLocal_908[4])
					{
						if (func_432(15f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -1689270312) == 7)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WHISTLE1", 7, 0, 0, 0))
									{
										func_516(iLocal_939, 0);
										TASK::OPEN_SEQUENCE_TASK(&iVar4);
										TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 16, 4);
										TASK::TASK_PAUSE(0, 5000);
										TASK::TASK_PLAY_ANIM(0, "amb@world_human_guard_patrol@male@idle_a", "idle_b", 2f, -2f, -1, 1, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar4);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_939, iVar4);
										TASK::CLEAR_SEQUENCE_TASK(&iVar4);
										iLocal_908[4] = 1;
										iLocal_547 = 0;
									}
								}
							}
						}
						else
						{
							iLocal_996 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_939);
							iLocal_714 = 0;
							iLocal_713 = 7;
							iLocal_712 = 2;
						}
					}
					else if (!iLocal_984)
					{
						iLocal_984 = iLocal_547;
						iLocal_547 = 0;
						SYSTEM::SETTIMERA(0);
					}
					else if (iLocal_984 && !bLocal_985)
					{
						if (SYSTEM::TIMERA() > 2500)
						{
							if (func_432(15f))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_COMM", 7, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
										bLocal_985 = true;
									}
								}
							}
							else
							{
								iLocal_714 = 2;
							}
						}
					}
					else if (bLocal_985)
					{
						if (SYSTEM::TIMERA() > 5250)
						{
							iLocal_547 = 1;
							iLocal_714 = 2;
						}
					}
					break;
				case 2:
					if (!__LIB_0__::func_75())
					{
						iLocal_712 = 6;
						iLocal_714 = 0;
					}
					break;
			}
			break;
		case 6:
			if (HUD::DOES_BLIP_EXIST(Local_93[1 /*36*/].f_1))
			{
				if (!iLocal_908[5])
				{
					if (!iLocal_894)
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_939);
						TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_939, Local_964[1 /*3*/], 0);
						func_516(iLocal_939, 0);
						iLocal_931 = MISC::GET_GAME_TIMER() + 2000;
						iLocal_894 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_931)
					{
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WLK2", 6, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 5f, 3);
							iLocal_890 = 0;
							TASK::TASK_LOOK_AT_ENTITY(iLocal_939, Local_93[1 /*36*/], -1, 0, 2);
							SYSTEM::SETTIMERA(0);
							iLocal_908[5] = 1;
							iLocal_712 = 8;
							iLocal_714 = 0;
						}
					}
				}
			}
			if (!__LIB_1__::func_197(Local_93[1 /*36*/]))
			{
				__LIB_6__::func_771();
				iLocal_908[6] = 0;
				iLocal_987 = 0;
				iLocal_712 = 8;
				iLocal_714 = 0;
			}
			break;
		case 8:
			if (__LIB_1__::func_197(Local_93[1 /*36*/]))
			{
				if (!iLocal_988 && SYSTEM::TIMERA() > 1000)
				{
					Var5 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(Local_93[1 /*36*/], true) - ENTITY::GET_ENTITY_COORDS(iLocal_939, true)) };
					Var6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_939) };
					fVar7 = __LIB_0__::func_156(Var6, Var5);
					if (fVar7 > 0.92f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_939, "oddjobs@hunter", "point_fwd", 4f, -2f, -1, 48, 0f, false, false, false);
						iLocal_988 = 1;
						iLocal_990 = 0;
					}
				}
				if (!Local_93[1 /*36*/].f_9)
				{
					if (iLocal_910[1])
					{
						if (!__LIB_0__::func_75() && !__LIB_0__::func_1("HT_OBJ"))
						{
							func_515(1);
							func_513(1);
							func_507(1);
							func_511(1);
						}
					}
				}
				else if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_SPOOK", 6, 0, 0, 0))
				{
					__LIB_0__::func_296();
					func_516(iLocal_939, 0);
					iLocal_712 = 0;
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				__LIB_6__::func_771();
				func_14(Local_93[1 /*36*/]);
				if (!iLocal_908[6])
				{
					if (!__LIB_0__::func_75())
					{
						if (!bLocal_901 && !Local_93[1 /*36*/].f_9)
						{
							if (!iLocal_987)
							{
								func_516(iLocal_939, 0);
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_939, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, 60000, 0.25f, 0, fLocal_923);
								}
								sLocal_944 = func_508(1);
								iLocal_987 = 1;
							}
							else if (func_432(6f))
							{
								TASK::CLEAR_PED_TASKS(iLocal_939);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (__LIB_35__::func_536(&uLocal_716, sLocal_942, sLocal_944, 7, 0, 0, 0))
								{
									iLocal_934 = MISC::GET_GAME_TIMER() + 10000;
									iLocal_908[6] = 1;
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 5f, 4);
									iLocal_712 = 9;
									iLocal_714 = 0;
								}
							}
						}
					}
				}
			}
			break;
		case 9:
			if (!__LIB_0__::func_75())
			{
				if (func_432(15f))
				{
					if (!iLocal_908[7])
					{
						if (!PED::IS_PED_INJURED(iLocal_939))
						{
							TASK::CLEAR_PED_TASKS(iLocal_939);
							TASK::TASK_CLEAR_LOOK_AT(iLocal_939);
						}
						iLocal_714 = 0;
						iLocal_712 = 11;
					}
				}
			}
			break;
		case 11:
			switch (iLocal_714)
			{
				case 0:
					if (!__LIB_0__::func_75() && func_432(15f))
					{
						if (iLocal_997 == 0)
						{
							if (!iLocal_908[7])
							{
								if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT_PAIR", 7, 0, 0, 0))
								{
									StringCopy(&Local_945, "HT_PAIR", 24);
									iLocal_908[7] = 1;
								}
							}
						}
						else
						{
							__LIB_36__::func_42(&uLocal_716, sLocal_942, &Local_945, &cLocal_949, 7, 0, 0);
						}
						func_516(iLocal_939, 1);
						TASK::TASK_LOOK_AT_COORD(iLocal_939, Local_964[2 /*3*/], -1, 0, 2);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_939, "HT2_CLE_2_3", iLocal_997, 2, -1);
						iLocal_714 = 1;
					}
					break;
				case 1:
					if (func_432(15f))
					{
						if (!__LIB_0__::func_75())
						{
							if (!iLocal_908[8])
							{
								if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT_LEAD3", 6, 0, 0, 0))
								{
									iLocal_908[8] = 1;
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, -1689270312) == 7)
						{
							if (func_432(15f))
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_939);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								iLocal_714 = 2;
							}
						}
					}
					else if (iLocal_710 == 11)
					{
						iLocal_997 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_939);
						iLocal_714 = 0;
						iLocal_713 = 11;
						iLocal_712 = 2;
					}
					else
					{
						iLocal_714 = 2;
					}
					break;
				case 2:
					iLocal_714 = 0;
					iLocal_712 = 10;
					break;
			}
			break;
		case 10:
			if (!__LIB_0__::func_75() && HUD::DOES_BLIP_EXIST(Local_93[2 /*36*/].f_1))
			{
				if (!iLocal_989)
				{
					SYSTEM::SETTIMERA(0);
					iLocal_989 = 1;
				}
				else if (SYSTEM::TIMERA() > 1700)
				{
					if (!iLocal_908[9])
					{
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_ARR3", 6, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 3);
							__LIB_0__::func_523(&iLocal_882);
							iLocal_908[9] = 1;
							func_516(iLocal_939, 1);
							iVar8 = PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_939, iVar8);
							iLocal_990 = 0;
							iLocal_714 = 0;
							iLocal_712 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_93[2 /*36*/]))
			{
				if (!__LIB_1__::func_197(Local_93[2 /*36*/]))
				{
					__LIB_6__::func_771();
					iLocal_908[10] = 0;
					iLocal_987 = 0;
					iLocal_712 = 12;
					iLocal_714 = 0;
					break;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_93[3 /*36*/]))
			{
				if (!__LIB_1__::func_197(Local_93[3 /*36*/]))
				{
					__LIB_6__::func_771();
					if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_SHDOE", 7, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_939))
						{
							func_516(iLocal_939, 0);
							TASK::CLEAR_PED_TASKS(iLocal_939);
							TASK::TASK_WANDER_STANDARD(iLocal_939, 40000f, 0);
							PED::SET_PED_KEEP_TASK(iLocal_939, true);
							func_298(11);
							iLocal_712 = 0;
							break;
						}
					}
				}
			}
			break;
		case 12:
			if (__LIB_1__::func_197(Local_93[2 /*36*/]))
			{
				if (!Local_93[2 /*36*/].f_9)
				{
					if (!__LIB_1__::func_197(Local_93[3 /*36*/]))
					{
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_SHDOE", 7, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_939))
							{
								func_516(iLocal_939, 0);
								TASK::CLEAR_PED_TASKS(iLocal_939);
								TASK::TASK_WANDER_STANDARD(iLocal_939, 40000f, 0);
								PED::SET_PED_KEEP_TASK(iLocal_939, true);
								func_298(11);
								iLocal_712 = 0;
							}
						}
					}
					if (iLocal_910[2] && !__LIB_0__::func_405("HT_OBJ", 0, 0))
					{
						func_515(2);
						func_513(2);
						func_513(3);
						func_507(2);
						func_511(2);
					}
				}
				else if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_SPOOK", 6, 0, 0, 0))
				{
					__LIB_0__::func_296();
					func_516(iLocal_939, 0);
					iLocal_712 = 0;
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				__LIB_6__::func_771();
				func_14(Local_93[2 /*36*/]);
				if (!bLocal_901)
				{
					if (!iLocal_908[10])
					{
						sLocal_944 = func_508(2);
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, sLocal_944, 7, 0, 0, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_939);
							func_516(iLocal_939, 0);
							iLocal_908[10] = 1;
						}
					}
					else if (func_432(15f))
					{
						if (!__LIB_0__::func_75() && !iLocal_908[11])
						{
							if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WLKOFF", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_939))
								{
									TASK::CLEAR_PED_TASKS(iLocal_939);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									iLocal_908[11] = 1;
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 4);
									iLocal_712 = 13;
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_939, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_939, Local_93[2 /*36*/].f_17, 1f, 60000, 0.25f, 0, fLocal_923);
					}
				}
			}
			break;
		case 13:
			Local_950 = { __LIB_9__::func_980() };
			if (!__LIB_0__::func_75() || MISC::ARE_STRINGS_EQUAL(&Local_950, "HT2_WLKOFF_4"))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_939);
				__LIB_0__::func_523(&iLocal_882);
				func_516(iLocal_939, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_939, Local_952, 1f, 60000, 0.25f, 0, fLocal_923);
				iLocal_712 = 14;
			}
			break;
		case 14:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_939) && !func_432(15f))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_939);
					__LIB_0__::func_0(&iLocal_939);
					iLocal_712 = 0;
				}
				else if (func_432(15f))
				{
					if (iLocal_991 == 0)
					{
						iLocal_991 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					}
					else if (iLocal_991 < MISC::GET_GAME_TIMER())
					{
						TASK::CLEAR_PED_TASKS(iLocal_939);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						SYSTEM::SETTIMERA(0);
						iLocal_712 = 15;
					}
				}
			}
			break;
		case 15:
			if (func_432(15f))
			{
				Var9 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iLocal_939, true)) };
				Var10 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_939) };
				fVar11 = __LIB_0__::func_156(Var10, Var9);
				if (fVar11 > 0.92f)
				{
					if (!iLocal_992)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_PLYFOL", 7, 0, 0, 0);
							iLocal_991 = 0;
							SYSTEM::SETTIMERA(0);
							iLocal_992 = 1;
						}
					}
					else if (SYSTEM::TIMERA() > 1750)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_939, Local_952, 1f, 60000, 0.25f, 0, fLocal_923);
						iLocal_712 = 14;
					}
				}
			}
			else if (!iLocal_992)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_992 = 1;
			}
			else if (SYSTEM::TIMERA() > 500)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_939, Local_952, 1f, 60000, 0.25f, 0, fLocal_923);
				iLocal_712 = 14;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (iLocal_710 != 25 && iLocal_712 != 0)
		{
			if (!iLocal_891)
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_RAGDOLL(iLocal_939))
					{
						__LIB_0__::func_296();
						iLocal_929 = MISC::GET_GAME_TIMER() + 1700;
						iLocal_891 = 1;
					}
				}
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_939, PLAYER::PLAYER_PED_ID(), true) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_939, 0, 2)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_939, false), 10f))
				{
					__LIB_0__::func_296();
					iLocal_929 = MISC::GET_GAME_TIMER() + 1700;
					iLocal_891 = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_929)
			{
				if (!PED::IS_PED_INJURED(iLocal_939))
				{
					TASK::CLEAR_PED_TASKS(iLocal_939);
					TASK::TASK_SMART_FLEE_PED(iLocal_939, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_939, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, false))
				{
					func_298(5);
				}
				else
				{
					func_298(4);
				}
				iLocal_712 = 0;
			}
		}
	}
}

void func_507(int iParam0)//Position - 0x38281
{
	if (HUD::DOES_BLIP_EXIST(Local_93[iParam0 /*36*/].f_1))
	{
		Local_93[iParam0 /*36*/].f_3 = HUD::GET_BLIP_ALPHA(Local_93[iParam0 /*36*/].f_1);
		if (IntToFloat(Local_93[iParam0 /*36*/].f_3) < 0.1f)
		{
			if (!iLocal_890)
			{
				iLocal_925 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 10000));
				iLocal_890 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_925)
			{
				if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_BLOW", 7, 0, 0, 0))
				{
					iLocal_890 = 0;
				}
			}
		}
	}
}

char* func_508(int iParam0)//Position - 0x38302
{
	char* sVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	sVar0 = "";
	if (ENTITY::DOES_ENTITY_EXIST(Local_93[iParam0 /*36*/]))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(Local_93[iParam0 /*36*/], &uVar1);
		iVar2 = uVar1;
		iVar3 = __LIB_29__::func_692(iVar2);
		switch (iVar3)
		{
			case 3:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_HEART1";
						break;
					case 1:
						sVar0 = "HT2_HEART2";
						break;
					case 2:
						sVar0 = "HT2_HEART3";
						break;
				}
				if (!iLocal_909[iParam0])
				{
					__LIB_0__::func_401(771, 1, 0);
					iLocal_909[iParam0] = 1;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_NECK1";
						break;
					case 1:
						sVar0 = "HT2_NECK2";
						break;
					case 2:
						sVar0 = "HT2_NECK3";
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_HEAD1";
						break;
					case 1:
						sVar0 = "HT2_HEAD2";
						break;
					case 2:
						sVar0 = "HT2_HEAD3";
						break;
				}
				break;
			case 5:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_BODY1";
						break;
					case 1:
						sVar0 = "HT2_BODY2";
						break;
					case 2:
						sVar0 = "HT2_BODY3";
						break;
				}
				break;
			case 7:
			case 4:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_LEG1";
						break;
					case 1:
						sVar0 = "HT2_LEG2";
						break;
					case 2:
						sVar0 = "HT2_LEG3";
						break;
				}
				break;
			case 6:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_REAR1";
						break;
					case 1:
						sVar0 = "HT2_REAR2";
						break;
					case 2:
						sVar0 = "HT2_REAR3";
						break;
				}
				break;
			default:
				switch (iParam0)
				{
					case 0:
						sVar0 = "HT2_COMP1";
						break;
					case 1:
						sVar0 = "HT2_COMP2";
						break;
					case 2:
						sVar0 = "HT2_COMP3";
						break;
				}
				break;
			}
	}
	return sVar0;
}

int func_511(int iParam0)//Position - 0x38725
{
	if (!func_432(6f))
	{
		iLocal_990 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		return 1;
	}
	if (iLocal_990 == 0)
	{
		iLocal_990 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		return 1;
	}
	if (__LIB_0__::func_75() && MISC::GET_GAME_TIMER() > iLocal_990)
	{
		iLocal_990 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		return 1;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_990 && !func_512(iParam0))
	{
		if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_ENC", 7, 0, 0, 0))
		{
			iLocal_990 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(25000, 45000));
		}
	}
	return 1;
}

int func_512(int iParam0)//Position - 0x387D7
{
	if (__LIB_1__::func_197(Local_93[iParam0 /*36*/]))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(Local_93[iParam0 /*36*/]))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_93[iParam0 /*36*/]))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_93[iParam0 /*36*/].f_15, ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], false), true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_513(int iParam0)//Position - 0x3882B
{
	if (func_512(iParam0) && !__LIB_0__::func_75())
	{
		if (func_514())
		{
			if (!iLocal_911[iParam0])
			{
				switch (iParam0)
				{
					case 0:
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_KILL1", 7, 0, 0, 0))
						{
							iLocal_911[iParam0] = 1;
						}
						break;
					case 1:
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_KILL2", 7, 0, 0, 0))
						{
							iLocal_911[iParam0] = 1;
						}
						break;
					case 2:
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_KILL3", 7, 0, 0, 0))
						{
							iLocal_911[iParam0] = 1;
						}
						break;
					case 3:
						if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_DOE", 7, 0, 0, 0))
						{
							iLocal_911[iParam0] = 1;
						}
						break;
					}
			}
		}
		else if (!iLocal_912[iParam0])
		{
			if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WGUN", 7, 0, 0, 0))
			{
				iLocal_912[iParam0] = 1;
			}
		}
	}
}

int func_514()//Position - 0x38927
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()) && WEAPON::GET_WEAPONTYPE_GROUP(__LIB_1__::func_562(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER"))
	{
		return 1;
	}
	return 0;
}

void func_515(int iParam0)//Position - 0x38956
{
	if (!iLocal_913[iParam0])
	{
		if (((iLocal_910[iParam0] && !__LIB_0__::func_75()) && !__LIB_0__::func_405("HT_OBJ", 0, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_93[iParam0 /*36*/]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_974, Local_975, 20f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_976, Local_977, 20f, false, true, 0))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_93[iParam0 /*36*/].f_15, ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], false), true))
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						if (func_514())
						{
							if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_DIST", 7, 0, 0, 0))
							{
								iLocal_913[iParam0] = 1;
							}
						}
						else if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_WGUN", 7, 0, 0, 0))
						{
							iLocal_913[iParam0] = 1;
						}
					}
					else if (__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_NOWEAP", 7, 0, 0, 0))
					{
						iLocal_913[iParam0] = 1;
					}
				}
			}
		}
	}
}

void func_516(int iParam0, bool bParam1)//Position - 0x38A68
{
	if (bParam1)
	{
		if (!PED::GET_PED_STEALTH_MOVEMENT(iParam0))
		{
			PED::SET_PED_STEALTH_MOVEMENT(iParam0, true, "DEFAULT_ACTION");
		}
	}
	else if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0);
	}
}

void func_522()//Position - 0x38C44
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_1__::func_197(iLocal_939) && __LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_29__::func_685())
		{
			iVar1 = 0;
			while (iVar1 < __LIB_29__::func_684())
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_29__::func_683(iVar1)))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_29__::func_683(iVar1));
					if (iVar0 != PLAYER::PLAYER_PED_ID() && iVar0 != iLocal_939)
					{
						if ((!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(iVar0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), true))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
								iLocal_927++;
							}
						}
					}
				}
				iVar1++;
			}
			if (iLocal_927 == 1)
			{
				if (func_432(15f))
				{
					__LIB_35__::func_536(&uLocal_716, sLocal_942, "HT2_INNO", 7, 0, 0, 0);
				}
			}
			else if (iLocal_927 == 2)
			{
				if (!__LIB_0__::func_75())
				{
					func_298(13);
				}
			}
		}
	}
}

int func_544(var uParam0)//Position - 0x398A5
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_702;
	iVar0[1] = iLocal_703;
	iVar0[2] = iLocal_704;
	iVar0[3] = iLocal_705;
	iVar0[4] = iLocal_706;
	switch (iLocal_701)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "HUN_2_MCS_1", 24);
			uParam0->f_15 = 4f;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmhunting2");
			iLocal_701 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
			{
				return 0;
			}
			iLocal_701 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_26__::func_256(&(uParam0->f_28[0]), 54, -683.3276f, 5841.042f, 17.217f, 8.33f, "RC HUNTER 2", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_PUMPSHOTGUN"), 0, true, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_545(&(uParam0->f_35[0]), -685.2281f, 5833.9824f, 16.331f, 313.2204f, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_708))
			{
				iLocal_708 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE"), 0, Local_707, false, 1f, 0, 0, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_708, joaat("COMPONENT_AT_SCOPE_LARGE"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_708, joaat("COMPONENT_AT_AR_SUPP_02"));
			}
			if (bVar2)
			{
				iLocal_701 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_28[0], "rcmhunting2", "_idle_loop", -683.152f, 5841.281f, 17.32f, 0f, 0f, 17.024f, 1000f, -8f, -1, 790537, 0f, 2, 1);
				}
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 3088, 2);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_707, 1f, iLocal_704, false))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_708, 0f, -90f, -162.64f, 2, true);
			}
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

void func_545(int* iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x39AF2
{
	__LIB_20__::func_649(iParam0, iLocal_703, Param1, fParam2);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 3, true);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
		if (iParam3 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
		}
	}
}

void func_555(bool bParam0)//Position - 0x39E0C
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_1__::func_197(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("WEAPON_SNIPERRIFLE"), false))
		{
			iLocal_543 = 0;
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("WEAPON_SNIPERRIFLE"), -1, bParam0, true);
		}
		else
		{
			iLocal_543 = 1;
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_SNIPERRIFLE"), bParam0);
			iLocal_545 = WEAPON::GET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"));
			if (iLocal_545 == 0)
			{
				WEAPON::SET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"), 20);
				WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("WEAPON_SNIPERRIFLE"), 10);
				SYSTEM::WAIT(0);
			}
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iVar0, joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02")))
		{
			iLocal_544 = 0;
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02"));
		}
		else
		{
			iLocal_544 = 1;
		}
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, joaat("WEAPON_SNIPERRIFLE"));
	}
}

void func_556()//Position - 0x39ECA
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false))
	{
		iLocal_543 = 1;
		iLocal_935 = WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"));
		iLocal_545 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02")))
		{
			iLocal_544 = 1;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_SCOPE_LARGE")))
		{
			iLocal_906 = 1;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_SCOPE_MAX")))
		{
			iLocal_907 = 1;
		}
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_SNIPERRIFLE_CLIP_01")))
		{
			iLocal_905 = 1;
		}
	}
}

void func_557()//Position - 0x39F78
{
	int iVar0;
	__LIB_0__::func_55();
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
	func_299();
	func_570();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_TRAFFIC_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_TRAFFIC_SCENE");
	}
	__LIB_0__::func_202(&uLocal_716, 2);
	__LIB_0__::func_202(&uLocal_716, 3);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_93[iVar0 /*36*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_93[iVar0 /*36*/]));
		}
		iVar0++;
	}
	if (iLocal_886)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Deer"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_939))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_939, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_939, false, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_939))
		{
			TASK::CLEAR_PED_TASKS(iLocal_939);
		}
		func_516(iLocal_939, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_939);
	}
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		func_516(PLAYER::PLAYER_PED_ID(), 0);
	}
	__LIB_12__::func_43(1);
	AUDIO::STOP_AUDIO_SCENE("AMBIENT_HUNTING_MIX");
	func_2();
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	if (iLocal_893)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_940);
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_92);
	}
	__LIB_32__::func_757(&Local_709, 0, 0, 0);
}

void func_570()//Position - 0x3A2A6
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_543)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), iLocal_545, false, false);
			WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), false, joaat("WEAPON_SNIPERRIFLE"));
			WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), iLocal_545);
			if (iLocal_544)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02"));
			}
			if (iLocal_935 != -1)
			{
				WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), iLocal_935);
			}
			if (iLocal_905)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_SNIPERRIFLE_CLIP_01"));
			}
			if (iLocal_906)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_SCOPE_LARGE"));
			}
			if (iLocal_907)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_SCOPE_MAX"));
			}
		}
	}
}

