#region Local Var
	bool bLocal_0 = 0;
	char cLocal_1[24] = "";
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	char* sLocal_25 = NULL;
	float fLocal_26 = 0f;
	struct<3> Local_27 = { 0, 0, 0 } ;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int* iLocal_50 = NULL;
	struct<421> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_52 = 15;
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
	var uLocal_129 = 16;
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
	bool bLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	var uLocal_308 = 0;
	float fLocal_309 = 0f;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	struct<3> Local_321 = { 0, 0, 0 } ;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	struct<13> Local_327 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_328 = NULL;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	int* iLocal_331 = NULL;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int* iLocal_334 = NULL;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int* iLocal_337 = NULL;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int* iLocal_353 = NULL;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int* iLocal_356 = NULL;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int* iLocal_363 = NULL;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	char* sLocal_372 = NULL;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	char* sLocal_375 = NULL;
	char* sLocal_376 = NULL;
	struct<175> Local_377 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_378 = NULL;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	int* iLocal_381 = NULL;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	int* iLocal_384 = NULL;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	int* iLocal_387 = NULL;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	int* iLocal_390 = NULL;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	int* iLocal_393 = NULL;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	int* iLocal_396 = NULL;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	int* iLocal_399 = NULL;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	var uLocal_404[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_405[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_406[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_407 = { 0, 0, 0 } ;
	char* sLocal_408 = NULL;
	char* sLocal_409 = NULL;
	char* sLocal_410 = NULL;
	char* sLocal_411 = NULL;
	char* sLocal_412 = NULL;
	char* sLocal_413 = NULL;
	var uLocal_414[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_415[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<7> Local_416 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	char* sLocal_423[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_424[3] = { NULL, NULL, NULL };
	int iLocal_425[4] = { 0, 0, 0, 0 };
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428[101] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_429[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_430[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_431[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_432[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_433 = 0;
	var uLocal_434[2] = { 0, 0 };
	int iLocal_435 = 0;
	var uLocal_436 = 32;
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
	var uLocal_469 = 8;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 8;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 8;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 8;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	int iLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = -1;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 1000;
	var uLocal_516 = 1000;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	int iLocal_519 = 0;
	int* iLocal_520 = NULL;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int* iLocal_523 = NULL;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	int* iLocal_526 = NULL;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	struct<5> Local_531 = { 0, 0, 0, 0, 0 } ;
	int iLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	int iLocal_537 = 0;
	char* sLocal_538 = NULL;
	char* sLocal_539 = NULL;
	char* sLocal_540 = NULL;
	struct<3> Local_541 = { 0, 0, 0 } ;
	struct<3> Local_542 = { 0, 0, 0 } ;
	struct<3> Local_543 = { 0, 0, 0 } ;
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
	float fLocal_563 = 0f;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 3;
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
	var uLocal_615 = 4;
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
	var uLocal_680 = 2;
	var uLocal_681 = 0;
	var uLocal_682 = 4;
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
	var uLocal_748 = 4;
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
	var uLocal_819 = 12;
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
	var uLocal_1000 = 3;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	struct<566> Local_1004 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<8> Local_1020 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 1132396544;
	var uLocal_1024 = 1132396544;
	var uLocal_1025 = 1132396544;
	var uLocal_1026 = 0;
	var uLocal_1027 = -1082130432;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 8;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
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
	var uLocal_1076 = 0;
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
	var uLocal_1087 = -1;
	var uLocal_1088 = 1092616192;
	var uLocal_1089 = 0;
	int iLocal_1090 = 0;
	int iLocal_1091 = 0;
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	int iLocal_1095 = 0;
	int iLocal_1096 = 0;
	int iLocal_1097 = 0;
	int iLocal_1098 = 0;
	int iLocal_1099 = 0;
	int iLocal_1100 = 0;
	struct<3> Local_1101 = { 0, 0, 0 } ;
	struct<3> Local_1102 = { 0, 0, 0 } ;
	struct<3> Local_1103 = { 0, 0, 0 } ;
	struct<3> Local_1104 = { 0, 0, 0 } ;
	struct<3> Local_1105 = { 0, 0, 0 } ;
	struct<3> Local_1106 = { 0, 0, 0 } ;
	struct<3> Local_1107 = { 0, 0, 0 } ;
	struct<3> Local_1108 = { 0, 0, 0 } ;
	int iLocal_1109 = 0;
	float fLocal_1110 = 0f;
	float fLocal_1111 = 0f;
	int iLocal_1112 = 0;
	int* iLocal_1113 = NULL;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	int* iLocal_1116 = NULL;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	int* iLocal_1119 = NULL;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	struct<10> Local_1122 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	struct<3> Local_1125 = { 0, 0, 0 } ;
	float fLocal_1126 = 0f;
	int* iLocal_1127 = NULL;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	int* iLocal_1130 = NULL;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	int* iLocal_1133 = NULL;
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
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 8;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 4;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 4;
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
	var uLocal_1185 = 4;
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
	var uLocal_1200 = 4;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
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
	var uLocal_1215 = 4;
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
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 4;
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
	var uLocal_1245 = 4;
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
	var uLocal_1260 = 4;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
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
	int iLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	struct<4401> Local_1281 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 49;
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
	var uLocal_1328 = 0;
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
	var uLocal_1344 = 2;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
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
	struct<3> Local_1363 = { 0, 0, 0 } ;
	float fLocal_1364 = 0f;
	struct<3> Local_1365 = { 0, 0, 0 } ;
	int* iLocal_1366 = NULL;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	int iLocal_1369 = 0;
	int iLocal_1370 = 0;
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373 = 0;
	struct<8> Local_1374 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<6> Var1;
	var uVar2;
	StringCopy(&cLocal_1, "MPMissMarkers256", 24);
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 1;
	iLocal_12 = 1;
	iLocal_13 = 134;
	iLocal_14 = 1;
	iLocal_15 = 12;
	iLocal_16 = 12;
	fLocal_19 = 0.001f;
	iLocal_22 = -1;
	sLocal_25 = "NULL";
	fLocal_26 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	sLocal_369 = "TRI_NEWS_00";
	sLocal_370 = "TRI_NEWS_01";
	sLocal_371 = "TRI_NEWS_02";
	sLocal_372 = "TRI_NEWS_03";
	sLocal_373 = "TRI_NEWS_04";
	sLocal_374 = "TRI_NEWS_05";
	sLocal_375 = "TRI_NEWS_06";
	sLocal_376 = "TRI_NEWS_07";
	sLocal_538 = "CHECKPOINT_NORMAL";
	sLocal_539 = "CHECKPOINT_MISSED";
	sLocal_540 = "CHECKPOINT_PERFECT";
	Local_541 = { 1694.7395f, 3276.5024f, 41.2796f };
	Local_542 = { 8.79494f, 0.59893f, 154.8464f };
	Local_543 = { 500f, 500f, 500f };
	fLocal_563 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1110 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 9f);
	fLocal_1111 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_1161(&Local_1281, 1);
	}
	StringCopy(&Var1, "NONE" /* GXT: None */, 24);
	__LIB_37__::func_108(17);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	Local_1020.f_1 = 0;
	Local_1020.f_5 = 0;
	Local_1020.f_6 = 0;
	Local_1020.f_7 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
	while (true)
	{
		GRAPHICS::DRAW_DEBUG_BOX(2366.7698f, 4255.2466f, 30.3808f, 2426.4705f, 4332.712f, 35.244f, 0, 0, 255, 100);
		func_1142(Var1, 0, 0, 0, 0, 0);
		func_1141();
		switch (Local_1020.f_1)
		{
			case 0:
				if (!func_1096(ScriptParam_1374, &uVar2, &Local_1281))
				{
					Local_1020.f_1 = 1;
				}
				break;
			case 1:
				if (!func_359(&uVar0, &uVar2))
				{
					Local_1020.f_1 = 2;
				}
				break;
			case 2:
				if (func_358())
				{
					func_2();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()//Position - 0x221
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_414)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Local_51.f_414[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Local_51.f_414[iVar0]);
		}
		iVar0++;
	}
}

void func_2()//Position - 0x25C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	func_94();
	func_3();
	AUDIO::TRIGGER_MUSIC_EVENT("MGTR_STOP");
	AUDIO::STOP_AUDIO_SCENE("TRI_START_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_SWIM_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_BIKE_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_RUN_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_END_SCENE");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0x2B4
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	switch (iVar0)
	{
		case 0:
			func_76(joaat("Player_Zero"), 12, 13, 1, 1);
			__LIB_15__::func_950(joaat("Player_Zero"), 12, 13, 1);
			break;
		case 2:
			func_76(joaat("Player_Two"), 12, 9, 1, 1);
			__LIB_15__::func_950(joaat("Player_Two"), 12, 9, 1);
			break;
		case 1:
			func_76(joaat("Player_One"), 12, 6, 1, 1);
			__LIB_15__::func_950(joaat("Player_One"), 12, 6, 1);
			break;
	}
}

int func_76(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x173E7
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
								func_76(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_76(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
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
								func_76(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_76(iParam0, 14, iVar5, 1, 0);
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
								func_76(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_76(iParam0, 14, 17, 1, 0);
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

void func_94()//Position - 0x1AA73
{
	float fVar0;
	int iVar1;
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	func_357(PLAYER::PLAYER_PED_ID(), 357, 0);
	__LIB_1__::func_12(&Local_1281);
	func_344(&Local_1281);
	__LIB_0__::incrementGlobal_58896ByIndex(117, 1);
	if (Local_51.f_58 != -1)
	{
		fVar0 = func_342(Local_51.f_58);
		if (fVar0 <= 0f || fVar0 > Local_51.f_60[Local_51.f_58])
		{
			fVar0 = Local_51.f_60[Local_51.f_58];
		}
		Local_1281.f_3 = fVar0;
		Local_1281.f_4 = (Local_1281.f_3 / 2f);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
	func_332(&Local_1281);
	Local_1281.f_11 = 0;
	func_331();
	func_330(&Local_1281);
	func_326();
	iVar1 = 0;
	while (iVar1 < Local_1281.f_12)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[0 /*206*/].f_8, false) || PED::IS_PED_INJURED(Local_1281.f_1735[0 /*206*/].f_8))
		{
			if (!PED::IS_PED_INJURED(Local_1281.f_1735[iVar1 /*206*/].f_8) && iVar1 != 0)
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_1281.f_1735[iVar1 /*206*/].f_8, Local_1281.f_1735[iVar1 /*206*/].f_16, 1f, 20000, 40000f, 0.5f);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[iVar1 /*206*/].f_8, false) && !PED::IS_PED_INJURED(Local_1281.f_1735[0 /*206*/].f_8))
		{
			if (!Local_1281.f_1735[iVar1 /*206*/].f_8 == Local_1281.f_1735[0 /*206*/].f_8)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1281.f_1735[iVar1 /*206*/].f_8));
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[iVar1 /*206*/].f_9, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1281.f_1735[iVar1 /*206*/].f_9));
		}
		iVar1++;
	}
	if (func_324(64))
	{
		if (!Local_51.f_287)
		{
			func_317(PLAYER::PLAYER_PED_ID());
			func_106(PLAYER::PLAYER_PED_ID(), &(Local_51.f_222), 0, 0, 1, 0);
			Local_51.f_287 = 1;
		}
	}
	__LIB_0__::func_734(0, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_RoadCyc_01"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_SharkTiger"), false);
	__LIB_0__::func_671(0);
	__LIB_0__::func_55();
	__LIB_0__::func_131();
	sLocal_413 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(200);
	}
}

void func_106(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1AF14
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_316(iParam0, iVar1, &iVar2, 0))
			{
				func_301(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_298(iParam0, iVar1, &iVar2))
			{
				func_301(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_295(iParam0);
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
			func_112(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_112(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_112(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1B6B0
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
			func_252(iVar5, iParam1, iParam2, 1);
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
						func_252(iVar5, 10, 0, 1);
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
									func_252(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_112(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_252(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_249(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_112(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_243(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_252(iVar5, 14, uVar18[iVar1], 1);
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
							func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_252(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_112(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_234(iParam0);
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
						func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_112(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_231(iVar5, iVar24, iVar23, iVar25);
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
							func_112(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_112(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_112(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_112(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_112(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_112(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_112(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_243(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_231(iVar5, func_249(iParam0, 8, -1), iParam2, func_249(iParam0, 4, -1));
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
				func_164(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_231(iVar5, iParam2, iVar44, iVar45);
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
			func_243(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_231(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_112(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_112(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_231(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_231(iVar5, iVar58, iVar57, iParam2);
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
						func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_231(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_112(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_136(iParam0, 9, iVar63))
						{
							func_112(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_112(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_112(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_112(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_249(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_249(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_112(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_112(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_112(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_112(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_112(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_112(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_112(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_112(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_112(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_112(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_234(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_112(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_112(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_113(iParam0, &uVar4))
		{
			func_112(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_112(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_112(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_112(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_249(iParam0, 3, -1), iVar10);
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
				func_112(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_113(int iParam0, var uParam1)//Position - 0x1D55A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_249(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_136(iParam0, iVar1, iVar0))
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

int func_136(int iParam0, int iParam1, int iParam2)//Position - 0x21883
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
				if (!func_136(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_136(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_136(iParam0, 14, iVar6))
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
			if (!func_136(iParam0, 14, uVar11[iVar10]))
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
						return func_136(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_136(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_164(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x295CC
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
	func_165(iParam0, bParam3, 0, -1);
}

void func_165(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x29619
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
		bVar3 = func_211(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_202(iParam0, iParam3);
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

int func_202(int iParam0, int iParam1)//Position - 0x38A2D
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
				iVar3 = func_249(iParam0, 11, -1);
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
				iVar5 = func_249(iParam0, 11, -1);
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

int func_211(int iParam0, bool bParam1)//Position - 0x38E8B
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_249(iParam0, 11, -1), 0);
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
						iVar3 = func_249(iParam0, 11, -1);
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
						iVar5 = func_249(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_249(iParam0, 11, -1), 0);
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
						iVar8 = func_249(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_249(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_249(iParam0, 11, -1), 0);
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
						iVar12 = func_249(iParam0, 8, -1);
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

int func_231(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x41D45
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
					iVar0 = func_231(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_231(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_234(int iParam0)//Position - 0x431FA
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
		if (!func_239(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_239(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x43BC4
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_249(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4670E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_295(iParam0))
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

int func_249(int iParam0, int iParam1, int iParam2)//Position - 0x469BD
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
				if (func_136(iParam0, iParam1, iVar0))
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
				if (func_136(iParam0, iParam1, iVar1))
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

void func_252(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x46B3C
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
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
							func_252(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_252(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_252(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_252(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_252(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_252(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_252(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_252(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_252(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_252(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_295(int iParam0)//Position - 0x5F839
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_249(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_249(iParam0, 11, -1);
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

int func_298(int iParam0, int iParam1, int iParam2)//Position - 0x5FBAB
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_299(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0, int iParam1, int iParam2)//Position - 0x5FC37
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
				if (!func_299(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_299(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_299(iParam0, 14, iVar4))
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
			if (!func_299(iParam0, 14, uVar8[iVar7]))
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

int func_301(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x5FECA
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
										func_301(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_301(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_305(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_316(iParam0, iVar10, &iVar4, 1))
							{
								func_301(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_301(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_301(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_301(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_301(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_301(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_301(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_301(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_301(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_301(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_316(iParam0, iVar10, &iVar4, 0))
		{
			func_301(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_298(iParam0, iVar10, &iVar4))
		{
			func_301(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x6086C
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
				if (func_299(iParam0, iParam1, iVar0))
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
				if (func_299(iParam0, iParam1, iVar1))
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

int func_316(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x62529
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_299(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_317(int iParam0)//Position - 0x625BF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_0__::func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_106(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_305(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_318(__LIB_0__::func_154(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_305(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_305(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_318(__LIB_0__::func_154(0), 3, 70, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 3, 71, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 3, 72, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 3, 73, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 3, 74, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 3, 75, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 4, 41, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 4, 42, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 4, 43, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 4, 44, 1, 0, 0, 0);
					func_318(__LIB_0__::func_154(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_305(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_106(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6281C
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_76(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

bool func_324(int iParam0)//Position - 0x62CAA
{
	return __LIB_0__::func_703(uLocal_48, iParam0);
}

void func_326()//Position - 0x62CC9
{
	__LIB_1__::func_356(&Local_1004, 0);
}

void func_330(var uParam0)//Position - 0x62DC5
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[0]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[1]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[2]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[3]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[4]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[5]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[6]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_51.f_220));
}

void func_331()//Position - 0x62E29
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_434[0]));
	if (func_324(64))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_434[1]));
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_434[1]));
	}
}

void func_332(var uParam0)//Position - 0x62E5B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		func_333(uParam0, iVar0);
		iVar0++;
	}
}

void func_333(var uParam0, int iParam1)//Position - 0x62E80
{
	if (iParam1 < 0 || iParam1 > 121)
	{
		return;
	}
	func_340(&(uParam0->f_26[iParam1 /*14*/]));
	func_335(&(uParam0->f_26[iParam1 /*14*/]));
	func_334(&(uParam0->f_26[iParam1 /*14*/]));
}

void func_334(var uParam0)//Position - 0x62EC1
{
	uParam0->f_3 = { Local_51.f_3 };
	uParam0->f_6 = 10.25f;
	uParam0->f_11 = 0;
	uParam0->f_7 = 10f;
	uParam0->f_13 = 0;
}

void func_335(var uParam0)//Position - 0x62EF1
{
	func_336(&(uParam0->f_10));
}

void func_336(var uParam0)//Position - 0x62F01
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		func_337(33554432);
		*uParam0 = 0;
	}
}

void func_337(int iParam0)//Position - 0x62F24
{
	if (!func_324(iParam0))
	{
		__LIB_39__::func_780(&uLocal_48, iParam0);
	}
}

void func_340(var uParam0)//Position - 0x62F5F
{
	__LIB_13__::func_808(&(uParam0->f_9));
}

var func_342(int iParam0)//Position - 0x62F87
{
	var uVar0;
	uVar0 = Global_113386.f_20011.f_4[iParam0];
	return uVar0;
}

void func_344(var uParam0)//Position - 0x62FFD
{
	func_346();
	__LIB_16__::func_745(uParam0->f_4371);
}

void func_346()//Position - 0x63020
{
	__LIB_8__::func_944(&uLocal_567, 0);
	__LIB_16__::func_744();
}

void func_357(int iParam0, int iParam1, bool bParam2)//Position - 0x63555
{
	PED::SET_PED_CONFIG_FLAG(iParam0, iParam1, bParam2);
}

int func_358()//Position - 0x63567
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@triathlon", "rummage_bag", 3))
	{
		return 0;
	}
	return 1;
}

int func_359(var uParam0, var uParam1)//Position - 0x63595
{
	bool bVar0;
	float fVar1;
	func_1095();
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!bLocal_0)
	{
		if (__LIB_16__::func_789(2) || __LIB_16__::func_789(3))
		{
			bLocal_0 = true;
		}
	}
	switch (Local_1020.f_6)
	{
		case 0:
			func_1066();
			Local_1020.f_6 = 8;
			break;
		case 8:
			Local_1281.f_24 = 0;
			Local_1020.f_6 = 9;
			break;
		case 9:
			if (!func_1044(&Local_1281))
			{
				func_1043(&Local_1281, 4);
				func_1026(&Local_1281);
				if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[0 /*206*/].f_8, false))
				{
					fLocal_1364 = ENTITY::GET_ENTITY_HEADING(Local_1281.f_1735[0 /*206*/].f_8);
				}
				__LIB_1__::func_327(&iLocal_1366, 0f);
				if (func_324(512))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1363) > 1000f)
					{
						STREAMING::LOAD_SCENE(Local_1363);
					}
					iLocal_1123 = 3;
					func_337(8192);
				}
				iLocal_1123 = 0;
				func_1024(0, 0, 0);
				Local_1020.f_6 = 5;
			}
			break;
		case 5:
			HUD::DISPLAY_RADAR(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_1004(Local_1363, &Local_1281, fLocal_1364, uParam1, &iLocal_1370, &iLocal_1371);
			if (!func_324(4096))
			{
				HUD::DISPLAY_RADAR(true);
				func_1003();
				if (CAM::DOES_CAM_EXIST(*uParam1))
				{
					CAM::DESTROY_CAM(*uParam1, false);
				}
				Local_1020.f_6 = 10;
			}
			break;
		case 10:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (func_324(128))
			{
				iLocal_1369 = 500;
			}
			else if (iLocal_1369 == 1000)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
			}
			if (__LIB_39__::func_725(iLocal_1369))
			{
				__LIB_1__::func_327(&iLocal_399, 1f);
				__LIB_1__::func_327(&iLocal_378, Local_377.f_168);
				__LIB_1__::func_327(&iLocal_384, Local_377.f_168);
				__LIB_1__::func_327(&iLocal_387, Local_377.f_168);
				__LIB_1__::func_327(&iLocal_390, Local_377.f_168);
				__LIB_1__::func_327(&iLocal_393, Local_377.f_168);
				Local_1281.f_25 = 0;
				Local_1020.f_6 = 11;
			}
			break;
		case 11:
			if (!Local_1020.f_0 == 1)
			{
				if (!func_642(&Local_1281))
				{
					func_632(func_324(512));
					if (func_324(512))
					{
						func_631(Local_1281.f_26[0 /*14*/].f_3 + Vector(50f, 0f, 0f));
					}
					if (func_324(512))
					{
						Local_1020.f_6 = 0;
					}
					else
					{
						__LIB_0__::incrementGlobal_58896ByIndex(118, 1);
						Local_1020.f_6 = 14;
						func_630(&Local_1281);
					}
				}
				if (Local_1281.f_25 == 7)
				{
					func_381(uParam0);
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 0)
			{
				fVar1 = 0.5f;
			}
			else if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 1)
			{
				fVar1 = 0.73f;
			}
			else if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 2)
			{
				fVar1 = 0.495f;
			}
			else
			{
				fVar1 = 0.75f;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1122.f_8))
			{
				if ((((PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.2f || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) > 0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) < -0.2f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1122.f_8) > fVar1)
				{
					bVar0 = true;
				}
			}
			if ((!func_324(64) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1122.f_8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1122.f_8) >= 1f)) || bVar0)
			{
				func_360(&Local_1281, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_1098))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
						}
						else
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
						}
					}
					if (CAM::IS_CAM_RENDERING(iLocal_1098))
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				return 0;
			}
			break;
	}
	return 1;
}

void func_360(var uParam0, int iParam1)//Position - 0x6398B
{
	func_380();
	func_371();
	func_369(uParam0);
	func_368();
	func_364(iParam1);
	func_363();
	func_331();
	if (func_324(64))
	{
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 25f, 0);
		if (!Local_51.f_287)
		{
			func_317(PLAYER::PLAYER_PED_ID());
			func_106(PLAYER::PLAYER_PED_ID(), &(Local_51.f_222), 0, 0, 1, 0);
			Local_51.f_287 = 1;
		}
	}
	__LIB_16__::func_616();
	if (Local_51.f_58 == 1)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1", false);
	}
	else if (Local_51.f_58 == 0)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2", false);
	}
	else if (Local_51.f_58 == 2)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3", false);
	}
}

void func_363()//Position - 0x63AFB
{
	if (!PED::IS_PED_INJURED(iLocal_1371))
	{
		TASK::CLEAR_PED_TASKS(iLocal_1371);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1370);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1371);
}

void func_364(var uParam0)//Position - 0x63B23
{
	if (func_324(64))
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	func_367();
	func_366();
	func_365(0, uParam0);
}

void func_365(bool bParam0, var uParam1)//Position - 0x63B4B
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_362, iLocal_361, 30000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, true, 7000, true, false, 0);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(iLocal_361))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_361))
			{
				CAM::SET_CAM_ACTIVE(iLocal_361, false);
			}
		}
		if (CAM::DOES_CAM_EXIST(iLocal_362))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_362))
			{
				CAM::SET_CAM_ACTIVE(iLocal_362, false);
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && uParam1), 3000, true, false, 0);
	}
}

void func_366()//Position - 0x63BC9
{
	if (CAM::DOES_CAM_EXIST(iLocal_360))
	{
		CAM::DESTROY_CAM(iLocal_360, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_361))
	{
		CAM::DESTROY_CAM(iLocal_361, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_362))
	{
		CAM::DESTROY_CAM(iLocal_362, false);
	}
}

void func_367()//Position - 0x63C07
{
	if (CAM::DOES_CAM_EXIST(iLocal_359))
	{
		CAM::DESTROY_CAM(iLocal_359, false);
	}
}

void func_368()//Position - 0x63C21
{
	int iVar0;
	HUD::CLEAR_GPS_CUSTOM_ROUTE();
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 122, false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::SET_PED_MAX_TIME_IN_WATER(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 300f);
	PED::SET_PED_DIES_IN_WATER(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true);
	PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
	iVar0 = 0;
	while (iVar0 < Local_1281.f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[iVar0 /*206*/].f_9, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1281.f_1735[iVar0 /*206*/].f_9, true);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[iVar0 /*206*/].f_8, false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_1281.f_1735[iVar0 /*206*/].f_8, false))
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_1281.f_1735[iVar0 /*206*/].f_8, Local_416.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_369(var uParam0)//Position - 0x63CF8
{
	switch (iLocal_313)
	{
		case 1:
			TASK::REMOVE_WAYPOINT_RECORDING("Tri1_Bk_0");
			TASK::REMOVE_WAYPOINT_RECORDING("Tri1_Run");
			break;
		case 0:
			TASK::REMOVE_WAYPOINT_RECORDING("Tri2_Bk_0");
			TASK::REMOVE_WAYPOINT_RECORDING("Tri2_Run");
			break;
		case 2:
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_408);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_409);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_410);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_411);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_412);
			TASK::REMOVE_WAYPOINT_RECORDING("Tri3_Run");
			break;
	}
	func_370(uParam0);
}

void func_370(var uParam0)//Position - 0x63D79
{
	char cVar0[64];
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (iVar1 != 0)
		{
			switch (iLocal_313)
			{
				case 0:
					StringCopy(&cVar0, "triathlon_ves_racer", 64);
					break;
				case 1:
					StringCopy(&cVar0, "triathlon_ala_racer", 64);
					break;
				case 2:
					StringCopy(&cVar0, "triathlon_coy_racer", 64);
					break;
			}
			StringIntConCat(&cVar0, iVar1, 64);
			TASK::REMOVE_WAYPOINT_RECORDING(&cVar0);
		}
		iVar1++;
	}
}

void func_371()//Position - 0x63DE6
{
	func_379();
	func_378();
	func_377();
	func_376();
	func_372();
}

void func_372()//Position - 0x63E02
{
	__LIB_1__::func_895(1, -1);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_368);
}

void func_376()//Position - 0x63FA0
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("TRIATHLON");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cLocal_1);
}

void func_377()//Position - 0x63FC0
{
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
}

void func_378()//Position - 0x63FCE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_425)
	{
		STREAMING::REMOVE_ANIM_DICT(iLocal_425[iVar0]);
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT("VEH@BIKE@COMMON@FRONT@BASE");
	STREAMING::REMOVE_ANIM_DICT("missfbi4");
	STREAMING::REMOVE_ANIM_DICT("mini@triathlonintro");
}

void func_379()//Position - 0x64011
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_barrier_work06a"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pencil_01"));
}

void func_380()//Position - 0x64034
{
	struct<3> Var0;
	struct<3> Var1;
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(7, true);
	MISC::ENABLE_DISPATCH_SERVICE(8, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	PED::SET_CREATE_RANDOM_COPS(true);
	Var0 = { -1302.005f, -1779.373f, -2.155f };
	Var1 = { -1331.091f, -1749.161f, 2.789f };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, true, true);
}

void func_381(var uParam0)//Position - 0x640AF
{
	if (iLocal_1373 == 0)
	{
		func_625();
		func_624(&Local_1281, uParam0);
	}
	else if (iLocal_1373 == 1)
	{
		func_622(&Local_1281);
		func_619();
	}
	else if (iLocal_1373 == 2)
	{
		func_598();
		func_597(&Local_1281);
		func_596(&Local_1281);
	}
	else if (iLocal_1373 == 3)
	{
		func_575(&Local_1281);
		func_570(&Local_1281);
		func_568(&Local_1281);
	}
	else if (iLocal_1373 == 4)
	{
		func_567(&Local_1281);
		func_566(&Local_1281);
		func_561(&Local_1281, 1065353216, 1077936128);
		func_560(&Local_1281, &Local_1122);
	}
	func_559();
	if (iLocal_1373 >= 4)
	{
		iLocal_1373 = 0;
	}
	else
	{
		iLocal_1373++;
	}
	func_558();
	func_496(&Local_1281);
	func_471(&Local_1281);
	func_412();
	func_383();
	if (Local_1281.f_1735[0 /*206*/].f_11 == 1)
	{
		if (!__LIB_1__::func_13(&iLocal_381))
		{
			__LIB_1__::func_327(&iLocal_381, Local_377.f_168);
		}
	}
	else if (Local_1281.f_1735[0 /*206*/].f_11 < 1 && iLocal_313 == 2)
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(1560.9357f, 3848.898f, 28.2339f);
	}
}

void func_383()//Position - 0x641E6
{
	if (func_411(&Local_1281, &(Local_1281.f_1735[0 /*206*/])) != 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_410(&Local_1281, 0, 1))
			{
				func_408(Local_1281.f_1735[0 /*206*/].f_11);
			}
			else if (func_410(&Local_1281, 0, 1))
			{
				if (fLocal_309 > 5f)
				{
					func_337(4);
				}
				else
				{
					fLocal_309 = (fLocal_309 + MISC::GET_FRAME_TIME());
				}
			}
		}
		else
		{
			func_384(Local_1281.f_1735[0 /*206*/].f_11);
		}
	}
}

void func_384(int iParam0)//Position - 0x64265
{
	struct<3> Var0;
	if (!func_324(8))
	{
		func_337(8);
		if (iParam0 < Local_1281.f_11)
		{
			if (iParam0 > 0)
			{
				Var0 = { Local_1281.f_26[(iParam0 - 1) /*14*/].f_3 };
			}
			else
			{
				Var0 = { 0f, 0f, 0f };
			}
			if (iParam0 + 1 < Local_1281.f_11)
			{
				func_398(Var0, &(Local_1281.f_26[iParam0 /*14*/]), Local_1281.f_26[iParam0 + 1 /*14*/].f_3, 1092878336);
			}
			else
			{
				func_398(Var0, &(Local_1281.f_26[iParam0 /*14*/]), Local_1281.f_26[iParam0 /*14*/].f_3, 1092878336);
			}
			func_387(&Local_1281, iParam0, 1);
			if (iParam0 == func_386() + 2)
			{
				iLocal_316 = 0;
				func_559();
			}
			if (iParam0 == func_385() + 1)
			{
				iLocal_317 = 0;
				func_559();
			}
		}
		if (iParam0 + 1 < Local_1281.f_11)
		{
			if (iParam0 + 2 < Local_1281.f_11)
			{
				func_398(Local_1281.f_26[iParam0 /*14*/].f_3, &(Local_1281.f_26[iParam0 + 1 /*14*/]), Local_1281.f_26[iParam0 + 2 /*14*/].f_3, 1092878336);
			}
			else
			{
				func_398(Local_1281.f_26[iParam0 /*14*/].f_3, &(Local_1281.f_26[iParam0 + 1 /*14*/]), Local_1281.f_26[iParam0 + 1 /*14*/].f_3, 1092878336);
			}
			func_387(&Local_1281, iParam0 + 1, 0);
		}
	}
}

int func_385()//Position - 0x643C4
{
	switch (iLocal_313)
	{
		case 0:
			return 18;
			break;
		case 1:
			return 19;
			break;
		case 2:
			return 86;
			break;
	}
	return -1;
}

int func_386()//Position - 0x643FF
{
	switch (iLocal_313)
	{
		case 0:
			return 3;
			break;
		case 1:
			return 3;
			break;
		case 2:
			return 7;
			break;
	}
	return -1;
}

int func_387(int* iParam0, int iParam1, bool bParam2)//Position - 0x64437
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	if (iParam1 < 0 || iParam1 > 121)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (iParam0->f_11 - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1f;
	if (!bParam2)
	{
		fVar2 = 0.75f;
	}
	if (!func_396(&(iParam0->f_26[iParam1 /*14*/]), iVar1, fVar2, iParam1, iParam0->f_11))
	{
		return 0;
	}
	if (bParam2)
	{
		Var3 = { iParam0->f_26[iParam1 /*14*/].f_3 };
		Var4 = { 0f, 0f, 0f };
		if (iParam1 < (iParam0->f_11 - 1))
		{
			if (!__LIB_0__::func_490(iParam0->f_26[iParam1 /*14*/].f_3, iParam0->f_26[iParam1 + 1 /*14*/].f_3, 1056964608, 0))
			{
				if (!Local_51.f_0 == 2)
				{
					func_391(iParam0->f_26[iParam1 /*14*/].f_3);
				}
				Var3 = { iParam0->f_26[iParam1 + 1 /*14*/].f_3 };
			}
		}
		if (Local_51.f_0 == 1)
		{
			if (Local_51.f_58 == 1)
			{
				if (__LIB_0__::func_703(iParam0->f_26[8 /*14*/].f_12, 4))
				{
					__LIB_2__::func_712(&(iParam0->f_26[8 /*14*/].f_12), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var4 = { iParam0->f_26[(iParam1 - 1) /*14*/].f_3 };
		}
		if (!func_388(Var4, &(iParam0->f_26[iParam1 /*14*/]), Var3, 10.25f))
		{
			return 0;
		}
		if (iParam1 + 1 < iParam0->f_11)
		{
			if (iParam1 + 2 >= 122)
			{
				Var0 = { iParam0->f_26[0 /*14*/].f_3 };
			}
			else
			{
				Var0 = { iParam0->f_26[iParam1 + 2 /*14*/].f_3 };
			}
			if (!func_388(iParam0->f_26[iParam1 /*14*/].f_3, &(iParam0->f_26[iParam1 + 1 /*14*/]), Var0, 10.25f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_388(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x645DA
{
	if (!func_398(Param0, uParam1, Param2, fParam3))
	{
		return 0;
	}
	return 1;
}

void func_391(struct<3> Param0)//Position - 0x64620
{
	__LIB_38__::func_615(&uLocal_506, 0);
	Local_531.f_1 = { Param0 };
}

int func_396(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0x647BB
{
	if (!func_397(&(uParam0->f_9), uParam0->f_3, iParam1, fParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_397(int* iParam0, struct<3> Param1, var uParam2, float fParam3, int iParam4, int iParam5)//Position - 0x647E2
{
	__LIB_13__::func_808(iParam0);
	*iParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 0;
	}
	if (iParam4 == (iParam5 - 1))
	{
		HUD::SET_BLIP_SPRITE(*iParam0, 38);
	}
	HUD::SET_BLIP_SCALE(*iParam0, fParam3);
	HUD::SET_BLIP_DISPLAY(*iParam0, 4);
	if (iParam4 != -1 && iParam5 != -1)
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIP");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	}
	else
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "GATEBLIPDEF");
	}
	return 1;
}

int func_398(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x64869
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	char* sVar8;
	Param0 = { Param0 };
	func_336(&(uParam1->f_10));
	*uParam1 = { Param2 };
	if (((((uParam1->f_11 != 2 && uParam1->f_11 != 3) && uParam1->f_11 != 4) && uParam1->f_11 != 5) && uParam1->f_11 != 0) && !func_407(uParam1, 4))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_3, &fVar5, false, false))
		{
		}
		else
		{
			fVar6 = 0.5f;
			uParam1->f_3.f_2 = (fVar5 + (fVar6 * fParam3));
		}
	}
	if ((uParam1->f_11 == 5 || uParam1->f_11 == 6) || uParam1->f_11 == 7)
	{
		iVar0 = __LIB_39__::func_730(uParam1->f_11, Param0, uParam1->f_3, Param2);
		__LIB_21__::func_969(__LIB_19__::func_216(__LIB_1__::func_577()), &iVar1, &iVar2, &iVar3, &(uParam1->f_8));
		uParam1->f_10 = GRAPHICS::CREATE_CHECKPOINT(iVar0, uParam1->f_3, Param2, fParam3, iVar1, iVar2, iVar3, __LIB_38__::func_473(uParam1->f_3, 25, 200), 0);
		HUD::GET_HUD_COLOUR(134, &iVar1, &iVar2, &iVar3, &uVar4);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_10, iVar1, iVar2, iVar3, __LIB_38__::func_473(uParam1->f_3, 25, 200));
	}
	else
	{
		uParam1->f_10 = GRAPHICS::CREATE_CHECKPOINT(func_399(uParam1->f_11), uParam1->f_3, Param2, fParam3, 254, 207, 12, __LIB_38__::func_473(uParam1->f_3, 25, 200), 0);
		HUD::GET_HUD_COLOUR(134, &iVar1, &iVar2, &iVar3, &(uParam1->f_8));
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_10, iVar1, iVar2, iVar3, __LIB_38__::func_473(uParam1->f_3, 25, 200));
	}
	GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam1->f_10, 1.6f, 1.6f, 100f);
	switch (func_399(uParam1->f_11))
	{
		case 27:
			iVar7 = 9112;
			break;
		case 32:
			iVar7 = 9110;
			break;
		case 22:
			iVar7 = 9111;
			break;
		case 26:
			iVar7 = 9111;
			break;
		case 31:
			iVar7 = 9112;
			break;
		case 36:
			iVar7 = 9110;
			break;
	}
	switch (func_399(uParam1->f_11))
	{
		case 27:
			sVar8 = "Corona_Marker";
			break;
		case 32:
			sVar8 = "Corona_Marker";
			break;
		case 22:
			sVar8 = "Corona_Marker";
			break;
		case 26:
			sVar8 = "Corona_Marker";
			break;
		case 31:
			sVar8 = "Corona_Marker";
			break;
		case 36:
			sVar8 = "Corona_Marker";
			break;
	}
	GRAPHICS::PATCH_DECAL_DIFFUSE_MAP(iVar7, &cLocal_1, sVar8);
	if (uParam1->f_10 == 0)
	{
		return 0;
	}
	return 1;
}

int func_399(int iParam0)//Position - 0x64AEF
{
	switch (iParam0)
	{
		case 5:
			return 27;
			break;
		case 6:
			return 32;
			break;
		case 7:
			return 22;
			break;
		case 8:
			return 26;
			break;
		case 9:
			return 31;
			break;
		case 10:
			return 36;
			break;
	}
	return 6;
}

bool func_407(var uParam0, int iParam1)//Position - 0x64D9F
{
	return __LIB_0__::func_703(uParam0->f_12, iParam1);
}

void func_408(int iParam0)//Position - 0x64DB1
{
	if (func_324(8))
	{
		func_409(8);
		if (iParam0 < Local_1281.f_11)
		{
			func_336(&(Local_1281.f_26[iParam0 /*14*/].f_10));
		}
		if (iParam0 + 1 < Local_1281.f_11)
		{
			func_336(&(Local_1281.f_26[iParam0 + 1 /*14*/].f_10));
		}
		if (HUD::DOES_BLIP_EXIST(Local_1281.f_26[iParam0 /*14*/].f_9))
		{
			if (iParam0 < Local_1281.f_11)
			{
				HUD::SET_BLIP_DISPLAY(Local_1281.f_26[iParam0 /*14*/].f_9, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1281.f_26[iParam0 + 1 /*14*/].f_9))
		{
			if (iParam0 + 1 < Local_1281.f_11)
			{
				HUD::SET_BLIP_DISPLAY(Local_1281.f_26[iParam0 + 1 /*14*/].f_9, 0);
			}
		}
	}
}

void func_409(int iParam0)//Position - 0x64E6E
{
	if (func_324(iParam0))
	{
		__LIB_2__::func_712(&uLocal_48, iParam0);
	}
}

int func_410(int* iParam0, int iParam1, int iParam2)//Position - 0x64E87
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false) || (PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8) && iParam2))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0->f_1735[iParam1 /*206*/].f_8);
		if ((VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike")) || VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike3")))
		{
			return 1;
		}
	}
	return 0;
}

int func_411(int* iParam0, var uParam1)//Position - 0x64F04
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false))
	{
		if (uParam1->f_11 < iParam0->f_11)
		{
			if (iParam0->f_26[uParam1->f_11 /*14*/].f_11 == 5 || iParam0->f_26[uParam1->f_11 /*14*/].f_11 == 9)
			{
				return 0;
			}
			else if (iParam0->f_26[uParam1->f_11 /*14*/].f_11 == 7 || iParam0->f_26[uParam1->f_11 /*14*/].f_11 == 8)
			{
				return 2;
			}
			else if (iParam0->f_26[uParam1->f_11 /*14*/].f_11 == 6 || iParam0->f_26[uParam1->f_11 /*14*/].f_11 == 10)
			{
				return 1;
			}
		}
	}
	return 2;
}

void func_412()//Position - 0x64FA9
{
	if (!__LIB_0__::func_703(uLocal_529, 256))
	{
		func_418();
		__LIB_39__::func_780(&uLocal_529, 256);
	}
	if (!func_324(1))
	{
		__LIB_0__::func_151("TRI_Q_PROMPT", -1);
		func_337(1);
	}
	if ((func_324(1073741824) && CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_416(&Local_1281);
		if (!Local_51.f_287)
		{
			func_317(PLAYER::PLAYER_PED_ID());
			func_106(PLAYER::PLAYER_PED_ID(), &(Local_51.f_222), 0, 0, 1, 0);
			Local_51.f_287 = 1;
		}
		while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_1161(&Local_1281, 0);
	}
	else
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			func_337(536870912);
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("TRI_QUIT_TITLE", "TRI_QUIT_Q", 36, 0, false, -1, 0, 0, true, 0);
			MISC::SET_GAME_PAUSED(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_415(&Local_1281);
		}
		if (func_324(536870912))
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("TRI_QUIT_TITLE", "TRI_QUIT_Q", 36, 0, false, -1, 0, 0, true, 0);
			func_414(&Local_1281);
			if (MISC::GET_GAME_TIMER() > __LIB_40__::func_512(&Local_1281) && (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
			{
				MISC::SET_GAME_PAUSED(false);
				CAM::DO_SCREEN_FADE_OUT(0);
				func_409(536870912);
				func_337(1073741824);
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				MISC::SET_GAME_PAUSED(false);
				func_409(536870912);
			}
		}
	}
}

void func_414(int* iParam0)//Position - 0x65146
{
	float fVar0;
	fVar0 = MISC::GET_FRAME_TIME();
	iParam0->f_7 = (iParam0->f_7 - SYSTEM::ROUND((fVar0 * 1000f)));
}

void func_415(int* iParam0)//Position - 0x65169
{
	iParam0->f_7 = MISC::GET_GAME_TIMER() + 1000;
}

void func_416(int* iParam0)//Position - 0x6517C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1735[iVar0 /*206*/].f_8))
			{
				PED::DELETE_PED(&(iParam0->f_1735[iVar0 /*206*/].f_8));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1735[iVar0 /*206*/].f_9))
			{
				VEHICLE::DELETE_VEHICLE(&(iParam0->f_1735[iVar0 /*206*/].f_9));
			}
		}
		iVar0++;
	}
}

void func_418()//Position - 0x651F8
{
	int iVar0;
	fLocal_1126 = 0f;
	iLocal_314 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	Local_1365 = { __LIB_39__::func_417(iLocal_313) };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_314))
	{
		iLocal_314 = 0;
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_314, false))
	{
		iLocal_314 = 0;
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(__LIB_0__::func_402(iLocal_314));
	if ((iVar0 == joaat("taxi") && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_314, -1, false)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
	{
		iLocal_314 = 0;
		return;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1365, ENTITY::GET_ENTITY_COORDS(iLocal_314, true), true) >= 100f)
	{
		iLocal_314 = 0;
		return;
	}
	switch (iLocal_313)
	{
		case 1:
			Local_1125 = { 1747.3027f, 3904.7615f, 33.914f };
			fLocal_1126 = 201.6f;
			break;
		case 0:
			Local_1125 = { -1345.9988f, -1010.2684f, 7.0159f };
			fLocal_1126 = 30f;
			break;
		case 2:
			Local_1125 = { -2286.66f, 409.97f, 174.12f };
			fLocal_1126 = 133.9f;
			break;
	}
	__LIB_14__::func_775(iLocal_314, 0f, 0f, 0f, 0f, 24, 0);
	VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_314);
	func_421(iLocal_314, 0);
	func_419();
}

void func_419()//Position - 0x6532F
{
	struct<3> Var0;
	float fVar1;
	func_420(&Var0, &fVar1);
	ENTITY::SET_ENTITY_COORDS(iLocal_314, Var0, false, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_314, fVar1);
}

void func_420(var uParam0, var uParam1)//Position - 0x65357
{
	switch (iLocal_313)
	{
		case 0:
			*uParam0 = { -1207.5099f, -2026.7349f, 12.9482f };
			*uParam1 = 308.5434f;
			break;
		case 1:
			*uParam0 = { 2437.46f, 4296.9795f, 35.6404f };
			*uParam1 = 309.8143f;
			break;
		case 2:
			*uParam0 = { 1608.7355f, 3816.3923f, 33.8315f };
			*uParam1 = 310.085f;
			break;
	}
}

void func_421(int iParam0, int iParam1)//Position - 0x653D3
{
	Local_1281.f_4400.f_2 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam0);
	Local_1281.f_4400.f_3 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Local_1281.f_4400 = iParam1;
	__LIB_0__::func_209(iParam0, &(Local_1281.f_4400.f_4));
	Local_1281.f_4400.f_1 = 1;
}

void func_471(int* iParam0)//Position - 0x6BA59
{
	bool bVar0;
	bool bVar1;
	bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
	if (func_324(32))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && __LIB_9__::func_818(iParam0) >= 1f)
		{
			func_409(32);
			func_494(iParam0);
			__LIB_0__::func_963(0, 1, 1, 0);
		}
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
	{
		func_492(iParam0);
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
		{
			bVar1 = true;
			if (bVar0)
			{
				bVar1 = MISC::GET_GAME_TIMER() > iLocal_49;
			}
			if (bVar1)
			{
				iLocal_49 = MISC::GET_GAME_TIMER() + 500;
				if (func_324(32))
				{
					func_409(32);
					func_494(iParam0);
					__LIB_0__::func_963(0, 1, 1, 0);
				}
				else
				{
					func_337(32);
					__LIB_0__::func_963(1, 1, 1, 0);
				}
			}
		}
	}
	if (func_324(32))
	{
		if (func_324(1024))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (__LIB_0__::func_1("TRI_HELP_TV"))
			{
				if (!iLocal_352)
				{
					iLocal_352 = 1;
				}
			}
			if (func_324(134217728) && MISC::GET_GAME_TIMER() > iParam0->f_9)
			{
				func_409(134217728);
				func_491(0);
			}
			func_490(1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			func_481(1, 0, 30, 5, 1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_368, 255, 255, 255, 0, 0);
			if (!HUD::IS_RADAR_HIDDEN())
			{
				HUD::DISPLAY_RADAR(false);
			}
			if (MISC::GET_GAME_TIMER() > iParam0->f_8)
			{
				func_480();
				iParam0->f_8 = MISC::GET_GAME_TIMER() + 5000;
			}
			iLocal_366 = 1;
			iLocal_312 = 0;
		}
	}
	else
	{
		if (iLocal_311 && !iLocal_312)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			iLocal_312 = 1;
		}
		if (iLocal_366)
		{
			func_490(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_366 = 0;
		}
		if (HUD::IS_RADAR_HIDDEN())
		{
			HUD::DISPLAY_RADAR(true);
		}
	}
	if (iLocal_352)
	{
		func_472();
	}
}

void func_472()//Position - 0x6BC20
{
	if (!__LIB_1__::func_13(&iLocal_356))
	{
		__LIB_1__::func_362(&iLocal_356);
	}
	if (__LIB_15__::func_251(&iLocal_356, 2.5f))
	{
		HUD::CLEAR_HELP(true);
		iLocal_352 = 0;
	}
}

void func_480()//Position - 0x6BD67
{
	iLocal_310++;
	if (iLocal_310 > 6)
	{
		iLocal_310 = 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_310);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_481(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6BD9F
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_304 <= 225 && iLocal_298 == 0)
			{
				iLocal_304 += 30;
				if (iLocal_304 >= 225)
				{
					iLocal_298 = 1;
				}
			}
			else if (iLocal_304 >= 30)
			{
				iLocal_304 = (iLocal_304 - 30);
				if (iLocal_304 <= 30)
				{
					iLocal_298 = 0;
				}
			}
		}
		func_488(1, 200);
		if (iLocal_302 <= iParam2 && iLocal_297 == 0)
		{
			iLocal_302++;
			func_485(1, iLocal_302);
			if (iLocal_302 == iParam2)
			{
				iLocal_297 = 1;
				iLocal_303 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_302 > 0)
		{
			if (iLocal_302 > iLocal_303)
			{
				iLocal_302 = (iLocal_302 - 1);
				func_485(1, iLocal_302);
				if (iLocal_302 == iLocal_303)
				{
					iLocal_297 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_482(1, 40, 1, 1, 1);
		}
	}
}

void func_482(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6BE89
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_484(0))
			{
				func_483(0);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_305, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_305 < 1f)
			{
				fLocal_305 = (fLocal_305 + 0.01f);
			}
			else
			{
				fLocal_305 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_484(1))
			{
				func_483(1);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_306, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_306 < 1f)
			{
				fLocal_306 = (fLocal_306 + 0.02f);
			}
			else
			{
				fLocal_306 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_484(2))
			{
				func_483(2);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_307, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_307 < 1f)
			{
				fLocal_307 = (fLocal_307 + 0.028f);
			}
			else
			{
				fLocal_307 = 0f;
			}
		}
	}
}

void func_483(int iParam0)//Position - 0x6BFA8
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&uLocal_308, iParam0);
	}
}

int func_484(bool bParam0)//Position - 0x6BFC3
{
	if (BitTest(uLocal_308, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_485(bool bParam0, int iParam1)//Position - 0x6BFD9
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		iLocal_300 = func_487(5);
		iLocal_299 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		while (iLocal_301 == iLocal_300)
		{
			iLocal_300 = func_487(5);
		}
		if (iLocal_300 == 0)
		{
			if (!func_484(3))
			{
				func_483(3);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_294)), (1f * __LIB_40__::func_480(bLocal_295)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_300 == 1)
		{
			if (!func_484(4))
			{
				func_483(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_294)), (1f * __LIB_40__::func_480(bLocal_295)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_300 == 2)
		{
			if (!func_484(5))
			{
				func_483(5);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_294)), (1f * __LIB_40__::func_480(bLocal_295)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_300 == 3)
		{
			if (!func_484(6))
			{
				func_483(6);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_294)), (1f * __LIB_40__::func_480(bLocal_295)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_300 == 4)
		{
			if (!func_484(7))
			{
				func_483(7);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_294)), (1f * __LIB_40__::func_480(bLocal_295)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
	}
}

int func_487(int iParam0)//Position - 0x6C1AE
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_294 = true;
	}
	else
	{
		bLocal_294 = false;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_295 = true;
	}
	else
	{
		bLocal_295 = false;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}

void func_488(bool bParam0, int iParam1)//Position - 0x6C1EB
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		if (iLocal_296)
		{
			if (!func_484(8))
			{
				func_483(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			iLocal_296 = 0;
		}
		else
		{
			if (!func_484(8))
			{
				func_483(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			iLocal_296 = 1;
		}
	}
}

void func_490(bool bParam0)//Position - 0x6C2A8
{
	CAM::SET_CAM_ACTIVE(iLocal_359, bParam0);
}

void func_491(bool bParam0)//Position - 0x6C2B9
{
	int iVar0;
	iVar0 = __LIB_0__::func_138(bParam0, 1, -1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SHOW_STATIC");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_492(var uParam0)//Position - 0x6C2E2
{
	uParam0->f_5 = (uParam0->f_5 + MISC::GET_FRAME_TIME());
}

void func_494(var uParam0)//Position - 0x6C32A
{
	uParam0->f_5 = 0f;
}

void func_496(int* iParam0)//Position - 0x6C343
{
	func_535(iParam0, iLocal_427);
	func_503(iParam0, iLocal_427);
	if ((iLocal_427 % 2) == 0)
	{
		func_497(iParam0);
	}
	if (iLocal_427 >= 7)
	{
		iLocal_427 = 0;
	}
	else
	{
		iLocal_427++;
	}
}

void func_497(int* iParam0)//Position - 0x6C382
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (func_411(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 0)
		{
			func_502(iParam0, iVar0);
		}
		else if (func_411(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 1)
		{
			func_501(iParam0, iVar0);
		}
		else if (func_411(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 2)
		{
			func_498(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_498(int* iParam0, int iParam1)//Position - 0x6C3F6
{
	float fVar0;
	if (func_499(iParam0, iParam1, 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0->f_1735[iParam1 /*206*/].f_8))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam0->f_1735[iParam1 /*206*/].f_190, iParam0->f_1735[iParam1 /*206*/].f_191);
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, fVar0, false);
	}
}

int func_499(var uParam0, int iParam1, bool bParam2)//Position - 0x6C44C
{
	if (iParam1 < 1)
	{
		return 0;
	}
	return func_500(uParam0, iParam1, bParam2);
}

int func_500(var uParam0, int iParam1, bool bParam2)//Position - 0x6C468
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		return 0;
	}
	if (bParam2)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9, false))
		{
			return 0;
		}
	}
	return 1;
}

void func_501(int* iParam0, int iParam1)//Position - 0x6C4A4
{
	if (func_499(iParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, false))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam0->f_1735[iParam1 /*206*/].f_194, iParam0->f_1735[iParam1 /*206*/].f_195));
		}
	}
}

void func_502(int* iParam0, int iParam1)//Position - 0x6C4FF
{
	if (func_499(iParam0, iParam1, 0))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[iParam1 /*206*/].f_8))
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0->f_1735[iParam1 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam0->f_1735[iParam1 /*206*/].f_192, iParam0->f_1735[iParam1 /*206*/].f_193));
		}
		else
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0->f_1735[iParam1 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam0->f_1735[iParam1 /*206*/].f_190, iParam0->f_1735[iParam1 /*206*/].f_191));
		}
	}
}

void func_503(int* iParam0, int iParam1)//Position - 0x6C57A
{
	float fVar0;
	if (func_499(iParam0, iParam1, 0))
	{
		fVar0 = __LIB_0__::func_76(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[0 /*206*/].f_8, 1);
		switch (iParam0->f_1735[iParam1 /*206*/].f_198)
		{
			case 0:
				func_533(iParam0, iParam1, fVar0);
				break;
			case 1:
				func_532(iParam0, iParam1, fVar0);
				break;
			case 2:
				func_516(iParam0, iParam1, fVar0);
				break;
			case 3:
				func_515(iParam0, iParam1);
				break;
		}
		func_504(iParam0, iParam1);
	}
}

void func_504(int* iParam0, int iParam1)//Position - 0x6C60C
{
	func_514(iParam0, iParam1);
	func_513(iParam0);
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_509(iParam0, iParam1);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_505(iParam0, iParam1);
	}
}

void func_505(int* iParam0, int iParam1)//Position - 0x6C65B
{
	func_506(iParam0, iParam1);
}

void func_506(int* iParam0, int iParam1)//Position - 0x6C66B
{
	if (!func_507(iParam0, iParam1))
	{
		if (iLocal_422 < iLocal_419)
		{
			if (!iParam0->f_1735[iParam1 /*206*/].f_198 == 3)
			{
				iParam0->f_1735[iParam1 /*206*/].f_198 = 3;
				iLocal_422++;
			}
		}
	}
	switch (iLocal_313)
	{
		case 1:
		case 0:
			if (iParam0->f_1735[iParam1 /*206*/].f_11 >= func_385() + 2 && iLocal_419 < 5)
			{
				iLocal_419++;
			}
			else if (iParam0->f_1735[iParam1 /*206*/].f_11 >= func_385() + 3 && iLocal_419 < 6)
			{
				iLocal_419++;
			}
			break;
		case 2:
			if (iParam0->f_1735[iParam1 /*206*/].f_11 >= 94 && iLocal_419 < 5)
			{
				iLocal_419++;
			}
			else if (iParam0->f_1735[iParam1 /*206*/].f_11 >= 102 && iLocal_419 < 6)
			{
				iLocal_419++;
			}
			break;
	}
}

int func_507(int* iParam0, int iParam1)//Position - 0x6C767
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		if (iParam0->f_1735[iParam1 /*206*/].f_11 >= func_508())
		{
			return 1;
		}
	}
	return 0;
}

int func_508()//Position - 0x6C799
{
	switch (iLocal_313)
	{
		case 0:
			return 2;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 17;
			break;
	}
	return -1;
}

void func_509(int* iParam0, int iParam1)//Position - 0x6C7D2
{
	func_510(iParam0, iParam1);
}

void func_510(int* iParam0, int iParam1)//Position - 0x6C7E2
{
	if ((func_512(iParam0, iParam1) && iLocal_313 == 2) || iLocal_313 != 2)
	{
		if (iLocal_422 < iLocal_419)
		{
			if (!iParam0->f_1735[iParam1 /*206*/].f_198 == 3)
			{
				iParam0->f_1735[iParam1 /*206*/].f_198 = 3;
				iLocal_422++;
			}
		}
	}
	else if (iParam0->f_1735[iParam1 /*206*/].f_198 == 3)
	{
		iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
	}
	switch (iLocal_313)
	{
		case 1:
		case 0:
			if (iParam0->f_1735[iParam1 /*206*/].f_11 >= func_511() + 1 && iLocal_419 < 5)
			{
				iLocal_419++;
			}
			else if (iParam0->f_1735[iParam1 /*206*/].f_11 >= func_511() + 2 && iLocal_419 < 6)
			{
				iLocal_419++;
			}
			break;
		case 2:
			if (iParam0->f_1735[iParam1 /*206*/].f_11 >= 5 && iLocal_419 < 5)
			{
				iLocal_419++;
			}
			else if (iParam0->f_1735[iParam1 /*206*/].f_11 >= 6 && iLocal_419 < 6)
			{
				iLocal_419++;
			}
			break;
	}
}

int func_511()//Position - 0x6C90E
{
	switch (iLocal_313)
	{
		case 0:
			return 2;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 8;
			break;
	}
	return -1;
}

int func_512(int* iParam0, int iParam1)//Position - 0x6C947
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		if (iParam0->f_1735[iParam1 /*206*/].f_11 >= func_511())
		{
			return 1;
		}
	}
	return 0;
}

void func_513(int* iParam0)//Position - 0x6C979
{
	int iVar0;
	iVar0 = func_411(iParam0, &(iParam0->f_1735[0 /*206*/]));
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			iLocal_417 = 4;
			iLocal_418 = 2;
			iLocal_419 = 0;
			break;
		case 2:
			iLocal_417 = 2;
			iLocal_418 = 2;
			iLocal_419 = 0;
			break;
	}
}

void func_514(var uParam0, int iParam1)//Position - 0x6C9CB
{
	int iVar0;
	int iVar1;
	switch (iLocal_313)
	{
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = uParam0->f_1735[0 /*206*/].f_11;
				switch (iVar0)
				{
					case 2:
						Local_416.f_1 = 2.4f;
						break;
					case 21:
						Local_416.f_3 = 2.7f;
						break;
				}
			}
			else
			{
				iVar1 = uParam0->f_1735[iParam1 /*206*/].f_11;
				switch (iVar1)
				{
					case 22:
						Local_416.f_2 = 1.1f;
						break;
					}
			}
			break;
		case 0:
			if (iParam1 == 0)
			{
				iVar0 = uParam0->f_1735[0 /*206*/].f_11;
				switch (iVar0)
				{
					case 2:
						Local_416.f_1 = 2.4f;
						break;
					case 23:
						Local_416.f_3 = 2.7f;
						break;
				}
			}
			else
			{
				iVar1 = uParam0->f_1735[iParam1 /*206*/].f_11;
				switch (iVar1)
				{
					case 24:
						Local_416.f_2 = 1.1f;
						break;
					}
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				iVar0 = uParam0->f_1735[0 /*206*/].f_11;
				switch (iVar0)
				{
					case 2:
						Local_416.f_1 = 2.4f;
						break;
					case 114:
						Local_416.f_3 = 2.7f;
						break;
				}
			}
			else
			{
				iVar1 = uParam0->f_1735[iParam1 /*206*/].f_11;
				switch (iVar1)
				{
					case 115:
						Local_416.f_2 = 1.1f;
						break;
					}
			}
			break;
	}
}

void func_515(int* iParam0, int iParam1)//Position - 0x6CB31
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		iParam0->f_1735[iParam1 /*206*/].f_192 = 1.7f;
		iParam0->f_1735[iParam1 /*206*/].f_193 = 2.2f;
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
	{
		iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		iParam0->f_1735[iParam1 /*206*/].f_190 = 1.1f;
		iParam0->f_1735[iParam1 /*206*/].f_191 = 1.6f;
	}
}

void func_516(int* iParam0, int iParam1, float fParam2)//Position - 0x6CBC4
{
	int iVar0;
	if (iParam0->f_1735[iParam1 /*206*/].f_12 > iParam0->f_1735[0 /*206*/].f_12)
	{
		if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_199), 7f))
		{
			if (fParam2 <= 6.75f)
			{
				if (iLocal_420 < iLocal_417)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
					if (iVar0 < 50)
					{
						func_529(iParam0, iParam1);
					}
					else
					{
						func_525(iParam0, iParam1, fParam2);
						iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
						iLocal_420 = (iLocal_420 - 1);
					}
				}
				else if (iLocal_421 < iLocal_418)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 5)
					{
						func_522(iParam0, iParam1);
						iParam0->f_1735[iParam1 /*206*/].f_198 = 1;
						iLocal_421++;
					}
					else
					{
						func_525(iParam0, iParam1, fParam2);
						iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					}
					iLocal_420 = (iLocal_420 - 1);
				}
				else
				{
					func_525(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_420 = (iLocal_420 - 1);
				}
			}
			else if (iLocal_420 < iLocal_417)
			{
				func_529(iParam0, iParam1);
			}
			else
			{
				func_525(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_420 = (iLocal_420 - 1);
			}
			__LIB_0__::func_706(&(iParam0->f_1735[iParam1 /*206*/].f_199), 0f);
		}
		else
		{
			func_529(iParam0, iParam1);
		}
	}
	else if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_199), 7f))
	{
		if (fParam2 <= 6.75f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar0 < 50)
			{
				func_517(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_420 = (iLocal_420 - 1);
			}
			else if (iLocal_420 < iLocal_417)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 50)
				{
					func_529(iParam0, iParam1);
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_420 = (iLocal_420 - 1);
				}
			}
			else if (iLocal_421 < iLocal_418)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 10)
				{
					func_522(iParam0, iParam1);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 1;
					iLocal_421 = (iLocal_421 - 1);
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				}
				iLocal_420 = (iLocal_420 - 1);
			}
			else
			{
				func_517(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_420 = (iLocal_420 - 1);
			}
		}
		else
		{
			if (iLocal_421 < iLocal_418)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 15)
				{
					func_522(iParam0, iParam1);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 1;
					iLocal_421++;
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				}
			}
			else
			{
				func_517(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
			}
			iLocal_420 = (iLocal_420 - 1);
		}
		__LIB_0__::func_706(&(iParam0->f_1735[iParam1 /*206*/].f_199), 0f);
	}
	else
	{
		func_529(iParam0, iParam1);
	}
}

void func_517(int* iParam0, int iParam1, float fParam2)//Position - 0x6CEA8
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_521(iParam0, iParam1, fParam2);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
	{
		func_519(iParam0, iParam1, fParam2);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_518(iParam0, iParam1, fParam2);
	}
}

void func_518(int* iParam0, int iParam1, float fParam2)//Position - 0x6CF0D
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(iParam0->f_1735[iParam1 /*206*/].f_8, 1f);
					if (fParam2 > 15f && fParam2 < 21f)
					{
						if (uLocal_414[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_190)
						{
							iParam0->f_1735[iParam1 /*206*/].f_190 = (iParam0->f_1735[iParam1 /*206*/].f_190 - 0.05f);
						}
						if (uLocal_414[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_191)
						{
							iParam0->f_1735[iParam1 /*206*/].f_191 = (iParam0->f_1735[iParam1 /*206*/].f_191 - 0.05f);
						}
					}
					else if (fParam2 > 21f && fParam2 < 30f)
					{
						if (uLocal_414[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_190)
						{
							iParam0->f_1735[iParam1 /*206*/].f_190 = (iParam0->f_1735[iParam1 /*206*/].f_190 - 0.1f);
						}
						if (uLocal_414[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_191)
						{
							iParam0->f_1735[iParam1 /*206*/].f_191 = (iParam0->f_1735[iParam1 /*206*/].f_191 - 0.1f);
						}
					}
					else if (fParam2 > 30f)
					{
						if (uLocal_414[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_190)
						{
							iParam0->f_1735[iParam1 /*206*/].f_190 = (iParam0->f_1735[iParam1 /*206*/].f_190 - 0.5f);
						}
						if (uLocal_414[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_191)
						{
							iParam0->f_1735[iParam1 /*206*/].f_191 = (iParam0->f_1735[iParam1 /*206*/].f_191 - 0.5f);
						}
					}
					else if (fParam2 < 15f)
					{
						iParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_414[iParam1];
						iParam0->f_1735[iParam1 /*206*/].f_191 = uLocal_415[iParam1];
					}
					if (uLocal_414[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_190)
					{
						iParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_414[iParam1];
					}
					if (Local_416.f_2 > iParam0->f_1735[iParam1 /*206*/].f_191)
					{
						iParam0->f_1735[iParam1 /*206*/].f_191 = Local_416.f_2;
					}
				}
			}
		}
	}
}

void func_519(int* iParam0, int iParam1, float fParam2)//Position - 0x6D165
{
	if (func_499(iParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, false))
		{
			if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
			{
				if (fParam2 > 150f)
				{
					switch (iParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
						case 2:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
						case 3:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
						case 4:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
						case 5:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 3f));
							break;
						case 6:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 3f));
							break;
						case 7:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 4f));
							break;
					}
				}
				else if (fParam2 > 100f)
				{
					switch (iParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 1.5f));
							break;
						case 2:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 1.5f));
							break;
						case 3:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 1.5f));
							break;
						case 4:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 1.5f));
							break;
						case 5:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
						case 6:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
						case 7:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 / 2f));
							break;
					}
				}
				else if (fParam2 > 25f && fParam2 < 50f)
				{
					switch (iParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, Local_416.f_6);
							break;
						case 2:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, Local_416.f_6);
							break;
						case 3:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 - 1.5f));
							break;
						case 4:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 - 2f));
							break;
						case 5:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 - 3f));
							break;
						case 6:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 - 4f));
							break;
						case 7:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_1735[iParam1 /*206*/].f_8, (Local_416.f_6 - 5f));
							break;
					}
				}
				else
				{
					func_520(iParam0, iParam1);
				}
			}
		}
	}
}

void func_520(int* iParam0, int iParam1)//Position - 0x6D4B4
{
	if (func_499(iParam0, iParam1, 1))
	{
		switch (iParam0->f_1735[iParam1 /*206*/].f_196)
		{
			case 1:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 24f;
				break;
			case 2:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 22f;
				break;
			case 3:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 22f;
				break;
			case 4:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 17f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 20f;
				break;
			case 5:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 15f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 17f;
				break;
			case 6:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 11f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 14f;
				break;
			case 7:
				iParam0->f_1735[iParam1 /*206*/].f_194 = 10f;
				iParam0->f_1735[iParam1 /*206*/].f_195 = 12f;
				break;
			}
	}
}

void func_521(int* iParam0, int iParam1, float fParam2)//Position - 0x6D5F7
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[iParam1 /*206*/].f_8))
					{
						PED::SET_PED_MOVE_RATE_OVERRIDE(iParam0->f_1735[iParam1 /*206*/].f_8, 0.6f);
					}
					if (fParam2 > 15f && fParam2 < 21f)
					{
						if (Local_416.f_0 < iParam0->f_1735[iParam1 /*206*/].f_192)
						{
							iParam0->f_1735[iParam1 /*206*/].f_192 = (iParam0->f_1735[iParam1 /*206*/].f_192 - 0.05f);
						}
						if (Local_416.f_0 < iParam0->f_1735[iParam1 /*206*/].f_193)
						{
							iParam0->f_1735[iParam1 /*206*/].f_193 = (iParam0->f_1735[iParam1 /*206*/].f_193 - 0.05f);
						}
					}
					else if (fParam2 > 21f && fParam2 < 30f)
					{
						if (Local_416.f_0 < iParam0->f_1735[iParam1 /*206*/].f_192)
						{
							iParam0->f_1735[iParam1 /*206*/].f_192 = (iParam0->f_1735[iParam1 /*206*/].f_192 - 0.1f);
						}
						if (Local_416.f_0 < iParam0->f_1735[iParam1 /*206*/].f_193)
						{
							iParam0->f_1735[iParam1 /*206*/].f_193 = (iParam0->f_1735[iParam1 /*206*/].f_193 - 0.1f);
						}
					}
					else if (fParam2 > 30f)
					{
						if (Local_416.f_0 < iParam0->f_1735[iParam1 /*206*/].f_192)
						{
							iParam0->f_1735[iParam1 /*206*/].f_192 = (iParam0->f_1735[iParam1 /*206*/].f_192 - 0.5f);
						}
						if (Local_416.f_0 < iParam0->f_1735[iParam1 /*206*/].f_193)
						{
							iParam0->f_1735[iParam1 /*206*/].f_193 = (iParam0->f_1735[iParam1 /*206*/].f_193 - 0.5f);
						}
					}
					else if (fParam2 < 15f)
					{
						iParam0->f_1735[iParam1 /*206*/].f_192 = Local_416.f_0;
						iParam0->f_1735[iParam1 /*206*/].f_193 = Local_416.f_1;
					}
					if (Local_416.f_0 > iParam0->f_1735[iParam1 /*206*/].f_192)
					{
						iParam0->f_1735[iParam1 /*206*/].f_192 = Local_416.f_0;
					}
					if (Local_416.f_0 > iParam0->f_1735[iParam1 /*206*/].f_193)
					{
						iParam0->f_1735[iParam1 /*206*/].f_193 = Local_416.f_0;
					}
				}
			}
		}
	}
}

void func_522(int* iParam0, int iParam1)//Position - 0x6D83B
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_524(iParam0, iParam1);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
	{
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_523(iParam0, iParam1);
	}
}

void func_523(int* iParam0, int iParam1)//Position - 0x6D892
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					iParam0->f_1735[iParam1 /*206*/].f_190 = Local_416.f_2;
					iParam0->f_1735[iParam1 /*206*/].f_191 = Local_416.f_2;
				}
			}
		}
	}
}

void func_524(int* iParam0, int iParam1)//Position - 0x6D90F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
				{
					iParam0->f_1735[iParam1 /*206*/].f_192 = Local_416.f_0;
					iParam0->f_1735[iParam1 /*206*/].f_193 = Local_416.f_0;
				}
			}
		}
	}
}

void func_525(int* iParam0, int iParam1, float fParam2)//Position - 0x6D988
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_528(iParam0, iParam1, fParam2);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
	{
		func_527(iParam0, iParam1, fParam2);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_526(iParam0, iParam1, fParam2);
	}
}

void func_526(int* iParam0, int iParam1, float fParam2)//Position - 0x6D9ED
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					if (fParam2 > 5f && fParam2 < 11f)
					{
						if (uLocal_415[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_190)
						{
							iParam0->f_1735[iParam1 /*206*/].f_190 = (iParam0->f_1735[iParam1 /*206*/].f_190 + 0.1f);
						}
						if (uLocal_415[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_191)
						{
							iParam0->f_1735[iParam1 /*206*/].f_191 = (iParam0->f_1735[iParam1 /*206*/].f_191 + 0.1f);
						}
					}
					else if (fParam2 > 11f && fParam2 < 20f)
					{
						if (uLocal_415[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_190)
						{
							iParam0->f_1735[iParam1 /*206*/].f_190 = (iParam0->f_1735[iParam1 /*206*/].f_190 + 0.3f);
						}
						if (uLocal_415[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_191)
						{
							iParam0->f_1735[iParam1 /*206*/].f_191 = (iParam0->f_1735[iParam1 /*206*/].f_191 + 0.3f);
						}
					}
					else if (fParam2 > 20f)
					{
						if (uLocal_415[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_190)
						{
							iParam0->f_1735[iParam1 /*206*/].f_190 = (iParam0->f_1735[iParam1 /*206*/].f_190 + 1f);
						}
						if (uLocal_415[iParam1] > iParam0->f_1735[iParam1 /*206*/].f_191)
						{
							iParam0->f_1735[iParam1 /*206*/].f_191 = (iParam0->f_1735[iParam1 /*206*/].f_191 + 1f);
						}
					}
					else if (fParam2 <= 5f)
					{
						iParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_414[iParam1];
						iParam0->f_1735[iParam1 /*206*/].f_191 = uLocal_415[iParam1];
					}
					if (uLocal_415[iParam1] < iParam0->f_1735[iParam1 /*206*/].f_190)
					{
						iParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_415[iParam1];
					}
					if (Local_416.f_3 < iParam0->f_1735[iParam1 /*206*/].f_191)
					{
						iParam0->f_1735[iParam1 /*206*/].f_191 = Local_416.f_3;
					}
				}
			}
		}
	}
}

void func_527(int* iParam0, int iParam1, float fParam2)//Position - 0x6DC25
{
	if (func_499(iParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, false))
		{
			if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
			{
				if (fParam2 > 50f)
				{
					switch (iParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						case 2:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						case 3:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						case 4:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						case 5:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 26f;
							break;
						case 6:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 24f;
							break;
						case 7:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 18f;
							break;
					}
				}
				else if (fParam2 > 15f && fParam2 < 35f)
				{
					switch (iParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						case 2:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						case 3:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						case 4:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						case 5:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 21f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 22f;
							break;
						case 6:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 17f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 20f;
							break;
						case 7:
							iParam0->f_1735[iParam1 /*206*/].f_194 = 16f;
							iParam0->f_1735[iParam1 /*206*/].f_195 = 18f;
							break;
					}
				}
				else
				{
					func_520(iParam0, iParam1);
				}
			}
		}
	}
}

void func_528(int* iParam0, int iParam1, float fParam2)//Position - 0x6DEF9
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[iParam1 /*206*/].f_8))
					{
						PED::SET_PED_MOVE_RATE_OVERRIDE(iParam0->f_1735[iParam1 /*206*/].f_8, 0.7f);
					}
					else
					{
						PED::SET_PED_MOVE_RATE_OVERRIDE(iParam0->f_1735[iParam1 /*206*/].f_8, 1.15f);
					}
					if (fParam2 > 5f && fParam2 < 11f)
					{
						if (Local_416.f_1 > iParam0->f_1735[iParam1 /*206*/].f_192)
						{
							iParam0->f_1735[iParam1 /*206*/].f_192 = (iParam0->f_1735[iParam1 /*206*/].f_192 + 0.1f);
						}
						if (Local_416.f_1 > iParam0->f_1735[iParam1 /*206*/].f_193)
						{
							iParam0->f_1735[iParam1 /*206*/].f_193 = (iParam0->f_1735[iParam1 /*206*/].f_193 + 0.1f);
						}
					}
					else if (fParam2 > 11f && fParam2 < 20f)
					{
						if (Local_416.f_1 > iParam0->f_1735[iParam1 /*206*/].f_192)
						{
							iParam0->f_1735[iParam1 /*206*/].f_192 = (iParam0->f_1735[iParam1 /*206*/].f_192 + 0.3f);
						}
						if (Local_416.f_1 > iParam0->f_1735[iParam1 /*206*/].f_193)
						{
							iParam0->f_1735[iParam1 /*206*/].f_193 = (iParam0->f_1735[iParam1 /*206*/].f_193 + 0.3f);
						}
					}
					else if (fParam2 > 20f)
					{
						if (Local_416.f_1 > iParam0->f_1735[iParam1 /*206*/].f_192)
						{
							iParam0->f_1735[iParam1 /*206*/].f_192 = (iParam0->f_1735[iParam1 /*206*/].f_192 + 1f);
						}
						if (Local_416.f_1 > iParam0->f_1735[iParam1 /*206*/].f_193)
						{
							iParam0->f_1735[iParam1 /*206*/].f_193 = (iParam0->f_1735[iParam1 /*206*/].f_193 + 1f);
						}
					}
					else if (fParam2 <= 5f)
					{
						iParam0->f_1735[iParam1 /*206*/].f_192 = Local_416.f_0;
						iParam0->f_1735[iParam1 /*206*/].f_193 = Local_416.f_1;
					}
					if (Local_416.f_1 < iParam0->f_1735[iParam1 /*206*/].f_192)
					{
						iParam0->f_1735[iParam1 /*206*/].f_192 = Local_416.f_1;
					}
					if (Local_416.f_1 < iParam0->f_1735[iParam1 /*206*/].f_193)
					{
						iParam0->f_1735[iParam1 /*206*/].f_193 = Local_416.f_1;
					}
				}
			}
		}
	}
}

void func_529(int* iParam0, int iParam1)//Position - 0x6E158
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_531(iParam0, iParam1);
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
	{
	}
	else if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_530(iParam0, iParam1);
	}
}

void func_530(int* iParam0, int iParam1)//Position - 0x6E1AF
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					iParam0->f_1735[iParam1 /*206*/].f_190 = Local_416.f_3;
					iParam0->f_1735[iParam1 /*206*/].f_191 = Local_416.f_3;
				}
			}
		}
	}
}

void func_531(int* iParam0, int iParam1)//Position - 0x6E22C
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (!iParam0->f_1735[iParam1 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[iParam1 /*206*/].f_8))
				{
					if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
					{
						iParam0->f_1735[iParam1 /*206*/].f_192 = Local_416.f_1;
						iParam0->f_1735[iParam1 /*206*/].f_193 = Local_416.f_1;
					}
				}
			}
		}
	}
}

void func_532(int* iParam0, int iParam1, float fParam2)//Position - 0x6E2BB
{
	int iVar0;
	if (iParam0->f_1735[iParam1 /*206*/].f_12 > iParam0->f_1735[0 /*206*/].f_12)
	{
		if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_199), 7f))
		{
			if (fParam2 <= 6.75f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 90)
				{
					func_525(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_421 = (iLocal_421 - 1);
				}
				else if (iLocal_420 < iLocal_417)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 25)
					{
						func_529(iParam0, iParam1);
						iParam0->f_1735[iParam1 /*206*/].f_198 = 2;
						iLocal_420++;
						iLocal_421 = (iLocal_421 - 1);
					}
					else
					{
						func_522(iParam0, iParam1);
					}
				}
				else if (iLocal_421 < iLocal_418)
				{
					func_522(iParam0, iParam1);
				}
				else
				{
					func_525(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_421 = (iLocal_421 - 1);
				}
			}
			else
			{
				func_525(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_421 = (iLocal_421 - 1);
			}
			__LIB_0__::func_706(&(iParam0->f_1735[iParam1 /*206*/].f_199), 0f);
		}
		else
		{
			func_522(iParam0, iParam1);
		}
	}
	else if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_199), 7f))
	{
		if (fParam2 <= 6.75f)
		{
			if (iVar0 < 75)
			{
				func_525(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_421 = (iLocal_421 - 1);
			}
			else if (iLocal_421 < iLocal_418)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar0 < 20)
				{
					func_522(iParam0, iParam1);
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_421 = (iLocal_421 - 1);
				}
			}
			else if (iLocal_420 < iLocal_417)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 25)
				{
					func_529(iParam0, iParam1);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 2;
					iLocal_420++;
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				}
				iLocal_421 = (iLocal_421 - 1);
			}
			else
			{
				func_517(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_421 = (iLocal_421 - 1);
			}
		}
		else if (iLocal_421 < iLocal_418)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar0 < 50)
			{
				func_522(iParam0, iParam1);
			}
			else
			{
				func_517(iParam0, iParam1, fParam2);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_421 = (iLocal_421 - 1);
			}
		}
		else
		{
			func_517(iParam0, iParam1, fParam2);
			iParam0->f_1735[iParam1 /*206*/].f_198 = 0;
			iLocal_421 = (iLocal_421 - 1);
		}
		__LIB_0__::func_706(&(iParam0->f_1735[iParam1 /*206*/].f_199), 0f);
	}
	else
	{
		func_522(iParam0, iParam1);
	}
}

void func_533(int* iParam0, int iParam1, float fParam2)//Position - 0x6E569
{
	int iVar0;
	if (iParam0->f_1735[iParam1 /*206*/].f_12 > iParam0->f_1735[0 /*206*/].f_12)
	{
		if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_199), 10f))
		{
			if (fParam2 <= 6.75f)
			{
				if (iLocal_420 < iLocal_417 || iParam0->f_1735[0 /*206*/].f_12 < 4)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 60)
					{
						func_529(iParam0, iParam1);
						iParam0->f_1735[iParam1 /*206*/].f_198 = 2;
						iLocal_420++;
					}
					else
					{
						func_525(iParam0, iParam1, fParam2);
					}
				}
				else if (iLocal_421 < iLocal_418)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 10)
					{
						func_522(iParam0, iParam1);
						iParam0->f_1735[iParam1 /*206*/].f_198 = 1;
						iLocal_421++;
					}
					else
					{
						func_525(iParam0, iParam1, fParam2);
					}
				}
				else
				{
					func_525(iParam0, iParam1, fParam2);
				}
			}
			else if (iLocal_420 < iLocal_417)
			{
				func_529(iParam0, iParam1);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 2;
				iLocal_420++;
			}
			else
			{
				func_525(iParam0, iParam1, fParam2);
			}
			__LIB_0__::func_706(&(iParam0->f_1735[iParam1 /*206*/].f_199), 0f);
		}
		else
		{
			func_525(iParam0, iParam1, fParam2);
		}
	}
	else if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_199), 10f))
	{
		if (fParam2 > (6.75f + 10f))
		{
			if (iLocal_421 < iLocal_418)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 25)
				{
					func_522(iParam0, iParam1);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 1;
					iLocal_421++;
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
				}
			}
			else if (iLocal_420 < iLocal_417)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 30)
				{
					func_529(iParam0, iParam1);
					iParam0->f_1735[iParam1 /*206*/].f_198 = 2;
					iLocal_420++;
				}
				else
				{
					func_517(iParam0, iParam1, fParam2);
				}
			}
			else
			{
				func_517(iParam0, iParam1, fParam2);
			}
		}
		else if (iLocal_421 < iLocal_418)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar0 < 10)
			{
				func_522(iParam0, iParam1);
				iParam0->f_1735[iParam1 /*206*/].f_198 = 1;
				iLocal_421++;
			}
			else
			{
				func_517(iParam0, iParam1, fParam2);
			}
		}
		else
		{
			func_517(iParam0, iParam1, fParam2);
		}
		__LIB_0__::func_706(&(iParam0->f_1735[iParam1 /*206*/].f_199), 0f);
	}
	else
	{
		func_517(iParam0, iParam1, fParam2);
	}
}

void func_535(int* iParam0, int iParam1)//Position - 0x6E830
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar0 /*206*/].f_8, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar0 /*206*/].f_9, false))
			{
				if (!iParam0->f_1735[iVar0 /*206*/].f_8 == iParam0->f_1735[0 /*206*/].f_8)
				{
					if (!PED::IS_PED_IN_VEHICLE(iParam0->f_1735[iVar0 /*206*/].f_8, iParam0->f_1735[iVar0 /*206*/].f_9, false))
					{
						PED::SET_PED_RESET_FLAG(iParam0->f_1735[iVar0 /*206*/].f_8, 55, true);
					}
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[iVar0 /*206*/].f_8))
					{
						PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iParam0->f_1735[iVar0 /*206*/].f_8);
					}
				}
			}
		}
		if (func_557(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) && !iLocal_406[iVar0])
		{
			func_554(iParam0, iVar0);
		}
		else if ((!func_553(&(iParam0->f_1735[iVar0 /*206*/]), 2) && func_557(iParam0, &(iParam0->f_1735[iVar0 /*206*/]))) && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1735[iVar0 /*206*/].f_8, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1)
		{
			TASK::SET_ANIM_RATE(iParam0->f_1735[iVar0 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2.5f), 0, false);
			func_552(&(iParam0->f_1735[iVar0 /*206*/]), 2);
		}
		iVar0++;
	}
	func_551(iParam0, iParam1);
	func_550(iParam0, iParam1);
	func_549(iParam0, iParam1);
	func_536(iParam0, iParam1);
}

void func_536(int* iParam0, int iParam1)//Position - 0x6E995
{
	func_548(iParam0, iParam1);
	func_546(iParam0, iParam1);
	func_537(iParam0, iParam1);
}

void func_537(int* iParam0, int iParam1)//Position - 0x6E9B5
{
	if (func_500(iParam0, iParam1, 1))
	{
		if (iParam0->f_1735[0 /*206*/].f_12 < iParam0->f_1735[iParam1 /*206*/].f_12)
		{
			if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, false))
				{
					if (iParam0->f_1735[iParam1 /*206*/].f_11 > func_386() + 3)
					{
						if ((iParam0->f_1735[0 /*206*/].f_11 - iParam0->f_1735[iParam1 /*206*/].f_11) >= 3)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_1735[iParam1 /*206*/].f_8))
							{
								if (__LIB_15__::func_251(&(iParam0->f_1735[iParam1 /*206*/].f_202), 6f))
								{
									PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_26[iParam0->f_1735[iParam1 /*206*/].f_11 /*14*/].f_3);
									iParam0->f_1735[iParam1 /*206*/].f_11++;
									func_538(iParam0, iParam0->f_26[iParam0->f_1735[iParam1 /*206*/].f_11 /*14*/].f_3, iParam1);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0->f_1735[iParam1 /*206*/].f_9, 15f);
									__LIB_1__::func_31(&(iParam0->f_1735[iParam1 /*206*/].f_202));
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_538(int* iParam0, struct<3> Param1, int iParam2)//Position - 0x6EAE1
{
	switch (func_411(iParam0, &(iParam0->f_1735[iParam2 /*206*/])))
	{
		case 0:
			func_544(iParam0, Param1, iParam2);
			break;
		case 1:
			func_541(iParam0, iParam2);
			break;
		case 2:
			func_539(iParam0, iParam2);
			break;
	}
}

void func_539(var uParam0, int iParam1)//Position - 0x6EB34
{
	int iVar0;
	char* sVar1;
	float fVar2;
	struct<3> Var3;
	if (!uParam0->f_1735[iParam1 /*206*/].f_11 == (uParam0->f_11 - 1))
	{
		switch (iParam1)
		{
			case 1:
				iVar0 = 131072;
				break;
			case 2:
				iVar0 = 262144;
				break;
			case 3:
				iVar0 = 524288;
				break;
			case 4:
				iVar0 = 1048576;
				break;
			case 5:
				iVar0 = 2097152;
				break;
			case 6:
				iVar0 = 4194304;
				break;
			case 7:
				iVar0 = 8388608;
				break;
			default:
				break;
		}
		if (uParam0->f_1735[iParam1 /*206*/].f_11 > 0 && !func_324(iVar0))
		{
			if (iLocal_313 == 1)
			{
				sVar1 = "Tri1_Run";
			}
			else if (iLocal_313 == 0)
			{
				sVar1 = "Tri2_Run";
			}
			else if (iLocal_313 == 2)
			{
				sVar1 = "Tri3_Run";
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, sVar1, 0, 1038, -1);
			func_337(iVar0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iParam1 /*206*/].f_9, true);
		}
	}
	else
	{
		PED::SET_PED_STEERS_AROUND_OBJECTS(uParam0->f_1735[iParam1 /*206*/].f_8, false);
		fVar2 = 3f;
		Var3 = { __LIB_1__::func_657(Local_407, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar2, fVar2), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar2, fVar2), 0f) };
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_1735[iParam1 /*206*/].f_8, Var3, 3f, -1, 3.45f, 1, 40000f);
	}
}

void func_541(var uParam0, int iParam1)//Position - 0x6ECF5
{
	if (uParam0->f_1735[iParam1 /*206*/].f_11 == func_386())
	{
		if (uParam0->f_1735[iParam1 /*206*/].f_198 == 3)
		{
			uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
			iLocal_422 = (iLocal_422 - 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9, false))
	{
		if (!func_553(&(uParam0->f_1735[iParam1 /*206*/]), 8) || (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, true) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1))
		{
			func_543(uParam0, iParam1);
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
		{
			PED::SET_DRIVER_RACING_MODIFIER(uParam0->f_1735[iParam1 /*206*/].f_8, 1f);
			VEHICLE::SET_VEHICLE_IS_RACING(uParam0->f_1735[iParam1 /*206*/].f_9, true);
			func_542(uParam0, iParam1);
		}
	}
}

void func_542(var uParam0, int iParam1)//Position - 0x6EDD6
{
	if (func_499(uParam0, iParam1, 1))
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
	}
}

void func_543(var uParam0, int iParam1)//Position - 0x6EE1E
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!(PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8)))
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_1735[iParam1 /*206*/].f_8, true);
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iParam1 /*206*/].f_9, true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iParam1 /*206*/].f_8, true) - Var0 * Vector(0.15f, 0.15f, 0.15f) };
		Var2 = { Var0 + Var1 };
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_403);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_403);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var2, 3f, 20000, 3f, 1, 40000f);
		TASK::TASK_ENTER_VEHICLE(0, uParam0->f_1735[iParam1 /*206*/].f_9, 20000, -1, 3f, 1, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_403);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, iLocal_403);
	}
	else
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
	}
}

void func_544(var uParam0, struct<3> Param1, int iParam2)//Position - 0x6EF5E
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	fVar1 = 4f;
	Var0 = { __LIB_1__::func_657(Param1, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1), 0f) };
	if (uParam0->f_1735[iParam2 /*206*/].f_11 >= 1)
	{
		PED::SET_PED_STEERS_AROUND_OBJECTS(uParam0->f_1735[iParam2 /*206*/].f_8, true);
	}
	if (func_553(&(uParam0->f_1735[iParam2 /*206*/]), 4))
	{
		if (uParam0->f_1735[iParam2 /*206*/].f_11 == 1)
		{
			func_545(&(uParam0->f_1735[iParam2 /*206*/]), 4);
		}
	}
	if (uParam0->f_1735[iParam2 /*206*/].f_11 == 0)
	{
		StringCopy(&cVar3, "triathlon_", 64);
		switch (iLocal_313)
		{
			case 0:
				StringConCat(&cVar3, "ves_", 64);
				break;
			case 1:
				StringConCat(&cVar3, "ala_", 64);
				break;
			case 2:
				StringConCat(&cVar3, "coy_", 64);
				break;
		}
		StringConCat(&cVar3, "racer", 64);
		StringIntConCat(&cVar3, iParam2, 64);
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cVar3, 0, 8, -1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 3f, -1, 0.25f, 2113, 40000f);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam2 /*206*/].f_8, iVar2);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		func_552(&(uParam0->f_1735[iParam2 /*206*/]), 4);
	}
	else
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_1735[iParam2 /*206*/].f_8, Var0, 3f, -1, 40000f, 0.5f);
	}
}

void func_545(var uParam0, int iParam1)//Position - 0x6F0B1
{
	if (func_553(uParam0, iParam1))
	{
		__LIB_2__::func_712(&(uParam0->f_197), iParam1);
	}
}

void func_546(int* iParam0, int iParam1)//Position - 0x6F0CE
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_8, false))
	{
		if (func_411(iParam0, &(iParam0->f_1735[0 /*206*/])) == 1)
		{
			if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 0)
			{
				if (iParam0->f_1735[0 /*206*/].f_11 == iLocal_426)
				{
					func_547(iParam0, iParam1);
				}
			}
		}
	}
}

void func_547(int* iParam0, int iParam1)//Position - 0x6F126
{
	int iVar0;
	if (func_499(iParam0, iParam1, 1))
	{
		iVar0 = func_386() + 1;
		ENTITY::SET_ENTITY_COORDS(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_26[iVar0 /*14*/].f_3, true, false, false, true);
		iParam0->f_1735[iParam1 /*206*/].f_11 = iVar0 + 1;
		PED::SET_PED_INTO_VEHICLE(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, -1);
		func_538(iParam0, iParam0->f_26[iParam0->f_1735[iParam1 /*206*/].f_11 /*14*/].f_3, iParam1);
	}
}

void func_548(var uParam0, int iParam1)//Position - 0x6F1A8
{
	if (func_499(uParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1735[iParam1 /*206*/].f_9) > 0f)
			{
				__LIB_1__::func_31(&(uParam0->f_1735[iParam1 /*206*/].f_202));
			}
			else if (!__LIB_1__::func_13(&(uParam0->f_1735[iParam1 /*206*/].f_202)))
			{
				__LIB_1__::func_362(&(uParam0->f_1735[iParam1 /*206*/].f_202));
			}
		}
	}
}

void func_549(int* iParam0, int iParam1)//Position - 0x6F222
{
	if (iLocal_313 == 2)
	{
		if (func_499(iParam0, iParam1, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_1735[iParam1 /*206*/].f_9, 145.87f, 1615f, 228.27f, 10f, 10f, 10f, false, true, 0))
			{
				iParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_409;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, iParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_1735[iParam1 /*206*/].f_9, 1188.63f, -1082.86f, 39.74f, 10f, 10f, 10f, false, true, 0))
			{
				iParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_410;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, iParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_1735[iParam1 /*206*/].f_9, -1027.92f, -1081.72f, 1.66f, 10f, 10f, 10f, false, true, 0))
			{
				iParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_411;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, iParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_1735[iParam1 /*206*/].f_9, -901.19f, 244.36f, 69.76f, 10f, 10f, 10f, false, true, 0))
			{
				iParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_412;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_1735[iParam1 /*206*/].f_8, iParam0->f_1735[iParam1 /*206*/].f_9, iParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, false, 2f);
			}
		}
	}
}

void func_550(int* iParam0, int iParam1)//Position - 0x6F42A
{
	if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0->f_1735[iParam1 /*206*/].f_8, 36, true))
		{
			if (PED::IS_PED_WEARING_HELMET(iParam0->f_1735[iParam1 /*206*/].f_8))
			{
				PED::REMOVE_PED_HELMET(iParam0->f_1735[iParam1 /*206*/].f_8, false);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_1735[iParam1 /*206*/].f_8, 36, false);
			}
		}
	}
}

void func_551(int* iParam0, int iParam1)//Position - 0x6F48E
{
	if (iParam1 != 0)
	{
		if (func_411(iParam0, &(iParam0->f_1735[iParam1 /*206*/])) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				if (!func_410(iParam0, iParam1, 1))
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(iParam0->f_1735[iParam1 /*206*/].f_8, 1.15f);
				}
			}
		}
	}
}

void func_552(var uParam0, int iParam1)//Position - 0x6F4E4
{
	if (!func_553(uParam0, iParam1))
	{
		__LIB_39__::func_780(&(uParam0->f_197), iParam1);
	}
}

bool func_553(var uParam0, int iParam1)//Position - 0x6F502
{
	return __LIB_0__::func_703(uParam0->f_197, iParam1);
}

void func_554(var uParam0, int iParam1)//Position - 0x6F514
{
	struct<3> Var0;
	char* sVar1;
	char* sVar2;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8, false))
	{
		if (iParam1 != 0)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iParam1 /*206*/].f_8, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 8f), 0f) };
			func_556(&Var0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_405[iParam1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_405[iParam1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 1f, 20000, 0.25f, 1, 40000f);
			if (uParam0->f_1735[iParam1 /*206*/].f_12 == 1)
			{
				sVar1 = func_555(iLocal_425[0]);
				TASK::TASK_PLAY_ANIM(0, iLocal_425[0], sVar1, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
			}
			else
			{
				sVar2 = func_555(iLocal_425[1]);
				TASK::TASK_PLAY_ANIM(0, iLocal_425[1], sVar2, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_405[iParam1]);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_405[iParam1]);
		}
		iLocal_406[iParam1] = 1;
	}
}

char* func_555(char* sParam0)//Position - 0x6F620
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, iLocal_425[0]))
	{
		return sLocal_423[MISC::GET_RANDOM_INT_IN_RANGE(0, sLocal_423)];
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, iLocal_425[1]))
	{
		return sLocal_424[MISC::GET_RANDOM_INT_IN_RANGE(0, sLocal_424)];
	}
	return "NULL";
}

void func_556(var uParam0)//Position - 0x6F66C
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	if (iLocal_313 == 0)
	{
		fVar1 = 201.6718f;
		Var0 = { -1332.9225f, -1043.1416f, 6.65f };
	}
	else if (iLocal_313 == 1)
	{
		fVar1 = -20f;
		Var0 = { 1759.4352f, 3894.694f, 33.789f };
	}
	else
	{
		fVar1 = 167.8617f;
		Var0 = { -2304.443f, 462.66916f, 173.4493f };
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
	fVar1 = (fVar1 + fVar3);
	if (SYSTEM::VDIST2(*uParam0, Var0) <= 25f)
	{
		Var2 = { __LIB_1__::func_657(*uParam0, fVar1, 0f, 10f, 0f) };
		*uParam0 = { Var2 };
	}
}

int func_557(var uParam0, var uParam1)//Position - 0x6F71B
{
	if (uParam1->f_11 > 0)
	{
		if (uParam1->f_11 >= uParam0->f_11)
		{
			return 1;
		}
	}
	return 0;
}

void func_558()//Position - 0x6F73B
{
	TASK::SET_EXCLUSIVE_SCENARIO_GROUP(sLocal_413);
}

void func_559()//Position - 0x6F74A
{
	if (Local_1281.f_1735[0 /*206*/].f_11 == 0 && !iLocal_315)
	{
		iLocal_315 = 1;
	}
	else if (((Local_1281.f_1735[0 /*206*/].f_11 == func_386() + 2 && !iLocal_316) && HUD::DOES_BLIP_EXIST(Local_1281.f_26[Local_1281.f_1735[0 /*206*/].f_11 /*14*/].f_9)) && (PED::IS_PED_IN_ANY_VEHICLE(Local_1281.f_1735[0 /*206*/].f_8, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_1281.f_1735[0 /*206*/].f_8)))
	{
		HUD::SET_BLIP_COLOUR(Local_1281.f_26[Local_1281.f_1735[0 /*206*/].f_11 /*14*/].f_9, 5);
		iLocal_316 = 1;
	}
	else if (Local_1281.f_1735[0 /*206*/].f_11 == func_385() + 1 && !iLocal_317)
	{
		HUD::SET_BLIP_COLOUR(Local_1281.f_26[Local_1281.f_1735[0 /*206*/].f_11 /*14*/].f_9, 5);
		iLocal_317 = 1;
	}
}

void func_560(int* iParam0, char* sParam1)//Position - 0x6F832
{
	int iVar0;
	if (iParam0->f_1735[0 /*206*/].f_11 >= (iParam0->f_11 - 3) && !func_324(268435456))
	{
		func_337(268435456);
		StringCopy(sParam1, "mini@triathlon", 32);
		iVar0 = __LIB_0__::func_683();
		if (iVar0 == 0)
		{
			StringConCat(sParam1, "michael", 32);
		}
		else if (iVar0 == 1)
		{
			StringConCat(sParam1, "franklin", 32);
		}
		else if (iVar0 == 2)
		{
			StringConCat(sParam1, "trevor", 32);
		}
		STREAMING::REQUEST_ANIM_DICT(sParam1);
		STREAMING::REQUEST_MODEL(joaat("prop_energy_drink"));
	}
}

void func_561(int* iParam0, float fParam1, float fParam2)//Position - 0x6F8B7
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	char* sVar3;
	if (!__LIB_1__::func_13(&iLocal_1119))
	{
		__LIB_1__::func_31(&iLocal_1119);
	}
	if ((PED::IS_PED_INJURED(iLocal_1112) || !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1112)) && __LIB_15__::func_251(&iLocal_1119, fLocal_1111))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var1 = { Vector(1f, 1f, 1f) * Vector(30f, 30f, 30f) };
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
		iVar2 = PED::GET_RANDOM_PED_AT_COORD(Var0, Var1, 30);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_INJURED(iVar2)) && ENTITY::GET_ENTITY_MODEL(iVar2) != joaat("A_M_Y_RoadCyc_01"))
		{
			sVar3 = __LIB_1__::func_295(PED::IS_PED_MALE(iVar2), "WAVELOAD_PAIN_MALE", "WAVELOAD_PAIN_FEMALE");
			__LIB_0__::func_709(iVar2, "WHOOP", sVar3, 6);
			fLocal_1111 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2);
			__LIB_1__::func_31(&iLocal_1119);
		}
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0->f_1735[0 /*206*/].f_8, true), iParam0->f_26[(iParam0->f_11 - 1) /*14*/].f_3) < 1000f && !func_324(32768))
	{
		func_562(iParam0);
		func_337(32768);
	}
}

void func_562(var uParam0)//Position - 0x6F9CC
{
	AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_14, "CROWD_CHEER_MASTER", uParam0->f_26[(uParam0->f_11 - 1) /*14*/].f_3, 0, false, 0, false);
	AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_15, "POSITIONED_WALLA_MASTER", uParam0->f_26[(uParam0->f_11 - 1) /*14*/].f_3, 0, false, 0, false);
}

void func_566(int* iParam0)//Position - 0x6FC60
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!func_324(16777216))
	{
		iVar0 = func_386() + 1;
		iVar1 = iParam0->f_1735[0 /*206*/].f_11;
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3))
		{
			fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask");
			if (fVar2 >= 0.457f)
			{
				PED::KNOCK_OFF_PED_PROP(PLAYER::PLAYER_PED_ID(), false, true, true, true);
				func_337(16777216);
			}
		}
		if ((iVar1 >= iVar0 && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3)) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 8f, -8f, -1, 48, 0f, false, false, false);
		}
	}
}

int func_567(int* iParam0)//Position - 0x6FD25
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	if (iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 != 6 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1735[0 /*206*/].f_8, joaat("SCRIPT_TASK_ANY")) == 1)
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_1735[0 /*206*/].f_8, true) };
	fVar1 = (5f * 5f);
	iVar3 = 1;
	bVar4 = false;
	while (iVar3 < iParam0->f_12)
	{
		fVar5 = SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iParam0->f_1735[iVar3 /*206*/].f_8, true));
		if (fVar5 < fVar1 && iParam0->f_1735[iVar3 /*206*/].f_12 > iParam0->f_1735[0 /*206*/].f_12)
		{
			fVar1 = fVar5;
			iVar2 = iVar3;
			bVar4 = true;
		}
		iVar3++;
	}
	if (bVar4)
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0->f_1735[0 /*206*/].f_8, iParam0->f_1735[iVar2 /*206*/].f_8, 3000, 0, 2);
		return 1;
	}
	return 0;
}

void func_568(int* iParam0)//Position - 0x6FE06
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	iVar0 = 1;
	while (iVar0 < 8)
	{
		if (func_411(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 2)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1735[iVar0 /*206*/].f_8, -1689270312) == 1)
			{
				fVar1 = (IntToFloat(iVar0) / 8f);
				Var2 = { __LIB_1__::func_576(3f, 3f, 0f, -3f, -3f, 0f, fVar1) };
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iParam0->f_1735[iVar0 /*206*/].f_8, Var2);
			}
		}
		iVar0++;
	}
}

void func_570(int* iParam0)//Position - 0x6FE9E
{
	int iVar0;
	float fVar1;
	if (iLocal_313 == 0)
	{
		iVar0 = iParam0->f_1735[0 /*206*/].f_11;
		if (iVar0 == iLocal_340)
		{
			if (!iLocal_346)
			{
				iLocal_346 = 1;
			}
		}
		else if (iVar0 >= iLocal_341 && iVar0 <= iLocal_342)
		{
			if (!iLocal_347)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0->f_1735[0 /*206*/].f_8, iParam0->f_1735[0 /*206*/].f_9, false))
				{
					if (!__LIB_1__::func_13(&iLocal_353))
					{
						__LIB_15__::func_248(&iLocal_353);
					}
					else if (__LIB_15__::func_251(&iLocal_353, 3f))
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_0__::func_151("TRI_HELP_BIKE_KM", -1);
						}
						iLocal_347 = 1;
						__LIB_1__::func_12(&iLocal_353);
					}
				}
			}
		}
		else if (iVar0 == iLocal_343)
		{
			if (!iLocal_348)
			{
				if (!__LIB_1__::func_13(&iLocal_353))
				{
					__LIB_15__::func_248(&iLocal_353);
				}
				else if (__LIB_15__::func_251(&iLocal_353, 5f))
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						__LIB_0__::func_151("TRI_HELP_RUN_KM", -1);
					}
					else
					{
						__LIB_0__::func_151("TRI_HELP_RUN", -1);
					}
					iLocal_348 = 1;
					__LIB_1__::func_12(&iLocal_353);
				}
			}
		}
		if (iVar0 == iLocal_344 && __LIB_16__::func_891(__LIB_0__::func_683(), 1) < 99)
		{
			if (!iLocal_349)
			{
				__LIB_0__::func_151("TRI_HELP_TIP_1", -1);
				iLocal_349 = 1;
			}
			else if (!iLocal_350)
			{
				if (!__LIB_0__::func_1("TRI_HELP_TIP_1"))
				{
					__LIB_0__::func_151("TRI_HELP_TIP_2", -1);
					iLocal_350 = 1;
				}
			}
		}
		if (!iLocal_313 == 0)
		{
			if (iVar0 == iLocal_345)
			{
				if (!iLocal_351 && !func_324(16))
				{
					__LIB_0__::func_151("TRI_HELP_TV", -1);
					iLocal_351 = 1;
				}
			}
		}
		else if (iVar0 == iLocal_345)
		{
			fVar1 = 0f;
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_8, false))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_1735[0 /*206*/].f_8, true), iParam0->f_26[iLocal_345 /*14*/].f_3, true);
				if (fVar1 < 60f)
				{
					if (!iLocal_351 && !func_324(16))
					{
						__LIB_0__::func_151("TRI_HELP_TV", -1);
						iLocal_351 = 1;
					}
				}
			}
		}
	}
}

void func_575(int* iParam0)//Position - 0x70343
{
	int iVar0;
	if (func_324(32))
	{
		return;
	}
	iVar0 = func_411(iParam0, &(iParam0->f_1735[0 /*206*/]));
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1735[0 /*206*/].f_8) > 0.75f && iVar0 != 0)
	{
		func_594(iParam0);
		func_592(iParam0);
		func_586(iParam0);
		func_584(iParam0);
		func_582(iParam0);
		func_580(iParam0);
		func_578(iParam0);
		func_576();
	}
}

void func_576()//Position - 0x703B5
{
	char* sVar0;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (Local_327.f_0 <= 5)
		{
			if (__LIB_15__::func_251(&iLocal_396, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_377.f_173, Local_377.f_174)))
			{
				switch (__LIB_0__::func_683())
				{
					case 0:
						sVar0 = "MICHAEL_NORMAL";
						break;
					case 1:
						sVar0 = "FRANKLIN_NORMAL";
						break;
					case 2:
						sVar0 = "TREVOR_NORMAL";
						break;
				}
				func_577(PLAYER::PLAYER_PED_ID(), "TRIATHLON_COMMENT", sVar0, 4);
				__LIB_1__::func_31(&iLocal_378);
				__LIB_1__::func_31(&iLocal_396);
			}
		}
	}
}

void func_577(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x70442
{
	__LIB_0__::func_709(iParam0, sParam1, sParam2, iParam3);
}

void func_578(int* iParam0)//Position - 0x70456
{
	char* sVar0;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (func_579(iParam0))
		{
			if (__LIB_15__::func_251(&iLocal_337, 10f))
			{
				if (__LIB_15__::func_251(&iLocal_393, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_377.f_173, Local_377.f_174)))
				{
					switch (__LIB_0__::func_683())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					if (__LIB_0__::func_683() == 0)
					{
						if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
						{
							func_577(PLAYER::PLAYER_PED_ID(), "GETTING_OLD", "MICHAEL_NORMAL", 4);
						}
					}
					else
					{
						func_577(PLAYER::PLAYER_PED_ID(), "RACE_STAY_POSITION_OUT_OF_BREATH", sVar0, 4);
					}
					__LIB_1__::func_31(&iLocal_393);
					__LIB_1__::func_31(&iLocal_378);
				}
			}
		}
	}
}

int func_579(var uParam0)//Position - 0x70525
{
	if (uParam0->f_1735[0 /*206*/].f_12 == uParam0->f_12)
	{
		if (!__LIB_1__::func_13(&iLocal_337))
		{
			__LIB_1__::func_362(&iLocal_337);
		}
		return 1;
	}
	if (__LIB_1__::func_13(&iLocal_337))
	{
		__LIB_1__::func_12(&iLocal_337);
	}
	return 0;
}

void func_580(int* iParam0)//Position - 0x70569
{
	char* sVar0;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (func_581(iParam0))
		{
			if (__LIB_15__::func_251(&iLocal_334, 10f))
			{
				if (__LIB_15__::func_251(&iLocal_390, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_377.f_173, Local_377.f_174)))
				{
					switch (__LIB_0__::func_683())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					func_577(PLAYER::PLAYER_PED_ID(), "RACE_STAY_POSITION_OUT_OF_BREATH", sVar0, 4);
					__LIB_1__::func_31(&iLocal_390);
					__LIB_1__::func_31(&iLocal_378);
				}
			}
		}
	}
}

int func_581(var uParam0)//Position - 0x70607
{
	if (uParam0->f_1735[0 /*206*/].f_12 == 2)
	{
		if (!__LIB_1__::func_13(&iLocal_334))
		{
			__LIB_1__::func_362(&iLocal_334);
		}
		return 1;
	}
	if (__LIB_1__::func_13(&iLocal_334))
	{
		__LIB_1__::func_12(&iLocal_334);
	}
	return 0;
}

void func_582(int* iParam0)//Position - 0x70648
{
	char* sVar0;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (func_583(iParam0))
		{
			if (__LIB_15__::func_251(&iLocal_331, 10f))
			{
				if (__LIB_15__::func_251(&iLocal_387, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_377.f_173, Local_377.f_174)))
				{
					switch (__LIB_0__::func_683())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					func_577(PLAYER::PLAYER_PED_ID(), "RACE_STAY_1ST_OUT_OF_BREATH", sVar0, 4);
					__LIB_1__::func_31(&iLocal_387);
					__LIB_1__::func_31(&iLocal_378);
				}
			}
		}
	}
}

int func_583(var uParam0)//Position - 0x706E6
{
	if (uParam0->f_1735[0 /*206*/].f_12 == 1)
	{
		if (!__LIB_1__::func_13(&iLocal_331))
		{
			__LIB_1__::func_362(&iLocal_331);
		}
		return 1;
	}
	if (__LIB_1__::func_13(&iLocal_331))
	{
		__LIB_1__::func_12(&iLocal_331);
	}
	return 0;
}

void func_584(int* iParam0)//Position - 0x70727
{
	char* sVar0;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (func_585(iParam0))
		{
			if (__LIB_15__::func_251(&iLocal_328, 10f))
			{
				if (__LIB_15__::func_251(&iLocal_384, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_377.f_173, Local_377.f_174)))
				{
					switch (__LIB_0__::func_683())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					func_577(PLAYER::PLAYER_PED_ID(), "RACE_STAY_POSITION_OUT_OF_BREATH", sVar0, 4);
					__LIB_1__::func_31(&iLocal_384);
					__LIB_1__::func_31(&iLocal_378);
				}
			}
		}
	}
}

int func_585(var uParam0)//Position - 0x707C5
{
	if (!((uParam0->f_1735[0 /*206*/].f_12 == 1 || uParam0->f_1735[0 /*206*/].f_12 == 2) || uParam0->f_1735[0 /*206*/].f_12 == uParam0->f_12))
	{
		if (iLocal_325 == uParam0->f_1735[0 /*206*/].f_12)
		{
			if (!__LIB_1__::func_13(&iLocal_328))
			{
				__LIB_1__::func_362(&iLocal_328);
			}
		}
		else
		{
			iLocal_325 = uParam0->f_1735[0 /*206*/].f_12;
			__LIB_1__::func_12(&iLocal_328);
		}
		return 1;
	}
	return 0;
}

void func_586(int* iParam0)//Position - 0x70845
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (__LIB_15__::func_251(&iLocal_381, MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)))
		{
			if (func_591(iParam0))
			{
				if (func_590(iParam0))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(Local_377.f_170, Local_377.f_171 + 1) < Local_377.f_172)
					{
						switch (__LIB_0__::func_683())
						{
							case 0:
								sVar1 = "MICHAEL_NORMAL";
								break;
							case 1:
								sVar1 = "FRANKLIN_NORMAL";
								break;
							case 2:
								sVar1 = "TREVOR_NORMAL";
								break;
						}
						sVar2 = __LIB_1__::func_295(PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID()) < 30f, "RACE_RANKDOWN_OUT_OF_BREATH", "RACE_RANKDOWN");
						func_577(PLAYER::PLAYER_PED_ID(), sVar2, sVar1, 4);
					}
					else
					{
						iVar0 = func_589(iParam0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							func_587(iVar0, "GENERIC_INSULT_MED", 4);
						}
					}
					__LIB_1__::func_31(&iLocal_381);
					__LIB_1__::func_31(&iLocal_378);
				}
			}
		}
	}
}

void func_587(int iParam0, char* sParam1, int iParam2)//Position - 0x70932
{
	__LIB_0__::func_640(iParam0, sParam1, iParam2);
}

var func_589(var uParam0)//Position - 0x7095B
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	iVar6 = 0;
	while (iVar6 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar6 /*206*/].f_8, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
			{
				if (!uParam0->f_1735[iVar6 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar6 /*206*/].f_9, false))
					{
						if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iVar6 /*206*/].f_8, uParam0->f_1735[iVar6 /*206*/].f_9, false))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar6 /*206*/].f_9, true) };
						}
						else
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar6 /*206*/].f_8, true) };
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
					{
						if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iVar6 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_9, false))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_9, true) };
						}
						else
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, true) };
						}
					}
					if (iVar6 == 1)
					{
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
						iVar2 = iVar6;
					}
					else
					{
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
						if (fVar3 < fVar4)
						{
							fVar4 = fVar3;
							iVar2 = iVar6;
						}
					}
				}
			}
		}
		iVar6++;
	}
	uVar5 = uParam0->f_1735[iVar2 /*206*/].f_8;
	return uVar5;
}

int func_590(var uParam0)//Position - 0x70AB9
{
	float fVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar1 /*206*/].f_8, false))
		{
			if (!uParam0->f_1735[iVar1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
			{
				fVar0 = __LIB_0__::func_76(uParam0->f_1735[iVar1 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_8, 1);
				if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_1735[iVar1 /*206*/].f_8))
				{
					if (fVar0 <= 11f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_591(var uParam0)//Position - 0x70B43
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
	{
		if (iLocal_323 != -1)
		{
			iLocal_324 = uParam0->f_1735[0 /*206*/].f_12;
			if (iLocal_324 > iLocal_323)
			{
				iLocal_323 = iLocal_324;
				return 1;
			}
			else if (iLocal_324 == iLocal_323)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			iLocal_323 = uParam0->f_1735[0 /*206*/].f_12;
			return 0;
		}
	}
	iLocal_323 = iLocal_324;
	return 0;
}

void func_592(int* iParam0)//Position - 0x70BB7
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (__LIB_15__::func_251(&iLocal_381, MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)))
		{
			if (func_593(iParam0))
			{
				if (func_590(iParam0))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(Local_377.f_170, Local_377.f_171 + 1) < Local_377.f_172)
					{
						switch (__LIB_0__::func_683())
						{
							case 0:
								sVar1 = "MICHAEL_NORMAL";
								break;
							case 1:
								sVar1 = "FRANKLIN_NORMAL";
								break;
							case 2:
								sVar1 = "TREVOR_NORMAL";
								break;
						}
						sVar2 = __LIB_1__::func_295(PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID()) < 30f, "RACE_RANKUP_OUT_OF_BREATH", "RACE_RANKUP");
						func_577(PLAYER::PLAYER_PED_ID(), sVar2, sVar1, 4);
					}
					else
					{
						iVar0 = func_589(iParam0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							func_587(iVar0, "GENERIC_CURSE_MED", 4);
						}
					}
					__LIB_1__::func_31(&iLocal_381);
					__LIB_1__::func_31(&iLocal_378);
				}
			}
		}
	}
}

int func_593(var uParam0)//Position - 0x70CA4
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
	{
		if (iLocal_323 != -1)
		{
			iLocal_324 = uParam0->f_1735[0 /*206*/].f_12;
			if (iLocal_324 < iLocal_323)
			{
				iLocal_323 = iLocal_324;
				return 1;
			}
			else if (iLocal_324 == iLocal_323)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			iLocal_323 = uParam0->f_1735[0 /*206*/].f_12;
			return 0;
		}
	}
	iLocal_323 = iLocal_324;
	return 0;
}

void func_594(int* iParam0)//Position - 0x70D18
{
	int iVar0;
	char* sVar1;
	if (__LIB_15__::func_251(&iLocal_378, Local_377.f_169))
	{
		if (__LIB_15__::func_251(&iLocal_381, MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)))
		{
			if (func_595(iParam0))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(Local_377.f_170, Local_377.f_171 + 1) < Local_377.f_172)
				{
					switch (__LIB_0__::func_683())
					{
						case 0:
							sVar1 = "MICHAEL_NORMAL";
							break;
						case 1:
							sVar1 = "FRANKLIN_NORMAL";
							break;
						case 2:
							sVar1 = "TREVOR_NORMAL";
							break;
					}
					func_577(PLAYER::PLAYER_PED_ID(), "RACE_COLLIDE_OUT_OF_BREATH", sVar1, 4);
				}
				else
				{
					iVar0 = func_589(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						func_587(iVar0, "GENERIC_CURSE_MED", 4);
					}
				}
				__LIB_1__::func_31(&iLocal_381);
				__LIB_1__::func_31(&iLocal_378);
			}
		}
	}
}

int func_595(var uParam0)//Position - 0x70DE1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (uParam0->f_1735[iVar0 /*206*/].f_8 != uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[iVar0 /*206*/].f_8))
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

void func_596(var uParam0)//Position - 0x70E5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 > 0)
		{
			if (!__LIB_0__::func_703(uParam0->f_1735[iVar0 /*206*/].f_197, 1))
			{
				iVar1 = uParam0->f_1735[iVar0 /*206*/].f_11;
				if (iVar1 >= func_386() + 1)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					PED::SET_PED_HELMET_PROP_INDEX(uParam0->f_1735[iVar0 /*206*/].f_8, 0, true);
					PED::SET_PED_HELMET_TEXTURE_INDEX(uParam0->f_1735[iVar0 /*206*/].f_8, iVar2);
					PED::SET_PED_HELMET(uParam0->f_1735[iVar0 /*206*/].f_8, true);
					__LIB_39__::func_780(&(uParam0->f_1735[iVar0 /*206*/].f_197), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_597(var uParam0)//Position - 0x70EF5
{
	int iVar0;
	int iVar1;
	if (iLocal_433 != uParam0->f_1735[0 /*206*/].f_11)
	{
		iVar0 = uParam0->f_1735[0 /*206*/].f_11;
		switch (iLocal_313)
		{
			case 1:
				switch (iVar0)
				{
					case 0:
						iLocal_428[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2004.35f, 3820.26f, 31.29f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[0], 0f, 0f, 26.93f, 2, true);
						iLocal_428[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2008.53f, 3822.45f, 31.27f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[1], 0f, 0f, 30.94f, 2, true);
						iLocal_428[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2014.15f, 3811.08f, 31.28f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[2], 0f, 0f, 29.79f, 2, true);
						iLocal_428[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2009.98f, 3808.24f, 31.29f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[3], 0f, 0f, 32.09f, 2, true);
						iLocal_428[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1926.76f, 3779.54f, 31.3f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[4], 0f, 0f, 0f, 2, true);
						iLocal_428[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1922.26f, 3777f, 31.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[5], 0f, 0f, 32.66f, 2, true);
						iLocal_428[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1920.64f, 3762.73f, 31.34f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[6], 0f, 0f, -59.59f, 2, true);
						iLocal_428[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1917.69f, 3767.16f, 31.31f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[7], 0f, 0f, -52.71f, 2, true);
						iLocal_428[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1959.77f, 3728.88f, 31.36f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[8], 0f, 0f, -60.16f, 2, true);
						iLocal_428[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1961.34f, 3722.45f, 31.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[9], 0f, 0f, -108.29f, 2, true);
						iLocal_428[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1958.5f, 3717.41f, 31.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[10], 0f, 0f, 29.22f, 2, true);
						iLocal_428[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1954.45f, 3715.06f, 31.35f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[11], 0f, 0f, 28.07f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					case 4:
						iLocal_428[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1807.02f, 3632.48f, 33.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[12], 0f, 0f, -63.6f, 2, true);
						iLocal_428[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1804.81f, 3636.01f, 33.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[13], 0f, 0f, -61.88f, 2, true);
						iLocal_428[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1794.72f, 3686.27f, 33.22f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[14], 0f, 0f, -61.88f, 2, true);
						iLocal_428[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1791.9f, 3690.92f, 33.25f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[15], 0f, 0f, -54.43f, 2, true);
						iLocal_428[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1784.15f, 3694.5f, 33.24f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[16], 0f, 0f, 26.93f, 2, true);
						iLocal_428[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1780.4f, 3692.03f, 33.26f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[17], 0f, 0f, 34.38f, 2, true);
						iLocal_428[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1710.76f, 3640.67f, 34.06f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[18], 0f, 0f, -55.58f, 2, true);
						iLocal_428[19] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1708.49f, 3644.04f, 34.07f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[19], 0f, 0f, -47.56f, 2, true);
						iLocal_428[20] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1683.38f, 3713.1f, 33.01f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[20], 0f, 0f, -61.31f, 2, true);
						iLocal_428[21] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1677.64f, 3720.92f, 33.01f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[21], 0f, 0f, -28.07f, 2, true);
						iLocal_428[22] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1612.28f, 3668.28f, 33.5f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[22], 0f, 0f, -4.58f, 2, true);
						iLocal_428[23] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1606.54f, 3665.35f, 33.5f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[23], 0f, 0f, 27.5f, 2, true);
						iLocal_428[24] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1598f, 3667.36f, 33.5f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[24], 0f, 0f, -65.32f, 2, true);
						iLocal_428[25] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1595.84f, 3671.44f, 33.52f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[25], 0f, 0f, -62.45f, 2, true);
						iLocal_428[26] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1578.86f, 3720.93f, 33.55f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[26], 0f, 0f, -55f, 2, true);
						iLocal_428[27] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1581.19f, 3717.19f, 33.55f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[27], 0f, 0f, -56.72f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					case 9:
						iVar1 = 0;
						while (iVar1 < 12)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_428[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_428[iVar1]));
							}
							iVar1++;
						}
						iLocal_428[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1538.91f, 3749.03f, 33.52f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[0], 0f, 0f, -50.42f, 2, true);
						iLocal_428[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1535.98f, 3752.04f, 33.53f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[1], 0f, 0f, -42.97f, 2, true);
						iLocal_428[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1666.49f, 3852.7f, 33.91f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[2], 0f, 0f, 44.12f, 2, true);
						iLocal_428[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1670.53f, 3856.54f, 33.91f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[3], 0f, 0f, 45.26f, 2, true);
						iLocal_428[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1745.85f, 3912.58f, 33.93f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[4], 0f, 0f, 25.78f, 2, true);
						iLocal_428[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1749.87f, 3914.58f, 33.93f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[5], 0f, 0f, 28.07f, 2, true);
						iLocal_428[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1854.29f, 3938.16f, 32.06f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[6], 0f, 0f, 0f, 2, true);
						iLocal_428[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1859.38f, 3937.73f, 32.06f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[7], 0f, 0f, 0f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					case 15:
						iVar1 = 12;
						while (iVar1 <= 100)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_428[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_428[iVar1]));
							}
							iVar1++;
						}
						iLocal_428[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1973.36f, 3891.21f, 31.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[8], 0f, 0f, -60.16f, 2, true);
						iLocal_428[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1976.07f, 3886.16f, 31.34f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[9], 0f, 0f, -67.61f, 2, true);
						iLocal_428[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1973.92f, 3877.91f, 31.35f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[10], 0f, 0f, 26.93f, 2, true);
						iLocal_428[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1969.69f, 3875.41f, 31.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[11], 0f, 0f, 25.78f, 2, true);
						iLocal_428[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1896.09f, 3831.12f, 31.4f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[12], 0f, 0f, 37.24f, 2, true);
						iLocal_428[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1892.08f, 3828.75f, 31.43f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[13], 0f, 0f, 32.09f, 2, true);
						iLocal_428[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1884.6f, 3830.7f, 31.41f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[14], 0f, 0f, -59.01f, 2, true);
						iLocal_428[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1882.81f, 3834.9f, 31.41f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[15], 0f, 0f, -60.16f, 2, true);
						iLocal_428[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1880.13f, 3838.67f, 31.41f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[16], 0f, 0f, -60.16f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					case 19:
						iVar1 = 0;
						while (iVar1 < 8)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_428[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_428[iVar1]));
							}
							iVar1++;
						}
						iLocal_428[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1773.32f, 3855.45f, 33.4f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[0], 0f, 0f, -61.88f, 2, true);
						iLocal_428[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1770.9f, 3859.71f, 33.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[1], 0f, 0f, -59.01f, 2, true);
						iLocal_428[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1785.65f, 3854.89f, 33.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[2], 0f, 0f, 22.92f, 2, true);
						iLocal_428[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1781.05f, 3852.64f, 33.43f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[3], 0f, 0f, 21.2f, 2, true);
						iLocal_428[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1776.57f, 3852.54f, 33.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[4], 0f, 0f, -18.91f, 2, true);
						iLocal_428[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1868.55f, 3905.49f, 32.08f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[5], 0f, 0f, 0f, 2, true);
						iLocal_428[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1864.04f, 3904.22f, 32.08f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_428[6], 0f, 0f, 17.19f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
				}
				break;
			case 0:
				switch (iVar0)
				{
					case 0:
						iLocal_429[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1251.88f, -1708.03f, 3.47f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[0], 0f, 0f, 35.52f, 2, true);
						iLocal_429[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1254.57f, -1698.15f, 3.24f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[1], 0f, 0f, -53.86f, 2, true);
						iLocal_429[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1291.87f, -1645.98f, 3.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[2], 0f, 0f, -56.15f, 2, true);
						iLocal_429[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1293.65f, -1643.15f, 3.38f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[3], 0f, 0f, -56.15f, 2, true);
						iLocal_429[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1303.26f, -1627.35f, 3.35f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[4], 0f, 0f, -56.15f, 2, true);
						iLocal_429[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1305.43f, -1624.25f, 3.36f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[5], 0f, 0f, -56.15f, 2, true);
						iLocal_429[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1312.92f, -1612.41f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[6], 0f, 0f, -63.6f, 2, true);
						iLocal_429[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1315.34f, -1608.29f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[7], 0f, 0f, -57.3f, 2, true);
						iLocal_429[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1317.18f, -1604.61f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[8], 0f, 0f, -61.88f, 2, true);
						iLocal_429[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1319.44f, -1600.76f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[9], 0f, 0f, -57.3f, 2, true);
						iLocal_429[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1321.94f, -1596.94f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[10], 0f, 0f, -61.31f, 2, true);
						iLocal_429[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1324.12f, -1593.29f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[11], 0f, 0f, -61.31f, 2, true);
						iLocal_429[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1326.12f, -1589.81f, 3.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[12], 0f, 0f, -63.6f, 2, true);
						iLocal_429[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1328.02f, -1586.82f, 3.36f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[13], 0f, 0f, -58.44f, 2, true);
						iLocal_429[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1339.3f, -1554.03f, 3.44f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[14], 0f, 0f, 85.94f, 2, true);
						iLocal_429[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1339.71f, -1550.58f, 3.44f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[15], 0f, 0f, -85.37f, 2, true);
						iLocal_429[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1380.21f, -1438.74f, 2.86f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[16], 0f, 0f, -71.62f, 2, true);
						iLocal_429[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1381.51f, -1434f, 2.77f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[17], 0f, 0f, -75.06f, 2, true);
						iLocal_429[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1382.52f, -1429.76f, 2.69f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[18], 0f, 0f, -73.34f, 2, true);
						iLocal_429[19] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1384.17f, -1425.3f, 2.63f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[19], 0f, 0f, -64.17f, 2, true);
						iLocal_430[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1357.89f, -1335.12f, 3.12f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[0], 0f, 0f, 84.22f, 2, true);
						iLocal_430[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1357f, -1331.86f, 3.2f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[1], 0f, 0f, 81.93f, 2, true);
						iLocal_430[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1354.14f, -1328.52f, 3.48f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[2], 0f, 0f, 16.04f, 2, true);
						iLocal_430[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1350.95f, -1328.05f, 3.48f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[3], 0f, 0f, 6.3f, 2, true);
						iLocal_430[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1330.99f, -1337.14f, 3.71f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[4], 0f, 0f, 29.22f, 2, true);
						iLocal_430[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1327.36f, -1334.4f, 3.68f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[5], 0f, 0f, 38.96f, 2, true);
						iLocal_430[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1322.91f, -1330.92f, 3.71f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[6], 0f, 0f, 50.42f, 2, true);
						iLocal_430[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1320.47f, -1326.51f, 3.73f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[7], 0f, 0f, 68.18f, 2, true);
						iLocal_430[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1358.19f, -1256.65f, 3.9f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[8], 0f, 0f, -74.48f, 2, true);
						iLocal_430[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1360.16f, -1251.53f, 3.9f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[9], 0f, 0f, -69.33f, 2, true);
						iLocal_430[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1361.65f, -1246.33f, 3.89f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[10], 0f, 0f, -76.2f, 2, true);
						iLocal_430[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1370.84f, -1178.08f, 3.45f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[11], 0f, 0f, -85.94f, 2, true);
						iLocal_430[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1370.87f, -1173.21f, 3.55f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[12], 0f, 0f, 82.51f, 2, true);
						iLocal_430[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1367.38f, -1110.23f, 3.43f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[13], 0f, 0f, 14.9f, 2, true);
						iLocal_430[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1362.66f, -1109.99f, 3.33f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[14], 0f, 0f, 5.73f, 2, true);
						iLocal_430[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1358.07f, -1109.26f, 3.25f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[15], 0f, 0f, 7.45f, 2, true);
						iLocal_431[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1316.74f, -1083.18f, 5.8f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[0], 0f, 0f, 22.35f, 2, true);
						iLocal_431[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1312.69f, -1081.74f, 5.95f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[1], 0f, 0f, 0f, 2, true);
						iLocal_431[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1307.1f, -1081.34f, 5.9f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[2], 0f, 0f, -14.9f, 2, true);
						iLocal_431[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1302.01f, -1082.5f, 5.88f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[3], 0f, 0f, -37.82f, 2, true);
						iLocal_431[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1299.4f, -1086.14f, 5.97f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[4], 0f, 0f, -70.47f, 2, true);
						iLocal_431[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1298.2f, -1090f, 6.06f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[5], 0f, 0f, -72.19f, 2, true);
						iLocal_431[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1293.63f, -1133.6f, 4.99f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[6], 0f, 0f, -94.54f, 2, true);
						iLocal_431[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1293.29f, -1138.75f, 4.81f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[7], 0f, 0f, 77.35f, 2, true);
						iLocal_431[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1307.44f, -1191.57f, 3.77f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[8], 0f, 0f, -67.61f, 2, true);
						iLocal_431[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1305.01f, -1196.22f, 3.92f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[9], 0f, 0f, -50.42f, 2, true);
						iLocal_431[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1300.14f, -1200.32f, 3.83f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[10], 0f, 0f, -16.62f, 2, true);
						iLocal_431[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1295.12f, -1200.71f, 3.89f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[11], 0f, 0f, 13.18f, 2, true);
						iLocal_431[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1290.7f, -1199.32f, 3.91f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[12], 0f, 0f, 26.93f, 2, true);
						iLocal_431[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1287.01f, -1197.73f, 3.77f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[13], 0f, 0f, 23.49f, 2, true);
						iLocal_431[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1280.56f, -1174.64f, 4.19f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[14], 0f, 0f, 25.78f, 2, true);
						iLocal_431[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1277.29f, -1172.75f, 4.44f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[15], 0f, 0f, 25.78f, 2, true);
						iLocal_432[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1257.79f, -1188.19f, 5.2f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[0], 0f, 0f, 17.19f, 2, true);
						iLocal_432[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1254.92f, -1186.69f, 5.51f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[1], 0f, 0f, 20.05f, 2, true);
						iLocal_432[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1221.57f, -1169.95f, 6.55f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[2], 0f, 0f, 9.17f, 2, true);
						iLocal_432[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1217.41f, -1168.71f, 6.72f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[3], 0f, 0f, 24.64f, 2, true);
						iLocal_432[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1213.66f, -1166.08f, 6.74f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[4], 0f, 0f, 45.84f, 2, true);
						iLocal_432[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1210.98f, -1161.85f, 6.7f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[5], 0f, 0f, 85.37f, 2, true);
						iLocal_432[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1216.02f, -1115.82f, 6.81f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[6], 0f, 0f, -72.77f, 2, true);
						iLocal_432[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1217.1f, -1112.19f, 6.85f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[7], 0f, 0f, -72.77f, 2, true);
						iLocal_432[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1259.74f, -1071.68f, 7.34f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[8], 0f, 0f, -63.6f, 2, true);
						iLocal_432[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1261.22f, -1068.47f, 7.46f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[9], 0f, 0f, -68.18f, 2, true);
						iLocal_432[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1262.85f, -1065.11f, 7.34f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[10], 0f, 0f, -71.62f, 2, true);
						iLocal_432[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1244.95f, -1038.79f, 7.51f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[11], 0f, 0f, -73.91f, 2, true);
						iLocal_432[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1246.41f, -1034.65f, 7.62f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[12], 0f, 0f, -73.91f, 2, true);
						iLocal_432[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1301.45f, -917.82f, 10.19f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[13], 0f, 0f, 101.99f, 2, true);
						iLocal_432[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1302.3f, -912.27f, 10.22f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[14], 0f, 0f, 81.93f, 2, true);
						iLocal_432[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1300.89f, -907.33f, 10.35f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[15], 0f, 0f, 56.15f, 2, true);
						iLocal_432[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1296.5f, -903.95f, 10.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[16], 0f, 0f, 19.48f, 2, true);
						iLocal_432[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1292.15f, -902.31f, 10.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[17], 0f, 0f, 18.91f, 2, true);
						iLocal_432[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1287.36f, -900.65f, 10.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[18], 0f, 0f, 14.9f, 2, true);
						iLocal_432[19] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1282.91f, -899.03f, 10.32f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_432[19], 0f, 0f, 19.48f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					case 15:
						iVar1 = 0;
						while (iVar1 < 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_429[iVar1]));
							}
							iVar1++;
						}
						iLocal_429[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1185.65f, -872.02f, 12.85f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[0], 0f, 0f, 31.51f, 2, true);
						iLocal_429[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1182.13f, -869.96f, 12.97f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[1], 0f, 0f, 25.21f, 2, true);
						iLocal_429[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1187.03f, -837.13f, 13.19f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[2], 0f, 0f, 33.23f, 2, true);
						iLocal_429[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1183.18f, -835.56f, 13.3f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[3], 0f, 0f, 0f, 2, true);
						iLocal_429[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1179.36f, -836.58f, 13.25f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[4], 0f, 0f, -19.48f, 2, true);
						iLocal_429[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1175.65f, -838.19f, 13.3f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[5], 0f, 0f, -21.2f, 2, true);
						iLocal_429[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1172.39f, -839.67f, 13.28f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[6], 0f, 0f, -26.36f, 2, true);
						iLocal_429[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1168.99f, -841.31f, 13.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[6], 0f, 0f, -32.09f, 2, true);
						iLocal_429[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1165.8f, -843.07f, 13.22f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[7], 0f, 0f, -28.65f, 2, true);
						iLocal_429[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1162.99f, -844.95f, 13.21f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[8], 0f, 0f, -53.86f, 2, true);
						iLocal_429[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1113.33f, -918.55f, 1.53f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[9], 0f, 0f, -60.16f, 2, true);
						iLocal_429[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1112.77f, -923.04f, 1.64f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[10], 0f, 0f, -91.1f, 2, true);
						iLocal_429[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1114.17f, -928.01f, 1.63f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[11], 0f, 0f, 60.73f, 2, true);
						iLocal_429[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1117.41f, -932.6f, 1.59f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[12], 0f, 0f, 45.84f, 2, true);
						iLocal_429[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1121.38f, -936.31f, 1.51f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[13], 0f, 0f, 21.2f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					case 19:
						iVar1 = 0;
						while (iVar1 < 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_430[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_430[iVar1]));
							}
							iVar1++;
						}
						iLocal_430[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1360.99f, -984.68f, 7.21f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[0], 0f, 0f, 24.64f, 2, true);
						iLocal_430[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1363.99f, -987.39f, 7.34f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[1], 0f, 0f, 59.01f, 2, true);
						iLocal_430[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1365.15f, -991.5f, 7.31f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[2], 0f, 0f, -88.81f, 2, true);
						iLocal_430[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1364.81f, -996.02f, 7.28f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[3], 0f, 0f, -76.78f, 2, true);
						iLocal_430[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1363.77f, -1000.48f, 7.23f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[4], 0f, 0f, -73.34f, 2, true);
						iLocal_430[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1362.08f, -1004.64f, 7.22f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[5], 0f, 0f, -57.87f, 2, true);
						iLocal_430[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1360.13f, -1008.18f, 7.21f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[6], 0f, 0f, -55f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
				}
				break;
			case 2:
				switch (iVar0)
				{
					case 0:
						iLocal_429[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -213.07f, 4183.79f, 42.6f, true, true, false);
						ENTITY::SET_ENTITY_HEADING(iLocal_429[0], 162.72f);
						iLocal_429[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 104.62f, 3423.08f, 38.4f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[1], 0f, 0f, 22.92f, 2, true);
						iLocal_429[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 213.53f, 3395.94f, 37.39f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[2], 0f, 0f, -81.93f, 2, true);
						iLocal_429[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 213.91f, 3392.51f, 37.43f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[3], 0f, 0f, -81.93f, 2, true);
						iLocal_429[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 214.55f, 3388.98f, 37.43f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[4], 0f, 0f, 95.68f, 2, true);
						iLocal_429[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 206.06f, 3259.66f, 40.64f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[5], 0f, 0f, -83.65f, 2, true);
						iLocal_429[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 205.55f, 3255.18f, 40.75f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[6], 0f, 0f, -85.94f, 2, true);
						iLocal_429[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 231.66f, 3137.83f, 41.25f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[7], 0f, 0f, -88.24f, 2, true);
						iLocal_429[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 231.26f, 3132.59f, 41.28f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[8], 0f, 0f, 85.94f, 2, true);
						iLocal_429[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 202.56f, 3111.83f, 41.15f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[9], 0f, 0f, -75.06f, 2, true);
						iLocal_429[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 202.98f, 3108.23f, 41.17f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[10], 0f, 0f, -88.24f, 2, true);
						iLocal_429[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 224.14f, 2968.36f, 41.73f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[11], 0f, 0f, 56.72f, 2, true);
						iLocal_429[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 226.86f, 2972.91f, 41.71f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[12], 0f, 0f, 62.45f, 2, true);
						iLocal_429[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 229.18f, 2977.87f, 41.68f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[13], 0f, 0f, 69.33f, 2, true);
						iLocal_429[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 231.56f, 2983.72f, 41.6f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[14], 0f, 0f, -106.57f, 2, true);
						iLocal_429[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -80.66f, 2831.72f, 51.89f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[15], 0f, 0f, 71.62f, 2, true);
						iLocal_429[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -80.53f, 2825.88f, 52.06f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[16], 0f, 0f, -87.09f, 2, true);
						iLocal_429[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -78.46f, 2819.61f, 52.32f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_429[17], 0f, 0f, -76.2f, 2, true);
						iLocal_430[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -44.36f, 2789.68f, 55.32f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[0], 0f, 0f, 0f, 2, true);
						iLocal_430[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -38.9f, 2787.6f, 55.51f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[1], 0f, 0f, -30.37f, 2, true);
						iLocal_430[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -34.55f, 2784.3f, 55.75f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[2], 0f, 0f, -38.39f, 2, true);
						iLocal_430[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 280.01f, 2640.67f, 43.64f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[3], 0f, 0f, 15.47f, 2, true);
						iLocal_430[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 286.1f, 2643.15f, 43.65f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[4], 0f, 0f, 0f, 2, true);
						iLocal_430[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 293.96f, 2640.35f, 43.66f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[5], 0f, 0f, -71.05f, 2, true);
						iLocal_430[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 295.83f, 2635.74f, 43.65f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[6], 0f, 0f, -76.78f, 2, true);
						iLocal_430[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 714.05f, 2280.47f, 49.49f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[7], 0f, 0f, 120.32f, 2, true);
						iLocal_430[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 716.39f, 2274.91f, 49.38f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[8], 0f, 0f, -68.75f, 2, true);
						iLocal_430[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 724.59f, 2205.82f, 56.32f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[9], 0f, 0f, 68.18f, 2, true);
						iLocal_430[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 719.51f, 2199.87f, 57.14f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[10], 0f, 0f, 64.74f, 2, true);
						iLocal_430[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 715.4f, 2194.01f, 57.66f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[11], 0f, 0f, 58.44f, 2, true);
						iLocal_430[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 709.77f, 2188.46f, 58.3f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[12], 0f, 0f, 52.14f, 2, true);
						iLocal_430[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -82.68f, 2002.3f, 180.02f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[13], 0f, 0f, 21.2f, 2, true);
						iLocal_430[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 643.92f, 2175.31f, 63.6f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[14], 0f, 0f, -42.97f, 2, true);
						iLocal_430[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -182.31f, 1911.07f, 196.3f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[15], 0f, 0f, 94.72f, 2, true);
						iLocal_430[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -183.33f, 1901.75f, 195.87f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[16], 0f, 0f, 80.21f, 2, true);
						iLocal_430[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -172.88f, 1884.43f, 197.2f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[17], 0f, 0f, -61.88f, 2, true);
						iLocal_430[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -170.16f, 1880.49f, 197.21f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430[18], 0f, 0f, -61.31f, 2, true);
						iLocal_431[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -4.54f, 1832.29f, 205.84f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[0], 0f, 0f, -55.58f, 2, true);
						iLocal_431[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -2.66f, 1828.43f, 206.37f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[1], 0f, 0f, -40.68f, 2, true);
						iLocal_431[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -0.68f, 1824.21f, 206.99f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[2], 0f, 0f, -49.85f, 2, true);
						iLocal_431[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 146.99f, 1654.85f, 227.99f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[3], 0f, 0f, -57.87f, 2, true);
						iLocal_431[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 149f, 1650.24f, 228.06f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[4], 0f, 0f, -63.6f, 2, true);
						iLocal_431[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 229.63f, 1346.25f, 237.73f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[5], 0f, 0f, 84.22f, 2, true);
						iLocal_431[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 228.83f, 1343f, 237.63f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[6], 0f, 0f, 83.08f, 2, true);
						iLocal_431[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 228.56f, 1338.54f, 237.45f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[7], 0f, 0f, 89.38f, 2, true);
						iLocal_431[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 331.83f, 1007.23f, 209.5f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[8], 0f, 0f, -90.53f, 2, true);
						iLocal_431[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 332.03f, 1003.95f, 209.57f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[9], 0f, 0f, -93.97f, 2, true);
						iLocal_431[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 332.22f, 1000.55f, 209.52f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[10], 0f, 0f, 78.5f, 2, true);
						iLocal_431[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 302.02f, 1006.53f, 209.52f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[11], 0f, 0f, -88.24f, 2, true);
						iLocal_431[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 302.27f, 1003.18f, 209.56f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[12], 0f, 0f, -89.957f, 2, true);
						iLocal_431[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 301.9f, 999.64f, 209.52f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_431[13], 0f, 0f, -93.97f, 2, true);
						iLocal_433 = uParam0->f_1735[0 /*206*/].f_11;
						break;
				}
				break;
			}
	}
}

void func_598()//Position - 0x739A0
{
	func_617(&Local_1281);
	func_616(&Local_1281, Local_416.f_6);
	switch (iLocal_1372)
	{
		case 0:
			if (func_411(&Local_1281, &(Local_1281.f_1735[0 /*206*/])) == 1)
			{
				iLocal_1372 = 1;
			}
			break;
		case 1:
			func_614(&Local_1281);
			__LIB_0__::func_229("SPR_OBJ_BIKE2", 7500, 0);
			func_408(Local_1281.f_1735[0 /*206*/].f_11);
			iLocal_1372 = 2;
			break;
		case 2:
			if (func_410(&Local_1281, 0, 1))
			{
				iLocal_1372 = 3;
				AUDIO::START_AUDIO_SCENE("TRI_BIKE_SCENE");
				AUDIO::STOP_AUDIO_SCENE("TRI_SWIM_SCENE");
			}
			break;
		case 3:
			if (HUD::DOES_BLIP_EXIST(iLocal_318))
			{
				HUD::REMOVE_BLIP(&iLocal_318);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_319))
			{
				HUD::REMOVE_BLIP(&iLocal_319);
			}
			if (Local_1281.f_1735[0 /*206*/].f_11 == func_386() + 1)
			{
				Local_1281.f_1735[0 /*206*/].f_11 = func_386() + 2;
			}
			func_384(Local_1281.f_1735[0 /*206*/].f_11);
			func_612(&Local_1281, PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())));
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())), true);
			func_611(&Local_1281);
			func_608(&Local_1281);
			AUDIO::TRIGGER_MUSIC_EVENT("MGTR_ON_BIKE");
			iLocal_1372 = 4;
			break;
		case 4:
			if (func_411(&Local_1281, &(Local_1281.f_1735[0 /*206*/])) == 2)
			{
				iLocal_1372 = 8;
				AUDIO::TRIGGER_MUSIC_EVENT("MGTR_ON_FOOT");
				AUDIO::START_AUDIO_SCENE("TRI_RUN_SCENE");
				AUDIO::STOP_AUDIO_SCENE("TRI_BIKE_SCENE");
			}
			if (!func_410(&Local_1281, 0, 1))
			{
				iLocal_1372 = 5;
			}
			break;
		case 5:
			func_408(Local_1281.f_1735[0 /*206*/].f_11);
			func_604(&Local_1281);
			func_602("SPR_OBJ_BIKE1", 7500, 0, &uLocal_530, 2);
			iLocal_1372 = 6;
			break;
		case 6:
			if (func_410(&Local_1281, 0, 0))
			{
				iLocal_1372 = 7;
			}
			break;
		case 7:
			if (__LIB_0__::func_501("SPR_OBJ_BIKE1", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_OBJ_BIKE1");
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_50))
			{
				HUD::REMOVE_BLIP(&iLocal_50);
			}
			func_384(Local_1281.f_1735[0 /*206*/].f_11);
			iLocal_1372 = 4;
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[0 /*206*/].f_9, false))
			{
				__LIB_0__::func_213(Local_1281.f_1735[0 /*206*/].f_9, 2.5f, 1, 1056964608, 0, 1, 0);
				iLocal_1372 = 9;
			}
			break;
		case 9:
			if (func_500(&Local_1281, 0, 1))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_1281.f_1735[0 /*206*/].f_9) < 4f)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_1281.f_1735[0 /*206*/].f_8, 0, 0);
					func_602("TRI_OBJ_RUN", 7500, 0, &uLocal_530, 2);
					iLocal_1372 = 10;
				}
			}
			break;
		case 10:
			if (HUD::DOES_BLIP_EXIST(iLocal_50))
			{
				HUD::REMOVE_BLIP(&iLocal_50);
			}
			break;
	}
}

void func_602(char* sParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x73E40
{
	if (__LIB_36__::func_722(*uParam3, iParam4))
	{
		return;
	}
	__LIB_0__::func_229(sParam0, iParam1, iParam2);
	__LIB_0__::func_989(uParam3, iParam4);
}

void func_604(var uParam0)//Position - 0x73E78
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9, false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_50))
		{
			iLocal_50 = __LIB_0__::func_639(uParam0->f_1735[0 /*206*/].f_9, 0, 0);
		}
	}
}

void func_608(int* iParam0)//Position - 0x73F83
{
	int iVar0;
	int iVar1[7];
	int iVar2;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = iVar0 + 1;
		iVar0++;
	}
	func_610(&iVar1);
	iVar2 = 0;
	while (iVar2 < iParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar2 /*206*/].f_8, false))
		{
			if (iVar2 != 0)
			{
				iParam0->f_1735[iVar2 /*206*/].f_196 = iVar1[(iVar2 - 1)];
				func_609(iParam0, iVar2);
			}
			else
			{
				iParam0->f_1735[0 /*206*/].f_196 = -1;
			}
		}
		iVar2++;
	}
}

void func_609(var uParam0, int iParam1)//Position - 0x7400C
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9, false))
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uParam0->f_1735[iParam1 /*206*/].f_9, 100f);
	}
}

void func_610(int iParam0)//Position - 0x7403C
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, *iParam0);
		uVar2 = (*iParam0)[iVar0];
		(*iParam0)[iVar0] = (*iParam0)[iVar1];
		(*iParam0)[iVar1] = uVar2;
		iVar0++;
	}
}

void func_611(int* iParam0)//Position - 0x7407F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (!iParam0->f_1735[iVar0 /*206*/].f_9 == iParam0->f_1735[0 /*206*/].f_9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1735[iVar0 /*206*/].f_9))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0->f_1735[iVar0 /*206*/].f_9, false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1735[iVar0 /*206*/].f_9))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0->f_1735[iVar0 /*206*/].f_9, true);
		}
		iVar0++;
	}
}

void func_612(int* iParam0, int iParam1)//Position - 0x740FD
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (iVar0 != 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar0 /*206*/].f_9, false))
			{
				if (iParam1 == iParam0->f_1735[iVar0 /*206*/].f_9)
				{
					uVar1 = iParam0->f_1735[iVar0 /*206*/].f_9;
					iParam0->f_1735[iVar0 /*206*/].f_9 = iParam0->f_1735[0 /*206*/].f_9;
					iParam0->f_1735[0 /*206*/].f_9 = uVar1;
					if (func_411(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 1)
					{
						TASK::CLEAR_PED_TASKS(iParam0->f_1735[iVar0 /*206*/].f_8);
						func_543(iParam0, iVar0);
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_614(var uParam0)//Position - 0x741BB
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_319))
	{
		iLocal_319 = HUD::ADD_BLIP_FOR_COORD(func_615(uParam0));
		HUD::SET_BLIP_COLOUR(iLocal_319, 3);
		HUD::SET_BLIP_ALPHA(iLocal_319, 220);
		HUD::SET_BLIP_AS_MINIMAL_ON_EDGE(iLocal_319, true);
		HUD::SET_BLIP_PRIORITY(iLocal_319, 9);
		HUD::SET_BLIP_DISPLAY(iLocal_319, 4);
	}
}

Vector3 func_615(var uParam0)//Position - 0x74205
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (uParam0->f_26[iVar0 /*14*/].f_11 == 6)
		{
			return uParam0->f_26[iVar0 /*14*/].f_3;
		}
		iVar0++;
	}
	return uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_3;
}

void func_616(var uParam0, float fParam1)//Position - 0x74253
{
	if (!iLocal_322)
	{
		if (func_500(uParam0, 0, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_1735[0 /*206*/].f_9, Local_321, 25f, 25f, 10f, false, true, 0))
			{
				if (PED::IS_PED_ON_ANY_BIKE(uParam0->f_1735[0 /*206*/].f_8))
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[0 /*206*/].f_8, fParam1);
				}
				iLocal_322 = 1;
			}
		}
	}
}

void func_617(var uParam0)//Position - 0x742BA
{
	int iVar0;
	int iVar1;
	if (iLocal_320 < uParam0->f_12)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_12)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_9, false))
			{
				if (!func_618(uParam0->f_1735[iVar0 /*206*/].f_9) && !func_553(&(uParam0->f_1735[iVar0 /*206*/]), 8))
				{
					func_552(&(uParam0->f_1735[iVar0 /*206*/]), 8);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1735[iVar0 /*206*/].f_8, 36, true);
					iLocal_320++;
					if (iVar0 != 0)
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iVar0 /*206*/].f_9, false);
					}
				}
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (iVar1 != 0)
		{
			if (func_410(uParam0, iVar1, 1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iVar1 /*206*/].f_9, false);
			}
		}
		iVar1++;
	}
}

int func_618(int iParam0)//Position - 0x74393
{
	int iVar0;
	int iVar1;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_619()//Position - 0x743CC
{
	func_620();
}

void func_620()//Position - 0x743D8
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = 100f;
	fVar1 = PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID());
	fVar2 = (1f - (fVar1 / fVar0));
	fVar2 = __LIB_0__::func_331(fVar2, 0f, 1f);
	Local_327.f_0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Local_327.f_1) * fVar2));
}

void func_622(var uParam0)//Position - 0x7443E
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
	{
		iVar0 = uParam0->f_1735[0 /*206*/].f_11;
		switch (iLocal_326)
		{
			case 0:
				if (iVar0 == func_386() + 1)
				{
					iLocal_326 = 1;
				}
				break;
			case 1:
				func_623(1);
				iLocal_326 = 2;
				break;
			case 2:
				if (iVar0 == func_385() + 1)
				{
					iLocal_326 = 3;
				}
				break;
			case 3:
				func_623(1);
				iLocal_326 = 6;
				break;
			case 4:
				if (iVar0 == (uParam0->f_11 - 1))
				{
					iLocal_326 = 5;
				}
				break;
			case 5:
				func_623(1);
				iLocal_326 = 6;
				break;
			}
	}
}

void func_623(bool bParam0)//Position - 0x744EB
{
	if (bParam0)
	{
		if (Local_327.f_0 < (Local_327.f_1 / 2))
		{
			PLAYER::RESTORE_PLAYER_STAMINA(PLAYER::PLAYER_ID(), 0.33f);
		}
	}
	else
	{
		Local_327.f_0 = Local_327.f_1;
	}
}

void func_624(var uParam0, var uParam1)//Position - 0x74520
{
	int iVar0;
	iVar0 = uParam0->f_1735[0 /*206*/].f_11;
	if (iVar0 == func_386() && !__LIB_0__::func_703(*uParam1, 1))
	{
		__LIB_39__::func_780(uParam1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("MGTR_LAST_SWIM");
	}
	else if (iVar0 == func_385() && !__LIB_0__::func_703(*uParam1, 2))
	{
		__LIB_39__::func_780(uParam1, 2);
		AUDIO::TRIGGER_MUSIC_EVENT("MGTR_LAST_CYCLE");
	}
	else if (iVar0 == (uParam0->f_11 - 2) && !__LIB_0__::func_703(*uParam1, 8))
	{
		__LIB_39__::func_780(uParam1, 8);
		AUDIO::TRIGGER_MUSIC_EVENT("MGTR_LAST_FOOT");
		AUDIO::PREPARE_MUSIC_EVENT("MGTR_COMPLETE");
	}
}

void func_625()//Position - 0x745C3
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	if (PED::IS_PED_INJURED(iLocal_1371))
	{
		bVar0 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1370))
	{
		bVar0 = true;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1370, false))
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_1370))
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1370, false))
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_1370) <= 500f)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1370);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1371);
		if (bVar1)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_1370);
			PED::DELETE_PED(&iLocal_1371);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_359))
		{
			CAM::DESTROY_CAM(iLocal_359, false);
		}
		if (!func_324(134217728))
		{
			func_337(134217728);
			Local_1281.f_9 = MISC::GET_GAME_TIMER() + 2700;
			func_491(1);
		}
		func_628(iLocal_313, 0);
		func_626(&iLocal_1370);
	}
}

void func_626(int iParam0)//Position - 0x746A0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	char* sVar4;
	Var0 = { -20f, -15f, 20f };
	Var1 = { 0f, 0f, -2f };
	Var3 = { 0f, 0f, 0f };
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Var0) };
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_359))
	{
		iLocal_359 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var2, Var3, 30f, false, 2);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_359, *iParam0, Var1, false);
		CAM::POINT_CAM_AT_ENTITY(iLocal_359, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, true);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_TEXT");
	__LIB_0__::func_610(sLocal_369);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	sVar4 = __LIB_1__::func_295(iLocal_313 == 1, "TRI_BASIC_1", __LIB_1__::func_295(iLocal_313 == 0, "TRI_BASIC_2", "TRI_BASIC_3"));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__::func_610(sVar4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__::func_610(sLocal_371);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	__LIB_0__::func_610(sLocal_372);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	__LIB_0__::func_610(sLocal_373);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	__LIB_0__::func_610(sLocal_374);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	__LIB_0__::func_610(sLocal_375);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	__LIB_0__::func_610(sLocal_376);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
	__LIB_0__::func_610(sLocal_370);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(MISC::GET_RANDOM_INT_IN_RANGE(0, 7));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_628(int iParam0, bool bParam1)//Position - 0x748D2
{
	struct<3> Var0;
	struct<3> Var1;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (bParam1)
	{
		if (iParam0 == 1)
		{
			Var0 = { 2382.7773f, 4323.4897f, 56.0818f };
		}
		else if (iParam0 == 0)
		{
			Var0 = { -1250.5433f, -1844.4894f, 0.8696f };
		}
		else if (iParam0 == 2)
		{
			Var0 = { 1593.9043f, 3854.2043f, 30.3967f };
		}
	}
	else
	{
		Var0 = { Var1 };
		Var0.f_2 = (Var0.f_2 + 100f);
	}
	iLocal_1370 = VEHICLE::CREATE_VEHICLE(joaat("frogger"), Var0, 0f, true, true, false);
	iLocal_1371 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1370, 26, joaat("A_M_Y_RoadCyc_01"), -1, true, true);
	func_629(&iLocal_1371, &iLocal_1370);
}

void func_629(int iParam0, int iParam1)//Position - 0x74988
{
	if ((!PED::IS_PED_INJURED(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam1, false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_VEHICLE_HELI_PROTECT(*iParam0, *iParam1, PLAYER::PLAYER_PED_ID(), 30f, 32, 25f, 35, 0);
	}
}

void func_630(var uParam0)//Position - 0x749D4
{
	AUDIO::STOP_SOUND(uParam0->f_14);
	AUDIO::STOP_SOUND(uParam0->f_15);
}

void func_631(struct<3> Param0)//Position - 0x749EC
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1370, false))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_1370, Param0, true, false, false, true);
	}
	func_629(&iLocal_1371, &iLocal_1370);
}

void func_632(bool bParam0)//Position - 0x74A19
{
	func_641(Local_1281.f_26[0 /*14*/].f_3);
	func_640();
	func_639();
	func_638();
	func_1003();
	func_637();
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	func_634(&(Global_113386.f_2363.f_539), -1);
	if (!bParam0)
	{
		func_633();
	}
	if (bParam0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	func_409(32);
	func_409(131072);
	func_409(262144);
	func_409(524288);
	func_409(1048576);
	func_409(2097152);
	func_409(4194304);
	func_409(8388608);
	__LIB_0__::func_963(0, 1, 1, 0);
}

void func_633()//Position - 0x74ABB
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1281.f_4385))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_1281.f_4385, true, false);
		ENTITY::SET_ENTITY_COLLISION(Local_1281.f_4385, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1281.f_4386))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_1281.f_4386, true, false);
		ENTITY::SET_ENTITY_COLLISION(Local_1281.f_4386, true, false);
	}
}

void func_634(var uParam0, int iParam1)//Position - 0x74B0D
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_636(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_636(int iParam0, var uParam1, float fParam2)//Position - 0x74CE1
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
			return func_636(8, uParam1, fParam2);
			break;
		case 10:
			return func_636(8, uParam1, fParam2);
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

void func_637()//Position - 0x75650
{
	__LIB_1__::func_12(&iLocal_378);
	__LIB_1__::func_12(&iLocal_328);
	__LIB_1__::func_12(&iLocal_331);
	__LIB_1__::func_12(&iLocal_334);
	__LIB_1__::func_12(&iLocal_381);
	__LIB_1__::func_12(&iLocal_384);
	__LIB_1__::func_12(&iLocal_387);
	__LIB_1__::func_12(&iLocal_390);
	__LIB_1__::func_12(&iLocal_393);
}

void func_638()//Position - 0x75697
{
	if (HUD::DOES_BLIP_EXIST(iLocal_318))
	{
		HUD::REMOVE_BLIP(&iLocal_318);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_50))
	{
		HUD::REMOVE_BLIP(&iLocal_50);
	}
}

void func_639()//Position - 0x756BF
{
	int iVar0;
	iLocal_402 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1281.f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1281.f_1735[iVar0 /*206*/].f_8, false))
		{
			TASK::CLEAR_PED_TASKS(Local_1281.f_1735[iVar0 /*206*/].f_8);
		}
		iVar0++;
	}
}

void func_640()//Position - 0x75706
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_428)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_428[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_428[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_429[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_430[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_430[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_431[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_432[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_432[iVar0]));
		}
		iVar0++;
	}
}

void func_641(struct<3> Param0)//Position - 0x757B2
{
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	MISC::CLEAR_AREA(Param0, 100f, true, false, false, false);
	MISC::CLEAR_AREA_OF_PEDS(Param0, 100f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Param0, 100f, false, false, true, true, false, false, 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 100f, 0);
	FIRE::STOP_FIRE_IN_RANGE(Param0, 100f);
}

int func_642(int* iParam0)//Position - 0x7580D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	struct<3> Var6;
	switch (iParam0->f_25)
	{
		case 0:
			__LIB_2__::func_712(&uLocal_529, 4);
			__LIB_2__::func_712(&uLocal_529, 128);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_1001(iParam0);
			__LIB_1__::func_12(&(iParam0->f_18));
			iLocal_537 = 0;
			if (!__LIB_16__::func_618(&iLocal_532))
			{
				__LIB_1__::func_300(&iLocal_532);
			}
			iParam0->f_25 = 1;
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (__LIB_16__::func_618(&iLocal_532) && !func_994(&(iParam0->f_18)))
				{
					if (Local_51.f_0 == 2)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MGTR_MUSIC_START");
						AUDIO::START_AUDIO_SCENE("TRI_SWIM_SCENE");
						AUDIO::STOP_AUDIO_SCENE("TRI_START_SCENE");
					}
					iParam0->f_13 = MISC::GET_GAME_TIMER() + 2000;
					if (__LIB_0__::func_703(uLocal_529, 16))
					{
						__LIB_2__::func_712(&uLocal_529, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
					HUD::DISPLAY_HUD(true);
					func_992(iParam0);
					func_983(1, 1, 1);
					iParam0->f_25 = 7;
				}
			}
			break;
		case 2:
			func_980(iParam0);
			func_1024(0, 0, 1);
			HUD::DISPLAY_HUD(false);
			if (!__LIB_0__::func_703(uLocal_529, 1))
			{
				HUD::CLEAR_HELP(true);
				SYSTEM::SETTIMERA(0);
				iParam0->f_4371 = __LIB_8__::func_314();
				func_939(iParam0);
				__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_51.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				__LIB_1__::func_213(&(Local_51.f_290), 1);
				__LIB_37__::func_109(&(Local_51.f_290), 1);
				__LIB_39__::func_780(&uLocal_529, 1);
			}
			if (!func_934(Local_1122.f_8))
			{
				func_933();
				func_930();
				func_337(64);
				__LIB_1__::func_38(1);
				SYSTEM::SETTIMERA(0);
				func_927();
				func_926(0);
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
				__LIB_0__::func_704(1);
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					func_915(Local_51.f_58);
					iLocal_1124 = 1;
				}
				iParam0->f_25 = 3;
				func_911(iParam0, 0);
				__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_51.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				if (!PLAYER::IS_PLAYER_ONLINE())
				{
					__LIB_0__::func_990(&(Local_51.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
					iLocal_1279 = 1;
				}
				__LIB_1__::func_213(&(Local_51.f_290), 1);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_8, false))
			{
				if (__LIB_2__::func_85(iParam0->f_1735[0 /*206*/].f_8) == joaat("WEAPON_UNARMED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
			}
			iVar0 = func_801(iParam0, Local_51.f_58);
			if (iVar0 == 1)
			{
				__LIB_14__::func_540(&Local_1004);
				if (!Global_2097157.f_2)
				{
					if (!bLocal_0)
					{
						func_795(Local_51.f_58, iParam0->f_1735[0 /*206*/].f_13, __LIB_0__::func_340((4 - iParam0->f_1735[0 /*206*/].f_12), 0, 3));
					}
				}
				__LIB_1__::func_12(&uLocal_1136);
				__LIB_19__::func_61();
				func_346();
				__LIB_0__::func_704(0);
				HUD::CLEAR_HELP(true);
				if (__LIB_0__::func_703(uLocal_529, 1))
				{
					__LIB_2__::func_712(&uLocal_529, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (iLocal_313 == 0)
				{
					if (STREAMING::IS_IPL_ACTIVE("VB_08_TriAf01"))
					{
						STREAMING::REMOVE_IPL("VB_08_TriAf01");
					}
				}
				else if (iLocal_313 == 1)
				{
					if (STREAMING::IS_IPL_ACTIVE("CS4_08_TriAf02"))
					{
						STREAMING::REMOVE_IPL("CS4_08_TriAf02");
					}
				}
				else if (iLocal_313 == 2)
				{
					if (STREAMING::IS_IPL_ACTIVE("CH1_07_TriAf03"))
					{
						STREAMING::REMOVE_IPL("CH1_07_TriAf03");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_434[1]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_434[1]));
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_791(&iLocal_313);
				iParam0->f_25 = 4;
			}
			else if (iVar0 == 2)
			{
				if (!Global_2097157.f_2)
				{
					if (!bLocal_0)
					{
						func_795(Local_51.f_58, iParam0->f_1735[0 /*206*/].f_13, __LIB_0__::func_340((4 - iParam0->f_1735[0 /*206*/].f_12), 0, 3));
					}
				}
				__LIB_1__::func_12(&uLocal_1136);
				__LIB_19__::func_61();
				func_346();
				iLocal_1280 = 0;
				iLocal_1279 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				func_337(512);
				func_409(1024);
				iParam0->f_1735[0 /*206*/].f_24 = 5;
				__LIB_0__::func_345(&uLocal_506, 0, 0);
				func_790();
				iParam0->f_25 = 7;
				iParam0->f_1735[0 /*206*/].f_11 = 0;
			}
			break;
		case 4:
			if (func_764())
			{
				iParam0->f_25 = 5;
			}
			break;
		case 5:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (Local_51.f_0 == 2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_8, false))
				{
					if (__LIB_2__::func_85(iParam0->f_1735[0 /*206*/].f_8) == joaat("WEAPON_UNARMED"))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					}
				}
			}
			if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_1090))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				HUD::CLEAR_ADDITIONAL_TEXT(3, true);
				if (!Local_51.f_287)
				{
					func_317(PLAYER::PLAYER_PED_ID());
					func_106(PLAYER::PLAYER_PED_ID(), &(Local_51.f_222), 0, 0, 1, 0);
					Local_51.f_287 = 1;
				}
				if (iParam0->f_1735[0 /*206*/].f_12 <= 3)
				{
					switch (iLocal_313)
					{
						case 0:
							__LIB_0__::func_716(141, 0, 0);
							break;
						case 1:
							__LIB_0__::func_716(142, 0, 0);
							break;
						case 2:
							__LIB_0__::func_716(143, 0, 0);
							break;
					}
					__LIB_39__::func_780(&(Global_113386.f_20011.f_9), 1);
				}
				__LIB_0__::func_989(&Global_112037, 262144);
				__LIB_0__::func_734(1, 0);
				__LIB_0__::func_210();
				__LIB_1__::func_31(&iLocal_1127);
				iParam0->f_25 = 6;
			}
			break;
		case 6:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (__LIB_15__::func_251(&iLocal_1127, 1f))
			{
				if (Local_51.f_58 == 1)
				{
					Var1 = { 1742.2f, 3910.3f, 33.85f };
					fVar2 = 10.25f;
				}
				else if (Local_51.f_58 == 0)
				{
					Var1 = { -1339.9078f, -1015.899f, 6.929f };
					fVar2 = 28.6984f;
				}
				else if (Local_51.f_58 == 2)
				{
					Var1 = { -2280.555f, 411.8955f, 173.6018f };
					fVar2 = 353.5356f;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_8, false))
				{
					ENTITY::SET_ENTITY_COORDS(iParam0->f_1735[0 /*206*/].f_8, Var1, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iParam0->f_1735[0 /*206*/].f_8, fVar2);
				}
				if (func_324(64))
				{
					if (Local_51.f_58 == 1)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1", false);
					}
					else if (Local_51.f_58 == 0)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2", false);
					}
					else if (Local_51.f_58 == 2)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3", false);
					}
					MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 25f, 0);
				}
				func_758(&Local_1122, iParam0, Var1, fVar2);
				__LIB_1__::func_31(&(iParam0->f_21));
				func_750(iParam0);
				func_409(512);
				func_983(1, 1, 1);
				iParam0->f_25 = 8;
			}
			break;
		case 7:
			if (MISC::GET_GAME_TIMER() > iParam0->f_13)
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_532);
			}
			else
			{
				if (MISC::GET_GAME_TIMER() > (iParam0->f_13 - 1900))
				{
					if (!iLocal_1278)
					{
						func_747(14);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
						iLocal_1278 = 1;
						iLocal_311 = 1;
					}
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_532, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			}
			if (!__LIB_0__::func_703(uLocal_529, 16))
			{
				func_387(iParam0, 0, 1);
				func_387(iParam0, 1, 0);
				__LIB_39__::func_780(&uLocal_529, 16);
				func_926(1);
				HUD::SET_BLIP_COLOUR(iParam0->f_26[0 /*14*/].f_9, 5);
			}
			if (!func_685(iParam0))
			{
				func_675(iParam0);
				__LIB_1__::func_12(&(iParam0->f_18));
				iParam0->f_25 = 2;
				while (!func_674(&Local_1122))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_1__::func_31(&(iParam0->f_21));
				func_669(&Local_1122, iParam0, &iLocal_313, iParam0->f_1735[0 /*206*/].f_12 <= 3);
			}
			func_643(iParam0);
			break;
		case 8:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1122.f_9) && __LIB_1__::func_13(&(iParam0->f_21)))
			{
				fVar3 = __LIB_2__::func_572(&(iParam0->f_21));
				iVar4 = __LIB_0__::func_683();
				if (iVar4 == 0)
				{
					bVar5 = fVar3 > 3.6f;
				}
				else if (iVar4 == 1)
				{
					bVar5 = fVar3 > 4.05f;
				}
				else if (iVar4 == 2)
				{
					bVar5 = fVar3 > 3.51f;
				}
				if (bVar5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1122.f_9))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1122.f_9, -1000f, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_1122.f_9);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1122.f_9));
					}
					__LIB_1__::func_12(&(iParam0->f_21));
				}
				if (iLocal_313 == 0)
				{
					Var6 = { -1332.9225f, -1043.1416f, 6.65f };
				}
				else if (iLocal_313 == 1)
				{
					Var6 = { 1759.4352f, 3894.694f, 33.789f };
				}
				else
				{
					Var6 = { -2304.443f, 462.66916f, 173.4493f };
				}
				PATHFIND::DISABLE_NAVMESH_IN_AREA((Var6.f_0 - 3f), (Var6.f_1 - 3f), (Var6.f_2 - 3f), (Var6.f_0 + 3f), (Var6.f_1 + 3f), (Var6.f_2 + 3f), false);
				return 1;
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				return 0;
			}
			else if (!__LIB_1__::func_13(&iLocal_1133))
			{
				__LIB_15__::func_248(&iLocal_1133);
			}
			else if (__LIB_2__::func_572(&iLocal_1133) > 5f)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_643(int* iParam0)//Position - 0x76130
{
	int iVar0;
	if (Local_51.f_289)
	{
		return;
	}
	if (!__LIB_0__::func_703(Local_51.f_420.f_77, 2))
	{
		__LIB_0__::func_222(&(Local_51.f_420.f_78), 8, 0, "TRINEWS", 0, 1);
		__LIB_0__::func_989(&(Local_51.f_420.f_77), 2);
	}
	if (func_324(32))
	{
		if (!__LIB_0__::func_703(Local_51.f_420.f_77, 1))
		{
			switch (func_411(iParam0, &(iParam0->f_1735[0 /*206*/])))
			{
				case 0:
					iVar0 = func_665(iParam0);
					if (iVar0 != -1)
					{
						if (Local_51.f_420.f_1[iVar0 /*4*/] == Local_51.f_420)
						{
							Local_51.f_420 = -1;
							if (!func_664())
							{
								__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_SWIM", 8, 0, 0, 0);
							}
							else
							{
								__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
							}
						}
						else if (__LIB_0__::func_703(Local_51.f_420.f_1[iVar0 /*4*/].f_1, 1))
						{
							if (func_650(Local_51.f_420.f_1[iVar0 /*4*/], iParam0))
							{
								func_649(Local_51.f_420.f_1[iVar0 /*4*/]);
								Local_51.f_420 = Local_51.f_420.f_1[iVar0 /*4*/];
								Local_51.f_420.f_1[iVar0 /*4*/] = -1;
							}
							else
							{
								Local_51.f_420 = -1;
								if (!func_664())
								{
									__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_SWIM", 8, 0, 0, 0);
								}
								else
								{
									__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
								}
							}
						}
						else
						{
							func_649(Local_51.f_420.f_1[iVar0 /*4*/]);
							Local_51.f_420 = Local_51.f_420.f_1[iVar0 /*4*/];
							Local_51.f_420.f_1[iVar0 /*4*/] = -1;
						}
					}
					else
					{
						Local_51.f_420 = -1;
						if (!func_664())
						{
							__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_SWIM", 8, 0, 0, 0);
						}
						else
						{
							__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
						}
					}
					__LIB_0__::func_989(&(Local_51.f_420.f_77), 1);
					break;
				case 1:
					iVar0 = func_665(iParam0);
					if (iVar0 != -1)
					{
						if (Local_51.f_420.f_1[iVar0 /*4*/] == Local_51.f_420)
						{
							Local_51.f_420 = -1;
							if (!func_664())
							{
								__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_BIKE", 8, 0, 0, 0);
							}
							else
							{
								__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
							}
						}
						else if (__LIB_0__::func_703(Local_51.f_420.f_1[iVar0 /*4*/].f_1, 1))
						{
							if (func_650(Local_51.f_420.f_1[iVar0 /*4*/], iParam0))
							{
								func_649(Local_51.f_420.f_1[iVar0 /*4*/]);
								Local_51.f_420 = Local_51.f_420.f_1[iVar0 /*4*/];
								Local_51.f_420.f_1[iVar0 /*4*/] = -1;
							}
							else
							{
								Local_51.f_420 = -1;
								if (!func_664())
								{
									__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_BIKE", 8, 0, 0, 0);
								}
								else
								{
									__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
								}
							}
						}
						else
						{
							func_649(Local_51.f_420.f_1[iVar0 /*4*/]);
							Local_51.f_420 = Local_51.f_420.f_1[iVar0 /*4*/];
							Local_51.f_420.f_1[iVar0 /*4*/] = -1;
						}
					}
					else
					{
						Local_51.f_420 = -1;
						if (!func_664())
						{
							__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_BIKE", 8, 0, 0, 0);
						}
						else
						{
							__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
						}
					}
					__LIB_0__::func_989(&(Local_51.f_420.f_77), 1);
					break;
				case 2:
					iVar0 = func_665(iParam0);
					if (iVar0 != -1)
					{
						if (Local_51.f_420.f_1[iVar0 /*4*/] == Local_51.f_420)
						{
							Local_51.f_420 = -1;
							if (!func_664())
							{
								__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_RUN", 8, 0, 0, 0);
							}
							else
							{
								__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
							}
						}
						else if (__LIB_0__::func_703(Local_51.f_420.f_1[iVar0 /*4*/].f_1, 1))
						{
							if (func_650(Local_51.f_420.f_1[iVar0 /*4*/], iParam0))
							{
								func_649(Local_51.f_420.f_1[iVar0 /*4*/]);
								Local_51.f_420 = Local_51.f_420.f_1[iVar0 /*4*/];
								Local_51.f_420.f_1[iVar0 /*4*/] = -1;
							}
							else
							{
								Local_51.f_420 = -1;
								if (!func_664())
								{
									__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_RUN", 8, 0, 0, 0);
								}
								else
								{
									__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
								}
							}
						}
						else
						{
							func_649(Local_51.f_420.f_1[iVar0 /*4*/]);
							Local_51.f_420 = Local_51.f_420.f_1[iVar0 /*4*/];
							Local_51.f_420.f_1[iVar0 /*4*/] = -1;
						}
					}
					else
					{
						Local_51.f_420 = -1;
						if (!func_664())
						{
							__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_RUN", 8, 0, 0, 0);
						}
						else
						{
							__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
						}
					}
					__LIB_0__::func_989(&(Local_51.f_420.f_77), 1);
					break;
			}
		}
		else if (!__LIB_1__::func_13(&(Local_51.f_420.f_68)))
		{
			__LIB_1__::func_362(&(Local_51.f_420.f_68));
		}
		else if (__LIB_2__::func_572(&(Local_51.f_420.f_68)) >= 15f)
		{
			__LIB_0__::func_988(&(Local_51.f_420.f_77), 1);
			__LIB_1__::func_12(&(Local_51.f_420.f_68));
		}
	}
	else if (__LIB_0__::func_703(Local_51.f_420.f_77, 1))
	{
		if (!__LIB_1__::func_13(&(Local_51.f_420.f_68)))
		{
			__LIB_1__::func_362(&(Local_51.f_420.f_68));
		}
		else if (__LIB_2__::func_572(&(Local_51.f_420.f_68)) >= 10f)
		{
			__LIB_0__::func_988(&(Local_51.f_420.f_77), 1);
			__LIB_1__::func_12(&(Local_51.f_420.f_68));
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		}
	}
	func_647();
	func_646(iParam0);
	func_645();
	func_644(iParam0);
}

void func_644(var uParam0)//Position - 0x76728
{
	int iVar0;
	bool bVar1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9, false))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_9, false))
		{
			bVar1 = false;
			iVar0 = 0;
			while (iVar0 < uParam0->f_12)
			{
				if (iVar0 != 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_9, false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1735[iVar0 /*206*/].f_9, uParam0->f_1735[0 /*206*/].f_9))
						{
							func_747(3);
							iVar0 = uParam0->f_12;
							bVar1 = true;
						}
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_1735[0 /*206*/].f_9))
				{
					func_747(4);
				}
			}
		}
	}
}

void func_645()//Position - 0x767E8
{
	if (Local_327.f_0 <= 5)
	{
		if (!__LIB_0__::func_703(Local_51.f_420.f_77, 4))
		{
			__LIB_0__::func_989(&(Local_51.f_420.f_77), 4);
			func_747(5);
		}
	}
	else if (__LIB_0__::func_703(Local_51.f_420.f_77, 4))
	{
		__LIB_0__::func_988(&(Local_51.f_420.f_77), 4);
	}
}

void func_646(var uParam0)//Position - 0x76837
{
	if (!__LIB_1__::func_13(&(Local_51.f_420.f_65)))
	{
		__LIB_1__::func_362(&(Local_51.f_420.f_65));
	}
	if (__LIB_2__::func_572(&(Local_51.f_420.f_65)) >= 2f)
	{
		Local_51.f_420.f_63 = Local_51.f_420.f_62;
		Local_51.f_420.f_62 = uParam0->f_1735[0 /*206*/].f_12;
		if (__LIB_0__::func_703(Local_51.f_420.f_77, 8))
		{
			if (__LIB_2__::func_572(&(Local_51.f_420.f_74)) <= 60f)
			{
				if ((Local_51.f_420.f_64 - Local_51.f_420.f_62) >= 3)
				{
					func_747(7);
					__LIB_1__::func_12(&(Local_51.f_420.f_74));
					__LIB_0__::func_988(&(Local_51.f_420.f_77), 8);
				}
			}
			else
			{
				__LIB_1__::func_12(&(Local_51.f_420.f_74));
				__LIB_0__::func_988(&(Local_51.f_420.f_77), 8);
			}
		}
		else if (__LIB_0__::func_703(Local_51.f_420.f_77, 16))
		{
			if (__LIB_2__::func_572(&(Local_51.f_420.f_74)) <= 60f)
			{
				if ((Local_51.f_420.f_62 - Local_51.f_420.f_64) >= 3)
				{
					func_747(6);
					__LIB_1__::func_12(&(Local_51.f_420.f_74));
					__LIB_0__::func_988(&(Local_51.f_420.f_77), 16);
				}
			}
			else
			{
				__LIB_1__::func_12(&(Local_51.f_420.f_74));
				__LIB_0__::func_988(&(Local_51.f_420.f_77), 16);
			}
		}
		if (Local_51.f_420.f_62 < Local_51.f_420.f_63)
		{
			if (!__LIB_0__::func_703(Local_51.f_420.f_77, 8))
			{
				__LIB_1__::func_31(&(Local_51.f_420.f_74));
				__LIB_0__::func_989(&(Local_51.f_420.f_77), 8);
				__LIB_0__::func_988(&(Local_51.f_420.f_77), 16);
				Local_51.f_420.f_64 = Local_51.f_420.f_63;
			}
		}
		else if (Local_51.f_420.f_62 > Local_51.f_420.f_63)
		{
			if (!__LIB_0__::func_703(Local_51.f_420.f_77, 16))
			{
				__LIB_1__::func_31(&(Local_51.f_420.f_74));
				__LIB_0__::func_989(&(Local_51.f_420.f_77), 16);
				__LIB_0__::func_988(&(Local_51.f_420.f_77), 8);
				Local_51.f_420.f_64 = Local_51.f_420.f_63;
			}
		}
		if (uParam0->f_1735[0 /*206*/].f_12 == 2 && Local_51.f_420.f_63 != 2)
		{
			func_747(13);
			if (__LIB_1__::func_13(&(Local_51.f_420.f_71)))
			{
				__LIB_1__::func_12(&(Local_51.f_420.f_71));
			}
		}
		else if (uParam0->f_1735[0 /*206*/].f_12 == 1)
		{
			if (Local_51.f_420.f_63 != 1)
			{
				func_747(9);
				if (__LIB_1__::func_13(&(Local_51.f_420.f_71)))
				{
					__LIB_1__::func_12(&(Local_51.f_420.f_71));
				}
			}
			else if (!__LIB_1__::func_13(&(Local_51.f_420.f_71)))
			{
				__LIB_1__::func_362(&(Local_51.f_420.f_71));
			}
			else if (__LIB_2__::func_572(&(Local_51.f_420.f_71)) > 60f)
			{
				__LIB_1__::func_12(&(Local_51.f_420.f_71));
				func_747(10);
			}
		}
		else if (uParam0->f_1735[0 /*206*/].f_12 == uParam0->f_12)
		{
			if (Local_51.f_420.f_63 != uParam0->f_12)
			{
				func_747(11);
				if (__LIB_1__::func_13(&(Local_51.f_420.f_71)))
				{
					__LIB_1__::func_12(&(Local_51.f_420.f_71));
				}
			}
			else if (!__LIB_1__::func_13(&(Local_51.f_420.f_71)))
			{
				__LIB_1__::func_362(&(Local_51.f_420.f_71));
			}
			else if (__LIB_2__::func_572(&(Local_51.f_420.f_71)) > 60f)
			{
				__LIB_1__::func_12(&(Local_51.f_420.f_71));
				func_747(12);
			}
		}
		__LIB_1__::func_31(&(Local_51.f_420.f_65));
	}
}

void func_647()//Position - 0x76B6A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if ((MISC::GET_GAME_TIMER() - Local_51.f_420.f_1[iVar0 /*4*/].f_2) >= 20000)
		{
			Local_51.f_420.f_1[iVar0 /*4*/] = -1;
		}
		iVar0++;
	}
}

void func_649(int iParam0)//Position - 0x76BBE
{
	switch (iParam0)
	{
		case 9:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_FIRSTM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_FIRSTF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_FIRSTT", 8, 0, 0, 0);
					break;
			}
			break;
		case 10:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_FIRST2M", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_FIRST2F", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_FIRST2T", 8, 0, 0, 0);
					break;
			}
			break;
		case 13:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_SECM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_SECF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_SECT", 8, 0, 0, 0);
					break;
			}
			break;
		case 11:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_LASTM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_LASTF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_LASTT", 8, 0, 0, 0);
					break;
			}
			break;
		case 12:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_LAST2M", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_LAST2F", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_LAST2T", 8, 0, 0, 0);
					break;
			}
			break;
		case 14:
			__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_START", 8, 0, 0, 0);
			break;
		case 0:
			__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_NPCSW", 8, 0, 0, 0);
			break;
		case 1:
			__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_NPCBI", 8, 0, 0, 0);
			break;
		case 2:
			__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_NPCTR", 8, 0, 0, 0);
			break;
		case 5:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_STAMM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_STAMF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_STAMT", 8, 0, 0, 0);
					break;
			}
			break;
		case 7:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_GAINM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_GAINF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_GAINT", 8, 0, 0, 0);
					break;
			}
			break;
		case 6:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_BACKM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_BACKF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_BACKT", 8, 0, 0, 0);
					break;
			}
			break;
		case 8:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_MISSM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_MISSF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_MISST", 8, 0, 0, 0);
					break;
			}
			break;
		case 4:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_CRASH2M", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_CRASH2F", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_CRASH2T", 8, 0, 0, 0);
					break;
			}
			break;
		case 3:
			switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_CRASHM", 8, 0, 0, 0);
					break;
				case 1:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_CRASHF", 8, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_787(&(Local_51.f_420.f_78), "MGTRAUD", "MGTR_CRASHT", 8, 0, 0, 0);
					break;
			}
			break;
	}
}

int func_650(int iParam0, var uParam1)//Position - 0x771F3
{
	switch (iParam0)
	{
		case 9:
		case 10:
			if (uParam1->f_1735[0 /*206*/].f_12 == 1)
			{
				return 1;
			}
			break;
		case 13:
			if (uParam1->f_1735[0 /*206*/].f_12 == 2)
			{
				return 1;
			}
			break;
		case 6:
			if (uParam1->f_1735[0 /*206*/].f_11 > 1)
			{
				return 1;
			}
			break;
		case 11:
		case 12:
			if (uParam1->f_1735[0 /*206*/].f_12 == uParam1->f_12)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_664()//Position - 0x77983
{
	int iVar0;
	if (Local_51.f_58 == 2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
		if ((iVar0 % 100) > 30)
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

int func_665(var uParam0)//Position - 0x779B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 12;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_51.f_420.f_1[iVar0 /*4*/] != -1)
		{
			if (Local_51.f_420.f_1[iVar0 /*4*/].f_3 < iVar2 && Local_51.f_420 != Local_51.f_420.f_1[iVar0 /*4*/])
			{
				if (__LIB_0__::func_703(Local_51.f_420.f_1[iVar0 /*4*/].f_1, 1))
				{
					if (func_650(Local_51.f_420.f_1[iVar0 /*4*/], uParam0))
					{
						if (Local_51.f_420.f_1[iVar0 /*4*/].f_3 == 0)
						{
							return iVar0;
						}
						else
						{
							iVar2 = Local_51.f_420.f_1[iVar0 /*4*/].f_3;
							iVar1 = iVar0;
						}
					}
				}
				else if (Local_51.f_420.f_1[iVar0 /*4*/].f_3 == 0)
				{
					return iVar0;
				}
				else
				{
					iVar2 = Local_51.f_420.f_1[iVar0 /*4*/].f_3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_669(char* sParam0, int* iParam1, int iParam2, bool bParam3)//Position - 0x77B52
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	char* sVar3;
	char cVar4[32];
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	char* sVar11;
	if (*iParam2 == 0)
	{
		fVar0 = 201.6718f;
		Var1 = { -1332.9225f, -1043.1416f, 6.65f };
	}
	else if (*iParam2 == 1)
	{
		fVar0 = 25.4602f;
		Var1 = { 1759.4352f, 3894.694f, 33.789f };
	}
	else
	{
		fVar0 = 167.8617f;
		Var1 = { -2304.443f, 462.66916f, 173.4493f };
	}
	iVar2 = __LIB_0__::func_683();
	if (iVar2 == 0)
	{
		sVar3 = "michael";
		fVar0 = (fVar0 - 180f);
	}
	else if (iVar2 == 1)
	{
		sVar3 = "franklin";
		fVar0 = (fVar0 - 180f);
	}
	else if (iVar2 == 2)
	{
		sVar3 = "trevor";
		fVar0 = (fVar0 - 180f);
	}
	sParam0->f_8 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, 0f, 0f, fVar0, 2);
	StringCopy(&cVar4, __LIB_1__::func_295(bParam3, "win", "lose"), 32);
	StringConCat(&cVar4, "_race_", 32);
	StringConCat(&cVar4, sVar3, 32);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1->f_1735[0 /*206*/].f_8);
	PED::CLEAR_PED_PROP(iParam1->f_1735[0 /*206*/].f_8, 1);
	PED::CLEAR_PED_PROP(iParam1->f_1735[0 /*206*/].f_8, 0);
	MISC::CLEAR_AREA_OF_PEDS(Var1, 3f, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA((Var1.f_0 - 3f), (Var1.f_1 - 3f), (Var1.f_2 - 3f), (Var1.f_0 + 3f), (Var1.f_1 + 3f), (Var1.f_2 + 3f), true);
	TASK::TASK_SYNCHRONIZED_SCENE(iParam1->f_1735[0 /*206*/].f_8, sParam0->f_8, sParam0, &cVar4, 1000f, -1000f, 0, 0, 1000f, 0);
	StringConCat(&cVar4, "_cam", 32);
	if (CAM::DOES_CAM_EXIST(iLocal_1091))
	{
		CAM::DESTROY_CAM(iLocal_1091, false);
	}
	iLocal_1091 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(iLocal_1091, true);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1091, sParam0->f_8, &cVar4, sParam0);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_673(iParam1, iParam2);
	iVar5 = func_672(iParam1);
	iVar7 = 1;
	if (iVar5 >= 4)
	{
		iVar6 = 0;
		while (iVar6 < iParam1->f_1735)
		{
			if (iParam1->f_1735[iVar6 /*206*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_1735[iVar6 /*206*/].f_8, false))
				{
					if (func_557(iParam1, &(iParam1->f_1735[iVar6 /*206*/])))
					{
						ENTITY::SET_ENTITY_COORDS(iParam1->f_1735[iVar6 /*206*/].f_8, func_671(*iParam2, iVar7), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iParam1->f_1735[iVar6 /*206*/].f_8, func_670(*iParam2, iVar7));
						if (iParam1->f_1735[iVar6 /*206*/].f_12 == 1)
						{
							sVar8 = func_555(iLocal_425[0]);
							TASK::TASK_PLAY_ANIM(iParam1->f_1735[iVar6 /*206*/].f_8, iLocal_425[0], sVar8, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
						}
						else
						{
							sVar9 = func_555(iLocal_425[1]);
							TASK::TASK_PLAY_ANIM(iParam1->f_1735[iVar6 /*206*/].f_8, iLocal_425[1], sVar9, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
						}
						iVar7++;
					}
				}
				if (iVar7 > 2)
				{
					iVar6 = iParam1->f_12;
				}
			}
			iVar6++;
		}
	}
	else
	{
		iVar6 = 0;
		while (iVar6 < iParam1->f_1735)
		{
			if (iParam1->f_1735[iVar6 /*206*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_1735[iVar6 /*206*/].f_8, false))
				{
					if (func_557(iParam1, &(iParam1->f_1735[iVar6 /*206*/])))
					{
						ENTITY::SET_ENTITY_COORDS(iParam1->f_1735[iVar6 /*206*/].f_8, func_671(*iParam2, iVar7), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iParam1->f_1735[iVar6 /*206*/].f_8, func_670(*iParam2, iVar7));
						if (iParam1->f_1735[iVar6 /*206*/].f_12 == 1)
						{
							sVar10 = func_555(iLocal_425[0]);
							TASK::TASK_PLAY_ANIM(iParam1->f_1735[iVar6 /*206*/].f_8, iLocal_425[0], sVar10, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
						}
						else
						{
							sVar11 = func_555(iLocal_425[1]);
							TASK::TASK_PLAY_ANIM(iParam1->f_1735[iVar6 /*206*/].f_8, iLocal_425[1], sVar11, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
						}
						iVar6 = iParam1->f_12;
					}
				}
			}
			iVar6++;
		}
	}
}

float func_670(int iParam0, int iParam1)//Position - 0x77F56
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					fVar0 = 214.1666f;
					break;
				case 2:
					fVar0 = 136.9917f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					fVar0 = 20.6779f;
					break;
				case 2:
					fVar0 = 335.965f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					fVar0 = 192.4683f;
					break;
				case 2:
					fVar0 = 190.438f;
					break;
			}
			break;
	}
	return fVar0;
}

Vector3 func_671(int iParam0, int iParam1)//Position - 0x77FF7
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					Var0 = { -1333.543f, -1034.3549f, 6.6195f };
					break;
				case 2:
					Var0 = { -1328.618f, -1045.0208f, 6.5493f };
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					Var0 = { 1755.5608f, 3891.0405f, 33.7649f };
					break;
				case 2:
					Var0 = { 1759.7052f, 3889.213f, 33.7466f };
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					Var0 = { -2299.4753f, 465.903f, 173.4305f };
					break;
				case 2:
					Var0 = { -2300.4429f, 462.901f, 173.4523f };
					break;
			}
			break;
	}
	return Var0;
}

int func_672(var uParam0)//Position - 0x780EA
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (uParam0->f_1735[iVar0 /*206*/].f_8 != PLAYER::PLAYER_PED_ID())
		{
			if (func_557(uParam0, &(uParam0->f_1735[iVar0 /*206*/])))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_673(var uParam0, var uParam1)//Position - 0x78136
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	if (*uParam1 == 0)
	{
		Var0 = { -1329.3944f, -1051.3582f, 6.5187f };
	}
	else if (*uParam1 == 1)
	{
		Var0 = { 1757.5648f, 3897.907f, 33.8581f };
	}
	else
	{
		Var0 = { -2306.3442f, 454.1608f, 173.4667f };
	}
	Var1 = { Var0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar2 = SYSTEM::VMAG(Var1);
	iVar3 = 1;
	iVar3 = 1;
	while (iVar3 <= 7)
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar3 /*206*/].f_8, false) };
		fVar5 = SYSTEM::VDIST(Var4, Var0);
		if (fVar5 < fVar2)
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iVar3 /*206*/].f_8, Var0 + Var1, false, true, false, true);
		}
		iVar3++;
	}
}

int func_674(char* sParam0)//Position - 0x78202
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_energy_drink")))
	{
		return 0;
	}
	return 1;
}

void func_675(int* iParam0)//Position - 0x7822A
{
	int iVar0;
	if (!__LIB_2__::func_213(iParam0))
	{
		__LIB_14__::func_599(iParam0);
	}
	func_683(iParam0);
	func_679(iParam0);
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		func_677(&(iParam0->f_1735[iVar0 /*206*/]));
		if (iVar0 != 0)
		{
			__LIB_0__::func_467(&(iParam0->f_1735[iVar0 /*206*/]));
		}
		iVar0++;
	}
}

void func_677(var uParam0)//Position - 0x7828B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (Local_51.f_0 != 0)
		{
			__LIB_0__::func_467();
		}
	}
}

void func_679(int* iParam0)//Position - 0x782B2
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar0 /*206*/].f_8, false))
		{
			if (iParam0->f_1735[iVar0 /*206*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_682(Local_51.f_58);
				if (iVar1 <= 0 || iVar1 > iParam0->f_1735[iVar0 /*206*/].f_12)
				{
					func_681(Local_51.f_58, iParam0->f_1735[iVar0 /*206*/].f_12);
				}
				fVar2 = func_342(Local_51.f_58);
				if (fVar2 <= 0f || fVar2 > iParam0->f_1735[iVar0 /*206*/].f_13)
				{
					func_680(Local_51.f_58, iParam0->f_1735[iVar0 /*206*/].f_13);
					if (!bLocal_0)
					{
					}
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_680(int iParam0, var uParam1)//Position - 0x7836E
{
	Global_113386.f_20011.f_4[iParam0] = uParam1;
}

void func_681(int iParam0, var uParam1)//Position - 0x78385
{
	Global_113386.f_20011[iParam0] = uParam1;
}

int func_682(int iParam0)//Position - 0x7839A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = Global_113386.f_20011[iParam0];
	return iVar0;
}

void func_683(int* iParam0)//Position - 0x783B4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		if (iParam0->f_1735[iVar0 /*206*/].f_11 != iParam0->f_11)
		{
			iParam0->f_1735[iVar0 /*206*/].f_13 = (iParam0->f_1735[0 /*206*/].f_13 + (IntToFloat((iParam0->f_11 - iParam0->f_1735[iVar0 /*206*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

int func_685(int* iParam0)//Position - 0x78450
{
	float fVar0;
	int iVar1;
	struct<14> Var2;
	int iVar3;
	bool bVar4;
	struct<14> Var5;
	if (__LIB_1__::func_13(iParam0))
	{
		fVar0 = __LIB_2__::func_572(iParam0);
	}
	iVar1 = 0;
	while (iVar1 < iParam0->f_12)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_1735[iVar1 /*206*/].f_8) && iParam0->f_1735[iVar1 /*206*/].f_11 < iParam0->f_11)
		{
			bVar4 = false;
			if (iParam0->f_1735[iVar1 /*206*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar4 = true;
			}
			iVar3 = iParam0->f_1735[iVar1 /*206*/].f_11;
			if (iParam0->f_1735[iVar1 /*206*/].f_11 >= iParam0->f_11)
			{
				Var2 = { iParam0->f_26[(iParam0->f_11 - 1) /*14*/] };
			}
			else
			{
				Var2 = { iParam0->f_26[iVar3 /*14*/] };
			}
			if (iParam0->f_1735[iVar1 /*206*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				if (iParam0->f_1735[iVar1 /*206*/].f_11 > 0)
				{
					if (iParam0->f_26[(iParam0->f_1735[iVar1 /*206*/].f_11 - 1) /*14*/].f_13)
					{
						func_746(iParam0, (iParam0->f_1735[iVar1 /*206*/].f_11 - 1));
					}
				}
			}
			if (iVar3 != iParam0->f_11)
			{
				iParam0->f_1735[iVar1 /*206*/].f_13 = (fVar0 - iParam0->f_1735[iVar1 /*206*/].f_15);
				if (iParam0->f_1735[iVar1 /*206*/].f_13 < 0f)
				{
					iParam0->f_1735[iVar1 /*206*/].f_13 = 0f;
				}
			}
			if (!bVar4)
			{
				if (func_553(&(iParam0->f_1735[iVar1 /*206*/]), 4))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam0->f_1735[iVar1 /*206*/].f_8, 3f);
				}
			}
			if (bVar4)
			{
				if (iParam0->f_4395 == 2)
				{
					__LIB_16__::func_621(SYSTEM::ROUND((__LIB_2__::func_572(&iLocal_1130) * 1000f)), 1500, "RACES_RMETER" /* GXT: RESPAWNING */, 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
				}
			}
			if (!func_727(iParam0, &(iParam0->f_1735[iVar1 /*206*/]), bVar4))
			{
				if (bVar4)
				{
					if (PAD::IS_CONTROL_ENABLED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					}
					if ((PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) && !iParam0->f_4396)
					{
						iParam0->f_4395 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || iParam0->f_4396)
					{
						switch (iParam0->f_4395)
						{
							case 0:
								__LIB_1__::func_31(&iLocal_1130);
								iParam0->f_4395 = 1;
								break;
							case 1:
								if (__LIB_2__::func_572(&iLocal_1130) > 0.4f)
								{
									__LIB_1__::func_31(&iLocal_1130);
									iParam0->f_4395 = 2;
								}
								break;
							case 2:
								if (__LIB_2__::func_572(&iLocal_1130) > 1.5f)
								{
									iParam0->f_4395 = 3;
									iParam0->f_1735[0 /*206*/].f_24 = 5;
									__LIB_2__::func_712(&uLocal_530, 1);
									func_337(1024);
									iParam0->f_4396 = 1;
								}
								break;
							case 3:
								iParam0->f_4395 = 4;
								break;
							case 4:
								if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
								{
									PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
									iParam0->f_4395 = 0;
									iParam0->f_4396 = 0;
								}
								break;
							}
						}
				}
				func_725(iParam0, iVar1);
				if (Local_51.f_0 == 0 && __LIB_1__::func_13(&iLocal_526))
				{
					return 1;
				}
				if (bVar4)
				{
					if (iParam0->f_1735[iVar1 /*206*/].f_14 != 0f)
					{
						__LIB_1__::func_362(&(iParam0->f_18));
					}
					if (__LIB_0__::func_703(uLocal_529, 8))
					{
						func_387(iParam0, iVar3, 1);
						if (iVar3 < (iParam0->f_11 - 1))
						{
							func_387(iParam0, iVar3 + 1, 0);
						}
						__LIB_2__::func_712(&uLocal_529, 8);
					}
				}
				if (func_324(1024))
				{
					iParam0->f_10 = func_722(iParam0, &Var2, iParam0->f_1735[iVar1 /*206*/].f_8, iVar1);
					if (iVar3 < (iParam0->f_11 - 1))
					{
						Var5 = { iParam0->f_26[iVar3 + 1 /*14*/] };
					}
					else
					{
						Var5 = { Var2 };
					}
					func_721(&Var2, &Var5);
				}
				if (!bVar4)
				{
					func_720(iParam0, &(iParam0->f_1735[iVar1 /*206*/]));
				}
				if (iParam0->f_10 == 0)
				{
					iParam0->f_1735[iVar1 /*206*/].f_11++;
					iVar3 = iParam0->f_1735[iVar1 /*206*/].f_11;
					if (iVar3 >= (iParam0->f_11 - 1))
					{
						Var2 = { iParam0->f_26[(iParam0->f_11 - 1) /*14*/] };
					}
					else
					{
						Var2 = { iParam0->f_26[iVar3 /*14*/] };
					}
					if (bVar4)
					{
						if (iVar3 - 1) < (iParam0->f_11 - 1)
						{
							func_719(iParam0, (iVar3 - 1), 0);
							GRAPHICS::SET_CHECKPOINT_RGBA(iParam0->f_26[(iVar3 - 1) /*14*/].f_10, 255, 255, 255, iParam0->f_26[(iVar3 - 1) /*14*/].f_8);
							GRAPHICS::SET_CHECKPOINT_RGBA2(iParam0->f_26[(iVar3 - 1) /*14*/].f_10, 255, 255, 255, iParam0->f_26[(iVar3 - 1) /*14*/].f_8);
							iParam0->f_26[(iVar3 - 1) /*14*/].f_13 = 1;
						}
						else
						{
							func_719(iParam0, (iVar3 - 1), 1);
						}
						if (iVar3 == iParam0->f_11)
						{
							if (!__LIB_2__::func_213(iParam0))
							{
								__LIB_14__::func_599(iParam0);
							}
							AUDIO::TRIGGER_MUSIC_EVENT("MGTR_COMPLETE");
							AUDIO::START_AUDIO_SCENE("TRI_END_SCENE");
							AUDIO::STOP_AUDIO_SCENE("TRI_RUN_SCENE");
							return 0;
						}
						else
						{
							func_387(iParam0, iVar3, 1);
							if (iVar3 < (iParam0->f_11 - 1))
							{
								func_387(iParam0, iVar3 + 1, 0);
							}
						}
						if (iParam0->f_1735[iVar1 /*206*/].f_14 == 0f)
						{
							if (__LIB_1__::func_13(&(iParam0->f_18)))
							{
								__LIB_1__::func_12(&(iParam0->f_18));
							}
						}
						if (iParam0->f_11 > 0)
						{
							if (iParam0->f_4 > 0f)
							{
								if (iVar3 == SYSTEM::ROUND((IntToFloat(iParam0->f_11) / 2f)))
								{
									iParam0->f_1735[iVar1 /*206*/].f_14 = 0f;
									__LIB_1__::func_31(&(iParam0->f_18));
								}
							}
						}
					}
					else if (iParam0->f_1735[iVar1 /*206*/].f_11 >= iParam0->f_11)
					{
						if (Local_51.f_0 != 2)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar1 /*206*/].f_8, false))
							{
								__LIB_0__::func_467(&(iParam0->f_1735[iVar1 /*206*/]));
							}
						}
					}
					else if (iVar1 != 0)
					{
						func_718(iParam0, iParam0->f_1735[iVar1 /*206*/].f_8, iParam0->f_1735[iVar1 /*206*/].f_9, iParam0->f_26[iParam0->f_1735[iVar1 /*206*/].f_11 /*14*/].f_3, iParam0->f_26[iParam0->f_1735[iVar1 /*206*/].f_11 /*14*/].f_11, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	if (func_324(1024))
	{
		func_712(iParam0);
		func_711(iParam0, &iLocal_50);
		func_710(iParam0, &iLocal_50);
		func_703(iParam0);
		func_702(iParam0);
		func_700(iParam0);
		__LIB_0__::func_467();
		func_698(iParam0);
		func_686(iParam0);
	}
	return 1;
}

void func_686(int* iParam0)//Position - 0x78A96
{
	char* sVar0;
	int iVar1;
	if (Global_113386.f_20011.f_4[Local_51.f_58] > 0f)
	{
		sVar0 = "";
		iVar1 = SYSTEM::CEIL((Global_113386.f_20011.f_4[Local_51.f_58] * 1000f));
	}
	else
	{
		sVar0 = "-1";
		iVar1 = -1;
	}
	if (!func_324(32))
	{
		func_688(SYSTEM::FLOOR((iParam0->f_1735[0 /*206*/].f_13 * 1000f)), "TRI_HUD_TIME", -1, -1, "", iParam0->f_1735[0 /*206*/].f_12, iParam0->f_12, "", SYSTEM::CEIL((iParam0->f_1735[0 /*206*/].f_15 * 1000f)), 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar1, sVar0, 0, 1, -1, "", -1f, 1, 1, 1);
		func_687();
	}
	else
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	}
}

void func_687()//Position - 0x78B61
{
	Local_327.f_2 = 9;
	__LIB_16__::func_621(Local_327.f_0, Local_327.f_1, "TRI_ENERGY", Local_327.f_2, -1, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_688(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26, bool bParam27)//Position - 0x78BB0
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	if (fParam24 > -1f)
	{
		__LIB_17__::func_413(0, "", iParam22, iParam25, 9, 0, sParam23, 1, fParam24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (__LIB_1__::func_76(sVar0))
		{
			sVar0 = "TIM_DAMAGE" /* GXT: DAMAGE */;
		}
		__LIB_16__::func_621(iParam14, iParam15, sVar0, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (__LIB_1__::func_76(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN" /* GXT: CHECKPOINT */;
		}
		func_693(iParam10, iParam11, sVar1, iParam22, iParam13, 7, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (__LIB_1__::func_76(sVar2))
		{
			sVar2 = "TIM_POSIT" /* GXT: POSITION */;
		}
		__LIB_17__::func_408(iParam5, uParam6, sVar2, iParam9, iParam22, 6, 0, 0, 0, 1, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (__LIB_1__::func_76(sVar3))
		{
			sVar3 = "TIM_LAP" /* GXT: LAP */;
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (__LIB_1__::func_76(sVar4))
		{
			if (!bParam27)
			{
				sVar4 = "TIMER_BESLAP" /* GXT: BEST LAP */;
			}
			else
			{
				sVar4 = "TIMER_BESTIME" /* GXT: BEST TIME */;
			}
		}
		__LIB_1__::func_350(iParam18, sVar4, 0, 1, iParam22, iParam20, 4, 0, iParam26, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	sVar5 = sParam1;
	if (__LIB_1__::func_76(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE" /* GXT: TIME */;
	}
	if (bParam21)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	__LIB_1__::func_350(iParam0, sVar5, iParam8, iVar6, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_693(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x78FDB
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = uParam3;
		Global_1649593.f_3347.f_216[iVar0] = iParam5;
		Global_1649593.f_3347.f_194[iVar0] = uParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

void func_698(int* iParam0)//Position - 0x79443
{
	if (iParam0->f_12 == -1)
	{
	}
}

void func_700(int* iParam0)//Position - 0x7945B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!func_701())
			{
				iParam0->f_17 = "SPR_EXIT_FAIL2";
				iParam0->f_1735[0 /*206*/].f_24 = 0;
			}
		}
	}
}

int func_701()//Position - 0x79498
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if ((VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike")) || VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike3")))
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

void func_702(int* iParam0)//Position - 0x794F2
{
	if (Local_51.f_0 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_9, false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[0 /*206*/].f_9))
			{
				if (!__LIB_1__::func_13(&iLocal_523))
				{
					__LIB_15__::func_248(&iLocal_523);
				}
				else if (PED::IS_PED_IN_VEHICLE(iParam0->f_1735[0 /*206*/].f_8, iParam0->f_1735[0 /*206*/].f_9, false))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iParam0->f_1735[0 /*206*/].f_9, joaat("sanchez")))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_1735[0 /*206*/].f_9))
						{
							__LIB_1__::func_31(&iLocal_523);
						}
						else if (__LIB_2__::func_572(&iLocal_523) >= 2.75f)
						{
							__LIB_1__::func_31(&iLocal_523);
							__LIB_1__::func_31(&iLocal_520);
							func_409(1024);
							iParam0->f_1735[0 /*206*/].f_24 = 5;
						}
					}
					else if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_1735[0 /*206*/].f_9))
					{
						__LIB_1__::func_31(&iLocal_523);
					}
					else if (__LIB_2__::func_572(&iLocal_523) >= 1.5f)
					{
						__LIB_1__::func_31(&iLocal_523);
						__LIB_1__::func_31(&iLocal_520);
						func_409(1024);
						iParam0->f_1735[0 /*206*/].f_24 = 5;
					}
				}
				else if (__LIB_2__::func_572(&iLocal_523) >= 1.5f)
				{
					__LIB_1__::func_31(&iLocal_523);
					__LIB_1__::func_31(&iLocal_520);
					func_409(1024);
					iParam0->f_1735[0 /*206*/].f_24 = 5;
				}
			}
			else if (__LIB_1__::func_13(&iLocal_523))
			{
				__LIB_1__::func_31(&iLocal_523);
			}
		}
	}
	if (Local_51.f_0 == 2)
	{
		if (iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1735[0 /*206*/].f_9))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_1735[0 /*206*/].f_9))
				{
					if (!__LIB_1__::func_13(&iLocal_523))
					{
						__LIB_15__::func_248(&iLocal_523);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_1735[0 /*206*/].f_9, false))
					{
						__LIB_1__::func_31(&iLocal_523);
					}
					else if (__LIB_2__::func_572(&iLocal_523) >= 1.5f)
					{
						func_409(1024);
						iParam0->f_1735[0 /*206*/].f_24 = 5;
					}
				}
				else if (__LIB_1__::func_13(&iLocal_523))
				{
					__LIB_1__::func_31(&iLocal_523);
				}
			}
		}
	}
}

void func_703(int* iParam0)//Position - 0x79710
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_51.f_0 != 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iParam0->f_1735[0 /*206*/].f_11 <= (iParam0->f_11 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9, 0);
				}
			}
			if (iParam0->f_1735[0 /*206*/].f_11 + 1 <= (iParam0->f_11 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9, 0);
				}
			}
			__LIB_1__::func_31(&iLocal_520);
			iParam0->f_17 = "SPR_HELP_WANT";
			func_409(1024);
			iParam0->f_1735[0 /*206*/].f_24 = 0;
		}
		else if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(6);
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		if (Local_51.f_0 == 1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
					{
						if (__LIB_14__::func_351())
						{
							iVar0 = 0;
							while (iVar0 < __LIB_13__::func_680())
							{
								if (ENTITY::DOES_ENTITY_EXIST(__LIB_13__::func_679(iVar0)))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_13__::func_679(iVar0));
									if (iVar1 != PLAYER::PLAYER_PED_ID() && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
									{
										PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
										PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
										return;
									}
								}
								iVar0++;
							}
						}
						if (__LIB_37__::func_97())
						{
							iVar0 = 0;
							while (iVar0 < __LIB_37__::func_96())
							{
								if (ENTITY::DOES_ENTITY_EXIST(__LIB_37__::func_95(iVar0)))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_37__::func_95(iVar0));
									if (iVar1 != PLAYER::PLAYER_PED_ID() && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
											PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
										}
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_USING(iParam0->f_1735[0 /*206*/].f_8);
					if (!((VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("tribike")) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("tribike3"))))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_710(int* iParam0, int* iParam1)//Position - 0x79A03
{
	if (func_324(1024))
	{
		if ((Local_51.f_0 == 2 && iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 != 6) && iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 != 10)
		{
			return;
		}
		if (ENTITY::GET_ENTITY_HEALTH(iParam0->f_1735[0 /*206*/].f_9) < 5)
		{
			__LIB_1__::func_31(&iLocal_520);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (iParam0->f_1735[0 /*206*/].f_11 <= (iParam0->f_11 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9, 0);
				}
			}
			if (iParam0->f_1735[0 /*206*/].f_11 + 1 <= (iParam0->f_11 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9, 0);
				}
			}
			func_409(1024);
			iParam0->f_17 = "SPR_RETR_DES";
			iParam0->f_1735[0 /*206*/].f_24 = 0;
		}
	}
}

void func_711(int* iParam0, int* iParam1)//Position - 0x79B22
{
	float fVar0;
	if (Local_51.f_0 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_9, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_1735[0 /*206*/].f_9, false))
			{
				func_337(2048);
			}
		}
		if (func_324(2048))
		{
			if (iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_1735[0 /*206*/].f_9, false))
				{
					fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0->f_1735[0 /*206*/].f_9, true));
					if (fVar0 > 25f)
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam1))
						{
							*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(iParam0->f_1735[0 /*206*/].f_9);
							HUD::SET_BLIP_COLOUR(*iParam1, 3);
						}
						if (!__LIB_1__::func_13(&iLocal_526))
						{
							__LIB_15__::func_248(&iLocal_526);
						}
						else
						{
							if (__LIB_2__::func_572(&iLocal_526) >= 10f)
							{
								func_602("SPR_TXIT_WARN", 15000, 0, &uLocal_530, 1024);
							}
							if (__LIB_2__::func_572(&iLocal_526) >= 35f)
							{
								__LIB_1__::func_31(&iLocal_520);
								__LIB_1__::func_12(&iLocal_526);
								if (HUD::DOES_BLIP_EXIST(*iParam1))
								{
									HUD::REMOVE_BLIP(iParam1);
									if (iParam0->f_1735[0 /*206*/].f_11 <= (iParam0->f_11 - 1))
									{
										if (HUD::DOES_BLIP_EXIST(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9))
										{
											HUD::SET_BLIP_DISPLAY(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9, 0);
										}
									}
									if (iParam0->f_1735[0 /*206*/].f_11 + 1 <= (iParam0->f_11 - 2))
									{
										if (HUD::DOES_BLIP_EXIST(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9))
										{
											HUD::SET_BLIP_DISPLAY(iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9, 0);
										}
									}
								}
								func_409(1024);
								iParam0->f_17 = "SPR_TXIT_FAIL";
								iParam0->f_1735[0 /*206*/].f_24 = 0;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(*iParam1))
					{
						HUD::REMOVE_BLIP(iParam1);
					}
					__LIB_1__::func_12(&iLocal_526);
					if (__LIB_0__::func_703(uLocal_530, 1024))
					{
						__LIB_2__::func_712(&uLocal_530, 1024);
					}
					if (__LIB_0__::func_703(uLocal_530, 2048))
					{
						__LIB_2__::func_712(&uLocal_530, 2048);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(*iParam1))
				{
					HUD::REMOVE_BLIP(iParam1);
				}
				func_409(2048);
			}
		}
	}
}

void func_712(int* iParam0)//Position - 0x79D6F
{
	if (func_324(1024))
	{
		func_716(iParam0);
		func_713(iParam0);
	}
}

void func_713(var uParam0)//Position - 0x79D8D
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_1735[0 /*206*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9, false))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_1735[0 /*206*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51.f_0 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1735[0 /*206*/].f_9, false))
				{
					func_337(2048);
				}
			}
			if (func_324(2048))
			{
				if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_602("SPR_HELP_DAMG", 5000, 0, &uLocal_530, 2);
					}
				}
			}
		}
		else
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			func_602("SPR_HELP_DAMG", 5000, 0, &uLocal_530, 2);
		}
	}
	if (Local_51.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_325();
			}
			func_602("SPR_HELP_DAMG", 5000, 0, &uLocal_530, 2);
		}
	}
}

void func_716(var uParam0)//Position - 0x79EFC
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	Var0 = { uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_3 };
	if (uParam0->f_1735[0 /*206*/].f_11 > 0)
	{
		Var1 = { uParam0->f_26[(uParam0->f_1735[0 /*206*/].f_11 - 1) /*14*/].f_3 };
	}
	else
	{
		Var1 = { Local_51.f_3 };
	}
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	fVar3 = fVar2;
	switch (Local_51.f_0)
	{
		case 1:
			if (uParam0->f_1735[0 /*206*/].f_11 == 0)
			{
				fVar2 = (fVar2 + 10f);
				fVar3 = (fVar3 + 100f);
			}
			else
			{
				fVar2 = (fVar2 + 50f);
				fVar3 = (fVar3 + 300f);
			}
			break;
		case 0:
			if (uParam0->f_1735[0 /*206*/].f_11 == 0)
			{
				fVar2 = (fVar2 + 200f);
				fVar3 = (fVar3 + 750f);
			}
			else
			{
				fVar2 = (fVar2 + 200f);
				fVar3 = (fVar3 + 9000f);
			}
			break;
		case 2:
			if (uParam0->f_1735[0 /*206*/].f_11 == 0)
			{
				fVar2 = (fVar2 + 10f);
				fVar3 = (fVar3 + 60f);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8, false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[0 /*206*/].f_8, false))
				{
					fVar2 = (fVar2 + 20f);
					fVar3 = (fVar3 + 170f);
				}
				else
				{
					fVar2 = (fVar2 + 20f);
					fVar3 = (fVar3 + 70f);
				}
			}
			break;
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, true) };
	Var5 = { MISC::GET_CLOSEST_POINT_ON_LINE(Var4, Var1, Var0, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var4, true);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_51.f_0 == 1)
	{
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		if (Local_51.f_0 == 2 && __LIB_0__::func_501("TRI_LEAVE_VEH", 0, 0))
		{
			HUD::CLEAR_THIS_PRINT("TRI_LEAVE_VEH");
		}
		__LIB_1__::func_31(&iLocal_520);
		func_409(1024);
		uParam0->f_1735[0 /*206*/].f_24 = 0;
		uParam0->f_17 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (Local_51.f_0 == 2)
		{
			if (!__LIB_0__::func_1("SPR_HELP_DIST_2"))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_190("SPR_HELP_DIST_2");
				func_747(8);
			}
		}
		else if (fVar6 <= (fVar3 - 15f))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_0__::func_151("SPR_HELP_DIST", -1);
			}
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_602("SPR_HELP_WARN", 5000, 0, &uLocal_530, 4);
		}
	}
	else
	{
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (__LIB_0__::func_1("SPR_HELP_DIST_2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_703(uLocal_530, 4))
		{
			__LIB_2__::func_712(&uLocal_530, 4);
		}
	}
}

void func_718(int* iParam0, int iParam1, var uParam2, struct<3> Param3, var uParam4, int iParam5)//Position - 0x7A1D0
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		uParam2 = uParam2;
		uParam4 = uParam4;
		func_538(iParam0, Param3, iParam5);
	}
}

void func_719(int* iParam0, int iParam1, bool bParam2)//Position - 0x7A1FA
{
	if (iParam1 < 0 || iParam1 > 121)
	{
		return;
	}
	func_340(&(iParam0->f_26[iParam1 /*14*/]));
	if (bParam2)
	{
		func_335(&(iParam0->f_26[iParam1 /*14*/]));
	}
	if (iParam1 + 1 < iParam0->f_11)
	{
		func_340(&(iParam0->f_26[iParam1 + 1 /*14*/]));
		func_335(&(iParam0->f_26[iParam1 + 1 /*14*/]));
	}
}

void func_720(int* iParam0, var uParam1)//Position - 0x7A25E
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (func_411(iParam0, uParam1) != 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false) || PED::IS_PED_INJURED(uParam1->f_8))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_9) || ENTITY::IS_ENTITY_DEAD(uParam1->f_9, false))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_8, true) && TASK::GET_SCRIPT_TASK_STATUS(uParam1->f_8, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_9, true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_8, true) - Var0 * Vector(0.15f, 0.15f, 0.15f) };
		Var2 = { Var0 + Var1 };
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var2, 3f, 20000, 3f, 1, 40000f);
		TASK::TASK_ENTER_VEHICLE(0, uParam1->f_9, 20000, -1, 3f, 1, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam1->f_9, uParam1->f_205, 786485, 0, 8, -1, -1f, false, 2f);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(uParam1->f_8, iVar3);
		TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	}
}

void func_721(var uParam0, var uParam1)//Position - 0x7A360
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	if (uParam0->f_10 != 0 && !uParam0->f_13)
	{
		iVar4 = __LIB_1__::func_577();
		__LIB_21__::func_969(__LIB_19__::func_216(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_10, iVar0, iVar1, iVar2, __LIB_38__::func_473(uParam0->f_3, 25, 200));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_10, iVar0, iVar1, iVar2, __LIB_38__::func_473(uParam0->f_3, 25, 200));
	}
	if (uParam1->f_10 != 0 && !uParam1->f_13)
	{
		iVar5 = __LIB_1__::func_577();
		__LIB_21__::func_969(__LIB_19__::func_216(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_10, iVar0, iVar1, iVar2, __LIB_38__::func_473(uParam1->f_3, 25, 200));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_10, iVar0, iVar1, iVar2, __LIB_38__::func_473(uParam1->f_3, 25, 200));
	}
}

int func_722(int* iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7A446
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	uVar0 = uVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam2, false))
	{
		return -1;
	}
	if (uParam1->f_11 == 6 || uParam1->f_11 == 10)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
		{
			if ((uParam1->f_11 == 10 && !PED::IS_PED_RAGDOLL(iParam2)) || uParam1->f_11 != 10)
			{
				return -1;
			}
		}
		else if (!((PED::IS_PED_IN_MODEL(iParam2, joaat("tribike")) || PED::IS_PED_IN_MODEL(iParam2, joaat("tribike2"))) || PED::IS_PED_IN_MODEL(iParam2, joaat("tribike3"))))
		{
			return -1;
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam2))
	{
		return -1;
	}
	switch (uParam1->f_11)
	{
		case 8:
			switch (Local_51.f_58)
			{
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, 1753.24f, 3895.4f, 33.82f, 1762.06f, 3900.4f, 40.81f, 9.7f, false, true, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_747(2);
							}
						}
						__LIB_38__::func_615(&uLocal_506, 0);
						return 0;
					}
					break;
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1327.06f, -1041.91f, 6.4f, -1336.8f, -1047.55f, 13.47f, 9.7f, false, true, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_747(2);
							}
						}
						__LIB_38__::func_615(&uLocal_506, 0);
						return 0;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -2298.94f, 459.13f, 173.47f, -2310.46f, 460.32f, 180.47f, 9.7f, false, true, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_747(2);
							}
						}
						__LIB_38__::func_615(&uLocal_506, 0);
						return 0;
					}
					break;
			}
			break;
		case 10:
			switch (Local_51.f_58)
			{
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, 1974.43f, 3887.36f, 31.35f, 1961.63f, 3879.74f, 38.3f, 18f, false, true, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_747(1);
							}
						}
						return 0;
					}
					break;
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1172.74f, -844.98f, 13.36f, -1166.32f, -856.93f, 20.16f, 18f, false, true, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_747(1);
							}
						}
						return 0;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1283.32f, 274.68f, 63.78f, -1275.79f, 283.86f, 70.86f, 12f, false, true, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_747(1);
							}
						}
						return 0;
					}
					break;
			}
			break;
		case 5:
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_4377[iParam0->f_1735[iParam3 /*206*/].f_11], true) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
			Var3 = { uParam1->f_3 - Var1 };
			Var4 = { Var2 - Var1 };
			fVar5 = __LIB_0__::func_158(Var3, Var4);
			if (ENTITY::IS_ENTITY_AT_COORD(iParam2, uParam1->f_3, uParam1->f_6, uParam1->f_6, uParam1->f_6, false, true, 0) && fVar5 >= 0f)
			{
				if (iParam2 == PLAYER::PLAYER_PED_ID())
				{
					__LIB_38__::func_615(&uLocal_506, 0);
					if (func_407(uParam1, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_538, "HUD_MINI_GAME_SOUNDSET", true);
					}
				}
				return 0;
			}
			break;
		default:
			if (ENTITY::IS_ENTITY_AT_COORD(iParam2, uParam1->f_3, uParam1->f_6, uParam1->f_6, uParam1->f_6, false, true, 0))
			{
				if (iParam2 == PLAYER::PLAYER_PED_ID())
				{
					__LIB_38__::func_615(&uLocal_506, 0);
					if (func_407(uParam1, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_538, "HUD_MINI_GAME_SOUNDSET", true);
					}
				}
				else if (uParam1->f_11 == 9)
				{
					if (iParam2 != PLAYER::PLAYER_PED_ID())
					{
						if (iParam0->f_1735[iParam3 /*206*/].f_12 == 1)
						{
							func_747(0);
						}
					}
				}
				return 0;
			}
			break;
	}
	return -1;
}

void func_725(int* iParam0, int iParam1)//Position - 0x7A8B9
{
	int iVar0;
	int iVar1;
	struct<206> Var2;
	float fVar3;
	float fVar4;
	if (iParam1 < 0 || iParam1 > (iParam0->f_12 - 1))
	{
		return;
	}
	iVar0 = iParam0->f_12;
	Var2 = { iParam0->f_1735[iParam1 /*206*/] };
	iVar1 = 0;
	while (iVar1 < iParam0->f_12)
	{
		if (Var2.f_8 != iParam0->f_1735[iVar1 /*206*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar1 /*206*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8, false))
			{
				if (Var2.f_11 > iParam0->f_1735[iVar1 /*206*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == iParam0->f_1735[iVar1 /*206*/].f_11)
				{
					fVar3 = __LIB_2__::func_485(Var2.f_8, iParam0->f_26[Var2.f_11 /*14*/].f_3, 1);
					fVar4 = __LIB_2__::func_485(iParam0->f_1735[iVar1 /*206*/].f_8, iParam0->f_26[iParam0->f_1735[iVar1 /*206*/].f_11 /*14*/].f_3, 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	iParam0->f_1735[iParam1 /*206*/].f_12 = iVar0;
}

int func_727(int* iParam0, var uParam1, bool bParam2)//Position - 0x7A9F6
{
	bool bVar0;
	switch (uParam1->f_24)
	{
		case 0:
			func_409(1024);
			func_744(iParam0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_743(iParam0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
				}
			}
			__LIB_38__::func_474(&uLocal_1139, 1050253722, 1073741824);
			uParam1->f_24 = 1;
			break;
		case 1:
			Local_51.f_289 = 1;
			if (__LIB_40__::func_516(&(iParam0->f_4372), &uLocal_1139, "SPR_UI_FAILD", iParam0->f_17, &bVar0, 78, 7, 1, 1097859072, 1))
			{
				if (bVar0)
				{
					if (__LIB_0__::func_501("SPR_RETR_DES", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					__LIB_38__::func_620(0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					}
					iParam0->f_4398 = 1;
					Local_51.f_289 = 0;
					func_337(512);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					func_790();
					uParam1->f_24 = 5;
				}
				else
				{
					__LIB_38__::func_589(&iLocal_520, 10f);
					__LIB_38__::func_620(0);
					iParam0->f_4398 = 0;
					func_409(512);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					uParam1->f_24 = 13;
				}
			}
			break;
		case 3:
			if (func_324(512))
			{
				func_409(1024);
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { iParam0->f_26[uParam1->f_11 /*14*/].f_3 };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_1735[0 /*206*/].f_9, false))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_1__::func_214(&(Local_51.f_290), 1, 0, 0, 1);
					__LIB_0__::func_990(&(Local_51.f_290), "SPR_UI_RESET", 2, 201, 1, 1, 0);
					__LIB_0__::func_990(&(Local_51.f_290), "SPR_UI_QUIT", 2, 204, 1, 1, 0);
					__LIB_0__::func_990(&(Local_51.f_290), "SPR_UI_RESTART", 2, 203, 1, 1, 0);
					__LIB_1__::func_213(&(Local_51.f_290), 1);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_1735[0 /*206*/].f_9, false))
				{
					uParam1->f_24 = 4;
				}
			}
			else
			{
				uParam1->f_24 = 7;
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_9, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_1735[0 /*206*/].f_9, 4);
			}
			func_409(1024);
			if (__LIB_2__::func_572(&iLocal_520) <= 10f)
			{
				if (bParam2)
				{
					__LIB_2__::func_439(&(Local_51.f_290), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 192 /*INPUT_FRONTEND_RUP*/))
					{
						func_337(512);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_24 = 5;
						if (!Local_51.f_0 == 2)
						{
							__LIB_0__::func_345(&uLocal_506, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
								}
							}
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_24 = 5;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 192 /*INPUT_FRONTEND_RUP*/))
					{
						func_409(512);
						if (!Local_51.f_0 == 2)
						{
							__LIB_0__::func_345(&uLocal_506, 0, 0);
						}
						if (Local_51.f_0 == 1)
						{
							Local_51.f_58 = -1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
									}
								}
							}
							uParam1->f_24 = 11;
						}
						else
						{
							__LIB_38__::func_589(&iLocal_520, 10f);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
									}
								}
							}
							uParam1->f_24 = 13;
						}
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[0 /*206*/].f_9, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_1735[0 /*206*/].f_9, 1);
				}
				uParam1->f_24 = 13;
			}
			break;
		case 5:
			if (__LIB_39__::func_718(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				uParam1->f_24 = 7;
			}
			break;
		case 6:
			if (__LIB_39__::func_718(500))
			{
				func_743(iParam0);
				__LIB_1__::func_12(iParam0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				uParam1->f_24 = 9;
			}
			break;
		case 7:
			if (iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
			{
				func_732(uParam1);
			}
			else
			{
				func_731(uParam1);
			}
			if (func_324(512))
			{
				if (!PED::IS_PED_INJURED(iParam0->f_1735[0 /*206*/].f_8))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1735[0 /*206*/].f_8, joaat("WEAPON_UNARMED"), true);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iParam0->f_1735[0 /*206*/].f_8, true, true, true, false);
				}
				func_419();
				iParam0->f_25 = 8;
			}
			else
			{
				if (bParam2)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				}
				uParam1->f_24 = 8;
			}
			break;
		case 8:
			if (bParam2)
			{
				if (iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || iParam0->f_26[iParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
				{
					func_730(iParam0, uParam1);
				}
				else
				{
					func_729(iParam0, uParam1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				uParam1->f_24 = 10;
			}
			else
			{
				uParam1->f_24 = 12;
			}
			break;
		case 9:
			func_728(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_51.f_3, 100f, 0);
			func_416(iParam0);
			uParam1->f_24 = 11;
			break;
		case 10:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				func_337(1024);
				if (__LIB_39__::func_725(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					uParam1->f_24 = 12;
				}
				return 0;
			}
			break;
		case 11:
			if (__LIB_39__::func_725(500))
			{
				iParam0->f_25 = 8;
			}
			return 0;
			break;
		case 12:
			return 0;
			break;
		case 13:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			}
			func_743(iParam0);
			__LIB_1__::func_12(iParam0);
			iParam0->f_25 = 8;
			break;
	}
	return 1;
}

void func_728(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x7B083
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false) || !PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_8, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_8, fParam2);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, fParam2);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam3);
		if (Local_51.f_0 != 0 && Local_51.f_0 != 2)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) > 1.5f)
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true) };
					Var0.f_2 = (Var0.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) + 1.5f));
					ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Var0, true, false, false, true);
				}
			}
		}
	}
}

void func_729(var uParam0, var uParam1)//Position - 0x7B161
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (uParam1->f_11 > 0)
	{
		Var1 = { uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
		Var2 = { uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
		Var3 = { uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
		Var1.f_2 = (Var1.f_2 + 10f);
		Var2.f_2 = (Var2.f_2 - 10f);
		if (WATER::TEST_PROBE_AGAINST_WATER(Var1, Var2, &Var3))
		{
			Var3.f_2 = (Var3.f_2 + -1f);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_8, Var3, true, false, false, true);
		}
		else if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var3.f_2), false, false))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_8, Var3, true, false, false, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_8, Var3, true, false, false, true);
		}
		Var0 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 - uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uParam1->f_8, uParam1->f_16, true, false, false, true);
		Var0 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 - uParam1->f_16 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false))
	{
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_8, fVar4);
	}
}

void func_730(var uParam0, var uParam1)//Position - 0x7B29F
{
	struct<3> Var0;
	float fVar1;
	if (uParam1->f_11 > 0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_8, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_8, uParam1->f_9, -1);
				}
			}
		}
		PED::SET_PED_COORDS_KEEP_VEHICLE(uParam1->f_8, uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3);
		Var0 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 - uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9, false))
	{
		fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_9, fVar1);
	}
}

void func_731(var uParam0)//Position - 0x7B347
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000, 0);
	}
}

void func_732(var uParam0)//Position - 0x7B368
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, true) };
			Var0.f_2 = (Var0.f_2 + 3f);
			uParam0->f_9 = VEHICLE::CREATE_VEHICLE(joaat("tribike"), Var0, ENTITY::GET_ENTITY_HEADING(uParam0->f_8), true, true, false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000, 0);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_8, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_8, false))
		{
		}
	}
}

void func_743(var uParam0)//Position - 0x7BCA9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		func_719(uParam0, iVar0, 1);
		iVar0++;
	}
}

void func_744(var uParam0)//Position - 0x7BCCF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1735)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1735[iVar0 /*206*/].f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1735[iVar0 /*206*/].f_10));
		}
		iVar0++;
	}
	func_743(uParam0);
	HUD::REMOVE_BLIP(&iLocal_50);
	HUD::REMOVE_BLIP(&iLocal_318);
	HUD::REMOVE_BLIP(&iLocal_319);
}

void func_746(int* iParam0, int iParam1)//Position - 0x7BFC0
{
	iParam0->f_26[iParam1 /*14*/].f_8 = (iParam0->f_26[iParam1 /*14*/].f_8 - 25);
	if (iParam0->f_26[iParam1 /*14*/].f_8 > 0)
	{
		GRAPHICS::SET_CHECKPOINT_RGBA(iParam0->f_26[iParam1 /*14*/].f_10, 255, 255, 255, iParam0->f_26[iParam1 /*14*/].f_8);
		GRAPHICS::SET_CHECKPOINT_RGBA2(iParam0->f_26[iParam1 /*14*/].f_10, 255, 255, 255, iParam0->f_26[iParam1 /*14*/].f_8);
	}
	else
	{
		func_336(&(iParam0->f_26[iParam1 /*14*/].f_10));
		iParam0->f_26[iParam1 /*14*/].f_13 = 0;
	}
}

int func_747(int iParam0)//Position - 0x7C043
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_51.f_420.f_1[iVar0 /*4*/] == -1)
		{
			Local_51.f_420.f_1[iVar0 /*4*/] = iParam0;
			Local_51.f_420.f_1[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
			Local_51.f_420.f_1[iVar0 /*4*/].f_3 = func_749(iParam0);
			if (func_748(iParam0))
			{
				__LIB_0__::func_989(&(Local_51.f_420.f_1[iVar0 /*4*/].f_1), 1);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_748(int iParam0)//Position - 0x7C0BE
{
	switch (iParam0)
	{
		case 11:
		case 13:
		case 9:
		case 10:
		case 12:
		case 6:
			return 1;
			break;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 14:
		case 8:
		case 7:
			return 0;
			break;
	}
	return 0;
}

int func_749(int iParam0)//Position - 0x7C136
{
	switch (iParam0)
	{
		case 5:
			return 8;
			break;
		case 3:
		case 4:
			return 7;
			break;
		case 11:
		case 12:
			return 6;
			break;
		case 13:
			return 5;
			break;
		case 7:
		case 6:
			return 4;
			break;
		case 9:
		case 10:
			return 2;
			break;
		case 8:
			return 3;
			break;
		case 0:
		case 1:
		case 2:
			return 1;
			break;
		case 14:
			return 0;
			break;
	}
	return 10;
}

void func_750(int* iParam0)//Position - 0x7C1E1
{
	float fVar0;
	__LIB_1__::func_12(iParam0);
	if (Local_51.f_58 != -1)
	{
		fVar0 = func_342(Local_51.f_58);
		if (fVar0 <= 0f || fVar0 > Local_51.f_60[Local_51.f_58])
		{
			fVar0 = Local_51.f_60[Local_51.f_58];
		}
		iParam0->f_3 = fVar0;
		iParam0->f_4 = (iParam0->f_3 / 2f);
	}
	func_332(iParam0);
	iParam0->f_11 = 0;
	func_751(iParam0);
	iParam0->f_12 = 0;
}

void func_751(var uParam0)//Position - 0x7C24D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_752(uParam0, iVar0);
		iVar0++;
	}
}

void func_752(var uParam0, int iParam1)//Position - 0x7C272
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_754(&(uParam0->f_1735[iParam1 /*206*/]));
	func_753(&(uParam0->f_1735[iParam1 /*206*/]));
}

void func_753(char* sParam0)//Position - 0x7C2A8
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_24 = 12;
	sParam0->f_16 = { Local_51.f_3 };
	sParam0->f_19 = Local_51.f_6;
	sParam0->f_21 = Local_51.f_7;
	sParam0->f_22 = Local_51.f_8;
	sParam0->f_23 = Local_51.f_9;
}

void func_754(var uParam0)//Position - 0x7C313
{
	__LIB_39__::func_724(uParam0);
	__LIB_40__::func_513(uParam0);
	func_755(uParam0);
}

void func_755(var uParam0)//Position - 0x7C32D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_51.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_758(char* sParam0, int* iParam1, struct<3> Param2, float fParam3)//Position - 0x7C3BD
{
	int iVar0;
	struct<8> Var1;
	char cVar2[32];
	char cVar3[32];
	sParam0->f_8 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, 0f, 0f, fParam3, 2);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sParam0->f_8, false);
	iVar0 = __LIB_0__::func_683();
	StringCopy(&Var1, "triathlon_outro_", 32);
	if (iVar0 == 0)
	{
		StringConCat(&Var1, "michael", 32);
	}
	else if (iVar0 == 1)
	{
		StringConCat(&Var1, "franklin", 32);
	}
	else if (iVar0 == 2)
	{
		StringConCat(&Var1, "trevor", 32);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1->f_1735[0 /*206*/].f_8);
	TASK::TASK_SYNCHRONIZED_SCENE(iParam1->f_1735[0 /*206*/].f_8, sParam0->f_8, sParam0, &Var1, 1000f, -2f, 2, 0, 1000f, 0);
	GRAPHICS::FADE_UP_PED_LIGHT(4f);
	cVar2 = { Var1 };
	StringConCat(&cVar2, "_cam", 32);
	if (CAM::DOES_CAM_EXIST(iLocal_1091))
	{
		CAM::DESTROY_CAM(iLocal_1091, false);
	}
	iLocal_1091 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(iLocal_1091, true);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1091, sParam0->f_8, &cVar2, sParam0);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1091, iLocal_1098, 600, 1, 1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
	cVar3 = { Var1 };
	StringConCat(&cVar3, "_bottle", 32);
	sParam0->f_9 = OBJECT::CREATE_OBJECT(joaat("prop_energy_drink"), Param2, true, true, false);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(sParam0->f_9, sParam0->f_8, &cVar3, sParam0, 1000f, 8f, 0, 1000f);
}

bool func_764()//Position - 0x7CB6F
{
	return __LIB_15__::func_253(&Local_1004, 0, 1065353216, 0, 0, 0);
}

void func_790()//Position - 0x7F001
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_51.f_420.f_1[iVar0 /*4*/] = -1;
		iVar0++;
	}
	if (__LIB_1__::func_13(&(Local_51.f_420.f_65)))
	{
		__LIB_1__::func_12(&(Local_51.f_420.f_65));
	}
	if (__LIB_1__::func_13(&(Local_51.f_420.f_68)))
	{
		__LIB_1__::func_12(&(Local_51.f_420.f_68));
	}
	if (__LIB_1__::func_13(&(Local_51.f_420.f_71)))
	{
		__LIB_1__::func_12(&(Local_51.f_420.f_71));
	}
	if (__LIB_1__::func_13(&(Local_51.f_420.f_74)))
	{
		__LIB_1__::func_12(&(Local_51.f_420.f_74));
	}
	Local_51.f_420 = -1;
	Local_51.f_420.f_62 = 0;
	Local_51.f_420.f_63 = 0;
	Local_51.f_420.f_64 = 0;
	Local_51.f_420.f_77 = 0;
}

void func_791(int iParam0)//Position - 0x7F0B2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	iVar0 = 600;
	CAM::SET_CAM_ACTIVE(iLocal_1098, true);
	iVar3 = __LIB_0__::func_683();
	if (*iParam0 == 0)
	{
		if (iVar3 == 1)
		{
			Var1 = { -1340.1471f, -1015.2643f, 23f };
			Var2 = { 80f, 0f, -160.0018f };
		}
		else if (iVar3 == 0)
		{
			Var1 = { -1341.5535f, -1016.5138f, 23f };
			Var2 = { 80f, 0f, -66.7842f };
		}
		else if (iVar3 == 2)
		{
			Var1 = { -1340.875f, -1015.0278f, 23f };
			Var2 = { 80f, 0.0854f, -133.9209f };
		}
	}
	else if (*iParam0 == 1)
	{
		if (iVar3 == 1)
		{
			Var1 = { 1760.1621f, 3904.5063f, 50f };
			Var2 = { 80f, 0f, -121.7289f };
		}
		else if (iVar3 == 0)
		{
			Var1 = { 1761.2694f, 3901.9807f, 50f };
			Var2 = { 80f, 0f, -28.4583f };
		}
		else if (iVar3 == 2)
		{
			Var1 = { 1760.7273f, 3903.421f, 50f };
			Var2 = { 80f, 0.161f, -95.6354f };
		}
	}
	else if (iVar3 == 1)
	{
		Var1 = { -2279.956f, 414.1333f, 190f };
		Var2 = { 80f, 0f, 164.7893f };
	}
	else if (iVar3 == 0)
	{
		Var1 = { -2282.2585f, 412.3413f, 190f };
		Var2 = { 80f, 0f, -101.946f };
	}
	else if (iVar3 == 2)
	{
		Var1 = { -2280.867f, 413.3051f, 190f };
		Var2 = { 80f, 0.1686f, -175.5375f };
	}
	CAM::SET_CAM_COORD(iLocal_1098, Var1);
	CAM::SET_CAM_ROT(iLocal_1098, Var2, 2);
	GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(SYSTEM::TO_FLOAT(iVar0));
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

int func_795(int iParam0, float fParam1, int iParam2)//Position - 0x7F3BC
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	StringCopy(&(Var1[0 /*8*/]), "Location", 32);
	if (iParam0 == 1)
	{
		StringCopy(&(Var0[0 /*6*/]), "TRIRace1", 24);
	}
	else if (iParam0 == 0)
	{
		StringCopy(&(Var0[0 /*6*/]), "TRIRace2", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(&(Var0[0 /*6*/]), "TRIRace3", 24);
	}
	if (__LIB_1__::func_317(202, &Var0, &Var1, 1, -1, 1, 0))
	{
		fParam1 = (fParam1 * -1000f);
		__LIB_18__::func_969(202, 131, SYSTEM::ROUND(fParam1), 0f, 0);
		__LIB_18__::func_969(202, 96, iParam2, 0f, 0);
	}
	return 1;
}

int func_801(int* iParam0, var uParam1)//Position - 0x7F801
{
	int iVar0;
	if (!HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(false);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && func_324(67108864))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_MINI_GAME_SOUNDSET", true);
		func_409(67108864);
		__LIB_2__::func_540(&(Local_51.f_290));
		__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
		__LIB_0__::func_990(&(Local_51.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_0__::func_990(&(Local_51.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
			iLocal_1279 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_ONLINE() && !iLocal_1124)
	{
		iLocal_1124 = 1;
		iLocal_1279 = 0;
		__LIB_2__::func_540(&(Local_51.f_290));
		__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
		__LIB_0__::func_990(&(Local_51.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
	}
	else if (!PLAYER::IS_PLAYER_ONLINE() && iLocal_1124)
	{
		iLocal_1124 = 0;
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iLocal_1124 && !Global_2097157.f_1)
		{
			func_915(Local_51.f_58);
		}
		if (!func_324(67108864))
		{
			if (((!iLocal_1279 && Global_2097157.f_1) && Global_2097157.f_2) && iLocal_1280)
			{
				iLocal_1279 = 1;
				__LIB_2__::func_540(&(Local_51.f_290));
				__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_51.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				__LIB_0__::func_990(&(Local_51.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
			}
		}
		else
		{
			if (!Global_2097157.f_1)
			{
			}
			if (!Global_2097157.f_2)
			{
			}
			if (!iLocal_1280)
			{
			}
		}
		if (Global_2097157.f_1 && !Global_2097157.f_2)
		{
			if (!bLocal_0)
			{
				iVar0 = __LIB_0__::func_340((4 - iParam0->f_1735[0 /*206*/].f_12), 0, 3);
				func_795(Local_51.f_58, iParam0->f_1735[0 /*206*/].f_13, iVar0);
			}
			Global_2097157.f_2 = 1;
		}
		if (!iLocal_1280)
		{
			iLocal_1280 = __LIB_31__::func_951(&uLocal_567);
			if (iLocal_1280)
			{
				Global_2097532 = 1;
			}
		}
	}
	if (func_324(67108864))
	{
		if (func_901() && !func_900(iParam0, 1))
		{
			func_899(iParam0, 1);
			__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_51.f_290), "FE_HLP3" /* GXT: Back */, 2, 202, 1, 1, 0);
			__LIB_0__::func_990(&(Local_51.f_290), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
		}
		else if (!func_901() && func_900(iParam0, 1))
		{
			func_898(iParam0, 1);
			__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_51.f_290), "FE_HLP3" /* GXT: Back */, 2, 202, 1, 1, 0);
		}
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) && !func_324(67108864)) && iLocal_1279)
	{
		iLocal_1279 = 0;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "LEADERBOARD", "HUD_MINI_GAME_SOUNDSET", true);
		func_337(67108864);
		__LIB_2__::func_540(&(Local_51.f_290));
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_51.f_290), "FE_HLP3" /* GXT: Back */, 2, 202, 1, 1, 0);
			if (func_901())
			{
				func_899(iParam0, 1);
				__LIB_0__::func_990(&(Local_51.f_290), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
			}
		}
	}
	__LIB_2__::func_439(&(Local_51.f_290), 1128792064, 1, 0, 1, 1065353216);
	if (func_324(67108864))
	{
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			if (__LIB_14__::func_440(&(Local_51.f_217), 0))
			{
				func_409(67108864);
				__LIB_1__::func_214(&(Local_51.f_290), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_51.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				__LIB_0__::func_990(&(Local_51.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
				iLocal_1279 = 1;
			}
		}
		else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_4371))
		{
			func_808(iParam0, uParam1);
		}
		return 0;
	}
	else if (func_803())
	{
		func_764();
		if (!__LIB_0__::func_703(uLocal_529, 4))
		{
			__LIB_39__::func_780(&uLocal_529, 4);
			if (iParam0->f_1735[0 /*206*/].f_12 < 4)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", true);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "RACE_PLACED", "HUD_AWARDS", true);
			}
		}
	}
	if (__LIB_0__::func_718())
	{
		SYSTEM::SETTIMERA(2000);
	}
	else if (SYSTEM::TIMERA() > 3000)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_MINI_GAME_SOUNDSET", true);
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_803()//Position - 0x7FC8D
{
	if (__LIB_0__::func_703(uLocal_529, 128))
	{
		return 1;
	}
	if (__LIB_14__::func_598(&Local_1004, 0, 0))
	{
		__LIB_39__::func_780(&uLocal_529, 128);
		return 1;
	}
	return 0;
}

void func_808(var uParam0, var uParam1)//Position - 0x800C5
{
	func_809(&(uParam0->f_4371), uParam1);
	if (!Global_78579)
	{
		__LIB_0__::func_704(1);
	}
}

void func_809(var uParam0, var uParam1)//Position - 0x800E5
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		__LIB_36__::func_718(uParam0, &uLocal_567);
	}
	else
	{
		*uParam0 = __LIB_8__::func_314();
	}
}

void func_898(var uParam0, int iParam1)//Position - 0x87E03
{
	uParam0->f_4399 = (uParam0->f_4399 - (uParam0->f_4399 && iParam1));
}

void func_899(var uParam0, int iParam1)//Position - 0x87E1E
{
	uParam0->f_4399 = (uParam0->f_4399 || iParam1);
}

bool func_900(var uParam0, int iParam1)//Position - 0x87E33
{
	return (uParam0->f_4399 && iParam1) != 0;
}

bool func_901()//Position - 0x87E45
{
	return __LIB_16__::func_735(&uLocal_567);
}

void func_911(int* iParam0, int iParam1)//Position - 0x8851F
{
	char[] cVar0[8];
	char* sVar1;
	int iVar2;
	if (Global_78579)
	{
		__LIB_0__::func_704(0);
	}
	if (!func_324(65536))
	{
		func_337(65536);
		switch (iParam0->f_1735[iParam1 /*206*/].f_12)
		{
			case 1:
				cVar0 = "SPR_1stpl";
				break;
			case 2:
				cVar0 = "SPR_2ndpl";
				break;
			case 3:
				cVar0 = "SPR_3rdpl";
				break;
			case 4:
				cVar0 = "SPR_4thpl";
				break;
			case 5:
				cVar0 = "SPR_5thpl";
				break;
			case 6:
				cVar0 = "SPR_6thpl";
				break;
			case 7:
				cVar0 = "SPR_7thpl";
				break;
			case 8:
				cVar0 = "SPR_8thpl";
				break;
		}
		__LIB_14__::func_520(&Local_1004, cVar0, &(Local_51.f_69[Local_51.f_58 /*8*/]), 0);
		__LIB_14__::func_551(&Local_1004, 18, "SPR_TIME", "", SYSTEM::ROUND((iParam0->f_1735[iParam1 /*206*/].f_13 * 1000f)), 0, 0, 0);
		sVar1 = "SPR_RESULT";
		if (iParam0->f_1735[iParam1 /*206*/].f_12 >= 1 && iParam0->f_1735[iParam1 /*206*/].f_12 <= 3)
		{
			switch (iParam0->f_1735[iParam1 /*206*/].f_12)
			{
				case 1:
					iVar2 = 3;
					break;
				case 2:
					iVar2 = 2;
					break;
				case 3:
					iVar2 = 1;
					break;
			}
			__LIB_40__::func_514(&Local_1004, 1, sVar1, iParam0->f_1735[iParam1 /*206*/].f_12, iParam0->f_12, 1, iVar2, 0);
		}
		func_803();
	}
}

void func_915(int iParam0)//Position - 0x88770
{
	int iVar0;
	struct<8> Var1[2];
	if (iParam0 == 1)
	{
		iVar0 = 69;
		StringCopy(&(Var1[0 /*8*/]), "TRIRace1", 32);
		StringCopy(&(Var1[1 /*8*/]), "HUD_MG_TRI_ALA" /* GXT: Alamo Sea */, 32);
	}
	else if (iParam0 == 0)
	{
		iVar0 = 70;
		StringCopy(&(Var1[0 /*8*/]), "TRIRace2", 32);
		StringCopy(&(Var1[1 /*8*/]), "HUD_MG_TRI_VES" /* GXT: Vespucci */, 32);
	}
	else if (iParam0 == 2)
	{
		iVar0 = 71;
		StringCopy(&(Var1[0 /*8*/]), "TRIRace3", 32);
		StringCopy(&(Var1[1 /*8*/]), "HUD_MG_TRI_COY" /* GXT: Coyote Cross Country */, 32);
	}
	__LIB_15__::func_250(&uLocal_567, iVar0, &(Var1[0 /*8*/]), &(Var1[1 /*8*/]), -1, -1, 0, 0);
}

void func_926(bool bParam0)//Position - 0x8DE13
{
	Local_531.f_0 = bParam0;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_927()//Position - 0x8DE27
{
	func_928();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_928()//Position - 0x8DE38
{
	Local_531.f_0 = 0;
	Local_531.f_1 = { 0f, 0f, 0f };
	Local_531.f_4 = 0;
}

void func_930()//Position - 0x8DECD
{
	if (__LIB_17__::func_167(24))
	{
		func_931(24, Local_1125, fLocal_1126);
	}
}

void func_931(int iParam0, struct<3> Param1, float fParam2)//Position - 0x8DEEC
{
	if (__LIB_14__::func_527(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param1 };
			Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam2;
		}
	}
}

void func_933()//Position - 0x8DF63
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 700;
	if (CAM::DOES_CAM_EXIST(iLocal_1091))
	{
		Var1 = { CAM::GET_CAM_COORD(iLocal_1091) };
		Var2 = { CAM::GET_CAM_ROT(iLocal_1091, 2) };
	}
	iLocal_1098 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	CAM::SET_CAM_COORD(iLocal_1098, Var1);
	CAM::SET_CAM_ROT(iLocal_1098, Var2, 2);
	CAM::SET_CAM_FOV(iLocal_1098, 30f);
	CAM::SET_CAM_ACTIVE(iLocal_1098, true);
	if (CAM::DOES_CAM_EXIST(iLocal_1091))
	{
		CAM::DESTROY_CAM(iLocal_1091, false);
	}
	Var3 = { Var1 + Vector(20f, 0f, 0f) };
	Var4 = { Var2 + Vector(0f, 0f, 70f) };
	CAM::SET_CAM_PARAMS(iLocal_1098, Var3, Var4, 30f, iVar0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	GRAPHICS::TRIGGER_SCREENBLUR_FADE_IN(SYSTEM::TO_FLOAT(iVar0));
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
}

int func_934(int iParam0)//Position - 0x8E03B
{
	if (!iLocal_367)
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0) > 0.9f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_367 = 1;
			HUD::DISPLAY_RADAR(true);
			return 0;
		}
		else if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			func_490(0);
			HUD::DISPLAY_RADAR(false);
			return 1;
		}
	}
	return 0;
}

void func_939(int* iParam0)//Position - 0x8E217
{
	func_941(iParam0);
	__LIB_0__::func_467(iParam0);
	SYSTEM::SETTIMERA(0);
}

void func_941(var uParam0)//Position - 0x8E238
{
	__LIB_18__::func_822(&(uParam0->f_3384));
	__LIB_38__::func_660(&(uParam0->f_3384.f_741));
	Local_1004.f_565 = 1;
	func_942(&(uParam0->f_3384));
}

void func_942(var uParam0)//Position - 0x8E265
{
	__LIB_38__::func_636(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[1 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 127f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[2 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 297f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[3 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 324f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[4 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 351f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[5 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 378f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[6 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 405f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[7 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 432f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[8 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 459f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[9 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 486f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[10 /*2*/]), 257f, 297f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[11 /*2*/]), 257f, 324f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[12 /*2*/]), 257f, 351f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[13 /*2*/]), 257f, 378f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[14 /*2*/]), 257f, 405f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[15 /*2*/]), 257f, 432f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[16 /*2*/]), 257f, 459f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[17 /*2*/]), 298f, 567f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[18 /*2*/]), 384f, 567f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[19 /*2*/]), 470f, 567f, 1);
	__LIB_38__::func_942(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	__LIB_38__::func_592(uParam0[0 /*9*/], 0, 0, 0, 255);
	__LIB_38__::func_942(uParam0[1 /*9*/], 384f, 224f, 256f, 256f, 0);
	__LIB_38__::func_592(uParam0[1 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[2 /*9*/], 495f, 306f, 32f, 32f, 0);
	__LIB_38__::func_592(uParam0[2 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[3 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	__LIB_38__::func_592(uParam0[3 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[4 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	__LIB_38__::func_592(uParam0[4 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[5 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	__LIB_38__::func_592(uParam0[5 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	__LIB_38__::func_592(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	__LIB_38__::func_942(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	__LIB_38__::func_592(&(uParam0->f_420[1 /*8*/]), 70, 160, 130, 255);
	__LIB_38__::func_942(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[2 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[3 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[4 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[5 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[6 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 79f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[7 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[8 /*8*/]), 257f, 483f, 83f, 84f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[8 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[9 /*8*/]), 342f, 483f, 84f, 84f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[9 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[10 /*8*/]), 428f, 483f, 83f, 84f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[10 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[11 /*8*/]), 257f, 564f, 83f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[11 /*8*/]), 107, 1);
	__LIB_38__::func_942(&(uParam0->f_420[12 /*8*/]), 342f, 564f, 84f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[12 /*8*/]), 108, 1);
	__LIB_38__::func_942(&(uParam0->f_420[13 /*8*/]), 428f, 564f, 83f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[13 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_980(int* iParam0)//Position - 0x8F237
{
	int iVar0;
	if (!iLocal_402)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_12)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1735[iVar0 /*206*/].f_8, false))
			{
				if (iVar0 != 0)
				{
					func_982(iParam0, iVar0);
					PED::SET_PED_KEEP_TASK(iParam0->f_1735[iVar0 /*206*/].f_8, true);
				}
			}
			iVar0++;
		}
		if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			func_981(iParam0);
		}
		__LIB_15__::func_248(&iLocal_363);
		iLocal_402 = 1;
	}
}

void func_981(var uParam0)//Position - 0x8F2AA
{
	char* sVar0;
	char* sVar1;
	switch (uParam0->f_1735[0 /*206*/].f_12)
	{
		case 1:
			switch (__LIB_0__::func_683())
			{
				case 0:
					sVar0 = "MICHAEL_NORMAL";
					break;
				case 1:
					sVar0 = "FRANKLIN_NORMAL";
					break;
				case 2:
					sVar0 = "TREVOR_NORMAL";
					break;
			}
			func_577(PLAYER::PLAYER_PED_ID(), "RACE_WIN_POSITION_OUT_OF_BREATH", sVar0, 4);
			break;
		case 2:
		case 3:
			switch (__LIB_0__::func_683())
			{
				case 0:
					sVar0 = "MICHAEL_NORMAL";
					break;
				case 1:
					sVar0 = "FRANKLIN_NORMAL";
					break;
				case 2:
					sVar0 = "TREVOR_NORMAL";
					break;
			}
			sVar1 = __LIB_1__::func_295(PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID()) < 30f, "RACE_NEARLY_WIN_POSITION_OUT_OF_BREATH", "RACE_NEARLY_WIN");
			func_577(PLAYER::PLAYER_PED_ID(), sVar1, sVar0, 4);
			break;
		default:
			switch (__LIB_0__::func_683())
			{
				case 0:
					sVar0 = "MICHAEL_NORMAL";
					break;
				case 1:
					sVar0 = "FRANKLIN_NORMAL";
					break;
				case 2:
					sVar0 = "TREVOR_NORMAL";
					break;
			}
			func_577(PLAYER::PLAYER_PED_ID(), "RACE_FINISHED_OUT_OF_BREATH", sVar0, 4);
			break;
	}
}

void func_982(var uParam0, int iParam1)//Position - 0x8F3D2
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	char* sVar7;
	float fVar8;
	bVar0 = false;
	sVar1 = "mini@triathlon";
	iVar2 = uParam0->f_1735[iParam1 /*206*/].f_11;
	Var3 = { uParam0->f_26[iVar2 /*14*/].f_3 };
	Var4 = { __LIB_1__::func_657(Var3, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f) };
	fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar8 < 0.33f)
	{
		sVar7 = "jog_idle_d";
	}
	else if (fVar8 < 0.66f)
	{
		sVar7 = "jog_idle_e";
	}
	else
	{
		sVar7 = "jog_idle_f";
	}
	if (iVar2 >= (uParam0->f_11 - 1))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
		Var5 = { uParam0->f_26[iVar2 + 1 /*14*/].f_3 };
		Var6 = { __LIB_1__::func_657(Var5, 0f, 0f, 10f, 0f) };
		func_556(&Var6);
	}
	if (func_557(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) && iParam1 != 0)
	{
		if (!TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1 && !TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
		{
			if (uParam0->f_1735[iParam1 /*206*/].f_12 == 1)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iParam1 /*206*/].f_8, sVar1, "male_unarmed_b", 2f, -2f, -1, 1, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iParam1 /*206*/].f_8, sVar1, sVar7, 2f, -2f, -1, 1, 0f, false, false, false);
			}
		}
	}
	else if (iParam1 != 0)
	{
		if (bVar0)
		{
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_404[iParam1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_404[iParam1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 2f, 20000, 0.25f, 1, 40000f);
			TASK::TASK_PLAY_ANIM(0, sVar1, sVar7, 2f, -2f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_404[iParam1]);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_404[iParam1]);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, false))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uLocal_404[iParam1]));
				TASK::OPEN_SEQUENCE_TASK(&(uLocal_404[iParam1]));
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 2f, 20000, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 2f, 20000, 0.25f, 1, 40000f);
				TASK::TASK_PLAY_ANIM(0, sVar1, sVar7, 2f, -2f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_404[iParam1]);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_404[iParam1]);
			}
			else
			{
				PED::SET_PED_KEEP_TASK(uParam0->f_1735[iParam1 /*206*/].f_8, true);
			}
		}
	}
}

void func_983(bool bParam0, bool bParam1, int iParam2)//Position - 0x8F670
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	__LIB_1__::func_373(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	__LIB_12__::func_849(23, 0);
}

void func_992(int* iParam0)//Position - 0x8F929
{
	int iVar0;
	__LIB_1__::func_31(iParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (Local_51.f_0 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
	func_337(1024);
	iVar0 = 0;
	while (iVar0 < iParam0->f_12)
	{
		func_993(&(iParam0->f_1735[iVar0 /*206*/]));
		if (iVar0 != 0)
		{
			func_718(iParam0, iParam0->f_1735[iVar0 /*206*/].f_8, iParam0->f_1735[iVar0 /*206*/].f_9, iParam0->f_26[iParam0->f_1735[iVar0 /*206*/].f_11 /*14*/].f_3, iParam0->f_26[iParam0->f_1735[iVar0 /*206*/].f_11 /*14*/].f_11, iVar0);
		}
		iVar0++;
	}
}

void func_993(var uParam0)//Position - 0x8F9C5
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_23))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
		}
	}
}

int func_994(int* iParam0)//Position - 0x8FA2C
{
	switch (iLocal_537)
	{
		case 0:
			__LIB_15__::func_248(iParam0);
			__LIB_1__::func_265(&iLocal_532, 3);
			iLocal_537 = 1;
			break;
		case 1:
			if (__LIB_15__::func_251(iParam0, 1f))
			{
				func_995(&iLocal_532, 1, 0, 1, 3, 1, 0, 0);
				iLocal_537 = 2;
			}
			break;
		case 2:
			if (func_995(&iLocal_532, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_995(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x8FAA0
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	if (bParam7)
	{
		__LIB_1__::func_266(&(uParam0->f_2), 1);
	}
	if (!__LIB_1__::func_13(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (__LIB_1__::func_13(&(uParam0->f_2)))
		{
			if (__LIB_2__::func_213(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (__LIB_0__::func_616(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					__LIB_1__::func_12(&(uParam0->f_2));
					if (__LIB_0__::func_703(uParam0->f_1, 1))
					{
						__LIB_39__::func_780(&(uParam0->f_1), 8);
						HUD::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
						__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						return 1;
					}
					__LIB_1__::func_31(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(__LIB_2__::func_572(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!__LIB_0__::func_703(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !__LIB_0__::func_703(uParam0->f_1, 1))
		{
			__LIB_39__::func_780(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !__LIB_0__::func_703(uParam0->f_1, 2))
		{
			__LIB_39__::func_780(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_0__::func_703(uParam0->f_1, 4))
		{
			__LIB_39__::func_780(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_0__::func_703(uParam0->f_1, 16))
		{
			if (MISC::ABSF((__LIB_2__::func_572(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					__LIB_39__::func_780(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !__LIB_0__::func_703(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
			}
			__LIB_39__::func_780(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && __LIB_1__::func_254()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			__LIB_1__::func_12(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

void func_1001(var uParam0)//Position - 0x8FEBF
{
	uParam0->f_11 = uParam0->f_11;
}

void func_1003()//Position - 0x8FEF3
{
	if (CAM::DOES_CAM_EXIST(iLocal_1092))
	{
		CAM::DESTROY_CAM(iLocal_1092, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1093))
	{
		CAM::DESTROY_CAM(iLocal_1093, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1094))
	{
		CAM::DESTROY_CAM(iLocal_1094, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1095))
	{
		CAM::DESTROY_CAM(iLocal_1095, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1096))
	{
		CAM::DESTROY_CAM(iLocal_1096, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1097))
	{
		CAM::DESTROY_CAM(iLocal_1097, false);
	}
}

void func_1004(struct<3> Param0, var uParam1, float fParam2, var uParam3, int iParam4, int iParam5)//Position - 0x8FF67
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	struct<3> Var14;
	func_337(4096);
	func_1022(uParam1);
	if (iLocal_313 == 1)
	{
		Var1 = { 2391.1677f, 4283.4873f, 32.2649f };
		Var3 = { 7.3105f, 0.0009f, -116.2334f };
		Var2 = { 2391.8623f, 4283.1465f, 32.3712f };
		Var4 = { 7.731f, 0.0009f, -115.5986f };
	}
	else if (iLocal_313 == 0)
	{
		Var1 = { -1269.5f, -2036.2f, 3.1f };
		Var3 = { 16.2f, 0f, -167.1f };
		Var2 = { -1269.5f, -2036.2f, 3.1f };
		Var4 = { 17.8f, 0f, -165.5f };
	}
	if (!func_324(8192) && iLocal_1123 > 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (iLocal_1123 > 8)
			{
				func_337(8192);
				iLocal_1123 = 26;
				if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_220))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_51.f_220))
					{
						ENTITY::DETACH_ENTITY(Local_51.f_220, true, true);
					}
				}
				__LIB_0__::func_429();
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_337(8192);
				if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_220))
				{
					ENTITY::DETACH_ENTITY(Local_51.f_220, true, true);
				}
				__LIB_0__::func_429();
				iLocal_1123 = 3;
			}
		}
	}
	switch (iLocal_1123)
	{
		case 0:
			func_1019();
			if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > 1000f)
			{
				STREAMING::LOAD_SCENE(Param0);
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			HUD::CLEAR_PRINTS();
			if (!__LIB_1__::func_13(&iLocal_1113))
			{
				__LIB_1__::func_362(&iLocal_1113);
			}
			else
			{
				__LIB_1__::func_31(&iLocal_1113);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			func_1018(1);
			break;
		case 1:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_519) >= 0.75f)
			{
				func_1018(2);
				if (iLocal_313 == 1)
				{
					Var7 = { 2384.3933f, 4317.6313f, 49.1586f };
					Var6 = { 2383.0474f, 4244.2207f, 46.9973f };
					Var8 = { Var6 - Var7 };
					fVar9 = MISC::GET_HEADING_FROM_VECTOR_2D(Var8.f_0, Var8.f_1);
				}
				else if (iLocal_313 == 0)
				{
					Var7 = { -1254.4238f, -2008.6199f, 20.453f };
					Var6 = { -1307.8572f, -2062.9504f, 14.3542f };
					fVar9 = 148.1232f;
				}
				else if (iLocal_313 == 2)
				{
					Var7 = { 1612.5658f, 3863.6152f, 48.4078f };
					Var6 = { 1551.9393f, 3818.1523f, 49.4007f };
					Var8 = { Var6 - Var7 };
					fVar9 = MISC::GET_HEADING_FROM_VECTOR_2D(Var8.f_0, Var8.f_1);
				}
				if (!PED::IS_PED_INJURED(*iParam5) && !ENTITY::IS_ENTITY_DEAD(*iParam4, false))
				{
					ENTITY::SET_ENTITY_COORDS(*iParam4, Var7, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(*iParam4, fVar9);
					TASK::TASK_HELI_MISSION(*iParam5, *iParam4, 0, 0, Var6, 4, 30f, 3f, fVar9, 1, 1, -1f, 0);
				}
			}
			break;
		case 2:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_519) >= 1f)
			{
				func_1018(3);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_221, false))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_51.f_221, ENTITY::GET_ENTITY_COORDS(Local_51.f_221, true), 2f, 0);
			}
			if (!Local_51.f_288)
			{
				func_1014();
				func_1013();
				Local_51.f_288 = 1;
			}
			if (!func_324(8192))
			{
				iLocal_1123 = 4;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
				}
				func_1012(uParam1);
				iLocal_1123 = 26;
			}
			break;
		case 4:
			if (iLocal_313 == 1)
			{
				fVar10 = 0f;
				Var11 = { 2407.5278f, 4280.579f, 51.4604f };
				Var12 = { 10.5419f, 0f, 91.9416f };
			}
			else if (iLocal_313 == 0)
			{
				fVar10 = 0f;
				Var11 = { -1261.8286f, -2046.983f, 18.0698f };
				Var12 = { 9.3682f, 0.0163f, 45.8717f };
			}
			else if (iLocal_313 == 2)
			{
				fVar10 = 0f;
				Var11 = { 1590.8025f, 3819.3125f, 45.5862f };
				Var12 = { 14.8126f, 0f, 36.9737f };
			}
			if (iLocal_313 != 2)
			{
				__LIB_0__::func_151("TRI_INTRO_GOAL", -1);
			}
			if (__LIB_2__::func_572(&iLocal_1113) > fVar10)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1098))
				{
					CAM::DESTROY_CAM(iLocal_1098, false);
				}
				iLocal_1098 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var11, Var12, 50f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_1098, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_220))
				{
					ENTITY::DETACH_ENTITY(Local_51.f_220, true, true);
				}
				iLocal_1123 = 5;
			}
			else if (func_324(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
				}
				func_1012(uParam1);
				iLocal_1123 = 26;
			}
			break;
		case 5:
			if (iLocal_313 == 1)
			{
				fVar10 = 0f;
			}
			else if (iLocal_313 == 0)
			{
				fVar10 = 0f;
			}
			else if (iLocal_313 == 2)
			{
				fVar10 = 0f;
			}
			if (__LIB_2__::func_572(&iLocal_1113) > fVar10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
				}
				func_1012(uParam1);
				if (!PED::IS_PED_INJURED(*iParam5) && !ENTITY::IS_ENTITY_DEAD(*iParam4, false))
				{
					func_1018(6);
				}
			}
			else if (func_324(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
				}
				func_1012(uParam1);
				iLocal_1123 = 26;
			}
			break;
		case 6:
			if (CAM::DOES_CAM_EXIST(*uParam3))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (func_324(8192))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
					}
					func_1012(uParam1);
					iLocal_1123 = 26;
				}
				else
				{
					if (iLocal_313 != 2)
					{
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1093, iLocal_1098, 6215, 1, 1);
					}
					else
					{
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1093, iLocal_1098, 8125, 1, 1);
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_1123 = 7;
				}
			}
			else
			{
				func_409(4096);
			}
			break;
		case 7:
			func_1011(uParam1);
			if (iLocal_313 != 2)
			{
				if (__LIB_2__::func_572(&iLocal_1113) > 6.215f)
				{
					func_1018(9);
				}
			}
			else if (__LIB_2__::func_572(&iLocal_1113) > 8.125f)
			{
				func_1018(9);
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iLocal_313 == 2)
				{
					__LIB_0__::func_151("TRI_INTRO_IM1", -1);
				}
				iLocal_1123 = 8;
			}
			if (func_324(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
				}
				HUD::CLEAR_HELP(true);
				func_1012(uParam1);
				iLocal_1123 = 26;
			}
			break;
		case 8:
			if (iLocal_313 == 2)
			{
				fVar0 = 8.125f;
			}
			else
			{
				fVar0 = 6.125f;
			}
			if (__LIB_2__::func_572(&iLocal_1113) > fVar0)
			{
				func_1018(9);
			}
			if (func_324(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_16, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam1->f_1735[0 /*206*/].f_19);
				}
				HUD::CLEAR_HELP(true);
				func_1012(uParam1);
				iLocal_1123 = 26;
			}
			break;
		case 9:
			if (CAM::DOES_CAM_EXIST(iLocal_1094))
			{
				if (iLocal_313 == 1)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1095, iLocal_1094, 5000, 0, 0);
				}
				else if (iLocal_313 == 0)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1095, iLocal_1094, 5000, 0, 0);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1095, iLocal_1094, 6000, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam4, false))
				{
					if (iLocal_313 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(*iParam4, 2386.292f, 4232.555f, 36.912f, true, false, false, true);
					}
					else if (iLocal_313 == 0)
					{
						ENTITY::SET_ENTITY_COORDS(*iParam4, -1306.7081f, -2067.3142f, 13.6222f, true, false, false, true);
					}
				}
				if (iLocal_313 == 2)
				{
					HUD::CLEAR_THIS_PRINT("TRI_INTRO_IM2");
					__LIB_0__::func_151("TRI_INTRO_IM2", -1);
				}
				else
				{
					HUD::CLEAR_THIS_PRINT("TRI_INTRO_GOAL");
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						__LIB_0__::func_151("TRI_INTNS_KM", -1);
					}
					else
					{
						__LIB_0__::func_151("TRI_INTNS", -1);
					}
				}
				if (iLocal_313 == 2)
				{
					iLocal_1123 = 10;
				}
				else
				{
					iLocal_1123 = 11;
				}
			}
			else
			{
				func_409(4096);
			}
			break;
		case 11:
			if (__LIB_2__::func_572(&iLocal_1113) > 1.5f)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(*iParam4, false))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(*iParam4, true) };
					fVar13 = __LIB_0__::func_932(Var14, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				if (!PED::IS_PED_INJURED(*iParam5) && !ENTITY::IS_ENTITY_DEAD(*iParam4, false))
				{
					TASK::TASK_HELI_MISSION(*iParam5, *iParam4, 0, 0, Var14, 4, 30f, 3f, fVar13, 1, 1, -1f, 0);
				}
				iLocal_1123 = 10;
			}
			break;
		case 10:
			if (iLocal_313 == 2)
			{
				fVar0 = 6f;
			}
			else
			{
				fVar0 = 5f;
			}
			if (__LIB_2__::func_572(&iLocal_1113) > fVar0)
			{
				if (iLocal_313 == 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), iLocal_425[2], "idle_a", 8f, -8f, -1, 1, 0.5f, false, false, false);
					}
					func_1018(16);
				}
				else
				{
					if (CAM::DOES_CAM_EXIST(iLocal_1092))
					{
						CAM::DESTROY_CAM(iLocal_1092, false);
					}
					if (CAM::DOES_CAM_EXIST(iLocal_1098))
					{
						CAM::DESTROY_CAM(iLocal_1098, false);
					}
					CAM::SHAKE_SCRIPT_GLOBAL("WOBBLY_SHAKE", 0.0002f);
					iLocal_1092 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1101, Local_1103, 35f, false, 2);
					iLocal_1098 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1102, Local_1104, 35f, false, 2);
					func_1018(18);
				}
			}
			break;
		case 18:
			if (CAM::DOES_CAM_EXIST(iLocal_1098) && CAM::DOES_CAM_EXIST(iLocal_1092))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1098, iLocal_1092, 6100, 0, 0);
				HUD::CLEAR_THIS_PRINT("TRI_INTNS");
				if (MISC::IS_PC_VERSION())
				{
					if (__LIB_0__::func_501("TRI_INTNS_KM", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("TRI_INTNS_KM");
					}
				}
				__LIB_0__::func_151("TRI_NRG_INTRO", -1);
				iLocal_1123 = 19;
				uParam1->f_1735[0 /*206*/].f_12 = 1;
			}
			break;
		case 19:
			if (__LIB_2__::func_572(&iLocal_1113) > 6f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), iLocal_425[2], "idle_d", 8f, -8f, -1, 1, 0.05f, false, false, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_1092))
				{
					CAM::DESTROY_CAM(iLocal_1092, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_1093))
				{
					CAM::DESTROY_CAM(iLocal_1093, false);
				}
				iLocal_1093 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1106, Local_1108, 20.7f, false, 2);
				iLocal_1092 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1105, Local_1107, 20.7f, false, 2);
				func_1018(20);
			}
			break;
		case 20:
			if (CAM::DOES_CAM_EXIST(iLocal_1098))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1093, iLocal_1092, 4100, 0, 0);
				HUD::CLEAR_THIS_PRINT("TRI_NRG_INTRO");
				__LIB_0__::func_151("TRI_HP_LOSS", -1);
				iLocal_1123 = 21;
				func_686(uParam1);
			}
			break;
		case 21:
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
			if (__LIB_2__::func_572(&iLocal_1113) > 4.1f)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1092))
				{
					CAM::DESTROY_CAM(iLocal_1092, false);
				}
				iLocal_1092 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1, Var3, 20.7f, false, 2);
				func_1018(22);
			}
			func_686(uParam1);
			break;
		case 22:
			if (CAM::DOES_CAM_EXIST(iLocal_1098))
			{
				CAM::SET_CAM_PARAMS(iLocal_1098, Var2, Var4, 20.7f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1098, iLocal_1092, 4000, 0, 0);
				HUD::CLEAR_THIS_PRINT("TRI_HP_LOSS");
				iLocal_1123 = 23;
			}
			func_686(uParam1);
			break;
		case 23:
			if (__LIB_2__::func_572(&iLocal_1113) > 4f)
			{
				func_1018(26);
			}
			func_686(uParam1);
			break;
		case 16:
			if (CAM::DOES_CAM_EXIST(iLocal_1096))
			{
				if (iLocal_313 == 1)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1097, iLocal_1096, 4000, 0, 0);
				}
				else if (iLocal_313 == 0)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1097, iLocal_1096, 4000, 0, 0);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1097, iLocal_1096, 6000, 0, 0);
				}
				if (iLocal_313 == 2)
				{
					HUD::CLEAR_THIS_PRINT("TRI_INTRO_IM2");
					__LIB_0__::func_151("TRI_INTRO_IM3", -1);
				}
				iLocal_1123 = 17;
			}
			else
			{
				func_409(4096);
			}
			break;
		case 17:
			if (__LIB_2__::func_572(&iLocal_1113) > 6f)
			{
				func_1018(26);
			}
			break;
		case 24:
			iLocal_1123 = 25;
			break;
		case 25:
			if (__LIB_2__::func_572(&iLocal_1113) > 4f)
			{
				func_1018(26);
			}
			break;
		case 26:
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && func_1006())
			{
				HUD::CLEAR_HELP(true);
				HUD::DISPLAY_RADAR(true);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(900);
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1100, iLocal_1099, 5000, 0, 0);
				func_1005(uParam1);
				func_629(iParam5, iParam4);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_409(8192);
				func_409(4096);
			}
			break;
	}
}

void func_1005(var uParam0)//Position - 0x90CE1
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8, false))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
			if (iVar0 != 0)
			{
				sVar2 = __LIB_1__::func_295(iVar1 == 1, "ig_2_gen_warmup_01", __LIB_1__::func_295(iVar1 == 2, "ig_2_gen_warmup_02", __LIB_1__::func_295(iVar1 == 3, "ig_2_gen_warmup_03", __LIB_1__::func_295(iVar1 == 4, "ig_2_gen_warmup_04", __LIB_1__::func_295(iVar1 == 5, "ig_2_gen_warmup_05", __LIB_1__::func_295(iVar1 == 6, "ig_2_gen_warmup_06", __LIB_1__::func_295(iVar1 == 7, "ig_2_gen_warmup_07", __LIB_1__::func_295(iVar1 == 8, "ig_2_gen_warmup_08", __LIB_1__::func_295(iVar1 == 9, "ig_2_gen_warmup_09", __LIB_1__::func_295(iVar1 == 10, "ig_2_gen_warmup_10", __LIB_1__::func_295(iVar1 == 11, "ig_2_gen_warmup_11", __LIB_1__::func_295(iVar1 == 12, "ig_2_gen_warmup_12", "ig_2_gen_warmup_13"))))))))))));
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, "mini@triathlon", sVar2, 1000f, -8f, -1, 8320, 0.02f, false, false, false);
			}
			else
			{
				sVar2 = "ig_2_gen_warmup_01";
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_1735[iVar0 /*206*/].f_8);
				if (func_324(8192))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, "mini@triathlon", sVar2, 1000f, -8f, -1, 8320, 0.15f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, "mini@triathlon", sVar2, 1000f, -8f, -1, 8320, 0.25f, false, false, false);
				}
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_1735[iVar0 /*206*/].f_8, false, false);
		}
		iVar0++;
	}
}

int func_1006()//Position - 0x90E84
{
	struct<50> Var0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	__LIB_14__::func_529(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	switch (__LIB_0__::func_683())
	{
		case 0:
			if ((Var0.f_13[3] == 13 && Var0.f_13[4] == 12) && Var0.f_13[6] == 8)
			{
				return 1;
			}
			break;
		case 2:
			if ((Var0.f_13[3] == 10 && Var0.f_13[4] == 10) && Var0.f_13[6] == 4)
			{
				return 1;
			}
			break;
		case 1:
			if ((Var0.f_13[3] == 5 && Var0.f_13[4] == 5) && Var0.f_13[6] == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1011(var uParam0)//Position - 0x918BD
{
	int iVar0;
	float fVar1;
	char* sVar2;
	int iVar3;
	if (!func_324(16384))
	{
		sVar2 = "mini@triathlon";
		iVar0 = 0;
		while (iVar0 < uParam0->f_12)
		{
			iVar3 = uParam0->f_1735[iVar0 /*206*/].f_8;
			if (iVar0 == 0)
			{
				fVar1 = 1f;
			}
			else
			{
				fVar1 = __LIB_0__::func_373(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= 0.4f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 0.95f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.1f, 1.3f));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_a", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_a", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_b", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_b", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_c", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_c", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_d", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_d", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_e", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_e", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_f", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_f", fVar1);
				}
			}
			iVar0++;
		}
	}
	func_337(16384);
}

void func_1012(var uParam0)//Position - 0x91A18
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8, false))
		{
			if (iVar0 != 0)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, iLocal_425[2], "idle_f", 8f, -8f, -1, 1, fVar1, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, iLocal_425[2], "idle_a", 8f, -8f, -1, 1, fVar1, false, false, false);
			}
		}
		iVar0++;
	}
}

void func_1013()//Position - 0x91AB4
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	if (iVar0 == 0)
	{
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 7, 0, false);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 22, 0, false);
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 2, 0, false);
	}
	else if (iVar0 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 22, 0, false);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 5, 0, false);
	}
}

void func_1014()//Position - 0x91B33
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_14__::func_529(PLAYER::PLAYER_PED_ID(), &(Local_51.f_222), 1, -1);
	func_1015(PLAYER::PLAYER_PED_ID(), 0);
	Local_51.f_287 = 0;
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 2);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 2);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1);
	iVar3 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::KNOCK_OFF_PED_PROP(PLAYER::PLAYER_PED_ID(), true, true, true, true);
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			if (__LIB_0__::func_683() == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 13, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 12, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 8, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, iVar2, iVar3, 0);
			}
			else if (__LIB_0__::func_683() == 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 10, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 10, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, iVar2, iVar3, 0);
			}
			else if (__LIB_0__::func_683() == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, iVar0, iVar1, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, iVar2, iVar3, 0);
			}
		}
	}
}

void func_1015(int iParam0, int iParam1)//Position - 0x91C98
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_216(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_305(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_106(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_14__::func_529(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_127();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_1018(int iParam0)//Position - 0x9224F
{
	__LIB_1__::func_31(&iLocal_1113);
	iLocal_1123 = iParam0;
}

void func_1019()//Position - 0x92263
{
	switch (iLocal_313)
	{
		case 1:
			if (!CAM::DOES_CAM_EXIST(iLocal_1092))
			{
				iLocal_1092 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2405.776f, 4282.3945f, 35.6522f, -1.3334f, 0f, 95.4363f, 30.3f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1093))
			{
				iLocal_1093 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2405.582f, 4280.5117f, 33.9315f, 5.2742f, 0f, 91.9419f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1094))
			{
				iLocal_1094 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2386.636f, 4295.4775f, 32.2856f, -1.1846f, 0.6029f, -150.5774f, 24.0182f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1095))
			{
				iLocal_1095 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2386.8499f, 4295.0957f, 32.2766f, -1.1846f, 0.6029f, -150.5774f, 24.0182f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1096))
			{
				iLocal_1096 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2403.0247f, 4281.165f, 33.5233f, -5.6822f, 0f, 95.0976f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1097))
			{
				iLocal_1097 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2402.9746f, 4281.7417f, 33.5233f, -5.6822f, 0f, 95.0976f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1099))
			{
				iLocal_1099 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2398.0886f, 4282.6377f, 33.2085f, -6.7472f, 0f, 99.2434f, 40.01f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1100))
			{
				iLocal_1100 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2397.4504f, 4282.5605f, 33.1346f, -5.617f, 0f, 98.3052f, 40.01f, false, 2);
			}
			Local_1101 = { 2389.7273f, 4251.562f, 40.2787f };
			Local_1103 = { -20.559f, 0.6028f, -3.2381f };
			Local_1102 = { 2405.3708f, 4256.7573f, 40.7256f };
			Local_1104 = { -14.5943f, 0.6248f, 41.4011f };
			Local_1105 = { 2396.3472f, 4271.725f, 32.4817f };
			Local_1107 = { 2.6718f, 0f, 3.2264f };
			Local_1106 = { 2396.292f, 4272.705f, 32.5122f };
			Local_1108 = { 2.0511f, 0f, 3.2264f };
			if (!CAM::DOES_CAM_EXIST(iLocal_1098))
			{
				iLocal_1098 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1101, Local_1103, 50f, false, 2);
			}
			break;
		case 0:
			if (!CAM::DOES_CAM_EXIST(iLocal_1092))
			{
				iLocal_1092 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1260.5f, -2048.5f, 15.4f, 16.4f, 0f, 45.2f, 30.3f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1093))
			{
				iLocal_1093 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1261.4497f, -2047.355f, 7.0256f, -2.7528f, 0.0163f, 45.8717f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1094))
			{
				iLocal_1094 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1261.4224f, -2022.1317f, 3.0495f, 5.1381f, 0f, 147.5967f, 33.6646f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1095))
			{
				iLocal_1095 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1261.7815f, -2022.6979f, 3.1098f, 5.1381f, 0f, 147.5967f, 33.6646f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1096))
			{
				iLocal_1096 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1266.98f, -2046.6f, 4.84f, -5.35f, 0f, 10.12f, 25.11f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1097))
			{
				iLocal_1097 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1266.49f, -2046.57f, 4.84f, -5.35f, 0f, 12.21f, 25.11f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1099))
			{
				iLocal_1099 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1265.701f, -2041.5682f, 4.6619f, -5.0125f, 0f, 50.3428f, 40.0349f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1100))
			{
				iLocal_1100 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1266.1606f, -2041.1896f, 4.6097f, -5.0125f, 0f, 50.3428f, 40.0349f, false, 2);
			}
			Local_1101 = { -1300f, -2059.4f, 12.3f };
			Local_1103 = { -16.4f, 0f, -52.8f };
			Local_1102 = { -1287.3f, -2066.5f, 10.7f };
			Local_1104 = { -10f, 0f, -15.2f };
			Local_1105 = { -1277.9f, -2047.9f, 4.3f };
			Local_1107 = { -2.3f, 0f, -56.3f };
			Local_1106 = { -1276.8f, -2046.7f, 4.3f };
			Local_1108 = { -2.3f, 0f, -56.3f };
			if (!CAM::DOES_CAM_EXIST(iLocal_1098))
			{
				iLocal_1098 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1101, Local_1103, 50f, false, 2);
			}
			break;
		case 2:
			if (!CAM::DOES_CAM_EXIST(iLocal_1092))
			{
				iLocal_1092 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1589.0675f, 3834.8213f, 54.2202f, 5.3341f, -0.0003f, 71.4501f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1093))
			{
				iLocal_1093 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1590.1229f, 3820.2156f, 34.9406f, 5.1632f, 0f, 36.9737f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1094))
			{
				iLocal_1094 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1566.3325f, 3823.0542f, 32.711f, -1.062f, 0f, -63.9708f, 32.5918f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1095))
			{
				iLocal_1095 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1567.128f, 3823.4412f, 32.6946f, -1.062f, 0f, -63.9708f, 32.5918f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1096))
			{
				iLocal_1096 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1585.4115f, 3832.3213f, 33.276f, 6.1917f, 0f, -152.8082f, 28.6127f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1097))
			{
				iLocal_1097 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1585.7034f, 3831.7537f, 33.346f, 6.7344f, 0f, -152.8082f, 28.6127f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1099))
			{
				iLocal_1099 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1589.5148f, 3827.8237f, 34.0188f, -5.4725f, 0f, 51.0998f, 40.0333f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1100))
			{
				iLocal_1100 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1588.8525f, 3828.3591f, 33.9373f, -5.4725f, 0f, 51.0998f, 40.0333f, false, 2);
			}
			break;
	}
}

void func_1022(var uParam0)//Position - 0x92987
{
	char* sVar0;
	if (!__LIB_1__::func_13(&iLocal_1116))
	{
		__LIB_1__::func_31(&iLocal_1116);
	}
	if (!__LIB_1__::func_13(&iLocal_1119))
	{
		__LIB_1__::func_31(&iLocal_1119);
	}
	func_561(uParam0, 4f, 6f);
	if (__LIB_15__::func_251(&iLocal_1116, fLocal_1110))
	{
		iLocal_1112 = uParam0->f_1735[MISC::GET_RANDOM_INT_IN_RANGE(1, 8) /*206*/].f_8;
		if ((iLocal_1109 % 2) == 0)
		{
			if (__LIB_0__::func_680())
			{
				sVar0 = "A_M_Y_TRIATHLON_01_MINI_01";
			}
			else
			{
				sVar0 = "A_M_Y_TRIATHLON_01_MINI_02";
			}
		}
		else if (__LIB_0__::func_680())
		{
			sVar0 = "A_M_Y_TRIATHLON_01_MINI_03";
		}
		else
		{
			sVar0 = "A_M_Y_TRIATHLON_01_MINI_04";
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1112) && !PED::IS_PED_INJURED(iLocal_1112))
		{
			iLocal_1109++;
			fLocal_1110 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 10f);
			__LIB_0__::func_709(iLocal_1112, "TRIATHLON_WARMUP", sVar0, 11);
			__LIB_1__::func_31(&iLocal_1116);
		}
	}
}

void func_1024(int iParam0, bool bParam1, int iParam2)//Position - 0x92A78
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	__LIB_0__::func_366(0);
	__LIB_1__::func_373(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	__LIB_12__::func_849(23, 1);
}

void func_1026(var uParam0)//Position - 0x92AEB
{
	func_1042(uParam0);
	func_1041(uParam0);
	func_1040(uParam0);
	func_1039();
	func_1038(uParam0);
	func_1037(uParam0);
	func_1028(uParam0);
	func_1027(uParam0);
}

void func_1027(var uParam0)//Position - 0x92B21
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			func_545(&(uParam0->f_1735[iVar0 /*206*/]), 8);
		}
		iVar0++;
	}
}

void func_1028(var uParam0)//Position - 0x92B53
{
	func_1033(uParam0);
	func_1032();
	func_1029(uParam0);
}

void func_1029(var uParam0)//Position - 0x92B6B
{
	func_1031(uParam0);
	func_1030(uParam0);
}

void func_1030(var uParam0)//Position - 0x92B7F
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9, false))
	{
		Local_416.f_6 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_1735[0 /*206*/].f_9);
	}
	else
	{
		Local_416.f_6 = 18.33f;
	}
}

void func_1031(var uParam0)//Position - 0x92BBA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		uLocal_414[iVar0] = uParam0->f_1735[iVar0 /*206*/].f_190;
		uLocal_415[iVar0] = uParam0->f_1735[iVar0 /*206*/].f_191;
		iVar0++;
	}
}

void func_1032()//Position - 0x92BFB
{
	Local_416.f_0 = 1.2f;
	Local_416.f_1 = 2.8f;
	Local_416.f_2 = 0.5f;
	Local_416.f_3 = 2.8f;
	Local_416.f_4 = 9.5f;
	Local_416.f_5 = 28f;
}

void func_1033(var uParam0)//Position - 0x92C3D
{
	func_1036(uParam0);
	func_1035(uParam0);
	func_1034(uParam0);
}

void func_1034(var uParam0)//Position - 0x92C57
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			switch (iVar0)
			{
				case 0:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 0f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 0f;
					break;
				case 1:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				case 2:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 2.7f;
					break;
				case 3:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				case 4:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2.5f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				case 5:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2.2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 2.7f;
					break;
				case 6:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				case 7:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				default:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				}
		}
		iVar0++;
	}
}

void func_1035(var uParam0)//Position - 0x92DC0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		uParam0->f_1735[iVar0 /*206*/].f_194 = 18.32f;
		uParam0->f_1735[iVar0 /*206*/].f_195 = 18.32f;
		iVar0++;
	}
}

void func_1036(var uParam0)//Position - 0x92DFD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			switch (iVar0)
			{
				case 0:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 0f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 0f;
					break;
				case 1:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.2f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.3f;
					break;
				case 2:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.3f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.2f;
					break;
				case 3:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.5f;
					break;
				case 4:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 2.5f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 3f;
					break;
				case 5:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 3f;
					break;
				case 6:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.1f;
					break;
				case 7:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 2.3f;
					break;
				default:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.3f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.5f;
					break;
				}
		}
		iVar0++;
	}
}

void func_1037(var uParam0)//Position - 0x92F8E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			iLocal_406[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_1038(var uParam0)//Position - 0x92FB9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		uParam0->f_1735[iVar0 /*206*/].f_198 = 0;
		__LIB_1__::func_327(&(uParam0->f_1735[iVar0 /*206*/].f_199), 15f);
		iVar0++;
	}
}

void func_1039()//Position - 0x92FF6
{
	iLocal_417 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iLocal_418 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iLocal_419 = MISC::GET_RANDOM_INT_IN_RANGE(2, 5);
	iLocal_420 = 0;
	iLocal_421 = 0;
	iLocal_422 = 0;
}

void func_1040(var uParam0)//Position - 0x93025
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8, false))
		{
			if (iVar0 != 0)
			{
				PED::SET_PED_DIES_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8, false);
			}
			PED::SET_PED_DIES_INSTANTLY_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8, false);
			PED::SET_PED_MAX_TIME_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8, 600f);
		}
		iVar0++;
	}
}

void func_1041(var uParam0)//Position - 0x93090
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		switch (iLocal_313)
		{
			case 1:
				uParam0->f_1735[iVar0 /*206*/].f_205 = "Tri1_Bk_0";
				break;
			case 0:
				uParam0->f_1735[iVar0 /*206*/].f_205 = "Tri2_Bk_0";
				break;
			case 2:
				uParam0->f_1735[iVar0 /*206*/].f_205 = sLocal_408;
				if (iVar0 == 0)
				{
					uParam0->f_1735[0 /*206*/].f_205 = sLocal_412;
				}
				break;
		}
		iVar0++;
	}
}

void func_1042(var uParam0)//Position - 0x93111
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8, false))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1735[iVar0 /*206*/].f_8, true);
		}
		iVar0++;
	}
}

void func_1043(var uParam0, int iParam1)//Position - 0x93152
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	if (uParam0->f_12 < iParam1)
	{
		iParam1 = uParam0->f_12;
	}
	iVar0 = (uParam0->f_12 / iParam1);
	bVar1 = false;
	fVar5 = -2f;
	fVar6 = 7f;
	if (iLocal_313 == 1)
	{
		fVar5 = -4f;
		fVar6 = 8f;
	}
	else if (iLocal_313 == 0)
	{
		fVar5 = -2.5f;
		fVar6 = 7f;
	}
	else if (iLocal_313 == 2)
	{
		fVar5 = -4f;
		fVar6 = 8f;
	}
	fVar7 = ((fVar5 * IntToFloat((iVar0 - 1))) / 2f);
	iVar2 = 0;
	while (iVar2 < uParam0->f_11)
	{
		if (uParam0->f_26[iVar2 /*14*/].f_11 == 6)
		{
			Var12 = { uParam0->f_26[iVar2 + 1 /*14*/].f_3 - uParam0->f_26[iVar2 /*14*/].f_3 };
			fVar13 = MISC::GET_HEADING_FROM_VECTOR_2D(Var12.f_0, Var12.f_1);
			Var9 = { uParam0->f_26[iVar2 /*14*/].f_3 };
			if (iLocal_313 == 1)
			{
				Var10 = { fVar5, -3f, 0f };
			}
			else if (iLocal_313 == 0)
			{
				Var10 = { fVar5, -3f, 0f };
			}
			else if (iLocal_313 == 2)
			{
				Var10 = { fVar5, -3f, 0f };
			}
			Var11 = { 0f, fVar6, 0f };
			iVar4 = 0;
			iVar3 = 0;
			while (iVar3 < uParam0->f_12)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar3 /*206*/].f_9))
				{
					if (bVar1)
					{
						iVar14 = (iVar3 - iVar0);
						Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iVar14 /*206*/].f_9, Var11) };
						bVar1 = false;
						iVar4 = 0;
					}
					if (iVar4 > 0)
					{
						Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[(iVar3 - 1) /*206*/].f_9, Var10) };
					}
					else if (iVar3 > iVar4)
					{
						Var8 = { Var9 };
					}
					else
					{
						Var8 = { __LIB_1__::func_657(Var9, fVar13, fVar7, 0f, 0f) };
					}
					Var8.f_2 = uParam0->f_26[iVar2 /*14*/].f_3.f_2;
					iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
					if (iVar16 > 1 && iVar16 < 33)
					{
						iVar15 = joaat("tribike");
					}
					else if (iVar16 > 33 && iVar16 < 66)
					{
						iVar15 = joaat("tribike2");
					}
					else
					{
						iVar15 = joaat("tribike3");
					}
					uParam0->f_1735[iVar3 /*206*/].f_9 = VEHICLE::CREATE_VEHICLE(iVar15, Var8, fVar13, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_1735[iVar3 /*206*/].f_9, 5f);
					iVar4++;
					if ((iVar3 + 1 % iVar0) == 0)
					{
						bVar1 = true;
					}
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < uParam0->f_12)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar3 /*206*/].f_9, false))
				{
					if (iLocal_313 == 1)
					{
						Var17 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, 1f, 0f, 0f) };
						ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, Var17, true, false, false, true);
					}
					else if (iLocal_313 == 0)
					{
					}
					else if (iLocal_313 == 2)
					{
						Var17 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, 3.6f, 0f, 0f) };
						ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, Var17, true, false, false, true);
					}
				}
				iVar3++;
			}
			return;
		}
		iVar2++;
	}
}

int func_1044(var uParam0)//Position - 0x9344A
{
	switch (uParam0->f_24)
	{
		case 0:
			__LIB_0__::func_671(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", false);
			uParam0->f_4372 = __LIB_1__::func_6();
			switch (Local_51.f_0)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", false);
					break;
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", false);
					break;
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", false);
					break;
			}
			uParam0->f_24 = 1;
			break;
		case 1:
			func_1060(uParam0);
			__LIB_1__::func_300(&iLocal_532);
			uParam0->f_24 = 2;
			break;
		case 2:
			if (func_1055(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (__LIB_16__::func_618(&iLocal_532))
					{
						switch (Local_51.f_0)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
								{
									uParam0->f_24 = 3;
								}
								break;
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_24 = 3;
								}
								break;
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon"))
								{
									uParam0->f_24 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_1049(uParam0);
			func_1045(uParam0);
			uParam0->f_24 = 4;
			break;
		case 4:
			return 0;
			break;
		case 5:
			return 0;
			break;
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_1045(var uParam0)//Position - 0x935A5
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!func_1046(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1046(var uParam0, int iParam1)//Position - 0x935D6
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_1047(&(uParam0->f_1735[iParam1 /*206*/]), 0.5f);
}

int func_1047(var uParam0, float fParam1)//Position - 0x93605
{
	if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
	{
		if (!func_1048(&(uParam0->f_10), uParam0->f_8, fParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_1048(int* iParam0, int iParam1, float fParam2)//Position - 0x9362F
{
	__LIB_13__::func_808(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		return 0;
	}
	*iParam0 = HUD::ADD_BLIP_FOR_ENTITY(iParam1);
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 0;
	}
	HUD::SET_BLIP_COLOUR(*iParam0, 3);
	HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("OFF_OPP");
	HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	HUD::SET_BLIP_SCALE(*iParam0, fParam2);
	return 1;
}

int func_1049(var uParam0)//Position - 0x93685
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			if (!func_1050(uParam0, iVar0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_1050(var uParam0, int iParam1)//Position - 0x936BC
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_1051(&(uParam0->f_1735[iParam1 /*206*/]), 1);
	}
	return func_1051(&(uParam0->f_1735[iParam1 /*206*/]), 0);
}

int func_1051(var uParam0, bool bParam1)//Position - 0x93701
{
	if (!func_1054(uParam0, bParam1) || !func_1052(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1052(var uParam0)//Position - 0x93727
{
	char cVar0[16];
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_21, uParam0->f_22, -1, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_21, uParam0->f_22, uParam0->f_16, uParam0->f_19, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
		PED::SET_PED_LEG_IK_MODE(uParam0->f_8, 1);
		PED::SET_PED_STEERS_AROUND_OBJECTS(uParam0->f_8, false);
	}
	if (uParam0->f_21 <= 3)
	{
	}
	else
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, false);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		if (func_1053())
		{
			PED::SET_PED_HELMET(uParam0->f_8, true);
			PED::GIVE_PED_HELMET(uParam0->f_8, true, 4096, -1);
		}
	}
	return 1;
}

int func_1053()//Position - 0x93881
{
	if (Local_51.f_0 != 1)
	{
		return 0;
	}
	if (Local_51.f_58 == 1 || Local_51.f_58 == 4)
	{
		return 0;
	}
	return 1;
}

int func_1054(var uParam0, bool bParam1)//Position - 0x938AD
{
	int iVar0;
	struct<3> Var1;
	char cVar2[16];
	if (bParam1)
	{
		if (Local_51.f_0 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, false))
				{
					if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
					}
				}
				else
				{
					if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
					{
						ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
					}
					if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
					{
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_8, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_8, false);
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_16, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_19);
		if (Local_51.f_0 == 0)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
		}
	}
	else
	{
		if (uParam0->f_23 == 0)
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			return 0;
		}
	}
	if (Local_51.f_0 != 0)
	{
		if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) <= 10f)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) > 1.5f)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true) };
				Var1.f_2 = (Var1.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) + 1.5f));
				ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Var1, true, false, false, true);
			}
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
	if (Local_51.f_0 == 0)
	{
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, false);
	}
	MemCopy(&cVar2, {*uParam0}, 4);
	StringConCat(&cVar2, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar2);
	if (uParam0->f_21 <= 3)
	{
		Local_51.f_1 = uParam0->f_9;
		VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(uParam0->f_9, false);
	}
	return 1;
}

int func_1055(var uParam0)//Position - 0x93B2F
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!func_1056(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1056(var uParam0, int iParam1)//Position - 0x93B60
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_1057(&(uParam0->f_1735[iParam1 /*206*/]));
}

int func_1057(var uParam0)//Position - 0x93B8A
{
	if (!func_1059(uParam0) || !func_1058(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_1058(var uParam0)//Position - 0x93BAE
{
	if (uParam0->f_23 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_23);
}

bool func_1059(var uParam0)//Position - 0x93BCA
{
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

void func_1060(var uParam0)//Position - 0x93BE6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_1061(uParam0, iVar0);
		iVar0++;
	}
}

void func_1061(var uParam0, int iParam1)//Position - 0x93C0B
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_1062(&(uParam0->f_1735[iParam1 /*206*/]));
}

void func_1062(var uParam0)//Position - 0x93C34
{
	__LIB_39__::func_717(uParam0);
	func_1063(uParam0);
}

void func_1063(var uParam0)//Position - 0x93C48
{
	if (uParam0->f_23 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_23);
}

void func_1066()//Position - 0x93C8F
{
	func_1093();
	func_1080();
	func_1079();
	func_1075();
	func_1074();
	func_1073();
	func_1072();
	func_1071();
	func_1070();
	switch (iLocal_313)
	{
		case 0:
			if (!STREAMING::IS_IPL_ACTIVE("AP1_04_TriAf01"))
			{
				STREAMING::REQUEST_IPL("AP1_04_TriAf01");
			}
			if (!STREAMING::IS_IPL_ACTIVE("VB_08_TriAf01"))
			{
				STREAMING::REQUEST_IPL("VB_08_TriAf01");
			}
			break;
		case 1:
			if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
			{
				STREAMING::REQUEST_IPL("CS2_06_TriAf02");
			}
			if (!STREAMING::IS_IPL_ACTIVE("CS4_08_TriAf02"))
			{
				STREAMING::REQUEST_IPL("CS4_08_TriAf02");
			}
			break;
		case 2:
			if (!STREAMING::IS_IPL_ACTIVE("CS4_04_TriAf03"))
			{
				STREAMING::REQUEST_IPL("CS4_04_TriAf03");
			}
			if (!STREAMING::IS_IPL_ACTIVE("CH1_07_TriAf03"))
			{
				STREAMING::REQUEST_IPL("CH1_07_TriAf03");
			}
			break;
	}
	func_1067();
	iLocal_435 = 0;
}

void func_1067()//Position - 0x93D6A
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < Local_51.f_414)
	{
		__LIB_40__::func_515(iLocal_313, iVar0, &Var1, &Var2, &fVar3);
		if (!__LIB_0__::func_86(Var1))
		{
			Local_51.f_414[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Var1, Var2, fVar3, false, 7);
		}
		iVar0++;
	}
}

void func_1070()//Position - 0x94120
{
	Local_377.f_168 = 0f;
}

void func_1071()//Position - 0x9412E
{
	iLocal_352 = 0;
	iLocal_366 = 1;
	iLocal_367 = 0;
}

void func_1072()//Position - 0x94142
{
	iLocal_320 = 0;
	iLocal_1372 = 0;
}

void func_1073()//Position - 0x94152
{
	iLocal_346 = 0;
	iLocal_347 = 0;
	iLocal_348 = 0;
	iLocal_349 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
}

void func_1074()//Position - 0x94172
{
	iLocal_315 = 0;
	iLocal_316 = 0;
	iLocal_317 = 0;
}

void func_1075()//Position - 0x94186
{
	iLocal_505 = -1;
	iLocal_433 = -1;
	iLocal_326 = 0;
	func_1076();
}

void func_1076()//Position - 0x9419E
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	iVar0 = __LIB_0__::func_683();
	iVar1 = __LIB_39__::func_470(iVar0, 1, -1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar1) / 100f);
	fVar3 = __LIB_0__::func_504(1f, 2f, fVar2);
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	if (iLocal_313 != 2)
	{
		iVar4 = SYSTEM::FLOOR((30000f * fVar3));
		Local_327.f_0 = iVar4;
		Local_327.f_1 = iVar4;
	}
	else
	{
		iVar4 = SYSTEM::FLOOR((200000f * fVar3));
		Local_327.f_0 = iVar4;
		Local_327.f_1 = iVar4;
	}
	Local_327.f_2 = 9;
	Local_327.f_12 = 0;
}

void func_1079()//Position - 0x94483
{
	iLocal_323 = -1;
	iLocal_324 = 1;
	iLocal_325 = 1;
}

void func_1080()//Position - 0x94497
{
	int iVar0;
	func_750(&Local_1281);
	switch (Local_51.f_58)
	{
		case 1:
			func_1092(&Local_1281);
			break;
		case 0:
			func_1091(&Local_1281);
			break;
		case 2:
			func_1082(&Local_1281);
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_1281.f_11)
	{
		func_1081(&(Local_1281.f_26[iVar0 /*14*/]), 4);
		iVar0++;
	}
}

void func_1081(var uParam0, int iParam1)//Position - 0x94503
{
	__LIB_39__::func_780(&(uParam0->f_12), iParam1);
}

void func_1082(var uParam0)//Position - 0x94515
{
	func_750(uParam0);
	uParam0->f_11 = 121;
	uParam0->f_4394 = __LIB_40__::func_43(1576.1808f, 3820.5007f, 36.0762f, 1592.2719f, 3850.6123f, 30.1675f);
	func_1088(&(uParam0->f_26[0 /*14*/]), 1541.59f, 3865.624f, 30f, 28.5097f, 5, 1);
	func_1088(&(uParam0->f_26[1 /*14*/]), 1396.5514f, 3892.9688f, 29.7452f, 10.25f, 5, 1);
	func_1088(&(uParam0->f_26[2 /*14*/]), 1138.2101f, 3976.0464f, 29.447f, 10.25f, 5, 1);
	func_1088(&(uParam0->f_26[3 /*14*/]), 712.9704f, 4066.6953f, 29.7212f, 10.25f, 5, 1);
	func_1088(&(uParam0->f_26[4 /*14*/]), 255.5541f, 4208.643f, 29.5551f, 10.25f, 5, 1);
	func_1088(&(uParam0->f_26[5 /*14*/]), -45.4109f, 4207.424f, 29.7083f, 10.25f, 5, 1);
	func_1088(&(uParam0->f_26[6 /*14*/]), -143.3027f, 4126.3438f, 29.7861f, 10.25f, 5, 1);
	func_1088(&(uParam0->f_26[7 /*14*/]), -190.1055f, 4149.486f, 32.7154f, 8.5f, 9, 1);
	func_1088(&(uParam0->f_26[8 /*14*/]), -220.9243f, 4160.343f, 40.7059f, 30f, 6, 1);
	func_1088(&(uParam0->f_26[9 /*14*/]), -244.2599f, 4080.055f, 35.5961f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[10 /*14*/]), -154.7997f, 3654.72f, 44.726f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[11 /*14*/]), 98.6574f, 3576.4202f, 38.7147f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[12 /*14*/]), 212.3227f, 3375.498f, 37.9173f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[13 /*14*/]), 216.3569f, 3225.678f, 41.3119f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[14 /*14*/]), 206.4746f, 2951.8591f, 42.506f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[15 /*14*/]), 35.7779f, 2839.5537f, 54.3913f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[16 /*14*/]), -3.1643f, 2787.9639f, 56.814f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[17 /*14*/]), 295.0326f, 2608.4612f, 43.5912f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[18 /*14*/]), 714.5671f, 2264.617f, 49.8945f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[19 /*14*/]), 615.634f, 2182.31f, 66.0038f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[20 /*14*/]), 131.4739f, 2103.644f, 132.4106f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[21 /*14*/]), -111.6382f, 1982.5443f, 184.3954f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[22 /*14*/]), -145.5816f, 1867.7886f, 197.1513f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[23 /*14*/]), -3.6962f, 1794.0325f, 210.8517f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[24 /*14*/]), 145.9352f, 1603.5189f, 228.3462f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[25 /*14*/]), 261.1789f, 1177.0924f, 223.9848f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[26 /*14*/]), 316.6269f, 994.8642f, 209.4468f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[27 /*14*/]), 282.5819f, 812.6506f, 188.1799f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[28 /*14*/]), 282.7051f, 609.9069f, 153.5032f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[29 /*14*/]), 658.921f, 337.9867f, 109.1328f, 12.25f, 6, 1);
	func_1088(&(uParam0->f_26[30 /*14*/]), 544.7078f, 251.8709f, 102.0525f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[31 /*14*/]), 413.3574f, 280.0153f, 101.9757f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[32 /*14*/]), 354.2403f, 118.6671f, 102.0757f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[33 /*14*/]), 279.1726f, -85.8864f, 69.0589f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[34 /*14*/]), 229.4545f, -217.7475f, 52.9352f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[35 /*14*/]), 180.5973f, -351.0063f, 42.9517f, 8.25f, 6, 1);
	func_1088(&(uParam0->f_26[36 /*14*/]), 115.0886f, -574.2975f, 42.752f, 8.25f, 6, 1);
	func_1088(&(uParam0->f_26[37 /*14*/]), 234.6226f, -626.2728f, 39.6405f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[38 /*14*/]), 188.5645f, -819.7612f, 29.8054f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[39 /*14*/]), 326.0977f, -852.5045f, 28.2416f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[40 /*14*/]), 483.9158f, -850.6833f, 36.2416f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[41 /*14*/]), 937.3954f, -856.1164f, 42.4537f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[42 /*14*/]), 990.613f, -987.3599f, 40.8976f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[43 /*14*/]), 1151.518f, -963.7252f, 46.0669f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[44 /*14*/]), 1239.5042f, -1320.9729f, 34.0043f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[45 /*14*/]), 1286.5126f, -1522.0605f, 42.0656f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[46 /*14*/]), 1358.8464f, -1638.6189f, 51.555f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[47 /*14*/]), 1430.037f, -1862.811f, 70.3993f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[48 /*14*/]), 1209.7854f, -2067.1318f, 43.0864f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[49 /*14*/]), 725.4492f, -2054.462f, 28.2452f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[50 /*14*/]), 433.5614f, -1995.1503f, 22.0946f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[51 /*14*/]), 120.3836f, -1716.9128f, 28.0946f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[52 /*14*/]), -2.6023f, -1696.1846f, 28.2436f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[53 /*14*/]), -282.8844f, -1827.3167f, 25.8542f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[54 /*14*/]), -396.1287f, -1742.9431f, 18.8333f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[55 /*14*/]), -270.3039f, -1401.2354f, 30.2402f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[56 /*14*/]), -262.8402f, -1099.275f, 22.6402f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[57 /*14*/]), -208.7454f, -893.9361f, 28.2402f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[58 /*14*/]), -537.0558f, -837.1454f, 28.2761f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[59 /*14*/]), -745.466f, -847.489f, 21.3518f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[60 /*14*/]), -816.8754f, -1034.6095f, 12.2387f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[61 /*14*/]), -777.81f, -1113.4f, 9.7193f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[62 /*14*/]), -944.58f, -1210f, 4.13f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[63 /*14*/]), -1127.1897f, -914.2028f, 1.8472f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[64 /*14*/]), -1219.47f, -875.814f, 11.8722f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[65 /*14*/]), -1277.869f, -951.8594f, 8.829f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[66 /*14*/]), -1165.579f, -1335.411f, 3.7237f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[67 /*14*/]), -1235.5577f, -1378.927f, 3.0257f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[68 /*14*/]), -1302.796f, -1395.451f, 3.3884f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[69 /*14*/]), -1352.974f, -1325.808f, 3.3829f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[70 /*14*/]), -1554.6292f, -1040.7833f, 5.8866f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[71 /*14*/]), -1726.0919f, -892.3452f, 6.6396f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[72 /*14*/]), -1665.6003f, -812.0593f, 9.1065f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[73 /*14*/]), -2076.739f, -452.8402f, 10.6379f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[74 /*14*/]), -2003.075f, -392.1693f, 10.86f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[75 /*14*/]), -1725.0756f, -559.6029f, 36.4546f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[76 /*14*/]), -1531.6359f, -643.2426f, 28.0089f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[77 /*14*/]), -1280.2955f, -483.4183f, 32.2343f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[78 /*14*/]), -1035.3939f, -328.774f, 36.6021f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[79 /*14*/]), -1026.0485f, -245.2742f, 36.7316f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[80 /*14*/]), -885.9824f, -171.8009f, 36.8401f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[81 /*14*/]), -711.6476f, -80.7477f, 36.852f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[82 /*14*/]), -724.5125f, -4.8137f, 36.762f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[83 /*14*/]), -763.7054f, 216.0177f, 74.6236f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[84 /*14*/]), -1064.826f, 269.2357f, 62.8327f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[85 /*14*/]), -1247.7257f, 246.3995f, 62.9496f, 10.25f, 6, 1);
	func_1088(&(uParam0->f_26[86 /*14*/]), -1279.5624f, 279.2627f, 63.7294f, 10.25f, 10, 1);
	func_1088(&(uParam0->f_26[87 /*14*/]), -1319.0518f, 293.1328f, 63.4345f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[88 /*14*/]), -1342.3573f, 275.8015f, 61.9475f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[89 /*14*/]), -1393.17f, 215.4598f, 57.458f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[90 /*14*/]), -1435.09f, 251.6832f, 59.3337f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[91 /*14*/]), -1458.159f, 256.2099f, 60.033f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[92 /*14*/]), -1499.327f, 235.0045f, 59.492f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[93 /*14*/]), -1529.2837f, 238.8247f, 60.5239f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[94 /*14*/]), -1569.463f, 257.9413f, 57.5205f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[95 /*14*/]), -1594.8292f, 287.8361f, 57.2619f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[96 /*14*/]), -1623.7498f, 301.4466f, 57.8717f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[97 /*14*/]), -1656.5739f, 296.004f, 59.5498f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[98 /*14*/]), -1712.5131f, 270.9892f, 62.3434f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[99 /*14*/]), -1743.8162f, 252.3242f, 64.4394f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[100 /*14*/]), -1786.5674f, 216.4218f, 68.4275f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[101 /*14*/]), -1811.0396f, 181.3422f, 73.5033f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[102 /*14*/]), -1827.3184f, 144.5583f, 76.5298f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[103 /*14*/]), -1820.918f, 114.2446f, 73.833f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[104 /*14*/]), -1812.699f, 81.4093f, 70.0697f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[105 /*14*/]), -1818.634f, 59.8886f, 72.2574f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[106 /*14*/]), -1842.012f, 51.3808f, 74.7702f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[107 /*14*/]), -1872.094f, 62.4789f, 79.0515f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[108 /*14*/]), -1927.3977f, 93.0551f, 86.902f, 7.25f, 7, 1);
	func_1088(&(uParam0->f_26[109 /*14*/]), -1972.3094f, 105.4856f, 92.1224f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[110 /*14*/]), -2003.8608f, 137.0806f, 100.509f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[111 /*14*/]), -2071.4685f, 217.3437f, 118.424f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[112 /*14*/]), -2116.5837f, 314.5495f, 127.0568f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[113 /*14*/]), -2137.9062f, 384.4358f, 132.9872f, 10.25f, 7, 1);
	func_1088(&(uParam0->f_26[114 /*14*/]), -2164.005f, 501.8626f, 145.2572f, 9.25f, 7, 1);
	func_1088(&(uParam0->f_26[115 /*14*/]), -2178.569f, 536.1322f, 151.066f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[116 /*14*/]), -2208.505f, 567.5612f, 160.5232f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[117 /*14*/]), -2252.094f, 570.4734f, 167.6076f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[118 /*14*/]), -2277.36f, 546.6638f, 171.1524f, 5.25f, 7, 1);
	func_1088(&(uParam0->f_26[119 /*14*/]), -2294.691f, 507.9344f, 172.572f, 7.25f, 7, 1);
	func_1088(&(uParam0->f_26[120 /*14*/]), -2304.613f, 459.6466f, 173.3817f, 10.25f, 8, 1);
	uParam0->f_12 = 8;
	func_1087(&(uParam0->f_1735[0 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[0 /*206*/]), "Racer");
	func_1085(&(uParam0->f_1735[0 /*206*/]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	__LIB_39__::func_721(&(uParam0->f_1735[0 /*206*/]), 1587.0437f, 3829.4575f, 32.4371f, 49.4786f);
	func_1083(&(uParam0->f_1735[0 /*206*/]), 0, joaat("Player_One"), 0);
	func_1087(&(uParam0->f_1735[1 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[1 /*206*/]), "Tim");
	func_1085(&(uParam0->f_1735[1 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[1 /*206*/]), 1590.069f, 3832.858f, 32.4121f, 52.9786f);
	func_1083(&(uParam0->f_1735[1 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[2 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[2 /*206*/]), "Bill");
	func_1085(&(uParam0->f_1735[2 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[2 /*206*/]), 1593.344f, 3836.458f, 32.28f, 65.0786f);
	func_1083(&(uParam0->f_1735[2 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[3 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[3 /*206*/]), "Fred");
	func_1085(&(uParam0->f_1735[3 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[3 /*206*/]), 1591.794f, 3834.658f, 32.385f, 66.7786f);
	func_1083(&(uParam0->f_1735[3 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[4 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[4 /*206*/]), "Chad");
	func_1085(&(uParam0->f_1735[4 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[4 /*206*/]), 1585.094f, 3827.983f, 32.415f, 49.4786f);
	func_1083(&(uParam0->f_1735[4 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[5 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[5 /*206*/]), "Travis");
	func_1085(&(uParam0->f_1735[5 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[5 /*206*/]), 1582.044f, 3824.458f, 32.57f, 28.0786f);
	func_1083(&(uParam0->f_1735[5 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[6 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[6 /*206*/]), "Kevin");
	func_1085(&(uParam0->f_1735[6 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[6 /*206*/]), 1588.419f, 3831.233f, 32.375f, 49.4786f);
	func_1083(&(uParam0->f_1735[6 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[7 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[7 /*206*/]), "Ted");
	func_1085(&(uParam0->f_1735[7 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[7 /*206*/]), 1583.419f, 3826.283f, 32.525f, 49.4786f);
	func_1083(&(uParam0->f_1735[7 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
}

void func_1083(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x95859
{
	uParam0->f_21 = iParam1;
	uParam0->f_22 = iParam2;
	uParam0->f_23 = iParam3;
}

void func_1085(var uParam0, int iParam1, int iParam2)//Position - 0x9588B
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
}

void func_1087(var uParam0)//Position - 0x958AD
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_24 = 12;
}

void func_1088(var uParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x958CF
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam2;
	uParam0->f_11 = iParam3;
	if (bParam4)
	{
		func_1089(uParam0, 8);
	}
}

void func_1089(var uParam0, int iParam1)//Position - 0x958FA
{
	if (!func_407(uParam0, iParam1))
	{
		__LIB_39__::func_780(&(uParam0->f_12), iParam1);
	}
}

void func_1091(var uParam0)//Position - 0x95949
{
	func_750(uParam0);
	uParam0->f_11 = 25;
	func_1088(&(uParam0->f_26[0 /*14*/]), -1288.264f, -2018.7305f, 0.0728f, 8.5f, 5, 1);
	func_1088(&(uParam0->f_26[1 /*14*/]), -1327.798f, -1935.628f, 0.073f, 8.5f, 5, 1);
	func_1088(&(uParam0->f_26[2 /*14*/]), -1332.309f, -1827.805f, 0.073f, 8.5f, 5, 1);
	func_1088(&(uParam0->f_26[3 /*14*/]), -1301.09f, -1751.383f, 1.1172f, 8.5f, 9, 1);
	func_1088(&(uParam0->f_26[4 /*14*/]), -1264.783f, -1688.678f, 3.374f, 30f, 6, 0);
	func_1088(&(uParam0->f_26[5 /*14*/]), -1305.635f, -1630.68f, 3.44f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[6 /*14*/]), -1328.689f, -1593.931f, 3.3736f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[7 /*14*/]), -1343.499f, -1562.805f, 3.3357f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[8 /*14*/]), -1368.276f, -1515.959f, 3.3244f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[9 /*14*/]), -1400.455f, -1401.9922f, 2.5794f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[10 /*14*/]), -1376.343f, -1362.777f, 2.4835f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[11 /*14*/]), -1328.7706f, -1317.4766f, 3.7066f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[12 /*14*/]), -1360.482f, -1206.115f, 3.3541f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[13 /*14*/]), -1357.586f, -1115.614f, 3.1734f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[14 /*14*/]), -1306.959f, -1100.001f, 5.9619f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[15 /*14*/]), -1288.018f, -1187.357f, 3.8367f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[16 /*14*/]), -1223.9f, -1150.66f, 6.6276f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[17 /*14*/]), -1256.766f, -1042.904f, 7.5296f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[18 /*14*/]), -1256.984f, -902.0996f, 10.4f, 8.5f, 6, 1);
	func_1088(&(uParam0->f_26[19 /*14*/]), -1169.927f, -851.2965f, 13.2923f, 8.5f, 10, 1);
	func_1088(&(uParam0->f_26[20 /*14*/]), -1128.279f, -931.3848f, 1.5733f, 8.5f, 7, 1);
	func_1088(&(uParam0->f_26[21 /*14*/]), -1182.2938f, -963.3427f, 3.1804f, 8.5f, 7, 1);
	func_1088(&(uParam0->f_26[22 /*14*/]), -1248.371f, -986.171f, 1.9716f, 8.5f, 7, 1);
	func_1088(&(uParam0->f_26[23 /*14*/]), -1346.748f, -996.434f, 7.135f, 8.5f, 7, 1);
	func_1088(&(uParam0->f_26[24 /*14*/]), -1332.122f, -1044.812f, 6.646f, 8.5f, 8, 1);
	uParam0->f_12 = 8;
	func_1087(&(uParam0->f_1735[0 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[0 /*206*/]), "Player");
	func_1085(&(uParam0->f_1735[0 /*206*/]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	__LIB_39__::func_721(&(uParam0->f_1735[0 /*206*/]), -1268.0597f, -2040.0862f, 2.9789f, 39.946f);
	func_1083(&(uParam0->f_1735[0 /*206*/]), 0, joaat("Player_One"), 0);
	func_1087(&(uParam0->f_1735[1 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[1 /*206*/]), "Tim");
	func_1085(&(uParam0->f_1735[1 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[1 /*206*/]), -1265.329f, -2036.513f, 2.9906f, 57.5f);
	func_1083(&(uParam0->f_1735[1 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[2 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[2 /*206*/]), "Bill");
	func_1085(&(uParam0->f_1735[2 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[2 /*206*/]), -1274.84f, -2046.258f, 3.0336f, 12.7531f);
	func_1083(&(uParam0->f_1735[2 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[3 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[3 /*206*/]), "Fred");
	func_1085(&(uParam0->f_1735[3 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[3 /*206*/]), -1273.222f, -2044.887f, 3.0603f, 21.6516f);
	func_1083(&(uParam0->f_1735[3 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[4 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[4 /*206*/]), "Chad");
	func_1085(&(uParam0->f_1735[4 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[4 /*206*/]), -1264.017f, -2034.607f, 2.9803f, 62.7488f);
	func_1083(&(uParam0->f_1735[4 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[5 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[5 /*206*/]), "Travis");
	func_1085(&(uParam0->f_1735[5 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[5 /*206*/]), -1266.709f, -2038.239f, 2.9831f, 51.7012f);
	func_1083(&(uParam0->f_1735[5 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[6 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[6 /*206*/]), "Kevin");
	func_1085(&(uParam0->f_1735[6 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[6 /*206*/]), -1269.638f, -2041.677f, 3.0068f, 47.4074f);
	func_1083(&(uParam0->f_1735[6 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[7 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[7 /*206*/]), "Ted");
	func_1085(&(uParam0->f_1735[7 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[7 /*206*/]), -1271.39f, -2043.209f, 2.955f, 31.5829f);
	func_1083(&(uParam0->f_1735[7 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
}

void func_1092(var uParam0)//Position - 0x95FA6
{
	func_750(uParam0);
	uParam0->f_11 = 23;
	func_1088(&(uParam0->f_26[0 /*14*/]), 2344.3071f, 4276.4766f, 30f, 8.5f, 5, 1);
	func_1088(&(uParam0->f_26[1 /*14*/]), 2212.3203f, 4205.143f, 30.336f, 8.5f, 5, 1);
	func_1088(&(uParam0->f_26[2 /*14*/]), 2216.175f, 4032.299f, 30.124f, 8.5f, 5, 1);
	func_1088(&(uParam0->f_26[3 /*14*/]), 2168.122f, 3905.125f, 30.175f, 8.5f, 9, 1);
	func_1088(&(uParam0->f_26[4 /*14*/]), 2142.95f, 3892.535f, 32.1f, 50f, 6, 0);
	func_1088(&(uParam0->f_26[5 /*14*/]), 2043.1547f, 3834.4133f, 34.8167f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[6 /*14*/]), 1972.6597f, 3794.6755f, 31.2204f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[7 /*14*/]), 1933.564f, 3760.569f, 31.32f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[8 /*14*/]), 1946.822f, 3717.275f, 31.1175f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[9 /*14*/]), 1804.947f, 3653.608f, 33.2508f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[10 /*14*/]), 1766.28f, 3675.336f, 33.2691f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[11 /*14*/]), 1706.061f, 3661.604f, 33.9931f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[12 /*14*/]), 1663.7026f, 3708.0376f, 33.0052f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[13 /*14*/]), 1593.4935f, 3688.8545f, 33.424f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[14 /*14*/]), 1554.1658f, 3762.5283f, 33.4527f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[15 /*14*/]), 1671.3547f, 3866.2966f, 33.8281f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[16 /*14*/]), 1751.2f, 3925.286f, 33.908f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[17 /*14*/]), 1867.413f, 3948.753f, 32.088f, 12f, 6, 1);
	func_1088(&(uParam0->f_26[18 /*14*/]), 1968.206f, 3884.297f, 31.2565f, 12f, 10, 1);
	func_1088(&(uParam0->f_26[19 /*14*/]), 1882.048f, 3848.572f, 31.3166f, 6.5f, 7, 1);
	func_1088(&(uParam0->f_26[20 /*14*/]), 1857.764f, 3893.701f, 32.0166f, 6.5f, 7, 1);
	func_1088(&(uParam0->f_26[21 /*14*/]), 1773.043f, 3870.598f, 33.3167f, 6.5f, 7, 1);
	func_1088(&(uParam0->f_26[22 /*14*/]), 1758.051f, 3897.696f, 33.8378f, 8.5f, 8, 1);
	uParam0->f_12 = 8;
	func_1087(&(uParam0->f_1735[0 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[0 /*206*/]), "Player");
	func_1085(&(uParam0->f_1735[0 /*206*/]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	__LIB_39__::func_721(&(uParam0->f_1735[0 /*206*/]), 2395.433f, 4281.86f, 31.6057f, 98f);
	func_1083(&(uParam0->f_1735[0 /*206*/]), 0, joaat("Player_One"), 0);
	func_1087(&(uParam0->f_1735[1 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[1 /*206*/]), "Tim");
	func_1085(&(uParam0->f_1735[1 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[1 /*206*/]), 2397.083f, 4276.635f, 31.5807f, 85f);
	func_1083(&(uParam0->f_1735[1 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[2 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[2 /*206*/]), "Bill");
	func_1085(&(uParam0->f_1735[2 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[2 /*206*/]), 2394.108f, 4287.56f, 31.2057f, 120f);
	func_1083(&(uParam0->f_1735[2 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[3 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[3 /*206*/]), "Fred");
	func_1085(&(uParam0->f_1735[3 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[3 /*206*/]), 2397.683f, 4274.685f, 31.6057f, 75f);
	func_1083(&(uParam0->f_1735[3 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[4 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[4 /*206*/]), "Chad");
	func_1085(&(uParam0->f_1735[4 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[4 /*206*/]), 2394.933f, 4283.81f, 31.5307f, 98f);
	func_1083(&(uParam0->f_1735[4 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[5 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[5 /*206*/]), "Travis");
	func_1085(&(uParam0->f_1735[5 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[5 /*206*/]), 2396.683f, 4278.51f, 31.5807f, 98f);
	func_1083(&(uParam0->f_1735[5 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[6 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[6 /*206*/]), "Kevin");
	func_1085(&(uParam0->f_1735[6 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[6 /*206*/]), 2396.108f, 4279.91f, 31.6307f, 98f);
	func_1083(&(uParam0->f_1735[6 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
	func_1087(&(uParam0->f_1735[7 /*206*/]));
	__LIB_39__::func_722(&(uParam0->f_1735[7 /*206*/]), "Ted");
	func_1085(&(uParam0->f_1735[7 /*206*/]), 0, 0);
	__LIB_39__::func_721(&(uParam0->f_1735[7 /*206*/]), 2394.433f, 4285.635f, 31.2807f, 98f);
	func_1083(&(uParam0->f_1735[7 /*206*/]), 4, joaat("A_M_Y_RoadCyc_01"), 0);
}

void func_1093()//Position - 0x965BF
{
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iLocal_322 = 0;
}

void func_1095()//Position - 0x965F1
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 271, true);
}

int func_1096(struct<8> Param0, var uParam1, var uParam2)//Position - 0x9668E
{
	struct<3> Var0;
	struct<3> Var1;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	switch (Local_1020.f_5)
	{
		case 0:
			func_357(PLAYER::PLAYER_PED_ID(), 357, 1);
			MISC::SET_MISSION_FLAG(true);
			__LIB_0__::func_130();
			AUDIO::START_AUDIO_SCENE("TRI_START_SCENE");
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_M_Y_RoadCyc_01"), true);
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_SharkTiger"), true);
			Local_51.f_0 = 2;
			Local_51.f_1 = 0;
			Local_51.f_2 = 5;
			Local_51.f_7 = 0;
			Local_51.f_8 = joaat("A_M_Y_RoadCyc_01");
			Local_51.f_9 = 0;
			StringCopy(&(Local_51.f_10), "X:/gta5/titleupdate/dev_ng/common/data/script/xml/", 64);
			StringCopy(&(Local_51.f_26), "X:/gta5/script/dev/singleplayer/scripts/Minigames/", 64);
			StringCopy(&(Local_51.f_42), "SP_Races/", 16);
			StringCopy(&(Local_51.f_46), "Triathlon/", 32);
			StringCopy(&(Local_51.f_54), "Races/", 16);
			Local_51.f_218 = Param0.f_4;
			Local_51.f_221 = Param0.f_5;
			Local_51.f_219 = Param0.f_6;
			Local_51.f_220 = Param0.f_7;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_51.f_221, true, true);
			StringCopy(&(Local_51.f_69[1 /*8*/]), "TRI_BASIC_1", 32);
			StringCopy(&(Local_51.f_69[0 /*8*/]), "TRI_BASIC_2", 32);
			StringCopy(&(Local_51.f_69[2 /*8*/]), "TRI_BASIC_3", 32);
			Local_1020.f_0 = -1;
			Local_51.f_3 = { Param0.f_1 };
			Local_51.f_6 = 97f;
			Local_1363 = { Param0.f_1 };
			Local_51.f_58 = Param0.f_0;
			iLocal_313 = Param0.f_0;
			func_1131();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
			func_1125();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_LOD_MULTIPLIER(PLAYER::PLAYER_PED_ID(), 2f);
			}
			Local_1020.f_5 = 1;
			break;
		case 1:
			if (iLocal_313 == 1)
			{
				Var0 = { 2431.6714f, 4281.272f, 37.1329f };
				Var1 = { -10.769f, 0f, -51.5263f };
			}
			else if (iLocal_313 == 0)
			{
				Var0 = { -1233.3401f, -2053.1907f, 14.859f };
				Var1 = { -23.6826f, 0f, -58.0414f };
			}
			else if (iLocal_313 == 2)
			{
				Var0 = { 1594.5328f, 3807.8044f, 35.0907f };
				Var1 = { -7.4446f, 0f, -84.6022f };
			}
			func_1125();
			if (STREAMING::HAS_ANIM_DICT_LOADED("mini@triathlonintro") && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_RoadCyc_01")))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_51.f_220, true, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_51.f_220, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				if (func_1124(uParam1, Var0, Var1))
				{
					func_418();
					func_1116();
					uParam2->f_4385 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1280.2456f, -2005.1273f, -3.6539f, 5f, joaat("prop_dock_bouy_1"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_4385))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam2->f_4385, false, false);
						ENTITY::SET_ENTITY_COLLISION(uParam2->f_4385, false, false);
					}
					uParam2->f_4386 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1339.0514f, -1975.6548f, -8.6079f, 20f, joaat("prop_dock_bouy_2"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_4386))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam2->f_4386, false, false);
						ENTITY::SET_ENTITY_COLLISION(uParam2->f_4386, false, false);
					}
					if (Local_51.f_58 == 1)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1_Start", false);
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1", true);
						TASK::SET_EXCLUSIVE_SCENARIO_GROUP("Triathlon_1");
						sLocal_413 = "Triathlon_1";
					}
					else if (Local_51.f_58 == 0)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2_Start", false);
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2", true);
						TASK::SET_EXCLUSIVE_SCENARIO_GROUP("Triathlon_2");
						sLocal_413 = "Triathlon_2";
					}
					else if (Local_51.f_58 == 2)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3_Start", false);
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3", true);
						TASK::SET_EXCLUSIVE_SCENARIO_GROUP("Triathlon_3");
						sLocal_413 = "Triathlon_3";
					}
					Local_1020.f_5 = 2;
				}
			}
			break;
		case 2:
			func_1113(uParam2);
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1363) > 1000f)
			{
				STREAMING::LOAD_SCENE(Local_1363);
			}
			Local_1020.f_5 = 3;
			break;
		case 3:
			if (func_1104() && func_1102(uParam2))
			{
				Local_1020.f_5 = 4;
			}
			break;
		case 4:
			__LIB_0__::func_467(Local_51.f_58);
			func_1100(Local_51.f_58, &Local_1281);
			__LIB_1__::func_31(&(Local_1020.f_2));
			func_628(iLocal_313, 1);
			func_1097(&iLocal_1370);
			Local_1020.f_5 = 5;
			break;
		case 5:
			if (__LIB_15__::func_251(&(Local_1020.f_2), 0.5f))
			{
				Local_1020.f_5 = 6;
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			Local_1020.f_5 = 7;
			__LIB_1__::func_31(&(Local_1020.f_2));
			break;
		case 7:
			if (__LIB_15__::func_251(&(Local_1020.f_2), 0.5f))
			{
				__LIB_1__::func_12(&(Local_1020.f_2));
				Local_1020.f_5 = 10;
			}
			break;
		case 10:
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (Local_51.f_58 == 1)
			{
				PED::SET_PED_NON_CREATION_AREA(2366.7698f, 4255.2466f, 30.3808f, 2426.4705f, 4332.712f, 35.244f);
			}
			else if (Local_51.f_58 == 0)
			{
				PED::SET_PED_NON_CREATION_AREA(-1289.1494f, -2066.1929f, 6.1378f, -1269.3679f, -2017.1382f, 0.8296f);
			}
			else if (Local_51.f_58 == 2)
			{
				PED::SET_PED_NON_CREATION_AREA(1564.825f, 3830.0955f, 31.071f, 1605.5154f, 3832.3665f, 32.9927f);
			}
			return 0;
			break;
	}
	return 1;
}

void func_1097(int iParam0)//Position - 0x96BAD
{
	func_1099();
	func_1098();
	func_626(iParam0);
}

void func_1098()//Position - 0x96BC3
{
	switch (iLocal_313)
	{
		case 1:
			if (!CAM::DOES_CAM_EXIST(iLocal_361))
			{
				iLocal_361 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1764.244f, 3888.2188f, 80.1004f, 6.3875f, 0f, 46.1461f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_362))
			{
				iLocal_362 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1764.244f, 3888.2188f, 80.1004f, 6.3875f, 0f, -16.5562f, 50f, false, 2);
			}
			break;
		case 0:
			if (!CAM::DOES_CAM_EXIST(iLocal_361))
			{
				iLocal_361 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1334.5372f, -1034.4276f, 37.556f, 8.4473f, 0f, 99.2059f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_362))
			{
				iLocal_362 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1334.5372f, -1034.4276f, 37.556f, 8.4473f, 0f, 49.8388f, 50f, false, 2);
			}
			break;
		case 2:
			if (!CAM::DOES_CAM_EXIST(iLocal_361))
			{
				iLocal_361 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2301.418f, 495.3127f, 224.8627f, 6.532f, 0f, -132.4508f, 50f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_362))
			{
				iLocal_362 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2301.418f, 495.3127f, 224.8627f, 6.532f, 0f, 169.8684f, 50f, false, 2);
			}
			break;
	}
}

void func_1099()//Position - 0x96D3E
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -15f, 15f) };
	Var1 = { 0f, 0f, 0f };
	if (!CAM::DOES_CAM_EXIST(iLocal_360))
	{
		iLocal_360 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, Var1, 50f, false, 2);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), -2.4646f, 2.427f, 1.3f, true);
		CAM::POINT_CAM_AT_ENTITY(iLocal_360, PLAYER::PLAYER_PED_ID(), 0.0606f, -0.04f, 0.0745f, false);
		CAM::SET_CAM_FOV(iLocal_360, 50f);
	}
}

void func_1100(int iParam0, var uParam1)//Position - 0x96DCC
{
	if (iParam0 == 1)
	{
		uParam1->f_4377[0] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 2347.9053f, 4268.9404f, 30.5569f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[0], true);
		uParam1->f_4377[1] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 2221.4478f, 4203.96f, 30.3139f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[1], true);
		uParam1->f_4377[2] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 2208.5334f, 4032.47f, 30.1761f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[2], true);
	}
	else if (iParam0 == 0)
	{
		uParam1->f_4377[0] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -1282.6902f, -2014.7354f, 0.2113f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[0], true);
		uParam1->f_4377[1] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -1321.108f, -1934.6177f, 0.3026f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[1], true);
		uParam1->f_4377[2] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -1323.6047f, -1829.1255f, 0.397f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[2], true);
	}
	else if (iParam0 == 2)
	{
		uParam1->f_4377[0] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 1541.7368f, 3857.7822f, 30.1022f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[0], true);
		uParam1->f_4377[1] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 1400.9979f, 3899.6733f, 30.3399f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[1], true);
		uParam1->f_4377[2] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 1138.2854f, 3967.375f, 30.3145f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[2], true);
		uParam1->f_4377[3] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 718.037f, 4075.2139f, 30.1365f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[3], true);
		uParam1->f_4377[4] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 256.9774f, 4198.98f, 30.1401f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[4], true);
		uParam1->f_4377[5] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -39.6365f, 4202.092f, 29.9779f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[5], true);
		uParam1->f_4377[6] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -138.2176f, 4133.3237f, 30.1959f, true, true, false);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[6], true);
	}
}

int func_1102(var uParam0)//Position - 0x97064
{
	if (!func_1103(uParam0))
	{
		return 0;
	}
	switch (iLocal_313)
	{
		case 1:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri1_Bk_0"))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri1_Run"))
			{
				return 0;
			}
			return 1;
			break;
		case 0:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri2_Bk_0"))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri2_Run"))
			{
				return 0;
			}
			return 1;
			break;
		case 2:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri3_Run"))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_408))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_409))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_410))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_411))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_412))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_1103(var uParam0)//Position - 0x9714A
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	iVar1 = 1;
	iVar2 = 0;
	while (iVar2 < uParam0->f_12)
	{
		if (iVar2 != 0)
		{
			switch (iLocal_313)
			{
				case 0:
					StringCopy(&cVar0, "triathlon_ves_racer", 64);
					break;
				case 1:
					StringCopy(&cVar0, "triathlon_ala_racer", 64);
					break;
				case 2:
					StringCopy(&cVar0, "triathlon_coy_racer", 64);
					break;
			}
			StringIntConCat(&cVar0, iVar2, 64);
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
			{
				iVar1 = 0;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_1104()//Position - 0x971C3
{
	if (!func_1112())
	{
		return 0;
	}
	if (!func_1111())
	{
		return 0;
	}
	if (!func_1110())
	{
		return 0;
	}
	if (!func_1109())
	{
		return 0;
	}
	if (!func_1106())
	{
		return 0;
	}
	if (!func_1105())
	{
		return 0;
	}
	return 1;
}

int func_1105()//Position - 0x97214
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CROWD_CHEER", false, -1))
	{
		return 0;
	}
	return 1;
}

int func_1106()//Position - 0x97230
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_368))
	{
		return 0;
	}
	if (!__LIB_3__::func_67(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1109()//Position - 0x973F4
{
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TRIATHLON"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cLocal_1))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		return 0;
	}
	return 1;
}

int func_1110()//Position - 0x9742D
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		return 0;
	}
	return 1;
}

int func_1111()//Position - 0x97443
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_425)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iLocal_425[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("VEH@BIKE@COMMON@FRONT@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_SET_LOADED("random@escape_paparazzi@standing@"))
	{
		return 0;
	}
	return 1;
}

int func_1112()//Position - 0x974A6
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("tribike")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("tribike2")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("tribike3")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_dock_bouy_3")))
	{
		return 0;
	}
	return 1;
}

void func_1113(var uParam0)//Position - 0x97515
{
	func_1125();
	func_1114(uParam0);
}

void func_1114(var uParam0)//Position - 0x97527
{
	switch (iLocal_313)
	{
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING("Tri1_Bk_0");
			TASK::REQUEST_WAYPOINT_RECORDING("Tri1_Run");
			break;
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING("Tri2_Bk_0");
			TASK::REQUEST_WAYPOINT_RECORDING("Tri2_Run");
			break;
		case 2:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_408);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_409);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_410);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_411);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_412);
			TASK::REQUEST_WAYPOINT_RECORDING("Tri3_Run");
			break;
	}
	func_1115(uParam0);
}

void func_1115(var uParam0)//Position - 0x975A8
{
	char cVar0[64];
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (iVar1 != 0)
		{
			switch (iLocal_313)
			{
				case 0:
					StringCopy(&cVar0, "triathlon_ves_racer", 64);
					break;
				case 1:
					StringCopy(&cVar0, "triathlon_ala_racer", 64);
					break;
				case 2:
					StringCopy(&cVar0, "triathlon_coy_racer", 64);
					break;
			}
			StringIntConCat(&cVar0, iVar1, 64);
			TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
		}
		iVar1++;
	}
}

void func_1116()//Position - 0x97615
{
	struct<3> Var0;
	struct<3> Var1;
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(7, false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	PED::SET_CREATE_RANDOM_COPS(false);
	switch (iLocal_313)
	{
		case 1:
			MISC::CLEAR_AREA_OF_VEHICLES(2110.01f, 4268.56f, 8.53f, 460f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(1847.2754f, 3827.217f, 31.6549f, 330f, false, false, false, false, false, false, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2289.135f, 4321.77f, 40.505f, 2253.114f, 3878.23f, 18.505f, 265f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2191.21f, 3896.372f, 23.924f, 2190.456f, 3875.386f, 39.924f, 70f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2025.35f, 3831.476f, 25.926f, 2030.913f, 3821.987f, 41.926f, 280f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1932.811f, 3739.47f, 24.371f, 1950.988f, 3749.985f, 40.371f, 70f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1877.811f, 3688.361f, 25.498f, 1888.06f, 3670.032f, 41.498f, 190f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1807.241f, 3669.025f, 25.904f, 1789.286f, 3658.134f, 41.904f, 70f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1743.463f, 3674.442f, 26.263f, 1754.072f, 3656.319f, 42.263f, 110f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1703.885f, 3686.683f, 26.358f, 1685.745f, 3676.104f, 42.358f, 110f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1635.022f, 3703.902f, 26.221f, 1645.492f, 3685.698f, 42.221f, 110f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1583.338f, 3720.986f, 26.221f, 1565.558f, 3709.811f, 42.221f, 130f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1617.29f, 3786.476f, 26.221f, 1592.07f, 3818.802f, 42.221f, 190f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1715.433f, 3885.008f, 26.221f, 1696.223f, 3909.338f, 42.221f, 130f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1801.187f, 3925.098f, 26.221f, 1794.713f, 3955.414f, 42.221f, 130f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1903.961f, 3912.521f, 24.221f, 1923.415f, 3959.665f, 40.221f, 170f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1921.498f, 3874.776f, 24.221f, 1936.966f, 3847.91f, 40.221f, 110f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1891.288f, 3871.255f, 24.221f, 1861.13f, 3864.079f, 40.221f, 80f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1816.318f, 3896.067f, 25.221f, 1828.275f, 3867.466f, 41.221f, 120f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1771.863f, 3892.823f, 26.221f, 1753.74f, 3882.215f, 42.221f, 90f, false, false, true);
			func_1123(2290.914f, 4067.84f, 30.5179f, 1065353216);
			func_1123(2220.3108f, 4436.533f, 30.1107f, 1065353216);
			func_1123(2049.6865f, 4352.8394f, 30.1496f, 1065353216);
			break;
		case 0:
			__LIB_0__::func_544(25, 1, 0, 1, 0);
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1329.54f, -1783.29f, -20.99f, -1278.47f, -1666.56f, 23.43f, false, 0);
			PED::SET_PED_NON_CREATION_AREA(-1336.26f, -1786.84f, -2f, -1277.37f, -1663.03f, 9f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1347.77f, -1705.95f, -23.03f, -1247.42f, -1572.45f, 23.22f, false, 0);
			PED::SET_PED_NON_CREATION_AREA(-1347.77f, -1705.95f, -23.03f, -1247.42f, -1572.45f, 23.22f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1360.7f, -1589.52f, -3.87f, -1340.51f, -1500.11f, 6.09f, false, 0);
			PED::SET_PED_NON_CREATION_AREA(-1360.7f, -1589.52f, -3.87f, -1340.51f, -1500.11f, 6.09f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1416.93f, -1500.8f, -5.9f, -1349.71f, -1385.46f, 8.37f, false, 0);
			PED::SET_PED_NON_CREATION_AREA(-1416.93f, -1500.8f, -5.9f, -1349.71f, -1385.46f, 8.37f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1391.68f, -1409.03f, -3.95f, -1353.17f, -1300.24f, 7.6f, false, 0);
			PED::SET_PED_NON_CREATION_AREA(-1391.68f, -1409.03f, -3.95f, -1353.17f, -1300.24f, 7.6f);
			MISC::CLEAR_AREA_OF_VEHICLES(-1365.2754f, -1451.6089f, 4.3495f, 675f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1317.59f, -1763.79f, 0.92f, 6f, false, false, false, false, false, false, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1278.97f, -1932.01f, -10f, 1191.09f, -2014.33f, 22.47f, 1200f, true, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1703.19f, -2046.52f, -37.28f, -1279.62f, -1753.35f, 21.26f, 500f, true, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1275.526f, -1669.598f, -2.474f, -1280.479f, -1672.984f, 10.474f, 125f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1328.572f, -1588.628f, -2.453f, -1333.682f, -1591.772f, 10.453f, 75f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1346.266f, -1533.706f, -2.449f, -1360.745f, -1540.515f, 10.449f, 105f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1376.607f, -1433.51f, -2.034f, -1400.276f, -1444.268f, 10.034f, 125f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1368.123f, -1379.432f, -3.892f, -1390.87f, -1317.475f, 9.892f, 135f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1331.716f, -1266.083f, -2.9f, -1356.625f, -1273.536f, 10.9f, 145f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1346.508f, -1157.917f, -2.378f, -1372.508f, -1157.917f, 10.378f, 115f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1320.172f, -1107.892f, -4.977f, -1329.571f, -1090.238f, 16.977f, 65f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1312.138f, -1138.175f, -2.019f, -1292.138f, -1138.329f, 12.019f, 95f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1253.094f, -1186.27f, -1.682f, -1265.201f, -1163.26f, 13.682f, 135f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1238.61f, -1030.409f, -8.791f, -1273.366f, -1039.79f, 18.791f, 295f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1214.013f, -907.341f, -8.548f, -1246.902f, -862.017f, 18.548f, 160f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1155.81f, -891.95f, -10.801f, -1133.376f, -878.807f, 20.801f, 120f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1173.853f, -943.301f, -3.183f, -1160.572f, -965.653f, 9.183f, 130f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1286.419f, -978.159f, -4.489f, -1286.617f, -994.158f, 14.489f, 130f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1346.018f, -1046.348f, -1.711f, -1323.297f, -1033.709f, 15.711f, 140f, false, false, true);
			Var0 = { -1302.005f, -1779.373f, -2.155f };
			Var1 = { -1331.091f, -1749.161f, 2.789f };
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, false, true);
			break;
		case 2:
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 675f, false, false, false, false, false, false, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-230.567f, 4148.788f, 33.628f, -219.182f, 4144.995f, 49.628f, 145f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-242.724f, 4028.156f, 28.249f, -222.463f, 4036.729f, 44.249f, 95f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-236.16f, 3937.613f, 28.477f, -214.342f, 3934.785f, 44.477f, 125f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-218.068f, 3772.185f, 32.976f, -187.264f, 3780.85f, 48.976f, 225f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-149.866f, 3628.335f, 38.828f, -130.144f, 3653.535f, 53.828f, 225f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(7.534f, 3586.556f, 32.396f, 11.175f, 3618.348f, 48.396f, 225f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(83.41f, 3519.563f, 34.793f, 118.236f, 3516.078f, 44.793f, 205f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(161.356f, 3384.402f, 35.287f, 176.253f, 3416.074f, 45.287f, 205f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(211.2f, 3305.038f, 35.644f, 245.022f, 3296.038f, 45.644f, 205f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(201.909f, 3073.113f, 37.313f, 236.8f, 3075.87f, 47.313f, 295f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(172.832f, 2936.86f, 40.329f, 198.827f, 2913.424f, 50.329f, 155f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(24.765f, 2856.754f, 48.433f, 35.331f, 2823.387f, 62.433f, 195f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(4.779f, 2750.103f, 51.233f, 31.367f, 2798.25f, 65.233f, 235f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(145.456f, 2635.881f, 35.443f, 201.325f, 2712.716f, 59.443f, 235f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(283.407f, 2611.802f, 39.679f, 302.296f, 2618.374f, 49.679f, 75f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(353.296f, 2510.228f, 39.798f, 371.948f, 2526.875f, 49.798f, 185f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(542.405f, 2339.161f, 43.571f, 568.678f, 2381.702f, 48.571f, 425f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(705.415f, 2263.484f, 44.566f, 716.676f, 2296.623f, 56.566f, 295f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(695.232f, 2232.163f, 49.846f, 745.23f, 2232.558f, 59.846f, 105f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(613.376f, 2192.395f, 47.678f, 614.517f, 2172.428f, 87.678f, 185f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(430.02f, 2148.145f, 69.481f, 444.714f, 2121.99f, 109.481f, 195f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(219.651f, 2115.604f, 85.485f, 217.79f, 2085.662f, 149.485f, 285f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-31.857f, 2038.572f, 137.936f, -16.549f, 2012.771f, 203.936f, 295f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-42.146f, 1737.544f, 175.64f, 23.141f, 1813.29f, 241.64f, 475f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(133.18f, 1570.556f, 219.501f, 158.18f, 1570.551f, 241.501f, 175f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(172.87f, 1441.773f, 228.915f, 193.18f, 1456.351f, 250.915f, 175f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(234.385f, 1239.455f, 211.588f, 268.71f, 1246.295f, 251.588f, 355f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(286.787f, 1073.197f, 194.623f, 326.009f, 1081.046f, 234.623f, 175f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(288.456f, 909.196f, 217.008f, 323.109f, 904.281f, 189.008f, 185f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(284.596f, 762.277f, 170.424f, 299.393f, 764.733f, 198.424f, 185f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(265.143f, 676.3f, 145.153f, 309.172f, 667.003f, 185.153f, 145f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(302.641f, 577.48f, 149.325f, 313.087f, 588.245f, 159.325f, 95f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(325.258f, 523.143f, 148.179f, 340.223f, 522.12f, 158.179f, 95f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(336.271f, 456.256f, 142.987f, 349.631f, 463.076f, 152.987f, 55f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(395.685f, 422.968f, 137.985f, 398.965f, 447.752f, 147.985f, 95f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(447.861f, 372.691f, 138.028f, 501.875f, 383.059f, 138.028f, 115f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(592.66f, 322.263f, 117.328f, 583.714f, 376.53f, 135.328f, 165f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(597.491f, 315.62f, 98.659f, 629.928f, 265.144f, 114.659f, 165f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(502.54f, 276.64f, 98.108f, 496.197f, 259.794f, 108.108f, 195f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(375.999f, 212.344f, 93.103f, 398.405f, 203.744f, 113.103f, 205f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(314.004f, 42.642f, 67.914f, 336.455f, 34.157f, 109.914f, 295f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(239.999f, -144.154f, 42.44f, 272.028f, -155.56f, 84.44f, 205f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(189.844f, -282.718f, 26.418f, 221.345f, -295.514f, 68.418f, 205f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(119.513f, -476.605f, 37.141f, 151.697f, -487.569f, 49.141f, 265f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(177.935f, -617.074f, 37.079f, 189.995f, -585.285f, 49.079f, 165f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(187.797f, -721.593f, 25.341f, 219.79f, -733.1f, 43.341f, 245f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(223.003f, -856.936f, 21.201f, 234.487f, -824.934f, 39.201f, 165f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(650.029f, -877.933f, 23.751f, 650.731f, -823.937f, 47.751f, 690f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(944.824f, -934.767f, 32.724f, 995.498f, -916.107f, 52.724f, 180f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1070.454f, -981.505f, 38.962f, 1063.625f, -958.497f, 52.962f, 230f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1145.897f, -1098.933f, 20.561f, 1227.198f, -1077.81f, 80.561f, 1000f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1145.897f, -1098.933f, 20.561f, 1227.198f, -1077.81f, 80.561f, 1000f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1324.901f, -1776.794f, 45.925f, 1456.276f, -1750.4f, 85.925f, 460f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1221.789f, -2006.202f, 24.364f, 1262.837f, -2101.758f, 64.364f, 460f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(806.686f, -2015.736f, 9.354f, 795.051f, -2119.083f, 49.354f, 790f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(323.806f, -1832.678f, 6.795f, 257.289f, -1912.625f, 46.795f, 710f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-239.763f, -1729.849f, 9.875f, -164.735f, -1864.336f, 49.875f, 530f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-258.619f, -1518.138f, 4.395f, -356.781f, -1483.784f, 44.395f, 690f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-160.67f, -1123.358f, 3.124f, -374.574f, -1116.961f, 43.124f, 500f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-525.382f, -796.191f, 18.881f, -535.791f, -879.543f, 40.881f, 630f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-799.832f, -913.989f, 7.844f, -740.698f, -938.465f, 29.844f, 630f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-812.214f, -1072.057f, 0.973f, -782.054f, -1056.361f, 22.973f, 150f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-870.227f, -1154.799f, -6.444f, -852.817f, -1184.003f, 16.444f, 230f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1044.686f, -1018.576f, -18.191f, -1074.69f, -1036.597f, 22.191f, 475f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1239.659f, -867.453f, -5.612f, -1220.347f, -895.436f, 29.612f, 150f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1252.833f, -1131.194f, 1.989f, -1202.302f, -1112.154f, 13.989f, 490f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1240.484f, -1350.328f, -2.141f, -1216.541f, -1398.73f, 10.141f, 190f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1399.979f, -1146.362f, -4.538f, -1534.428f, -1221.458f, 8.538f, 560f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1600.241f, -937.126f, 2.651f, -1724.148f, -845.677f, 14.538f, 150f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1873.631f, -615.433f, 5.385f, -1889.23f, -633.673f, 17.385f, 650f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2025.051f, -434.34f, 5.345f, -2066.297f, -399.486f, 17.345f, 120f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1912.926f, -482.324f, 1.968f, -1883.548f, -437.015f, 43.968f, 430f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1637.753f, -610.882f, 25.238f, -1619.315f, -587.217f, 41.238f, 255f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1387.339f, -584.663f, 22.275f, -1404.017f, -559.726f, 38.275f, 315f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1140.504f, -438.163f, 28.024f, -1166.388f, -384.033f, 44.024f, 355f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1012.658f, -293.632f, 29.915f, -1048.317f, -311.756f, 45.915f, 120f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-855.566f, -172.588f, 29.989f, -869.863f, -146.214f, 45.989f, 480f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-689.471f, -37.67f, 29.809f, -715.916f, -51.835f, 45.809f, 100f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-721.977f, 106.795f, 26.744f, -771.364f, 98.991f, 84.744f, 270f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1018.792f, 295.542f, 54.8f, -1024.618f, 185.696f, 76.8f, 490f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1330.464f, 309.088f, 51.596f, -1305.142f, 212.347f, 73.596f, 160f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1407.836f, 246.958f, 48.861f, -1432.525f, 229.915f, 70.861f, 140f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1477.162f, 261.072f, 56.639f, -1462.686f, 247.272f, 66.639f, 90f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1552.774f, 281.729f, 50.794f, -1575.409f, 248.749f, 66.794f, 190f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1774.927f, 321.237f, 48.227f, -1705.271f, 188.391f, 82.227f, 260f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1827.498f, 88.766f, 63.301f, -1802.62f, 120.088f, 85.301f, 90f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2025.797f, 173.784f, 57.746f, -1857.736f, 16.762f, 121.746f, 140f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2159.272f, 628.243f, 89.682f, -2082.667f, 124.029f, 177.682f, 130f, false, false, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2361.799f, 453.168f, 128.538f, -2190.908f, 509.703f, 216.538f, 200f, false, false, true);
			break;
	}
}

void func_1123(struct<3> Param0, float fParam1)//Position - 0x9D200
{
	struct<3> Var0;
	Var0 = { 3f, 3f, 3f };
	PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0 * Vector(fParam1, fParam1, fParam1), Param0 + Var0 * Vector(fParam1, fParam1, fParam1), false, true, true, true);
}

int func_1124(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9D232
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_51.f_218, true, true);
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_51.f_218, false) };
		Var1 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_51.f_218) };
		iLocal_519 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		*uParam0 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
		CAM::SET_CAM_ACTIVE(*uParam0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(*uParam0, iLocal_519, "_table_sign_in_cam", "mini@triathlonintro");
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_519, "mini@triathlonintro", "_table_sign_in_michael", 1000f, -1000f, 0, 0, 1000f, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), false, true, true, false);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		}
		if (!PED::IS_PED_INJURED(Local_51.f_221))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_51.f_221);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_51.f_221, iLocal_519, "mini@triathlonintro", "_table_sign_in_ped", 1000f, -1000f, 0, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_51.f_221, false, false);
		}
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_51.f_219, iLocal_519, "_table_sign_in_clipboard", "mini@triathlonintro", 1f, 8f, 0, 1000f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_51.f_219);
		HUD::DISPLAY_RADAR(false);
		if (__LIB_0__::func_683() == 0)
		{
			StringCopy(&Var2, "MGTR_introM", 24);
		}
		else if (__LIB_0__::func_683() == 1)
		{
			StringCopy(&Var2, "MGTR_introF", 24);
		}
		else if (__LIB_0__::func_683() == 2)
		{
			StringCopy(&Var2, "MGTR_introT", 24);
		}
		fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3000f);
		if (fVar3 < 1000f)
		{
			StringConCat(&Var2, "2", 24);
		}
		else if (fVar3 < 2000f)
		{
			StringConCat(&Var2, "3", 24);
		}
		__LIB_0__::func_222(&Local_377, 3, Local_51.f_221, "TRIRACER1", 0, 1);
		__LIB_0__::func_787(&Local_377, "mgtraud", &Var2, 9, 0, 0, 0);
		return 1;
	}
	else if (!CAM::IS_CAM_INTERPOLATING(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_1125()//Position - 0x9D42B
{
	func_1130();
	func_1129();
	func_1128();
	func_1127();
	func_1126();
}

void func_1126()//Position - 0x9D447
{
	iLocal_368 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
}

void func_1127()//Position - 0x9D45B
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TRIATHLON", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cLocal_1, false);
}

void func_1128()//Position - 0x9D47E
{
	HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
}

void func_1129()//Position - 0x9D490
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_425)
	{
		STREAMING::REQUEST_ANIM_DICT(iLocal_425[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_ANIM_DICT("VEH@BIKE@COMMON@FRONT@BASE");
	STREAMING::REQUEST_ANIM_SET("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("VEH@BICYCLE@ROADFRONT@BASE");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("mini@triathlonintro");
}

void func_1130()//Position - 0x9D4E4
{
	STREAMING::REQUEST_MODEL(joaat("tribike"));
	STREAMING::REQUEST_MODEL(joaat("tribike2"));
	STREAMING::REQUEST_MODEL(joaat("tribike3"));
	STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
	STREAMING::REQUEST_MODEL(joaat("frogger"));
	STREAMING::REQUEST_MODEL(joaat("prop_dock_bouy_3"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_RoadCyc_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
}

void func_1131()//Position - 0x9D534
{
	func_941(&Local_1281);
	func_1139();
	func_1138();
	func_1137();
	func_1136();
	func_1135();
	func_1134();
	func_1133();
	func_1132();
	func_1066();
}

void func_1132()//Position - 0x9D567
{
	Local_377.f_169 = 15f;
	Local_377.f_170 = 0;
	Local_377.f_171 = 10;
	Local_377.f_172 = (Local_377.f_171 / 2);
	Local_377.f_173 = 25f;
	Local_377.f_174 = 40f;
	if (iLocal_313 == 2)
	{
		Local_377.f_173 = 60f;
		Local_377.f_174 = 120f;
	}
	if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&Local_377, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&Local_377, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (__LIB_0__::func_683() == 2)
	{
		__LIB_0__::func_222(&Local_377, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	Local_377.f_165 = "MGTRAUD";
}

void func_1133()//Position - 0x9D622
{
	switch (iLocal_313)
	{
		case 1:
			Local_407 = { 1750.35f, 3910.37f, 33.95f };
			break;
		case 0:
			Local_407 = { -1326.66f, -1054.43f, 6.34f };
			break;
		case 2:
			Local_407 = { -2306.02f, 446.45f, 173.48f };
			break;
	}
}

void func_1134()//Position - 0x9D689
{
	switch (iLocal_313)
	{
		case 1:
			iLocal_426 = 9;
			break;
		case 0:
			iLocal_426 = 11;
			break;
		case 2:
			iLocal_426 = 13;
			break;
	}
}

void func_1135()//Position - 0x9D6C3
{
	switch (iLocal_313)
	{
		case 1:
			Local_321 = { 1936f, 3931.37f, 31.49f };
			break;
		case 0:
			Local_321 = { -1229.05f, -880.58f, 11.65f };
			break;
		case 2:
			Local_321 = { -1241.35f, 231.29f, 63.51f };
			break;
	}
}

void func_1136()//Position - 0x9D72A
{
	iLocal_340 = 1;
	iLocal_341 = 5;
	iLocal_342 = 16;
	iLocal_343 = 19;
	iLocal_344 = 2;
	iLocal_345 = 3;
}

void func_1137()//Position - 0x9D74C
{
	if (iLocal_313 == 2)
	{
		sLocal_408 = "Tri3_Bk_0";
		sLocal_409 = "Tri3_Bk_1";
		sLocal_410 = "Tri3_Bk_2";
		sLocal_411 = "Tri3_Bk_3";
		sLocal_412 = "Tri3_Bk_4";
	}
}

void func_1138()//Position - 0x9D783
{
	sLocal_369 = "TRI_NEWS_00";
	sLocal_370 = "TRI_NEWS_01";
	sLocal_371 = "TRI_NEWS_02";
	sLocal_372 = "TRI_NEWS_03";
	sLocal_373 = "TRI_NEWS_04";
	sLocal_374 = "TRI_NEWS_05";
	sLocal_375 = "TRI_NEWS_06";
	sLocal_376 = "TRI_NEWS_07";
	if (iLocal_313 == 2)
	{
		sLocal_370 = "TRI_NEWS_30";
		sLocal_371 = "TRI_NEWS_31";
		sLocal_372 = "TRI_NEWS_32";
		sLocal_373 = "TRI_NEWS_33";
		sLocal_376 = "TRI_NEWS_34";
	}
}

void func_1139()//Position - 0x9D7EA
{
	iLocal_425[0] = "mini@triathlon";
	iLocal_425[1] = "mini@triathlon";
	iLocal_425[2] = "mini@triathlon";
	iLocal_425[3] = "mini@triathlon";
	sLocal_423[0] = "male_one_handed_a";
	sLocal_423[1] = "male_two_handed_a";
	sLocal_423[2] = "male_unarmed_a";
	sLocal_423[3] = "male_unarmed_b";
	sLocal_424[0] = "jog_idle_d";
	sLocal_424[1] = "jog_idle_e";
	sLocal_424[2] = "jog_idle_f";
}

void func_1141()//Position - 0x9D879
{
	if (func_324(33554432))
	{
		func_409(33554432);
	}
}

void func_1142(char[24] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9D896
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (__LIB_14__::func_848(1, cParam0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_26 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_27 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_26 = 0f;
				}
				else
				{
					fLocal_26 = (fLocal_26 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_26 = 0f;
			}
		}
		else
		{
			if (!__LIB_14__::func_848(0, cParam0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = __LIB_0__::func_683();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { __LIB_14__::func_835(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_29 = 0.14f;
				}
				else
				{
					fLocal_29 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_29)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_27.f_0, (Local_27.f_1 + fLocal_28));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					__LIB_0__::func_55();
					fLocal_26 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_55();
				fLocal_26 = 0f;
			}
		}
	}
}

void func_1161(int* iParam0, int iParam1)//Position - 0x9E7B6
{
	func_632(0);
	func_360(iParam0, iParam1);
	func_2();
}

