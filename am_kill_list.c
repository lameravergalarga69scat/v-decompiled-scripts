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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	struct<617> Local_91 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_93[4] = { 0, 0, 0, 0 };
	struct<18> Local_94[32];
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	float fLocal_101 = 0f;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	struct<8> Local_103[24];
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107[4] = { 0, 0, 0, 0 };
	int iLocal_108[4] = { 0, 0, 0, 0 };
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int* iLocal_111 = NULL;
	struct<42> Local_112[32];
	struct<104> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = -1;
	var uLocal_121 = -1;
	var uLocal_122 = -1;
	var uLocal_123 = -1;
	var uLocal_124 = -1;
	var uLocal_125 = 0;
	var uLocal_126 = 32;
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
	var uLocal_147 = 0;
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
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553[4] = { 0, 0, 0, 0 };
	int iLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	int iLocal_558 = 0;
	struct<2> Local_559[10];
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
	struct<2> Local_570[5];
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	int iLocal_575 = 0;
	struct<3> Local_576 = { 0, 0, 0 } ;
	int iLocal_577 = 0;
	var uLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_583 = 0;
	int iLocal_584[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_585 = 0;
	var uLocal_586[4] = { 0, 0, 0, 0 };
	var uLocal_587[4] = { 0, 0, 0, 0 };
	struct<21> Local_588 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
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
	fLocal_101 = -100f;
	iLocal_551 = -1;
	iLocal_552 = -1;
	iLocal_579 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_857(ScriptParam_588);
	}
	else
	{
		func_811();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_811();
		}
		else if (__LIB_3__::func_424(19))
		{
			func_811();
		}
		if (__LIB_2__::func_17())
		{
			func_811();
		}
		func_777();
		switch (func_776(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((__LIB_3__::func_242() == 1 && Local_91.f_1 != -1) && Local_91.f_2 != -1)
				{
					func_773();
					__LIB_3__::func_476(129, Local_91.f_1, Local_91.f_2, 0);
					if (Global_2815059.f_5119 == -1)
					{
						if (!func_768())
						{
							Global_2815059.f_5119 = 0;
						}
						else
						{
							Global_2815059.f_5119 = 1;
						}
					}
					__LIB_12__::func_514(Local_91.f_30[0 /*3*/]);
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (__LIB_3__::func_242() == 4)
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			case 1:
				if (__LIB_3__::func_242() == 1)
				{
					func_762();
					func_761();
					func_743();
					func_432();
					func_165();
					func_164();
					func_163();
				}
				else if (__LIB_3__::func_242() == 4)
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_91.f_320));
				if (__LIB_1__::func_398(&(Local_91.f_320)))
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			case 2:
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			case 4:
				func_811();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_3__::func_242())
			{
				case 0:
					if (func_146())
					{
						if (func_141())
						{
							func_137(__LIB_2__::func_41(129, Local_91.f_1, Local_91.f_2, 0));
							Local_91.f_0 = 1;
						}
					}
					break;
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_91.f_0 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x27A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x28E
{
	int iVar0;
	int iVar1;
	if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
	{
		if (!BitTest(Local_91.f_3, 11))
		{
			return 0;
		}
	}
	else if (BitTest(Local_91.f_3, 6))
	{
		if (!BitTest(Local_91.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_91.f_241 > 0)
	{
		if (Local_91.f_0 != 4)
		{
			if (func_23())
			{
				if (Local_91.f_241 == 3)
				{
					if (func_21())
					{
						if (BitTest(Local_91.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (__LIB_0__::func_937(&(Local_91.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_91.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_91.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!__LIB_0__::func_361(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_94[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2)) && !BitTest(Local_91.f_3, 6)) && !BitTest(Local_91.f_3, 14))
				{
					MISC::SET_BIT(&(Local_91.f_3), 15);
				}
				func_7();
			}
			else if (Local_91.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_91.f_3), 16);
					MISC::SET_BIT(&(Local_91.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()//Position - 0x402
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			if (!__LIB_2__::func_925(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_7()//Position - 0x5D4
{
	if (Local_91.f_241 != 3)
	{
		__LIB_3__::func_0();
		__LIB_0__::func_627(&(Local_91.f_324), 0, 0);
		Local_91.f_241 = 3;
	}
}

int func_21()//Position - 0xB13
{
	int iVar0;
	if (!__LIB_0__::func_864(&(Local_91.f_328)))
	{
		__LIB_0__::func_795(&(Local_91.f_328), 0, 0);
	}
	else if (__LIB_0__::func_937(&(Local_91.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar0]))
		{
			if (Local_91.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_23()//Position - 0xB89
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), false))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()//Position - 0xBCC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
		{
			if (!__LIB_0__::func_951(Local_91.f_48[bVar1]))
			{
				switch (Local_91.f_85[bVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false))
						{
							Local_91.f_85[bVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false) && func_30(bVar1))
						{
							Local_91.f_85[bVar1] = 1;
						}
						break;
					case 1:
						if (Local_91.f_241 == 1)
						{
							if (!func_23())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[bVar1]), false);
									if (func_29(iVar4, 250f))
									{
										Local_91.f_85[bVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((bVar1 % 4) == 0)
										{
											iVar0 = (bVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_91.f_110[iVar0] == -1 || !func_28(bVar1))
												{
													iVar2 = func_27();
													if (iVar2 != __LIB_0__::func_162())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (__LIB_0__::func_76(iVar4, iVar3, 1) > 250f)
															{
																Local_91.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_91.f_85[bVar1] = 2;
								}
							}
							else
							{
								Local_91.f_85[bVar1] = 3;
							}
						}
						else
						{
							Local_91.f_85[bVar1] = 3;
						}
						break;
					case 2:
						if (Local_91.f_241 == 1)
						{
							if (func_23())
							{
								Local_91.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_91.f_3, 6))
							{
								Local_91.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_91.f_464, bVar1))
							{
								Local_91.f_85[bVar1] = 1;
								MISC::CLEAR_BIT(&(Local_91.f_464), bVar1);
							}
						}
						else
						{
							Local_91.f_85[bVar1] = 3;
						}
						break;
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_91.f_48[bVar1])))
						{
							__LIB_1__::func_387(&(Local_91.f_48[bVar1]));
							Local_91.f_85[bVar1] = 4;
						}
						break;
					}
				}
		}
		bVar1++;
	}
}

int func_27()//Position - 0xE7D
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_162();
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iVar0 == __LIB_0__::func_162())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_94[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_94[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)//Position - 0xEDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_91.f_110[iVar0] != -1)
			{
				iVar3 = Local_91.f_110[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (__LIB_0__::func_156(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = iVar2;
							if (Local_94[iVar3 /*18*/].f_17 != 1)
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
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)//Position - 0xF68
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_94[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_94[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (__LIB_0__::func_76(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0xFDE
{
	int iVar0;
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	return 1;
}

void func_32()//Position - 0x1041
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	if (Local_91.f_463 > 0)
	{
		if (Local_91.f_28 != Local_91.f_463)
		{
			Local_91.f_28 = Local_91.f_463;
		}
	}
	switch (Local_91.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_91.f_28)
			{
				if (Local_91.f_17[iVar0] == __LIB_0__::func_162())
				{
				}
				else
				{
					iVar1++;
					if (BitTest(Local_91.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (BitTest(Local_91.f_3, 4))
			{
				Local_91.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_91.f_241 = 1;
			}
			else if (BitTest(Local_91.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_91.f_241 = 1;
			}
			if (!func_768())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
				{
					if (!__LIB_0__::func_939(Local_91.f_7[0]))
					{
						Var2.f_2 = -1324280291;
						__LIB_1__::func_634(Var2, func_108(NETWORK::NET_TO_VEH(Local_91.f_7[0]), 1, 0));
						Local_91.f_241 = 2;
					}
				}
			}
			if (Local_91.f_241 == 0)
			{
				if (!__LIB_0__::func_864(&(Local_91.f_330)))
				{
					if (!__LIB_0__::func_864(&(Local_91.f_326)))
					{
						__LIB_0__::func_795(&(Local_91.f_330), 0, 0);
					}
				}
				else if (__LIB_0__::func_864(&(Local_91.f_326)))
				{
					__LIB_0__::func_794(&(Local_91.f_330));
				}
				else if (__LIB_0__::func_937(&(Local_91.f_330), func_105(), 0))
				{
					Var2.f_2 = -1324280291;
					__LIB_1__::func_634(Var2, __LIB_1__::func_26(1));
					MISC::SET_BIT(&(Local_91.f_3), 12);
					func_7();
				}
				if (BitTest(Local_91.f_3, 14))
				{
					func_7();
				}
			}
			break;
		case 1:
			func_35();
			func_33();
			func_111();
			if (BitTest(Local_91.f_3, 6))
			{
				Local_91.f_241 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_33()//Position - 0x1215
{
	if (!BitTest(Local_91.f_3, 19))
	{
		return;
	}
	if (!BitTest(Local_91.f_3, 6))
	{
		if (!__LIB_0__::func_864(&(Local_91.f_332)))
		{
			__LIB_0__::func_795(&(Local_91.f_332), 0, 0);
			MISC::SET_BIT(&(Local_91.f_3), 7);
		}
		else if (__LIB_0__::func_937(&(Local_91.f_332), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_91.f_3), 6);
		}
	}
}

int func_34()//Position - 0x1273
{
	if (func_768())
	{
		return Global_262145.f_11581 /* Tunable: COMP_KILL_LIST_EVENT_TIME_LIMIT */;
	}
	return Global_262145.f_11558 /* Tunable: KILL_LIST_EVENT_TIME_LIMIT */;
}

void func_35()//Position - 0x1296
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bVar2 = true;
	bVar3 = false;
	if (Local_91.f_278 > 0)
	{
		if (Local_91.f_279 >= Local_91.f_278)
		{
			if (Local_91.f_254 >= Local_91.f_255)
			{
				MISC::SET_BIT(&(Local_91.f_3), 0);
				MISC::SET_BIT(&(Local_91.f_3), 1);
				MISC::SET_BIT(&(Local_91.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_91.f_278 > 0)
		{
			if (Local_91.f_279 >= Local_91.f_278)
			{
				if (Local_91.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[0]);
				}
				if (Local_91.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[1]);
				}
				if (Local_91.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[2]);
				}
				if (Local_91.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_91.f_256[3]);
				}
				if (iVar5 >= Local_91.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar4]))
						{
							if (!__LIB_0__::func_951(Local_91.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_91.f_3), 0);
						MISC::SET_BIT(&(Local_91.f_3), 1);
						MISC::SET_BIT(&(Local_91.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar4]))
					{
						if (!__LIB_0__::func_951(Local_91.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!__LIB_0__::func_864(&(Local_91.f_347)))
					{
						__LIB_0__::func_795(&(Local_91.f_347), 0, 0);
					}
					else if (__LIB_0__::func_937(&(Local_91.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_91.f_3), 0);
						MISC::SET_BIT(&(Local_91.f_3), 1);
						MISC::SET_BIT(&(Local_91.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!BitTest(Local_91.f_3, 0) || !BitTest(Local_91.f_3, 1))
	{
		if (Local_91.f_249 >= func_103())
		{
			MISC::SET_BIT(&(Local_91.f_3), 0);
			MISC::SET_BIT(&(Local_91.f_3), 1);
		}
		bVar0 = false;
		while (bVar0 < Local_91.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_73[bVar0]))
			{
				if (func_102(bVar0))
				{
					if (!BitTest(Local_91.f_245, bVar0))
					{
						if ((Local_91.f_27 != joaat("hydra") && !__LIB_2__::func_925(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_91.f_27 == joaat("hydra"))
						{
							MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							if (__LIB_0__::func_864(&(Local_570[bVar0 /*2*/])))
							{
								__LIB_0__::func_794(&(Local_570[bVar0 /*2*/]));
							}
						}
						else if (__LIB_2__::func_925(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0])) == joaat("savage"))
						{
							if (BitTest(Local_91.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							}
							if (!BitTest(Local_91.f_3, 18))
							{
								func_101(__LIB_1__::func_26(1), bVar0);
								MISC::SET_BIT(&(Local_91.f_3), 18);
							}
						}
						else if (func_100(bVar0) || !func_768())
						{
							if (BitTest(Local_91.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							}
							if (!BitTest(Local_91.f_303, bVar0))
							{
								func_99(__LIB_1__::func_26(1), bVar0);
								MISC::SET_BIT(&(Local_91.f_303), bVar0);
							}
						}
						else
						{
							__LIB_1__::func_387(&(Local_91.f_73[bVar0]));
							if (!BitTest(Local_91.f_253, bVar0))
							{
								Local_91.f_251 = (Local_91.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_91.f_252 > 0)
									{
										Local_91.f_302++;
										func_97(bVar0, __LIB_1__::func_26(1));
									}
								}
								MISC::SET_BIT(&(Local_91.f_253), bVar0);
							}
							__LIB_0__::func_794(&(Local_570[bVar0 /*2*/]));
						}
					}
				}
				else if (func_96(bVar0))
				{
					if (!BitTest(Local_91.f_253, bVar0))
					{
						Local_91.f_251 = (Local_91.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_91.f_252 > 0)
							{
								Local_91.f_302++;
								func_97(bVar0, __LIB_1__::func_26(1));
							}
						}
						if (Local_91.f_27 == joaat("hydra"))
						{
							Local_91.f_254++;
						}
						MISC::SET_BIT(&(Local_91.f_253), bVar0);
					}
					if (__LIB_0__::func_864(&(Local_91.f_336[bVar0 /*2*/])))
					{
						__LIB_0__::func_794(&(Local_91.f_336[bVar0 /*2*/]));
					}
					__LIB_1__::func_387(&(Local_91.f_73[bVar0]));
				}
				else
				{
					if (BitTest(Local_91.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_91.f_3), 0);
					}
					if (!BitTest(Local_91.f_271, bVar0))
					{
						if (!__LIB_0__::func_864(&(Local_91.f_336[bVar0 /*2*/])))
						{
							__LIB_0__::func_795(&(Local_91.f_336[bVar0 /*2*/]), 0, 0);
						}
						else if (__LIB_0__::func_937(&(Local_91.f_336[bVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_91.f_271), bVar0);
						}
						else if (__LIB_0__::func_937(&(Local_91.f_336[bVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bVar0])) == joaat("savage"))
							{
								if (!BitTest(Local_91.f_3, 18))
								{
									func_101(__LIB_1__::func_26(1), bVar0);
									MISC::SET_BIT(&(Local_91.f_3), 18);
								}
							}
							else if (func_100(bVar0) || !func_768())
							{
								if (!BitTest(Local_91.f_303, bVar0))
								{
									func_99(__LIB_1__::func_26(1), bVar0);
									MISC::SET_BIT(&(Local_91.f_303), bVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_91.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(bVar0 * 4 + iVar1)]))
				{
					bVar6 = (bVar0 * 4 + iVar1);
					if (!__LIB_0__::func_951(Local_91.f_48[(bVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bVar0 * 4 + iVar1)]), false))
						{
							if (!func_94((bVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_91.f_3), 0);
							}
							else if (func_93(bVar6))
							{
								if (!__LIB_0__::func_937(&(Local_91.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_91.f_48[(bVar0 * 4 + iVar1)])))
								{
									__LIB_0__::func_621(&(Local_103[(bVar0 * 4 + iVar1) /*8*/]));
								}
								__LIB_1__::func_387(&(Local_91.f_48[(bVar0 * 4 + iVar1)]));
								if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
								{
									if (Local_91.f_85[(bVar0 * 4 + iVar1)] > 0)
									{
										func_89((bVar0 * 4 + iVar1), __LIB_1__::func_26(1));
										Local_91.f_254++;
									}
								}
								Local_91.f_85[(bVar0 * 4 + iVar1)] = 0;
								if (__LIB_0__::func_864(&(Local_91.f_364[bVar6 /*2*/])))
								{
									__LIB_0__::func_794(&(Local_91.f_364[bVar6 /*2*/]));
								}
								if (BitTest(Local_91.f_275[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
								{
									MISC::CLEAR_BIT(&(Local_91.f_275[__LIB_13__::func_437(bVar6)]), __LIB_18__::func_410(bVar6));
								}
							}
							else
							{
								if (!BitTest(Local_91.f_272[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
								{
									if (!__LIB_0__::func_864(&(Local_91.f_364[bVar6 /*2*/])))
									{
										__LIB_0__::func_795(&(Local_91.f_364[bVar6 /*2*/]), 0, 0);
									}
									else if (__LIB_0__::func_937(&(Local_91.f_364[bVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_91.f_272[__LIB_13__::func_437(bVar6)]), __LIB_18__::func_410(bVar6));
										__LIB_0__::func_794(&(Local_91.f_364[bVar6 /*2*/]));
									}
								}
								if (!BitTest(Local_91.f_275[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
								{
									MISC::SET_BIT(&(Local_91.f_275[__LIB_13__::func_437(bVar6)]), __LIB_18__::func_410(bVar6));
								}
							}
						}
					}
					else if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)) || Local_91.f_27 == joaat("hydra"))
					{
						if (!__LIB_0__::func_937(&(Local_91.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						__LIB_1__::func_387(&(Local_91.f_48[(bVar0 * 4 + iVar1)]));
						if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
						{
							if (Local_91.f_85[(bVar0 * 4 + iVar1)] > 0)
							{
								Local_91.f_254++;
								func_89((bVar0 * 4 + iVar1), __LIB_1__::func_26(1));
							}
						}
						Local_91.f_85[(bVar0 * 4 + iVar1)] = 0;
						if (BitTest(Local_91.f_275[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
						{
							MISC::CLEAR_BIT(&(Local_91.f_275[__LIB_13__::func_437(bVar6)]), __LIB_18__::func_410(bVar6));
						}
					}
					else
					{
						if (!BitTest(Local_91.f_272[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
						{
							if (!__LIB_0__::func_864(&(Local_91.f_364[bVar6 /*2*/])))
							{
								__LIB_0__::func_795(&(Local_91.f_364[bVar6 /*2*/]), 0, 0);
							}
							else if (__LIB_0__::func_937(&(Local_91.f_364[bVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_91.f_272[__LIB_13__::func_437(bVar6)]), __LIB_18__::func_410(bVar6));
								__LIB_0__::func_794(&(Local_91.f_364[bVar6 /*2*/]));
							}
						}
						if (!BitTest(Local_91.f_275[__LIB_13__::func_437(bVar6)], __LIB_18__::func_410(bVar6)))
						{
							MISC::SET_BIT(&(Local_91.f_275[__LIB_13__::func_437(bVar6)]), __LIB_18__::func_410(bVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_91.f_249 < func_103())
			{
				if (func_73(bVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_91.f_3), 0);
			}
			bVar0++;
		}
	}
	if (!BitTest(Local_91.f_3, 2))
	{
		if (Local_91.f_247 >= Global_262145.f_10673 /* Tunable: URBANWARFAREENEMYONFOOTSPAWNS */)
		{
			MISC::SET_BIT(&(Local_91.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_91.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(20 + iVar1)]))
			{
				bVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iVar1)]), false))
				{
					MISC::CLEAR_BIT(&(Local_91.f_3), 2);
				}
				else if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar7)], __LIB_18__::func_410(bVar7)))
				{
					if (!__LIB_0__::func_937(&(Local_91.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (__LIB_0__::func_864(&(Local_91.f_364[bVar7 /*2*/])))
					{
						__LIB_0__::func_794(&(Local_91.f_364[bVar7 /*2*/]));
					}
					__LIB_1__::func_387(&(Local_91.f_48[(20 + iVar1)]));
					if (Local_91.f_85[(20 + iVar1)] > 0)
					{
						Local_91.f_254++;
						if (func_98() > 1)
						{
							if (Local_91.f_317 > 0)
							{
								Local_91.f_316++;
							}
						}
						func_89((20 + iVar1), __LIB_1__::func_26(1));
					}
					Local_91.f_85[(20 + iVar1)] = 0;
					if (BitTest(Local_91.f_275[__LIB_13__::func_437(bVar7)], __LIB_18__::func_410(bVar7)))
					{
						MISC::CLEAR_BIT(&(Local_91.f_275[__LIB_13__::func_437(bVar7)]), __LIB_18__::func_410(bVar7));
					}
				}
				else
				{
					if (!BitTest(Local_91.f_272[__LIB_13__::func_437(bVar7)], __LIB_18__::func_410(bVar7)))
					{
						if (!__LIB_0__::func_864(&(Local_91.f_364[bVar7 /*2*/])))
						{
							__LIB_0__::func_795(&(Local_91.f_364[bVar7 /*2*/]), 0, 0);
						}
						else if (__LIB_0__::func_937(&(Local_91.f_364[bVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_91.f_272[__LIB_13__::func_437(bVar7)]), __LIB_18__::func_410(bVar7));
							__LIB_0__::func_794(&(Local_91.f_364[bVar7 /*2*/]));
						}
					}
					if (!BitTest(Local_91.f_275[__LIB_13__::func_437(bVar7)], __LIB_18__::func_410(bVar7)))
					{
						MISC::SET_BIT(&(Local_91.f_275[__LIB_13__::func_437(bVar7)]), __LIB_18__::func_410(bVar7));
					}
				}
			}
			if (Local_91.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_91.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()//Position - 0x1D82
{
	int iVar0;
	int iVar1;
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_91.f_252 > 0)
		{
			if (Local_91.f_302 > 0)
			{
				if (Local_91.f_302 >= (Local_91.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_91.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_91.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_91.f_279++;
									func_40();
								}
								else if (Local_91.f_318 >= func_39())
								{
									func_47();
									Local_91.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_91.f_317 > 0)
		{
			if (Local_91.f_316 > 0)
			{
				if (Local_91.f_316 >= Local_91.f_317)
				{
					if (Local_91.f_317 >= func_38())
					{
						func_47();
						Local_91.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_91.f_316 > 0)
		{
			if (Local_91.f_302 > 0)
			{
				if (Local_91.f_317 > 0)
				{
					if (Local_91.f_316 >= (Local_91.f_317 - 2))
					{
						if (Local_91.f_252 > 0)
						{
							if (Local_91.f_302 >= (Local_91.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_91.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_91.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_91.f_279++;
												func_40();
											}
											else if (Local_91.f_318 >= func_39())
											{
												func_47();
												Local_91.f_279++;
												func_40();
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
	else if (func_98() == 5)
	{
		if (Local_91.f_252 > 0)
		{
			if (Local_91.f_302 > 0)
			{
				if (Local_91.f_302 >= (Local_91.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_91.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()//Position - 0x1F7B
{
	int iVar0;
	int iVar1;
	iVar0 = Local_91.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_91.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			case 2:
				return 1;
				break;
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()//Position - 0x1FFB
{
	return Local_91.f_305[Local_91.f_279];
}

int func_39()//Position - 0x200F
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_91.f_278)
	{
		iVar0 = (iVar0 + Local_91.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()//Position - 0x203D
{
	int iVar0;
	if (Local_91.f_29 == -1)
	{
		iVar0 = func_46(Local_91.f_27);
		Local_91.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_768())
		{
			if (Local_91.f_27 == joaat("hydra"))
			{
				if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 4;
				}
			}
			else if (Local_91.f_27 == joaat("savage"))
			{
				if (Local_91.f_29 == 0)
				{
					Local_91.f_29 = 1;
				}
				else if (Local_91.f_29 == 1)
				{
					Local_91.f_29 = 2;
				}
				else if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 3;
				}
			}
			else if (Local_91.f_27 == joaat("valkyrie"))
			{
				if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 3;
				}
				else if (Local_91.f_29 == 3)
				{
					Local_91.f_29 = 4;
				}
			}
			else if (Local_91.f_27 == joaat("buzzard"))
			{
				if (Local_91.f_29 == 0)
				{
					Local_91.f_29 = 1;
				}
				else if (Local_91.f_29 == 1)
				{
					Local_91.f_29 = 2;
				}
				else if (Local_91.f_29 == 2)
				{
					Local_91.f_29 = 3;
				}
				else if (Local_91.f_29 == 3)
				{
					Local_91.f_29 = 4;
				}
			}
		}
		else if (Local_91.f_27 == joaat("savage"))
		{
			if (Local_91.f_29 == 0)
			{
				Local_91.f_29 = 1;
			}
			else if (Local_91.f_29 == 1)
			{
				Local_91.f_29 = 2;
			}
			else if (Local_91.f_29 == 2)
			{
				Local_91.f_29 = 3;
			}
		}
	}
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
			Local_91.f_280[0] = 4;
			Local_91.f_291[0] = func_45(4);
			Local_91.f_305[0] = func_44(4);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 4;
			Local_91.f_291[2] = func_45(4);
			Local_91.f_305[2] = func_44(4);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_278 = 3;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_278 = 4;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 4;
				Local_91.f_291[4] = func_45(4);
				Local_91.f_305[4] = func_44(4);
				Local_91.f_278 = 5;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 0;
			}
			else
			{
				Local_91.f_1 = 5;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					Local_91.f_30[0 /*3*/] = { 1016.7343f, 2360.8303f, 50.4559f };
					Local_91.f_43[0] = 269.414f;
					Local_91.f_30[1 /*3*/] = { 1002.5259f, 2390.64f, 50.5438f };
					Local_91.f_43[1] = 3.5491f;
					Local_91.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_91.f_43[2] = 54.4509f;
					Local_91.f_30[3 /*3*/] = { 977.1004f, 2371.7144f, 51.0115f };
					Local_91.f_43[3] = 178.1948f;
					Local_91.f_159[0 /*3*/] = { 1028.3246f, 2436.455f, 44.2365f };
					Local_91.f_175[0] = 270.8322f;
					Local_91.f_159[1 /*3*/] = { 1166.4983f, 2403.0205f, 56.662f };
					Local_91.f_175[1] = 177.3506f;
					Local_91.f_159[2 /*3*/] = { 892.8997f, 2465.8809f, 49.7859f };
					Local_91.f_175[2] = 318.1089f;
					Local_91.f_159[3 /*3*/] = { 1078.9882f, 2246.8794f, 43.7942f };
					Local_91.f_175[3] = 272.0801f;
					Local_91.f_159[4 /*3*/] = { 1016.7836f, 2259.447f, 43.8512f };
					Local_91.f_175[4] = 104.0591f;
					Local_91.f_117[0 /*3*/] = { 1042.504f, 2280.4973f, 48.6315f };
					Local_91.f_148[0] = 296.4225f;
					Local_91.f_117[1 /*3*/] = { 991.9136f, 2278.3528f, 48.1838f };
					Local_91.f_148[1] = 164.9695f;
					Local_91.f_117[2 /*3*/] = { 1029.7627f, 2447.0415f, 44.5979f };
					Local_91.f_148[2] = 136.0596f;
					Local_91.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_91.f_148[3] = 116.379f;
					Local_91.f_117[4 /*3*/] = { 1017.2642f, 2432.0085f, 45.2054f };
					Local_91.f_148[4] = 86.6586f;
					Local_91.f_117[5 /*3*/] = { 1072.7511f, 2237.5986f, 43.3802f };
					Local_91.f_148[5] = 74.6822f;
					Local_91.f_117[6 /*3*/] = { 944.4364f, 2407.3918f, 50.0925f };
					Local_91.f_148[6] = 206.8863f;
					Local_91.f_117[7 /*3*/] = { 1059.8036f, 2280.7842f, 48.5613f };
					Local_91.f_148[7] = 267.8581f;
					Local_91.f_117[8 /*3*/] = { 1004.2717f, 2372.3445f, 54.5719f };
					Local_91.f_148[8] = 267.5856f;
					Local_91.f_117[9 /*3*/] = { 972.3055f, 2235.8213f, 53.1094f };
					Local_91.f_148[9] = 325.0964f;
					break;
				case 1:
					Local_91.f_30[0 /*3*/] = { 1733.1344f, 3302.5454f, 40.2235f };
					Local_91.f_43[0] = 194.8062f;
					Local_91.f_30[1 /*3*/] = { 1761.2812f, 3309.8794f, 40.1489f };
					Local_91.f_43[1] = 238.9372f;
					Local_91.f_30[2 /*3*/] = { 1755.7526f, 3236.4895f, 41.0341f };
					Local_91.f_43[2] = 16.3071f;
					Local_91.f_30[3 /*3*/] = { 1676.7595f, 3279.7344f, 39.8901f };
					Local_91.f_43[3] = 209.9883f;
					Local_91.f_117[0 /*3*/] = { 1758.4493f, 3309.2473f, 40.1417f };
					Local_91.f_148[0] = 221.3913f;
					Local_91.f_117[1 /*3*/] = { 1746.4453f, 3323.7502f, 40.1528f };
					Local_91.f_148[1] = 246.3415f;
					Local_91.f_117[2 /*3*/] = { 1775.0573f, 3332.9429f, 40.3398f };
					Local_91.f_148[2] = 213.4087f;
					Local_91.f_117[3 /*3*/] = { 1713.2401f, 3302.4575f, 40.1851f };
					Local_91.f_148[3] = 100.5405f;
					Local_91.f_117[4 /*3*/] = { 1693.8173f, 3293.1633f, 40.1465f };
					Local_91.f_148[4] = 289.6017f;
					Local_91.f_117[5 /*3*/] = { 1697.449f, 3176.3118f, 44.0261f };
					Local_91.f_148[5] = 285.6456f;
					Local_91.f_117[6 /*3*/] = { 1710.5647f, 3180.9087f, 43.2884f };
					Local_91.f_148[6] = 310.9245f;
					Local_91.f_117[7 /*3*/] = { 1627.4359f, 3198.51f, 39.9059f };
					Local_91.f_148[7] = 46.7117f;
					Local_91.f_117[8 /*3*/] = { 1788.4015f, 3208.9639f, 43.0201f };
					Local_91.f_148[8] = 35.9192f;
					Local_91.f_117[9 /*3*/] = { 1698.3079f, 3289.2542f, 47.8594f };
					Local_91.f_148[9] = 207.53f;
					Local_91.f_159[0 /*3*/] = { 1669.9315f, 3132.549f, 42.2874f };
					Local_91.f_175[0] = 286.6127f;
					Local_91.f_159[1 /*3*/] = { 1943.3209f, 3263.1458f, 44.7265f };
					Local_91.f_175[1] = 124.1428f;
					Local_91.f_159[2 /*3*/] = { 1151.224f, 3172.3477f, 40.6704f };
					Local_91.f_175[2] = 275.0147f;
					Local_91.f_159[3 /*3*/] = { 1134.7161f, 3169.2302f, 40.6443f };
					Local_91.f_175[3] = 287.91f;
					Local_91.f_159[4 /*3*/] = { 1311.3516f, 2963.9622f, 40.0443f };
					Local_91.f_175[4] = 270.287f;
					break;
				case 2:
					Local_91.f_30[0 /*3*/] = { 2703.2812f, 1576.7003f, 23.527f };
					Local_91.f_43[0] = 172.439f;
					Local_91.f_30[1 /*3*/] = { 2702.7808f, 1512.7255f, 23.5199f };
					Local_91.f_43[1] = 53.9805f;
					Local_91.f_30[2 /*3*/] = { 2678.4321f, 1518.7335f, 23.5295f };
					Local_91.f_43[2] = 303.2142f;
					Local_91.f_30[3 /*3*/] = { 2677.5085f, 1566.5251f, 23.501f };
					Local_91.f_43[3] = 218.5974f;
					Local_91.f_117[0 /*3*/] = { 2621.7964f, 1695.8693f, 26.5983f };
					Local_91.f_148[0] = 264.5842f;
					Local_91.f_117[1 /*3*/] = { 2746.8464f, 1567.6827f, 23.501f };
					Local_91.f_148[1] = 133.7932f;
					Local_91.f_117[2 /*3*/] = { 2664.2727f, 1599.2006f, 23.7604f };
					Local_91.f_148[2] = 205.1215f;
					Local_91.f_117[3 /*3*/] = { 2757.2554f, 1576.939f, 23.501f };
					Local_91.f_148[3] = 66.1065f;
					Local_91.f_117[4 /*3*/] = { 2714.1755f, 1480.4452f, 23.5007f };
					Local_91.f_148[4] = 7.8064f;
					Local_91.f_117[5 /*3*/] = { 2713.364f, 1450.2719f, 23.6191f };
					Local_91.f_148[5] = 358.7563f;
					Local_91.f_117[6 /*3*/] = { 2739.8616f, 1463.719f, 23.5015f };
					Local_91.f_148[6] = 142.1748f;
					Local_91.f_117[7 /*3*/] = { 2676.4033f, 1589.2241f, 26.2548f };
					Local_91.f_148[7] = 247.816f;
					Local_91.f_117[8 /*3*/] = { 2703.0854f, 1685.5682f, 23.4887f };
					Local_91.f_148[8] = 124.4666f;
					Local_91.f_117[9 /*3*/] = { 2665.0217f, 1409.4331f, 23.538f };
					Local_91.f_148[9] = 348.6588f;
					Local_91.f_159[0 /*3*/] = { 2737.1147f, 1697.578f, 23.6755f };
					Local_91.f_175[0] = 89.8563f;
					Local_91.f_159[1 /*3*/] = { 2778.5981f, 1458.2183f, 23.5382f };
					Local_91.f_175[1] = 163.8004f;
					Local_91.f_159[2 /*3*/] = { 2529.7788f, 1641.1132f, 27.9752f };
					Local_91.f_175[2] = 270.0754f;
					Local_91.f_159[3 /*3*/] = { 2665.372f, 1702.3788f, 23.4882f };
					Local_91.f_175[3] = 184.9752f;
					Local_91.f_159[4 /*3*/] = { 2726.6233f, 1640.2986f, 23.5607f };
					Local_91.f_175[4] = 90.4555f;
					break;
				case 3:
				case 4:
					Local_91.f_30[0 /*3*/] = { 1088.3834f, -3024.9194f, 4.901f };
					Local_91.f_43[0] = 0.5044f;
					Local_91.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_91.f_43[1] = 179.2507f;
					Local_91.f_30[2 /*3*/] = { 986.4979f, -3024.6797f, 4.9008f };
					Local_91.f_43[2] = 0.3066f;
					Local_91.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_91.f_43[3] = 180.2973f;
					Local_91.f_117[0 /*3*/] = { 991.85f, -2969.7922f, 4.9008f };
					Local_91.f_148[0] = 336.7541f;
					Local_91.f_117[1 /*3*/] = { 1178.155f, -3022.3298f, 4.9021f };
					Local_91.f_148[1] = 6.0929f;
					Local_91.f_117[2 /*3*/] = { 1107.6794f, -2983.9917f, 4.901f };
					Local_91.f_148[2] = 4.2803f;
					Local_91.f_117[3 /*3*/] = { 1043.8685f, -2979.5972f, 4.901f };
					Local_91.f_148[3] = 274.985f;
					Local_91.f_117[4 /*3*/] = { 1042.9515f, -3031.7595f, 4.901f };
					Local_91.f_148[4] = 267.2555f;
					Local_91.f_117[5 /*3*/] = { 1095.3485f, -3077.4922f, 4.8877f };
					Local_91.f_148[5] = 6.5529f;
					Local_91.f_117[6 /*3*/] = { 1114.9236f, -3031.3193f, 4.901f };
					Local_91.f_148[6] = 89.1724f;
					Local_91.f_117[7 /*3*/] = { 1048.0206f, -3077.814f, 4.901f };
					Local_91.f_148[7] = 348.279f;
					Local_91.f_117[8 /*3*/] = { 995.4651f, -3036.8967f, 4.9008f };
					Local_91.f_148[8] = 267.8075f;
					Local_91.f_117[9 /*3*/] = { 1101.3469f, -2968.8943f, 13.3329f };
					Local_91.f_148[9] = 0.5237f;
					Local_91.f_159[0 /*3*/] = { 1254.1913f, -3126.9082f, 4.8012f };
					Local_91.f_175[0] = 357.9713f;
					Local_91.f_159[1 /*3*/] = { 856.4759f, -3118.9695f, 4.9008f };
					Local_91.f_175[1] = 269.3234f;
					Local_91.f_159[2 /*3*/] = { 838.2247f, -3118.7476f, 4.9008f };
					Local_91.f_175[2] = 269.3055f;
					Local_91.f_159[3 /*3*/] = { 1197.5948f, -2983.8716f, 4.9021f };
					Local_91.f_175[3] = 359.1497f;
					Local_91.f_159[4 /*3*/] = { 962.6804f, -3016.1587f, 4.9017f };
					Local_91.f_175[4] = 270.0873f;
					break;
			}
			break;
		case joaat("savage"):
			Local_91.f_240 = joaat("insurgent");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_280[3] = 5;
				Local_91.f_291[3] = func_45(5);
				Local_91.f_278 = 4;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 5;
				Local_91.f_291[5] = func_45(5);
				Local_91.f_278 = 6;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 4;
				Local_91.f_291[5] = func_45(4);
				Local_91.f_305[5] = func_44(4);
				Local_91.f_280[6] = 5;
				Local_91.f_291[6] = func_45(5);
				Local_91.f_278 = 7;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 2;
			}
			else
			{
				Local_91.f_1 = 7;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					Local_91.f_30[0 /*3*/] = { -1177.6504f, -2845.5422f, 12.9458f };
					Local_91.f_43[0] = 331.74f;
					Local_91.f_30[1 /*3*/] = { -1082.4794f, -2900.1914f, 12.9478f };
					Local_91.f_43[1] = 327.7335f;
					Local_91.f_30[2 /*3*/] = { -1202.0188f, -2873.6702f, 12.9454f };
					Local_91.f_43[2] = 149.1604f;
					Local_91.f_30[3 /*3*/] = { -1126.5802f, -2918.4158f, 12.9454f };
					Local_91.f_43[3] = 150.6753f;
					Local_91.f_117[0 /*3*/] = { -985.8373f, -2942.9734f, 12.9451f };
					Local_91.f_148[0] = 147.2177f;
					Local_91.f_117[1 /*3*/] = { -1051.4122f, -2880.8284f, 29.3631f };
					Local_91.f_148[1] = 103.9461f;
					Local_91.f_117[2 /*3*/] = { -1154.5397f, -2821.091f, 29.3631f };
					Local_91.f_148[2] = 160.822f;
					Local_91.f_117[3 /*3*/] = { -1211.8983f, -2789.125f, 12.9523f };
					Local_91.f_148[3] = 205.8375f;
					Local_91.f_117[4 /*3*/] = { -1199.4928f, -2724.709f, 12.9771f };
					Local_91.f_148[4] = 124.7328f;
					break;
				case 1:
					Local_91.f_30[0 /*3*/] = { 1930.0668f, 4710.339f, 40.1633f };
					Local_91.f_43[0] = 344.2504f;
					Local_91.f_30[1 /*3*/] = { 1954.5598f, 4724.181f, 40.0604f };
					Local_91.f_43[1] = 340.3425f;
					Local_91.f_30[2 /*3*/] = { 2004.9131f, 4748.04f, 40.0604f };
					Local_91.f_43[2] = 351.5693f;
					Local_91.f_30[3 /*3*/] = { 2027.9282f, 4757.387f, 40.0595f };
					Local_91.f_43[3] = 354.2446f;
					Local_91.f_117[0 /*3*/] = { 1954.2092f, 4653.2324f, 39.7136f };
					Local_91.f_148[0] = 245.2865f;
					Local_91.f_117[1 /*3*/] = { 2116.177f, 4761.9927f, 40.2281f };
					Local_91.f_148[1] = 74.1185f;
					Local_91.f_117[2 /*3*/] = { 2123.414f, 4784.4067f, 39.9703f };
					Local_91.f_148[2] = 10.2312f;
					Local_91.f_117[3 /*3*/] = { 1925.1587f, 4817.925f, 43.9706f };
					Local_91.f_148[3] = 222.4017f;
					Local_91.f_117[4 /*3*/] = { 2009.5798f, 4802.5054f, 41.009f };
					Local_91.f_148[4] = 150.2763f;
					Local_91.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_91.f_148[5] = 105.4526f;
					Local_91.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_91.f_148[6] = 88.9429f;
					Local_91.f_117[7 /*3*/] = { 2014.2765f, 4721.062f, 40.6111f };
					Local_91.f_148[7] = 51.1733f;
					Local_91.f_117[8 /*3*/] = { 2060.4175f, 4847.6914f, 40.8344f };
					Local_91.f_148[8] = 169.7083f;
					Local_91.f_117[9 /*3*/] = { 2151.4336f, 4789.446f, 39.9594f };
					Local_91.f_148[9] = 29.5849f;
					Local_91.f_243 = 3;
					break;
				case 2:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { 206.2382f, 7031.6694f, 1.1068f };
						Local_91.f_43[0] = 319.153f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { 206.2382f, 7031.6694f, 1.1068f };
						Local_91.f_43[0] = 319.153f;
						Local_91.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_91.f_43[1] = 316.7079f;
						Local_91.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_91.f_43[2] = 316.9623f;
						Local_91.f_30[3 /*3*/] = { 242.3287f, 6987.2627f, 1.7354f };
						Local_91.f_43[3] = 314.2003f;
					}
					Local_91.f_117[0 /*3*/] = { 131.5444f, 6956.8867f, 12.1839f };
					Local_91.f_148[0] = 326.4292f;
					Local_91.f_117[1 /*3*/] = { 201.7152f, 6842.8643f, 21.2216f };
					Local_91.f_148[1] = 6.8118f;
					Local_91.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_91.f_148[2] = 32.8776f;
					Local_91.f_117[3 /*3*/] = { 42.4962f, 7055.1904f, 1.3986f };
					Local_91.f_148[3] = 8.387f;
					Local_91.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_91.f_148[4] = 291.5504f;
					Local_91.f_117[5 /*3*/] = { 290.266f, 6946.9175f, 3.1171f };
					Local_91.f_148[5] = 333.1838f;
					Local_91.f_117[6 /*3*/] = { 50.5669f, 7102.2134f, 2.0034f };
					Local_91.f_148[6] = 203.8353f;
					Local_91.f_117[7 /*3*/] = { 274.1516f, 6856.5063f, 15.8452f };
					Local_91.f_148[7] = 32.2329f;
					Local_91.f_117[8 /*3*/] = { 88.9963f, 7113.4717f, 24.5763f };
					Local_91.f_148[8] = 195.4847f;
					Local_91.f_117[9 /*3*/] = { 131.6119f, 6956.0815f, 12.2413f };
					Local_91.f_148[9] = 327.4941f;
					Local_91.f_243 = 4;
					break;
				case 3:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { 704.1097f, -1579.9468f, 8.6915f };
						Local_91.f_43[0] = 156.0209f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { 704.1097f, -1579.9468f, 8.6915f };
						Local_91.f_43[0] = 156.0209f;
						Local_91.f_30[1 /*3*/] = { 699.7866f, -1637.3372f, 8.7086f };
						Local_91.f_43[1] = 41.8571f;
						Local_91.f_30[2 /*3*/] = { 663.725f, -1634.0522f, 8.7086f };
						Local_91.f_43[2] = 305.7411f;
						Local_91.f_30[3 /*3*/] = { 662.7472f, -1596.4681f, 8.7086f };
						Local_91.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_91.f_242 = 3;
					}
					else
					{
						Local_91.f_242 = 4;
					}
					Local_91.f_117[0 /*3*/] = { 585.7374f, -1450.2639f, 19.043f };
					Local_91.f_148[0] = 197.3456f;
					Local_91.f_117[1 /*3*/] = { 784.6684f, -1526.1722f, 9.5498f };
					Local_91.f_148[1] = 140.7211f;
					Local_91.f_117[2 /*3*/] = { 790.8864f, -1603.6653f, 30.2421f };
					Local_91.f_148[2] = 98.9528f;
					Local_91.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_91.f_148[3] = 107.0238f;
					Local_91.f_117[4 /*3*/] = { 698.9001f, -1443.5546f, 21.3382f };
					Local_91.f_148[4] = 202.129f;
					Local_91.f_117[5 /*3*/] = { 566.2017f, -1506.3856f, 27.1027f };
					Local_91.f_148[5] = 230.1207f;
					Local_91.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_91.f_148[6] = 36.194f;
					Local_91.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_91.f_148[7] = 48.2522f;
					Local_91.f_117[8 /*3*/] = { 592.6577f, -1452.3037f, 28.8626f };
					Local_91.f_148[8] = 296.114f;
					Local_91.f_117[9 /*3*/] = { 794.9213f, -1660.6195f, 43.147f };
					Local_91.f_148[9] = 3.1632f;
					break;
			}
			break;
		case joaat("hydra"):
			Local_91.f_240 = joaat("lazer");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_280[1] = 2;
			Local_91.f_291[1] = func_45(2);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_278 = 3;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 2;
				Local_91.f_291[3] = func_45(2);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_278 = 5;
			}
			else
			{
				Local_91.f_280[3] = 2;
				Local_91.f_291[3] = func_45(2);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 2;
				Local_91.f_291[5] = func_45(2);
				Local_91.f_278 = 6;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 1;
			}
			else
			{
				Local_91.f_1 = 6;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { 145.8397f, -2790.1968f, 5.0002f };
						Local_91.f_43[0] = 197.4435f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { 145.8397f, -2790.1968f, 5.0002f };
						Local_91.f_43[0] = 197.4435f;
						Local_91.f_30[1 /*3*/] = { 132.5468f, -2805.1807f, 5.0002f };
						Local_91.f_43[1] = 197.1133f;
						Local_91.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_91.f_43[2] = 272.2065f;
						Local_91.f_30[3 /*3*/] = { 163.5494f, -2795.9202f, 5.0002f };
						Local_91.f_43[3] = 142.941f;
					}
					Local_91.f_159[0 /*3*/] = { 887.9951f, -3884.4497f, 54.3252f };
					Local_91.f_175[0] = 34.149f;
					Local_91.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_91.f_175[1] = -26.0182f;
					Local_91.f_159[2 /*3*/] = { 1271.1887f, -3196.2434f, 104.9035f };
					Local_91.f_175[2] = 88.3998f;
					Local_91.f_159[3 /*3*/] = { -879.6379f, -2210.0242f, 245.712f };
					Local_91.f_175[3] = -141.7949f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_117[0 /*3*/] = { 546.2563f, -3289.3162f, 17.714f };
					Local_91.f_148[0] = 143.4012f;
					Local_91.f_117[1 /*3*/] = { 596.183f, -3288.1736f, 17.714f };
					Local_91.f_148[1] = 212.1136f;
					Local_91.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_91.f_148[2] = 95.8248f;
					Local_91.f_117[3 /*3*/] = { 480.8767f, -3238.4136f, 5.0696f };
					Local_91.f_148[3] = 113.3084f;
					Local_91.f_117[4 /*3*/] = { 444.4339f, -3187.9558f, 5.0703f };
					Local_91.f_148[4] = 260.1329f;
					Local_91.f_242 = 4;
					break;
				case 1:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { -1762.4076f, -786.7469f, 8.075f };
						Local_91.f_43[0] = 131.0993f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { -1762.4076f, -786.7469f, 8.075f };
						Local_91.f_43[0] = 131.0993f;
						Local_91.f_30[1 /*3*/] = { -1734.9775f, -796.148f, 8.3998f };
						Local_91.f_43[1] = 127.8408f;
						Local_91.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_91.f_43[2] = 131.1571f;
						Local_91.f_30[3 /*3*/] = { -1792.5006f, -751.6967f, 8.1782f };
						Local_91.f_43[3] = 132.943f;
					}
					Local_91.f_159[0 /*3*/] = { -1876.4971f, -665.6128f, 109.1172f };
					Local_91.f_175[0] = 316.9068f;
					Local_91.f_159[1 /*3*/] = { -1099.2975f, 20.5145f, 150.0107f };
					Local_91.f_175[1] = 142.3075f;
					Local_91.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_91.f_175[2] = 93.1231f;
					Local_91.f_159[3 /*3*/] = { -1697.5353f, -1306.9553f, 127.8882f };
					Local_91.f_175[3] = -9.0334f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_117[0 /*3*/] = { -1468.4458f, -546.457f, 84.073f };
					Local_91.f_148[0] = 236.3566f;
					Local_91.f_117[1 /*3*/] = { -1288.0239f, -439.2769f, 102.47f };
					Local_91.f_148[1] = 212.7533f;
					Local_91.f_117[2 /*3*/] = { -1556.8313f, -589.7376f, 32.9884f };
					Local_91.f_148[2] = 299.3619f;
					Local_91.f_117[3 /*3*/] = { -1353.2806f, -514.1478f, 22.2694f };
					Local_91.f_148[3] = 115.7556f;
					Local_91.f_117[4 /*3*/] = { -1314.6932f, -570.6011f, 28.3023f };
					Local_91.f_148[4] = 191.3862f;
					Local_91.f_242 = 4;
					break;
				case 2:
					Local_91.f_30[0 /*3*/] = { 737.7632f, 1292.3484f, 359.296f };
					Local_91.f_43[0] = 176.244f;
					Local_91.f_159[0 /*3*/] = { 737.1152f, 1296.3625f, 459.296f };
					Local_91.f_175[0] = 93.8354f;
					Local_91.f_159[1 /*3*/] = { -425.5261f, 1185.3806f, 324.6416f };
					Local_91.f_175[1] = 250.5173f;
					Local_91.f_159[2 /*3*/] = { 1157.6166f, 116.7023f, 180.3293f };
					Local_91.f_175[2] = 337.8961f;
					Local_91.f_159[3 /*3*/] = { 1604.7471f, 2094.859f, 184.1727f };
					Local_91.f_175[3] = 142.1369f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_117[0 /*3*/] = { 662.439f, 1284.1891f, 359.296f };
					Local_91.f_148[0] = 208.2624f;
					Local_91.f_117[1 /*3*/] = { 782.1017f, 1279.3444f, 359.2967f };
					Local_91.f_148[1] = 349.048f;
					Local_91.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_91.f_148[2] = 69.8162f;
					Local_91.f_117[3 /*3*/] = { 750.6609f, 1209.1548f, 326.5541f };
					Local_91.f_148[3] = 286.6181f;
					Local_91.f_242 = 4;
					Local_91.f_243 = 4;
					break;
				case 3:
					Local_91.f_30[0 /*3*/] = { 2521.1213f, -471.1436f, 91.9971f };
					Local_91.f_43[0] = 292.0822f;
					Local_91.f_30[1 /*3*/] = { 2510.2734f, -473.5832f, 91.9929f };
					Local_91.f_43[1] = 43.3907f;
					Local_91.f_30[2 /*3*/] = { 2481.3901f, -320.2297f, 91.9927f };
					Local_91.f_43[2] = 124.2279f;
					Local_91.f_30[3 /*3*/] = { 2560.3145f, -438.3987f, 91.9926f };
					Local_91.f_43[3] = 129.3366f;
					Local_91.f_159[0 /*3*/] = { 2870.5044f, 368.2049f, 101.6602f };
					Local_91.f_175[0] = 137.5025f;
					Local_91.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_91.f_175[1] = 227.9336f;
					Local_91.f_159[2 /*3*/] = { 2666.0332f, -931.6996f, 100.6606f };
					Local_91.f_175[2] = 6.0299f;
					Local_91.f_159[3 /*3*/] = { 1336.4745f, -345.6518f, 424.9653f };
					Local_91.f_175[3] = -87.5596f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_242 = 4;
					Local_91.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_91.f_148[0] = 338.8487f;
					Local_91.f_117[1 /*3*/] = { 2473.8284f, -384.0913f, 108.6521f };
					Local_91.f_148[1] = 272.5443f;
					Local_91.f_117[2 /*3*/] = { 2535.3215f, -335.4323f, 113.0844f };
					Local_91.f_148[2] = 223.0158f;
					Local_91.f_117[3 /*3*/] = { 2478.7522f, -416.0706f, 92.7351f };
					Local_91.f_148[3] = 355.6682f;
					Local_91.f_117[4 /*3*/] = { 2482.1758f, -353.0269f, 92.7351f };
					Local_91.f_148[4] = 179.3658f;
					break;
				case 4:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { -1822.3245f, -3167.588f, 12.9444f };
						Local_91.f_43[0] = 331.7771f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { -1822.3245f, -3167.588f, 12.9444f };
						Local_91.f_43[0] = 331.7771f;
						Local_91.f_30[1 /*3*/] = { -1841.3795f, -3156.6663f, 12.9444f };
						Local_91.f_43[1] = 324.1843f;
						Local_91.f_30[2 /*3*/] = { -1860.8583f, -3143.9216f, 12.9444f };
						Local_91.f_43[2] = 330.0586f;
						Local_91.f_30[3 /*3*/] = { -1885.1311f, -3129.9482f, 12.9444f };
						Local_91.f_43[3] = 329.5413f;
					}
					Local_91.f_159[0 /*3*/] = { -1185.2023f, -2364.726f, 112.9452f };
					Local_91.f_175[0] = 146.9594f;
					Local_91.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_91.f_175[1] = 137.6555f;
					Local_91.f_159[2 /*3*/] = { -412.0741f, -2847.3071f, 105.0004f };
					Local_91.f_175[2] = 114.7478f;
					Local_91.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_91.f_175[3] = -84.6269f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_242 = 4;
					Local_91.f_117[0 /*3*/] = { -1051.5664f, -2880.6667f, 29.3631f };
					Local_91.f_148[0] = 153.0449f;
					Local_91.f_117[1 /*3*/] = { -1154.1666f, -2821.0889f, 29.3631f };
					Local_91.f_148[1] = 153.1271f;
					Local_91.f_117[2 /*3*/] = { -1441.8662f, -3280.6755f, 12.9449f };
					Local_91.f_148[2] = 331.3771f;
					Local_91.f_117[3 /*3*/] = { -1209.3198f, -2789.0227f, 12.9523f };
					Local_91.f_148[3] = 183.2579f;
					Local_91.f_117[4 /*3*/] = { -1239.1879f, -2688.9426f, 12.9449f };
					Local_91.f_148[4] = 149.3518f;
					break;
				case 5:
					Local_91.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_91.f_43[0] = 184.7817f;
					Local_91.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_91.f_175[0] = 91.7761f;
					Local_91.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_91.f_175[1] = 269.7376f;
					Local_91.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_91.f_175[1] = 211.4614f;
					Local_91.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_91.f_175[3] = 148.9204f;
					Local_91.f_228[0] = 10000;
					Local_91.f_228[1] = 10000;
					Local_91.f_228[2] = 10000;
					Local_91.f_228[3] = 10000;
					Local_91.f_242 = 4;
					Local_91.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_91.f_148[0] = 113.298f;
					Local_91.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_91.f_148[1] = 353.0292f;
					Local_91.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_91.f_148[2] = 216.1793f;
					Local_91.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_91.f_148[3] = 347.4008f;
					Local_91.f_243 = 4;
					break;
			}
			break;
		case joaat("valkyrie"):
			Local_91.f_240 = joaat("buzzard");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_305[0] = func_44(4);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			Local_91.f_305[2] = func_44(4);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_280[3] = 5;
				Local_91.f_291[3] = func_45(5);
				Local_91.f_278 = 4;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 5;
				Local_91.f_291[5] = func_45(5);
				Local_91.f_278 = 6;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 4;
				Local_91.f_291[5] = func_45(4);
				Local_91.f_305[5] = func_44(4);
				Local_91.f_280[6] = 5;
				Local_91.f_291[6] = func_45(5);
				Local_91.f_278 = 7;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 3;
			}
			else
			{
				Local_91.f_1 = 8;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					if (!func_768())
					{
						Local_91.f_30[0 /*3*/] = { -758.7451f, -1488.6119f, 4.0005f };
						Local_91.f_43[0] = 290.0732f;
					}
					else
					{
						Local_91.f_30[0 /*3*/] = { -758.7451f, -1488.6119f, 4.0005f };
						Local_91.f_43[0] = 290.0732f;
						Local_91.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_91.f_43[1] = 231.5867f;
						Local_91.f_30[2 /*3*/] = { -712.4144f, -1459.3308f, 4.0005f };
						Local_91.f_43[2] = 49.6234f;
						Local_91.f_30[3 /*3*/] = { -729.9052f, -1418.7335f, 4.0005f };
						Local_91.f_43[3] = 229.3317f;
					}
					Local_91.f_117[0 /*3*/] = { -692.5144f, -1384.7744f, 4.1503f };
					Local_91.f_148[0] = 230.0049f;
					Local_91.f_117[1 /*3*/] = { -724.5416f, -1374.0242f, 0.6002f };
					Local_91.f_148[1] = 147.9421f;
					Local_91.f_117[2 /*3*/] = { -763.0113f, -1531.6372f, 4.4284f };
					Local_91.f_148[2] = 22.3204f;
					Local_91.f_117[3 /*3*/] = { -622.6572f, -1346.9967f, 10.7793f };
					Local_91.f_148[3] = 80.7676f;
					Local_91.f_117[4 /*3*/] = { -650.5557f, -1313.3373f, 9.8688f };
					Local_91.f_148[4] = 162.0507f;
					Local_91.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_91.f_148[5] = 225.9002f;
					Local_91.f_117[6 /*3*/] = { -719.8957f, -1300.3997f, 4.1019f };
					Local_91.f_148[6] = 140.0515f;
					Local_91.f_117[7 /*3*/] = { -661.9195f, -1213.2766f, 9.7043f };
					Local_91.f_148[7] = 90.6966f;
					Local_91.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_91.f_148[8] = 226.042f;
					Local_91.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_91.f_148[9] = 79.7294f;
					Local_91.f_243 = 4;
					break;
				case 1:
					Local_91.f_30[0 /*3*/] = { 307.4523f, 2835.2383f, 42.4361f };
					Local_91.f_43[0] = 122.9714f;
					Local_91.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_91.f_43[1] = 118.6931f;
					Local_91.f_30[2 /*3*/] = { 356.6689f, 2806.7412f, 52.9669f };
					Local_91.f_43[2] = 26.5272f;
					Local_91.f_30[3 /*3*/] = { 310.0119f, 2875.7124f, 42.5068f };
					Local_91.f_43[3] = 211.0638f;
					Local_91.f_117[0 /*3*/] = { 346.145f, 2861.5652f, 42.4603f };
					Local_91.f_148[0] = 203.4084f;
					Local_91.f_117[1 /*3*/] = { 264.2803f, 2872.2751f, 42.6105f };
					Local_91.f_148[1] = 123.7895f;
					Local_91.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_91.f_148[2] = 115.9053f;
					Local_91.f_117[3 /*3*/] = { 290.606f, 2810.9065f, 47.9461f };
					Local_91.f_148[3] = 330.5807f;
					Local_91.f_117[4 /*3*/] = { 341.4013f, 2863.1812f, 42.4361f };
					Local_91.f_148[4] = 116.311f;
					Local_91.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_91.f_148[5] = 145.855f;
					Local_91.f_117[6 /*3*/] = { 301.125f, 2814.3276f, 42.4361f };
					Local_91.f_148[6] = 41.353f;
					Local_91.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_91.f_148[7] = 266.0158f;
					Local_91.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_91.f_148[8] = 290.3963f;
					Local_91.f_117[9 /*3*/] = { 269.1239f, 2866.5085f, 73.1797f };
					Local_91.f_148[9] = 243.2495f;
					Local_91.f_243 = 4;
					break;
				case 2:
					Local_91.f_30[0 /*3*/] = { 714.882f, 4175.2964f, 39.7092f };
					Local_91.f_43[0] = 280.2862f;
					Local_91.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_91.f_43[1] = 32.9157f;
					Local_91.f_30[2 /*3*/] = { 750.664f, 4238.8496f, 54.7686f };
					Local_91.f_43[2] = 106.2954f;
					Local_91.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_91.f_43[3] = 272.3807f;
					Local_91.f_117[0 /*3*/] = { 724.4003f, 4198.8877f, 39.7092f };
					Local_91.f_148[0] = 254.5411f;
					Local_91.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_91.f_148[1] = 183.227f;
					Local_91.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_91.f_148[2] = 338.6039f;
					Local_91.f_117[3 /*3*/] = { 849.6327f, 4224.7793f, 49.5859f };
					Local_91.f_148[3] = 71.8258f;
					Local_91.f_117[4 /*3*/] = { 856.303f, 4257.4663f, 49.48f };
					Local_91.f_148[4] = 179.6626f;
					Local_91.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_91.f_148[5] = 272.7491f;
					Local_91.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_91.f_148[6] = 270.8252f;
					Local_91.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_91.f_148[7] = 180.4937f;
					Local_91.f_117[8 /*3*/] = { 876.0669f, 4247.9053f, 48.9739f };
					Local_91.f_148[8] = 107.4297f;
					Local_91.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_91.f_148[9] = 247.5728f;
					break;
				case 3:
					Local_91.f_30[0 /*3*/] = { 3279.4973f, 5204.4556f, 17.3168f };
					Local_91.f_43[0] = 117.7311f;
					Local_91.f_30[1 /*3*/] = { 3280.456f, 5166.3433f, 17.9564f };
					Local_91.f_43[1] = 46.3958f;
					Local_91.f_30[2 /*3*/] = { 3258.5093f, 5225.8696f, 17.2293f };
					Local_91.f_43[2] = 189.2091f;
					Local_91.f_30[3 /*3*/] = { 3302.8962f, 5136.244f, 17.3101f };
					Local_91.f_43[3] = 50.0778f;
					Local_91.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_91.f_148[0] = 229.5714f;
					Local_91.f_117[1 /*3*/] = { 3309.2542f, 5167.526f, 17.4491f };
					Local_91.f_148[1] = 136.4963f;
					Local_91.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_91.f_148[2] = 88.3908f;
					Local_91.f_117[3 /*3*/] = { 3222.684f, 5187.7344f, 30.0174f };
					Local_91.f_148[3] = 271.8922f;
					Local_91.f_117[4 /*3*/] = { 3217.3506f, 5145.03f, 18.4178f };
					Local_91.f_148[4] = 316.4374f;
					Local_91.f_117[5 /*3*/] = { 3155.5615f, 5285.2456f, 28.0707f };
					Local_91.f_148[5] = 246.1521f;
					Local_91.f_117[6 /*3*/] = { 3311.9353f, 5176.247f, 18.6196f };
					Local_91.f_148[6] = 198.8985f;
					Local_91.f_117[7 /*3*/] = { 3230.1418f, 5200.801f, 22.8278f };
					Local_91.f_148[7] = 257.2332f;
					Local_91.f_117[8 /*3*/] = { 3420.0693f, 5169.1333f, 4.8574f };
					Local_91.f_148[8] = 104.7808f;
					Local_91.f_117[9 /*3*/] = { 3242.8682f, 5035.1655f, 20.011f };
					Local_91.f_148[9] = 339.2293f;
					break;
				case 4:
					Local_91.f_30[0 /*3*/] = { -1736.9886f, 162.0228f, 63.371f };
					Local_91.f_43[0] = 306.7662f;
					Local_91.f_30[1 /*3*/] = { -1736.9382f, 137.1991f, 63.371f };
					Local_91.f_43[1] = 303.3918f;
					Local_91.f_30[2 /*3*/] = { -1756.2722f, 172.5584f, 63.3711f };
					Local_91.f_43[2] = 302.365f;
					Local_91.f_30[3 /*3*/] = { -1710.7477f, 129.7035f, 63.3716f };
					Local_91.f_43[3] = 304.9788f;
					Local_91.f_117[0 /*3*/] = { -1674.8676f, 141.795f, 62.4627f };
					Local_91.f_148[0] = 30.9787f;
					Local_91.f_117[1 /*3*/] = { -1668.2645f, 190.8298f, 60.7573f };
					Local_91.f_148[1] = 97.3626f;
					Local_91.f_117[2 /*3*/] = { -1661.1346f, 236.6263f, 61.391f };
					Local_91.f_148[2] = 218.2636f;
					Local_91.f_117[3 /*3*/] = { -1706.4431f, 186.8354f, 62.9277f };
					Local_91.f_148[3] = 257.6324f;
					Local_91.f_117[4 /*3*/] = { -1722.3949f, 227.362f, 60.7408f };
					Local_91.f_148[4] = 244.6777f;
					Local_91.f_117[5 /*3*/] = { -1623.3435f, 165.8969f, 59.7796f };
					Local_91.f_148[5] = 12.745f;
					Local_91.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_91.f_148[6] = 196.3743f;
					Local_91.f_117[7 /*3*/] = { -1796.2153f, 150.6246f, 67.7735f };
					Local_91.f_148[7] = 283.2556f;
					Local_91.f_117[8 /*3*/] = { -1774.0328f, 105.8673f, 69.3384f };
					Local_91.f_148[8] = 243.4268f;
					Local_91.f_117[9 /*3*/] = { -1594.7167f, 210.4007f, 73.3379f };
					Local_91.f_148[9] = 27.7876f;
					break;
			}
			break;
		case joaat("buzzard"):
			Local_91.f_240 = joaat("buzzard");
			Local_91.f_280[0] = 2;
			Local_91.f_291[0] = func_45(2);
			Local_91.f_280[1] = 4;
			Local_91.f_291[1] = func_45(4);
			Local_91.f_305[1] = func_44(4);
			Local_91.f_280[2] = 2;
			Local_91.f_291[2] = func_45(2);
			if (Local_91.f_12 <= 2 || !func_768())
			{
				Local_91.f_280[3] = 5;
				Local_91.f_291[3] = func_45(5);
				Local_91.f_278 = 4;
			}
			else if (Local_91.f_12 == 3)
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 5;
				Local_91.f_291[5] = func_45(5);
				Local_91.f_278 = 6;
			}
			else
			{
				Local_91.f_280[3] = 4;
				Local_91.f_291[3] = func_45(4);
				Local_91.f_305[3] = func_44(4);
				Local_91.f_280[4] = 2;
				Local_91.f_291[4] = func_45(2);
				Local_91.f_280[5] = 4;
				Local_91.f_291[5] = func_45(4);
				Local_91.f_305[5] = func_44(4);
				Local_91.f_280[6] = 5;
				Local_91.f_291[6] = func_45(5);
				Local_91.f_278 = 7;
			}
			Local_91.f_255 = func_41();
			if (!func_768())
			{
				Local_91.f_1 = 4;
			}
			else
			{
				Local_91.f_1 = 9;
			}
			Local_91.f_2 = Local_91.f_29;
			switch (Local_91.f_29)
			{
				case 0:
					Local_91.f_30[0 /*3*/] = { 1139.9434f, -1289.1946f, 33.6127f };
					Local_91.f_43[0] = 180.7904f;
					Local_91.f_30[1 /*3*/] = { 1156.358f, -1327.4016f, 33.7312f };
					Local_91.f_43[1] = 269.3001f;
					Local_91.f_30[2 /*3*/] = { 1204.9634f, -1265.3337f, 34.2267f };
					Local_91.f_43[2] = 180.39f;
					Local_91.f_30[3 /*3*/] = { 1220.9541f, -1214.8834f, 34.9485f };
					Local_91.f_43[3] = 276.7351f;
					Local_91.f_117[0 /*3*/] = { 1195.5559f, -1277.9141f, 34.3601f };
					Local_91.f_148[0] = 329.9165f;
					Local_91.f_117[1 /*3*/] = { 1197.8986f, -1297.3856f, 34.1985f };
					Local_91.f_148[1] = 264.7702f;
					Local_91.f_117[2 /*3*/] = { 1168.4347f, -1382.3054f, 33.784f };
					Local_91.f_148[2] = 359.5203f;
					Local_91.f_117[3 /*3*/] = { 1160.7958f, -1253.6257f, 33.5659f };
					Local_91.f_148[3] = 111.3101f;
					Local_91.f_117[4 /*3*/] = { 1178.2004f, -1272.3988f, 33.8277f };
					Local_91.f_148[4] = 176.3058f;
					Local_91.f_117[5 /*3*/] = { 1185.2825f, -1355.4935f, 33.9506f };
					Local_91.f_148[5] = 213.1969f;
					Local_91.f_117[6 /*3*/] = { 1217.7041f, -1381.6592f, 34.3114f };
					Local_91.f_148[6] = 275.2275f;
					Local_91.f_117[7 /*3*/] = { 1193.3881f, -1257.564f, 34.2036f };
					Local_91.f_148[7] = 220.0349f;
					Local_91.f_117[8 /*3*/] = { 1174.8335f, -1381.0643f, 41.8297f };
					Local_91.f_148[8] = 359.15f;
					Local_91.f_117[9 /*3*/] = { 1154.6473f, -1338.6132f, 33.7034f };
					Local_91.f_148[9] = 83.4212f;
					break;
				case 1:
					Local_91.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_91.f_43[0] = 247.4892f;
					Local_91.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_91.f_43[1] = 66.129f;
					Local_91.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_91.f_43[2] = 340.0713f;
					Local_91.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_91.f_43[3] = 245.7466f;
					Local_91.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_91.f_148[0] = 252.6017f;
					Local_91.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_91.f_148[1] = 245.262f;
					Local_91.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_91.f_148[2] = 44.7945f;
					Local_91.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_91.f_148[3] = 255.6518f;
					Local_91.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_91.f_148[4] = 124.8391f;
					Local_91.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_91.f_148[5] = 188.9979f;
					Local_91.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_91.f_148[6] = 159.3613f;
					Local_91.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_91.f_148[7] = 5.7762f;
					Local_91.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_91.f_148[8] = 89.3388f;
					Local_91.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_91.f_148[9] = 85.9158f;
					break;
				case 2:
					Local_91.f_30[0 /*3*/] = { -509.9767f, 1186.8542f, 323.8415f };
					Local_91.f_43[0] = 310.6241f;
					Local_91.f_30[1 /*3*/] = { -398.0129f, 1230.5077f, 324.6416f };
					Local_91.f_43[1] = 166.0191f;
					Local_91.f_30[2 /*3*/] = { -455.6342f, 1141.9984f, 324.9044f };
					Local_91.f_43[2] = 343.1715f;
					Local_91.f_30[3 /*3*/] = { -412.4245f, 1133.0317f, 324.9044f };
					Local_91.f_43[3] = 342.4984f;
					Local_91.f_117[0 /*3*/] = { -426.3299f, 1216.6597f, 324.7585f };
					Local_91.f_148[0] = 248.8594f;
					Local_91.f_117[1 /*3*/] = { -363.2418f, 1266.7606f, 329.8745f };
					Local_91.f_148[1] = 195.7758f;
					Local_91.f_117[2 /*3*/] = { -453.9799f, 1074.9916f, 326.6897f };
					Local_91.f_148[2] = 28.6127f;
					Local_91.f_117[3 /*3*/] = { -392.485f, 1078.5618f, 323.2558f };
					Local_91.f_148[3] = 296.7476f;
					Local_91.f_117[4 /*3*/] = { -413.6003f, 1086.8307f, 326.6821f };
					Local_91.f_148[4] = 240.9422f;
					Local_91.f_117[5 /*3*/] = { -381.0179f, 1141.2689f, 321.6503f };
					Local_91.f_148[5] = 2.473f;
					Local_91.f_117[6 /*3*/] = { -482.3448f, 1118.6459f, 319.0963f };
					Local_91.f_148[6] = 343.6776f;
					Local_91.f_117[7 /*3*/] = { -397.3531f, 1127.5273f, 321.7288f };
					Local_91.f_148[7] = 0.2495f;
					Local_91.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_91.f_148[8] = 72.7889f;
					Local_91.f_117[9 /*3*/] = { -424.5132f, 1225.0759f, 324.7585f };
					Local_91.f_148[9] = 238.4196f;
					break;
				case 3:
					Local_91.f_30[0 /*3*/] = { 341.0539f, 3569.7888f, 32.4743f };
					Local_91.f_43[0] = 351.0324f;
					Local_91.f_30[1 /*3*/] = { 373.5018f, 3512.3215f, 33.1732f };
					Local_91.f_43[1] = 3.5452f;
					Local_91.f_30[2 /*3*/] = { 353.5068f, 3483.8394f, 34.0848f };
					Local_91.f_43[2] = 7.3237f;
					Local_91.f_30[3 /*3*/] = { 245.8774f, 3580.8813f, 32.9612f };
					Local_91.f_43[3] = 332.0844f;
					Local_91.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_91.f_148[0] = 2.6416f;
					Local_91.f_117[1 /*3*/] = { 445.3309f, 3512.0876f, 32.9825f };
					Local_91.f_148[1] = 171.8638f;
					Local_91.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_91.f_148[2] = 257.0332f;
					Local_91.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_91.f_148[3] = 91.7869f;
					Local_91.f_117[4 /*3*/] = { 395.8559f, 3577.0251f, 32.2922f };
					Local_91.f_148[4] = 4.2016f;
					Local_91.f_117[5 /*3*/] = { 380.2437f, 3560.9915f, 32.342f };
					Local_91.f_148[5] = 339.729f;
					Local_91.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_91.f_148[6] = 359.2033f;
					Local_91.f_117[7 /*3*/] = { 476.5523f, 3557.3276f, 32.2386f };
					Local_91.f_148[7] = 333.6298f;
					Local_91.f_117[8 /*3*/] = { 325.6323f, 3390.6663f, 35.4033f };
					Local_91.f_148[8] = 73.2788f;
					Local_91.f_117[9 /*3*/] = { 461.6116f, 3535.2573f, 32.318f };
					Local_91.f_148[9] = 96.8181f;
					break;
				case 4:
					Local_91.f_30[0 /*3*/] = { 1493.1655f, 1177.5554f, 113.2209f };
					Local_91.f_43[0] = 42.1535f;
					Local_91.f_30[1 /*3*/] = { 1433.4757f, 1179.5436f, 113.1842f };
					Local_91.f_43[1] = 315.0261f;
					Local_91.f_30[2 /*3*/] = { 1471.4857f, 1108.9673f, 113.3343f };
					Local_91.f_43[2] = 1.2527f;
					Local_91.f_30[3 /*3*/] = { 1448.9137f, 1110.6216f, 113.3363f };
					Local_91.f_43[3] = 1.9403f;
					Local_91.f_117[0 /*3*/] = { 1485.6221f, 1047.3883f, 113.334f };
					Local_91.f_148[0] = 352.9674f;
					Local_91.f_117[1 /*3*/] = { 1461.5406f, 1083.6578f, 113.3344f };
					Local_91.f_148[1] = 88.8285f;
					Local_91.f_117[2 /*3*/] = { 1411.8738f, 1126.9602f, 113.3341f };
					Local_91.f_148[2] = 177.2297f;
					Local_91.f_117[3 /*3*/] = { 1442.4966f, 1148.4688f, 113.3342f };
					Local_91.f_148[3] = 273.1487f;
					Local_91.f_117[4 /*3*/] = { 1406.4763f, 1256.6952f, 106.6555f };
					Local_91.f_148[4] = 225.394f;
					Local_91.f_117[5 /*3*/] = { 1464.077f, 1134.8076f, 113.3227f };
					Local_91.f_148[5] = 175.5423f;
					Local_91.f_117[6 /*3*/] = { 1410.3141f, 1162.3165f, 113.3342f };
					Local_91.f_148[6] = 191.1842f;
					Local_91.f_117[7 /*3*/] = { 1487.483f, 1102.2426f, 113.3346f };
					Local_91.f_148[7] = 269.6831f;
					Local_91.f_117[8 /*3*/] = { 1391.0343f, 1154.2233f, 113.4433f };
					Local_91.f_148[8] = 29.4203f;
					Local_91.f_117[9 /*3*/] = { 1484.8704f, 1039.553f, 113.2318f };
					Local_91.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()//Position - 0x5BB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Local_91.f_255 != -1)
	{
		return Local_91.f_255;
	}
	if (Local_91.f_278 == 0)
	{
		return ((4 * Global_262145.f_10672 /* Tunable: URBANWARFAREENEMYVEHSPAWNS */) + Global_262145.f_10673 /* Tunable: URBANWARFAREENEMYONFOOTSPAWNS */);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_91.f_278)
			{
				iVar0 = (iVar0 + ((Local_91.f_291[iVar1] * iVar4) + Local_91.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)//Position - 0x5C5F
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		case joaat("lazer"):
			return 1;
			break;
		case joaat("buzzard"):
			return 4;
			break;
		case joaat("mesa3"):
			return 4;
			break;
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x5CB0
{
	int iVar0;
	switch (iParam0)
	{
		case 2:
			if (Local_91.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		case 4:
			if (Local_91.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		case 5:
			iVar0 = joaat("savage");
			break;
		default:
			if (Local_91.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_91.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)//Position - 0x5D53
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_768())
			{
				iVar0 = Global_262145.f_11854 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_FOOT_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11574 /* Tunable: KILL_LIST_WAVE_TYPE_FOOT_ENEMIES */;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)//Position - 0x5D92
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_768())
			{
				iVar0 = Global_262145.f_11855 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_AIRCRAFT_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11575 /* Tunable: KILL_LIST_WAVE_TYPE_AIRCRAFT_ENEMIES */;
			}
			break;
		case 5:
			if (func_768())
			{
				iVar0 = Global_262145.f_11856 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_BOSS_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11576 /* Tunable: KILL_LIST_WAVE_TYPE_BOSS_ENEMIES */;
			}
			break;
		case 4:
			if (func_768())
			{
				iVar0 = Global_262145.f_11853 /* Tunable: COMPETITIVE_KILL_LIST_WAVE_TYPE_GROUND_VEHICLE_ENEMIES */;
			}
			else
			{
				iVar0 = Global_262145.f_11573 /* Tunable: KILL_LIST_WAVE_TYPE_GROUND_VEHICLE_ENEMIES */;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)//Position - 0x5E15
{
	if (!func_768())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			case joaat("hydra"):
				return 5;
			case joaat("savage"):
				return 3;
			case joaat("valkyrie"):
				return 5;
			case joaat("buzzard"):
				return 5;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			case joaat("hydra"):
				return 3;
			case joaat("savage"):
				return 3;
			case joaat("valkyrie"):
				return 4;
			case joaat("buzzard"):
				return 4;
			}
		default:
	}
	return 5;
}

void func_47()//Position - 0x5E9B
{
	Local_91.f_252 = 0;
	Local_91.f_302 = 0;
	Local_91.f_317 = 0;
	Local_91.f_316 = 0;
}

int func_48()//Position - 0x5EBA
{
	int iVar0;
	int iVar1;
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!__LIB_0__::func_951(Local_91.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()//Position - 0x5EF2
{
	int iVar0;
	int iVar1;
	iVar0 = Local_91.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_91.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			case 2:
				return 1;
				break;
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()//Position - 0x5F72
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (__LIB_0__::func_939(Local_91.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)//Position - 0x5FA3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	if (Local_91.f_318 == 0 || Local_91.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_91.f_317 >= func_38())
		{
			iVar0 = Local_91.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_91.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_91.f_317 == 2)
	{
		iVar0 = Local_91.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_91.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_91.f_318 == func_39())
	{
		return 0;
	}
	if (Local_91.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(20 + iParam0)]))
	{
		if (__LIB_0__::func_799(Local_91.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (__LIB_43__::func_400(Local_91.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_1__::func_672(&(Local_91.f_48[(20 + iParam0)]), 22, Local_91.f_239, Local_91.f_117[iVar3 /*3*/], Local_91.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), iLocal_105);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), joaat("WEAPON_RPG"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(20 + iParam0)]), iVar4, 0);
						bVar7 = (20 + iParam0);
						if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar7)], __LIB_18__::func_410(bVar7)))
						{
							MISC::CLEAR_BIT(&(Local_91.f_272[__LIB_13__::func_437(bVar7)]), __LIB_18__::func_410(bVar7));
						}
						Local_91.f_247++;
						Local_91.f_317++;
						Local_91.f_250++;
						Local_91.f_318++;
						__LIB_0__::func_794(&(Local_91.f_414[bVar7 /*2*/]));
						__LIB_0__::func_795(&(Local_91.f_414[bVar7 /*2*/]), 0, 0);
						if (__LIB_0__::func_864(&(Local_91.f_364[bVar7 /*2*/])))
						{
							__LIB_0__::func_794(&(Local_91.f_364[bVar7 /*2*/]));
						}
						__LIB_0__::func_795(&(Local_559[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_48[bVar7]), true, iLocal_104);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()//Position - 0x63E3
{
	if (func_768())
	{
		return Global_262145.f_11842 /* Tunable: COMPETITIVE_KILL_LIST_ENEMY_HEALTH */;
	}
	return Global_262145.f_11562 /* Tunable: KILL_LIST_ENEMY_HEALTH */;
}

float func_53()//Position - 0x6406
{
	if (func_768())
	{
		return Global_262145.f_11844 /* Tunable: COMPETITIVE_KILL_LIST_ENEMY_GUN_ACCURACY */;
	}
	return Global_262145.f_11564 /* Tunable: KILL_LIST_ENEMY_GUN_ACCURACY */;
}

int func_68(var uParam0)//Position - 0x6A38
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!__LIB_0__::func_78(Local_91.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!__LIB_0__::func_864(&(Local_559[iVar0 /*2*/])) || (__LIB_0__::func_864(&(Local_559[iVar0 /*2*/])) && __LIB_0__::func_937(&(Local_559[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_71()//Position - 0x6B02
{
	int iVar0;
	int iVar1;
	if (Local_91.f_279 == 0)
	{
		iVar0 = Local_91.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_91.f_279)
		{
			iVar0 = (iVar0 + Local_91.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()//Position - 0x6B46
{
	int iVar0;
	int iVar1;
	switch (Local_91.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_91.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(bool bParam0)//Position - 0x6B9B
{
	int iVar0;
	int iVar1;
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_91.f_242 < iVar0)
	{
	}
	if (Local_91.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_91.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (__LIB_0__::func_799(Local_91.f_240) && __LIB_0__::func_799(Local_91.f_239))
	{
		if (func_74(bParam0))
		{
			if (BitTest(Local_91.f_245, bParam0))
			{
				Local_91.f_249++;
				Local_91.f_251++;
				Local_91.f_252++;
				MISC::CLEAR_BIT(&(Local_91.f_245), bParam0);
				if (!BitTest(Local_91.f_3, 19))
				{
					MISC::SET_BIT(&(Local_91.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)//Position - 0x6C50
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(bParam0))
		{
			if (func_75(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0)//Position - 0x6C7A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	if (__LIB_0__::func_939(Local_91.f_73[bParam0]) && BitTest(Local_91.f_245, bParam0))
	{
		if (__LIB_0__::func_953(Local_91.f_73[bParam0]))
		{
			if (Local_91.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])) == joaat("insurgent"))
				{
					Local_91.f_116 = 2;
				}
				else
				{
					Local_91.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])) + 1;
					if (Local_91.f_116 > 4)
					{
						Local_91.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_91.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(bParam0 * 4 + iVar6)]))
				{
					if (__LIB_0__::func_799(Local_91.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (__LIB_0__::func_930(&(Local_91.f_48[(bParam0 * 4 + iVar6)]), Local_91.f_73[bParam0], 22, Local_91.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), iLocal_105);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("WEAPON_APPISTOL"), 25000, false);
							if (__LIB_0__::func_680())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("WEAPON_ADVANCEDRIFLE"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
								}
								fVar0 = Global_262145.f_11826 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE */;
								fVar1 = Global_262145.f_11827 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE_CLOSE */;
								fVar2 = Global_262145.f_11828 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_CLOSE_DISTANCE */;
								fVar3 = Global_262145.f_11829 /* Tunable: URBANW_HOMING_ROCKET_TURN_RATE_MODIFIER */;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_11826 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE */;
								fVar1 = Global_262145.f_11827 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE_CLOSE */;
								fVar2 = Global_262145.f_11828 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_CLOSE_DISTANCE */;
								fVar3 = Global_262145.f_11829 /* Tunable: URBANW_HOMING_ROCKET_TURN_RATE_MODIFIER */;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							bVar7 = (bParam0 * 4 + iVar6);
							if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar7)], __LIB_18__::func_410(bVar7)))
							{
								MISC::CLEAR_BIT(&(Local_91.f_272[__LIB_13__::func_437(bVar7)]), __LIB_18__::func_410(bVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), true, iLocal_104);
							Local_91.f_250++;
							__LIB_0__::func_794(&(Local_91.f_414[(bParam0 * 4 + iVar6) /*2*/]));
							__LIB_0__::func_795(&(Local_91.f_414[(bParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (__LIB_0__::func_864(&(Local_91.f_364[(bParam0 * 4 + iVar6) /*2*/])))
							{
								__LIB_0__::func_794(&(Local_91.f_364[(bParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_91.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (__LIB_0__::func_951(Local_91.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[(bParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_91.f_73[bParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()//Position - 0x73B6
{
	if (func_768())
	{
		return Global_262145.f_11845 /* Tunable: COMPETITIVE_KILL_LIST_ENEMY_MISSILE_ACCURACY */;
	}
	return Global_262145.f_11565 /* Tunable: KILL_LIST_ENEMY_MISSILE_ACCURACY */;
}

int func_80(bool bParam0)//Position - 0x74A1
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	bool bVar12;
	iVar0 = func_98();
	Local_91.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_73[bParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_91.f_116)
		{
			iVar3 = (bParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (__LIB_0__::func_799(Local_91.f_240) && !BitTest(Local_91.f_245, bParam0))
		{
			fVar8 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_91.f_242)
			{
				if (func_87(iVar9))
				{
					func_86(Local_91.f_240, iVar9, &Var10, &uVar11);
					if (!__LIB_0__::func_78(Var10, 0f, 0f, 0f, 0))
					{
						if (__LIB_43__::func_400(Var10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0))
						{
							Var4 = { Var10 };
							fVar5 = uVar11;
							iVar6 = 1;
							__LIB_0__::func_627(&(Local_91.f_186[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_91.f_242;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				bVar12 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
				{
					bVar12 = false;
				}
				if (func_85(bParam0))
				{
					if (__LIB_0__::func_957(&(Local_91.f_73[bParam0]), Local_91.f_240, Var4, fVar5, 1, 1, 1, 0, bVar12, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true, true, false);
						VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
						VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 3);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), 30f);
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
							VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), fVar1);
						}
						if (__LIB_0__::func_864(&(Local_91.f_336[bParam0 /*2*/])))
						{
							__LIB_0__::func_794(&(Local_91.f_336[bParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_91.f_253), bParam0);
						MISC::SET_BIT(&(Local_91.f_245), bParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), true, iLocal_104);
						if (BitTest(Local_91.f_271, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_91.f_271), bParam0);
						}
						if (BitTest(Local_91.f_303, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_91.f_303), bParam0);
						}
						if (Local_91.f_240 == joaat("hydra") || Local_91.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_73[bParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()//Position - 0x7915
{
	if (func_768())
	{
		return Global_262145.f_11843 /* Tunable: COMPETITIVE_KILL_LIST_BOSS_HEALTH */;
	}
	return Global_262145.f_11563 /* Tunable: KILL_LIST_BOSS_HEALTH */;
}

int func_85(bool bParam0)//Position - 0x7BB2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_94[iVar0 /*18*/].f_6, bParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7BFC
{
	bool bVar0;
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
			if (!__LIB_0__::func_78(Local_91.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_91.f_159[iParam1 /*3*/] };
				*uParam3 = Local_91.f_175[iParam1];
			}
			break;
		case joaat("hydra"):
			if (!__LIB_0__::func_78(Local_91.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_91.f_159[iParam1 /*3*/] };
				*uParam3 = Local_91.f_175[iParam1];
			}
			break;
		case joaat("savage"):
			switch (Local_91.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.1892f, -2572.8677f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							case 1:
								*uParam2 = { -1062.8428f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							case 2:
								*uParam2 = { -1842.1886f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							case 3:
								*uParam2 = { -1271.3334f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.9421f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							case 1:
								*uParam2 = { -1290.713f, -2658.8442f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							case 2:
								*uParam2 = { -1157.6818f, -2725.7065f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.9856f, 4600.0435f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							case 1:
								*uParam2 = { 2259.96f, 5608.5337f, 63.366f };
								*uParam3 = 171.56f;
								break;
							case 2:
								*uParam2 = { 1042.1166f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							case 3:
								*uParam2 = { 2884.9856f, 4600.0435f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.9537f, 4635.8574f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							case 2:
								*uParam2 = { 1972.4869f, 4843.9814f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							case 3:
								*uParam2 = { 1914.9537f, 4635.8574f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							case 1:
								*uParam2 = { 22.328f, 6898.0957f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							case 2:
								*uParam2 = { -313.5567f, 6436.6514f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.8843f, -1955.9698f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							case 1:
								*uParam2 = { 594.3433f, -1979.4663f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							case 2:
								*uParam2 = { 347.964f, -1427.1937f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							case 3:
								*uParam2 = { 347.964f, -1427.1937f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.7975f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							case 1:
								*uParam2 = { 992.1669f, -1506.8453f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							case 2:
								*uParam2 = { 771.2441f, -1620.7864f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							case 3:
								*uParam2 = { 840.4948f, -1950.5101f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		case joaat("valkyrie"):
			switch (Local_91.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							case 1:
								*uParam2 = { -273.1338f, -1627.7793f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							case 2:
								*uParam2 = { -1157.9587f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							case 3:
								*uParam2 = { -1150.7485f, -1708.6348f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							case 4:
								*uParam2 = { -1001.7541f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.1196f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							case 1:
								*uParam2 = { -850.9597f, -1194.9482f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.4634f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							case 2:
								*uParam2 = { -390.1283f, 2557.1567f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							case 3:
								*uParam2 = { 1084.2472f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.4014f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							case 1:
								*uParam2 = { 91.7939f, 3432.5725f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							case 4:
								*uParam2 = { 142.7533f, 2271.5667f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.0435f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							case 1:
								*uParam2 = { 1002.4834f, 3175.8672f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							case 2:
								*uParam2 = { 2325.4722f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							case 3:
								*uParam2 = { 1962.9498f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							case 2:
								*uParam2 = { 128.2849f, 4454.8784f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							case 3:
								*uParam2 = { -132.4943f, 4295.4653f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							case 4:
								*uParam2 = { 1908.4247f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							case 1:
								*uParam2 = { 2836.9578f, 5957.4653f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							case 2:
								*uParam2 = { 2624.2356f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							case 3:
								*uParam2 = { 2780.4465f, 4758.9004f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							case 4:
								*uParam2 = { 3201.1272f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.6355f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							case 1:
								*uParam2 = { 3680.5488f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							case 2:
								*uParam2 = { 3337.6394f, 5482.4844f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							case 3:
								*uParam2 = { 2766.2378f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.4795f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							case 1:
								*uParam2 = { -1567.1648f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							case 3:
								*uParam2 = { -509.8761f, 1187.8242f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							case 4:
								*uParam2 = { -1265.7891f, 1493.7218f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.4761f, 1366.4535f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							case 1:
								*uParam2 = { -1581.1268f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							case 2:
								*uParam2 = { -1813.6829f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							case 3:
								*uParam2 = { -1912.6982f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							case 4:
								*uParam2 = { -2298.4968f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		case joaat("buzzard"):
			switch (Local_91.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.4414f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							case 3:
								*uParam2 = { 375.2908f, -1020.4328f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							case 4:
								*uParam2 = { 345.1868f, -1426.6221f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.4901f, -1131.3379f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							case 1:
								*uParam2 = { 1396.4141f, -1518.3896f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							case 2:
								*uParam2 = { 972.8618f, -1464.8285f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							case 1:
								*uParam2 = { -1572.2275f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							case 4:
								*uParam2 = { 821.3636f, 1308.9093f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.3257f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							case 1:
								*uParam2 = { -925.5961f, 1124.7699f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							case 3:
								*uParam2 = { -303.0683f, 1010.3021f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							case 4:
								*uParam2 = { 56.7959f, 1080.6508f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							case 2:
								*uParam2 = { -318.9394f, 3790.7725f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							case 3:
								*uParam2 = { -236.0281f, 3088.2373f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							case 4:
								*uParam2 = { 312.2873f, 2783.2725f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.4447f, 3430.1528f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							case 1:
								*uParam2 = { 940.4324f, 3582.7927f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							case 3:
								*uParam2 = { -241.2375f, 3905.4534f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.4552f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							case 2:
								*uParam2 = { 1150.0144f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							case 3:
								*uParam2 = { 1876.2203f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							case 4:
								*uParam2 = { 2105.8916f, 1586.2098f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.8656f, 1852.8563f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							case 1:
								*uParam2 = { 1526.9591f, 1717.2666f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							case 2:
								*uParam2 = { 1962.4127f, 1297.0952f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							case 3:
								*uParam2 = { 958.8857f, 1717.1743f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)//Position - 0x90A7
{
	if (Local_91.f_228[iParam0] > 0)
	{
		if (!__LIB_0__::func_864(&(Local_91.f_207[iParam0 /*2*/])))
		{
			__LIB_0__::func_795(&(Local_91.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!__LIB_0__::func_937(&(Local_91.f_207[iParam0 /*2*/]), Local_91.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_864(&(Local_91.f_186[iParam0 /*2*/])))
	{
		if (!__LIB_0__::func_937(&(Local_91.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()//Position - 0x9125
{
	return Local_91.f_291[Local_91.f_279];
}

void func_89(int iParam0, int iParam1)//Position - 0x9139
{
	struct<3> Var0;
	Var0.f_0 = -196398508;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_93(bool bParam0)//Position - 0x9234
{
	if (Local_91.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (BitTest(Local_91.f_272[__LIB_13__::func_437(bParam0)], __LIB_18__::func_410(bParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)//Position - 0x9268
{
	return func_95(bParam0);
}

int func_95(int iParam0)//Position - 0x9276
{
	int iVar0;
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[iParam0]), false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	return 0;
}

int func_96(bool bParam0)//Position - 0x92B9
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (BitTest(Local_91.f_271, bParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (BitTest(Local_91.f_271, bParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_91.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_91.f_27 == joaat("hydra"))
		{
			if (BitTest(Local_91.f_271, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)//Position - 0x9337
{
	struct<3> Var0;
	Var0.f_0 = -1214381365;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_98()//Position - 0x9369
{
	return Local_91.f_280[Local_91.f_279];
}

void func_99(int iParam0, bool bParam1)//Position - 0x937D
{
	struct<3> Var0;
	Var0.f_0 = 143745567;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_100(bool bParam0)//Position - 0x93AF
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), false))
			{
				if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_91.f_73[bParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, bool bParam1)//Position - 0x9434
{
	struct<3> Var0;
	Var0.f_0 = -215033241;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)//Position - 0x9466
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[iParam0]), false);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[iParam0]), false);
}

int func_103()//Position - 0x94BC
{
	int iVar0;
	int iVar1;
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_91.f_291[iVar0]);
				iVar0++;
			}
			break;
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_91.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_105()//Position - 0x9592
{
	if (func_768())
	{
		return Global_262145.f_11836 /* Tunable: COMPETITIVE_KILL_LIST_EVENT_EXPIRY_TIME */;
	}
	return Global_262145.f_11559 /* Tunable: KILL_LIST_EVENT_EXPIRY_TIME */;
}

int func_108(int iParam0, int iParam1, bool bParam2)//Position - 0x95EF
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_0__::func_156(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (iVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_111()//Position - 0x96BE
{
	int iVar0;
	int iVar1;
	if (BitTest(Local_91.f_3, 20))
	{
		return;
	}
	if (!__LIB_0__::func_864(&uLocal_573))
	{
		__LIB_0__::func_795(&uLocal_573, 0, 0);
		return;
	}
	if (!__LIB_0__::func_937(&uLocal_573, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_925(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			__LIB_1__::func_387(&(Local_91.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_91.f_3), 20);
}

int func_112()//Position - 0x9749
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_91.f_12 != 0)
	{
		return Local_91.f_12;
	}
	if (!func_768())
	{
		Local_91.f_12 = 1;
		return Local_91.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!__LIB_0__::func_361(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_91.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_91.f_12 = 3;
	}
	else
	{
		Local_91.f_12 = 4;
	}
	return Local_91.f_12;
}

int func_113()//Position - 0x97D4
{
	return Global_262145.f_11584 /* Tunable: COMP_KILL_LIST_COMP_MIN_PLAYER_3_VEHICLE_THRESHOLD */;
}

int func_114()//Position - 0x97E3
{
	return Global_262145.f_11583 /* Tunable: COMP_KILL_LIST_COMP_MIN_PLAYER_2_VEHICLE_THRESHOLD */;
}

void func_115()//Position - 0x97F2
{
	int iVar0;
	var uVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_91.f_256[iVar0], Local_91.f_22[iVar0]);
		}
		else if (Local_91.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_118(iVar0);
			if (Local_94[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_94[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_94[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_94[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_91.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()//Position - 0x98E8
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_91.f_465[iVar1 /*4*/].f_1 > Local_91.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_91.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_91.f_465[iVar1 /*4*/];
					uVar4 = Local_91.f_465[iVar1 /*4*/].f_2;
					Local_91.f_465[iVar1 /*4*/].f_1 = Local_91.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_91.f_465[iVar1 /*4*/] = Local_91.f_465[(iVar1 - 1) /*4*/];
					Local_91.f_465[iVar1 /*4*/].f_2 = Local_91.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_91.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_91.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_91.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0x99CD
{
	Local_91.f_465[iParam2 /*4*/] = iParam0;
	Local_91.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_91.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)//Position - 0x99FA
{
	Local_91.f_465[iParam0 /*4*/] = -1;
	Local_91.f_465[iParam0 /*4*/].f_2 = -1;
	Local_91.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()//Position - 0x9A24
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_91.f_594[iVar1 /*4*/].f_1 > Local_91.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_91.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_91.f_594[iVar1 /*4*/];
					uVar4 = Local_91.f_594[iVar1 /*4*/].f_2;
					Local_91.f_594[iVar1 /*4*/].f_1 = Local_91.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_91.f_594[iVar1 /*4*/] = Local_91.f_594[(iVar1 - 1) /*4*/];
					Local_91.f_594[iVar1 /*4*/].f_2 = Local_91.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_91.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_91.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_91.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)//Position - 0x9B07
{
	Local_91.f_594[iParam0 /*4*/] = iParam0;
	Local_91.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_91.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)//Position - 0x9B34
{
	Local_91.f_594[iParam0 /*4*/] = -1;
	Local_91.f_594[iParam0 /*4*/].f_1 = -1;
	Local_91.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()//Position - 0x9B5E
{
	int iVar0;
	bool bVar1;
	iVar0 = func_112();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (!func_123(bVar1))
		{
			__LIB_0__::func_794(&(Local_91.f_5));
			return 0;
		}
		if (!BitTest(Local_91.f_13, bVar1))
		{
			__LIB_0__::func_794(&(Local_91.f_5));
			return 0;
		}
		else if (__LIB_2__::func_925(NETWORK::NET_TO_VEH(Local_91.f_7[bVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			__LIB_0__::func_794(&(Local_91.f_5));
			return 0;
		}
		bVar1++;
	}
	if (!__LIB_0__::func_864(&(Local_91.f_5)))
	{
		__LIB_0__::func_795(&(Local_91.f_5), 0, 0);
	}
	else if (__LIB_0__::func_937(&(Local_91.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(bool bParam0)//Position - 0x9C06
{
	if (__LIB_0__::func_939(Local_91.f_7[bParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), -1, false) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()//Position - 0x9C38
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_768())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			if (__LIB_0__::func_939(Local_91.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_91.f_12)
	{
		Local_91.f_12 = iVar1;
	}
	if (Local_91.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_91.f_3), 8);
		if (!__LIB_0__::func_939(Local_91.f_7[0]))
		{
			if (__LIB_0__::func_939(Local_91.f_7[iVar2]))
			{
				__LIB_1__::func_387(&(Local_91.f_7[0]));
				Local_91.f_7[0] = Local_91.f_7[iVar2];
			}
		}
	}
}

void func_125()//Position - 0x9CDE
{
	bool bVar0;
	if (!func_768())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_91.f_15 != false;
			}
			else
			{
				bVar0 = Local_91.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_91.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_91.f_413 == -1)
		{
			Local_91.f_413 = func_127();
		}
		if (!__LIB_0__::func_864(&(Local_91.f_326)))
		{
			__LIB_0__::func_795(&(Local_91.f_326), 0, 0);
		}
		else if (!BitTest(Local_91.f_3, 4))
		{
			if ((Local_91.f_413 - __LIB_1__::func_724(&(Local_91.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_91.f_3), 4);
			}
		}
	}
	else if (__LIB_0__::func_864(&(Local_91.f_326)))
	{
		__LIB_0__::func_794(&(Local_91.f_326));
		Local_91.f_413 = (Local_91.f_413 - __LIB_1__::func_724(&(Local_91.f_326), 0, 0));
	}
}

var func_127()//Position - 0x9E01
{
	if (func_768())
	{
		return Global_262145.f_11846 /* Tunable: COMPETITIVE_KILL_LIST_PLAYER_WAIT_TIMER_2_PLAYER_VEHICLES */;
	}
	return Global_262145.f_11566 /* Tunable: KILL_LIST_PLAYER_WAIT_TIMER_2_PLAYER_VEHICLES */;
}

void func_128()//Position - 0x9E24
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		iLocal_107[bVar0] = 0;
		iLocal_93[bVar0] = -2;
		iLocal_108[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	if (Local_91.f_0 != 4)
	{
		bLocal_98 = false;
		while (bLocal_98 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_98)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_98));
				if (!__LIB_0__::func_361(iVar7, 0))
				{
					if (Local_94[bLocal_98 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					bVar0 = false;
					while (bVar0 < 4)
					{
						func_135(bLocal_98, bVar0, iVar7);
						bVar0++;
					}
					bVar0 = false;
					bVar0 = false;
					while (bVar0 < 5)
					{
						func_134(bLocal_98, bVar0);
						bVar0++;
					}
					if (!BitTest(Local_91.f_3, 14))
					{
						if (!BitTest(Local_94[bLocal_98 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					bVar0 = false;
					while (bVar0 <= 23)
					{
						func_133(bLocal_98, bVar0);
						bVar0++;
					}
					if (!bVar5)
					{
						if (!BitTest(Local_94[bLocal_98 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(bLocal_98, iVar7);
					if (__LIB_0__::func_156(iVar7, 1, 1))
					{
						bVar0 = false;
						bVar0 = false;
						while (bVar0 < 4)
						{
							if (Local_91.f_17[bVar0] == __LIB_0__::func_162())
							{
								if (BitTest(Local_94[bLocal_98 /*18*/].f_2, (0 + bVar0)))
								{
									Local_91.f_17[bVar0] = iVar7;
								}
							}
							else if (Local_91.f_17[bVar0] == iVar7 && Local_91.f_241 == 0)
							{
								if (!BitTest(Local_94[bLocal_98 /*18*/].f_2, (0 + bVar0)))
								{
									Local_91.f_17[bVar0] = __LIB_0__::func_162();
								}
							}
							bVar0++;
						}
					}
				}
			}
			bLocal_98++;
		}
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_91.f_13, bVar0))
		{
			if (iLocal_107[bVar0] == func_130() && func_123(bVar0))
			{
				MISC::SET_BIT(&(Local_91.f_13), bVar0);
			}
			if (!BitTest(Local_91.f_14, bVar0))
			{
				if (iLocal_107[bVar0] >= 1 && func_123(bVar0))
				{
					MISC::SET_BIT(&(Local_91.f_14), bVar0);
				}
			}
			else if (iLocal_107[bVar0] == 0 || !func_123(bVar0))
			{
				if (BitTest(Local_91.f_14, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_91.f_14), bVar0);
					if (iLocal_107[bVar0] == 0)
					{
						if (Local_91.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
							{
								__LIB_1__::func_387(&(Local_91.f_7[bVar0]));
							}
						}
					}
				}
			}
			if (!BitTest(Local_91.f_15, bVar0) && func_123(bVar0))
			{
				if (iLocal_107[bVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_91.f_15), bVar0);
				}
			}
			else if (iLocal_107[bVar0] <= 1 || !func_123(bVar0))
			{
				if (BitTest(Local_91.f_15, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_91.f_15), bVar0);
				}
			}
		}
		else if (iLocal_107[bVar0] < func_130() || !func_123(bVar0))
		{
			MISC::CLEAR_BIT(&(Local_91.f_13), bVar0);
		}
		if (Local_91.f_266[bVar0] != iLocal_107[bVar0])
		{
			Local_91.f_266[bVar0] = iLocal_107[bVar0];
			if (Local_91.f_241 == 1)
			{
				if (Local_91.f_266[bVar0] == 0)
				{
					if (!BitTest(Local_91.f_616, bVar0))
					{
						MISC::SET_BIT(&(Local_91.f_616), bVar0);
					}
				}
			}
		}
		if (Local_91.f_241 == 0)
		{
			if (func_768())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
					if (iLocal_107[bVar0] >= func_129(iVar3) && func_123(bVar0))
					{
						iLocal_108[bVar0] = 1;
					}
				}
			}
		}
		if (Local_91.f_241 == 1)
		{
			if (Local_91.f_256[bVar0] != iLocal_93[bVar0])
			{
				if (iLocal_93[bVar0] >= 0)
				{
					if (iLocal_93[bVar0] > Local_91.f_256[bVar0])
					{
						Local_91.f_256[bVar0] = iLocal_93[bVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_91.f_256[bVar0] - iLocal_93[bVar0]);
						if (Local_91.f_261[bVar0] != iVar8)
						{
							Local_91.f_261[bVar0] = iVar8;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!BitTest(Local_91.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_91.f_3), 11);
		}
	}
	bVar0 = false;
	iVar9 = 0;
	if (Local_91.f_241 == 0)
	{
		if (func_768())
		{
			bVar0 = false;
			while (bVar0 < 4)
			{
				if (iLocal_108[bVar0])
				{
					iVar9++;
				}
				bVar0++;
			}
			if (!BitTest(Local_91.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_91.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_91.f_3), 9);
			}
		}
	}
	if (Local_91.f_241 == 0)
	{
		if (!__LIB_0__::func_864(&(Local_91.f_360)))
		{
			__LIB_0__::func_795(&(Local_91.f_360), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_91.f_360), 5000, 0))
		{
			if (!BitTest(Local_91.f_3, 14))
			{
				if (func_768())
				{
					if (Local_91.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_91.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_91.f_3), 14);
					}
				}
				else if (Local_91.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_91.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_91.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_91.f_614)
	{
		Local_91.f_614 = iVar1;
	}
	else
	{
		Local_91.f_613 = (Local_91.f_614 - iVar1);
	}
	if (iVar2 > Local_91.f_615)
	{
		Local_91.f_615 = iVar2;
	}
}

int func_129(int iParam0)//Position - 0xA3B0
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		case joaat("hydra"):
			return 1;
		case joaat("savage"):
			return 1;
		case joaat("valkyrie"):
			return 2;
		case joaat("buzzard"):
			return 1;
		default:
	}
	return 99;
}

int func_130()//Position - 0xA3F3
{
	return Local_91.f_28;
}

void func_131(bool bParam0, int iParam1)//Position - 0xA3FF
{
	bool bVar0;
	int iVar1;
	if (!BitTest(Local_91.f_16, bParam0))
	{
		if (BitTest(Local_94[bParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 1);
			MISC::SET_BIT(&(Local_91.f_16), bParam0);
		}
		else if (Local_91.f_241 >= 1)
		{
			if (Local_94[bParam0 /*18*/].f_1 == 0)
			{
				func_132(iParam1, 1);
				MISC::SET_BIT(&(Local_91.f_16), bParam0);
			}
			else if (Local_94[bParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar1]))
					{
						if (__LIB_0__::func_939(Local_91.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), false))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(iParam1, 1);
					MISC::SET_BIT(&(Local_91.f_16), bParam0);
				}
			}
		}
	}
	else if (Local_91.f_241 < 1)
	{
		if (!BitTest(Local_94[bParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 0);
			MISC::CLEAR_BIT(&(Local_91.f_16), bParam0);
		}
	}
}

void func_132(int iParam0, bool bParam1)//Position - 0xA4FB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, bool bParam1)//Position - 0xA538
{
	if (!BitTest(Local_91.f_272[__LIB_13__::func_437(bParam1)], __LIB_18__::func_410(bParam1)))
	{
		if (BitTest(Local_94[iParam0 /*18*/].f_3[__LIB_13__::func_437(bParam1)], __LIB_18__::func_410(bParam1)))
		{
			MISC::SET_BIT(&(Local_91.f_272[__LIB_13__::func_437(bParam1)]), __LIB_18__::func_410(bParam1));
			if (Local_94[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bParam1]))
			{
				if (!__LIB_0__::func_951(Local_91.f_48[bParam1]))
				{
					if (!func_94(bParam1))
					{
						MISC::CLEAR_BIT(&(Local_91.f_272[__LIB_13__::func_437(bParam1)]), __LIB_18__::func_410(bParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bParam1]), false))
					{
						if (bParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_91.f_272[__LIB_13__::func_437(bParam1)]), __LIB_18__::func_410(bParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, bool bParam1)//Position - 0xA610
{
	if (!BitTest(Local_91.f_271, bParam1))
	{
		if (BitTest(Local_94[iParam0 /*18*/].f_6, bParam1))
		{
			MISC::SET_BIT(&(Local_91.f_271), bParam1);
			if (Local_94[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (BitTest(Local_91.f_303, bParam1))
			{
				if (!BitTest(Local_91.f_253, bParam1))
				{
					Local_91.f_251 = (Local_91.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_91.f_252 > 0)
						{
							Local_91.f_302++;
							func_97(bParam1, __LIB_1__::func_26(1));
						}
					}
					MISC::SET_BIT(&(Local_91.f_253), bParam1);
				}
				if (__LIB_0__::func_864(&(Local_91.f_336[bParam1 /*2*/])))
				{
					__LIB_0__::func_794(&(Local_91.f_336[bParam1 /*2*/]));
				}
				__LIB_1__::func_387(&(Local_91.f_73[bParam1]));
				MISC::CLEAR_BIT(&(Local_91.f_303), bParam1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1, int iParam2)//Position - 0xA6D3
{
	int iVar0;
	int iVar1;
	if (BitTest(Local_94[iParam0 /*18*/].f_1, bParam1))
	{
		iLocal_107[bParam1]++;
		if (iLocal_93[bParam1] < 0)
		{
			if (Local_94[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_91.f_261[bParam1] > 0)
				{
					iLocal_93[bParam1] = Local_91.f_261[bParam1];
				}
				else
				{
					iLocal_93[bParam1] = 0;
				}
			}
		}
		iLocal_93[bParam1] = (iLocal_93[bParam1] + Local_94[iParam0 /*18*/].f_8);
		if (Local_91.f_241 >= 1)
		{
			if (Local_91.f_22[bParam1] == __LIB_0__::func_162())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bParam1]))
				{
					if (__LIB_0__::func_939(Local_91.f_7[bParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[bParam1]), -1, false);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_91.f_22[bParam1] = iParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_91.f_319, bParam1))
		{
			if (Local_94[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_91.f_319), bParam1);
				__LIB_0__::func_795(&(Local_91.f_349[bParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_91.f_22[bParam1] != __LIB_0__::func_162())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_91.f_22[bParam1]))
		{
			iVar0 = func_136(bParam1, 1);
			if (iVar0 != __LIB_0__::func_162())
			{
				Local_91.f_22[bParam1] = iVar0;
			}
			else
			{
				Local_91.f_22[bParam1] = __LIB_0__::func_162();
			}
		}
		else if (__LIB_0__::func_361(Local_91.f_22[bParam1], 0))
		{
			Local_91.f_22[bParam1] = __LIB_0__::func_162();
			func_115();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_91.f_22[bParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (__LIB_0__::func_939(Local_91.f_7[bParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_91.f_7[bParam1]), false))
					{
						iVar0 = func_136(bParam1, 1);
						if (iVar0 != __LIB_0__::func_162())
						{
							Local_91.f_22[bParam1] = iVar0;
						}
						else
						{
							Local_91.f_22[bParam1] = __LIB_0__::func_162();
						}
					}
				}
			}
		}
	}
}

int func_136(bool bParam0, bool bParam1)//Position - 0xA8D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_162();
	if (bParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == __LIB_0__::func_162())
				{
					if (Local_94[iVar3 /*18*/].f_17 == 1)
					{
						if (BitTest(Local_94[iVar3 /*18*/].f_1, bParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (__LIB_0__::func_939(Local_91.f_7[bParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)//Position - 0xA98F
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1257646007;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_0__::func_943(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_141()//Position - 0xB40C
{
	func_112();
	if (__LIB_0__::func_799(Local_91.f_27))
	{
		if (func_142())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_91.f_27);
			return 1;
		}
	}
	return 0;
}

int func_142()//Position - 0xB438
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bVar0 = false;
	while (bVar0 < Local_91.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar0]))
		{
			if (__LIB_0__::func_799(Local_91.f_27))
			{
				if (!BitTest(Local_91.f_244, bVar0))
				{
					MISC::CLEAR_AREA(Local_91.f_30[bVar0 /*3*/], 5f, true, false, false, true);
					MISC::SET_BIT(&(Local_91.f_244), bVar0);
				}
				if (__LIB_0__::func_957(&(Local_91.f_7[bVar0]), Local_91.f_27, Local_91.f_30[bVar0 /*3*/], Local_91.f_43[bVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_91.f_7[bVar0]), true, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 1);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
						{
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
							VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					if (Local_91.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, iLocal_104);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, Global_1837161[iVar3]);
						iVar3++;
					}
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false, false);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
					VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 0);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < Local_91.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar0]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var func_143()//Position - 0xB8A4
{
	if (func_768())
	{
		return Global_262145.f_11840 /* Tunable: COMPETITIVE_KILL_LIST_VEHICLE_HEALTH_TANK */;
	}
	return Global_262145.f_11579 /* Tunable: KILL_LIST_VEHICLE_HEALTH_TANK */;
}

var func_144()//Position - 0xB8C7
{
	if (func_768())
	{
		return Global_262145.f_11841 /* Tunable: COMPETITIVE_KILL_LIST_VEHICLE_HEALTH_PLANE */;
	}
	return Global_262145.f_11580 /* Tunable: KILL_LIST_VEHICLE_HEALTH_PLANE */;
}

var func_145()//Position - 0xB8EA
{
	if (func_768())
	{
		return Global_262145.f_11839 /* Tunable: COMPETITIVE_KILL_LIST_VEHICLE_HEALTH_HELI */;
	}
	return Global_262145.f_11578 /* Tunable: KILL_LIST_VEHICLE_HEALTH_HELI */;
}

int func_146()//Position - 0xB90D
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_864(&(Local_91.f_362)))
	{
		__LIB_0__::func_795(&(Local_91.f_362), 0, 0);
		return 0;
	}
	else if (!__LIB_0__::func_937(&(Local_91.f_362), 3000, 0))
	{
		return 0;
	}
	if (!BitTest(Local_91.f_3, 10))
	{
		if (func_160(&iVar0))
		{
			if (iVar0 < func_159())
			{
				MISC::SET_BIT(&(Local_91.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11834 /* Tunable: COMPETITIVE_KILL_LIST_WEIGHTHING_SUB_TYPE */) && !Global_262145.f_11832 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE */) || Global_262145.f_11833 /* Tunable: KILL_LIST_DISABLE */)
				{
					MISC::SET_BIT(&(Local_91.f_3), 8);
					MISC::SET_BIT(&(Local_91.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_91.f_3), 10);
				}
			}
		}
	}
	if (BitTest(Local_91.f_3, 10))
	{
		if (Local_91.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!BitTest(Local_91.f_3, 13))
		{
			if (func_155())
			{
				if (!__LIB_3__::func_193(129, Local_91.f_1, Local_91.f_2, 0))
				{
					if (func_147())
					{
						MISC::SET_BIT(&(Local_91.f_3), 13);
					}
					else
					{
						Local_91.f_29 = -1;
					}
				}
				else
				{
					Local_91.f_29 = -1;
				}
			}
		}
	}
	return BitTest(Local_91.f_3, 13);
}

int func_147()//Position - 0xBA36
{
	int iVar0;
	int iVar1;
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_148(Local_91.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!__LIB_43__::func_400(Local_91.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_148(struct<3> Param0, float fParam1)//Position - 0xBAB0
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	if (Global_2687660.f_372.f_225 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_2687660.f_372[iVar2 /*7*/] != -1)
		{
			iVar0[iVar1] = MISC::GET_HASH_KEY(&(Global_2687660.f_372[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_2687660.f_372.f_225)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	Var4 = { 0f, 0f, 0f };
	Var5 = { Param0 };
	iVar6 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar2 /*26*/].f_12, 11))
		{
			Var4 = { Global_2621865[iVar2 /*26*/].f_3 };
			Var5.f_2 = Var4.f_2;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var5, true) < fParam1)
			{
				Var7 = { Global_2621865[iVar2 /*26*/].f_15 };
				iVar8 = __LIB_18__::func_423(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_155()//Position - 0xBFF1
{
	if (func_157(&(Local_91.f_27)))
	{
		if (Local_91.f_4)
		{
			__LIB_1__::func_950();
		}
		func_40();
		return 1;
	}
	return 0;
}

int func_157(var uParam0)//Position - 0xC126
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_158(joaat("rhino")))
			{
				Local_91.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		case 1:
			if (!func_158(joaat("hydra")))
			{
				Local_91.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_91.f_4 = 1;
				return 1;
			}
			break;
		case 2:
			if (!func_158(joaat("savage")))
			{
				Local_91.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_91.f_4 = 1;
				return 1;
			}
			break;
		case 3:
			if (!func_158(joaat("valkyrie")))
			{
				Local_91.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		case 4:
			if (!func_158(joaat("buzzard")))
			{
				Local_91.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0xC20B
{
	if (!func_768())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11568 /* Tunable: KILL_LIST_DISABLE_CAR_RHINO */;
				break;
			case joaat("hydra"):
				return Global_262145.f_11570 /* Tunable: KILL_LIST_DISABLE_HELI_HYDRA */;
				break;
			case joaat("savage"):
				return Global_262145.f_11569 /* Tunable: KILL_LIST_DISABLE_HELI_SAVAGE */;
				break;
			case joaat("buzzard"):
				return Global_262145.f_11572 /* Tunable: KILL_LIST_DISABLE_HELI_BUZZARD */;
				break;
			case joaat("valkyrie"):
				return Global_262145.f_11571 /* Tunable: KILL_LIST_DISABLE_HELI_VALKYRIE */;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11848 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_CAR_RHINO */;
				break;
			case joaat("hydra"):
				return Global_262145.f_11850 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_HYDRA */;
				break;
			case joaat("savage"):
				return Global_262145.f_11849 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_SAVAGE */;
				break;
			case joaat("buzzard"):
				return Global_262145.f_11852 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_BUZZARD */;
				break;
			case joaat("valkyrie"):
				return Global_262145.f_11851 /* Tunable: COMPETITIVE_KILL_LIST_DISABLE_HELI_VALKYRIE */;
				break;
			}
	}
	return 0;
}

int func_159()//Position - 0xC2EB
{
	return Global_262145.f_11582 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPANTS_LAUNCH */;
}

int func_160(var uParam0)//Position - 0xC2FA
{
	int iVar0;
	if (!__LIB_0__::func_864(&(Local_91.f_334)))
	{
		__LIB_0__::func_795(&(Local_91.f_334), 0, 0);
	}
	else if (__LIB_0__::func_937(&(Local_91.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!__LIB_0__::func_361(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!BitTest(Local_94[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_163()//Position - 0xC3C6
{
	struct<3> Var0;
	if (iLocal_580 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_580]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[iLocal_580]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iLocal_580]), false) };
				if (Var0.f_2 < -25f)
				{
					__LIB_1__::func_387(&(Local_91.f_7[iLocal_580]));
				}
			}
		}
	}
	iLocal_580++;
	if (iLocal_580 >= 4)
	{
		iLocal_580 = 0;
	}
}

void func_164()//Position - 0xC438
{
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!BitTest(uLocal_96, 13))
		{
			MISC::SET_BIT(&uLocal_96, 13);
			NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
		}
	}
	else if (BitTest(uLocal_96, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				MISC::CLEAR_BIT(&uLocal_96, 13);
			}
		}
	}
}

void func_165()//Position - 0xC4AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (__LIB_20__::func_28())
	{
		func_278(0);
	}
	iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775;
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != __LIB_0__::func_162())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_94[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_200();
						func_197(iVar2);
						break;
					case 1:
						func_196();
						func_170();
						func_166(1);
						break;
					case 2:
						func_166(0);
						break;
					}
				}
			}
	}
}

void func_166(bool bParam0)//Position - 0xC56A
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (bParam0)
		{
			__LIB_2__::func_848(Local_91.f_48[bVar0], &(Local_103[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
		}
		else
		{
			__LIB_2__::func_848(Local_91.f_48[bVar0], &(Local_103[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0);
		}
		if (HUD::DOES_BLIP_EXIST(Local_103[bVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_103[bVar0 /*8*/], "UW_BLIP2" /* GXT: Merryweather */);
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_103[bVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_103[bVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_103[bVar0 /*8*/].f_1, "UW_BLIP2" /* GXT: Merryweather */);
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_103[bVar0 /*8*/].f_1, true);
			}
		}
		if (Local_91.f_27 != joaat("hydra"))
		{
			if (BitTest(Local_91.f_272[__LIB_13__::func_437(bVar0)], __LIB_18__::func_410(bVar0)) || BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar0)], __LIB_18__::func_410(bVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar0]))
				{
					__LIB_0__::func_621(&(Local_103[bVar0 /*8*/]));
				}
			}
		}
		else if ((bVar0 % 4) == 0)
		{
			iVar1 = (bVar0 / 4);
			if (BitTest(Local_91.f_271, iVar1) || BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar0]))
				{
					__LIB_0__::func_621(&(Local_103[bVar0 /*8*/]));
				}
			}
		}
		bVar0++;
	}
}

void func_170()//Position - 0xC956
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	iVar2 = (func_34() - __LIB_1__::func_724(&(Local_91.f_332), 0, 0));
	if (iLocal_558 == 0)
	{
		if (BitTest(uLocal_95, 26))
		{
			if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
			{
				iLocal_558 = (func_34() - __LIB_1__::func_724(&(Local_91.f_332), 0, 0));
				iVar2 = iLocal_558;
			}
		}
	}
	else
	{
		iVar2 = iLocal_558;
	}
	if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_768())
	{
		iVar0 = (((Local_91.f_256[0] + Local_91.f_256[1]) + Local_91.f_256[2]) + Local_91.f_256[3]);
	}
	else
	{
		iVar0 = Local_91.f_256[0];
	}
	func_192(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_768())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_594[iVar1 /*4*/].f_2);
			if (iVar9 != __LIB_0__::func_162())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar9);
					iVar6[iVar1] = Local_91.f_594[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_91.f_594[iVar1 /*4*/];
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - __LIB_1__::func_724(&(Local_91.f_332), 0, 0)) >= 0)
		{
			if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
			{
				func_188(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, __LIB_2__::func_161(), iVar8);
			}
			else
			{
				func_186(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, __LIB_2__::func_161(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_91.f_255)
		{
			iVar0 = Local_91.f_255;
		}
		if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
		{
			func_185(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_91.f_255, iVar2, iVar3, 0, __LIB_2__::func_161());
		}
		else
		{
			func_171(iVar0, iVar0, Local_91.f_255, iVar2, iVar3, 0, __LIB_2__::func_161(), 1);
		}
		if (bVar5)
		{
			func_115();
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)//Position - 0xCC3C
{
	struct<8> Var0;
	char* sVar1;
	if (__LIB_35__::func_924(0) == 0)
	{
		return;
	}
	__LIB_1__::func_910();
	__LIB_1__::func_933();
	StringCopy(&Var0, "HUD_TEAM" /* GXT: TEAM */, 64);
	if (bParam5)
	{
		__LIB_2__::func_131(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	__LIB_3__::func_437(iParam1, iParam2, "UW_KLL" /* GXT: KILLS */, -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam6))
	{
		sVar1 = sParam6;
	}
	__LIB_1__::func_350(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_185(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xD34D
{
	char* sVar0;
	if (__LIB_35__::func_924(0) == 0)
	{
		return;
	}
	__LIB_1__::func_933();
	__LIB_1__::func_910();
	if (bParam6)
	{
		__LIB_2__::func_131(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS" /* GXT: ~1~ kills */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	__LIB_3__::func_437(iParam2, iParam3, "UW_KLL" /* GXT: KILLS */, -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam7))
	{
		sVar0 = sParam7;
	}
	__LIB_1__::func_350(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0xD3D7
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	if (__LIB_35__::func_924(0) == 0)
	{
		return;
	}
	__LIB_1__::func_910();
	__LIB_1__::func_933();
	if (iParam0 > -1)
	{
		Var0 = { func_187(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		__LIB_2__::func_131(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_187(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		__LIB_2__::func_131(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_187(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		__LIB_2__::func_131(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_187(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		__LIB_2__::func_131(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar5 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam10))
	{
		sVar5 = sParam10;
	}
	__LIB_1__::func_350(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_187(int iParam0)//Position - 0xD52C
{
	struct<16> Var0;
	StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_TEAM" /* GXT: TEAM */), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_188(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)//Position - 0xD551
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (__LIB_35__::func_924(0) == 0)
	{
		return;
	}
	__LIB_1__::func_910();
	__LIB_1__::func_933();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		__LIB_2__::func_131(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		__LIB_2__::func_131(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		__LIB_2__::func_131(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		__LIB_2__::func_131(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam14))
	{
		sVar4 = sParam14;
	}
	__LIB_1__::func_350(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

void func_192(int iParam0)//Position - 0xD854
{
	if (__LIB_2__::func_884(PLAYER::PLAYER_ID()) || __LIB_0__::func_888(PLAYER::PLAYER_ID()) == 146)
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

void func_196()//Position - 0xE133
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_102[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_102[iVar0]));
		}
		iVar0++;
	}
}

void func_197(int iParam0)//Position - 0xE166
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
			{
				if (!BitTest(Local_91.f_13, bVar0))
				{
					if (!BitTest(Local_94[iParam0 /*18*/].f_1, bVar0))
					{
						iLocal_102[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_102[bVar0], 429);
						__LIB_2__::func_53(&(iLocal_102[bVar0]), 29);
						if (func_768())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIPC" /* GXT: Kill List Competitive */);
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIP" /* GXT: Kill List */);
						}
						HUD::SET_BLIP_PRIORITY(iLocal_102[bVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
				}
			}
		}
		bVar0++;
	}
}

void func_200()//Position - 0xE4E6
{
	bool bVar0;
	bVar0 = func_270();
	if (bVar0)
	{
		if (Local_91.f_413 > -1)
		{
			if ((Local_91.f_413 - __LIB_1__::func_724(&(Local_91.f_326), 0, 0)) >= 0)
			{
				if (!func_204())
				{
					__LIB_1__::func_961((Local_91.f_413 - __LIB_1__::func_724(&(Local_91.f_326), 0, 0)));
					func_201((Local_91.f_413 - __LIB_1__::func_724(&(Local_91.f_326), 0, 0)), __LIB_1__::func_960(-1));
				}
			}
			else
			{
				if (!func_204())
				{
					func_201(0, __LIB_1__::func_960(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_91.f_3), 4);
				}
			}
		}
	}
}

void func_201(int iParam0, char* sParam1)//Position - 0xE573
{
	char* sVar0;
	if (__LIB_35__::func_924(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING" /* GXT: EVENT START */;
	if (!__LIB_1__::func_76(sParam1))
	{
		sVar0 = sParam1;
	}
	__LIB_1__::func_350(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

bool func_204()//Position - 0xE810
{
	bool bVar0;
	int iVar1;
	if (__LIB_3__::func_361(17))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_104(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_211(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					__LIB_12__::func_561(0, -1);
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1931426)
	{
		bVar0 = true;
	}
	if (__LIB_1__::func_431(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (__LIB_3__::func_491(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

int func_211(bool bParam0, bool bParam1, bool bParam2)//Position - 0xEA28
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
		if (__LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (__LIB_33__::func_173(PLAYER::PLAYER_ID()) == 3)
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
	if (__LIB_1__::func_431(PLAYER::PLAYER_ID()))
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
	if (!__LIB_3__::func_131(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_830(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

bool func_270()//Position - 0xF9EF
{
	bool bVar0;
	if (!func_768())
	{
		if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_768())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_91.f_15 != false;
			}
			else
			{
				bVar0 = Local_91.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_91.f_3, 9);
	}
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_204())
		{
			if (func_768())
			{
				if (!__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */))
				{
					__LIB_3__::func_198("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */, 0);
				}
			}
			else if (!__LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
			{
				__LIB_3__::func_198("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */, 0);
			}
		}
		else if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
		{
			__LIB_3__::func_0();
		}
	}
	return bVar0;
}

void func_278(bool bParam0)//Position - 0xFC9A
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	Var1 = { func_429() };
	bVar2 = false;
	if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_112[iVar0 /*42*/] = -1;
			Local_112[iVar0 /*42*/].f_1 = __LIB_0__::func_162();
			Local_112[iVar0 /*42*/].f_9 = 0;
			Local_112[iVar0 /*42*/].f_31 = -1;
			if (Local_91.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_112[iVar0 /*42*/].f_1 = Local_91.f_465[iVar0 /*4*/].f_2;
				Local_112[iVar0 /*42*/].f_9 = Local_91.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!__LIB_1__::func_999())
			{
				if (Local_113.f_103 != 129)
				{
					Local_113.f_103 = 129;
				}
				else
				{
					__LIB_12__::func_561(1, 129);
				}
			}
		}
		else if (Local_113.f_103 != 129)
		{
			Local_113.f_103 = 129;
		}
		func_283(&Local_112, &iLocal_111, 27, &Local_113, &uLocal_126, -1, 0, 0);
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_112[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_91.f_465[0 /*4*/].f_1 > 0)
				{
					__LIB_1__::func_937();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_112[iVar0 /*42*/] = -1;
			Local_112[iVar0 /*42*/].f_1 = __LIB_0__::func_162();
			Local_112[iVar0 /*42*/].f_9 = 0;
			Local_112[iVar0 /*42*/].f_31 = -1;
			Local_112[iVar0 /*42*/].f_39 = -1;
			if (Local_91.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_112[iVar0 /*42*/].f_39 = Local_91.f_465[iVar0 /*4*/] + 1;
				Local_112[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar0 /*4*/].f_2);
				Local_112[iVar0 /*42*/].f_40 = Local_91.f_465[iVar0 /*4*/].f_1;
				Local_112[iVar0 /*42*/].f_9 = Local_91.f_465[iVar0 /*4*/].f_1;
				Local_112[iVar0 /*42*/].f_2 = Local_91.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_279();
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_91.f_594[0 /*4*/] > 0)
			{
				if (Local_91.f_594[0 /*4*/] != Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_91.f_256[Local_91.f_594[0 /*4*/]] > 0)
					{
						__LIB_1__::func_937();
					}
				}
			}
		}
		func_283(&Local_112, &iLocal_111, 27, &Local_113, &uLocal_126, -1, 1, 0);
		if (bParam0)
		{
			if (!__LIB_1__::func_999())
			{
				if (Local_113.f_103 != 129)
				{
					Local_113.f_103 = 129;
				}
				else
				{
					__LIB_12__::func_561(1, 129);
				}
			}
		}
		else if (Local_113.f_103 != 129)
		{
			Local_113.f_103 = 129;
		}
	}
}

void func_279()//Position - 0xFF21
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	uLocal_586[0] = Local_91.f_594[0 /*4*/];
	uLocal_586[1] = Local_91.f_594[1 /*4*/];
	uLocal_586[2] = Local_91.f_594[2 /*4*/];
	uLocal_586[3] = Local_91.f_594[3 /*4*/];
	iVar3 = Local_91.f_594[0 /*4*/];
	iVar4 = Local_91.f_594[1 /*4*/];
	iVar5 = Local_91.f_594[2 /*4*/];
	iVar6 = Local_91.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_91.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_91.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_91.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_91.f_266[iVar6];
	}
	uLocal_587[0] = uVar7;
	uLocal_587[1] = uVar8;
	uLocal_587[2] = uVar9;
	uLocal_587[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_281(uLocal_586[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_112[iVar2 /*42*/].f_9 = Local_91.f_594[iVar0 /*4*/].f_1;
		}
		func_280(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_587[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_280(int iParam0, int iParam1)//Position - 0x10058
{
	struct<42> Var0;
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_112[iParam1 /*42*/] };
	Local_112[iParam1 /*42*/] = { Local_112[iParam0 /*42*/] };
	Local_112[iParam0 /*42*/] = { Var0 };
}

int func_281(int iParam0, int iParam1)//Position - 0x100A6
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_112[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_283(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x100F8
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
	if (func_427(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_20__::func_116() || iParam2 == 28)
	{
		if (__LIB_20__::func_30(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_20__::func_28(), sParam7))
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
								if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_0__::func_361(bVar4, 0))
									{
										if (__LIB_19__::func_931(bVar4) || __LIB_12__::func_485(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_796(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_20__::func_23(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
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
							if (__LIB_12__::func_490())
							{
								if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
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
								bVar4 = (iParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_935(bVar4) && __LIB_20__::func_22(bVar4, iParam2, bVar3)) && __LIB_0__::func_156(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_20__::func_21(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_19__::func_941(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((iParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (iParam0[iVar18 /*42*/])->f_22;
								}
								if ((iParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (iParam0[iVar18 /*42*/])->f_31;
								}
								if ((iParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (iParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (iParam0[iVar18 /*42*/])->f_9;
								if (((iParam0[iVar18 /*42*/])->f_9 != -1 || (iParam0[iVar18 /*42*/])->f_22 != -1f) || (iParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_12__::func_490())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_2__::func_773(&iVar9, &fVar11, (iParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_983(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (iParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_20__::func_88(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_12__::func_486(bVar4, 1) && iVar1[bVar10] != -1)
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
								if ((iParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (iParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_982(iParam5))
								{
									__LIB_20__::func_523(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (iParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_20__::func_523(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (iParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_0__::func_156(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_162();
							}
							if (__LIB_19__::func_935(bVar4))
							{
								if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_20__::func_21(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_19__::func_941(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_20__::func_88(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_12__::func_486(bVar4, 1))
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
									__LIB_20__::func_531(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__::func_929(uParam3, iParam1, iParam2);
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
						if (__LIB_19__::func_928(uParam3))
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

int func_427(int iParam0)//Position - 0x13B7D
{
	if (iParam0 == 28)
	{
		if ((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_0__::func_428(PLAYER::PLAYER_ID())) && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (__LIB_33__::func_173(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_429()//Position - 0x13BF8
{
	struct<4> Var0;
	switch (Local_91.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN" /* GXT: RHINO */, 16);
			break;
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD" /* GXT: HYDRA */, 16);
			break;
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV" /* GXT: SAVAGE */, 16);
			break;
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK" /* GXT: VALKYRIE */, 16);
			break;
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ" /* GXT: BUZZARD */, 16);
			break;
	}
	return Var0;
}

void func_432()//Position - 0x13CA0
{
	struct<2> Var0;
	bool bVar1;
	var uVar2;
	int iVar3;
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_91.f_241 == 0)
				{
					func_773();
				}
			}
			if (!BitTest(uLocal_95, 22))
			{
				if (Local_91.f_27 == joaat("rhino") && Local_91.f_29 == 2)
				{
					__LIB_3__::func_359(Local_91.f_30[0 /*3*/], 1120403456);
					MISC::SET_BIT(&uLocal_95, 22);
				}
				else if (!__LIB_0__::func_78(Local_91.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					__LIB_3__::func_359(Local_91.f_30[0 /*3*/], 1120403456);
					MISC::SET_BIT(&uLocal_95, 22);
				}
			}
			func_741();
			func_735();
			if (Local_91.f_241 == 0)
			{
				func_732(1);
			}
			__LIB_15__::func_295(0);
			if (Local_91.f_241 == 0)
			{
				if (!Local_91.f_27 == joaat("hydra") && !Local_91.f_27 == joaat("rhino"))
				{
					func_200();
				}
				else if (func_768())
				{
					func_200();
				}
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!BitTest(uLocal_96, 1))
					{
						__LIB_1__::func_956(129);
						func_703(1);
						MISC::SET_BIT(&uLocal_96, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_91.f_28 > 1 || (Local_91.f_28 == 1 && func_112() > 1))
						{
							if (BitTest(Local_91.f_3, 4))
							{
								Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (BitTest(uLocal_96, 1))
				{
					MISC::CLEAR_BIT(&uLocal_96, 1);
					__LIB_2__::func_445(1);
					__LIB_2__::func_30();
					func_703(0);
				}
			}
			if (Local_91.f_241 == 1)
			{
				func_700(&bVar1, &uVar2);
				iLocal_552 = bVar1;
				func_699(0);
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_698())
					{
						MISC::SET_BIT(&uLocal_96, 19);
					}
					if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
					{
						__LIB_3__::func_0();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					if ((__LIB_0__::func_1("UW_MINV" /* GXT: Players are required in at least two Kill List Competitive vehicles before the mode will start. */) || __LIB_0__::func_1("UW_TIMELA" /* GXT: Kill List Competitive will start when all the vehicles are full or when the time expires. */)) || __LIB_0__::func_1("UW_TIMEL" /* GXT: Kill List will start when the vehicle is full or when the time expires. */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_196();
					func_686(129, 0f, 0f, 1, 1, 1, 0);
					func_675(1);
					func_674();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_100 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					__LIB_3__::func_157(1);
					func_672(1);
					if (Local_91.f_27 != joaat("rhino"))
					{
						__LIB_35__::func_788(1);
					}
					iLocal_106 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_104);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					__LIB_1__::func_963(0);
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_552;
					if (!func_768())
					{
						__LIB_32__::func_266(63, "UW_TITLE" /* GXT: KILL LIST */, "UW_DESC" /* GXT: Destroy the Merryweather patrols */, __LIB_1__::func_259(), -1, __LIB_1__::func_259(), 1, 0);
					}
					else if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
					{
						__LIB_32__::func_266(63, "UW_TITLEC" /* GXT: KILL LIST COMPETITIVE */, "UW_DESCC" /* GXT: Take out the most Merryweather patrols to win */, __LIB_1__::func_259(), -1, __LIB_1__::func_259(), 1, 0);
					}
					else
					{
						bVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, bVar1, 16);
						__LIB_32__::func_265(63, &Var0, "UW_DESCCT" /* GXT: Take out the most Merryweather patrols to win. You are on ~a~. */, "UW_TITLE" /* GXT: KILL LIST */, 15000, -1, -1082130432, "", __LIB_1__::func_259(), __LIB_1__::func_259(), 0);
					}
					Local_92.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					__LIB_1__::func_963(0);
					__LIB_2__::func_822(3, 0, 1);
					__LIB_0__::func_795(&uLocal_566, 0, 0);
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_196();
					if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
					{
						__LIB_3__::func_0();
					}
					if (__LIB_3__::func_442("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1)) || __LIB_3__::func_442("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1)))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					__LIB_1__::func_963(0);
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_643())
					{
					}
				}
			}
			else if (Local_91.f_241 == 3)
			{
				__LIB_1__::func_963(0);
				if (__LIB_3__::func_442("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1)) || __LIB_3__::func_442("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1)))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!__LIB_37__::func_81())
				{
				}
				if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
				{
					__LIB_3__::func_0();
				}
				func_196();
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_91.f_241 > 3)
			{
				if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
				{
					__LIB_3__::func_0();
				}
				__LIB_1__::func_963(0);
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					__LIB_12__::func_505();
					__LIB_12__::func_504();
					if (func_122())
					{
						func_674();
					}
				}
				if (func_768())
				{
					if (__LIB_42__::func_980(2, 0, 1, 0, 0))
					{
						if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
						{
							__LIB_3__::func_0();
						}
						__LIB_1__::func_963(0);
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_91.f_27 == joaat("valkyrie"))
				{
					if (__LIB_42__::func_980(2, 0, 1, 0, 0))
					{
						if (__LIB_3__::func_417("UW_ABTSC" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List Competitive ~s~is about to start. */) || __LIB_3__::func_417("UW_ABTS" /* GXT: ~HUD_COLOUR_NET_PLAYER2~Kill List ~s~is about to start. */))
						{
							__LIB_3__::func_0();
						}
						__LIB_1__::func_963(0);
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		case 1:
			func_166(1);
			func_735();
			func_558();
			func_170();
			func_556();
			func_544();
			func_278(0);
			func_540();
			func_537();
			__LIB_12__::func_505();
			__LIB_12__::func_504();
			if (!BitTest(uLocal_95, 26))
			{
				if (!__LIB_1__::func_962(55))
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_768())
								{
									if (!__LIB_3__::func_417("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
									{
										__LIB_3__::func_198("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */, 0);
									}
								}
								else if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									if (!__LIB_3__::func_417("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
									{
										__LIB_3__::func_198("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */, 0);
									}
								}
								else if (!__LIB_3__::func_417("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
								{
									func_700(&bVar1, &uVar2);
									bVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, bVar1, 16);
									__LIB_3__::func_198("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */, 0);
								}
							}
							else if (__LIB_3__::func_417("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
							{
								__LIB_3__::func_0();
							}
						}
					}
				}
			}
			func_535();
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_674();
				}
			}
			if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				__LIB_3__::func_0();
				MISC::SET_BIT(&uLocal_95, 21);
			}
			else if (__LIB_0__::func_983())
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				__LIB_3__::func_0();
			}
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_534())
				{
					MISC::SET_BIT(&uLocal_95, 23);
					__LIB_3__::func_0();
					if (iLocal_552 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
						{
							__LIB_1__::func_387(&(Local_91.f_7[iLocal_552]));
						}
					}
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_91.f_241 == 3)
			{
				__LIB_2__::func_445(1);
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_91.f_241 > 3)
			{
				__LIB_2__::func_445(1);
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_768())
			{
				if (__LIB_42__::func_980(2, 0, 1, 0, 0))
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		case 2:
			if (Local_91.f_241 == 3)
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_91.f_241 > 3)
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_467();
			if (__LIB_37__::func_81())
			{
				if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (BitTest(uLocal_95, 22))
						{
							__LIB_3__::func_351();
							MISC::CLEAR_BIT(&uLocal_95, 22);
						}
						__LIB_2__::func_30();
						__LIB_2__::func_150();
						__LIB_2__::func_135(0);
						__LIB_2__::func_57(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_703(0);
						__LIB_2__::func_445(1);
					}
					func_458();
				}
			}
			else if (!BitTest(uLocal_96, 8))
			{
				MISC::SET_BIT(&uLocal_96, 8);
			}
			if (!func_204())
			{
				func_457();
				func_556();
				func_166(0);
				func_544();
				func_278(1);
				func_540();
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_456();
			}
			func_449();
			func_448();
			func_558();
			if (!BitTest(uLocal_96, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar3]))
					{
						if (!__LIB_0__::func_951(Local_91.f_48[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_48[iVar3]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_80[iVar3]))
					{
						if (!__LIB_0__::func_951(Local_91.f_80[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_91.f_80[iVar3]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&uLocal_96, 7);
			}
			else if (Local_91.f_247 != iLocal_550)
			{
				iLocal_550 = Local_91.f_247;
				MISC::CLEAR_BIT(&uLocal_96, 7);
			}
			if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_104)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_106);
			}
			break;
		case 3:
			if (!BitTest(uLocal_95, 31))
			{
				if (BitTest(Local_91.f_3, 12))
				{
					func_196();
					MISC::SET_BIT(&uLocal_95, 31);
				}
			}
			func_535();
			func_443();
			if (!func_204())
			{
				if (!BitTest(Local_91.f_3, 14) && !BitTest(Local_91.f_3, 12))
				{
					func_278(1);
				}
				func_544();
				func_556();
				func_540();
				func_434();
			}
			func_467();
			func_448();
			func_558();
			if (Local_91.f_241 > 3)
			{
				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		case 4:
			func_811();
			break;
	}
	func_433();
}

void func_433()//Position - 0x14700
{
	bool bVar0;
	if (iLocal_577 != Local_91.f_616)
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (BitTest(Local_91.f_616, bVar0))
			{
				if (!BitTest(iLocal_577, bVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[bVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 2);
							__LIB_1__::func_387(&(Local_91.f_7[bVar0]));
							MISC::SET_BIT(&iLocal_577, bVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_577, bVar0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_434()//Position - 0x1478A
{
	if (BitTest(Local_91.f_3, 14))
	{
		if (!BitTest(uLocal_96, 5))
		{
			if (__LIB_3__::func_446(0, 1, 1, 1))
			{
				if (func_768())
				{
					__LIB_1__::func_707("UW_TFEWC" /* GXT: Kill List Competitive is no longer available as there aren't enough valid players. */, 30000);
				}
				else
				{
					__LIB_1__::func_707("UW_TFEW" /* GXT: Kill List is no longer available as there aren't enough valid players. */, 30000);
				}
				__LIB_1__::func_752(1);
				MISC::SET_BIT(&uLocal_96, 5);
			}
		}
	}
}

void func_443()//Position - 0x1498D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
	{
		__LIB_3__::func_0();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!BitTest(uLocal_95, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[iVar2]), false))
				{
					MISC::SET_BIT(&uLocal_95, (27 + iVar2));
					iLocal_553[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_553[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_91.f_7[iVar2]), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_553[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_768())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[0]))
		{
			if (!BitTest(Local_91.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[0]), false))
				{
					if ((func_447() - __LIB_1__::func_724(&(Local_91.f_324), 0, 0)) >= 0)
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_204())
								{
									__LIB_3__::func_238();
									__LIB_1__::func_350((func_447() - __LIB_1__::func_724(&(Local_91.f_324), 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_204())
								{
									__LIB_3__::func_238();
									__LIB_1__::func_350(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							__LIB_2__::func_445(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[0]), true, false, -1);
								__LIB_1__::func_387(&(Local_91.f_7[0]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_91.f_7[0]), true, false, 0);
								__LIB_1__::func_387(&(Local_91.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_196();
		if (!func_204())
		{
			if (!BitTest(uLocal_95, 12))
			{
				if (__LIB_0__::func_939(Local_91.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[0])))
						{
							if (!func_768())
							{
								if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */))
								{
									__LIB_3__::func_198("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */, 0);
								}
							}
							else if (!__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
							{
								__LIB_3__::func_198("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */, 0);
							}
							MISC::SET_BIT(&uLocal_95, 12);
						}
					}
				}
			}
			else if (__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || __LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_3__::func_0();
					}
				}
			}
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar0]))
			{
				if (!BitTest(Local_91.f_319, bVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false))
					{
						if ((func_447() - __LIB_1__::func_724(&(Local_91.f_324), 0, 0)) >= 0)
						{
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											__LIB_3__::func_238();
											__LIB_1__::func_350((func_447() - __LIB_1__::func_724(&(Local_91.f_324), 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_91.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											__LIB_3__::func_238();
											__LIB_1__::func_350(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								__LIB_2__::func_445(1);
							}
							if (__LIB_15__::func_446(Local_91.f_7[bVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[bVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true, false, -1);
										__LIB_1__::func_387(&(Local_91.f_7[bVar0]));
									}
									else
									{
										NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), true, false, 0);
										__LIB_1__::func_387(&(Local_91.f_7[bVar0]));
									}
								}
							}
						}
					}
				}
				if (!BitTest(uLocal_95, 12))
				{
					if (__LIB_0__::func_939(Local_91.f_7[bVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar0])))
							{
								if (!func_204())
								{
									if (!func_768())
									{
										if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */))
										{
											__LIB_3__::func_198("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */, 0);
										}
									}
									else if (!__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
									{
										__LIB_3__::func_198("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */, 0);
									}
									MISC::SET_BIT(&uLocal_95, 12);
								}
							}
						}
					}
				}
				else if (__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || __LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							__LIB_3__::func_0();
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_447()//Position - 0x14FE5
{
	if (func_768())
	{
		return Global_262145.f_11847 /* Tunable: COMPETITIVE_KILL_LIST_DETONATION_TIME */;
	}
	return Global_262145.f_11567 /* Tunable: KILL_LIST_DETONATION_TIME */;
}

void func_448()//Position - 0x15008
{
	if (!BitTest(uLocal_96, 4))
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_2__::func_445(1);
					MISC::SET_BIT(&uLocal_96, 4);
				}
			}
		}
	}
}

void func_449()//Position - 0x1504E
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_99);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (iLocal_99 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!BitTest(uLocal_578, iLocal_99))
				{
					if (!func_204())
					{
						if (Local_94[iLocal_99 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&uLocal_578, iLocal_99);
							__LIB_12__::func_554(bVar1, 55, 1, 0);
						}
					}
				}
				else if (func_204())
				{
					__LIB_12__::func_554(bVar1, 55, 0, 0);
					MISC::CLEAR_BIT(&uLocal_578, iLocal_99);
				}
				else if (Local_94[iLocal_99 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&uLocal_578, iLocal_99);
					__LIB_12__::func_554(bVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_99++;
	if (iLocal_99 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_99 = 0;
	}
}

void func_456()//Position - 0x152AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_103[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_103[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_103[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_103[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar0]))
		{
			if (!__LIB_0__::func_951(Local_91.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_91.f_48[iVar0])))
				{
					__LIB_0__::func_621(&(Local_103[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_457()//Position - 0x1533B
{
	if (!BitTest(uLocal_95, 11))
	{
		if (!BitTest(Local_91.f_3, 6))
		{
			if (!BitTest(uLocal_95, 13))
			{
				if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!__LIB_1__::func_962(65) && !__LIB_1__::func_962(66))
						{
							if (BitTest(uLocal_96, 11))
							{
								if (!BitTest(uLocal_96, 12))
								{
									if (__LIB_3__::func_446(0, 1, 1, 1))
									{
										if (func_768())
										{
											__LIB_1__::func_707("UW_HELIMC" /* GXT: Although you were eliminated from Kill List Competitive and are unable to return to the vehicle, your team could still win and claim the reward. */, -1);
										}
										else
										{
											__LIB_1__::func_707("UW_HELIM" /* GXT: Although you were eliminated from Kill List and are unable to return to the vehicle, your team could still win and claim the reward. */, -1);
										}
										__LIB_1__::func_752(1);
										MISC::SET_BIT(&uLocal_96, 12);
									}
								}
							}
							else if (!(Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra")))
							{
								if (__LIB_3__::func_446(0, 1, 1, 1))
								{
									if (!func_768())
									{
										__LIB_1__::func_707("UW_TAVAIL" /* GXT: You are no longer able to take part in Kill List. */, 30000);
									}
									else
									{
										__LIB_1__::func_707("UW_TAVAILC" /* GXT: You are no longer able to take part in Kill List Competitive. */, 30000);
									}
									__LIB_1__::func_752(1);
									MISC::SET_BIT(&uLocal_95, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_458()//Position - 0x15439
{
	float fVar0;
	if (iLocal_575 != 0)
	{
		return;
	}
	if (__LIB_0__::func_864(&uLocal_566))
	{
		iLocal_575 = __LIB_1__::func_724(&uLocal_566, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_575);
	fVar0 = (fVar0 / 60000f);
	iLocal_575 = SYSTEM::FLOOR(fVar0);
	if (iLocal_575 >= 1)
	{
	}
	else
	{
		iLocal_575 = 1;
	}
	if (iLocal_575 > Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */)
	{
		iLocal_575 = Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */;
	}
}

void func_467()//Position - 0x156F1
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (BitTest(uLocal_95, 13))
	{
		return;
	}
	bVar0 = BitTest(Local_91.f_3, 6);
	bVar1 = BitTest(uLocal_95, 21);
	bVar2 = BitTest(uLocal_95, 23);
	bVar3 = Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (__LIB_37__::func_81())
	{
		if (!BitTest(uLocal_96, 17))
		{
			if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bVar2)
				{
					if (!func_204())
					{
						if (!func_768())
						{
							if (bVar0)
							{
								__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_FAILNX" /* GXT: You failed to destroy all the Merryweather patrols */, 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
								{
									__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]) && __LIB_0__::func_939(Local_91.f_7[0]))
								{
									MISC::SET_BIT(&uLocal_96, 11);
									MISC::SET_BIT(&uLocal_96, 16);
									__LIB_32__::func_266(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
								else
								{
									__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || BitTest(Local_91.f_3, 16))
							{
								__LIB_32__::func_266(66, "UW_BIGO" /* GXT: EVENT OVER */, "UW_ABAND" /* GXT: There aren't enough players left in your vehicle. */, 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_FAILNX" /* GXT: You failed to destroy all the Merryweather patrols */, 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
							{
								if (func_533())
								{
									MISC::SET_BIT(&uLocal_96, 11);
									MISC::SET_BIT(&uLocal_96, 16);
									__LIB_32__::func_266(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
								}
								else
								{
									__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIM" /* GXT: You were eliminated from Kill List */, 1, 15000, 2, 1, 0);
								}
							}
							else if (func_533())
							{
								MISC::SET_BIT(&uLocal_96, 11);
								MISC::SET_BIT(&uLocal_96, 16);
								__LIB_32__::func_266(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
							else
							{
								__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_533())
							{
								MISC::SET_BIT(&uLocal_96, 11);
								MISC::SET_BIT(&uLocal_96, 16);
								__LIB_32__::func_266(66, "UW_BIGE" /* GXT: ELIMINATED */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
							else
							{
								__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_LSELIMC" /* GXT: You were eliminated from Kill List Competitive */, 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || BitTest(Local_91.f_3, 16))
						{
							__LIB_32__::func_266(66, "UW_BIGO" /* GXT: EVENT OVER */, "UW_ABAND" /* GXT: There aren't enough players left in your vehicle. */, 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_532(1);
					Local_92.f_6 = (Local_92.f_6 + iVar4);
					if (!Global_262145.f_11974 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
					{
						if (Local_92.f_6 > 0)
						{
							__LIB_1__::func_926(19, Local_92.f_6);
						}
					}
					Global_2727753 = iVar4;
					if (iVar4 > 0)
					{
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_517(1);
					Local_92.f_7 = (Local_92.f_7 + iVar7);
					__LIB_1__::func_925();
					__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0, 0, 0);
					Local_92.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!BitTest(uLocal_96, 16))
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&uLocal_96, 17);
					MISC::SET_BIT(&uLocal_96, 18);
				}
			}
		}
	}
}

int func_517(bool bParam0)//Position - 0x17AA6
{
	int iVar0;
	if (BitTest(uLocal_96, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_768())
		{
			return Global_262145.f_11788 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_RP */;
		}
		else
		{
			return Global_262145.f_11727 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_RP */;
		}
	}
	func_458();
	if (func_768())
	{
		iVar0 = (Global_262145.f_11788 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_RP */ * iLocal_575);
	}
	else
	{
		iVar0 = (Global_262145.f_11727 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_RP */ * iLocal_575);
	}
	return iVar0;
}

int func_532(bool bParam0)//Position - 0x18963
{
	int iVar0;
	if (BitTest(uLocal_96, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_768())
		{
			return Global_262145.f_11787 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_CASH */;
		}
		else
		{
			return Global_262145.f_11726 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_CASH */;
		}
	}
	func_458();
	if (func_768())
	{
		iVar0 = (Global_262145.f_11787 /* Tunable: COMP_KILL_LIST_MINIMUM_PARTICIPATION_CASH */ * iLocal_575);
	}
	else
	{
		iVar0 = (Global_262145.f_11726 /* Tunable: KILL_LIST_MINIMUM_PARTICIPATION_CASH */ * iLocal_575);
	}
	return iVar0;
}

int func_533()//Position - 0x189C6
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
	{
		if (__LIB_0__::func_939(Local_91.f_7[iLocal_552]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_91.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_91.f_256[iLocal_552];
	if (!bVar0)
	{
		if (Local_91.f_594[0 /*4*/] != iLocal_552)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_91.f_594[0 /*4*/] == iLocal_552)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_91.f_256[Local_91.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_91.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_534()//Position - 0x18A9A
{
	bool bVar0;
	var uVar1;
	func_700(&bVar0, &uVar1);
	if (iLocal_552 > -1)
	{
		if (__LIB_0__::func_939(Local_91.f_7[iLocal_552]))
		{
			return 1;
		}
	}
	return 0;
}

void func_535()//Position - 0x18AC6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (Local_91.f_241 == 1)
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!__LIB_0__::func_864(&uLocal_564) || (__LIB_0__::func_864(&uLocal_564) && __LIB_0__::func_937(&uLocal_564, 5000, 0)))
				{
					if (Local_91.f_27 == joaat("savage") || Local_91.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_552;
						if (iVar1 > -1)
						{
							if (__LIB_0__::func_939(Local_91.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_91.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_552;
						if (iVar1 > -1)
						{
							if (__LIB_0__::func_939(Local_91.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									bVar2 = false;
									while (bVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), bVar2, false);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										bVar2++;
									}
									if (iVar3 == 0)
									{
										Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					__LIB_0__::func_794(&uLocal_564);
					__LIB_0__::func_795(&uLocal_564, 0, 0);
				}
			}
		}
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 4)
	{
		if (BitTest(Local_91.f_319, bVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false))
				{
					if ((func_447() - __LIB_1__::func_724(&(Local_91.f_349[bVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false))
							{
								if (!func_204())
								{
									__LIB_3__::func_238();
									__LIB_1__::func_350((func_447() - __LIB_1__::func_724(&(Local_91.f_349[bVar2 /*2*/]), 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false))
							{
								if (!func_204())
								{
									__LIB_3__::func_238();
									__LIB_1__::func_350(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[bVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), true, false, -1);
								__LIB_1__::func_387(&(Local_91.f_7[bVar2]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_91.f_7[bVar2]), true, false, 0);
								__LIB_1__::func_387(&(Local_91.f_7[bVar2]));
							}
						}
					}
				}
			}
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == bVar2)
			{
				if (!BitTest(uLocal_96, 6))
				{
					if (__LIB_3__::func_446(0, 1, 1, 1))
					{
						if (func_768())
						{
							if (!BitTest(uLocal_96, 19))
							{
								__LIB_1__::func_707("UW_NOPILC" /* GXT: There aren't enough players left in your vehicle to continue with Kill List Competitive. */, 30000);
							}
							else
							{
								__LIB_1__::func_707("UW_NOGUN" /* GXT: You need a gunner to take part in Kill List Competitive in a Valkyrie. */, 30000);
							}
						}
						else
						{
							__LIB_1__::func_707("UW_NOPIL" /* GXT: There aren't enough players left in your vehicle to continue with Kill List. */, 30000);
						}
						__LIB_1__::func_752(1);
						MISC::SET_BIT(&uLocal_96, 6);
					}
					else if (BitTest(uLocal_96, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iVar5])))
						{
							if (!func_768())
							{
								if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */))
								{
									__LIB_3__::func_198("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */, 0);
								}
							}
							else if (!__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
							{
								__LIB_3__::func_198("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */, 0);
							}
						}
						else if (__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || __LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
						{
							__LIB_3__::func_0();
						}
					}
					else if (__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) || __LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
					{
						__LIB_3__::func_0();
					}
				}
			}
		}
		bVar2++;
	}
}

void func_537()//Position - 0x18F95
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_91.f_27 == joaat("rhino"))
		{
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!__LIB_0__::func_864(&uLocal_560) || (__LIB_0__::func_864(&uLocal_560) && __LIB_0__::func_937(&uLocal_560, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (__LIB_0__::func_78(Local_576, 0f, 0f, 0f, 0))
							{
								Local_576 = { Local_91.f_30[0 /*3*/] };
							}
							fVar0 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_576, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						__LIB_0__::func_794(&uLocal_560);
						__LIB_0__::func_795(&uLocal_560, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!__LIB_3__::func_417("UW_OOB" /* GXT: Get back to the combat zone. */))
					{
						__LIB_3__::func_198("UW_OOB" /* GXT: Get back to the combat zone. */, 0);
					}
					if (!__LIB_0__::func_864(&uLocal_562))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_91.f_7[func_538()]), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						__LIB_0__::func_795(&uLocal_562, 0, 0);
					}
					if (__LIB_0__::func_864(&uLocal_562))
					{
						if ((func_447() - __LIB_1__::func_724(&uLocal_562, 0, 0)) >= 0)
						{
							__LIB_3__::func_238();
							__LIB_1__::func_350((func_447() - __LIB_1__::func_724(&uLocal_562, 0, 0)), "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							__LIB_3__::func_238();
							__LIB_1__::func_350(0, "UW_DEST" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							__LIB_3__::func_0();
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_91.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							__LIB_0__::func_794(&uLocal_562);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		__LIB_2__::func_445(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_538();
			if (iVar1 > -1)
			{
				if (__LIB_0__::func_939(Local_91.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar1]), true, false, -1);
						__LIB_1__::func_387(&(Local_91.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_538()//Position - 0x19230
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar1]))
			{
				if (__LIB_0__::func_939(Local_91.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_540()//Position - 0x192D4
{
	var uVar0;
	bool bVar1;
	bVar1 = -1;
	if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!BitTest(uLocal_95, 24))
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_700(&bVar1, &uVar0);
			if (func_543(bVar1))
			{
				if (bVar1 > -1)
				{
					if (Local_91.f_22[bVar1] != __LIB_0__::func_162())
					{
						fLocal_101 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_542(1, bVar1);
						MISC::SET_BIT(&uLocal_95, 24);
						func_541(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_95, 24);
				MISC::SET_BIT(&uLocal_95, 25);
			}
		}
	}
	if (!BitTest(uLocal_95, 25))
	{
		if (BitTest(uLocal_95, 24))
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_101);
				func_700(&bVar1, &uVar0);
				if (bVar1 > -1)
				{
					func_542(0, bVar1);
					MISC::SET_BIT(&uLocal_95, 25);
					func_541(0);
				}
			}
		}
	}
}

void func_541(bool bParam0)//Position - 0x193C0
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
}

void func_542(bool bParam0, bool bParam1)//Position - 0x193F5
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_0__::func_156(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (BitTest(Local_94[iVar0 /*18*/].f_1, bParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, true);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

bool func_543(bool bParam0)//Position - 0x19473
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (BitTest(Local_94[iVar1 /*18*/].f_1, bParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_544()//Position - 0x194C0
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!BitTest(uLocal_95, 15))
	{
		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_91.f_22[0] != __LIB_0__::func_162())
				{
					if (__LIB_3__::func_446(0, 0, 1, 1))
					{
						if (!func_768())
						{
							if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
							{
								if (!func_768())
								{
									__LIB_3__::func_441("UW_START1P" /* GXT: ~a~ ~s~has started Kill List. */, PLAYER::GET_PLAYER_NAME(Local_91.f_22[0]), 1, 30000);
								}
								else
								{
									__LIB_3__::func_441("UW_START1PC" /* GXT: ~a~ ~s~has started Kill List Competitive. */, PLAYER::GET_PLAYER_NAME(Local_91.f_22[0]), 1, 30000);
								}
								__LIB_1__::func_752(1);
							}
							else if (BitTest(Local_91.f_15, 0))
							{
								if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14))
								{
									if (!func_768())
									{
										__LIB_1__::func_707("UW_STARTM" /* GXT: Kill List has started without you. */, 30000);
									}
									else
									{
										__LIB_1__::func_707("UW_STARTMC" /* GXT: Kill List Competitive has started without you. */, 30000);
									}
									__LIB_1__::func_752(1);
								}
							}
							else
							{
								__LIB_3__::func_441("UW_START1P" /* GXT: ~a~ ~s~has started Kill List. */, PLAYER::GET_PLAYER_NAME(Local_91.f_22[0]), 1, 30000);
								__LIB_1__::func_752(1);
							}
						}
						else if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14))
						{
							if (!func_768())
							{
								__LIB_1__::func_707("UW_STARTM" /* GXT: Kill List has started without you. */, 30000);
							}
							else
							{
								__LIB_1__::func_707("UW_STARTMC" /* GXT: Kill List Competitive has started without you. */, 30000);
							}
							__LIB_1__::func_752(1);
						}
						MISC::SET_BIT(&uLocal_95, 15);
					}
				}
			}
		}
	}
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_91.f_241 == 1)
		{
			if (Local_91.f_27 != joaat("hydra") && Local_91.f_27 != joaat("rhino"))
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_552 >= 0)
					{
						if (!BitTest(uLocal_96, 10))
						{
							if (!BitTest(uLocal_96, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
								{
									if (__LIB_0__::func_939(Local_91.f_7[iLocal_552]))
									{
										MISC::SET_BIT(&uLocal_96, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iLocal_552]))
							{
								if (!__LIB_0__::func_939(Local_91.f_7[iLocal_552]))
								{
									__LIB_3__::func_452("UW_TEAMV" /* GXT: Your team vehicle was destroyed. */, 0);
									MISC::SET_BIT(&uLocal_96, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_768())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!BitTest(Local_91.f_3, 6))
			{
				if (!BitTest(uLocal_95, (16 + iVar1)))
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[0]))
								{
									if (__LIB_0__::func_939(Local_91.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[0]), -1, false) != 0)
										{
											iVar0 = func_553(iVar1, 0);
											if (iVar0 != __LIB_0__::func_162())
											{
												func_545("UW_COMP" /* GXT: ~a~ completed Kill List. */, iVar0, 1, 0, 0, 0, 1, 0);
											}
											MISC::SET_BIT(&uLocal_95, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_545(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x197BE
{
	int iVar0;
	struct<16> Var1;
	bool bVar2;
	bool bVar3;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__::func_696(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar2 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar2 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { __LIB_2__::func_828(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, &Var1, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar2, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		__LIB_2__::func_794(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_553(int iParam0, int iParam1)//Position - 0x19B2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_162();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iParam1]))
	{
		if (__LIB_0__::func_939(Local_91.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iParam1]), iVar2, false);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

void func_556()//Position - 0x19BEF
{
	if (!BitTest(uLocal_95, 9))
	{
		if (Local_91.f_241 == 1)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&uLocal_95, 9);
				}
			}
		}
	}
	if (!BitTest(uLocal_95, 10))
	{
		if (BitTest(uLocal_95, 9))
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&uLocal_95, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&uLocal_95, 10);
						__LIB_1__::func_915();
					}
				}
			}
		}
	}
}

void func_558()//Position - 0x19D32
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	iVar8 = 1;
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!BitTest(uLocal_95, 26))
			{
				if ((((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2)) || (func_768() && BitTest(Local_91.f_3, 6))) || (func_768() && BitTest(Local_91.f_3, 15)))
				{
					if (!__LIB_0__::func_864(&uLocal_571))
					{
						__LIB_0__::func_795(&uLocal_571, 0, 0);
					}
					if (__LIB_0__::func_937(&uLocal_571, 1000, 0))
					{
						if (__LIB_3__::func_417("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
						{
							__LIB_3__::func_0();
						}
						func_633();
						if (func_632())
						{
							iVar13 = func_532(1);
							if (iVar13 > 0)
							{
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if ((!Global_262145.f_11974 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */ && !BitTest(Local_91.f_3, 8)) || (!Global_262145.f_11975 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */ && BitTest(Local_91.f_3, 8)))
								{
									if (Local_92.f_6 > 0)
									{
										__LIB_1__::func_926(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (__LIB_0__::func_112())
								{
									__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_517(1);
							__LIB_1__::func_925();
							Local_92.f_7 = (Local_92.f_7 + iVar11);
							__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar11, 1, -1, 0, 0, 0);
							Local_92.f_5 = 2;
							__LIB_32__::func_266(65, "UW_BIGF" /* GXT: LOSER */, "UW_DRAWZ" /* GXT: Your vehicle destroyed no Merryweather patrols */, 1, 15000, 2, 1, 0);
						}
						else if (!func_768())
						{
							iVar13 = func_645(0);
							__LIB_35__::func_930(&iVar13, 1);
							iVar13 = (iVar13 + func_532(1));
							if (iVar13 > 0)
							{
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if (!Global_262145.f_11974 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
								{
									if (Local_92.f_6 > 0)
									{
										__LIB_1__::func_926(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (__LIB_0__::func_112())
								{
									__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_517(1);
							iVar11 = (iVar11 + func_619());
							Local_92.f_7 = (Local_92.f_7 + iVar11);
							__LIB_1__::func_925();
							__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar11, 1, -1, 0, 0, 0);
							Local_92.f_5 = 1;
							__LIB_32__::func_265(64, "", "UW_BIG_BMEXP" /* GXT: You destroyed all the Merryweather patrols */, "UW_BIGM" /* GXT: WINNER */, 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_618())
						{
							if (!func_617(1))
							{
								if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
								{
									__LIB_3__::func_0();
								}
								iVar13 = func_645(0);
								__LIB_35__::func_930(&iVar13, 1);
								iVar13 = (iVar13 + func_532(1));
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if (!Global_262145.f_11975 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */)
								{
									if (Local_92.f_6 > 0)
									{
										__LIB_1__::func_926(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (iVar13 > 0)
								{
									if (__LIB_0__::func_112())
									{
										__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
								{
									__LIB_32__::func_265(64, "", "UW_WON1P" /* GXT: You destroyed the most Merryweather patrols */, "UW_BIGM" /* GXT: WINNER */, 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									__LIB_32__::func_265(64, "", "UW_WON" /* GXT: Your vehicle destroyed the most Merryweather patrols */, "UW_BIGM" /* GXT: WINNER */, 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_92.f_5 = 1;
								iVar11 = func_619();
								iVar11 = (iVar11 + func_517(1));
								Local_92.f_7 = (Local_92.f_7 + iVar11);
								__LIB_1__::func_925();
								__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), 459130717, iVar11, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar13 = func_532(1);
								iVar11 = func_517(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_91.f_465[iVar10 /*4*/].f_1 == Local_91.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = -1;
										if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
										{
											if (Local_91.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (Local_91.f_465[iVar10 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_552 > -1)
										{
											if (iLocal_552 != Local_91.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_91.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == __LIB_0__::func_162())
									{
										bVar9 = true;
									}
									else
									{
										func_616(68, "UW_DRAWP" /* GXT: Your vehicle tied with <C>~a~</C> ~s~to win Kill List Competitive */, PLAYER::GET_PLAYER_NAME(iVar3[0]), 1, 15000, "UW_BIGO" /* GXT: EVENT OVER */, 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									__LIB_32__::func_265(68, &Var0, "UW_DRAWP" /* GXT: Your vehicle tied with <C>~a~</C> ~s~to win Kill List Competitive */, "UW_BIGO" /* GXT: EVENT OVER */, 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar9)
								{
									if (!func_768())
									{
										__LIB_32__::func_266(68, "UW_BIGO" /* GXT: EVENT OVER */, "UW_DRAW" /* GXT: Kill List was drawn */, 1, 15000, 2, 1, 0);
									}
									else
									{
										__LIB_32__::func_266(68, "UW_BIGO" /* GXT: EVENT OVER */, "UW_DRAWC" /* GXT: Kill List Competitive was drawn */, 1, 15000, 2, 1, 0);
									}
								}
								iVar14 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_645(0)) / SYSTEM::TO_FLOAT(iVar8)));
								iVar12 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_619()) / SYSTEM::TO_FLOAT(iVar8)));
								__LIB_35__::func_930(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_92.f_6 = (Local_92.f_6 + iVar13);
								if (!Global_262145.f_11975 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */)
								{
									if (Local_92.f_6 > 0)
									{
										__LIB_1__::func_926(19, Local_92.f_6);
									}
								}
								Global_2727753 = iVar13;
								if (iVar13 > 0)
								{
									if (__LIB_0__::func_112())
									{
										__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_92.f_7 = (Local_92.f_7 + iVar11);
								__LIB_1__::func_925();
								__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), 459130717, iVar11, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							__LIB_2__::func_160(1);
							iVar13 = func_532(1);
							iVar11 = func_517(1);
							Local_92.f_6 = (Local_92.f_6 + iVar13);
							if (!Global_262145.f_11975 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */)
							{
								if (Local_92.f_6 > 0)
								{
									__LIB_1__::func_926(19, Local_92.f_6);
								}
							}
							Global_2727753 = iVar13;
							if (iVar13 > 0)
							{
								if (__LIB_0__::func_112())
								{
									__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_92.f_7 = (Local_92.f_7 + iVar11);
							__LIB_1__::func_925();
							__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), 459130717, iVar11, 1, -1, 0, 0, 0);
							if (!func_617(0))
							{
								iVar5 = Local_91.f_465[0 /*4*/];
								if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
								{
									__LIB_3__::func_0();
								}
								if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[0 /*4*/].f_2);
									if (__LIB_12__::func_486(iVar2, 1))
									{
										iVar26 = __LIB_19__::func_946(iVar2);
										if (iVar26 > -1)
										{
											uVar28 = __LIB_1__::func_357(iVar26);
											sVar27 = __LIB_34__::func_713(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != __LIB_0__::func_162())
									{
										if (!bVar25)
										{
											if (!func_768())
											{
												func_616(65, "UW_FWONP" /* GXT: Kill List was won by <C>~a~</C> */, PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF" /* GXT: LOSER */, 2);
											}
											else
											{
												func_616(65, "UW_FWONPC" /* GXT: Kill List Competitive was won by <C>~a~</C> */, PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF" /* GXT: LOSER */, 2);
											}
										}
										else if (!func_768())
										{
											func_606(66, "PEN_OVR" /* GXT: EVENT OVER */, "UW_FWONG" /* GXT: ~a~ ~s~won Kill List */, sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_606(66, "PEN_OVR" /* GXT: EVENT OVER */, "UW_FWONGC" /* GXT: ~a~ ~s~won Kill List Competitive */, sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_768())
									{
										__LIB_32__::func_265(65, &Var0, "UW_FWONT" /* GXT: Kill List was won by ~a~ */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										__LIB_32__::func_265(65, &Var0, "UW_FWONTC" /* GXT: Kill List Competitive was won by ~a~ */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
								{
									__LIB_3__::func_0();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_91.f_465[iVar10 /*4*/].f_1 == Local_91.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
										{
											if (Local_91.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_552 > -1)
										{
											if (iLocal_552 != Local_91.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_91.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_91.f_27 == joaat("hydra") || Local_91.f_27 == joaat("rhino"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[0]))
										{
											if (iVar3[1] != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[1]))
											{
												func_564(68, __LIB_0__::func_162(), __LIB_0__::func_162(), -1, "UW_DRAW2P" /* GXT: <C>~a~</C> and <C>~a~</C> tied to win Kill List Competitive */, "UW_BIGF" /* GXT: LOSER */, __LIB_1__::func_259(), 15000, __LIB_1__::func_259(), PLAYER::GET_PLAYER_NAME(iVar3[0]), PLAYER::GET_PLAYER_NAME(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									__LIB_32__::func_265(11, &Var0, "UW_DRAW2P" /* GXT: <C>~a~</C> and <C>~a~</C> tied to win Kill List Competitive */, "UW_BIGO" /* GXT: EVENT OVER */, 15000, -1, -1082130432, &Var1, 1, 2, 0);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									__LIB_32__::func_266(68, "UW_BIGO" /* GXT: EVENT OVER */, "UW_DRAW" /* GXT: Kill List was drawn */, 1, 15000, 2, 1, 0);
								}
							}
						}
						func_672(0);
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&uLocal_95, 13);
						MISC::SET_BIT(&uLocal_95, 26);
					}
				}
				else if (BitTest(Local_91.f_3, 6) || (!func_768() && BitTest(Local_91.f_3, 15)))
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						__LIB_32__::func_266(66, "UW_BIGO" /* GXT: EVENT OVER */, "UW_ABAND" /* GXT: There aren't enough players left in your vehicle. */, 1, 15000, 2, 1, 0);
					}
					else
					{
						__LIB_32__::func_265(65, "", "UW_FAIL" /* GXT: You failed to destroy all the Merryweather patrols */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_672(0);
					MISC::SET_BIT(&uLocal_95, 26);
					iVar13 = func_532(1);
					Local_92.f_6 = (Local_92.f_6 + iVar13);
					if (!Global_262145.f_11974 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
					{
						if (Local_92.f_6 > 0)
						{
							__LIB_1__::func_926(19, Local_92.f_6);
						}
					}
					Global_2727753 = iVar13;
					if (iVar13 > 0)
					{
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_517(1);
					Local_92.f_7 = (Local_92.f_7 + iVar11);
					__LIB_1__::func_925();
					__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar11, 1, -1, 0, 0, 0);
					Local_92.f_5 = 2;
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_91.f_3, 14))
				{
					func_672(0);
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					__LIB_32__::func_265(65, "", "UW_FAILD" /* GXT: You died before completing the objective */, "UW_BIGF" /* GXT: LOSER */, 15000, -1, -1082130432, 0, 6, 2, 0);
					func_672(0);
					MISC::SET_BIT(&uLocal_95, 26);
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar13 = func_532(1);
					Local_92.f_6 = (Local_92.f_6 + iVar13);
					if (!Global_262145.f_11974 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */)
					{
						if (Local_92.f_6 > 0)
						{
							__LIB_1__::func_926(19, Local_92.f_6);
						}
					}
					Global_2727753 = iVar13;
					if (iVar13 > 0)
					{
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_105(joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"), iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_517(1);
					Local_92.f_7 = (Local_92.f_7 + iVar11);
					__LIB_1__::func_925();
					__LIB_44__::func_94(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar11, 1, -1, 0, 0, 0);
					Local_92.f_5 = 2;
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_91.f_3, 12))
				{
					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (BitTest(uLocal_95, 26))
				{
					if (__LIB_3__::func_417("UW_ATTK" /* GXT: Destroy the ~r~Merryweather patrols. */))
					{
						__LIB_3__::func_0();
					}
					if (func_559(&uLocal_543, 1))
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!__LIB_3__::func_417("UW_EXPL" /* GXT: Exit the Kill List vehicle before it explodes. */) && !__LIB_3__::func_417("UW_EXPLC" /* GXT: Exit the Kill List Competitive vehicle before it explodes. */))
					{
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (__LIB_0__::func_939(Local_91.f_7[Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
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
	else if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_559(var uParam0, bool bParam1)//Position - 0x1AB57
{
	bool bVar0;
	if ((((*uParam0 > 0 && !__LIB_1__::func_515()) && !(__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && (__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())))) && !__LIB_3__::func_448(PLAYER::PLAYER_ID())) && !__LIB_1__::func_708(PLAYER::PLAYER_ID()))
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
				func_560();
				__LIB_1__::func_289(uParam0, 2);
			}
			break;
		case 2:
			func_560();
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

void func_560()//Position - 0x1ACE1
{
	if (BitTest(Global_2815059.f_4657, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2815059.f_4657), 1);
			__LIB_1__::func_707("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */, -1);
			__LIB_1__::func_752(1);
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 0);
		}
	}
}

int func_564(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1ADBE
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
	__LIB_1__::func_264(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return __LIB_21__::func_273(&Var0);
}

int func_606(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1BFC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_162();
	iVar1 = __LIB_0__::func_162();
	iVar2 = __LIB_0__::func_162();
	return __LIB_35__::func_932(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_616(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1C389
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
	__LIB_1__::func_264(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return __LIB_21__::func_273(&Var0);
}

int func_617(bool bParam0)//Position - 0x1C3FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam0)
	{
		func_700(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_91.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_91.f_27 == joaat("rhino") || Local_91.f_27 == joaat("hydra"))
	{
		return Local_91.f_465[0 /*4*/].f_1 == Local_91.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_91.f_594[0 /*4*/].f_1 == Local_91.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_618()//Position - 0x1C48F
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_700(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_91.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_619()//Position - 0x1C4CB
{
	if (!func_768())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11723 /* Tunable: KILL_LIST_DEFAULT_RP */) * Global_262145.f_11913 /* Tunable: KILL_LIST_EVENT_MULTIPLIER_RP */));
	}
	if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11784 /* Tunable: COMP_KILL_LIST_DEFAULT_RP */) * Global_262145.f_11915 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_RP */));
	}
	if (BitTest(Local_91.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11784 /* Tunable: COMP_KILL_LIST_DEFAULT_RP */) * Global_262145.f_11915 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_RP */));
	}
	return 0;
}

int func_632()//Position - 0x1C7DE
{
	int iVar0;
	if (!BitTest(Local_91.f_3, 6) && !BitTest(Local_91.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_91.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_633()//Position - 0x1C825
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[iVar0]))
		{
			if (!__LIB_0__::func_939(Local_91.f_73[iVar0]))
			{
				__LIB_1__::func_387(&(Local_91.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar0]))
		{
			if (__LIB_0__::func_951(Local_91.f_48[iVar0]))
			{
				__LIB_1__::func_387(&(Local_91.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_643()//Position - 0x1CB43
{
	if (iLocal_552 > -1)
	{
		if (__LIB_0__::func_939(Local_91.f_7[iLocal_552]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iLocal_552])))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_645(bool bParam0)//Position - 0x1CB9E
{
	if (!func_768())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11722 /* Tunable: KILL_LIST_DEFAULT_CASH */) * Global_262145.f_11912 /* Tunable: KILL_LIST_EVENT_MULTIPLIER_CASH */));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11783 /* Tunable: COMP_KILL_LIST_DEFAULT_CASH */) * Global_262145.f_11914 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_CASH */));
	}
	if ((BitTest(Local_91.f_3, 0) && BitTest(Local_91.f_3, 1)) && BitTest(Local_91.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11783 /* Tunable: COMP_KILL_LIST_DEFAULT_CASH */) * Global_262145.f_11914 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_CASH */));
	}
	if (BitTest(Local_91.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11783 /* Tunable: COMP_KILL_LIST_DEFAULT_CASH */) * Global_262145.f_11914 /* Tunable: KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_CASH */));
	}
	return 0;
}

char* func_646()//Position - 0x1CC50
{
	if (Local_91.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK" /* GXT: ~BLIP_TEMP_1~ */;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_91.f_27))
	{
		return "ABLIP_PLANE" /* GXT: ~BLIP_TEMP_1~ */;
	}
	return "ABLIP_HELI" /* GXT: ~BLIP_TEMP_1~ */;
}

void func_672(bool bParam0)//Position - 0x20C2F
{
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1797, 11))
		{
			MISC::SET_BIT(&(Global_2815059.f_1797), 11);
		}
	}
	else if (BitTest(Global_2815059.f_1797, 11))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1797), 11);
	}
}

void func_674()//Position - 0x20CB9
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
}

void func_675(bool bParam0)//Position - 0x20CD5
{
	var uVar0;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!__LIB_0__::func_428(PLAYER::PLAYER_ID()) && !__LIB_3__::func_491(PLAYER::PLAYER_ID())) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && !__LIB_0__::func_927(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_945())
				{
					__LIB_2__::func_822(2, 0, 1);
					__LIB_1__::func_713();
				}
				if (__LIB_3__::func_361(__LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID()))))
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

void func_686(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x21029
{
	bool bVar0;
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_315(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		__LIB_1__::func_460(__LIB_1__::func_957(iParam0), 1);
	}
	else
	{
		__LIB_3__::func_449(iParam0, -1);
		if (__LIB_3__::func_438(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			__LIB_1__::func_956(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (__LIB_3__::func_438(PLAYER::PLAYER_ID()))
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
		if (__LIB_3__::func_160(iParam0))
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

int func_698()//Position - 0x21495
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Local_91.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_699(bool bParam0)//Position - 0x2151C
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_700(bool bParam0, var uParam1)//Position - 0x21555
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bVar0))
		{
			*bParam0 = bVar0;
			*uParam1 = Local_91.f_256[bVar0];
		}
		bVar0++;
	}
}

void func_703(bool bParam0)//Position - 0x216A8
{
	int iVar0;
	var uVar1;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
		{
			Global_2727723 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
			if (Global_2727723 == -1)
			{
				Global_2727723 = Global_1836844.f_4;
			}
			if (__LIB_2__::func_275(Global_2727723) == 0)
			{
				if (__LIB_19__::func_78(1) > 0)
				{
					__LIB_2__::func_384(26, -1);
				}
			}
			if (__LIB_0__::func_945())
			{
				__LIB_2__::func_822(2, 0, 1);
				__LIB_1__::func_713();
			}
			if (__LIB_3__::func_361(__LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID()))))
			{
				uVar1 = __LIB_1__::func_360(2483, -1, 0);
				MISC::CLEAR_BIT(&uVar1, __LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID())));
				__LIB_1__::func_713();
			}
			if (__LIB_1__::func_512())
			{
				__LIB_1__::func_713();
			}
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
	{
		if ((!__LIB_0__::func_629() && !__LIB_1__::func_649()) && !__LIB_2__::func_276())
		{
			Global_2727723 = -1;
			__LIB_2__::func_70(26, -1);
		}
		else if (__LIB_2__::func_275(Global_2727723) == 0)
		{
			iVar0 = __LIB_19__::func_87(1);
			if (iVar0 > 0)
			{
				__LIB_2__::func_553(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				__LIB_1__::func_746(1934, 1, -1);
				__LIB_2__::func_553(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (__LIB_2__::func_38(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__::func_70(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
	}
}

void func_732(int iParam0)//Position - 0x21EA5
{
	if (func_204())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!BitTest(uLocal_95, 0))
			{
				if ((((__LIB_2__::func_790(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_193()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && __LIB_3__::func_446(0, 1, 1, 1))
				{
					if (!func_768())
					{
						__LIB_3__::func_443("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1), 30000);
					}
					else
					{
						__LIB_3__::func_443("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1), 30000);
					}
					__LIB_1__::func_752(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&uLocal_95, 0);
				}
			}
			break;
	}
}

void func_735()//Position - 0x21F92
{
	bool bVar0;
	MISC::CLEAR_BIT(&uLocal_96, 15);
	bVar0 = false;
	while (bVar0 < 4)
	{
		func_736(bVar0);
		bVar0++;
	}
	if (BitTest(uLocal_96, 15))
	{
		if (!BitTest(Global_1836844.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 15);
		}
	}
	else if (BitTest(Global_1836844.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 15);
	}
}

void func_736(bool bParam0)//Position - 0x21FF8
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[bParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
		{
			if (Local_91.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
		{
			if (!func_204())
			{
				if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!BitTest(uLocal_96, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]))
							{
								MISC::SET_BIT(&uLocal_96, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
						{
							if (__LIB_3__::func_56("UW_HELP2" /* GXT: Enter the vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List. */, func_646()) || __LIB_3__::func_56("UW_HELP2C" /* GXT: Enter a vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List Competitive. */, func_646()))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!__LIB_1__::func_785(PLAYER::PLAYER_ID()))
							{
								__LIB_1__::func_963(1);
							}
							iVar0 = __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0);
							if (__LIB_3__::func_442("UW_HELP1" /* GXT: ~s~Kill List~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter the vehicle and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1)) || __LIB_3__::func_442("UW_HELP1C" /* GXT: ~s~Kill List Competitive~s~ ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~is available. Enter one of the vehicles and destroy the Merryweather patrols for $~1~ and RP. */, func_646(), func_645(1)))
							{
								HUD::CLEAR_HELP(true);
							}
							if (Local_91.f_463 != -1)
							{
								if (iVar0 > (Local_91.f_463 - 2))
								{
									iVar0 = (Local_91.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
							Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = bParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_196();
							iLocal_579 = iVar0;
						}
						else if (Local_91.f_241 == 0)
						{
							if (!BitTest(uLocal_95, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
									{
										if (__LIB_3__::func_446(0, 1, 1, 1))
										{
											if (!func_768())
											{
												__LIB_3__::func_235("UW_HELP2" /* GXT: Enter the vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List. */, func_646(), 30000);
											}
											else
											{
												__LIB_3__::func_235("UW_HELP2C" /* GXT: Enter a vehicle ~HUD_COLOUR_NET_PLAYER2~~a~ ~s~to start Kill List Competitive. */, func_646(), 30000);
											}
											__LIB_1__::func_752(1);
											MISC::SET_BIT(&uLocal_95, 1);
										}
									}
								}
							}
							if (!__LIB_0__::func_945())
							{
								if (BitTest(uLocal_96, 2))
								{
									MISC::CLEAR_BIT(&uLocal_96, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!BitTest(uLocal_95, 4))
									{
										if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
											{
												if (__LIB_3__::func_446(0, 1, 1, 1))
												{
													if (!func_768())
													{
														__LIB_1__::func_707("UW_COPS" /* GXT: Lose the Cops before starting Kill List. */, 30000);
													}
													else
													{
														__LIB_1__::func_707("UW_COPSC" /* GXT: Lose the Cops before starting Kill List Competitive. */, 30000);
													}
													__LIB_1__::func_752(1);
													MISC::SET_BIT(&uLocal_95, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) > 10000f)
									{
										MISC::CLEAR_BIT(&uLocal_95, 4);
									}
								}
								else
								{
									if (BitTest(uLocal_95, 4))
									{
										MISC::CLEAR_BIT(&uLocal_95, 4);
									}
									if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!BitTest(uLocal_96, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
									{
										if (__LIB_3__::func_446(0, 1, 1, 1))
										{
											if (!func_768())
											{
												__LIB_1__::func_707("UW_PASSMD" /* GXT: You can't participate in this event while Passive Mode is enabled. */, 30000);
											}
											else
											{
												__LIB_1__::func_707("UW_PASSMD" /* GXT: You can't participate in this event while Passive Mode is enabled. */, 30000);
											}
											__LIB_1__::func_752(1);
											MISC::SET_BIT(&uLocal_96, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), false))
							{
								iVar2 = 0;
								while (iVar2 < Local_91.f_28)
								{
									if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										__LIB_3__::func_0();
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
								{
									MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
								}
								if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (__LIB_0__::func_1("UW_TIMEL" /* GXT: Kill List will start when the vehicle is full or when the time expires. */))
								{
									HUD::CLEAR_HELP(true);
								}
								if (__LIB_0__::func_1("UW_TIMELA" /* GXT: Kill List Competitive will start when all the vehicles are full or when the time expires. */))
								{
									HUD::CLEAR_HELP(true);
								}
								if (__LIB_1__::func_785(PLAYER::PLAYER_ID()))
								{
									__LIB_1__::func_963(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_91.f_241 == 0 && !BitTest(Local_91.f_3, 4))
								{
									iVar0 = __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_91.f_463 != -1)
									{
										if (iVar0 > (Local_91.f_463 - 2))
										{
											iVar0 = (Local_91.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_579)
									{
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
										MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_579 + 1));
									}
								}
								bVar1 = false;
								if (func_270())
								{
									if (Local_91.f_413 > -1)
									{
										iVar3 = (Local_91.f_413 - __LIB_1__::func_724(&(Local_91.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_737(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) == joaat("rhino"))
								{
									VEHICLE::DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]));
								}
								if (!__LIB_0__::func_864(&uLocal_109))
								{
									__LIB_0__::func_795(&uLocal_109, 0, 0);
								}
								else if (__LIB_0__::func_937(&uLocal_109, 2000, 0))
								{
									if (BitTest(Local_91.f_3, 9) || !func_768())
									{
										if (__LIB_0__::func_1("UW_MINV" /* GXT: Players are required in at least two Kill List Competitive vehicles before the mode will start. */))
										{
										}
										if (!BitTest(uLocal_95, 5))
										{
											if (Local_91.f_28 > 1 || (Local_91.f_28 == 1 && func_112() > 1))
											{
												if (__LIB_0__::func_864(&(Local_91.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_112() > 1)
														{
															__LIB_1__::func_707("UW_TIMELA" /* GXT: Kill List Competitive will start when all the vehicles are full or when the time expires. */, 30000);
														}
														else
														{
															__LIB_1__::func_707("UW_TIMEL" /* GXT: Kill List will start when the vehicle is full or when the time expires. */, 30000);
														}
														__LIB_1__::func_752(1);
														MISC::SET_BIT(&uLocal_95, 5);
													}
												}
											}
										}
									}
									else if (func_768())
									{
										if (!BitTest(Local_91.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) != joaat("valkyrie"))
											{
												if (!BitTest(uLocal_95, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														__LIB_1__::func_707("UW_MINV" /* GXT: Players are required in at least two Kill List Competitive vehicles before the mode will start. */, 30000);
														__LIB_1__::func_752(1);
														MISC::SET_BIT(&uLocal_95, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_91.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) == joaat("valkyrie"))
						{
							if (!__LIB_0__::func_1("UW_VALK" /* GXT: At least two players are required to start Kill List in a Valkyrie. */) && !__LIB_0__::func_1("UW_VALKC" /* GXT: At least two players are required in at least two Valkyrie helicopters to start Kill List Competitive. */))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (BitTest(uLocal_95, 8))
								{
									MISC::CLEAR_BIT(&uLocal_95, 8);
								}
							}
							if (!BitTest(uLocal_95, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), (iVar5 - 1), false))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_768())
										{
											__LIB_1__::func_707("UW_VALK" /* GXT: At least two players are required to start Kill List in a Valkyrie. */, 30000);
										}
										else
										{
											__LIB_1__::func_707("UW_VALKC" /* GXT: At least two players are required in at least two Valkyrie helicopters to start Kill List Competitive. */, 30000);
										}
										__LIB_1__::func_752(1);
										MISC::SET_BIT(&uLocal_95, 8);
									}
									if (!BitTest(uLocal_95, 8))
									{
										if (func_768())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != bParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar7]))
														{
															if (__LIB_0__::func_939(Local_91.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar7]), (iVar5 - 1), false))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												__LIB_1__::func_707("UW_VALKC" /* GXT: At least two players are required in at least two Valkyrie helicopters to start Kill List Competitive. */, 30000);
												__LIB_1__::func_752(1);
												MISC::SET_BIT(&uLocal_95, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_91.f_241 == 1)
					{
						if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
						{
							if (!BitTest(uLocal_95, 6))
							{
								if (__LIB_0__::func_939(Local_91.f_7[bParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[bParam0])))
										{
											if (!BitTest(uLocal_95, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
												{
													MISC::SET_BIT(&uLocal_95, 7);
												}
											}
											if (BitTest(uLocal_95, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_768())
													{
														__LIB_1__::func_707("UW_EXITVC" /* GXT: You cannot exit the vehicle while Kill List Competitive is active. */, 30000);
													}
													else
													{
														__LIB_1__::func_707("UW_EXITV" /* GXT: You cannot exit the vehicle while Kill List is active. */, 30000);
													}
													__LIB_1__::func_752(1);
													MISC::SET_BIT(&uLocal_95, 6);
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
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_91.f_7[iVar10]), false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_91.f_7[iVar10]), false))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (__LIB_3__::func_361(17))
					{
						iVar9 = __LIB_1__::func_360(2483, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 17);
						__LIB_1__::func_354(2483, iVar9, -1, 1, 0);
						__LIB_1__::func_713();
						if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!BitTest(uLocal_96, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__::func_939(Local_91.f_7[bParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bParam0]), true)) < 2500f)
							{
								if (__LIB_3__::func_446(0, 1, 1, 1))
								{
									if (!__LIB_2__::func_104(129, 0, 0))
									{
										if (!func_768())
										{
											__LIB_1__::func_707("UW_TUT" /* GXT: You are unable to take part in Kill List until you have completed the tutorial. */, -1);
										}
										else
										{
											__LIB_1__::func_707("UW_TUTC" /* GXT: You are unable to take part in Kill List Competitive until you have completed the tutorial. */, -1);
										}
										__LIB_1__::func_752(1);
										MISC::SET_BIT(&uLocal_96, 14);
									}
									else
									{
										if (!func_768())
										{
											__LIB_1__::func_707("UW_HIDE" /* GXT: You are unable to take part in Kill List as you have chosen to hide the event. */, -1);
										}
										else
										{
											__LIB_1__::func_707("UW_HIDEC" /* GXT: You are unable to take part in Kill List Competitive as you have chosen to hide the event. */, -1);
										}
										__LIB_1__::func_752(1);
										MISC::SET_BIT(&uLocal_96, 14);
									}
								}
							}
						}
					}
				}
			}
			if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1) && Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!BitTest(Global_2815059.f_4662, 1))
				{
					MISC::SET_BIT(&(Global_2815059.f_4662), 1);
				}
			}
			else if (BitTest(Global_2815059.f_4662, 1))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4662), 1);
			}
		}
	}
}

void func_737(bool bParam0)//Position - 0x22AE7
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 105 /*INPUT_VEH_DROP_PROJECTILE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
}

void func_741()//Position - 0x22CD8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_91.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PHYSICS::SET_USE_KINEMATIC_PHYSICS(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_743()//Position - 0x22D5A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_759(iVar0);
				break;
			case 174:
				func_744(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_744(int iParam0)//Position - 0x22DA6
{
	int iVar0;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1214381365:
			func_758(iParam0);
			break;
		case -196398508:
			func_757(iParam0);
			break;
		case -177677675:
			func_756(iParam0);
			break;
		case -902037949:
			func_755(iParam0);
			break;
		case 474913336:
			func_754(iParam0);
			break;
		case -215033241:
			func_751(iParam0);
			break;
		case 143745567:
			func_745(iParam0);
			break;
	}
}

void func_745(int iParam0)//Position - 0x22E29
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar4 = Var0.f_2;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[bVar4]))
		{
			return;
		}
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4))
		{
			if (!BitTest(Local_91.f_271, bVar4))
			{
				if (func_100(bVar4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), false))
					{
						if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_768())
				{
					if (Local_91.f_465[0 /*4*/].f_1 > 0)
					{
						iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[0 /*4*/].f_2);
						if (iVar7 != __LIB_0__::func_162())
						{
							if (iVar7 == PLAYER::PLAYER_ID())
							{
								bVar6 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
					{
						if (__LIB_0__::func_939(Local_91.f_7[0]))
						{
							iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[0]), -1, false);
							if (iVar9 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar9))
								{
									iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
									if (iVar8 == PLAYER::PLAYER_ID())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar2 = func_750();
				iVar10 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]));
				iVar5 = bVar4 * 4;
				if (func_749(iVar10))
				{
					iVar1 = func_42(iVar10);
					bVar12 = iVar5;
					while (bVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar12]) && !BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar12)], __LIB_18__::func_410(bVar12)))
						{
							iVar11++;
							MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar12)]), __LIB_18__::func_410(bVar12));
						}
						bVar12++;
					}
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_92.f_11 == 0)
				{
					Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
				{
					Local_92.f_7 = (Local_92.f_7 + iVar2);
					func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar2, 1, -1, 0);
					func_746();
				}
			}
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
		}
	}
}

void func_746()//Position - 0x230B9
{
	if (!__LIB_0__::func_864(&uLocal_568) || (__LIB_0__::func_864(&uLocal_568) && __LIB_0__::func_937(&uLocal_568, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		__LIB_0__::func_794(&uLocal_568);
		__LIB_0__::func_795(&uLocal_568, 0, 0);
	}
}

var func_747(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x23107
{
	return __LIB_43__::func_401(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_748()//Position - 0x23123
{
	if (func_768())
	{
		return Global_262145.f_11786 /* Tunable: COMP_KILL_LIST_AI_ENEMY_KILL_CAP */;
	}
	return Global_262145.f_11725 /* Tunable: KILL_LIST_ENEMY_KILL_CAP */;
}

bool func_749(int iParam0)//Position - 0x23146
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_750()//Position - 0x23180
{
	if (func_768())
	{
		return Global_262145.f_11785 /* Tunable: COMP_KILL_LIST_AI_ENEMY_KILL_RP */;
	}
	return Global_262145.f_11724 /* Tunable: KILL_LIST_ENEMY_KILL_RP */;
}

void func_751(int iParam0)//Position - 0x231A3
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar4 = Var0.f_2;
		if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar4))
		{
			if (!BitTest(Local_91.f_271, bVar4))
			{
				if (func_753(bVar4))
				{
					bVar6 = true;
				}
				else if (!func_752(bVar4))
				{
					if (func_100(bVar4))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), false))
						{
							if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_91.f_73[bVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_768())
					{
						if (Local_91.f_465[0 /*4*/].f_1 > 0)
						{
							iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_91.f_465[0 /*4*/].f_2);
							if (iVar7 != __LIB_0__::func_162())
							{
								if (iVar7 == PLAYER::PLAYER_ID())
								{
									bVar6 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[0]))
						{
							if (__LIB_0__::func_939(Local_91.f_7[0]))
							{
								iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[0]), -1, false);
								if (iVar9 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar9))
									{
										iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
										if (iVar8 == PLAYER::PLAYER_ID())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = bVar4 * 4;
						iVar11 = 0;
						bVar10 = iVar5;
						while (bVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar10]) && !BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10)], __LIB_18__::func_410(bVar10)))
							{
								iVar11++;
								MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10)]), __LIB_18__::func_410(bVar10));
							}
							bVar10++;
						}
						Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
						{
							iVar2 = func_750();
							iVar2 = (iVar2 * iVar1);
							Local_92.f_7 = (Local_92.f_7 + iVar2);
							func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar2, 1, -1, 0);
							func_746();
							if (Local_92.f_11 == 0)
							{
								Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
							}
						}
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar4);
					}
				}
			}
		}
	}
}

int func_752(bool bParam0)//Position - 0x23416
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_94[iVar0 /*18*/].f_11[bParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_753(bool bParam0)//Position - 0x23456
{
	int iVar0;
	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_94[iVar0 /*18*/].f_11[bParam0] > Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_754(int iParam0)//Position - 0x234C4
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != __LIB_0__::func_162())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_91.f_464), Var0.f_2);
		}
	}
}

void func_755(int iParam0)//Position - 0x23501
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_555, Var0.f_2);
	}
}

void func_756(int iParam0)//Position - 0x23524
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_556, Var0.f_2);
	}
}

void func_757(int iParam0)//Position - 0x23547
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(Var0.f_2)], __LIB_18__::func_410(Var0.f_2)))
		{
			MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(Var0.f_2)]), __LIB_18__::func_410(Var0.f_2));
		}
	}
}

void func_758(int iParam0)//Position - 0x235A1
{
	struct<3> Var0;
	bool bVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar1 = Var0.f_2;
		if (BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1))
		{
			MISC::CLEAR_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
		}
	}
}

void func_759(int iParam0)//Position - 0x235E1
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	var uVar12;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1))
			{
				if (!BitTest(Local_91.f_271, bVar1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[bVar1]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_73[bVar1])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_91.f_73[bVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_5)
													{
														iVar4 = ENTITY::GET_ENTITY_MODEL(Var0.f_0);
														if (Local_91.f_27 == joaat("hydra"))
														{
															if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar7 = func_750();
																if (func_749(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_92.f_11 == 0)
																{
																	Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																}
																if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																{
																	Local_92.f_7 = (Local_92.f_7 + iVar7);
																	func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																	func_746();
																}
															}
															MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = -1;
															iVar9 = -1;
															while (iVar9 <= 3)
															{
																iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_73[bVar1]), iVar9, false);
																if (iVar6 != 0)
																{
																	iVar8 = func_760(iVar6);
																	if (iVar8 > -1)
																	{
																		if (!BitTest(Local_91.f_272[__LIB_13__::func_437(iVar8)], __LIB_18__::func_410(iVar8)))
																		{
																			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(iVar8)], __LIB_18__::func_410(iVar8)))
																			{
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(iVar8)]), __LIB_18__::func_410(iVar8));
																				iVar7 = func_750();
																				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																				{
																					Local_92.f_7 = (Local_92.f_7 + iVar7);
																					func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																					func_746();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_91.f_48[iVar8])))
																				{
																					__LIB_0__::func_621(&(Local_103[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
														}
													}
													else if (!__LIB_0__::func_939(Local_91.f_73[bVar1]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
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
			bVar1++;
		}
		if (Local_91.f_27 != joaat("hydra"))
		{
			bVar1 = false;
			while (bVar1 <= 19)
			{
				if (!BitTest(Local_91.f_272[__LIB_13__::func_437(bVar1)], __LIB_18__::func_410(bVar1)))
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar1)], __LIB_18__::func_410(bVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_48[bVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_91.f_48[bVar1]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	iVar7 = func_750();
																	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																		{
																			func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																			Local_92.f_7 = (Local_92.f_7 + iVar7);
																			func_746();
																		}
																	}
																	if (Local_92.f_11 == 0)
																	{
																		Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																	}
																	MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar1)]), __LIB_18__::func_410(bVar1));
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
				}
				if (bVar1 < 5)
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar1))
					{
						if (!BitTest(Local_91.f_271, bVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[bVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_73[bVar1])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_91.f_73[bVar1]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0.f_0) == joaat("savage"))
												{
													if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar1)], __LIB_18__::func_410(bVar1)))
													{
														if (Var0.f_5)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																					iVar7 = func_750();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																					{
																						func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																						Local_92.f_7 = (Local_92.f_7 + iVar7);
																						func_746();
																						if (Local_92.f_11 == 0)
																						{
																							Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																						}
																					}
																					bVar10 = bVar1 * 4;
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10)]), __LIB_18__::func_410(bVar10));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 1)]), __LIB_18__::func_410(bVar10 + 1));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 2)]), __LIB_18__::func_410(bVar10 + 2));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 3)]), __LIB_18__::func_410(bVar10 + 3));
																					MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
																				}
																			}
																		}
																	}
																	else if (func_753(bVar1))
																	{
																		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																			{
																				iVar7 = func_750();
																				iVar7 = (iVar7 * iVar2);
																				Local_92.f_7 = (Local_92.f_7 + iVar7);
																				func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																				func_746();
																				if (Local_92.f_11 == 0)
																				{
																					Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																				}
																			}
																			bVar10 = bVar1 * 4;
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10)]), __LIB_18__::func_410(bVar10));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 1)]), __LIB_18__::func_410(bVar10 + 1));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 2)]), __LIB_18__::func_410(bVar10 + 2));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 3)]), __LIB_18__::func_410(bVar10 + 3));
																			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
																		}
																	}
																	else if (func_752(bVar1))
																	{
																	}
																	else if (NETWORK::NETWORK_GET_ASSISTED_KILL_OF_ENTITY(iVar11, Var0.f_0, &uVar12))
																	{
																		if (iVar11 == PLAYER::PLAYER_ID())
																		{
																			if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																				if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																				{
																					iVar7 = func_750();
																					iVar7 = (iVar7 * iVar2);
																					Local_92.f_7 = (Local_92.f_7 + iVar7);
																					func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																					func_746();
																					if (Local_92.f_11 == 0)
																					{
																						Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																					}
																				}
																				bVar10 = bVar1 * 4;
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10)]), __LIB_18__::func_410(bVar10));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 1)]), __LIB_18__::func_410(bVar10 + 1));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 2)]), __LIB_18__::func_410(bVar10 + 2));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar10 + 3)]), __LIB_18__::func_410(bVar10 + 3));
																				MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bVar1] = iVar3;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), false))
															{
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
				bVar1++;
			}
			bVar1 = 20;
			while (bVar1 <= 23)
			{
				if (!BitTest(Local_91.f_272[__LIB_13__::func_437(bVar1)], __LIB_18__::func_410(bVar1)))
				{
					if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar1)], __LIB_18__::func_410(bVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_91.f_48[bVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_91.f_48[bVar1]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_748())
																		{
																			iVar7 = func_750();
																			Local_92.f_7 = (Local_92.f_7 + iVar7);
																			if (Local_92.f_11 == 0)
																			{
																				Local_92.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			}
																			func_747(0, "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_KILL_LIST_KILL"), iVar7, 1, -1, 0);
																			func_746();
																		}
																	}
																	MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar1)]), __LIB_18__::func_410(bVar1));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[__LIB_13__::func_437(bVar1)]), __LIB_18__::func_410(bVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar1]))
				{
				}
				bVar1++;
			}
		}
	}
}

int func_760(int iParam0)//Position - 0x240C4
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_91.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_761()//Position - 0x2410E
{
	int iVar0;
	int iVar1;
	if (Local_91.f_27 != joaat("hydra"))
	{
		if (iLocal_581 == 0)
		{
			iLocal_581 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[iLocal_581]))
		{
			if (!__LIB_0__::func_951(Local_91.f_48[iLocal_581]))
			{
				iVar0 = NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_PED(Local_91.f_48[iLocal_581]));
				if (iLocal_582[iLocal_581] != iVar0)
				{
					iLocal_582[iLocal_581] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_91.f_48[iLocal_581], true);
				}
			}
		}
		iLocal_581++;
		if (iLocal_581 == 23)
		{
			iLocal_581 = 20;
		}
	}
	if (Local_91.f_27 != joaat("hydra") && Local_91.f_27 != joaat("rhino"))
	{
		if (!bLocal_585)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[iVar1]))
					{
						if (__LIB_0__::func_939(Local_91.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_91.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_91.f_73[iVar1], true);
								bLocal_585 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_73[iLocal_583]))
	{
		if (__LIB_0__::func_939(Local_91.f_73[iLocal_583]))
		{
			iVar0 = NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_PED(Local_91.f_73[iLocal_583]));
			if (iLocal_584[iLocal_583] != iVar0)
			{
				iLocal_584[iLocal_583] = iVar0;
				if (!bLocal_585)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_91.f_73[iLocal_583], true);
				}
			}
		}
	}
	iLocal_583++;
	if (iLocal_583 == 5)
	{
		iLocal_583 = 0;
	}
}

void func_762()//Position - 0x24295
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar9 = -1;
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (BitTest(uLocal_557, bVar0))
		{
			if (Local_91.f_85[bVar0] != 2)
			{
				MISC::CLEAR_BIT(&uLocal_557, bVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_48[bVar0]))
		{
			func_766(bVar0);
			if (!__LIB_0__::func_951(Local_91.f_48[bVar0]))
			{
				switch (Local_91.f_85[bVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_48[bVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), false);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != __LIB_0__::func_162())
											{
												iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
												if (!PED::IS_PED_INJURED(iVar6))
												{
													if (__LIB_0__::func_76(iVar2, iVar6, 1) > 250f)
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar6, true) };
														TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
									{
										iVar11 = 1;
										iVar10 = (bVar0 / 4);
									}
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0) || ((iVar11 && iVar10 < 5) && iLocal_97[iVar10] != Local_91.f_110[iVar10]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
										{
											iVar9 = Local_91.f_110[iVar10];
											if (iVar9 > -1)
											{
												iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar9);
												if (iVar5 != __LIB_0__::func_162())
												{
													iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
													if (!PED::IS_PED_INJURED(iVar6))
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar6, true) };
														TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 1.4E-43f, 7E-44f, true);
														if (iLocal_97[iVar10] != Local_91.f_110[iVar10])
														{
															iLocal_97[iVar10] = Local_91.f_110[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED")) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_91.f_48[bVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != __LIB_0__::func_162())
										{
											iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
											if (!PED::IS_PED_INJURED(iVar6))
											{
												fVar7 = __LIB_0__::func_76(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), ENTITY::GET_ENTITY_COORDS(iVar6, true), 2f, iVar2, true, 786469, -1f, 0f, 20f, 0, 30f, 4f);
												}
												else if (fVar7 > 250f)
												{
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, true);
												}
											}
										}
									}
								}
							}
						}
						break;
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_48[bVar0]))
						{
							if (!func_23())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), false))
									{
										if (!BitTest(uLocal_557, bVar0))
										{
											iVar8 = func_765(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 1133084672);
											if (iVar8 > -1)
											{
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 299f, 0);
											}
											else if (!BitTest(uLocal_557, bVar0))
											{
												func_764(bVar0, __LIB_1__::func_26(1));
												MISC::SET_BIT(&uLocal_557, bVar0);
											}
										}
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					case 3:
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), -251125078) != 0)
						{
							Var4 = { func_763() };
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_91.f_48[bVar0]), Var4, 10000f, 999999, false, false);
						}
						break;
					}
				}
		}
		bVar0++;
	}
}

Vector3 func_763()//Position - 0x247B4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), false);
		}
		iVar0++;
	}
	return Local_91.f_30[0 /*3*/];
}

void func_764(bool bParam0, int iParam1)//Position - 0x247FA
{
	struct<3> Var0;
	Var0.f_0 = 474913336;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_765(int iParam0, float fParam1)//Position - 0x2482C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar3]))
		{
			if (__LIB_0__::func_939(Local_91.f_7[iVar3]))
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_91.f_7[iVar3]), -1, false);
				if (!PED::IS_PED_INJURED(iVar5))
				{
					if (PED::IS_PED_A_PLAYER(iVar5))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iVar3]), true) };
						fVar2 = __LIB_0__::func_724(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_766(bool bParam0)//Position - 0x248D1
{
	int iVar0;
	return;
	if (!__LIB_0__::func_951(Local_91.f_48[bParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_91.f_48[bParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_91.f_48[bParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_91.f_48[bParam0]), false);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_91.f_48[bParam0]), 5, 0);
					}
				}
			}
		}
	}
}

bool func_768()//Position - 0x2496F
{
	return BitTest(Local_91.f_3, 8);
}

void func_773()//Position - 0x25268
{
	bool bVar0;
	struct<3> Var1;
	if (BitTest(Local_91.f_3, 12))
	{
		func_196();
	}
	if (func_768())
	{
		if (iLocal_551 != Local_91.f_12)
		{
			iLocal_551 = Local_91.f_12;
			func_196();
		}
	}
	if (!func_204())
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_102[bVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
				{
					if (__LIB_0__::func_939(Local_91.f_7[bVar0]))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]), false) };
						if (!func_774(bVar0, Var1))
						{
							if (!BitTest(Local_91.f_13, bVar0))
							{
								iLocal_102[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_91.f_7[bVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_102[bVar0], 429);
								__LIB_2__::func_53(&(iLocal_102[bVar0]), 29);
								if (!BitTest(uLocal_95, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_102[bVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_102[bVar0], 7000);
									MISC::SET_BIT(&uLocal_95, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_102[bVar0], 9);
								if (func_768())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIPC" /* GXT: Kill List Competitive */);
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102[bVar0], "UW_BLIP" /* GXT: Kill List */);
								}
								if (!BitTest(uLocal_96, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&uLocal_96, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[bVar0]))
			{
				if (!__LIB_0__::func_939(Local_91.f_7[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
				}
				else if (BitTest(Local_91.f_13, bVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_102[bVar0]));
			}
			bVar0++;
		}
	}
	else
	{
		func_196();
	}
}

int func_774(int iParam0, struct<3> Param1)//Position - 0x25412
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_91.f_7[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_91.f_7[iVar0]), false) };
				if (__LIB_0__::func_78(Param1, Var1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_102[iVar0]))
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

int func_776(int iParam0)//Position - 0x25484
{
	return Local_94[iParam0 /*18*/];
}

void func_777()//Position - 0x25493
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
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_800())
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
		if (__LIB_1__::func_17(PLAYER::PLAYER_ID()))
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
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
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
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_2__::func_14())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				__LIB_1__::func_707("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				__LIB_1__::func_752(1);
			}
		}
	}
	if (((((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_3__::func_438(PLAYER::PLAYER_ID())) && __LIB_1__::func_592(PLAYER::PLAYER_ID()) != 146) && !__LIB_3__::func_491(PLAYER::PLAYER_ID())) && !__LIB_2__::func_139(PLAYER::PLAYER_ID())) && !__LIB_2__::func_77())
	{
		if (__LIB_3__::func_160(__LIB_1__::func_592(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (__LIB_3__::func_131(PLAYER::PLAYER_ID()) || __LIB_2__::func_56())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (__LIB_3__::func_450(__LIB_1__::func_592(PLAYER::PLAYER_ID())))
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
		if (__LIB_1__::func_17(PLAYER::PLAYER_ID()))
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

int func_800()//Position - 0x25EFF
{
	int iVar0;
	if (!__LIB_0__::func_864(&(Global_1836844.f_15)))
	{
		__LIB_0__::func_795(&(Global_1836844.f_15), 0, 0);
		Global_1836844.f_17 = 0;
	}
	else if (__LIB_0__::func_937(&(Global_1836844.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836844.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836844.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (__LIB_0__::func_156(iVar0, 1, 1) && __LIB_1__::func_838(iVar0, 6))
				{
					if (SYSTEM::VDIST(__LIB_1__::func_694(PLAYER::PLAYER_ID()), __LIB_1__::func_694(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836844.f_17++;
		if (Global_1836844.f_17 >= 32)
		{
			Global_1836844.f_17 = 0;
			__LIB_0__::func_794(&(Global_1836844.f_15));
		}
	}
	return 0;
}

void func_811()//Position - 0x26457
{
	int iVar0;
	func_196();
	if (__LIB_3__::func_242() == 4 && Local_91.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_91.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2815059.f_4662), 1);
	__LIB_1__::func_460(19, 0);
	__LIB_3__::func_157(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		__LIB_31__::func_628(129, 0, BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	__LIB_1__::func_916(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_100 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_100);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 129)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_104)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_106);
	}
	func_815();
	__LIB_12__::func_561(0, 129);
	if (BitTest(uLocal_95, 22))
	{
		__LIB_3__::func_351();
		MISC::CLEAR_BIT(&uLocal_95, 22);
	}
	if (BitTest(uLocal_95, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		if (!BitTest(uLocal_95, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_101 != -100f)
	{
		func_542(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_101);
	}
	func_541(0);
	if (__LIB_0__::func_959())
	{
		Local_92.f_5 = 5;
	}
	else if (__LIB_42__::func_980(2, 0, 0, 0, 0))
	{
		Local_92.f_5 = 6;
	}
	else if (Local_92.f_5 != 1)
	{
		Local_92.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_554);
	Local_92.f_0 = Local_91.f_611;
	Local_92.f_1 = Local_91.f_612;
	Local_92.f_4 = Local_91.f_613;
	Local_92.f_3 = Local_91.f_615;
	if (Local_92.f_9 > 0)
	{
		Local_92.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_92.f_9);
	}
	if ((!Global_262145.f_11974 /* Tunable: KILL_LIST_DISABLE_SHARE_CASH */ && !BitTest(Local_91.f_3, 8)) || (!Global_262145.f_11975 /* Tunable: KILL_LIST_COMPETITIVE_DISABLE_SHARE_CASH */ && BitTest(Local_91.f_3, 8)))
	{
		if (Local_92.f_6 > 0)
		{
		}
	}
	if (BitTest(Local_91.f_3, 8))
	{
		iVar0 = 1;
	}
	if (BitTest(uLocal_96, 1))
	{
		__LIB_2__::func_445(1);
		NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
	}
	if (iVar0 == 0)
	{
		__LIB_2__::func_758(Local_92, Local_91.f_27, Local_91.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		__LIB_2__::func_758(Local_92, Local_91.f_279, Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (__LIB_1__::func_785(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_963(0);
	}
	func_672(0);
	__LIB_15__::func_295(1);
	__LIB_0__::func_202();
}

void func_815()//Position - 0x26968
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_105);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_104);
}

void func_857(struct<21> Param0)//Position - 0x27562
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	__LIB_0__::func_895(0, -1, 0);
	__LIB_3__::func_468(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_91, 617, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_94, 577, 0);
	func_862(1);
	if (!__LIB_0__::func_934())
	{
		func_811();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_91.f_17[iVar0] = __LIB_0__::func_162();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_91.f_22[iVar0] = __LIB_0__::func_162();
				Local_91.f_256[iVar0] = -1;
				Local_91.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_91.f_611), &(Local_91.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_97[iVar0] = -1;
			iVar0++;
		}
		Local_92.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_92.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_1__::func_460(19, 1);
		func_858();
		if (func_204())
		{
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2815059.f_5119 = -1;
		Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_811();
	}
}

void func_858()//Position - 0x276A3
{
	int iVar0;
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_104);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_105);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar0], iLocal_104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, Global_1837161[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[iVar0], iLocal_105);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_105, Global_1837161[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, Global_1837209[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837209[5], iLocal_104);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_104, Global_1837194);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837194, iLocal_104);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_104, iLocal_105);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_105, iLocal_104);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), iLocal_105);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), iLocal_104);
	__LIB_12__::func_526(1, &iLocal_105);
	__LIB_12__::func_525(&iLocal_105);
	__LIB_12__::func_525(&iLocal_104);
}

void func_862(bool bParam0)//Position - 0x27953
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == __LIB_0__::func_942())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1317) || Global_2678393.f_1317 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2678393.f_1317 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2678393.f_1317 = -1;
		}
	}
}

