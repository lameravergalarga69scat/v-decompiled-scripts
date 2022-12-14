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
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_100[65];
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
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
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	float fLocal_127 = 0f;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	int iLocal_140 = 0;
	struct<3> Local_141[65];
	int iLocal_142[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_143[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	struct<68> Local_150 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_171 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_172 = -1;
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
	var uLocal_194 = -1082130432;
	var uLocal_195 = 3;
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
	var uLocal_211 = -1;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = -1;
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
	var uLocal_236 = -1082130432;
	var uLocal_237 = 3;
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
	var uLocal_253 = -1;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = -1;
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
	var uLocal_278 = -1082130432;
	var uLocal_279 = 3;
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
	var uLocal_295 = -1;
	var uLocal_296 = 0;
	var uLocal_297 = -1;
	var uLocal_298 = -1;
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
	var uLocal_320 = -1082130432;
	var uLocal_321 = 3;
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
	var uLocal_337 = -1;
	var uLocal_338 = 0;
	var uLocal_339 = -1;
	var uLocal_340 = -1;
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
	var uLocal_362 = -1082130432;
	var uLocal_363 = 3;
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
	var uLocal_379 = -1;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = -1;
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
	var uLocal_404 = -1082130432;
	var uLocal_405 = 3;
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
	var uLocal_421 = -1;
	var uLocal_422 = 0;
	var uLocal_423 = -1;
	var uLocal_424 = -1;
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
	var uLocal_446 = -1082130432;
	var uLocal_447 = 3;
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
	var uLocal_463 = -1;
	var uLocal_464 = 0;
	var uLocal_465 = -1;
	var uLocal_466 = -1;
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
	var uLocal_488 = -1082130432;
	var uLocal_489 = 3;
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
	var uLocal_505 = -1;
	var uLocal_506 = 0;
	var uLocal_507 = -1;
	var uLocal_508 = -1;
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
	var uLocal_530 = -1082130432;
	var uLocal_531 = 3;
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
	var uLocal_547 = -1;
	var uLocal_548 = 0;
	var uLocal_549 = -1;
	var uLocal_550 = -1;
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
	var uLocal_572 = -1082130432;
	var uLocal_573 = 3;
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
	var uLocal_589 = -1;
	var uLocal_590 = 0;
	var uLocal_591 = -1;
	var uLocal_592 = -1;
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
	var uLocal_614 = -1082130432;
	var uLocal_615 = 3;
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
	var uLocal_631 = -1;
	var uLocal_632 = 0;
	var uLocal_633 = -1;
	var uLocal_634 = -1;
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
	var uLocal_656 = -1082130432;
	var uLocal_657 = 3;
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
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = -1;
	var uLocal_676 = -1;
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
	var uLocal_698 = -1082130432;
	var uLocal_699 = 3;
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
	var uLocal_715 = -1;
	var uLocal_716 = 0;
	var uLocal_717 = -1;
	var uLocal_718 = -1;
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
	var uLocal_740 = -1082130432;
	var uLocal_741 = 3;
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
	var uLocal_757 = -1;
	var uLocal_758 = 0;
	var uLocal_759 = -1;
	var uLocal_760 = -1;
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
	var uLocal_782 = -1082130432;
	var uLocal_783 = 3;
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
	var uLocal_799 = -1;
	var uLocal_800 = 0;
	var uLocal_801 = -1;
	var uLocal_802 = -1;
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
	var uLocal_824 = -1082130432;
	var uLocal_825 = 3;
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
	var uLocal_843 = -1;
	var uLocal_844 = -1;
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
	var uLocal_866 = -1082130432;
	var uLocal_867 = 3;
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
	var uLocal_883 = -1;
	var uLocal_884 = 0;
	var uLocal_885 = -1;
	var uLocal_886 = -1;
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
	var uLocal_908 = -1082130432;
	var uLocal_909 = 3;
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
	var uLocal_925 = -1;
	var uLocal_926 = 0;
	var uLocal_927 = -1;
	var uLocal_928 = -1;
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
	var uLocal_950 = -1082130432;
	var uLocal_951 = 3;
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
	var uLocal_967 = -1;
	var uLocal_968 = 0;
	var uLocal_969 = -1;
	var uLocal_970 = -1;
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
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = -1082130432;
	var uLocal_993 = 3;
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
	var uLocal_1009 = -1;
	var uLocal_1010 = 0;
	var uLocal_1011 = -1;
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
	var uLocal_1034 = -1082130432;
	var uLocal_1035 = 3;
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
	var uLocal_1051 = -1;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1;
	var uLocal_1054 = -1;
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
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = -1082130432;
	var uLocal_1077 = 3;
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
	var uLocal_1093 = -1;
	var uLocal_1094 = 0;
	var uLocal_1095 = -1;
	var uLocal_1096 = -1;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
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
	var uLocal_1118 = -1082130432;
	var uLocal_1119 = 3;
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
	var uLocal_1135 = -1;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1;
	var uLocal_1138 = -1;
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
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = -1082130432;
	var uLocal_1161 = 3;
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
	var uLocal_1177 = -1;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1;
	var uLocal_1180 = -1;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
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
	var uLocal_1202 = -1082130432;
	var uLocal_1203 = 3;
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
	var uLocal_1219 = -1;
	var uLocal_1220 = 0;
	var uLocal_1221 = -1;
	var uLocal_1222 = -1;
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
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = -1082130432;
	var uLocal_1245 = 3;
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
	var uLocal_1261 = -1;
	var uLocal_1262 = 0;
	var uLocal_1263 = -1;
	var uLocal_1264 = -1;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
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
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = -1082130432;
	var uLocal_1287 = 3;
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
	var uLocal_1303 = -1;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1;
	var uLocal_1306 = -1;
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
	var uLocal_1327 = 0;
	var uLocal_1328 = -1082130432;
	var uLocal_1329 = 3;
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
	var uLocal_1345 = -1;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1;
	var uLocal_1348 = -1;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
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
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = -1082130432;
	var uLocal_1371 = 3;
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
	var uLocal_1387 = -1;
	var uLocal_1388 = 0;
	var uLocal_1389 = -1;
	var uLocal_1390 = -1;
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
	var uLocal_1411 = 0;
	var uLocal_1412 = -1082130432;
	var uLocal_1413 = 3;
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
	var uLocal_1429 = -1;
	var uLocal_1430 = 0;
	var uLocal_1431 = -1;
	var uLocal_1432 = -1;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
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
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = -1082130432;
	var uLocal_1455 = 3;
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
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = -1;
	var uLocal_1472 = 0;
	var uLocal_1473 = -1;
	var uLocal_1474 = -1;
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
	var uLocal_1496 = -1082130432;
	var uLocal_1497 = 3;
	var uLocal_1498 = 0;
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
	var uLocal_1513 = -1;
	var uLocal_1514 = 0;
	var uLocal_1515 = -1;
	struct<12> Local_1516[32];
	struct<12> Local_1517 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1518 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_101 = 40000f;
	iLocal_129 = AUDIO::GET_SOUND_ID();
	iLocal_130 = AUDIO::GET_SOUND_ID();
	iLocal_131 = -1;
	bLocal_132 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_782(ScriptParam_1518))
		{
			func_744();
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959() || __LIB_12__::func_493())
		{
			func_744();
		}
		if (func_735())
		{
			func_744();
		}
		func_708();
		switch (func_707(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_706() == 1)
				{
					if (func_705())
					{
						func_704(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_706() == 1)
				{
					func_145();
					func_133();
				}
				else if (func_706() == 3)
				{
					func_704(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_744();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_706())
			{
				case 0:
					if (func_119())
					{
						func_118(1);
					}
					break;
				case 1:
					if (Local_150.f_37 == 6)
					{
						func_118(2);
					}
					else
					{
						func_3();
					}
					break;
				case 2:
					if (__LIB_0__::func_937(&uLocal_107, 1000, 0))
					{
						func_118(3);
					}
					break;
				case 3:
					func_744();
					break;
				}
		}
	}
}

void func_3()//Position - 0x261
{
	bool bVar0;
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_150.f_2, 0))
		{
			MISC::SET_BIT(&(Local_150.f_2), 0);
			Local_150.f_1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	switch (Local_150.f_37)
	{
		case 0:
			if (func_43())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_937(&(Local_150.f_43), func_29(), 0) || BitTest(Local_150.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		case 2:
			Local_150.f_38 = NETWORK::GET_NETWORK_TIME();
			func_30(3);
			break;
		case 3:
			if (__LIB_0__::func_937(&(Local_150.f_39), func_28(0), 0) || BitTest(Local_150.f_2, 0))
			{
				if (!BitTest(Local_150.f_2, 1))
				{
					Local_150.f_1 = NETWORK::GET_NETWORK_TIME();
					MISC::SET_BIT(&(Local_150.f_2), 1);
					__LIB_0__::func_627(&(Local_150.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&bLocal_132, &iLocal_131);
			func_31();
			break;
		case 4:
			if ((__LIB_0__::func_937(&(Local_150.f_41), 20000, 0) || Local_150.f_4[0] < 0) || func_6())
			{
				if (__LIB_2__::func_13(Local_150.f_3))
				{
					__LIB_0__::func_627(&(Local_150.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		case 6:
			break;
	}
}

int func_4()//Position - 0x3F4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_150.f_67[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_150.f_67[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_6()//Position - 0x478
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
			if (!__LIB_2__::func_124(bVar2))
			{
				if (!BitTest(Local_1516[iVar1 /*12*/].f_1, 1) || Local_1516[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (BitTest(Local_1516[iVar1 /*12*/].f_1, 0))
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

void func_9(bool bParam0, int iParam1)//Position - 0x533
{
	struct<14> Var0;
	int iVar1;
	if (*bParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*bParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -1111422293;
			Var0.f_10 = iVar1;
			__LIB_1__::func_634(Var0, __LIB_2__::func_36(1));
		}
		*bParam0 = -1;
		*iParam1 = -1;
	}
}

void func_13()//Position - 0x670
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
		{
			MISC::SET_BIT(&uVar3, bVar0);
		}
		else
		{
			func_26(bVar0);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar0))
		{
			func_23(bVar0);
			MISC::SET_BIT(&(Local_150.f_47), bVar0);
			iVar1++;
			if (func_17(bVar0, 0))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4) && !__LIB_2__::func_40(bVar4, 0))
				{
					iVar2++;
				}
			}
		}
		bVar0++;
	}
	if (iVar1 > Local_150.f_50)
	{
		Local_150.f_50 = iVar1;
	}
	else
	{
		Local_150.f_66 = (Local_150.f_50 - iVar1);
	}
	if (iVar2 > Local_150.f_51)
	{
		Local_150.f_51 = iVar2;
	}
}

int func_17(bool bParam0, bool bParam1)//Position - 0x7DB
{
	float fVar0;
	if (bParam0 >= 0 && bParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1516[bParam0 /*12*/].f_4);
	}
	else if (bParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_150.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_11411 /* Tunable: CHALLENGE_LONGEST_JUMP */)
			{
				return 1;
			}
			break;
		case 2:
			if (fVar0 >= Global_262145.f_11412 /* Tunable: CHALLENGE_HIGHEST_SPEED */)
			{
				return 1;
			}
			break;
		case 3:
			if (fVar0 >= Global_262145.f_11413 /* Tunable: CHALLENGE_LONGEST_STOPPIE */)
			{
				return 1;
			}
			break;
		case 5:
			if (fVar0 >= Global_262145.f_11414 /* Tunable: CHALLENGE_LONGEST_NO_CRASH */)
			{
				return 1;
			}
			break;
		case 4:
			if (fVar0 >= Global_262145.f_11415 /* Tunable: CHALLENGE_LONGEST_WHEELIE */)
			{
				return 1;
			}
			break;
		case 1:
			if (fVar0 >= Global_262145.f_11416 /* Tunable: CHALLENGE_LONGEST_SKYDIVE */)
			{
				return 1;
			}
			break;
		case 6:
			if (fVar0 <= Global_262145.f_11417 /* Tunable: CHALLENGE_LOWEST_PARACHUTE */ && fVar0 != 0f)
			{
				return 1;
			}
			break;
		case 9:
			if (fVar0 >= Global_262145.f_11418 /* Tunable: CHALLENGE_REVERSE_DRIVING */)
			{
				return 1;
			}
			break;
		case 10:
			if (fVar0 >= Global_262145.f_11419 /* Tunable: CHALLENGE_LONGEST_FALL */)
			{
				return 1;
			}
			break;
		case 18:
			if (fVar0 >= Global_262145.f_11420 /* Tunable: CHALLENGE_PVP_LONGEST_SNIPE */)
			{
				return 1;
			}
			break;
		case 13:
			if (fVar0 >= Global_262145.f_11421 /* Tunable: CHALLENGE_LONGEST_BAIL */)
			{
				return 1;
			}
			break;
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_11422 /* Tunable: CHALLENGE_MOST_VEHICLES_STOLEN */))
			{
				return 1;
			}
			break;
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_11423 /* Tunable: CHALLENGE_MOST_NEAR_MISSES */))
			{
				return 1;
			}
			break;
		case 11:
			if (fVar0 >= Global_262145.f_11535 /* Tunable: CHALLENGE_FURTHEST_DISTANCE_LOW_FLYING */)
			{
				return 1;
			}
			break;
		case 12:
			if (fVar0 >= Global_262145.f_11536 /* Tunable: CHALLENGE_FURTHEST_DISTANCE_LOW_FLYING_INVERTED */)
			{
				return 1;
			}
			break;
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_11426 /* Tunable: CHALLENGE_MOST_BRIDGES */))
			{
				return 1;
			}
			break;
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_11428 /* Tunable: CHALLENGE_PVP_HEADSHOTS */))
			{
				return 1;
			}
			break;
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_11429 /* Tunable: CHALLENGE_PVP_DRIVEBY */))
			{
				return 1;
			}
			break;
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_11430 /* Tunable: CHALLENGE_PVP_MELEE */))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()//Position - 0xA4D
{
	switch (Local_150.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_19()//Position - 0xAAC
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xAD7
{
	if (iParam0 >= 0)
	{
		if (Local_150.f_4[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && func_21(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0xB10
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()//Position - 0xB4A
{
	switch (Local_150.f_3)
	{
		case 6:
			return 1;
		default:
	}
	return 0;
}

void func_23(bool bParam0)//Position - 0xB67
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = Local_1516[bParam0 /*12*/].f_4;
	iVar1 = Local_1516[bParam0 /*12*/].f_4.f_2;
	if (!BitTest(Local_150.f_48, bParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_150.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_150.f_49++;
			MISC::SET_BIT(&(Local_150.f_48), bParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_150.f_4[iVar3] == bParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				__LIB_1__::func_900(&(Local_150.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_150.f_4[iVar3] < 0 || func_21(iVar0, Local_1516[Local_150.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1516[Local_150.f_4[iVar3] /*12*/].f_4, iVar1, Local_1516[Local_150.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_150.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_131 = iVar3;
				bLocal_132 = bParam0;
			}
			Local_150.f_4[iVar3] = bParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_150.f_4[iVar5] == bParam0)
				{
					Local_150.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCE4
{
	if (Local_150.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(bool bParam0)//Position - 0xD32
{
	int iVar0;
	if (BitTest(Local_150.f_47, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_150.f_4[iVar0] == bParam0)
			{
				Local_150.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(Local_150.f_48), bParam0);
		MISC::CLEAR_BIT(&(Local_150.f_47), bParam0);
	}
}

int func_28(bool bParam0)//Position - 0xDC7
{
	if (BitTest(Local_150.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_150.f_3)
	{
		case 0:
			return Global_262145.f_10723 /* Tunable: CHALLENGETIME_LONGEST_JUMP */;
		case 8:
			return Global_262145.f_10725 /* Tunable: CHALLENGETIME_MOST_NEAR_MISSES */;
		case 3:
			return Global_262145.f_10726 /* Tunable: CHALLENGETIME_LONGEST_STOPPIE */;
		case 1:
			return Global_262145.f_11521 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_FREEFALL */;
		case 6:
			return Global_262145.f_11522 /* Tunable: CHALLENGE_TIME_LIMIT_LOWEST_PARACHUTE_DEPLOY */;
		case 10:
			return Global_262145.f_11524 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_FALL_WITHOUT_DYING */;
		case 11:
			return Global_262145.f_11526 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
		case 12:
			return Global_262145.f_11527 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
		case 15:
			return Global_262145.f_11531 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
		case 16:
			return Global_262145.f_11532 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
		case 17:
			return Global_262145.f_11533 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
		case 18:
			return Global_262145.f_11534 /* Tunable: CHALLENGE_TIME_LIMIT_PVP_SNIPER_PLAYER_KILLS */;
		case 13:
			return Global_262145.f_11525 /* Tunable: CHALLENGE_TIME_LIMIT_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
		case 14:
			return Global_262145.f_11528 /* Tunable: CHALLENGE_TIME_LIMIT_BRIDGES_FLOWN_UNDER */;
		case 2:
			return Global_262145.f_10728 /* Tunable: CHALLENGETIME_HIGHEST_SPEED */;
		case 7:
			return Global_262145.f_11523 /* Tunable: CHALLENGE_TIME_LIMIT_HIGHEST_VEHICLES_STOLEN */;
		case 9:
			return Global_262145.f_11529 /* Tunable: CHALLENGE_TIME_LIMIT_REVERSE_DRIVING_WITHOUT_CRASHING */;
		case 5:
			return Global_262145.f_10729 /* Tunable: CHALLENGETIME_LONGEST_NO_CRASH */;
		case 4:
			return Global_262145.f_10727 /* Tunable: CHALLENGETIME_LONGEST_WHEELIE */;
		default:
	}
	return -1;
}

int func_29()//Position - 0xF22
{
	return Global_262145.f_11491 /* Tunable: CHALLENGE_EVENT_START_COUNTDOWN_TIME */;
}

void func_30(int iParam0)//Position - 0xF31
{
	Local_150.f_37 = iParam0;
}

int func_31()//Position - 0xF40
{
	struct<2> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (func_43() && ((Local_150.f_37 == 0 || __LIB_2__::func_13(Local_150.f_3)) || Local_150.f_54 < 10))
	{
		Var0 = { Local_150.f_67[iLocal_126 /*2*/] };
		if (__LIB_0__::func_799(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (__LIB_35__::func_686(Local_150.f_3, iLocal_126, &Var1, &fVar2))
				{
					Local_150.f_55[iLocal_126] = __LIB_32__::func_485(iLocal_126);
					if (BitTest(Local_1516[Local_150.f_55[iLocal_126] /*12*/].f_2, iLocal_126))
					{
						if (__LIB_0__::func_957(&(Local_150.f_67[iLocal_126 /*2*/].f_1), Var0.f_0, Var1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_150.f_67[iLocal_126 /*2*/].f_1), true, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), false);
							__LIB_1__::func_901(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_126 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_150.f_55[iLocal_126] = -1;
							Local_150.f_54++;
						}
					}
				}
			}
		}
		iLocal_126++;
		if (iLocal_126 >= 10)
		{
			iLocal_126 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_43()//Position - 0x195C
{
	return (__LIB_2__::func_13(Local_150.f_3) || __LIB_28__::func_556(Local_150.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x197C
{
	if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) || __LIB_2__::func_155(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_3__::func_358(PLAYER::PLAYER_ID()) || __LIB_3__::func_362(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (__LIB_2__::func_38(26, -1))
		{
			__LIB_2__::func_70(26, -1);
		}
		return 1;
	}
	if (__LIB_0__::func_864(&(Global_1836844.f_18)))
	{
		if (!__LIB_0__::func_937(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		__LIB_0__::func_794(&(Global_1836844.f_18));
	}
	if (__LIB_1__::func_904())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (__LIB_2__::func_38(26, -1))
		{
			__LIB_2__::func_70(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (__LIB_2__::func_38(26, -1))
		{
			__LIB_2__::func_70(26, -1);
		}
		return 1;
	}
	return 0;
}

void func_51(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1B81
{
	if ((!BitTest(Global_1836844.f_1, 2) && !__LIB_1__::func_899(PLAYER::PLAYER_ID())) && !__LIB_2__::func_124(PLAYER::PLAYER_ID()))
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
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1BF5
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
	__LIB_1__::func_264(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)//Position - 0x1C75
{
	int iVar0;
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	__LIB_1__::func_742(uParam0);
	if (__LIB_0__::func_177())
	{
		__LIB_1__::func_742(uParam0);
	}
	if (__LIB_1__::func_258(uParam0->f_1))
	{
		__LIB_2__::func_168();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (__LIB_0__::func_703(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				__LIB_2__::func_168();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !__LIB_0__::func_703(uParam0->f_69, 128))
			{
				if (__LIB_1__::func_256(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_68(var uParam0, bool bParam1)//Position - 0x22D4
{
	if (__LIB_1__::func_260(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == __LIB_0__::func_162() || !__LIB_1__::func_693(bParam1, 0, 1))
	{
		return;
	}
	if (__LIB_1__::func_256(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x232B
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_467(bParam0) && !bParam4)
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
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_3__::func_467(PLAYER::PLAYER_ID()) || (__LIB_0__::func_80() && __LIB_1__::func_5())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_1__::func_4();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_100(iParam1, bParam0, 0);
							}
							else
							{
								return func_82(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_100(iParam1, bParam0, 0);
				}
				else
				{
					return __LIB_2__::func_171(0, -1, 0);
				}
			}
			else
			{
				return __LIB_2__::func_171(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_100(iParam1, bParam0, 0);
		}
		else
		{
			return func_82(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_82(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2A77
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (__LIB_1__::func_758())
			{
				iVar3 = __LIB_36__::func_26(bParam0);
				if (!iVar3 == -1)
				{
					return __LIB_1__::func_357(iVar3);
				}
			}
			if ((__LIB_1__::func_905(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((__LIB_0__::func_825(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return __LIB_0__::func_997(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return __LIB_0__::func_999(1);
			}
			else
			{
				return __LIB_2__::func_78(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[bParam0 /*834*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return __LIB_0__::func_997(1);
			}
			else
			{
				return __LIB_2__::func_78(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = __LIB_36__::func_26(bParam0);
	if (!iVar4 == -1)
	{
		return __LIB_1__::func_357(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x2F61
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = Global_1058069.f_14[iParam0];
	if (__LIB_1__::func_758())
	{
		iVar2 = __LIB_36__::func_26(bParam1);
		if (!iVar2 == -1)
		{
			return __LIB_1__::func_357(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != __LIB_0__::func_162())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = __LIB_2__::func_78(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = __LIB_1__::func_3(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !__LIB_0__::func_825(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = __LIB_0__::func_999(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_118(int iParam0)//Position - 0x3476
{
	Local_150.f_0 = iParam0;
}

int func_119()//Position - 0x3483
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_150.f_4[iVar0] = -1;
		iVar0++;
	}
	__LIB_0__::func_794(&(Local_150.f_39));
	func_124();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_150.f_55[iVar0] = __LIB_32__::func_485(iVar0);
			iVar0++;
		}
		func_120();
	}
	return 1;
}

void func_120()//Position - 0x34E3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_28__::func_556(Local_150.f_3))
		{
			Local_150.f_67[iVar0 /*2*/] = func_123();
		}
		else
		{
			Local_150.f_67[iVar0 /*2*/] = func_121();
		}
		iVar0++;
	}
}

int func_121()//Position - 0x3527
{
	int iVar0;
	switch (Local_150.f_3)
	{
		case 12:
			return func_122();
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		case 1:
			return joaat("mammatus");
		default:
	}
	return 0;
}

int func_122()//Position - 0x3575
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		case 1:
			return joaat("besra");
		default:
	}
	return 0;
}

int func_123()//Position - 0x35A9
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		case 1:
			return joaat("pcj");
		default:
	}
	return 0;
}

void func_124()//Position - 0x35DD
{
	int iVar0;
	iVar0 = func_129();
	Local_150.f_3 = iVar0;
	__LIB_12__::func_550(__LIB_2__::func_41(133, iVar0, 0, 0));
}

int func_129()//Position - 0x407F
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	iVar0[0] = Global_262145.f_11820 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_JUMP */;
	iVar0[1] = Global_262145.f_11493 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_FREEFALL */;
	iVar0[2] = Global_262145.f_11824 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_HIGHEST_SPEED */;
	iVar0[3] = Global_262145.f_11822 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_STOPPIE */;
	iVar0[4] = Global_262145.f_11823 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_WHEELIE */;
	iVar0[5] = Global_262145.f_11825 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_NO_CRASH */;
	iVar0[6] = Global_262145.f_11494 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LOWEST_PARACHUTE_DEPLOY */;
	iVar0[7] = Global_262145.f_11495 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_HIGHEST_VEHICLES_STOLEN */;
	iVar0[8] = Global_262145.f_11821 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_MOST_NEAR_MISSES */;
	iVar0[9] = Global_262145.f_11501 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_REVERSE_DRIVING_WITHOUT_CRASHING */;
	iVar0[10] = Global_262145.f_11496 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_FALL_WITHOUT_DYING */;
	iVar0[11] = Global_262145.f_11498 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
	iVar0[12] = Global_262145.f_11499 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
	iVar0[13] = Global_262145.f_11497 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
	iVar0[14] = Global_262145.f_11500 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_BRIDGES_FLOWN_UNDER */;
	iVar0[15] = Global_262145.f_11503 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
	iVar0[16] = Global_262145.f_11504 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
	iVar0[17] = Global_262145.f_11505 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
	iVar0[18] = Global_262145.f_11506 /* Tunable: CHALLENGE_AMBIENT_WEIGHTING_PVP_SNIPER_PLAYER_KILLS */;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_132(iVar2) || __LIB_3__::func_193(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_129();
}

int func_132(int iParam0)//Position - 0x4320
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10716 /* Tunable: DISABLE_LONGEST_JUMP */;
		case 1:
			return Global_262145.f_11507 /* Tunable: CHALLENGE_DISABLE_LONGEST_FREEFALL */;
		case 6:
			return Global_262145.f_11508 /* Tunable: CHALLENGE_DISABLE_LOWEST_PARACHUTE_DEPLOY */;
		case 7:
			return Global_262145.f_11509 /* Tunable: CHALLENGE_DISABLE_HIGHEST_VEHICLES_STOLEN */;
		case 8:
			return Global_262145.f_10717 /* Tunable: DISABLE_MOST_NEAR_MISSES */;
		case 3:
			return Global_262145.f_10718 /* Tunable: DISABLE_LONGEST_STOPPIE */;
		case 4:
			return Global_262145.f_10719 /* Tunable: DISABLE_LONGEST_WHEELIE */;
		case 2:
			return Global_262145.f_10720 /* Tunable: DISABLE_HIGHEST_SPEED */;
		case 5:
			return Global_262145.f_10722 /* Tunable: DISABLE_LONGEST_NO_CRASH */;
		case 9:
			return Global_262145.f_11515 /* Tunable: CHALLENGE_DISABLE_REVERSE_DRIVING_WITHOUT_CRASHING */;
		case 10:
			return Global_262145.f_11510 /* Tunable: CHALLENGE_DISABLE_LONGEST_FALL_WITHOUT_DYING */;
		case 11:
			return Global_262145.f_11512 /* Tunable: CHALLENGE_DISABLE_LONGEST_TIME_LOW_FLYING_UNDER_20M */;
		case 12:
			return Global_262145.f_11513 /* Tunable: CHALLENGE_DISABLE_LONGEST_TIME_LOW_FLYING_INVERTED_UNDER_100M */;
		case 15:
			return Global_262145.f_11517 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_HEADSHOTS */;
		case 16:
			return Global_262145.f_11518 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_DRIVE_BY_KILLS */;
		case 17:
			return Global_262145.f_11519 /* Tunable: CHALLENGE_DISABLE_PVP_HIGHEST_NO_OF_PLAYER_MELEE_KILLS */;
		case 18:
			return Global_262145.f_11520 /* Tunable: CHALLENGE_DISABLE_PVP_SNIPER_PLAYER_KILLS */;
		case 13:
			return Global_262145.f_11511 /* Tunable: CHALLENGE_DISABLE_LONGEST_VEHICLE_BAIL_WITHOUT_DYING */;
		case 14:
			return Global_262145.f_11514 /* Tunable: CHALLENGE_DISABLE_BRIDGES_FLOWN_UNDER */;
		default:
	}
	return 1;
}

void func_133()//Position - 0x4460
{
	bool bVar0;
	if (func_43())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_150.f_55[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (func_134(bVar0))
				{
					if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
					{
						MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
					}
				}
				else if (BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
				}
			}
			else if (BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
			}
			bVar0++;
		}
	}
}

int func_134(int iParam0)//Position - 0x4508
{
	struct<3> Var0;
	var uVar1;
	if (__LIB_1__::func_903(iParam0, &Var0, &uVar1))
	{
		if (func_135(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x454D
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_140(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (__LIB_2__::func_768(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_140(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x48BF
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam6 == 0)
		{
			if (__LIB_1__::func_693(bVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && __LIB_1__::func_908(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_141(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_694(bVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_141(bool bParam0)//Position - 0x49C3
{
	if (__LIB_1__::func_909(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2787505 = { __LIB_1__::func_696(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (__LIB_3__::func_445(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

void func_145()//Position - 0x4AB9
{
	float fVar0;
	float fVar1;
	func_701();
	func_700();
	if (__LIB_2__::func_772())
	{
		func_580();
	}
	if (!__LIB_2__::func_124(PLAYER::PLAYER_ID()))
	{
		if (func_553(0, 1, 1))
		{
			if (BitTest(uLocal_121, 6))
			{
				MISC::CLEAR_BIT(&uLocal_121, 6);
			}
			switch (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3)
			{
				case 0:
					if (Local_150.f_37 < 2)
					{
						if (Local_150.f_37 > 0)
						{
							if (Local_150.f_3 != -1)
							{
								__LIB_1__::func_963(1);
								func_551(1);
							}
						}
					}
					else
					{
						func_551(2);
					}
					break;
				case 1:
					func_545(9);
					if (Local_1517.f_8 == 0)
					{
						Local_1517.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (Local_150.f_37 >= 2)
					{
						func_551(2);
						Local_1517.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
					if (func_43())
					{
						func_545(0);
					}
					__LIB_1__::func_961((func_29() - __LIB_1__::func_724(&(Local_150.f_43), 0, 0)));
					func_540(__LIB_1__::func_723((func_29() - __LIB_1__::func_724(&(Local_150.f_43), 0, 0)), 0), __LIB_1__::func_960(Local_150.f_3));
					func_473(0, func_539());
					func_457();
					func_435();
					if (func_434())
					{
						__LIB_1__::func_950();
					}
					break;
				case 2:
					if (Local_150.f_37 > 2)
					{
						__LIB_1__::func_963(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_432())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_414(133, fVar0, fVar1, 0, 0, 0, 0);
						func_413(Local_150.f_3, 1);
						__LIB_1__::func_460(23, 1);
						if (Local_1517.f_8 == 0)
						{
							Local_1517.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						if (Local_1517.f_9 == 0)
						{
							Local_1517.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
						func_408();
						VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(1);
						if (func_432())
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						if (Local_150.f_3 == 14)
						{
							func_407(&Local_141);
						}
						__LIB_3__::func_0();
						if (!__LIB_2__::func_124(PLAYER::PLAYER_ID()))
						{
							func_52(63, "AMCH_STARTED" /* GXT: CHALLENGE STARTED */, func_405(Local_150.f_3), __LIB_1__::func_259(), -1, __LIB_1__::func_259(), 1, 0);
							if (__LIB_9__::func_816("AMCH_WARN" /* GXT: The ~a~ Challenge will begin shortly. ~a~ The top 3 players will win cash and RP. */, func_404(Local_150.f_3), func_403(Local_150.f_3)))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (func_43())
						{
							func_384(678f, 794f, 206f, 8f, 0);
							func_384(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_384(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_551(3);
					}
					break;
				case 3:
					if (Local_150.f_37 > 3)
					{
						iLocal_123 = 0;
						func_551(4);
					}
					else
					{
						if (!BitTest(Local_150.f_2, 1))
						{
							func_342();
							func_339();
							__LIB_0__::func_467();
						}
						if (func_337(0) && !func_20(0))
						{
							__LIB_1__::func_937();
						}
					}
					if (func_432())
					{
						PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
					}
					func_335();
					func_310();
					func_580();
					func_473(0, 1);
					func_457();
					func_435();
					func_545(2);
					func_545(5);
					func_545(7);
					break;
				case 4:
					if (func_298(&uLocal_133, !BitTest(Local_150.f_2, 0)) || BitTest(Local_150.f_2, 0))
					{
						if (__LIB_2__::func_13(Local_150.f_3))
						{
							if (Local_150.f_37 == 5)
							{
								func_551(5);
							}
						}
						else
						{
							func_551(6);
						}
					}
					func_285();
					func_177();
					func_310();
					func_580();
					func_473(1, 1);
					__LIB_3__::func_0();
					break;
				case 5:
					if (Local_150.f_37 > 5)
					{
						func_551(6);
					}
					break;
				case 6:
					break;
			}
		}
		else
		{
			func_172();
		}
	}
	else
	{
		func_172();
	}
	func_152();
	func_147();
	func_146();
}

void func_146()//Position - 0x4E3C
{
	struct<2> Var0;
	int iVar1;
	if (func_43())
	{
		Var0 = { Local_150.f_67[iLocal_140 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iLocal_140++;
		if (iLocal_140 >= 10)
		{
			iLocal_140 = 0;
			iLocal_149 = iLocal_148;
			iLocal_148 = 0;
		}
	}
}

void func_147()//Position - 0x4EA8
{
	if (Local_150.f_37 == 5)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_150.f_67[iLocal_140 /*2*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), false))
			{
				if (!BitTest(uLocal_146, iLocal_140))
				{
					MISC::SET_BIT(&uLocal_146, iLocal_140);
					iLocal_147[iLocal_140] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_147[iLocal_140], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_147[iLocal_140], "Time", 30f);
				}
				if ((30000 - __LIB_1__::func_724(&(Local_150.f_45), 0, 0)) >= 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), false))
					{
						func_545(1);
						iLocal_148 = 1;
					}
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_150.f_67[iLocal_140 /*2*/].f_1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1));
					NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_150.f_67[iLocal_140 /*2*/].f_1), true, false, -1);
				}
			}
			else if (BitTest(uLocal_146, iLocal_140) && !AUDIO::HAS_SOUND_FINISHED(iLocal_147[iLocal_140]))
			{
				AUDIO::STOP_SOUND(iLocal_147[iLocal_140]);
			}
		}
		if (iLocal_149)
		{
			if (!__LIB_3__::func_467(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_350(__LIB_1__::func_723((30000 - __LIB_1__::func_724(&(Local_150.f_45), 0, 0)), 0), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				__LIB_1__::func_910();
			}
		}
	}
}

void func_152()//Position - 0x51C0
{
	if (((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_2__::func_124(PLAYER::PLAYER_ID())) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && func_553(0, 1, 1))
	{
		if (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 1)
		{
			__LIB_13__::func_713(func_167(Local_150.f_3), func_404(Local_150.f_3), 0, 0);
		}
		else if (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
		{
			if (!BitTest(uLocal_121, 10))
			{
				__LIB_3__::func_198(func_403(Local_150.f_3), 0);
			}
			else
			{
				__LIB_3__::func_198("AMCH_OBJLAND" /* GXT: Fly over land. */, 0);
			}
		}
		else
		{
			__LIB_3__::func_0();
		}
	}
	else
	{
		__LIB_3__::func_0();
	}
}

char* func_167(int iParam0)//Position - 0x5823
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND" /* GXT: Find a land vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			case 9:
				if ((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPCAR" /* GXT: Find a car and prepare for the ~a~ Challenge. */;
				}
				break;
			case 3:
			case 4:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					return "AMCH_PREPBIKE" /* GXT: Find a motorcycle and prepare for the ~a~ Challenge. */;
				}
				else
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1))
					{
						return "AMCH_PREPBIKE" /* GXT: Find a motorcycle and prepare for the ~a~ Challenge. */;
					}
				}
				break;
			case 12:
				if (!PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPPLANE" /* GXT: Find a plane and prepare for the ~a~ Challenge. */;
				}
				break;
			case 1:
			case 6:
			case 11:
			case 14:
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPAIR" /* GXT: Find an air vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			case 18:
				if ((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), false)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE"), false))
				{
					return "AMCH_PREPSNIPER" /* GXT: Find a sniper rifle and prepare for the ~a~ Challenge. */;
				}
				break;
			case 16:
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
				{
					return "AMCH_PREPLAND" /* GXT: Find a land vehicle and prepare for the ~a~ Challenge. */;
				}
				break;
			}
	}
	return "AMCH_PREPARE" /* GXT: Prepare for the ~a~ Challenge. */;
}

void func_172()//Position - 0x5B3D
{
	if (!BitTest(uLocal_121, 6))
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_473(1, 1);
		AUDIO::STOP_SOUND(iLocal_129);
		MISC::CLEAR_BIT(&uLocal_121, 4);
		__LIB_1__::func_913();
		__LIB_2__::func_43();
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
		MISC::SET_BIT(&uLocal_121, 6);
		__LIB_1__::func_912();
	}
}

void func_177()//Position - 0x5C34
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 0))
	{
		if (__LIB_2__::func_124(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		if (__LIB_2__::func_139(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
			return;
		}
		func_246(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1517.f_6 = (Local_1517.f_6 + iVar0);
			if (!Global_262145.f_11972 /* Tunable: CHALLENGE_DISABLE_SHARE_CASH */)
			{
				__LIB_1__::func_926(10, Local_1517.f_6);
			}
			Global_2727753 = iVar0;
			if (__LIB_0__::func_112())
			{
				__LIB_3__::func_407(joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"), iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1517.f_7 = (Local_1517.f_7 + iVar1);
			__LIB_1__::func_925();
			__LIB_41__::func_244(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 0);
	}
}

void func_246(var uParam0, var uParam1)//Position - 0x8E29
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	if (func_17(NETWORK::PARTICIPANT_ID_TO_INT(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_150.f_1 - iLocal_119)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */)
		{
			iVar1 = Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_284() * iVar1);
		*uParam1 = (func_283() * iVar1);
		fVar2 = func_282();
		if (fVar2 > 0f && !BitTest(Local_150.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_281())
			{
				iVar3 = func_281();
			}
			iVar4 = Local_150.f_51;
			if (iVar4 > func_280())
			{
				iVar4 = func_280();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(__LIB_32__::func_565(func_279(), func_278(), iVar3, fVar2, func_277(), func_276(), func_275(), iVar4)) * Global_262145.f_11920 /* Tunable: CHALLENGE_EVENT_MULTIPLIER_CASH */)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(__LIB_32__::func_565(func_272(), func_271(), iVar3, fVar2, func_277(), func_276(), func_275(), iVar4)) * Global_262145.f_11921 /* Tunable: CHALLENGE_EVENT_MULTIPLIER_RP */)));
		}
		else
		{
			__LIB_2__::func_160(1);
		}
	}
	else
	{
		__LIB_2__::func_160(0);
	}
	func_247(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_247(var uParam0, int iParam1)//Position - 0x8F6E
{
	int iVar0;
	if (*uParam0 > 0)
	{
		if (!__LIB_2__::func_50())
		{
			if (__LIB_2__::func_159(0))
			{
				if (!__LIB_3__::func_195(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__::func_797()))
					{
						if (__LIB_1__::func_930() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * __LIB_1__::func_930());
							*uParam0 = (*uParam0 - iVar0);
						}
						__LIB_2__::func_98(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_252("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__::func_797(), iVar0, 0, 0, 1);
						}
						__LIB_1__::func_928(20);
						__LIB_2__::func_128(__LIB_0__::func_797(), iVar0, 1);
					}
				}
			}
		}
	}
}

int func_252(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x90BB
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_69(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		__LIB_2__::func_158(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_271()//Position - 0x9580
{
	return Global_262145.f_11407 /* Tunable: CHALLENGE_RP_REWARD_SCALE */;
}

int func_272()//Position - 0x958F
{
	return Global_262145.f_11405 /* Tunable: CHALLENGE_RP_REWARD_BASE */;
}

float func_275()//Position - 0x9617
{
	return Global_262145.f_11410 /* Tunable: CHALLENGE_REWARD_PLAYER_DIVIDER */;
}

float func_276()//Position - 0x9626
{
	return Global_262145.f_11409 /* Tunable: CHALLENGE_REWARD_PLAYER_WEIGHTING */;
}

float func_277()//Position - 0x9635
{
	return Global_262145.f_11408 /* Tunable: CHALLENGE_REWARD_TIME_WEIGHTING */;
}

int func_278()//Position - 0x9644
{
	return Global_262145.f_11406 /* Tunable: CHALLENGE_CASH_REWARD_SCALE */;
}

int func_279()//Position - 0x9653
{
	return Global_262145.f_11404 /* Tunable: CHALLENGE_CASH_REWARD_BASE */;
}

int func_280()//Position - 0x9662
{
	return Global_262145.f_11812 /* Tunable: CHALLENGE_P_CAP */;
}

int func_281()//Position - 0x9671
{
	return Global_262145.f_11811 /* Tunable: CHALLENGE_T_CAP */;
}

var func_282()//Position - 0x9680
{
	if (func_20(0))
	{
		return Global_262145.f_11431 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_0 */;
	}
	if (func_20(1))
	{
		return Global_262145.f_11432 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_1 */;
	}
	if (func_20(2))
	{
		return Global_262145.f_11433 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_2 */;
	}
	return Global_262145.f_11434 /* Tunable: CHALLENGE_POSITION_MODIFIER_IN_PLACE_3 */;
}

int func_283()//Position - 0x96CE
{
	return Global_262145.f_11403 /* Tunable: CHALLENGE_EOM_DEFAULT_RP_REWARD */;
}

int func_284()//Position - 0x96DD
{
	return Global_262145.f_11402 /* Tunable: CHALLENGE_EOM_DEFAULT_CASH_REWARD */;
}

void func_285()//Position - 0x96EC
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 1) && (__LIB_1__::func_920() || BitTest(Local_150.f_2, 0)))
	{
		if (__LIB_1__::func_260(__LIB_1__::func_919()))
		{
			__LIB_1__::func_751();
		}
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(Local_150.f_2, 0))
			{
				if (func_337(0))
				{
					iVar2 = Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4;
					func_291(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_289(64, __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_WINNER" /* GXT: You won the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, -1, fVar1, func_404(Local_150.f_3), 1, 2, 0);
						}
						else if (__LIB_0__::func_114())
						{
							func_289(69, __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_WINNER_T" /* GXT: You won the ~a~ Challenge with a time of ~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
						else
						{
							func_289(64, __LIB_1__::func_983(Local_150.f_3, 0, 0, iVar0), "AMCH_WINNER" /* GXT: You won the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_WIN" /* GXT: WINNER */, 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_289(67, __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_2ND" /* GXT: You came second in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, -1, fVar1, func_404(Local_150.f_3), 1, 2, 0);
						}
						else if (__LIB_0__::func_114())
						{
							func_289(75, __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_2ND_T" /* GXT: You came second in the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
						else
						{
							func_289(67, __LIB_1__::func_983(Local_150.f_3, 0, 0, iVar0), "AMCH_2ND" /* GXT: You came second in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_289(67, __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_3RD" /* GXT: You came third in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, -1, fVar1, func_404(Local_150.f_3), 1, 2, 0);
						}
						else if (__LIB_0__::func_114())
						{
							func_289(75, __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_3RD_T" /* GXT: You came third in the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
						else
						{
							func_289(67, __LIB_1__::func_983(Local_150.f_3, 0, 0, iVar0), "AMCH_3RD" /* GXT: You came third in the ~a~ Challenge with a score of ~1~~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, iVar0, -1f, func_404(Local_150.f_3), 1, 2, 0);
						}
					}
					else
					{
						iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_150.f_4[0]);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_1516[Local_150.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1516[Local_150.f_4[0] /*12*/].f_4;
							func_291(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE" /* GXT: <C>~a~</C>~s~ won the ~a~ Challenge with a score of ~1~~a~ */;
							if (func_18())
							{
								func_287(76, __LIB_0__::func_162(), __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), sVar5, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_404(Local_150.f_3), -1, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else if (__LIB_0__::func_114())
							{
								func_287(77, __LIB_0__::func_162(), __LIB_1__::func_983(Local_150.f_3, 0, 0, 0), "AMCH_LOSE_T" /* GXT: <C>~a~</C>~s~ won the ~a~ Challenge with a time of ~a~ */, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_404(Local_150.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
							else
							{
								func_287(76, __LIB_0__::func_162(), __LIB_1__::func_983(Local_150.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER" /* GXT: CHALLENGE OVER */, 15000, func_404(Local_150.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER" /* GXT: CHALLENGE OVER */, "AMCH_NOWIN" /* GXT: No players achieved a score */, 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 1);
			__LIB_1__::func_916(133);
		}
	}
}

int func_287(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x9AB7
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
	__LIB_1__::func_264(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_289(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x9B4F
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
	__LIB_1__::func_264(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

int func_291(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x9D6D
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (__LIB_2__::func_143(Local_150.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

int func_298(var uParam0, bool bParam1)//Position - 0x9EE7
{
	bool bVar0;
	if ((((*uParam0 > 0 && !__LIB_1__::func_515()) && !(__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && (__LIB_3__::func_358(PLAYER::PLAYER_ID()) || __LIB_3__::func_357(PLAYER::PLAYER_ID())))) && !__LIB_2__::func_44(PLAYER::PLAYER_ID())) && !__LIB_1__::func_708(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_914();
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__::func_864(&(uParam0->f_3)))
			{
				__LIB_0__::func_795(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_0__::func_937(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__::func_795(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__::func_795(&(uParam0->f_1), 0, 0);
				__LIB_1__::func_289(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_864(&(uParam0->f_5)))
			{
				if (__LIB_0__::func_937(&(uParam0->f_5), 3000, 0))
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
				__LIB_2__::func_73();
				__LIB_1__::func_289(uParam0, 2);
			}
			break;
		case 2:
			__LIB_2__::func_73();
			if (__LIB_0__::func_937(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__::func_1("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__::func_289(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_937(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				__LIB_1__::func_289(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			return 1;
	}
	return 0;
}

void func_310()//Position - 0xA678
{
	bool bVar0[3];
	bool bVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	if (Local_150.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_334() && !__LIB_3__::func_467(PLAYER::PLAYER_ID()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			bVar0[iVar7] = __LIB_0__::func_162();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_150.f_4[iVar7] > -1)
			{
				iVar18 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_150.f_4[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar18))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar18);
					if (__LIB_1__::func_693(bVar1, 0, 1))
					{
						if (!__LIB_2__::func_40(bVar1, 0))
						{
							if (Local_1516[Local_150.f_4[iVar7] /*12*/].f_4 != 0)
							{
								bVar0[iVar15] = bVar1;
								func_291(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1516[Local_150.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (__LIB_2__::func_159(1))
								{
									if (__LIB_2__::func_72(bVar1, 1))
									{
										uVar17[iVar7] = func_69(bVar1, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (__LIB_3__::func_467(PLAYER::PLAYER_ID()))
		{
			iVar19 = __LIB_2__::func_51();
			iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar19);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20))
			{
				iVar21 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar20);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_291(&iVar4, &fVar9, iLocal_123, 1);
		func_291(&iVar5, &fVar10, Local_1516[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = __LIB_1__::func_724(&(Local_150.f_39), 0, 0);
		iVar6 = __LIB_1__::func_723(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			__LIB_33__::func_161(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (BitTest(uLocal_121, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_334() || Local_150.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_150.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_325(bVar0[0], bVar0[1], bVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, __LIB_1__::func_983(Local_150.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, __LIB_2__::func_161(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (__LIB_0__::func_114())
		{
			func_324(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, __LIB_2__::func_161(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_315(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, __LIB_1__::func_983(Local_150.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, __LIB_2__::func_161(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_311();
	}
}

void func_311()//Position - 0xA968
{
	float fVar0;
	int iVar1;
	float fVar2;
	fVar0 = func_314();
	if (fVar0 >= 0f)
	{
		if (Local_150.f_37 == 3)
		{
			if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
					{
						func_313(iVar1, &fLocal_127);
						fVar2 = (fVar0 + fLocal_127);
						HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(fVar2, true, 21);
						func_312(fVar0);
						return;
					}
				}
			}
		}
		if (__LIB_0__::func_1("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (BitTest(uLocal_121, 4))
		{
			AUDIO::STOP_SOUND(iLocal_129);
			MISC::CLEAR_BIT(&uLocal_121, 4);
		}
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
}

void func_312(float fParam0)//Position - 0xAA14
{
	float fVar0;
	if (STATS::STAT_GET_FLYING_ALTITUDE(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_545(6);
			if (!BitTest(uLocal_121, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_129, "Altitude_Warning", "EXILE_1", true);
				MISC::SET_BIT(&uLocal_121, 4);
			}
		}
		else
		{
			if (__LIB_0__::func_1("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (BitTest(uLocal_121, 4))
			{
				AUDIO::STOP_SOUND(iLocal_129);
				MISC::CLEAR_BIT(&uLocal_121, 4);
			}
		}
	}
}

float func_313(int iParam0, float* fParam1)//Position - 0xAA80
{
	float fVar0;
	struct<3> Var1;
	var uVar2;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, true, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar2, false, false);
	if (STATS::STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN())
	{
		func_545(3);
		MISC::SET_BIT(&uLocal_121, 10);
		__LIB_0__::func_627(&uLocal_117, 0, 0);
	}
	else if (BitTest(uLocal_121, 10))
	{
		if (__LIB_0__::func_937(&uLocal_117, 2000, 0))
		{
			MISC::CLEAR_BIT(&uLocal_121, 10);
		}
	}
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_314()//Position - 0xAB13
{
	switch (Local_150.f_3)
	{
		case 11:
			return 20f;
		case 12:
			return 100f;
		default:
	}
	return -1f;
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0xAB42
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_132(0) == 0)
	{
		return;
	}
	__LIB_1__::func_933();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__::func_932(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			__LIB_16__::func_620(iParam3, &(Global_2726613[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__::func_932(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			__LIB_16__::func_620(iParam4, &(Global_2726613[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__::func_932(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			__LIB_16__::func_620(iParam5, &(Global_2726613[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		__LIB_16__::func_620(iParam6, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
			{
				if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_16__::func_620(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_16__::func_620(iParam7, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 2:
			if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_16__::func_620(iParam7, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam14))
	{
		sVar2 = sParam14;
	}
	__LIB_1__::func_350(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	__LIB_1__::func_910();
}

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xB206
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_132(0) == 0)
	{
		return;
	}
	__LIB_1__::func_933();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__::func_932(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			__LIB_1__::func_350(iParam3, &(Global_2726613[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__::func_932(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			__LIB_1__::func_350(iParam4, &(Global_2726613[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__::func_932(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			__LIB_1__::func_350(iParam5, &(Global_2726613[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		__LIB_1__::func_350(iParam6, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
			{
				if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_1__::func_350(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_1__::func_350(iParam7, "HUD_USCORE" /* GXT: YOUR SCORE */, 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		case 2:
			if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_1__::func_350(iParam7, "HUD_UBEST" /* GXT: YOUR BEST */, 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam13))
	{
		sVar2 = sParam13;
	}
	__LIB_1__::func_350(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	__LIB_1__::func_910();
}

void func_325(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xB490
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_132(0) == 0)
	{
		return;
	}
	__LIB_1__::func_933();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__::func_932(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			__LIB_16__::func_620(-1, &(Global_2726613[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__::func_932(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			__LIB_16__::func_620(-1, &(Global_2726613[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__::func_162())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__::func_932(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			__LIB_16__::func_620(-1, &(Global_2726613[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		__LIB_16__::func_620(-1, "HUD_ATTEMPTS" /* GXT: CURRENT ATTEMPT */, -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
			{
				if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_16__::func_620(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_16__::func_620(-1, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 2:
			if (__LIB_2__::func_139(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_16__::func_620(-1, "HUD_UBEST" /* GXT: YOUR BEST */, -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		__LIB_1__::func_350(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	__LIB_1__::func_910();
}

int func_334()//Position - 0xBDDB
{
	switch (Local_150.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		default:
	}
	return 0;
}

void func_335()//Position - 0xBE34
{
	int iVar0;
	struct<42> Var1;
	bool bVar2;
	int iVar3;
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_171.f_534[iVar0 /*42*/] = { Var1 };
		Local_171.f_534[iVar0 /*42*/].f_1 = __LIB_0__::func_162();
		if (Local_150.f_4[iVar0] > -1)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_150.f_4[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!__LIB_2__::func_40(bVar2, 0))
				{
					Local_171.f_534[iVar0 /*42*/] = Local_150.f_4[iVar0];
					Local_171.f_534[iVar0 /*42*/].f_1 = bVar2;
					Local_171.f_534[iVar0 /*42*/].f_9 = Local_1516[Local_150.f_4[iVar0] /*12*/].f_4;
					Local_171.f_534[iVar0 /*42*/].f_31 = -1;
					Local_171.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

int func_337(int iParam0)//Position - 0xBF36
{
	int iVar0;
	if (iParam0 >= 0)
	{
		iVar0 = Local_150.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1516[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_339()//Position - 0xBF73
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	func_291(&iVar1, &fVar2, iLocal_123, 1);
	switch (Local_150.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_341(sVar0, fVar2 >= 70f);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = __LIB_1__::func_712(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = STATS::STAT_GET_CURRENT_SPEED();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_341(sVar0, bVar3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = __LIB_1__::func_712(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = __LIB_1__::func_712(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_128 != iLocal_123)
			{
				if (iLocal_123 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_130, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", false);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_130, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", false);
				}
			}
			iLocal_128 = iLocal_123;
			break;
	}
	if (func_20(0))
	{
		if (!BitTest(uLocal_121, 3))
		{
			if (__LIB_3__::func_195(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_121, 3);
		}
	}
	else if (BitTest(uLocal_121, 3))
	{
		if (__LIB_3__::func_195(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_121, 3);
	}
}

void func_341(char* sParam0, bool bParam1)//Position - 0xC146
{
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_342()//Position - 0xC176
{
	int iVar0;
	if ((!__LIB_2__::func_139(PLAYER::PLAYER_ID()) && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = func_368();
		if (iVar0 != Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_120) || func_367(iVar0, iLocal_120))
			{
				if (!func_366() || __LIB_0__::func_937(&uLocal_109, 1000, 0))
				{
					__LIB_0__::func_627(&uLocal_109, 0, 0);
					iLocal_120 = iVar0;
					Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = iVar0;
					func_345();
					if (iLocal_119 == 0)
					{
						iLocal_119 = NETWORK::GET_NETWORK_TIME();
					}
					if (Local_1517.f_11 == 0)
					{
						Local_1517.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
					}
				}
			}
		}
		iLocal_123 = func_343();
	}
}

int func_343()//Position - 0xC238
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = -1;
	switch (Local_150.f_3)
	{
		case 0:
			fVar1 = STATS::STAT_GET_CURRENT_JUMP_DISTANCE();
			break;
		case 1:
			fVar1 = STATS::STAT_GET_CURRENT_SKYDIVING_DISTANCE();
			break;
		case 2:
			fVar1 = STATS::STAT_GET_CURRENT_SPEED();
			break;
		case 3:
			fVar1 = STATS::STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE();
			break;
		case 4:
			fVar1 = STATS::STAT_GET_CURRENT_REAR_WHEEL_DISTANCE();
			break;
		case 5:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE();
			break;
		case 8:
			iVar0 = STATS::STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE();
			break;
		case 9:
			fVar1 = STATS::STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE();
			break;
		case 11:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		case 12:
			fVar1 = STATS::STAT_GET_CHALLENGE_FLYING_DIST();
			break;
		case 13:
			fVar1 = STATS::STAT_GET_VEHICLE_BAIL_DISTANCE();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = MISC::ABSI(iVar0);
	func_344(&iVar2);
	if (iVar2 == iLocal_122)
	{
		if (func_21(iVar2, 0))
		{
			if (!BitTest(uLocal_121, 1))
			{
				__LIB_0__::func_627(&uLocal_111, 0, 0);
				Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = __LIB_1__::func_724(&uLocal_111, 0, 0);
				MISC::SET_BIT(&uLocal_121, 1);
			}
			else if ((__LIB_1__::func_724(&uLocal_111, 0, 0) % 1000) == 0)
			{
				Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = __LIB_1__::func_724(&uLocal_111, 0, 0);
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_121, 1);
	}
	if ((func_21(iLocal_122, 0) && !func_21(iVar2, 0)) && !__LIB_0__::func_937(&uLocal_113, 2000, 0))
	{
		iVar2 = iLocal_122;
		MISC::SET_BIT(&uLocal_121, 2);
	}
	else
	{
		iLocal_122 = iVar2;
		__LIB_0__::func_794(&uLocal_113);
		MISC::CLEAR_BIT(&uLocal_121, 2);
	}
	return iVar2;
}

void func_344(int iParam0)//Position - 0xC3E5
{
	switch (Local_150.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_345()//Position - 0xC46E
{
	if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 2))
	{
		MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 2);
		func_346(1);
	}
}

void func_346(bool bParam0)//Position - 0xC49C
{
	var uVar0;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!__LIB_3__::func_362(PLAYER::PLAYER_ID()) && !__LIB_2__::func_124(PLAYER::PLAYER_ID())) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && !__LIB_0__::func_927(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_945())
				{
					__LIB_3__::func_220(2, 0, 1);
					__LIB_1__::func_713();
				}
				if (__LIB_1__::func_969(__LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID()))))
				{
					uVar0 = __LIB_1__::func_360(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, __LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID())));
					__LIB_1__::func_713();
				}
				if (__LIB_1__::func_512())
				{
					__LIB_1__::func_713();
				}
				if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (__LIB_1__::func_940(PLAYER::PLAYER_ID()))
					{
						__LIB_2__::func_114();
					}
					__LIB_1__::func_28(__LIB_1__::func_939(__LIB_1__::func_592(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		__LIB_2__::func_133();
	}
}

int func_366()//Position - 0xCA71
{
	switch (Local_150.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		default:
	}
	return 0;
}

int func_367(int iParam0, int iParam1)//Position - 0xCAD0
{
	if (Local_150.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_368()//Position - 0xCAEE
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (!func_383())
	{
		if (Local_150.f_3 == 14)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if ((!__LIB_16__::func_824(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("dodo")) && ENTITY::IS_ENTITY_IN_AIR(iVar2))
				{
					func_374(Local_150.f_3 != 14, 1, 0);
					if (func_373())
					{
						iVar3 = func_372();
						if (iVar3 >= 0)
						{
							if (!BitTest(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[__LIB_1__::func_851(iVar3)], __LIB_2__::func_37(iVar3)))
							{
								iLocal_124++;
								MISC::SET_BIT(&(Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[__LIB_1__::func_851(iVar3)]), __LIB_2__::func_37(iVar3));
							}
						}
					}
					iVar0 = iLocal_124;
				}
			}
		}
		else
		{
			iVar0 = func_369();
		}
	}
	else
	{
		STATS::STAT_GET_RECORDED_VALUE(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return MISC::ABSI(iVar0);
}

int func_369()//Position - 0xCBF4
{
	switch (Local_150.f_3)
	{
		case 14:
			return 0;
		case 4:
			return 0;
		default:
	}
	return -1;
}

int func_372()//Position - 0xCC72
{
	return iLocal_91;
}

int func_373()//Position - 0xCC7C
{
	if (iLocal_98 == 1)
	{
		iLocal_98 = 0;
		return 1;
	}
	return 0;
}

void func_374(bool bParam0, bool bParam1, int iParam2)//Position - 0xCC92
{
	func_376(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_102.f_2 < Local_103.f_2)
		{
			Local_102.f_2 = 0f;
		}
		else
		{
			Local_103.f_2 = 0f;
		}
		if (Local_104.f_2 < Local_105.f_2)
		{
			Local_104.f_2 = 0f;
		}
		else
		{
			Local_105.f_2 = 0f;
		}
	}
	switch (iLocal_92)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_100[iLocal_91 /*3*/]) < fLocal_101)
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0))
							{
								bLocal_93 = true;
								iLocal_92 = 1;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
							{
								bLocal_94 = true;
								iLocal_92 = 1;
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					func_375();
				}
				else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					func_375();
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !bParam1)
				{
					func_375();
				}
				if (bLocal_93)
				{
					if (iLocal_97)
					{
						if (iLocal_96)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
							{
								func_375();
								iLocal_98 = 1;
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							iLocal_96 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							func_375();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						iLocal_97 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						func_375();
					}
				}
				else if (bLocal_94)
				{
					if (iLocal_97)
					{
						if (iLocal_95)
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
							{
								func_375();
								iLocal_98 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							iLocal_95 = 1;
						}
						else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
						{
							func_375();
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						iLocal_97 = 1;
					}
					else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_102, Local_103, fLocal_106, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_106, false, true, 0))
					{
						func_375();
					}
				}
			}
			break;
	}
}

void func_375()//Position - 0xD092
{
	bLocal_93 = false;
	bLocal_94 = false;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_92 = 0;
}

void func_376(var uParam0, var uParam1)//Position - 0xD0AC
{
	int iVar0;
	float fVar1;
	float fVar2;
	Local_99 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar1 = 10000000f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !__LIB_18__::func_919(iVar0)) && (uParam1 || !__LIB_18__::func_918(iVar0)))
		{
			if (__LIB_0__::func_490(Local_99, Local_100[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(Local_99, Local_100[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_91 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_377(iLocal_91);
}

void func_377(int iParam0)//Position - 0xD142
{
	switch (iParam0)
	{
		case 0:
			Local_102 = { 1103.0139f, -233.03737f, 56.13004f };
			Local_103 = { 1073.1909f, -214.8478f, 66.059296f };
			fLocal_106 = 30f;
			Local_104 = { 1093.5886f, -248.5926f, 56.88639f };
			Local_105 = { 1063.7744f, -230.14253f, 66.67847f };
			break;
		case 1:
			Local_102 = { 1044.1819f, -324.59036f, 49.334076f };
			Local_103 = { 1016.7097f, -307.73825f, 64.81343f };
			fLocal_106 = 30f;
			Local_104 = { 1007.98315f, -320.61588f, 48.454296f };
			Local_105 = { 1036.0067f, -337.4204f, 64.4808f };
			break;
		case 2:
			Local_102 = { 916.599f, -419.8782f, 35.62748f };
			Local_103 = { 910.37933f, -383.88257f, 47.54339f };
			fLocal_106 = 7f;
			Local_104 = { 912.13617f, -420.51614f, 35.380337f };
			Local_105 = { 906.8952f, -384.6779f, 47.249256f };
			break;
		case 3:
			Local_102 = { 757.7189f, -472.92395f, 19.253498f };
			Local_103 = { 696.5936f, -420.21146f, 35.460842f };
			fLocal_106 = 20.75f;
			Local_104 = { 744.91144f, -480.73734f, 19.065138f };
			Local_105 = { 682.5614f, -429.55334f, 37.0266f };
			break;
		case 4:
			Local_102 = { 680.3677f, -581.1792f, 14.214504f };
			Local_103 = { 599.81006f, -528.3059f, 33.40958f };
			fLocal_106 = 45f;
			Local_104 = { 667.3692f, -610.53564f, 13.854013f };
			Local_105 = { 582.84326f, -556.7818f, 33.403355f };
			break;
		case 5:
			Local_102 = { 644.2497f, -844.7504f, 12.367073f };
			Local_103 = { 526.86084f, -845.2521f, 35.9896f };
			fLocal_106 = 25f;
			Local_104 = { 644.3659f, -859.38776f, 12.596766f };
			Local_105 = { 526.8615f, -857.52075f, 36.32857f };
			break;
		case 6:
			Local_102 = { 634.972f, -1011.6402f, 10.925943f };
			Local_103 = { 539.6501f, -1024.0171f, 35.958515f };
			fLocal_106 = 25f;
			Local_104 = { 634.96124f, -1029.123f, 10.618461f };
			Local_105 = { 543.4893f, -1038.2615f, 35.9593f };
			break;
		case 7:
			Local_102 = { 645.7223f, -1191.2153f, 10.451977f };
			Local_103 = { 524.30176f, -1197.1669f, 39.611725f };
			fLocal_106 = 50f;
			Local_104 = { 645.7223f, -1228.9664f, 10.98015f };
			Local_105 = { 521.93787f, -1217.6073f, 39.47172f };
			break;
		case 8:
			Local_102 = { 642.12164f, -1295.7301f, 9.005976f };
			Local_103 = { 568.17017f, -1375.3508f, 20.129887f };
			fLocal_106 = 7f;
			Local_104 = { 644.7772f, -1298.1683f, 9.128529f };
			Local_105 = { 571.63416f, -1378.6444f, 20.358023f };
			break;
		case 9:
			Local_102 = { 686.5675f, -1444.7098f, 9.065001f };
			Local_103 = { 598.9328f, -1444.438f, 25.688457f };
			fLocal_106 = 25f;
			Local_104 = { 682.3027f, -1429.872f, 9.890836f };
			Local_105 = { 593.82166f, -1432.9955f, 25.600723f };
			break;
		case 10:
			Local_102 = { 718.76166f, -1734.3129f, 9.082874f };
			Local_103 = { 615.0017f, -1725.8973f, 27.54585f };
			fLocal_106 = 30f;
			Local_104 = { 717.53546f, -1748.6456f, 9.363478f };
			Local_105 = { 614.21796f, -1734.8475f, 27.357079f };
			break;
		case 11:
			Local_102 = { 694.31647f, -2049.8057f, 0.009695f };
			Local_103 = { 618.6845f, -2040.0137f, 25.834118f };
			fLocal_106 = 30f;
			Local_104 = { 693.1836f, -2063.225f, 0.429037f };
			Local_105 = { 607.59436f, -2055.3264f, 26.918158f };
			break;
		case 12:
			Local_102 = { 642.66705f, -2494.5513f, 0.468485f };
			Local_103 = { 570.18066f, -2513.9587f, 11.787938f };
			fLocal_106 = 20f;
			Local_104 = { 647.0339f, -2506.2021f, 0.583701f };
			Local_105 = { 571.14154f, -2522.9753f, 10.450453f };
			break;
		case 13:
			Local_102 = { 691.82355f, -2558.2185f, 0.363352f };
			Local_103 = { 645.8863f, -2600.3113f, 9.898791f };
			fLocal_106 = 10.25f;
			Local_104 = { 695.79285f, -2561.0337f, 0.346731f };
			Local_105 = { 656.3919f, -2601.9717f, 9.643657f };
			break;
		case 14:
			Local_102 = { 723.6254f, -2562.1707f, 0.255647f };
			Local_103 = { 720.75195f, -2619.7695f, 15.732105f };
			fLocal_106 = 15f;
			Local_104 = { 735.76495f, -2561.935f, 0.311182f };
			Local_105 = { 736.1214f, -2618.7666f, 15.790609f };
			break;
		case 15:
			Local_102 = { 891.43866f, -2603.12f, 0f };
			Local_103 = { 704.49316f, -2634.7932f, 45f };
			fLocal_106 = 20f;
			Local_104 = { 893.2578f, -2616.235f, 0f };
			Local_105 = { 707.72614f, -2647.6956f, 45f };
			break;
		case 16:
			Local_102 = { -2669.587f, 2491.96f, 2.043799f };
			Local_103 = { -2617.7646f, 2841.5947f, 14.082197f };
			fLocal_106 = 26.5f;
			Local_104 = { -2687.6057f, 2494.8682f, 2.608733f };
			Local_105 = { -2637.0847f, 2846.8752f, 14.159884f };
			break;
		case 17:
			Local_102 = { -1986.1726f, 4521.799f, 0f };
			Local_103 = { -1809.9026f, 4699.5513f, 53.508797f };
			fLocal_106 = 17f;
			Local_104 = { -1995.6681f, 4531.2593f, 0f };
			Local_105 = { -1817.5435f, 4708.3945f, 53.50917f };
			break;
		case 18:
			Local_102 = { -526.0265f, 4472.4424f, 0f };
			Local_103 = { -505.57144f, 4335.7246f, 86.73311f };
			fLocal_106 = 10f;
			Local_104 = { -519.9281f, 4476.3457f, 0f };
			Local_105 = { -500.73132f, 4336.389f, 86.71289f };
			break;
		case 19:
			Local_102 = { 98.1615f, 3384.489f, 45.45169f };
			Local_103 = { 154.97403f, 3350.694f, 30.033585f };
			fLocal_106 = 8f;
			Local_104 = { 152.68018f, 3346.7935f, 45.021557f };
			Local_105 = { 95.57188f, 3380.0906f, 30.432842f };
			break;
		case 20:
			Local_102 = { 147.86061f, 3406.7961f, 38.036716f };
			Local_103 = { 126.132935f, 3416.9268f, 30.029865f };
			fLocal_106 = 14.5f;
			Local_104 = { 130.09163f, 3425.4172f, 38.056725f };
			Local_105 = { 151.87035f, 3415.3914f, 30.057804f };
			break;
		case 21:
			Local_102 = { 2830.9722f, 4967.1396f, 34.560127f };
			Local_103 = { 2818.7188f, 4992.2983f, 51.2909f };
			fLocal_106 = 10f;
			Local_104 = { 2826.7668f, 4964.185f, 34.10636f };
			Local_105 = { 2814.2163f, 4989.9834f, 51.21849f };
			break;
		case 22:
			Local_102 = { -151.57642f, 4264.417f, 31.047348f };
			Local_103 = { -193.19623f, 4224.604f, 43.87255f };
			fLocal_106 = 10f;
			Local_104 = { -148.38419f, 4261.0713f, 31.57409f };
			Local_105 = { -190.47188f, 4222.076f, 43.954426f };
			break;
		case 23:
			Local_102 = { -426.69186f, 2964.272f, 14.848002f };
			Local_103 = { -396.2298f, 2959.2776f, 23.506374f };
			fLocal_106 = 7f;
			Local_104 = { -425.0283f, 2967.8613f, 15.226991f };
			Local_105 = { -395.60727f, 2962.6067f, 24.38079f };
			break;
		case 24:
			Local_102 = { -192.34137f, 2864.9163f, 30.72595f };
			Local_103 = { -170.15094f, 2857.1282f, 43.941822f };
			fLocal_106 = 10f;
			Local_104 = { -192.01286f, 2871.6025f, 29.999426f };
			Local_105 = { -169.59575f, 2863.8384f, 44.032505f };
			break;
		case 25:
			Local_102 = { 2539.185f, 2228.7717f, 18.610205f };
			Local_103 = { 2574.3733f, 2169.4014f, 27.265978f };
			fLocal_106 = 10f;
			Local_104 = { 2543.7075f, 2231.4016f, 18.331003f };
			Local_105 = { 2578.0789f, 2171.5837f, 27.26057f };
			break;
		case 26:
			Local_102 = { 2954.0867f, 815.7209f, 0.037901f };
			Local_103 = { 2933.1892f, 796.4688f, 12.983917f };
			fLocal_106 = 35f;
			Local_104 = { 2966.1226f, 806.88885f, 0.544056f };
			Local_105 = { 2950.8013f, 786.78156f, 11.745959f };
			break;
		case 27:
			Local_102 = { 2329.6726f, -459.66476f, 70.24277f };
			Local_103 = { 2413.3838f, -361.21884f, 91.77886f };
			fLocal_106 = 12f;
			Local_104 = { 2324.752f, -455.52377f, 70.25145f };
			Local_105 = { 2407.4094f, -356.20032f, 91.43083f };
			break;
		case 28:
			Local_102 = { 1943.4285f, -753.251f, 80.17905f };
			Local_103 = { 1850.3645f, -760.95874f, 93.025215f };
			fLocal_106 = 7f;
			Local_104 = { 1943.366f, -758.28705f, 80.322914f };
			Local_105 = { 1851.3535f, -765.18066f, 92.935455f };
			break;
		case 29:
			Local_102 = { -271.2849f, -2414.9932f, -10f };
			Local_103 = { -542.9096f, -2225.856f, 52.650043f };
			fLocal_106 = 30f;
			Local_104 = { -279.83987f, -2427.2117f, -10f };
			Local_105 = { -551.26556f, -2237.7905f, 52.64634f };
			break;
		case 30:
			Local_102 = { -1483.0004f, 2691.4277f, -10f };
			Local_103 = { -1377.1682f, 2600.7688f, 15.955276f };
			fLocal_106 = 12f;
			Local_104 = { -1478.1521f, 2696.688f, -10f };
			Local_105 = { -1378.5032f, 2608.6978f, 15.609236f };
			break;
		case 31:
			Local_102 = { 222.15187f, -2343.4866f, 0.039199f };
			Local_103 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_106 = 12f;
			Local_104 = { 216.95901f, -2343.4866f, 0.207734f };
			Local_105 = { 216.60204f, -2295.445f, 7.424279f };
			break;
		case 32:
			Local_102 = { 346.46216f, -2244.374f, 0.159779f };
			Local_103 = { 346.83472f, -2389.5906f, 7.852059f };
			fLocal_106 = 20f;
			Local_104 = { 359.60904f, -2244.4678f, 0.129684f };
			Local_105 = { 355.40543f, -2390.2583f, 7.080691f };
			break;
		case 33:
			Local_102 = { -1859.6799f, -322.63574f, 56.16368f };
			Local_103 = { -1836.6136f, -335.41412f, 96.116104f };
			fLocal_106 = 7.5f;
			Local_104 = { -1860.2698f, -327.86343f, 57.543f };
			Local_105 = { -1837.2709f, -339.22272f, 95.69325f };
			break;
		case 34:
			Local_102 = { -680.26324f, -600.818f, 69.11289f };
			Local_103 = { -706.66125f, -600.7515f, 30.476036f };
			fLocal_106 = 31.5f;
			Local_104 = { -680.6077f, -618.36584f, 69.27496f };
			Local_105 = { -706.3596f, -618.23846f, 30.312347f };
			break;
		case 35:
			Local_102 = { -1468.0961f, -591.71576f, 67.055176f };
			Local_103 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_106 = 11.75f;
			Local_104 = { -1474.903f, -591.12146f, 67.08091f };
			Local_105 = { -1457.1731f, -568.1316f, 29.44059f };
			break;
		case 36:
			Local_102 = { -1544.9578f, -537.1475f, 72.443474f };
			Local_103 = { -1564.6162f, -551.1829f, 32.861633f };
			fLocal_106 = 11.75f;
			Local_104 = { -1541.0079f, -541.5494f, 71.61972f };
			Local_105 = { -1561.2189f, -555.86804f, 32.927902f };
			break;
		case 37:
			Local_102 = { 333.2108f, -2727.2737f, 20.716625f };
			Local_103 = { 333.4297f, -2791.609f, 41.990227f };
			fLocal_106 = 20f;
			Local_104 = { 343.11273f, -2727.2358f, 20.236126f };
			Local_105 = { 343.66782f, -2791.6023f, 41.379284f };
			break;
		case 38:
			Local_102 = { 1928.0713f, 6228.3555f, 43.493977f };
			Local_103 = { 2039.8823f, 6167.3975f, 55.46405f };
			fLocal_106 = 13f;
			Local_104 = { 1931.8202f, 6235.634f, 43.373817f };
			Local_105 = { 2039.5975f, 6176.5254f, 55.25597f };
			break;
		case 39:
			Local_102 = { -736.4309f, -1590.9208f, 10.808919f };
			Local_103 = { -710.81104f, -1516.3495f, -0.098598f };
			fLocal_106 = 15f;
			Local_104 = { -727.2307f, -1585.2212f, 11.78027f };
			Local_105 = { -700.02014f, -1511.7826f, -0.341655f };
			break;
		case 40:
			Local_102 = { -676.3775f, -1548.5526f, 12.337475f };
			Local_103 = { -659.329f, -1507.0629f, -0.788618f };
			fLocal_106 = 25f;
			Local_104 = { -654.203f, -1536.146f, 9.191055f };
			Local_105 = { -645.9954f, -1500.2194f, -2.406948f };
			break;
		case 41:
			Local_102 = { -624.2344f, -1537.0453f, 12.601933f };
			Local_103 = { -622.1749f, -1472.8766f, -0.292606f };
			fLocal_106 = 8f;
			Local_104 = { -615.4003f, -1536.65f, 12.402705f };
			Local_105 = { -619.7385f, -1472.9371f, -0.243267f };
			break;
		case 42:
			Local_102 = { -492.5057f, -1632.4572f, 24.3307f };
			Local_103 = { -418.2088f, -1487.4521f, 0f };
			fLocal_106 = 25f;
			Local_104 = { -486.2016f, -1636.095f, 24.208052f };
			Local_105 = { -398.76483f, -1490.4403f, 0f };
			break;
		case 43:
			Local_102 = { -359.3541f, -1639.6927f, 13.134555f };
			Local_103 = { -388.49548f, -1690.9452f, -0.183164f };
			fLocal_106 = 25f;
			Local_104 = { -378.15182f, -1705.6597f, 12.471957f };
			Local_105 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		case 44:
			Local_102 = { -243.44357f, -1814.6228f, 25.694649f };
			Local_103 = { -183.99873f, -1780.6447f, -0.085802f };
			fLocal_106 = 25f;
			Local_104 = { -235.13191f, -1822.0938f, 25.865416f };
			Local_105 = { -175.51047f, -1788.2748f, -0.506062f };
			break;
		case 45:
			Local_102 = { 84.55537f, -2046.1588f, 13.307674f };
			Local_103 = { 17.93164f, -2045.1519f, -0.031946f };
			fLocal_106 = 25f;
			Local_104 = { 17.907875f, -2035.773f, 12.627057f };
			Local_105 = { 84.57207f, -2034.1838f, 0.048385f };
			break;
		case 46:
			Local_102 = { 221.50294f, -2232.7664f, 9.88676f };
			Local_103 = { 221.68253f, -2244.081f, 4.479149f };
			fLocal_106 = 8f;
			Local_104 = { 218.58301f, -2232.7664f, 9.886198f };
			Local_105 = { 218.72896f, -2244.081f, 4.535046f };
			break;
		case 47:
			Local_102 = { 221.65178f, -2184.6348f, 11.664567f };
			Local_103 = { 221.61394f, -2208.1372f, 5.876424f };
			fLocal_106 = 8f;
			Local_104 = { 217.89954f, -2184.6348f, 11.540504f };
			Local_105 = { 218.33266f, -2208.1372f, 5.864793f };
			break;
		case 48:
			Local_102 = { 2326.57f, 1096.0305f, 76.314575f };
			Local_103 = { 2290.332f, 1136.1307f, 58.857056f };
			fLocal_106 = 21f;
			Local_104 = { 2334.4534f, 1103.0668f, 76.26603f };
			Local_105 = { 2297.8457f, 1142.8969f, 58.84243f };
			break;
		case 49:
			Local_102 = { 2379.4421f, 1150.7755f, 58.796318f };
			Local_103 = { 2327.658f, 1212.3663f, 72.8333f };
			fLocal_106 = 12f;
			Local_104 = { 2374.0637f, 1146.2821f, 58.833305f };
			Local_105 = { 2320.8945f, 1209.5961f, 72.79299f };
			break;
		case 50:
			Local_102 = { -1179.4052f, -355.25543f, 56.53003f };
			Local_103 = { -1198.0641f, -357.8363f, 35.35551f };
			fLocal_106 = 12.5f;
			Local_104 = { -1178.3853f, -361.87842f, 56.150814f };
			Local_105 = { -1197.1038f, -364.70044f, 36.494755f };
			break;
		case 51:
			Local_102 = { -921.3846f, -384.93997f, 137.01813f };
			Local_103 = { -912.4324f, -429.22897f, 36.701126f };
			fLocal_106 = 16f;
			Local_104 = { -914.1658f, -387.94437f, 137.07936f };
			Local_105 = { -906.25336f, -424.69104f, 47.11882f };
			break;
		case 52:
			Local_102 = { -740.2564f, 246.45285f, 132.29219f };
			Local_103 = { -718.3602f, 201.00415f, 80.95571f };
			fLocal_106 = 22f;
			Local_104 = { -726.6429f, 253.06764f, 132.33194f };
			Local_105 = { -705.5858f, 210.43356f, 78.70573f };
			break;
		case 53:
			Local_102 = { -771.2068f, 268.2729f, 132.16891f };
			Local_103 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_106 = 16f;
			Local_104 = { -770.8035f, 310.86252f, 137.41614f };
			Local_105 = { -763.06805f, 269.04404f, 83.31474f };
			break;
		case 54:
			Local_102 = { 259.22052f, 135.41461f, 136.70827f };
			Local_103 = { 279.23962f, 128.13794f, 100.8233f };
			fLocal_106 = 16f;
			Local_104 = { 261.96936f, 142.96764f, 136.68892f };
			Local_105 = { 281.72034f, 134.95508f, 100.77042f };
			break;
		case 55:
			Local_102 = { 393.54797f, -30.871658f, 152.66345f };
			Local_103 = { 369.9622f, -23.884607f, 88.35776f };
			fLocal_106 = 8f;
			Local_104 = { 390.5358f, -36.088818f, 152.78125f };
			Local_105 = { 368.12747f, -28.818884f, 88.69447f };
			break;
		case 56:
			Local_102 = { 114.31391f, -648.42975f, 261.8488f };
			Local_103 = { 131.07816f, -733.7684f, 39.343933f };
			fLocal_106 = 20f;
			Local_104 = { 124.8467f, -646.65753f, 261.8488f };
			Local_105 = { 140.05025f, -737.427f, 39.349304f };
			break;
		case 57:
			Local_102 = { -215.91899f, -823.8436f, 126.02239f };
			Local_103 = { -193.22368f, -761.77814f, 27.913818f };
			fLocal_106 = 20f;
			Local_104 = { -225.39696f, -820.39374f, 126.08122f };
			Local_105 = { -202.94325f, -758.257f, 27.47734f };
			break;
		case 58:
			Local_102 = { -296.4725f, -802.08154f, 95.401085f };
			Local_103 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_106 = 20f;
			Local_104 = { -305.46024f, -798.8369f, 95.48194f };
			Local_105 = { -285.73764f, -745.0959f, 49.576508f };
			break;
		case 59:
			Local_102 = { -292.30344f, -823.3569f, 95.376205f };
			Local_103 = { -258.59906f, -835.56323f, 27.979462f };
			fLocal_106 = 20f;
			Local_104 = { -288.92062f, -814.02203f, 95.375565f };
			Local_105 = { -255.2116f, -826.25604f, 27.737495f };
			break;
		case 60:
			Local_102 = { -256.35886f, -714.78375f, 110.16166f };
			Local_103 = { -212.90544f, -730.53204f, 32.21946f };
			fLocal_106 = 20f;
			Local_104 = { -253.77232f, -705.6632f, 110.17357f };
			Local_105 = { -210.05878f, -722.6748f, 32.465363f };
			break;
		case 61:
			Local_102 = { 1808.2145f, 1949.2458f, 71.73707f };
			Local_103 = { 1837.9062f, 2127.2832f, 52.80491f };
			fLocal_106 = 9.75f;
			Local_104 = { 1802.7859f, 1950.2617f, 71.74002f };
			Local_105 = { 1831.9944f, 2127.4326f, 52.83893f };
			break;
		case 62:
			Local_102 = { 2388.733f, 2931.941f, 46.62681f };
			Local_103 = { 2426.6807f, 2883.0662f, 36.215237f };
			fLocal_106 = 10f;
			Local_104 = { 2392.5466f, 2934.8672f, 46.626797f };
			Local_105 = { 2430.3325f, 2885.9084f, 36.28148f };
			break;
		case 63:
			Local_102 = { 2700.0557f, 4836.381f, 42.078537f };
			Local_103 = { 2685.6733f, 4893.3804f, 30.908669f };
			fLocal_106 = 20.75f;
			Local_104 = { 2685.6719f, 4821.653f, 42.184708f };
			Local_105 = { 2672.8123f, 4880.3564f, 31.133106f };
			break;
		case 64:
			Local_102 = { -1053.4464f, 4766.245f, 234.32512f };
			Local_103 = { -1040.2634f, 4737.1567f, 204.49164f };
			fLocal_106 = 5f;
			Local_104 = { -1051.4143f, 4767.193f, 234.4293f };
			Local_105 = { -1037.9542f, 4738.3545f, 204.52815f };
			break;
	}
}

int func_383()//Position - 0xEBB7
{
	switch (Local_150.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		default:
	}
	return 0;
}

int func_384(struct<3> Param0, float fParam1, int iParam2)//Position - 0xEC3A
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_0__::func_832() < 10)
	{
		iVar0 = __LIB_1__::func_949();
		func_385(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_385(struct<3> Param0, var uParam1, int iParam2, var uParam3)//Position - 0xEC67
{
	func_386(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_386(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xEC81
{
	struct<12> Var0;
	if (__LIB_36__::func_489(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			__LIB_1__::func_947(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (__LIB_12__::func_268(Var0))
		{
			Global_2667225.f_45.f_64 = __LIB_3__::func_158(PLAYER::PLAYER_ID());
			__LIB_1__::func_944(Var0, iParam4);
		}
	}
}

char* func_403(int iParam0)//Position - 0xF173
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0" /* GXT: Perform the longest jump in a land vehicle. */;
		case 1:
			return "AMCH_1" /* GXT: Fall the longest distance with a parachute before opening it. */;
		case 2:
			return "AMCH_2" /* GXT: Achieve the highest speed in a land vehicle. */;
		case 3:
			return "AMCH_3" /* GXT: Perform the longest stoppie on a motorcycle. */;
		case 4:
			return "AMCH_4" /* GXT: Perform the longest wheelie on a motorcycle. */;
		case 5:
			return "AMCH_5" /* GXT: Drive the furthest distance in a land vehicle without crashing. */;
		case 6:
			return "AMCH_6" /* GXT: Open your parachute closest to the ground while freefalling. */;
		case 7:
			return "AMCH_7" /* GXT: Steal the most vehicles. */;
		case 8:
			return "AMCH_8" /* GXT: Perform the most near misses with other vehicles in a land vehicle without crashing. */;
		case 14:
			return "AMCH_9" /* GXT: Fly under the most ~y~bridges~s~ in the time limit. */;
		case 9:
			return "AMCH_12" /* GXT: Reverse the longest distance without crashing. */;
		case 10:
			return "AMCH_13" /* GXT: Fall the longest distance without dying. */;
		case 11:
			return "AMCH_15" /* GXT: Fly low to the ground for the longest distance. */;
		case 12:
			return "AMCH_16" /* GXT: Fly upside-down near the ground for the longest distance. */;
		case 15:
			return "AMCH_19" /* GXT: Achieve the highest number of headshot kills on players. */;
		case 16:
			return "AMCH_20" /* GXT: Achieve the highest number of driveby kills on players. */;
		case 17:
			return "AMCH_21" /* GXT: Achieve the highest number of melee kills on players. */;
		case 18:
			return "AMCH_22" /* GXT: Achieve the highest number of sniper rifle kills on players. */;
		case 13:
			return "AMCH_23" /* GXT: Travel the furthest distance when bailing from a land vehicle. */;
		default:
	}
	return "";
}

char* func_404(int iParam0)//Position - 0xF27C
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC" /* GXT: Longest Jump */;
		case 1:
			return "AMCH_1SLC" /* GXT: Longest Freefall */;
		case 2:
			return "AMCH_2SLC" /* GXT: Highest Speed */;
		case 3:
			return "AMCH_3SLC" /* GXT: Longest Stoppie */;
		case 4:
			return "AMCH_4SLC" /* GXT: Longest Wheelie */;
		case 5:
			return "AMCH_5SLC" /* GXT: No Crashes */;
		case 6:
			return "AMCH_6SLC" /* GXT: Lowest Parachute */;
		case 7:
			return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
		case 8:
			return "AMCH_8SLC" /* GXT: Near Misses */;
		case 14:
			return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
		case 9:
			return "AMCH_12SLC" /* GXT: Reverse Driving */;
		case 10:
			return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
		case 11:
			return "AMCH_15SLC" /* GXT: Low Flying */;
		case 12:
			return "AMCH_16SLC" /* GXT: Inverted Flying */;
		case 15:
			return "AMCH_19SLC" /* GXT: Headshot Kills */;
		case 16:
			return "AMCH_20SLC" /* GXT: Driveby */;
		case 17:
			return "AMCH_21SLC" /* GXT: Melee */;
		case 18:
			return "AMCH_22SLC" /* GXT: Sniper Kills */;
		case 13:
			return "AMCH_23SLC" /* GXT: Longest Bail */;
		default:
	}
	return "";
}

char* func_405(int iParam0)//Position - 0xF385
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0" /* GXT: Perform the longest jump in a land vehicle */;
		case 1:
			return "AMCH_BIG_1" /* GXT: Fall the longest distance with a parachute before opening it */;
		case 2:
			return "AMCH_BIG_2" /* GXT: Achieve the highest speed in a land vehicle */;
		case 3:
			return "AMCH_BIG_3" /* GXT: Perform the longest stoppie on a motorcycle */;
		case 4:
			return "AMCH_BIG_4" /* GXT: Perform the longest wheelie on a motorcycle */;
		case 5:
			return "AMCH_BIG_5" /* GXT: Drive the furthest distance in a land vehicle without crashing */;
		case 6:
			return "AMCH_BIG_6" /* GXT: Open your parachute closest to the ground while freefalling */;
		case 7:
			return "AMCH_BIG_7" /* GXT: Steal the most vehicles */;
		case 8:
			return "AMCH_BIG_8" /* GXT: Perform the most near misses with other vehicles in a land vehicle without crashing */;
		case 14:
			return "AMCH_BIG_9" /* GXT: Fly under the most bridges in the time limit */;
		case 9:
			return "AMCH_BIG_12" /* GXT: Reverse the longest distance without crashing */;
		case 10:
			return "AMCH_BIG_13" /* GXT: Fall the longest distance without dying */;
		case 11:
			return "AMCH_BIG_15" /* GXT: Fly low to the ground for the longest distance */;
		case 12:
			return "AMCH_BIG_16" /* GXT: Fly upside-down near the ground for the longest distance */;
		case 15:
			return "AMCH_BIG_19" /* GXT: Achieve the highest number of headshot kills on players */;
		case 16:
			return "AMCH_BIG_20" /* GXT: Achieve the highest number of driveby kills on players */;
		case 17:
			return "AMCH_BIG_21" /* GXT: Achieve the highest number of melee kills on players */;
		case 18:
			return "AMCH_BIG_22" /* GXT: Achieve the highest number of sniper rifle kills on players */;
		case 13:
			return "AMCH_BIG_23" /* GXT: Travel the furthest distance when bailing from a vehicle */;
		default:
	}
	return "";
}

void func_407(var uParam0)//Position - 0xF4BB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!__LIB_18__::func_919(iVar0) && !__LIB_18__::func_918(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_100[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_408()//Position - 0xF4FC
{
	if (!func_383())
	{
		if (Local_150.f_3 == 14)
		{
			func_411();
		}
		Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1 = func_369();
	}
	else if ((!BitTest(Global_1836844.f_1, 4) && !BitTest(Global_1836844.f_1, 5)) && !__LIB_2__::func_138(PLAYER::PLAYER_ID()))
	{
		func_409();
	}
}

void func_409()//Position - 0xF55A
{
	switch (Local_150.f_3)
	{
		case 0:
			STATS::STAT_START_RECORD_STAT(8, 2);
			break;
		case 1:
			STATS::STAT_START_RECORD_STAT(13, 2);
			break;
		case 2:
			STATS::STAT_START_RECORD_STAT(4, 2);
			break;
		case 4:
			STATS::STAT_START_RECORD_STAT(1, 2);
			break;
		case 3:
			STATS::STAT_START_RECORD_STAT(2, 2);
			break;
		case 5:
			STATS::STAT_START_RECORD_STAT(3, 2);
			break;
		case 6:
			STATS::STAT_START_RECORD_STAT(11, 3);
			break;
		case 7:
			STATS::STAT_START_RECORD_STAT(14, 1);
			break;
		case 8:
			STATS::STAT_START_RECORD_STAT(29, 2);
			break;
		case 9:
			STATS::STAT_START_RECORD_STAT(12, 2);
			break;
		case 10:
			STATS::STAT_START_RECORD_STAT(10, 2);
			break;
		case 11:
			STATS::STAT_START_RECORD_STAT(18, 2);
			break;
		case 12:
			STATS::STAT_START_RECORD_STAT(20, 2);
			break;
		case 13:
			STATS::STAT_START_RECORD_STAT(27, 2);
			break;
		case 15:
			STATS::STAT_START_RECORD_STAT(26, 1);
			break;
		case 16:
			STATS::STAT_START_RECORD_STAT(25, 1);
			break;
		case 17:
			STATS::STAT_START_RECORD_STAT(22, 1);
			break;
		case 18:
			STATS::STAT_START_RECORD_STAT(24, 1);
			break;
	}
	MISC::SET_BIT(&uLocal_121, 8);
}

void func_411()//Position - 0xF6B2
{
	Local_100[0 /*3*/] = { 1083f, -231f, 60f };
	Local_100[1 /*3*/] = { 1024f, -325f, 60f };
	Local_100[2 /*3*/] = { 910f, -401f, 43f };
	Local_100[3 /*3*/] = { 721f, -457f, 26f };
	Local_100[4 /*3*/] = { 643f, -579f, 26f };
	Local_100[5 /*3*/] = { 590f, -851f, 26f };
	Local_100[6 /*3*/] = { 590f, -1023f, 16f };
	Local_100[7 /*3*/] = { 582f, -1205f, 24f };
	Local_100[8 /*3*/] = { 608f, -1335f, 16f };
	Local_100[9 /*3*/] = { 640f, -1434f, 16f };
	Local_100[10 /*3*/] = { 671f, -1742f, 20f };
	Local_100[11 /*3*/] = { 651f, -2046f, 16f };
	Local_100[12 /*3*/] = { 603f, -2505f, 9f };
	Local_100[13 /*3*/] = { 673f, -2582f, 4f };
	Local_100[14 /*3*/] = { 728f, -2594f, 10f };
	Local_100[15 /*3*/] = { 794f, -2624f, 27f };
	Local_100[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_100[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_100[18 /*3*/] = { -513f, 4427f, 40f };
	Local_100[19 /*3*/] = { 126f, 3366f, 40f };
	Local_100[20 /*3*/] = { 143f, 3418f, 36f };
	Local_100[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_100[22 /*3*/] = { -162f, 4249f, 40f };
	Local_100[23 /*3*/] = { -408f, 2964f, 20f };
	Local_100[24 /*3*/] = { -181f, 2862f, 38f };
	Local_100[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_100[26 /*3*/] = { 2950f, 803f, 8f };
	Local_100[27 /*3*/] = { 2369f, -409f, 80f };
	Local_100[28 /*3*/] = { 1906f, -755f, 84f };
	Local_100[29 /*3*/] = { -403f, -2333f, 40f };
	Local_100[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_100[31 /*3*/] = { 219f, -2315f, 5f };
	Local_100[32 /*3*/] = { 350f, -2315f, 5f };
	Local_100[33 /*3*/] = { -1848f, -333f, 75f };
	Local_100[34 /*3*/] = { -693f, -608f, 69f };
	Local_100[35 /*3*/] = { -1461f, -582f, 53f };
	Local_100[36 /*3*/] = { -1553f, -546f, 59f };
	Local_100[37 /*3*/] = { 338f, -2758f, 23f };
	Local_100[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_100[39 /*3*/] = { -713f, -1538f, 13f };
	Local_100[40 /*3*/] = { -659f, -1518f, 13f };
	Local_100[41 /*3*/] = { -620f, -1502f, 16f };
	Local_100[42 /*3*/] = { -445f, -1575f, 26f };
	Local_100[43 /*3*/] = { -373f, -1680f, 19f };
	Local_100[44 /*3*/] = { -212f, -1805f, 29f };
	Local_100[45 /*3*/] = { 47f, -2040f, 18f };
	Local_100[46 /*3*/] = { 223f, -2240f, 6f };
	Local_100[47 /*3*/] = { 218f, -2189f, 6f };
	Local_100[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_100[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_100[50 /*3*/] = { -1186f, -365f, 46f };
	Local_100[51 /*3*/] = { -916f, -407f, 93f };
	Local_100[52 /*3*/] = { -726f, 235f, 105f };
	Local_100[53 /*3*/] = { -774f, 286f, 112f };
	Local_100[54 /*3*/] = { 271f, 134f, 125f };
	Local_100[55 /*3*/] = { 377f, -28f, 125f };
	Local_100[56 /*3*/] = { 121f, -703f, 150f };
	Local_100[57 /*3*/] = { -204f, -784f, 74f };
	Local_100[58 /*3*/] = { -287f, -774f, 72f };
	Local_100[59 /*3*/] = { -272f, -824f, 71f };
	Local_100[60 /*3*/] = { -230f, -723f, 80f };
	Local_100[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_100[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_100[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_100[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_413(var uParam0, int iParam1)//Position - 0xFCD2
{
	if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 133 && iParam1)
	{
		Global_2815059.f_5116 = uParam0;
	}
	else
	{
		Global_2815059.f_5116 = -1;
	}
}

void func_414(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xFD03
{
	bool bVar0;
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_358(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		__LIB_1__::func_460(__LIB_1__::func_957(iParam0), 1);
	}
	else
	{
		__LIB_2__::func_137(iParam0, -1);
		if (__LIB_1__::func_899(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			__LIB_1__::func_956(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (__LIB_1__::func_899(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 5);
		}
		if (((__LIB_0__::func_945() && !__LIB_1__::func_941()) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
		MISC::SET_BIT(&(Global_1836844.f_1), 20);
		if (__LIB_1__::func_955(iParam0))
		{
			__LIB_1__::func_954();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			__LIB_2__::func_74(fParam1);
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
		if (__LIB_2__::func_136(iParam0))
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
				__LIB_2__::func_135(1);
				if (__LIB_1__::func_931(0))
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
			__LIB_2__::func_57(1);
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (bParam5)
		{
			__LIB_1__::func_951();
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (!bParam6)
		{
			if (__LIB_2__::func_162(iParam0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 21);
			}
		}
	}
	Global_2787396 = 1;
}

int func_432()//Position - 0x1025B
{
	switch (Local_150.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		default:
	}
	return 0;
}

int func_434()//Position - 0x10393
{
	switch (Local_150.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		default:
	}
	return 0;
}

void func_435()//Position - 0x103C8
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_13(Local_150.f_3))
	{
		if (Local_150.f_3 == 1 || Local_150.f_3 == 6)
		{
			iVar0 = __LIB_1__::func_464(PLAYER::PLAYER_ID(), 1);
			iVar1 = __LIB_1__::func_74(iVar0, 1);
			if (iVar1 < 11)
			{
				if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
					func_436(1);
				}
			}
			else
			{
				PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
			}
		}
	}
}

void func_436(bool bParam0)//Position - 0x1043A
{
	int iVar0;
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		if (__LIB_0__::func_137(3610, -1))
		{
		}
		iVar0 = __LIB_1__::func_360(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (__LIB_2__::func_159(0))
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		}
		else
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_715(Global_2824753), 0);
		}
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_440(__LIB_1__::func_360(2042, -1, 0), 1);
		Global_2815059.f_287 = 1;
		func_437(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_437(int iParam0, int iParam1, int iParam2)//Position - 0x10513
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		if (iParam2 == -1)
		{
			iParam2 = __LIB_1__::func_360(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = __LIB_1__::func_360(586, -1, 0);
		}
		if (__LIB_2__::func_159(1) && __LIB_0__::func_287(iParam0))
		{
			__LIB_3__::func_340(iParam0, __LIB_1__::func_715(Global_2824753), 0);
		}
		else
		{
			__LIB_3__::func_340(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			__LIB_3__::func_340(iParam0, Global_1836612, 1);
		}
		__LIB_0__::func_440(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

void func_440(int iParam0, int iParam1)//Position - 0x10638
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		__LIB_1__::func_354(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iParam0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iParam0), false);
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_437(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

void func_457()//Position - 0x141DB
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	float fVar12;
	if ((((!__LIB_2__::func_124(PLAYER::PLAYER_ID()) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && !__LIB_0__::func_983()) && !__LIB_42__::func_72(PLAYER::PLAYER_ID(), 0, -1)) && !__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			fVar4 = 2.1474836E+09f;
			iVar5 = -1;
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar7 = __LIB_2__::func_13(Local_150.f_3);
			bVar8 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar9 = __LIB_32__::func_486();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar10 = Local_150.f_67[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar10) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar10), false))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar10))
						{
							func_346(1);
						}
					}
					MISC::SET_BIT(&uVar3, iVar2);
					if (bVar7 && __LIB_35__::func_686(Local_150.f_3, iVar2, &Var0, &uVar1))
					{
						Var11 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar10), true) };
						if (SYSTEM::VDIST(Var11, Var0) <= 10f)
						{
							fVar12 = SYSTEM::VDIST(Var11, Var6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (__LIB_28__::func_556(Local_150.f_3))
			{
				MISC::SET_BIT(&uVar3, 31);
			}
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = uVar3;
			if (__LIB_2__::func_13(Local_150.f_3))
			{
				if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2.1474836E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (__LIB_35__::func_686(Local_150.f_3, iVar5, &Var0, &uVar1))
						{
							func_467(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							__LIB_1__::func_959(Var0, 1, 0);
							func_459(10, 0, 0, 0, 0);
							MISC::SET_BIT(&uLocal_121, 5);
						}
					}
				}
				else
				{
					func_458();
				}
			}
		}
	}
	else
	{
		func_458();
	}
}

void func_458()//Position - 0x1440D
{
	if (BitTest(uLocal_121, 5))
	{
		__LIB_1__::func_913();
		__LIB_2__::func_43();
		MISC::CLEAR_BIT(&uLocal_121, 5);
		__LIB_1__::func_912();
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14431
{
	if (Global_2703735.f_1571.f_703.f_16 != __LIB_0__::func_162())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && func_460())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_460()//Position - 0x144CD
{
	if ((((((__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 229 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 191) || __LIB_1__::func_718()) || __LIB_1__::func_632()) || __LIB_1__::func_717()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && __LIB_32__::func_554(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

void func_467(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x145DC
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
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (__LIB_36__::func_489(PLAYER::PLAYER_ID()))
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

void func_473(bool bParam0, bool bParam1)//Position - 0x14920
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	if (func_538())
	{
		if (bParam1)
		{
			iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
			if (__LIB_3__::func_467(PLAYER::PLAYER_ID()))
			{
				iVar1 = __LIB_2__::func_51();
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
				{
					iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_537())
				{
					switch (Local_150.f_3)
					{
						case 14:
							if (!__LIB_18__::func_919(iVar4) && !__LIB_18__::func_918(iVar4))
							{
								func_534("AMCH_BRIDGE" /* GXT: Bridge */, bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_150.f_67[iVar5 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_150.f_67[iVar5 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_150.f_67[iVar5 /*2*/].f_1), -1, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_143[iVar5]))
				{
					iLocal_143[iVar5] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_150.f_67[iVar5 /*2*/].f_1));
					HUD::SET_BLIP_SPRITE(iLocal_143[iVar5], func_533(iVar5));
					HUD::SET_BLIP_PRIORITY(iLocal_143[iVar5], 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143[iVar5], func_532(iVar5));
					__LIB_2__::func_53(&(iLocal_143[iVar5]), 9);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var6, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_150.f_67[iVar5 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_143[iVar5], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_143[iVar5], false);
						}
					}
					func_474(iLocal_143[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_143[iVar5]))
			{
				HUD::REMOVE_BLIP(&(iLocal_143[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_474(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14B1E
{
	HUD::SET_BLIP_ALPHA(iParam0, func_475(iParam0, iParam1, fParam2, fParam3));
}

int func_475(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x14B38
{
	float fVar0;
	if (!__LIB_1__::func_936(Global_2703735) && !__LIB_1__::func_141())
	{
		fVar0 = func_477(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = __LIB_19__::func_356();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

float func_477(int iParam0, float fParam1, float fParam2)//Position - 0x14BA0
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = Global_2703735;
	Var2 = { __LIB_1__::func_722(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581351 || __LIB_15__::func_360())
	{
		if (__LIB_4__::func_902(iVar0))
		{
			Var3 = { func_480(iVar0) };
		}
		else if (__LIB_19__::func_279(iVar0))
		{
			Var3 = { __LIB_19__::func_456(iVar0) };
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var3.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_480(int iParam0)//Position - 0x14CE0
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
	if (iParam0 == __LIB_0__::func_162())
	{
	}
	if (__LIB_12__::func_483(iParam0))
	{
		iVar0 = __LIB_1__::func_644(iParam0);
		if (iVar0 != __LIB_0__::func_162())
		{
			if (!__LIB_1__::func_659(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[__LIB_1__::func_644(iParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = __LIB_2__::func_55(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_967(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (__LIB_4__::func_954(iParam0) && !__LIB_8__::func_847(iParam0))
	{
		iVar2 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar2 != __LIB_0__::func_162())
		{
			iVar3 = __LIB_2__::func_55(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (__LIB_4__::func_955(iParam0) && !__LIB_8__::func_271(iParam0))
	{
		if (__LIB_4__::func_902(iParam0) && __LIB_1__::func_720())
		{
			return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar4 != __LIB_0__::func_162())
		{
			if (__LIB_1__::func_641(iVar4))
			{
				iVar5 = __LIB_1__::func_754(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_952(iParam0))
	{
		iVar6 = __LIB_1__::func_644(iParam0);
		if (iVar6 != __LIB_0__::func_162())
		{
			if (!__LIB_1__::func_645(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[__LIB_1__::func_644(iParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = __LIB_1__::func_754(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_968(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (__LIB_4__::func_947(iParam0) && !__LIB_5__::func_314(iParam0))
	{
		iVar8 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar8 != __LIB_0__::func_162())
		{
			if (__LIB_1__::func_595(iVar8))
			{
				iVar9 = __LIB_2__::func_54(iVar8);
				if (iVar9 != -1)
				{
					return __LIB_1__::func_719(iVar9);
				}
			}
		}
	}
	else if (__LIB_4__::func_947(iParam0) && !__LIB_5__::func_314(iParam0))
	{
		iVar10 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar10 != __LIB_0__::func_162())
		{
			if (__LIB_1__::func_643(iVar10))
			{
				iVar11 = __LIB_1__::func_753(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_946(iParam0, 0))
	{
		iVar12 = __LIB_1__::func_644(iParam0);
		if (iVar12 != __LIB_0__::func_162())
		{
			if (!__LIB_1__::func_637(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[__LIB_1__::func_644(iParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = __LIB_1__::func_753(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_914(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (__LIB_4__::func_903(iParam0))
	{
		iVar14 = __LIB_36__::func_31(iParam0);
		if (iVar14 != __LIB_0__::func_162())
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
	if (__LIB_4__::func_947(iParam0))
	{
		return __LIB_1__::func_719(Global_2689235[iParam0 /*453*/].f_318.f_6);
	}
	if (__LIB_8__::func_846(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
}

char* func_532(int iParam0)//Position - 0x16246
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_150.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC" /* GXT: Air Vehicle */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_150.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC" /* GXT: Air Vehicle */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_150.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_150.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE" /* GXT: Motorcycle */;
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_533(int iParam0)//Position - 0x162B9
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_150.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_150.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_150.f_67[iParam0 /*2*/]) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(Local_150.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_534(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x16320
{
	struct<3> Var0;
	if (!BitTest(Local_1516[iParam2 /*12*/].f_8[__LIB_1__::func_851(iParam3)], __LIB_2__::func_37(iParam3)) && !bParam1)
	{
		Var0 = { func_536(iParam3) };
		if (!HUD::DOES_BLIP_EXIST(iLocal_142[iParam3]))
		{
			if (!__LIB_0__::func_78(Var0, 0f, 0f, 0f, 0) && !__LIB_0__::func_78(Var0, 0f, 0f, -2000f, 0))
			{
				iLocal_142[iParam3] = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_PRIORITY(iLocal_142[iParam3], 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_142[iParam3], sParam0);
				func_474(iLocal_142[iParam3], 25, 1152319488, 1137180672);
				__LIB_2__::func_53(&(iLocal_142[iParam3]), 12);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_142[iParam3], true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(iLocal_142[iParam3], 255);
		}
		else
		{
			func_474(iLocal_142[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_142[iParam3]))
	{
		HUD::REMOVE_BLIP(&(iLocal_142[iParam3]));
		if (!bParam1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", false);
		}
	}
}

Vector3 func_536(int iParam0)//Position - 0x1648B
{
	switch (Local_150.f_3)
	{
		case 14:
			return Local_141[iParam0 /*3*/];
		default:
	}
	return 0f, 0f, 0f;
}

int func_537()//Position - 0x164B2
{
	switch (Local_150.f_3)
	{
		case 14:
			return 65;
		default:
	}
	return 0;
}

int func_538()//Position - 0x164D0
{
	switch (Local_150.f_3)
	{
		case 14:
			return 1;
		default:
	}
	return 0;
}

int func_539()//Position - 0x164ED
{
	switch (Local_150.f_3)
	{
		case -1:
			break;
		default:
			return 0;
	}
	return 0;
}

void func_540(var uParam0, char* sParam1)//Position - 0x1650D
{
	char* sVar0;
	if (__LIB_2__::func_132(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!__LIB_1__::func_76(sParam1))
	{
		sVar0 = sParam1;
	}
	__LIB_1__::func_350(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_545(bool bParam0)//Position - 0x16807
{
	if (!HUD::IS_RADAR_HIDDEN() && !CAM::IS_SCREEN_FADED_OUT())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_2__::func_13(Local_150.f_3))
						{
							if (Local_150.f_3 == 12)
							{
								__LIB_1__::func_707("AMCH_AIRAVI" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
							}
							else
							{
								__LIB_1__::func_707("AMCH_AIRAV" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_HELICOPTER~ ~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
							}
						}
						else if (__LIB_28__::func_556(Local_150.f_3))
						{
							__LIB_1__::func_707("AMCH_BIKEAV" /* GXT: Motorcycles ~HUD_COLOUR_BLUE~~BLIP_GANG_BIKE~~s~ are available at several locations. */, 30000);
						}
						__LIB_1__::func_752(1);
						MISC::SET_BIT(&uLocal_144, bParam0);
					}
				}
				break;
			case 1:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_1__::func_707("AMCH_BLOW" /* GXT: This vehicle will now self-destruct. */, 30000);
						__LIB_1__::func_752(1);
						MISC::SET_BIT(&uLocal_144, bParam0);
					}
				}
				break;
			case 2:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_1__::func_962(63))
					{
						switch (Local_150.f_3)
						{
							case 11:
							case 12:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										__LIB_1__::func_707("AMCH_ALTI" /* GXT: When flying close to the ground, a purple box is displayed on the Radar showing the height you must remain within to score in this challenge. */, 30000);
										__LIB_1__::func_752(1);
										MISC::SET_BIT(&uLocal_144, bParam0);
									}
								}
								break;
							case 8:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_NMIS" /* GXT: Points will be given for passing close to another land vehicle at speed without crashing. You must be driving a land vehicle to score. */, 30000);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 1:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_FRFALL" /* GXT: Deploy your parachute close to the ground for a higher score. Your score will only be counted if you land safely. Secondary parachutes will not count. */, -1);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 16:
							case 15:
							case 18:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_PVPO1" /* GXT: Points will only be given for eliminating other players and not the citizens of Los Santos and Blaine County. */, -1);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 17:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_PVPO2" /* GXT: Points will only be given for eliminating other players and not the citizens of Los Santos and Blaine County. Points will be deducted for kills with guns. */, -1);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 4:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_WHEELIE" /* GXT: Only wheelies performed on motorcycles will count towards this challenge. */, 30000);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 3:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_STOPPIE" /* GXT: Only stoppies performed on motorcycles will count towards this challenge. */, 30000);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 10:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_LFALL" /* GXT: Falls into water will not count towards this challenge. */, 30000);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							case 6:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_LPARA" /* GXT: Landing in water will not count towards this challenge. */, 30000);
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_144, bParam0);
								}
								break;
							}
						}
				}
				break;
			case 3:
				if (!BitTest(uLocal_144, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_962(63))
					{
						switch (Local_150.f_3)
						{
							case 11:
							case 12:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (__LIB_0__::func_937(&uLocal_115, 1000, 0))
										{
											__LIB_1__::func_707("AMCH_OCEAN" /* GXT: Flying low over deep water will not be counted for this challenge. */, 30000);
											__LIB_1__::func_752(1);
											__LIB_0__::func_794(&uLocal_115);
										}
									}
								}
								break;
							}
						}
				}
				break;
			case 5:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_1__::func_962(63))
					{
						switch (Local_150.f_3)
						{
							case 11:
							case 12:
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										if (__LIB_1__::func_936(PLAYER::PLAYER_ID()) && !__LIB_5__::func_836(PLAYER::PLAYER_ID()))
										{
											__LIB_1__::func_707("AMCH_ALTIEXP" /* GXT: The altimeter won't display on the expanded Radar. Return to the normal Radar to track your height above ground. */, 30000);
											__LIB_1__::func_752(1);
											MISC::SET_BIT(&uLocal_144, bParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			case 6:
				if (!BitTest(uLocal_144, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_962(63))
					{
						if (__LIB_0__::func_937(&uLocal_115, 1000, 0))
						{
							__LIB_1__::func_707("AMCH_FLYLOW" /* GXT: You must fly lower to score in the challenge. */, 30000);
							__LIB_1__::func_752(1);
							__LIB_0__::func_794(&uLocal_115);
						}
					}
				}
				break;
			case 7:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (Local_150.f_3 == 7)
					{
						if (iLocal_145 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_962(63))
							{
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_MVS1" /* GXT: Points will only be given for stealing vehicles from the citizens of Los Santos and Blaine County. */, 30000);
									__LIB_1__::func_752(1);
									iLocal_145 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_962(63))
						{
							if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
							{
								__LIB_1__::func_707("AMCH_MVS2" /* GXT: Points will not be given for stealing from other players or taking vehicles that have already been stolen. */, 30000);
								__LIB_1__::func_752(1);
								MISC::SET_BIT(&uLocal_144, bParam0);
							}
						}
					}
					if (Local_150.f_3 == 14)
					{
						if (iLocal_145 == 0)
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_962(63))
							{
								if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
								{
									__LIB_1__::func_707("AMCH_BRBL" /* GXT: The bridges ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~~s~ that count towards this challenge are displayed on your Radar. */, 30000);
									__LIB_1__::func_752(1);
									iLocal_145 = 1;
								}
							}
						}
						else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_962(63))
						{
							if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
							{
								__LIB_1__::func_707("AMCH_BRBL2" /* GXT: Flying under a bridge does not deny the points for that bridge to other players. Points will not be given for flying under a bridge more than once. */, 30000);
								__LIB_1__::func_752(1);
								MISC::SET_BIT(&uLocal_144, bParam0);
							}
						}
					}
				}
				break;
			case 9:
				if (!BitTest(uLocal_144, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_546("AMCH_WARN" /* GXT: The ~a~ Challenge will begin shortly. ~a~ The top 3 players will win cash and RP. */, func_404(Local_150.f_3), func_403(Local_150.f_3), 30000);
						__LIB_1__::func_752(0);
						Local_1517.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_144, bParam0);
					}
				}
				break;
			}
	}
}

void func_546(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x16DD3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_551(int iParam0)//Position - 0x16E4A
{
	Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 = iParam0;
}

int func_553(bool bParam0, bool bParam1, bool bParam2)//Position - 0x16E93
{
	if (__LIB_1__::func_727(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
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
	if (__LIB_1__::func_456(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_381())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_1__::func_968(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_975())
	{
		return 0;
	}
	if (bParam0)
	{
		if (__LIB_3__::func_362(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_569(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (__LIB_1__::func_965(PLAYER::PLAYER_ID()) != __LIB_0__::func_162() && __LIB_1__::func_965(PLAYER::PLAYER_ID()) == __LIB_0__::func_818(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_836(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (__LIB_1__::func_964(__LIB_1__::func_919()) && !__LIB_1__::func_940(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 12) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 14)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!__LIB_0__::func_93() && !Global_2787784)
		{
			return 0;
		}
	}
	if (__LIB_1__::func_725(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_719())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (__LIB_1__::func_948(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_100())
	{
		return 0;
	}
	if (__LIB_1__::func_864(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_1__::func_717())
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
	if (__LIB_1__::func_708(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_1__::func_958(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_830(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_569(bool bParam0)//Position - 0x17523
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_1__::func_15(bParam0) && !__LIB_1__::func_899(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_3__::func_362(bParam0);
	uVar3 = __LIB_0__::func_945();
	uVar4 = __LIB_12__::func_495();
	if ((bVar1 && (__LIB_1__::func_958(bParam0) || __LIB_1__::func_953(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !__LIB_3__::func_358(bParam0)) && !__LIB_3__::func_357(bParam0)))
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

void func_580()//Position - 0x17766
{
	func_581(&(Local_171.f_534), &Local_171, 27, &(Local_171.f_1), &(Local_171.f_117), Local_150.f_3, 0, 0);
}

void func_581(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x1778E
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
	if (func_697(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_3__::func_475() || iParam2 == 28)
	{
		if (__LIB_41__::func_58(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_2__::func_772(), sParam7))
		{
			__LIB_1__::func_995(1);
			if ((!__LIB_1__::func_994() && !__LIB_1__::func_993()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_992())
				{
					__LIB_2__::func_63();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_991(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_990(iParam1, 0, 0);
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
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_2__::func_40(bVar4, 0))
									{
										if (__LIB_3__::func_473(bVar4) || __LIB_2__::func_62(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_1__::func_744(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_32__::func_492(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_2__::func_155(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_492(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_632())
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_162();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_2__::func_144(bVar4) && __LIB_32__::func_491(bVar4, iParam2, bVar3)) && __LIB_1__::func_693(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_2__::func_164(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_3__::func_227(bVar4);
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
									if (!func_632())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_2__::func_773(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_983(iParam5, 1, 0, 0), 16);
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
								iVar17 = func_613(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_2__::func_72(bVar4, 1) && iVar1[bVar10] != -1)
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
								if (__LIB_1__::func_982(iParam5))
								{
									func_611(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_611(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_1__::func_693(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_162();
							}
							if (__LIB_2__::func_144(bVar4))
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_2__::func_164(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_3__::func_227(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = func_613(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_2__::func_72(bVar4, 1))
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
									__LIB_42__::func_957(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_2__::func_142(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_794(&(uParam3->f_21));
						__LIB_1__::func_975();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_974(uParam3, iParam1);
							__LIB_1__::func_824(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_974(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_2__::func_141(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_2__::func_140(uParam3);
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
			__LIB_1__::func_975();
			__LIB_1__::func_991(0);
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

void func_611(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x184DD
{
	int iVar0;
	char* sVar1;
	if (iParam3 >= __LIB_1__::func_981() && iParam3 < __LIB_1__::func_980())
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
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					__LIB_0__::func_610(sParam16);
				}
				else
				{
					__LIB_0__::func_700(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
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
				if (func_632())
				{
					__LIB_0__::func_700("");
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
						__LIB_0__::func_610(&(uParam2->f_104));
					}
					else
					{
						__LIB_0__::func_700("");
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
					__LIB_0__::func_700("");
				}
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					__LIB_0__::func_700(&sParam4);
				}
				__LIB_41__::func_42(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					__LIB_0__::func_700("");
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (__LIB_2__::func_117(uParam2))
				{
					__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_979(uParam2))
				{
					__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_978(uParam2))
				{
					__LIB_0__::func_610("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					__LIB_0__::func_610("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_613(bool bParam0, bool bParam1)//Position - 0x18858
{
	int iVar0;
	int iVar1;
	iVar0 = 116;
	if ((!bParam1 && __LIB_1__::func_15(bParam0)) && !__LIB_3__::func_362(bParam0))
	{
		iVar0 = __LIB_1__::func_259();
	}
	iVar1 = __LIB_36__::func_26(bParam0);
	if (!iVar1 == -1)
	{
		return __LIB_1__::func_357(iVar1);
	}
	return iVar0;
}

int func_632()//Position - 0x18D94
{
	switch (__LIB_0__::func_492(PLAYER::PLAYER_ID()))
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
	switch (__LIB_1__::func_592(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (__LIB_3__::func_362(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_0__::func_492(PLAYER::PLAYER_ID()))
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
	if (__LIB_2__::func_118(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_697(int iParam0)//Position - 0x1AA23
{
	if (iParam0 == 28)
	{
		if ((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_3__::func_362(PLAYER::PLAYER_ID())) && !__LIB_2__::func_118(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_362(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_569(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_700()//Position - 0x1AAD0
{
	if (Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
	{
		if (!BitTest(uLocal_121, 8))
		{
			if ((!__LIB_2__::func_124(PLAYER::PLAYER_ID()) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && !__LIB_2__::func_138(PLAYER::PLAYER_ID()))
			{
				func_409();
			}
		}
		else if (!BitTest(uLocal_121, 9))
		{
			if ((__LIB_2__::func_124(PLAYER::PLAYER_ID()) || __LIB_2__::func_139(PLAYER::PLAYER_ID())) || __LIB_2__::func_138(PLAYER::PLAYER_ID()))
			{
				STATS::STAT_STOP_RECORD_STAT();
				Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
				MISC::SET_BIT(&uLocal_121, 9);
			}
		}
	}
}

void func_701()//Position - 0x1AB6B
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_125)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_125));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			__LIB_2__::func_757(bVar0, 2);
		}
	}
	iLocal_125++;
	if (iLocal_125 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_125 = 0;
	}
}

void func_704(int iParam0, int iParam1)//Position - 0x1AC8F
{
	Local_1516[iParam0 /*12*/] = iParam1;
}

int func_705()//Position - 0x1ACA0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_171.f_534[iVar0 /*42*/].f_1 = __LIB_0__::func_162();
		iVar0++;
	}
	return 1;
}

int func_706()//Position - 0x1ACCC
{
	return Local_150.f_0;
}

int func_707(int iParam0)//Position - 0x1ACD7
{
	return Local_1516[iParam0 /*12*/];
}

void func_708()//Position - 0x1ACE6
{
	if (BitTest(Global_1836844.f_1, 6))
	{
		__LIB_2__::func_150();
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 6);
	}
	if (!BitTest(Global_1836844.f_1, 7))
	{
		if (BitTest(Global_1836844.f_1, 4) || BitTest(Global_1836844.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 7);
				__LIB_1__::func_707("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				__LIB_1__::func_752(1);
			}
		}
		else if (BitTest(Global_1836844.f_1, 17))
		{
			if (__LIB_0__::func_945() && !__LIB_1__::func_941())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
				MISC::SET_BIT(&(Global_1836844.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836844.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_2__::func_756())
			{
				__LIB_1__::func_707("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) != 200)
				{
					__LIB_1__::func_752(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (__LIB_1__::func_953(PLAYER::PLAYER_ID()))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 9);
			__LIB_2__::func_67(0);
			__LIB_1__::func_707("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			__LIB_1__::func_752(1);
		}
	}
	if (__LIB_1__::func_15(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 18))
		{
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836844.f_1, 20)) && !BitTest(Global_1836844.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 18);
			}
		}
		else if (BitTest(Global_1836844.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_2__::func_14())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				__LIB_1__::func_707("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				__LIB_1__::func_752(1);
			}
		}
	}
	if (((((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_1__::func_899(PLAYER::PLAYER_ID())) && __LIB_1__::func_592(PLAYER::PLAYER_ID()) != 146) && !__LIB_2__::func_124(PLAYER::PLAYER_ID())) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && !__LIB_2__::func_77())
	{
		if (__LIB_2__::func_136(__LIB_1__::func_592(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (__LIB_1__::func_958(PLAYER::PLAYER_ID()) || __LIB_2__::func_56())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (__LIB_2__::func_149(__LIB_1__::func_592(PLAYER::PLAYER_ID())))
				{
					if (__LIB_1__::func_931(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					if (!Global_2653189)
					{
						__LIB_2__::func_135(1);
						MISC::SET_BIT(&(Global_1836844.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 10);
			}
		}
		if (__LIB_1__::func_953(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836844.f_1, 11))
			{
				if (!Global_100493.f_8)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 12);
					__LIB_2__::func_57(1);
				}
				if (!__LIB_1__::func_734())
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 13);
					__LIB_1__::func_951();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
					if (__LIB_1__::func_931(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					__LIB_2__::func_135(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 11);
			}
		}
		else
		{
			__LIB_3__::func_192(0);
		}
	}
	else
	{
		__LIB_3__::func_192(1);
	}
	__LIB_2__::func_786();
	if (__LIB_2__::func_162(__LIB_1__::func_592(PLAYER::PLAYER_ID())) && !BitTest(Global_1836844.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 21);
	}
	if (((__LIB_0__::func_945() && !__LIB_1__::func_941()) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
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

int func_735()//Position - 0x1B97F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_2815059.f_5031)
	{
		return 0;
	}
	if ((!__LIB_0__::func_864(&(Local_150.f_39)) && !__LIB_0__::func_864(&(Local_150.f_41))) && !__LIB_0__::func_864(&(Local_150.f_43)))
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME();
	if (__LIB_0__::func_864(&(Local_150.f_41)))
	{
		iVar0 = __LIB_3__::func_461(&iVar2, &(Local_150.f_41));
		iVar1 = 20000;
	}
	else if (__LIB_0__::func_864(&(Local_150.f_39)))
	{
		iVar0 = __LIB_3__::func_461(&iVar2, &(Local_150.f_39));
		iVar1 = func_28(0);
	}
	else if (__LIB_0__::func_864(&(Local_150.f_43)))
	{
		iVar0 = __LIB_3__::func_461(&iVar2, &(Local_150.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

void func_744()//Position - 0x1BB3D
{
	int iVar0;
	if (__LIB_0__::func_959())
	{
		Local_1517.f_5 = 5;
	}
	else if (BitTest(Local_150.f_2, 0))
	{
		Local_1517.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1517.f_5 = 1;
	}
	else
	{
		Local_1517.f_5 = 2;
	}
	Local_1517.f_0 = Local_150.f_52;
	Local_1517.f_1 = Local_150.f_53;
	Local_1517.f_4 = Local_150.f_66;
	Local_1517.f_3 = Local_150.f_51;
	Local_1517.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_1517.f_9);
	if (!Global_262145.f_11972 /* Tunable: CHALLENGE_DISABLE_SHARE_CASH */)
	{
		if (Local_1517.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
		{
			__LIB_2__::func_758(Local_1517, Local_150.f_3, Local_1516[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (BitTest(uLocal_121, 4))
	{
		AUDIO::STOP_SOUND(iLocal_129);
		MISC::CLEAR_BIT(&uLocal_121, 4);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_129);
	AUDIO::RELEASE_SOUND_ID(iLocal_130);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((BitTest(uLocal_146, iVar0) && iLocal_147[iVar0] != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_147[iVar0]))
		{
			AUDIO::STOP_SOUND(iLocal_147[iVar0]);
			AUDIO::RELEASE_SOUND_ID(iLocal_147[iVar0]);
		}
		iVar0++;
	}
	__LIB_3__::func_0();
	func_473(1, 1);
	VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(0);
	__LIB_1__::func_963(0);
	func_413(Local_150.f_3, 0);
	func_745(133, 0, Local_150.f_37 == 6);
	__LIB_1__::func_460(23, 0);
	if (func_314() >= 0f)
	{
		HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	}
	if (!BitTest(uLocal_121, 9))
	{
		STATS::STAT_STOP_RECORD_STAT();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_745(int iParam0, bool bParam1, bool bParam2)//Position - 0x1BCCD
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
	__LIB_2__::func_153();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = __LIB_2__::func_123(__LIB_1__::func_592(PLAYER::PLAYER_ID()));
		__LIB_1__::func_460(__LIB_1__::func_957(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && __LIB_1__::func_136(PLAYER::PLAYER_ID()) >= 12)
		{
			__LIB_2__::func_69(2549, -1);
			iVar1 = __LIB_1__::func_360(2549, -1, 0);
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
		__LIB_2__::func_30();
		__LIB_2__::func_29();
		__LIB_2__::func_28();
		if ((!__LIB_3__::func_358(PLAYER::PLAYER_ID()) && !__LIB_3__::func_357(PLAYER::PLAYER_ID())) && !__LIB_1__::func_632())
		{
			func_754();
		}
		__LIB_2__::func_23();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			__LIB_2__::func_150();
		}
		__LIB_2__::func_22();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		__LIB_1__::func_915();
		__LIB_1__::func_912();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25)) && !__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_2__::func_135(0);
			__LIB_2__::func_57(0);
			if (!bParam1)
			{
				__LIB_2__::func_21();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (__LIB_2__::func_38(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__::func_70(26, -1);
		}
	}
	if (!__LIB_2__::func_151())
	{
		Global_2787396 = 1;
	}
}

void func_754()//Position - 0x1C197
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_26), &Global_2671511, 19);
	__LIB_2__::func_68();
	func_757(1, 1, 0);
	__LIB_2__::func_152();
}

void func_757(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1C1F3
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_45), &Global_2671530, 323);
	}
	else
	{
		Global_2667225.f_45 = { Global_2671530 };
		Global_2667225.f_45.f_49 = { Global_2671530.f_49 };
		Global_2667225.f_45.f_52 = Global_2671530.f_52;
		Global_2667225.f_45.f_53 = Global_2671530.f_53;
	}
	if (bParam0)
	{
		__LIB_2__::func_27();
	}
	if (!bParam2)
	{
		func_759(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	__LIB_2__::func_25(0);
	__LIB_1__::func_913();
}

void func_759(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1C2B9
{
	if (bParam0)
	{
		if (__LIB_1__::func_739())
		{
			__LIB_2__::func_26();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		__LIB_2__::func_91();
		func_459(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = iParam3;
		Global_2667225.f_714.f_513 = iParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = iParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		func_760();
	}
}

void func_760()//Position - 0x1C3A4
{
	if (__LIB_1__::func_739() && !__LIB_1__::func_738())
	{
		__LIB_2__::func_26();
	}
	if (__LIB_1__::func_738())
	{
		__LIB_1__::func_737();
	}
	else
	{
		__LIB_2__::func_91();
		func_459(0, 0, 0, 0, 0);
		Global_2667225.f_1753 = 0;
		Global_2667225.f_1752 = 0;
	}
}

int func_782(struct<21> Param0)//Position - 0x1CA6F
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_3__::func_483(9));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_2__::func_35(9));
	__LIB_0__::func_895(0, -1, 0);
	__LIB_2__::func_776(133);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_150, 88, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1516, 385, 0);
	if (!__LIB_0__::func_934())
	{
		func_744();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_150.f_52), &(Local_150.f_53));
	}
	Local_1517.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_147[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

