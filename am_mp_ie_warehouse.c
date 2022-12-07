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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<321> Local_130 = { 0, 1, -1, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1 } ;
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
	var uLocal_151 = 15;
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
	struct<385> Local_258 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13 } ;
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
	var uLocal_532 = 206;
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
	var uLocal_739 = 13;
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
	bool bLocal_754 = 0;
	bool bLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	float fLocal_764[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<2> Local_765[8];
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	struct<3> Local_772[8];
	struct<3> Local_773 = { 0, 0, 0 } ;
	int iLocal_774 = 0;
	var uLocal_775 = 0;
	struct<800> Local_776 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = -1;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	int* iLocal_782 = NULL;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	struct<10> Local_792[32];
	struct<5> Local_793 = { 0, 0, 0, 0, 0 } ;
	var uLocal_794 = 0;
	struct<1093> Local_795 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	int iLocal_801 = 0;
	char* sLocal_802 = NULL;
	var uLocal_803 = 0;
	var uLocal_804 = 15;
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
	var uLocal_822 = 15;
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
	int iLocal_838 = 0;
	struct<6> Local_839[15];
	struct<4> Local_840 = { 0, 0, 0, 0 } ;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	struct<3> Local_847 = { 0, 0, 0 } ;
	struct<3> Local_848 = { 0, 0, 0 } ;
	float fLocal_849 = 0f;
	struct<3> Local_850 = { 0, 0, 0 } ;
	struct<3> Local_851 = { 0, 0, 0 } ;
	int iLocal_852[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_853[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	struct<3> Local_865 = { 0, 0, 0 } ;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
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
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	iLocal_796 = -1;
	iLocal_801 = -1;
	fLocal_849 = 0.928f;
	Local_850 = { 0.015f, -0.25f, -0.222f };
	Local_851 = { 0.015f, -1.05f, 1.486f };
	iLocal_864 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5238(&ScriptParam_865);
	}
	else
	{
		func_5226();
	}
	while (true)
	{
		__LIB_0__::func_671();
		CAM::CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE();
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 444, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 353 /*INPUT_VEH_PARACHUTE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
		func_5193();
		func_4998(&Local_130, &(Local_258.f_384));
		func_4997();
		if (__LIB_6__::func_949())
		{
			__LIB_4__::func_325(1);
			func_5226();
		}
		if (func_4987(ScriptParam_865.f_2, Local_795.f_3))
		{
			__LIB_4__::func_325(1);
			func_5226();
		}
		if (((Local_795.f_55 == PLAYER::PLAYER_ID() && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) && func_4986()) && !Global_2667225.f_2680)
		{
			NETWORK::NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT();
		}
		iLocal_756 = 0;
		if (func_4983())
		{
			Local_792[PLAYER::PLAYER_ID() /*10*/].f_5 = 0;
			Local_793.f_0 = 0;
		}
		func_4982();
		if (!func_4981(1))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		}
		if (func_4980(1))
		{
			func_303();
		}
		__LIB_32__::func_243();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x22E
{
	if (func_4980(0) && func_103())
	{
		func_102(1);
	}
	else if (func_4980(1))
	{
		__LIB_8__::func_776(&(Local_792[iLocal_774 /*10*/].f_4), &(Local_258.f_57), &iLocal_774);
		__LIB_41__::func_606(&(Local_258.f_2), &(Local_792[Local_776.f_9 /*10*/].f_1), &Local_776, &Global_4194304);
		func_32();
		func_103();
		func_31();
	}
	__LIB_39__::func_767(&(Local_258.f_384), &Local_130, -1);
}

void func_31()//Position - 0xEF1
{
	if (bLocal_754)
	{
		if (!BitTest(Local_258.f_1, 0))
		{
			MISC::SET_BIT(&(Local_258.f_1), 0);
		}
	}
	else if (BitTest(Local_258.f_1, 0))
	{
		MISC::CLEAR_BIT(&(Local_258.f_1), 0);
	}
	if (bLocal_755)
	{
		if (!BitTest(Local_258.f_1, 1))
		{
			MISC::SET_BIT(&(Local_258.f_1), 1);
		}
	}
	else if (BitTest(Local_258.f_1, 1))
	{
		MISC::CLEAR_BIT(&(Local_258.f_1), 1);
	}
}

void func_32()//Position - 0xF5D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_1__::func_264(iVar1, 1, 1))
			{
				if (func_33(iVar1))
				{
					PED::FORCE_ZERO_MASS_IN_COLLISIONS(PLAYER::GET_PLAYER_PED(iVar1));
				}
			}
		}
		iVar0++;
	}
}

int func_33(int iParam0)//Position - 0xFB1
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), 970.40875f, -3013.5679f, -48.542145f, 970.3889f, -2985.8176f, -43.78562f, 68.4375f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x73DD
{
	Local_258.f_0 = iParam0;
}

int func_103()//Position - 0x73EA
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bVar1 = false;
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 8)
	{
		bVar1 = false;
		iVar4 = (bVar2 + __LIB_18__::func_704(11));
		__LIB_1__::func_327(iVar4, &iVar3, 0);
		if (Local_795.f_55 == PLAYER::PLAYER_ID())
		{
			if (((iVar3 >= 0 && Global_1585857[iVar3 /*142*/].f_66 != 0) && __LIB_7__::func_193(Global_1585857[iVar3 /*142*/].f_66, 1)) && __LIB_1__::func_392(Global_1585857[iVar3 /*142*/].f_66))
			{
				if (((((!BitTest(Global_1585857[iVar3 /*142*/].f_103, 0) && !BitTest(Global_1585857[iVar3 /*142*/].f_103, 1)) && !BitTest(Global_1585857[iVar3 /*142*/].f_103, 6)) && !BitTest(Global_1585857[iVar3 /*142*/].f_103, 23)) && Global_2815059.f_958 != iVar3) && !Local_795.f_1074)
				{
					if (BitTest(Global_1585857[iVar3 /*142*/].f_103, 12))
					{
						if (!__LIB_0__::func_649(&(Local_765[bVar2 /*2*/])))
						{
							__LIB_0__::func_580(&(Local_765[bVar2 /*2*/]), 1, 0);
						}
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_258.f_371[bVar2]))
						{
							if (__LIB_2__::func_63(Local_258.f_371[bVar2]))
							{
								if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) != 2)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), 2);
									}
									else
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
									}
								}
								if (__LIB_7__::func_225(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), 1, 1, 0, 0, 0, 1, 0, 1) || __LIB_2__::func_47(&(Local_765[bVar2 /*2*/]), 3000, 1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
									{
										if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("phantom2"))
										{
											bLocal_754 = false;
										}
										else if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("dune5"))
										{
											bLocal_755 = false;
										}
										__LIB_1__::func_96(&(Local_258.f_371[bVar2]));
										Local_258.f_277[bVar2] = -1;
										Local_258.f_264 = (Local_258.f_264 - 1);
										NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
										MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
										MISC::CLEAR_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
									}
									else
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
									}
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
							{
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("phantom2"))
								{
									bLocal_754 = false;
								}
								else if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("dune5"))
								{
									bLocal_755 = false;
								}
								__LIB_1__::func_96(&(Local_258.f_371[bVar2]));
								Local_258.f_277[bVar2] = -1;
								Local_258.f_264 = (Local_258.f_264 - 1);
								NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
								MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
								MISC::CLEAR_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
						}
					}
					else if (!BitTest(Global_1585857[iVar3 /*142*/].f_103, 10))
					{
						if (BitTest(Global_1585857[iVar3 /*142*/].f_103, 8))
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = false;
						}
						__LIB_37__::func_835(iVar3);
						if (!__LIB_1__::func_371(Global_1585857[iVar3 /*142*/].f_66))
						{
							func_211(iVar3, -1);
						}
						else if (!func_106(Global_1585857[iVar3 /*142*/], bVar2, iVar3, bVar0))
						{
							return 0;
						}
						else if (Global_1585857[iVar3 /*142*/].f_66 == joaat("phantom2"))
						{
							bLocal_754 = true;
						}
						else if (Global_1585857[iVar3 /*142*/].f_66 == joaat("dune5"))
						{
							bLocal_755 = true;
						}
						__LIB_0__::func_579(&(Local_765[bVar2 /*2*/]));
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (iVar3 >= 0 && BitTest(Global_1585857[iVar3 /*142*/].f_103, 23))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_258.f_371[bVar2]))
				{
					if (__LIB_2__::func_63(Local_258.f_371[bVar2]))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) != 2)
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), 2);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
							}
						}
						if (!__LIB_0__::func_649(&(Local_765[bVar2 /*2*/])))
						{
							__LIB_0__::func_580(&(Local_765[bVar2 /*2*/]), 1, 0);
						}
						if (__LIB_7__::func_225(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), 1, 1, 0, 0, 0, 1, 0, 1) || __LIB_2__::func_47(&(Local_765[bVar2 /*2*/]), 3000, 1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
							{
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("phantom2"))
								{
									bLocal_754 = false;
								}
								else if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("dune5"))
								{
									bLocal_755 = false;
								}
								__LIB_1__::func_96(&(Local_258.f_371[bVar2]));
								NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
								Local_258.f_264 = (Local_258.f_264 - 1);
								MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
								if (iVar3 >= 0)
								{
									MISC::CLEAR_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
								}
								Local_258.f_277[bVar2] = -1;
							}
							else
							{
								if (iVar3 >= 0)
								{
									if (!BitTest(Global_1585857[iVar3 /*142*/].f_103, 12))
									{
										MISC::SET_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
									}
								}
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
							}
						}
						else if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), false))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 512);
							}
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("phantom2"))
						{
							bLocal_754 = false;
						}
						else if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("dune5"))
						{
							bLocal_755 = false;
						}
						__LIB_1__::func_96(&(Local_258.f_371[bVar2]));
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
						Local_258.f_264 = (Local_258.f_264 - 1);
						MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
						Local_258.f_277[bVar2] = -1;
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
					}
				}
				else
				{
					__LIB_0__::func_579(&(Local_765[bVar2 /*2*/]));
				}
			}
		}
		else if (Local_795.f_55 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_264(Local_795.f_55, 0, 1))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_795.f_55))
				{
					if (Global_1853348[Local_795.f_55 /*834*/].f_774 == Local_258.f_277[bVar2] && Local_258.f_277[bVar2] >= 0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_258.f_371[bVar2]))
						{
							if (__LIB_2__::func_63(Local_258.f_371[bVar2]))
							{
								if (!__LIB_0__::func_649(&(Local_765[bVar2 /*2*/])))
								{
									__LIB_0__::func_580(&(Local_765[bVar2 /*2*/]), 1, 0);
								}
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
								{
									if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) != 2)
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), 2);
									}
								}
								if (__LIB_7__::func_225(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), 1, 1, 0, 0, 0, 1, 0, 1) || __LIB_2__::func_47(&(Local_765[bVar2 /*2*/]), 3000, 1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
									{
										if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("phantom2"))
										{
											bLocal_754 = false;
										}
										else if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("dune5"))
										{
											bLocal_755 = false;
										}
										__LIB_1__::func_96(&(Local_258.f_371[bVar2]));
										Local_258.f_277[bVar2] = -1;
										NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
										Local_258.f_264 = (Local_258.f_264 - 1);
										MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
										if (iVar3 >= 0)
										{
											MISC::CLEAR_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
										}
									}
									else
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
									}
								}
								else if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_258.f_371[bVar2]), false))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 512);
									}
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]))
							{
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("phantom2"))
								{
									bLocal_754 = false;
								}
								else if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_258.f_371[bVar2])) == joaat("dune5"))
								{
									bLocal_755 = false;
								}
								__LIB_1__::func_96(&(Local_258.f_371[bVar2]));
								Local_258.f_277[bVar2] = -1;
								NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
								Local_258.f_264 = (Local_258.f_264 - 1);
								MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
								if (iVar3 >= 0)
								{
									MISC::CLEAR_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 12);
								}
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bVar2]);
							}
						}
						else
						{
							if (bVar2 == __LIB_1__::func_367(joaat("phantom2")))
							{
								bLocal_754 = false;
							}
							else if (bVar2 == __LIB_1__::func_367(joaat("dune5")))
							{
								bLocal_755 = false;
							}
							__LIB_0__::func_579(&(Local_765[bVar2 /*2*/]));
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_258.f_371[bVar2]))
					{
						if (bVar2 == __LIB_1__::func_367(joaat("phantom2")))
						{
							bLocal_754 = true;
						}
						else if (bVar2 == __LIB_1__::func_367(joaat("dune5")))
						{
							bLocal_755 = true;
						}
					}
					else if (bVar2 == __LIB_1__::func_367(joaat("phantom2")))
					{
						bLocal_754 = false;
					}
					else if (bVar2 == __LIB_1__::func_367(joaat("dune5")))
					{
						bLocal_755 = false;
					}
				}
			}
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_258.f_371[bVar2]))
		{
			if (BitTest(Local_258.f_265, bVar2))
			{
				Local_258.f_267 = (Local_258.f_267 - 1);
				MISC::CLEAR_BIT(&(Local_258.f_266), bVar2);
				MISC::CLEAR_BIT(&(Local_258.f_265), bVar2);
				Local_258.f_268[bVar2] = 0;
			}
			__LIB_0__::func_579(&(Local_765[bVar2 /*2*/]));
		}
		bVar2++;
	}
	return 1;
}

int func_106(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, bool bParam12, int iParam13, bool bParam14)//Position - 0x7EA5
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_63(Local_258.f_371[bParam12]))
	{
		if (STREAMING::IS_MODEL_IN_CDIMAGE(Param0.f_66))
		{
			if (__LIB_0__::func_584(Param0.f_66))
			{
				if (__LIB_6__::func_977(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1, 0, 1))
				{
					if (!BitTest(Local_258.f_266, bParam12))
					{
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1);
						Local_258.f_264++;
						MISC::SET_BIT(&(Local_258.f_266), bParam12);
					}
					func_206(Local_772[bParam12 /*3*/]);
					if (!func_205())
					{
						return 0;
					}
					if (BitTest(Local_258.f_266, bParam12))
					{
						if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
						{
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
							}
							iVar0 = VEHICLE::CREATE_VEHICLE(Param0.f_66, Local_772[bParam12 /*3*/], fLocal_764[bParam12], true, true, false);
							Local_258.f_371[bParam12] = NETWORK::VEH_TO_NET(iVar0);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
							Local_258.f_268[bParam12] = 0;
							if (bParam14)
							{
								func_202(&iVar0, iParam13);
							}
							else
							{
								__LIB_40__::func_878(&iVar0, iParam13);
								MISC::SET_BIT(&(Local_258.f_268[bParam12]), 0);
							}
							Local_258.f_277[bParam12] = iParam13;
							NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
							VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
							VEHICLE::SET_VEHICLE_FULLBEAM(iVar0, false);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar0, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							if (Local_795.f_55 != __LIB_0__::func_160())
							{
								if (__LIB_1__::func_264(Local_795.f_55, 0, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, Local_795.f_55, false);
								}
							}
							VEHICLE::SET_VEHICLE_FIXED(iVar0);
							ENTITY::SET_ENTITY_HEALTH(iVar0, 1000, 0);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, 1000f);
							VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
							VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, true);
							MISC::CLEAR_BIT(&(Local_258.f_265), bParam12);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
							ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
							if ((Param0.f_66 == joaat("dune5") || Param0.f_66 == joaat("boxville5")) || Param0.f_66 == joaat("wastelander"))
							{
								VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iVar0, 1f);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
							{
								if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle"))
								{
									DECORATOR::DECOR_SET_INT(iVar0, "Player_Vehicle", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
								}
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
								{
									iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
								}
								MISC::SET_BIT(&iVar1, 23);
								DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar1);
							}
							NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_258.f_371[bParam12], PLAYER::PLAYER_ID(), false);
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!BitTest(Local_258.f_265, bParam12))
	{
		if (!BitTest(Local_258.f_268[bParam12], 1))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_258.f_371[bParam12]);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_258.f_371[bParam12]))
			{
				if (!BitTest(Local_258.f_268[bParam12], 0))
				{
					if (bParam14)
					{
						if (func_202(&iVar0, iParam13))
						{
							MISC::SET_BIT(&(Local_258.f_268[bParam12]), 0);
						}
					}
					else
					{
						__LIB_40__::func_878(&iVar0, iParam13);
						MISC::SET_BIT(&(Local_258.f_268[bParam12]), 0);
					}
				}
				else if (VEHICLE::HAVE_VEHICLE_MODS_STREAMED_IN(iVar0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
					MISC::SET_BIT(&(Local_258.f_268[bParam12]), 1);
					Local_258.f_267++;
					MISC::SET_BIT(&(Local_258.f_265), bParam12);
					ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
					VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(iVar0, 0, 0f);
					VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(iVar0, 1, 0f);
					VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(iVar0, 2, 0f);
					VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(iVar0, 3, 0f);
					VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(iVar0, 4, 0f);
					VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(iVar0, 5, 0f);
					VEHICLE::SET_CAN_USE_HYDRAULICS(iVar0, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param0.f_66);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
					if (Local_795.f_55 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(Local_795.f_55, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, Local_795.f_55, false);
						}
					}
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, true);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_258.f_371[bParam12]);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0, int iParam1)//Position - 0x1139A
{
	if (!BitTest(Global_1585857[iParam1 /*142*/].f_103, 8))
	{
		__LIB_40__::func_878(iParam0, iParam1);
		return 1;
	}
	else if (func_203(*iParam0, &(Global_1585857[iParam1 /*142*/]), 0, 1))
	{
		__LIB_35__::func_581(iParam0, iParam1);
		return 1;
	}
	return 0;
}

int func_203(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x113E3
{
	if (__LIB_7__::func_960(iParam0))
	{
		return 1;
	}
	else if (!__LIB_31__::func_992(iParam0, &(uParam1->f_81)))
	{
		uParam1->f_81 = { __LIB_0__::func_593() };
		__LIB_37__::func_905(iParam0, uParam1, bParam2, bParam3, 0);
		return 1;
	}
	else if (!__LIB_6__::func_920(iParam0))
	{
		uParam1->f_81 = { __LIB_0__::func_593() };
		MISC::SET_BIT(&(uParam1->f_95), 0);
		__LIB_37__::func_905(iParam0, uParam1, bParam2, bParam3, 0);
	}
	return 0;
}

bool func_205()//Position - 0x114A3
{
	return !BitTest(Local_258.f_381.f_1, 0);
}

void func_206(struct<3> Param0)//Position - 0x114B6
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	fVar4 = 3f;
	if (!iLocal_756)
	{
		Local_258.f_381.f_1 = 0;
		Local_258.f_381 = 0;
		iLocal_756 = 1;
	}
	if (__LIB_0__::func_394(Local_773, Param0, 0.1f, 0))
	{
		if (!__LIB_0__::func_649(&uLocal_766))
		{
			__LIB_0__::func_580(&uLocal_766, 1, 0);
		}
		else if (__LIB_2__::func_47(&uLocal_766, 15000, 1))
		{
			return;
		}
	}
	else
	{
		__LIB_0__::func_579(&uLocal_766);
	}
	Local_773 = { Param0 };
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (__LIB_1__::func_264(iVar0, 0, 1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				if (!BitTest(Local_258.f_381, bVar1))
				{
					if (__LIB_1__::func_264(iVar0, 1, 1))
					{
						if (!__LIB_8__::func_496(iVar0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), true) };
							fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param0, true);
							if (fVar3 < fVar4)
							{
								MISC::SET_BIT(&(Local_258.f_381), bVar1);
								MISC::SET_BIT(&(Local_258.f_381.f_1), 0);
							}
						}
					}
				}
			}
		}
		bVar1++;
	}
}

void func_211(int iParam0, int iParam1)//Position - 0x116D0
{
	int iVar0;
	__LIB_1__::func_252(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_233(iVar0, -1, -1);
	}
	__LIB_4__::func_819(&(Global_1585857[iParam0 /*142*/]));
	Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_35__::func_565(iParam0, &(Global_1585857[iParam0 /*142*/]), 0, iParam1, 0, 0);
}

void func_233(int iParam0, int iParam1, int iParam2)//Position - 0x1C0A9
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_234(iParam0, iParam1, iParam2);
	if (iParam0 >= 363)
	{
		return;
	}
	if (iParam2 == __LIB_0__::func_5() || iParam2 == -1)
	{
		Global_1940666[iParam0] = iParam1;
	}
}

void func_234(int iParam0, int iParam1, int iParam2)//Position - 0x1C0F3
{
	if (iParam1 <= 255)
	{
		__LIB_1__::func_39(func_236(iParam0), iParam1, iParam2);
		__LIB_1__::func_39(__LIB_1__::func_369(iParam0), 0, iParam2);
	}
	else
	{
		__LIB_1__::func_39(func_236(iParam0), 255, iParam2);
		__LIB_1__::func_39(__LIB_1__::func_369(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_236(int iParam0)//Position - 0x1C1F0
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
		return ((36568/*func_130*/ + iParam0) - 337);
	}
	return (4036 + iParam0);
}

void func_303()//Position - 0x21BF7
{
	bool bVar0;
	int iVar1;
	func_4970();
	func_4967();
	func_4966();
	func_4960();
	if (func_4981(0))
	{
		bVar0 = false;
		if (!Global_1946236)
		{
			func_4943();
		}
		if (func_4942(&Local_795))
		{
			if (__LIB_1__::func_168())
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 360, true);
				if (func_4939())
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (__LIB_4__::func_237())
		{
			__LIB_4__::func_94(1, 1);
			iVar1 = 0;
			if (!__LIB_0__::func_649(&uLocal_770))
			{
				__LIB_0__::func_580(&uLocal_770, 0, 0);
			}
			if (bVar0)
			{
				if (Local_795.f_1081)
				{
					func_4936(7);
				}
				else
				{
					if (__LIB_2__::func_47(&uLocal_770, 10000, 0))
					{
						iVar1 = 1;
					}
					if (Global_1946236 || iVar1)
					{
						func_4936(1);
						__LIB_4__::func_94(0, 1);
						__LIB_4__::func_95(1);
						__LIB_0__::func_579(&uLocal_770);
					}
				}
			}
		}
	}
	else if (func_4981(1))
	{
		if (__LIB_1__::func_168())
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_258.f_371[Local_795.f_51]), false)) && CAM::IS_SCREEN_FADED_IN())
			{
				TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_258.f_371[Local_795.f_51]), 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 360, false);
			}
			__LIB_7__::func_390();
		}
		if (Global_262145.f_32731 /* Tunable: -1438420804 */)
		{
			func_4931(&iLocal_782);
		}
		func_419();
		func_418();
		func_386();
		func_382();
		func_379();
		func_377();
		func_375();
		func_368();
		func_363();
		func_361();
		if (Local_795.f_1081)
		{
			func_4936(6);
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	else if (func_4981(6))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_4936(7);
		}
	}
	else if (func_4981(4))
	{
		if (__LIB_6__::func_471(5, &(Local_795.f_478)))
		{
			CAM::DO_SCREEN_FADE_OUT(322);
			func_4936(5);
		}
	}
	else if (func_4981(5))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!BitTest(Local_795.f_478, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_795.f_478.f_79) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_795.f_478.f_80))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, Local_795.f_478.f_79, Local_795.f_478.f_80, true);
				}
				MISC::SET_BIT(&(Local_795.f_478), 0);
			}
			__LIB_37__::func_997(&(Local_795.f_478), 0);
		}
		Global_1946236 = 0;
		Global_1946237 = 0;
	}
	else if (func_4981(7))
	{
		if (func_308())
		{
			if (!__LIB_4__::func_775())
			{
				CAM::DO_SCREEN_FADE_IN(322);
				NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 1);
				__LIB_3__::func_945(0);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
				}
			}
			__LIB_4__::func_95(1);
			__LIB_4__::func_94(0, 1);
			Global_1946250.f_515 = 1;
			func_4936(1);
			if (BitTest(Local_795.f_0, 7))
			{
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
				MISC::CLEAR_BIT(&Local_795, 7);
			}
		}
	}
}

int func_308()//Position - 0x2200E
{
	int iVar0;
	switch (Local_795.f_1082)
	{
		case 0:
			func_357();
			Local_795.f_1082++;
			break;
		case 1:
			if (func_356())
			{
				func_355();
				func_352();
				ENTITY::CREATE_MODEL_HIDE(961.2841f, -2999.709f, -40.6349f, 5f, joaat("v_ilev_roc_door2"), true);
				ENTITY::CREATE_MODEL_HIDE(967.4402f, -3007.4153f, -40.647f, 5f, joaat("v_ilev_roc_door3"), true);
				Local_795.f_1082++;
			}
			break;
		case 2:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_351();
				Local_795.f_1082++;
			}
			break;
		case 3:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_350();
				__LIB_9__::func_316();
				CUTSCENE::START_CUTSCENE(0);
				__LIB_31__::func_924(0, 1, 1, 0, 1, 1, 0);
				__LIB_8__::func_857(1, 1, 0);
				__LIB_6__::func_849(0);
				if (Global_32234 != 1)
				{
					func_331(1);
				}
				Local_795.f_1082++;
			}
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Local_795.f_1082++;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
			break;
		case 5:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (BitTest(Local_795.f_0, 1))
					{
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				ENTITY::REMOVE_MODEL_HIDE(961.2841f, -2999.709f, -40.6349f, 5f, joaat("v_ilev_roc_door2"), false);
				ENTITY::REMOVE_MODEL_HIDE(967.4402f, -3007.4153f, -40.647f, 5f, joaat("v_ilev_roc_door3"), false);
				func_328();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("phantom2"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer5"));
				__LIB_31__::func_954(1, 0, 0, 1);
				if (Local_795.f_55 == PLAYER::PLAYER_ID())
				{
					iVar0 = Global_1659747[__LIB_1__::func_443(-1)];
					MISC::SET_BIT(&iVar0, 26);
					__LIB_1__::func_603(1304, iVar0, -1, 1);
				}
				MISC::CLEAR_BIT(&(Local_792[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
				Local_795.f_1081 = 0;
				Local_795.f_1082++;
				return 1;
			}
			break;
	}
	return 0;
}

void func_328()//Position - 0x2338F
{
	int iVar0;
	int iVar1;
	iVar0 = Local_795.f_1086;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	iVar1 = func_329();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
}

int func_329()//Position - 0x233BA
{
	int iVar0;
	if (__LIB_5__::func_750(Local_795.f_55))
	{
		iVar0 = joaat("MP_M_ExecPA_01");
	}
	else
	{
		iVar0 = joaat("MP_F_ExecPA_02");
	}
	return iVar0;
}

void func_331(bool bParam0)//Position - 0x233FA
{
	struct<3> Var0;
	struct<3> Var1;
	Global_75490 = 0;
	Local_792[PLAYER::PLAYER_ID() /*10*/].f_9 = -1;
	if (__LIB_0__::func_661())
	{
		__LIB_0__::func_789();
	}
	if ((__LIB_4__::func_492() || __LIB_4__::func_491()) || __LIB_4__::func_490())
	{
		HUD::CLEAR_HELP(true);
		if (iLocal_796 != -1)
		{
			__LIB_7__::func_249(&iLocal_796);
		}
	}
	if (bParam0)
	{
		if (iLocal_801 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				Var0 = { __LIB_6__::func_520(iLocal_801, 0) };
				Var1 = { __LIB_6__::func_520(iLocal_801, 1) };
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Var1.f_2);
			}
		}
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	func_335();
	MISC::CLEAR_BIT(&uLocal_798, 1);
	sLocal_802 = "";
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(PLAYER::GET_PLAYER_INDEX(), 0.5f);
	__LIB_4__::func_671(&(Local_792[PLAYER::PLAYER_ID() /*10*/].f_4));
	__LIB_1__::func_0(&Global_32234, 1);
	iLocal_801 = -1;
	__LIB_4__::func_82(-1);
	if (iLocal_796 != -1)
	{
		__LIB_7__::func_249(&iLocal_796);
	}
	Global_75490 = 0;
}

void func_335()//Position - 0x23542
{
	if (iLocal_796 != -1)
	{
		__LIB_7__::func_249(&iLocal_796);
	}
	if (((((((((((((((((((((((((((__LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_EXIT_L" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_C" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_R" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_PCL" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EX_PCC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT_PCR" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("WHOUSEINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("WHOUSEINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_MIS_PC" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_BDY_PC" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFFLAPTOPPC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */)) || __LIB_0__::func_1("OFFLAPTOP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */)) || __LIB_0__::func_1("MPOF_AC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOF_AC_PC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CLBHINPUTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ORINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CLBHINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ORINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CH" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CH_PC" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CHV" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_CHV_PC" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
	{
		HUD::CLEAR_HELP(true);
	}
	MISC::CLEAR_BIT(&uLocal_798, 1);
}

void func_350()//Position - 0x23C84
{
	int iVar0;
	iVar0 = func_329();
	if (!PED::IS_PED_INJURED(Local_795.f_1086))
	{
		if (iVar0 == joaat("MP_M_ExecPA_01"))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_795.f_1086, "Male_PA", 0, 0, 64);
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_795.f_1086, "Female_PA_02", 0, 0, 64);
		}
	}
}

void func_351()//Position - 0x23CD4
{
	int iVar0;
	iVar0 = func_329();
	if (iVar0 == joaat("MP_M_ExecPA_01"))
	{
		CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("Male_PA", 0, 1);
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("Female_PA_02", 0, 1);
	}
}

void func_352()//Position - 0x23D03
{
	int iVar0;
	int iVar1;
	iVar0 = func_329();
	if (iVar0 == joaat("MP_M_ExecPA_01"))
	{
		Local_795.f_1086 = PED::CREATE_PED(4, iVar0, 977.202f, -2997.681f, -40.647f, 0f, false, false);
	}
	else
	{
		Local_795.f_1086 = PED::CREATE_PED(5, iVar0, 977.202f, -2997.681f, -40.647f, 0f, false, false);
	}
	iVar1 = Local_795.f_55;
	func_353(&(Local_795.f_1086), iVar1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_795.f_1086, true);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_795.f_1086, true);
}

void func_353(var uParam0, int iParam1)//Position - 0x23D85
{
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_ExecPA_01"))
	{
		switch (func_354(iParam1))
		{
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 0, 0);
				break;
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 1, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 1, 1, 0);
				break;
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 2, 0);
				break;
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 3, 0, 0);
				break;
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 5, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 3, 1, 0);
				break;
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 5, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 3, 2, 0);
				break;
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 5, 0, 0);
				break;
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 2, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 3, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 4, 1, 0);
				break;
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 5, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 4, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 5, 2, 0);
				break;
		}
		PED::SET_PED_PROP_INDEX(*uParam0, 2, 0, 0, false);
	}
	else
	{
		switch (func_354(iParam1))
		{
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 0, 0, 0);
				break;
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 5, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 1, 2, 0);
				break;
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 1, 3, 0);
				break;
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 2, 0, 0);
				break;
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 3, 1, 0);
				break;
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 3, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 3, 2, 0);
				break;
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 4, 0, 0);
				break;
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 2, 4, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 2, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 2, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 1, 4, 0);
				break;
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 2, 5, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 1, 5, 0);
				break;
		}
		PED::SET_PED_PROP_INDEX(*uParam0, 2, 0, 0, false);
	}
}

int func_354(int iParam0)//Position - 0x244C2
{
	return (Global_1853348[iParam0 /*834*/].f_267.f_82[5] - 1);
}

void func_355()//Position - 0x244DD
{
	int iVar0;
	iVar0 = func_329();
	if (iVar0 == joaat("MP_M_ExecPA_01"))
	{
		CUTSCENE::REQUEST_CUTSCENE("IMPEXP_INT_L1", 8);
	}
	else
	{
		CUTSCENE::REQUEST_CUTSCENE("IMPEXP_INT", 8);
	}
}

bool func_356()//Position - 0x2450C
{
	return STREAMING::HAS_MODEL_LOADED(func_329());
}

void func_357()//Position - 0x2451C
{
	STREAMING::REQUEST_MODEL(func_329());
}

void func_361()//Position - 0x245EB
{
	if (((func_33(PLAYER::PLAYER_ID()) && !BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 3)) && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (PLAYER::PLAYER_ID() == Local_795.f_55)
		{
			__LIB_0__::func_151("CUST_GAR_LEAVEH" /* GXT: To leave the Garage, walk to the exit or get in a vehicle and drive out. */, -1);
		}
		else
		{
			__LIB_0__::func_151("CUST_GAR_LEAVEHb" /* GXT: To leave the Garage, walk to the exit or be a passenger in the owner's vehicle when they drive out. */, -1);
		}
		MISC::SET_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 3);
	}
}

void func_363()//Position - 0x24669
{
	if (BitTest(Local_258.f_1, 0))
	{
		if (!BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 2))
		{
			func_367();
		}
	}
	else if (BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 2))
	{
		func_366();
	}
	if (BitTest(Local_258.f_1, 1))
	{
		if (!BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 4))
		{
			func_365();
		}
	}
	else if (BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 4))
	{
		func_364();
	}
}

void func_364()//Position - 0x246D7
{
	if (BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 4))
	{
		OBJECT::DELETE_OBJECT(&iLocal_759);
		MISC::CLEAR_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 4);
	}
}

int func_365()//Position - 0x24702
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = joaat("ex_prop_crate_ammo_bc");
	Var1 = { 962.63f, -2994.804f, -47f };
	Var2 = { 0f, 0f, 0f };
	if (__LIB_0__::func_584(iVar0))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1) && !BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 4))
		{
			iLocal_759 = OBJECT::CREATE_OBJECT(iVar0, Var1, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_759, Var2, 2, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_759, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_759, true);
			MISC::SET_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_366()//Position - 0x24794
{
	if (BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 2))
	{
		OBJECT::DELETE_OBJECT(&iLocal_758);
		MISC::CLEAR_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 2);
	}
}

int func_367()//Position - 0x247BF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = joaat("prop_box_ammo05b");
	Var1 = { 954.847f, -2999.9116f, -46.5f };
	Var2 = { 0f, 0f, 0f };
	if (__LIB_0__::func_584(iVar0))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1) && !BitTest(Local_792[PLAYER::PLAYER_ID() /*10*/], 2))
		{
			iLocal_758 = OBJECT::CREATE_OBJECT(iVar0, Var1, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_758, Var2, 2, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_758, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_758, true);
			MISC::SET_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 2);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_368()//Position - 0x24851
{
	if (func_371())
	{
		if (Local_795.f_1074 != 1)
		{
			Local_795.f_1074 = 1;
		}
	}
	if (Local_795.f_1074)
	{
		func_369();
	}
}

void func_369()//Position - 0x2487E
{
	switch (Local_795.f_1077)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				Local_795.f_1077 = 1;
			}
			break;
		case 1:
			if (Global_32234 != 1)
			{
				func_331(1);
			}
			Local_795.f_1077 = 2;
			break;
		case 2:
			if (INTERIOR::IS_VALID_INTERIOR(Local_795.f_1073))
			{
				func_370(1);
			}
			__LIB_0__::func_580(&(Local_795.f_1075), 0, 0);
			Local_795.f_1077 = 4;
			break;
		case 4:
			if (INTERIOR::IS_INTERIOR_READY(Local_795.f_1073))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (__LIB_2__::func_47(&(Local_795.f_1075), 2000, 0))
					{
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
						if (Local_795.f_55 == PLAYER::PLAYER_ID())
						{
							Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_43 = 0;
						}
						Local_795.f_1074 = 0;
						Local_795.f_1077 = 0;
						__LIB_0__::func_579(&(Local_795.f_1075));
					}
				}
			}
			break;
	}
}

void func_370(bool bParam0)//Position - 0x2498D
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(974.9542f, -3000.0908f, -35f, "imp_impexp_intwaremed");
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Basic_style_set"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Basic_style_set");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Branded_style_set"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Branded_style_set");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Urban_style_set"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Urban_style_set");
	}
	switch (Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_44)
	{
		case 0:
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Basic_style_set"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Basic_style_set");
				INTERIOR::SET_INTERIOR_ENTITY_SET_TINT_INDEX(iVar0, "Basic_style_set", 8);
			}
			break;
		case 2:
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Branded_style_set"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Branded_style_set");
				INTERIOR::SET_INTERIOR_ENTITY_SET_TINT_INDEX(iVar0, "Branded_style_set", 1);
			}
			break;
		case 1:
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Urban_style_set"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Urban_style_set");
				INTERIOR::SET_INTERIOR_ENTITY_SET_TINT_INDEX(iVar0, "Urban_style_set", 0);
			}
			break;
		default:
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Basic_style_set"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Basic_style_set");
				INTERIOR::SET_INTERIOR_ENTITY_SET_TINT_INDEX(iVar0, "Basic_style_set", 8);
			}
			break;
	}
	if (bParam0)
	{
		INTERIOR::REFRESH_INTERIOR(iVar0);
	}
	Local_795.f_1078 = Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_44;
}

int func_371()//Position - 0x24ADB
{
	if ((((((Local_795.f_1078 != -1 && Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_44 != -1) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) && __LIB_6__::func_447(PLAYER::PLAYER_ID())) && __LIB_3__::func_592(Local_795.f_55) == Local_795.f_2)
	{
		return Local_795.f_1078 != Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_44;
	}
	return 0;
}

void func_375()//Position - 0x24BCB
{
	int iVar0;
	int iVar1;
	if (Local_795.f_55 != PLAYER::PLAYER_ID())
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && Local_795.f_1 == 1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_179(iVar0))
				{
					if (Local_795.f_55 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(Local_795.f_55, 0, 1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
							{
								iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
								if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::IS_PED_A_PLAYER(iVar1))
								{
									if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != Local_795.f_55)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
		}
		if (Local_795.f_55 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_264(Local_795.f_55, 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Local_795.f_55), false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Local_795.f_55), false), -2, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				}
			}
		}
	}
}

void func_377()//Position - 0x24DA2
{
	if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !Global_1574582.f_6) && !__LIB_0__::func_104(1))
	{
		__LIB_0__::func_186();
		MISC::SET_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_792[PLAYER::PLAYER_ID() /*10*/]), 6);
	}
}

void func_379()//Position - 0x24E18
{
	Global_1957730 = 0;
	if (Local_795.f_55 == PLAYER::PLAYER_ID())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_760 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (iLocal_760 != iLocal_761)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_760))
				{
					iLocal_761 = iLocal_760;
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_760, false);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iLocal_760, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_760);
				}
			}
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_760) && PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_760, -1, false))
				{
					if (func_380())
					{
						if ((((((((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) && !Global_1574582.f_6) && !__LIB_0__::func_104(1))
						{
							Global_1957730 = 1;
							Local_795.f_1092 = 1;
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_760))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_760, true);
								VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iLocal_760, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_760);
							}
						}
					}
					else
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_761, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_761))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_761, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iLocal_761, PLAYER::PLAYER_ID(), false);
				iLocal_761 = 0;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_761);
			}
		}
	}
}

int func_380()//Position - 0x24FC0
{
	if (!func_381(iLocal_760))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0)
	{
		return 0;
	}
	if (Global_1957717)
	{
		return 0;
	}
	return 1;
}

int func_381(int iParam0)//Position - 0x2500E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((iVar1 != PLAYER::PLAYER_ID() && iVar1 != __LIB_0__::func_160()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			if (__LIB_1__::func_264(iVar1, 1, 1))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, false))
				{
					if (!BitTest(Local_792[iVar1 /*10*/], 6))
					{
						return 0;
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, true) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(iVar1), iParam0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_382()//Position - 0x250A8
{
	if (func_385())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_763) && Local_795.f_55 == PLAYER::PLAYER_ID())
		{
			iLocal_763 = __LIB_0__::func_392(1006.8627f, -2997.7349f, -39.2055f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_763, 357);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_763, "IE_UNGRD_GARAGE" /* GXT: Garage */);
			HUD::SET_BLIP_DISPLAY(iLocal_763, 5);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_763))
	{
		HUD::REMOVE_BLIP(&iLocal_763);
	}
}

int func_385()//Position - 0x2515C
{
	if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != joaat("IntWareMed_Room") && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != joaat("IntWareMed_office"))
	{
		return 0;
	}
	return 1;
}

void func_386()//Position - 0x2518D
{
	if (func_417())
	{
		func_415();
	}
	if (func_414())
	{
		func_4943();
	}
	if (func_413())
	{
		func_410();
	}
	func_387();
}

void func_387()//Position - 0x251BA
{
	struct<101> Var0;
	struct<101> Var1;
	int iVar2;
	if (Local_795.f_55 != __LIB_0__::func_160() && PLAYER::PLAYER_ID() != Local_795.f_55)
	{
		if (__LIB_3__::func_583(Local_795.f_55))
		{
			if (!BitTest(Local_795.f_6, 1))
			{
				Var0.f_9 = 49;
				Var0.f_59 = 2;
				Var0.f_78 = -1;
				Var0.f_79 = -1;
				Var0.f_96 = -1;
				Var0.f_97 = 1;
				Var0.f_99 = 132;
				Var0.f_100 = -1;
				Var1.f_9 = 49;
				Var1.f_59 = 2;
				Var1.f_78 = -1;
				Var1.f_79 = -1;
				Var1.f_96 = -1;
				Var1.f_97 = 1;
				Var1.f_99 = 132;
				Var1.f_100 = -1;
				__LIB_26__::func_189(Global_1853348[Local_795.f_55 /*834*/].f_267.f_381, &Var0);
				iVar2 = 0;
				while (iVar2 <= 39)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_795.f_744[iVar2]))
					{
						__LIB_25__::func_536(Local_795.f_744[iVar2], &Var1);
						if (((((Var1.f_66 == Var0.f_66 && Var1.f_0 == Var0.f_0) && Var1.f_5 == Var0.f_5) && Var1.f_6 == Var0.f_6) && Var1.f_7 == Var0.f_7) && Var1.f_8 == Var0.f_8)
						{
							func_388(iVar2, 0, 0);
							Local_795.f_744.f_328 = iVar2;
							if (Local_795.f_744.f_82[iVar2] == 0)
							{
								MISC::SET_BIT(&(Local_795.f_6), 1);
							}
						}
					}
					iVar2++;
				}
			}
		}
		else if (BitTest(Local_795.f_6, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_795.f_744[Local_795.f_744.f_328]))
			{
				func_388(Local_795.f_744.f_328, 1, 1);
				if (Local_795.f_744.f_82[Local_795.f_744.f_328] == 1)
				{
					MISC::CLEAR_BIT(&(Local_795.f_6), 1);
				}
			}
		}
	}
}

void func_388(int iParam0, bool bParam1, bool bParam2)//Position - 0x2537F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_390(iParam0);
	if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_795.f_744.f_123[iParam0]))
	{
		iVar0 = Local_795.f_744[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_795.f_744.f_123[iParam0]));
			iVar2 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f)));
			}
			ENTITY::SET_ENTITY_ALPHA(iVar0, iVar2, false);
		}
	}
	else
	{
		iVar3 = Local_795.f_744[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (bParam1)
			{
				ENTITY::SET_ENTITY_ALPHA(iVar3, 255, false);
				if (STREAMING::IS_MODEL_VALID(ENTITY::GET_ENTITY_MODEL(iVar3)))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iVar3));
				}
				Local_795.f_744.f_82[iParam0] = 1;
			}
			else
			{
				ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
				if (bParam2)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
					{
						func_389(iParam0);
					}
				}
				Local_795.f_744.f_82[iParam0] = 0;
			}
		}
		else if (bParam1)
		{
			Local_795.f_744.f_82[iParam0] = 1;
		}
		else
		{
			Local_795.f_744.f_82[iParam0] = 0;
		}
		Local_795.f_744.f_41[iParam0] = 0;
	}
}

int func_389(int iParam0)//Position - 0x254BD
{
	int iVar0;
	iVar0 = Local_795.f_744[iParam0];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		VEHICLE::DELETE_VEHICLE(&iVar0);
		Local_795.f_744[iParam0] = 0;
		return 1;
	}
	return 0;
}

void func_390(int iParam0)//Position - 0x254FB
{
	if (Local_795.f_744.f_41[iParam0] == 0)
	{
		Local_795.f_744.f_123[iParam0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 1000);
		Local_795.f_744.f_41[iParam0] = 1;
	}
}

void func_410()//Position - 0x29ED8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (Local_795.f_8 >= 39)
	{
		Local_795.f_8 = 0;
	}
	iVar0 = Local_795.f_744[Local_795.f_8];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_121(iVar0))
	{
		Var1 = { func_411(Local_258.f_327[Local_795.f_8]) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		if (Var2.f_2 != Var1.f_2)
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, Var1, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
	}
	if (Local_795.f_8 < 39)
	{
		Local_795.f_8++;
		if (Local_795.f_8 >= 39 && !BitTest(Local_795.f_0, 5))
		{
			MISC::SET_BIT(&Local_795, 5);
		}
	}
}

Vector3 func_411(int iParam0)//Position - 0x29F88
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 978.292f, -2994.195f, -40.66f };
			break;
		case 1:
			Var0 = { 978.292f, -3009.745f, -40.66f };
			break;
		case 2:
			Var0 = { 986.012f, -2997.394f, -40.66f };
			break;
		case 3:
			Var0 = { 986.642f, -2991.874f, -40.66f };
			break;
		case 4:
			Var0 = { 991.082f, -2993.794f, -40.66f };
			break;
		case 5:
			Var0 = { 995.312f, -2991.874f, -40.66f };
			break;
		case 6:
			Var0 = { 1000.722f, -2989.944f, -40.66f };
			break;
		case 7:
			Var0 = { 1000.722f, -2993.004f, -40.66f };
			break;
		case 8:
			Var0 = { 1001.852f, -3003.064f, -40.66f };
			break;
		case 9:
			Var0 = { 997.642f, -3004.954f, -40.66f };
			break;
		case 10:
			Var0 = { 997.642f, -3008.154f, -40.66f };
			break;
		case 11:
			Var0 = { 1001.852f, -3009.714f, -40.66f };
			break;
		case 12:
			Var0 = { 997.642f, -3011.794f, -40.66f };
			break;
		case 13:
			Var0 = { 993.142f, -3006.43f, -40.66f };
			break;
		case 15:
			Var0 = { 1009.211f, -3026.794f, -40.66f };
			break;
		case 16:
			Var0 = { 1004.051f, -3026.794f, -40.66f };
			break;
		case 17:
			Var0 = { 998.456f, -3026.794f, -40.66f };
			break;
		case 18:
			Var0 = { 993.247f, -3026.794f, -40.66f };
			break;
		case 19:
			Var0 = { 1009.211f, -3026.794f, -37.89f };
			break;
		case 20:
			Var0 = { 1004.051f, -3026.794f, -37.89f };
			break;
		case 21:
			Var0 = { 998.456f, -3026.794f, -37.89f };
			break;
		case 22:
			Var0 = { 993.247f, -3026.794f, -37.89f };
			break;
		case 23:
			Var0 = { 980.072f, -3035.894f, -40.66f };
			break;
		case 24:
			Var0 = { 976.05f, -3035.894f, -40.66f };
			break;
		case 25:
			Var0 = { 971.828f, -3035.894f, -40.66f };
			break;
		case 26:
			Var0 = { 967.728f, -3035.894f, -40.66f };
			break;
		case 27:
			Var0 = { 963.46f, -3035.894f, -40.66f };
			break;
		case 28:
			Var0 = { 959.4f, -3035.894f, -40.66f };
			break;
		case 29:
			Var0 = { 954.75f, -3028.694f, -40.66f };
			break;
		case 30:
			Var0 = { 954.75f, -3023.622f, -40.66f };
			break;
		case 31:
			Var0 = { 954.75f, -3018.348f, -40.66f };
			break;
		case 32:
			Var0 = { 980.072f, -3035.894f, -37.89f };
			break;
		case 33:
			Var0 = { 976.05f, -3035.894f, -37.89f };
			break;
		case 34:
			Var0 = { 971.828f, -3035.894f, -37.89f };
			break;
		case 35:
			Var0 = { 967.728f, -3035.894f, -37.89f };
			break;
		case 36:
			Var0 = { 963.46f, -3035.894f, -37.89f };
			break;
		case 37:
			Var0 = { 959.422f, -3035.894f, -37.89f };
			break;
		case 38:
			Var0 = { 954.75f, -3028.694f, -37.89f };
			break;
		case 39:
			Var0 = { 954.75f, -3023.622f, -37.89f };
			break;
		case 14:
			Var0 = { 954.75f, -3018.348f, -37.89f };
			break;
	}
	return Var0;
}

bool func_413()//Position - 0x2A41C
{
	return !BitTest(Local_795.f_0, 5);
}

bool func_414()//Position - 0x2A42A
{
	if (Local_795.f_52 != Local_258.f_368)
	{
		Local_795.f_54 = 1;
		Local_795.f_8 = 0;
		Local_795.f_53 = Local_258.f_370;
		Local_795.f_52 = Local_258.f_368;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_258.f_369 = 0;
		}
	}
	return Local_795.f_54;
}

void func_415()//Position - 0x2A475
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_258.f_370 = 1;
		func_416();
	}
}

void func_416()//Position - 0x2A48F
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 40)
		{
			Local_258.f_286[iVar0] = Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_2[iVar0];
			Local_258.f_327[iVar0] = iVar0;
			iVar0++;
		}
		if (Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_1 <= 40)
		{
			Local_258.f_368 = Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_1;
		}
		else
		{
			Local_258.f_368 = 40;
		}
	}
}

bool func_417()//Position - 0x2A51A
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_258.f_368 != Global_1853348[Local_795.f_55 /*834*/].f_267.f_142.f_1)
		{
			Local_258.f_369 = 1;
		}
	}
	return Local_258.f_369;
}

void func_418()//Position - 0x2A552
{
	if (Local_795.f_55 == PLAYER::PLAYER_ID() && func_385())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_762))
		{
			iLocal_762 = __LIB_0__::func_392(964.7871f, -3004.5813f, -40.6349f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_762, 521);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_762, "OR_PC_BLIP" /* GXT: Laptop */);
			HUD::SET_BLIP_DISPLAY(iLocal_762, 5);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_762))
	{
		HUD::REMOVE_BLIP(&iLocal_762);
	}
}

void func_419()//Position - 0x2A5C3
{
	if (BitTest(Local_792[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 0))
	{
		MISC::CLEAR_BIT(&(Local_792[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 0);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		func_420(&(Local_258.f_2), &(Local_792[PLAYER::PLAYER_ID() /*10*/].f_1), &Local_776, &Global_4194304, &(Local_792[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4), &(Local_258.f_57));
	}
}

void func_420(var uParam0, int* iParam1, int* iParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2A61E
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	__LIB_8__::func_859(uParam0, iParam2);
	if (((iParam2->f_799 >= 1 && __LIB_4__::func_958(PLAYER::PLAYER_ID())) && !__LIB_4__::func_965(PLAYER::PLAYER_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam2->f_715))
	{
		if (!__LIB_8__::func_737(iParam2))
		{
		}
	}
	if (Global_4196256 != iParam2->f_795)
	{
		iParam2->f_795 = Global_4196256;
		MISC::SET_BIT(iParam1, 16);
	}
	if (BitTest(*iParam1, 16))
	{
		iParam2->f_799 = 0;
		MISC::CLEAR_BIT(iParam1, 16);
	}
	if (__LIB_2__::func_282() || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		__LIB_39__::func_803(iParam1, iParam2);
		return;
	}
	if (iParam2->f_719 > 5)
	{
		iParam2->f_719 = 0;
	}
	if (iParam2->f_718 > 30)
	{
		iParam2->f_718 = 0;
	}
	if (iParam2->f_799 > 0 || iParam2->f_800 > 0)
	{
		__LIB_35__::func_722(uParam0, iParam1, iParam2, uParam3, 0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID()))
			{
				__LIB_5__::func_103(uParam0);
			}
		}
	}
	if (iParam2->f_799 != 2)
	{
		if (__LIB_4__::func_961(*iParam1) != 0)
		{
			__LIB_5__::func_102(iParam1, 0);
		}
	}
	if (iParam2->f_800 != 3)
	{
		if (__LIB_4__::func_955(*iParam1) != 0)
		{
			__LIB_5__::func_101(iParam1, 0);
		}
	}
	if (((((((((uParam3->f_33 == 10 || __LIB_6__::func_934(PLAYER::PLAYER_ID(), 0)) || __LIB_4__::func_712(uParam3->f_31)) || __LIB_4__::func_711(uParam3->f_31, -1)) || __LIB_4__::func_710(uParam3->f_31)) || __LIB_6__::func_447(PLAYER::PLAYER_ID())) || __LIB_1__::func_188(uParam3->f_31)) || __LIB_18__::func_376(uParam3->f_31, 0, 0)) || __LIB_8__::func_205(PLAYER::PLAYER_ID())) || (__LIB_6__::func_448(PLAYER::PLAYER_ID()) && !BitTest(*iParam1, 0)))
	{
		if (((uParam0->f_50 > 0 && uParam0->f_52 > 0) && !BitTest(*iParam1, 15)) || ((uParam0->f_50 > 0 && !BitTest(*iParam1, 15)) && (((((((((((((__LIB_4__::func_712(uParam3->f_31) || __LIB_4__::func_711(uParam3->f_31, -1)) || __LIB_4__::func_710(uParam3->f_31)) || __LIB_1__::func_188(uParam3->f_31)) || __LIB_18__::func_376(uParam3->f_31, 0, 0)) || __LIB_8__::func_205(PLAYER::PLAYER_ID())) || __LIB_6__::func_448(PLAYER::PLAYER_ID())) || __LIB_6__::func_447(PLAYER::PLAYER_ID())) || __LIB_7__::func_916(PLAYER::PLAYER_ID())) || __LIB_4__::func_957(PLAYER::PLAYER_ID())) || __LIB_3__::func_996(PLAYER::PLAYER_ID())) || __LIB_8__::func_204(PLAYER::PLAYER_ID())) || __LIB_2__::func_344(PLAYER::PLAYER_ID())) || __LIB_4__::func_738(PLAYER::PLAYER_ID()))))
		{
			__LIB_25__::func_720(iParam2, uParam3);
			MISC::SET_BIT(iParam1, 15);
			if (((((((__LIB_4__::func_712(uParam3->f_31) || __LIB_4__::func_711(uParam3->f_31, -1)) || __LIB_4__::func_710(uParam3->f_31)) || __LIB_1__::func_188(uParam3->f_31)) || __LIB_18__::func_376(uParam3->f_31, 0, 0)) || __LIB_8__::func_205(PLAYER::PLAYER_ID())) || __LIB_6__::func_448(PLAYER::PLAYER_ID())) || __LIB_6__::func_447(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_719(iParam2, uParam0, uParam3, 0);
			}
		}
	}
	else if (uParam0->f_50 > 0 && !BitTest(*iParam1, 15))
	{
		__LIB_25__::func_720(iParam2, uParam3);
		MISC::SET_BIT(iParam1, 15);
	}
	if ((iParam2->f_719 % 2) == 0)
	{
		switch (iParam2->f_799)
		{
			case 0:
				if (!Global_1853198)
				{
					iParam2->f_795 = Global_4196256;
					__LIB_32__::func_88(iParam2, iParam1);
					if ((uParam0->f_50 > 0 && BitTest(*iParam1, 15)) && func_4902(iParam1, iParam2, uParam3))
					{
						__LIB_35__::func_722(uParam0, iParam1, iParam2, uParam3, 0);
						MISC::SET_BIT(iParam2, 0);
						iParam2->f_4 = ((0f + -36f) / 2f);
						if (__LIB_7__::func_916(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_19__::func_334(iParam2))
							{
								return;
							}
						}
						if (__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !__LIB_8__::func_737(iParam2))
						{
							return;
						}
						if (iParam2->f_803 && !__LIB_5__::func_92(iParam2))
						{
							return;
						}
						if (iParam2->f_804 && !__LIB_5__::func_91(iParam2))
						{
							return;
						}
						if (__LIB_4__::func_957(PLAYER::PLAYER_ID()) && !__LIB_5__::func_90(iParam2))
						{
							return;
						}
						if (__LIB_3__::func_996(PLAYER::PLAYER_ID()) && !__LIB_5__::func_89(iParam2))
						{
							return;
						}
						if (__LIB_8__::func_204(PLAYER::PLAYER_ID()) && !__LIB_5__::func_88(iParam2))
						{
							return;
						}
						if (__LIB_2__::func_344(PLAYER::PLAYER_ID()) && !__LIB_5__::func_87(iParam2))
						{
							return;
						}
						if (__LIB_4__::func_738(PLAYER::PLAYER_ID()) && !func_4890(iParam2))
						{
							return;
						}
						__LIB_5__::func_86(iParam2, 1);
					}
					else
					{
						if (uParam0->f_50 != 0)
						{
						}
						if (!BitTest(*iParam1, 15))
						{
						}
					}
				}
				break;
			case 1:
				if (func_449(iParam1, iParam2, uParam3, &(iParam2->f_1), &(iParam2->f_797), uParam4, uParam5, 0))
				{
					__LIB_0__::func_802();
					__LIB_5__::func_86(iParam2, 2);
				}
				break;
			case 2:
				__LIB_4__::func_62(1);
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(16);
				iVar1 = __LIB_4__::func_961(*iParam1);
				uVar0 = __LIB_25__::func_532(uParam0, iParam1, iParam2, &iVar1, uParam4, 0);
				__LIB_5__::func_102(iParam1, iVar1);
				if (((((uVar0 || Global_1853198) || Global_1931426) || __LIB_5__::func_78(iParam1, iParam2)) || __LIB_1__::func_566(PLAYER::PLAYER_ID()) == 5) || Global_2703735.f_3428 == 1)
				{
					if (Global_2703735.f_3428 == 1)
					{
					}
					if (__LIB_1__::func_566(PLAYER::PLAYER_ID()) == 5)
					{
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					Global_32230 = 0;
					__LIB_35__::func_587(iParam2);
					__LIB_5__::func_86(iParam2, 1);
				}
				break;
		}
	}
	else if (((((((((((((((((!BitTest(*iParam1, 0) && !__LIB_4__::func_711(uParam3->f_31, -1)) && !__LIB_4__::func_712(uParam3->f_31)) && !__LIB_4__::func_710(uParam3->f_31)) && !__LIB_1__::func_188(uParam3->f_31)) && !__LIB_18__::func_376(uParam3->f_31, 0, 0)) && !__LIB_8__::func_205(PLAYER::PLAYER_ID())) && !__LIB_6__::func_448(PLAYER::PLAYER_ID())) && !__LIB_6__::func_447(PLAYER::PLAYER_ID())) && !__LIB_7__::func_916(PLAYER::PLAYER_ID())) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !iParam2->f_803) && !iParam2->f_804) && !__LIB_4__::func_957(PLAYER::PLAYER_ID())) && !__LIB_3__::func_996(PLAYER::PLAYER_ID())) && !__LIB_8__::func_204(PLAYER::PLAYER_ID())) && !__LIB_2__::func_344(PLAYER::PLAYER_ID())) && !__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		switch (iParam2->f_800)
		{
			case 0:
				if (uParam0->f_50 > 0 && BitTest(*iParam1, 15))
				{
					__LIB_35__::func_722(uParam0, iParam1, iParam2, uParam3, 1);
					MISC::SET_BIT(iParam2, 0);
					iParam2->f_4 = ((0f + -36f) / 2f);
					__LIB_5__::func_77(iParam2, 1);
				}
				break;
			case 1:
				if (uParam3->f_33 == 10)
				{
					if (func_449(iParam1, iParam2, uParam3, &(iParam2->f_2), &(iParam2->f_798), uParam4, uParam5, 1))
					{
						__LIB_0__::func_802();
						__LIB_5__::func_77(iParam2, 3);
					}
				}
				break;
			case 3:
				__LIB_4__::func_62(1);
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(16);
				iVar3 = __LIB_4__::func_955(*iParam1);
				uVar2 = __LIB_25__::func_532(uParam0, iParam1, iParam2, &iVar3, uParam4, 1);
				__LIB_5__::func_101(iParam1, iVar3);
				if (((uVar2 || Global_1853198) || Global_1931426) || __LIB_5__::func_78(iParam1, iParam2))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					__LIB_35__::func_587(iParam2);
					__LIB_5__::func_77(iParam2, 1);
				}
				break;
			}
	}
	if (((!BitTest(*iParam1, 9) && !BitTest(*iParam1, 13)) && !BitTest(*iParam1, 10)) && !BitTest(Global_2621446, 15))
	{
		if (!BitTest(*iParam2, 13))
		{
			iParam2->f_719++;
		}
	}
	iParam2->f_718++;
}

int func_449(int* iParam0, int* iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, bool bParam7)//Position - 0x2BDF1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (bParam7)
	{
	}
	if (*uParam4 > 0)
	{
		__LIB_8__::func_611(0);
	}
	switch (*uParam4)
	{
		case 0:
			if ((((!BitTest(*iParam0, 9) && !BitTest(*iParam0, 13)) && !BitTest(*iParam0, 10)) && !BitTest(Global_2621446, 15)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (bParam7 == 0)
				{
					iVar3 = __LIB_19__::func_538(iParam1, iParam0, uParam2);
				}
				else
				{
					iVar3 = 2;
				}
				if (bParam7 == 0)
				{
					if (iParam1->f_716 > iVar3)
					{
						iParam1->f_716 = 0;
					}
				}
				if (bParam7 == 1)
				{
					iParam1->f_717 = iParam1->f_716;
					iParam1->f_716 = 2;
				}
				if (((((func_465(iParam0, uParam2, iParam1->f_716, iParam1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && __LIB_4__::func_61(PLAYER::PLAYER_PED_ID()) <= 9) && !BitTest(Global_1946250.f_4, 2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !Global_2667225.f_2681)
				{
					if (__LIB_19__::func_235((11 + iParam1->f_716), iParam1->f_784, uParam6) && !(iParam1->f_804 && __LIB_4__::func_672()))
					{
						if (__LIB_0__::func_1("RADIO_NA_PP" /* GXT: You cannot use this radio while a private party is active. */))
						{
							HUD::CLEAR_HELP(true);
						}
						MISC::SET_BIT(iParam1, 13);
						if (!bVar0)
						{
							if (!Global_1931426 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_POSITIONED_RADIO_MUTE_SCENE"))
							{
								if (((((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && !BitTest(Global_2703735.f_876.f_4, 0)) && !__LIB_1__::func_156()) && !__LIB_5__::func_78(iParam0, iParam1)) && !__LIB_2__::func_368()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
								{
									if (bParam7 == 1)
									{
									}
									if (__LIB_5__::func_83(iParam1))
									{
										STREAMING::REQUEST_ANIM_DICT(iParam1->f_782);
										if (STREAMING::HAS_ANIM_DICT_LOADED(iParam1->f_782))
										{
											if (!BitTest(Global_2621446, 7))
											{
												bVar0 = true;
											}
										}
										else
										{
											STREAMING::REQUEST_ANIM_DICT(iParam1->f_782);
										}
									}
									else
									{
										bVar0 = true;
									}
								}
								else
								{
									if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
									{
									}
									if (!BitTest(Global_2703735.f_876.f_4, 0))
									{
									}
									if (!__LIB_1__::func_156())
									{
									}
									if (!__LIB_5__::func_78(iParam0, iParam1))
									{
									}
								}
							}
							else
							{
								if (!Global_1931426)
								{
								}
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_POSITIONED_RADIO_MUTE_SCENE"))
								{
								}
							}
						}
					}
					else
					{
						if (iParam1->f_804 && __LIB_4__::func_672())
						{
							if (!__LIB_0__::func_1("RADIO_NA_PP" /* GXT: You cannot use this radio while a private party is active. */))
							{
								__LIB_0__::func_151("RADIO_NA_PP" /* GXT: You cannot use this radio while a private party is active. */, -1);
							}
						}
						iVar4 = 0;
						while (iVar4 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
							{
								iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
								if (iVar5 != PLAYER::PLAYER_ID())
								{
									if (__LIB_1__::func_264(iVar5, 1, 1))
									{
										fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(iVar5), __LIB_1__::func_265(PLAYER::PLAYER_ID()), true);
										if (fVar6 < 2f && fVar6 != 0f)
										{
										}
									}
								}
							}
							iVar4++;
						}
					}
					if (bVar0)
					{
						if (Global_1853198)
						{
							if (*iParam3 == -1)
							{
								__LIB_7__::func_316(iParam3, 3, "MPRD_BILL" /* GXT: Unable to use the radio until utility charge is paid. */, 0, 0, 0, 0);
							}
						}
						else if (*iParam3 == -1)
						{
							__LIB_7__::func_316(iParam3, 3, "MPRD_CTXT" /* GXT: Press ~INPUT_CONTEXT~ to use the radio. */, 0, 0, 0, 0);
						}
						else if (__LIB_2__::func_187(*iParam3, 1))
						{
							__LIB_7__::func_249(iParam3);
							Global_32230 = 1;
							if (__LIB_5__::func_83(iParam1))
							{
								MISC::SET_BIT(iParam0, 13);
								iParam0->f_2 = iParam1->f_716;
								*uParam4++;
							}
							else
							{
								iParam0->f_2 = iParam1->f_716;
								TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), __LIB_19__::func_234(iParam1, iParam0, uParam2), 0);
								TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_19__::func_234(iParam1, iParam0, uParam2), -1, 0, 2);
								MISC::SET_BIT(iParam1, 0);
								MISC::SET_BIT(&Global_2621446, 15);
								return 1;
							}
						}
					}
				}
				else
				{
					MISC::CLEAR_BIT(iParam1, 13);
					if (bParam7 == 1)
					{
						iParam1->f_716 = iParam1->f_717;
					}
					else
					{
						iParam1->f_716++;
					}
				}
			}
			break;
		case 1:
			if (__LIB_5__::func_84((11 + iParam1->f_716), &iVar1, uParam5, uParam6))
			{
				if ((BitTest(*iParam0, 13) && iVar1 == 1) || (iParam1->f_794 && iVar1 == 1))
				{
					Var7 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(iParam1->f_782, iParam1->f_787, iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 0f, 2) };
					Var8 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(iParam1->f_782, iParam1->f_787, iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 0f, 2) };
					Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(iParam1->f_782, iParam1->f_787, iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 0f, 2), 1f, 2500, Var7.f_2, 0.1f);
					MISC::CLEAR_BIT(iParam0, 13);
					MISC::SET_BIT(iParam0, 9);
					*uParam4++;
				}
				else if (iVar1 == 2)
				{
					__LIB_4__::func_671(uParam5);
					MISC::CLEAR_BIT(iParam0, 13);
					MISC::CLEAR_BIT(&Global_2621446, 15);
					MISC::CLEAR_BIT(iParam1, 0);
					*uParam4 = 0;
				}
			}
			break;
		case 2:
			if (BitTest(*iParam0, 9))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
				{
					MISC::SET_BIT(iParam0, 10);
					iParam1->f_792 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam1->f_792, iParam1->f_782, iParam1->f_788, 2f, -1.5f, 13, 16, 2f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1->f_792);
					MISC::CLEAR_BIT(iParam0, 9);
					*uParam4++;
				}
			}
			break;
		case 3:
			if (BitTest(*iParam0, 10))
			{
				iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam1->f_792);
				if (iVar2 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= 0.9f)
					{
						if (BitTest(*iParam0, 5))
						{
							MISC::SET_BIT(iParam0, 6);
						}
						MISC::SET_BIT(iParam1, 0);
						MISC::SET_BIT(&Global_2621446, 15);
						MISC::CLEAR_BIT(iParam0, 10);
						iParam1->f_792 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam1->f_792, iParam1->f_782, iParam1->f_789, 2f, -1.5f, 13, 16, 2f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1->f_792);
						*uParam4 = 0;
						return 1;
					}
				}
			}
			break;
	}
	if (!bVar0)
	{
		__LIB_7__::func_249(iParam3);
	}
	return 0;
}

int func_465(int* iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x2CB13
{
	struct<4> Var0;
	float fVar1;
	int iVar2;
	struct<4> Var3;
	if (Global_1946107 && __LIB_8__::func_539())
	{
		return 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	switch (uParam1->f_33)
	{
		case 2:
		case 6:
			MISC::CLEAR_BIT(iParam0, 5);
			break;
	}
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_4__::func_965(Global_1853191) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 360.89172f, 4841.1543f, -59.999626f, 360.48737f, 4839.9272f, -57.69137f, 1.5f, false, true, 0))
		{
			uParam3->f_782 = "anim@mp_radio@garage@low";
			uParam3->f_783 = 155;
			uParam3->f_784 = { 360.46f, 4840.405f, -58.96f };
			uParam3->f_787 = "action_a";
			uParam3->f_788 = "enter";
			uParam3->f_789 = "idle_a";
			uParam3->f_790 = "button_press";
			uParam3->f_791 = "exit";
			Global_32229 = 1;
			return 1;
		}
		else if (__LIB_8__::func_643() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 363.88956f, 4826.5337f, -59.991413f, 363.90433f, 4827.5083f, -58.010437f, 1.5f, false, true, 0))
		{
			uParam3->f_782 = "anim@mp_radio@garage@low";
			uParam3->f_783 = 0;
			uParam3->f_784 = { 364.14f, 4827.09f, -58.958f };
			uParam3->f_787 = "action_a";
			uParam3->f_788 = "enter";
			uParam3->f_789 = "idle_a";
			uParam3->f_790 = "button_press";
			uParam3->f_791 = "exit";
			Global_32229 = 1;
			return 1;
		}
		Global_32229 = 0;
		return 0;
	}
	if (((((((((((((((((!__LIB_4__::func_710(uParam1->f_31) && !__LIB_4__::func_711(uParam1->f_31, -1)) && !__LIB_4__::func_712(uParam1->f_31)) && !uParam3->f_794) && !__LIB_1__::func_188(uParam1->f_31)) && !__LIB_18__::func_376(uParam1->f_31, 1, 0)) && !__LIB_8__::func_205(PLAYER::PLAYER_ID())) && !__LIB_6__::func_448(PLAYER::PLAYER_ID())) && !__LIB_6__::func_447(PLAYER::PLAYER_ID())) && !__LIB_7__::func_916(PLAYER::PLAYER_ID())) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !uParam3->f_803) && !uParam3->f_804) && !__LIB_4__::func_957(PLAYER::PLAYER_ID())) && !__LIB_3__::func_996(PLAYER::PLAYER_ID())) && !__LIB_8__::func_204(PLAYER::PLAYER_ID())) && !__LIB_2__::func_344(PLAYER::PLAYER_ID())) && !__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 176.27357f, -999.4766f, -97.58723f, 176.26738f, -1000.86804f, -100.06245f, 1.6875f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@low";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 176.601f, -999.79f, -98.957f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 263.615f, -994.4068f, -97.697914f, 263.60675f, -996.1709f, -100.07114f, 1.5f, false, true, 0))
				{
					uParam3->f_782 = "anim@mp_radio@low_apment";
					uParam3->f_783 = -1;
					uParam3->f_784 = { 263.035f, -995.132f, -99.04f };
					uParam3->f_787 = "action_a_kitchen";
					uParam3->f_788 = "enter_kitchen";
					uParam3->f_789 = "idle_a_kitchen";
					uParam3->f_790 = "button_press_kitchen";
					uParam3->f_791 = "exit_kitchen";
					return 1;
				}
				break;
			case 6:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 201.88275f, -993.9427f, -97.581116f, 202.00244f, -995.12775f, -100.06246f, 1.6875f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@medium";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 201.455f, -994.257f, -98.979f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 340.92935f, -1002.6046f, -100.19622f, 340.98868f, -1000.3216f, -98.19622f, 1f, false, true, 0))
				{
					uParam3->f_782 = "anim@mp_radio@medium_apment";
					uParam3->f_783 = -90;
					uParam3->f_784 = { 341.355f, -1000.652f, -99.14f };
					uParam3->f_787 = "action_a_kitchen";
					uParam3->f_788 = "enter_kitchen";
					uParam3->f_789 = "idle_a_kitchen";
					uParam3->f_790 = "button_press_kitchen";
					uParam3->f_791 = "exit_kitchen";
					return 1;
				}
				break;
			case 10:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 231.84108f, -975.63495f, -100.08978f, 230.35152f, -975.6111f, -96.041504f, 2.5f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@high";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 230.302f, -975.685f, -98.979f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							Var0 = { uParam3->f_720[0 /*6*/] };
							fVar1 = 1.8125f;
							if (__LIB_4__::func_713(uParam1->f_31))
							{
								uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_life_apment";
								uParam3->f_787 = "action_a_living_room";
								uParam3->f_788 = "enter_living_room";
								uParam3->f_789 = "idle_a_living_room";
								uParam3->f_790 = "button_press_living_room";
								uParam3->f_791 = "exit_living_room";
							}
							else
							{
								uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_apment";
								uParam3->f_787 = "action_a_bedroom";
								uParam3->f_788 = "enter_bedroom";
								uParam3->f_789 = "idle_a_bedroom";
								uParam3->f_790 = "button_press_bedroom";
								uParam3->f_791 = "exit_bedroom";
							}
							break;
						case 1:
							Var0 = { uParam3->f_720[1 /*6*/] };
							fVar1 = 1.8125f;
							if (__LIB_4__::func_713(uParam1->f_31))
							{
								uParam3->f_782 = "anim@mp_radio@high_life_apment";
								uParam3->f_784 = { uParam3->f_751[1 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[1 /*6*/].f_3.f_2);
								uParam3->f_787 = "action_a_bedroom";
								uParam3->f_788 = "enter_bedroom";
								uParam3->f_789 = "idle_a_bedroom";
								uParam3->f_790 = "button_press_bedroom";
								uParam3->f_791 = "exit_bedroom";
							}
							else
							{
								uParam3->f_784 = { uParam3->f_751[1 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[1 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_apment";
								uParam3->f_787 = "action_a_living_room";
								uParam3->f_788 = "enter_living_room";
								uParam3->f_789 = "idle_a_living_room";
								uParam3->f_790 = "button_press_living_room";
								uParam3->f_791 = "exit_living_room";
							}
							break;
						case 2:
							Var0 = { uParam3->f_720[2 /*6*/] };
							fVar1 = 1f;
							if (__LIB_4__::func_713(uParam1->f_31))
							{
								uParam3->f_784 = { uParam3->f_751[2 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[2 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_life_apment";
								uParam3->f_787 = "action_a_study";
								uParam3->f_788 = "enter_study";
								uParam3->f_789 = "idle_a_study";
								uParam3->f_790 = "button_press_study";
								uParam3->f_791 = "exit_study";
							}
							else
							{
								uParam3->f_784 = { uParam3->f_751[2 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[2 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_apment";
								uParam3->f_787 = "action_a_study";
								uParam3->f_788 = "enter_study";
								uParam3->f_789 = "idle_a_study";
								uParam3->f_790 = "button_press_study";
								uParam3->f_791 = "exit_study";
							}
							iVar2 = 1;
							break;
					}
					if ((Var0.f_0 != 0f && Var0.f_1 != 0f) && Var0.f_2 != 0f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, fVar1, false, true, 0))
						{
							if (iVar2 == 1)
							{
								if (!BitTest(*iParam0, 5))
								{
									MISC::SET_BIT(iParam0, 5);
								}
								iVar2 = 0;
							}
							return 1;
						}
						else
						{
							iVar2 = 0;
							MISC::CLEAR_BIT(iParam0, 5);
							uParam3->f_784 = { 0f, 0f, 0f };
							uParam3->f_783 = 0;
							uParam3->f_782 = "";
							uParam3->f_787 = "";
							uParam3->f_788 = "";
							uParam3->f_789 = "";
							uParam3->f_790 = "";
							uParam3->f_791 = "";
						}
					}
				}
				break;
			case 20:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam3->f_720[0 /*6*/], uParam3->f_720[0 /*6*/].f_3, 1.4f, false, true, 0))
				{
					uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
					uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
					uParam3->f_782 = "anim@mp_radio@garage@medium";
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
					return 1;
				}
				break;
		}
	}
	else if (((((((((((((((__LIB_4__::func_710(uParam1->f_31) || __LIB_4__::func_711(uParam1->f_31, -1)) || __LIB_4__::func_712(uParam1->f_31)) || uParam3->f_794) || __LIB_1__::func_188(uParam1->f_31)) || __LIB_8__::func_205(PLAYER::PLAYER_ID())) || __LIB_6__::func_448(PLAYER::PLAYER_ID())) || __LIB_6__::func_447(PLAYER::PLAYER_ID())) || __LIB_7__::func_916(PLAYER::PLAYER_ID())) || uParam3->f_803) || uParam3->f_804) || __LIB_4__::func_957(PLAYER::PLAYER_ID())) || __LIB_3__::func_996(PLAYER::PLAYER_ID())) || __LIB_8__::func_204(PLAYER::PLAYER_ID())) || __LIB_2__::func_344(PLAYER::PLAYER_ID())) || __LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		switch (iParam2)
		{
			case 0:
				Var0 = { uParam3->f_720[0 /*6*/] };
				fVar1 = 1.8125f;
				Var3 = { uParam3->f_751[0 /*6*/] };
				if (__LIB_4__::func_712(uParam1->f_31))
				{
					if (((Global_4196256 == 1 || Global_4196256 == 4) || Global_4196256 == 5) || Global_4196256 == 8)
					{
						Var0 = { uParam3->f_720[3 /*6*/] };
						Var3 = { uParam3->f_751[3 /*6*/] };
					}
					else if (((Global_4196256 == 2 || Global_4196256 == 3) || Global_4196256 == 6) || Global_4196256 == 7)
					{
						Var0 = { uParam3->f_720[0 /*6*/] };
						Var3 = { uParam3->f_751[0 /*6*/] };
					}
				}
				uParam3->f_784 = { Var3 };
				uParam3->f_783 = SYSTEM::ROUND(Var3.f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				if (uParam3->f_794)
				{
					uParam3->f_782 = "anim@mp_radio@garage@low";
					uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
					uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
				}
				if (__LIB_1__::func_188(uParam1->f_31))
				{
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_bedroom";
					uParam3->f_788 = "enter_bedroom";
					uParam3->f_789 = "idle_a_bedroom";
					uParam3->f_790 = "button_press_bedroom";
					uParam3->f_791 = "exit_bedroom";
				}
				if (__LIB_8__::func_205(PLAYER::PLAYER_ID()) || __LIB_6__::func_448(PLAYER::PLAYER_ID()))
				{
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_living_room";
					uParam3->f_788 = "enter_living_room";
					uParam3->f_789 = "idle_a_living_room";
					uParam3->f_790 = "button_press_living_room";
					uParam3->f_791 = "exit_living_room";
				}
				if (__LIB_6__::func_447(PLAYER::PLAYER_ID()))
				{
					uParam3->f_782 = "anim@mp_radio@low_apment";
					uParam3->f_787 = "action_a_kitchen";
					uParam3->f_788 = "enter_kitchen";
					uParam3->f_789 = "idle_a_kitchen";
					uParam3->f_790 = "button_press_kitchen";
					uParam3->f_791 = "exit_kitchen";
				}
				if (((((((__LIB_7__::func_916(PLAYER::PLAYER_ID()) || uParam3->f_803) || uParam3->f_804) || __LIB_4__::func_957(PLAYER::PLAYER_ID())) || __LIB_3__::func_996(PLAYER::PLAYER_ID())) || __LIB_8__::func_204(PLAYER::PLAYER_ID())) || __LIB_2__::func_344(PLAYER::PLAYER_ID())) || __LIB_4__::func_738(PLAYER::PLAYER_ID()))
				{
					if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
					{
						fVar1 = 1f;
					}
					uParam3->f_782 = "anim@mp_radio@garage@medium";
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
				}
				break;
			case 1:
				Var0 = { uParam3->f_720[1 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[1 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[1 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				if (__LIB_4__::func_712(uParam1->f_31))
				{
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_study";
					uParam3->f_788 = "enter_study";
					uParam3->f_789 = "idle_a_study";
					uParam3->f_790 = "button_press_study";
					uParam3->f_791 = "exit_study";
				}
				if ((((__LIB_7__::func_916(PLAYER::PLAYER_ID()) || uParam3->f_803) || uParam3->f_804) || __LIB_4__::func_957(PLAYER::PLAYER_ID())) || __LIB_3__::func_996(PLAYER::PLAYER_ID()))
				{
					uParam3->f_782 = "anim@mp_radio@garage@medium";
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
				}
				if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
				{
					fVar1 = 1f;
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_bedroom";
					uParam3->f_788 = "enter_bedroom";
					uParam3->f_789 = "idle_a_bedroom";
					uParam3->f_790 = "button_press_bedroom";
					uParam3->f_791 = "exit_bedroom";
				}
				break;
			case 2:
				Var0 = { uParam3->f_720[2 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[2 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[2 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				if (__LIB_4__::func_711(uParam1->f_31, -1) || __LIB_4__::func_712(uParam1->f_31))
				{
					uParam3->f_787 = "action_a_study";
					uParam3->f_788 = "enter_study";
					uParam3->f_789 = "idle_a_study";
					uParam3->f_790 = "button_press_study";
					uParam3->f_791 = "exit_study";
				}
				if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
				{
					fVar1 = 0.75f;
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_bedroom";
					uParam3->f_788 = "enter_bedroom";
					uParam3->f_789 = "idle_a_bedroom";
					uParam3->f_790 = "button_press_bedroom";
					uParam3->f_791 = "exit_bedroom";
				}
				break;
			case 3:
				Var0 = { uParam3->f_720[3 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[3 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[3 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				break;
			case 4:
				Var0 = { uParam3->f_720[4 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[4 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[4 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				break;
		}
		if ((Var0.f_0 != 0f && Var0.f_1 != 0f) && Var0.f_2 != 0f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, fVar1, false, true, 0) && func_466(iParam2))
			{
				Global_32229 = 1;
				return 1;
			}
			else
			{
				iVar2 = 0;
				Global_32229 = 0;
				MISC::CLEAR_BIT(iParam0, 5);
				uParam3->f_784 = { 0f, 0f, 0f };
				uParam3->f_783 = 0;
				uParam3->f_782 = "";
				uParam3->f_787 = "";
				uParam3->f_788 = "";
				uParam3->f_789 = "";
				uParam3->f_790 = "";
				uParam3->f_791 = "";
			}
		}
		switch (uParam1->f_33)
		{
			case 10:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 231.84108f, -975.63495f, -100.08978f, 230.35152f, -975.6111f, -96.041504f, 2.5f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@high";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 230.302f, -975.685f, -98.979f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x2DCEB
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	fVar1 = 0f;
	if (__LIB_3__::func_859(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_4__::func_767())
		{
			case 22:
				iVar0 = 1;
				fVar1 = 90f;
				break;
			case 24:
				iVar0 = 1;
				switch (iParam0)
				{
					case 0:
						fVar1 = 268.7135f;
						break;
					case 1:
						fVar1 = 359.2117f;
						break;
					case 2:
						fVar1 = 359.018f;
						break;
				}
				fVar1 = func_468(fVar1, __LIB_3__::func_977(PLAYER::PLAYER_ID()));
				break;
			}
	}
	if (iVar0 == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			return __LIB_2__::func_336(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar1, 45f);
		}
	}
	return 1;
}

float func_468(float fParam0, int iParam1)//Position - 0x2DE22
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_469(iParam1, &uVar2, &uVar0, &fVar1, 0);
	fVar3 = (fParam0 + fVar1);
	while (fVar3 < 0f)
	{
		fVar3 = (fVar3 + 360f);
	}
	while (fVar3 >= 360f)
	{
		fVar3 = (fVar3 - 360f);
	}
	return fVar3;
}

void func_469(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x2DE6C
{
	struct<31> Var0;
	func_470(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_470(int iParam0, var uParam1, int iParam2)//Position - 0x2DE8C
{
	func_4880(uParam1, iParam2);
	func_4874(uParam1, iParam2);
	func_4866(uParam1, iParam2);
	func_471(__LIB_0__::func_170(iParam0), uParam1, iParam2);
}

void func_471(int iParam0, var uParam1, int iParam2)//Position - 0x2DEBA
{
	switch (iParam0)
	{
		case 0:
			func_4793(uParam1, iParam2);
			break;
		case 1:
			func_4663(uParam1, iParam2);
			break;
		case 2:
			func_4586(uParam1, iParam2);
			break;
		case 3:
			func_4509(uParam1, iParam2);
			break;
		case 4:
			func_4335(uParam1, iParam2);
			break;
		case 5:
			func_4178(uParam1, iParam2);
			break;
		case 6:
			func_4113(uParam1, iParam2);
			break;
		case 7:
			func_3946(uParam1, iParam2);
			break;
		case 8:
			func_3775(uParam1, iParam2);
			break;
		case 9:
			func_3531(uParam1, iParam2);
			break;
		case 10:
			func_3453(uParam1, iParam2);
			break;
		case 11:
			func_3222(uParam1, iParam2);
			break;
		case 12:
			func_3078(uParam1, iParam2);
			break;
		case 13:
			func_2911(uParam1, iParam2);
			break;
		case 14:
			func_2738(uParam1, iParam2);
			break;
		case 15:
			func_2559(uParam1, iParam2);
			break;
		case 16:
			func_2449(uParam1, iParam2);
			break;
		case 17:
			func_2201(uParam1, iParam2);
			break;
		case 18:
			func_2107(uParam1, iParam2);
			break;
		case 19:
			func_1983(uParam1, iParam2);
			break;
		case 20:
			func_1544(uParam1, iParam2);
			break;
		case 21:
			func_1422(uParam1, iParam2);
			break;
		case 22:
			func_1249(uParam1, iParam2);
			break;
		case 23:
			func_1033(uParam1, iParam2);
			break;
		case 24:
			func_472(uParam1, iParam2);
			break;
	}
}

void func_472(var uParam0, int iParam1)//Position - 0x2E072
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 441209/*func_1032*/;
			break;
		case 111:
			uParam0->f_35 = 441195/*func_1031*/;
			break;
		case 1:
			uParam0->f_30 = 441099/*func_1030*/;
			break;
		case 2:
			uParam0->f_31 = 439748/*func_1024*/;
			break;
		case 3:
			uParam0->f_34 = 439519/*func_1023*/;
			break;
		case 4:
			uParam0->f_12 = 439507/*func_1022*/;
			break;
		case 5:
			uParam0->f_11 = 439497/*func_1021*/;
			break;
		case 37:
			uParam0->f_18 = 439308/*func_1020*/;
			break;
		case 38:
			uParam0->f_9 = 439261/*func_1019*/;
			break;
		case 42:
			uParam0->f_10 = 439233/*func_1018*/;
			break;
		case 6:
			uParam0->f_32 = 438924/*func_1017*/;
			break;
		case 11:
			uParam0->f_11 = 438915/*func_1016*/;
			break;
		case 12:
			uParam0->f_33 = 436247/*func_1008*/;
			break;
		case 14:
			uParam0->f_11 = 436238/*func_1007*/;
			break;
		case 109:
			uParam0->f_56 = 429551/*func_1004*/;
			break;
		case 8:
			uParam0->f_37 = 428676/*func_1003*/;
			break;
		case 7:
			uParam0->f_36 = 428559/*func_1002*/;
			break;
		case 79:
			*uParam0 = 428503/*func_999*/;
			break;
		case 9:
			uParam0->f_29 = 428350/*func_998*/;
			break;
		case 10:
			uParam0->f_27 = 428205/*func_996*/;
			break;
		case 13:
			uParam0->f_2 = 428123/*func_994*/;
			break;
		case 15:
			uParam0->f_2 = 426289/*func_970*/;
			break;
		case 16:
			uParam0->f_5 = 425091/*func_961*/;
			break;
		case 108:
			uParam0->f_55 = 384372/*func_851*/;
			break;
		case 17:
			uParam0->f_17 = 382725/*func_833*/;
			break;
		case 19:
			uParam0->f_17 = 382574/*func_828*/;
			break;
		case 18:
			uParam0->f_8 = 382549/*func_827*/;
			break;
		case 20:
			uParam0->f_3 = 382329/*func_825*/;
			break;
		case 21:
			uParam0->f_3 = 380888/*func_811*/;
			break;
		case 74:
			uParam0->f_53 = 380698/*func_809*/;
			break;
		case 75:
			uParam0->f_4 = 379897/*func_806*/;
			break;
		case 22:
			uParam0->f_24 = 379780/*func_804*/;
			break;
		case 23:
			uParam0->f_26 = 379737/*func_803*/;
			break;
		case 24:
			uParam0->f_26 = 379703/*func_802*/;
			break;
		case 26:
			uParam0->f_38 = 379695/*func_801*/;
			break;
		case 25:
			uParam0->f_23 = 376708/*func_781*/;
			break;
		case 27:
			uParam0->f_25 = 376700/*func_780*/;
			break;
		case 28:
			uParam0->f_24 = 376692/*func_779*/;
			break;
		case 30:
			uParam0->f_8 = 376542/*func_777*/;
			break;
		case 31:
			uParam0->f_39 = 376319/*func_774*/;
			break;
		case 33:
			uParam0->f_40 = 375326/*func_764*/;
			break;
		case 32:
			*uParam0 = 375271/*func_763*/;
			break;
		case 76:
			uParam0->f_13 = 375260/*func_762*/;
			break;
		case 34:
			uParam0->f_41 = 371508/*func_759*/;
			break;
		case 36:
			uParam0->f_58 = 371463/*func_758*/;
			break;
		case 35:
			uParam0->f_42 = 350459/*func_755*/;
			break;
		case 45:
			uParam0->f_14 = 350450/*func_754*/;
			break;
		case 46:
			uParam0->f_14 = 350441/*func_753*/;
			break;
		case 110:
			uParam0->f_57 = 350433/*func_752*/;
			break;
		case 77:
			uParam0->f_13 = 350410/*func_751*/;
			break;
		case 82:
			uParam0->f_19 = 350364/*func_749*/;
			break;
		case 47:
			uParam0->f_43 = 350232/*func_748*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 349090/*func_739*/;
			break;
		case 49:
			uParam0->f_8 = 349072/*func_738*/;
			break;
		case 50:
			*uParam0 = 348723/*func_734*/;
			break;
		case 51:
			*uParam0 = 348621/*func_733*/;
			break;
		case 52:
			uParam0->f_15 = 348610/*func_732*/;
			break;
		case 53:
			uParam0->f_13 = 348484/*func_731*/;
			break;
		case 54:
			uParam0->f_45 = 348097/*func_730*/;
			break;
		case 56:
			uParam0->f_46 = 348078/*func_729*/;
			break;
		case 57:
			uParam0->f_11 = 346869/*func_721*/;
			break;
		case 58:
			uParam0->f_13 = 346743/*func_720*/;
			break;
		case 59:
			*uParam0 = 345195/*func_705*/;
			break;
		case 60:
			*uParam0 = 345186/*func_704*/;
			break;
		case 61:
			uParam0->f_15 = 345175/*func_703*/;
			break;
		case 62:
			uParam0->f_13 = 345049/*func_702*/;
			break;
		case 55:
			uParam0->f_45 = 345041/*func_701*/;
			break;
		case 63:
			uParam0->f_11 = 345027/*func_700*/;
			break;
		case 64:
			uParam0->f_47 = 345019/*func_699*/;
			break;
		case 65:
			uParam0->f_21 = 343522/*func_685*/;
			break;
		case 66:
			uParam0->f_21 = 342836/*func_682*/;
			break;
		case 67:
			uParam0->f_21 = 342696/*func_680*/;
			break;
		case 68:
			*uParam0 = 341562/*func_676*/;
			break;
		case 69:
			*uParam0 = 341553/*func_675*/;
			break;
		case 70:
			uParam0->f_48 = 341541/*func_674*/;
			break;
		case 71:
			uParam0->f_49 = 341532/*func_673*/;
			break;
		case 107:
			uParam0->f_50 = 341520/*func_672*/;
			break;
		case 80:
			uParam0->f_7 = 341073/*func_670*/;
			break;
		case 84:
			uParam0->f_1 = 341064/*func_669*/;
			break;
		case 85:
			uParam0->f_1 = 205088/*func_571*/;
			break;
		case 87:
			uParam0->f_1 = 201235/*func_550*/;
			break;
		case 88:
			uParam0->f_1 = 201226/*func_549*/;
			break;
		case 89:
			uParam0->f_54 = 201218/*func_548*/;
			break;
		case 90:
			uParam0->f_1 = 200355/*func_532*/;
			break;
		case 91:
			uParam0->f_1 = 200321/*func_531*/;
			break;
		case 92:
			uParam0->f_1 = 198677/*func_522*/;
			break;
		case 94:
			uParam0->f_1 = 196666/*func_508*/;
			break;
		case 95:
			uParam0->f_22 = 196576/*func_507*/;
			break;
		case 96:
			uParam0->f_1 = 196567/*func_506*/;
			break;
		case 97:
			uParam0->f_1 = 196558/*func_505*/;
			break;
		case 98:
			uParam0->f_1 = 196549/*func_504*/;
			break;
		case 100:
			uParam0->f_22 = 196541/*func_503*/;
			break;
		case 101:
			uParam0->f_22 = 196533/*func_502*/;
			break;
		case 112:
			uParam0->f_13 = 196419/*func_501*/;
			break;
		case 113:
			uParam0->f_3 = 196301/*func_498*/;
			break;
		case 114:
			uParam0->f_16 = 195633/*func_497*/;
			break;
		case 115:
			uParam0->f_3 = 195624/*func_496*/;
			break;
		case 116:
			*uParam0 = 195615/*func_495*/;
			break;
		case 117:
			uParam0->f_16 = 191199/*func_494*/;
			break;
		case 118:
			uParam0->f_11 = 191190/*func_493*/;
			break;
		case 119:
			uParam0->f_27 = 191063/*func_488*/;
			break;
		case 120:
			uParam0->f_19 = 191008/*func_485*/;
			break;
		case 78:
			uParam0->f_59 = 190342/*func_475*/;
			break;
		case 124:
			uParam0->f_1 = 190333/*func_474*/;
			break;
		case 125:
			uParam0->f_19 = 190325/*func_473*/;
			break;
	}
}

int func_571(int iParam0, var uParam1)//Position - 0x32120
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_580(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_415(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_415(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_414(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_414(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_580(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x32895
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_581(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_581(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x329F7
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_137(*uParam0);
		if (func_596(iParam1) || __LIB_19__::func_37(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_596(int iParam0)//Position - 0x3387C
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_598(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_598(int iParam0, int iParam1, int iParam2)//Position - 0x3397D
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
				if (func_599(iParam0, iParam1, iVar0))
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
				if (func_599(iParam0, iParam1, iVar1))
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

int func_599(int iParam0, int iParam1, int iParam2)//Position - 0x33A1E
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
	Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar0, iParam1, iParam2, -1) };
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
				if (!func_599(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_599(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_37__::func_856(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_599(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_37__::func_856(iVar0, iVar4, iVar1, -1) };
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
			if (!func_599(iParam0, 14, uVar11[iVar10]))
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
						return func_599(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_599(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_663(int iParam0, var uParam1, int iParam2)//Position - 0x52E8F
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_517(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_39__::func_750(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_25__::func_536(*iParam0, &Var0);
			__LIB_37__::func_905(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_517(iParam2, 32))
			{
				func_580(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				__LIB_40__::func_879(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_517(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_517(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_730(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x54FC1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_7__::func_926(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_2__::func_432(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_2__::func_432(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_2__::func_432(iVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(iVar1) };
						if (__LIB_0__::func_585(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 __LIB_23__::func_164(int iParam0)//Position - 0x55144
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_781(int iParam0, int iParam1)//Position - 0x5BF84
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_372(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_2__::func_447(0);
			}
			else
			{
				__LIB_2__::func_447(1);
			}
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_379(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_5__::func_705(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_792(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x5C5E2
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_6__::func_911())
	{
		iVar0 = __LIB_3__::func_808();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_807(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_267(iVar5) };
						bVar8 = false;
						if (__LIB_2__::func_461(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_2__::func_180(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_425(iVar5, 1) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && !((__LIB_4__::func_682(iVar5, 1) && !__LIB_2__::func_457(iVar2, iVar5)) && __LIB_6__::func_25() != 0)) && !func_793(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_793(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_793(bool bParam0)//Position - 0x5C81D
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_1033(var uParam0, int iParam1)//Position - 0x6BB82
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 497642/*func_1248*/;
			break;
		case 111:
			uParam0->f_35 = 497633/*func_1247*/;
			break;
		case 1:
			uParam0->f_30 = 497554/*func_1245*/;
			break;
		case 2:
			uParam0->f_31 = 496916/*func_1241*/;
			break;
		case 3:
			uParam0->f_34 = 496650/*func_1240*/;
			break;
		case 4:
			uParam0->f_12 = 496638/*func_1239*/;
			break;
		case 6:
			uParam0->f_32 = 496539/*func_1238*/;
			break;
		case 37:
			uParam0->f_18 = 496408/*func_1237*/;
			break;
		case 38:
			uParam0->f_9 = 496361/*func_1236*/;
			break;
		case 39:
			uParam0->f_11 = 496326/*func_1235*/;
			break;
		case 41:
			uParam0->f_20 = 496207/*func_1232*/;
			break;
		case 42:
			uParam0->f_10 = 496179/*func_1231*/;
			break;
		case 11:
			uParam0->f_11 = 496169/*func_1230*/;
			break;
		case 12:
			uParam0->f_33 = 494018/*func_1226*/;
			break;
		case 14:
			uParam0->f_11 = 494009/*func_1225*/;
			break;
		case 109:
			uParam0->f_56 = 491425/*func_1222*/;
			break;
		case 8:
			uParam0->f_37 = 491417/*func_1221*/;
			break;
		case 7:
			uParam0->f_36 = 491408/*func_1220*/;
			break;
		case 79:
			*uParam0 = 491399/*func_1219*/;
			break;
		case 13:
			uParam0->f_2 = 491337/*func_1218*/;
			break;
		case 15:
			uParam0->f_2 = 491256/*func_1217*/;
			break;
		case 16:
			uParam0->f_5 = 490903/*func_1216*/;
			break;
		case 108:
			uParam0->f_55 = 486470/*func_1201*/;
			break;
		case 17:
			uParam0->f_17 = 485328/*func_1199*/;
			break;
		case 19:
			uParam0->f_17 = 485302/*func_1198*/;
			break;
		case 20:
			uParam0->f_3 = 485293/*func_1197*/;
			break;
		case 21:
			uParam0->f_3 = 485162/*func_1195*/;
			break;
		case 74:
			uParam0->f_53 = 485058/*func_1194*/;
			break;
		case 75:
			uParam0->f_4 = 485042/*func_1193*/;
			break;
		case 22:
			uParam0->f_24 = 484892/*func_1192*/;
			break;
		case 23:
			uParam0->f_26 = 484884/*func_1191*/;
			break;
		case 26:
			uParam0->f_38 = 477031/*func_1152*/;
			break;
		case 25:
			uParam0->f_23 = 475982/*func_1148*/;
			break;
		case 27:
			uParam0->f_25 = 475768/*func_1145*/;
			break;
		case 28:
			uParam0->f_24 = 475730/*func_1144*/;
			break;
		case 29:
			uParam0->f_28 = 475707/*func_1143*/;
			break;
		case 30:
			uParam0->f_8 = 474696/*func_1139*/;
			break;
		case 31:
			uParam0->f_39 = 474666/*func_1138*/;
			break;
		case 43:
			uParam0->f_8 = 474552/*func_1137*/;
			break;
		case 33:
			uParam0->f_40 = 474434/*func_1136*/;
			break;
		case 76:
			uParam0->f_13 = 474385/*func_1135*/;
			break;
		case 34:
			uParam0->f_41 = 465547/*func_1134*/;
			break;
		case 36:
			uParam0->f_58 = 465499/*func_1133*/;
			break;
		case 35:
			uParam0->f_42 = 454410/*func_1126*/;
			break;
		case 45:
			uParam0->f_14 = 454401/*func_1125*/;
			break;
		case 46:
			uParam0->f_14 = 454392/*func_1124*/;
			break;
		case 110:
			uParam0->f_57 = 454384/*func_1123*/;
			break;
		case 77:
			uParam0->f_13 = 454373/*func_1122*/;
			break;
		case 47:
			uParam0->f_43 = 454256/*func_1121*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 453522/*func_1111*/;
			break;
		case 49:
			uParam0->f_8 = 453513/*func_1110*/;
			break;
		case 50:
			*uParam0 = 453344/*func_1109*/;
			break;
		case 51:
			*uParam0 = 453335/*func_1108*/;
			break;
		case 52:
			uParam0->f_15 = 453324/*func_1107*/;
			break;
		case 53:
			uParam0->f_13 = 453301/*func_1106*/;
			break;
		case 54:
			uParam0->f_45 = 453253/*func_1105*/;
			break;
		case 56:
			uParam0->f_46 = 453235/*func_1104*/;
			break;
		case 57:
			uParam0->f_11 = 453193/*func_1102*/;
			break;
		case 58:
			uParam0->f_13 = 453151/*func_1101*/;
			break;
		case 59:
			*uParam0 = 453022/*func_1099*/;
			break;
		case 60:
			*uParam0 = 453013/*func_1098*/;
			break;
		case 61:
			uParam0->f_15 = 453002/*func_1097*/;
			break;
		case 62:
			uParam0->f_13 = 452979/*func_1096*/;
			break;
		case 63:
			uParam0->f_11 = 452970/*func_1095*/;
			break;
		case 55:
			uParam0->f_45 = 452929/*func_1094*/;
			break;
		case 64:
			uParam0->f_47 = 452921/*func_1093*/;
			break;
		case 65:
			uParam0->f_21 = 452913/*func_1092*/;
			break;
		case 66:
			uParam0->f_21 = 452642/*func_1091*/;
			break;
		case 67:
			uParam0->f_21 = 452572/*func_1090*/;
			break;
		case 68:
			*uParam0 = 451900/*func_1088*/;
			break;
		case 69:
			*uParam0 = 451891/*func_1087*/;
			break;
		case 70:
			uParam0->f_48 = 451879/*func_1086*/;
			break;
		case 71:
			uParam0->f_49 = 451659/*func_1085*/;
			break;
		case 107:
			uParam0->f_50 = 451647/*func_1084*/;
			break;
		case 80:
			uParam0->f_7 = 451123/*func_1081*/;
			break;
		case 84:
			uParam0->f_1 = 451055/*func_1078*/;
			break;
		case 85:
			uParam0->f_1 = 450152/*func_1076*/;
			break;
		case 87:
			uParam0->f_1 = 447523/*func_1067*/;
			break;
		case 88:
			uParam0->f_1 = 447514/*func_1066*/;
			break;
		case 89:
			uParam0->f_54 = 447506/*func_1065*/;
			break;
		case 96:
			uParam0->f_1 = 447497/*func_1064*/;
			break;
		case 97:
			uParam0->f_1 = 447488/*func_1063*/;
			break;
		case 98:
			uParam0->f_1 = 447479/*func_1062*/;
			break;
		case 100:
			uParam0->f_22 = 447471/*func_1061*/;
			break;
		case 101:
			uParam0->f_22 = 447463/*func_1060*/;
			break;
		case 112:
			uParam0->f_13 = 447428/*func_1058*/;
			break;
		case 113:
			uParam0->f_3 = 447419/*func_1057*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 115:
			uParam0->f_3 = 445472/*func_1054*/;
			break;
		case 116:
			*uParam0 = 445463/*func_1053*/;
			break;
		case 117:
			uParam0->f_16 = 444243/*func_1052*/;
			break;
		case 121:
			*uParam0 = 444161/*func_1051*/;
			break;
		case 122:
			*uParam0 = 444144/*func_1050*/;
			break;
		case 123:
			uParam0->f_19 = 444112/*func_1048*/;
			break;
		case 78:
			uParam0->f_59 = 442896/*func_1036*/;
			break;
		case 124:
			uParam0->f_1 = 442887/*func_1035*/;
			break;
		case 125:
			uParam0->f_19 = 442879/*func_1034*/;
			break;
	}
}

int func_1076(int iParam0, var uParam1)//Position - 0x6DE68
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_2__::func_399();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_580(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_533(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_2__::func_533(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1148(int iParam0, int iParam1)//Position - 0x7434E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_2__::func_399();
	iVar4 = 0;
	Var5 = { __LIB_2__::func_561(iVar3) };
	func_792(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_3__::func_805(iParam1, 0, 1);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				if (__LIB_2__::func_444(0, iParam1))
				{
					__LIB_2__::func_447(1);
				}
				break;
			default:
				__LIB_3__::func_805(iParam1, 0, !bVar2);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				__LIB_2__::func_447(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_805(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_927(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_927(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1152(var uParam0, var uParam1)//Position - 0x74767
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (!__LIB_4__::func_10() && iVar0 != 1)
	{
		__LIB_2__::func_565(1);
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_567(uParam0, uParam1);
			break;
		case 1:
			func_1153(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1153(var uParam0, var uParam1)//Position - 0x747BD
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_3__::func_820();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_724(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_2__::func_566() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_7__::func_396();
				if (bVar2)
				{
					__LIB_2__::func_447(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_3__::func_816(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_724(iVar8);
		if (__LIB_2__::func_563(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_7__::func_286(1, sVar6, sVar6);
		__LIB_3__::func_874();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_25__::func_557(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_7__::func_396();
			if (bVar2)
			{
				__LIB_2__::func_447(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_3__::func_816(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_25__::func_296(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_4__::func_10();
		__LIB_7__::func_396();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

int func_1201(var uParam0, var uParam1, var uParam2)//Position - 0x76C46
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar2))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (!__LIB_1__::func_393(iVar3))
				{
					return 0;
				}
				if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					if (!__LIB_0__::func_657(iVar2, 1))
					{
						return 0;
					}
					if (uParam0->f_1 == 9 || uParam0->f_1 == 10)
					{
						if (!__LIB_5__::func_570(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar5)
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_32__::func_246(uParam1);
				return 0;
			}
			if (__LIB_1__::func_264(iVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (__LIB_37__::func_857(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23))
								{
									if (__LIB_4__::func_725() || ((__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23))
									{
										if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_7__::func_249(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_90(uParam1, 0);
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23)
										{
											__LIB_7__::func_249(&(uParam1->f_22.f_94));
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_90(uParam1, 0);
											__LIB_18__::func_518(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_39__::func_738(*uParam0);
					bVar6 = __LIB_2__::func_480(iVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_2__::func_568(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_7__::func_249(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_7__::func_249(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_90(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_7__::func_249(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_90(uParam1, 1);
	return 0;
}

void func_1249(var uParam0, int iParam1)//Position - 0x797F3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 538278/*func_1421*/;
			break;
		case 111:
			uParam0->f_35 = 538264/*func_1420*/;
			break;
		case 1:
			uParam0->f_30 = 538173/*func_1418*/;
			break;
		case 2:
			uParam0->f_31 = 537952/*func_1415*/;
			break;
		case 3:
			uParam0->f_34 = 537795/*func_1414*/;
			break;
		case 4:
			uParam0->f_12 = 537783/*func_1413*/;
			break;
		case 5:
			uParam0->f_11 = 537773/*func_1412*/;
			break;
		case 37:
			uParam0->f_18 = 537658/*func_1411*/;
			break;
		case 38:
			uParam0->f_9 = 537611/*func_1410*/;
			break;
		case 42:
			uParam0->f_10 = 537583/*func_1409*/;
			break;
		case 6:
			uParam0->f_32 = 537495/*func_1408*/;
			break;
		case 11:
			uParam0->f_11 = 537486/*func_1407*/;
			break;
		case 12:
			uParam0->f_33 = 535741/*func_1402*/;
			break;
		case 14:
			uParam0->f_11 = 535732/*func_1401*/;
			break;
		case 109:
			uParam0->f_56 = 531659/*func_1398*/;
			break;
		case 8:
			uParam0->f_37 = 531182/*func_1397*/;
			break;
		case 7:
			uParam0->f_36 = 531088/*func_1396*/;
			break;
		case 79:
			*uParam0 = 531079/*func_1395*/;
			break;
		case 13:
			uParam0->f_2 = 531017/*func_1394*/;
			break;
		case 15:
			uParam0->f_2 = 530936/*func_1393*/;
			break;
		case 16:
			uParam0->f_5 = 530038/*func_1391*/;
			break;
		case 108:
			uParam0->f_55 = 526759/*func_1379*/;
			break;
		case 17:
			uParam0->f_17 = 525514/*func_1376*/;
			break;
		case 19:
			uParam0->f_17 = 525488/*func_1375*/;
			break;
		case 20:
			uParam0->f_3 = 525274/*func_1373*/;
			break;
		case 21:
			uParam0->f_3 = 525210/*func_1372*/;
			break;
		case 74:
			uParam0->f_53 = 525106/*func_1371*/;
			break;
		case 75:
			uParam0->f_4 = 525090/*func_1370*/;
			break;
		case 22:
			uParam0->f_24 = 524988/*func_1369*/;
			break;
		case 23:
			uParam0->f_26 = 524980/*func_1368*/;
			break;
		case 26:
			uParam0->f_38 = 520966/*func_1348*/;
			break;
		case 25:
			uParam0->f_23 = 520516/*func_1345*/;
			break;
		case 27:
			uParam0->f_25 = 520508/*func_1344*/;
			break;
		case 28:
			uParam0->f_24 = 520500/*func_1343*/;
			break;
		case 30:
			uParam0->f_8 = 519863/*func_1338*/;
			break;
		case 31:
			uParam0->f_39 = 519729/*func_1337*/;
			break;
		case 33:
			uParam0->f_40 = 518855/*func_1328*/;
			break;
		case 32:
			*uParam0 = 518652/*func_1324*/;
			break;
		case 76:
			uParam0->f_13 = 518499/*func_1323*/;
			break;
		case 34:
			uParam0->f_41 = 516887/*func_1319*/;
			break;
		case 36:
			uParam0->f_58 = 516842/*func_1318*/;
			break;
		case 35:
			uParam0->f_42 = 507643/*func_1315*/;
			break;
		case 45:
			uParam0->f_14 = 507634/*func_1314*/;
			break;
		case 46:
			uParam0->f_14 = 507625/*func_1313*/;
			break;
		case 110:
			uParam0->f_57 = 507617/*func_1312*/;
			break;
		case 77:
			uParam0->f_13 = 507594/*func_1311*/;
			break;
		case 47:
			uParam0->f_43 = 507545/*func_1310*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 507408/*func_1308*/;
			break;
		case 49:
			uParam0->f_8 = 507390/*func_1307*/;
			break;
		case 50:
			*uParam0 = 506558/*func_1303*/;
			break;
		case 51:
			*uParam0 = 506456/*func_1302*/;
			break;
		case 52:
			uParam0->f_15 = 506445/*func_1301*/;
			break;
		case 53:
			uParam0->f_13 = 506292/*func_1300*/;
			break;
		case 54:
			uParam0->f_45 = 506059/*func_1299*/;
			break;
		case 56:
			uParam0->f_46 = 506050/*func_1298*/;
			break;
		case 57:
			uParam0->f_11 = 505637/*func_1294*/;
			break;
		case 58:
			uParam0->f_13 = 505484/*func_1293*/;
			break;
		case 59:
			*uParam0 = 505475/*func_1292*/;
			break;
		case 60:
			*uParam0 = 505466/*func_1291*/;
			break;
		case 61:
			uParam0->f_15 = 505455/*func_1290*/;
			break;
		case 62:
			uParam0->f_13 = 505444/*func_1289*/;
			break;
		case 63:
			uParam0->f_11 = 505435/*func_1288*/;
			break;
		case 64:
			uParam0->f_47 = 505427/*func_1287*/;
			break;
		case 65:
			uParam0->f_21 = 504371/*func_1284*/;
			break;
		case 66:
			uParam0->f_21 = 504151/*func_1283*/;
			break;
		case 67:
			uParam0->f_21 = 504076/*func_1282*/;
			break;
		case 68:
			*uParam0 = 503387/*func_1281*/;
			break;
		case 69:
			*uParam0 = 503378/*func_1280*/;
			break;
		case 70:
			uParam0->f_48 = 503366/*func_1279*/;
			break;
		case 71:
			uParam0->f_49 = 503274/*func_1278*/;
			break;
		case 107:
			uParam0->f_50 = 503262/*func_1277*/;
			break;
		case 80:
			uParam0->f_7 = 502895/*func_1276*/;
			break;
		case 84:
			uParam0->f_1 = 502886/*func_1275*/;
			break;
		case 85:
			uParam0->f_1 = 502094/*func_1273*/;
			break;
		case 87:
			uParam0->f_1 = 500716/*func_1266*/;
			break;
		case 88:
			uParam0->f_1 = 500707/*func_1265*/;
			break;
		case 89:
			uParam0->f_54 = 500699/*func_1264*/;
			break;
		case 96:
			uParam0->f_1 = 500690/*func_1263*/;
			break;
		case 97:
			uParam0->f_1 = 500681/*func_1262*/;
			break;
		case 98:
			uParam0->f_1 = 500672/*func_1261*/;
			break;
		case 100:
			uParam0->f_22 = 500664/*func_1260*/;
			break;
		case 101:
			uParam0->f_22 = 500656/*func_1259*/;
			break;
		case 112:
			uParam0->f_13 = 500644/*func_1258*/;
			break;
		case 113:
			uParam0->f_3 = 500635/*func_1257*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 115:
			uParam0->f_3 = 500626/*func_1256*/;
			break;
		case 116:
			*uParam0 = 500617/*func_1255*/;
			break;
		case 117:
			uParam0->f_16 = 499397/*func_1254*/;
			break;
		case 78:
			uParam0->f_59 = 499225/*func_1252*/;
			break;
		case 124:
			uParam0->f_1 = 499216/*func_1251*/;
			break;
		case 125:
			uParam0->f_19 = 499208/*func_1250*/;
			break;
	}
}

int func_1273(int iParam0, var uParam1)//Position - 0x7A94E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_580(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_586(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_2__::func_586(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1299(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7B8CB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_2__::func_590(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_590(iVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_33(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_1300(int iParam0)//Position - 0x7B9B4
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1345(int iParam0, int iParam1)//Position - 0x7F144
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_408(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_19__::func_95(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1348(var uParam0, var uParam1)//Position - 0x7F306
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_1351(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_590(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_3__::func_829(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_1351(var uParam0, var uParam1)//Position - 0x7F3E5
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_569(uParam0, uParam1);
			break;
		case 1:
			func_1365(uParam0, uParam1);
			break;
		case 2:
			__LIB_32__::func_188(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1365(var uParam0, var uParam1)//Position - 0x7FFE3
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_96(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_319("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_19__::func_95(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_1398(int iParam0, var uParam1, int iParam2)//Position - 0x81CCB
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_2__::func_617(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_6__::func_414(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_792(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_19__::func_96(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_1422(var uParam0, int iParam1)//Position - 0x836AF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 554689/*func_1543*/;
			break;
		case 111:
			uParam0->f_35 = 554680/*func_1542*/;
			break;
		case 1:
			uParam0->f_30 = 554613/*func_1540*/;
			break;
		case 2:
			uParam0->f_31 = 554173/*func_1537*/;
			break;
		case 3:
			uParam0->f_34 = 554025/*func_1536*/;
			break;
		case 4:
			uParam0->f_12 = 554013/*func_1535*/;
			break;
		case 37:
			uParam0->f_18 = 553798/*func_1534*/;
			break;
		case 38:
			uParam0->f_9 = 553709/*func_1533*/;
			break;
		case 39:
			uParam0->f_11 = 553689/*func_1532*/;
			break;
		case 40:
			uParam0->f_6 = 553584/*func_1531*/;
			break;
		case 41:
			uParam0->f_20 = 553559/*func_1530*/;
			break;
		case 42:
			uParam0->f_10 = 553546/*func_1529*/;
			break;
		case 6:
			uParam0->f_32 = 553482/*func_1528*/;
			break;
		case 11:
			uParam0->f_11 = 553473/*func_1527*/;
			break;
		case 12:
			uParam0->f_33 = 552936/*func_1523*/;
			break;
		case 14:
			uParam0->f_11 = 552927/*func_1522*/;
			break;
		case 109:
			uParam0->f_56 = 551978/*func_1520*/;
			break;
		case 8:
			uParam0->f_37 = 551970/*func_1519*/;
			break;
		case 7:
			uParam0->f_36 = 551961/*func_1518*/;
			break;
		case 79:
			*uParam0 = 551952/*func_1517*/;
			break;
		case 13:
			uParam0->f_2 = 551890/*func_1516*/;
			break;
		case 15:
			uParam0->f_2 = 551809/*func_1515*/;
			break;
		case 16:
			uParam0->f_5 = 551482/*func_1514*/;
			break;
		case 108:
			uParam0->f_55 = 551473/*func_1513*/;
			break;
		case 17:
			uParam0->f_17 = 551461/*func_1512*/;
			break;
		case 19:
			uParam0->f_17 = 551449/*func_1511*/;
			break;
		case 18:
			uParam0->f_8 = 551407/*func_1509*/;
			break;
		case 20:
			uParam0->f_3 = 551398/*func_1508*/;
			break;
		case 21:
			uParam0->f_3 = 551350/*func_1507*/;
			break;
		case 74:
			uParam0->f_53 = 551195/*func_1505*/;
			break;
		case 75:
			uParam0->f_4 = 551186/*func_1504*/;
			break;
		case 22:
			uParam0->f_24 = 551084/*func_1503*/;
			break;
		case 23:
			uParam0->f_26 = 551076/*func_1502*/;
			break;
		case 25:
			uParam0->f_23 = 550649/*func_1499*/;
			break;
		case 27:
			uParam0->f_25 = 550641/*func_1498*/;
			break;
		case 28:
			uParam0->f_24 = 550633/*func_1497*/;
			break;
		case 30:
			uParam0->f_8 = 550598/*func_1496*/;
			break;
		case 31:
			uParam0->f_39 = 550568/*func_1495*/;
			break;
		case 33:
			uParam0->f_40 = 550401/*func_1494*/;
			break;
		case 76:
			uParam0->f_13 = 550378/*func_1493*/;
			break;
		case 34:
			uParam0->f_41 = 546764/*func_1490*/;
			break;
		case 36:
			uParam0->f_58 = 546719/*func_1489*/;
			break;
		case 35:
			uParam0->f_42 = 543525/*func_1485*/;
			break;
		case 45:
			uParam0->f_14 = 543516/*func_1484*/;
			break;
		case 46:
			uParam0->f_14 = 543507/*func_1483*/;
			break;
		case 110:
			uParam0->f_57 = 543499/*func_1482*/;
			break;
		case 77:
			uParam0->f_13 = 543488/*func_1481*/;
			break;
		case 47:
			uParam0->f_43 = 543326/*func_1480*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 542054/*func_1472*/;
			break;
		case 49:
			uParam0->f_8 = 542045/*func_1471*/;
			break;
		case 50:
			*uParam0 = 541620/*func_1464*/;
			break;
		case 51:
			*uParam0 = 541611/*func_1463*/;
			break;
		case 52:
			uParam0->f_15 = 541600/*func_1462*/;
			break;
		case 53:
			uParam0->f_13 = 541577/*func_1461*/;
			break;
		case 54:
			uParam0->f_45 = 541569/*func_1460*/;
			break;
		case 56:
			uParam0->f_46 = 541560/*func_1459*/;
			break;
		case 57:
			uParam0->f_11 = 541547/*func_1458*/;
			break;
		case 58:
			uParam0->f_13 = 541505/*func_1457*/;
			break;
		case 59:
			*uParam0 = 541496/*func_1456*/;
			break;
		case 60:
			*uParam0 = 541487/*func_1455*/;
			break;
		case 61:
			uParam0->f_15 = 541476/*func_1454*/;
			break;
		case 62:
			uParam0->f_13 = 541465/*func_1453*/;
			break;
		case 63:
			uParam0->f_11 = 541456/*func_1452*/;
			break;
		case 64:
			uParam0->f_47 = 541448/*func_1451*/;
			break;
		case 65:
			uParam0->f_21 = 541440/*func_1450*/;
			break;
		case 66:
			uParam0->f_21 = 540827/*func_1447*/;
			break;
		case 67:
			uParam0->f_21 = 540757/*func_1446*/;
			break;
		case 68:
			*uParam0 = 540064/*func_1445*/;
			break;
		case 69:
			*uParam0 = 540055/*func_1444*/;
			break;
		case 70:
			uParam0->f_48 = 540043/*func_1443*/;
			break;
		case 71:
			uParam0->f_49 = 540034/*func_1442*/;
			break;
		case 107:
			uParam0->f_50 = 540022/*func_1441*/;
			break;
		case 80:
			uParam0->f_7 = 540013/*func_1440*/;
			break;
		case 84:
			uParam0->f_1 = 540004/*func_1439*/;
			break;
		case 85:
			uParam0->f_1 = 539995/*func_1438*/;
			break;
		case 87:
			uParam0->f_1 = 539986/*func_1437*/;
			break;
		case 88:
			uParam0->f_1 = 539977/*func_1436*/;
			break;
		case 89:
			uParam0->f_54 = 539969/*func_1435*/;
			break;
		case 96:
			uParam0->f_1 = 539960/*func_1434*/;
			break;
		case 97:
			uParam0->f_1 = 539951/*func_1433*/;
			break;
		case 98:
			uParam0->f_1 = 539942/*func_1432*/;
			break;
		case 100:
			uParam0->f_22 = 539934/*func_1431*/;
			break;
		case 101:
			uParam0->f_22 = 539926/*func_1430*/;
			break;
		case 112:
			uParam0->f_13 = 539914/*func_1429*/;
			break;
		case 113:
			uParam0->f_3 = 539905/*func_1428*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 115:
			uParam0->f_3 = 539896/*func_1427*/;
			break;
		case 116:
			*uParam0 = 539887/*func_1426*/;
			break;
		case 117:
			uParam0->f_16 = 499397/*func_1254*/;
			break;
		case 78:
			uParam0->f_59 = 539879/*func_1425*/;
			break;
		case 124:
			uParam0->f_1 = 539870/*func_1424*/;
			break;
		case 125:
			uParam0->f_19 = 539862/*func_1423*/;
			break;
	}
}

void func_1472(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x84566
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_2__::func_635();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 1:
			__LIB_3__::func_805(iParam3, 0, 0);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 3:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 2:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_4__::func_727(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_792(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_3__::func_805(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(4, iParam3) || __LIB_2__::func_444(5, iParam3))
	{
		iVar5 = __LIB_8__::func_220(__LIB_2__::func_444(4, iParam3));
		__LIB_2__::func_633(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_626())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_3__::func_834())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_2__::func_549(iParam0, -1);
		}
	}
}

void func_1499(int iParam0, int iParam1)//Position - 0x866F9
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && Global_1946250.f_3606 != 148)
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1544(var uParam0, int iParam1)//Position - 0x876CA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 830410/*func_1982*/;
			break;
		case 1:
			uParam0->f_30 = 830355/*func_1981*/;
			break;
		case 2:
			uParam0->f_31 = 829695/*func_1979*/;
			break;
		case 3:
			uParam0->f_34 = 829568/*func_1978*/;
			break;
		case 4:
			uParam0->f_12 = 829536/*func_1977*/;
			break;
		case 5:
			uParam0->f_11 = 829525/*func_1976*/;
			break;
		case 6:
			uParam0->f_32 = 829461/*func_1975*/;
			break;
		case 111:
			uParam0->f_35 = 829438/*func_1974*/;
			break;
		case 79:
			*uParam0 = 829429/*func_1973*/;
			break;
		case 37:
			uParam0->f_18 = 829314/*func_1972*/;
			break;
		case 38:
			uParam0->f_9 = 829218/*func_1970*/;
			break;
		case 11:
			uParam0->f_11 = 829209/*func_1969*/;
			break;
		case 12:
			uParam0->f_33 = 828819/*func_1967*/;
			break;
		case 109:
			uParam0->f_56 = 828516/*func_1966*/;
			break;
		case 15:
			uParam0->f_2 = 826549/*func_1953*/;
			break;
		case 13:
			uParam0->f_2 = 826540/*func_1952*/;
			break;
		case 75:
			uParam0->f_4 = 826531/*func_1951*/;
			break;
		case 16:
			uParam0->f_5 = 826148/*func_1948*/;
			break;
		case 108:
			uParam0->f_55 = 822207/*func_1930*/;
			break;
		case 17:
			uParam0->f_17 = 821481/*func_1927*/;
			break;
		case 19:
			uParam0->f_17 = 821455/*func_1926*/;
			break;
		case 20:
			uParam0->f_3 = 821286/*func_1925*/;
			break;
		case 21:
			uParam0->f_3 = 821223/*func_1924*/;
			break;
		case 74:
			uParam0->f_53 = 821071/*func_1923*/;
			break;
		case 22:
			uParam0->f_24 = 820990/*func_1922*/;
			break;
		case 25:
			uParam0->f_23 = 820053/*func_1918*/;
			break;
		case 30:
			uParam0->f_8 = 818725/*func_1912*/;
			break;
		case 31:
			uParam0->f_39 = 818147/*func_1909*/;
			break;
		case 33:
			uParam0->f_40 = 816912/*func_1904*/;
			break;
		case 14:
			uParam0->f_11 = 816903/*func_1903*/;
			break;
		case 34:
			uParam0->f_41 = 814136/*func_1900*/;
			break;
		case 36:
			uParam0->f_58 = 814083/*func_1899*/;
			break;
		case 35:
			uParam0->f_42 = 808631/*func_1895*/;
			break;
		case 45:
			uParam0->f_14 = 808622/*func_1894*/;
			break;
		case 46:
			uParam0->f_14 = 808613/*func_1893*/;
			break;
		case 110:
			uParam0->f_57 = 808605/*func_1892*/;
			break;
		case 77:
			uParam0->f_13 = 808582/*func_1891*/;
			break;
		case 47:
			uParam0->f_43 = 808533/*func_1890*/;
			break;
		case 49:
			uParam0->f_8 = 808508/*func_1889*/;
			break;
		case 50:
			*uParam0 = 808470/*func_1888*/;
			break;
		case 51:
			*uParam0 = 808396/*func_1885*/;
			break;
		case 52:
			uParam0->f_15 = 808385/*func_1884*/;
			break;
		case 53:
			uParam0->f_13 = 808306/*func_1883*/;
			break;
		case 54:
			uParam0->f_45 = 808298/*func_1882*/;
			break;
		case 56:
			uParam0->f_46 = 808289/*func_1881*/;
			break;
		case 57:
			uParam0->f_11 = 808279/*func_1880*/;
			break;
		case 58:
			uParam0->f_13 = 808032/*func_1879*/;
			break;
		case 64:
			uParam0->f_47 = 807039/*func_1875*/;
			break;
		case 65:
			uParam0->f_21 = 805847/*func_1870*/;
			break;
		case 66:
			uParam0->f_21 = 804740/*func_1859*/;
			break;
		case 67:
			uParam0->f_21 = 804564/*func_1857*/;
			break;
		case 68:
			*uParam0 = 802904/*func_1843*/;
			break;
		case 69:
			*uParam0 = 802895/*func_1842*/;
			break;
		case 70:
			uParam0->f_48 = 802883/*func_1841*/;
			break;
		case 71:
			uParam0->f_49 = 802874/*func_1840*/;
			break;
		case 107:
			uParam0->f_50 = 802862/*func_1839*/;
			break;
		case 80:
			uParam0->f_7 = 802020/*func_1833*/;
			break;
		case 73:
			uParam0->f_51 = 802011/*func_1832*/;
			break;
		case 84:
			uParam0->f_1 = 801359/*func_1830*/;
			break;
		case 85:
			uParam0->f_1 = 800487/*func_1822*/;
			break;
		case 87:
			uParam0->f_1 = 799276/*func_1813*/;
			break;
		case 88:
			uParam0->f_1 = 799256/*func_1812*/;
			break;
		case 89:
			uParam0->f_54 = 799162/*func_1811*/;
			break;
		case 90:
			uParam0->f_1 = 799031/*func_1808*/;
			break;
		case 91:
			uParam0->f_1 = 798403/*func_1807*/;
			break;
		case 92:
			uParam0->f_1 = 797636/*func_1804*/;
			break;
		case 94:
			uParam0->f_1 = 797084/*func_1803*/;
			break;
		case 95:
			uParam0->f_22 = 796488/*func_1798*/;
			break;
		case 18:
			uParam0->f_8 = 796130/*func_1794*/;
			break;
		case 96:
			uParam0->f_1 = 796037/*func_1793*/;
			break;
		case 97:
			uParam0->f_1 = 795191/*func_1788*/;
			break;
		case 98:
			uParam0->f_1 = 560762/*func_1593*/;
			break;
		case 100:
			uParam0->f_22 = 558049/*func_1577*/;
			break;
		case 101:
			uParam0->f_22 = 556887/*func_1564*/;
			break;
		case 78:
			uParam0->f_59 = 556679/*func_1561*/;
			break;
		case 104:
			uParam0->f_1 = 556211/*func_1552*/;
			break;
		case 102:
			uParam0->f_1 = 556202/*func_1551*/;
			break;
		case 103:
			uParam0->f_22 = 556092/*func_1546*/;
			break;
		case 81:
			*uParam0 = 556049/*func_1545*/;
			break;
	}
}

void func_1577(int iParam0, var uParam1)//Position - 0x883E1
{
	int iVar0;
	float fVar1;
	if (__LIB_2__::func_675())
	{
		if (uParam1->f_218 == -1)
		{
			uParam1->f_218 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam1->f_218, "Sink", "DLC_H4_Submarine_Sinking_Sounds", true);
			CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
			CAM::DO_SCREEN_FADE_OUT(750);
		}
		else if (AUDIO::HAS_SOUND_FINISHED(uParam1->f_218))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_7), 24);
		}
	}
	else if (__LIB_3__::func_842())
	{
		if (!BitTest(uParam1->f_188, 0))
		{
			if (__LIB_0__::func_121(uParam1->f_140[0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], true, false);
				MISC::SET_BIT(&(uParam1->f_188), 0);
			}
		}
	}
	else
	{
		if (!BitTest(uParam1->f_188, 1))
		{
			if (func_1582(uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (__LIB_2__::func_413(&(Global_1946250.f_4073), 0) || __LIB_2__::func_413(&(Global_1946250.f_4073), 1))
		{
			if (!BitTest(uParam1->f_188, 0))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar0], true, false);
						}
					}
					iVar0++;
				}
				if (__LIB_0__::func_121(uParam1->f_109))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_109))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, true, false);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(322);
				}
				MISC::SET_BIT(&(uParam1->f_188), 0);
				__LIB_2__::func_670(1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_1946250.f_4073.f_394))
			{
				fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_1946250.f_4073.f_394);
				__LIB_18__::func_564(uParam1, fVar1, 1);
			}
			if (AUDIO::IS_VEHICLE_RADIO_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
			}
		}
	}
	if (!Global_1946250.f_4073.f_386)
	{
		if (!__LIB_3__::func_842())
		{
			__LIB_7__::func_375(0, iParam0);
		}
	}
}

int func_1582(var uParam0)//Position - 0x88639
{
	int iVar0;
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PLAYER::PLAYER_ID() == Global_1853194) && !Global_1946229)
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("avisa") && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("seasparrow3")) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("seasparrow2")) && !__LIB_0__::func_657(iVar0, 1))
		{
			return 1;
		}
		if (__LIB_0__::func_657(iVar0, 1))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, false, false);
			__LIB_2__::func_662(1);
			return 1;
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avisa"))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, false, false);
			__LIB_2__::func_662(1);
			return 1;
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("seasparrow3"))
		{
			__LIB_2__::func_674(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_248))
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
				if (!STREAMING::HAS_MODEL_LOADED(joaat("seasparrow2")))
				{
					return 0;
				}
				if (!__LIB_6__::func_977(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 1) + 1, 0, 1))
				{
					return 1;
				}
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 1) + 1);
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
					}
					uParam0->f_248 = VEHICLE::CREATE_VEHICLE(joaat("seasparrow2"), ENTITY::GET_ENTITY_COORDS(iVar0, true), 0f, true, false, false);
					__LIB_2__::func_673(uParam0->f_248, __LIB_0__::func_228(30505, -1), __LIB_0__::func_228(30506, -1), __LIB_0__::func_228(34835/*func_121*/, -1));
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_248, ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2, true);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_248, false, false);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_248, false, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_248, false, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_248, true);
					TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_248, 20000, -1, 2f, 16, 0);
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
					}
				}
			}
		}
	}
	if (((__LIB_0__::func_121(uParam0->f_248) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && PLAYER::PLAYER_ID() == Global_1853194) && !Global_1946229)
	{
		if (__LIB_1__::func_126(PLAYER::PLAYER_PED_ID(), uParam0->f_248) && VEHICLE::IS_VEHICLE_MODEL(uParam0->f_248, joaat("seasparrow2")))
		{
			Global_2789752 = 1;
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), false, false);
			__LIB_2__::func_662(1);
			return 1;
		}
	}
	if (Global_1946229 && PLAYER::PLAYER_ID() != Global_1853194)
	{
		if (__LIB_2__::func_672())
		{
			if (__LIB_18__::func_565())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1593(var uParam0, var uParam1)//Position - 0x88E7A
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_2__::func_675())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_3__::func_842())
	{
		func_1610(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_43(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_2__::func_684(Global_1946250.f_3377) };
			Var2 = { __LIB_2__::func_683(Global_1946250.f_3377) };
			sVar3 = __LIB_2__::func_669(0, 1);
			sVar4 = __LIB_2__::func_682(0, 1);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_2__::func_669(bVar0, 0);
			sVar4 = __LIB_2__::func_682(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_2__::func_668(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_667(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_663(&iVar9, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_7__::func_423(uParam1->f_109);
			return 0;
		}
		__LIB_2__::func_663(1);
		if (__LIB_7__::func_422())
		{
			__LIB_7__::func_635(iVar8);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_2__::func_677(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_2__::func_676(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_1610(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x89AA5
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_581(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1611(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1611(var uParam0, int iParam1)//Position - 0x89B03
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_2__::func_204(iParam1))
	{
		iVar0 = __LIB_25__::func_208(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1615(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_19__::func_138(), __LIB_2__::func_685(__LIB_6__::func_417(iParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(iParam1, 0), __LIB_7__::func_306(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1615(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x89C22
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_37__::func_867(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_7__::func_307(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_2__::func_257(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_200(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_2__::func_256(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_2__::func_256(uParam0->f_2) == 8 || __LIB_2__::func_256(uParam0->f_2) == 50) || __LIB_2__::func_256(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_25__::func_113(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_6__::func_911())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_6__::func_810(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_18__::func_734(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_596(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_37__::func_856(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_709(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_2__::func_255(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_155(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1738(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1738(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_597(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_0__::func_812(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_2__::func_254(*uParam0))
									{
										iVar13 = __LIB_2__::func_253(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_2__::func_254(*uParam0) && __LIB_2__::func_252(*uParam0))
									{
										iVar15 = __LIB_2__::func_253(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_1728(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_2__::func_251(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_6__::func_810(*uParam0, 0, -1, 0);
											__LIB_6__::func_810(*uParam0, 1, -1, 0);
											__LIB_6__::func_810(*uParam0, 2, -1, 0);
											func_1659(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_1659(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_556(2153, -1, 0);
											iVar19 = __LIB_1__::func_556(2160, -1, 0);
											if (__LIB_1__::func_563(161, -1))
											{
												iVar21 = __LIB_1__::func_556(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_181(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_186(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_181(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_186(iVar21);
														if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1659(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_1659(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_155(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_1654(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1625(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_2__::func_250(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_250(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_6__::func_785(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_235(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_235(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_2__::func_249(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_155(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_2__::func_249(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_2__::func_249(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
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

void func_1625(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x8FAEC
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
		bVar3 = func_1652(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_1643(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_993(Var9.f_2, Var9.f_3, iVar10))
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

int func_1643(int iParam0, int iParam1)//Position - 0x99FCC
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_598(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_598(iParam0, 11, -1);
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

int func_1652(int iParam0, bool bParam1)//Position - 0x9A42A
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
							iVar2 = __LIB_25__::func_110(joaat("MP_M_Freemode_01"), 11, func_598(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
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
						iVar3 = func_598(iParam0, 11, -1);
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
						iVar5 = func_598(iParam0, 8, -1);
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
							iVar7 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_598(iParam0, 11, -1), 0);
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
						iVar8 = func_598(iParam0, 11, -1);
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
							iVar10 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_598(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_110(joaat("MP_F_Freemode_01"), 11, func_598(iParam0, 11, -1), 0);
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
						iVar12 = func_598(iParam0, 8, -1);
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

void func_1654(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x9B488
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_250(iParam0);
		bVar2 = func_1652(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
		bVar4 = func_1643(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_6__::func_785(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_25__::func_27(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

int func_1659(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x9C4E8
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
		Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
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
			func_1723(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 10, 0, -1) };
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
						func_1723(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1723(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1659(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1723(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iVar0, func_598(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_1659(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_1717(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1723(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_749(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1659(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1723(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1659(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1728(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1659(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1659(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1714(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1659(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_870(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1659(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1659(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar32, -1) };
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
								func_1659(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_870(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
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
								func_1659(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1659(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1659(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_32__::func_56(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1717(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1714(iVar5, func_598(iParam0, 8, -1), iParam2, func_598(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
				func_1700(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1714(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1717(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_32__::func_56(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1714(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
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
						func_1659(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1659(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_37__::func_856(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1714(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1714(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_749(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1659(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1714(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1659(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_599(iParam0, 9, iVar63))
						{
							func_1659(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1659(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1659(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
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
						func_1659(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_598(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_598(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1659(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_1659(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1659(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1659(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1659(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1659(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1659(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1659(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1659(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1659(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1728(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1659(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_749(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1659(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1660(iParam0, &uVar4))
		{
			func_1659(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1659(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1659(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1659(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_598(iParam0, 3, -1), iVar10);
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
				func_1659(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1660(int iParam0, var uParam1)//Position - 0x9E392
{
	int iVar0;
	int iVar1;
	*uParam1 = func_598(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_599(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_1700(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA8D8B
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_1625(iParam0, bParam3, 0, -1);
}

int func_1714(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB09B3
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
					iVar0 = func_1714(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1714(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_1717(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB3F5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1719(iParam0))
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
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_297(iVar0, iParam2, 13) && !__LIB_25__::func_297(iVar0, iParam2, 14)) && !__LIB_25__::func_297(iVar0, iParam2, 15)) && !__LIB_25__::func_297(iVar0, iParam2, 16)) && !__LIB_25__::func_297(iVar0, iParam2, 71)) && !__LIB_25__::func_297(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_110(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1719(int iParam0)//Position - 0xB40EE
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_598(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_598(iParam0, 11, -1);
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

void func_1723(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB4547
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
		Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1723(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1723(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1723(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1723(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1723(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1723(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1723(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_37__::func_856(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1723(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1723(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1723(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1728(int iParam0)//Position - 0xB5C49
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
		if (!func_1733(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_1733(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1733(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB6613
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_598(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1738(int iParam0, int iParam1, int iParam2)//Position - 0xB6DA0
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1739(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_598(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_1739(int iParam0)//Position - 0xB6FAC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1740(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1740(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB7041
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_1659(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1659(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_1804(var uParam0, var uParam1)//Position - 0xC2BC4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar2, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_7__::func_423(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_7__::func_423(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1610(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_95())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_2__::func_671());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_7__::func_635(iVar3);
	__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1822(int iParam0, var uParam1)//Position - 0xC36E7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_3__::func_845())
	{
		return 1;
	}
	if (__LIB_32__::func_25())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_6__::func_418();
	Var2 = { __LIB_18__::func_737(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1610(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_930(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_663(&iVar1, &(uParam1->f_109), 32);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_18__::func_736(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_2__::func_701(iParam0, iVar0);
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_1918(int iParam0, int iParam1)//Position - 0xC8355
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_18__::func_911(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_388(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1919(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_933(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1919(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_1919(int iParam0, bool bParam1)//Position - 0xC85E4
{
	__LIB_25__::func_388(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_1983(var uParam0, int iParam1)//Position - 0xCABD3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 851498/*func_2106*/;
			break;
		case 111:
			uParam0->f_35 = 851489/*func_2105*/;
			break;
		case 1:
			uParam0->f_30 = 851422/*func_2103*/;
			break;
		case 2:
			uParam0->f_31 = 851096/*func_2100*/;
			break;
		case 3:
			uParam0->f_34 = 850935/*func_2099*/;
			break;
		case 4:
			uParam0->f_12 = 850923/*func_2098*/;
			break;
		case 6:
			uParam0->f_32 = 850859/*func_2097*/;
			break;
		case 11:
			uParam0->f_11 = 850850/*func_2096*/;
			break;
		case 12:
			uParam0->f_33 = 850514/*func_2092*/;
			break;
		case 14:
			uParam0->f_11 = 850505/*func_2091*/;
			break;
		case 109:
			uParam0->f_56 = 849769/*func_2089*/;
			break;
		case 8:
			uParam0->f_37 = 849761/*func_2088*/;
			break;
		case 7:
			uParam0->f_36 = 849752/*func_2087*/;
			break;
		case 79:
			*uParam0 = 849743/*func_2086*/;
			break;
		case 72:
			uParam0->f_12 = 849731/*func_2085*/;
			break;
		case 13:
			uParam0->f_2 = 849722/*func_2084*/;
			break;
		case 15:
			uParam0->f_2 = 849643/*func_2083*/;
			break;
		case 16:
			uParam0->f_5 = 849299/*func_2082*/;
			break;
		case 108:
			uParam0->f_55 = 849290/*func_2081*/;
			break;
		case 17:
			uParam0->f_17 = 848780/*func_2079*/;
			break;
		case 19:
			uParam0->f_17 = 848726/*func_2078*/;
			break;
		case 18:
			uParam0->f_8 = 848638/*func_2076*/;
			break;
		case 20:
			uParam0->f_3 = 848618/*func_2075*/;
			break;
		case 21:
			uParam0->f_3 = 848591/*func_2074*/;
			break;
		case 74:
			uParam0->f_53 = 848569/*func_2073*/;
			break;
		case 75:
			uParam0->f_4 = 848560/*func_2072*/;
			break;
		case 22:
			uParam0->f_24 = 848458/*func_2071*/;
			break;
		case 23:
			uParam0->f_26 = 848450/*func_2070*/;
			break;
		case 26:
			uParam0->f_38 = 848442/*func_2069*/;
			break;
		case 25:
			uParam0->f_23 = 847681/*func_2065*/;
			break;
		case 27:
			uParam0->f_25 = 847673/*func_2064*/;
			break;
		case 28:
			uParam0->f_24 = 847665/*func_2063*/;
			break;
		case 30:
			uParam0->f_8 = 847554/*func_2062*/;
			break;
		case 31:
			uParam0->f_39 = 847505/*func_2061*/;
			break;
		case 33:
			uParam0->f_40 = 847436/*func_2060*/;
			break;
		case 76:
			uParam0->f_13 = 847413/*func_2059*/;
			break;
		case 34:
			uParam0->f_41 = 843340/*func_2056*/;
			break;
		case 36:
			uParam0->f_58 = 843283/*func_2055*/;
			break;
		case 35:
			uParam0->f_42 = 837065/*func_2046*/;
			break;
		case 45:
			uParam0->f_14 = 837056/*func_2045*/;
			break;
		case 46:
			uParam0->f_14 = 837047/*func_2044*/;
			break;
		case 110:
			uParam0->f_57 = 837039/*func_2043*/;
			break;
		case 77:
			uParam0->f_13 = 837028/*func_2042*/;
			break;
		case 47:
			uParam0->f_43 = 836924/*func_2041*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 835857/*func_2033*/;
			break;
		case 49:
			uParam0->f_8 = 835848/*func_2032*/;
			break;
		case 50:
			*uParam0 = 835451/*func_2025*/;
			break;
		case 51:
			*uParam0 = 835442/*func_2024*/;
			break;
		case 52:
			uParam0->f_15 = 835432/*func_2023*/;
			break;
		case 53:
			uParam0->f_13 = 835409/*func_2022*/;
			break;
		case 54:
			uParam0->f_45 = 834915/*func_2020*/;
			break;
		case 56:
			uParam0->f_46 = 834906/*func_2019*/;
			break;
		case 57:
			uParam0->f_11 = 834897/*func_2018*/;
			break;
		case 58:
			uParam0->f_13 = 834855/*func_2017*/;
			break;
		case 59:
			*uParam0 = 834846/*func_2016*/;
			break;
		case 60:
			*uParam0 = 834837/*func_2015*/;
			break;
		case 61:
			uParam0->f_15 = 834826/*func_2014*/;
			break;
		case 62:
			uParam0->f_13 = 834815/*func_2013*/;
			break;
		case 63:
			uParam0->f_11 = 834806/*func_2012*/;
			break;
		case 64:
			uParam0->f_47 = 834798/*func_2011*/;
			break;
		case 65:
			uParam0->f_21 = 834790/*func_2010*/;
			break;
		case 66:
			uParam0->f_21 = 834480/*func_2009*/;
			break;
		case 67:
			uParam0->f_21 = 834410/*func_2008*/;
			break;
		case 68:
			*uParam0 = 833721/*func_2007*/;
			break;
		case 69:
			*uParam0 = 833712/*func_2006*/;
			break;
		case 70:
			uParam0->f_48 = 833700/*func_2005*/;
			break;
		case 71:
			uParam0->f_49 = 833691/*func_2004*/;
			break;
		case 107:
			uParam0->f_50 = 833679/*func_2003*/;
			break;
		case 80:
			uParam0->f_7 = 833670/*func_2002*/;
			break;
		case 84:
			uParam0->f_1 = 833661/*func_2001*/;
			break;
		case 85:
			uParam0->f_1 = 833652/*func_2000*/;
			break;
		case 87:
			uParam0->f_1 = 833643/*func_1999*/;
			break;
		case 88:
			uParam0->f_1 = 833634/*func_1998*/;
			break;
		case 89:
			uParam0->f_54 = 833626/*func_1997*/;
			break;
		case 96:
			uParam0->f_1 = 833601/*func_1996*/;
			break;
		case 97:
			uParam0->f_1 = 833492/*func_1995*/;
			break;
		case 98:
			uParam0->f_1 = 832781/*func_1994*/;
			break;
		case 100:
			uParam0->f_22 = 832117/*func_1992*/;
			break;
		case 101:
			uParam0->f_22 = 831990/*func_1991*/;
			break;
		case 112:
			uParam0->f_13 = 831978/*func_1990*/;
			break;
		case 113:
			uParam0->f_3 = 831969/*func_1989*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 115:
			uParam0->f_3 = 831960/*func_1988*/;
			break;
		case 116:
			*uParam0 = 831951/*func_1987*/;
			break;
		case 117:
			uParam0->f_16 = 499397/*func_1254*/;
			break;
		case 78:
			uParam0->f_59 = 831943/*func_1986*/;
			break;
		case 124:
			uParam0->f_1 = 831934/*func_1985*/;
			break;
		case 125:
			uParam0->f_19 = 831926/*func_1984*/;
			break;
	}
}

int func_1994(var uParam0, var uParam1)//Position - 0xCB50D
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1610(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_2065(int iParam0, int iParam1)//Position - 0xCEF41
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_3__::func_856(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_2__::func_776(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_793(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_793(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_7__::func_937(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_2066())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_2066()//Position - 0xCF1CF
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2107(var uParam0, int iParam1)//Position - 0xCFE33
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 860265/*func_2200*/;
			break;
		case 111:
			uParam0->f_35 = 860256/*func_2199*/;
			break;
		case 1:
			uParam0->f_30 = 860185/*func_2197*/;
			break;
		case 2:
			uParam0->f_31 = 859947/*func_2194*/;
			break;
		case 3:
			uParam0->f_34 = 859896/*func_2193*/;
			break;
		case 4:
			uParam0->f_12 = 859884/*func_2192*/;
			break;
		case 6:
			uParam0->f_32 = 859820/*func_2191*/;
			break;
		case 11:
			uParam0->f_11 = 859811/*func_2190*/;
			break;
		case 12:
			uParam0->f_33 = 859371/*func_2186*/;
			break;
		case 14:
			uParam0->f_11 = 859362/*func_2185*/;
			break;
		case 109:
			uParam0->f_56 = 858688/*func_2183*/;
			break;
		case 8:
			uParam0->f_37 = 858680/*func_2182*/;
			break;
		case 7:
			uParam0->f_36 = 858671/*func_2181*/;
			break;
		case 79:
			*uParam0 = 858662/*func_2180*/;
			break;
		case 13:
			uParam0->f_2 = 858600/*func_2179*/;
			break;
		case 15:
			uParam0->f_2 = 858520/*func_2178*/;
			break;
		case 16:
			uParam0->f_5 = 858151/*func_2176*/;
			break;
		case 108:
			uParam0->f_55 = 858142/*func_2175*/;
			break;
		case 17:
			uParam0->f_17 = 858130/*func_2174*/;
			break;
		case 19:
			uParam0->f_17 = 858118/*func_2173*/;
			break;
		case 20:
			uParam0->f_3 = 858109/*func_2172*/;
			break;
		case 21:
			uParam0->f_3 = 858100/*func_2171*/;
			break;
		case 74:
			uParam0->f_53 = 858078/*func_2170*/;
			break;
		case 75:
			uParam0->f_4 = 858069/*func_2169*/;
			break;
		case 22:
			uParam0->f_24 = 858057/*func_2168*/;
			break;
		case 23:
			uParam0->f_26 = 858049/*func_2167*/;
			break;
		case 26:
			uParam0->f_38 = 858041/*func_2166*/;
			break;
		case 25:
			uParam0->f_23 = 858033/*func_2165*/;
			break;
		case 27:
			uParam0->f_25 = 858025/*func_2164*/;
			break;
		case 28:
			uParam0->f_24 = 858017/*func_2163*/;
			break;
		case 30:
			uParam0->f_8 = 857982/*func_2162*/;
			break;
		case 31:
			uParam0->f_39 = 857952/*func_2161*/;
			break;
		case 33:
			uParam0->f_40 = 857882/*func_2160*/;
			break;
		case 76:
			uParam0->f_13 = 857859/*func_2159*/;
			break;
		case 34:
			uParam0->f_41 = 857763/*func_2158*/;
			break;
		case 36:
			uParam0->f_58 = 857718/*func_2157*/;
			break;
		case 35:
			uParam0->f_42 = 855205/*func_2155*/;
			break;
		case 45:
			uParam0->f_14 = 855196/*func_2154*/;
			break;
		case 46:
			uParam0->f_14 = 855187/*func_2153*/;
			break;
		case 110:
			uParam0->f_57 = 855179/*func_2152*/;
			break;
		case 77:
			uParam0->f_13 = 855168/*func_2151*/;
			break;
		case 47:
			uParam0->f_43 = 855128/*func_2150*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 855020/*func_2149*/;
			break;
		case 49:
			uParam0->f_8 = 855011/*func_2148*/;
			break;
		case 50:
			*uParam0 = 854808/*func_2147*/;
			break;
		case 51:
			*uParam0 = 854799/*func_2146*/;
			break;
		case 52:
			uParam0->f_15 = 854788/*func_2145*/;
			break;
		case 53:
			uParam0->f_13 = 854765/*func_2144*/;
			break;
		case 54:
			uParam0->f_45 = 854757/*func_2143*/;
			break;
		case 56:
			uParam0->f_46 = 854748/*func_2142*/;
			break;
		case 57:
			uParam0->f_11 = 854735/*func_2141*/;
			break;
		case 58:
			uParam0->f_13 = 854693/*func_2140*/;
			break;
		case 59:
			*uParam0 = 854684/*func_2139*/;
			break;
		case 60:
			*uParam0 = 854675/*func_2138*/;
			break;
		case 61:
			uParam0->f_15 = 854664/*func_2137*/;
			break;
		case 62:
			uParam0->f_13 = 854653/*func_2136*/;
			break;
		case 63:
			uParam0->f_11 = 854644/*func_2135*/;
			break;
		case 64:
			uParam0->f_47 = 854636/*func_2134*/;
			break;
		case 65:
			uParam0->f_21 = 854628/*func_2133*/;
			break;
		case 66:
			uParam0->f_21 = 854395/*func_2132*/;
			break;
		case 67:
			uParam0->f_21 = 854325/*func_2131*/;
			break;
		case 68:
			*uParam0 = 853636/*func_2130*/;
			break;
		case 69:
			*uParam0 = 853627/*func_2129*/;
			break;
		case 70:
			uParam0->f_48 = 853615/*func_2128*/;
			break;
		case 71:
			uParam0->f_49 = 853606/*func_2127*/;
			break;
		case 107:
			uParam0->f_50 = 853594/*func_2126*/;
			break;
		case 80:
			uParam0->f_7 = 853585/*func_2125*/;
			break;
		case 84:
			uParam0->f_1 = 853576/*func_2124*/;
			break;
		case 85:
			uParam0->f_1 = 853567/*func_2123*/;
			break;
		case 87:
			uParam0->f_1 = 853558/*func_2122*/;
			break;
		case 88:
			uParam0->f_1 = 853549/*func_2121*/;
			break;
		case 89:
			uParam0->f_54 = 853541/*func_2120*/;
			break;
		case 96:
			uParam0->f_1 = 853532/*func_2119*/;
			break;
		case 97:
			uParam0->f_1 = 853523/*func_2118*/;
			break;
		case 98:
			uParam0->f_1 = 853514/*func_2117*/;
			break;
		case 100:
			uParam0->f_22 = 853506/*func_2116*/;
			break;
		case 101:
			uParam0->f_22 = 853498/*func_2115*/;
			break;
		case 112:
			uParam0->f_13 = 853486/*func_2114*/;
			break;
		case 113:
			uParam0->f_3 = 853477/*func_2113*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 115:
			uParam0->f_3 = 853468/*func_2112*/;
			break;
		case 116:
			*uParam0 = 853459/*func_2111*/;
			break;
		case 117:
			uParam0->f_16 = 499397/*func_1254*/;
			break;
		case 78:
			uParam0->f_59 = 853451/*func_2110*/;
			break;
		case 124:
			uParam0->f_1 = 853442/*func_2109*/;
			break;
		case 125:
			uParam0->f_19 = 853434/*func_2108*/;
			break;
	}
}

void func_2201(var uParam0, int iParam1)//Position - 0xD2072
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 939075/*func_2448*/;
			break;
		case 111:
			uParam0->f_35 = 939061/*func_2447*/;
			break;
		case 1:
			uParam0->f_30 = 938905/*func_2445*/;
			break;
		case 2:
			uParam0->f_31 = 938423/*func_2441*/;
			break;
		case 3:
			uParam0->f_34 = 938224/*func_2440*/;
			break;
		case 4:
			uParam0->f_12 = 938102/*func_2439*/;
			break;
		case 5:
			uParam0->f_11 = 938092/*func_2438*/;
			break;
		case 37:
			uParam0->f_18 = 937954/*func_2437*/;
			break;
		case 38:
			uParam0->f_9 = 937909/*func_2436*/;
			break;
		case 42:
			uParam0->f_10 = 937825/*func_2434*/;
			break;
		case 6:
			uParam0->f_32 = 937731/*func_2433*/;
			break;
		case 11:
			uParam0->f_11 = 937722/*func_2432*/;
			break;
		case 12:
			uParam0->f_33 = 936544/*func_2428*/;
			break;
		case 14:
			uParam0->f_11 = 936535/*func_2427*/;
			break;
		case 109:
			uParam0->f_56 = 929987/*func_2425*/;
			break;
		case 8:
			uParam0->f_37 = 929687/*func_2424*/;
			break;
		case 7:
			uParam0->f_36 = 929630/*func_2423*/;
			break;
		case 79:
			*uParam0 = 929386/*func_2421*/;
			break;
		case 13:
			uParam0->f_2 = 929324/*func_2420*/;
			break;
		case 15:
			uParam0->f_2 = 929244/*func_2419*/;
			break;
		case 16:
			uParam0->f_5 = 928524/*func_2417*/;
			break;
		case 108:
			uParam0->f_55 = 925333/*func_2405*/;
			break;
		case 17:
			uParam0->f_17 = 923024/*func_2401*/;
			break;
		case 19:
			uParam0->f_17 = 922997/*func_2400*/;
			break;
		case 20:
			uParam0->f_3 = 922821/*func_2399*/;
			break;
		case 21:
			uParam0->f_3 = 922757/*func_2398*/;
			break;
		case 74:
			uParam0->f_53 = 922653/*func_2397*/;
			break;
		case 75:
			uParam0->f_4 = 922637/*func_2396*/;
			break;
		case 22:
			uParam0->f_24 = 922534/*func_2395*/;
			break;
		case 23:
			uParam0->f_26 = 922487/*func_2394*/;
			break;
		case 24:
			uParam0->f_26 = 922450/*func_2393*/;
			break;
		case 26:
			uParam0->f_38 = 920407/*func_2381*/;
			break;
		case 25:
			uParam0->f_23 = 920085/*func_2379*/;
			break;
		case 30:
			uParam0->f_8 = 919228/*func_2377*/;
			break;
		case 31:
			uParam0->f_39 = 919090/*func_2376*/;
			break;
		case 33:
			uParam0->f_40 = 918518/*func_2375*/;
			break;
		case 32:
			*uParam0 = 918304/*func_2371*/;
			break;
		case 34:
			uParam0->f_41 = 915817/*func_2369*/;
			break;
		case 36:
			uParam0->f_58 = 915760/*func_2368*/;
			break;
		case 35:
			uParam0->f_42 = 888797/*func_2365*/;
			break;
		case 45:
			uParam0->f_14 = 888788/*func_2364*/;
			break;
		case 46:
			uParam0->f_14 = 888779/*func_2363*/;
			break;
		case 110:
			uParam0->f_57 = 888771/*func_2362*/;
			break;
		case 77:
			uParam0->f_13 = 888748/*func_2361*/;
			break;
		case 47:
			uParam0->f_43 = 888676/*func_2359*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 888548/*func_2358*/;
			break;
		case 49:
			uParam0->f_8 = 888522/*func_2357*/;
			break;
		case 50:
			*uParam0 = 887835/*func_2353*/;
			break;
		case 51:
			*uParam0 = 887565/*func_2350*/;
			break;
		case 52:
			uParam0->f_15 = 887554/*func_2349*/;
			break;
		case 53:
			uParam0->f_13 = 887392/*func_2348*/;
			break;
		case 54:
			uParam0->f_45 = 886935/*func_2343*/;
			break;
		case 56:
			uParam0->f_46 = 886917/*func_2342*/;
			break;
		case 57:
			uParam0->f_11 = 886665/*func_2341*/;
			break;
		case 58:
			uParam0->f_13 = 886503/*func_2340*/;
			break;
		case 59:
			*uParam0 = 886085/*func_2335*/;
			break;
		case 60:
			*uParam0 = 886070/*func_2334*/;
			break;
		case 61:
			uParam0->f_15 = 886059/*func_2333*/;
			break;
		case 62:
			uParam0->f_13 = 885897/*func_2332*/;
			break;
		case 55:
			uParam0->f_45 = 885718/*func_2331*/;
			break;
		case 63:
			uParam0->f_11 = 885691/*func_2330*/;
			break;
		case 64:
			uParam0->f_47 = 884257/*func_2323*/;
			break;
		case 65:
			uParam0->f_21 = 882870/*func_2320*/;
			break;
		case 66:
			uParam0->f_21 = 882511/*func_2319*/;
			break;
		case 67:
			uParam0->f_21 = 882397/*func_2318*/;
			break;
		case 68:
			*uParam0 = 881477/*func_2316*/;
			break;
		case 69:
			*uParam0 = 881468/*func_2315*/;
			break;
		case 70:
			uParam0->f_48 = 881456/*func_2314*/;
			break;
		case 71:
			uParam0->f_49 = 880912/*func_2313*/;
			break;
		case 107:
			uParam0->f_50 = 880900/*func_2312*/;
			break;
		case 80:
			uParam0->f_7 = 880712/*func_2311*/;
			break;
		case 84:
			uParam0->f_1 = 880703/*func_2310*/;
			break;
		case 85:
			uParam0->f_1 = 879117/*func_2307*/;
			break;
		case 87:
			uParam0->f_1 = 877601/*func_2300*/;
			break;
		case 88:
			uParam0->f_1 = 877592/*func_2299*/;
			break;
		case 89:
			uParam0->f_54 = 877584/*func_2298*/;
			break;
		case 96:
			uParam0->f_1 = 877554/*func_2297*/;
			break;
		case 97:
			uParam0->f_1 = 877109/*func_2296*/;
			break;
		case 98:
			uParam0->f_1 = 871447/*func_2239*/;
			break;
		case 100:
			uParam0->f_22 = 862877/*func_2214*/;
			break;
		case 101:
			uParam0->f_22 = 861997/*func_2209*/;
			break;
		case 112:
			uParam0->f_13 = 861986/*func_2208*/;
			break;
		case 113:
			uParam0->f_3 = 861977/*func_2207*/;
			break;
		case 114:
			uParam0->f_16 = 861968/*func_2206*/;
			break;
		case 117:
			uParam0->f_16 = 861959/*func_2205*/;
			break;
		case 78:
			uParam0->f_59 = 861787/*func_2203*/;
			break;
		case 76:
			uParam0->f_13 = 861764/*func_2202*/;
			break;
	}
}

int func_2307(int iParam0, var uParam1)//Position - 0xD6A0D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_580(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_842(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_842(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_841(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_841(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2343(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xD8897
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_851(iVar1, __LIB_2__::func_852(iParam0)) && __LIB_18__::func_913(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_18__::func_676(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_2__::func_856(iParam0) };
								iVar6 = __LIB_2__::func_855(iParam0);
								*iParam2 = __LIB_0__::func_392(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2344(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_2344(var uParam0, int iParam1)//Position - 0xD8A10
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2379(int iParam0, int iParam1)//Position - 0xE0A15
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_461(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2381(var uParam0, var uParam1)//Position - 0xE0B57
{
	if (__LIB_2__::func_399() == 3)
	{
		func_2385(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_851(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_3__::func_862(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_2383(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
	}
}

void func_2383(var uParam0, var uParam1)//Position - 0xE0BE0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_7__::func_396();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2385(var uParam0, var uParam1)//Position - 0xE0CFE
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_571(uParam0, uParam1);
			break;
		case 1:
			func_2390(uParam0, uParam1);
			break;
		case 2:
			__LIB_25__::func_673(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2390(var uParam0, var uParam1)//Position - 0xE107F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_99(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 3)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2449(var uParam0, int iParam1)//Position - 0xE544C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 955291/*func_2558*/;
			break;
		case 111:
			uParam0->f_35 = 955282/*func_2557*/;
			break;
		case 1:
			uParam0->f_30 = 955214/*func_2555*/;
			break;
		case 2:
			uParam0->f_31 = 954766/*func_2552*/;
			break;
		case 3:
			uParam0->f_34 = 954661/*func_2551*/;
			break;
		case 4:
			uParam0->f_12 = 954648/*func_2550*/;
			break;
		case 6:
			uParam0->f_32 = 954584/*func_2549*/;
			break;
		case 11:
			uParam0->f_11 = 954575/*func_2548*/;
			break;
		case 12:
			uParam0->f_33 = 954114/*func_2543*/;
			break;
		case 14:
			uParam0->f_11 = 954105/*func_2542*/;
			break;
		case 109:
			uParam0->f_56 = 953714/*func_2540*/;
			break;
		case 8:
			uParam0->f_37 = 953706/*func_2539*/;
			break;
		case 7:
			uParam0->f_36 = 953697/*func_2538*/;
			break;
		case 79:
			*uParam0 = 953673/*func_2537*/;
			break;
		case 13:
			uParam0->f_2 = 953611/*func_2536*/;
			break;
		case 15:
			uParam0->f_2 = 953532/*func_2535*/;
			break;
		case 16:
			uParam0->f_5 = 953235/*func_2534*/;
			break;
		case 108:
			uParam0->f_55 = 953226/*func_2533*/;
			break;
		case 17:
			uParam0->f_17 = 953214/*func_2532*/;
			break;
		case 19:
			uParam0->f_17 = 953187/*func_2531*/;
			break;
		case 20:
			uParam0->f_3 = 953178/*func_2530*/;
			break;
		case 21:
			uParam0->f_3 = 953169/*func_2529*/;
			break;
		case 74:
			uParam0->f_53 = 953147/*func_2528*/;
			break;
		case 75:
			uParam0->f_4 = 953138/*func_2527*/;
			break;
		case 22:
			uParam0->f_24 = 953130/*func_2526*/;
			break;
		case 23:
			uParam0->f_26 = 953122/*func_2525*/;
			break;
		case 26:
			uParam0->f_38 = 953114/*func_2524*/;
			break;
		case 25:
			uParam0->f_23 = 952782/*func_2521*/;
			break;
		case 27:
			uParam0->f_25 = 952774/*func_2520*/;
			break;
		case 28:
			uParam0->f_24 = 952766/*func_2519*/;
			break;
		case 30:
			uParam0->f_8 = 952445/*func_2516*/;
			break;
		case 31:
			uParam0->f_39 = 952415/*func_2515*/;
			break;
		case 33:
			uParam0->f_40 = 952346/*func_2514*/;
			break;
		case 34:
			uParam0->f_41 = 948613/*func_2513*/;
			break;
		case 36:
			uParam0->f_58 = 948568/*func_2512*/;
			break;
		case 35:
			uParam0->f_42 = 945401/*func_2509*/;
			break;
		case 45:
			uParam0->f_14 = 945392/*func_2508*/;
			break;
		case 46:
			uParam0->f_14 = 945383/*func_2507*/;
			break;
		case 110:
			uParam0->f_57 = 945375/*func_2506*/;
			break;
		case 77:
			uParam0->f_13 = 945364/*func_2505*/;
			break;
		case 47:
			uParam0->f_43 = 945256/*func_2504*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 944141/*func_2501*/;
			break;
		case 49:
			uParam0->f_8 = 944132/*func_2500*/;
			break;
		case 50:
			*uParam0 = 944123/*func_2499*/;
			break;
		case 51:
			*uParam0 = 944114/*func_2498*/;
			break;
		case 52:
			uParam0->f_15 = 944103/*func_2497*/;
			break;
		case 53:
			uParam0->f_13 = 944092/*func_2496*/;
			break;
		case 54:
			uParam0->f_45 = 944084/*func_2495*/;
			break;
		case 56:
			uParam0->f_46 = 944075/*func_2494*/;
			break;
		case 57:
			uParam0->f_11 = 944066/*func_2493*/;
			break;
		case 58:
			uParam0->f_13 = 944024/*func_2492*/;
			break;
		case 59:
			*uParam0 = 944015/*func_2491*/;
			break;
		case 60:
			*uParam0 = 944006/*func_2490*/;
			break;
		case 61:
			uParam0->f_15 = 943995/*func_2489*/;
			break;
		case 62:
			uParam0->f_13 = 943984/*func_2488*/;
			break;
		case 63:
			uParam0->f_11 = 943975/*func_2487*/;
			break;
		case 64:
			uParam0->f_47 = 943967/*func_2486*/;
			break;
		case 65:
			uParam0->f_21 = 943959/*func_2485*/;
			break;
		case 66:
			uParam0->f_21 = 943656/*func_2484*/;
			break;
		case 67:
			uParam0->f_21 = 943586/*func_2483*/;
			break;
		case 68:
			*uParam0 = 942937/*func_2482*/;
			break;
		case 69:
			*uParam0 = 942928/*func_2481*/;
			break;
		case 70:
			uParam0->f_48 = 942920/*func_2480*/;
			break;
		case 71:
			uParam0->f_49 = 942911/*func_2479*/;
			break;
		case 107:
			uParam0->f_50 = 942899/*func_2478*/;
			break;
		case 80:
			uParam0->f_7 = 942465/*func_2477*/;
			break;
		case 18:
			uParam0->f_8 = 942440/*func_2476*/;
			break;
		case 84:
			uParam0->f_1 = 942423/*func_2475*/;
			break;
		case 85:
			uParam0->f_1 = 941881/*func_2471*/;
			break;
		case 87:
			uParam0->f_1 = 940840/*func_2462*/;
			break;
		case 88:
			uParam0->f_1 = 940831/*func_2461*/;
			break;
		case 89:
			uParam0->f_54 = 940823/*func_2460*/;
			break;
		case 96:
			uParam0->f_1 = 940814/*func_2459*/;
			break;
		case 97:
			uParam0->f_1 = 940805/*func_2458*/;
			break;
		case 98:
			uParam0->f_1 = 940796/*func_2457*/;
			break;
		case 100:
			uParam0->f_22 = 940788/*func_2456*/;
			break;
		case 101:
			uParam0->f_22 = 940780/*func_2455*/;
			break;
		case 112:
			uParam0->f_13 = 940768/*func_2454*/;
			break;
		case 113:
			uParam0->f_3 = 940759/*func_2453*/;
			break;
		case 78:
			uParam0->f_59 = 940456/*func_2450*/;
			break;
	}
}

int func_2471(var uParam0, var uParam1)//Position - 0xE5F39
{
	return func_2472(uParam1);
}

int func_2472(var uParam0)//Position - 0xE5F47
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_663(&iVar0, &(uParam0->f_109), 60);
			__LIB_2__::func_416(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_580(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_2__::func_890(&Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_890(&Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_889(&Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_889(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2521(int iParam0, int iParam1)//Position - 0xE89CE
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_364(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2559(var uParam0, int iParam1)//Position - 0xE93A4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 990410/*func_2737*/;
			break;
		case 111:
			uParam0->f_35 = 990387/*func_2736*/;
			break;
		case 1:
			uParam0->f_30 = 990257/*func_2734*/;
			break;
		case 2:
			uParam0->f_31 = 989590/*func_2730*/;
			break;
		case 3:
			uParam0->f_34 = 989327/*func_2729*/;
			break;
		case 4:
			uParam0->f_12 = 989314/*func_2728*/;
			break;
		case 5:
			uParam0->f_11 = 989304/*func_2727*/;
			break;
		case 37:
			uParam0->f_18 = 989105/*func_2726*/;
			break;
		case 38:
			uParam0->f_9 = 989057/*func_2725*/;
			break;
		case 42:
			uParam0->f_10 = 989021/*func_2724*/;
			break;
		case 6:
			uParam0->f_32 = 988906/*func_2723*/;
			break;
		case 11:
			uParam0->f_11 = 988897/*func_2722*/;
			break;
		case 12:
			uParam0->f_33 = 987967/*func_2716*/;
			break;
		case 14:
			uParam0->f_11 = 987958/*func_2715*/;
			break;
		case 109:
			uParam0->f_56 = 986801/*func_2713*/;
			break;
		case 8:
			uParam0->f_37 = 986757/*func_2712*/;
			break;
		case 7:
			uParam0->f_36 = 986734/*func_2711*/;
			break;
		case 79:
			*uParam0 = 986710/*func_2710*/;
			break;
		case 13:
			uParam0->f_2 = 986648/*func_2709*/;
			break;
		case 15:
			uParam0->f_2 = 986569/*func_2708*/;
			break;
		case 16:
			uParam0->f_5 = 985895/*func_2703*/;
			break;
		case 108:
			uParam0->f_55 = 982613/*func_2690*/;
			break;
		case 17:
			uParam0->f_17 = 981692/*func_2689*/;
			break;
		case 19:
			uParam0->f_17 = 981646/*func_2688*/;
			break;
		case 20:
			uParam0->f_3 = 981473/*func_2687*/;
			break;
		case 21:
			uParam0->f_3 = 981388/*func_2686*/;
			break;
		case 74:
			uParam0->f_53 = 981248/*func_2685*/;
			break;
		case 75:
			uParam0->f_4 = 981232/*func_2684*/;
			break;
		case 22:
			uParam0->f_24 = 981129/*func_2683*/;
			break;
		case 23:
			uParam0->f_26 = 981082/*func_2682*/;
			break;
		case 24:
			uParam0->f_26 = 981045/*func_2681*/;
			break;
		case 26:
			uParam0->f_38 = 979640/*func_2668*/;
			break;
		case 25:
			uParam0->f_23 = 979274/*func_2665*/;
			break;
		case 27:
			uParam0->f_25 = 978461/*func_2661*/;
			break;
		case 28:
			uParam0->f_24 = 978422/*func_2660*/;
			break;
		case 29:
			uParam0->f_28 = 978187/*func_2656*/;
			break;
		case 30:
			uParam0->f_8 = 977862/*func_2652*/;
			break;
		case 31:
			uParam0->f_39 = 977662/*func_2651*/;
			break;
		case 43:
			uParam0->f_8 = 977556/*func_2650*/;
			break;
		case 33:
			uParam0->f_40 = 977240/*func_2649*/;
			break;
		case 34:
			uParam0->f_41 = 972248/*func_2646*/;
			break;
		case 36:
			uParam0->f_58 = 972191/*func_2645*/;
			break;
		case 35:
			uParam0->f_42 = 965984/*func_2641*/;
			break;
		case 45:
			uParam0->f_14 = 965975/*func_2640*/;
			break;
		case 46:
			uParam0->f_14 = 965966/*func_2639*/;
			break;
		case 110:
			uParam0->f_57 = 965958/*func_2638*/;
			break;
		case 77:
			uParam0->f_13 = 965935/*func_2637*/;
			break;
		case 82:
			uParam0->f_19 = 965922/*func_2636*/;
			break;
		case 47:
			uParam0->f_43 = 965630/*func_2633*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 963407/*func_2627*/;
			break;
		case 49:
			uParam0->f_8 = 963359/*func_2626*/;
			break;
		case 50:
			*uParam0 = 963167/*func_2624*/;
			break;
		case 51:
			*uParam0 = 963158/*func_2623*/;
			break;
		case 52:
			uParam0->f_15 = 963147/*func_2622*/;
			break;
		case 53:
			uParam0->f_13 = 963105/*func_2621*/;
			break;
		case 54:
			uParam0->f_45 = 963097/*func_2620*/;
			break;
		case 56:
			uParam0->f_46 = 963088/*func_2619*/;
			break;
		case 57:
			uParam0->f_11 = 963079/*func_2618*/;
			break;
		case 58:
			uParam0->f_13 = 963037/*func_2617*/;
			break;
		case 59:
			*uParam0 = 963028/*func_2616*/;
			break;
		case 60:
			*uParam0 = 963019/*func_2615*/;
			break;
		case 61:
			uParam0->f_15 = 963008/*func_2614*/;
			break;
		case 62:
			uParam0->f_13 = 962978/*func_2613*/;
			break;
		case 63:
			uParam0->f_11 = 962969/*func_2612*/;
			break;
		case 64:
			uParam0->f_47 = 962961/*func_2611*/;
			break;
		case 65:
			uParam0->f_21 = 961875/*func_2608*/;
			break;
		case 66:
			uParam0->f_21 = 961534/*func_2607*/;
			break;
		case 67:
			uParam0->f_21 = 961420/*func_2606*/;
			break;
		case 68:
			*uParam0 = 960592/*func_2605*/;
			break;
		case 69:
			*uParam0 = 960583/*func_2604*/;
			break;
		case 70:
			uParam0->f_48 = 960571/*func_2603*/;
			break;
		case 71:
			uParam0->f_49 = 960479/*func_2602*/;
			break;
		case 107:
			uParam0->f_50 = 960467/*func_2601*/;
			break;
		case 80:
			uParam0->f_7 = 960279/*func_2600*/;
			break;
		case 84:
			uParam0->f_1 = 960270/*func_2599*/;
			break;
		case 85:
			uParam0->f_1 = 960256/*func_2598*/;
			break;
		case 87:
			uParam0->f_1 = 960240/*func_2597*/;
			break;
		case 88:
			uParam0->f_1 = 960231/*func_2596*/;
			break;
		case 89:
			uParam0->f_54 = 960223/*func_2595*/;
			break;
		case 96:
			uParam0->f_1 = 960214/*func_2594*/;
			break;
		case 97:
			uParam0->f_1 = 959771/*func_2590*/;
			break;
		case 98:
			uParam0->f_1 = 958309/*func_2580*/;
			break;
		case 100:
			uParam0->f_22 = 957430/*func_2575*/;
			break;
		case 101:
			uParam0->f_22 = 957253/*func_2572*/;
			break;
		case 112:
			uParam0->f_13 = 957241/*func_2571*/;
			break;
		case 113:
			uParam0->f_3 = 957227/*func_2570*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 117:
			uParam0->f_16 = 499397/*func_1254*/;
			break;
		case 118:
			uParam0->f_11 = 957218/*func_2569*/;
			break;
		case 119:
			uParam0->f_27 = 957117/*func_2565*/;
			break;
		case 120:
			uParam0->f_19 = 957092/*func_2563*/;
			break;
		case 78:
			uParam0->f_59 = 956920/*func_2561*/;
			break;
		case 125:
			uParam0->f_19 = 956893/*func_2560*/;
			break;
	}
}

int func_2580(int iParam0, var uParam1)//Position - 0xE9F65
{
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2581(iParam0, uParam1);
	}
	return 1;
}

int func_2581(int iParam0, var uParam1)//Position - 0xE9F82
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_581(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_2__::func_914(-395939522);
		iVar3 = __LIB_2__::func_914(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-395939522), iVar2);
			__LIB_2__::func_912(__LIB_2__::func_913(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(uParam1->f_50), __LIB_2__::func_913(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_2__::func_911(&(uParam1->f_58), __LIB_2__::func_913(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_3__::func_869(uParam1, 6);
		iVar7 = 3500;
		__LIB_2__::func_681(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2598(var uParam0, var uParam1)//Position - 0xEA700
{
	return func_2472(uParam1);
}

void func_2665(int iParam0, int iParam1)//Position - 0xEF14A
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_480(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2668(var uParam0, var uParam1)//Position - 0xEF2B8
{
	if (__LIB_0__::func_834(PLAYER::PLAYER_ID()) || __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		func_2669(uParam0, uParam1);
	}
}

void func_2669(var uParam0, var uParam1)//Position - 0xEF2E4
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2680(*uParam0, 0, 0))
		{
			__LIB_2__::func_447(0);
			__LIB_2__::func_565(1);
		}
		else
		{
			__LIB_7__::func_648(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_2675(uParam0, uParam1);
			break;
		case 1:
			func_2671(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2671(var uParam0, var uParam1)//Position - 0xEF3A3
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_2__::func_936();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_724(iVar5);
		if (__LIB_2__::func_563(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar3, sVar3);
		__LIB_3__::func_874();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_25__::func_557(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_394(5);
		__LIB_7__::func_396();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_25__::func_301(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
		if (__LIB_2__::func_399() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2675(var uParam0, var uParam1)//Position - 0xEF5A2
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_2__::func_939(iVar6);
		uVar1[iVar6] = __LIB_2__::func_938(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_647(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_342(__LIB_2__::func_937(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_2__::func_565(2);
			}
			else if (func_2680(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_2__::func_447(1);
				__LIB_2__::func_565(1);
			}
			else
			{
				__LIB_7__::func_648(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2680(int iParam0, bool bParam1, bool bParam2)//Position - 0xEF803
{
	int iVar0;
	int iVar1;
	func_792(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2738(var uParam0, int iParam1)//Position - 0xF1CD3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1020626/*func_2910*/;
			break;
		case 111:
			uParam0->f_35 = 1020617/*func_2909*/;
			break;
		case 1:
			uParam0->f_30 = 1020549/*func_2907*/;
			break;
		case 2:
			uParam0->f_31 = 1020196/*func_2904*/;
			break;
		case 3:
			uParam0->f_34 = 1019963/*func_2903*/;
			break;
		case 4:
			uParam0->f_12 = 1019950/*func_2902*/;
			break;
		case 6:
			uParam0->f_32 = 1019886/*func_2901*/;
			break;
		case 11:
			uParam0->f_11 = 1019877/*func_2900*/;
			break;
		case 12:
			uParam0->f_33 = 1019152/*func_2896*/;
			break;
		case 14:
			uParam0->f_11 = 1019143/*func_2895*/;
			break;
		case 109:
			uParam0->f_56 = 1018001/*func_2894*/;
			break;
		case 8:
			uParam0->f_37 = 1017993/*func_2893*/;
			break;
		case 7:
			uParam0->f_36 = 1017984/*func_2892*/;
			break;
		case 79:
			*uParam0 = 1017960/*func_2891*/;
			break;
		case 13:
			uParam0->f_2 = 1017888/*func_2890*/;
			break;
		case 15:
			uParam0->f_2 = 1017799/*func_2889*/;
			break;
		case 16:
			uParam0->f_5 = 1017439/*func_2888*/;
			break;
		case 108:
			uParam0->f_55 = 1017300/*func_2886*/;
			break;
		case 17:
			uParam0->f_17 = 1016642/*func_2885*/;
			break;
		case 19:
			uParam0->f_17 = 1016615/*func_2884*/;
			break;
		case 20:
			uParam0->f_3 = 1016606/*func_2883*/;
			break;
		case 21:
			uParam0->f_3 = 1016558/*func_2882*/;
			break;
		case 74:
			uParam0->f_53 = 1016503/*func_2881*/;
			break;
		case 75:
			uParam0->f_4 = 1016390/*func_2880*/;
			break;
		case 22:
			uParam0->f_24 = 1016382/*func_2879*/;
			break;
		case 23:
			uParam0->f_26 = 1016374/*func_2878*/;
			break;
		case 26:
			uParam0->f_38 = 1013829/*func_2862*/;
			break;
		case 25:
			uParam0->f_23 = 1013821/*func_2861*/;
			break;
		case 27:
			uParam0->f_25 = 1013813/*func_2860*/;
			break;
		case 28:
			uParam0->f_24 = 1013805/*func_2859*/;
			break;
		case 30:
			uParam0->f_8 = 1013524/*func_2858*/;
			break;
		case 31:
			uParam0->f_39 = 1013494/*func_2857*/;
			break;
		case 33:
			uParam0->f_40 = 1013425/*func_2856*/;
			break;
		case 76:
			uParam0->f_13 = 1013402/*func_2855*/;
			break;
		case 34:
			uParam0->f_41 = 1010848/*func_2852*/;
			break;
		case 36:
			uParam0->f_58 = 1010803/*func_2851*/;
			break;
		case 35:
			uParam0->f_42 = 1010707/*func_2850*/;
			break;
		case 45:
			uParam0->f_14 = 1010698/*func_2849*/;
			break;
		case 46:
			uParam0->f_14 = 1010689/*func_2848*/;
			break;
		case 110:
			uParam0->f_57 = 1010681/*func_2847*/;
			break;
		case 77:
			uParam0->f_13 = 1010670/*func_2846*/;
			break;
		case 47:
			uParam0->f_43 = 1010563/*func_2845*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1009725/*func_2844*/;
			break;
		case 49:
			uParam0->f_8 = 1009716/*func_2843*/;
			break;
		case 50:
			*uParam0 = 1009503/*func_2842*/;
			break;
		case 51:
			*uParam0 = 1009494/*func_2841*/;
			break;
		case 52:
			uParam0->f_15 = 1009483/*func_2840*/;
			break;
		case 53:
			uParam0->f_13 = 1009441/*func_2839*/;
			break;
		case 54:
			uParam0->f_45 = 1009402/*func_2838*/;
			break;
		case 56:
			uParam0->f_46 = 1009393/*func_2837*/;
			break;
		case 57:
			uParam0->f_11 = 1009351/*func_2835*/;
			break;
		case 58:
			uParam0->f_13 = 1009309/*func_2834*/;
			break;
		case 59:
			*uParam0 = 1009300/*func_2833*/;
			break;
		case 60:
			*uParam0 = 1009291/*func_2832*/;
			break;
		case 61:
			uParam0->f_15 = 1009280/*func_2831*/;
			break;
		case 62:
			uParam0->f_13 = 1009269/*func_2830*/;
			break;
		case 63:
			uParam0->f_11 = 1009260/*func_2829*/;
			break;
		case 64:
			uParam0->f_47 = 1009174/*func_2827*/;
			break;
		case 65:
			uParam0->f_21 = 1009166/*func_2826*/;
			break;
		case 66:
			uParam0->f_21 = 1008825/*func_2825*/;
			break;
		case 67:
			uParam0->f_21 = 1008755/*func_2824*/;
			break;
		case 68:
			*uParam0 = 1008058/*func_2823*/;
			break;
		case 69:
			*uParam0 = 1008049/*func_2822*/;
			break;
		case 70:
			uParam0->f_48 = 1007976/*func_2821*/;
			break;
		case 71:
			uParam0->f_49 = 1007967/*func_2820*/;
			break;
		case 107:
			uParam0->f_50 = 1007955/*func_2819*/;
			break;
		case 80:
			uParam0->f_7 = 1007946/*func_2818*/;
			break;
		case 84:
			uParam0->f_1 = 1007421/*func_2815*/;
			break;
		case 85:
			uParam0->f_1 = 1005865/*func_2812*/;
			break;
		case 87:
			uParam0->f_1 = 1003021/*func_2801*/;
			break;
		case 88:
			uParam0->f_1 = 1003006/*func_2800*/;
			break;
		case 89:
			uParam0->f_54 = 1002645/*func_2798*/;
			break;
		case 96:
			uParam0->f_1 = 1002283/*func_2794*/;
			break;
		case 97:
			uParam0->f_1 = 1001777/*func_2792*/;
			break;
		case 98:
			uParam0->f_1 = 1000148/*func_2790*/;
			break;
		case 100:
			uParam0->f_22 = 999870/*func_2789*/;
			break;
		case 101:
			uParam0->f_22 = 999319/*func_2785*/;
			break;
		case 112:
			uParam0->f_13 = 999307/*func_2784*/;
			break;
		case 113:
			uParam0->f_3 = 999298/*func_2783*/;
			break;
		case 114:
			uParam0->f_16 = 445481/*func_1055*/;
			break;
		case 115:
			uParam0->f_3 = 999161/*func_2780*/;
			break;
		case 116:
			*uParam0 = 999113/*func_2779*/;
			break;
		case 117:
			uParam0->f_16 = 499397/*func_1254*/;
			break;
		case 118:
			uParam0->f_11 = 957218/*func_2569*/;
			break;
		case 119:
			uParam0->f_27 = 957117/*func_2565*/;
			break;
		case 120:
			uParam0->f_19 = 957092/*func_2563*/;
			break;
		case 78:
			uParam0->f_59 = 999105/*func_2778*/;
			break;
		case 124:
			uParam0->f_1 = 991999/*func_2740*/;
			break;
		case 125:
			uParam0->f_19 = 991943/*func_2739*/;
			break;
	}
}

int func_2740(int iParam0, int* iParam1)//Position - 0xF22FF
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_35__::func_659(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(1);
					__LIB_2__::func_962(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_399() == 0)
			{
				if (__LIB_18__::func_751(iParam0, iParam1))
				{
					__LIB_2__::func_961();
					__LIB_2__::func_962(iParam1, 2);
				}
			}
			else
			{
				__LIB_7__::func_484(iParam0, iParam1, __LIB_2__::func_399());
				__LIB_2__::func_962(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_399() == 0)
			{
				if (func_2812(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_2766(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				__LIB_25__::func_302(iParam0, iParam1);
				if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
				{
					__LIB_35__::func_602(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_2__::func_962(iParam1, 4);
				}
			}
			else
			{
				__LIB_18__::func_749(iParam1);
				__LIB_35__::func_602(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_2__::func_962(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_399() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_35__::func_659(iParam1);
				}
			}
			else if (__LIB_18__::func_749(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_35__::func_659(iParam1);
			}
			break;
	}
	return 1;
}

int func_2766(int* iParam0)//Position - 0xF3557
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_1610(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2790(int iParam0, var uParam1)//Position - 0xF42D4
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2581(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_160())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_8__::func_454(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_2__::func_966(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1610(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_2792(int iParam0, var uParam1)//Position - 0xF4931
{
	char* sVar0;
	bool bVar1;
	if (__LIB_2__::func_909(iParam0))
	{
		return __LIB_18__::func_572(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_160())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2793(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_2793(var uParam0, int iParam1)//Position - 0xF4A3F
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_598(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_2812(int iParam0, int* iParam1)//Position - 0xF5929
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_581(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-1805228339), __LIB_2__::func_914(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(iParam1->f_50), __LIB_2__::func_913(-1805228339), __LIB_2__::func_974(-1805228339), __LIB_2__::func_914(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_2__::func_917())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
		Var3 = { __LIB_2__::func_913(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_2__::func_972(6);
		__LIB_2__::func_681(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_657(iVar6, 0)) && __LIB_6__::func_407(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_663(&iVar7, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_581(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_7__::func_487(iParam1, 6);
		iVar12 = __LIB_2__::func_973(__LIB_2__::func_970(iParam1));
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1610(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_2__::func_913(-1805228339), 0.1f, __LIB_2__::func_914(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_2__::func_914(-1805228339), __LIB_2__::func_913(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_2__::func_913(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
			__LIB_25__::func_103(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2862(var uParam0, var uParam1)//Position - 0xF7845
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_2__::func_779(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_25__::func_303(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_303(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			if (__LIB_2__::func_380())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_2__::func_380())
	{
		if ((__LIB_2__::func_399() == 3 || __LIB_2__::func_399() == 4) || __LIB_2__::func_399() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2866(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2863(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2863(var uParam0, var uParam1)//Position - 0xF7983
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_2__::func_566();
	bVar0 = iVar1 != 5;
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_724(iVar9);
		if (__LIB_2__::func_563(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar7, sVar7);
		__LIB_3__::func_874();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_25__::func_557(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			if ((__LIB_2__::func_399() == 1 || __LIB_2__::func_399() == 3) || __LIB_2__::func_399() == 4)
			{
				__LIB_2__::func_924();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_2__::func_566() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			if (__LIB_2__::func_566() == 3)
			{
				__LIB_2__::func_924();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
	}
}

void func_2866(var uParam0, var uParam1)//Position - 0xF7C0D
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	if (__LIB_2__::func_399() == 0)
	{
		uVar0 = __LIB_7__::func_491(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_19__::func_101(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_2__::func_399() == 0)
		{
			__LIB_1__::func_342(__LIB_2__::func_986(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_342(__LIB_7__::func_653(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
			{
				func_2868(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2867(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2867(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xF7D2A
{
	if (iParam1 == 0)
	{
		if (func_2680(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_2__::func_924();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_2680(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2680(iParam0, 1, 0))
		{
			__LIB_2__::func_565(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_2__::func_565(4);
		__LIB_2__::func_924();
	}
	else
	{
		__LIB_2__::func_447(1);
		if (func_2680(iParam0, 0, 0))
		{
			__LIB_2__::func_565(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			__LIB_2__::func_924();
		}
	}
	*uParam2 = 1;
}

void func_2868(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xF7E32
{
	if (iParam1 == 0)
	{
		if (func_2680(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_2680(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
}

void func_2911(var uParam0, int iParam1)//Position - 0xF92DB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1056225/*func_3077*/;
			break;
		case 111:
			uParam0->f_35 = 1056211/*func_3076*/;
			break;
		case 1:
			uParam0->f_30 = 1056112/*func_3075*/;
			break;
		case 2:
			uParam0->f_31 = 1055048/*func_3071*/;
			break;
		case 3:
			uParam0->f_34 = 1054894/*func_3070*/;
			break;
		case 4:
			uParam0->f_12 = 1054840/*func_3068*/;
			break;
		case 5:
			uParam0->f_11 = 1054785/*func_3067*/;
			break;
		case 37:
			uParam0->f_18 = 1054665/*func_3066*/;
			break;
		case 38:
			uParam0->f_9 = 1054550/*func_3063*/;
			break;
		case 6:
			uParam0->f_32 = 1054435/*func_3062*/;
			break;
		case 11:
			uParam0->f_11 = 1054425/*func_3061*/;
			break;
		case 12:
			uParam0->f_33 = 1053256/*func_3056*/;
			break;
		case 14:
			uParam0->f_11 = 1053247/*func_3055*/;
			break;
		case 109:
			uParam0->f_56 = 1051921/*func_3054*/;
			break;
		case 8:
			uParam0->f_37 = 1051877/*func_3053*/;
			break;
		case 7:
			uParam0->f_36 = 1051854/*func_3052*/;
			break;
		case 79:
			*uParam0 = 1051830/*func_3051*/;
			break;
		case 13:
			uParam0->f_2 = 1051767/*func_3050*/;
			break;
		case 15:
			uParam0->f_2 = 1051687/*func_3049*/;
			break;
		case 16:
			uParam0->f_5 = 1051044/*func_3045*/;
			break;
		case 108:
			uParam0->f_55 = 1047903/*func_3032*/;
			break;
		case 17:
			uParam0->f_17 = 1047201/*func_3031*/;
			break;
		case 19:
			uParam0->f_17 = 1047174/*func_3030*/;
			break;
		case 20:
			uParam0->f_3 = 1046995/*func_3029*/;
			break;
		case 21:
			uParam0->f_3 = 1046931/*func_3028*/;
			break;
		case 74:
			uParam0->f_53 = 1046657/*func_3026*/;
			break;
		case 75:
			uParam0->f_4 = 1046641/*func_3025*/;
			break;
		case 22:
			uParam0->f_24 = 1046538/*func_3024*/;
			break;
		case 23:
			uParam0->f_26 = 1046491/*func_3023*/;
			break;
		case 24:
			uParam0->f_26 = 1046454/*func_3022*/;
			break;
		case 26:
			uParam0->f_38 = 1045627/*func_3015*/;
			break;
		case 25:
			uParam0->f_23 = 1045261/*func_3012*/;
			break;
		case 27:
			uParam0->f_25 = 1044879/*func_3010*/;
			break;
		case 28:
			uParam0->f_24 = 1044828/*func_3009*/;
			break;
		case 29:
			uParam0->f_28 = 1044820/*func_3008*/;
			break;
		case 30:
			uParam0->f_8 = 1044583/*func_3004*/;
			break;
		case 31:
			uParam0->f_39 = 1044459/*func_3003*/;
			break;
		case 33:
			uParam0->f_40 = 1044039/*func_3002*/;
			break;
		case 34:
			uParam0->f_41 = 1032746/*func_2988*/;
			break;
		case 36:
			uParam0->f_58 = 1032701/*func_2987*/;
			break;
		case 35:
			uParam0->f_42 = 1029613/*func_2984*/;
			break;
		case 45:
			uParam0->f_14 = 1029604/*func_2983*/;
			break;
		case 46:
			uParam0->f_14 = 1029595/*func_2982*/;
			break;
		case 110:
			uParam0->f_57 = 1029587/*func_2981*/;
			break;
		case 77:
			uParam0->f_13 = 1029538/*func_2980*/;
			break;
		case 47:
			uParam0->f_43 = 1029456/*func_2979*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1028692/*func_2972*/;
			break;
		case 49:
			uParam0->f_8 = 1028645/*func_2971*/;
			break;
		case 50:
			*uParam0 = 1028586/*func_2970*/;
			break;
		case 51:
			*uParam0 = 1028354/*func_2967*/;
			break;
		case 52:
			uParam0->f_15 = 1028343/*func_2966*/;
			break;
		case 53:
			uParam0->f_13 = 1028301/*func_2965*/;
			break;
		case 54:
			uParam0->f_45 = 1028293/*func_2964*/;
			break;
		case 56:
			uParam0->f_46 = 1028284/*func_2963*/;
			break;
		case 57:
			uParam0->f_11 = 1028275/*func_2962*/;
			break;
		case 58:
			uParam0->f_13 = 1028233/*func_2961*/;
			break;
		case 59:
			*uParam0 = 1028224/*func_2960*/;
			break;
		case 60:
			*uParam0 = 1028215/*func_2959*/;
			break;
		case 61:
			uParam0->f_15 = 1028204/*func_2958*/;
			break;
		case 62:
			uParam0->f_13 = 1028162/*func_2957*/;
			break;
		case 63:
			uParam0->f_11 = 1028153/*func_2956*/;
			break;
		case 64:
			uParam0->f_47 = 1028145/*func_2955*/;
			break;
		case 65:
			uParam0->f_21 = 1027083/*func_2952*/;
			break;
		case 66:
			uParam0->f_21 = 1026780/*func_2951*/;
			break;
		case 67:
			uParam0->f_21 = 1026666/*func_2950*/;
			break;
		case 68:
			*uParam0 = 1025823/*func_2949*/;
			break;
		case 69:
			*uParam0 = 1025814/*func_2948*/;
			break;
		case 70:
			uParam0->f_48 = 1025741/*func_2947*/;
			break;
		case 71:
			uParam0->f_49 = 1025732/*func_2946*/;
			break;
		case 107:
			uParam0->f_50 = 1025720/*func_2945*/;
			break;
		case 80:
			uParam0->f_7 = 1025518/*func_2944*/;
			break;
		case 84:
			uParam0->f_1 = 1025509/*func_2943*/;
			break;
		case 85:
			uParam0->f_1 = 1023776/*func_2930*/;
			break;
		case 87:
			uParam0->f_1 = 1022323/*func_2922*/;
			break;
		case 88:
			uParam0->f_1 = 1022314/*func_2921*/;
			break;
		case 89:
			uParam0->f_54 = 1022306/*func_2920*/;
			break;
		case 96:
			uParam0->f_1 = 1022297/*func_2919*/;
			break;
		case 97:
			uParam0->f_1 = 1022288/*func_2918*/;
			break;
		case 98:
			uParam0->f_1 = 1022279/*func_2917*/;
			break;
		case 100:
			uParam0->f_22 = 1022271/*func_2916*/;
			break;
		case 101:
			uParam0->f_22 = 1022263/*func_2915*/;
			break;
		case 78:
			uParam0->f_59 = 1022091/*func_2913*/;
			break;
		case 125:
			uParam0->f_19 = 1022058/*func_2912*/;
			break;
	}
}

int func_2930(int iParam0, var uParam1)//Position - 0xF9F20
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_18__::func_483())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_580(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_3__::func_10(iParam0, __LIB_2__::func_399()) };
		Var2 = { __LIB_3__::func_9(iParam0, __LIB_2__::func_399()) };
		uVar3 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var4 = { __LIB_3__::func_8(iParam0, __LIB_2__::func_399()) };
		Var5 = { __LIB_3__::func_7(iParam0, __LIB_2__::func_399()) };
		uVar6 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var7 = { __LIB_3__::func_5(iParam0, __LIB_2__::func_399()) };
		Var8 = { __LIB_3__::func_4(iParam0, __LIB_2__::func_399()) };
		uVar9 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		Var10 = { __LIB_3__::func_3(iParam0, __LIB_2__::func_399()) };
		Var11 = { __LIB_3__::func_2(iParam0, __LIB_2__::func_399()) };
		uVar12 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3012(int iParam0, int iParam1)//Position - 0xFF30D
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_499(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3015(var uParam0, var uParam1)//Position - 0xFF47B
{
	if (__LIB_2__::func_710(PLAYER::PLAYER_ID()))
	{
		func_3016(uParam0, uParam1);
	}
}

void func_3016(var uParam0, var uParam1)//Position - 0xFF499
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_572(uParam0, uParam1);
			break;
		case 1:
			func_3017(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3017(var uParam0, var uParam1)//Position - 0xFF4D3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_319("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_3078(var uParam0, int iParam1)//Position - 0x101DEA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1147495/*func_3221*/;
			break;
		case 1:
			uParam0->f_30 = 1147439/*func_3220*/;
			break;
		case 2:
			uParam0->f_31 = 1147095/*func_3219*/;
			break;
		case 3:
			uParam0->f_34 = 1147056/*func_3218*/;
			break;
		case 4:
			uParam0->f_12 = 1147023/*func_3217*/;
			break;
		case 5:
			uParam0->f_11 = 1147012/*func_3216*/;
			break;
		case 6:
			uParam0->f_32 = 1146948/*func_3215*/;
			break;
		case 111:
			uParam0->f_35 = 1146925/*func_3214*/;
			break;
		case 79:
			*uParam0 = 1146901/*func_3213*/;
			break;
		case 37:
			uParam0->f_18 = 1146779/*func_3212*/;
			break;
		case 38:
			uParam0->f_9 = 1146700/*func_3211*/;
			break;
		case 11:
			uParam0->f_11 = 1146691/*func_3210*/;
			break;
		case 12:
			uParam0->f_33 = 1146095/*func_3207*/;
			break;
		case 109:
			uParam0->f_56 = 1146087/*func_3206*/;
			break;
		case 15:
			uParam0->f_2 = 1140891/*func_3181*/;
			break;
		case 13:
			uParam0->f_2 = 1140882/*func_3180*/;
			break;
		case 75:
			uParam0->f_4 = 1140867/*func_3179*/;
			break;
		case 16:
			uParam0->f_5 = 1140392/*func_3175*/;
			break;
		case 108:
			uParam0->f_55 = 1136905/*func_3161*/;
			break;
		case 17:
			uParam0->f_17 = 1136127/*func_3160*/;
			break;
		case 19:
			uParam0->f_17 = 1136100/*func_3159*/;
			break;
		case 20:
			uParam0->f_3 = 1135889/*func_3158*/;
			break;
		case 21:
			uParam0->f_3 = 1135726/*func_3157*/;
			break;
		case 74:
			uParam0->f_53 = 1135117/*func_3154*/;
			break;
		case 22:
			uParam0->f_24 = 1135035/*func_3153*/;
			break;
		case 25:
			uParam0->f_23 = 1134119/*func_3150*/;
			break;
		case 30:
			uParam0->f_8 = 1132868/*func_3141*/;
			break;
		case 31:
			uParam0->f_39 = 1132191/*func_3137*/;
			break;
		case 33:
			uParam0->f_40 = 1131288/*func_3134*/;
			break;
		case 14:
			uParam0->f_11 = 1131279/*func_3133*/;
			break;
		case 34:
			uParam0->f_41 = 1130504/*func_3130*/;
			break;
		case 36:
			uParam0->f_58 = 1130449/*func_3129*/;
			break;
		case 35:
			uParam0->f_42 = 1062020/*func_3117*/;
			break;
		case 45:
			uParam0->f_14 = 1062011/*func_3116*/;
			break;
		case 46:
			uParam0->f_14 = 1062002/*func_3115*/;
			break;
		case 110:
			uParam0->f_57 = 1061994/*func_3114*/;
			break;
		case 77:
			uParam0->f_13 = 1061971/*func_3113*/;
			break;
		case 47:
			uParam0->f_43 = 1061831/*func_3112*/;
			break;
		case 49:
			uParam0->f_8 = 1061796/*func_3111*/;
			break;
		case 50:
			*uParam0 = 1061758/*func_3110*/;
			break;
		case 51:
			*uParam0 = 1061734/*func_3109*/;
			break;
		case 52:
			uParam0->f_15 = 1061723/*func_3108*/;
			break;
		case 53:
			uParam0->f_13 = 1061644/*func_3107*/;
			break;
		case 54:
			uParam0->f_45 = 1061636/*func_3106*/;
			break;
		case 56:
			uParam0->f_46 = 1061627/*func_3105*/;
			break;
		case 57:
			uParam0->f_11 = 1061617/*func_3104*/;
			break;
		case 58:
			uParam0->f_13 = 1061328/*func_3103*/;
			break;
		case 64:
			uParam0->f_47 = 1059738/*func_3095*/;
			break;
		case 65:
			uParam0->f_21 = 1058775/*func_3092*/;
			break;
		case 66:
			uParam0->f_21 = 1058580/*func_3091*/;
			break;
		case 67:
			uParam0->f_21 = 1058477/*func_3090*/;
			break;
		case 68:
			*uParam0 = 1057788/*func_3089*/;
			break;
		case 69:
			*uParam0 = 1057779/*func_3088*/;
			break;
		case 70:
			uParam0->f_48 = 1057767/*func_3087*/;
			break;
		case 71:
			uParam0->f_49 = 1057758/*func_3086*/;
			break;
		case 107:
			uParam0->f_50 = 1057746/*func_3085*/;
			break;
		case 80:
			uParam0->f_7 = 1057372/*func_3082*/;
			break;
		case 73:
			uParam0->f_51 = 1057363/*func_3081*/;
			break;
		case 78:
			uParam0->f_59 = 1057246/*func_3079*/;
			break;
	}
}

void func_3150(int iParam0, int iParam1)//Position - 0x114E27
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_25__::func_487(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_25__::func_305(PLAYER::PLAYER_ID())) && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_506(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_229(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_506(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_3151(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_3151(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3151(int iParam0)//Position - 0x1150DF
{
	__LIB_25__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3222(var uParam0, int iParam1)//Position - 0x118270
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1210770/*func_3452*/;
			break;
		case 1:
			uParam0->f_30 = 1210530/*func_3450*/;
			break;
		case 2:
			uParam0->f_31 = 1208227/*func_3444*/;
			break;
		case 3:
			uParam0->f_34 = 1208018/*func_3443*/;
			break;
		case 4:
			uParam0->f_12 = 1207811/*func_3441*/;
			break;
		case 5:
			uParam0->f_11 = 1207733/*func_3440*/;
			break;
		case 37:
			uParam0->f_18 = 1207593/*func_3439*/;
			break;
		case 38:
			uParam0->f_9 = 1207537/*func_3438*/;
			break;
		case 42:
			uParam0->f_10 = 1207376/*func_3435*/;
			break;
		case 6:
			uParam0->f_32 = 1207140/*func_3434*/;
			break;
		case 111:
			uParam0->f_35 = 1207126/*func_3433*/;
			break;
		case 11:
			uParam0->f_11 = 1207117/*func_3432*/;
			break;
		case 12:
			uParam0->f_33 = 1203747/*func_3423*/;
			break;
		case 14:
			uParam0->f_11 = 1203738/*func_3422*/;
			break;
		case 109:
			uParam0->f_56 = 1189869/*func_3421*/;
			break;
		case 79:
			*uParam0 = 1189613/*func_3417*/;
			break;
		case 13:
			uParam0->f_2 = 1189564/*func_3416*/;
			break;
		case 15:
			uParam0->f_2 = 1189353/*func_3413*/;
			break;
		case 44:
			*uParam0 = 1189344/*func_3412*/;
			break;
		case 75:
			uParam0->f_4 = 1189315/*func_3411*/;
			break;
		case 16:
			uParam0->f_5 = 1188588/*func_3408*/;
			break;
		case 108:
			uParam0->f_55 = 1184734/*func_3395*/;
			break;
		case 17:
			uParam0->f_17 = 1183420/*func_3391*/;
			break;
		case 19:
			uParam0->f_17 = 1183374/*func_3390*/;
			break;
		case 20:
			uParam0->f_3 = 1183209/*func_3389*/;
			break;
		case 21:
			uParam0->f_3 = 1183145/*func_3388*/;
			break;
		case 74:
			uParam0->f_53 = 1182918/*func_3387*/;
			break;
		case 22:
			uParam0->f_24 = 1182795/*func_3386*/;
			break;
		case 26:
			uParam0->f_38 = 1179414/*func_3360*/;
			break;
		case 25:
			uParam0->f_23 = 1179093/*func_3358*/;
			break;
		case 27:
			uParam0->f_25 = 1177945/*func_3349*/;
			break;
		case 28:
			uParam0->f_24 = 1177833/*func_3348*/;
			break;
		case 29:
			uParam0->f_28 = 1177752/*func_3347*/;
			break;
		case 30:
			uParam0->f_8 = 1176862/*func_3345*/;
			break;
		case 31:
			uParam0->f_39 = 1176312/*func_3343*/;
			break;
		case 33:
			uParam0->f_40 = 1175630/*func_3341*/;
			break;
		case 32:
			*uParam0 = 1175537/*func_3339*/;
			break;
		case 34:
			uParam0->f_41 = 1166271/*func_3324*/;
			break;
		case 36:
			uParam0->f_58 = 1166213/*func_3323*/;
			break;
		case 35:
			uParam0->f_42 = 1062889/*func_3120*/;
			break;
		case 45:
			uParam0->f_14 = 1166204/*func_3322*/;
			break;
		case 46:
			uParam0->f_14 = 1166195/*func_3321*/;
			break;
		case 110:
			uParam0->f_57 = 1166187/*func_3320*/;
			break;
		case 77:
			uParam0->f_13 = 1166138/*func_3319*/;
			break;
		case 47:
			uParam0->f_43 = 1165846/*func_3318*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1162820/*func_3294*/;
			break;
		case 49:
			uParam0->f_8 = 1162716/*func_3293*/;
			break;
		case 50:
			*uParam0 = 1162433/*func_3292*/;
			break;
		case 51:
			*uParam0 = 1162271/*func_3291*/;
			break;
		case 52:
			uParam0->f_15 = 1162260/*func_3290*/;
			break;
		case 53:
			uParam0->f_13 = 1162002/*func_3289*/;
			break;
		case 54:
			uParam0->f_45 = 1161740/*func_3288*/;
			break;
		case 56:
			uParam0->f_46 = 1161731/*func_3287*/;
			break;
		case 57:
			uParam0->f_11 = 1160574/*func_3280*/;
			break;
		case 58:
			uParam0->f_13 = 1160316/*func_3279*/;
			break;
		case 59:
			*uParam0 = 1160037/*func_3276*/;
			break;
		case 60:
			*uParam0 = 1160028/*func_3275*/;
			break;
		case 61:
			uParam0->f_15 = 1160017/*func_3274*/;
			break;
		case 62:
			uParam0->f_13 = 1159759/*func_3273*/;
			break;
		case 55:
			uParam0->f_45 = 1159751/*func_3272*/;
			break;
		case 63:
			uParam0->f_11 = 1159693/*func_3271*/;
			break;
		case 64:
			uParam0->f_47 = 1159543/*func_3270*/;
			break;
		case 65:
			uParam0->f_21 = 1157836/*func_3263*/;
			break;
		case 66:
			uParam0->f_21 = 1157525/*func_3262*/;
			break;
		case 67:
			uParam0->f_21 = 1157373/*func_3261*/;
			break;
		case 68:
			*uParam0 = 1156373/*func_3258*/;
			break;
		case 69:
			*uParam0 = 1156364/*func_3257*/;
			break;
		case 70:
			uParam0->f_48 = 1155915/*func_3256*/;
			break;
		case 71:
			uParam0->f_49 = 1155636/*func_3255*/;
			break;
		case 107:
			uParam0->f_50 = 1155624/*func_3254*/;
			break;
		case 80:
			uParam0->f_7 = 1155391/*func_3253*/;
			break;
		case 84:
			uParam0->f_1 = 1155382/*func_3252*/;
			break;
		case 85:
			uParam0->f_1 = 1153287/*func_3243*/;
			break;
		case 87:
			uParam0->f_1 = 1150392/*func_3234*/;
			break;
		case 88:
			uParam0->f_1 = 1150383/*func_3233*/;
			break;
		case 89:
			uParam0->f_54 = 1150375/*func_3232*/;
			break;
		case 96:
			uParam0->f_1 = 1150349/*func_3231*/;
			break;
		case 97:
			uParam0->f_1 = 1150240/*func_3230*/;
			break;
		case 98:
			uParam0->f_1 = 1149529/*func_3229*/;
			break;
		case 100:
			uParam0->f_22 = 1149366/*func_3228*/;
			break;
		case 101:
			uParam0->f_22 = 1149239/*func_3227*/;
			break;
		case 78:
			uParam0->f_59 = 1148949/*func_3224*/;
			break;
		case 125:
			uParam0->f_19 = 1148925/*func_3223*/;
			break;
	}
}

int func_3229(var uParam0, var uParam1)//Position - 0x118A59
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1610(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3243(int iParam0, var uParam1)//Position - 0x119907
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_3__::func_103(iParam0);
	if (__LIB_18__::func_486(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_663(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_580(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_3__::func_110(iVar0) };
		Var3 = { __LIB_3__::func_109(iVar0) };
		fVar4 = __LIB_3__::func_108(iVar0);
		fVar5 = __LIB_3__::func_107(iVar0);
		bVar6 = false;
		Var7 = { __LIB_3__::func_106(iVar0) };
		Var8 = { __LIB_3__::func_105(iVar0) };
		fVar9 = __LIB_3__::func_104(iVar0);
		return __LIB_25__::func_164(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3358(int iParam0, int iParam1)//Position - 0x11FDD5
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_6__::func_426(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_792(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3360(var uParam0, var uParam1)//Position - 0x11FF16
{
	if (__LIB_2__::func_399() == 2)
	{
		func_3374(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			func_3362(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_3362(var uParam0, var uParam1)//Position - 0x11FFA1
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_573(uParam0, uParam1);
			break;
		case 1:
			func_3363(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3363(var uParam0, var uParam1)//Position - 0x11FFDB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_514(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_3374(var uParam0, var uParam1)//Position - 0x1204F8
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_574(uParam0, uParam1);
			break;
		case 1:
			func_3383(uParam0, uParam1);
			break;
		case 2:
			__LIB_32__::func_189(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3383(var uParam0, var uParam1)//Position - 0x1209A5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_792(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_53(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_25__::func_396(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_3453(var uParam0, int iParam1)//Position - 0x12799B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1218298/*func_3530*/;
			break;
		case 1:
			uParam0->f_30 = 1218242/*func_3529*/;
			break;
		case 2:
			uParam0->f_31 = 1217973/*func_3528*/;
			break;
		case 3:
			uParam0->f_34 = 1217912/*func_3527*/;
			break;
		case 4:
			uParam0->f_12 = 1217881/*func_3526*/;
			break;
		case 6:
			uParam0->f_32 = 1217817/*func_3525*/;
			break;
		case 111:
			uParam0->f_35 = 1217808/*func_3524*/;
			break;
		case 11:
			uParam0->f_11 = 1217799/*func_3523*/;
			break;
		case 14:
			uParam0->f_11 = 1217790/*func_3522*/;
			break;
		case 12:
			uParam0->f_33 = 1217579/*func_3520*/;
			break;
		case 109:
			uParam0->f_56 = 1217571/*func_3519*/;
			break;
		case 79:
			*uParam0 = 1217547/*func_3518*/;
			break;
		case 13:
			uParam0->f_2 = 1217538/*func_3517*/;
			break;
		case 15:
			uParam0->f_2 = 1216596/*func_3510*/;
			break;
		case 75:
			uParam0->f_4 = 1216587/*func_3509*/;
			break;
		case 16:
			uParam0->f_5 = 1216562/*func_3508*/;
			break;
		case 108:
			uParam0->f_55 = 1216553/*func_3507*/;
			break;
		case 17:
			uParam0->f_17 = 1216527/*func_3506*/;
			break;
		case 19:
			uParam0->f_17 = 1216515/*func_3505*/;
			break;
		case 20:
			uParam0->f_3 = 1216506/*func_3504*/;
			break;
		case 21:
			uParam0->f_3 = 1216497/*func_3503*/;
			break;
		case 74:
			uParam0->f_53 = 1216029/*func_3500*/;
			break;
		case 22:
			uParam0->f_24 = 1215910/*func_3499*/;
			break;
		case 25:
			uParam0->f_23 = 1215140/*func_3495*/;
			break;
		case 30:
			uParam0->f_8 = 1214994/*func_3493*/;
			break;
		case 31:
			uParam0->f_39 = 1214982/*func_3492*/;
			break;
		case 33:
			uParam0->f_40 = 1214775/*func_3490*/;
			break;
		case 34:
			uParam0->f_41 = 1214458/*func_3488*/;
			break;
		case 36:
			uParam0->f_58 = 1214405/*func_3487*/;
			break;
		case 35:
			uParam0->f_42 = 1213632/*func_3484*/;
			break;
		case 45:
			uParam0->f_14 = 1213623/*func_3483*/;
			break;
		case 46:
			uParam0->f_14 = 1213614/*func_3482*/;
			break;
		case 110:
			uParam0->f_57 = 1213606/*func_3481*/;
			break;
		case 77:
			uParam0->f_13 = 1213595/*func_3480*/;
			break;
		case 47:
			uParam0->f_43 = 1213356/*func_3478*/;
			break;
		case 49:
			uParam0->f_8 = 1213347/*func_3477*/;
			break;
		case 50:
			*uParam0 = 1213338/*func_3476*/;
			break;
		case 51:
			*uParam0 = 1213329/*func_3475*/;
			break;
		case 52:
			uParam0->f_15 = 1213318/*func_3474*/;
			break;
		case 53:
			uParam0->f_13 = 1213307/*func_3473*/;
			break;
		case 54:
			uParam0->f_45 = 1213299/*func_3472*/;
			break;
		case 56:
			uParam0->f_46 = 1213290/*func_3471*/;
			break;
		case 57:
			uParam0->f_11 = 1213281/*func_3470*/;
			break;
		case 58:
			uParam0->f_13 = 1212988/*func_3468*/;
			break;
		case 64:
			uParam0->f_47 = 1212444/*func_3465*/;
			break;
		case 65:
			uParam0->f_21 = 1212436/*func_3464*/;
			break;
		case 66:
			uParam0->f_21 = 1212366/*func_3463*/;
			break;
		case 67:
			uParam0->f_21 = 1212226/*func_3461*/;
			break;
		case 68:
			*uParam0 = 1211782/*func_3460*/;
			break;
		case 69:
			*uParam0 = 1211773/*func_3459*/;
			break;
		case 70:
			uParam0->f_48 = 1211761/*func_3458*/;
			break;
		case 71:
			uParam0->f_49 = 1211752/*func_3457*/;
			break;
		case 107:
			uParam0->f_50 = 1211740/*func_3456*/;
			break;
		case 80:
			uParam0->f_7 = 1211731/*func_3455*/;
			break;
		case 78:
			uParam0->f_59 = 1211723/*func_3454*/;
			break;
	}
}

void func_3495(int iParam0, int iParam1)//Position - 0x128AA4
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_19__::func_148(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_20__::func_484(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_20__::func_484(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3496(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3496(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3496(int iParam0)//Position - 0x128CCE
{
	__LIB_20__::func_484(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3531(var uParam0, int iParam1)//Position - 0x129703
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1317160/*func_3774*/;
			break;
		case 1:
			uParam0->f_30 = 1317056/*func_3773*/;
			break;
		case 2:
			uParam0->f_31 = 1316321/*func_3771*/;
			break;
		case 3:
			uParam0->f_34 = 1316239/*func_3770*/;
			break;
		case 4:
			uParam0->f_12 = 1316096/*func_3769*/;
			break;
		case 5:
			uParam0->f_11 = 1316086/*func_3768*/;
			break;
		case 37:
			uParam0->f_18 = 1315949/*func_3767*/;
			break;
		case 42:
			uParam0->f_10 = 1315882/*func_3766*/;
			break;
		case 6:
			uParam0->f_32 = 1315770/*func_3765*/;
			break;
		case 111:
			uParam0->f_35 = 1315531/*func_3761*/;
			break;
		case 11:
			uParam0->f_11 = 1315522/*func_3760*/;
			break;
		case 12:
			uParam0->f_33 = 1315022/*func_3757*/;
			break;
		case 14:
			uParam0->f_11 = 1315013/*func_3756*/;
			break;
		case 109:
			uParam0->f_56 = 1315005/*func_3755*/;
			break;
		case 79:
			*uParam0 = 1314981/*func_3754*/;
			break;
		case 38:
			uParam0->f_9 = 1314901/*func_3753*/;
			break;
		case 13:
			uParam0->f_2 = 1314805/*func_3752*/;
			break;
		case 15:
			uParam0->f_2 = 1314600/*func_3751*/;
			break;
		case 75:
			uParam0->f_4 = 1314584/*func_3750*/;
			break;
		case 16:
			uParam0->f_5 = 1313775/*func_3747*/;
			break;
		case 108:
			uParam0->f_55 = 1309068/*func_3729*/;
			break;
		case 17:
			uParam0->f_17 = 1308250/*func_3728*/;
			break;
		case 19:
			uParam0->f_17 = 1308223/*func_3727*/;
			break;
		case 20:
			uParam0->f_3 = 1308139/*func_3726*/;
			break;
		case 21:
			uParam0->f_3 = 1308075/*func_3725*/;
			break;
		case 74:
			uParam0->f_53 = 1307923/*func_3724*/;
			break;
		case 22:
			uParam0->f_24 = 1307756/*func_3723*/;
			break;
		case 25:
			uParam0->f_23 = 1306610/*func_3717*/;
			break;
		case 30:
			uParam0->f_8 = 1305992/*func_3715*/;
			break;
		case 31:
			uParam0->f_39 = 1305679/*func_3714*/;
			break;
		case 33:
			uParam0->f_40 = 1304740/*func_3712*/;
			break;
		case 34:
			uParam0->f_41 = 1303380/*func_3711*/;
			break;
		case 36:
			uParam0->f_58 = 1303322/*func_3710*/;
			break;
		case 35:
			uParam0->f_42 = 1255607/*func_3707*/;
			break;
		case 45:
			uParam0->f_14 = 1255598/*func_3706*/;
			break;
		case 46:
			uParam0->f_14 = 1255589/*func_3705*/;
			break;
		case 110:
			uParam0->f_57 = 1255581/*func_3704*/;
			break;
		case 77:
			uParam0->f_13 = 1255558/*func_3703*/;
			break;
		case 47:
			uParam0->f_43 = 1255430/*func_3702*/;
			break;
		case 49:
			uParam0->f_8 = 1255389/*func_3701*/;
			break;
		case 50:
			*uParam0 = 1255121/*func_3698*/;
			break;
		case 51:
			*uParam0 = 1255052/*func_3697*/;
			break;
		case 52:
			uParam0->f_15 = 1255041/*func_3696*/;
			break;
		case 53:
			uParam0->f_13 = 1254807/*func_3695*/;
			break;
		case 54:
			uParam0->f_45 = 1254457/*func_3692*/;
			break;
		case 56:
			uParam0->f_46 = 1254448/*func_3691*/;
			break;
		case 57:
			uParam0->f_11 = 1254377/*func_3690*/;
			break;
		case 58:
			uParam0->f_13 = 1254143/*func_3689*/;
			break;
		case 64:
			uParam0->f_47 = 1253943/*func_3687*/;
			break;
		case 65:
			uParam0->f_21 = 1253045/*func_3685*/;
			break;
		case 66:
			uParam0->f_21 = 1252319/*func_3676*/;
			break;
		case 67:
			uParam0->f_21 = 1250020/*func_3656*/;
			break;
		case 68:
			*uParam0 = 1249387/*func_3652*/;
			break;
		case 69:
			*uParam0 = 1249378/*func_3651*/;
			break;
		case 70:
			uParam0->f_48 = 1249366/*func_3650*/;
			break;
		case 71:
			uParam0->f_49 = 1249357/*func_3649*/;
			break;
		case 107:
			uParam0->f_50 = 1249345/*func_3648*/;
			break;
		case 80:
			uParam0->f_7 = 1248652/*func_3642*/;
			break;
		case 84:
			uParam0->f_1 = 1248112/*func_3640*/;
			break;
		case 85:
			uParam0->f_1 = 1244009/*func_3632*/;
			break;
		case 87:
			uParam0->f_1 = 1240022/*func_3620*/;
			break;
		case 88:
			uParam0->f_1 = 1239508/*func_3616*/;
			break;
		case 89:
			uParam0->f_54 = 1239337/*func_3615*/;
			break;
		case 90:
			uParam0->f_1 = 1239131/*func_3610*/;
			break;
		case 91:
			uParam0->f_1 = 1238965/*func_3609*/;
			break;
		case 92:
			uParam0->f_1 = 1237513/*func_3605*/;
			break;
		case 94:
			uParam0->f_1 = 1233377/*func_3594*/;
			break;
		case 95:
			uParam0->f_22 = 1233081/*func_3591*/;
			break;
		case 96:
			uParam0->f_1 = 1233051/*func_3590*/;
			break;
		case 97:
			uParam0->f_1 = 1232383/*func_3587*/;
			break;
		case 98:
			uParam0->f_1 = 1229734/*func_3568*/;
			break;
		case 100:
			uParam0->f_22 = 1221778/*func_3545*/;
			break;
		case 101:
			uParam0->f_22 = 1219835/*func_3535*/;
			break;
		case 78:
			uParam0->f_59 = 1219615/*func_3533*/;
			break;
		case 125:
			uParam0->f_19 = 1219591/*func_3532*/;
			break;
	}
}

int func_3568(int iParam0, int* iParam1)//Position - 0x12C3A6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_175() || __LIB_2__::func_500()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_4__::func_715() || __LIB_2__::func_835())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_2__::func_47(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_8__::func_303(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_3__::func_198(0), false);
				Var4 = { __LIB_3__::func_207() };
				__LIB_7__::func_660(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_160())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1610(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_8__::func_303(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1610(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_3__::func_223();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_206() || BitTest(Global_1574942, 4))
		{
			if (__LIB_4__::func_715() || __LIB_2__::func_835())
			{
			}
			else
			{
				__LIB_25__::func_389(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_7__::func_659(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_18__::func_635(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_1610(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_3__::func_207() };
			__LIB_7__::func_660(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_6__::func_925())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_2__::func_681(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_3__::func_209(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_7__::func_449(iParam1, 0);
	__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3605(int iParam0, int* iParam1)//Position - 0x12E209
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_3__::func_208() };
		__LIB_7__::func_660(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_39__::func_751(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_663(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3607(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_3__::func_977(bVar5) == iParam0) && __LIB_3__::func_998(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1610(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_7__::func_536(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_25__::func_126(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_3__::func_198(0));
	return 1;
}

int func_3607(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x12E51B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::func_160() && __LIB_1__::func_264((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_581(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_3632(int iParam0, int* iParam1)//Position - 0x12FB69
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_663(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_3__::func_234(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_580(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_3__::func_246(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1610(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_7__::func_659(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_25__::func_125(iParam0, 3) };
	__LIB_7__::func_660(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_7__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_25__::func_125(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_7__::func_660(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_18__::func_635(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_25__::func_166(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_25__::func_127(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

int func_3640(int iParam0, var uParam1)//Position - 0x130B70
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_7__::func_538(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_240(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_240(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_222());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_222()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_221());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_221()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_584(__LIB_3__::func_226());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_226()))
				{
					bVar0 = false;
				}
				else if (!__LIB_39__::func_751(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_663(&iVar1, &(uParam1->f_122), 24);
					__LIB_3__::func_237(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_3__::func_247(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_6__::func_925())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_3692(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x132439
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_7__::func_926(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_170(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_3__::func_77(iParam0) };
					iVar1 = __LIB_2__::func_855(iParam0);
					*iParam2 = __LIB_0__::func_392(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2344(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_3717(int iParam0, int iParam1)//Position - 0x13EFF2
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_6__::func_431(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_77(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_764(bVar7)) && !func_793(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_764(bVar7)) && !func_793(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3718(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3718(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3718(int iParam0)//Position - 0x13F282
{
	__LIB_25__::func_398(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3775(var uParam0, int iParam1)//Position - 0x141931
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1345334/*func_3945*/;
			break;
		case 1:
			uParam0->f_30 = 1345278/*func_3944*/;
			break;
		case 2:
			uParam0->f_31 = 1345009/*func_3943*/;
			break;
		case 3:
			uParam0->f_34 = 1344950/*func_3942*/;
			break;
		case 4:
			uParam0->f_12 = 1344919/*func_3941*/;
			break;
		case 37:
			uParam0->f_18 = 1344799/*func_3940*/;
			break;
		case 38:
			uParam0->f_9 = 1344715/*func_3939*/;
			break;
		case 6:
			uParam0->f_32 = 1344651/*func_3938*/;
			break;
		case 111:
			uParam0->f_35 = 1344628/*func_3937*/;
			break;
		case 11:
			uParam0->f_11 = 1344619/*func_3936*/;
			break;
		case 12:
			uParam0->f_33 = 1344166/*func_3933*/;
			break;
		case 14:
			uParam0->f_11 = 1344157/*func_3932*/;
			break;
		case 109:
			uParam0->f_56 = 1344149/*func_3931*/;
			break;
		case 79:
			*uParam0 = 1344125/*func_3930*/;
			break;
		case 13:
			uParam0->f_2 = 1344116/*func_3929*/;
			break;
		case 15:
			uParam0->f_2 = 1339045/*func_3903*/;
			break;
		case 75:
			uParam0->f_4 = 1339036/*func_3902*/;
			break;
		case 16:
			uParam0->f_5 = 1338852/*func_3901*/;
			break;
		case 108:
			uParam0->f_55 = 1335753/*func_3887*/;
			break;
		case 17:
			uParam0->f_17 = 1335245/*func_3885*/;
			break;
		case 19:
			uParam0->f_17 = 1335218/*func_3884*/;
			break;
		case 20:
			uParam0->f_3 = 1335140/*func_3883*/;
			break;
		case 21:
			uParam0->f_3 = 1335077/*func_3882*/;
			break;
		case 74:
			uParam0->f_53 = 1334862/*func_3880*/;
			break;
		case 22:
			uParam0->f_24 = 1334743/*func_3879*/;
			break;
		case 25:
			uParam0->f_23 = 1333796/*func_3874*/;
			break;
		case 30:
			uParam0->f_8 = 1333232/*func_3872*/;
			break;
		case 31:
			uParam0->f_39 = 1333053/*func_3869*/;
			break;
		case 33:
			uParam0->f_40 = 1331941/*func_3864*/;
			break;
		case 34:
			uParam0->f_41 = 1331247/*func_3862*/;
			break;
		case 36:
			uParam0->f_58 = 1331194/*func_3861*/;
			break;
		case 35:
			uParam0->f_42 = 1330617/*func_3859*/;
			break;
		case 45:
			uParam0->f_14 = 1330608/*func_3858*/;
			break;
		case 46:
			uParam0->f_14 = 1330599/*func_3857*/;
			break;
		case 110:
			uParam0->f_57 = 1330422/*func_3856*/;
			break;
		case 77:
			uParam0->f_13 = 1330411/*func_3855*/;
			break;
		case 47:
			uParam0->f_43 = 1329913/*func_3852*/;
			break;
		case 49:
			uParam0->f_8 = 1329872/*func_3851*/;
			break;
		case 50:
			*uParam0 = 1329863/*func_3850*/;
			break;
		case 51:
			*uParam0 = 1329854/*func_3849*/;
			break;
		case 52:
			uParam0->f_15 = 1329843/*func_3848*/;
			break;
		case 53:
			uParam0->f_13 = 1329832/*func_3847*/;
			break;
		case 54:
			uParam0->f_45 = 1329824/*func_3846*/;
			break;
		case 56:
			uParam0->f_46 = 1329815/*func_3845*/;
			break;
		case 57:
			uParam0->f_11 = 1329806/*func_3844*/;
			break;
		case 58:
			uParam0->f_13 = 1329577/*func_3843*/;
			break;
		case 64:
			uParam0->f_47 = 1323655/*func_3812*/;
			break;
		case 65:
			uParam0->f_21 = 1321984/*func_3802*/;
			break;
		case 66:
			uParam0->f_21 = 1321658/*func_3799*/;
			break;
		case 67:
			uParam0->f_21 = 1320933/*func_3795*/;
			break;
		case 68:
			*uParam0 = 1320388/*func_3794*/;
			break;
		case 69:
			*uParam0 = 1320379/*func_3793*/;
			break;
		case 70:
			uParam0->f_48 = 1320367/*func_3792*/;
			break;
		case 71:
			uParam0->f_49 = 1320358/*func_3791*/;
			break;
		case 107:
			uParam0->f_50 = 1320346/*func_3790*/;
			break;
		case 80:
			uParam0->f_7 = 1318630/*func_3780*/;
			break;
		case 78:
			uParam0->f_59 = 1318180/*func_3777*/;
			break;
		case 125:
			uParam0->f_19 = 1318164/*func_3776*/;
			break;
	}
}

void func_3812(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x143287
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_3840();
	if ((func_3903(iParam1) && !__LIB_3__::func_925(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_25__::func_199(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_490(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_3903(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_25__::func_199(uParam0, 1);
			__LIB_3__::func_307(0);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_3830(iParam1))
	{
		if (!__LIB_4__::func_658())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_3__::func_324(0);
			__LIB_3__::func_323(0);
			__LIB_3__::func_309(0);
			__LIB_3__::func_322(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_2__::func_560())
			{
				__LIB_3__::func_321(1);
			}
			__LIB_3__::func_320(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_319(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_3__::func_320(0);
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_1__::func_237(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_3__::func_283(PLAYER::PLAYER_ID()) || __LIB_3__::func_233()) || __LIB_3__::func_232()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_3__::func_925(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
				{
					__LIB_25__::func_489(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_264(bVar3, 1, 1))
				{
					if (__LIB_3__::func_311(bVar3))
					{
						if (func_3903(iParam1) && !__LIB_3__::func_925(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_3__::func_319(0);
							__LIB_3__::func_320(0);
							__LIB_3__::func_321(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_18__::func_584();
	if (!__LIB_4__::func_715() || __LIB_0__::func_706())
	{
		__LIB_3__::func_272(0);
	}
}

int func_3830(int iParam0)//Position - 0x143E95
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3903(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if (((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_3__::func_311(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3840()//Position - 0x144616
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	int iVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_1__::func_237(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_1__::func_580(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_264(Global_1853191, 1, 1))
										{
											if (__LIB_4__::func_925(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
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
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_582())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_3__::func_328()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_1__::func_580(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_264(__LIB_0__::func_582(), 1, 1))
									{
										if (__LIB_4__::func_925(uVar6[iVar5], 1, 0) == __LIB_0__::func_582())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_3__::func_328()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_1__::func_580(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_4__::func_925(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_322(0);
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		iVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (iVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(iVar11))
		{
			return __LIB_3__::func_329(iVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_3843(var uParam0)//Position - 0x1449A9
{
	int iVar0;
	iVar0 = func_3840();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_237(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_4__::func_925(iVar0, 1, 0) != __LIB_0__::func_160())
	{
		return Global_2689235[__LIB_4__::func_925(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_3864(int iParam0, int iParam1)//Position - 0x1452E5
{
	int iVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = __LIB_0__::func_160();
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_8 = 0;
	Global_1946250.f_506 = 0;
	iVar0 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	if (((__LIB_3__::func_286() && Global_1853191 != __LIB_0__::func_160()) && Global_1853191 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		if (Global_1946250.f_3280 != PLAYER::PLAYER_ID())
		{
			if (Global_1946250.f_3280 != -1)
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 5);
				Global_1853190 = Global_1853191;
			}
			else
			{
				if (Global_1946250.f_3280 == -1)
				{
					__LIB_2__::func_452(Global_1853191);
				}
				Global_1853190 = Global_1853191;
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
		}
	}
	else if ((Global_1946250.f_3280 != -1 && Global_1946250.f_3280 != PLAYER::PLAYER_ID()) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 0);
		if (iVar0 != __LIB_0__::func_160())
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = iVar0;
		}
	}
	else if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_61(iVar0, 1);
		MISC::SET_BIT(&(Global_1946250.f_506), 5);
		Global_1853190 = Global_1946250.f_3630;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1946250.f_3630;
	}
	else if (__LIB_3__::func_330(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(func_3840(), 1, 0))
	{
		Global_1853190 = PLAYER::PLAYER_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
			{
				__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
			}
			else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		MISC::SET_BIT(&(Global_1946250.f_506), 31);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = Global_1853190;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_160())
	{
		Global_1946250.f_3636 = __LIB_1__::func_243(__LIB_1__::func_244(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9));
	}
	__LIB_7__::func_369();
}

void func_3874(int iParam0, int iParam1)//Position - 0x145A24
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_6__::func_576(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_793(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_793(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						func_3864(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						func_3864(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_3876(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3875(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_3876(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3875(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3875(int iParam0)//Position - 0x145CB7
{
	func_3864(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3876(int iParam0)//Position - 0x145CE5
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_3840();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_1__::func_237(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_3887(var uParam0, var uParam1, var uParam2)//Position - 0x1461C9
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_3840();
	if (__LIB_3__::func_233() || __LIB_3__::func_232())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_4__::func_925(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_199(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_199(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_7__::func_556(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_4__::func_958(PLAYER::PLAYER_ID())) || __LIB_3__::func_285())
					{
						if (!func_3903(*uParam0) && __LIB_25__::func_490(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_2__::func_161("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_3__::func_345(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_3__::func_311(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_7__::func_316(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_7__::func_249(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_25__::func_199(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_7__::func_249(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_4__::func_736(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_343(1);
									}
									__LIB_7__::func_375(1, 88);
									__LIB_3__::func_307(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_8__::func_611(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_4__::func_32() && __LIB_7__::func_560())
								{
									if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_308(1);
									}
									if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_3__::func_285())
									{
										__LIB_7__::func_394(1);
										__LIB_3__::func_934(88, uParam1, 0, 0);
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_18__::func_904(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_18__::func_904(1);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_4__::func_32())
									{
									}
									if (!__LIB_7__::func_560())
									{
									}
								}
							}
						}
						else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_199(uParam1, 1);
						__LIB_3__::func_307(0);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_199(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_3888(*uParam0);
				if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_3__::func_925(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_649(&(uParam1->f_22.f_101)))
						{
							if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
								}
								CAM::DO_SCREEN_FADE_IN(500);
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_2__::func_452(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_3__::func_343(1);
					__LIB_7__::func_375(1, 88);
					__LIB_3__::func_307(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_579(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_199(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_7__::func_249(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_3888(int iParam0)//Position - 0x1468F2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if ((__LIB_3__::func_311(bVar2) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 8) || __LIB_3__::func_311(bVar2))
								{
									if (func_3830(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_326(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_320(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
											{
												__LIB_3__::func_309(1);
												__LIB_3__::func_324(1);
												__LIB_3__::func_308(1);
												__LIB_3__::func_323(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_319(1);
											__LIB_3__::func_320(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_322(0);
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

int func_3903(int iParam0)//Position - 0x146EA5
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_3840();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_165()) || __LIB_3__::func_334())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_580(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_165()) || __LIB_3__::func_334())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_3924(iParam0, iVar0))
	{
		return 1;
	}
	if (func_3923(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3920(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3919(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3913(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3912(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_3__::func_347(1);
			}
		}
		else
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3909(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3908(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_3907(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_233())
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_3__::func_185(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_338(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_3__::func_931())
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_3905())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID()))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_161("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()) && __LIB_2__::func_39(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	__LIB_3__::func_347(0);
	return 0;
}

int func_3905()//Position - 0x1475D7
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_3840();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_3906(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3906(int iParam0, var uParam1)//Position - 0x14762F
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_3840();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_3907(int iParam0)//Position - 0x1476B8
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_3840();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_3906(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_3908(int iParam0, int iParam1)//Position - 0x147733
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3909(int iParam0, int iParam1)//Position - 0x14778E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3912(int iParam0, int iParam1)//Position - 0x147A20
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (!__LIB_1__::func_233(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3913(int iParam0, int iParam1)//Position - 0x147A7C
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (!__LIB_1__::func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_83(__LIB_7__::func_561(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3919(int iParam0, int iParam1)//Position - 0x147C31
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3920(int iParam0, int iParam1)//Position - 0x147D08
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3923(int iParam0, int iParam1)//Position - 0x147E6A
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3924(int iParam0, int iParam1)//Position - 0x147FF0
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3906(iParam0, &Var0);
		if (!__LIB_3__::func_932(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_84(__LIB_5__::func_702(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3933(int iParam0, int iParam1, var uParam2)//Position - 0x1482A6
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_3840();
	switch (iParam1)
	{
		case 0:
			func_3906(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_3934(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_3934(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1483A4
{
	int iVar0;
	var uVar1;
	iVar0 = func_3840();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_3__::func_328())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_3946(var uParam0, int iParam1)//Position - 0x14873F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1397775/*func_4112*/;
			break;
		case 1:
			uParam0->f_30 = 1397695/*func_4111*/;
			break;
		case 2:
			uParam0->f_31 = 1397196/*func_4110*/;
			break;
		case 3:
			uParam0->f_34 = 1397146/*func_4109*/;
			break;
		case 4:
			uParam0->f_12 = 1397059/*func_4108*/;
			break;
		case 5:
			uParam0->f_11 = 1397049/*func_4107*/;
			break;
		case 37:
			uParam0->f_18 = 1396929/*func_4106*/;
			break;
		case 38:
			uParam0->f_9 = 1396807/*func_4105*/;
			break;
		case 6:
			uParam0->f_32 = 1396719/*func_4104*/;
			break;
		case 111:
			uParam0->f_35 = 1396705/*func_4103*/;
			break;
		case 11:
			uParam0->f_11 = 1396696/*func_4102*/;
			break;
		case 12:
			uParam0->f_33 = 1396317/*func_4099*/;
			break;
		case 14:
			uParam0->f_11 = 1396308/*func_4098*/;
			break;
		case 109:
			uParam0->f_56 = 1396300/*func_4097*/;
			break;
		case 79:
			*uParam0 = 1396276/*func_4096*/;
			break;
		case 13:
			uParam0->f_2 = 1396144/*func_4095*/;
			break;
		case 15:
			uParam0->f_2 = 1395862/*func_4093*/;
			break;
		case 75:
			uParam0->f_4 = 1395848/*func_4092*/;
			break;
		case 16:
			uParam0->f_5 = 1395330/*func_4090*/;
			break;
		case 108:
			uParam0->f_55 = 1391704/*func_4078*/;
			break;
		case 17:
			uParam0->f_17 = 1391167/*func_4076*/;
			break;
		case 19:
			uParam0->f_17 = 1391140/*func_4075*/;
			break;
		case 20:
			uParam0->f_3 = 1391056/*func_4074*/;
			break;
		case 21:
			uParam0->f_3 = 1390992/*func_4073*/;
			break;
		case 74:
			uParam0->f_53 = 1390812/*func_4072*/;
			break;
		case 22:
			uParam0->f_24 = 1390669/*func_4071*/;
			break;
		case 25:
			uParam0->f_23 = 1390045/*func_4069*/;
			break;
		case 30:
			uParam0->f_8 = 1389530/*func_4067*/;
			break;
		case 31:
			uParam0->f_39 = 1389243/*func_4066*/;
			break;
		case 33:
			uParam0->f_40 = 1388572/*func_4064*/;
			break;
		case 34:
			uParam0->f_41 = 1387308/*func_4063*/;
			break;
		case 36:
			uParam0->f_58 = 1387263/*func_4062*/;
			break;
		case 35:
			uParam0->f_42 = 1361217/*func_4054*/;
			break;
		case 45:
			uParam0->f_14 = 1361208/*func_4053*/;
			break;
		case 46:
			uParam0->f_14 = 1361199/*func_4052*/;
			break;
		case 110:
			uParam0->f_57 = 1361191/*func_4051*/;
			break;
		case 77:
			uParam0->f_13 = 1361168/*func_4050*/;
			break;
		case 47:
			uParam0->f_43 = 1361064/*func_4049*/;
			break;
		case 49:
			uParam0->f_8 = 1361023/*func_4048*/;
			break;
		case 50:
			*uParam0 = 1360809/*func_4045*/;
			break;
		case 51:
			*uParam0 = 1360740/*func_4044*/;
			break;
		case 52:
			uParam0->f_15 = 1360729/*func_4043*/;
			break;
		case 53:
			uParam0->f_13 = 1360591/*func_4042*/;
			break;
		case 54:
			uParam0->f_45 = 1360403/*func_4041*/;
			break;
		case 56:
			uParam0->f_46 = 1360394/*func_4040*/;
			break;
		case 57:
			uParam0->f_11 = 1360217/*func_4038*/;
			break;
		case 58:
			uParam0->f_13 = 1360079/*func_4037*/;
			break;
		case 64:
			uParam0->f_47 = 1360071/*func_4036*/;
			break;
		case 65:
			uParam0->f_21 = 1359231/*func_4034*/;
			break;
		case 66:
			uParam0->f_21 = 1359124/*func_4033*/;
			break;
		case 67:
			uParam0->f_21 = 1359060/*func_4032*/;
			break;
		case 68:
			*uParam0 = 1358572/*func_4031*/;
			break;
		case 69:
			*uParam0 = 1358563/*func_4030*/;
			break;
		case 70:
			uParam0->f_48 = 1358551/*func_4029*/;
			break;
		case 71:
			uParam0->f_49 = 1358542/*func_4028*/;
			break;
		case 107:
			uParam0->f_50 = 1358530/*func_4027*/;
			break;
		case 80:
			uParam0->f_7 = 1357827/*func_4023*/;
			break;
		case 84:
			uParam0->f_1 = 1357727/*func_4021*/;
			break;
		case 85:
			uParam0->f_1 = 1355743/*func_4018*/;
			break;
		case 87:
			uParam0->f_1 = 1353320/*func_4006*/;
			break;
		case 88:
			uParam0->f_1 = 1353311/*func_4005*/;
			break;
		case 96:
			uParam0->f_1 = 1353248/*func_4004*/;
			break;
		case 97:
			uParam0->f_1 = 1352926/*func_4001*/;
			break;
		case 98:
			uParam0->f_1 = 1348919/*func_3967*/;
			break;
		case 100:
			uParam0->f_22 = 1346711/*func_3950*/;
			break;
		case 78:
			uParam0->f_59 = 1346507/*func_3948*/;
			break;
		case 125:
			uParam0->f_19 = 1346491/*func_3947*/;
			break;
	}
}

int func_3967(int iParam0, int* iParam1)//Position - 0x149537
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_663(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_31__::func_964(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_3__::func_936(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_4018(int iParam0, int* iParam1)//Position - 0x14AFDF
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_663(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_580(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1610(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_31__::func_964(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

void func_4069(int iParam0, int iParam1)//Position - 0x1535DD
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_6__::func_577(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_83(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_793(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_793(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4070(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4070(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4070(int iParam0)//Position - 0x15381F
{
	__LIB_25__::func_309(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4113(var uParam0, int iParam1)//Position - 0x155418
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1407289/*func_4177*/;
			break;
		case 1:
			uParam0->f_30 = 1407233/*func_4176*/;
			break;
		case 2:
			uParam0->f_31 = 1407014/*func_4175*/;
			break;
		case 3:
			uParam0->f_34 = 1406963/*func_4174*/;
			break;
		case 4:
			uParam0->f_12 = 1406930/*func_4173*/;
			break;
		case 6:
			uParam0->f_32 = 1406866/*func_4172*/;
			break;
		case 111:
			uParam0->f_35 = 1406857/*func_4171*/;
			break;
		case 79:
			*uParam0 = 1406833/*func_4170*/;
			break;
		case 11:
			uParam0->f_11 = 1406824/*func_4169*/;
			break;
		case 12:
			uParam0->f_33 = 1406732/*func_4168*/;
			break;
		case 14:
			uParam0->f_11 = 1406723/*func_4167*/;
			break;
		case 109:
			uParam0->f_56 = 1406715/*func_4166*/;
			break;
		case 15:
			uParam0->f_2 = 1406463/*func_4165*/;
			break;
		case 13:
			uParam0->f_2 = 1406454/*func_4164*/;
			break;
		case 75:
			uParam0->f_4 = 1406445/*func_4163*/;
			break;
		case 16:
			uParam0->f_5 = 1406436/*func_4162*/;
			break;
		case 108:
			uParam0->f_55 = 1406427/*func_4161*/;
			break;
		case 17:
			uParam0->f_17 = 1406382/*func_4160*/;
			break;
		case 19:
			uParam0->f_17 = 1406370/*func_4159*/;
			break;
		case 20:
			uParam0->f_3 = 1406323/*func_4158*/;
			break;
		case 21:
			uParam0->f_3 = 1406271/*func_4157*/;
			break;
		case 74:
			uParam0->f_53 = 1406215/*func_4156*/;
			break;
		case 22:
			uParam0->f_24 = 1406133/*func_4155*/;
			break;
		case 25:
			uParam0->f_23 = 1405166/*func_4150*/;
			break;
		case 30:
			uParam0->f_8 = 1404861/*func_4148*/;
			break;
		case 31:
			uParam0->f_39 = 1404829/*func_4147*/;
			break;
		case 33:
			uParam0->f_40 = 1404639/*func_4146*/;
			break;
		case 34:
			uParam0->f_41 = 1400636/*func_4143*/;
			break;
		case 36:
			uParam0->f_58 = 1400583/*func_4142*/;
			break;
		case 35:
			uParam0->f_42 = 1399392/*func_4140*/;
			break;
		case 45:
			uParam0->f_14 = 1399383/*func_4139*/;
			break;
		case 46:
			uParam0->f_14 = 1399374/*func_4138*/;
			break;
		case 110:
			uParam0->f_57 = 1399366/*func_4137*/;
			break;
		case 77:
			uParam0->f_13 = 1399355/*func_4136*/;
			break;
		case 47:
			uParam0->f_43 = 1399252/*func_4135*/;
			break;
		case 49:
			uParam0->f_8 = 1399227/*func_4134*/;
			break;
		case 50:
			*uParam0 = 1399189/*func_4133*/;
			break;
		case 51:
			*uParam0 = 1399180/*func_4132*/;
			break;
		case 52:
			uParam0->f_15 = 1399169/*func_4131*/;
			break;
		case 53:
			uParam0->f_13 = 1399088/*func_4130*/;
			break;
		case 54:
			uParam0->f_45 = 1399080/*func_4129*/;
			break;
		case 56:
			uParam0->f_46 = 1399071/*func_4128*/;
			break;
		case 57:
			uParam0->f_11 = 1399061/*func_4127*/;
			break;
		case 58:
			uParam0->f_13 = 1398854/*func_4126*/;
			break;
		case 64:
			uParam0->f_47 = 1398846/*func_4125*/;
			break;
		case 65:
			uParam0->f_21 = 1398838/*func_4124*/;
			break;
		case 66:
			uParam0->f_21 = 1398830/*func_4123*/;
			break;
		case 67:
			uParam0->f_21 = 1398822/*func_4122*/;
			break;
		case 68:
			*uParam0 = 1398813/*func_4121*/;
			break;
		case 69:
			*uParam0 = 1398804/*func_4120*/;
			break;
		case 70:
			uParam0->f_48 = 1398792/*func_4119*/;
			break;
		case 71:
			uParam0->f_49 = 1398783/*func_4118*/;
			break;
		case 107:
			uParam0->f_50 = 1398771/*func_4117*/;
			break;
		case 80:
			uParam0->f_7 = 1398762/*func_4116*/;
			break;
		case 73:
			uParam0->f_51 = 1398753/*func_4115*/;
			break;
		case 78:
			uParam0->f_59 = 1398745/*func_4114*/;
			break;
	}
}

void func_4150(int iParam0, int iParam1)//Position - 0x1570EE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_20__::func_487(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		__LIB_6__::func_439(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_20__::func_486(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_20__::func_486(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4151(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4151(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4151(int iParam0)//Position - 0x15736B
{
	__LIB_20__::func_486(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4178(var uParam0, int iParam1)//Position - 0x157942
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1484758/*func_4334*/;
			break;
		case 1:
			uParam0->f_30 = 1484702/*func_4333*/;
			break;
		case 2:
			uParam0->f_31 = 1483157/*func_4332*/;
			break;
		case 3:
			uParam0->f_34 = 1483108/*func_4331*/;
			break;
		case 4:
			uParam0->f_12 = 1483075/*func_4330*/;
			break;
		case 6:
			uParam0->f_32 = 1483011/*func_4329*/;
			break;
		case 111:
			uParam0->f_35 = 1482988/*func_4328*/;
			break;
		case 79:
			*uParam0 = 1482964/*func_4327*/;
			break;
		case 37:
			uParam0->f_18 = 1482844/*func_4326*/;
			break;
		case 38:
			uParam0->f_9 = 1482777/*func_4325*/;
			break;
		case 11:
			uParam0->f_11 = 1482768/*func_4324*/;
			break;
		case 12:
			uParam0->f_33 = 1482423/*func_4322*/;
			break;
		case 14:
			uParam0->f_11 = 1482414/*func_4321*/;
			break;
		case 109:
			uParam0->f_56 = 1482406/*func_4320*/;
			break;
		case 15:
			uParam0->f_2 = 1477082/*func_4298*/;
			break;
		case 13:
			uParam0->f_2 = 1477073/*func_4297*/;
			break;
		case 75:
			uParam0->f_4 = 1477064/*func_4296*/;
			break;
		case 16:
			uParam0->f_5 = 1477039/*func_4295*/;
			break;
		case 108:
			uParam0->f_55 = 1470494/*func_4280*/;
			break;
		case 17:
			uParam0->f_17 = 1469910/*func_4279*/;
			break;
		case 19:
			uParam0->f_17 = 1469883/*func_4278*/;
			break;
		case 20:
			uParam0->f_3 = 1469822/*func_4277*/;
			break;
		case 21:
			uParam0->f_3 = 1469702/*func_4276*/;
			break;
		case 74:
			uParam0->f_53 = 1469646/*func_4275*/;
			break;
		case 22:
			uParam0->f_24 = 1469564/*func_4274*/;
			break;
		case 25:
			uParam0->f_23 = 1468592/*func_4269*/;
			break;
		case 30:
			uParam0->f_8 = 1467852/*func_4268*/;
			break;
		case 31:
			uParam0->f_39 = 1467581/*func_4267*/;
			break;
		case 33:
			uParam0->f_40 = 1466645/*func_4264*/;
			break;
		case 34:
			uParam0->f_41 = 1463301/*func_4263*/;
			break;
		case 36:
			uParam0->f_58 = 1463248/*func_4262*/;
			break;
		case 35:
			uParam0->f_42 = 1462565/*func_4260*/;
			break;
		case 45:
			uParam0->f_14 = 1462556/*func_4259*/;
			break;
		case 46:
			uParam0->f_14 = 1462547/*func_4258*/;
			break;
		case 110:
			uParam0->f_57 = 1462104/*func_4257*/;
			break;
		case 77:
			uParam0->f_13 = 1462093/*func_4256*/;
			break;
		case 47:
			uParam0->f_43 = 1461990/*func_4255*/;
			break;
		case 49:
			uParam0->f_8 = 1461965/*func_4254*/;
			break;
		case 50:
			*uParam0 = 1461927/*func_4253*/;
			break;
		case 51:
			*uParam0 = 1461903/*func_4252*/;
			break;
		case 52:
			uParam0->f_15 = 1461892/*func_4251*/;
			break;
		case 53:
			uParam0->f_13 = 1461813/*func_4250*/;
			break;
		case 54:
			uParam0->f_45 = 1461805/*func_4249*/;
			break;
		case 56:
			uParam0->f_46 = 1461796/*func_4248*/;
			break;
		case 57:
			uParam0->f_11 = 1461786/*func_4247*/;
			break;
		case 58:
			uParam0->f_13 = 1461557/*func_4246*/;
			break;
		case 64:
			uParam0->f_47 = 1415468/*func_4215*/;
			break;
		case 65:
			uParam0->f_21 = 1414330/*func_4212*/;
			break;
		case 66:
			uParam0->f_21 = 1414107/*func_4210*/;
			break;
		case 67:
			uParam0->f_21 = 1413212/*func_4206*/;
			break;
		case 68:
			*uParam0 = 1412667/*func_4205*/;
			break;
		case 69:
			*uParam0 = 1412658/*func_4204*/;
			break;
		case 70:
			uParam0->f_48 = 1412646/*func_4203*/;
			break;
		case 71:
			uParam0->f_49 = 1412637/*func_4202*/;
			break;
		case 107:
			uParam0->f_50 = 1412625/*func_4201*/;
			break;
		case 80:
			uParam0->f_7 = 1410531/*func_4192*/;
			break;
		case 73:
			uParam0->f_51 = 1408762/*func_4184*/;
			break;
		case 78:
			uParam0->f_59 = 1408293/*func_4179*/;
			break;
	}
}

void func_4215(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x15992C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_8__::func_97();
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_3__::func_455())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_454(0);
			}
		}
		if (__LIB_3__::func_942(PLAYER::PLAYER_ID()))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("GtaMloRoom001") && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
				{
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_19__::func_151(uParam0);
		}
		if (__LIB_3__::func_317(PLAYER::PLAYER_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_506, 11))
			{
				if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1) || BitTest(Global_1946250.f_506, 11))
				{
					if (!__LIB_3__::func_432() && !__LIB_1__::func_251(Global_1853185))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_3__::func_316(0);
						Global_1946250.f_3630 = 0;
						__LIB_3__::func_453(0);
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_3__::func_444(iParam1);
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_3__::func_321(1);
						__LIB_3__::func_452(0);
						__LIB_3__::func_309(0);
					}
					else
					{
						__LIB_25__::func_310(iParam1);
					}
				}
			}
		}
		if (__LIB_3__::func_432() || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_22.f_94));
			}
		}
		if (Global_1853185 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				if (__LIB_1__::func_251(PLAYER::PLAYER_ID()))
				{
					if ((((__LIB_3__::func_449(PLAYER::PLAYER_ID()) || __LIB_3__::func_76(PLAYER::PLAYER_ID())) || __LIB_2__::func_746()) || __LIB_3__::func_455()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_317(PLAYER::PLAYER_ID()))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (__LIB_1__::func_264(bVar2, 1, 1))
					{
						if (__LIB_2__::func_427(bVar2))
						{
							if (__LIB_4__::func_2(bVar2) == 81)
							{
								if (__LIB_35__::func_633(iParam1) && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_3__::func_316(0);
									__LIB_3__::func_448(0);
									CAM::DO_SCREEN_FADE_IN(500);
									__LIB_3__::func_444(iParam1);
									__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
									{
										NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
									}
									__LIB_3__::func_321(1);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_3__::func_449(PLAYER::PLAYER_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else
			{
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if ((((__LIB_35__::func_633(iParam1) && !__LIB_3__::func_942(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_19__::func_58()) && !__LIB_1__::func_251(PLAYER::PLAYER_ID())) || !__LIB_4__::func_715())
	{
		if (!__LIB_0__::func_618())
		{
			__LIB_25__::func_201(uParam0, 1);
		}
	}
	if ((((BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 25)) && __LIB_37__::func_876(iParam1)) && !__LIB_1__::func_251(__LIB_19__::func_58())) || BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_3__::func_432() && !__LIB_1__::func_251(Global_1853185))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("am_mp_smpl_interior_int")) > 0)
			{
				__LIB_3__::func_945(0);
				__LIB_3__::func_321(1);
			}
			__LIB_7__::func_375(0, -1);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_3__::func_309(0);
			__LIB_3__::func_453(0);
			__LIB_3__::func_447(0);
			CAM::DO_SCREEN_FADE_IN(500);
			__LIB_3__::func_444(iParam1);
			__LIB_3__::func_448(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_452(0);
		}
		else
		{
			__LIB_25__::func_310(iParam1);
		}
	}
	if (__LIB_18__::func_638(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_37__::func_875(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !__LIB_35__::func_633(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_19__::func_58())
		{
			__LIB_25__::func_201(uParam0, 1);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_7__::func_297(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
		}
	}
	if (__LIB_3__::func_445())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_2__::func_731(PLAYER::PLAYER_ID()) || __LIB_3__::func_317(PLAYER::PLAYER_ID()))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

void func_4269(int iParam0, int iParam1)//Position - 0x1668B0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_19__::func_152(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_793(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_793(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_25__::func_491(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_491(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_237(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4270(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_237(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4270(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4270(int iParam0)//Position - 0x166B43
{
	__LIB_25__::func_491(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4280(var uParam0, var uParam1, var uParam2)//Position - 0x16701E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	var uVar4;
	*uParam2 = 1;
	if (__LIB_2__::func_746() || __LIB_3__::func_455())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_19__::func_58() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_8__::func_97();
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_201(uParam1, 1);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_201(uParam1, 1);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (__LIB_3__::func_87(PLAYER::PLAYER_ID()))
					{
						__LIB_7__::func_249(&(uParam1->f_22.f_94));
					}
					if (((((__LIB_18__::func_638(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && __LIB_37__::func_875(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !__LIB_35__::func_633(*uParam0)) || ((__LIB_3__::func_445() && !__LIB_35__::func_633(*uParam0)) && __LIB_1__::func_251(PLAYER::PLAYER_ID())))
					{
						if (MISC::IS_PC_VERSION())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
								{
									if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_2__::func_161("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
									}
								}
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scramjet")))
								{
									if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_2__::func_161("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
									}
								}
							}
						}
						__LIB_3__::func_345(1);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
						if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
									{
										bVar2 = false;
										if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar1))
										{
											if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
											{
												bVar2 = true;
												HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */, false);
											}
										}
										if (!bVar2)
										{
											HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */, false);
										}
									}
									else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */, false);
									}
								}
								return 0;
							}
							if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Mobile Operations Center. */, false);
									}
									else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_AIR" /* GXT: You cannot store this aircraft in your Mobile Operations Center. */, false);
									}
								}
								return 0;
							}
							if (__LIB_3__::func_416(PLAYER::PLAYER_ID()) && __LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MP_TRUCK_PEG" /* GXT: You cannot store a Pegasus vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()) && !__LIB_25__::func_382(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()) && (__LIB_3__::func_463(PLAYER::PLAYER_ID()) || __LIB_3__::func_462(PLAYER::PLAYER_ID())))
							{
								if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_VEHIN" /* GXT: You must remove the vehicle currently inside your Mobile Operations Center to modify this vehicle. */, false);
									}
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */;
							}
							else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */;
							}
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
							if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
							{
								__LIB_7__::func_316(&(uParam1->f_22.f_94), 5, sVar3, 0, 0, 0, 0);
								if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
								{
									__LIB_3__::func_312(0);
								}
							}
							if (__LIB_0__::func_77(0))
							{
								__LIB_7__::func_249(&(uParam1->f_22.f_94));
							}
							if ((__LIB_2__::func_187(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || BitTest(uParam1->f_22, 1))
							{
								__LIB_25__::func_201(uParam1, 0);
								if (!__LIB_3__::func_416(PLAYER::PLAYER_ID()) || __LIB_41__::func_317(uParam1, uParam0))
								{
									if (__LIB_19__::func_153(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										__LIB_7__::func_249(&(uParam1->f_22.f_94));
										if (BitTest(uParam1->f_22, 1))
										{
											MISC::CLEAR_BIT(&(uParam1->f_22), 1);
										}
										if (__LIB_7__::func_581(3, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 16);
										}
										else if (__LIB_7__::func_581(7, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 17);
										}
										if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
										{
											__LIB_3__::func_309(1);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f);
											VEHICLE::SET_VEHICLE_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1f);
											VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
										}
										if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
										{
											__LIB_4__::func_736(1, 0);
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
										}
										__LIB_7__::func_375(1, 81);
										__LIB_3__::func_310(1);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
							__LIB_8__::func_611(0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
							if (__LIB_4__::func_41() && __LIB_7__::func_560())
							{
								if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
								{
									__LIB_3__::func_453(1);
									__LIB_3__::func_447(1);
								}
								__LIB_7__::func_394(1);
								__LIB_8__::func_240(81, uParam1, 0, 0);
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
								if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
								{
									__LIB_3__::func_335(PLAYER::PLAYER_ID(), 81, 2);
								}
								else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
								{
									__LIB_4__::func_692(PLAYER::PLAYER_ID(), 81, 2);
								}
								__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
								__LIB_3__::func_345(0);
								return 1;
							}
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_201(uParam1, 1);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_201(uParam1, 1);
				}
			}
			else
			{
				__LIB_37__::func_878(*uParam0);
				if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					else if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 10000, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_3__::func_448(0);
							__LIB_3__::func_316(0);
							__LIB_3__::func_452(0);
							__LIB_0__::func_579(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_3__::func_942(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						__LIB_2__::func_452(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_3__::func_343(1);
						__LIB_7__::func_375(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::func_579(&(uParam1->f_22.f_101));
					}
					if (__LIB_4__::func_735(Global_1946250.f_3630) || __LIB_3__::func_942(Global_1946250.f_3630))
					{
						if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
						{
							__LIB_3__::func_309(1);
							__LIB_3__::func_453(1);
							__LIB_3__::func_447(1);
						}
						return 1;
					}
				}
				else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
				{
					if (__LIB_4__::func_2(Global_1946250.f_3630) != 81 && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_3__::func_448(0);
							__LIB_3__::func_316(0);
							__LIB_3__::func_452(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::func_579(&(uParam1->f_22.f_101));
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_201(uParam1, 1);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_7__::func_249(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4335(var uParam0, int iParam1)//Position - 0x16A7DF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1520769/*func_4508*/;
			break;
		case 1:
			uParam0->f_30 = 1520653/*func_4507*/;
			break;
		case 2:
			uParam0->f_31 = 1519423/*func_4504*/;
			break;
		case 3:
			uParam0->f_34 = 1519353/*func_4503*/;
			break;
		case 4:
			uParam0->f_12 = 1519180/*func_4502*/;
			break;
		case 6:
			uParam0->f_32 = 1519056/*func_4501*/;
			break;
		case 106:
			uParam0->f_52 = 1518833/*func_4499*/;
			break;
		case 111:
			uParam0->f_35 = 1518819/*func_4498*/;
			break;
		case 79:
			*uParam0 = 1518795/*func_4497*/;
			break;
		case 37:
			uParam0->f_18 = 1518675/*func_4496*/;
			break;
		case 38:
			uParam0->f_9 = 1518437/*func_4493*/;
			break;
		case 11:
			uParam0->f_11 = 1518428/*func_4492*/;
			break;
		case 12:
			uParam0->f_33 = 1516724/*func_4490*/;
			break;
		case 14:
			uParam0->f_11 = 1516715/*func_4489*/;
			break;
		case 109:
			uParam0->f_56 = 1516707/*func_4488*/;
			break;
		case 15:
			uParam0->f_2 = 1516201/*func_4484*/;
			break;
		case 13:
			uParam0->f_2 = 1516162/*func_4483*/;
			break;
		case 44:
			*uParam0 = 1516153/*func_4482*/;
			break;
		case 75:
			uParam0->f_4 = 1516144/*func_4481*/;
			break;
		case 16:
			uParam0->f_5 = 1515676/*func_4476*/;
			break;
		case 108:
			uParam0->f_55 = 1513637/*func_4472*/;
			break;
		case 17:
			uParam0->f_17 = 1511501/*func_4464*/;
			break;
		case 19:
			uParam0->f_17 = 1511474/*func_4463*/;
			break;
		case 20:
			uParam0->f_3 = 1511390/*func_4462*/;
			break;
		case 21:
			uParam0->f_3 = 1511290/*func_4461*/;
			break;
		case 74:
			uParam0->f_53 = 1511123/*func_4460*/;
			break;
		case 22:
			uParam0->f_24 = 1511020/*func_4459*/;
			break;
		case 25:
			uParam0->f_23 = 1510368/*func_4457*/;
			break;
		case 30:
			uParam0->f_8 = 1509868/*func_4454*/;
			break;
		case 31:
			uParam0->f_39 = 1509573/*func_4453*/;
			break;
		case 33:
			uParam0->f_40 = 1508575/*func_4449*/;
			break;
		case 32:
			*uParam0 = 1508471/*func_4448*/;
			break;
		case 34:
			uParam0->f_41 = 1506325/*func_4447*/;
			break;
		case 35:
			uParam0->f_42 = 1420677/*func_4237*/;
			break;
		case 36:
			uParam0->f_58 = 1506265/*func_4446*/;
			break;
		case 45:
			uParam0->f_14 = 1506256/*func_4445*/;
			break;
		case 46:
			uParam0->f_14 = 1506247/*func_4444*/;
			break;
		case 110:
			uParam0->f_57 = 1505981/*func_4443*/;
			break;
		case 77:
			uParam0->f_13 = 1505970/*func_4442*/;
			break;
		case 47:
			uParam0->f_43 = 1505830/*func_4441*/;
			break;
		case 49:
			uParam0->f_8 = 1505789/*func_4440*/;
			break;
		case 50:
			*uParam0 = 1505592/*func_4437*/;
			break;
		case 51:
			*uParam0 = 1505508/*func_4436*/;
			break;
		case 52:
			uParam0->f_15 = 1505497/*func_4435*/;
			break;
		case 53:
			uParam0->f_13 = 1505215/*func_4434*/;
			break;
		case 54:
			uParam0->f_45 = 1505207/*func_4433*/;
			break;
		case 56:
			uParam0->f_46 = 1505198/*func_4432*/;
			break;
		case 57:
			uParam0->f_11 = 1505137/*func_4431*/;
			break;
		case 58:
			uParam0->f_13 = 1504855/*func_4430*/;
			break;
		case 64:
			uParam0->f_47 = 1502940/*func_4421*/;
			break;
		case 65:
			uParam0->f_21 = 1502897/*func_4420*/;
			break;
		case 66:
			uParam0->f_21 = 1502194/*func_4417*/;
			break;
		case 67:
			uParam0->f_21 = 1501110/*func_4409*/;
			break;
		case 68:
			*uParam0 = 1500519/*func_4407*/;
			break;
		case 69:
			*uParam0 = 1500510/*func_4406*/;
			break;
		case 70:
			uParam0->f_48 = 1500498/*func_4405*/;
			break;
		case 71:
			uParam0->f_49 = 1500489/*func_4404*/;
			break;
		case 107:
			uParam0->f_50 = 1500477/*func_4403*/;
			break;
		case 80:
			uParam0->f_7 = 1497803/*func_4391*/;
			break;
		case 84:
			uParam0->f_1 = 1495957/*func_4380*/;
			break;
		case 85:
			uParam0->f_1 = 1493623/*func_4374*/;
			break;
		case 87:
			uParam0->f_1 = 1489363/*func_4353*/;
			break;
		case 88:
			uParam0->f_1 = 1489354/*func_4352*/;
			break;
		case 90:
			uParam0->f_1 = 1489311/*func_4351*/;
			break;
		case 91:
			uParam0->f_1 = 1489010/*func_4349*/;
			break;
		case 92:
			uParam0->f_1 = 1488247/*func_4347*/;
			break;
		case 94:
			uParam0->f_1 = 1486749/*func_4346*/;
			break;
		case 102:
			uParam0->f_1 = 1486179/*func_4340*/;
			break;
		case 103:
			uParam0->f_22 = 1486171/*func_4339*/;
			break;
		case 104:
			uParam0->f_1 = 1486096/*func_4338*/;
			break;
		case 78:
			uParam0->f_59 = 1486022/*func_4337*/;
			break;
		case 125:
			uParam0->f_19 = 1485998/*func_4336*/;
			break;
	}
}

int func_4347(var uParam0, var uParam1)//Position - 0x16B577
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_663(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_2__::func_818(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4380(int iParam0, var uParam1)//Position - 0x16D395
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_3__::func_478(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_399() == 1)
		{
			__LIB_7__::func_394(0);
		}
	}
	switch (__LIB_2__::func_399())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1610(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_7__::func_673(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_663(&iVar2, &(uParam1->f_109), 14);
								func_580(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_663(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_663(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_663(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_580(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_7__::func_673(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_7__::func_673(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_7__::func_676(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_706(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_2__::func_399() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1610(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_3__::func_493(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_7__::func_587(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_3__::func_491(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4457(int iParam0, int iParam1)//Position - 0x170BE0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_7__::func_680(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_3__::func_84(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_793(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_793(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4458(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4458(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4458(int iParam0)//Position - 0x170E3E
{
	__LIB_25__::func_444(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4509(var uParam0, int iParam1)//Position - 0x17348A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1562916/*func_4584*/;
			break;
		case 1:
			uParam0->f_30 = 1560597/*func_4579*/;
			break;
		case 2:
			uParam0->f_31 = 1560534/*func_4577*/;
			break;
		case 3:
			uParam0->f_34 = 1560478/*func_4576*/;
			break;
		case 4:
			uParam0->f_12 = 1559762/*func_4575*/;
			break;
		case 6:
			uParam0->f_32 = 1559754/*func_4574*/;
			break;
		case 111:
			uParam0->f_35 = 1559745/*func_4573*/;
			break;
		case 79:
			*uParam0 = 1559721/*func_4572*/;
			break;
		case 11:
			uParam0->f_11 = 1559712/*func_4571*/;
			break;
		case 12:
			uParam0->f_33 = 1557884/*func_4568*/;
			break;
		case 14:
			uParam0->f_11 = 1557875/*func_4567*/;
			break;
		case 109:
			uParam0->f_56 = 1557867/*func_4566*/;
			break;
		case 13:
			uParam0->f_2 = 1557858/*func_4565*/;
			break;
		case 15:
			uParam0->f_2 = 1557849/*func_4564*/;
			break;
		case 75:
			uParam0->f_4 = 1557840/*func_4563*/;
			break;
		case 16:
			uParam0->f_5 = 1557831/*func_4562*/;
			break;
		case 108:
			uParam0->f_55 = 1557822/*func_4561*/;
			break;
		case 17:
			uParam0->f_17 = 1557796/*func_4560*/;
			break;
		case 19:
			uParam0->f_17 = 1557784/*func_4559*/;
			break;
		case 20:
			uParam0->f_3 = 1557775/*func_4558*/;
			break;
		case 21:
			uParam0->f_3 = 1557766/*func_4557*/;
			break;
		case 74:
			uParam0->f_53 = 1557757/*func_4556*/;
			break;
		case 22:
			uParam0->f_24 = 1557749/*func_4555*/;
			break;
		case 25:
			uParam0->f_23 = 1557741/*func_4554*/;
			break;
		case 30:
			uParam0->f_8 = 1556580/*func_4552*/;
			break;
		case 31:
			uParam0->f_39 = 1556568/*func_4551*/;
			break;
		case 33:
			uParam0->f_40 = 1556540/*func_4550*/;
			break;
		case 34:
			uParam0->f_41 = 1556531/*func_4549*/;
			break;
		case 36:
			uParam0->f_58 = 1556486/*func_4548*/;
			break;
		case 35:
			uParam0->f_42 = 1522624/*func_4545*/;
			break;
		case 45:
			uParam0->f_14 = 1522615/*func_4544*/;
			break;
		case 46:
			uParam0->f_14 = 1522606/*func_4543*/;
			break;
		case 110:
			uParam0->f_57 = 1522598/*func_4542*/;
			break;
		case 77:
			uParam0->f_13 = 1522587/*func_4541*/;
			break;
		case 47:
			uParam0->f_43 = 1522579/*func_4540*/;
			break;
		case 49:
			uParam0->f_8 = 1522570/*func_4539*/;
			break;
		case 50:
			*uParam0 = 1522288/*func_4533*/;
			break;
		case 51:
			*uParam0 = 1522259/*func_4532*/;
			break;
		case 52:
			uParam0->f_15 = 1522228/*func_4531*/;
			break;
		case 53:
			uParam0->f_13 = 1522194/*func_4530*/;
			break;
		case 54:
			uParam0->f_45 = 1522150/*func_4529*/;
			break;
		case 56:
			uParam0->f_46 = 1522121/*func_4528*/;
			break;
		case 57:
			uParam0->f_11 = 1522112/*func_4527*/;
			break;
		case 58:
			uParam0->f_13 = 1522055/*func_4525*/;
			break;
		case 64:
			uParam0->f_47 = 1522047/*func_4524*/;
			break;
		case 65:
			uParam0->f_21 = 1522039/*func_4523*/;
			break;
		case 66:
			uParam0->f_21 = 1522031/*func_4522*/;
			break;
		case 67:
			uParam0->f_21 = 1522023/*func_4521*/;
			break;
		case 68:
			*uParam0 = 1521997/*func_4520*/;
			break;
		case 69:
			*uParam0 = 1521971/*func_4519*/;
			break;
		case 70:
			uParam0->f_48 = 1521959/*func_4518*/;
			break;
		case 71:
			uParam0->f_49 = 1521950/*func_4517*/;
			break;
		case 107:
			uParam0->f_50 = 1521938/*func_4516*/;
			break;
		case 80:
			uParam0->f_7 = 1521929/*func_4515*/;
			break;
		case 78:
			uParam0->f_59 = 1521921/*func_4514*/;
			break;
		case 126:
			*uParam0 = 1521738/*func_4510*/;
			break;
	}
}

void func_4586(var uParam0, int iParam1)//Position - 0x17DE15
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1606920/*func_4662*/;
			break;
		case 1:
			uParam0->f_30 = 1606610/*func_4661*/;
			break;
		case 2:
			uParam0->f_31 = 1601673/*func_4655*/;
			break;
		case 3:
			uParam0->f_34 = 1601644/*func_4654*/;
			break;
		case 4:
			uParam0->f_12 = 1601450/*func_4653*/;
			break;
		case 6:
			uParam0->f_32 = 1601100/*func_4652*/;
			break;
		case 111:
			uParam0->f_35 = 1600958/*func_4650*/;
			break;
		case 79:
			*uParam0 = 1600934/*func_4649*/;
			break;
		case 37:
			uParam0->f_18 = 1600396/*func_4647*/;
			break;
		case 38:
			uParam0->f_9 = 1600291/*func_4646*/;
			break;
		case 11:
			uParam0->f_11 = 1600282/*func_4645*/;
			break;
		case 12:
			uParam0->f_33 = 1600177/*func_4643*/;
			break;
		case 14:
			uParam0->f_11 = 1600168/*func_4642*/;
			break;
		case 109:
			uParam0->f_56 = 1600160/*func_4641*/;
			break;
		case 13:
			uParam0->f_2 = 1600151/*func_4640*/;
			break;
		case 44:
			*uParam0 = 1600142/*func_4639*/;
			break;
		case 15:
			uParam0->f_2 = 1599853/*func_4638*/;
			break;
		case 75:
			uParam0->f_4 = 1599844/*func_4637*/;
			break;
		case 16:
			uParam0->f_5 = 1599760/*func_4636*/;
			break;
		case 108:
			uParam0->f_55 = 1599751/*func_4635*/;
			break;
		case 17:
			uParam0->f_17 = 1599130/*func_4633*/;
			break;
		case 19:
			uParam0->f_17 = 1598929/*func_4632*/;
			break;
		case 20:
			uParam0->f_3 = 1598865/*func_4631*/;
			break;
		case 21:
			uParam0->f_3 = 1598805/*func_4630*/;
			break;
		case 74:
			uParam0->f_53 = 1598796/*func_4629*/;
			break;
		case 22:
			uParam0->f_24 = 1598555/*func_4628*/;
			break;
		case 25:
			uParam0->f_23 = 1598182/*func_4625*/;
			break;
		case 30:
			uParam0->f_8 = 1598044/*func_4624*/;
			break;
		case 31:
			uParam0->f_39 = 1597602/*func_4622*/;
			break;
		case 33:
			uParam0->f_40 = 1596937/*func_4617*/;
			break;
		case 34:
			uParam0->f_41 = 1594359/*func_4616*/;
			break;
		case 36:
			uParam0->f_58 = 1594314/*func_4615*/;
			break;
		case 35:
			uParam0->f_42 = 1568332/*func_4614*/;
			break;
		case 45:
			uParam0->f_14 = 1568104/*func_4613*/;
			break;
		case 46:
			uParam0->f_14 = 1567928/*func_4612*/;
			break;
		case 110:
			uParam0->f_57 = 1567920/*func_4611*/;
			break;
		case 77:
			uParam0->f_13 = 1567909/*func_4610*/;
			break;
		case 47:
			uParam0->f_43 = 1567667/*func_4609*/;
			break;
		case 49:
			uParam0->f_8 = 1567635/*func_4608*/;
			break;
		case 50:
			*uParam0 = 1567569/*func_4607*/;
			break;
		case 51:
			*uParam0 = 1567545/*func_4606*/;
			break;
		case 52:
			uParam0->f_15 = 1567362/*func_4605*/;
			break;
		case 53:
			uParam0->f_13 = 1566767/*func_4603*/;
			break;
		case 54:
			uParam0->f_45 = 1566530/*func_4602*/;
			break;
		case 56:
			uParam0->f_46 = 1566521/*func_4601*/;
			break;
		case 57:
			uParam0->f_11 = 1566456/*func_4600*/;
			break;
		case 58:
			uParam0->f_13 = 1566034/*func_4599*/;
			break;
		case 64:
			uParam0->f_47 = 1566026/*func_4598*/;
			break;
		case 65:
			uParam0->f_21 = 1566018/*func_4597*/;
			break;
		case 66:
			uParam0->f_21 = 1565958/*func_4596*/;
			break;
		case 67:
			uParam0->f_21 = 1565940/*func_4595*/;
			break;
		case 68:
			*uParam0 = 1565931/*func_4594*/;
			break;
		case 69:
			*uParam0 = 1565922/*func_4593*/;
			break;
		case 70:
			uParam0->f_48 = 1565418/*func_4592*/;
			break;
		case 71:
			uParam0->f_49 = 1565270/*func_4591*/;
			break;
		case 107:
			uParam0->f_50 = 1565225/*func_4590*/;
			break;
		case 80:
			uParam0->f_7 = 1565216/*func_4589*/;
			break;
		case 78:
			uParam0->f_59 = 1565208/*func_4588*/;
			break;
		case 125:
			uParam0->f_19 = 1565192/*func_4587*/;
			break;
	}
}

void func_4625(int iParam0, int iParam1)//Position - 0x1862E6
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_359(PLAYER::PLAYER_ID()) && __LIB_7__::func_959(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_553(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_7__::func_684())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_793(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_4663(var uParam0, int iParam1)//Position - 0x188511
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1641857/*func_4792*/;
			break;
		case 1:
			uParam0->f_30 = 1641748/*func_4791*/;
			break;
		case 2:
			uParam0->f_31 = 1639294/*func_4786*/;
			break;
		case 3:
			uParam0->f_34 = 1639265/*func_4785*/;
			break;
		case 4:
			uParam0->f_12 = 1639105/*func_4784*/;
			break;
		case 6:
			uParam0->f_32 = 1638987/*func_4783*/;
			break;
		case 111:
			uParam0->f_35 = 1638770/*func_4780*/;
			break;
		case 79:
			*uParam0 = 1638746/*func_4779*/;
			break;
		case 37:
			uParam0->f_18 = 1638626/*func_4778*/;
			break;
		case 38:
			uParam0->f_9 = 1638475/*func_4775*/;
			break;
		case 11:
			uParam0->f_11 = 1638466/*func_4774*/;
			break;
		case 12:
			uParam0->f_33 = 1637461/*func_4771*/;
			break;
		case 14:
			uParam0->f_11 = 1637452/*func_4770*/;
			break;
		case 109:
			uParam0->f_56 = 1637444/*func_4769*/;
			break;
		case 13:
			uParam0->f_2 = 1637435/*func_4768*/;
			break;
		case 15:
			uParam0->f_2 = 1637281/*func_4767*/;
			break;
		case 75:
			uParam0->f_4 = 1637272/*func_4766*/;
			break;
		case 16:
			uParam0->f_5 = 1637184/*func_4765*/;
			break;
		case 108:
			uParam0->f_55 = 1636397/*func_4759*/;
			break;
		case 17:
			uParam0->f_17 = 1635768/*func_4755*/;
			break;
		case 19:
			uParam0->f_17 = 1635741/*func_4754*/;
			break;
		case 20:
			uParam0->f_3 = 1635702/*func_4753*/;
			break;
		case 21:
			uParam0->f_3 = 1635642/*func_4752*/;
			break;
		case 74:
			uParam0->f_53 = 1635633/*func_4751*/;
			break;
		case 22:
			uParam0->f_24 = 1635580/*func_4750*/;
			break;
		case 25:
			uParam0->f_23 = 1635276/*func_4749*/;
			break;
		case 30:
			uParam0->f_8 = 1635153/*func_4748*/;
			break;
		case 31:
			uParam0->f_39 = 1634932/*func_4747*/;
			break;
		case 33:
			uParam0->f_40 = 1634647/*func_4746*/;
			break;
		case 34:
			uParam0->f_41 = 1634241/*func_4745*/;
			break;
		case 36:
			uParam0->f_58 = 1634196/*func_4744*/;
			break;
		case 35:
			uParam0->f_42 = 1616634/*func_4743*/;
			break;
		case 45:
			uParam0->f_14 = 1616625/*func_4742*/;
			break;
		case 46:
			uParam0->f_14 = 1616541/*func_4741*/;
			break;
		case 110:
			uParam0->f_57 = 1616533/*func_4740*/;
			break;
		case 77:
			uParam0->f_13 = 1616510/*func_4739*/;
			break;
		case 47:
			uParam0->f_43 = 1616458/*func_4738*/;
			break;
		case 49:
			uParam0->f_8 = 1616426/*func_4737*/;
			break;
		case 50:
			*uParam0 = 1616248/*func_4736*/;
			break;
		case 51:
			*uParam0 = 1616151/*func_4735*/;
			break;
		case 52:
			uParam0->f_15 = 1616140/*func_4734*/;
			break;
		case 53:
			uParam0->f_13 = 1615825/*func_4732*/;
			break;
		case 54:
			uParam0->f_45 = 1614960/*func_4725*/;
			break;
		case 56:
			uParam0->f_46 = 1614951/*func_4724*/;
			break;
		case 57:
			uParam0->f_11 = 1610179/*func_4688*/;
			break;
		case 58:
			uParam0->f_13 = 1610165/*func_4687*/;
			break;
		case 64:
			uParam0->f_47 = 1608762/*func_4675*/;
			break;
		case 65:
			uParam0->f_21 = 1608754/*func_4674*/;
			break;
		case 66:
			uParam0->f_21 = 1608703/*func_4673*/;
			break;
		case 67:
			uParam0->f_21 = 1608675/*func_4672*/;
			break;
		case 68:
			*uParam0 = 1608666/*func_4671*/;
			break;
		case 69:
			*uParam0 = 1608657/*func_4670*/;
			break;
		case 70:
			uParam0->f_48 = 1608373/*func_4669*/;
			break;
		case 71:
			uParam0->f_49 = 1608277/*func_4668*/;
			break;
		case 107:
			uParam0->f_50 = 1608265/*func_4667*/;
			break;
		case 80:
			uParam0->f_7 = 1608079/*func_4666*/;
			break;
		case 78:
			uParam0->f_59 = 1607907/*func_4664*/;
			break;
	}
}

void func_4749(int iParam0, int iParam1)//Position - 0x18F3CC
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_2__::func_192(PLAYER::PLAYER_ID()) && __LIB_4__::func_51(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_600(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_7__::func_684())
		{
			bVar2 = __LIB_2__::func_377(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_160() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_264(bVar2, 1, 1)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_2__::func_509(bVar2, 14)) && !func_793(bVar2))
			{
				Var1 = { __LIB_1__::func_265(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_807(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		if (__LIB_2__::func_444(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_18__::func_658(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
	}
}

void func_4793(var uParam0, int iParam1)//Position - 0x190D8A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1669648/*func_4865*/;
			break;
		case 1:
			uParam0->f_30 = 1669502/*func_4864*/;
			break;
		case 2:
			uParam0->f_31 = 1664314/*func_4858*/;
			break;
		case 3:
			uParam0->f_34 = 1664285/*func_4857*/;
			break;
		case 4:
			uParam0->f_12 = 1663874/*func_4855*/;
			break;
		case 6:
			uParam0->f_32 = 1663704/*func_4854*/;
			break;
		case 111:
			uParam0->f_35 = 1663309/*func_4851*/;
			break;
		case 79:
			*uParam0 = 1663285/*func_4850*/;
			break;
		case 11:
			uParam0->f_11 = 1663276/*func_4849*/;
			break;
		case 12:
			uParam0->f_33 = 1663181/*func_4847*/;
			break;
		case 14:
			uParam0->f_11 = 1663172/*func_4846*/;
			break;
		case 109:
			uParam0->f_56 = 1663164/*func_4845*/;
			break;
		case 13:
			uParam0->f_2 = 1663155/*func_4844*/;
			break;
		case 15:
			uParam0->f_2 = 1662870/*func_4841*/;
			break;
		case 75:
			uParam0->f_4 = 1662861/*func_4840*/;
			break;
		case 16:
			uParam0->f_5 = 1662773/*func_4839*/;
			break;
		case 108:
			uParam0->f_55 = 1662764/*func_4838*/;
			break;
		case 17:
			uParam0->f_17 = 1662510/*func_4837*/;
			break;
		case 19:
			uParam0->f_17 = 1662483/*func_4836*/;
			break;
		case 20:
			uParam0->f_3 = 1662474/*func_4835*/;
			break;
		case 21:
			uParam0->f_3 = 1662465/*func_4834*/;
			break;
		case 74:
			uParam0->f_53 = 1662456/*func_4833*/;
			break;
		case 22:
			uParam0->f_24 = 1662448/*func_4832*/;
			break;
		case 25:
			uParam0->f_23 = 1662440/*func_4831*/;
			break;
		case 30:
			uParam0->f_8 = 1662317/*func_4830*/;
			break;
		case 31:
			uParam0->f_39 = 1662070/*func_4829*/;
			break;
		case 33:
			uParam0->f_40 = 1661814/*func_4828*/;
			break;
		case 34:
			uParam0->f_41 = 1659661/*func_4826*/;
			break;
		case 36:
			uParam0->f_58 = 1659616/*func_4825*/;
			break;
		case 35:
			uParam0->f_42 = 1645168/*func_4824*/;
			break;
		case 45:
			uParam0->f_14 = 1645159/*func_4823*/;
			break;
		case 46:
			uParam0->f_14 = 1645150/*func_4822*/;
			break;
		case 110:
			uParam0->f_57 = 1645142/*func_4821*/;
			break;
		case 77:
			uParam0->f_13 = 1645131/*func_4820*/;
			break;
		case 47:
			uParam0->f_43 = 1645079/*func_4819*/;
			break;
		case 49:
			uParam0->f_8 = 1645047/*func_4818*/;
			break;
		case 50:
			*uParam0 = 1644918/*func_4817*/;
			break;
		case 51:
			*uParam0 = 1644894/*func_4816*/;
			break;
		case 52:
			uParam0->f_15 = 1644883/*func_4815*/;
			break;
		case 53:
			uParam0->f_13 = 1644232/*func_4813*/;
			break;
		case 54:
			uParam0->f_45 = 1643596/*func_4809*/;
			break;
		case 56:
			uParam0->f_46 = 1643587/*func_4808*/;
			break;
		case 57:
			uParam0->f_11 = 1643520/*func_4807*/;
			break;
		case 58:
			uParam0->f_13 = 1643506/*func_4806*/;
			break;
		case 64:
			uParam0->f_47 = 1643127/*func_4805*/;
			break;
		case 65:
			uParam0->f_21 = 1643052/*func_4803*/;
			break;
		case 66:
			uParam0->f_21 = 1643001/*func_4802*/;
			break;
		case 67:
			uParam0->f_21 = 1642983/*func_4801*/;
			break;
		case 68:
			*uParam0 = 1642974/*func_4800*/;
			break;
		case 69:
			*uParam0 = 1642965/*func_4799*/;
			break;
		case 70:
			uParam0->f_48 = 1642848/*func_4798*/;
			break;
		case 71:
			uParam0->f_49 = 1642839/*func_4797*/;
			break;
		case 107:
			uParam0->f_50 = 1642827/*func_4796*/;
			break;
		case 80:
			uParam0->f_7 = 1642818/*func_4795*/;
			break;
		case 78:
			uParam0->f_59 = 1642810/*func_4794*/;
			break;
	}
}

void func_4866(var uParam0, int iParam1)//Position - 0x197A19
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1670115/*func_4873*/;
			break;
		case 97:
			uParam0->f_1 = 1670106/*func_4872*/;
			break;
		case 98:
			uParam0->f_1 = 1670097/*func_4871*/;
			break;
		case 99:
			uParam0->f_1 = 1669937/*func_4870*/;
			break;
		case 100:
			uParam0->f_22 = 1669929/*func_4869*/;
			break;
		case 101:
			uParam0->f_22 = 1669774/*func_4867*/;
			break;
	}
}

void func_4874(var uParam0, int iParam1)//Position - 0x197BEC
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1670332/*func_4879*/;
			break;
		case 91:
			uParam0->f_1 = 1670323/*func_4878*/;
			break;
		case 92:
			uParam0->f_1 = 1670314/*func_4877*/;
			break;
		case 93:
			uParam0->f_1 = 1669937/*func_4870*/;
			break;
		case 94:
			uParam0->f_1 = 1670305/*func_4876*/;
			break;
		case 95:
			uParam0->f_22 = 1670241/*func_4875*/;
			break;
	}
}

void func_4880(var uParam0, int iParam1)//Position - 0x197CC5
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1670559/*func_4884*/;
			break;
		case 85:
			uParam0->f_1 = 1670550/*func_4883*/;
			break;
		case 86:
			uParam0->f_1 = 1669937/*func_4870*/;
			break;
		case 87:
			uParam0->f_1 = 1670541/*func_4882*/;
			break;
		case 89:
			uParam0->f_54 = 1670441/*func_4881*/;
			break;
	}
}

bool func_4890(int* iParam0)//Position - 0x197F58
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_160() || !__LIB_2__::func_437(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)) || __LIB_2__::func_405(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_715))
	{
		if (__LIB_0__::func_584(joaat("sm_prop_smug_wall_radio_01")))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
			{
				iVar0 = __LIB_3__::func_977(PLAYER::PLAYER_ID());
				Var1 = { func_4891(7.44543f, -9.89069f, 4.918f, iVar0) };
				fVar2 = func_468(270f, iVar0);
				iParam0->f_715 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("sm_prop_smug_wall_radio_01"), Var1, false, true, false);
				ENTITY::SET_ENTITY_ROTATION(iParam0->f_715, 0f, 0f, fVar2, 2, true);
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(iParam0->f_715);
}

Vector3 func_4891(struct<3> Param0, int iParam1)//Position - 0x198027
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_469(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

int func_4902(int* iParam0, int* iParam1, var uParam2)//Position - 0x19849A
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_957(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { 1564.025f, 385.89822f, -54.286575f };
		iParam1->f_720[0 /*6*/].f_3 = { 1562.7042f, 385.92056f, -52.289154f };
		iParam1->f_751[0 /*6*/] = { 1563.636f, 385.864f, -53.2888f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 180f };
		return 1;
	}
	if (__LIB_3__::func_996(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -1355.7406f, 150.00829f, -100.19437f };
		iParam1->f_720[0 /*6*/].f_3 = { -1355.7299f, 151.19484f, -98.19437f };
		iParam1->f_751[0 /*6*/] = { -1355.925f, 150.166f, -99.157f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 90f };
		return 1;
	}
	if (__LIB_8__::func_204(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -2168.3699f, 1110.7686f, -25.370466f };
		iParam1->f_720[0 /*6*/].f_3 = { -2168.3682f, 1111.3265f, -23.370487f };
		iParam1->f_751[0 /*6*/] = { -2168.397f, 1111.525f, -24.35f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -90f };
		return 1;
	}
	if (__LIB_2__::func_344(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -32.76309f, -1100.4547f, 25.540852f };
		iParam1->f_720[0 /*6*/].f_3 = { -33.93603f, -1100.0398f, 27.672344f };
		iParam1->f_751[0 /*6*/] = { (-33.137f + 0.1695f), (-1100.455f + 0.4929f), 26.459f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -110f };
		return 1;
	}
	if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_3__::func_977(PLAYER::PLAYER_ID());
		iParam1->f_720[0 /*6*/] = { func_4891(6.91971f, -9.33882f, 3.8003f, iVar0) };
		iParam1->f_720[0 /*6*/].f_3 = { func_4891(6.92308f, -10.4297f, 5.8003f, iVar0) };
		iParam1->f_751[0 /*6*/] = { func_4891(7.15299f, -9.45153f, 4.825f, iVar0) };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, func_468(265.40198f, iVar0) };
		iParam1->f_720[1 /*6*/] = { func_4891(-11.4769f, 11.5415f, 8.67532f, iVar0) };
		iParam1->f_720[1 /*6*/].f_3 = { func_4891(-10.3667f, 11.5237f, 10.6f, iVar0) };
		iParam1->f_751[1 /*6*/] = { func_4891(-11.5705f, 12.0834f, 9.637f, iVar0) };
		iParam1->f_751[1 /*6*/].f_3 = { 0f, 0f, func_468(358.4f, iVar0) };
		iParam1->f_720[2 /*6*/] = { func_4891(7.80937f, -0.0539093f, 8.84151f, iVar0) };
		iParam1->f_720[2 /*6*/].f_3 = { func_4891(8.7156f, -0.0429809f, 10.8415f, iVar0) };
		iParam1->f_751[2 /*6*/] = { func_4891(7.81505f, 0.635223f, 9.637f, iVar0) };
		iParam1->f_751[2 /*6*/].f_3 = { 0f, 0f, func_468(353.36f, iVar0) };
		return 1;
	}
	if (iParam1->f_803)
	{
		iParam1->f_720[0 /*6*/] = { 975.5175f, 68.74093f, 115.164154f };
		iParam1->f_720[0 /*6*/].f_3 = { 974.67676f, 69.27211f, 117.164154f };
		iParam1->f_751[0 /*6*/] = { 975.5f, 68.72f, 116.1848f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 148.5f };
		return 1;
	}
	if (iParam1->f_804)
	{
		iParam1->f_720[0 /*6*/] = { 947.8148f, 5.245894f, 115.164215f };
		iParam1->f_720[0 /*6*/].f_3 = { 948.9196f, 4.532114f, 117.164215f };
		iParam1->f_751[0 /*6*/] = { 948.303f, 5.233f, 116.1848f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -32f };
		return 1;
	}
	if (__LIB_7__::func_916(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -1237.8107f, -3008.2222f, -43.88727f };
		iParam1->f_720[0 /*6*/].f_3 = { -1237.7975f, -3009.318f, -42.13727f };
		iParam1->f_751[0 /*6*/] = { -1237.647f, -3008.303f, -42.875f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -88.92f };
		if (__LIB_8__::func_540(iParam1->f_711))
		{
			iParam1->f_720[1 /*6*/] = { -1236.2931f, -2982.6838f, -42.26361f };
			iParam1->f_720[1 /*6*/].f_3 = { -1236.3151f, -2981.6462f, -39.76361f };
			iParam1->f_751[1 /*6*/] = { -1236.553f, -2982.447f, -41.25f };
			iParam1->f_751[1 /*6*/].f_3 = { 0f, 0f, 83.16f };
		}
		return 1;
	}
	if ((((((((!__LIB_4__::func_710(uParam2->f_31) && !__LIB_4__::func_711(uParam2->f_31, -1)) && !__LIB_4__::func_712(uParam2->f_31)) && !iParam1->f_794) && !__LIB_1__::func_188(uParam2->f_31)) && !__LIB_8__::func_205(PLAYER::PLAYER_ID())) && !__LIB_6__::func_448(PLAYER::PLAYER_ID())) && !__LIB_6__::func_447(PLAYER::PLAYER_ID())) && !__LIB_4__::func_958(PLAYER::PLAYER_ID()))
	{
		switch (uParam2->f_33)
		{
			case 10:
				if (!BitTest(*iParam0, 0))
				{
					if (__LIB_4__::func_713(uParam2->f_31))
					{
						__LIB_19__::func_83(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), 61, 0);
						__LIB_19__::func_83(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), 61, 0);
						iParam1->f_782 = "anim@mp_radio@high_life_apment";
					}
					else
					{
						__LIB_19__::func_83(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), -1, 0);
						__LIB_19__::func_83(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), -1, 0);
					}
					if (__LIB_4__::func_713(uParam2->f_31))
					{
						__LIB_19__::func_83(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), 61, 0);
					}
					else
					{
						__LIB_19__::func_83(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), -1, 0);
					}
				}
				break;
			case 20:
				__LIB_19__::func_83(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 1);
				break;
		}
	}
	else if (__LIB_4__::func_711(uParam2->f_31, -1))
	{
		__LIB_19__::func_83(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
		__LIB_19__::func_83(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
		__LIB_19__::func_83(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
	}
	else if (__LIB_4__::func_712(uParam2->f_31))
	{
		__LIB_19__::func_83(uParam2->f_31, 501, 502, 500, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
		__LIB_19__::func_83(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[3 /*6*/]), &(iParam1->f_720[3 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
		__LIB_19__::func_83(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
		__LIB_19__::func_83(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
	}
	else if (__LIB_1__::func_188(uParam2->f_31))
	{
		__LIB_19__::func_83(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_1__::func_984(uParam2->f_31), 0);
	}
	else if (__LIB_8__::func_205(PLAYER::PLAYER_ID()))
	{
		if (iParam1->f_712 == 111)
		{
			iParam1->f_720[0 /*6*/] = { 994.93787f, -3097.3074f, -39.990833f };
			iParam1->f_720[0 /*6*/] = { 994.93463f, -3098.5415f, -38.240833f };
			iParam1->f_751[0 /*6*/] = { 995.367f, -3097.48f, -39.115f };
			iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -92.843f };
		}
		else if (iParam1->f_712 == 42)
		{
			iParam1->f_720[0 /*6*/] = { 1049.198f, -3100.0767f, -39.99993f };
			iParam1->f_720[0 /*6*/] = { 1049.1685f, -3099.13f, -38.24993f };
			iParam1->f_751[0 /*6*/] = { 1048.582f, -3100.444f, -39.115f };
			iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 84.6f };
		}
		else if (iParam1->f_712 == 16)
		{
			iParam1->f_720[0 /*6*/] = { 1088.6151f, -3100.9316f, -39.99993f };
			iParam1->f_720[0 /*6*/] = { 1088.6193f, -3099.9568f, -38.24993f };
			iParam1->f_751[0 /*6*/] = { 1088.011f, -3100.987f, -39.125f };
			iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 88.2f };
		}
	}
	else if (__LIB_6__::func_447(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { 965.73f, -2991.764f, -40.59f };
		iParam1->f_720[0 /*6*/] = { 965.73f, -2990.864f, -38.79f };
		iParam1->f_751[0 /*6*/] = { 965.89f, -2991.614f, -39.67f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 86.76f };
	}
	else if (__LIB_4__::func_710(uParam2->f_31) && !iParam1->f_794)
	{
		iVar1 = iParam1->f_796;
		if (iVar1 == -1)
		{
			return 0;
		}
		__LIB_8__::func_271(iParam1->f_796, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), 0);
		__LIB_8__::func_271(iParam1->f_796, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), 0);
		__LIB_8__::func_271(iParam1->f_796, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), 0);
		__LIB_8__::func_271(iParam1->f_796, 588, 587, 589, &(iParam1->f_751[3 /*6*/]), &(iParam1->f_720[3 /*6*/]), 0);
		__LIB_8__::func_271(iParam1->f_796, 591, 590, 592, &(iParam1->f_751[4 /*6*/]), &(iParam1->f_720[4 /*6*/]), 0);
	}
	else if (iParam1->f_794)
	{
		if (iParam1->f_796 == -1)
		{
			return 0;
		}
		__LIB_8__::func_271(iParam1->f_796, 555, 556, 554, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), 0);
		__LIB_8__::func_271(iParam1->f_796, 594, 593, 554, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), 0);
		__LIB_8__::func_271(iParam1->f_796, 596, 595, 554, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), 0);
	}
	return 1;
}

void func_4931(int* iParam0)//Position - 0x19B8CA
{
	struct<3> Var0;
	switch (iParam0->f_9)
	{
		case 0:
			if (iParam0->f_2 == 0)
			{
				return;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				__LIB_6__::func_578(iParam0, 5);
				return;
			}
			STREAMING::REQUEST_MODEL(iParam0->f_2);
			__LIB_6__::func_578(iParam0, 1);
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
			{
				__LIB_6__::func_578(iParam0, 2);
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				__LIB_6__::func_578(iParam0, 3);
				ENTITY::SET_ENTITY_HEADING(*iParam0, iParam0->f_6);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*iParam0, false);
				ENTITY::SET_ENTITY_VISIBLE(*iParam0, true, false);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, false, false);
				ENTITY::SET_ENTITY_PROOFS(*iParam0, true, true, true, true, true, true, true, true);
			}
			else
			{
				*iParam0 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam0->f_2, iParam0->f_3, false, false, false);
			}
			break;
		case 3:
			if (((MISC::GET_FRAME_COUNT() % 30) != 0 || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				return;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_8))
			{
				__LIB_6__::func_578(iParam0, 5);
				return;
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			if (SYSTEM::VDIST2(Var0, iParam0->f_3) <= iParam0->f_7)
			{
				SCRIPT::REQUEST_SCRIPT(iParam0->f_8);
				__LIB_6__::func_578(iParam0, 4);
			}
			break;
		case 4:
			if (SCRIPT::HAS_SCRIPT_LOADED(iParam0->f_8))
			{
				iParam0->f_1 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(iParam0->f_8, iParam0, 1, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(iParam0->f_8);
				__LIB_6__::func_578(iParam0, 5);
			}
			break;
		case 5:
			if (!SCRIPT::IS_THREAD_ACTIVE(iParam0->f_1))
			{
				__LIB_6__::func_578(iParam0, 3);
			}
			break;
	}
}

void func_4936(int iParam0)//Position - 0x19BACC
{
	Local_795.f_1 = iParam0;
}

int func_4939()//Position - 0x19BB0E
{
	if (!__LIB_4__::func_237())
	{
		return 0;
	}
	if (!BitTest(Local_795.f_0, 0))
	{
		if (Local_795.f_55 == PLAYER::PLAYER_ID())
		{
			__LIB_3__::func_437(0, 0, 1, 0, 1, 0, 0);
		}
		MISC::SET_BIT(&Local_795, 0);
	}
	if (BitTest(Local_795.f_0, 0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_258.f_371[Local_795.f_51]))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_258.f_371[Local_795.f_51]), false))
			{
				if (__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_258.f_371[Local_795.f_51]), 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 0);
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_258.f_371[Local_795.f_51]), __LIB_2__::func_671());
				}
			}
		}
	}
	return 0;
}

bool func_4942(var uParam0)//Position - 0x19BC61
{
	return BitTest(uParam0->f_6, 0);
}

void func_4943()//Position - 0x19BC6F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		iVar1 = __LIB_0__::func_582();
	}
	else if (__LIB_4__::func_987(PLAYER::PLAYER_ID()))
	{
		iVar1 = PLAYER::GET_PLAYER_INDEX();
	}
	iVar0 = Global_1853348[iVar1 /*834*/].f_267.f_142.f_1;
	if (Local_795.f_9[Local_795.f_8] != Local_258.f_286[Local_795.f_8])
	{
		if (Local_258.f_286[Local_795.f_8] > 0 && Local_258.f_286[Local_795.f_8] < 97)
		{
			iVar4 = Local_258.f_286[Local_795.f_8];
			bVar2 = func_4959(Local_795.f_8);
			bVar3 = func_4958(Local_795.f_8);
			if (func_4955(iVar4, Local_795.f_8, bVar2, bVar3))
			{
				func_4954();
			}
		}
		else if (Local_258.f_286[Local_795.f_8] >= 0 + 1000 && Local_258.f_286[Local_795.f_8] <= 97 + 1000)
		{
			bVar5 = func_4959(Local_795.f_8);
			bVar6 = func_4958(Local_795.f_8);
			if (func_4945(Local_258.f_286[Local_795.f_8], Local_795.f_8, bVar5, bVar6))
			{
				func_4954();
			}
		}
		else
		{
			if (Local_258.f_286[Local_795.f_8] == 0)
			{
				func_389(Local_795.f_8);
				func_4944(Local_795.f_8);
			}
			func_4954();
		}
	}
	else
	{
		func_4954();
	}
	if (Global_1946237 == iVar0 || iVar0 == 0)
	{
		Global_1946236 = 1;
	}
}

int func_4944(int iParam0)//Position - 0x19BDE0
{
	int iVar0;
	iVar0 = Local_795.f_744.f_164[iParam0];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		OBJECT::DELETE_OBJECT(&iVar0);
		Local_795.f_744.f_164[iParam0] = 0;
		return 1;
	}
	return 0;
}

int func_4945(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19BE22
{
	switch (Local_795.f_50)
	{
		case 0:
			if (bParam3 && bParam2)
			{
				Local_795.f_50 = 1;
			}
			else if (!bParam3)
			{
				func_4952(iParam1, 0);
				if (Local_795.f_744.f_246[iParam1] == 0)
				{
					Local_795.f_50 = 1;
				}
			}
			else if (!bParam2)
			{
				func_388(iParam1, 0, 1);
				if (Local_795.f_744.f_82[iParam1] == 0)
				{
					Local_795.f_50 = 1;
				}
			}
			break;
		case 1:
			if (!func_4951(iParam1))
			{
				if (func_4946(iParam0, iParam1, Local_795.f_53, 1))
				{
					Local_795.f_50 = 2;
				}
			}
			break;
		case 2:
			if (Local_795.f_53)
			{
				func_4952(iParam1, 1);
				if (Local_795.f_744.f_246[iParam1] == 1)
				{
					Local_795.f_50 = 0;
					return 1;
				}
			}
			else
			{
				Local_795.f_50 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_4946(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19BF06
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	Var0 = { func_411(Local_258.f_327[iParam1]) };
	Var1 = { func_4950(Local_258.f_327[iParam1]) };
	bVar3 = false;
	if (iParam0 <= 0 + 1000 || iParam0 >= 97 + 1000)
	{
		iVar2 = joaat("imp_prop_covered_vehicle_01a");
	}
	else
	{
		iVar2 = __LIB_28__::func_318(iParam0);
	}
	if (func_4958(iParam1))
	{
		if (STREAMING::IS_MODEL_VALID(iVar2))
		{
			STREAMING::REQUEST_MODEL(iVar2);
			if (STREAMING::HAS_MODEL_LOADED(iVar2))
			{
				iVar4 = OBJECT::CREATE_OBJECT(iVar2, Var0, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					ENTITY::SET_ENTITY_ROTATION(iVar4, Var1, 2, true);
					if (func_4947(iParam1))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_MODEL(iVar4, joaat("imp_prop_impexp_carrack")))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar4, bParam3);
						}
						else
						{
							bVar3 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_MODEL(iVar4, 1418193004))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar4, bParam3);
					}
					else
					{
						bVar3 = true;
					}
					if (bVar3)
					{
						ENTITY::SET_ENTITY_COORDS(iVar4, func_411(iParam1), true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iVar4, func_4950(iParam1), 2, true);
						bVar3 = false;
					}
					Local_795.f_744.f_164[iParam1] = iVar4;
					iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					OBJECT::SET_OBJECT_TINT_INDEX(iVar4, iVar5);
					if (bParam2)
					{
						ENTITY::SET_ENTITY_ALPHA(iVar4, 0, false);
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
						Local_795.f_744.f_246[iParam1] = 1;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_4947(int iParam0)//Position - 0x19C056
{
	switch (iParam0)
	{
		case 14:
		case 19:
		case 20:
		case 21:
		case 22:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_4950(int iParam0)//Position - 0x19C533
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 180f };
			break;
		case 1:
			Var0 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 0f, 0f, 230f };
			break;
		case 3:
			Var0 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		case 5:
			Var0 = { 0f, 0f, 0f };
			break;
		case 6:
			Var0 = { 0f, 0f, 270f };
			break;
		case 7:
			Var0 = { 0f, 0f, 90f };
			break;
		case 8:
			Var0 = { 0f, 0f, 180f };
			break;
		case 9:
			Var0 = { 0f, 0f, 90f };
			break;
		case 10:
			Var0 = { 0f, 0f, 270f };
			break;
		case 11:
			Var0 = { 0f, 0f, 180f };
			break;
		case 12:
			Var0 = { 0f, 0f, 65f };
			break;
		case 13:
			Var0 = { 0f, 0f, 180f };
			break;
		case 14:
			Var0 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 0f, 0f, -90f };
			break;
		case 31:
			Var0 = { 0f, 0f, -90f };
			break;
		case 38:
			Var0 = { 0f, 0f, -90f };
			break;
		case 39:
			Var0 = { 0f, 0f, -90f };
			break;
	}
	return Var0;
}

int func_4951(int iParam0)//Position - 0x19C6CA
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0 = { func_411(Local_258.f_327[iParam0]) };
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_1__::func_264(iVar2, 1, 1))
			{
				if (__LIB_0__::func_394(__LIB_1__::func_265(iVar2), Var0, 2.5f, 0))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_4952(int iParam0, bool bParam1)//Position - 0x19C739
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_4953(iParam0);
	if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_795.f_744.f_287[iParam0]))
	{
		iVar0 = Local_795.f_744.f_164[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_795.f_744.f_287[iParam0]));
			iVar2 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f)));
			}
			ENTITY::SET_ENTITY_ALPHA(iVar0, iVar2, false);
		}
	}
	else
	{
		iVar3 = Local_795.f_744.f_164[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (bParam1)
			{
				ENTITY::SET_ENTITY_ALPHA(iVar3, 255, false);
				if (STREAMING::IS_MODEL_VALID(ENTITY::GET_ENTITY_MODEL(iVar3)))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iVar3));
				}
				Local_795.f_744.f_246[iParam0] = 1;
			}
			else
			{
				ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
				{
					func_389(iParam0);
				}
				Local_795.f_744.f_246[iParam0] = 0;
			}
		}
		else if (bParam1)
		{
			Local_795.f_744.f_246[iParam0] = 1;
		}
		else
		{
			Local_795.f_744.f_246[iParam0] = 0;
		}
		Local_795.f_744.f_205[iParam0] = 0;
	}
}

void func_4953(int iParam0)//Position - 0x19C878
{
	if (Local_795.f_744.f_205[iParam0] == 0)
	{
		Local_795.f_744.f_287[iParam0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 1000);
		Local_795.f_744.f_205[iParam0] = 1;
	}
}

void func_4954()//Position - 0x19C8B5
{
	if (Local_795.f_8 < 40)
	{
		Local_795.f_9[Local_795.f_8] = Local_258.f_286[Local_795.f_8];
	}
	if (Local_795.f_8 >= 39)
	{
		Local_795.f_53 = 0;
		Local_795.f_54 = 0;
		Local_795.f_8 = 0;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_258.f_370 = 0;
		}
	}
	else
	{
		Global_1946237++;
		Local_795.f_8++;
	}
}

int func_4955(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19C923
{
	switch (Local_795.f_50)
	{
		case 0:
			if (bParam2 && bParam3)
			{
				Local_795.f_50 = 1;
			}
			else if (!bParam2)
			{
				func_388(iParam1, 0, 1);
				if (Local_795.f_744.f_82[iParam1] == 0)
				{
					Local_795.f_50 = 1;
				}
			}
			else if (!bParam3)
			{
				func_4952(iParam1, 0);
				if (Local_795.f_744.f_246[iParam1] == 0)
				{
					Local_795.f_50 = 1;
				}
			}
			break;
		case 1:
			if (!func_4951(iParam1))
			{
				if (func_4956(iParam0, iParam1, Local_795.f_53, 1))
				{
					Local_795.f_50 = 2;
				}
			}
			break;
		case 2:
			if (Local_795.f_53)
			{
				func_388(iParam1, 1, 1);
				if (Local_795.f_744.f_82[iParam1] == 1)
				{
					Local_795.f_50 = 0;
					return 1;
				}
			}
			else
			{
				Local_795.f_50 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_4956(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19CA08
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	Var0 = { func_411(Local_258.f_327[iParam1]) };
	Var1 = { func_4950(Local_258.f_327[iParam1]) };
	if (func_4959(iParam1))
	{
		iVar2 = func_4957(iParam0, Var0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_411(iParam1), true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iVar2, Var1, 2, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar2, 2);
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, bParam3);
			Local_795.f_744[iParam1] = iVar2;
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ALPHA(iVar2, 0, false);
			}
			else
			{
				Local_795.f_744.f_82[iParam1] = 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_4957(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x19CAAE
{
	struct<101> Var0;
	int iVar1;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	__LIB_26__::func_189(iParam0, &Var0);
	STREAMING::REQUEST_MODEL(Var0.f_66);
	if (STREAMING::HAS_MODEL_LOADED(Var0.f_66))
	{
		iVar1 = VEHICLE::CREATE_VEHICLE(Var0.f_66, Param1, fParam2, bParam3, bParam4, false);
		__LIB_37__::func_905(iVar1, &Var0, 1, 1, 0);
	}
	return iVar1;
}

bool func_4958(int iParam0)//Position - 0x19CB2A
{
	return Local_795.f_744.f_164[iParam0] == 0;
}

bool func_4959(int iParam0)//Position - 0x19CB40
{
	return Local_795.f_744[iParam0] == 0;
}

void func_4960()//Position - 0x19CB54
{
	bool bVar0;
	bool bVar1;
	if (func_4981(7))
	{
		return;
	}
	if (Global_2667225.f_2680 || BitTest(Global_1946250, 27))
	{
		return;
	}
	if (__LIB_4__::func_658())
	{
		if (!__LIB_4__::func_774() && func_4981(0))
		{
			bVar0 = true;
		}
	}
	else if (func_4981(1))
	{
		if ((((!__LIB_3__::func_315() && !__LIB_0__::func_661()) && !CAM::IS_SCREEN_FADED_OUT()) && !AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) && !func_4964())
		{
			if (__LIB_2__::func_232())
			{
				bVar0 = (MISC::GET_FRAME_COUNT() % 60) == false;
			}
			else if (__LIB_4__::func_973(0))
			{
				bVar0 = func_4962();
			}
		}
		if (__LIB_0__::func_618())
		{
			if (Local_776.f_799 != 0)
			{
				__LIB_39__::func_803(&(Local_792[PLAYER::PLAYER_ID() /*10*/].f_1), &Local_776);
				if (__LIB_2__::func_245())
				{
					__LIB_0__::func_801();
				}
			}
		}
	}
	if (bVar0)
	{
		if (Local_795.f_1082 == 0)
		{
			if (__LIB_2__::func_232() || Local_795.f_55 == PLAYER::PLAYER_ID())
			{
				bVar1 = __LIB_2__::func_236();
				if (!bVar1)
				{
					Local_795.f_1081 = 1;
					MISC::SET_BIT(&(Local_792[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
					if (func_4981(1))
					{
						if (!BitTest(Local_795.f_0, 1))
						{
							MISC::SET_BIT(&Local_795, 1);
						}
					}
				}
			}
			else if (__LIB_4__::func_973(0))
			{
				if (func_4962())
				{
					Local_795.f_1081 = 1;
					if (func_4981(1))
					{
						if (!BitTest(Local_795.f_0, 1))
						{
							MISC::SET_BIT(&Local_795, 1);
						}
					}
				}
			}
		}
		else if (Local_795.f_1081)
		{
			Local_795.f_1081 = 0;
		}
	}
}

int func_4962()//Position - 0x19CCDF
{
	int iVar0;
	iVar0 = func_4963();
	if (iVar0 > -1)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			return BitTest(Local_792[iVar0 /*10*/], 0);
		}
	}
	return 0;
}

int func_4963()//Position - 0x19CD0C
{
	int iVar0;
	if (__LIB_2__::func_232())
	{
		return NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_0__::func_582();
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return -1;
}

bool func_4964()//Position - 0x19CD50
{
	if ((!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) || !__LIB_2__::func_232())
	{
		return 0;
	}
	return ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 964.45734f, -3003.5857f, -39.634876f, 1f, 1f, 1f, false, true, 0);
}

int func_4966()//Position - 0x19CDAE
{
	struct<4> Var0;
	if (__LIB_6__::func_447(PLAYER::PLAYER_ID()))
	{
		if (Global_1945916 == 1)
		{
			if (!__LIB_0__::func_649(&(Local_795.f_742)))
			{
				__LIB_0__::func_580(&(Local_795.f_742), 0, 0);
			}
			else if (__LIB_2__::func_47(&(Local_795.f_742), 8000, 0))
			{
				Global_1945916 = 0;
				__LIB_0__::func_579(&(Local_795.f_742));
			}
		}
		if (!BitTest(Local_795.f_6, 0))
		{
			Local_795.f_471 = "carmod_shop";
			SCRIPT::REQUEST_SCRIPT(Local_795.f_471);
			if ((SCRIPT::HAS_SCRIPT_LOADED(Local_795.f_471) && !SCRIPT::IS_THREAD_ACTIVE(Local_795.f_741)) && !Global_1945916)
			{
				Global_1945918 = Local_795.f_4 + 69;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(Local_795.f_471)) < 1)
				{
					if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(Local_795.f_471, Global_1945918, true, 0))
					{
						Var0.f_1 = 0;
						Var0.f_3 = Global_1945918;
						Var0.f_0 = 45;
						Var0.f_2 = 3;
						Global_102568 = Var0.f_2;
						Local_795.f_741 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(Local_795.f_471, &Var0, 4, 3600);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(Local_795.f_471);
						MISC::SET_BIT(&(Local_795.f_6), 0);
						Global_100493.f_18[45] = 1;
						Global_100493.f_77[45] = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_4967()//Position - 0x19CEF2
{
	if (__LIB_9__::func_962())
	{
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			if (__LIB_9__::func_644(__LIB_0__::func_582()))
			{
				__LIB_3__::func_580(1);
			}
		}
	}
}

void func_4970()//Position - 0x19CF57
{
	func_4971(&(Local_795.f_478), Local_795.f_3);
}

void func_4971(int* iParam0, int iParam1)//Position - 0x19CF6E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	if (__LIB_6__::func_471(0, iParam0))
	{
		if (iParam0->f_43 != 0)
		{
			STREAMING::REQUEST_MODEL(iParam0->f_43);
		}
		if (iParam0->f_51 != 0)
		{
			STREAMING::REQUEST_MODEL(iParam0->f_51);
		}
		__LIB_6__::func_470(1, iParam0);
	}
	else if (__LIB_6__::func_471(1, iParam0))
	{
		if (iParam0->f_43 == 0 && iParam0->f_51 == 0)
		{
			__LIB_6__::func_470(3, iParam0);
			return;
		}
		if (iParam0->f_43 != 0 && !STREAMING::HAS_MODEL_LOADED(iParam0->f_43))
		{
			return;
		}
		if (iParam0->f_51 != 0 && !STREAMING::HAS_MODEL_LOADED(iParam0->f_51))
		{
			return;
		}
		bVar0 = false;
		bVar1 = false;
		if (iParam0->f_43 != 0)
		{
			iParam0->f_50 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam0->f_43, iParam0->f_44, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_50, iParam0->f_47, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_50, true);
			bVar0 = true;
		}
		if (iParam0->f_51 != 0)
		{
			iParam0->f_58 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam0->f_51, iParam0->f_52, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_58, iParam0->f_55, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_58, true);
			bVar1 = true;
		}
		if (bVar0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_43);
		}
		if (bVar1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_51);
		}
		__LIB_6__::func_470(3, iParam0);
	}
	else if (__LIB_6__::func_471(3, iParam0))
	{
		if (BitTest(*iParam0, 17))
		{
			if ((!__LIB_4__::func_698() && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) || !func_4977(iParam1))
			{
				__LIB_6__::func_574(iParam0);
			}
		}
	}
	else if (__LIB_6__::func_471(2, iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_6__::func_470(7, iParam0);
			return;
		}
		if (((STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3) && (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4) || STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_2)) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_2, false))
		{
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
			{
				NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, true);
				__LIB_8__::func_857(1, 1, 0);
				__LIB_0__::func_686(1, 1, 1, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_2, false), 100f);
				if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_8))
				{
					__LIB_6__::func_573(iParam0);
				}
				else
				{
					__LIB_6__::func_572(iParam0);
				}
				PED::FINALIZE_HEAD_BLEND(iParam0->f_2);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_2, false);
				iParam0->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(iParam0->f_28, iParam0->f_31, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_2, iParam0->f_27, iParam0->f_3, iParam0->f_5, 1000f, -1000f, 4, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_27, iParam0->f_34);
				if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_8))
				{
					if (!__LIB_0__::func_86(iParam0->f_20))
					{
						MISC::CLEAR_BIT(iParam0, 15);
					}
					else
					{
						MISC::SET_BIT(iParam0, 15);
					}
					if (CAM::DOES_CAM_EXIST(iParam0->f_11) && !BitTest(*iParam0, 15))
					{
						CAM::SET_CAM_PARAMS(iParam0->f_11, iParam0->f_20, iParam0->f_23, iParam0->f_26, 3000, 3, 3, 2);
						MISC::SET_BIT(iParam0, 15);
					}
				}
				else
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_12, iParam0->f_27, iParam0->f_8, iParam0->f_3);
				}
				STREAMING::REMOVE_ANIM_DICT(iParam0->f_3);
				__LIB_0__::func_495(&(iParam0->f_38), 1, 1);
				__LIB_6__::func_571(iParam0);
				__LIB_6__::func_470(4, iParam0);
			}
		}
	}
	else if (__LIB_6__::func_471(4, iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_27))
		{
			iParam0->f_36 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_27);
			if (__LIB_0__::func_121(iParam0->f_2))
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_2, false), 100f);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_75))
			{
				bVar2 = false;
				while (bVar2 < 2)
				{
					if ((!BitTest(iParam0->f_67, bVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_69[bVar2])) && iParam0->f_36 >= iParam0->f_72[bVar2])
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_2, false))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) };
						}
						AUDIO::PLAY_SOUND_FROM_COORD(-1, iParam0->f_69[bVar2], Var3, iParam0->f_75, false, 0, false);
						MISC::SET_BIT(&(iParam0->f_67), bVar2);
					}
					bVar2++;
				}
			}
			if (iParam0->f_42)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iVar4 = (iParam0->f_37 - 322);
					if (__LIB_2__::func_47(&(iParam0->f_38), iVar4, 1))
					{
						CAM::DO_SCREEN_FADE_OUT(322);
					}
				}
			}
			if ((((iParam0->f_36 > iParam0->f_35 && iParam0->f_37 <= 0) || (iParam0->f_37 > 0 && __LIB_2__::func_173(&(iParam0->f_38), iParam0->f_37, 1))) || iParam0->f_36 > 0.99f) || __LIB_6__::func_570(iParam0))
			{
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0->f_2) && !PED::IS_PED_INJURED(iParam0->f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4)) && !MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_6))
				{
					TASK::TASK_PLAY_ANIM(iParam0->f_2, iParam0->f_4, iParam0->f_6, 2f, -2f, -1, 10, 0f, false, false, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_76))
				{
					if ((!__LIB_4__::func_698() && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) || !func_4977(iParam1))
					{
						__LIB_6__::func_574(iParam0);
					}
				}
				__LIB_6__::func_470(5, iParam0);
			}
		}
	}
	else if (__LIB_6__::func_471(5, iParam0))
	{
	}
	else if (__LIB_6__::func_471(7, iParam0))
	{
	}
}

bool func_4977(int iParam0)//Position - 0x19D5C5
{
	var uVar0;
	uVar0 = { func_4978(iParam0) };
	return BitTest(uVar0[1], 11);
}

Vector3 func_4978(int iParam0)//Position - 0x19D5DF
{
	struct<3> Var0;
	struct<35> Var1;
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946250.f_14[iParam0 /*3*/][0] == -1 || !BitTest(Global_1946250, 3))
	{
		func_470(iParam0, &Var1, 3);
		Stack.Push(iParam0);
		Call_Loc(Var1.f_34);
		Global_1946250.f_14[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
	}
	return Global_1946250.f_14[iParam0 /*3*/];
}

bool func_4980(int iParam0)//Position - 0x19D65F
{
	return Local_258.f_0 == iParam0;
}

bool func_4981(int iParam0)//Position - 0x19D66D
{
	return Local_795.f_1 == iParam0;
}

void func_4982()//Position - 0x19D67D
{
	int iVar0;
	int iVar1;
	if (BitTest(Local_258.f_381.f_1, 0))
	{
		iVar0 = 0;
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_757);
		if (__LIB_1__::func_264(iVar1, 0, 1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				iVar0 = 1;
				if (BitTest(Local_258.f_381, iLocal_757))
				{
					if (BitTest(Local_792[iVar1 /*10*/].f_5, 0))
					{
						MISC::CLEAR_BIT(&(Local_258.f_381), iLocal_757);
					}
				}
			}
		}
		if (iVar0 == 0)
		{
			if (BitTest(Local_258.f_381, iLocal_757))
			{
				MISC::CLEAR_BIT(&(Local_258.f_381), iLocal_757);
			}
		}
		iLocal_757++;
		if (iLocal_757 >= 32)
		{
			iLocal_757 = 0;
			if (Local_258.f_381 == 0)
			{
				MISC::CLEAR_BIT(&(Local_258.f_381.f_1), 0);
			}
		}
	}
}

int func_4983()//Position - 0x19D728
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (BitTest(Local_258.f_381, iVar1) || BitTest(Local_793.f_0, 0))
	{
		if (__LIB_0__::func_649(&uLocal_768) && !__LIB_2__::func_47(&uLocal_768, 5000, 0))
		{
			MISC::SET_BIT(&(Local_792[iVar1 /*10*/].f_5), 0);
			MISC::CLEAR_BIT(&Local_793, 0);
			__LIB_0__::func_579(&(Local_793.f_4));
		}
		else if (!BitTest(Local_792[iVar1 /*10*/].f_5, 0))
		{
			if (!BitTest(Local_793.f_0, 0))
			{
				if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
				{
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 4, 0);
					Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					Local_793.f_1 = { func_4985(Var2) };
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_793.f_1, 1f, 7000, 40000f, 0.5f);
					__LIB_0__::func_495(&(Local_793.f_4), 1, 0);
					MISC::SET_BIT(&Local_793, 0);
				}
			}
			else
			{
				if (__LIB_2__::func_47(&(Local_793.f_4), 7000, 1) || func_4984(Local_793.f_1))
				{
					if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
					{
						if (!func_4984(Local_793.f_1))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_793.f_1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 0.5f)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_793.f_1, true, false, false, true);
							}
						}
					}
					MISC::SET_BIT(&(Local_792[iVar1 /*10*/].f_5), 0);
					MISC::CLEAR_BIT(&Local_793, 0);
					__LIB_0__::func_579(&(Local_793.f_4));
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_793.f_1, 1f, 7000, 40000f, 0.5f);
				}
				return 0;
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_792[iVar1 /*10*/].f_5), 0);
		if (Local_792[iVar1 /*10*/].f_5 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4984(struct<3> Param0)//Position - 0x19D91E
{
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) < 3f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_4985(struct<3> Param0)//Position - 0x19D94F
{
	if (Param0.f_1 < -2999f)
	{
		if (Param0.f_0 < 962.6f)
		{
			Param0.f_0 = 958.7f;
		}
		else if (Param0.f_0 < 970.3f)
		{
			Param0.f_0 = 966.7f;
		}
		else
		{
			Param0.f_0 = 974.3f;
		}
	}
	else
	{
		Param0.f_1 = -2999.7f;
	}
	return Param0;
}

int func_4986()//Position - 0x19D9A5
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (__LIB_2__::func_63(Local_258.f_371[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == Local_258.f_267)
	{
		return 1;
	}
	return 0;
}

bool func_4987(int iParam0, int iParam1)//Position - 0x19D9EA
{
	bool bVar0;
	bVar0 = !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", iParam0, true, 0);
	if (!bVar0 && func_4988(iParam1))
	{
		bVar0 = true;
	}
	if (BitTest(Global_2815059.f_428.f_5, 0) && ((!CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || HUD::IS_WARNING_MESSAGE_ACTIVE()))
	{
		bVar0 = true;
	}
	if ((Global_1946250.f_4590 == iParam1 && !__LIB_3__::func_998(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = true;
	}
	if (BitTest(Global_1946250.f_5, 2) && CAM::IS_SCREEN_FADED_OUT())
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 2);
		bVar0 = true;
	}
	if (bVar0)
	{
		OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(true);
	}
	return bVar0;
}

int func_4988(int iParam0)//Position - 0x19DA9A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_4989(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_4989(int iParam0)//Position - 0x19DABA
{
	var uVar0;
	if (!Global_1946250.f_3634)
	{
		return 0;
	}
	uVar0 = { func_4978(iParam0) };
	return BitTest(uVar0[1], 22);
}

void func_4997()//Position - 0x19DC01
{
	switch (Local_795.f_1079)
	{
		case 0:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Prop_Screen_IE_Adhawk", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Prop_Screen_IE_Adhawk"))
			{
				Local_795.f_1079 = 1;
			}
			break;
		case 1:
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("Prop_ImpExp_Lappy_01a"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("Prop_ImpExp_Lappy_01a", false);
				if (!HUD::IS_NAMED_RENDERTARGET_LINKED(joaat("imp_prop_impexp_lappy_01a")))
				{
					HUD::LINK_NAMED_RENDERTARGET(joaat("imp_prop_impexp_lappy_01a"));
					if (Local_795.f_1079.f_1 == -1)
					{
						Local_795.f_1079.f_1 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("Prop_ImpExp_Lappy_01a");
					}
				}
			}
			Local_795.f_1079 = 2;
			break;
		case 2:
			HUD::SET_TEXT_RENDER_ID(Local_795.f_1079.f_1);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			GRAPHICS::DRAW_SPRITE_NAMED_RENDERTARGET("Prop_Screen_IE_Adhawk", "Prop_Screen_IE_Adhawk", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			break;
	}
}

void func_4998(var uParam0, var uParam1)//Position - 0x19DCE9
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	bool bVar17;
	int iVar18;
	func_5096(uParam1, uParam0);
	__LIB_19__::func_542(uParam0);
	__LIB_18__::func_979(uParam0);
	__LIB_8__::func_867(uParam0);
	if (Global_75489)
	{
		if (!__LIB_0__::func_649(&(uParam0->f_323)))
		{
			__LIB_0__::func_580(&(uParam0->f_323), 0, 0);
		}
		else if (__LIB_2__::func_47(&(uParam0->f_323), 500, 0))
		{
			__LIB_0__::func_579(&(uParam0->f_323));
			Global_75489 = 0;
		}
	}
	if (uParam0->f_444 || __LIB_8__::func_866())
	{
		if (*uParam0 >= 4)
		{
			if (!__LIB_2__::func_245())
			{
				__LIB_0__::func_802();
			}
		}
		else if ((((((__LIB_2__::func_245() && !Global_1640732) && !__LIB_3__::func_139(PLAYER::PLAYER_ID())) && !BitTest(uParam0->f_331, 20)) && !BitTest(Global_1946250.f_5, 29)) && !BitTest(Global_1946250.f_5, 28)) && !BitTest(Global_1946250.f_6, 11))
		{
			__LIB_0__::func_801();
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_4__::func_799(uParam0, uParam1);
			MISC::CLEAR_BIT(&(uParam0->f_331), 19);
			__LIB_1__::func_0(uParam0, 1);
			break;
		case 1:
			MISC::CLEAR_BIT(&(uParam0->f_331), 19);
			if (uParam0->f_444 == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 964.0366f, -3002.6072f, -40.580494f, 965.1981f, -3002.6099f, -39.146614f, 1f, false, true, 0) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					uParam0->f_316 = 0;
					uParam0->f_445 = 1;
					__LIB_1__::func_0(uParam0, 2);
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 964.20575f, -3004.4807f, -40.634876f, 965.1243f, -3004.43f, -39.134876f, 1f, false, true, 0) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					uParam0->f_316 = 0;
					uParam0->f_445 = 0;
					__LIB_1__::func_0(uParam0, 2);
				}
				else
				{
					uParam0->f_316 = (uParam0->f_316 + 1 % 1);
				}
			}
			else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
			{
				if (__LIB_8__::func_528(uParam0, uParam1))
				{
					__LIB_1__::func_0(uParam0, 2);
				}
				else
				{
					uParam0->f_316 = (uParam0->f_316 + 1 % 3);
				}
			}
			else if (__LIB_8__::func_865())
			{
				Stack.Push(uParam0->f_316);
				Stack.Push(&(uParam0->f_445));
				Call_Loc(uParam0->f_447);
				if (StackVal)
				{
					uParam0->f_316 = 0;
					__LIB_1__::func_0(uParam0, 2);
				}
				else
				{
					uParam0->f_316 = (uParam0->f_316 + 1 % 1);
				}
			}
			else
			{
				Var3 = { __LIB_4__::func_769(uParam0->f_316, &(uParam0->f_279)) };
				Var4 = { __LIB_4__::func_768(uParam0->f_316, &(uParam0->f_279)) };
				uParam0->f_279.f_31 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, (Var4.f_2 - 0.617f), __LIB_4__::func_496(1)) };
				uParam0->f_279.f_34 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, (Var4.f_2 - 0.617f), __LIB_4__::func_496(0)) };
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_279.f_31, uParam0->f_279.f_34, 1f, false, true, 0) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_1__::func_0(uParam0, 2);
				}
				else
				{
					uParam0->f_279.f_31 = { 0f, 0f, 0f };
					uParam0->f_279.f_34 = { 0f, 0f, 0f };
					uParam0->f_316 = (uParam0->f_316 + 1 % 13);
				}
			}
			break;
		case 2:
			uParam0->f_435 = (56 + uParam0->f_316);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_334))
			{
				STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
			}
			else
			{
				uParam0->f_334 = __LIB_32__::func_257(uParam0, uParam0->f_277, __LIB_6__::func_925(), 0);
			}
			if ((((((((((((!__LIB_8__::func_864(uParam0, uParam0->f_279.f_31, uParam0->f_279.f_34, 1.15f) && uParam1->f_274[uParam0->f_435] == 0) && !__LIB_3__::func_633()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !__LIB_4__::func_796()) && __LIB_37__::func_907(uParam0, uParam0->f_316, PLAYER::PLAYER_ID())) && !BitTest(uParam0->f_331, 18)) && __LIB_8__::func_526()) && !BitTest(Global_1946250.f_4, 2)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
				{
					__LIB_7__::func_249(&(uParam0->f_320));
					uParam0->f_320 = -1;
				}
				MISC::CLEAR_BIT(&(uParam0->f_331), 19);
				if ((((BitTest(uParam0->f_331, 12) || BitTest(uParam0->f_331, 13)) || BitTest(uParam0->f_331, 14)) || BitTest(uParam0->f_331, 15)) || BitTest(uParam0->f_331, 16))
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 12);
					MISC::CLEAR_BIT(&(uParam0->f_331), 13);
					MISC::CLEAR_BIT(&(uParam0->f_331), 14);
					MISC::CLEAR_BIT(&(uParam0->f_331), 15);
					MISC::CLEAR_BIT(&(uParam0->f_331), 16);
				}
				if (!__LIB_0__::func_77(0) && !__LIB_4__::func_495())
				{
					if (!__LIB_4__::func_494())
					{
						__LIB_19__::func_541(uParam0, 0);
					}
				}
				else if (uParam0->f_320 != -1)
				{
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !__LIB_4__::func_495())
				{
					uParam0->f_277 = uParam0->f_316;
					__LIB_4__::func_82(uParam0->f_277);
					uParam0->f_436 = uParam0->f_435;
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					if (__LIB_8__::func_863(uParam0, uParam0->f_277))
					{
						__LIB_4__::func_795(uParam0, 0);
					}
					uParam0->f_1 = 1;
					uParam0->f_2 = -1;
					MISC::SET_BIT(&(uParam0->f_331), 19);
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					if (__LIB_5__::func_901(uParam0, uParam0->f_277))
					{
						__LIB_25__::func_524(uParam0, uParam1);
						__LIB_1__::func_0(uParam0, 3);
					}
					else
					{
						uParam0->f_334 = __LIB_32__::func_257(uParam0, uParam0->f_277, __LIB_6__::func_925(), 0);
						__LIB_1__::func_0(uParam0, 4);
					}
				}
			}
			else if (BitTest(Global_1946250.f_4, 2))
			{
				if (uParam0->f_320 != -1)
				{
					__LIB_7__::func_249(&(uParam0->f_320));
				}
			}
			else if (!__LIB_3__::func_633() && !__LIB_3__::func_870(PLAYER::PLAYER_ID()))
			{
				if (__LIB_8__::func_866())
				{
					if (__LIB_25__::func_523(uParam0))
					{
						if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 13))
						{
							__LIB_7__::func_249(&(uParam0->f_320));
						}
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, __LIB_8__::func_862(2), 0, 0, 0, 0);
							MISC::SET_BIT(&(uParam0->f_331), 13);
						}
					}
					else if (!__LIB_2__::func_192(PLAYER::PLAYER_ID()))
					{
						if (__LIB_4__::func_794() >= __LIB_4__::func_793())
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 14))
							{
								__LIB_7__::func_249(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, __LIB_8__::func_862(3), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 14);
							}
						}
						else if (__LIB_25__::func_723(PLAYER::PLAYER_ID()))
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 15))
							{
								__LIB_7__::func_249(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, __LIB_8__::func_862(4), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 15);
							}
						}
						else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 16))
							{
								__LIB_7__::func_249(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, __LIB_8__::func_862(0), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 16);
							}
						}
						else
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 12))
							{
								__LIB_7__::func_249(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, __LIB_8__::func_862(1), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 12);
							}
						}
					}
					else if (__LIB_3__::func_804(PLAYER::PLAYER_ID()))
					{
						if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 16))
						{
							__LIB_7__::func_249(&(uParam0->f_320));
						}
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, __LIB_8__::func_862(0), 0, 0, 0, 0);
							MISC::SET_BIT(&(uParam0->f_331), 16);
						}
					}
				}
				else
				{
					if (__LIB_4__::func_791(uParam0->f_316))
					{
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_8__::func_863(uParam0, uParam0->f_316))
					{
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFFCH_NO_SIT" /* GXT: Only the owner can sit at the desk. */, 0, 0, 0, 0);
						}
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				}
			}
			else if (__LIB_3__::func_870(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_8__::func_526())
				{
					if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
					{
						__LIB_7__::func_249(&(uParam0->f_320));
						uParam0->f_320 = -1;
					}
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "POD_TOO_MANY" /* GXT: Too many players near activity. */, 0, 0, 0, 0);
					}
				}
			}
			if (uParam0->f_316 == 6 && (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32) || __LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1)))
			{
				fVar7 = __LIB_19__::func_220(uParam0);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var5, Var6, 1.4f, false, true, 0) || fVar7 > 120f)
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					__LIB_1__::func_0(uParam0, 1);
				}
			}
			else if (uParam0->f_444 == 1)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 964.432f, -3004.828f, -40.63492f, 964.42f, -3002.0542f, -39.13492f, 1.5f, false, true, 0))
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					__LIB_1__::func_0(uParam0, 1);
				}
			}
			else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_8__::func_528(uParam0, uParam1))
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 12);
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					MISC::CLEAR_BIT(&(uParam0->f_331), 13);
					MISC::CLEAR_BIT(&(uParam0->f_331), 14);
					MISC::CLEAR_BIT(&(uParam0->f_331), 15);
					MISC::CLEAR_BIT(&(uParam0->f_331), 16);
					__LIB_1__::func_0(uParam0, 1);
				}
			}
			else if (__LIB_8__::func_865())
			{
				Stack.Push(uParam0->f_316);
				Stack.Push(&(uParam0->f_445));
				Call_Loc(uParam0->f_447);
				if (!StackVal)
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 12);
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					MISC::CLEAR_BIT(&(uParam0->f_331), 13);
					MISC::CLEAR_BIT(&(uParam0->f_331), 14);
					MISC::CLEAR_BIT(&(uParam0->f_331), 15);
					MISC::CLEAR_BIT(&(uParam0->f_331), 16);
					__LIB_1__::func_0(uParam0, 1);
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_279.f_31, uParam0->f_279.f_34, 1f, false, true, 0))
			{
				if (uParam0->f_320 != -1)
				{
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				__LIB_1__::func_0(uParam0, 1);
			}
			break;
		case 3:
			if (__LIB_7__::func_308(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, false);
			}
			uParam0->f_334 = __LIB_32__::func_257(uParam0, uParam0->f_277, __LIB_6__::func_925(), 0);
			__LIB_1__::func_0(uParam0, 4);
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
			__LIB_25__::func_524(uParam0, uParam1);
			break;
		case 4:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_334))
			{
				STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
				return;
			}
			if (!__LIB_25__::func_524(uParam0, uParam1))
			{
				return;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_319))
			{
				__LIB_1__::func_0(uParam0, 12);
			}
			if (__LIB_4__::func_790(uParam0->f_277))
			{
				if (!__LIB_4__::func_789(uParam1, uParam0, uParam0->f_277))
				{
					return;
				}
				else
				{
					uParam0->f_434 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_432, uParam0->f_433);
					if (((uParam1[uParam0->f_277 /*21*/])->f_3 && (uParam1[uParam0->f_277 /*21*/])->f_4 == 0) || (uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						if (!__LIB_0__::func_649(&(uParam0->f_325)))
						{
							__LIB_0__::func_580(&(uParam0->f_325), 1, 0);
						}
					}
				}
			}
			if (__LIB_4__::func_791(uParam0->f_277))
			{
				WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_REVOLVER"), 31, 0);
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_REVOLVER")))
				{
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_REVOLVER"), 31, 0);
					return;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
				{
					uParam0->f_437 = NETWORK::OBJ_TO_NET(__LIB_18__::func_490(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), 1, 0, 0, 0, 0, 1, 0));
					NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), true);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam0->f_437), false, false);
				}
			}
			__LIB_32__::func_255(uParam0, &Var0, &fVar1);
			if (__LIB_8__::func_863(uParam0, uParam0->f_277))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var8, 5000, 0, 2);
					__LIB_5__::func_900(Var0, fVar1);
				}
				else
				{
					__LIB_5__::func_900(Var0, fVar1);
				}
			}
			else
			{
				__LIB_5__::func_900(Var0, fVar1);
			}
			PED::SET_FORCE_STEP_TYPE(PLAYER::PLAYER_PED_ID(), true, 20, 0);
			__LIB_1__::func_0(uParam0, 5);
			break;
		case 5:
			__LIB_32__::func_255(uParam0, &Var0, &fVar1);
			if ((__LIB_0__::func_394(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, 0.05f, 0) && __LIB_4__::func_230(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar1, 5f)) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
			{
				if (__LIB_3__::func_903(PLAYER::PLAYER_ID()))
				{
					fVar9 = 1.3f;
				}
				else
				{
					fVar9 = 1f;
				}
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, fVar9);
				if ((__LIB_4__::func_791(uParam0->f_277) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter_B", 1.5f, -1.5f, 5, 16, 1.5f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_b_chair", 4f, -4f, 32773);
				}
				else if (!__LIB_25__::func_722(uParam0))
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter", 1.5f, -1.5f, 5, 16, 1.5f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_chair", 4f, -4f, 32773);
				}
				else
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter_left", 1.5f, -1.5f, 5, 16, 1.5f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_left_chair", 4f, -4f, 32773);
				}
				if ((__LIB_4__::func_791(uParam0->f_277) && __LIB_1__::func_188(uParam0->f_277)) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
				{
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, "enter_weapon", 4f, -4f, 32773);
				}
				if (__LIB_4__::func_790(uParam0->f_277))
				{
					if ((uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, "enter_cigar", 4f, -4f, 32773);
					}
					if ((uParam1[uParam0->f_277 /*21*/])->f_3)
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, "enter_glass", 4f, -4f, 32773);
					}
				}
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				__LIB_1__::func_0(uParam0, 6);
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_319);
			iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("create_weapon")))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam0->f_437), true, false);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= 1f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_319))
				{
					if (__LIB_8__::func_863(uParam0, uParam0->f_277))
					{
						if (ENTITY::GET_ENTITY_PITCH(uParam0->f_319) != 0f)
						{
							Var10 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2) };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, 0f, 0f, Var10.f_2, 2, true);
						}
						if (ENTITY::GET_ENTITY_ROLL(uParam0->f_319) != 0f)
						{
							Var11 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2) };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, 0f, 0f, Var11.f_2, 2, true);
						}
					}
					if (uParam0->f_439 == 1)
					{
						uParam0->f_439 = 0;
						__LIB_25__::func_290(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), false, false);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_8), true, false);
					}
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					if (uParam0->f_440)
					{
						uParam0->f_440 = 0;
					}
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "base", 4f, -1.5f, 5, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "base_chair", 4f, -4f, 32773);
					if ((__LIB_4__::func_791(uParam0->f_277) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, "base_weapon", 4f, -4f, 32773);
					}
					if (__LIB_4__::func_790(uParam0->f_277))
					{
						if ((uParam1[uParam0->f_277 /*21*/])->f_2)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, "base_cigar", 4f, -4f, 32773);
						}
						if ((uParam1[uParam0->f_277 /*21*/])->f_3)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, "base_glass", 4f, -4f, 32773);
						}
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					if (((__LIB_4__::func_791(uParam0->f_277) || __LIB_8__::func_863(uParam0, uParam0->f_277)) || __LIB_4__::func_790(uParam0->f_277)) || __LIB_8__::func_860(uParam0->f_277))
					{
						__LIB_1__::func_0(uParam0, 7);
					}
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_319))
				{
					if (__LIB_0__::func_121(uParam0->f_319))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_319);
					}
				}
			}
			if (((!__LIB_4__::func_796() && !__LIB_4__::func_788(uParam0)) && __LIB_8__::func_860(uParam0->f_277)) && __LIB_4__::func_787())
			{
				__LIB_1__::func_0(uParam0, 18);
			}
			break;
		case 7:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (__LIB_0__::func_649(&(uParam0->f_325)))
				{
					if ((__LIB_2__::func_47(&(uParam0->f_325), uParam0->f_434, 1) && uParam0->f_1 == 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
					{
						iVar13 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f || iVar13)
				{
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					uParam0->f_336 = __LIB_35__::func_723(uParam1, uParam0);
					if (__LIB_8__::func_524(uParam0, uParam0->f_277, uParam0->f_336))
					{
						(uParam1[uParam0->f_277 /*21*/])->f_4 = 1;
						uParam0->f_439 = 1;
					}
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, __LIB_4__::func_493(uParam0->f_336), 4f, -1.5f, 5, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, __LIB_4__::func_785(uParam0->f_336), 4f, -4f, 32773);
					if (__LIB_4__::func_790(uParam0->f_277))
					{
						if ((uParam1[uParam0->f_277 /*21*/])->f_2)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, __LIB_4__::func_784(uParam0->f_336), 4f, -4f, 32773);
						}
						if ((uParam1[uParam0->f_277 /*21*/])->f_3)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, __LIB_4__::func_783(uParam0->f_336), 4f, -4f, 32773);
						}
					}
					if ((__LIB_4__::func_791(uParam0->f_277) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, __LIB_4__::func_782(uParam0->f_336), 4f, -4f, 32773);
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					__LIB_1__::func_0(uParam0, 6);
				}
			}
			if (((!__LIB_4__::func_796() && !__LIB_4__::func_788(uParam0)) && __LIB_8__::func_860(uParam0->f_277)) && __LIB_4__::func_787())
			{
				__LIB_1__::func_0(uParam0, 18);
			}
			else if (__LIB_4__::func_787())
			{
			}
			break;
		case 16:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_ENTER", 4f, -1.5f, 5, 16, 1000f, 4);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_ENTER_CHAIR", 4f, -4f, 32773);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				uParam0->f_446 = 0;
				__LIB_1__::func_0(uParam0, 17);
			}
			break;
		case 22:
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
			if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_334))
			{
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "ENTER", 4f, -4f, 5, 16, 1000f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "ENTER_CHAIR", 4f, -4f, 32773);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				__LIB_1__::func_0(uParam0, 6);
			}
			break;
		case 17:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (__LIB_4__::func_69(PLAYER::PLAYER_PED_ID()))
				{
					fVar14 = 0.53f;
				}
				else
				{
					fVar14 = 0.22f;
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= fVar14 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "COMPUTER_ENTER", 3)) && !uParam0->f_446)
				{
					if (__LIB_8__::func_863(uParam0, uParam0->f_277))
					{
						if ((!__LIB_4__::func_788(uParam0) && !__LIB_4__::func_796()) && (!__LIB_6__::func_447(PLAYER::PLAYER_ID()) || !__LIB_3__::func_585(PLAYER::PLAYER_ID())))
						{
							if (!uParam0->f_330)
							{
								__LIB_4__::func_795(uParam0, 1);
							}
							uParam0->f_446 = 1;
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f)
				{
					uParam0->f_446 = 0;
					Var15 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2) };
					Var16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true) };
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_IDLE", 4f, -1.5f, 5, 16, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_IDLE_CHAIR", 4f, -4f, 32773);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				}
			}
			bVar17 = ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "COMPUTER_IDLE", 3);
			if ((uParam0->f_330 && Global_2789734) && BitTest(uParam0->f_331, 21))
			{
				iVar18 = 1;
			}
			if (((!__LIB_4__::func_796() && !uParam0->f_330) && bVar17) || iVar18)
			{
				uParam0->f_330 = 0;
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_319, true);
				__LIB_1__::func_0(uParam0, 18);
			}
			break;
		case 18:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				if (!__LIB_8__::func_860(uParam0->f_277) || __LIB_3__::func_870(PLAYER::PLAYER_ID()))
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT", 1000f, -1.5f, 5, 0, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT_CHAIR", 1000f, -4f, 32773);
				}
				else
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "EXIT", 4f, -1.5f, 5, 0, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "EXIT_CHAIR", 4f, -4f, 32773);
				}
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				if (Global_75490 == 1)
				{
					__LIB_1__::func_0(uParam0, 11);
				}
				else
				{
					if (__LIB_8__::func_860(uParam0->f_277) && !__LIB_3__::func_870(PLAYER::PLAYER_ID()))
					{
						uParam0->f_334 = __LIB_32__::func_257(uParam0, uParam0->f_277, __LIB_6__::func_925(), 0);
					}
					__LIB_1__::func_0(uParam0, 6);
				}
			}
			break;
		case 9:
			uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit", 4f, -4f, 5, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_chair", 4f, -4f, 5);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
			MISC::CLEAR_BIT(&(uParam0->f_331), 1);
			if (uParam0->f_328)
			{
				uParam0->f_328 = 0;
				__LIB_4__::func_781(uParam0);
				uParam0->f_334 = __LIB_37__::func_906(uParam0);
			}
			if (uParam0->f_327)
			{
				uParam0->f_327 = 0;
				__LIB_4__::func_780(uParam0);
				uParam0->f_334 = __LIB_37__::func_906(uParam0);
			}
			uParam0->f_440 = 1;
			__LIB_1__::func_0(uParam0, 6);
			break;
		case 10:
			uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
			if (!__LIB_25__::func_722(uParam0))
			{
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter", 1.5f, -1.5f, 5, 16, 1.5f, 0);
			}
			else
			{
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter_LEFT", 1.5f, -1.5f, 5, 16, 1.5f, 0);
			}
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_chair", 4f, -4f, 32773);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
			if (uParam0->f_328)
			{
				uParam0->f_328 = 0;
				__LIB_4__::func_781(uParam0);
			}
			if (uParam0->f_327)
			{
				uParam0->f_327 = 0;
				__LIB_4__::func_780(uParam0);
			}
			__LIB_1__::func_0(uParam0, 6);
			break;
		case 11:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f || !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
				{
					if (!ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
					{
					}
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, __LIB_37__::func_906(uParam0), "exit", 4f, -4f, 5, 0, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, __LIB_37__::func_906(uParam0), "exit_chair", 4f, -4f, 5);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					if (__LIB_4__::func_492() || __LIB_4__::func_491())
					{
						HUD::CLEAR_HELP(true);
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					__LIB_1__::func_0(uParam0, 12);
				}
			}
			break;
		case 13:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_278);
			__LIB_1__::func_0(uParam0, 15);
			func_5001(uParam0, __LIB_3__::func_859(PLAYER::PLAYER_ID()));
			break;
		case 12:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_319);
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("destroy_weapon")))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
						{
							ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam0->f_437), false, false);
						}
					}
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					__LIB_1__::func_0(uParam0, 15);
					func_5001(uParam0, __LIB_3__::func_859(PLAYER::PLAYER_ID()));
				}
			}
			MISC::CLEAR_BIT(&(uParam0->f_331), 19);
			break;
		case 15:
			__LIB_1__::func_0(uParam0, 1);
			break;
		case 26:
			if (!__LIB_25__::func_524(uParam0, uParam1))
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_319))
			{
				if (!uParam0->f_443)
				{
					__LIB_19__::func_502(uParam0);
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT", 1000f, -1.5f, 5, 0, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT_CHAIR", 1000f, -4f, 32773);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					uParam0->f_443 = 1;
				}
			}
			if (uParam0->f_443)
			{
				iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 0.1f)
					{
						uParam0->f_443 = 0;
						CAM::DO_SCREEN_FADE_IN(750);
						__LIB_1__::func_0(uParam0, 7);
					}
				}
			}
			break;
	}
}

void func_5001(var uParam0, bool bParam1)//Position - 0x19FBA1
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_FORCE_STEP_TYPE(PLAYER::PLAYER_PED_ID(), false, 20, 0);
	}
	Global_75490 = 0;
	if (__LIB_0__::func_661())
	{
		__LIB_0__::func_789();
	}
	uParam0->f_436 = 0;
	if ((__LIB_4__::func_492() || __LIB_4__::func_491()) || __LIB_4__::func_490())
	{
		HUD::CLEAR_HELP(true);
		if (uParam0->f_320 != -1)
		{
			__LIB_7__::func_249(&(uParam0->f_320));
		}
	}
	uParam0->f_445 = 0;
	__LIB_4__::func_795(uParam0, 0);
	uParam0->f_330 = 0;
	__LIB_19__::func_540(uParam0, bParam1);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	__LIB_8__::func_118(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_331), 1);
	uParam0->f_334 = "";
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(PLAYER::GET_PLAYER_INDEX(), 0.5f);
	__LIB_1__::func_0(uParam0, 1);
	__LIB_1__::func_0(&Global_32234, 1);
	uParam0->f_316 = 0;
	uParam0->f_277 = -1;
	__LIB_4__::func_82(-1);
	if (uParam0->f_320 != -1)
	{
		__LIB_7__::func_249(&(uParam0->f_320));
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_437))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_437))
		{
			__LIB_1__::func_96(&(uParam0->f_437));
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_438))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_438))
		{
			__LIB_1__::func_96(&(uParam0->f_438));
		}
	}
	__LIB_0__::func_579(&(uParam0->f_325));
	Global_75490 = 0;
}

void func_5096(var uParam0, var uParam1)//Position - 0x1A3A17
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_278);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) && uParam1->f_277 > -1)
	{
		func_5097(uParam1, uParam0);
	}
}

void func_5097(var uParam0, var uParam1)//Position - 0x1A3A47
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("exit_interrupt")))
	{
		__LIB_0__::func_471(&iVar0, &iVar1, &iVar2, &iVar3, 0);
		if (((iVar0 > 31 || iVar1 > 31) || iVar2 > 31) || iVar3 > 31)
		{
			__LIB_1__::func_0(uParam0, 13);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
	{
		__LIB_8__::func_118(uParam0);
	}
	else
	{
		func_5098(uParam0, uParam1);
	}
}

void func_5098(var uParam0, var uParam1)//Position - 0x1A3ABE
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !Global_75489) && !__LIB_4__::func_796()) && !__LIB_0__::func_77(0)) && !__LIB_1__::func_156()) && !__LIB_3__::func_633()) && !__LIB_6__::func_964(1)) && !__LIB_4__::func_810()) && !uParam0->f_330) && !__LIB_3__::func_775())
	{
		if (*uParam0 > 5)
		{
			if (!__LIB_0__::func_1("PROP_OFF_M_6" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */) && !__LIB_0__::func_1("PROP_OFF_M_6F" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */))
			{
				if (!__LIB_8__::func_863(uParam0, uParam0->f_277) && !__LIB_3__::func_870(PLAYER::PLAYER_ID()))
				{
					func_5186(uParam0);
				}
				else if (((((__LIB_8__::func_863(uParam0, uParam0->f_277) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "exit_left", 3)) && *uParam0 != 17) && (!__LIB_0__::func_1("IE_MOD_ASSL" /* GXT: Vehicle modification canceled. One of your Associates left the mission. */) || !uParam0->f_444)) || __LIB_3__::func_870(PLAYER::PLAYER_ID()))
				{
					func_5183(uParam0);
				}
			}
		}
		if (*uParam0 > 5 && *uParam0 != 12)
		{
			__LIB_0__::func_471(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				iVar4 = 225;
			}
			else
			{
				iVar4 = 190;
			}
			if (iVar0 > 64)
			{
				if (__LIB_8__::func_523(uParam0->f_277))
				{
					if (__LIB_4__::func_809(uParam0) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4))
					{
						uParam0->f_327 = 1;
						uParam0->f_334 = __LIB_8__::func_532(uParam0, 1);
						__LIB_1__::func_0(uParam0, __LIB_4__::func_808(uParam0, 0));
					}
				}
			}
			if (iVar0 < -64)
			{
				if (__LIB_8__::func_523(uParam0->f_277))
				{
					if (__LIB_4__::func_807(uParam0) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4))
					{
						uParam0->f_328 = 1;
						uParam0->f_334 = __LIB_8__::func_532(uParam0, 0);
						__LIB_1__::func_0(uParam0, __LIB_4__::func_808(uParam0, 1));
					}
				}
			}
			if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !__LIB_0__::func_1("PROP_OFF_M_6" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */)) && !__LIB_0__::func_1("PROP_OFF_M_6F" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */)) && !__LIB_4__::func_796()) && !__LIB_4__::func_788(uParam0)) && !__LIB_4__::func_806(uParam0)) || Global_77121)
			{
				Global_77121 = 0;
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				if (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
				{
					if (__LIB_4__::func_791(uParam0->f_277) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit_B", 1.5f, -1.5f, 5, 16, 1.5f, 4);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_b_chair", 4f, -4f, 5);
					}
					else if (__LIB_8__::func_523(uParam0->f_277) && uParam0->f_1 != 1)
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit_seat", 4f, -4f, 5, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_seat_chair", 4f, -4f, 5);
					}
					else
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit", 4f, -4f, 5, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_chair", 4f, -4f, 5);
					}
				}
				else if (__LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
				{
					if (__LIB_8__::func_523(uParam0->f_277) && uParam0->f_1 != 1)
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit_seat", 4f, -4f, 5, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_seat_chair", 4f, -4f, 5);
					}
					else
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit", 4f, -4f, 5, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_chair", 4f, -4f, 5);
					}
				}
				else if (uParam0->f_444 || __LIB_8__::func_866())
				{
					if (!__LIB_25__::func_722(uParam0))
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit", 4f, -4f, 5, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_chair", 4f, -4f, 5);
					}
					else
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit_left", 4f, -4f, 5, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_left_chair", 4f, -4f, 5);
					}
				}
				if ((__LIB_4__::func_791(uParam0->f_277) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
				{
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, "exit_weapon", 4f, -4f, 32773);
				}
				if (__LIB_4__::func_790(uParam0->f_277))
				{
					if ((uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, "exit_cigar", 4f, -4f, 32773);
					}
					if ((uParam1[uParam0->f_277 /*21*/])->f_3)
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, "exit_glass", 4f, -4f, 32773);
					}
				}
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				if (__LIB_4__::func_492() || __LIB_4__::func_491())
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
				}
				MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				__LIB_1__::func_0(uParam0, 12);
			}
		}
	}
	else
	{
		if (__LIB_4__::func_796() || __LIB_1__::func_156())
		{
			if (__LIB_0__::func_649(&(uParam0->f_323)))
			{
				__LIB_0__::func_579(&(uParam0->f_323));
			}
			if (Global_75489 == 0)
			{
				Global_75489 = 1;
			}
		}
		if (__LIB_4__::func_805())
		{
			if (uParam0->f_320 != -1)
			{
				__LIB_7__::func_249(&(uParam0->f_320));
			}
		}
	}
	if (__LIB_8__::func_863(uParam0, uParam0->f_277))
	{
		if ((((((((((!__LIB_6__::func_408(PLAYER::PLAYER_ID()) && !__LIB_8__::func_531(PLAYER::PLAYER_ID())) && __LIB_6__::func_579(uParam0)) && !__LIB_25__::func_523(uParam0)) && !__LIB_1__::func_156()) && !__LIB_3__::func_633()) && !__LIB_6__::func_964(1)) && !HUD::IS_PAUSE_MENU_ACTIVE()) && (!__LIB_4__::func_973(0) || !__LIB_8__::func_530())) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((Global_1853184 == PLAYER::PLAYER_ID() && !uParam0->f_444) || ((uParam0->f_444 && __LIB_2__::func_369()) && __LIB_8__::func_495(__LIB_3__::func_599(__LIB_2__::func_431())) == PLAYER::PLAYER_ID())) || __LIB_8__::func_866()))
		{
			bVar5 = false;
			if ((((__LIB_3__::func_903(PLAYER::PLAYER_ID()) && __LIB_6__::func_25() == 0) && __LIB_1__::func_340()) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !Global_262145.f_24382 /* Tunable: 352406794 */)
			{
				bVar5 = true;
			}
			if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
			{
				if (((uParam0->f_320 != -1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && !__LIB_4__::func_796()) && !__LIB_25__::func_526())
				{
					if (__LIB_3__::func_254() == 0)
					{
						__LIB_3__::func_978(1);
					}
				}
				if (__LIB_3__::func_775())
				{
					bVar6 = true;
				}
			}
			if ((((((((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_334) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "exit_left", 3)) && *uParam0 != 17) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || bVar5)) && !__LIB_25__::func_723(PLAYER::PLAYER_ID())) && !__LIB_8__::func_529(PLAYER::PLAYER_ID())) && !bVar6)
			{
				if (*uParam0 > 5)
				{
					if ((__LIB_8__::func_530() && !__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1)) && __LIB_4__::func_794() < __LIB_4__::func_793())
					{
						__LIB_35__::func_645();
						if ((__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32) || uParam0->f_444) || __LIB_8__::func_866())
						{
							func_5099(1, 0);
						}
						else if (__LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
						{
							func_5099(1, 1);
						}
					}
					if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) || !__LIB_8__::func_530())
					{
						if (uParam0->f_320 != -1)
						{
							__LIB_7__::func_249(&(uParam0->f_320));
						}
						if (bVar5)
						{
							uParam0->f_330 = 1;
							Global_2789734 = 1;
						}
						__LIB_1__::func_0(uParam0, 16);
					}
				}
			}
		}
	}
	if (__LIB_8__::func_860(uParam0->f_277) && *uParam0 > 5)
	{
		if ((((!__LIB_1__::func_156() && !__LIB_3__::func_633()) && !__LIB_6__::func_964(1)) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_4__::func_796())
		{
			if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "exit", 3) && *uParam0 != 17) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && (!__LIB_6__::func_447(PLAYER::PLAYER_ID()) || !__LIB_3__::func_585(PLAYER::PLAYER_ID())))
			{
				if (*uParam0 > 5)
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					if (!__LIB_3__::func_870(PLAYER::PLAYER_ID()))
					{
						uParam0->f_334 = __LIB_4__::func_786(uParam0->f_2, __LIB_6__::func_925());
						__LIB_1__::func_0(uParam0, 22);
					}
					else
					{
						__LIB_1__::func_0(uParam0, 16);
					}
					__LIB_4__::func_795(uParam0, 1);
				}
			}
		}
	}
}

void func_5099(bool bParam0, int iParam1)//Position - 0x1A453E
{
	struct<14> Var0;
	func_5133(1, 1, iParam1);
	if (bParam0)
	{
		if (__LIB_1__::func_480(91) || __LIB_1__::func_480(98))
		{
			__LIB_6__::func_952();
		}
		__LIB_35__::func_645();
		__LIB_1__::func_447(17);
		Var0.f_2 = 1535844061;
		Var0.f_3 = iParam1;
		if (__LIB_2__::func_456(PLAYER::PLAYER_ID()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		__LIB_1__::func_226(Var0, __LIB_8__::func_301(0, 1));
		__LIB_42__::func_79();
		if (!__LIB_2__::func_456(PLAYER::PLAYER_ID()) && iParam1 != 1)
		{
			__LIB_37__::func_865(82, "GB_TXTMSG_INIT2" /* GXT: Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits. */, 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

void func_5133(bool bParam0, bool bParam1, int iParam2)//Position - 0x1A5C47
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* sVar5;
	struct<16> Var6;
	bool bVar7;
	int iVar8;
	if (!__LIB_6__::func_781())
	{
		return;
	}
	iVar2 = 1;
	if (__LIB_2__::func_456(PLAYER::PLAYER_ID()))
	{
		iVar2 = 2;
	}
	if (iParam2 == 1)
	{
		iVar2 = 3;
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			STATS::START_BEING_BOSS(iVar2);
			__LIB_19__::func_5(0);
			__LIB_8__::func_123(0);
			__LIB_1__::func_485(21);
			__LIB_1__::func_485(22);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_466 = iVar2;
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 = PLAYER::PLAYER_ID();
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_428 = iParam2;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_465 = iParam2;
		STATS::GET_BOSS_GOON_UUID(__LIB_0__::func_5(), &uVar3, &uVar4);
		__LIB_3__::func_651(uVar3, uVar4);
		sVar5 = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
		StringCopy(&Var6, sVar5, 64);
		__LIB_3__::func_650(Var6);
		__LIB_25__::func_724();
		if (__LIB_1__::func_556(11392, -1, 0) <= 0)
		{
			iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			iVar1 = (__LIB_1__::func_556(11392, -1, 0) - 43200);
		}
		__LIB_19__::func_4(iVar1);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 = -1;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_25 = -1;
		Global_2815059.f_5195.f_223 = -1;
		__LIB_35__::func_724();
		__LIB_18__::func_738(12, 0, 1);
		if (bParam0)
		{
			__LIB_1__::func_447(0);
		}
		if (Global_2815059.f_5195.f_259 != __LIB_0__::func_160())
		{
			Global_2815059.f_5195.f_259 = __LIB_0__::func_160();
		}
		if (BitTest(Global_2815059.f_1801, 15))
		{
			MISC::CLEAR_BIT(&(Global_2815059.f_1801), 15);
		}
		if (__LIB_3__::func_648(15))
		{
			__LIB_3__::func_647(15);
		}
		if (!__LIB_3__::func_646() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			__LIB_3__::func_645();
			__LIB_3__::func_644(2);
		}
		__LIB_1__::func_597(11432, 2, -1, 1, 0);
		__LIB_1__::func_485(31);
		__LIB_35__::func_645();
		__LIB_18__::func_980();
		__LIB_19__::func_3();
		__LIB_3__::func_641();
		if (iParam2 != 1)
		{
			if (!__LIB_3__::func_640(82, 3))
			{
				bVar7 = false;
				iVar8 = __LIB_1__::func_556(11389, -1, 0);
				if (!BitTest(iVar8, 11))
				{
					MISC::SET_BIT(&iVar8, 11);
					__LIB_1__::func_597(11389, iVar8, -1, 1, 0);
					bVar7 = true;
				}
				__LIB_24__::func_951(82, 3, bVar7);
			}
		}
		if (iParam2 == 1)
		{
			STATS::PLAYSTATS_CHANGE_MC_ROLE(__LIB_1__::func_835(__LIB_0__::func_582()), __LIB_3__::func_639(__LIB_0__::func_582()), __LIB_1__::func_834(), __LIB_1__::func_833(), Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429, 4, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_467);
		}
	}
}

void func_5183(var uParam0)//Position - 0x1A728E
{
	if (((((!Global_75490 && !__LIB_4__::func_796()) && !uParam0->f_330) && !Global_1946220) && !__LIB_4__::func_806(uParam0)) && CAM::IS_SCREEN_FADED_IN())
	{
		if (__LIB_25__::func_523(uParam0) && !__LIB_3__::func_870(PLAYER::PLAYER_ID()))
		{
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (((__LIB_0__::func_1("WHPRVSESINPUTPC" /* GXT: Join a public session to access the SecuroServ network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("ORPRVSESINPUTPC" /* GXT: Join a public session to access the Open Road network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("AHAPRVSESINPTPC" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARPRVSESINPTPC" /* GXT: Join a public session to access the Arcade Management app. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (__LIB_1__::func_188(uParam0->f_318))
				{
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "WHPRIVSESINPUT" /* GXT: Join a public session to access the SecuroServ network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
				{
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "ARCPRIVSESINPUT" /* GXT: Join a public session to access the Arcade Management app. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if ((((uParam0->f_444 || __LIB_4__::func_488()) || __LIB_2__::func_861()) || __LIB_4__::func_331()) || __LIB_2__::func_441())
				{
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "AHAPRIVSESINPUT" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "ORPRIVSESINPUT" /* GXT: Join a public session to access the Open Road network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (((__LIB_0__::func_1("WHPRIVSESINPUT" /* GXT: Join a public session to access the SecuroServ network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("ORPRIVSESINPUT" /* GXT: Join a public session to access the Open Road network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("AHAPRIVSESINPUT" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCPRIVSESINPUT" /* GXT: Join a public session to access the Arcade Management app. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (__LIB_1__::func_188(uParam0->f_318))
				{
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "WHPRVSESINPUTPC" /* GXT: Join a public session to access the SecuroServ network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
				{
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "ARPRVSESINPTPC" /* GXT: Join a public session to access the Arcade Management app. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if ((((uParam0->f_444 || __LIB_4__::func_488()) || __LIB_2__::func_861()) || __LIB_4__::func_331()) || __LIB_2__::func_441())
				{
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "AHAPRVSESINPTPC" /* GXT: Join a public session to access the Ad-Hawk Autos network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "ORPRVSESINPUTPC" /* GXT: Join a public session to access the Open Road network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else if (__LIB_1__::func_359(PLAYER::PLAYER_ID()) && __LIB_1__::func_188(uParam0->f_318))
		{
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_0__::func_1("WHBKRSESINPUTPC" /* GXT: You need to register as a SecuroServ CEO to access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "WHBKRSESINPUT" /* GXT: You need to register as a SecuroServ CEO to access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (__LIB_0__::func_1("WHBKRSESINPUT" /* GXT: You need to register as a SecuroServ CEO to access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "WHBKRSESINPUTPC" /* GXT: You need to register as a SecuroServ CEO to access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else if ((__LIB_2__::func_192(PLAYER::PLAYER_ID()) && !__LIB_1__::func_359(PLAYER::PLAYER_ID())) && __LIB_0__::func_630(uParam0->f_318, -1))
		{
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_0__::func_1("CLBHBKRINPUTPC" /* GXT: You need to be the President of a Motorcycle Club to access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "CLBHBKRINPUT" /* GXT: You need to be the President of a Motorcycle Club to access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (__LIB_0__::func_1("CLBHBKRINPUT" /* GXT: You need to be the President of a Motorcycle Club to access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "CLBHBKRINPUTPC" /* GXT: You need to be the President of a Motorcycle Club to access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else if (__LIB_25__::func_723(PLAYER::PLAYER_ID()) && __LIB_1__::func_188(uParam0->f_318))
		{
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_0__::func_1("PIM_EXECH0x3" /* GXT: SecuroServ access is currently blocked due to your recent behavior.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "PIM_EXECH0x2" /* GXT: SecuroServ access is currently blocked due to your recent behavior.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (__LIB_0__::func_1("PIM_EXECH0x2" /* GXT: SecuroServ access is currently blocked due to your recent behavior.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "PIM_EXECH0x3" /* GXT: SecuroServ access is currently blocked due to your recent behavior.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else if (((((__LIB_6__::func_408(PLAYER::PLAYER_ID()) || __LIB_7__::func_379(PLAYER::PLAYER_ID())) || __LIB_8__::func_531(PLAYER::PLAYER_ID())) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !__LIB_3__::func_870(PLAYER::PLAYER_ID())) && !__LIB_25__::func_525(1))
		{
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_0__::func_1("OFF_COMP_MIS_PC" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (__LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_MIS_PC" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else if (((__LIB_4__::func_973(0) && !__LIB_18__::func_447(0)) && !__LIB_3__::func_870(PLAYER::PLAYER_ID())) && !__LIB_25__::func_525(1))
		{
			if (__LIB_0__::func_1("OFF_COMP_MIS_PC" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_320));
			}
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_0__::func_1("OFF_COMP_BDY_PC" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("OFF_COMP_CHV_PC" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (__LIB_2__::func_456(__LIB_2__::func_191(PLAYER::PLAYER_ID())))
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_CHV" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_1("OFF_COMP_BDY" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("OFF_COMP_CHV" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (__LIB_2__::func_456(__LIB_2__::func_191(PLAYER::PLAYER_ID())))
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_BDY_PC" /* GXT: This computer is unavailable when working as an Associate. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_CHV_PC" /* GXT: This computer is unavailable when working as a Bodyguard for a VIP. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
			}
		}
		else if ((__LIB_18__::func_447(0) && !__LIB_3__::func_870(PLAYER::PLAYER_ID())) && !__LIB_25__::func_525(1))
		{
			if (__LIB_0__::func_1("OFF_COMP_MIS_PC" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_320));
			}
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_0__::func_1("OFF_COMP_CH_PC" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_CH" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (__LIB_0__::func_1("OFF_COMP_CH" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_CH_PC" /* GXT: This computer is unavailable when working for an MC President. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("OFF_COMP_MIS_PC" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("OFF_COMP_MIS" /* GXT: This computer is unavailable during a mission. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&(uParam0->f_320));
			}
			if ((__LIB_2__::func_192(PLAYER::PLAYER_ID()) || __LIB_3__::func_870(PLAYER::PLAYER_ID())) || __LIB_25__::func_525(1))
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (((((((((((__LIB_0__::func_1("WHOUSEINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CLBHINPUTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("IEAPPINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_PC_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("BSS_CHR_NODJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPINPUTSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MCTAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("FHQ_PC_TRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
					{
						HUD::CLEAR_HELP(true);
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!__LIB_25__::func_523(uParam0) || __LIB_3__::func_870(PLAYER::PLAYER_ID()))
						{
							if ((__LIB_3__::func_903(PLAYER::PLAYER_ID()) && __LIB_6__::func_25() == 0) && __LIB_1__::func_340())
							{
								if (__LIB_8__::func_125(PLAYER::PLAYER_ID()) == 3)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "CHAIR_DJ_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else if (__LIB_8__::func_125(PLAYER::PLAYER_ID()) == 2)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "CHAIR_DJ_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "CHAIR_DJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if ((__LIB_1__::func_188(uParam0->f_318) || __LIB_7__::func_916(PLAYER::PLAYER_ID())) || __LIB_3__::func_870(PLAYER::PLAYER_ID()))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "WHOUSEINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "FHQ_PC_TRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_3__::func_903(PLAYER::PLAYER_ID()))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "BSS_CHR_NODJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
							{
								if (uParam0->f_277 == 1)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "MCTAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else if (!__LIB_25__::func_526() && __LIB_3__::func_254() == 0)
								{
									if (__LIB_0__::func_1("ARCAPTRIGNOSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
									{
										HUD::CLEAR_HELP(true);
										__LIB_7__::func_249(&(uParam0->f_320));
									}
									else
									{
										__LIB_7__::func_316(&(uParam0->f_320), 4, "ARCAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
									}
								}
								else
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "ARCAPTRIGNOSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if (uParam0->f_444 || __LIB_8__::func_866())
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "IEAPPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_0__::func_630(uParam0->f_318, -1))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "CLBHINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
						else
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
					{
						if (__LIB_25__::func_526() || __LIB_3__::func_254() != 0)
						{
						}
						else if (__LIB_0__::func_1("ARCAPTRIGNOSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam0->f_320));
						}
					}
				}
				else
				{
					if (((((((((((__LIB_0__::func_1("WHOUSEINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("CLBHINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("IEAPPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("CHAIR_DJ_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("BSS_CHR_NODJ" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MCTAPINPUTTRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("ARCAPTRIGNOSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("FHQ_PC_TRIG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
					{
						HUD::CLEAR_HELP(true);
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!__LIB_25__::func_523(uParam0) || __LIB_3__::func_870(PLAYER::PLAYER_ID()))
						{
							if ((__LIB_3__::func_903(PLAYER::PLAYER_ID()) && __LIB_6__::func_25() == 0) && __LIB_1__::func_340())
							{
								if (__LIB_8__::func_125(PLAYER::PLAYER_ID()) == 3)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "CHAIR_DJ_PC_BM" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else if (__LIB_8__::func_125(PLAYER::PLAYER_ID()) == 2)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "CHAIR_DJ_PC_TOU" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "CHAIR_DJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if ((__LIB_1__::func_188(uParam0->f_318) || __LIB_7__::func_916(PLAYER::PLAYER_ID())) || __LIB_3__::func_870(PLAYER::PLAYER_ID()))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "WHOUSEINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this desktop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_4__::func_738(PLAYER::PLAYER_ID()))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "FHQ_PC_TRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to login to the Agency Network. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_3__::func_903(PLAYER::PLAYER_ID()))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "BSS_CHR_NODJ_PC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Nightclub Management app. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
							{
								if (uParam0->f_277 == 1)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "MCTAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the Master Control Terminal. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else if (__LIB_25__::func_526() || __LIB_3__::func_254() != 0)
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "ARCAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else if (__LIB_0__::func_1("ARCAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
								{
									HUD::CLEAR_HELP(true);
									__LIB_7__::func_249(&(uParam0->f_320));
								}
								else
								{
									__LIB_7__::func_316(&(uParam0->f_320), 4, "ARCAPINPUTSET" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_FRONTEND_X~ to manage arcade games. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if (uParam0->f_444 || __LIB_8__::func_866())
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "IEAPPINPUTTRPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access this laptop computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_0__::func_630(uParam0->f_318, -1))
							{
								__LIB_7__::func_316(&(uParam0->f_320), 4, "CLBHINPUTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to securely access the Open Road website. Business gameplay is only available in Public Sessions. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
						else
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_5__::func_610(PLAYER::PLAYER_ID()))
					{
						if (__LIB_25__::func_526() || __LIB_3__::func_254() != 0)
						{
						}
						else if (__LIB_0__::func_1("ARCAPTTRIGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to access the laptop. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
						{
							HUD::CLEAR_HELP(true);
							__LIB_7__::func_249(&(uParam0->f_320));
						}
					}
				}
			}
			else if (__LIB_4__::func_794() >= __LIB_4__::func_793())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (((__LIB_0__::func_1("OFF_COMP_VIP_PC" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
					{
						HUD::CLEAR_HELP(true);
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!__LIB_25__::func_523(uParam0))
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_VIP" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					if (((__LIB_0__::func_1("OFF_COMP_VIP" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
					{
						HUD::CLEAR_HELP(true);
						__LIB_7__::func_249(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!__LIB_25__::func_523(uParam0))
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "OFF_COMP_VIP_PC" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if ((((__LIB_0__::func_1("SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("ORINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_VIP" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_VIP_PC" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (!__LIB_25__::func_523(uParam0))
					{
						if ((__LIB_1__::func_188(uParam0->f_318) || uParam0->f_444) || __LIB_8__::func_866())
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else if (__LIB_0__::func_630(uParam0->f_318, -1))
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "ORINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if ((((__LIB_0__::func_1("SECINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */) || __LIB_0__::func_1("ORINPUTTREG" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_VIP" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("OFF_COMP_VIP_PC" /* GXT: This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_7__::func_249(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (!__LIB_25__::func_523(uParam0))
					{
						if ((__LIB_1__::func_188(uParam0->f_318) || uParam0->f_444) || __LIB_8__::func_866())
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "SECINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to register as a SecuroServ CEO and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else if (__LIB_0__::func_630(uParam0->f_318, -1))
						{
							__LIB_7__::func_316(&(uParam0->f_320), 4, "ORINPUTTREGPC" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to found a Motorcycle Club and access this computer. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else
					{
						__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	else if (Global_1946220 && __LIB_4__::func_491())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_5186(var uParam0)//Position - 0x1A8309
{
	if (__LIB_4__::func_790(uParam0->f_277))
	{
		if (__LIB_1__::func_188(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32) || __LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
		{
			switch (uParam0->f_1)
			{
				case 0:
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_0__::func_187("MPOFSEAT_EXIT_L" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */);
					}
					else
					{
						__LIB_0__::func_187("MPOFSEAT_EXIT_PCL" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */);
					}
					break;
				case 1:
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_0__::func_187("MPOFSEAT_EXIT_C" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */);
					}
					else
					{
						__LIB_0__::func_187("MPOFSEAT_EX_PCC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */);
					}
					break;
				case 2:
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_0__::func_187("MPOFSEAT_EXIT_R" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */);
					}
					else
					{
						__LIB_0__::func_187("MPOFSEAT_EXIT_PCR" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */);
					}
					break;
				}
		}
	}
	else if (__LIB_8__::func_860(uParam0->f_277) && !__LIB_3__::func_870(PLAYER::PLAYER_ID()))
	{
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_0__::func_187("OFFLAPTOP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */);
		}
		else
		{
			__LIB_0__::func_187("OFFLAPTOPPC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. ~n~Press ~INPUT_FRONTEND_ACCEPT~ to use the laptop. */);
		}
	}
	else if (uParam0->f_277 == 0 && __LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1))
	{
		switch (uParam0->f_1)
		{
			case 0:
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_0__::func_187("MPOFSEAT_EXIT_L" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */);
				}
				else
				{
					__LIB_0__::func_187("MPOFSEAT_EXIT_PCL" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */);
				}
				break;
			case 1:
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_0__::func_187("MPOFSEAT_EXIT_C" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */);
				}
				else
				{
					__LIB_0__::func_187("MPOFSEAT_EX_PCC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */);
				}
				break;
			case 2:
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_0__::func_187("MPOFSEAT_EXIT_R" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */);
				}
				else
				{
					__LIB_0__::func_187("MPOFSEAT_EXIT_PCR" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */);
				}
				break;
		}
	}
	else if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (uParam0->f_320 == -1)
		{
			__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
		}
	}
	else if (uParam0->f_320 == -1)
	{
		__LIB_7__::func_316(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
	}
}

void func_5193()//Position - 0x1A8AB3
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	iLocal_859 = iLocal_859;
	func_5222();
	func_5218();
	func_5217();
	__LIB_9__::func_74();
	__LIB_25__::func_829();
	func_5206();
	switch (Global_32234)
	{
		case 0:
			__LIB_1__::func_0(&Global_32234, 1);
			break;
		case 1:
			Var0 = { Local_839[iLocal_858 /*6*/] };
			Var1 = { Local_839[iLocal_858 /*6*/].f_3 };
			Local_847 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var1.f_2, Local_850) };
			Local_848 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var1.f_2, Local_851) };
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_847, Local_848, func_5205(iLocal_858), false, true, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_1__::func_0(&Global_32234, 2);
			}
			else
			{
				iLocal_858++;
				if (iLocal_858 >= __LIB_2__::func_386())
				{
					iLocal_858 = 0;
				}
			}
			break;
		case 2:
			iLocal_859 = (72 + iLocal_858);
			if (((((!__LIB_3__::func_633() && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !__LIB_0__::func_661()) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_0__::func_77(0) && !__LIB_4__::func_495())
				{
					if (!__LIB_4__::func_494())
					{
						if (__LIB_3__::func_38(iLocal_858))
						{
							func_5201(func_5202(iLocal_858));
						}
						else
						{
							func_5201(0);
						}
					}
				}
				else if (iLocal_796 != -1)
				{
					__LIB_7__::func_249(&iLocal_796);
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !__LIB_4__::func_495()) && !__LIB_6__::func_523())
				{
					iLocal_801 = iLocal_858;
					__LIB_4__::func_82(iLocal_801);
					Local_792[PLAYER::PLAYER_ID() /*10*/].f_9 = iLocal_801;
					if (iLocal_796 != -1)
					{
						__LIB_7__::func_249(&iLocal_796);
					}
					if (__LIB_1__::func_188(iLocal_838) || __LIB_18__::func_376(iLocal_838, 0, 0))
					{
						if (func_5198())
						{
							iLocal_854 = 3;
						}
						else
						{
							iLocal_854 = 1;
						}
					}
					else if (__LIB_0__::func_630(iLocal_838, -1))
					{
						iLocal_854 = 0;
					}
					MISC::CLEAR_BIT(&uLocal_798, 1);
					__LIB_1__::func_0(&Global_32234, 3);
				}
			}
			else if (!__LIB_3__::func_633())
			{
				if (iLocal_796 != -1)
				{
					__LIB_7__::func_249(&iLocal_796);
				}
				MISC::CLEAR_BIT(&uLocal_798, 1);
			}
			Var0 = { Local_839[iLocal_858 /*6*/] };
			Var1 = { Local_839[iLocal_858 /*6*/].f_3 };
			Local_847 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var1.f_2, Local_850) };
			Local_848 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var1.f_2, Local_851) };
			if (__LIB_0__::func_630(iLocal_838, 97))
			{
				if (iLocal_858 == 6)
				{
					Local_847 = { 1002.84735f, -3169.6064f, -35.04642f };
					Local_848 = { 1001.694f, -3169.6191f, -33.29642f };
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_847, Local_848, func_5205(iLocal_858), false, true, 0))
			{
				if (iLocal_796 != -1)
				{
					__LIB_7__::func_249(&iLocal_796);
				}
				MISC::CLEAR_BIT(&uLocal_798, 1);
				__LIB_1__::func_0(&Global_32234, 1);
			}
			break;
		case 3:
			sLocal_802 = __LIB_6__::func_522(iLocal_854, __LIB_6__::func_925());
			__LIB_1__::func_0(&Global_32234, 4);
			break;
		case 4:
			STREAMING::REQUEST_ANIM_DICT(sLocal_802);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_802))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_802);
				return;
			}
			Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_802, "enter", Local_839[iLocal_858 /*6*/], Local_839[iLocal_858 /*6*/].f_3, 0f, 2) };
			Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_802, "enter", Local_839[iLocal_858 /*6*/], Local_839[iLocal_858 /*6*/].f_3, 0f, 2) };
			fVar4 = Var3.f_2;
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var2, 1f, 100, fVar4, 0.01f);
			__LIB_1__::func_0(&Global_32234, 5);
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
			{
				__LIB_8__::func_869();
				iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, "enter", 1.5f, -1.5f, 13, 16, 1.5f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
				__LIB_1__::func_0(&Global_32234, 6);
			}
			break;
		case 24:
			break;
		case 6:
			if (__LIB_1__::func_188(iLocal_838))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("destroy_remote")))
				{
				}
			}
			iVar5 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
			if (iVar5 != -1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= 1f)
				{
					Var6 = { Local_839[iLocal_801 /*6*/] };
					Var7 = { Local_839[iLocal_801 /*6*/].f_3 };
					iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var6, Var7, 2, true, false, 1f, 0f, 1f);
					if (iLocal_860)
					{
						iLocal_860 = 0;
					}
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, "base", 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
					__LIB_1__::func_0(&Global_32234, 7);
				}
			}
			break;
		case 7:
			iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
			if (iVar8 != -1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 1f)
				{
					Var9 = { Local_839[iLocal_801 /*6*/] };
					Var10 = { Local_839[iLocal_801 /*6*/].f_3 };
					iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var9, Var10, 2, true, false, 1f, 0f, 1f);
					iLocal_857 = func_5195();
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, __LIB_4__::func_493(iLocal_857), 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
					Global_1888109 = 0;
					__LIB_1__::func_0(&Global_32234, 6);
				}
			}
			break;
		case 18:
			iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
			if (iVar8 != -1)
			{
				iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, "COMPUTER_EXIT", 4f, -1.5f, 12, 0, 1000f, 4);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iLocal_863, iLocal_797, sLocal_802, "COMPUTER_EXIT_CHAIR", 4f, -4f, 32781);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
				if (Global_75490 == 1)
				{
					__LIB_1__::func_0(&Global_32234, 11);
				}
				else
				{
					__LIB_1__::func_0(&Global_32234, 6);
				}
			}
			break;
		case 9:
			iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, "exit", 4f, -4f, 12, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
			MISC::CLEAR_BIT(&uLocal_798, 1);
			__LIB_1__::func_0(&Global_32234, 6);
			break;
		case 19:
			break;
		case 23:
			break;
		case 21:
			break;
		case 20:
			break;
		case 11:
			iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
			if (iVar8 != -1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 1f || !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
				{
					if (!ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
					{
					}
					iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, func_5194(), "exit", 4f, -4f, 13, 0, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iLocal_863, iLocal_797, sLocal_802, "exit_CHAIR", 4f, -4f, 32781);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
					if (iLocal_796 != -1)
					{
						__LIB_7__::func_249(&iLocal_796);
					}
					MISC::CLEAR_BIT(&uLocal_798, 1);
					__LIB_1__::func_0(&Global_32234, 12);
				}
			}
			break;
		case 13:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iLocal_797);
			__LIB_1__::func_0(&Global_32234, 15);
			func_331(0);
			break;
		case 14:
			if (iLocal_801 != -1)
			{
				iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, "exit", 4f, -4f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
				if (iLocal_796 != -1)
				{
					__LIB_7__::func_249(&iLocal_796);
				}
				MISC::CLEAR_BIT(&uLocal_798, 1);
				__LIB_1__::func_0(&Global_32234, 25);
			}
			break;
		case 25:
			iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
			if (iVar8 != -1)
			{
				__LIB_1__::func_0(&Global_32234, 12);
			}
			break;
		case 12:
			iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
			if (iVar8 != -1)
			{
				if (__LIB_1__::func_188(iLocal_838))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("destroy_weapon")))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
						{
						}
					}
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iLocal_797);
					__LIB_1__::func_0(&Global_32234, 15);
					func_331(0);
				}
			}
			break;
		case 15:
			__LIB_1__::func_0(&Global_32234, 1);
			break;
	}
}

char* func_5194()//Position - 0x1A93B4
{
	char* sVar0;
	if (__LIB_4__::func_791(iLocal_801))
	{
		if (__LIB_6__::func_925())
		{
			sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE@";
		}
		else
		{
			sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE@";
		}
	}
	else
	{
		switch (iLocal_864)
		{
			case -1:
				break;
			case 0:
				if (__LIB_6__::func_925())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
				}
				break;
			case 1:
				if (__LIB_6__::func_925())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
				}
				break;
			case 2:
				if (__LIB_6__::func_925())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
				}
				break;
			}
	}
	return sVar0;
}

int func_5195()//Position - 0x1A9457
{
	int iVar0;
	int iVar1;
	iVar1 = 3;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	while (iVar0 == iLocal_862 || iVar0 == iLocal_861)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	iLocal_861 = iLocal_862;
	iLocal_862 = iVar0;
	return iVar0;
}

int func_5198()//Position - 0x1A9524
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_925())
	{
		iVar0 = func_598(PLAYER::PLAYER_PED_ID(), 11, -1);
		iVar1 = func_598(PLAYER::PLAYER_PED_ID(), 4, -1);
		if (__LIB_6__::func_802(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 11, iVar0, -1) || __LIB_8__::func_853(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 4, iVar1, -1))
		{
			return 0;
		}
	}
	return 1;
}

void func_5201(int iParam0)//Position - 0x1A965F
{
	if (__LIB_0__::func_1("MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */) || __LIB_0__::func_1("MPOFFCH_NO_SIT" /* GXT: Only the owner can sit at the desk. */))
	{
		__LIB_7__::func_249(&iLocal_796);
		HUD::CLEAR_HELP(true);
	}
	if (iLocal_796 == -1)
	{
		if (iParam0 && __LIB_1__::func_188(iLocal_838))
		{
			__LIB_7__::func_316(&iLocal_796, 4, "MPTV_WALKOFF" /* GXT: Press ~INPUT_CONTEXT~ to sit down, watch TV or play "Don't Cross The Line". */, 0, 0, 0, 0);
		}
		else
		{
			__LIB_7__::func_316(&iLocal_796, 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
		}
	}
}

int func_5202(int iParam0)//Position - 0x1A96CB
{
	if (__LIB_1__::func_188(iLocal_838))
	{
		switch (iParam0)
		{
			case 3:
			case 4:
			case 5:
				return 1;
				break;
		}
	}
	else if (__LIB_0__::func_630(iLocal_838, -1))
	{
		if (__LIB_1__::func_984(iLocal_838) == 91)
		{
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					return 1;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_5205(int iParam0)//Position - 0x1A9793
{
	switch (iParam0)
	{
		case 6:
			return (fLocal_849 * 1.368f);
			break;
		case 13:
		case 14:
			return (fLocal_849 * 2f);
			break;
		case 11:
		case 12:
			return (fLocal_849 * 0.8f);
			break;
	}
	return fLocal_849;
}

void func_5206()//Position - 0x1A97EC
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_797);
	if (iVar0 != -1 && iLocal_801 > -1)
	{
		func_5207();
	}
}

void func_5207()//Position - 0x1A9812
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("exit_interrupt")))
	{
		__LIB_0__::func_471(&iVar0, &iVar1, &iVar2, &iVar3, 0);
		if (((iVar0 > 31 || iVar1 > 31) || iVar2 > 31) || iVar3 > 31)
		{
			__LIB_1__::func_0(&Global_32234, 13);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
	{
		func_335();
	}
	else
	{
		func_5208();
	}
}

void func_5208()//Position - 0x1A9884
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<8> Var5;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_661()) && !__LIB_0__::func_77(0)) && !__LIB_1__::func_156()) && !__LIB_3__::func_633()) && !__LIB_6__::func_964(1))
	{
		if (Global_32234 > 5)
		{
			if (!__LIB_0__::func_1("PROP_OFF_M_6" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */) && !__LIB_0__::func_1("PROP_OFF_M_6F" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_802, "exit", 3) && Global_32234 != 17)
				{
					func_5213();
				}
			}
		}
		if (Global_32234 > 5 && Global_32234 != 12)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				iVar0 = 225;
			}
			else
			{
				iVar0 = 190;
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && !__LIB_0__::func_1("PROP_OFF_M_6" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */)) && !__LIB_0__::func_1("PROP_OFF_M_6F" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */))
			{
				iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, "exit", 4f, -4f, 12, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
				if (iLocal_796 != -1)
				{
					__LIB_7__::func_249(&iLocal_796);
				}
				MISC::CLEAR_BIT(&uLocal_798, 1);
				__LIB_1__::func_0(&Global_32234, 25);
			}
			__LIB_0__::func_471(&iVar1, &uVar2, &uVar3, &uVar4, 0);
			if (((((((iVar1 < -64 || iVar1 > 64) && __LIB_2__::func_47(&uLocal_799, 500, 1)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)) && !__LIB_0__::func_1("PROP_OFF_M_6" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */)) && !__LIB_0__::func_1("PROP_OFF_M_6F" /* GXT: Someone is buzzing your Office. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer or speak to the Executive Assistant */)) && __LIB_23__::func_164(iLocal_801)) && func_5198())
			{
				__LIB_0__::func_495(&uLocal_799, 1, 0);
				iLocal_797 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_839[iLocal_801 /*6*/], Local_839[iLocal_801 /*6*/].f_3, 2, true, false, 1f, 0f, 1f);
				Var5 = { func_5210(iLocal_854, __LIB_4__::func_69(PLAYER::PLAYER_PED_ID()), __LIB_6__::func_526(iLocal_801)) };
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_797, sLocal_802, &Var5, 4f, -4f, 12, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_797);
				MISC::CLEAR_BIT(&uLocal_798, 1);
				sLocal_802 = __LIB_6__::func_522(__LIB_6__::func_525(iLocal_854, __LIB_4__::func_69(PLAYER::PLAYER_PED_ID()), __LIB_6__::func_526(iLocal_801)), __LIB_6__::func_925());
				iLocal_854 = __LIB_6__::func_525(iLocal_854, __LIB_4__::func_69(PLAYER::PLAYER_PED_ID()), __LIB_6__::func_526(iLocal_801));
				__LIB_1__::func_0(&Global_32234, 6);
			}
		}
	}
	else
	{
		if (__LIB_0__::func_661() || __LIB_1__::func_156())
		{
			if (__LIB_0__::func_649(&uLocal_855))
			{
				__LIB_0__::func_579(&uLocal_855);
			}
		}
		if (iLocal_796 != -1)
		{
			__LIB_7__::func_249(&iLocal_796);
		}
	}
}

struct<8> func_5210(int iParam0, var uParam1, var uParam2)//Position - 0x1A9BC3
{
	struct<8> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "A_TO_", 32);
			break;
		case 1:
			StringCopy(&Var0, "B_TO_", 32);
			break;
		case 2:
			StringCopy(&Var0, "C_TO_", 32);
			break;
		case 3:
			StringCopy(&Var0, "D_TO_", 32);
			break;
		case 4:
			StringCopy(&Var0, "E_TO_", 32);
			break;
	}
	switch (__LIB_6__::func_525(iParam0, uParam1, uParam2))
	{
		case 0:
			StringConCat(&Var0, "A", 32);
			break;
		case 1:
			StringConCat(&Var0, "B", 32);
			break;
		case 2:
			StringConCat(&Var0, "C", 32);
			break;
		case 3:
			StringConCat(&Var0, "D", 32);
			break;
		case 4:
			StringConCat(&Var0, "E", 32);
			break;
	}
	return Var0;
}

void func_5213()//Position - 0x1A9CD6
{
	if (func_5198())
	{
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (__LIB_0__::func_1("MPOF_AC_PC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&iLocal_796);
			}
			if (iLocal_796 == -1)
			{
				__LIB_7__::func_316(&iLocal_796, 4, "MPOF_AC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
			}
		}
		else
		{
			if (__LIB_0__::func_1("MPOF_AC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_7__::func_249(&iLocal_796);
			}
			if (iLocal_796 == -1)
			{
				__LIB_7__::func_316(&iLocal_796, 4, "MPOF_AC_PC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
			}
		}
	}
	else if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
		{
			HUD::CLEAR_HELP(true);
			__LIB_7__::func_249(&iLocal_796);
		}
		if (iLocal_796 == -1)
		{
			__LIB_7__::func_316(&iLocal_796, 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
		}
	}
	else
	{
		if (__LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
		{
			HUD::CLEAR_HELP(true);
			__LIB_7__::func_249(&iLocal_796);
		}
		if (iLocal_796 == -1)
		{
			__LIB_7__::func_316(&iLocal_796, 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
		}
	}
}

void func_5217()//Position - 0x1A9ECE
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { Local_839[iLocal_858 /*6*/] };
	Var1 = { Local_839[iLocal_858 /*6*/].f_3 };
	Local_847 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var1.f_2, Local_850) };
	Local_848 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var1.f_2, Local_851) };
	if (__LIB_0__::func_630(iLocal_838, 97))
	{
		if (iLocal_858 == 6)
		{
			Local_847 = { 1002.84735f, -3169.6064f, -35.04642f };
			Local_848 = { 1001.694f, -3169.6191f, -33.29642f };
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_847, Local_848, func_5205(iLocal_858), false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.15f);
	}
}

void func_5218()//Position - 0x1A9F87
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((iVar1 != __LIB_0__::func_160() && PLAYER::PLAYER_ID() != iVar1) && __LIB_1__::func_264(iVar1, 1, 1)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1)) && Local_792[iVar1 /*10*/].f_9 != -1)
		{
			if (!iLocal_852[iVar1])
			{
				if (func_5220(iVar0))
				{
					iLocal_852[iVar1] = 1;
				}
			}
		}
		else if (PLAYER::PLAYER_ID() != iVar1)
		{
			if (iLocal_852[iVar0])
			{
				func_5219(iVar0);
				iLocal_852[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_5219(int iParam0)//Position - 0x1AA028
{
	OBJECT::DELETE_OBJECT(&(iLocal_853[iParam0]));
}

int func_5220(int iParam0)//Position - 0x1AA03B
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = Local_792[iParam0 /*10*/].f_9;
	if (__LIB_0__::func_630(iLocal_838, -1) && __LIB_1__::func_984(iLocal_838) == 91)
	{
		if (iVar0 == 0 || iVar0 == 2)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("prop_phonebox_03"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_phonebox_03")) && iVar1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_853[iParam0]))
		{
			iLocal_853[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_phonebox_03"), Local_839[iVar0 /*6*/], false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_853[iParam0], Local_839[iVar0 /*6*/].f_3, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_853[iParam0], true);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_853[iParam0], false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_853[iParam0], PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam0)), false);
			Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_839[iVar0 /*6*/], Local_839[iVar0 /*6*/].f_3.f_2, Local_840) };
			ENTITY::SET_ENTITY_VISIBLE(iLocal_853[iParam0], false, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_853[iParam0], Var2, true, false, false, true);
			Var3 = { Local_839[iVar0 /*6*/].f_3 - Local_840.f_3 };
			__LIB_9__::func_75(Var3);
			ENTITY::SET_ENTITY_ROTATION(iLocal_853[iParam0], Var3, 2, true);
		}
		return 1;
	}
	return 0;
}

void func_5222()//Position - 0x1AA1D6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_2__::func_386())
	{
		func_5223(iVar0, &(Local_839[iVar0 /*6*/]), &(Local_839[iVar0 /*6*/].f_3), 0);
		Local_840 = { 0f, -0.72f, 0f };
		Local_840.f_3 = { 0f, 0f, 177.84f };
		iVar0++;
	}
}

void func_5223(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1AA224
{
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				*uParam1 = { 958.374f, -3001.805f, -40.644f };
				*uParam2 = { 0f, 0f, 90f };
			}
			else
			{
				*uParam1 = { 958.374f, -3001.805f, -40.644f };
				*uParam2 = { 0f, 0f, 90f };
			}
			break;
		case 1:
			if (bParam3)
			{
				*uParam1 = { 958.374f, -3000.684f, -40.644f };
				*uParam2 = { 0f, 0f, 90f };
			}
			else
			{
				*uParam1 = { 958.374f, -3000.684f, -40.644f };
				*uParam2 = { 0f, 0f, 90f };
			}
			break;
		case 2:
			if (bParam3)
			{
				*uParam1 = { 962.486f, -3002.038f, -40.644f };
				*uParam2 = { 0f, 0f, 15.84f };
			}
			else
			{
				*uParam1 = { 962.486f, -3002.038f, -40.644f };
				*uParam2 = { 0f, 0f, 15.84f };
			}
			break;
		case 3:
			if (bParam3)
			{
				*uParam1 = { -2.078f, 10.51f, 1.1f };
				*uParam2 = { 0f, 0f, 180f };
			}
			else
			{
				*uParam1 = { -2.078f, 10.51f, 1.1f };
				*uParam2 = { 0f, 0f, 180f };
			}
			break;
	}
}

void func_5226()//Position - 0x1AA3D4
{
	func_5237();
	__LIB_39__::func_803(&(Local_792[PLAYER::PLAYER_ID() /*10*/].f_1), &Local_776);
	if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_32__::func_259(&(Local_258.f_2), &Global_4194304);
		}
	}
	func_331(0);
	__LIB_6__::func_580(&iLocal_782);
	func_5233();
	__LIB_6__::func_575(&(Local_795.f_478));
	func_5231();
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 3);
	if (HUD::DOES_BLIP_EXIST(iLocal_762))
	{
		HUD::REMOVE_BLIP(&iLocal_762);
	}
	__LIB_19__::func_961(PLAYER::PLAYER_ID(), 0);
	func_5229();
	__LIB_7__::func_390();
	Global_1946236 = 0;
	Global_1946237 = 0;
	if (__LIB_2__::func_245())
	{
		__LIB_0__::func_801();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 360, false);
	}
	if (Local_795.f_55 == PLAYER::PLAYER_ID())
	{
		func_5228();
		if (Local_795.f_1092)
		{
			if (__LIB_1__::func_165() >= 0 && __LIB_1__::func_165() < 363)
			{
				__LIB_1__::func_597(__LIB_1__::func_368(1, __LIB_1__::func_165()), Global_1585857[__LIB_1__::func_165() /*142*/].f_103, -1, 1, 0);
			}
		}
	}
	if (Local_130.f_320 != -1)
	{
		__LIB_7__::func_249(&(Local_130.f_320));
	}
	__LIB_0__::func_199();
}

void func_5228()//Position - 0x1AA513
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = (iVar0 + __LIB_18__::func_704(11));
		__LIB_1__::func_327(iVar2, &iVar1, 0);
		if (iVar1 >= 0 && BitTest(Global_1585857[iVar1 /*142*/].f_103, 23))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar1 /*142*/].f_103), 23);
		}
		iVar0++;
	}
}

void func_5229()//Position - 0x1AA56B
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1 && __LIB_1__::func_179(iVar0))
		{
			VEHICLE::SET_VEHICLE_FIXED(iVar0);
			ENTITY::SET_ENTITY_HEALTH(iVar0, 1000, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 1000f);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, 1000f);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iVar0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, false);
			VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, false);
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, false);
			VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
			VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
			VEHICLE::SET_CAN_USE_HYDRAULICS(iVar0, true);
		}
	}
}

void func_5231()//Position - 0x1AA685
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("Prop_ImpExp_Lappy_01a"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("Prop_ImpExp_Lappy_01a");
	}
	Local_795.f_1079.f_1 = -1;
	Local_795.f_1079 = 0;
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Prop_Screen_IE_Adhawk");
}

void func_5233()//Position - 0x1AA6EA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_389(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_4944(iVar0);
		iVar0++;
	}
}

void func_5237()//Position - 0x1AACC5
{
	Global_1945916 = 1;
	Global_100493.f_18[45] = 0;
	MISC::CLEAR_BIT(&(Local_795.f_6), 0);
	__LIB_0__::func_579(&(Local_795.f_742));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_795.f_471))
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(Local_795.f_471);
	}
}

void func_5238(var uParam0)//Position - 0x1AAD09
{
	int iVar0;
	int iVar1;
	Local_795.f_3 = *uParam0;
	Local_795.f_4 = uParam0->f_2;
	Local_795.f_5 = uParam0->f_1;
	Local_795.f_2 = __LIB_3__::func_599(*uParam0);
	Local_795.f_55 = __LIB_8__::func_495(Local_795.f_2);
	Global_4194304.f_31 = -1;
	Local_776.f_711 = Local_795.f_55;
	if (BitTest(Global_1946250, 27))
	{
		if (Local_795.f_55 == __LIB_0__::func_160())
		{
			iVar0 = __LIB_1__::func_556(5303, -1, 0);
			if (iVar0 == __LIB_3__::func_599(Local_795.f_3))
			{
				Local_795.f_55 = PLAYER::PLAYER_ID();
			}
		}
		if (Local_795.f_55 == PLAYER::PLAYER_ID())
		{
			if (!__LIB_2__::func_236())
			{
				MISC::SET_BIT(&Local_795, 7);
			}
		}
	}
	if (Local_795.f_55 == __LIB_0__::func_160())
	{
		__LIB_4__::func_95(1);
		__LIB_4__::func_325(1);
		func_5226();
	}
	if (BitTest(Global_1946250, 27))
	{
		if (Local_795.f_55 == __LIB_0__::func_160())
		{
			iVar1 = __LIB_3__::func_592(PLAYER::PLAYER_ID());
			if (iVar1 == __LIB_3__::func_599(Local_795.f_3))
			{
				Local_795.f_55 = PLAYER::PLAYER_ID();
			}
		}
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Local_795.f_4);
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_258, 880, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_792, 321, 0);
	if (!__LIB_0__::func_672())
	{
		func_5226();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_5226();
	}
	func_5249(&Local_130);
	func_5239();
}

void func_5239()//Position - 0x1AAE4A
{
	Global_1957730 = 0;
	func_5247(Local_795.f_3, &(Local_795.f_56), 0, 0);
	func_5246();
	__LIB_8__::func_549(__LIB_0__::func_170(Local_795.f_3));
	func_416();
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(10);
	Local_795.f_1073 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(969.5376f, -3000.4111f, -48.6469f, "imp_impexp_int_02");
	if (INTERIOR::IS_VALID_INTERIOR(Local_795.f_1073))
	{
		__LIB_4__::func_324(Local_795.f_1073);
	}
	else
	{
		__LIB_4__::func_325(1);
		func_5226();
	}
	func_5243();
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 3);
	if (__LIB_1__::func_168())
	{
		Local_795.f_51 = __LIB_1__::func_367(__LIB_2__::func_696());
	}
	func_370(0);
	func_5242();
	__LIB_4__::func_325(1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
	}
	if (Local_795.f_55 == PLAYER::PLAYER_ID())
	{
		func_5228();
	}
	func_5240(&iLocal_782, 952.5567f, -2999.308f, -39.70513f, 90f, joaat("prop_vend_soda_01"), 1092616192);
	__LIB_0__::func_580(&uLocal_768, 0, 0);
}

void func_5240(int* iParam0, struct<3> Param1, float fParam2, int iParam3, float fParam4)//Position - 0x1AAF55
{
	iParam0->f_2 = iParam3;
	iParam0->f_3 = { Param1 };
	iParam0->f_6 = fParam2;
	iParam0->f_8 = __LIB_6__::func_581(iParam3);
	iParam0->f_7 = (fParam4 * fParam4);
}

void func_5242()//Position - 0x1AAFCC
{
	int iVar0;
	iVar0 = Local_795.f_1073;
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_01");
	}
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_06"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_06");
	}
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_07"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_07");
	}
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_08"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_08");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_02"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_02");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_03"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_03");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_04"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_04");
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "pump_05"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "pump_05");
	}
	INTERIOR::REFRESH_INTERIOR(iVar0);
}

void func_5243()//Position - 0x1AB0AE
{
	Local_772[0 /*3*/] = { Local_795.f_56 + Vector(-12.8555f, -7.5889f, 3.2237f) };
	Local_772[1 /*3*/] = { Local_795.f_56 + Vector(-12.647f, -7.3855f, -4.5872f) };
	Local_772[2 /*3*/] = { Local_795.f_56 + Vector(-12.6738f, -7.2808f, -12.3512f) };
	Local_772[3 /*3*/] = { Local_795.f_56 + Vector(-13.4795f, -7.8441f, -20.1239f) };
	Local_772[4 /*3*/] = { Local_795.f_56 + Vector(-12.8886f, 6.7109f, -20.178f) };
	Local_772[5 /*3*/] = { Local_795.f_56 + Vector(-12.7351f, 7.4053f, -12.3901f) };
	Local_772[6 /*3*/] = { Local_795.f_56 + Vector(-12.9813f, 7.6892f, 3.2148f) };
	Local_772[7 /*3*/] = { Local_795.f_56 + Vector(-13.1537f, 6.6609f, 11.0604f) };
	fLocal_764[0] = (Local_795.f_56.f_4 + 0f);
	fLocal_764[1] = (Local_795.f_56.f_4 + 0f);
	fLocal_764[2] = (Local_795.f_56.f_4 + 0f);
	fLocal_764[3] = (Local_795.f_56.f_4 + 0f);
	fLocal_764[4] = (Local_795.f_56.f_4 + 180f);
	fLocal_764[5] = (Local_795.f_56.f_4 + 180f);
	fLocal_764[6] = (Local_795.f_56.f_4 + 180f);
	fLocal_764[7] = (Local_795.f_56.f_4 + 180f);
}

void func_5246()//Position - 0x1AB36A
{
	Local_795.f_478.f_3 = "anim@apt_trans@garage";
	Local_795.f_478.f_5 = "gar_open_1_left";
	Local_795.f_478.f_34 = 0f;
	Local_795.f_478.f_35 = 0.45f;
	Local_795.f_478.f_80 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
	Local_795.f_478.f_79 = "Door_Open";
	Local_795.f_472 = { 1104.275f, -3101.6143f, -40f };
	Local_795.f_475 = { 1105.4827f, -3097.0706f, -36.9999f };
	Local_795.f_478.f_28 = { 1105.095f, -3099.446f, -40f };
	Local_795.f_478.f_31 = { 0f, 0f, 26.64f };
}

void func_5247(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1AB412
{
	var uVar0;
	func_5248(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_5248(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1AB428
{
	struct<33> Var0;
	func_470(iParam0, &Var0, 2);
	func_470(iParam0, &Var0, 6);
	func_470(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

void func_5249(var uParam0)//Position - 0x1AB477
{
	uParam0->f_279.f_6[0 /*6*/] = { Vector(-39.839f, -3003.496f, 963.656f) - Vector(0.1919f, 0.1021f, -0.9997f) };
	uParam0->f_279.f_6[0 /*6*/].f_3 = { Vector(90f, 0f, 0f) - Vector(-180f, 0f, 0f) };
	uParam0->f_444 = 1;
}

