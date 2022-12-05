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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	var uLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	float fLocal_74[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_75[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_77[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_78[51] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_79 = 0f;
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_88[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_89[1] = { 0f };
	float fLocal_90[1] = { 0f };
	float fLocal_91[1] = { 0f };
	float fLocal_92[1] = { 0f };
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	int iLocal_114[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_117[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_118[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_119[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_120[1] = { 0 };
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	struct<3> Local_138[51];
	struct<3> Local_139[1];
	struct<3> Local_140[15];
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	struct<3> Local_150 = { 0, 0, 0 } ;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	struct<3> Local_153 = { 0, 0, 0 } ;
	char cLocal_154[64] = "";
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165[1] = { 0 };
	int iLocal_166[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170[51] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_172[1] = { 0 };
	int iLocal_173[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 8;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	struct<8> Local_194 = { 4, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_195 = 4;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 4;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 4;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 4;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 4;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 4;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	struct<12> Local_234 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_235 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<14> Local_238 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	struct<5> Local_245[6];
	struct<12> Local_246[5];
	struct<4> Local_247[7];
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int* iLocal_271 = NULL;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279[2] = { 0, 0 };
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[3] = { 0, 0, 0 };
	int iLocal_282[2] = { 0, 0 };
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_297[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_298[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_299[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_300[1] = { 0 };
	int iLocal_301[1] = { 0 };
	int iLocal_302[2] = { 0, 0 };
	int iLocal_303[4] = { 0, 0, 0, 0 };
	int iLocal_304 = 0;
	bool bLocal_305 = 0;
	int iLocal_306 = 0;
	bool bLocal_307 = 0;
	int iLocal_308 = 0;
	bool bLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	bool bLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	bool bLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	bool bLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	bool bLocal_324 = 0;
	bool bLocal_325 = 0;
	bool bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	bool bLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	bool bLocal_345 = 0;
	bool bLocal_346 = 0;
	bool bLocal_347 = 0;
	int iLocal_348 = 0;
	bool bLocal_349 = 0;
	int iLocal_350 = 0;
	bool bLocal_351 = 0;
	bool bLocal_352 = 0;
	bool bLocal_353 = 0;
	bool bLocal_354 = 0;
	bool bLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_362[3] = { 0, 0, 0 };
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	bool bLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	bool bLocal_370 = 0;
	bool bLocal_371 = 0;
	bool bLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	bool bLocal_376 = 0;
	bool bLocal_377 = 0;
	bool bLocal_378 = 0;
	bool bLocal_379 = 0;
	bool bLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	bool bLocal_385 = 0;
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	bool bLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = 0;
	bool bLocal_395 = 0;
	bool bLocal_396 = 0;
	bool bLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	bool bLocal_401 = 0;
	bool bLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	bool bLocal_408 = 0;
	bool bLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	bool bLocal_412 = 0;
	bool bLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	bool bLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	bool bLocal_425 = 0;
	bool bLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	bool bLocal_439 = 0;
	bool bLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	bool bLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	bool bLocal_452 = 0;
	int iLocal_453 = 0;
	bool bLocal_454 = 0;
	int iLocal_455 = 0;
	bool bLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	bool bLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	bool bLocal_462 = 0;
	int iLocal_463 = 0;
	bool bLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	bool bLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	bool bLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	bool bLocal_477 = 0;
	bool bLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	bool bLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	bool bLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	bool bLocal_492 = 0;
	int iLocal_493 = 0;
	bool bLocal_494 = 0;
	bool bLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	bool bLocal_500 = 0;
	bool bLocal_501 = 0;
	bool bLocal_502 = 0;
	bool bLocal_503 = 0;
	bool bLocal_504 = 0;
	bool bLocal_505 = 0;
	bool bLocal_506 = 0;
	bool bLocal_507 = 0;
	bool bLocal_508 = 0;
	bool bLocal_509 = 0;
	bool bLocal_510 = 0;
	bool bLocal_511 = 0;
	bool bLocal_512 = 0;
	bool bLocal_513 = 0;
	bool bLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	struct<3> Local_525 = { 0, 0, 0 } ;
	struct<3> Local_526 = { 0, 0, 0 } ;
	struct<3> Local_527 = { 0, 0, 0 } ;
	struct<3> Local_528 = { 0, 0, 0 } ;
	struct<3> Local_529 = { 0, 0, 0 } ;
	struct<3> Local_530 = { 0, 0, 0 } ;
	struct<3> Local_531 = { 0, 0, 0 } ;
	struct<3> Local_532 = { 0, 0, 0 } ;
	struct<3> Local_533 = { 0, 0, 0 } ;
	struct<3> Local_534 = { 0, 0, 0 } ;
	struct<3> Local_535 = { 0, 0, 0 } ;
	struct<3> Local_536 = { 0, 0, 0 } ;
	struct<3> Local_537 = { 0, 0, 0 } ;
	struct<3> Local_538 = { 0, 0, 0 } ;
	float fLocal_539 = 0f;
	float fLocal_540 = 0f;
	float fLocal_541 = 0f;
	float fLocal_542 = 0f;
	float fLocal_543 = 0f;
	var uLocal_544 = 0;
	float fLocal_545 = 0f;
	float fLocal_546 = 0f;
	float fLocal_547 = 0f;
	float fLocal_548 = 0f;
	float fLocal_549[3] = { 0f, 0f, 0f };
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569[3] = { 0, 0, 0 };
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	float fLocal_630 = 0f;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	var uLocal_634 = 16;
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
	int iLocal_799 = 0;
	struct<6> Local_800 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_801 = { 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_802 = { 0, 0, 0, 0, 0 } ;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 21;
	var uLocal_806 = 6;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	bLocal_43 = true;
	bLocal_50 = true;
	bLocal_72 = true;
	fLocal_93 = 120f;
	fLocal_94 = 0f;
	fLocal_96 = 1f;
	fLocal_97 = 0f;
	fLocal_98 = 1f;
	fLocal_99 = 30f;
	fLocal_101 = 1f;
	fLocal_102 = 5f;
	fLocal_103 = 1f;
	fLocal_104 = 1f;
	fLocal_105 = 100f;
	fLocal_106 = 100f;
	fLocal_107 = 0f;
	fLocal_108 = 7000f;
	fLocal_109 = 0f;
	fLocal_110 = 0f;
	fLocal_111 = 0.3f;
	fLocal_112 = 0.5f;
	fLocal_113 = 50f;
	iLocal_124 = -1;
	iLocal_132 = -1;
	iLocal_133 = -1;
	iLocal_624 = AUDIO::GET_SOUND_ID();
	iLocal_799 = 18;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1061();
		func_1059();
	}
	bLocal_307 = bLocal_307;
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Chop", 0);
		if (func_1003())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_1001(0);
				func_998();
				__LIB_0__.func_400();
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					if (Local_238.f_0 != 2)
					{
						if (!iLocal_475)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_275, "FRANKLIN_0_CHOP_Group", 0f);
							iLocal_475 = 1;
						}
					}
					else if (iLocal_475)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_275, 0f);
						iLocal_475 = 0;
					}
				}
				switch (iLocal_189)
				{
					case 0:
						func_988();
						break;
					case 1:
						func_909();
						break;
					case 2:
						func_859();
						break;
					case 3:
						func_264();
						break;
					case 4:
						func_4();
						break;
					}
			}
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 2, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 6, 1, 0, 0);
			func_1();
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chop", 3, 0, iLocal_616, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x22B
{
	if (__LIB_23__.func_159())
	{
		iLocal_616 = __LIB_23__.func_158();
	}
	else
	{
		iLocal_616 = 4;
	}
}

void func_4()//Position - 0x275
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	struct<3> Var10;
	int iVar11;
	struct<3> Var12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	float fVar21;
	bool bVar22;
	struct<6> Var23;
	struct<3> Var24;
	float fVar25;
	struct<3> Var26;
	if (!PED::IS_PED_INJURED(Local_234.f_0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_234.f_0, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_234.f_0, false);
	}
	if (!iLocal_498)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_558 + 5000)
		{
			__LIB_36__.func_664(1);
			iLocal_498 = 1;
		}
	}
	if (!iLocal_306)
	{
		if (!bLocal_439)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				if (bLocal_412)
				{
					func_255(2);
				}
				else if (iLocal_255 == 7)
				{
					if (!PED::IS_PED_INJURED(Local_234.f_0) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_234.f_0))
					{
						func_255(3);
					}
					else
					{
						func_255(1);
					}
				}
				else
				{
					func_255(3);
				}
				if (!iLocal_438)
				{
					if (iLocal_432)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_597)
						{
							if (!PED::IS_PED_INJURED(Local_234.f_0))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_234.f_0, true);
								iLocal_438 = 1;
							}
						}
					}
				}
				iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				if (iVar0 > 0)
				{
					if (!bLocal_309)
					{
						if (bLocal_425)
						{
							if (iLocal_255 <= 6)
							{
								func_254("FC_LOSECOP", -1, 16000, 28000, 0);
							}
						}
					}
				}
				switch (iLocal_255)
				{
					case 0:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
							{
								if (!iLocal_520)
								{
									switch (iLocal_242)
									{
										case 2:
											sVar1 = "FKN0_VAN3";
											break;
										case 0:
											sVar1 = "FKN0_VAN2";
											break;
										case 1:
											sVar1 = "FKN0_VAN1";
											break;
									}
									if (func_251(sVar1, 0, 0, 0, 1))
									{
										iLocal_520 = 1;
									}
								}
								else if (func_251("FKN0_GOLAM", 0, 0, 0, 1))
								{
									iLocal_421 = 1;
									iLocal_255 = 1;
								}
							}
						}
						func_235(1, 0, 1, 1);
						break;
					case 1:
						if (iVar0 == 0)
						{
							if (iLocal_310)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
								{
									if ((iLocal_551 % 2) == 0)
									{
										sVar2 = "FKN0_B2AV1";
									}
									else
									{
										sVar2 = "FKN0_B2AV2";
									}
									if (func_251(sVar2, 0, 0, 0, 1))
									{
										iLocal_255 = 2;
									}
								}
							}
						}
						func_235(1, 0, 1, 1);
						break;
					case 2:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
							{
								if (iLocal_313)
								{
									if (func_233())
									{
										iLocal_313 = 0;
									}
								}
								else
								{
									if ((iLocal_551 % 2) == 0)
									{
										sVar3 = "FKN0_MKCALL";
									}
									else
									{
										sVar3 = "FKN0_MKCALL2";
									}
									if (func_251(sVar3, 0, 0, 0, 1))
									{
										iLocal_255 = 3;
									}
								}
							}
						}
						func_235(1, 0, 1, 1);
						break;
					case 3:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]) && iLocal_249 >= 3)
							{
								if ((iLocal_551 % 2) == 0)
								{
									sVar4 = "FKN0_LACALL";
								}
								else
								{
									sVar4 = "FKN0_LACALL2";
								}
								if (func_251(sVar4, 0, 0, 0, 1))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1.5f, 11f, 3);
									iLocal_255 = 4;
								}
							}
						}
						func_235(1, 0, 1, 1);
						break;
					case 4:
						if (iVar0 == 0)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
							{
								if ((iLocal_551 % 2) == 0)
								{
									sVar5 = "FKN0_AFCALL";
								}
								else
								{
									sVar5 = "FKN0_AFCALL2";
								}
								if (func_251(sVar5, 0, 0, 0, 1))
								{
									iLocal_255 = 5;
								}
							}
						}
						func_235(!iLocal_255 == 5, 0, 1, 1);
						break;
					case 5:
						if (iVar0 == 0)
						{
							if (!__LIB_0__.func_75())
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
								{
									func_231();
									iLocal_575 = MISC::GET_GAME_TIMER();
									iLocal_556 = MISC::GET_GAME_TIMER() + 15000;
									__LIB_38__.func_139(&uLocal_634, "FKN0AUD", "FKN0_OPEN", 7, 0, 0, 0, 0);
									iLocal_255 = 6;
								}
							}
						}
						func_235(0, 0, 1, 1);
						break;
					case 6:
						bVar6 = false;
						if (!bLocal_495)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_556 || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								__LIB_0__.func_296();
								bLocal_495 = true;
							}
						}
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
						{
							func_254("FKN0_STOP", -1, 15000, 25000, 1);
						}
						if (iVar0 == 0)
						{
							iLocal_607 = -1;
							if (iLocal_463)
							{
								AUDIO::DISTANT_COP_CAR_SIRENS(false);
								iLocal_463 = 0;
							}
							if (MISC::GET_GAME_TIMER() >= iLocal_575 + 22000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							}
							else
							{
								MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, -2f, 0f), &fVar7, false, false);
								if (ENTITY::GET_ENTITY_SPEED(iLocal_279[0]) <= 0.5f && ENTITY::IS_ENTITY_UPRIGHT(iLocal_279[0], 90f))
								{
									iLocal_621 = MISC::GET_GAME_TIMER();
									bVar9 = true;
									Var10 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
									iVar11 = 1;
									while (iVar11 <= 5)
									{
										if (bVar9)
										{
											Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, (-2f - (IntToFloat(iVar11) * 0.6f)), 0f) };
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var12, &fVar8, false, false);
											fVar13 = (fVar8 - fVar7);
											if (fVar13 < 0f)
											{
												fVar13 = (fVar13 * -1f);
											}
											if (fVar13 > 0.5f)
											{
												bVar9 = false;
											}
											fVar7 = fVar8;
											if (fVar7 < (Var10.f_2 - 2f))
											{
												bVar9 = false;
											}
										}
										iVar11++;
									}
									switch (iLocal_273)
									{
										case 0:
											Var15 = { ENTITY::GET_ENTITY_COORDS(iLocal_279[0], true) };
											Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, -5f, 0f) };
											Var14.f_2 = Var14.f_2;
											iLocal_518 = 1;
											iLocal_815 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var15, Var14, 0.5f, 1, iLocal_279[0], 4);
											iLocal_273 = 1;
											break;
										case 1:
											iVar16 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_815, &iVar17, &uVar18, &uVar19, &uVar20);
											if (iVar16 == 2)
											{
												if (iVar17 == 0)
												{
													iLocal_518 = 0;
													iLocal_273 = 0;
												}
												else
												{
													iLocal_518 = 1;
													iLocal_273 = 0;
												}
											}
											else if (iVar16 == 0)
											{
												iLocal_518 = 1;
												iLocal_273 = 0;
											}
											break;
									}
									if ((iLocal_518 || !bVar9) || ENTITY::IS_ENTITY_IN_WATER(iLocal_279[0]))
									{
										fLocal_545 = (fLocal_545 + (1f * SYSTEM::TIMESTEP()));
										if (fLocal_545 >= 1f)
										{
											bVar6 = true;
										}
									}
									else
									{
										fLocal_545 = 0f;
									}
									if ((((((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]) && iLocal_249 >= 5) && func_210()) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_279[0], 10f)) && bVar9) && !iLocal_518) && !ENTITY::IS_ENTITY_IN_WATER(iLocal_279[0]))
									{
										if (!__LIB_0__.func_75() || !bLocal_495)
										{
											if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
											{
												PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
												PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
											}
											iLocal_255 = 7;
											HUD::CLEAR_HELP(true);
											iLocal_306 = 1;
										}
									}
								}
								else
								{
									iLocal_518 = 1;
									fLocal_545 = 0f;
									if (!iLocal_411)
									{
										PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
										iLocal_575 = MISC::GET_GAME_TIMER();
										iLocal_556 = MISC::GET_GAME_TIMER() + 11000;
										iLocal_411 = 1;
									}
									else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_621 + 300)
										{
											func_208("FC_LETOUT", 1, !bLocal_495, 100);
										}
									}
								}
							}
						}
						else
						{
							if (!iLocal_463)
							{
								AUDIO::DISTANT_COP_CAR_SIRENS(true);
								iLocal_463 = 1;
							}
							if (!iLocal_522)
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_FRANLIN_0_KIDNAP", 0f);
								iLocal_522 = 1;
							}
							iLocal_518 = 1;
							iLocal_411 = 0;
							iLocal_575 = MISC::GET_GAME_TIMER();
						}
						if (bVar6)
						{
							if (!__LIB_0__.func_1("FC_POSHLP"))
							{
								__LIB_0__.func_187("FC_POSHLP");
							}
						}
						else if (__LIB_0__.func_1("FC_POSHLP"))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!iLocal_306)
						{
							func_235(0, 0, 1, 1);
						}
						break;
					case 7:
						if (!bLocal_477)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_279[0], func_205(4), "InCar_GetOutofBack_Speedo", 3))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_279[0], func_205(4), "InCar_GetOutofBack_Speedo") >= 0.33f)
								{
									ENTITY::STOP_ENTITY_ANIM(iLocal_279[0], "InCar_GetOutofBack_Speedo", func_205(4), -1000f);
									VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 2, true);
									VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 3, true);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
									bLocal_477 = true;
								}
							}
							else
							{
								bLocal_477 = true;
							}
						}
						if (!iLocal_450)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_284, 100f, 100f, 100f, false, false, 0))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_284);
									func_204(20);
									iLocal_450 = 1;
								}
							}
						}
						if (!iLocal_451)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
							{
								if (!PED::IS_PED_INJURED(Local_234.f_0))
								{
									if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 150f, 150f, 150f, false, false, 0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_234.f_0))
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_234);
											func_204(2);
											iLocal_451 = 1;
										}
									}
								}
							}
						}
						if (iLocal_269 != 3)
						{
							if (iLocal_269 > 0)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_205(4), "Take_off_Bandana", 3))
								{
									fVar21 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_205(4), "Take_off_Bandana");
								}
								else if (MISC::GET_GAME_TIMER() >= iLocal_599 + 500)
								{
									func_85(0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
									{
										OBJECT::DELETE_OBJECT(&iLocal_285);
									}
									iLocal_269 = 3;
								}
							}
							switch (iLocal_269)
							{
								case 0:
									bVar22 = false;
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
									{
										if (!PED::IS_PED_INJURED(Local_234.f_0))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(4), 120f, 120f, 120f, false, false, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 75f, 75f, 75f, false, false, 0))
											{
												bVar22 = true;
											}
										}
										else
										{
											bVar22 = true;
										}
										if (bVar22)
										{
											if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
											{
												TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_205(4), "Take_off_Bandana", 8f, -8f, -1, 48, 0f, false, false, false);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
												iLocal_285 = OBJECT::CREATE_OBJECT(func_76(21), 0f, 1f, 2f, true, true, false);
												ENTITY::SET_ENTITY_VISIBLE(iLocal_285, false, false);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_285, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
												ENTITY::PLAY_ENTITY_ANIM(iLocal_285, "take_off_bandana_bandana", func_205(4), 8f, false, false, false, 0f, 0);
												iLocal_599 = MISC::GET_GAME_TIMER();
												iLocal_269 = 1;
											}
											else
											{
												func_85(0);
												iLocal_269 = 3;
											}
										}
									}
									break;
								case 1:
									if (fVar21 >= 0.2f)
									{
										func_85(0);
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
										{
											ENTITY::SET_ENTITY_VISIBLE(iLocal_285, true, false);
										}
										iLocal_269 = 2;
									}
									break;
								case 2:
									if (fVar21 >= 0.95f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
										{
											OBJECT::DELETE_OBJECT(&iLocal_285);
										}
										iLocal_269 = 3;
									}
									break;
							}
						}
						else
						{
							func_75("fra_0_mcs_5_p1", func_84(4), 100f, 120f);
							if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
							{
								if (!PED::IS_PED_INJURED(iLocal_274))
								{
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", iLocal_274, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_275))
								{
									CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Chop", iLocal_275, 0);
								}
							}
						}
						if (!bLocal_305)
						{
							if (iVar0 == 0 && !bLocal_309)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
								{
									if (!bLocal_312)
									{
										if (!iLocal_433)
										{
											if (!PED::IS_PED_INJURED(Local_234.f_0))
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 30f, 30f, 4f, false, true, 0))
												{
													iLocal_433 = func_251("FKN0_DSHOUT", 0, 0, 0, 1);
												}
												else
												{
													iLocal_433 = 1;
												}
											}
											else
											{
												iLocal_433 = 1;
											}
										}
										else if (!iLocal_435)
										{
											if (!PED::IS_PED_INJURED(Local_234.f_0))
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 30f, 30f, 4f, false, true, 0))
												{
													iLocal_435 = func_251("FKN0_FSHOUT", 0, 0, 0, 1);
												}
												else
												{
													iLocal_435 = 1;
												}
											}
											else
											{
												iLocal_435 = 1;
											}
										}
										else if (!iLocal_434)
										{
											if (!PED::IS_PED_INJURED(Local_234.f_0))
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 30f, 30f, 4f, false, true, 0))
												{
													iLocal_434 = func_251("FKN0_LAMFU", 0, 0, 0, 1);
												}
												else
												{
													iLocal_434 = 1;
												}
											}
											else
											{
												iLocal_434 = 1;
											}
										}
										else if (!iLocal_421)
										{
											iLocal_421 = func_251("FKN0_GOREC", 0, 0, 0, 1);
										}
										else if (iLocal_310)
										{
											if (!bLocal_309)
											{
												bLocal_312 = func_251("FKN0_B3AV1", 0, 0, 0, 1);
											}
										}
									}
									else if (!iLocal_446)
									{
										if (iLocal_313)
										{
											if (func_233())
											{
												iLocal_313 = 0;
											}
										}
										if (!__LIB_0__.func_176(2))
										{
											if (__LIB_0__.func_75())
											{
												Var23 = { __LIB_9__.func_980() };
												if (MISC::ARE_STRINGS_EQUAL(&Var23, "FKN0_B3AV1_12"))
												{
													__LIB_0__.func_296();
													iLocal_446 = 1;
												}
											}
										}
									}
								}
							}
						}
						if (!bLocal_309)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
							{
								if (func_210())
								{
									if (iVar0 == 0)
									{
										if (bLocal_477)
										{
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(4), Global_19, true, true, 0))
											{
												if (__LIB_0__.func_398(1, 0, 1))
												{
													__LIB_12__.func_101();
													func_231();
													__LIB_0__.func_296();
													iLocal_554 = MISC::GET_GAME_TIMER();
													bLocal_309 = true;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							__LIB_12__.func_101();
							if (__LIB_6__.func_762(iLocal_279[0], 10f, 1, 1056964608, 0, 1, 0))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_554 + 1000)
								{
									if (!__LIB_0__.func_75())
									{
										if (func_210())
										{
											if (iLocal_192 > 0)
											{
												if (__LIB_0__.func_90())
												{
													iLocal_306 = 1;
												}
											}
										}
									}
								}
							}
						}
						func_67();
						if (!bLocal_309)
						{
							func_235(1, 0, 1, 1);
						}
						break;
				}
				if (!iLocal_423)
				{
					if (!PED::IS_PED_INJURED(Local_234.f_0))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_234.f_0))
						{
							Var24 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_205(5), "CHOP_GROWL_TO_SIT", 0f, 0f, 0f, 0f, 0f, 0f, 0f, 2) + Vector(206f, 0f, 0f) };
							func_66(iLocal_275, iLocal_279[0], Var24.f_2, 0, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
							TASK::TASK_PLAY_ANIM(iLocal_275, func_205(5), "CHOP_GROWL_TO_SIT", 8f, -8f, -1, 4098, 0f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_275, false, false);
							iLocal_423 = 1;
						}
					}
				}
				else if (!iLocal_424)
				{
					if (!PED::IS_PED_INJURED(iLocal_275))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_275, func_205(5), "CHOP_GROWL_TO_SIT", 3))
						{
							fVar25 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_275, func_205(5), "CHOP_GROWL_TO_SIT");
							if (fVar25 >= 0.98f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_275, func_205(5), "CHOP_SIT_LOOP", 8f, -8f, -1, 4097, 0f, false, false, false);
								iLocal_424 = 1;
							}
							else if (fVar25 >= 0f)
							{
								Var26 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_205(5), "CHOP_GROWL_TO_SIT", 0f, 0f, 0f, 0f, 0f, 0f, fVar25, 2) + Vector(206f, 0f, 0f) };
								func_66(iLocal_275, iLocal_279[0], Var26.f_2, 0, 0, 0, 0, 0, 0);
								ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
							}
						}
					}
				}
				else
				{
					__LIB_33__.func_928(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, &uLocal_609, &uLocal_610, 0);
				}
				if (!iLocal_420)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(19), 150f, 150f, 150f, false, false, 0))
					{
						func_63();
					}
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, 1f);
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_275, 2f, false);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_274, 1.15f);
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_598 + 3200)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
				{
					PED::DELETE_PED(&iLocal_274);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_275))
				{
					PED::DELETE_PED(&iLocal_275);
				}
				func_59();
			}
		}
	}
	else if (!iLocal_432)
	{
		func_50();
	}
	else
	{
		func_6();
	}
	if (!PED::IS_PED_INJURED(iLocal_274) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_249)
		{
			case 0:
				iLocal_284 = OBJECT::CREATE_OBJECT(func_76(20), 0f, 1f, 2f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_284, iLocal_274, PED::GET_PED_BONE_INDEX(iLocal_274, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_274, func_205(4), "InCar_PhoneIdle_Lem", 3))
				{
					TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "InCar_PhoneIdle_Lem", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				iLocal_249 = 1;
				break;
			case 1:
				__LIB_11__.func_958(&iLocal_271, 0, 0);
				if (iLocal_255 >= 3)
				{
					TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "Incar_Phonetalk_enter_Lem", 8f, -8f, -1, 2, 0f, false, false, false);
					iLocal_249 = 2;
				}
				break;
			case 2:
				__LIB_11__.func_958(&iLocal_271, 0, 3);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_274, func_205(4), "Incar_Phonetalk_enter_Lem", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_274, func_205(4), "Incar_Phonetalk_enter_Lem") >= 0.98f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "Incar_Phonetalk_loop_Lem", 8f, -8f, -1, 1, 0f, false, false, false);
						iLocal_249 = 3;
					}
				}
				break;
			case 3:
				__LIB_11__.func_958(&iLocal_271, 0, 3);
				if (iLocal_255 >= 5)
				{
					TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "Incar_Phonetalk_exit_Lem", 8f, -8f, -1, 2, 0f, false, false, false);
					iLocal_249 = 4;
				}
				break;
			case 4:
				__LIB_11__.func_958(&iLocal_271, 0, 0);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_274, func_205(4), "Incar_Phonetalk_exit_Lem", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_274, func_205(4), "Incar_Phonetalk_exit_Lem") >= 0.98f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "InCar_PhoneIdle_Lem", 8f, -8f, -1, 1, 0f, false, false, false);
						iLocal_249 = 5;
					}
				}
				break;
			case 5:
				__LIB_11__.func_958(&iLocal_271, 0, 0);
				if (iLocal_255 == 7)
				{
					if (iLocal_466 && iLocal_193 == 1)
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "InCar_PhoneSnatch_Lem", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_205(4), "InCar_PhoneSnatch_Fra", 8f, -8f, -1, 32, 0f, false, false, false);
						iLocal_249 = 6;
					}
				}
				break;
			case 6:
				__LIB_11__.func_958(&iLocal_271, 0, 0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_205(4), "InCar_PhoneSnatch_Fra", 3))
				{
					iLocal_249 = 7;
				}
				else if (!iLocal_422)
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_205(4), "InCar_PhoneSnatch_Fra") >= 0.47f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
						{
							ENTITY::DETACH_ENTITY(iLocal_284, true, true);
							ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_284, 1, 3f, 0.5f, 0f, false, true, true, false);
							iLocal_422 = 1;
						}
					}
				}
				break;
			case 7:
				__LIB_11__.func_958(&iLocal_271, 0, 0);
				break;
			}
	}
}

void func_6()//Position - 0x14CC
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_193)
	{
		case 0:
			iLocal_553 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_274);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_274, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				ENTITY::DETACH_ENTITY(iLocal_275, true, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_275, "Chop", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_279[0], "Kidnapping_van", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_193 = 1;
			break;
		case 1:
			if (!iLocal_308)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_49();
					MISC::CLEAR_AREA(-214.27998f, -1488.4868f, 30.23007f, 8.7f, true, false, false, false);
					MISC::CLEAR_AREA_OF_PROJECTILES(-217.50893f, -1498.4435f, 30.23968f, 15f, 0);
					FIRE::STOP_FIRE_IN_RANGE(-217.50893f, -1498.4435f, 30.23968f, 15f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-217.50893f, -1498.4435f, 30.23968f, 15f);
					if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
					{
						PED::DELETE_PED(&Local_234);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_279[0], 1, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_279[0], 3, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_279[0], 2, 0, 0f);
					}
					__LIB_11__.func_867(iLocal_279[0]);
					func_85(0);
					func_47(0);
					func_45(8);
					if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
					{
						PED::DELETE_PED(&Local_234);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_308 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_274))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_274, -220.96648f, -1506.3773f, 30.44023f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_274, 152.7f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_274, "hood9", 5, 0, -1);
					PED::FORCE_PED_MOTION_STATE(iLocal_274, joaat("MotionState_Walk"), true, 1, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, false, false, false, false, false, false, true);
					ENTITY::SET_ENTITY_COORDS(iLocal_275, -219.74655f, -1505.8986f, 30.45473f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_275, 144f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood10", 5, 0, -1);
					PED::FORCE_PED_MOTION_STATE(iLocal_275, joaat("MotionState_Run"), true, 1, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Kidnapping_van", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_279[0], 5f);
					func_44();
				}
				iLocal_598 = MISC::GET_GAME_TIMER();
				bLocal_439 = true;
			}
			else if (!bLocal_439)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			break;
		case 2:
			break;
	}
}

void func_7(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x1809
{
	bool bVar0;
	if (bParam4)
	{
		__LIB_26__.func_550(1, 1, 1, 0);
	}
	if (bParam0)
	{
		func_26();
		__LIB_26__.func_367(1, 1, iParam7, 0, 0, 0, 0);
		HUD::DISPLAY_RADAR(false);
		HUD::DISPLAY_HUD(false);
		iLocal_552 = MISC::GET_GAME_TIMER();
	}
	else
	{
		__LIB_26__.func_367(0, 1, iParam7, 0, 0, 0, 0);
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			__LIB_8__.func_770(0);
			if (iParam2 < 0)
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (bParam6)
			{
				CAM::RENDER_SCRIPT_CAMS(false, bVar0, iParam2, true, false, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_294))
			{
				CAM::DESTROY_CAM(iLocal_294, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_295))
			{
				CAM::DESTROY_CAM(iLocal_295, false);
			}
			__LIB_11__.func_827(&iLocal_292);
			__LIB_11__.func_827(&iLocal_293);
			if (bParam3)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		iLocal_306 = 0;
		bLocal_307 = false;
		iLocal_308 = 0;
		bLocal_309 = false;
		iLocal_193 = 0;
		if (bParam5)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
}

void func_26()//Position - 0x1DCB
{
	__LIB_8__.func_770(1);
	func_29(&Local_238, &Local_194, 0, 1, 1, 1, 0, 3000);
	PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
	func_45(9);
	__LIB_0__.func_402(0, -1);
	func_27(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}

void func_27(bool bParam0)//Position - 0x1E0A
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_632))
	{
		if (bParam0)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_632, false);
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_632, false);
		}
	}
	if (bParam0)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_238.f_13, 2f);
	}
}

void func_29(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x1EDF
{
	func_31(iParam0, iParam1);
	func_30(iParam0);
	if (bParam2)
	{
		iParam1->f_7 = 4;
	}
	if (bParam3)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam4)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
	}
	if (bParam5)
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam6, iParam7, true, false, 0);
		if (bParam6)
		{
			iParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam7);
		}
	}
	*iParam0 = 0;
}

void func_30(int iParam0)//Position - 0x1F42
{
	switch (iParam0->f_2)
	{
		case 1:
			if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 7)
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					iParam0->f_9 = 1;
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_31(int iParam0, var uParam1)//Position - 0x200B
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChopVision"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("ChopVision");
	}
	func_34(iParam0, uParam1, 0);
	__LIB_0__.func_83(0);
	if (iParam0->f_12 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
		{
			AUDIO::STOP_SOUND(iParam0->f_12);
		}
	}
	func_33(iParam0, 0);
	PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/, -1);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(iParam0->f_3, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) || !ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_3, true, false);
		}
	}
	switch (iParam0->f_2)
	{
		case 1:
			__LIB_11__.func_807();
			break;
	}
}

void func_33(int iParam0, bool bParam1)//Position - 0x20C9
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02");
	iParam0->f_10 = 0;
	if (bParam1)
	{
		if (iParam0->f_12 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(iParam0->f_12);
			iParam0->f_12 = -1;
		}
	}
}

void func_34(int iParam0, int iParam1, bool bParam2)//Position - 0x2120
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (iVar1 != iParam0->f_1)
			{
				if (__LIB_20__.func_659(iVar1))
				{
					__LIB_23__.func_160(iParam1, iVar1, 2);
				}
			}
			else
			{
				__LIB_23__.func_160(iParam1, iVar1, 3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar2 = iVar0;
			__LIB_23__.func_160(iParam1, iVar2, 0);
			iVar0++;
		}
	}
	if (iParam0->f_8)
	{
		__LIB_23__.func_160(iParam1, 2, 0);
	}
}

void func_44()//Position - 0x2349
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 1, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 2, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 3, true);
	}
}

void func_45(int iParam0)//Position - 0x238F
{
	AUDIO::STOP_AUDIO_SCENE(func_46(iParam0));
}

char* func_46(int iParam0)//Position - 0x23A1
{
	switch (iParam0)
	{
		case 0:
			return "FRANKLIN_0_WALK_TO_VAN";
			break;
		case 1:
			return "FRANKLIN_0_DRIVE_TO_VINEWOOD";
			break;
		case 2:
			return "FRANKLIN_0_CAR_CHASE";
			break;
		case 3:
			return "FRANKLIN_0_FOOT_CHASE_START";
			break;
		case 4:
			return "FRANKLIN_0_BREAK_THROUGH_FENCE";
			break;
		case 5:
			return "FRANKLIN_0_D_ESCAPES";
			break;
		case 6:
			return "FRANKLIN_0_SEARCH_BOXCARS";
			break;
		case 7:
			return "FRANKLIN_0_DRIVE_TO_LAMARS";
			break;
		case 8:
			return "FRANKLIN_0_TAKE_LAMAR_BACK";
			break;
		case 9:
			return "FRANKLIN_0_CHOP_CAM";
			break;
		case 10:
			return "FRANKLIN_0_FOCUS_ON_BIKER";
			break;
	}
	return "";
}

void func_47(bool bParam0)//Position - 0x2464
{
	if (!PED::IS_PED_INJURED(iLocal_274))
	{
		if (bParam0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 8, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 8, 0, 0, 0);
		}
	}
}

void func_49()//Position - 0x2515
{
	__LIB_26__.func_550(1, 1, 1, 0);
	func_26();
	__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
}

void func_50()//Position - 0x2534
{
	bool bVar0;
	struct<3> Var1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_193)
	{
		case 0:
			if (!iLocal_466)
			{
				__LIB_26__.func_550(0, 1, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_611 = MISC::GET_GAME_TIMER();
				iLocal_466 = 1;
			}
			else if (!iLocal_431)
			{
				bVar0 = false;
				if (!bLocal_495)
				{
					if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					__LIB_9__.func_990();
					iLocal_611 = MISC::GET_GAME_TIMER();
					iLocal_431 = 1;
				}
				else if (func_251("FKN0_OPEN", 0, 0, 0, 1))
				{
					iLocal_611 = MISC::GET_GAME_TIMER();
					iLocal_431 = 1;
				}
			}
			else
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_LOADED())
				{
				}
				if ((MISC::GET_GAME_TIMER() >= iLocal_611 + 1800 && AUDIO::IS_SCRIPTED_CONVERSATION_LOADED()) || MISC::GET_GAME_TIMER() >= iLocal_611 + 5000)
				{
					func_7(1, 1, -1, 1, 0, 1, 1, 1);
					func_57();
					iLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_590, iLocal_279[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_279[0], "seat_dside_f"));
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_590, "incar_phonesnatch_cam", func_205(4));
					}
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_590, false);
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, -3.1f, -0.75f) };
					MISC::CLEAR_AREA(Var1, 2.5f, true, false, false, false);
					MISC::CLEAR_AREA_OF_PROJECTILES(Var1, 20f, 0);
					FIRE::STOP_FIRE_IN_RANGE(Var1, 8f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var1, 8f);
					if (!PED::IS_PED_INJURED(iLocal_274))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, -1, 2049, 2);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(Local_234.f_0))
					{
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_279[0], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_279[0], 5f);
						MISC::CLEAR_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, 0f, -8f), 7f, true, false, false, false);
						iLocal_584 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, 0f, -10f), 10f, 0f, false);
						__LIB_11__.func_867(iLocal_279[0]);
					}
					iLocal_524 = 0;
					iLocal_553 = MISC::GET_GAME_TIMER();
					iLocal_193 = 1;
				}
			}
			break;
		case 1:
			func_255(3);
			if (!PED::IS_PED_INJURED(Local_234.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				switch (iLocal_232)
				{
					case 0:
						bVar2 = false;
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
						{
							bVar2 = true;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_590) >= 0.98f)
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_234.f_0);
							ENTITY::SET_ENTITY_COORDS(Local_234.f_0, ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true), true, false, false, true);
							Local_234.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_234.f_9, iLocal_279[0], 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_234.f_0, Local_234.f_9, func_205(4), "InCar_GetOutofBack_Ballas", 1000f, -8f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_234.f_9, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_234.f_0, false, false);
							TASK::TASK_VEHICLE_PLAY_ANIM(iLocal_279[0], func_205(4), "InCar_GetOutofBack_Speedo");
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_279[0]);
							iLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_590, iLocal_279[0], 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_590, "Incar_GetOutofBack_CAM", func_205(4));
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_590, false);
							iLocal_612 = MISC::GET_GAME_TIMER();
							iLocal_232 = 1;
						}
						break;
					case 1:
						func_67();
						break;
					}
			}
			if (iLocal_232 == 1)
			{
				bVar3 = false;
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_612 + 100)
					{
						bVar3 = true;
					}
				}
				else
				{
					fVar4 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_590);
					if (!iLocal_524)
					{
						if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
						{
							if (fVar4 >= 0.276f)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_524 = 1;
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
					{
						if (!iLocal_468)
						{
							if (fVar4 >= 0.25f)
							{
								iLocal_468 = 1;
							}
						}
						if (!iLocal_469)
						{
							if (fVar4 >= 0.21f)
							{
								iLocal_469 = 1;
							}
						}
					}
					if (fVar4 >= 0.3f)
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					iLocal_193 = 2;
				}
			}
			func_53();
			break;
		case 2:
			func_45(7);
			func_52(8);
			__LIB_36__.func_664(0);
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_584);
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				TASK::CLEAR_PED_TASKS(iLocal_274);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_274, 3, false);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_279[0], false);
				if (!PED::IS_PED_INJURED(Local_234.f_0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_234.f_0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_234.f_0, false))
					{
						ENTITY::DETACH_ENTITY(Local_234.f_0, true, true);
					}
					if (bLocal_307)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_234.f_0);
						ENTITY::SET_ENTITY_COORDS(Local_234.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, -3.1f, -0.75f), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_234.f_0, (ENTITY::GET_ENTITY_HEADING(iLocal_279[0]) - 180f));
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_279[0], func_205(4), "InCar_GetOutofBack_Speedo", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_279[0], "InCar_GetOutofBack_Speedo", func_205(4), -1000f);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 3, true);
						}
					}
					PED::FORCE_PED_MOTION_STATE(Local_234.f_0, joaat("MotionState_Run"), true, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_234.f_0, 2f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_234.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_279[0], 0f, -12f, 0.4f), 2f, 20000, 0.25f, 0, 40000f);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_234.f_0, joaat("AMBIENT_GANG_BALLAS"));
					iLocal_597 = MISC::GET_GAME_TIMER() + 6000;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
			{
			}
			iLocal_249 = 7;
			func_231();
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
			}
			iLocal_310 = 0;
			iLocal_421 = 0;
			iLocal_555 = 2;
			iLocal_311 = 1;
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			if (bLocal_307)
			{
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
			}
			else
			{
				func_51(0f, 3, 1);
			}
			iLocal_432 = 1;
			iLocal_306 = 0;
			break;
	}
}

void func_51(float fParam0, int iParam1, bool bParam2)//Position - 0x2B51
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_8__.func_770(0);
	if (bParam2)
	{
		CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME("SPEEDO" /* GXT: Speedo */);
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	}
	CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, fParam0, iParam1, 0);
	__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
	iLocal_306 = 0;
	bLocal_307 = false;
	iLocal_308 = 0;
	bLocal_309 = false;
	iLocal_193 = 0;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (CAM::DOES_CAM_EXIST(iLocal_294))
		{
			CAM::DESTROY_CAM(iLocal_294, false);
		}
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

bool func_52(int iParam0)//Position - 0x2BCC
{
	return AUDIO::START_AUDIO_SCENE(func_46(iParam0));
}

void func_53()//Position - 0x2BDE
{
	if (__LIB_0__.func_404() && MISC::GET_GAME_TIMER() >= iLocal_552 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(800);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_6__.func_849(0);
		__LIB_6__.func_771();
		bLocal_307 = true;
		iLocal_193 = 2;
	}
}

void func_57()//Position - 0x2C88
{
	if (CAM::DOES_CAM_EXIST(iLocal_294))
	{
		CAM::DESTROY_CAM(iLocal_294, false);
	}
	iLocal_294 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_59()//Position - 0x2CCA
{
	__LIB_6__.func_823(0, 0);
	func_1059();
}

void func_63()//Position - 0x2E1C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iLocal_278)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_278[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_281[iVar0]))
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(iLocal_281[iVar0]), true);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_245[iVar0 /*5*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_245[iVar0 /*5*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_277);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_246[iVar0 /*12*/]));
		}
		iVar0++;
	}
	iLocal_420 = 1;
}

void func_66(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3122
{
	struct<3> Var0;
	float fVar1;
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!bParam4)
		{
			if (!bParam3)
			{
				Var0 = { 0f, -0.5f, 0.3f };
			}
			else
			{
				Var0 = { 0.129f, -1.522f, 0.3f };
			}
			fVar1 = fParam2;
		}
		else
		{
			Var0 = { iParam5, iParam6, iParam7 };
			fVar1 = iParam8;
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var0, 0f, 0f, fVar1, false, false, false, true, 2, true, 0);
	}
}

void func_67()//Position - 0x319E
{
	if (!PED::IS_PED_INJURED(Local_234.f_0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(Local_234.f_0, false) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_234.f_0)) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_234.f_9))
		{
			if (!iLocal_306)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_234.f_0, joaat("SCRIPT_TASK_SMART_FLEE_PED")) == 7)
				{
					TASK::TASK_SMART_FLEE_PED(Local_234.f_0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
			}
		}
	}
}

void func_75(char* sParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x3574
{
	switch (iLocal_192)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam2, fParam2, fParam2, false, true, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_192 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_192 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam3, fParam3, fParam3, false, true, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_192 = 0;
			}
			break;
	}
}

int func_76(int iParam0)//Position - 0x35EF
{
	switch (iParam0)
	{
		case 0:
			return __LIB_19__.func_811(1);
			break;
		case 1:
			return __LIB_11__.func_149(19);
			break;
		case 2:
			return joaat("IG_BallasOG");
			break;
		case 3:
			return __LIB_11__.func_813();
			break;
		case 4:
			return joaat("A_C_Rottweiler");
			break;
		case 5:
			return joaat("A_F_Y_GenHot_01");
			break;
		case 6:
			return joaat("S_M_Y_Construct_02");
			break;
		case 7:
			return __LIB_20__.func_684(19, 0);
			break;
		case 8:
			return joaat("bati");
			break;
		case 9:
			return joaat("emperor");
			break;
		case 10:
			return joaat("bison");
			break;
		case 11:
			return joaat("bus");
			break;
		case 12:
			return joaat("trailers2");
			break;
		case 13:
			return joaat("freight");
			break;
		case 14:
			return joaat("tankercar");
			break;
		case 15:
			return joaat("freightcont2");
			break;
		case 16:
			return joaat("rubble");
			break;
		case 17:
			return joaat("rocoto");
			break;
		case 18:
			return joaat("prop_rail_boxcar5_d");
			break;
		case 19:
			return joaat("prop_boxcar5_handle");
			break;
		case 20:
			return joaat("prop_npc_phone");
			break;
		case 21:
			return joaat("p_cs_bandana_s");
			break;
		case 22:
			return joaat("prop_ld_test_01");
			break;
		case 23:
			return __LIB_11__.func_687();
			break;
	}
	return 0;
}

Vector3 func_84(int iParam0)//Position - 0x3C49
{
	switch (iParam0)
	{
		case 0:
			return -77.8f, -1456.7f, 31.03f;
			break;
		case 1:
			return -15.79069f, -1451.1201f, 29.55704f;
			break;
		case 2:
			return 363.74927f, 323.3702f, 102.71001f;
			break;
		case 3:
			return -52.78f, -1456.56f, 31.03f;
			break;
		case 4:
			return -216.77869f, -1494.9651f, 30.23503f;
			break;
		case 5:
			return 456.0452f, -691.4726f, 26.83633f;
			break;
		case 6:
			return 360.19f, 323.68f, 102.81f;
			break;
		case 8:
			return 458.02f, -691.39f, 27.43f;
			break;
		case 7:
			return 509.78f, -654.11f, 23.75f;
			break;
		case 10:
			return 387.98f, 358.86f, 101.45f;
			break;
		case 11:
			return 372.3202f, 353.49075f, 101.71169f;
			break;
		case 12:
			return -17.96112f, -1452.7339f, 29.57574f;
			break;
		case 13:
			return 369.8667f, 350.72247f, 101.84525f;
			break;
		case 9:
			return 0f, 0f, -90f;
			break;
		case 14:
			return 460.1f, -656.61f, 26.67f;
			break;
		case 15:
			return -15.26298f, -1453.3053f, 29.50939f;
			break;
		case 16:
			return 459.3754f, -679.7192f, 26.55455f;
			break;
		case 17:
			return 491.34f, -556.23f, 26.54f;
			break;
		case 18:
			return 552.57f, -561.89f, 23.8f;
			break;
		case 19:
			return 514.25f, -640.73f, 23.75f;
			break;
		case 20:
			return 556.65f, -565.12f, 23.8f;
			break;
		case 21:
			return 525.9822f, -679.1431f, 24.80665f;
			break;
		case 22:
			return 529.37f, -679.52f, 23.76f;
			break;
		case 23:
			return 558.05817f, -566.79877f, 23.781f;
			break;
		case 24:
			return 501.49f, -647.84f, 23.75f;
			break;
		case 25:
			return 503.14f, -648.65f, 23.75f;
			break;
		case 26:
			return 533.38f, -664.49f, 23.8f;
			break;
		case 27:
			return 531.43f, -669.4f, 23.8f;
			break;
		case 28:
			return 456.95f, -805.38f, 26.46f;
			break;
		case 29:
			return 363.46f, 322f, 102.71f;
			break;
		case 30:
			return -19.31f, -1457.8f, 29.47f;
			break;
		case 31:
			return 444.75775f, -816.0368f, 27.24718f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_85(bool bParam0)//Position - 0x3FB3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			func_180(PLAYER::PLAYER_PED_ID(), 8, 9, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_86(PLAYER::PLAYER_PED_ID(), 8, 9);
		}
	}
}

int func_86(int iParam0, int iParam1, int iParam2)//Position - 0x3FF2
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_102(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_86(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_86(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_89(iParam0, iVar0, &iVar7, 0))
	{
		func_180(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_87(iParam0, iVar0, &iVar7))
	{
		func_180(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_87(int iParam0, int iParam1, int iParam2)//Position - 0x41AF
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_102(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4276
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_102(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2)//Position - 0x74D2
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
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
				if (!func_102(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_102(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_102(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
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
			if (!func_102(iParam0, 14, uVar8[iVar7]))
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

int func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1F766
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_180(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_180(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_184(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_89(iParam0, iVar10, &iVar4, 1))
							{
								func_180(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_180(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_180(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_180(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_180(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_180(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_180(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_180(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_180(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_180(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_89(iParam0, iVar10, &iVar4, 0))
		{
			func_180(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_87(iParam0, iVar10, &iVar4))
		{
			func_180(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_184(int iParam0, int iParam1, int iParam2)//Position - 0x20106
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
				if (func_102(iParam0, iParam1, iVar0))
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
				if (func_102(iParam0, iParam1, iVar1))
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

void func_204(int iParam0)//Position - 0x222F1
{
	int iVar0;
	if (iLocal_296[iParam0])
	{
		iVar0 = func_76(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_296[iParam0] = 0;
	}
}

char* func_205(int iParam0)//Position - 0x22322
{
	switch (iParam0)
	{
		case 0:
			return "missfra0_chop_shared";
			break;
		case 1:
			return "missfra0_chop_tovan";
			break;
		case 2:
			return "missfra0_chop_fchase";
			break;
		case 3:
			return "missfra0_chop_find";
			break;
		case 4:
			return "missfra0_chop_drhome";
			break;
		case 5:
			return __LIB_23__.func_170();
			break;
	}
	return "invalid!";
}

int func_208(char* sParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x223BE
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((bParam2 || !__LIB_0__.func_75()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_210())
			{
				__LIB_0__.func_210(sParam0, iParam3, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_210()//Position - 0x2241F
{
	if (iLocal_188 == 0 && !__LIB_0__.func_527())
	{
		return 1;
	}
	return 0;
}

void func_231()//Position - 0x22CDD
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_286))
	{
		HUD::REMOVE_BLIP(&iLocal_286);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_287))
	{
		HUD::REMOVE_BLIP(&iLocal_287);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_288))
	{
		HUD::REMOVE_BLIP(&iLocal_288);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_289))
	{
		HUD::REMOVE_BLIP(&iLocal_289);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_290))
	{
		HUD::REMOVE_BLIP(&iLocal_290);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_291))
	{
		HUD::REMOVE_BLIP(&iLocal_291);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (HUD::DOES_BLIP_EXIST(Local_246[iVar0 /*12*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_246[iVar0 /*12*/].f_1));
		}
		iVar0++;
	}
}

int func_233()//Position - 0x22D9C
{
	if (iLocal_313)
	{
		if (func_210())
		{
			if (__LIB_36__.func_67(&uLocal_634, "FKN0AUD", &Local_800, &Local_801, 8, 0, 0))
			{
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

void func_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x22E28
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<3> Var5;
	char* sVar6;
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = false;
	if (bParam1)
	{
		if (!PED::IS_PED_INJURED(iLocal_274))
		{
			if (!PED::IS_PED_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399()) && !(iLocal_189 == 0 && iLocal_261 < 4))
			{
				if (!bLocal_489)
				{
					bVar2 = false;
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
	{
		if (bParam1 || !iLocal_460)
		{
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
				{
					if (!bLocal_489)
					{
						bVar1 = false;
					}
				}
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false))
		{
			bVar0 = false;
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar3 = false;
		}
	}
	if (bVar2)
	{
		if (bVar0)
		{
			if (iLocal_555 < 2)
			{
				iLocal_555 = 2;
			}
			if (bVar1)
			{
				iLocal_315 = 0;
				if (bVar3)
				{
					iLocal_427 = 0;
					if (iLocal_189 != 4 || iLocal_255 <= 5)
					{
						bLocal_425 = false;
					}
					bLocal_413 = false;
					if (iLocal_189 == 0 || iLocal_189 == 4)
					{
						bVar4 = true;
						iLocal_314 = 0;
						if (!HUD::DOES_BLIP_EXIST(iLocal_290))
						{
							if (bParam0)
							{
								__LIB_26__.func_550(0, 1, 0, 0);
								func_231();
								switch (iLocal_189)
								{
									case 0:
										Var5 = { func_84(2) };
										break;
									case 4:
										if (iLocal_255 < 6)
										{
											Var5 = { func_84(3) };
										}
										else
										{
											Var5 = { func_84(4) };
										}
										break;
								}
								iLocal_290 = func_248(Var5, 1);
							}
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_286))
						{
							HUD::REMOVE_BLIP(&iLocal_286);
						}
						if (!iLocal_310)
						{
							if (iLocal_421)
							{
								switch (iLocal_189)
								{
									case 0:
										iLocal_310 = func_208("FC_GOVINEW", 1, 0, 7500);
										break;
									case 4:
										if (iLocal_255 < 6)
										{
											iLocal_310 = func_208("FC_GOHOUSE1", 1, 0, 7500);
										}
										else if (iLocal_255 >= 7)
										{
											iLocal_310 = func_208("FC_GOREC", 1, 0, 7500);
										}
										break;
									}
								}
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_289) && !HUD::DOES_BLIP_EXIST(iLocal_288))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false) && !PED::IS_PED_INJURED(Local_234.f_0))
						{
							if (func_210())
							{
								__LIB_26__.func_550(0, 1, 0, 0);
								func_231();
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_234.f_0, false))
								{
									iLocal_289 = func_246(iLocal_279[1], 1);
								}
								else
								{
									iLocal_288 = func_242(Local_234.f_0, 1, 145);
								}
								if (!iLocal_310)
								{
									iLocal_310 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (!iLocal_427)
					{
						func_231();
						iLocal_427 = 1;
					}
					else
					{
						func_240();
					}
					if (!bLocal_425)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false))
						{
							if (iLocal_314)
							{
								if (iLocal_189 == 0)
								{
									bLocal_425 = func_251("FC_WANTBEF", 0, 0, 0, 1);
								}
								else if (iLocal_189 == 4 && iLocal_255 == 6)
								{
									if (iLocal_607 < 0)
									{
										iLocal_607 = MISC::GET_GAME_TIMER();
									}
									else if (MISC::GET_GAME_TIMER() >= iLocal_607 + 1500)
									{
										bLocal_425 = func_251("FC_WANTED", 0, 0, 0, 1);
									}
								}
								else if (iLocal_189 == 4 && iLocal_255 <= 5)
								{
									bLocal_425 = func_251("FC_WANTVAN", 0, 0, 0, 1);
								}
								else
								{
									bLocal_425 = true;
								}
							}
						}
						else
						{
							bLocal_425 = true;
						}
					}
					else if (!bLocal_413)
					{
						bLocal_413 = func_208("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0, 7500);
						func_239(10000, -1, -1);
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_287))
				{
					__LIB_26__.func_550(0, 1, 0, 0);
					func_231();
					iLocal_287 = func_242(iLocal_274, 0, 145);
				}
				if (!bLocal_324)
				{
					bLocal_324 = func_208("FC_WAIT", 1, 0, 7500);
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_286))
			{
				__LIB_26__.func_550(0, 1, 0, 0);
				func_231();
				if (iLocal_555 == 0 || iLocal_555 == 2)
				{
					iLocal_311 = 1;
				}
				iLocal_286 = func_246(iLocal_279[0], 0);
			}
			if (iLocal_311)
			{
				if (iLocal_315)
				{
					switch (iLocal_555)
					{
						case 0:
							sVar6 = "FC_GOVAN1";
							break;
						case 2:
							sVar6 = "FC_GOVAN2";
							break;
					}
					if (func_208(sVar6, 1, 0, 7500))
					{
						iLocal_311 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 3);
						iLocal_555++;
					}
				}
			}
			if (!iLocal_315)
			{
				if (iLocal_314)
				{
					if (iLocal_189 == 1 && !PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
					{
						iLocal_315 = func_251("FC_VANNOW", 0, 0, 0, 1);
					}
					else if (iLocal_189 != 0 || iLocal_328)
					{
						iLocal_315 = func_251("FC_FGOTOUT", 0, 0, 0, 1);
					}
					else
					{
						iLocal_315 = 1;
					}
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 12f, 12f, 6f, false, true, 0))
	{
		if (bParam3)
		{
			if (iLocal_261 == 4 || iLocal_189 > 0)
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399());
			}
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_287))
		{
			__LIB_26__.func_550(0, 1, 0, 0);
			func_231();
			iLocal_287 = func_242(iLocal_274, 0, 145);
		}
		if (!bLocal_325)
		{
			bLocal_325 = func_208("FC_LEAVE", 1, 0, 7500);
		}
	}
	if (bVar4)
	{
		if (__LIB_0__.func_527())
		{
			bVar4 = false;
		}
	}
	if (!bVar4)
	{
		if (!iLocal_313)
		{
			if (func_236())
			{
				__LIB_0__.func_296();
			}
			iLocal_314 = 1;
		}
	}
}

int func_236()//Position - 0x23366
{
	struct<6> Var0;
	if (__LIB_0__.func_75())
	{
		Var0 = { __LIB_0__.func_390() };
		if (((((((MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_WALK") || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_WALK2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B1AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B1AV2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B2AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B2AV2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_B3AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FKN0_NOARM2"))
		{
			iLocal_313 = 1;
			Local_800 = { Var0 };
			Local_801 = { __LIB_0__.func_389() };
			return 1;
		}
	}
	return 0;
}

void func_239(int iParam0, int iParam1, int iParam2)//Position - 0x234E3
{
	int iVar0;
	int iVar1;
	if (iParam0 >= 0)
	{
		iLocal_556 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		if (iParam1 < 0)
		{
			iVar0 = 8000;
		}
		else
		{
			iVar0 = iParam1;
		}
		if (iParam2 < 0)
		{
			iVar1 = 14000;
		}
		else
		{
			iVar1 = iParam2;
		}
		iLocal_556 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1));
	}
}

void func_240()//Position - 0x23532
{
	if (HUD::DOES_BLIP_EXIST(iLocal_286))
	{
		HUD::REMOVE_BLIP(&iLocal_286);
	}
	if (__LIB_0__.func_405("FC_GOVAN2", 0, 0) || __LIB_0__.func_405("FC_GOVAN1", 0, 0))
	{
		__LIB_26__.func_550(1, 1, 0, 0);
	}
}

int func_242(int iParam0, bool bParam1, int iParam2)//Position - 0x2358E
{
	if (func_210())
	{
		return __LIB_6__.func_850(iParam0, bParam1, iParam2);
	}
	return 0;
}

int func_246(int iParam0, bool bParam1)//Position - 0x236B0
{
	if (func_210())
	{
		return __LIB_6__.func_825(iParam0, bParam1, 0);
	}
	return 0;
}

int func_248(struct<3> Param0, bool bParam1)//Position - 0x236DF
{
	if (func_210())
	{
		return __LIB_0__.func_392(Param0, bParam1);
	}
	return 0;
}

int func_251(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x23738
{
	int iVar0;
	struct<2> Var1;
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!__LIB_0__.func_75())
		{
			if (func_210())
			{
				if (bParam4)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				if (iParam2 == 0)
				{
					return __LIB_35__.func_984(&uLocal_634, "FKN0AUD", sParam0, 8, iVar0, 0, 0);
				}
				else
				{
					StringCopy(&Var1, sParam0, 16);
					StringConCat(&Var1, "_", 16);
					StringIntConCat(&Var1, iParam2, 16);
					if (!bParam3)
					{
						return __LIB_36__.func_30(&uLocal_634, "FKN0AUD", sParam0, &Var1, 8, iVar0, 0);
					}
					else
					{
						return __LIB_36__.func_67(&uLocal_634, "FKN0AUD", sParam0, &Var1, 8, iVar0, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_254(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x23882
{
	if (iLocal_556 < 0)
	{
		func_239(-1, -1, -1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_556)
	{
		if (func_251(sParam0, iParam4, 0, 0, 1))
		{
			if (iParam1 >= 0)
			{
				func_239(iParam1, -1, -1);
			}
			else
			{
				func_239(-1, iParam2, iParam3);
			}
		}
	}
}

void func_255(int iParam0)//Position - 0x238CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (MISC::GET_GAME_TIMER() >= iLocal_557)
	{
		iVar0 = 800;
		iVar1 = 3000;
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		switch (iParam0)
		{
			case 0:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iVar3 = 0;
						break;
					case 1:
						iVar3 = 5;
						break;
				}
				iVar0 = 2000;
				iVar1 = 6000;
				break;
			case 1:
				if (iVar2 >= 90)
				{
					iVar3 = 4;
				}
				else if (iVar2 >= 70)
				{
					iVar3 = 7;
				}
				else if (iVar2 >= 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 5;
				}
				iVar0 = 2000;
				iVar1 = 5500;
				break;
			case 2:
				if (iLocal_253 == 8 || iLocal_253 == 9)
				{
					if (iVar2 >= 80)
					{
						iVar3 = 10;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
						iVar0 = 400;
						iVar1 = 700;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
					{
						case 0:
							iVar3 = 0;
							break;
						case 1:
							iVar3 = 5;
							break;
						case 2:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						case 3:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						}
				}
				break;
			case 3:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iVar3 = 1;
						break;
					case 1:
						iVar3 = 3;
						break;
				}
				break;
			case 5:
				iVar3 = 5;
				if (Local_238.f_0 == 2 || Local_238.f_0 == 1)
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				break;
			case 6:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iVar3 = 0;
						break;
					case 1:
						iVar3 = 5;
						break;
				}
				if (Local_238.f_0 == 2 || Local_238.f_0 == 1)
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				else
				{
					iVar0 = (iVar0 - 100);
					iVar1 = (iVar1 - 800);
				}
				break;
			case 7:
				if (iLocal_253 == 8 || iLocal_253 == 9)
				{
					if (iVar2 >= 90)
					{
						iVar3 = 10;
						iVar0 = 400;
						iVar1 = 700;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						case 1:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						case 2:
							iVar3 = 7;
							break;
						}
				}
				break;
			case 4:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						iVar3 = 0;
						break;
					case 1:
						iVar3 = 1;
						break;
					case 2:
						iVar3 = 2;
						break;
					case 3:
						iVar3 = 3;
						break;
				}
				if ((Local_238.f_0 == 2 || Local_238.f_0 == 1) || (iLocal_189 == 2 && MISC::GET_GAME_TIMER() < iLocal_558 + 6000))
				{
					iVar0 = 400;
					iVar1 = 700;
				}
				else
				{
					iVar0 = (iVar0 - 100);
					iVar1 = (iVar1 - 800);
				}
				break;
			case 8:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iVar3 = 0;
						break;
					case 1:
						iVar3 = 1;
						break;
					case 2:
						iVar3 = 3;
						break;
				}
				iVar0 = (iVar0 - 100);
				iVar1 = (iVar1 - 800);
				break;
			case 9:
				if (iLocal_253 == 8 || iLocal_253 == 9)
				{
					if (iVar2 >= 80)
					{
						iVar3 = 10;
					}
					else if (iVar2 <= 20)
					{
						iVar3 = 9;
						iVar0 = 400;
						iVar1 = 700;
					}
					else
					{
						iVar3 = 8;
						iVar0 = 400;
						iVar1 = 700;
					}
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							iVar3 = 8;
							iVar0 = 400;
							iVar1 = 700;
							break;
						case 1:
							iVar3 = 9;
							iVar0 = 400;
							iVar1 = 700;
							break;
						}
				}
				break;
		}
		func_256(iVar3);
		iLocal_557 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1));
	}
}

void func_256(int iParam0)//Position - 0x23CD2
{
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		iLocal_253 = iParam0;
	}
}

void func_264()//Position - 0x24225
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	bool bVar7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	func_858();
	bLocal_394 = false;
	if (Local_238.f_0 != 2)
	{
		__LIB_11__.func_817(&Local_194, 1, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		if (MISC::GET_GAME_TIMER() <= iLocal_558 + 3000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 2f);
		}
	}
	if (!iLocal_306)
	{
		if (!bLocal_513)
		{
			if (!bLocal_305)
			{
				bLocal_513 = AUDIO::PREPARE_MUSIC_EVENT("FRA0_BADDY");
			}
		}
		if (bLocal_305)
		{
			if (!iLocal_473)
			{
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_275, 517.26697f, -648.6511f, 23.75121f, true, false, false, true);
				}
				if (!PED::IS_PED_INJURED(Local_234.f_0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_234.f_0, 516.2095f, -646.3057f, 23.75121f, true, false, false, true);
				}
				bLocal_401 = true;
				iLocal_404 = 1;
				iLocal_473 = 1;
			}
		}
		if (!bLocal_305)
		{
			if (!PED::IS_PED_INJURED(iLocal_277))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_277, PLAYER::PLAYER_PED_ID(), true))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_277, 1000, true, 0);
				}
			}
			if (Local_238.f_0 == 2)
			{
				func_856(!bLocal_401);
			}
			else
			{
				func_27(1);
			}
			func_855();
			func_852();
			func_851();
			func_850();
			if (!bLocal_511)
			{
				if (iLocal_392)
				{
					bLocal_511 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_OPEN_CAR");
				}
			}
			func_821();
			if (bLocal_394)
			{
				__LIB_0__.func_186();
			}
			if (!bLocal_305)
			{
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_275, 0) > 100f)
					{
						func_809(9);
					}
				}
			}
			switch (iLocal_266)
			{
				case 0:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_593) && bLocal_494)
					{
						if (iLocal_265 >= 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								PED::DELETE_PED(&iLocal_277);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_234.f_0);
							TASK::TASK_PLAY_ANIM(Local_234.f_0, func_205(3), "open_train_car_og", 1000f, -8f, -1, 2, 0.2f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_234.f_0, false, false);
							iLocal_266 = 1;
						}
					}
					break;
				case 1:
					if (!bLocal_512)
					{
						bLocal_512 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_FOUND");
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_234.f_0, func_205(3), "open_train_car_og", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_234.f_0, func_205(3), "open_train_car_og") >= 0.98f)
						{
							TASK::TASK_PLAY_ANIM(Local_234.f_0, func_205(3), "find_ballasog_og", -8f, -8f, -1, 32768, 0f, false, false, false);
							iLocal_266 = 2;
						}
					}
					break;
				case 2:
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_234.f_0, 2f);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_234.f_0, func_205(3), "find_ballasog_og", 3))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_234.f_0, "hood5", 5, 32, -1);
						iLocal_564 = MISC::GET_GAME_TIMER();
						iLocal_266 = 3;
					}
					break;
				}
		}
		if (!bLocal_401)
		{
			func_808();
			if (!iLocal_421)
			{
				if (func_251("FKN0_FIND", 0, 0, 0, 1))
				{
					iLocal_421 = 1;
					iLocal_602 = MISC::GET_GAME_TIMER() + 6000;
				}
			}
			else
			{
				if (!iLocal_310)
				{
					if (iLocal_374)
					{
						iLocal_310 = 1;
					}
					else if (Local_238.f_0 == 0)
					{
						iLocal_310 = func_208("FC_GOCHOP", 1, 0, 7500);
					}
				}
				if (!bLocal_376)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_602)
					{
						bLocal_376 = func_251("FKN0_FIND2", 0, 0, 0, 1);
					}
				}
				func_799();
				if (iLocal_243 == 0 || iLocal_243 == 7)
				{
					fVar0 = 20f;
				}
				else
				{
					fVar0 = 40f;
				}
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, fVar0, fVar0, 4f, false, true, 0) && !bLocal_394)
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, -1, 2048, 4);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
				}
				if (iLocal_374)
				{
					if (iLocal_243 == 0 || iLocal_243 == 7)
					{
						if (!PED::IS_PED_INJURED(iLocal_275))
						{
							bVar1 = ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, fVar0, fVar0, 2f, false, true, 0);
							bVar2 = ENTITY::IS_ENTITY_AT_COORD(iLocal_275, 530.0251f, -678.95294f, 23.70727f, 2.5f, 2.5f, 2.5f, false, true, 0);
							if (bVar1 && !bLocal_394)
							{
								if (iLocal_310)
								{
									func_254("FKN0_FOLLOW", -1, 6000, 9000, 0);
								}
							}
							switch (iLocal_251)
							{
								case 0:
									if (!bVar2)
									{
										func_255(5);
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
										{
											TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_275, 1f, false);
										}
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_275, 528.3346f, -679.31793f, 23.79582f, 3f, 3f, 3f, false, false, 0))
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_578)
											{
												iLocal_251 = 1;
											}
										}
									}
									else
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
										TASK::TASK_GO_STRAIGHT_TO_COORD(0, 529.89215f, -679.12616f, 23.71802f, 1f, 20000, 83.2f, 0.5f);
										TASK::TASK_PLAY_ANIM(0, func_205(0), "CHOP_BARK_AT_CARRIAGE", 8f, -8f, -1, 1, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
										PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_275, false);
										iLocal_455 = 0;
										iLocal_251 = 4;
									}
									break;
								case 1:
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_275, 0f, false);
									}
									if (ENTITY::GET_ENTITY_SPEED(iLocal_275) <= 0.2f)
									{
										iLocal_251 = 2;
										iLocal_577 = MISC::GET_GAME_TIMER();
									}
									break;
								case 2:
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_275, 0f, false);
									}
									if (MISC::GET_GAME_TIMER() >= iLocal_577 + 100)
									{
										TASK::TASK_PLAY_ANIM(iLocal_275, func_205(3), "FRA0_IG_14_CHOP_SNIFF_FWDS", 2f, 2f, -1, 0, 0f, false, false, false);
										iLocal_577 = MISC::GET_GAME_TIMER();
										iLocal_251 = 3;
									}
									break;
								case 3:
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 1f);
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_275, func_205(3), "FRA0_IG_14_CHOP_SNIFF_FWDS", 3))
									{
										iLocal_251 = 0;
										iLocal_389 = 0;
										iLocal_577 = MISC::GET_GAME_TIMER();
										iLocal_578 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 11000));
									}
									else if (!iLocal_389)
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_577 + 600)
										{
											func_256(6);
											iLocal_389 = 1;
										}
									}
									break;
								case 4:
									PED::SET_PED_RESET_FLAG(iLocal_275, 71, true);
									func_255(8);
									break;
							}
							if (iLocal_251 == 0)
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
								{
									Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
									if (Var3.f_1 < -607.75f)
									{
										TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood8", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_275, 0f, 1.5f, 0f), &iVar4);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood8", iVar4, 4, -1);
										iLocal_578 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
								}
								else
								{
									iVar5 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_275);
									if (iVar5 > iLocal_581)
									{
										iLocal_581 = iVar5;
									}
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_275))
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
					if (Var6.f_1 < -614.75f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_275, 1f);
					}
					else if (Var6.f_1 < -608.75f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_275, 2f);
					}
					if (!iLocal_375)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, 542.4755f, -618.7315f, 23.74781f, 2f, 2f, 2f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 30f, 30f, 30f, false, false, 0))
							{
								TASK::TASK_PLAY_ANIM(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0f, false, false, false);
							}
							iLocal_578 = MISC::GET_GAME_TIMER() + 1000;
							iLocal_375 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 30f, 30f, 30f, false, false, 0))
					{
						if (func_798(0))
						{
							iLocal_374 = 1;
						}
					}
				}
				switch (iLocal_265)
				{
					case 0:
						if (Local_246[2 /*12*/].f_3[1 /*4*/].f_2 == 2 && ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_593) && bLocal_494) || MISC::GET_GAME_TIMER() >= iLocal_589 + 5000))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								PED::DELETE_PED(&iLocal_277);
							}
							if (!PED::IS_PED_INJURED(iLocal_275))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_275);
								PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_275);
								Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(func_797(2), 0f, 0f, 83.079f, 2);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_235.f_9, false);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(3), "find_ballasog_chop", 1000f, -8f, 6, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_235.f_9, fLocal_548);
								iLocal_251 = 4;
							}
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							ENTITY::FREEZE_ENTITY_POSITION(Local_234.f_0, false);
							__LIB_0__.func_296();
							func_231();
							if (!HUD::DOES_BLIP_EXIST(iLocal_291))
							{
								iLocal_291 = func_242(iLocal_275, 0, 102);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_288))
							{
								iLocal_288 = func_242(Local_234.f_0, 1, 145);
							}
							Local_246[2 /*12*/].f_3[0 /*4*/].f_3 = 3f;
							func_796(2, 0);
							iLocal_586 = MISC::GET_GAME_TIMER();
							func_795(&Local_238, -0.75f, 0f);
							iLocal_265 = 1;
						}
						break;
					case 1:
						__LIB_8__.func_611(0);
						if (MISC::GET_GAME_TIMER() >= iLocal_586 + 3400)
						{
							if (!bLocal_402)
							{
								bLocal_402 = func_251("FKN0_FOUND1", 0, 0, 0, 1);
							}
						}
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_205(3), "find_ballasOG_Fra", 8f, -1f, -1, 0, 0f, false, false, false);
							}
							func_793();
							if (!PED::IS_PED_INJURED(Local_234.f_0))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(Local_234.f_0);
							}
							iLocal_564 = MISC::GET_GAME_TIMER();
							iLocal_310 = 0;
							iLocal_421 = 0;
							bLocal_401 = true;
							iLocal_265 = 2;
						}
						break;
					}
			}
		}
		else
		{
			if (!bLocal_305)
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.97f);
				if (!iLocal_403)
				{
					func_793();
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_205(3), "find_ballasOG_Fra", 3))
				{
					__LIB_8__.func_611(0);
				}
				func_792();
				func_255(4);
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_234.f_0))
				{
					func_809(4);
				}
			}
			func_75("FRA_0_MCS_4_P2_T3", func_84(22), 100f, 120f);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(iLocal_274))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", iLocal_274, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Chop", iLocal_275, 0);
				}
				if (!PED::IS_PED_INJURED(Local_234.f_0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ballas_OG", Local_234.f_0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ballas_OG", 0, 0, 0, 0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0) && !PED::IS_PED_INJURED(iLocal_275))
			{
				bVar7 = false;
				Var8 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
				PED::SET_PED_RESET_FLAG(iLocal_275, 71, true);
				PED::SET_PED_RESET_FLAG(Local_234.f_0, 71, true);
				if (!bLocal_305)
				{
					if (!iLocal_404)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_234.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_234.f_0, 3f, false);
							if (bVar7)
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(Local_234.f_0, 0.5f);
							}
							else
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(Local_234.f_0, 0.99f);
							}
						}
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_275, 3f, false);
							if (Var8.f_1 <= -670f)
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, Local_234.f_0, 3f, 3f, 3f, false, false, 0))
								{
									fVar9 = 1.15f;
								}
								else
								{
									fVar9 = 1.05f;
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, Local_234.f_0, 2f, 2f, 2f, false, false, 0))
							{
								fVar9 = 1.13f;
							}
							else
							{
								fVar9 = 1.15f;
							}
							if (fVar9 > fLocal_547)
							{
								fLocal_547 = (fLocal_547 + (0.1f * SYSTEM::TIMESTEP()));
								if (fLocal_547 > fVar9)
								{
									fLocal_547 = fVar9;
								}
							}
							else if (fVar9 < fLocal_547)
							{
								fLocal_547 = (fLocal_547 - (0.1f * SYSTEM::TIMESTEP()));
								if (fLocal_547 < fVar9)
								{
									fLocal_547 = fVar9;
								}
							}
							if (bVar7)
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, (fLocal_547 / 2f));
							}
							else
							{
								PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, fLocal_547);
							}
						}
						else if (!iLocal_403)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9) >= 0.98f)
								{
									PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_275, iLocal_799);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood5", 5, 32, -1);
									iLocal_403 = 1;
								}
							}
						}
					}
				}
			}
			if (!bLocal_305)
			{
				if (!bLocal_409)
				{
					bLocal_409 = func_251("FKN0_DFYOU", 0, 0, 0, 1);
				}
				else if (!iLocal_421)
				{
					if (iLocal_250 < 1)
					{
						iLocal_421 = func_251("FKN0_DOWN", 0, 0, 0, 1);
					}
					else
					{
						iLocal_421 = func_251("FKN0_DOWN2", 0, 0, 0, 1);
					}
					iLocal_603 = MISC::GET_GAME_TIMER() + 2800;
				}
				else
				{
					if (!iLocal_310)
					{
						if (Local_238.f_0 == 0)
						{
							iLocal_310 = 1;
						}
					}
					if (!bLocal_408)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_603)
						{
							bLocal_408 = func_251("FKN0_FOUND2", 0, 0, 0, 1);
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0) && !PED::IS_PED_INJURED(iLocal_275))
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
				if (!iLocal_404)
				{
					if (!iLocal_406)
					{
						if (Var10.f_1 >= -647.2f || (Var10.f_1 >= -660f && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, Local_234.f_0, 1.6f, 1.6f, 3f, false, false, 0)))
						{
							Local_235.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
							Local_235.f_6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_275, 2) };
							Local_235.f_6.f_2 = __LIB_11__.func_806(Local_235.f_6.f_2);
							Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_235.f_3, Local_235.f_6, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(3), "FRA_0_IG_CHOP_TAKE_DOWN_BALLA_CHOP", 4f, -8f, 5, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9, 0.03f);
							Local_234.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
							Local_234.f_6 = { ENTITY::GET_ENTITY_ROTATION(Local_234.f_0, 2) };
							Local_234.f_6.f_2 = __LIB_11__.func_806(Local_234.f_6.f_2);
							Local_533 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_234.f_3, Local_234.f_6.f_2, 0f, -1.5f, -0.6f) };
							Local_534 = { Local_234.f_6 };
							Local_234.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_234.f_3, Local_234.f_6, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_234.f_0, Local_234.f_9, func_205(3), "FRA_0_IG_CHOP_TAKE_DOWN_BALLA_VICTIM", 4f, -8f, 5, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_234.f_9, 0.03f);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
							iLocal_406 = 1;
						}
					}
					else
					{
						__LIB_26__.func_588(&(Local_235.f_3), Local_533, (0.85f * 2f));
						__LIB_26__.func_588(&(Local_235.f_6), Local_534, (7.5f * 2f));
						PED::SET_SYNCHRONIZED_SCENE_ORIGIN(Local_235.f_9, Local_235.f_3, Local_235.f_6, 2);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_234.f_9))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_234.f_9) >= 0.237f)
							{
								func_788(0);
							}
							if (!iLocal_405)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_234.f_9) >= 0.147f)
								{
									iLocal_405 = 1;
								}
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_234.f_9) >= 0.98f)
							{
								iLocal_404 = 1;
							}
						}
						else
						{
							func_788(0);
							iLocal_404 = 1;
						}
						if (!iLocal_410)
						{
							if (func_251("FKN0_DFALL", 0, 0, 0, 1))
							{
								iLocal_410 = 1;
								iLocal_556 = MISC::GET_GAME_TIMER() + 3000;
							}
						}
					}
				}
				else if (!bLocal_305)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 30f, 30f, 8f, false, true, 0))
					{
						func_254("FKN0_DHELP", -1, 5000, 10000, 0);
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, Local_234.f_0, 2f, 2f, 2f, false, true, 0))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_595 + 2000)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) + Vector(0f, 0f, 1.5f), 2f, 20000, 40000f, 0.5f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
							iLocal_595 = MISC::GET_GAME_TIMER();
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_275, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_234.f_0, 0);
						TASK::TASK_PLAY_ANIM(0, func_205(3), "CHOP_BARK_AT_BALLAS", 8f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
					}
					if (!iLocal_407)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_594 + 2500)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 35f, 35f, 35f, false, false, 0))
							{
								PED::SET_PED_TO_RAGDOLL(Local_234.f_0, 2000, 3000, 1, true, true, false);
								PED::CREATE_NM_MESSAGE(true, 34);
								PED::GIVE_PED_NM_MESSAGE(Local_234.f_0);
								iLocal_407 = 1;
							}
						}
					}
					else if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_234.f_0))
					{
						PED::RESET_PED_RAGDOLL_TIMER(Local_234.f_0);
					}
					else if (PED::CAN_PED_RAGDOLL(Local_234.f_0))
					{
						PED::SET_PED_TO_RAGDOLL(Local_234.f_0, 2000, 3000, 1, true, true, false);
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 7f, 7f, 2f, false, true, 0) || bLocal_305)
				{
					if ((iLocal_404 || iLocal_405) || bLocal_305)
					{
						if (func_210() || bLocal_305)
						{
							if (__LIB_0__.func_90())
							{
								iLocal_306 = 1;
							}
						}
					}
				}
			}
		}
	}
	else if (!iLocal_381)
	{
		if (!bLocal_401)
		{
		}
		else
		{
			func_267();
		}
	}
	else
	{
		func_265();
	}
}

void func_265()//Position - 0x252B3
{
	switch (iLocal_193)
	{
		case 0:
			func_7(1, 1, -1, 1, 1, 1, 1, 1);
			MISC::CLEAR_AREA(502.85f, -648.35f, 23.75f, 4f, true, false, false, false);
			if ((!PED::IS_PED_INJURED(iLocal_275) && !PED::IS_PED_INJURED(iLocal_277)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_277, true), ENTITY::GET_ENTITY_ROTATION(iLocal_277, 2), 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), Local_235.f_9, func_205(3), "Hump_Exit_Scene_FRANKLIN", 1000f, -4f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(3), "Hump_Exit_Scene_CHOP", 1000f, -4f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_277, Local_235.f_9, func_205(3), "Hump_Exit_Scene_LADYDOG", 1000f, -4f, 0, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_235.f_9, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_275, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_277, false, false);
				func_57();
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, Local_235.f_9, "Hump_Exit_Scene_CAM", func_205(3));
			}
			iLocal_553 = MISC::GET_GAME_TIMER();
			iLocal_193 = 1;
			break;
		case 1:
			if (!bLocal_386)
			{
				if (!iLocal_387)
				{
					if (func_251("FKN0_MALE", 1, 0, 0, 1))
					{
						iLocal_387 = 1;
						bLocal_386 = true;
					}
				}
				else
				{
					bLocal_386 = func_251("FC_GOAWAY", 1, 0, 0, 1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
			{
			}
			else
			{
				iLocal_193 = 2;
			}
			break;
		case 2:
			func_266(6);
			func_51(0, 3, 0);
			iLocal_383 = 1;
			iLocal_381 = 0;
			iLocal_306 = 0;
			break;
	}
}

void func_266(int iParam0)//Position - 0x25495
{
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		switch (iParam0)
		{
			case 2:
				TASK::TASK_PLAY_ANIM(iLocal_275, func_205(3), "FRA_0_IG_15_CHOP_SPOTS_DOG", 8f, -8f, -1, 0, 0f, false, false, false);
				iLocal_393 = 1;
				iLocal_389 = 0;
				break;
			case 1:
				TASK::TASK_PLAY_ANIM(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0f, false, false, false);
				break;
			case 3:
				if (!PED::IS_PED_INJURED(iLocal_277))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
					Local_528 = { 502.91776f, -648.6818f, 23.75121f };
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 506.25156f, -650.0049f, 23.75121f, 3f, 20000, 10f, 0, 69.6f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 506.25156f, -650.0049f, 23.75121f, 2f, 20000, 1.1f, 0, 69.6f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_528, 1f, 20000, 0.08f, 0, 71.1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
				}
				break;
			case 4:
				func_239(8000, -1, -1);
				iLocal_587 = MISC::GET_GAME_TIMER();
				break;
			case 5:
				if (__LIB_0__.func_405("FC_CLOSER", 0, 0))
				{
					__LIB_26__.func_550(0, 1, 0, 0);
				}
				__LIB_0__.func_402(0, -1);
				break;
			case 6:
				iLocal_572 = MISC::GET_GAME_TIMER();
				__LIB_0__.func_402(0, -1);
				if (!PED::IS_PED_INJURED(iLocal_277))
				{
					if (iLocal_243 >= 4)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_277, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					}
				}
				PED::SET_PED_CAN_RAGDOLL(iLocal_275, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_275, true);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 519.48f, -657.47f, 23.79f, 3f, 20000, 2f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_84(27), 3f, 20000, 1f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
				break;
			case 7:
				iLocal_389 = 0;
				break;
		}
		iLocal_573 = MISC::GET_GAME_TIMER();
		iLocal_243 = iParam0;
	}
}

void func_267()//Position - 0x256A4
{
	int iVar0;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_279[0], false);
	}
	switch (iLocal_193)
	{
		case 0:
			iLocal_553 = MISC::GET_GAME_TIMER();
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_274);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_274, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				ENTITY::DETACH_ENTITY(iLocal_275, true, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_275, "Chop", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_234.f_0, "Ballas_OG", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], false);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_279[0], "Kidnapping_Van", 0, 0, 32);
			}
			__LIB_6__.func_771();
			CUTSCENE::START_CUTSCENE(2048);
			iLocal_524 = 0;
			RECORDING::REPLAY_START_EVENT(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_193 = 1;
			break;
		case 1:
			if (!iLocal_308)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_49();
					MISC::CLEAR_AREA(511.55f, -652.05f, 23.75f, 20f, true, true, false, false);
					MISC::CLEAR_AREA_OF_PROJECTILES(511.9636f, -658.37054f, 23.75104f, 25f, 0);
					FIRE::STOP_FIRE_IN_RANGE(511.9636f, -658.37054f, 23.75104f, 25f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(511.9636f, -658.37054f, 23.75104f, 25f);
					__LIB_11__.func_817(&Local_194, 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_279[0], 0);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_279[0], 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_279[0], 3, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_279[0], 2, 0, 0f);
					}
					__LIB_11__.func_867(iLocal_279[0]);
					func_45(6);
					if (bLocal_305)
					{
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_305 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_308 = 1;
				}
			}
			if (!iLocal_485)
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Ballas_OG", 0)))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Ballas_OG", joaat("CSB_BallasOG")));
					if (!PED::IS_PED_INJURED(iVar0))
					{
						PED::APPLY_PED_BLOOD_SPECIFIC(iVar0, 2, 0.536f, 0.601f, 93.24f, 0.695f, -1, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iVar0, 2, 0.536f, 0.561f, 95.04f, 0.695f, -1, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(iVar0, 2, 0.476f, 0.531f, 95.14f, 0.695f, -1, 0f, "stab");
						iLocal_485 = 1;
					}
				}
			}
			if (!bLocal_514)
			{
				if (bLocal_513)
				{
					bLocal_514 = __LIB_11__.func_828("FRA0_BADDY");
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 37400)
			{
			}
			if (!iLocal_524)
			{
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_524 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ballas_OG", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(Local_234.f_0))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_234.f_0, false);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_234.f_0, false);
					PED::SET_PED_INTO_VEHICLE(Local_234.f_0, iLocal_279[0], 2);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_234.f_0, false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(iLocal_275))
				{
					func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 1, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
					PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(iLocal_274))
				{
					func_47(0);
					PED::SET_PED_INTO_VEHICLE(iLocal_274, iLocal_279[0], 0);
					TASK::TASK_PLAY_ANIM(iLocal_274, func_205(4), "InCar_PhoneIdle_Lem", 1000f, -8f, -1, 1, 0f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_274, false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Kidnapping_Van", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					func_44();
					func_7(0, 1, -1, CUTSCENE::WAS_CUTSCENE_SKIPPED(), 1, 1, 1, 1);
					func_268(4, 0, 1, 1, 0, 1, 1, 1);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_279[0], true, true, true);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false);
			}
			break;
		case 2:
			break;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}

void func_268(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x25B54
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iParam7 = iParam7;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!bLocal_305)
				{
					Var0 = { func_84(1) };
					fVar1 = 93.3f;
				}
				else
				{
					Var0 = { func_84(2) };
					fVar1 = -106.5f;
				}
				break;
			case 1:
				Var0 = { func_84(11) };
				fVar1 = 164.8f;
				break;
			case 2:
				Var0 = { func_84(5) };
				fVar1 = -19.4f;
				break;
			case 3:
				if (!bLocal_305)
				{
					Var0 = { func_84(20) };
					fVar1 = 137.26f;
				}
				else
				{
					Var0 = { 517.1f, -647.4f, 24.2f };
					fVar1 = -86f;
				}
				break;
			case 4:
				if (!bLocal_305)
				{
					Var0 = { func_84(7) };
					fVar1 = 175.46f;
				}
				else
				{
					Var0 = { func_84(4) };
					fVar1 = 143.1f;
				}
				break;
		}
		__LIB_11__.func_805();
		if (bParam5)
		{
			MISC::CLEAR_AREA(Var0, 10000f, true, false, false, false);
			if (iParam0 == 3)
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(539.1184f, -626.1908f, 23.78954f, 40f);
			}
		}
		SYSTEM::WAIT(0);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
		if (__LIB_0__.func_294() && !iLocal_515)
		{
			__LIB_0__.func_370(Var0, fVar1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
		}
	}
	func_779(iParam0, 1, 0);
	func_774(iParam0, 1, 0);
	func_769(iParam0, 1, 0);
	func_763(iParam0, 1, 0);
	func_758(iParam0, 1, 0);
	func_753(iParam0, 1, 0);
	func_747(iParam0, 1, 0);
	func_736(iParam0, 1, 0);
	func_735(1);
	CUTSCENE::REMOVE_CUTSCENE();
	iLocal_192 = 0;
	func_733(iParam0);
	if (bParam6)
	{
		func_231();
	}
	__LIB_26__.func_550((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	__LIB_9__.func_981(&uLocal_28, 0, 0);
	if (bParam1)
	{
		iVar2 = __LIB_23__.func_164(iParam0);
		bVar3 = __LIB_0__.func_504(iVar2);
		if (__LIB_20__.func_728() != iVar2)
		{
			while (!func_534(&(Local_194[bVar3]), iVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!__LIB_36__.func_72(&Local_194, bVar3))
			{
				SYSTEM::WAIT(0);
			}
			while (!__LIB_42__.func_146(&Local_194, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_194[iVar4]))
				{
					PED::DELETE_PED(&(Local_194[iVar4]));
				}
				iVar4++;
			}
		}
	}
	if (bParam1 || iParam4)
	{
		if (bParam1)
		{
			iVar5 = 0;
			while (iVar5 <= 9)
			{
				__LIB_0__.func_202(&uLocal_634, iVar5);
				iVar5++;
			}
		}
		__LIB_0__.func_203(&uLocal_634, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		Local_194.f_6 = __LIB_0__.func_504(__LIB_23__.func_164(iParam0));
		func_483(iParam0);
		func_482(PLAYER::PLAYER_PED_ID(), __LIB_23__.func_164(iParam0), iParam0);
		if (bParam1)
		{
			__LIB_11__.func_832();
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
		{
			if (iParam0 >= 4)
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_279[0], 0);
			}
		}
		if (iParam0 > 0)
		{
			func_472(iParam0);
		}
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (bParam1)
	{
		VEHICLE::DELETE_ALL_TRAINS();
	}
	func_34(&Local_238, &Local_194, 0);
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_471();
				if (__LIB_0__.func_294())
				{
					if (__LIB_26__.func_465())
					{
						if (__LIB_12__.func_37(__LIB_11__.func_687(), 0f, 0f, 0f, 1))
						{
							iVar6 = func_428(func_84(30), 95.68f);
							__LIB_42__.func_532(iVar6, func_84(30), 95.68f, 24, 0);
						}
					}
				}
			}
			iLocal_296[23] = 0;
			func_393(iParam0, 1);
			func_391(iParam0, 1);
			func_390(1, 0);
			func_389(0);
			if (!bLocal_305)
			{
				func_52(0);
			}
			PATHFIND::SET_GPS_DISABLED_ZONE(164f, -257f, -80f, 436f, 62f, 120f);
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_274))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_274, func_84(12), true, false, false, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_275, func_84(15), true, false, false, true);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				AUDIO::SET_ANIMAL_MOOD(iLocal_275, 1);
			}
			iLocal_601 = MISC::GET_GAME_TIMER() + 100;
			iLocal_600 = MISC::GET_GAME_TIMER() + 1500;
			iLocal_627 = MISC::GET_GAME_TIMER() + 2000;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			break;
		case 1:
			if (bParam1)
			{
				iLocal_491 = 0;
				func_393(iParam0, 1);
				func_391(iParam0, 1);
				func_388(iParam0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[0], true, true, false);
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					ENTITY::DETACH_ENTITY(iLocal_275, true, true);
				}
				func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 0, 1, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
				PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
			}
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_275);
			func_390(1, 1);
			if (!bParam1)
			{
				MISC::CLEAR_AREA(143.22f, -458.9f, 41.05f, 810f, true, false, false, false);
			}
			func_85(1);
			func_47(1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			if (!PED::IS_PED_INJURED(iLocal_276))
			{
				TASK::TASK_COWER(iLocal_276, -1);
			}
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
			PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				iLocal_550 = ENTITY::GET_ENTITY_HEALTH(iLocal_279[0]);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], true);
			}
			fLocal_113 = 50f;
			bLocal_62 = true;
			bLocal_69 = true;
			iLocal_584 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(293.12726f, -83.67029f, 69.13698f, 5.1f, 0f, false);
			func_384(func_387(), 1, 1, 1);
			func_383(0);
			func_382(1);
			func_381();
			func_380();
			func_52(2);
			STREAMING::SET_PED_POPULATION_BUDGET(2);
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_275, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_279[1], "FRANKLIN_0_Bike_Group", 0f);
			}
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_379();
				}
				__LIB_11__.func_828("FRA0_CHASE_RESTART");
			}
			break;
		case 2:
			if (bParam1)
			{
				iLocal_263 = 2;
				func_378();
				func_393(iParam0, 1);
				func_391(iParam0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[0], true, true, false);
				}
			}
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_584);
			func_389(0);
			func_377();
			if (bParam1)
			{
				MISC::CLEAR_AREA(466f, -579f, 28f, 10000f, true, false, false, false);
			}
			func_390(1, 1);
			if (bParam1)
			{
				MISC::CLEAR_AREA_OF_OBJECTS(494f, -516f, 23f, 10f, 2);
			}
			Local_235.f_0 = iLocal_275;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], false);
			}
			func_239(11000, -1, -1);
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				if (!bParam1)
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_234.f_0, "FRANKLIN_0_D_Group", 0f);
				}
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_234.f_0);
				if (!HUD::DOES_BLIP_EXIST(iLocal_288))
				{
					iLocal_288 = func_242(Local_234.f_0, 1, 145);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_234.f_0, true);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_234.f_0, iLocal_799);
				if (bParam1)
				{
					PED::FORCE_PED_MOTION_STATE(Local_234.f_0, joaat("MotionState_Sprint"), true, 1, false);
				}
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_234.f_0, 3f);
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, false, false, false, false, false, false, true);
				ENTITY::DETACH_ENTITY(iLocal_275, true, true);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_275, iLocal_799);
				if (bParam1)
				{
				}
				PED::SET_PED_CAN_RAGDOLL(iLocal_275, true);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 3f);
				iLocal_291 = func_242(iLocal_275, 0, 102);
			}
			if (!PED::IS_PED_INJURED(iLocal_274) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				if (!bParam1)
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
					{
						ENTITY::DETACH_ENTITY(iLocal_274, true, true);
						PED::SET_PED_INTO_VEHICLE(iLocal_274, iLocal_279[0], -1);
					}
				}
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_279[0], true);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_274, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			func_375(&Local_238);
			if (bParam1)
			{
				func_372(1, 0, 1, 1, 1);
				bLocal_452 = false;
			}
			else
			{
				bLocal_452 = true;
			}
			func_369();
			func_368();
			if (bParam1)
			{
				__LIB_11__.func_828("FRA0_FOOT_CHASE_RESTART");
				func_52(3);
			}
			else
			{
				__LIB_11__.func_828("FRA0_FRANK_CHASE");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_279[1], 0f);
				}
			}
			if (!bParam1)
			{
				iLocal_310 = 1;
			}
			break;
		case 3:
			func_367();
			func_390(1, 1);
			func_389(0);
			iLocal_593 = 123;
			if (bParam1)
			{
				func_393(iParam0, 1);
				func_391(iParam0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_279[0], true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[0], true, true, false);
				}
				iLocal_390 = 0;
				iLocal_604 = __LIB_26__.func_472(1, 1);
				iLocal_416 = 0;
				iLocal_418 = 0;
				bLocal_464 = false;
				iLocal_267 = 2;
				iLocal_564 = MISC::GET_GAME_TIMER();
				iLocal_564 = iLocal_564;
				func_362(1, 3, 0);
				func_362(2, 3, 0);
				iLocal_569[0] = MISC::GET_GAME_TIMER();
				iLocal_569[1] = (MISC::GET_GAME_TIMER() - 10000);
				iLocal_569[2] = (MISC::GET_GAME_TIMER() - 10000);
				func_858();
				SYSTEM::WAIT(0);
				func_369();
				func_375(&Local_238);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_279[0], func_84(31), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_279[0], 87.3f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], true);
			}
			iVar7 = 0;
			while (iVar7 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_245[iVar7 /*5*/]))
				{
					PED::DELETE_PED(&(Local_245[iVar7 /*5*/]));
				}
				iVar7++;
			}
			iVar7 = 0;
			while (iVar7 < iLocal_278)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_278[iVar7]))
				{
					PED::DELETE_PED(&(iLocal_278[iVar7]));
				}
				iVar7++;
			}
			iVar7 = 0;
			while (iVar7 < 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar7]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_280[iVar7]));
				}
				iVar7++;
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_275, iLocal_799);
				iLocal_291 = func_242(iLocal_275, 0, 102);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_275);
				TASK::WAYPOINT_RECORDING_GET_COORD("hood8", 6, &Var8);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
				if (!bParam1)
				{
					TASK::TASK_PAUSE(0, 3500);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var8, 3f, 20000, 0.25f, 0, 175.5f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
				PED::SET_PED_CAN_RAGDOLL(iLocal_275, true);
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_234.f_0, iLocal_799);
			}
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_274, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_279[0], 0);
			}
			if (!bLocal_305)
			{
				func_45(4);
				func_45(3);
				func_52(6);
				if (bParam1)
				{
					__LIB_11__.func_828("FRA0_HIDING_RESTART");
				}
				else
				{
					__LIB_11__.func_828("FRA0_SEARCH");
				}
			}
			break;
		case 4:
			func_390(0, 0);
			if (bParam1)
			{
				iLocal_520 = 1;
				func_393(iParam0, 1);
				func_391(iParam0, 1);
			}
			func_389(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_279[0], 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_279[0], false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[0], true, true, false);
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_234.f_0, iLocal_799);
				PED::SET_PED_CAN_RAGDOLL(Local_234.f_0, true);
				func_788(0);
				ENTITY::SET_ENTITY_PROOFS(Local_234.f_0, false, false, false, false, false, false, false, false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_234.f_0, false);
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_234.f_0, false);
				if (bParam1)
				{
					PED::SET_PED_INTO_VEHICLE(Local_234.f_0, iLocal_279[0], 2);
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_234.f_0, iLocal_279[0], -1, 2048, 2);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_234.f_0, joaat("PLAYER"));
			}
			func_52(7);
			if (bParam1)
			{
				if (bLocal_305)
				{
					iLocal_255 = 7;
					iLocal_432 = 1;
					iLocal_249 = 7;
				}
			}
			break;
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (bParam1)
	{
		if (iParam0 >= 4)
		{
			func_85(1);
			func_47(0);
		}
		else if (iParam0 >= 2)
		{
			func_85(1);
			func_47(1);
		}
		else if (iParam0 < 1)
		{
			func_85(0);
			func_47(0);
		}
	}
	if (iParam0 == 1)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
	}
	else
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), true);
	}
	else
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), false);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		__LIB_32__.func_762(1);
		Global_113330 = 1;
	}
	else
	{
		__LIB_32__.func_762(0);
		Global_113330 = 0;
	}
	Global_113330 = 1;
	if (iParam0 == 2)
	{
		GRAPHICS::SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(4f);
	}
	else
	{
		GRAPHICS::SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(1f);
	}
	if (iParam0 == 2)
	{
		__LIB_9__.func_485(0, 1);
		__LIB_9__.func_485(2, 1);
	}
	else
	{
		__LIB_9__.func_485(0, 0);
		__LIB_9__.func_485(2, 0);
	}
	if (iParam0 != 1)
	{
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	if (iParam0 >= 1 && iParam0 <= 3)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		PED::SET_CREATE_RANDOM_COPS(true);
	}
	iVar9 = 0;
	if (iParam0 >= 4)
	{
		iVar9 = 1;
	}
	if (func_359(iParam0))
	{
		__LIB_42__.func_814(iParam0, func_358(iParam0), iVar9, 0, 0, 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_551 = 0;
		}
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_515)
		{
			if (__LIB_0__.func_294())
			{
				if (__LIB_0__.func_295())
				{
					switch (iParam0)
					{
						case 4:
							iVar10 = iLocal_279[0];
							break;
					}
					iVar11 = 1;
					iVar12 = -1;
					__LIB_6__.func_775(iVar10, iVar12, iVar11);
					iLocal_515 = 1;
				}
			}
		}
		switch (iParam0)
		{
			case 0:
				if (!bLocal_305)
				{
					func_272();
					func_271();
					func_269();
				}
				break;
			case 1:
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 2000, 0f, true, false);
				}
				break;
			case 2:
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Sprint"), true, 1, false);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 1, false);
				}
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_275, joaat("MotionState_Sprint"), true, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 3f);
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 2:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
			else
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0f, true, false);
			}
			break;
	}
	if (iParam0 != 2)
	{
		iLocal_557 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
	}
	else
	{
		iLocal_557 = MISC::GET_GAME_TIMER() + 300;
	}
	iLocal_558 = MISC::GET_GAME_TIMER();
	iLocal_189 = iParam0;
}

void func_269()//Position - 0x26A57
{
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_275, 91.93f);
		PED::FORCE_PED_MOTION_STATE(iLocal_275, joaat("MotionState_Walk"), false, 1, false);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 1f);
		func_270();
	}
}

void func_270()//Position - 0x26A92
{
	TASK::TASK_GOTO_ENTITY_OFFSET_XY(iLocal_275, iLocal_274, -1, 0.2f, -0.8f, 3f, 1.25f, 1);
}

void func_271()//Position - 0x26AB6
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 1, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		}
	}
}

void func_272()//Position - 0x26B27
{
	if (!PED::IS_PED_INJURED(iLocal_274))
	{
		iLocal_287 = func_242(iLocal_274, 0, 145);
		ENTITY::SET_ENTITY_HEADING(iLocal_274, 95.7f);
		func_273();
		PED::FORCE_PED_MOTION_STATE(iLocal_274, joaat("MotionState_Walk"), false, 1, false);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_274, 1f);
	}
}

void func_273()//Position - 0x26B6F
{
	int iVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood6", ENTITY::GET_ENTITY_COORDS(iLocal_274, true), &iVar0);
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_274, "hood6", iVar0 + 1, 517, -1);
}

char* func_358(int iParam0)//Position - 0x2F572
{
	switch (iParam0)
	{
		case 0:
			return "Get to Vinewood";
			break;
		case 1:
			return "Van chase";
			break;
		case 2:
			return "Foot chase";
			break;
		case 3:
			return "Find hiding bad guy";
			break;
		case 4:
			return "Drop off gangster";
			break;
	}
	return "invalid";
}

int func_359(int iParam0)//Position - 0x2F5D5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_362(int iParam0, int iParam1, bool bParam2)//Position - 0x2F64F
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	float fVar3;
	switch (iParam0)
	{
		case 0:
			iVar0 = 18;
			Var1 = { 526.88f, -534.26f, 24.12f };
			bVar2 = false;
			fVar3 = 0f;
			break;
		case 1:
			iVar0 = 19;
			if (iParam1 == 2)
			{
				Var1 = { 543.18f, -579.82f, 25.41f };
				fVar3 = 0f;
			}
			else
			{
				Var1 = { 538.92f, -615f, 24.22f };
				fVar3 = 2.67f;
			}
			bVar2 = true;
			break;
		case 2:
			iVar0 = 20;
			bVar2 = true;
			if (iParam1 == 2)
			{
				if (bParam2)
				{
					Var1 = { 547.8f, -608.82f, 24.9f };
					fVar3 = 8f;
				}
				else
				{
					Var1 = { 532.1f, -741.2f, 24f };
					fVar3 = 0f;
				}
			}
			else
			{
				Var1 = { 556.5f, -530.7f, 24.2f };
				fVar3 = 5.5f;
			}
			break;
	}
	iLocal_281[iParam0] = VEHICLE::CREATE_MISSION_TRAIN(iVar0, Var1, bVar2, 0, 0);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_281[iParam0], fVar3);
	VEHICLE::SET_TRAIN_SPEED(iLocal_281[iParam0], fVar3);
	if (iParam1 == 2)
	{
		func_363(1, iParam0, 1, 1);
	}
	fLocal_549[iParam0] = fVar3;
	switch (iParam0)
	{
		case 1:
			VEHICLE::SET_VEHICLE_EXTRA(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_281[iParam0], 1), 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_281[iParam0], 2), 1, false);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_281[iParam0], 1), 3);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_281[iParam0], 2), 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(VEHICLE::GET_TRAIN_CARRIAGE(iLocal_281[iParam0], 3), 2);
			break;
	}
}

void func_363(bool bParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2F7EF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (bParam0)
	{
		iVar0 = iLocal_281[iParam1];
		iVar1 = iParam1 + 7;
	}
	else
	{
		iVar0 = iLocal_280[iParam1];
		iVar1 = iParam1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		bVar2 = iParam3;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278[iVar1]))
		{
			if (!bVar2)
			{
				if (PED::CAN_CREATE_RANDOM_DRIVER())
				{
					iLocal_278[iVar1] = PED::CREATE_RANDOM_PED_AS_DRIVER(iVar0, true);
				}
				else
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				STREAMING::REQUEST_MODEL(func_76(6));
				if (STREAMING::HAS_MODEL_LOADED(func_76(6)))
				{
					iLocal_278[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(iVar0, 26, func_76(6), -1, true, true);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_278[iVar1]))
		{
			if (bParam2)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_278[iVar1], true);
			}
			TASK::TASK_LOOK_AT_ENTITY(iLocal_278[iVar1], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		}
	}
}

void func_367()//Position - 0x2FB49
{
	iLocal_277 = PED::CREATE_PED(26, func_76(4), func_84(24), 81.09f, true, true);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_277, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_277, 4, 0, 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_277, true);
	PED::SET_PED_KEEP_TASK(iLocal_277, true);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_277, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_277, false);
	ENTITY::SET_ENTITY_PROOFS(iLocal_277, false, false, false, false, false, false, false, true);
	TASK::TASK_PLAY_ANIM(iLocal_277, func_205(3), "FRA_0_IG_15_FEMALE_DOG_IDLE", 8f, -8f, -1, 262153, 0f, false, false, false);
}

void func_368()//Position - 0x2FBD4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
	{
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_279[1]) > 300f)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_279[1], 300f);
		}
		bLocal_454 = true;
	}
}

void func_369()//Position - 0x2FC10
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var2 = { func_797(iVar0) };
		fVar3 = func_371(iVar0);
		Local_246[iVar0 /*12*/] = OBJECT::CREATE_OBJECT(func_76(22), Var2, true, true, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_246[iVar0 /*12*/], Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_246[iVar0 /*12*/], fVar3);
		ENTITY::SET_ENTITY_COLLISION(Local_246[iVar0 /*12*/], false, false);
		ENTITY::SET_ENTITY_VISIBLE(Local_246[iVar0 /*12*/], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_246[iVar0 /*12*/], true);
		Local_246[iVar0 /*12*/].f_2 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 0;
			Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_3 = 0.0348647f;
			Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/] = OBJECT::CREATE_OBJECT(func_76(18), Var2, true, true, false);
			func_796(iVar0, iVar1);
			if (!(iVar0 == 2 && iVar1 == 0))
			{
				Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1 = OBJECT::CREATE_OBJECT(func_76(19), Var2, true, true, false);
				func_370(iVar0, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_370(int iParam0, int iParam1)//Position - 0x2FD38
{
	struct<3> Var0;
	struct<3> Var1;
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { 547.6336f, -625.1866f, 25.0932f };
				Var1 = { 0f, 0f, -97f };
			}
			else
			{
				Var0 = { 550.2516f, -628.7438f, 25.1332f };
				Var1 = { 0f, 0f, 83f };
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				Var0 = { 545.6388f, -641.4614f, 25.0902f };
				Var1 = { 0f, 0f, -97f };
			}
			else
			{
				Var0 = { 548.2568f, -645.0185f, 25.0932f };
				Var1 = { 0f, 0f, 83f };
			}
			break;
		case 2:
			Var0 = { 528.0478f, -680.6921f, 25.1482f };
			Var1 = { 0f, 0f, 83.36f };
			break;
		case 3:
			if (iParam1 == 0)
			{
				Var0 = { 523.6058f, -693.3036f, 25.1182f };
				Var1 = { 0f, 0f, -96f };
			}
			else
			{
				Var0 = { 526.2855f, -696.8145f, 25.1382f };
				Var1 = { 0f, 0f, 84f };
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				Var0 = { 517.8303f, -704.0568f, 25.1782f };
				Var1 = { 0f, 0f, -95.66f };
			}
			else
			{
				Var0 = { 520.5307f, -707.5518f, 25.1332f };
				Var1 = { 0f, 0f, 84.34f };
			}
			break;
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, Var0, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, Var1, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/].f_1, true);
}

float func_371(int iParam0)//Position - 0x2FEED
{
	switch (iParam0)
	{
		case 0:
			return 83f;
			break;
		case 1:
			return 83f;
			break;
		case 2:
			return 83.36f;
			break;
		case 3:
			return 84f;
			break;
		case 4:
			return 84.34f;
			break;
	}
	return 0f;
}

void func_372(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2FF52
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		bVar8 = true;
		iVar9 = 0;
		bVar10 = false;
		iVar7 = 0;
		Var3 = { IntToFloat(iVar0 * 20), IntToFloat(iVar0 * 10), -10f };
		fVar4 = 0f;
		iVar1 = 0;
		iVar2 = -1;
		fVar5 = 0f;
		fVar6 = 1f;
		switch (iVar0)
		{
			case 0:
				Var3 = { 491.43f, -537.62f, 23.75f };
				fVar4 = -92.24f;
				iVar2 = 2;
				bVar10 = true;
				iVar11 = 9;
				iVar9 = 1;
				break;
			case 1:
				iVar1 = 11;
				iVar2 = 2;
				iVar11 = 10;
				fVar6 = 0.7f;
				break;
			case 2:
				Var3 = { 451.5f, -681.2f, 28.1f };
				fVar4 = -95.1f;
				iVar2 = 0;
				iVar11 = 11;
				iVar9 = 1;
				break;
			case 3:
				Var3 = { 488.74f, -541.46f, 23.75f };
				fVar4 = 85.92f;
				iVar2 = 1;
				iVar11 = 10;
				bVar8 = false;
				break;
			case 4:
				iVar1 = 1;
				fVar5 = 700f;
				fVar6 = 0.8f;
				iVar2 = 0;
				iVar11 = 11;
				iVar9 = 1;
				break;
			case 5:
				bVar10 = true;
				Var3 = { 464.37f, -651.16f, 28.06f };
				fVar4 = 173f;
				iVar2 = 0;
				iVar11 = 11;
				iVar9 = 1;
				break;
			case 6:
				iVar1 = 12;
				iVar2 = 1;
				iVar11 = 11;
				bVar8 = false;
				break;
		}
		if (iVar0 != 2 || iParam0)
		{
			if ((iVar11 == 11 && iParam3) || (iVar11 != 11 && iParam2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar0]))
				{
					iLocal_280[iVar0] = VEHICLE::CREATE_VEHICLE(func_76(iVar11), Var3, fVar4, true, true, false);
					iVar7 = 1;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[iVar0], false) && iVar7)
		{
			if (bVar8)
			{
				func_363(0, iVar0, 1, iVar9);
			}
			if (iVar2 >= 0)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_280[iVar0], iVar2);
			}
			if (iVar0 == 4)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_280[iVar0], "FRANKLIN_0_Reversing_Bus", 0f);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_280[iVar0], true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_280[iVar0], 3);
			if (iVar1 > 0 && !bVar10)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_280[iVar0], iVar1, func_374(), true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_280[iVar0], fVar5);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_280[iVar0], fVar6);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_280[iVar0], true);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_280[iVar0]);
			}
			else
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_280[iVar0], 5f);
				if (bVar8)
				{
					iVar12 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_280[iVar0], -1, false);
					if (!PED::IS_PED_INJURED(iVar12))
					{
						switch (iVar0)
						{
							case 2:
								TASK::TASK_VEHICLE_TEMP_ACTION(iVar12, iLocal_280[iVar0], 24, 20000);
								break;
							default:
								if (!bVar10)
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iVar12, iLocal_280[iVar0], 2.5f, 786603);
								}
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_373();
	}
	if (bParam4)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar13 = 0;
			iVar14 = iVar0;
			if (iVar14 != 1 && iVar14 != 2)
			{
				switch (iVar14)
				{
					case 0:
						Var3 = { 459.48f, -618.58f, 27.51f };
						fVar4 = 168.82f;
						iVar13 = 1;
						break;
					case 1:
						Var3 = { 466.44f, -630.26f, 27.51f };
						fVar4 = 61.25f;
						break;
					case 2:
						Var3 = { 464.38f, -629.01f, 27.51f };
						fVar4 = 240.21f;
						break;
					case 3:
						Var3 = { 471.04f, -591.71f, 27.51f };
						fVar4 = -27f;
						iVar13 = 1;
						break;
					case 4:
						Var3 = { 525.01f, -475.66f, 23.73f };
						fVar4 = 173.22f;
						iVar13 = 1;
						break;
					case 5:
						Var3 = { 515.01f, -512.17f, 23.75f };
						fVar4 = -4.39f;
						iVar13 = 1;
						break;
				}
				bVar15 = iVar13;
				if (!bVar15)
				{
					if (PED::CAN_CREATE_RANDOM_PED(false))
					{
						Local_245[iVar0 /*5*/] = PED::CREATE_RANDOM_PED(Var3);
						ENTITY::SET_ENTITY_HEADING(Local_245[iVar0 /*5*/], fVar4);
					}
					else
					{
						bVar15 = true;
					}
				}
				if (bVar15)
				{
					Local_245[iVar0 /*5*/] = PED::CREATE_PED(26, func_76(6), Var3, fVar4, true, true);
				}
				if (!PED::IS_PED_INJURED(Local_245[iVar0 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_245[iVar0 /*5*/], true);
					PED::SET_PED_KEEP_TASK(Local_245[iVar0 /*5*/], true);
				}
				Local_245[iVar0 /*5*/].f_4 = 0;
			}
			iVar0++;
		}
	}
}

void func_373()//Position - 0x303DA
{
	func_362(0, 2, 0);
	func_362(1, 2, 0);
	func_362(2, 2, 0);
}

char* func_374()//Position - 0x303F7
{
	return "fchase";
}

void func_375(var uParam0)//Position - 0x30403
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		if (uParam0->f_12 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_12))
			{
				AUDIO::STOP_SOUND(uParam0->f_12);
			}
			AUDIO::RELEASE_SOUND_ID(uParam0->f_12);
			uParam0->f_12 = -1;
		}
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		uParam0->f_10 = 0;
		uParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		__LIB_23__.func_161(uParam0);
	}
}

void func_377()//Position - 0x304EE
{
	MISC::CLEAR_AREA(466f, -579f, 28f, 5f, true, false, false, false);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(461f, -584f, 23f, 471f, -574f, 33f, 0);
	MISC::CLEAR_AREA(512f, -509f, 25f, 5f, true, false, false, false);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(507f, -514f, 20f, 517f, -504f, 30f, 0);
}

void func_378()//Position - 0x3056C
{
	int iVar0;
	iLocal_236 = 0;
	iLocal_237 = 0;
	iLocal_244 = 0;
	Local_234.f_1 = 0;
	Local_234.f_2 = -1;
	Local_234.f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_361[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_362[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_245[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_363[iVar0] = 0;
		iVar0++;
	}
	iLocal_585 = 0;
	iLocal_359 = 0;
	iLocal_364 = 0;
	iLocal_365 = 0;
	iLocal_256 = 0;
}

void func_379()//Position - 0x30610
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[1], true, true, false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1], 1, func_387(), true);
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1], 6500f);
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_279[1], true);
	}
}

void func_380()//Position - 0x30674
{
	iLocal_54 = 1;
}

void func_381()//Position - 0x3067F
{
	Local_138[0 /*3*/] = { 370.608f, 148.292f, 102.507f };
	fLocal_74[0] = -0.006632f;
	fLocal_75[0] = 0.014155f;
	fLocal_76[0] = -0.182076f;
	fLocal_77[0] = 0.98316f;
	iLocal_114[0] = 3;
	fLocal_78[0] = 6300f;
	iLocal_164[0] = joaat("emperor");
	Local_138[1 /*3*/] = { 331.042f, 319.164f, 104.564f };
	fLocal_74[1] = 0.00314f;
	fLocal_75[1] = -0.035098f;
	fLocal_76[1] = 0.793992f;
	fLocal_77[1] = -0.606906f;
	iLocal_114[1] = 6;
	fLocal_78[1] = 6900f;
	iLocal_164[1] = joaat("emperor");
	Local_138[2 /*3*/] = { 354.004f, 101.885f, 101.654f };
	fLocal_74[2] = 0.074331f;
	fLocal_75[2] = 0.014374f;
	fLocal_76[2] = -0.163023f;
	fLocal_77[2] = 0.983713f;
	iLocal_114[2] = 5;
	fLocal_78[2] = 9000f;
	iLocal_164[2] = joaat("surfer");
	Local_138[3 /*3*/] = { 338.717f, 94.4636f, 99.6961f };
	fLocal_74[3] = -0.047298f;
	fLocal_75[3] = -0.086009f;
	fLocal_76[3] = 0.979703f;
	fLocal_77[3] = 0.174778f;
	iLocal_114[3] = 4;
	fLocal_78[3] = 10800f;
	iLocal_164[3] = joaat("surfer");
	Local_138[6 /*3*/] = { 289.1492f, -78.19f, 69.8117f };
	fLocal_74[6] = -0.0056f;
	fLocal_75[6] = 0.0028f;
	fLocal_76[6] = -0.1669f;
	fLocal_77[6] = 0.986f;
	iLocal_114[6] = 9;
	fLocal_78[6] = 22029f;
	iLocal_164[6] = joaat("surge");
	Local_138[7 /*3*/] = { 277.135f, -76.6118f, 69.5846f };
	fLocal_74[7] = -0.018861f;
	fLocal_75[7] = -8.8E-05f;
	fLocal_76[7] = 0.983353f;
	fLocal_77[7] = 0.180722f;
	iLocal_114[7] = 10;
	fLocal_78[7] = 22491f;
	iLocal_164[7] = joaat("emperor");
	Local_138[8 /*3*/] = { 290.813f, -40.5747f, 71.6218f };
	fLocal_74[8] = -0.031225f;
	fLocal_75[8] = -0.06827f;
	fLocal_76[8] = 0.98142f;
	fLocal_77[8] = 0.176577f;
	iLocal_114[8] = 8;
	fLocal_78[8] = 22577f;
	iLocal_164[8] = joaat("picador");
	Local_138[9 /*3*/] = { 283.2936f, -92.4837f, 69.7937f };
	fLocal_74[9] = -0.0028f;
	fLocal_75[9] = 0.0039f;
	fLocal_76[9] = -0.2089f;
	fLocal_77[9] = 0.9779f;
	iLocal_114[9] = 11;
	fLocal_78[9] = 22100f;
	iLocal_164[9] = joaat("picador");
	Local_138[10 /*3*/] = { 260.135f, -121.876f, 67.5997f };
	fLocal_74[10] = -0.03257f;
	fLocal_75[10] = -0.065471f;
	fLocal_76[10] = 0.982638f;
	fLocal_77[10] = 0.170511f;
	iLocal_114[10] = 12;
	fLocal_78[10] = 22200f;
	iLocal_164[10] = joaat("dominator");
	Local_138[11 /*3*/] = { 181.29f, -208.808f, 53.4241f };
	fLocal_74[11] = 0.000229f;
	fLocal_75[11] = -0.000583f;
	fLocal_76[11] = 0.818823f;
	fLocal_77[11] = -0.574044f;
	iLocal_114[11] = 15;
	fLocal_78[11] = 25705f;
	iLocal_164[11] = joaat("dominator");
	Local_138[12 /*3*/] = { 193.856f, -218.429f, 53.6124f };
	fLocal_74[12] = -0.019551f;
	fLocal_75[12] = -0.00641f;
	fLocal_76[12] = 0.817768f;
	fLocal_77[12] = -0.575179f;
	iLocal_114[12] = 16;
	fLocal_78[12] = 26211f;
	iLocal_164[12] = joaat("picador");
	Local_138[13 /*3*/] = { 179.383f, -213.776f, 53.5721f };
	fLocal_74[13] = -0.00917f;
	fLocal_75[13] = -0.024153f;
	fLocal_76[13] = 0.815156f;
	fLocal_77[13] = -0.578666f;
	iLocal_114[13] = 18;
	fLocal_78[13] = 26100f;
	iLocal_164[13] = joaat("emperor");
	Local_138[14 /*3*/] = { 250.805f, -222.757f, 53.7297f };
	fLocal_74[14] = -0.008553f;
	fLocal_75[14] = -0.006151f;
	fLocal_76[14] = 0.578679f;
	fLocal_77[14] = 0.815488f;
	iLocal_114[14] = 13;
	fLocal_78[14] = 26500f;
	iLocal_164[14] = joaat("issi2");
	Local_138[15 /*3*/] = { 268.287f, -229.843f, 53.546f };
	fLocal_74[15] = -0.011404f;
	fLocal_75[15] = -0.006868f;
	fLocal_76[15] = 0.562785f;
	fLocal_77[15] = 0.826496f;
	iLocal_114[15] = 17;
	fLocal_78[15] = 26800f;
	iLocal_164[15] = 0;
	Local_138[20 /*3*/] = { 184.405f, -360.884f, 43.522f };
	fLocal_74[20] = 0.028156f;
	fLocal_75[20] = -0.004063f;
	fLocal_76[20] = -0.187644f;
	fLocal_77[20] = 0.981825f;
	iLocal_114[20] = 19;
	fLocal_78[20] = 27100f;
	iLocal_164[20] = joaat("picador");
	Local_138[21 /*3*/] = { 149.265f, -402.928f, 40.8279f };
	fLocal_74[21] = -0.016245f;
	fLocal_75[21] = -0.006338f;
	fLocal_76[21] = 0.988408f;
	fLocal_77[21] = 0.150818f;
	iLocal_114[21] = 25;
	fLocal_78[21] = 30000f;
	iLocal_164[21] = joaat("picador");
	Local_138[22 /*3*/] = { 184.745f, -374.707f, 42.5835f };
	fLocal_74[22] = 0.023113f;
	fLocal_75[22] = 0.022802f;
	fLocal_76[22] = -0.207431f;
	fLocal_77[22] = 0.977711f;
	iLocal_114[22] = 22;
	fLocal_78[22] = 31000f;
	iLocal_164[22] = joaat("emperor");
	Local_138[23 /*3*/] = { 142.21f, -473.939f, 42.6967f };
	fLocal_74[23] = -0.015556f;
	fLocal_75[23] = 0.005188f;
	fLocal_76[23] = -0.1636f;
	fLocal_77[23] = 0.98639f;
	iLocal_114[23] = 27;
	fLocal_78[23] = 32500f;
	iLocal_164[23] = joaat("ruiner");
	Local_138[24 /*3*/] = { 163.8123f, -430.8667f, 40.8155f };
	fLocal_74[24] = -0.0114f;
	fLocal_75[24] = 0.0023f;
	fLocal_76[24] = -0.1527f;
	fLocal_77[24] = 0.9882f;
	iLocal_114[24] = 24;
	fLocal_78[24] = 33039f;
	iLocal_164[24] = joaat("surge");
	Local_138[25 /*3*/] = { 141.901f, -496.677f, 42.9011f };
	fLocal_74[25] = -0.008686f;
	fLocal_75[25] = 0.008488f;
	fLocal_76[25] = -0.139259f;
	fLocal_77[25] = 0.990182f;
	iLocal_114[25] = 29;
	fLocal_78[25] = 34000f;
	iLocal_164[25] = joaat("surge");
	Local_138[27 /*3*/] = { 151.388f, -465.998f, 41.923f };
	fLocal_74[27] = -0.035501f;
	fLocal_75[27] = 0.005991f;
	fLocal_76[27] = -0.151597f;
	fLocal_77[27] = 0.987786f;
	iLocal_114[27] = 28;
	fLocal_78[27] = 35500f;
	iLocal_164[27] = joaat("serrano");
	Local_138[29 /*3*/] = { 126.577f, -495.934f, 42.7229f };
	fLocal_74[29] = 0.004987f;
	fLocal_75[29] = 0.000985f;
	fLocal_76[29] = 0.986378f;
	fLocal_77[29] = 0.164417f;
	iLocal_114[29] = 30;
	fLocal_78[29] = 37500f;
	iLocal_164[29] = joaat("serrano");
	Local_138[30 /*3*/] = { 109.107f, -551.095f, 42.9767f };
	fLocal_74[30] = 0.003323f;
	fLocal_75[30] = 0.006051f;
	fLocal_76[30] = 0.985997f;
	fLocal_77[30] = 0.166621f;
	iLocal_114[30] = 34;
	fLocal_78[30] = 38300f;
	iLocal_164[30] = joaat("picador");
	Local_138[33 /*3*/] = { 138.572f, -587.025f, 43.6916f };
	fLocal_74[33] = -0.009659f;
	fLocal_75[33] = -0.014386f;
	fLocal_76[33] = 0.824594f;
	fLocal_77[33] = -0.565459f;
	iLocal_114[33] = 35;
	fLocal_78[33] = 40500f;
	iLocal_164[33] = joaat("issi2");
	Local_138[34 /*3*/] = { 231.514f, -688.146f, 36.2398f };
	fLocal_74[34] = 0.034012f;
	fLocal_75[34] = 0.021372f;
	fLocal_76[34] = -0.157919f;
	fLocal_77[34] = 0.986635f;
	iLocal_114[34] = 40;
	fLocal_78[34] = 44000f;
	iLocal_164[34] = joaat("dilettante");
	Local_138[35 /*3*/] = { 244.913f, -595.018f, 42.6265f };
	fLocal_74[35] = -0.022264f;
	fLocal_75[35] = -0.018083f;
	fLocal_76[35] = 0.975585f;
	fLocal_77[35] = 0.217742f;
	iLocal_114[35] = 36;
	fLocal_78[35] = 45000f;
	iLocal_164[35] = joaat("surge");
	Local_138[36 /*3*/] = { 232.357f, -637.287f, 39.5948f };
	fLocal_74[36] = -0.007482f;
	fLocal_75[36] = -0.045975f;
	fLocal_76[36] = 0.98294f;
	fLocal_77[36] = 0.17793f;
	iLocal_114[36] = 37;
	fLocal_78[36] = 45800f;
	iLocal_164[36] = joaat("issi2");
	Local_138[37 /*3*/] = { 190.257f, -798.034f, 31.049f };
	fLocal_74[37] = 0.023148f;
	fLocal_75[37] = 0.011794f;
	fLocal_76[37] = -0.181103f;
	fLocal_77[37] = 0.98312f;
	iLocal_114[37] = 41;
	fLocal_78[37] = 47700f;
	iLocal_164[37] = joaat("ruiner");
	Local_138[38 /*3*/] = { 185.226f, -799.949f, 30.9391f };
	fLocal_74[38] = 0.009881f;
	fLocal_75[38] = -0.000991f;
	fLocal_76[38] = -0.157923f;
	fLocal_77[38] = 0.987401f;
	iLocal_114[38] = 42;
	fLocal_78[38] = 47700f;
	iLocal_164[38] = joaat("issi2");
	Local_138[39 /*3*/] = { 209.914f, -698.063f, 35.545f };
	fLocal_74[39] = -0.006113f;
	fLocal_75[39] = -0.035622f;
	fLocal_76[39] = 0.983831f;
	fLocal_77[39] = 0.175416f;
	iLocal_114[39] = 38;
	fLocal_78[39] = 49000f;
	iLocal_164[39] = joaat("surge");
	Local_138[40 /*3*/] = { 210.827f, -712.926f, 34.6642f };
	fLocal_74[40] = -0.003782f;
	fLocal_75[40] = -0.025728f;
	fLocal_76[40] = 0.980536f;
	fLocal_77[40] = 0.194608f;
	iLocal_114[40] = 39;
	fLocal_78[40] = 49000f;
	iLocal_164[40] = joaat("dilettante");
	Local_138[41 /*3*/] = { 178.818f, -847.36f, 30.6204f };
	fLocal_74[41] = 0.013997f;
	fLocal_75[41] = 0.004302f;
	fLocal_76[41] = -0.155335f;
	fLocal_77[41] = 0.987753f;
	iLocal_114[41] = 44;
	fLocal_78[41] = 51000f;
	iLocal_164[41] = joaat("ruiner");
	Local_138[42 /*3*/] = { 389.96f, -854.675f, 29.5846f };
	fLocal_74[42] = 0.005696f;
	fLocal_75[42] = 0.002982f;
	fLocal_76[42] = 0.725659f;
	fLocal_77[42] = 0.688024f;
	iLocal_114[42] = 48;
	fLocal_78[42] = 51600f;
	iLocal_164[42] = joaat("hauler");
	Local_138[43 /*3*/] = { 146.167f, -815.117f, 30.7372f };
	fLocal_74[43] = 0.000773f;
	fLocal_75[43] = -0.001176f;
	fLocal_76[43] = 0.802925f;
	fLocal_77[43] = -0.596078f;
	iLocal_114[43] = 46;
	fLocal_78[43] = 52000f;
	iLocal_164[43] = joaat("dilettante");
	Local_138[45 /*3*/] = { 269.023f, -847.023f, 28.8521f };
	fLocal_74[45] = -0.00897f;
	fLocal_75[45] = -0.000601f;
	fLocal_76[45] = 0.549913f;
	fLocal_77[45] = 0.835174f;
	iLocal_114[45] = 45;
	fLocal_78[45] = 54500f;
	iLocal_164[45] = joaat("emperor");
	Local_138[46 /*3*/] = { 474.185f, -848.452f, 36.2803f };
	fLocal_74[46] = -0.036736f;
	fLocal_75[46] = -0.035333f;
	fLocal_76[46] = 0.709033f;
	fLocal_77[46] = 0.703331f;
	iLocal_114[46] = 51;
	fLocal_78[46] = 56000f;
	iLocal_164[46] = joaat("dilettante");
	Local_138[48 /*3*/] = { 338.219f, -865.494f, 28.824f };
	fLocal_74[48] = 0.015373f;
	fLocal_75[48] = 0.015142f;
	fLocal_76[48] = -0.70616f;
	fLocal_77[48] = 0.707723f;
	iLocal_114[48] = 50;
	fLocal_78[48] = 59000f;
	iLocal_164[48] = joaat("dilettante");
	Local_140[1 /*3*/] = { 285.644f, 159.194f, 103.819f };
	fLocal_83[1] = 0.009833f;
	fLocal_84[1] = -0.014362f;
	fLocal_85[1] = 0.808141f;
	fLocal_86[1] = -0.588732f;
	iLocal_117[1] = 7;
	fLocal_87[1] = 14800f;
	fLocal_88[1] = 1f;
	iLocal_166[1] = joaat("emperor");
	Local_140[2 /*3*/] = { 443.814f, 112.308f, 99.295f };
	fLocal_83[2] = 0.01759f;
	fLocal_84[2] = 0.011825f;
	fLocal_85[2] = 0.579222f;
	fLocal_86[2] = 0.814895f;
	iLocal_117[2] = 2;
	fLocal_87[2] = 15500f;
	fLocal_88[2] = 1f;
	iLocal_166[2] = joaat("surge");
	Local_140[3 /*3*/] = { 265.923f, 167.687f, 104.4f };
	fLocal_83[3] = 0.011139f;
	fLocal_84[3] = -0.011657f;
	fLocal_85[3] = 0.806724f;
	fLocal_86[3] = -0.590708f;
	iLocal_117[3] = 14;
	fLocal_87[3] = 16100f;
	fLocal_88[3] = 0.9f;
	iLocal_166[3] = joaat("surge");
	Local_140[4 /*3*/] = { 278.781f, -233.142f, 53.7075f };
	fLocal_83[4] = -0.001098f;
	fLocal_84[4] = 0.002631f;
	fLocal_85[4] = 0.574218f;
	fLocal_86[4] = 0.818697f;
	iLocal_117[4] = 20;
	fLocal_87[4] = 28500f;
	fLocal_88[4] = 0.8f;
	iLocal_166[4] = joaat("picador");
	Local_140[5 /*3*/] = { 294.562f, -239.728f, 53.3336f };
	fLocal_83[5] = 0.006082f;
	fLocal_84[5] = 0.003727f;
	fLocal_85[5] = 0.558519f;
	fLocal_86[5] = 0.829461f;
	iLocal_117[5] = 21;
	fLocal_87[5] = 28600f;
	fLocal_88[5] = 0.8f;
	iLocal_166[5] = joaat("dominator");
	Local_140[6 /*3*/] = { 160.448f, -202.345f, 53.9951f };
	fLocal_83[6] = 0.00611f;
	fLocal_84[6] = -0.010066f;
	fLocal_85[6] = 0.799184f;
	fLocal_86[6] = -0.600971f;
	iLocal_117[6] = 23;
	fLocal_87[6] = 28300f;
	fLocal_88[6] = 0.9f;
	iLocal_166[6] = joaat("issi2");
	Local_140[7 /*3*/] = { 236.955f, -354.8f, 43.9326f };
	fLocal_83[7] = -0.01241f;
	fLocal_84[7] = -0.009908f;
	fLocal_85[7] = 0.575418f;
	fLocal_86[7] = 0.817706f;
	iLocal_117[7] = 26;
	fLocal_87[7] = 32500f;
	fLocal_88[7] = 0.9f;
	iLocal_166[7] = joaat("emperor");
	Local_140[8 /*3*/] = { 243.385f, -350.767f, 44.1248f };
	fLocal_83[8] = -0.011465f;
	fLocal_84[8] = 0.013013f;
	fLocal_85[8] = 0.588918f;
	fLocal_86[8] = 0.808007f;
	iLocal_117[8] = 31;
	fLocal_87[8] = 33500f;
	fLocal_88[8] = 0.9f;
	iLocal_166[8] = joaat("ruiner");
	Local_140[9 /*3*/] = { 113.611f, -316.672f, 45.3552f };
	fLocal_83[9] = 0.00846f;
	fLocal_84[9] = -0.018241f;
	fLocal_85[9] = 0.827523f;
	fLocal_86[9] = -0.561072f;
	iLocal_117[9] = 32;
	fLocal_87[9] = 32200f;
	fLocal_88[9] = 0.9f;
	iLocal_166[9] = joaat("surge");
	Local_140[10 /*3*/] = { 110.55f, -592.478f, 44.2156f };
	fLocal_83[10] = -0.007297f;
	fLocal_84[10] = 0.028491f;
	fLocal_85[10] = -0.184284f;
	fLocal_86[10] = 0.982433f;
	iLocal_117[10] = 33;
	fLocal_87[10] = 33300f;
	fLocal_88[10] = 1E-07f;
	iLocal_166[10] = joaat("hauler");
	Local_140[11 /*3*/] = { 105.86f, -590.119f, 43.7371f };
	fLocal_83[11] = -0.003333f;
	fLocal_84[11] = 0.011106f;
	fLocal_85[11] = -0.189616f;
	fLocal_86[11] = 0.98179f;
	iLocal_117[11] = 49;
	fLocal_87[11] = 33300f;
	fLocal_88[11] = 1E-07f;
	iLocal_166[11] = joaat("ruiner");
	Local_140[12 /*3*/] = { 498.819f, -821.764f, 24.9128f };
	fLocal_83[12] = -0.006844f;
	fLocal_84[12] = 0.004888f;
	fLocal_85[12] = 0.711778f;
	fLocal_86[12] = 0.702352f;
	iLocal_117[12] = 53;
	fLocal_87[12] = 58500f;
	fLocal_88[12] = 1f;
	iLocal_166[12] = joaat("bus");
	Local_140[13 /*3*/] = { 457.43f, -827.98f, 27.4745f };
	fLocal_83[13] = 0.00146f;
	fLocal_84[13] = -0.052743f;
	fLocal_85[13] = 0.7108f;
	fLocal_86[13] = -0.701412f;
	iLocal_117[13] = 52;
	fLocal_87[13] = 65000f;
	fLocal_88[13] = 1f;
	iLocal_166[13] = joaat("bus");
	Local_140[14 /*3*/] = { 427.612f, -680.204f, 29.2124f };
	fLocal_83[14] = 0.009204f;
	fLocal_84[14] = 0.021699f;
	fLocal_85[14] = -0.705913f;
	fLocal_86[14] = 0.707905f;
	iLocal_117[14] = 54;
	fLocal_87[14] = 69570f;
	fLocal_88[14] = 1f;
	iLocal_166[14] = joaat("bus");
}

void func_382(bool bParam0)//Position - 0x31AD3
{
	bLocal_72 = bParam0;
}

void func_383(int iParam0)//Position - 0x31ADF
{
	bLocal_67 = iParam0;
}

void func_384(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x31AEB
{
	struct<3> Var0;
	StringCopy(&cLocal_154, sParam0, 64);
	bLocal_50 = true;
	iLocal_55 = 0;
	iLocal_121 = 0;
	iLocal_122 = 0;
	iLocal_123 = 0;
	iLocal_124 = iParam1;
	iLocal_125 = 0;
	iLocal_126 = 0;
	iLocal_127 = 0;
	iLocal_131 = 0;
	iLocal_134 = 0;
	iLocal_132 = -1;
	iLocal_133 = -1;
	iLocal_135 = 0;
	iLocal_136 = 0;
	fLocal_109 = 0f;
	fLocal_110 = 0f;
	fLocal_95 = 0f;
	iLocal_56 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_142.f_0 = (Var0.f_0 - 100f);
		Local_142.f_1 = (Var0.f_1 - 100f);
		Local_142.f_2 = (Var0.f_2 - 100f);
		Local_143.f_0 = (Var0.f_0 + 100f);
		Local_143.f_1 = (Var0.f_1 + 100f);
		Local_143.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_142, Local_143, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_163);
	__LIB_11__.func_121();
	if (bParam3)
	{
		__LIB_32__.func_762(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_385();
}

void func_385()//Position - 0x31C0E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iLocal_170[iVar0] = 0;
		Local_138[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_74[iVar0] = 0f;
		fLocal_75[iVar0] = 0f;
		fLocal_76[iVar0] = 0f;
		fLocal_77[iVar0] = 0f;
		iLocal_114[iVar0] = 0;
		fLocal_78[iVar0] = 0f;
		iLocal_115[iVar0] = 0;
		iLocal_164[iVar0] = 0;
		iLocal_116[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_171[iVar0] = 0;
		iVar0++;
	}
	iLocal_121 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_172[iVar0] = 0;
		Local_139[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_89[iVar0] = 0f;
		fLocal_90[iVar0] = 0f;
		fLocal_91[iVar0] = 0f;
		fLocal_92[iVar0] = 0f;
		iLocal_120[iVar0] = 0;
		iLocal_165[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_174[iVar0] = 0;
		iVar0++;
	}
	iLocal_123 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_173[iVar0] = 0;
		Local_140[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_83[iVar0] = 0f;
		fLocal_84[iVar0] = 0f;
		fLocal_85[iVar0] = 0f;
		fLocal_86[iVar0] = 0f;
		iLocal_117[iVar0] = 0;
		fLocal_87[iVar0] = 0f;
		iLocal_118[iVar0] = 0;
		iLocal_166[iVar0] = 0;
		iLocal_119[iVar0] = 0;
		iVar0++;
	}
	iLocal_122 = 0;
	iLocal_125 = 0;
	iLocal_128 = 0;
	iLocal_129 = 0;
	iLocal_130 = 0;
}

char* func_387()//Position - 0x31DE1
{
	return "fcuber";
}

void func_388(int iParam0)//Position - 0x31DED
{
	iLocal_276 = PED::CREATE_PED(26, func_76(5), func_84(10), 157.24f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_276, true);
	PED::SET_PED_KEEP_TASK(iLocal_276, true);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 2, 2, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 8, 0, 1, 0);
	PED::CLEAR_ALL_PED_PROPS(iLocal_276);
	if (iParam0 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_234.f_0))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_276, Local_234.f_0, -1, 2048, 2);
			TASK::TASK_LOOK_AT_ENTITY(Local_234.f_0, iLocal_276, -1, 2048, 2);
		}
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_276, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
	}
}

void func_389(bool bParam0)//Position - 0x31EA1
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(428.19f, -688.97f, 10f, 677.84f, -388.92f, 36f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-233f, -1505.74f, -10f, -199f, -1467f, 110f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(495.9f, -652.6f, -10f, 513f, -635.9f, 110f, bParam0, true);
}

void func_390(bool bParam0, int iParam1)//Position - 0x31F18
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { 271.58f, -842.98f, 16.61f };
				Var2 = { 554.26f, -619.07f, 48.8f };
				break;
			case 1:
				Var1 = { 365.07f, 67.98f, 75.12f };
				Var2 = { 509.2f, 151.22f, 121.17f };
				break;
			case 2:
				Var1 = { -91.34664f, -1457.3846f, 0.78976f };
				Var2 = { -73.12756f, -1381.66f, 48.3357f };
				break;
			case 3:
				Var1 = { 454.75815f, -817.2333f, 0.7081f };
				Var2 = { 459.41602f, -685.3982f, 56.66263f };
				break;
		}
		if (bParam0)
		{
			if (iParam1 || iVar0 < 3)
			{
				PATHFIND::SET_ROADS_IN_AREA(Var1, Var2, false, true);
			}
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var1, Var2, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { -76.73f, -1477.92f, 21.17f };
				Var2 = { 16.05f, -1447.28f, 59.54f };
				break;
			case 1:
				Var1 = { 487.24f, -670.92f, 0f };
				Var2 = { 591.02f, -527.37f, 100f };
				break;
			case 2:
				Var1 = { 515.81f, -729.95f, 0f };
				Var2 = { 567.66f, -647.36f, 100f };
				break;
			case 3:
				Var1 = { 454.75815f, -817.2333f, 0.7081f };
				Var2 = { 459.41602f, -685.3982f, 56.66263f };
				break;
		}
		if (bParam0)
		{
			PATHFIND::SET_PED_PATHS_IN_AREA(Var1, Var2, false, 0);
			if (iVar0 == 3)
			{
				PED::SET_PED_NON_CREATION_AREA(Var1, Var2);
			}
		}
		else
		{
			PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var1, Var2, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		iVar0++;
	}
}

void func_391(int iParam0, bool bParam1)//Position - 0x3212D
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_275))
	{
		Var0 = { 0f, 0f, 0f };
		fVar1 = 0f;
		switch (iParam0)
		{
			case 0:
				Var0 = { func_84(15) };
				fVar1 = 91.93f;
				break;
			case 2:
				Var0 = { func_84(16) };
				fVar1 = 27.1f;
				break;
			case 3:
				Var0 = { func_84(23) };
				fVar1 = 156.2f;
				break;
		}
		__LIB_23__.func_162(&iLocal_275, Var0, fVar1, 0);
		iLocal_475 = 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_275, true);
		PED::SET_PED_KEEP_TASK(iLocal_275, true);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_275, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_275, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_275, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_275, joaat("PLAYER"));
		__LIB_0__.func_203(&uLocal_634, 5, iLocal_275, "CHOP", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_275, 3, 0, iLocal_616, 0);
		Local_194[0] = iLocal_275;
		Local_238.f_3 = iLocal_275;
		if (bParam1)
		{
			__LIB_11__.func_832();
			bVar2 = false;
			while (!bVar2)
			{
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_275))
					{
						bVar2 = true;
					}
				}
				else
				{
					bVar2 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_275))
		{
			switch (iParam0)
			{
				case 0:
					AUDIO::STOP_PED_SPEAKING(iLocal_275, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, false, false, false, false, false, false, true);
					break;
				case 1:
					func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 0, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
					PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
					break;
				case 4:
					func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 1, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
					PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
					break;
				default:
					ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, false, false, false, false, false, false, true);
					break;
				}
			}
	}
}

void func_393(int iParam0, bool bParam1)//Position - 0x32416
{
	int iVar0;
	bool bVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_274))
	{
		switch (iParam0)
		{
			case 0:
				__LIB_20__.func_621(&iLocal_274, 19, func_84(12), 95.7f, 0);
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					__LIB_20__.func_621(&iLocal_274, 19, func_84(13), 167.35f, 0);
					func_397(0);
				}
				break;
			default:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					if (iParam0 < 4)
					{
						iVar0 = -1;
					}
					else
					{
						iVar0 = 0;
					}
					__LIB_12__.func_14(&iLocal_274, 19, iLocal_279[0], iVar0, 0);
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_274))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 4, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_274, 6, 1, 0, 0);
		}
		if (bParam1)
		{
			__LIB_11__.func_832();
			bVar1 = false;
			while (!bVar1)
			{
				if (!PED::IS_PED_INJURED(iLocal_274))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_274))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_274))
	{
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_274, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_274, joaat("PLAYER"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_274, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_274, true);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_274, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_274, 32, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_274, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_274, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_274, 206, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_274, 182, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_274, 174, true);
		PED::SET_PED_KEEP_TASK(iLocal_274, true);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_274, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_274, func_394(0), -1, false, false);
		__LIB_0__.func_203(&uLocal_634, 3, iLocal_274, "LAMAR", 0, 1);
	}
}

int func_394(int iParam0)//Position - 0x32605
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_PISTOL");
			break;
	}
	return joaat("WEAPON_UNARMED");
}

void func_397(bool bParam0)//Position - 0x326F0
{
	if (!PED::IS_PED_INJURED(iLocal_274))
	{
		if (bParam0)
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_274, func_84(13), true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_274, 167.35f);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_274);
		}
		TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_274, func_84(29), 3f, 20000, 40000f, 0.5f);
		PED::FORCE_PED_MOTION_STATE(iLocal_274, joaat("MotionState_Sprint"), bParam0, 1, false);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_274, 3f);
	}
}

int func_428(struct<3> Param0, float fParam1)//Position - 0x38116
{
	return __LIB_41__.func_388(&(Global_103950.f_2890), Param0, fParam1, 0);
}

void func_471()//Position - 0x39EFF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_84(1), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.3f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
}

void func_472(int iParam0)//Position - 0x39F36
{
	struct<3> Var0;
	float fVar1;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
			Var0 = { 0f, 10f, 0f };
			fVar1 = 0f;
			break;
		case 2:
			Var0 = { func_84(14) };
			fVar1 = -8.69f;
			break;
		case 3:
			Var0 = { func_84(21) };
			fVar1 = 173f;
			break;
	}
	Local_234.f_0 = PED::CREATE_PED(26, func_76(2), Var0, fVar1, true, true);
	if (iParam0 <= 4)
	{
		ENTITY::SET_ENTITY_PROOFS(Local_234.f_0, false, false, false, true, true, false, false, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_234.f_0, true);
	PED::SET_PED_DIES_WHEN_INJURED(Local_234.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_234.f_0, true);
	PED::SET_PED_KEEP_TASK(Local_234.f_0, true);
	PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Local_234.f_0, false);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_234.f_0, 1);
	PED::CLEAR_ALL_PED_PROPS(Local_234.f_0);
	PED::SET_PED_PROP_INDEX(Local_234.f_0, 0, 0, 0, false);
	PED::SET_PED_COMPONENT_VARIATION(Local_234.f_0, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_234.f_0, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_234.f_0, 10, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(Local_234.f_0, 208, true);
	PED::SET_PED_CONFIG_FLAG(Local_234.f_0, 118, false);
	PED::SET_PED_CONFIG_FLAG(Local_234.f_0, 26, true);
	__LIB_0__.func_203(&uLocal_634, 4, Local_234.f_0, "BALLASOG", 0, 1);
	if (iParam0 <= 2)
	{
		func_473(1, 0f, 2f, 4f, 0f, 1, 1, 0);
		if (iParam0 < 2)
		{
			PED::SET_PED_INTO_VEHICLE(Local_234.f_0, iLocal_279[1], -1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_279[1], false, false, false, true, true, false, false, false);
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_279[1], true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_279[1], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_279[1], false);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[1], false);
	}
	if (iParam0 >= 2)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_234.f_0, "FRANKLIN_0_D_Group", 0f);
	}
	switch (iParam0)
	{
		case 0:
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1], 14, func_374(), true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
			break;
		case 1:
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1], 1, func_387(), true);
			break;
		case 2:
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_279[1], 460.669f, -682.118f, 26.5919f, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_279[1], 0.0150743f, 85.4796f, 10.1482f, 2, true);
			break;
		case 4:
			break;
		case 3:
			ENTITY::FREEZE_ENTITY_POSITION(Local_234.f_0, true);
			break;
	}
}

void func_473(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3A16E
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[iParam0], false))
	{
		iVar0 = func_480(iParam0);
		if (iParam0 == 0)
		{
			func_476(&(iLocal_279[iParam0]), 19, Param1, fParam2, 0, 0);
		}
		else
		{
			iLocal_279[iParam0] = VEHICLE::CREATE_VEHICLE(func_76(iVar0), Param1, fParam2, true, true, false);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_279[iParam0], 5f);
		if (!bParam3)
		{
			func_204(iVar0);
		}
		if (bParam5)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_279[iParam0], false);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_279[iParam0], false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_279[iParam0], true, true, true, true, true, false, false, false);
		}
		if (!bParam4)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_279[iParam0]));
		}
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_279[iParam0], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_279[iParam0], false);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_279[iParam0], true);
		switch (iParam0)
		{
			case 0:
				VEHICLE::SET_VEHICLE_STRONG(iLocal_279[iParam0], true);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_279[iParam0], false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_279[iParam0], 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_279[iParam0], 1, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_279[iParam0], 2, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_279[iParam0], 3, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279[iParam0], true);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_279[iParam0], false);
				__LIB_0__.func_320(iLocal_279[iParam0], -1);
				__LIB_11__.func_148(iLocal_279[iParam0], -1);
				iLocal_550 = ENTITY::GET_ENTITY_HEALTH(iLocal_279[iParam0]);
				break;
			case 1:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_279[iParam0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_279[iParam0], true);
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_279[iParam0], 3);
				break;
			}
	}
}

int func_476(var uParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x3A38D
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__.func_317(bParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_11__.func_860(bParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (bParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (bParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (bParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__.func_176(uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_11__.func_861(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				__LIB_37__.func_339(uParam0, Var0);
				if (bParam1 == 17 || bParam1 == 15)
				{
					__LIB_11__.func_861(*uParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_480(int iParam0)//Position - 0x3ABCB
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		case 1:
			return 8;
			break;
	}
	return 7;
}

void func_482(int iParam0, int iParam1, int iParam2)//Position - 0x3AC09
{
	iParam2 = iParam2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iParam1)
		{
			case 1:
				break;
			case 2:
				break;
			}
	}
}

void func_483(int iParam0)//Position - 0x3AC38
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			func_473(0, func_84(6), 289.94f, 1, 1, 0);
			break;
		case 2:
			func_473(0, func_84(8), -12.7f, 1, 1, 0);
			break;
		case 3:
			func_473(0, func_84(31), 87.3f, 1, 1, 0);
			break;
		case 4:
			if (!bLocal_305)
			{
				func_473(0, func_84(7), 175.46f, 1, 1, 0);
			}
			else
			{
				func_473(0, func_84(4), 143.1f, 1, 1, 0);
			}
			break;
	}
	if (iParam0 >= 1 && iParam0 < 4)
	{
	}
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_84(11), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 164.8f);
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_84(5), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -19.4f);
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_84(20), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.26f);
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], -1);
			}
			break;
	}
}

int func_534(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x40852
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_19__.func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__.func_464(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_723(*iParam0);
			__LIB_32__.func_730(*iParam0, 1, 0);
			__LIB_20__.func_721(*iParam0);
			__LIB_20__.func_720(*iParam0);
			func_536(*iParam0, bParam6);
			__LIB_0__.func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_536(int iParam0, bool bParam1)//Position - 0x4096A
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__.func_509(iParam0);
	if (__LIB_10__.func_3(iVar0))
	{
		__LIB_10__.func_2(iVar0, 0);
		func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_540(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__.func_843(iParam0))
		{
			__LIB_10__.func_2(iVar0, 0);
			func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_540(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_102(iParam0, 3, 169))
					{
						func_180(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_102(iParam0, 12, 6))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 20))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 21))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 22))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 11))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 12, 10))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 12, 50))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 14, 59))
			{
				func_180(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_102(iParam0, 8, 22))
			{
				func_180(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_102(iParam0, 12, 14))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_102(iParam0, 12, 13))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 14))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 15))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 4))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 12, 3))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 14, 82))
			{
				func_180(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_102(iParam0, 8, 76))
			{
				func_180(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_102(iParam0, 12, 1))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_102(iParam0, 12, 12))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 12, 15))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_102(iParam0, 3, 71))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 18))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 19))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_102(iParam0, 12, 7))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 12, 6))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_102(iParam0, 14, 88))
			{
				func_180(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_102(iParam0, 8, 17))
			{
				func_180(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_102(iParam0, 12, 11))
			{
				func_180(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_540(int iParam0, int iParam1)//Position - 0x410FB
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__.func_509(iParam0);
		if (__LIB_0__.func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_184(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__.func_1(iVar0);
					func_542(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_26__.func_544(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__.func_797();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
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

void func_542(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x41376
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
		iVar0 = __LIB_20__.func_509(iParam0);
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
		if (__LIB_0__.func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_89(iParam0, iVar1, &iVar2, 0))
			{
				func_180(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_87(iParam0, iVar1, &iVar2))
			{
				func_180(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_704(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
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
			func_545(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_545(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_545(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
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

int func_545(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x41852
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
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
			func_665(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
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
						func_665(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_665(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_545(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_665(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_664(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_545(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_658(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_665(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_545(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_665(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_545(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_27__.func_931(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_545(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_545(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_649(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_545(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_545(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_545(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
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
								func_545(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
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
								func_545(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_545(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_545(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_658(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_649(iVar5, func_664(iParam0, 8, -1), iParam2, func_664(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
				func_588(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_649(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_658(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_649(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
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
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
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
						func_545(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_545(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_649(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_649(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_545(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_649(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_545(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_565(iParam0, 9, iVar63))
						{
							func_545(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_545(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_545(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
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
						func_545(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_664(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_664(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_545(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_545(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_545(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_545(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_545(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_545(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_545(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_545(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_545(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_545(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_27__.func_931(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_545(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_545(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_546(iParam0, &uVar4))
		{
			func_545(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_545(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_545(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_545(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_664(iParam0, 3, -1), iVar10);
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
				func_545(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_546(int iParam0, var uParam1)//Position - 0x436FC
{
	int iVar0;
	int iVar1;
	*uParam1 = func_664(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_565(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_565(int iParam0, int iParam1, int iParam2)//Position - 0x479BC
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
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
				if (!func_565(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_565(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_565(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_565(iParam0, 14, uVar11[iVar10]))
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
						return func_565(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_565(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_588(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E6D3
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_589(iParam0, bParam3, 0, -1);
}

void func_589(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4E720
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
		bVar3 = func_629(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_620(iParam0, iParam3);
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
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
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
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
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

int func_620(int iParam0, int iParam1)//Position - 0x5DB9E
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_664(iParam0, 11, -1);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_664(iParam0, 11, -1);
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

int func_629(int iParam0, bool bParam1)//Position - 0x5DFFC
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
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
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
						iVar3 = func_664(iParam0, 11, -1);
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
						iVar5 = func_664(iParam0, 8, -1);
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
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
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
						iVar8 = func_664(iParam0, 11, -1);
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
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
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
						iVar12 = func_664(iParam0, 8, -1);
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

int func_649(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66E8C
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
					iVar0 = func_649(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_649(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6B4AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_704(iParam0))
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
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_664(int iParam0, int iParam1, int iParam2)//Position - 0x6B75D
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
				if (func_565(iParam0, iParam1, iVar0))
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
				if (func_565(iParam0, iParam1, iVar1))
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

void func_665(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6B7FE
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
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_665(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_665(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_665(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_665(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_665(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_665(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_665(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_665(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_704(int iParam0)//Position - 0x84753
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
				iVar1 = func_664(iParam0, 11, -1);
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
				iVar3 = func_664(iParam0, 11, -1);
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

void func_723(int iParam0)//Position - 0x85D24
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__.func_509(iParam0);
	if (__LIB_0__.func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_542(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_184(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_724(__LIB_19__.func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_184(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_184(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_724(__LIB_19__.func_811(0), 3, 70, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 3, 71, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 3, 72, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 3, 73, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 3, 74, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 3, 75, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 4, 41, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 4, 42, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 4, 43, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 4, 44, 1, 0, 0, 0);
					func_724(__LIB_19__.func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_184(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_542(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_724(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x85F81
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_727(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_727(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8613C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_727(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_727(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_727(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_727(iParam0, 14, iVar5, 1, 0);
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
								func_727(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_727(iParam0, 14, 17, 1, 0);
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

void func_733(int iParam0)//Position - 0x8680F
{
	int iVar0;
	func_734();
	switch (iParam0)
	{
		case 0:
			iLocal_257 = 0;
			iLocal_258 = 0;
			iLocal_259 = 0;
			iLocal_261 = 0;
			iLocal_272 = 0;
			bLocal_324 = false;
			iLocal_320 = 0;
			bLocal_321 = false;
			iLocal_322 = 0;
			iLocal_323 = 0;
			bLocal_325 = false;
			iLocal_328 = 0;
			iLocal_327 = 0;
			iLocal_329 = 0;
			iLocal_421 = 0;
			bLocal_326 = false;
			iLocal_330 = 0;
			iLocal_332 = 0;
			iLocal_331 = 0;
			iLocal_333 = 0;
			iLocal_316 = 0;
			iLocal_437 = 0;
			bLocal_500 = false;
			bLocal_501 = false;
			iLocal_334 = 0;
			iLocal_441 = 0;
			iLocal_444 = 0;
			bLocal_442 = false;
			iLocal_458 = 0;
			bLocal_459 = false;
			iLocal_460 = 0;
			iLocal_461 = 0;
			iLocal_447 = 0;
			iLocal_472 = 0;
			iLocal_482 = 0;
			iLocal_516 = 0;
			bLocal_489 = false;
			iLocal_519 = 0;
			iLocal_490 = 0;
			iLocal_491 = 0;
			iLocal_497 = 0;
			iLocal_606 = 0;
			fLocal_630 = 0f;
			fLocal_546 = 0f;
			iLocal_623 = -1;
			iLocal_555 = 0;
			iLocal_568 = -1;
			fLocal_542 = 0.8f;
			break;
		case 1:
			iLocal_233 = 0;
			iLocal_260 = 0;
			iLocal_248 = 0;
			iLocal_262 = 0;
			fLocal_539 = 1f;
			fLocal_540 = 1f;
			fLocal_543 = 0f;
			iLocal_555 = 2;
			iLocal_560 = 0;
			iLocal_561 = 0;
			iLocal_335 = 0;
			iLocal_336 = 0;
			bLocal_338 = false;
			iLocal_339 = 0;
			bLocal_342 = false;
			iLocal_343 = 0;
			bLocal_349 = false;
			iLocal_350 = 0;
			bLocal_340 = false;
			iLocal_341 = 0;
			bLocal_344 = false;
			bLocal_345 = false;
			iLocal_337 = 0;
			bLocal_351 = false;
			bLocal_352 = false;
			bLocal_353 = false;
			bLocal_354 = false;
			bLocal_355 = false;
			iLocal_482 = 0;
			iLocal_414 = 0;
			iLocal_356 = 0;
			iLocal_357 = 0;
			iLocal_358 = 0;
			iLocal_334 = 0;
			bLocal_347 = false;
			iLocal_348 = 0;
			bLocal_502 = false;
			bLocal_503 = false;
			bLocal_443 = false;
			iLocal_447 = 0;
			bLocal_454 = false;
			iLocal_471 = 0;
			bLocal_467 = false;
			iLocal_474 = 0;
			bLocal_378 = false;
			iLocal_488 = 0;
			bLocal_492 = false;
			iLocal_493 = 0;
			iLocal_496 = 0;
			iLocal_606 = 0;
			iLocal_622 = -1;
			func_378();
			break;
		case 2:
			iLocal_231 = 0;
			Local_235.f_1 = 0;
			Local_235.f_2 = -1;
			Local_235.f_11 = 0;
			Local_238.f_0 = 0;
			iLocal_243 = 0;
			iLocal_252 = 0;
			iLocal_264 = 0;
			iLocal_254 = 0;
			iLocal_263 = 0;
			bLocal_346 = false;
			iLocal_360 = 0;
			iLocal_430 = 0;
			iLocal_334 = 0;
			iLocal_366 = 0;
			iLocal_368 = 0;
			bLocal_367 = false;
			bLocal_370 = false;
			iLocal_369 = 0;
			bLocal_371 = false;
			bLocal_372 = false;
			iLocal_373 = 0;
			iLocal_415 = 0;
			iLocal_419 = 0;
			iLocal_416 = 0;
			iLocal_418 = 0;
			bLocal_426 = false;
			iLocal_436 = 0;
			iLocal_390 = 0;
			bLocal_505 = false;
			bLocal_506 = false;
			bLocal_507 = false;
			bLocal_504 = false;
			iLocal_445 = 0;
			iLocal_448 = 0;
			bLocal_462 = false;
			bLocal_464 = false;
			iLocal_476 = 0;
			iLocal_483 = 0;
			iLocal_484 = 0;
			iLocal_521 = 0;
			iLocal_499 = 0;
			iLocal_267 = 0;
			iLocal_604 = __LIB_26__.func_472(1, 1);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				Local_247[iVar0 /*4*/].f_1 = 0;
				Local_247[iVar0 /*4*/] = 0;
				Local_247[iVar0 /*4*/].f_3 = 0;
				iVar0++;
			}
			break;
		case 3:
			Local_238.f_0 = 0;
			iLocal_243 = 0;
			iLocal_250 = 0;
			iLocal_251 = 0;
			iLocal_265 = 0;
			iLocal_266 = 0;
			iLocal_270 = 0;
			iLocal_430 = 0;
			iLocal_429 = 0;
			iLocal_428 = 0;
			iLocal_421 = 0;
			iLocal_374 = 0;
			iLocal_375 = 0;
			bLocal_377 = false;
			bLocal_379 = false;
			bLocal_380 = false;
			iLocal_384 = 0;
			iLocal_382 = 0;
			iLocal_383 = 0;
			iLocal_381 = 0;
			bLocal_385 = false;
			bLocal_386 = false;
			iLocal_387 = 0;
			iLocal_388 = 0;
			iLocal_389 = 0;
			bLocal_401 = false;
			bLocal_402 = false;
			iLocal_403 = 0;
			iLocal_404 = 0;
			iLocal_405 = 0;
			iLocal_407 = 0;
			iLocal_406 = 0;
			iLocal_334 = 0;
			bLocal_376 = false;
			bLocal_391 = false;
			iLocal_392 = 0;
			iLocal_393 = 0;
			bLocal_395 = false;
			bLocal_396 = false;
			bLocal_397 = false;
			iLocal_398 = 0;
			iLocal_399 = 0;
			iLocal_400 = 0;
			bLocal_513 = false;
			bLocal_514 = false;
			bLocal_508 = false;
			bLocal_509 = false;
			bLocal_510 = false;
			bLocal_511 = false;
			bLocal_512 = false;
			bLocal_440 = false;
			bLocal_409 = false;
			iLocal_410 = 0;
			bLocal_408 = false;
			iLocal_485 = 0;
			iLocal_455 = 0;
			iLocal_453 = 0;
			bLocal_456 = false;
			iLocal_457 = 0;
			bLocal_417 = false;
			iLocal_465 = 0;
			iLocal_473 = 0;
			iLocal_486 = 0;
			bLocal_494 = false;
			iLocal_582 = 0;
			iLocal_572 = 0;
			iLocal_581 = 0;
			iLocal_613 = 0;
			iLocal_614 = 0;
			fLocal_547 = 1f;
			iLocal_362[0] = 1;
			iLocal_362[1] = 1;
			iLocal_362[2] = 1;
			fLocal_548 = 0.1f;
			break;
		case 4:
			iLocal_255 = 0;
			iLocal_249 = 0;
			iLocal_269 = 0;
			iLocal_273 = 0;
			iLocal_232 = 0;
			Local_525 = { 0f, 0f, 0f };
			Local_526 = { 0f, 0f, 0f };
			iLocal_421 = 0;
			iLocal_411 = 0;
			bLocal_412 = false;
			iLocal_420 = 0;
			iLocal_422 = 0;
			iLocal_423 = 0;
			iLocal_424 = 0;
			iLocal_431 = 0;
			iLocal_432 = 0;
			iLocal_433 = 0;
			iLocal_434 = 0;
			iLocal_435 = 0;
			iLocal_438 = 0;
			bLocal_439 = false;
			iLocal_446 = 0;
			iLocal_450 = 0;
			iLocal_451 = 0;
			iLocal_463 = 0;
			iLocal_465 = 0;
			iLocal_466 = 0;
			iLocal_468 = 0;
			iLocal_469 = 0;
			bLocal_477 = false;
			iLocal_518 = 1;
			iLocal_520 = 0;
			bLocal_495 = false;
			iLocal_522 = 0;
			iLocal_498 = 0;
			iLocal_555 = 2;
			fLocal_545 = 0f;
			break;
	}
}

void func_734()//Position - 0x86C9D
{
	iLocal_191 = 0;
	Local_194.f_7 = 4;
	iLocal_193 = 0;
	iLocal_306 = 0;
	bLocal_307 = false;
	iLocal_308 = 0;
	bLocal_309 = false;
	iLocal_310 = 0;
	iLocal_311 = 0;
	bLocal_312 = false;
	iLocal_313 = 0;
	iLocal_314 = 0;
	iLocal_315 = 0;
	bLocal_425 = false;
	bLocal_413 = false;
	iLocal_427 = 0;
	bLocal_317 = false;
	iLocal_556 = -1;
	iLocal_567 = -1;
}

void func_735(bool bParam0)//Position - 0x86CF3
{
	HUD::REQUEST_ADDITIONAL_TEXT("FCHASE", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_736(int iParam0, bool bParam1, bool bParam2)//Position - 0x86D1B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_746(iVar1, iParam0))
		{
			func_743(iVar1);
		}
		else if (!func_746(iVar1, iLocal_189) || !bParam2)
		{
			func_740(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_737())
		{
			__LIB_11__.func_832();
			while (!func_737())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_737()//Position - 0x86D8A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_303[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(func_76(7)))
					{
						return 0;
					}
					break;
				case 1:
					if (!STREAMING::HAS_ANIM_SET_LOADED(func_739()))
					{
						return 0;
					}
					break;
				case 2:
					if (!__LIB_11__.func_960(&iLocal_271))
					{
						return 0;
					}
					break;
				case 3:
					if (!STREAMING::HAS_CLIP_SET_LOADED("ANIM_GROUP_GESTURE_MISS_FRA0"))
					{
						return 0;
					}
					break;
				}
		}
		iVar0++;
	}
	return 1;
}

char* func_739()//Position - 0x86E32
{
	return "move_injured_generic";
}

void func_740(int iParam0)//Position - 0x86E3F
{
	if (iLocal_303[iParam0])
	{
		iLocal_303[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				VEHICLE::REMOVE_VEHICLE_ASSET(func_76(7));
				break;
			case 1:
				STREAMING::REMOVE_ANIM_SET(func_739());
				break;
			case 2:
				__LIB_20__.func_654(&iLocal_271);
				break;
			case 3:
				STREAMING::REMOVE_CLIP_SET("ANIM_GROUP_GESTURE_MISS_FRA0");
				break;
			}
	}
}

void func_743(int iParam0)//Position - 0x86ED3
{
	iLocal_303[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_ASSET(func_76(7), 3);
			break;
		case 1:
			STREAMING::REQUEST_ANIM_SET(func_739());
			break;
		case 2:
			__LIB_27__.func_932(&iLocal_271);
			break;
		case 3:
			STREAMING::REQUEST_CLIP_SET("ANIM_GROUP_GESTURE_MISS_FRA0");
			break;
	}
}

int func_746(int iParam0, int iParam1)//Position - 0x86F50
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 4 || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 1:
			break;
		case 2:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_747(int iParam0, bool bParam1, bool bParam2)//Position - 0x86FAD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (func_752(iVar1, iParam0))
		{
			func_751(iVar1);
		}
		else if (!func_752(iVar1, iLocal_189) || !bParam2)
		{
			func_750(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_748())
		{
			__LIB_11__.func_832();
			while (!func_748())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_748()//Position - 0x8701C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iLocal_302[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_749(iVar0), false, -1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_749(int iParam0)//Position - 0x87055
{
	switch (iParam0)
	{
		case 0:
			return "FRANKLIN_0_BOXCARS";
			break;
		case 1:
			return "FRANKLIN_0_GENERAL";
			break;
	}
	return "invalid!";
}

void func_750(int iParam0)//Position - 0x8708A
{
	char* sVar0;
	if (iLocal_302[iParam0])
	{
		iLocal_302[iParam0] = 0;
		sVar0 = func_749(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sVar0);
	}
}

void func_751(int iParam0)//Position - 0x870B2
{
	char* sVar0;
	iLocal_302[iParam0] = 1;
	sVar0 = func_749(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sVar0, false, -1);
}

int func_752(int iParam0, int iParam1)//Position - 0x870D3
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == 2 || iParam1 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_753(int iParam0, bool bParam1, bool bParam2)//Position - 0x87114
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_757(iVar1, iParam0))
		{
			func_756(iVar1);
		}
		else if (!func_757(iVar1, iLocal_189) || !bParam2)
		{
			func_755(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_754())
		{
			__LIB_11__.func_832();
			while (!func_754())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_754()//Position - 0x87183
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_301[iVar0])
		{
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_755(int iParam0)//Position - 0x871B4
{
	if (iLocal_301[iParam0])
	{
		iLocal_301[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_756(int iParam0)//Position - 0x871D9
{
	iLocal_301[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_757(int iParam0, int iParam1)//Position - 0x871ED
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_758(int iParam0, bool bParam1, bool bParam2)//Position - 0x87210
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_762(iVar1, iParam0))
		{
			func_761(iVar1);
		}
		else if (!func_762(iVar1, iLocal_189) || !bParam2)
		{
			func_760(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_759())
		{
			__LIB_11__.func_832();
			while (!func_759())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_759()//Position - 0x8727F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_300[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_394(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_760(int iParam0)//Position - 0x872B6
{
	int iVar0;
	if (iLocal_300[iParam0])
	{
		iLocal_300[iParam0] = 0;
		iVar0 = func_394(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(iVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(iVar0);
		}
	}
}

void func_761(int iParam0)//Position - 0x872E7
{
	int iVar0;
	iLocal_300[iParam0] = 1;
	iVar0 = func_394(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(iVar0, 31, 0);
}

int func_762(int iParam0, int iParam1)//Position - 0x87308
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_763(int iParam0, bool bParam1, bool bParam2)//Position - 0x8732B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_768(iVar0, iParam0))
		{
			func_767(iVar0);
		}
		else if (!func_768(iVar0, iLocal_189) || !bParam2)
		{
			func_766(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_764())
		{
			__LIB_11__.func_832();
			while (!func_764())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_764()//Position - 0x87397
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (iLocal_299[iVar0])
		{
			Var1 = { __LIB_23__.func_170(iVar0) };
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_766(int iParam0)//Position - 0x873F2
{
	struct<4> Var0;
	if (iLocal_299[iParam0])
	{
		iLocal_299[iParam0] = 0;
		Var0 = { __LIB_23__.func_170(iParam0) };
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var0) == 0)
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Var0);
		}
	}
}

void func_767(int iParam0)//Position - 0x87426
{
	struct<4> Var0;
	iLocal_299[iParam0] = 1;
	Var0 = { __LIB_23__.func_170(iParam0) };
	TASK::REQUEST_WAYPOINT_RECORDING(&Var0);
}

int func_768(int iParam0, int iParam1)//Position - 0x87446
{
	switch (iParam0 + 1)
	{
		case 1:
			if (iParam1 == 2 || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 2:
		case 3:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 2 || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		case 9:
		case 10:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_769(int iParam0, bool bParam1, bool bParam2)//Position - 0x87538
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_773(iVar1, iParam0))
		{
			func_772(iVar1);
		}
		else if (!func_773(iVar1, iLocal_189) || !bParam2)
		{
			func_771(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_770())
		{
			__LIB_11__.func_832();
			while (!func_770())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_770()//Position - 0x875A7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_298[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_205(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_771(int iParam0)//Position - 0x875DE
{
	char* sVar0;
	if (iLocal_298[iParam0])
	{
		iLocal_298[iParam0] = 0;
		sVar0 = func_205(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar0);
		}
	}
}

void func_772(int iParam0)//Position - 0x8760F
{
	char* sVar0;
	iLocal_298[iParam0] = 1;
	sVar0 = func_205(iParam0);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
}

int func_773(int iParam0, int iParam1)//Position - 0x8762D
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam1 == 4 || iParam1 == 1)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam1 <= 1 || iParam1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_774(int iParam0, bool bParam1, bool bParam2)//Position - 0x876C3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_778(iVar0 + 1, iParam0))
		{
			func_777(iVar0 + 1);
		}
		else if (!func_778(iVar0 + 1, iLocal_189) || !bParam2)
		{
			func_776(iVar0 + 1);
		}
		iVar0++;
	}
	if (iParam0 == 1 || iParam0 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, func_387());
	}
	if (bParam1)
	{
		if (!func_775())
		{
			__LIB_11__.func_832();
			while (!func_775())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (iParam0 == 1)
		{
			while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, func_387()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_775()//Position - 0x8776C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (iLocal_297[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, func_374()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_776(int iParam0)//Position - 0x877A6
{
	if (iLocal_297[(iParam0 - 1)])
	{
		iLocal_297[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, func_374()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, func_374());
		}
	}
}

void func_777(int iParam0)//Position - 0x877DB
{
	iLocal_297[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, func_374());
}

int func_778(int iParam0, int iParam1)//Position - 0x877F7
{
	switch (iParam0)
	{
		case 1:
		case 11:
		case 12:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_779(int iParam0, bool bParam1, bool bParam2)//Position - 0x87839
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (func_782(iVar0, iParam0))
		{
			func_781(iVar0);
		}
		else if (!func_782(iVar0, iLocal_189) || !bParam2)
		{
			func_204(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_780())
		{
			__LIB_11__.func_832();
			while (!func_780())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_780()//Position - 0x878A5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iLocal_296[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_76(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_781(int iParam0)//Position - 0x878DE
{
	int iVar0;
	iVar0 = func_76(iParam0);
	STREAMING::REQUEST_MODEL(iVar0);
	iLocal_296[iParam0] = 1;
}

int func_782(int iParam0, int iParam1)//Position - 0x878FC
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 1;
			break;
		case 2:
			if (iParam1 > 0)
			{
				return 1;
			}
			break;
		case 3:
			return 1;
			break;
		case 4:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 > 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam1 <= 2 && iParam1 > 0)
			{
				return 1;
			}
			break;
		case 11:
		case 9:
		case 10:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		case 20:
		case 21:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		case 23:
			if (iParam1 == 0)
			{
				if (__LIB_0__.func_294())
				{
					if (__LIB_26__.func_465())
					{
						if (__LIB_12__.func_37(__LIB_11__.func_687(), 0f, 0f, 0f, 1))
						{
							return 1;
						}
					}
				}
			}
			break;
		case 13:
		case 14:
		case 15:
		case 18:
		case 19:
		case 22:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_786(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x87B46
{
	char* sVar0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (bParam5)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		}
		if (bParam4)
		{
			sVar0 = "CHOP_GROWL";
			fVar2 = 206f;
		}
		else
		{
			sVar0 = "CHOP_SIT_LOOP";
			if (!bParam6)
			{
				fVar2 = 0f;
			}
			else
			{
				fVar2 = 11.96f;
			}
		}
		if (bParam5)
		{
			fVar1 = 1000f;
		}
		else
		{
			fVar1 = 4f;
		}
		*uParam2 = 0;
		*uParam3 = 0f;
		func_66(iParam0, iParam1, fVar2, bParam6, bParam7, iParam8, iParam9, iParam10, iParam11);
		TASK::TASK_PLAY_ANIM(iParam0, __LIB_23__.func_170(), sVar0, fVar1, -8f, -1, 4097, 0f, false, false, false);
		if (bParam5)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		}
	}
}

void func_788(int iParam0)//Position - 0x87C04
{
	if (iParam0 || !iLocal_465)
	{
		if (!PED::IS_PED_INJURED(Local_234.f_0))
		{
			PED::APPLY_PED_BLOOD_SPECIFIC(Local_234.f_0, 2, 0.536f, 0.601f, 93.24f, 0.695f, -1, 0f, "stab");
			PED::APPLY_PED_BLOOD_SPECIFIC(Local_234.f_0, 2, 0.536f, 0.561f, 95.04f, 0.695f, -1, 0f, "stab");
			PED::APPLY_PED_BLOOD_SPECIFIC(Local_234.f_0, 2, 0.476f, 0.531f, 95.14f, 0.695f, -1, 0f, "stab");
			iLocal_465 = 1;
		}
	}
}

void func_792()//Position - 0x87D4A
{
	if (!PED::IS_PED_INJURED(Local_234.f_0))
	{
		if (!PED::IS_PED_RAGDOLL(Local_234.f_0))
		{
			PED::SET_PED_RESET_FLAG(Local_234.f_0, 64, true);
			PED::SET_PED_RESET_FLAG(Local_234.f_0, 58, true);
		}
	}
}

void func_793()//Position - 0x87D7C
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
	{
		fLocal_548 = (fLocal_548 + (0.83f * SYSTEM::TIMESTEP()));
		if (fLocal_548 >= 0.93f)
		{
			fLocal_548 = 0.93f;
		}
		PED::SET_SYNCHRONIZED_SCENE_RATE(Local_235.f_9, fLocal_548);
	}
}

void func_795(int iParam0, float fParam1, float fParam2)//Position - 0x87DF4
{
	if (!PED::IS_PED_INJURED(iParam0->f_3) && CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		iParam0->f_6 = fParam1;
		iParam0->f_7 = fParam2;
		CAM::ATTACH_CAM_TO_PED_BONE(iParam0->f_4, iParam0->f_3, 31086, 0f, iParam0->f_6, iParam0->f_7, true);
	}
}

void func_796(int iParam0, int iParam1)//Position - 0x87E3A
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (iParam1 == 0)
	{
		fVar0 = -Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/].f_3;
		fVar1 = 1.468f;
		fVar2 = 180f;
	}
	else
	{
		fVar0 = Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/].f_3;
		fVar1 = -1.468f;
		fVar2 = 0f;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/], Local_246[iParam0 /*12*/], 0, fVar0, fVar1, 2.4635f, 0f, 0f, fVar2, false, false, true, false, 2, true, 0);
}

Vector3 func_797(int iParam0)//Position - 0x87EB3
{
	switch (iParam0)
	{
		case 0:
			return 548.9426f, -626.9652f, 23.91f;
			break;
		case 1:
			return 546.9478f, -643.2399f, 23.91f;
			break;
		case 2:
			return 526.7276f, -678.9218f, 23.82f;
			break;
		case 3:
			return 524.9456f, -695.059f, 23.86f;
			break;
		case 4:
			return 519.1805f, -705.8043f, 23.87f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_798(bool bParam0)//Position - 0x87F4C
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_WAITING_B", 3))
	{
		fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_WAITING_B");
		if (fVar1 <= 0.25f || fVar1 >= 0.8f)
		{
			iVar0 = 1;
		}
		if (bParam0)
		{
			if (fVar1 >= 0.408f && fVar1 <= 0.65f)
			{
				iVar0 = 1;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_WAITING_A", 3))
	{
		TASK::TASK_PLAY_ANIM(Local_235.f_0, func_205(0), "FRA0_IG_12_CHOP_FAST_TURN_B", 8f, -8f, -1, 2, 0f, false, false, false);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_FAST_TURN_B", 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_275, func_205(0), "FRA0_IG_12_CHOP_FAST_TURN_B") >= 0.98f)
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_799()//Position - 0x88030
{
	float fVar0;
	struct<3> Var1;
	bool bVar2;
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		if (!PED::IS_PED_INJURED(iLocal_277))
		{
			switch (iLocal_250)
			{
				case 0:
					if (iLocal_243 == 4)
					{
						Local_527 = { ENTITY::GET_ENTITY_COORDS(iLocal_277, true) + Vector(-0.435374f, 0f, 0f) };
						fLocal_541 = ENTITY::GET_ENTITY_HEADING(iLocal_277);
						Local_235.f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_275, 0.129763f, 2.11939f, -0.435374f) };
						Local_235.f_6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_275, 2) + Vector(16.033447f, 0f, 0f) };
						Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_235.f_3, Local_235.f_6, 2);
						iLocal_580 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, 0f, 0f, fLocal_541, 2);
						PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(3), "Hump_enter_chop", 8f, -8f, 5, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_277, iLocal_580, func_205(3), "Hump_enter_ladydog", 8f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_235.f_9, false);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_580, false);
						iLocal_250 = 1;
					}
					break;
				case 1:
					if (!bLocal_509)
					{
						bLocal_509 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_MOUNT");
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9) >= 0.98f)
					{
						func_256(7);
						Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, 0f, 0f, fLocal_541, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(3), "Hump_loop_chop", 4f, -8f, 5, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_277, Local_235.f_9, func_205(3), "Hump_loop_ladydog", 4f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_235.f_9, true);
						__LIB_0__.func_403(342, 0);
						iLocal_250 = 2;
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9) >= 0.69f)
					{
						__LIB_26__.func_588(&(Local_235.f_3), Local_527, 0.1f);
						__LIB_26__.func_588(&(Local_235.f_6), 0f, 0f, fLocal_541, 5f);
						PED::SET_SYNCHRONIZED_SCENE_ORIGIN(Local_235.f_9, Local_235.f_3, Local_235.f_6, 2);
					}
					break;
				case 2:
					func_255(7);
					if (iLocal_243 == 5)
					{
						func_256(10);
						Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_527, 0f, 0f, fLocal_541, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(3), "Hump_exit_chop", 8f, -8f, 5, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_277, Local_235.f_9, func_205(3), "Hump_exit_ladydog", 8f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_235.f_9, false);
						if (!bLocal_510)
						{
							bLocal_510 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_DISMOUNT");
						}
						iLocal_250 = 3;
					}
					break;
				case 3:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9) >= 0.98f)
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_275, true);
						iLocal_250 = 4;
					}
					break;
				}
		}
		switch (iLocal_243)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, func_84(26), 1.5f, 1.5f, 2f, false, true, 0))
				{
					if (PED::IS_PED_INJURED(iLocal_277))
					{
						func_266(7);
					}
					else
					{
						func_266(1);
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 8f, 8f, 8f, false, true, 0))
				{
					if (func_798(0))
					{
						func_266(2);
					}
				}
				break;
			case 2:
				if (PED::IS_PED_INJURED(iLocal_277))
				{
					func_266(6);
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_275, func_205(3), "FRA_0_IG_15_CHOP_SPOTS_DOG", 3))
				{
					func_266(3);
				}
				else
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_275, func_205(3), "FRA_0_IG_15_CHOP_SPOTS_DOG");
					if (!iLocal_389)
					{
						if (fVar0 >= 0.3f)
						{
							func_256(6);
							iLocal_389 = 1;
						}
					}
					if (fVar0 >= 0.8f)
					{
						func_266(3);
					}
				}
				break;
			case 3:
				if (!bLocal_508)
				{
					bLocal_508 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_BOY");
				}
				if (PED::IS_PED_INJURED(iLocal_277))
				{
					func_266(6);
				}
				else
				{
					if (MISC::GET_GAME_TIMER() <= iLocal_573 + 1500)
					{
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, Local_528, 0.5f, 0.5f, 2f, false, true, 0))
					{
						func_266(4);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, Local_528, 6f, 6f, 2f, false, false, 0))
					{
						PED::SET_PED_RESET_FLAG(iLocal_275, 71, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_275, false);
					}
				}
				if (!bLocal_377)
				{
					func_255(6);
					if (MISC::GET_GAME_TIMER() >= iLocal_573 + 2000 && !bLocal_440)
					{
						bLocal_377 = func_251("FC_WHEREGO", 0, 0, 0, 1);
					}
				}
				else if (!bLocal_379)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_573 + 5000)
					{
						if (!PED::IS_PED_INJURED(iLocal_277))
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_277))
							{
								if (!bLocal_440)
								{
									bLocal_379 = func_251("FC_SEEDOG", 0, 0, 0, 1);
								}
							}
						}
					}
				}
				if (iLocal_428)
				{
					if (func_210())
					{
						func_806();
					}
				}
				break;
			case 4:
				if (!bLocal_440)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 15f, 15f, 2f, false, true, 0))
					{
						if (!iLocal_387)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_556)
							{
								if (func_251("FKN0_MALE", 0, 0, 0, 1))
								{
									iLocal_556 = MISC::GET_GAME_TIMER() + 9000;
									iLocal_387 = 1;
								}
							}
						}
						else
						{
							func_254("FKN0_WHUMP", -1, 7000, 11000, 0);
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_277))
				{
					func_266(6);
				}
				else
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
					if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_277, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_275, PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Var1 - Vector(8f, 8f, 8f), Var1 + Vector(8f, 8f, 8f), false, true)) || MISC::IS_BULLET_IN_AREA(Var1, 3f, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(Var1 - Vector(3f, 3f, 3f), Var1 + Vector(3f, 3f, 3f))) || MISC::GET_GAME_TIMER() >= (iLocal_587 + 60000))
					{
						if (iLocal_242 == 2)
						{
							iLocal_383 = 1;
						}
						func_266(5);
					}
					else if (!bLocal_380)
					{
						if (((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 18f, 18f, 2f, false, true, 0) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_275, 35f)) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 11f, 11f, 2f, false, true, 0))
						{
							if (!bLocal_440)
							{
								bLocal_380 = func_251("FC_RUNOVER", 0, 0, 0, 1);
							}
						}
					}
				}
				if (func_210())
				{
					func_806();
					if (iLocal_242 == 2)
					{
						if (!bLocal_386)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_573 + 14000)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 2f, 2f, 2f, false, true, 0) && Local_238.f_0 == 0)
								{
									if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__.func_398(1, 0, 1)) && !__LIB_0__.func_75())
									{
										iLocal_381 = 1;
										iLocal_306 = 1;
									}
								}
								else if (!bLocal_385)
								{
									if (Local_238.f_0 == 0)
									{
										bLocal_385 = func_208("FC_CLOSER", 1, 0, 7500);
									}
								}
							}
						}
					}
				}
				break;
			case 5:
				if (iLocal_250 == 4 || PED::IS_PED_INJURED(iLocal_277))
				{
					func_266(6);
				}
				break;
			case 6:
				if (bLocal_509)
				{
					if (!bLocal_510)
					{
						bLocal_510 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_DISMOUNT");
					}
				}
				func_255(5);
				if (!iLocal_382)
				{
					if (iLocal_383)
					{
						switch (iLocal_242)
						{
							case 1:
								iLocal_382 = func_251("FKN0_CGOOD", 0, 0, 0, 1);
								break;
							case 0:
								iLocal_382 = func_251("FKN0_CMED", 0, 0, 0, 1);
								break;
							case 2:
								iLocal_382 = func_251("FKN0_CBAD", 0, 0, 0, 1);
								break;
						}
					}
					else
					{
						iLocal_382 = 1;
					}
				}
				else
				{
					func_805();
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, func_84(27), 4f, 4f, 2f, false, true, 0))
				{
					func_266(7);
					func_239(3000, -1, -1);
					iLocal_251 = 0;
					iLocal_578 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_557 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood8", 43, 6, -1);
				}
				break;
			case 7:
				func_805();
				break;
		}
		if (!iLocal_429)
		{
			if (iLocal_243 >= 6)
			{
				if (!__LIB_23__.func_159() && !__LIB_0__.func_67(17))
				{
					if (iLocal_572 > 0)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_572 + 1000)
						{
							iLocal_429 = func_802("FC_APPHLP", 0, -1);
							if (iLocal_429)
							{
								__LIB_0__.func_460(17);
							}
						}
					}
				}
				else
				{
					iLocal_429 = 1;
				}
			}
		}
		bVar2 = false;
		if (((iLocal_243 == 3 && MISC::GET_GAME_TIMER() >= iLocal_573 + 2700) || iLocal_243 == 4) && func_800())
		{
			if (Local_238.f_0 == 0)
			{
				if (!iLocal_428)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						iLocal_428 = 1;
						iLocal_574 = 0;
					}
				}
				else if (!bLocal_440)
				{
					bVar2 = true;
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__.func_187("FC_CALLHLP");
					}
				}
			}
			else if (Local_238.f_0 == 2)
			{
				if (!iLocal_453)
				{
					if (func_802("FC_SWFHLP1", 0, -1))
					{
						__LIB_11__.func_817(&Local_194, 1, 1);
						iLocal_453 = 1;
					}
				}
			}
		}
		if (!bVar2)
		{
			if (__LIB_0__.func_1("FC_CALLHLP"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

int func_800()//Position - 0x88967
{
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 15f, 15f, 8f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 514.064f, -674.668f, 23.392f, 521.808f, -612.832f, 28.734f, 45f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_802(char* sParam0, int iParam1, int iParam2)//Position - 0x88A15
{
	if (iParam1 || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_210())
		{
			__LIB_0__.func_151(sParam0, iParam2);
			return 1;
		}
	}
	return 0;
}

void func_805()//Position - 0x88A98
{
	if (!iLocal_384)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, func_84(27), 28f, 28f, 2f, false, false, 0))
		{
			if (func_251("FC_BACKON", 0, 0, 0, 1))
			{
				iLocal_384 = 1;
			}
		}
	}
}

void func_806()//Position - 0x88AD9
{
	int iVar0;
	struct<3> Var1;
	char* sVar2;
	bool bVar3;
	bool bVar4;
	if (MISC::GET_GAME_TIMER() <= iLocal_608 + 4100)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	}
	switch (iLocal_270)
	{
		case 0:
			if (func_800())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_574 + 5000)
					{
						switch (iLocal_242)
						{
							case 2:
								bLocal_440 = false;
								break;
							case 0:
								if (iLocal_243 >= 4)
								{
									bLocal_440 = true;
								}
								else
								{
									bLocal_440 = false;
								}
								break;
							case 1:
								bLocal_440 = true;
								break;
						}
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
						if (((((PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_275, 40f) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 20f, 20f, 2f, false, true, 0)) && iVar0 == joaat("WEAPON_UNARMED"))
						{
							Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_275, true)) };
							if (Var1.f_0 > 0f)
							{
								sVar2 = "Call_Chop_R";
							}
							else
							{
								sVar2 = "Call_Chop_L";
							}
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_205(3), sVar2, 8f, -4f, -1, 48, 0f, false, false, false);
							iLocal_608 = MISC::GET_GAME_TIMER();
						}
						iLocal_486 = 0;
						iLocal_270 = 1;
					}
				}
			}
			break;
		case 1:
			if (!iLocal_486)
			{
				bVar3 = false;
				bVar4 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_205(3), "Call_Chop_R", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_205(3), "Call_Chop_L", 3))
				{
					bVar4 = true;
				}
				if (bVar4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_608 + 600)
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					__LIB_6__.func_771();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_624, "Franklin_Whistle_For_Chop", PLAYER::PLAYER_PED_ID(), "SPEECH_RELATED_SOUNDS", false, 0);
					iLocal_486 = 1;
				}
			}
			if ((!__LIB_0__.func_75() && AUDIO::HAS_SOUND_FINISHED(iLocal_624)) && iLocal_486)
			{
				if (iLocal_250 >= 2)
				{
					if (func_251("FC_HUMP", 0, 0, 0, 1))
					{
						iLocal_556 = MISC::GET_GAME_TIMER() + 5000;
					}
				}
				else
				{
					func_251("FC_WHISTLE", 0, 0, 0, 1);
				}
				if (bLocal_440)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 3f, 4);
					iLocal_270 = 2;
				}
				else
				{
					iLocal_270 = 0;
				}
				iLocal_574 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= iLocal_574 + 800)
			{
				if (iLocal_243 < 4)
				{
					func_266(6);
				}
				else
				{
					func_266(5);
				}
				iLocal_383 = 1;
			}
			break;
	}
}

void func_808()//Position - 0x88DAE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Local_246[iVar0 /*12*/].f_2)
		{
			case 0:
				bVar2 = false;
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
					if (iVar0 < 2)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 547.5691f, -635.4587f, 27.41334f, 28f, 28f, 28f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_AREA(iLocal_275, 534.9f, -648.8f, -20f, 550.8f, -620.1f, 100f, false, false, 0) || Var3.f_1 < -643.6f)
							{
								bLocal_391 = true;
								bVar2 = true;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 522.8358f, -691.1599f, 23.76571f, 40f, 40f, 40f, false, true, 0))
					{
						if (iLocal_243 == 7)
						{
							if (ENTITY::IS_ENTITY_IN_AREA(iLocal_275, 526.3f, -685.8f, -20f, 534.8f, -665.1f, 100f, false, false, 0))
							{
								iLocal_392 = 1;
								bVar2 = true;
								if (!iLocal_457)
								{
									iLocal_455 = 0;
									bLocal_456 = false;
									iLocal_375 = 1;
									iLocal_457 = 1;
								}
							}
						}
					}
				}
				if (bVar2)
				{
					Local_246[iVar0 /*12*/].f_1 = func_248(func_797(iVar0), 0);
					Local_246[iVar0 /*12*/].f_2 = 1;
				}
				break;
			case 1:
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 >= 2)
					{
						if (HUD::DOES_BLIP_EXIST(Local_246[iVar0 /*12*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_246[iVar0 /*12*/].f_1));
						}
						Local_246[iVar0 /*12*/].f_2 = 2;
					}
					iVar1++;
				}
				break;
			case 2:
				break;
		}
		iVar0++;
	}
	if (!bLocal_391)
	{
	}
	else
	{
		if (!iLocal_393)
		{
			if (!bLocal_395)
			{
				bLocal_395 = func_251("FKN0_ISHE1", 0, 0, 0, 1);
			}
			else if (Local_238.f_0 == 0)
			{
				iLocal_393 = func_208("FC_GOBOX", 1, 0, 7500);
			}
		}
		if (bLocal_395)
		{
			if (!iLocal_455)
			{
				if ((((iLocal_243 == 0 || iLocal_243 == 7) || iLocal_392) && iLocal_375) && !bLocal_456)
				{
					if (Local_238.f_0 == 2)
					{
						if (iLocal_392 || !__LIB_0__.func_75())
						{
							if (func_802("FC_SWFHLP2", 0, -1))
							{
								__LIB_11__.func_817(&Local_194, 1, 1);
								iLocal_455 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_809(int iParam0)//Position - 0x8901D
{
	char* sVar0;
	if (func_210())
	{
		func_231();
		__LIB_26__.func_550(1, 1, 1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("FRA0_MISSION_FAIL");
		iLocal_188 = 1;
		iLocal_190 = iParam0;
		switch (iLocal_190)
		{
			case 1:
				sVar0 = "FC_FAIL1";
				break;
			case 2:
				sVar0 = "FC_FAIL4";
				break;
			case 3:
				sVar0 = "FC_FAIL2";
				break;
			case 4:
				sVar0 = "FC_FAIL3";
				break;
			case 5:
				sVar0 = "FC_FAIL5";
				break;
			case 6:
				sVar0 = "FC_FAIL6";
				break;
			case 7:
				sVar0 = "FC_FAIL7";
				break;
			case 8:
				sVar0 = "FC_FAIL8";
				break;
			case 9:
				sVar0 = "FC_FAIL11";
				break;
			case 10:
				sVar0 = "FC_FAIL10";
				break;
			case 11:
				sVar0 = "FC_FAIL9";
				break;
		}
		func_810(sVar0);
	}
}

void func_810(char* sParam0)//Position - 0x89109
{
	__LIB_0__.func_324(sParam0);
	func_811(0);
}

void func_811(int iParam0)//Position - 0x8911C
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_812(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_812(int iParam0)//Position - 0x89161
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_546();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_813(&(Global_113386.f_2363.f_539), iVar1);
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

void func_813(var uParam0, int iParam1)//Position - 0x89271
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
			if (!func_815(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
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

int func_815(int iParam0, var uParam1, float fParam2)//Position - 0x89445
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
			return func_815(8, uParam1, fParam2);
			break;
		case 10:
			return func_815(8, uParam1, fParam2);
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

void func_821()//Position - 0x89F93
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	func_834(&Local_194, Local_238.f_0 != 2, 1);
	__LIB_23__.func_166(&Local_238);
	__LIB_23__.func_165(&Local_238);
	switch (Local_238.f_0)
	{
		case 0:
			if (Local_238.f_9)
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 7)
				{
					if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						Local_238.f_9 = 0;
					}
				}
				else
				{
					Local_238.f_9 = 0;
				}
			}
			if (func_831(&Local_238, &Local_194))
			{
				if (iLocal_189 == 2 || iLocal_374)
				{
					if (iLocal_189 == 2)
					{
						if (bLocal_370 || !func_830())
						{
							func_829();
						}
					}
				}
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					bLocal_478 = true;
				}
				else
				{
					bLocal_478 = false;
				}
				iLocal_480 = 0;
				func_828(&Local_238, 1, 1, 0, 0, 2000, 1, 1, 3);
				func_827(&Local_238, &Local_194, 0);
				__LIB_0__.func_401(343, 1, 0);
				if (iLocal_189 == 2)
				{
					if (!bLocal_504)
					{
						bLocal_504 = AUDIO::TRIGGER_MUSIC_EVENT("FRA0_SWITCH_1");
					}
				}
			}
			break;
		case 2:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (Local_194.f_7 == 1)
			{
				__LIB_0__.func_402(0, -1);
				__LIB_0__.func_401(343, 1, 0);
				bLocal_478 = false;
				iLocal_479 = 0;
				func_825(&Local_238, &Local_194, 1, 1, 1, 1, 3);
			}
			else
			{
				if (iLocal_189 == 2)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PLAYER::PLAYER_PED_ID(), 3f, false);
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_275, Var1) };
						if (Var0.f_1 < -20f)
						{
							PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 1.15f);
						}
						iVar2 = TASK::GET_PED_WAYPOINT_PROGRESS(PLAYER::PLAYER_PED_ID());
						TASK::WAYPOINT_RECORDING_GET_COORD("hood4", iVar2, &Var3);
						if ((Var3.f_2 > (Var1.f_2 + 3f) || (iVar2 < 100 && Var1.f_1 > -560.8f)) || (iVar2 < 106 && Var1.f_1 > -554.1f))
						{
							func_829();
						}
					}
					else
					{
						func_829();
					}
				}
				func_824(1);
			}
			if (!bLocal_370)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7)
				{
					if (func_830())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			break;
		case 3:
			func_824(0);
			func_34(&Local_238, &Local_194, 0);
			if (!iLocal_479)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 7)
						{
							func_31(&Local_238, &Local_194);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							iLocal_479 = 1;
						}
					}
				}
			}
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				func_29(&Local_238, &Local_194, 1, 1, 1, 1, 0, 1500);
				PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
				func_45(9);
				__LIB_0__.func_402(0, -1);
			}
			break;
		case 1:
			func_34(&Local_238, &Local_194, 1);
			func_824(1);
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				__LIB_0__.func_403(339, 0);
				func_822(&Local_238, &Local_194, 1, 0, 3000);
				func_52(9);
				HUD::GET_HUD_COLOUR(174, &iVar4, &iVar5, &iVar6, &uVar7);
				PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0 /*PLAYER_CONTROL*/, iVar4, iVar5, iVar6);
			}
			else if (!iLocal_480)
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 7)
					{
						CAM::SET_CAM_ACTIVE(Local_238.f_4, true);
						if (!PED::IS_PED_INJURED(Local_238.f_3))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_238.f_3, false, false);
							AUDIO::STOP_PED_SPEAKING(Local_238.f_3, true);
						}
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						iLocal_480 = 1;
					}
				}
			}
			break;
	}
	if (Local_238.f_0 != 0)
	{
		if ((__LIB_0__.func_405("FC_GOCHOP", 0, 0) || __LIB_0__.func_405("FC_CLOSER", 0, 0)) || __LIB_0__.func_405("FC_GOBOX", 0, 0))
		{
			__LIB_26__.func_550(0, 1, 0, 0);
		}
	}
	if (Local_238.f_0 != 2)
	{
		if (__LIB_0__.func_1("FC_SWFHLP1") || __LIB_0__.func_1("FC_SWFHLP2"))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_571 + 1000)
			{
				HUD::CLEAR_HELP(false);
				iLocal_571 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_822(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x8A3F6
{
	func_34(iParam0, iParam1, 1);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("chop");
	CAM::SET_CAM_ACTIVE(iParam0->f_4, true);
	if (bParam2)
	{
		CAM::RENDER_SCRIPT_CAMS(true, bParam3, iParam4, true, false, 0);
		if (bParam3)
		{
			iParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam4);
		}
	}
	iParam1->f_7 = 4;
	if (iParam0->f_2 == 1)
	{
		__LIB_11__.func_809();
	}
	GRAPHICS::ANIMPOSTFX_PLAY("ChopVision", 0, false);
	PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/, 1);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_3, false, false);
		AUDIO::STOP_PED_SPEAKING(iParam0->f_3, true);
	}
	*iParam0 = 2;
}

void func_824(bool bParam0)//Position - 0x8A48A
{
	if (iLocal_189 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_275))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 7f, 7f, 2f, false, true, 0))
			{
				iLocal_633 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY"));
				if (iLocal_633 == 7)
				{
					if (bParam0)
					{
						TASK::TASK_GO_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, -1, 6.5f, 2f, 2f, 0);
					}
				}
				else if (iLocal_633 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 12f, 12f, 12f, false, false, 0) || ((Local_238.f_0 == 1 || Local_238.f_0 == 3) && !bLocal_478))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
					}
				}
			}
			else if (bParam0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_275, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 0);
				}
			}
		}
	}
}

void func_825(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8A573
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (bParam4)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(iParam0->f_13, 2f);
	}
	if (bParam3)
	{
		iVar0 = 0;
		if (!bParam5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 70f)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 0;
				iVar0 = 1;
			}
		}
		else
		{
			iVar1 = iParam6;
		}
		STREAMING::START_PLAYER_SWITCH(iParam0->f_3, PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		if (iVar1 == 3)
		{
			func_31(iParam0, uParam1);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
	else
	{
		func_31(iParam0, uParam1);
	}
	*iParam0 = 3;
}

void func_827(int iParam0, int iParam1, int iParam2)//Position - 0x8A6C3
{
	__LIB_11__.func_817(iParam1, iParam0->f_1, iParam2);
}

void func_828(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x8A6D7
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	if (bParam2)
	{
		HUD::DISPLAY_HUD(false);
		HUD::DISPLAY_RADAR(false);
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(true, bParam4, iParam5, true, false, 0);
		if (bParam4)
		{
			uParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam5);
		}
	}
	if (bParam6)
	{
		iVar0 = 0;
		if (!bParam7)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 70f)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 0;
				iVar0 = 2;
			}
		}
		else
		{
			iVar1 = iParam8;
		}
		STREAMING::START_PLAYER_SWITCH(PLAYER::PLAYER_PED_ID(), uParam0->f_3, iVar0, iVar1);
	}
	__LIB_0__.func_83(1);
	*uParam0 = 1;
}

void func_829()//Position - 0x8A778
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood4", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	TASK::WAYPOINT_RECORDING_GET_COORD("hood4", iVar0, &Var1);
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("hood4", &iVar3);
	iVar4 = iVar0 + 5;
	if (iVar4 >= (iVar3 - 1))
	{
		iVar4 = (iVar3 - 1);
	}
	bVar5 = false;
	if (Var1.f_2 > 27.3f && Var2.f_2 < 28.1f)
	{
		iVar0 = 109;
		TASK::WAYPOINT_RECORDING_GET_COORD("hood4", iVar0, &Var1);
		bVar5 = true;
	}
	else if (iVar0 >= 242 && iVar0 <= 248)
	{
		iVar0 = 245;
		bVar5 = true;
	}
	else if (iVar0 >= 72 && iVar0 <= 79)
	{
		iVar0 = 76;
		bVar5 = true;
	}
	else if (iVar0 >= 225 && iVar0 <= 231)
	{
		iVar0 = 229;
		bVar5 = true;
	}
	if (!bVar5)
	{
		iVar0 = iVar4;
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "hood4", iVar0, 38, -1);
}

int func_830()//Position - 0x8A875
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 494.57f, -516.88f, 25.56f, 11f, 11f, 11f, false, false, 0))
	{
		return 1;
	}
	return 0;
}

int func_831(var uParam0, int iParam1)//Position - 0x8A8AE
{
	if (iParam1->f_7 == uParam0->f_1)
	{
		return 1;
	}
	return 0;
}

var func_834(int iParam0, bool bParam1, int iParam2)//Position - 0x8AA1A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__.func_81());
	bVar8 = __LIB_9__.func_987(bParam1);
	iParam0->f_6 = __LIB_0__.func_504(__LIB_20__.func_728());
	Global_23011.f_12 = !iParam0->f_23;
	Global_23011.f_121 = bParam1;
	Global_23011.f_122 = iParam2;
	Global_23011.f_123 = bVar7;
	Global_23011.f_3 = Global_23011.f_2;
	Global_23011.f_70 = 0;
	bVar9 = ((Global_23011.f_104 == 4 || Global_23011.f_104 == 1) || Global_23011.f_104 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_26__.func_498(iParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__.func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_11__.func_690(iVar10) && __LIB_20__.func_659(iVar10)) && iVar10 == __LIB_0__.func_504(Global_113386.f_2363.f_539.f_4323))
			{
				Global_23011.f_70 = 1;
			}
			else
			{
				Global_23011.f_70 = 0;
			}
		}
		else if (Global_23011.f_12)
		{
			if (!Global_23011.f_70)
			{
				if ((((!PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_18[iVar0]) && (*iParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || iParam0->f_34[iVar0] == 2) || iParam0->f_24[iVar0] != 0)
				{
					Global_23011.f_70 = 1;
				}
			}
			if (iParam0->f_34[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (iParam0->f_6 == iVar0)
			{
				if (iParam0->f_34[iVar0] == 1 || iParam0->f_34[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (iParam0->f_8[iVar0])
			{
				if (iParam0->f_39 && iParam0->f_7 == iVar0)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_34[iVar0] == 3)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_23) && !iParam0->f_34[iVar0] == 2)
				{
					iParam0->f_8[iVar0] = 0;
				}
			}
			Global_23011.f_49[iVar0] = iParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0])) && (*iParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_23011.f_71[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_23011.f_71[iVar0] != -1 && IntToFloat(Global_23011.f_71[iVar0]) < 25f) || iParam0->f_13[iVar0])
			{
				if (iParam0->f_6 != iVar0)
				{
					Global_23011.f_54[iVar0] = 1;
					Global_23011.f_59[iVar0] = iParam0->f_13[iVar0];
				}
			}
		}
		else
		{
			Global_23011.f_49[iVar0] = iParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
		}
		if (Global_23011.f_124)
		{
			Global_23011.f_19[iVar2] = iVar1;
			Global_23011.f_24[iVar2] = uVar3;
			Global_23011.f_29[iVar2] = uVar4;
			Global_23011.f_34[iVar0] = 0;
			Global_23011.f_44[iVar0] = 0;
			Global_23011.f_39[iVar0] = 0;
			if (bVar9)
			{
				if (Global_23011.f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0]))
					{
						Global_23011.f_76[iVar0] = PED::GET_PED_ARMOUR((*iParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						Global_23011.f_81[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], true) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_9__.func_603() || __LIB_0__.func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__.func_39(14))
		{
			if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_34[iVar0] == 3)
			{
				Global_23011.f_69 = iVar2;
				Global_23011.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_6__.func_854(0) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(3) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(2) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(9) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(10) || Global_23011.f_12) || __LIB_0__.func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__.func_39(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_11__.func_178(iParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_11__.func_178(iParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_11__.func_178(iParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_11__.func_178(iParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = __LIB_36__.func_72(iParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = __LIB_36__.func_72(iParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_26__.func_374(iParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = __LIB_36__.func_72(iParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__.func_303(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (iParam0->f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (iParam0->f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (iParam0->f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = __LIB_20__.func_728();
					}
					switch (iVar11)
					{
						case 0:
							if (iParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (iParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (iParam0->f_43)
							{
								bVar12 = iParam0->f_40;
								bVar13 = iParam0->f_41;
								bVar14 = iParam0->f_42;
							}
							else
							{
								bVar12 = true;
								bVar13 = 2;
							}
							break;
						case 1:
							if (iParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (iParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (iParam0->f_43)
							{
								bVar12 = iParam0->f_40;
								bVar13 = iParam0->f_41;
								bVar14 = iParam0->f_42;
							}
							else
							{
								bVar12 = 2;
								bVar13 = false;
							}
							break;
						case 2:
							if (iParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (iParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (iParam0->f_43)
							{
								bVar12 = iParam0->f_40;
								bVar13 = iParam0->f_41;
								bVar14 = iParam0->f_42;
							}
							else
							{
								bVar12 = false;
								bVar13 = true;
							}
							break;
					}
					bVar15 = true;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (__LIB_36__.func_72(iParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (__LIB_36__.func_72(iParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (__LIB_36__.func_72(iParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (__LIB_36__.func_72(iParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_36__.func_72(iParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_36__.func_72(iParam0, bVar14))
						{
							Global_23011.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_23011.f_11)
	{
		Global_23011.f_125 = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_23011.f_11;
}

void func_850()//Position - 0x8BFB3
{
	bool bVar0;
	if (!bLocal_464)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
			{
				if (iLocal_189 == 2)
				{
					bVar0 = true;
				}
				else if (iLocal_416)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					bLocal_464 = func_802("AM_H_NOSTAM" /* GXT: You have run out of stamina. Pushing your body any harder will cause you to lose health. */, 0, -1);
					if (bLocal_464)
					{
						__LIB_0__.func_460(29);
					}
				}
			}
		}
	}
}

void func_851()//Position - 0x8C00F
{
	if (!iLocal_416)
	{
		if (Local_238.f_0 != 0)
		{
			iLocal_416 = 1;
		}
		else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_558 + 5000)
			{
				if (func_802("FC_CHOPHLP", 0, 14000))
				{
					func_827(&Local_238, &Local_194, 1);
					iLocal_570 = MISC::GET_GAME_TIMER();
					iLocal_416 = 1;
				}
			}
		}
	}
	else
	{
		if (!iLocal_418)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_570 + 14000)
			{
				func_827(&Local_238, &Local_194, 0);
				iLocal_418 = 1;
			}
		}
		if (Local_238.f_0 >= 1)
		{
			if (__LIB_0__.func_1("FC_CHOPHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_571 + 500)
				{
					HUD::CLEAR_HELP(false);
					iLocal_571 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (!bLocal_417)
		{
			if (Local_238.f_0 == 2 || Local_238.f_0 == 0)
			{
				if (!bLocal_394)
				{
					bLocal_417 = func_802("FC_QSWHLP", 0, -1);
				}
			}
		}
		else if (__LIB_0__.func_1("FC_QSWHLP"))
		{
			if (Local_238.f_0 == 1 || Local_238.f_0 == 3)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_571 + 500)
				{
					HUD::CLEAR_HELP(false);
					iLocal_571 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_852()//Position - 0x8C123
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				switch (Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2)
				{
					case 0:
						if (Local_238.f_0 == 0)
						{
							if (Local_246[iVar0 /*12*/].f_2 > 0)
							{
								if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__.func_77(0)) && func_210()) && !bLocal_401)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], 3.7f, 3.7f, 2f, false, true, 0))
									{
										if (!(iVar0 == 2 && iVar1 == 0))
										{
											Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
											iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], true), 3.5f, 0, 7);
											if ((Var3.f_1 < 0f && !ENTITY::DOES_ENTITY_EXIST(iVar4)) && ((iVar0 != 0 || iVar1 != 1) || Var3.f_0 < 0f))
											{
												bVar2 = true;
												if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
												{
													Var5 = { 0f, 0f, 0f };
													if (iVar1 == 0)
													{
														Var5.f_0 = 1.6f;
														Var5.f_1 = 2.36f;
														fVar6 = ((func_371(iVar0) - 180f) + 6.7f);
													}
													else
													{
														Var5.f_0 = -1.6f;
														Var5.f_1 = -2.36f;
														fVar6 = (func_371(iVar0) + 6.7f);
													}
													Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_246[iVar0 /*12*/], Var5) };
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
													TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
													TASK::TASK_CLEAR_LOOK_AT(0);
													if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1.8f)
													{
														TASK::TASK_STAND_STILL(0, 1000);
													}
													if ((iVar0 == 0 && iVar1 == 1) || (iVar0 == 1 && iVar1 == 1))
													{
														TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var7, 1f, 20000, fVar6, 0.5f);
													}
													else
													{
														TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var7, 1f, 20000, 0.25f, 0, fVar6);
													}
													TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
													TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_631);
													if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
													{
														PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), fVar6);
													}
													bVar2 = false;
													iLocal_626 = MISC::GET_GAME_TIMER();
													Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 1;
												}
											}
										}
									}
								}
							}
						}
						break;
					case 1:
						__LIB_8__.func_611(0);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
							}
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 69, true);
						}
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						bVar8 = false;
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || MISC::GET_GAME_TIMER() >= iLocal_626 + 21000)
						{
							bVar8 = true;
						}
						if (bVar8)
						{
							if (iVar1 == 0)
							{
								fVar9 = 180f;
							}
							else
							{
								fVar9 = 0f;
							}
							iLocal_393 = 1;
							if (__LIB_0__.func_405("FC_GOBOX", 0, 0))
							{
								__LIB_26__.func_550(0, 1, 0, 0);
							}
							HUD::CLEAR_HELP(true);
							if (Local_246[iVar0 /*12*/].f_2 == 2)
							{
								bLocal_396 = true;
								bLocal_397 = true;
							}
							else
							{
								bLocal_396 = false;
								bLocal_397 = false;
							}
							iLocal_398 = 0;
							iLocal_399 = 0;
							iLocal_400 = 0;
							bLocal_456 = true;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 2;
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							iLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							Local_535 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1.9f, 2.2f, -1f) };
							Local_536 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 6.65f) };
							Local_537 = { ENTITY::GET_ENTITY_COORDS(Local_246[iVar0 /*12*/], true) + Vector(func_854(iVar0, iVar1), 0f, 0f) };
							Local_538 = { 0f, 0f, (fVar9 + func_371(iVar0)) };
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_590, Local_535, Local_536, 2);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_590, false);
							iLocal_591 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_591, Local_246[iVar0 /*12*/], -1);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_591, 0f, 0f, 0f, 0f, 0f, fVar9, 2);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_591, false);
							iLocal_592 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_592, Local_537, Local_538, 2);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_592, false);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_590, func_205(3), "open_train_car_fra", 4f, -2f, 5, 0, 1000f, 0);
							ENTITY::DETACH_ENTITY(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], true, true);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], iLocal_591, "open_train_car_door", func_205(3), 4f, 8f, 0, 1000f);
							ENTITY::DETACH_ENTITY(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, true, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, false);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, iLocal_592, "open_train_car_handle", func_205(3), 1000f, 8f, 0, 1000f);
							ENTITY::SET_ENTITY_COLLISION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, false, false);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1);
							iLocal_589 = MISC::GET_GAME_TIMER();
						}
						break;
					case 2:
						__LIB_8__.func_611(0);
						if (!iLocal_398)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_589 + 3500)
							{
								if (iVar0 != 2)
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									iLocal_398 = 1;
								}
							}
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
						{
							__LIB_26__.func_588(&Local_535, Local_537, (0.85f / 2f));
							__LIB_26__.func_588(&Local_536, Local_538, (7.5f / 2f));
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_590, Local_535, Local_536, 2);
							fVar10 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_590);
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_591))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_591, fVar10);
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_592))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_592, fVar10);
							}
							if (iVar0 == 2)
							{
								if (!bLocal_494)
								{
									if (fVar10 >= 0.36f)
									{
										iLocal_593 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_593, Local_246[iVar0 /*12*/], -1);
										PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_593, 0f, 0f, 0f, 0f, 0f, 0f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_593, false);
										func_853(iVar0, iVar1);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_593, 0.273f);
										HUD::DISPLAY_RADAR(false);
										HUD::DISPLAY_HUD(false);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
										bLocal_494 = true;
									}
								}
							}
							if (!iLocal_399)
							{
								if (fVar10 >= 0.51f)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Boxcar_Door_Slide", Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], "FRANKLIN_0_SOUNDS", false, 0);
									iLocal_399 = 1;
								}
							}
							if (!iLocal_400)
							{
								if (fVar10 >= 0.843f)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Boxcar_Door_Limit", Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], "FRANKLIN_0_SOUNDS", false, 0);
									iLocal_400 = 1;
								}
							}
						}
						if (iVar0 == 2)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_593))
							{
								bVar12 = true;
								fVar11 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_593);
							}
							else if (bLocal_494)
							{
								bVar12 = false;
							}
							else
							{
								bVar12 = true;
							}
						}
						else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
						{
							bVar12 = true;
							fVar11 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_590);
						}
						else
						{
							bVar12 = false;
						}
						if (bVar12)
						{
							if (!bLocal_396)
							{
								if (fVar11 >= 0.3f)
								{
									bLocal_396 = func_251("FKN0_ISHE2", 0, 0, 0, 1);
									if (bLocal_396)
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 5f, 4);
									}
								}
							}
							if (iVar0 != 2)
							{
								if (fVar11 >= 0.88f)
								{
									if (!bLocal_397)
									{
										bLocal_397 = func_251("FKN0_ISHE3", 0, 0, 0, 1);
									}
								}
							}
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], true);
							ENTITY::SET_ENTITY_COLLISION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], true, false);
							ENTITY::FREEZE_ENTITY_POSITION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1, true, false);
							Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 = 3;
							iLocal_398 = 1;
							if (iVar0 == 2)
							{
								func_51(0, 3, 0);
							}
						}
						break;
					case 3:
						break;
				}
				if (Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 == 1 || Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_2 == 2)
				{
					bLocal_394 = true;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (!__LIB_0__.func_1("FC_BOXHLP"))
		{
			__LIB_0__.func_187("FC_BOXHLP");
		}
	}
	else if (__LIB_0__.func_1("FC_BOXHLP"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_853(int iParam0, int iParam1)//Position - 0x8C992
{
	char* sVar0;
	struct<3> Var1;
	func_57();
	if (iParam0 == 2)
	{
		sVar0 = "open_train_car_cam";
		MISC::CLEAR_AREA(516.24835f, -677.8181f, 24.2444f, 10f, true, false, false, false);
		MISC::CLEAR_AREA(511.58005f, -651.0069f, 23.75105f, 24f, true, false, false, false);
		MISC::CLEAR_AREA_OF_PROJECTILES(517.10986f, -665.34436f, 23.80532f, 25f, 0);
		FIRE::STOP_FIRE_IN_RANGE(517.10986f, -665.34436f, 23.80532f, 25f);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(517.10986f, -665.34436f, 23.80532f, 25f);
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_246[iParam0 /*12*/].f_3[iParam1 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		if (Var1.f_0 <= 0f)
		{
			if (iLocal_613 == 0)
			{
				sVar0 = "open_train_car_CAML1";
				iLocal_613 = 1;
			}
			else
			{
				sVar0 = "open_train_car_CAML2";
				iLocal_613 = 0;
			}
		}
		else if (iLocal_614 == 0)
		{
			sVar0 = "open_train_car_CAMR1";
			iLocal_614 = 1;
		}
		else
		{
			sVar0 = "open_train_car_CAMR2";
			iLocal_614 = 0;
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f, 0);
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f);
	}
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_593, sVar0, func_205(3));
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_593, false);
}

float func_854(int iParam0, int iParam1)//Position - 0x8CAE8
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return -0.145f;
			}
			else
			{
				return -0.105f;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return -0.148f;
			}
			else
			{
				return -0.145f;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return -0.07f;
			}
			else
			{
				return -0.05f;
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return -0.02f;
			}
			else
			{
				return -0.065f;
			}
			break;
	}
	return 0f;
}

void func_855()//Position - 0x8CB80
{
	switch (iLocal_267)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 488.903f, -495.385f, 23.597f, 562.402f, -504.983f, 26.316f, 41f, false, true, 0) || iLocal_189 == 3) || iLocal_390)
			{
				if (!iLocal_306)
				{
					if (Local_238.f_0 == 0)
					{
						if (func_802("FC_RUNHLP1", 0, -1))
						{
							iLocal_267 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (!iLocal_306)
			{
				if (Local_238.f_0 == 0)
				{
					if (func_802("FC_RUNHLP2", 0, -1))
					{
						iLocal_267 = 2;
					}
				}
			}
			break;
		case 2:
			break;
	}
	if (!iLocal_390)
	{
		if (__LIB_26__.func_472(1, 1) > iLocal_604 && !iLocal_306)
		{
			if (func_251("FKN0_RUNUP", 0, 0, 0, 1))
			{
				func_239(-1, -1, -1);
				iLocal_390 = 1;
			}
		}
	}
}

void func_856(bool bParam0)//Position - 0x8CC68
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bVar0 = false;
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(iLocal_275))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
			{
				bVar0 = true;
			}
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam0)
		{
			iVar1 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_275);
			if (iVar1 > iLocal_582)
			{
				func_27(0);
				iVar2 = iVar1 + 3;
				iVar3 = iVar1 + 7;
				TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("hood8", &iVar4);
				iVar4 = (iVar4 - 1);
				if (iVar2 <= iVar4 && iVar3 <= iVar4)
				{
					TASK::WAYPOINT_RECORDING_GET_COORD("hood8", iVar2, &Var5);
					TASK::WAYPOINT_RECORDING_GET_COORD("hood8", iVar3, &Var6);
					fVar7 = (MISC::GET_HEADING_FROM_VECTOR_2D((Var6.f_0 - Var5.f_0), (Var6.f_1 - Var5.f_1)) + 90f);
					iLocal_632 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_franklin0_chop_trail", Var5 + Vector(0.3f, 0f, 0f), 0f, 0f, fVar7, 7f, false, false, false, false);
					Local_238.f_13 = { Var5 };
					iLocal_582 = iVar2;
				}
				else
				{
					Var5 = { 533.86f, -679.24f, 25.27f };
					Var6 = { 527.99f, -678.71f, 24.75f };
					fVar7 = (MISC::GET_HEADING_FROM_VECTOR_2D((Var6.f_0 - Var5.f_0), (Var6.f_1 - Var5.f_1)) + 90f);
					iLocal_632 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_franklin0_chop_trail", Var5 + Vector(0.3f, 0f, 0f), 0f, 0f, fVar7, 8f, false, false, false, false);
					Local_238.f_13 = { Var5 };
					iLocal_582 = iVar4;
				}
			}
		}
		else if (!iLocal_430)
		{
			func_27(1);
			iLocal_632 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_franklin0_chop_trail", Local_234.f_0, 0f, 0f, 0f, 0f, 0f, 270f, 23553, 5f, false, false, false);
			iLocal_430 = 1;
		}
	}
	else
	{
		func_27(0);
	}
}

void func_858()//Position - 0x8CE15
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				iVar1 = 5;
				iVar2 = 0;
				iVar3 = 1300;
				fVar4 = 4f;
				break;
			case 1:
				iVar1 = 8;
				iVar2 = 0;
				iVar3 = 20000;
				fVar4 = 2.67f;
				break;
			case 2:
				iVar1 = 7;
				iVar2 = 0;
				if (iLocal_189 == 3 || iLocal_306)
				{
					iVar3 = 7400;
					fVar4 = 6.5f;
				}
				else
				{
					iVar3 = 30000;
					fVar4 = 10f;
				}
				break;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_281[iVar0], false))
		{
			if (!iLocal_362[iVar0])
			{
				if (iLocal_244 == iVar1)
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_566 + iVar2))
					{
						iLocal_362[iVar0] = 1;
						iLocal_569[iVar0] = MISC::GET_GAME_TIMER();
						fLocal_549[iVar0] = fVar4;
						VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_281[iVar0], fLocal_549[iVar0]);
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() >= (iLocal_569[iVar0] + iVar3))
			{
				fLocal_549[iVar0] = (fLocal_549[iVar0] - (1f * SYSTEM::TIMESTEP()));
				if (fLocal_549[iVar0] <= 0f)
				{
					fLocal_549[iVar0] = 0f;
				}
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_281[iVar0], fLocal_549[iVar0]);
				VEHICLE::SET_TRAIN_SPEED(iLocal_281[iVar0], fLocal_549[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_859()//Position - 0x8CF62
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	if (!iLocal_368)
	{
		__LIB_12__.func_12();
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (!bLocal_346)
	{
		bLocal_346 = func_251("FKN0_GOGET3", 0, 0, 0, 1);
	}
	else if (!iLocal_310)
	{
		iLocal_310 = func_208("FC_CHASE", 1, 0, 7500);
	}
	if (!bLocal_505)
	{
		bLocal_505 = AUDIO::PREPARE_MUSIC_EVENT("FRA0_FENCE");
	}
	func_907();
	switch (iLocal_263)
	{
		case 0:
			func_781(9);
			func_781(10);
			iLocal_263 = 1;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(func_76(9)) && STREAMING::HAS_MODEL_LOADED(func_76(10)))
			{
				func_372(0, 0, 1, 0, 0);
				iLocal_263 = 2;
			}
			break;
	}
	if (!iLocal_483)
	{
		if ((Var0.f_1 >= -550.1f && Var0.f_0 >= 481.8f) && Var0.f_2 <= 25.3f)
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				iVar2 = iVar1;
				if ((((iVar2 == 2 || iVar2 == 4) || iVar2 == 5) || iVar2 == 6) || iVar2 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_280[iVar1], false))
						{
							iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_280[iVar1], -1, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar3))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
							}
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[iVar1]));
					}
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar4 = iVar1;
				if (((iVar4 == 0 || iVar4 == 1) || iVar4 == 2) || iVar4 == 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_245[iVar1 /*5*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_245[iVar1 /*5*/]));
					}
				}
				iVar1++;
			}
			func_204(11);
			iLocal_483 = 1;
		}
	}
	if (!iLocal_484)
	{
		if (iLocal_368)
		{
			if (Var0.f_1 >= -517.4f && Var0.f_0 >= 519.3f)
			{
				func_204(9);
				func_204(10);
				iVar5 = 0;
				while (iVar5 < 7)
				{
					iVar6 = iVar5;
					if (iVar6 == 0 || iVar6 == 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar5]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_280[iVar5], false))
							{
								iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_280[iVar5], -1, false);
								if (ENTITY::DOES_ENTITY_EXIST(iVar7))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar7);
								}
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[iVar5]));
						}
					}
					iVar5++;
				}
				iLocal_484 = 1;
			}
		}
	}
	func_902();
	if (!iLocal_306)
	{
		func_885();
	}
	func_871();
	func_792();
	func_855();
	func_850();
	if (iLocal_252 != 2)
	{
		func_255(4);
	}
	else if (iLocal_237 == 3)
	{
		func_255(8);
	}
	else
	{
		func_255(9);
	}
	if (!iLocal_436)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[1]))
		{
			bVar8 = false;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_279[1], false))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_279[1], 70f, 70f, 70f, false, false, 0))
				{
					bVar8 = true;
				}
			}
			else
			{
				bVar8 = true;
			}
			if (bVar8)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_279[1]));
				func_204(8);
				iLocal_436 = 1;
			}
		}
	}
	switch (iLocal_264)
	{
		case 0:
			func_781(13);
			func_781(14);
			func_781(15);
			iLocal_264 = 1;
			break;
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(func_76(13)) && STREAMING::HAS_MODEL_LOADED(func_76(14))) && STREAMING::HAS_MODEL_LOADED(func_76(15)))
			{
				func_373();
				iLocal_264 = 2;
			}
			break;
	}
	if (!iLocal_306)
	{
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = false;
		if (!PED::IS_PED_INJURED(iLocal_275) && !PED::IS_PED_INJURED(Local_234.f_0))
		{
			if (Local_238.f_0 == 0 || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 22f, 22f, 22f, false, false, 0))
			{
				if (((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 30f, 30f, 30f, false, false, 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 3.5f) && (ENTITY::GET_ENTITY_SPEED(iLocal_275) >= 3.5f || Local_235.f_1 == 1)) && iLocal_252 == 0)
				{
					bVar9 = true;
				}
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 40f, 40f, 40f, false, false, 0) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 3.5f) && (ENTITY::GET_ENTITY_SPEED(Local_234.f_0) >= 3.5f || Local_234.f_1 == 1))
				{
					bVar10 = true;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_278[0]))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_278[0]))
			{
				bVar9 = false;
				bVar10 = false;
			}
		}
		if (!bLocal_462)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 480.145f, -590.657f, 30.419f, 467.195f, -589.278f, 27f, 30f, false, true, 0))
			{
				bLocal_462 = func_802("FC_JUMHLP", 0, -1);
			}
		}
		else if (__LIB_0__.func_1("FC_JUMHLP"))
		{
			if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_571 + 500)
				{
					HUD::CLEAR_HELP(false);
					iLocal_571 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (!iLocal_476)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 494.4673f, -538.4968f, 23.75095f, 493.09793f, -552.72064f, 26.25095f, 7.9f, false, true, 0) && (Local_234.f_2 >= 2 || iLocal_236 >= 3))
			{
				iLocal_476 = func_802("FC_SLDHLP", 0, -1);
			}
		}
		if ((Var0.f_1 >= -538.074f || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "move_climb", "bonnet_slide_r_in", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "move_climb", "bonnet_slide_l_in", 3))
		{
			iLocal_476 = 1;
			if (__LIB_0__.func_1("FC_SLDHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_571 + 500)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 3);
					HUD::CLEAR_HELP(false);
					iLocal_571 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (bVar9)
		{
			if (bVar10)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 1:
					case 2:
						bVar12 = true;
						break;
					case 0:
						bVar11 = true;
						break;
				}
			}
			else
			{
				bVar11 = true;
			}
		}
		else if (bVar10)
		{
			bVar12 = true;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_556)
		{
			func_239(500, 2000, -1);
		}
		if (!bLocal_371)
		{
			if (iLocal_236 != 6)
			{
				if (bVar12)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						func_254("FKN0_FCHASE", -1, 7000, 10000, 0);
					}
					else
					{
						func_254("FKN0_OG2", -1, 7000, 10000, 0);
					}
				}
				else if (bVar11)
				{
					func_254("FKN0_DOGCHS", -1, 7000, 10000, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_275))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_275, 560.952f, -532.453f, 28.7f, 574.626f, -533.877f, 13.742f, 50f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 560.952f, -532.453f, 28.7f, 574.626f, -533.877f, 13.742f, 50f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_275))
					{
						bLocal_371 = func_251("FKN0_GETHIM", 0, 0, 0, 1);
					}
				}
			}
		}
		if (!iLocal_334)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_558 + 1000)
			{
				iLocal_334 = 1;
			}
			else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
		}
		if (iLocal_368)
		{
			if (iLocal_369)
			{
				if (MISC::GET_GAME_TIMER() <= iLocal_596 + 400)
				{
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
					}
				}
			}
		}
		if (!iLocal_415)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(8), 80f, 80f, 80f, false, false, 0))
			{
				func_870();
			}
		}
		if (!iLocal_419)
		{
			if ((Var0.f_0 > 485.92f && Var0.f_1 > -519f) && Var0.f_2 < 29.32f)
			{
				func_868();
			}
		}
		if (!PED::IS_PED_INJURED(Local_234.f_0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 18f, 18f, 18f, false, false, 0))
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.94f);
			}
			else
			{
				PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.97f);
			}
		}
		else
		{
			PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.97f);
		}
		if (!iLocal_368)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 488.71494f, -527.1984f, 23.75116f, 499.25632f, -517.15485f, 25.89596f, false, true, 0))
			{
				if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				}
			}
			if (Local_238.f_0 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 494.3f, -516.89f, 23.05f, 494.07f, -519.45f, 25.85f, 7.8f, false, true, 1))
				{
					if (func_866(PLAYER::PLAYER_PED_ID(), 10, 50f))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							if (__LIB_0__.func_398(1, 0, 1))
							{
								iLocal_576 = 1;
								if (func_210())
								{
									iLocal_306 = 1;
								}
							}
						}
					}
				}
				else if ((Var0.f_1 >= -516.9f || iLocal_236 >= 6) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 521.171f, -552.487f, 23.781f, 526.091f, -519.091f, 29.735f, 40f, false, true, 0))
				{
					bLocal_367 = true;
					iLocal_368 = 1;
				}
				else
				{
					iVar13 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(494.3488f, -516.8829f, 23.8982f, 2f, joaat("prop_fncconstruc_01d"), false, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iVar13))
					{
						if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iVar13, 0))
						{
							bLocal_367 = true;
							iLocal_368 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (!bLocal_507)
			{
				if (!bLocal_506)
				{
					bLocal_507 = __LIB_11__.func_828("FRA0_BYPASS_FENCE");
				}
			}
			if (!iLocal_445)
			{
				func_45(3);
				func_52(4);
				iLocal_445 = 1;
			}
		}
		if (bLocal_367)
		{
			switch (iLocal_254)
			{
				case 0:
					if (Local_235.f_1 == 0)
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hood11", ENTITY::GET_ENTITY_COORDS(iLocal_275, true), &iVar14);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood11", iVar14, 4, -1);
						Local_235.f_11 = 0;
						iLocal_252 = 3;
						Local_235.f_1 = 0;
						Local_235.f_9 = -1;
						Local_235.f_10 = MISC::GET_GAME_TIMER();
						iLocal_237 = 4;
						iLocal_254 = 1;
					}
					break;
				case 1:
					if (Local_235.f_1 != 0)
					{
						iLocal_254 = 2;
					}
					break;
				}
		}
		if (iLocal_521)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_625 + 3000)
			{
				func_809(3);
			}
		}
		if (!bLocal_372)
		{
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				if (iLocal_236 == 6)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_234.f_0, func_865(8), 1f, 1f, 3f, false, true, 0))
					{
						if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 542.683f, -531.091f, 23.268f, 588.103f, -536.543f, 30.591f, 80f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 18f, 18f, 18f, false, false, 0)) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_234.f_0) && !ENTITY::IS_ENTITY_OCCLUDED(Local_234.f_0))) || Local_238.f_0 != 0)
						{
							iLocal_576 = 2;
							if (func_210())
							{
								iLocal_306 = 1;
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_288))
							{
								HUD::REMOVE_BLIP(&iLocal_288);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
							{
								PED::DELETE_PED(&Local_234);
							}
							iLocal_521 = 1;
							iLocal_625 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	else
	{
		switch (iLocal_576)
		{
			case 0:
				break;
			case 1:
				func_861();
				break;
			case 2:
				func_860();
				break;
			}
	}
}

void func_860()//Position - 0x8DB14
{
	int iVar0;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_193)
	{
		case 0:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			func_7(1, 1, -1, 1, 0, 1, 1, 1);
			func_52(5);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			iLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(559.729f, -569.216f, 23.967f, 0f, 0f, -6.5f, 2);
			func_57();
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_590, "BallasOG_JumpOnTrain_IG7_CAMERA", func_205(2));
			MISC::CLEAR_AREA(551.07f, -573.04f, 23.8f, 18f, true, false, false, false);
			MISC::CLEAR_AREA_OF_PROJECTILES(551.07f, -573.04f, 23.8f, 18f, 0);
			FIRE::STOP_FIRE_IN_RANGE(551.07f, -573.04f, 23.8f, 18f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(551.07f, -573.04f, 23.8f, 18f);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 562.88f, -545.27f, 23.79f, true, false, false, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_275, 561.94f, -543.4f, 23.77f, true, false, false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_275);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_281[2]))
			{
				VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_281[2]));
			}
			func_362(2, 2, 1);
			iLocal_362[2] = 1;
			iLocal_569[2] = MISC::GET_GAME_TIMER();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_281[1], false) && !PED::IS_PED_INJURED(Local_234.f_0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_234.f_0);
				Local_234.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0.8f, 0f, 0f, 0f, 180f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_234.f_9, VEHICLE::GET_TRAIN_CARRIAGE(iLocal_281[1], 2), 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_234.f_0, Local_234.f_9, func_205(2), "BallasOG_JumpOnTrain_IG7", 1000f, -1000f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_234.f_0, false, false);
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_245[iVar0 /*5*/]))
				{
					PED::DELETE_PED(&(Local_245[iVar0 /*5*/]));
				}
				iVar0++;
			}
			iLocal_524 = 0;
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_553 = MISC::GET_GAME_TIMER();
			iLocal_193 = 1;
			break;
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			switch (iLocal_231)
			{
				case 0:
					if (!iLocal_373)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_553 + 3800)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 561.64f, -559.8f, 23.79f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.43f);
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_84(20), 2f, 20000, 40000f, 0.5f);
								iLocal_373 = 1;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_553 + 4000)
					{
						iLocal_553 = MISC::GET_GAME_TIMER();
						iLocal_231 = 1;
					}
					break;
				case 1:
					if (!bLocal_426)
					{
						bLocal_426 = func_251("FKN0_LOST", 1, 1, 0, 1);
					}
					if (!iLocal_388)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_553 + 1000)
						{
							if (!PED::IS_PED_INJURED(Local_234.f_0))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_234.f_0);
								ENTITY::DETACH_ENTITY(Local_234.f_0, true, true);
								ENTITY::SET_ENTITY_COORDS(Local_234.f_0, func_84(21), true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_234.f_0, 173f);
								ENTITY::FREEZE_ENTITY_POSITION(Local_234.f_0, true);
							}
							iLocal_388 = 1;
						}
					}
					if (!iLocal_524)
					{
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_553 + 1700)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_524 = 1;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_553 + 2000)
					{
						iLocal_193 = 2;
					}
					break;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				ENTITY::DETACH_ENTITY(iLocal_275, true, true);
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_275, func_84(23), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_275, 156.2f);
				}
			}
			func_45(5);
			func_7(0, 1, -1, 1, 1, 1, 1, 1);
			func_268(3, 0, 1, 0, 0, 1, 1, 1);
			break;
	}
}

void func_861()//Position - 0x8DF21
{
	switch (iLocal_193)
	{
		case 0:
			func_7(1, 1, -1, 1, 0, 1, 1, 0);
			func_862(12, 1, 1800);
			MISC::CLEAR_AREA_OF_PROJECTILES(494.35767f, -516.89404f, 23.8195f, 8f, 0);
			FIRE::STOP_FIRE_IN_RANGE(494.35767f, -516.89404f, 23.8195f, 8f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(494.35767f, -516.89404f, 23.8195f, 8f);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 493.48f, -525.11f, 23.75148f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -7.1f);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_205(2), "franklin_wallcrash", 1000f, -8f, -1, 819200, 0.52f, false, false, false);
			func_52(4);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_275, 492.9f, -521.53f, 23.75f, true, false, false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_275);
			}
			CAM::SHAKE_CAM(iLocal_292, "HAND_SHAKE", 1f);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_524 = 0;
			iLocal_553 = MISC::GET_GAME_TIMER();
			iLocal_193 = 1;
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 91, true);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			if (!iLocal_448)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_553)
				{
					iLocal_448 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_553 + 400)
			{
				if (bLocal_505)
				{
					if (!bLocal_507)
					{
						if (!bLocal_506)
						{
							bLocal_506 = __LIB_11__.func_828("FRA0_FENCE");
						}
					}
				}
				if (!iLocal_445)
				{
					CAM::SHAKE_CAM(iLocal_292, "SMALL_EXPLOSION_SHAKE", 0.3f);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 500, 128);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Crash_Through_Fence", 494.4f, -516.9f, 24.9f, "FRANKLIN_0_SOUNDS", false, 0, false);
					iLocal_445 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_553 + 1000)
			{
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_275, 494.01862f, -518.84265f, 23.75159f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_275, -15.75f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_275);
					PED::FORCE_PED_MOTION_STATE(iLocal_275, joaat("MotionState_Run"), true, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 2f);
					iLocal_237 = 3;
					iLocal_252 = 2;
				}
				iLocal_193 = 2;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0f, true, false);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 2f);
			}
			RECORDING::REPLAY_STOP_EVENT();
			func_7(0, 1, -1, 0, 0, 1, 0, 0);
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 2, 0);
			iLocal_369 = 1;
			iLocal_596 = MISC::GET_GAME_TIMER();
			bLocal_370 = true;
			iLocal_368 = 1;
			break;
	}
}

void func_862(int iParam0, bool bParam1, int iParam2)//Position - 0x8E1EC
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	func_864(iParam0, &Var0, &Var1, &fVar2);
	func_863(&iLocal_292);
	CAM::DETACH_CAM(iLocal_292);
	CAM::STOP_CAM_POINTING(iLocal_292);
	CAM::SET_CAM_COORD(iLocal_292, Var0);
	CAM::SET_CAM_ROT(iLocal_292, Var1, 2);
	CAM::SET_CAM_FOV(iLocal_292, fVar2);
	if (bParam1)
	{
		func_864(iParam0 + 1, &Var0, &Var1, &fVar2);
		func_863(&iLocal_293);
		CAM::SET_CAM_COORD(iLocal_293, Var0);
		CAM::SET_CAM_ROT(iLocal_293, Var1, 2);
		CAM::SET_CAM_FOV(iLocal_293, fVar2);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_293, iLocal_292, iParam2, 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_863(int iParam0)//Position - 0x8E289
{
	if (CAM::DOES_CAM_EXIST(iLocal_293))
	{
		CAM::DESTROY_CAM(iLocal_293, false);
	}
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::DESTROY_CAM(*iParam0, false);
	}
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
}

void func_864(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x8E2CC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 383.42f, 357.86f, 102.65f };
			*uParam2 = { -1.53f, 0f, -89.85f };
			*fParam3 = 31.64f;
			break;
		case 1:
			*uParam1 = { 383.42f, 357.86f, 102.65f };
			*uParam2 = { -1.53f, 0f, -89.85f };
			*fParam3 = 29.64f;
			break;
		case 2:
			*uParam1 = { 390.96f, 357.8f, 102.85f };
			*uParam2 = { -1.62f, 0f, 85.38f };
			*fParam3 = 31.24f;
			break;
		case 3:
			*uParam1 = { 390.96f, 357.8f, 102.85f };
			*uParam2 = { -1.62f, 0f, 85.38f };
			*fParam3 = 29.24f;
			break;
		case 4:
			*uParam1 = { 374.79f, 360.54f, 101.92f };
			*uParam2 = { 8.38f, 0f, -102.25f };
			*fParam3 = 41.09f;
			break;
		case 5:
			*uParam1 = { 374.79f, 360.54f, 101.92f };
			*uParam2 = { 8.38f, 0f, -102.25f };
			*fParam3 = 39.09f;
			break;
		case 6:
			*uParam1 = { 367.78f, 366.68f, 108.92f };
			*uParam2 = { -22.82f, 0f, -145.5f };
			*fParam3 = 41.09f;
			break;
		case 7:
			*uParam1 = { 367.78f, 366.68f, 108.92f };
			*uParam2 = { -22.82f, 0f, -145.5f };
			*fParam3 = 39.09f;
			break;
		case 8:
			*uParam1 = { 457.5f, -704.22f, 27.6f };
			*uParam2 = { -6.9f, 0f, -24.43f };
			*fParam3 = 38.53f;
			break;
		case 9:
			*uParam1 = { 456.1f, -696.84f, 26.64f };
			*uParam2 = { 10.45f, 0f, -138.8f };
			*fParam3 = 33.53f;
			break;
		case 10:
			*uParam1 = { 494.95f, -562.77f, 26.8f };
			*uParam2 = { 36.68f, 0.31f, 98.29f };
			*fParam3 = 39.01f;
			break;
		case 11:
			*uParam1 = { 494.95f, -562.77f, 26.8f };
			*uParam2 = { 7.33f, 1.25f, 42.55f };
			*fParam3 = 39.01f;
			break;
		case 12:
			*uParam1 = { 493.14f, -519.1f, 24.76f };
			*uParam2 = { 6.54f, 0.98f, -39.25f };
			*fParam3 = 50f;
			break;
		case 13:
			*uParam1 = { 494.61f, -516.3f, 25.27f };
			*uParam2 = { -2.87f, 0.57f, -15.58f };
			*fParam3 = 50f;
			break;
		case 14:
			*uParam1 = { 555.54f, -559.33f, 27.13f };
			*uParam2 = { -10.37f, 4.4f, 143.73f };
			*fParam3 = 46.164f;
			break;
		case 15:
			*uParam1 = { 555.54f, -559.33f, 27.13f };
			*uParam2 = { -10.37f, 4.4f, 135.1f };
			*fParam3 = 46.164f;
			break;
		case 16:
			*uParam1 = { 563.9f, -560.71f, 29.68f };
			*uParam2 = { -19.32f, 5.88f, 130.27f };
			*fParam3 = 55f;
			break;
		case 17:
			*uParam1 = { 563.9f, -560.71f, 29.68f };
			*uParam2 = { -15.81f, 5.88f, 130.27f };
			*fParam3 = 55f;
			break;
		case 18:
			*uParam1 = { 532.45f, -678.69f, 25.22f };
			*uParam2 = { -2.12f, 0f, 99.72f };
			*fParam3 = 37.88f;
			break;
		case 19:
			*uParam1 = { 531.91f, -677.94f, 25.2f };
			*uParam2 = { -2.12f, 0f, 111.87f };
			*fParam3 = 37.88f;
			break;
		case 20:
			*uParam1 = { 527.4f, -674.36f, 25.92f };
			*uParam2 = { -7.43f, 0f, 162.87f };
			*fParam3 = 43.79f;
			break;
		case 21:
			*uParam1 = { 506.18f, -643.42f, 24.17f };
			*uParam2 = { 3.93f, 0f, -119.93f };
			*fParam3 = 24.91f;
			break;
		case 22:
			*uParam1 = { 506.18f, -643.42f, 24.17f };
			*uParam2 = { 3.93f, 0f, -119.93f };
			*fParam3 = 21.91f;
			break;
		case 23:
			*uParam1 = { 510.37f, -639.15f, 25.56f };
			*uParam2 = { -6.17f, 0f, -170.88f };
			*fParam3 = 27.6f;
			break;
		case 24:
			*uParam1 = { 510.37f, -639.15f, 25.56f };
			*uParam2 = { -6.17f, 0f, -170.88f };
			*fParam3 = 24.6f;
			break;
		case 25:
			*uParam1 = { -24.62f, -1472.97f, 36.19f };
			*uParam2 = { -13.11f, 0f, -21.69f };
			*fParam3 = 45f;
			break;
	}
}

Vector3 func_865(int iParam0)//Position - 0x8E829
{
	switch (iParam0)
	{
		case 0:
			return 475.59f, -586.06f, 27.51f;
			break;
		case 1:
			return 487.07f, -569.6f, 28.46f;
			break;
		case 2:
			return 493.2f, -545.27f, 23.75f;
			break;
		case 3:
			return 493.8f, -523.79f, 23.75f;
			break;
		case 4:
			return 531.66f, -502.47f, 23.8f;
			break;
		case 5:
			return 555.47f, -504.14f, 23.8f;
			break;
		case 8:
			return 552.98f, -564.71f, 23.83f;
			break;
		case 10:
			return 493.38f, -519.92f, 24.25f;
			break;
		case 11:
			return 478.3f, -582f, 27.85f;
			break;
		case 12:
			return 486.53f, -570.45f, 28.7f;
			break;
		case 13:
			return 492.53f, -544.55f, 24.18f;
			break;
		case 14:
			return 532f, -501.1f, 24.25f;
			break;
		case 15:
			return 556.72f, -503.84f, 24.25f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_866(int iParam0, int iParam1, float fParam2)//Position - 0x8E99A
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_11__.func_806(ENTITY::GET_ENTITY_HEADING(iParam0));
	fVar1 = __LIB_11__.func_806(func_867(iParam1));
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	if (fVar2 <= fParam2 || fVar2 >= (360f - fParam2))
	{
		return 1;
	}
	return 0;
}

float func_867(int iParam0)//Position - 0x8E9EC
{
	switch (iParam0)
	{
		case 0:
			return -96.59f;
			break;
		case 1:
			return 7.3f;
			break;
		case 2:
			return -8.93f;
			break;
		case 3:
		case 10:
			return -4.64f;
			break;
		case 4:
			return -96.77f;
			break;
		case 5:
			return -99.36f;
			break;
		case 8:
			return 79.23f;
			break;
		case 9:
			return -6.37f;
			break;
		case 11:
			return -110f;
			break;
		case 12:
			return -30f;
			break;
		case 13:
			return -4f;
			break;
		case 14:
			return -97.33f;
			break;
		case 15:
			return -96.5f;
			break;
	}
	return 0f;
}

void func_868()//Position - 0x8EADF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((((iVar0 == 2 || iVar0 == 3) || iVar0 == 7) || iVar0 == 8) || iVar0 == 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar0]))
			{
				func_869(iLocal_280[iVar0]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_245[iVar0 /*5*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_245[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
	iLocal_419 = 1;
}

void func_869(int iParam0)//Position - 0x8EB83
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
}

void func_870()//Position - 0x8EBAE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar0]))
			{
				func_869(iLocal_280[iVar0]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[iVar0]));
			}
		}
		iVar0++;
	}
	iLocal_415 = 1;
}

void func_871()//Position - 0x8EBF6
{
	func_883();
	func_858();
	func_873();
	__LIB_0__.func_371();
}

void func_873()//Position - 0x8EC16
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (!PED::IS_PED_INJURED(Local_234.f_0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!PED::IS_PED_INJURED(Local_245[iVar0 /*5*/]))
			{
				iVar2 = iVar0;
				switch (Local_245[iVar2 /*5*/].f_1)
				{
					case 0:
						switch (iVar2)
						{
							case 0:
								if (MISC::GET_GAME_TIMER() >= iLocal_566 + 1500 && iLocal_244 >= 0)
								{
									func_879(iVar2, 5, 456.9f, -636.52f, 27.51f, Local_234.f_0, -1082130432);
								}
								break;
							case 1:
								func_879(iVar2, 1, 0f, 0f, 0f, Local_245[2 /*5*/], -1082130432);
								break;
							case 2:
								func_879(iVar2, 1, 0f, 0f, 0f, Local_245[1 /*5*/], -1082130432);
								break;
							case 3:
								break;
							case 4:
								if (MISC::GET_GAME_TIMER() >= iLocal_566 + 2000 && iLocal_244 >= 4)
								{
									func_879(iVar2, 5, 515.9999f, -567.99f, 23.79971f, Local_234.f_0, -1082130432);
								}
								break;
							case 5:
								if (MISC::GET_GAME_TIMER() >= iLocal_566 + 6000 && iLocal_244 >= 4)
								{
									func_879(iVar2, 5, 525.27997f, -458.12784f, 23.81619f, Local_234.f_0, -1082130432);
								}
								break;
						}
						break;
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_245[iVar2 /*5*/], joaat("SCRIPT_TASK_CHAT_TO_PED")) == 7)
						{
							func_879(iVar2, 0, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					case 5:
						if (MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_3)
						{
							if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_275)) && !PED::IS_PED_INJURED(Local_234.f_0))
							{
								fVar3 = __LIB_0__.func_76(Local_245[iVar2 /*5*/], PLAYER::PLAYER_PED_ID(), 0);
								fVar4 = __LIB_0__.func_76(Local_245[iVar2 /*5*/], iLocal_275, 0);
								fVar5 = __LIB_0__.func_76(Local_245[iVar2 /*5*/], Local_234.f_0, 0);
								if (fVar3 < fVar4)
								{
									if (fVar3 < fVar5)
									{
										iVar6 = PLAYER::PLAYER_PED_ID();
									}
									else if (fVar5 < fVar4)
									{
										iVar6 = Local_234.f_0;
									}
									else
									{
										iVar6 = iLocal_275;
									}
								}
								else if (fVar4 < fVar5)
								{
									iVar6 = iLocal_275;
								}
								else
								{
									iVar6 = Local_234.f_0;
								}
								TASK::TASK_LOOK_AT_ENTITY(Local_245[iVar2 /*5*/], iVar6, -1, 2048, 2);
								Local_245[iVar2 /*5*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
						break;
					case 2:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_245[iVar2 /*5*/], func_205(2), "REACTION_FORWARD_BIG_INTRO_A", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_245[iVar2 /*5*/], func_205(2), "REACTION_FORWARD_BIG_INTRO_A") >= 0.98f)
							{
								if (iVar2 == 3)
								{
									func_879(iVar2, func_878(iVar2), 0f, 0f, 0f, 0, -1082130432);
								}
							}
						}
						else if (((MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_2 + 3000 && iVar2 == 3) || MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_2 + 10000) || Var1.f_1 > -625f)
						{
							func_879(iVar2, func_878(iVar2), 0f, 0f, 0f, 0, -1082130432);
						}
						else if (MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_2 + 1000)
						{
							if (iVar2 == 2)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_245[iVar2 /*5*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7 && TASK::GET_SCRIPT_TASK_STATUS(Local_245[iVar2 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_245[iVar2 /*5*/], Local_234.f_0, 30000);
								}
							}
						}
						break;
					case 3:
						if (MISC::GET_GAME_TIMER() >= (Local_245[iVar2 /*5*/].f_2 + func_877(iVar2)))
						{
							func_879(iVar2, 4, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					case 4:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_245[iVar2 /*5*/], func_205(2), "BIG_EXIT_TO_GENERIC", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_245[iVar2 /*5*/], func_205(2), "BIG_EXIT_TO_GENERIC") >= 0.98f)
							{
								func_879(iVar2, func_878(iVar2), 0f, 0f, 0f, 0, -1082130432);
							}
						}
						else if (MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_2 + 1000)
						{
							func_879(iVar2, func_878(iVar2), 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					case 6:
						if (!PED::IS_PED_RAGDOLL(Local_245[iVar2 /*5*/]))
						{
							if (((iVar2 == 3 && MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_2 + 1000) || MISC::GET_GAME_TIMER() >= Local_245[iVar2 /*5*/].f_2 + 8000) || Var1.f_1 > -626f)
							{
								Var7 = { 0f, 0f, 0f };
								Var7 = { Var7 };
								switch (iVar2)
								{
									case 3:
										Var7 = { 432.37698f, -589.83594f, 27.49981f };
										break;
								}
								func_879(iVar2, func_878(iVar2), Var7, 0, -1082130432);
							}
						}
						break;
					case 8:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_245[iVar2 /*5*/], joaat("SCRIPT_TASK_WANDER_STANDARD")) == 7)
						{
							func_879(iVar2, 8, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
					case 9:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_245[iVar2 /*5*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")) == 7)
						{
							func_879(iVar2, 9, 0f, 0f, 0f, 0, -1082130432);
						}
						break;
				}
				if (Local_245[iVar2 /*5*/].f_1 != 9)
				{
					switch (iVar2)
					{
						case 1:
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_245[iVar2 /*5*/], Local_234.f_0, 1.5f, 1.5f, 0f, false, false, 0) && !PED::IS_PED_RAGDOLL(Local_245[iVar2 /*5*/]))
							{
								func_879(iVar2, 6, 2f, 0f, 0f, 0, -1082130432);
							}
							break;
						case 2:
							if (Local_245[1 /*5*/].f_1 == 6 && (Local_245[iVar2 /*5*/].f_1 == 1 || Local_245[iVar2 /*5*/].f_1 == 0))
							{
								func_879(iVar2, 2, 0f, 0f, 0f, 0, -1082130432);
							}
							break;
						case 3:
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_245[iVar2 /*5*/], Local_234.f_0, 1.5f, 1.5f, 0f, false, false, 0) && !PED::IS_PED_RAGDOLL(Local_245[iVar2 /*5*/]))
							{
								func_879(iVar2, 6, -2f, 0f, 0f, 0, -1082130432);
							}
							break;
					}
					if (!Local_245[iVar2 /*5*/].f_4)
					{
						if (!PED::IS_PED_INJURED(iLocal_275))
						{
							switch (iVar2)
							{
								case 0:
									fVar8 = 20f;
									break;
								case 1:
									fVar8 = -1f;
									break;
								case 2:
									fVar8 = 3f;
									break;
								case 3:
									fVar8 = 6f;
									break;
								case 4:
									fVar8 = 6f;
									break;
								case 5:
									fVar8 = 16f;
									break;
							}
							if (fVar8 >= 0f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(Local_245[iVar2 /*5*/], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, false, false, 0))
								{
									if (!__LIB_0__.func_75())
									{
										__LIB_6__.func_834(Local_245[iVar2 /*5*/], "GENERIC_SHOCKED_MED", 9);
										Local_245[iVar2 /*5*/].f_4 = 1;
									}
								}
							}
						}
					}
					if (func_874(Local_245[iVar2 /*5*/], 1))
					{
						func_879(iVar2, 9, 0f, 0f, 0f, 0, -1082130432);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_874(int iParam0, bool bParam1)//Position - 0x8F307
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 20f, 0f), 8f, false, false, 0))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0 - Vector(35f, 35f, 35f), Var0 + Vector(35f, 35f, 35f), false, false))
		{
			return 1;
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	return 0;
}

int func_877(int iParam0)//Position - 0x8F5E1
{
	iParam0 = iParam0;
	return 6000;
}

int func_878(int iParam0)//Position - 0x8F5F0
{
	switch (iParam0)
	{
		case 1:
			return 8;
			break;
		case 2:
			return 8;
			break;
		case 3:
			return 5;
			break;
	}
	return 7;
}

void func_879(int iParam0, int iParam1, struct<3> Param2, int iParam3, float fParam4)//Position - 0x8F629
{
	if (!PED::IS_PED_INJURED(Local_245[iParam0 /*5*/]))
	{
		switch (iParam1)
		{
			case 5:
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_245[iParam0 /*5*/], Param2, 1f, -1, 40000f, 0.5f);
				break;
			case 1:
				if (!PED::IS_PED_INJURED(iParam3))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_245[iParam0 /*5*/], iParam3, -1, 2048, 2);
					TASK::TASK_CHAT_TO_PED(Local_245[iParam0 /*5*/], iParam3, 16, 0f, 0f, 0f, -1f, -1f);
				}
				break;
			case 6:
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_245[iParam0 /*5*/], 3000, 3000, 2, __LIB_0__.func_79(Param2), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				if (iParam0 == 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_245[iParam0 /*5*/], Local_234.f_0, 30000);
				}
				break;
			case 2:
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
				if (!PED::IS_PED_INJURED(iParam3))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam3, 1000);
				}
				else if (fParam4 >= 0f)
				{
					TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				}
				TASK::TASK_PLAY_ANIM(0, func_205(2), "REACTION_FORWARD_BIG_INTRO_A", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
				TASK::TASK_PERFORM_SEQUENCE(Local_245[iParam0 /*5*/], iLocal_631);
				break;
			case 3:
				TASK::TASK_PLAY_ANIM(Local_245[iParam0 /*5*/], func_881(iParam0), func_880(iParam0), 8f, -8f, -1, 1, 0f, false, false, false);
				break;
			case 4:
				TASK::TASK_PLAY_ANIM(Local_245[iParam0 /*5*/], func_205(2), "BIG_EXIT_TO_GENERIC", 8f, -8f, -1, 2, 0f, false, false, false);
				break;
			case 7:
				TASK::TASK_LOOK_AT_ENTITY(Local_245[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				break;
			case 8:
				TASK::TASK_LOOK_AT_ENTITY(Local_245[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_WANDER_STANDARD(Local_245[iParam0 /*5*/], 40000f, 0);
				break;
			case 9:
				TASK::TASK_LOOK_AT_ENTITY(Local_245[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_SMART_FLEE_PED(Local_245[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				break;
			}
	}
	Local_245[iParam0 /*5*/].f_2 = MISC::GET_GAME_TIMER();
	Local_245[iParam0 /*5*/].f_1 = iParam1;
}

char* func_880(int iParam0)//Position - 0x8F84C
{
	switch (iParam0)
	{
		case 0:
			return "EXIT_TO_GENERIC";
			break;
		case 1:
			return "EXIT_TO_GENERIC";
			break;
		case 2:
			return "EXIT_TO_GENERIC";
			break;
		case 3:
			return "EXIT_TO_GENERIC";
			break;
		case 4:
			return "EXIT_TO_GENERIC";
			break;
		case 5:
			return "EXIT_TO_GENERIC";
			break;
	}
	return "badstring";
}

char* func_881(int iParam0)//Position - 0x8F8C6
{
	switch (iParam0)
	{
		case 0:
			return func_205(2);
			break;
		case 1:
			return func_205(2);
			break;
		case 2:
			return func_205(2);
			break;
		case 3:
			return func_205(2);
			break;
		case 4:
			return func_205(2);
			break;
		case 5:
			return func_205(2);
			break;
	}
	return "badstring";
}

void func_883()//Position - 0x8F97F
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	int iVar7;
	bool bVar8;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!iLocal_361[iVar0])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[iVar0], false))
			{
				switch (iVar0)
				{
					case 0:
						iVar2 = 800;
						iVar1 = 3;
						break;
					case 1:
						iVar1 = 1;
						iVar2 = 200;
						break;
					case 2:
					case 3:
						iVar2 = -1;
						fVar3 = -1f;
						break;
					case 4:
						iVar1 = 1;
						iVar2 = 0;
						break;
					case 5:
						iVar1 = 0;
						iVar2 = -1;
						fVar3 = 35f;
						break;
					case 6:
						iVar2 = -1;
						fVar3 = -1f;
						break;
				}
				iVar4 = 0;
				if (iVar2 >= 0)
				{
					if (iLocal_244 == iVar1)
					{
						if (MISC::GET_GAME_TIMER() >= (iLocal_566 + iVar2))
						{
							iVar4 = 1;
						}
					}
				}
				else if (fVar3 >= 0f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_280[iVar0], fVar3, fVar3, fVar3, false, false, 0))
					{
						iVar4 = 1;
					}
				}
				else
				{
					iLocal_361[iVar0] = 1;
				}
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_280[iVar0], -1, false);
				if (iVar4 && iLocal_359)
				{
					if (iVar0 == 4)
					{
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_280[iVar0], 2);
						iLocal_523 = 0;
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_280[iVar0]))
					{
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_280[iVar0]);
					}
					else if (!PED::IS_PED_INJURED(iVar5))
					{
						if (iVar0 == 5)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_280[iVar0], 462.88696f, -678.7796f, 26.42194f, 5f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_280[iVar0]), 786603, 2f, 100000f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_280[iVar0], 472.43823f, -680.04065f, 25.72182f, 5f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_280[iVar0]), 786603, 2f, 100000f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_280[iVar0], 500.40128f, -772.943f, 23.84175f, 5f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_280[iVar0]), 786603, -1f, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
							TASK::TASK_PERFORM_SEQUENCE(iVar5, iLocal_631);
						}
					}
					iLocal_361[iVar0] = 1;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_280[iVar0]))
				{
					if (PED::IS_PED_INJURED(iVar5))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_280[iVar0]);
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_280[iVar0], 0);
					}
				}
			}
		}
		else if (!iLocal_523)
		{
			if (iVar0 == 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[iVar0], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_280[iVar0]))
					{
						AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_280[iVar0], 0);
						iLocal_523 = 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (((!PED::IS_PED_INJURED(iLocal_278[0]) && !PED::IS_PED_INJURED(iLocal_275)) && !PED::IS_PED_INJURED(Local_234.f_0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[0], false))
	{
		switch (iLocal_256)
		{
			case 0:
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
				if (Var6.f_1 > -538.4f)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_278[0], Local_234.f_0, -1, 2048, 2);
					iLocal_583 = MISC::GET_GAME_TIMER();
					iLocal_256 = 1;
				}
				break;
			case 1:
				if (MISC::GET_GAME_TIMER() >= iLocal_583 + 10)
				{
					TASK::TASK_LEAVE_VEHICLE(iLocal_278[0], iLocal_280[0], 256);
					iLocal_256 = 2;
				}
				break;
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_278[0], joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
				{
					iLocal_583 = MISC::GET_GAME_TIMER();
					TASK::TASK_ACHIEVE_HEADING(iLocal_278[0], -3.26f, 0);
					iLocal_256 = 3;
				}
				break;
			case 3:
				if (__LIB_20__.func_729(iLocal_278[0], -3.26f, 20f))
				{
					iLocal_256 = 4;
				}
				break;
			case 4:
				TASK::TASK_PLAY_ANIM(iLocal_278[0], func_205(2), "REACT_SMALL_VARIATIONS_H", 8f, -8f, -1, 1, 0f, false, false, false);
				iLocal_583 = MISC::GET_GAME_TIMER();
				iLocal_256 = 5;
				break;
			case 5:
				break;
		}
		if (!iLocal_365)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_278[0], iLocal_275, 3f, 3f, 3f, false, false, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_278[0], iLocal_275, -1, 2048, 2);
				iLocal_365 = 1;
			}
		}
		if (!iLocal_364)
		{
			if (iLocal_256 >= 2)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_278[0], 8f, 8f, 2f, false, true, 0))
				{
					if (!__LIB_0__.func_75())
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_278[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						__LIB_6__.func_834(iLocal_278[0], "GENERIC_INSULT_HIGH", 9);
						iLocal_364 = 1;
					}
				}
			}
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
		{
			if (Local_235.f_2 == 13)
			{
				switch (iLocal_585)
				{
					case 0:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9) >= 0.45f)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_280[0], 1, 0f, 0f, -0.1f, 0f, 3f, 0f, 0, true, true, true, false, true);
							iLocal_585++;
						}
						break;
					case 1:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9) >= 0.595f)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_280[0], 1, 0f, 0f, -0.1f, 0f, 3f, 0f, 0, true, true, true, false, true);
							iLocal_585++;
						}
						break;
					}
				}
			}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_278)
	{
		if (!PED::IS_PED_INJURED(iLocal_278[iVar0]))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_278[iVar0], joaat("SCRIPT_TASK_SMART_FLEE_PED")) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_278[iVar0], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 7) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_278[iVar0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
			{
				if (func_874(iLocal_278[iVar0], 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_278[iVar0], false))
					{
						iVar7 = PED::GET_VEHICLE_PED_IS_IN(iLocal_278[iVar0], false);
						if (!ENTITY::IS_ENTITY_DEAD(iVar7, false))
						{
							AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iVar7, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar7))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar7);
							}
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar7, false);
						}
					}
					bVar8 = true;
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar7)))
						{
							bVar8 = false;
						}
					}
					if (bVar8)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
						if (!ENTITY::IS_ENTITY_DEAD(iVar7, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_278[iVar0], iLocal_631);
						if (iVar0 == 0)
						{
							iLocal_364 = 1;
							iLocal_256 = 7;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_885()//Position - 0x8FFE2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<3> Var14;
	int iVar15;
	if (!PED::IS_PED_INJURED(Local_235.f_0))
	{
		if (iLocal_360)
		{
			switch (Local_235.f_1)
			{
				case 0:
					if (iLocal_252 == 0 || iLocal_252 == 3)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_235.f_0) && !PED::IS_PED_INJURED(Local_234.f_0))
						{
							fVar2 = 6f;
							fVar3 = 14f;
							bVar4 = true;
							if (iLocal_237 == 4)
							{
								fVar2 = 20f;
								fVar3 = 50f;
							}
							Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_275, ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true)) };
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_235.f_0, Local_234.f_0, fVar2, fVar2, 10f, false, false, 0) || Var5.f_1 < 0f)
							{
								fVar0 = 2.4f;
								fVar1 = 1f;
								bVar4 = false;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(Local_235.f_0, Local_234.f_0, fVar3, fVar3, 10f, false, false, 0))
							{
								fVar0 = 2.8f;
								fVar1 = 1.02f;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(Local_235.f_0, PLAYER::PLAYER_PED_ID(), 10f, 10f, 20f, false, false, 0))
							{
								fVar0 = 3f;
								fVar1 = 1.15f;
							}
							else
							{
								fVar0 = 3f;
								fVar1 = 1.15f;
							}
							if (bVar4)
							{
								if (iLocal_237 == 1)
								{
									fVar0 = 2.8f;
									fVar1 = 1f;
								}
								if (iLocal_237 == 4)
								{
									fVar0 = 3f;
									fVar1 = 1.15f;
								}
							}
							if (iLocal_254 == 1)
							{
								Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								if (Var6.f_1 >= -516.9f)
								{
									fVar0 = 3f;
									fVar1 = 1.15f;
								}
							}
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_235.f_0, fVar0, false);
							PED::SET_PED_MOVE_RATE_OVERRIDE(Local_235.f_0, fVar1);
							if (iLocal_237 == 3)
							{
								Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
								if (Var7.f_1 >= -524f)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_235.f_0, 2f);
								}
								else
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_235.f_0, 3f);
								}
							}
							if (bLocal_452)
							{
								if (MISC::GET_GAME_TIMER() <= iLocal_558 + 2000)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_235.f_0, 3f);
								}
							}
						}
						iVar8 = func_901();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_235.f_0, func_865(iVar8), func_900(iVar8), false, true, 1) || (func_899(Local_235.f_0, iVar8) && iVar8 <= 16))
						{
							bVar9 = true;
							if (iVar8 == 13)
							{
								if (!func_898())
								{
									bVar9 = false;
								}
								else
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_275, iLocal_280[0], false);
								}
							}
							if (bVar9)
							{
								func_894(&Local_235, iVar8);
							}
							else
							{
								iLocal_237++;
							}
						}
					}
					break;
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
					{
						if (Local_235.f_2 == 11 || Local_235.f_2 == 12)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_275, 25f, 25f, 25f, false, false, 0))
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_235.f_9, 1.25f);
							}
							else
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(Local_235.f_9, 1f);
							}
						}
					}
					bVar10 = true;
					if (((iLocal_237 == 0 || iLocal_237 == 4) || iLocal_237 == 5) || iLocal_237 == 3)
					{
						bVar10 = false;
					}
					func_888(&Local_235, 1, 1, -1, 1, bVar10);
					break;
			}
			switch (iLocal_252)
			{
				case 0:
					if (Local_235.f_1 == 0)
					{
						bVar11 = false;
						bVar12 = false;
						switch (iLocal_237)
						{
							case 4:
								if (func_887(1))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_235.f_0, 539.66f, -501.66f, 25.13f, 13f, 13f, 13f, false, false, 0))
									{
										if (Local_238.f_0 == 0 || Local_238.f_0 == 3)
										{
											bVar11 = true;
											bVar13 = true;
										}
									}
								}
								break;
							case 3:
								if (ENTITY::IS_ENTITY_AT_COORD(Local_235.f_0, 494.48f, -516.88f, 23.75f, 4f, 4f, 4f, false, true, 0))
								{
									bVar11 = true;
									bVar13 = false;
									bVar12 = true;
								}
								break;
							case 1:
								if (func_886(1))
								{
									if (Local_238.f_0 == 0 || Local_238.f_0 == 3)
									{
										bVar11 = true;
										bVar13 = true;
									}
								}
								break;
						}
						if (bVar11)
						{
							if (bVar13)
							{
								TASK::TASK_PLAY_ANIM(Local_235.f_0, func_205(0), "FRA0_IG_12_CHOP_FAST_TURN_A", 8f, -8f, -1, 2, 0f, false, false, false);
								iLocal_252 = 1;
							}
							else
							{
								if (!bVar12)
								{
									TASK::TASK_PLAY_ANIM(Local_235.f_0, func_205(0), "FRA0_IG_12_CHOP_WAITING_B", 8f, -8f, -1, 1, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(Local_235.f_0, func_205(0), "CHOP_BARK_AT_CARRIAGE", 8f, -8f, -1, 1, 0f, false, false, false);
								}
								iLocal_252 = 2;
							}
						}
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_235.f_0, func_205(0), "FRA0_IG_12_CHOP_FAST_TURN_A", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_235.f_0, func_205(0), "FRA0_IG_12_CHOP_FAST_TURN_A") >= 0.98f)
						{
							TASK::TASK_PLAY_ANIM(Local_235.f_0, func_205(0), "FRA0_IG_12_CHOP_WAITING_A", 8f, -8f, -1, 1, 0f, false, false, false);
							iLocal_252 = 2;
						}
					}
					break;
				case 2:
					if (iLocal_237 == 3)
					{
						PED::SET_PED_RESET_FLAG(iLocal_275, 71, true);
						if (bLocal_370)
						{
							func_888(&Local_235, 1, 0, -1, 1, 0);
						}
					}
					else if (iLocal_237 == 4)
					{
						if (!func_887(0))
						{
							if (func_798(0))
							{
								iLocal_252 = 3;
								func_888(&Local_235, 1, 0, 146, 0, 0);
							}
						}
					}
					else if (iLocal_237 == 1)
					{
						if (!func_886(0))
						{
							if (func_798(0))
							{
								iLocal_252 = 3;
								func_888(&Local_235, 1, 0, -1, 0, 1);
							}
						}
					}
					break;
			}
		}
		else
		{
			Var14 = { ENTITY::GET_ENTITY_COORDS(iLocal_275, true) };
			if (Var14.f_1 < -682.7f)
			{
				iVar15 = 7;
			}
			else
			{
				iVar15 = 11;
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_235.f_0, "hood7", iVar15, 36, -1);
			iLocal_360 = 1;
		}
	}
}

int func_886(int iParam0)//Position - 0x90547
{
	if (((iLocal_236 >= 2 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 482.13f, -575.22f, 26.46f, 494.61f, -576.59f, 31.46f, 24f, false, false, 0)) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 488.4743f, -576.7356f, 28.29393f, 18.5f, 18.5f, 18.5f, false, false, 0) && iParam0)) || Local_238.f_0 == 2)
	{
		return 0;
	}
	return 1;
}

int func_887(int iParam0)//Position - 0x905D1
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (!PED::IS_PED_INJURED(Local_234.f_0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
	}
	if (((Var0.f_0 >= 525f && Var1.f_0 >= 552f) || Local_238.f_0 == 2) || (Var0.f_0 >= -517f && iParam0))
	{
		return 0;
	}
	return 1;
}

void func_888(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9063A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!iParam0->f_11)
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_9))
			{
				if (bParam5)
				{
					iVar0 = 34;
				}
				else
				{
					iVar0 = 32;
				}
				TASK::TASK_CLEAR_LOOK_AT(*iParam0);
				if (!bParam1)
				{
					if (bParam4)
					{
						iLocal_236++;
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, func_893(), func_892(), 32, -1);
					iLocal_564 = MISC::GET_GAME_TIMER();
				}
				else
				{
					if (bParam4)
					{
						iLocal_237++;
						iLocal_252 = 0;
					}
					if (iParam3 < 0)
					{
						iVar1 = func_891();
					}
					else
					{
						iVar1 = iParam3;
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, "hood7", iVar1, iVar0 | 512, -1);
				}
				if (bParam2)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam0, 3f);
				}
				iParam0->f_9 = -1;
				iParam0->f_10 = MISC::GET_GAME_TIMER();
				iParam0->f_2 = -1;
				iParam0->f_1 = 0;
			}
			else
			{
				bVar2 = true;
				if (iParam0->f_2 != 7)
				{
					__LIB_26__.func_588(&(iParam0->f_3), func_890(iParam0->f_2), 0.85f);
					__LIB_26__.func_588(&(iParam0->f_6), 0f, 0f, func_889(iParam0->f_2), 7.5f);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0->f_9, iParam0->f_3, iParam0->f_6, 2);
				}
				else if (!iLocal_499)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9, 0.98f);
						iLocal_499 = 1;
					}
				}
				fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9);
				if (fVar3 >= 0.98f)
				{
					if (iParam0->f_2 == 5)
					{
						func_894(iParam0, 6);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
						iLocal_565 = MISC::GET_GAME_TIMER();
						iParam0->f_11 = 1;
					}
					else if (iParam0->f_2 == 1)
					{
						if (!iLocal_366)
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 20f, 20f, 20f, false, false, 0))
							{
								iLocal_565 = MISC::GET_GAME_TIMER();
								iParam0->f_11 = 1;
							}
							else
							{
								iParam0->f_11 = 0;
							}
							TASK::CLEAR_PED_TASKS(*iParam0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
							iLocal_366 = 1;
						}
					}
					else
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iParam0->f_9, false);
					}
				}
				else if (fVar3 >= 0.5f)
				{
					if (iParam0->f_2 == 1 || iParam0->f_2 == 11)
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam0, 3f);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_275))
		{
			if (iParam0->f_2 == 6)
			{
				if (((((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 16f, 16f, 16f, false, false, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 20f, 20f, 20f, false, false, 0) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 537.228f, -540.125f, 23.679f, 557.91f, -542.702f, 29f, 63f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, *iParam0, 18f, 18f, 18f, false, false, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true)) || FIRE::IS_ENTITY_ON_FIRE(*iParam0)) || MISC::GET_GAME_TIMER() >= iLocal_565 + 12000) || iLocal_237 >= 6)
				{
					func_894(iParam0, 7);
					iParam0->f_11 = 0;
				}
			}
			else if (iParam0->f_2 == 1)
			{
				if (((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 25f, 25f, 25f, false, false, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, *iParam0, 11f, 11f, 11f, false, false, 0)) || PED::IS_TRACKED_PED_VISIBLE(Local_234.f_0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true)) || FIRE::IS_ENTITY_ON_FIRE(*iParam0)) || MISC::GET_GAME_TIMER() >= iLocal_565 + 11000)
				{
					iParam0->f_11 = 0;
				}
			}
		}
	}
}

float func_889(int iParam0)//Position - 0x909D9
{
	switch (iParam0)
	{
		case 0:
			return -95.66f;
			break;
		case 1:
			return -8f;
			break;
		case 2:
			return -3f;
			break;
		case 3:
			return -3.99f;
			break;
		case 4:
			return -96.59f;
			break;
		case 5:
			return -97.53f;
			break;
		case 8:
			return 79.23f;
			break;
		case 9:
			return -6.37f;
			break;
		case 11:
			return -110f;
			break;
		case 12:
			return -30f;
			break;
		case 13:
			return -4f;
			break;
		case 14:
			return -97.33f;
			break;
		case 15:
			return -96.5f;
			break;
	}
	return 0f;
}

Vector3 func_890(int iParam0)//Position - 0x90AC6
{
	switch (iParam0)
	{
		case 0:
			return 475.45f, -585.3f, 28.56f;
			break;
		case 1:
			return 486.8f, -569.62f, 29.13f;
			break;
		case 2:
			return 492.63f, -544.44f, 24.75f;
			break;
		case 3:
			return 493.74f, -524.13f, 24.75f;
			break;
		case 4:
			return 530.87f, -502.05f, 24.83f;
			break;
		case 5:
			return 555.47f, -504.14f, 24.8f;
			break;
		case 8:
			return 549.06f, -565.13f, 24.75f;
			break;
		case 10:
			return 493.38f, -519.92f, 25.25f;
			break;
		case 11:
			return 478.3f, -582f, 27.95f;
			break;
		case 12:
			return 486.53f, -570.45f, 28.7f;
			break;
		case 13:
			return 492.53f, -544.55f, 24.18f;
			break;
		case 14:
			return 532f, -501.1f, 24.25f;
			break;
		case 15:
			return 556.69f, -503.84f, 24.19f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_891()//Position - 0x90C37
{
	switch (iLocal_237)
	{
		case 1:
			return 64;
			break;
		case 2:
			return 89;
			break;
		case 3:
			return 106;
			break;
		case 4:
			return 109;
			break;
		case 5:
			return 158;
			break;
		case 6:
			return 185;
			break;
	}
	return 0;
}

int func_892()//Position - 0x90C9C
{
	switch (iLocal_236)
	{
		case 0:
			return 9;
			break;
		case 1:
			return 6;
			break;
		case 2:
			return 15;
			break;
		case 3:
			return 22;
			break;
		case 4:
			return 10;
			break;
		case 5:
			return 35;
			break;
		case 6:
			return 44;
			break;
	}
	return 0;
}

char* func_893()//Position - 0x90D0E
{
	switch (iLocal_236)
	{
		case 0:
			return "hood1";
			break;
		case 1:
		case 2:
		case 3:
			return "hood2";
			break;
		case 4:
		case 5:
		case 6:
			return "hood3";
			break;
	}
	return "invalid";
}

void func_894(int iParam0, int iParam1)//Position - 0x90D6D
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		iParam0->f_3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
		iParam0->f_6 = { ENTITY::GET_ENTITY_ROTATION(*iParam0, 2) };
		func_896(&(iParam0->f_6), 0f, 0f, func_889(iParam1));
		iParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(iParam0->f_3, iParam0->f_6, 2);
		if (iParam1 == 6)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iParam0->f_9, bVar0);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9, 0f);
		if (*iParam0 == iLocal_275)
		{
			iVar1 = 7;
		}
		else if ((iParam1 == 5 || iParam1 == 6) || iParam1 == 7)
		{
			iVar1 = 7;
		}
		else
		{
			iVar1 = 6;
		}
		TASK::TASK_SYNCHRONIZED_SCENE(*iParam0, iParam0->f_9, func_205(2), func_895(iParam1), 8f, -8f, iVar1, 0, 1000f, 0);
		if ((iParam1 == 8 || iParam1 == 11) || iParam1 == 4)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
		}
	}
	iParam0->f_2 = iParam1;
	iParam0->f_1 = 1;
}

char* func_895(int iParam0)//Position - 0x90E6E
{
	switch (iParam0)
	{
		case 0:
			return "ballasog_fenceclimb";
			break;
		case 1:
			return "ballasog_containerrun";
			break;
		case 2:
			return "ballasog_carbonnetslide";
			break;
		case 3:
			return "ballasog_fenceclimb_ig4";
			break;
		case 10:
			return "franklin_wallcrash";
			break;
		case 4:
			return "ballasog_hoptrainbreak_ig5";
			break;
		case 5:
			return "ballasog_rollthroughtraincar_ig6_in";
			break;
		case 6:
			return "ballasog_rollthroughtraincar_ig6_loop";
			break;
		case 7:
			return "ballasog_rollthroughtraincar_ig6_out";
			break;
		case 8:
			return "ballasog_jumpontrain_ig7";
			break;
		case 11:
			return "FRA_0_IG_8_P1_CHOP_JUMPS_UNDER_FENCE";
			break;
		case 12:
			return "FRA_0_CHOP_JUMPS_DOWN";
			break;
		case 13:
			return "FRA_0_IG_9_CHOP_JUMP_OVER_CAR_HOOD";
			break;
		case 14:
			return "FRA_0_IG_10_CHOP_JUMPS_OVER_FLATBED";
			break;
		case 15:
			return "FRA_0_IG_11_CHOP_JUMPS_THROUGH_BOXCAR";
			break;
	}
	return "invalid";
}

void func_896(var uParam0, struct<3> Param1)//Position - 0x90F80
{
	func_897(uParam0, Param1.f_0);
	func_897(&(uParam0->f_1), Param1.f_1);
	func_897(&(uParam0->f_2), Param1.f_2);
}

void func_897(var uParam0, float fParam1)//Position - 0x90FA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (*uParam0 > 0f)
	{
		fVar0 = *uParam0;
		fVar1 = (*uParam0 - 360f);
	}
	else if (*uParam0 < 0f)
	{
		fVar0 = (*uParam0 + 360f);
		fVar1 = *uParam0;
	}
	fVar2 = (fVar0 - fParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = (fVar1 - fParam1);
	if (fVar3 < 0f)
	{
		fVar3 = (fVar3 * -1f);
	}
	if (fVar2 < fVar3)
	{
		*uParam0 = fVar0;
	}
	else
	{
		*uParam0 = fVar1;
	}
}

int func_898()//Position - 0x91020
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_280[0], false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[0], false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_280[0], 495.362f, -537.695f, 20.751f, 485.086f, -537.464f, 26.751f, 3f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_899(int iParam0, int iParam1)//Position - 0x91079
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		switch (iParam1)
		{
			case 0:
				if (Var0.f_0 >= 475.59f)
				{
					return 1;
				}
				break;
			case 1:
				if (Var0.f_1 >= -569.6f)
				{
					return 1;
				}
				break;
			case 2:
				if (Var0.f_1 >= -545.27f)
				{
					return 1;
				}
				break;
			case 3:
				if (Var0.f_1 >= -523.79f)
				{
					return 1;
				}
				break;
			case 4:
				if (Var0.f_0 >= 531.66f)
				{
					return 1;
				}
				break;
			case 5:
				if (Var0.f_0 >= 555.47f)
				{
					return 1;
				}
				break;
			case 8:
				if (Var0.f_0 <= 552.98f)
				{
					return 1;
				}
				break;
			case 9:
				return 0;
				break;
			case 11:
				if (Var0.f_0 >= 478.3f)
				{
					return 1;
				}
				break;
			case 12:
				if (Var0.f_1 >= -570.45f)
				{
					return 1;
				}
				break;
			case 13:
				if (Var0.f_1 >= -544.55f)
				{
					return 1;
				}
				break;
			case 14:
				if (Var0.f_0 >= 532f)
				{
					return 1;
				}
				break;
			case 15:
				if (Var0.f_0 >= 556.72f)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

Vector3 func_900(int iParam0)//Position - 0x911D5
{
	switch (iParam0)
	{
		case 11:
			break;
	}
	return 0.5f, 0.5f, 2.5f;
}

int func_901()//Position - 0x911FC
{
	switch (iLocal_237)
	{
		case 0:
			return 11;
			break;
		case 1:
			return 12;
			break;
		case 2:
			return 13;
			break;
		case 3:
			return 14;
			break;
		case 4:
			return 14;
			break;
		case 5:
			return 15;
			break;
	}
	return 16;
}

void func_902()//Position - 0x91262
{
	int iVar0;
	bool bVar1;
	float fVar2;
	if (!PED::IS_PED_INJURED(Local_234.f_0))
	{
		if (iLocal_359)
		{
			switch (Local_234.f_1)
			{
				case 0:
					func_904();
					iVar0 = func_903();
					if (ENTITY::IS_ENTITY_AT_COORD(Local_234.f_0, func_865(iVar0), func_900(iVar0), false, true, 1) || ((func_899(Local_234.f_0, iVar0) && iVar0 < 16) && ENTITY::IS_ENTITY_AT_COORD(Local_234.f_0, func_865(iVar0), 10f, 10f, 10f, false, false, 1)))
					{
						bVar1 = true;
						if (iVar0 == 2)
						{
							if (!func_898())
							{
								bVar1 = false;
							}
							else
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_234.f_0, iLocal_280[0], false);
							}
						}
						if (bVar1)
						{
							func_894(&Local_234, iVar0);
						}
						else
						{
							iLocal_236++;
						}
					}
					break;
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_234.f_9))
					{
						fVar2 = 1.04f;
						if (!PED::IS_TRACKED_PED_VISIBLE(Local_234.f_0))
						{
							if (Local_234.f_2 == 1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_234.f_9) >= 0.392f)
								{
									fVar2 = 3.3f;
								}
							}
							else if (Local_234.f_2 < 5)
							{
								fVar2 = 1.21f;
							}
						}
						else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 50f, 50f, 50f, false, false, 0))
						{
							fVar2 = 1f;
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 7f, 7f, 7f, false, false, 0))
						{
							fVar2 = 1.12f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_234.f_9, fVar2);
					}
					func_888(&Local_234, 0, 1, -1, 1, 1);
					break;
			}
		}
		else
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_234.f_0, "hood1", func_892(), 36, -1);
			iLocal_564 = MISC::GET_GAME_TIMER();
			iLocal_566 = MISC::GET_GAME_TIMER();
			iLocal_359 = 1;
		}
	}
}

int func_903()//Position - 0x9140C
{
	switch (iLocal_236)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
	}
	return 16;
}

void func_904()//Position - 0x9146C
{
	float fVar0;
	struct<3> Var1;
	if (func_906())
	{
		iLocal_244++;
		iLocal_566 = MISC::GET_GAME_TIMER();
	}
	iLocal_633 = TASK::GET_SCRIPT_TASK_STATUS(Local_234.f_0, -1689270312);
	if (iLocal_633 == 1)
	{
		switch (iLocal_244)
		{
			case 1:
			case 3:
			case 5:
			case 8:
				fVar0 = 3f;
				break;
			case 0:
			case 2:
			case 4:
			case 6:
				fVar0 = func_905(40f, 2f, 3f);
				break;
			case 7:
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_234.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				if (Var1.f_1 < -4f)
				{
					fVar0 = func_905(35f, 2f, 3f);
				}
				else
				{
					fVar0 = 3f;
				}
				break;
		}
		if (iLocal_189 == 1)
		{
			fVar0 = 2f;
		}
		if (iLocal_189 != 1)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_234.f_0))
			{
				if (fVar0 >= 2.5f)
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(Local_234.f_0, 1.15f);
				}
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_234.f_0, fVar0, false);
			}
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_234.f_0, 2f);
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_234.f_0, 2f, false);
			PED::SET_PED_MOVE_RATE_OVERRIDE(Local_234.f_0, 0.98f);
		}
	}
}

float func_905(float fParam0, float fParam1, float fParam2)//Position - 0x91587
{
	float fVar0;
	fVar0 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 1);
	if (fVar0 < fParam0)
	{
		return fParam2;
	}
	else
	{
		return fParam1;
	}
	return 3f;
}

int func_906()//Position - 0x915B3
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
	switch (iLocal_244)
	{
		case 0:
			if (Var0.f_1 >= -641.49f)
			{
				return 1;
			}
			break;
		case 1:
			if (Var0.f_1 >= -635.98f)
			{
				return 1;
			}
			break;
		case 2:
			if (Var0.f_1 >= -552.7f)
			{
				if (!Local_234.f_11)
				{
					return 1;
				}
			}
			break;
		case 3:
			if (Var0.f_1 >= -532.48f)
			{
				return 1;
			}
			break;
		case 4:
			if (Var0.f_0 >= 512.69f)
			{
				return 1;
			}
			break;
		case 5:
			if (Var0.f_0 >= 535.19f)
			{
				return 1;
			}
			break;
		case 6:
			if (Var0.f_1 <= -509.27f)
			{
				return 1;
			}
			break;
		case 7:
			if (Var0.f_1 <= -547.42f)
			{
				return 1;
			}
			break;
		case 8:
			return 0;
			break;
	}
	return 0;
}

void func_907()//Position - 0x916B2
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		switch (Local_247[iVar0 /*4*/])
		{
			case 0:
				if (MISC::GET_GAME_TIMER() >= Local_247[iVar0 /*4*/].f_2)
				{
					switch (iVar0)
					{
						case 0:
							Var1 = { 505.19144f, -498.6418f, 23.79694f };
							break;
						case 1:
							Var1 = { 505.6685f, -499.3541f, 23.86925f };
							break;
						case 2:
							Var1 = { 508.44058f, -499.53983f, 23.84134f };
							break;
						case 3:
							Var1 = { 508.14767f, -508.43143f, 23.88753f };
							break;
						case 4:
							Var1 = { 507.51636f, -509.3144f, 23.89202f };
							break;
						case 5:
							Var1 = { 508.47632f, -509.699f, 23.83075f };
							break;
						case 6:
							Var1 = { 492.78287f, -506.41846f, 23.79152f };
							break;
					}
					PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
					PED::GET_CLOSEST_PED(Var1, 1f, true, false, &(Local_247[iVar0 /*4*/].f_1), false, false, -1);
					if (!PED::IS_PED_INJURED(Local_247[iVar0 /*4*/].f_1))
					{
						Local_247[iVar0 /*4*/] = 1;
						Local_247[iVar0 /*4*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
					}
					else
					{
						Local_247[iVar0 /*4*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 1500));
					}
				}
				break;
			case 1:
				if (MISC::GET_GAME_TIMER() >= Local_247[iVar0 /*4*/].f_2)
				{
					if ((!PED::IS_PED_INJURED(Local_247[iVar0 /*4*/].f_1) && !PED::IS_PED_INJURED(Local_234.f_0)) && !PED::IS_PED_INJURED(iLocal_275))
					{
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_247[iVar0 /*4*/].f_1, true), true);
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_247[iVar0 /*4*/].f_1, true), true);
						fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_275, true), ENTITY::GET_ENTITY_COORDS(Local_247[iVar0 /*4*/].f_1, true), true);
						if (fVar3 < fVar5)
						{
							if (fVar3 < fVar4)
							{
								iVar2 = PLAYER::PLAYER_PED_ID();
							}
							else
							{
								iVar2 = Local_234.f_0;
							}
						}
						else if (fVar4 < fVar5)
						{
							iVar2 = Local_234.f_0;
						}
						else
						{
							iVar2 = iLocal_275;
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_247[iVar0 /*4*/].f_1, iVar2))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_247[iVar0 /*4*/].f_1, iVar2, -1, 2048, 4);
						}
						if (!Local_247[iVar0 /*4*/].f_3)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_247[iVar0 /*4*/].f_1, iLocal_275, 6f, 6f, 6f, false, true, 0))
							{
								if (!__LIB_0__.func_75())
								{
									__LIB_6__.func_834(Local_247[iVar0 /*4*/].f_1, "GENERIC_SHOCKED_MED", 9);
									Local_247[iVar0 /*4*/].f_3 = 1;
								}
							}
						}
						Local_247[iVar0 /*4*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_909()//Position - 0x9198D
{
	float fVar0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	float fVar6;
	char* sVar7;
	struct<3> Var8;
	if (!iLocal_306)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
		func_987();
		if (!iLocal_496)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				iLocal_496 = func_52(10);
			}
		}
		else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			func_45(10);
			iLocal_496 = 0;
		}
		if (!iLocal_414)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(10), 80f, 80f, 80f, false, false, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_276);
				}
				func_204(5);
				iLocal_414 = 1;
			}
		}
		if (!iLocal_447)
		{
			if (!PED::IS_PED_INJURED(iLocal_275) && !PED::IS_PED_INJURED(iLocal_274))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_274, iLocal_275, 14f, 14f, 14f, false, false, 0))
				{
					if (!PED::IS_TRACKED_PED_VISIBLE(iLocal_275))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_601)
						{
							AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_275, 3, "BARK");
							}
							else
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_275, 3, "BARK_SEQ");
							}
							AUDIO::STOP_PED_SPEAKING(iLocal_275, true);
							iLocal_601 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1000));
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
					}
				}
			}
		}
		switch (iLocal_262)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 394.5399f, -869.11523f, 20.28647f, 652.68286f, -666.7411f, 54.06824f, false, true, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 277.28827f, -831.6821f, 20.2434f, 390.6949f, -646.0926f, 54.50041f, false, true, 0))
				{
					func_781(11);
					func_781(6);
					func_777(11);
					func_777(1);
					func_777(12);
					iLocal_262 = 1;
				}
				break;
			case 1:
				if ((((STREAMING::HAS_MODEL_LOADED(func_76(11)) && STREAMING::HAS_MODEL_LOADED(func_76(6))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, func_374())) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, func_374())) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, func_374()))
				{
					func_372(0, 0, 0, 1, 1);
					iLocal_262 = 2;
				}
				break;
		}
		if (!iLocal_334)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_558 + 1000)
			{
				iLocal_334 = 1;
			}
			else
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
				}
				if (!PED::IS_PED_INJURED(iLocal_275))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 3f);
				}
			}
		}
		if (iLocal_260 < 2)
		{
			__LIB_33__.func_928(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, &uLocal_609, &uLocal_610, 1);
		}
		if (!bLocal_338)
		{
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_234.f_0, false))
				{
					PED::APPLY_DAMAGE_TO_PED(Local_234.f_0, 1000, true, 0);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_234.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_234.f_0))
					{
						PED::KNOCK_PED_OFF_VEHICLE(Local_234.f_0);
					}
					else
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_234.f_0, 0);
					}
				}
			}
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false)) && !PED::IS_PED_INJURED(Local_234.f_0)) && !PED::IS_PED_INJURED(iLocal_274))
		{
			__LIB_39__.func_909(&uLocal_28, iLocal_279[1], 0, 0, 1, 1, 1);
			if (!iLocal_336)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_274, func_84(29), 2f, 2f, 3f, false, true, 0))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_274, iLocal_279[0], 20000, 0, 2f, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_274, 2f);
					iLocal_336 = 1;
				}
				else
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_274, 1.15f);
				}
			}
			if (!bLocal_443)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_274);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
					bLocal_443 = true;
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
			{
				fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_279[1]);
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				func_958(fVar0);
				if (iLocal_260 == 0)
				{
					func_933(iLocal_279[1], fLocal_539);
				}
				if (fVar0 >= 66300f)
				{
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_279[1], false);
				}
				if (fVar0 >= 55000f && iLocal_262 == 2)
				{
					if (!iLocal_348)
					{
						__LIB_31__.func_172(func_76(6));
						func_383(1);
						func_382(0);
						iLocal_348 = 1;
					}
				}
				if (!iLocal_488)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[33], false))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_170[33], iLocal_279[1], false);
						iLocal_488 = 1;
					}
				}
				if (!iLocal_337)
				{
					bVar2 = false;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[14], false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_279[1], iLocal_173[14]))
						{
							bVar2 = true;
						}
					}
					if (fVar0 >= 73092f)
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
						}
						iLocal_337 = 1;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[14], false))
				{
					if (!iLocal_358)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[14]))
						{
							if (iLocal_118[14] == 4)
							{
								iLocal_358 = 1;
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[14], false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_173[14], 2f, 1, false);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_280[2]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[14]))
					{
						iLocal_280[2] = iLocal_173[14];
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[2], false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_280[2], 3);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278[2]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[2], false))
					{
						iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_280[2], -1, false);
						if (!PED::IS_PED_INJURED(iVar3))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
							iLocal_278[2] = iVar3;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[12], false))
				{
					if (!iLocal_357)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[12]))
						{
							if (iLocal_118[12] == 4)
							{
								iLocal_357 = 1;
							}
						}
						else if (iLocal_118[12] >= 3)
						{
							iLocal_357 = 1;
						}
					}
					else
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_173[12], 2f, 1, false);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[13], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[13]))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_173[13], 2f, 1, false);
					}
				}
				switch (iLocal_248)
				{
					case 0:
						if (fVar0 >= 50000f)
						{
							func_781(12);
							iLocal_248 = 1;
						}
						break;
					case 1:
						if (iLocal_296[12])
						{
							if (STREAMING::HAS_MODEL_LOADED(func_76(12)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[42], false))
							{
								iLocal_283 = VEHICLE::CREATE_VEHICLE(func_76(12), 396.0168f, -854.3585f, 31.0555f, 93.05f, true, true, false);
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_170[42], iLocal_283, 1f);
								iLocal_248 = 2;
							}
						}
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_283, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_283))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[42], false))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[42]))
										{
											VEHICLE::SET_PLAYBACK_SPEED(iLocal_283, fLocal_539);
										}
										else
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_283);
										}
									}
									else
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_283);
									}
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170[42]))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
								func_204(12);
								iLocal_248 = 3;
							}
						}
						break;
				}
				if (!iLocal_356)
				{
					if (fVar0 >= 65000f)
					{
						if (Var1.f_0 >= 420.49f)
						{
							iLocal_356 = 1;
						}
					}
				}
				fVar4 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_279[1], 1);
				__LIB_10__.func_618(iLocal_289, iLocal_279[1], 300f, 1061158912, 0);
				if (fVar4 >= 300f)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_289))
					{
						HUD::REMOVE_BLIP(&iLocal_289);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_288))
					{
						HUD::REMOVE_BLIP(&iLocal_288);
					}
					func_809(3);
				}
				if (iLocal_310)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false) && PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
					{
						if (!bLocal_502)
						{
							bLocal_502 = __LIB_11__.func_828("FRA0_CHASE_START");
						}
						if (!iLocal_447)
						{
							if (!PED::IS_PED_INJURED(iLocal_275))
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
								AUDIO::SET_ANIMAL_MOOD(iLocal_275, 0);
							}
							iLocal_447 = 1;
						}
						func_255(2);
						if (!bLocal_492)
						{
							if (iLocal_622 >= 0)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_622 + 2000)
								{
									bLocal_492 = true;
								}
								else
								{
									bLocal_492 = func_251("FKN0_SPEC", 0, 0, 0, 1);
								}
							}
							else if (bLocal_354 && bLocal_378)
							{
								if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
								{
									if (iLocal_493)
									{
										iLocal_622 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (!bLocal_338)
						{
							if (fVar0 < 66000f)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_615)
								{
									if (fVar4 <= 40f)
									{
										if (func_251("FKN0_OG1", 0, 0, 0, 1))
										{
											iLocal_615 = MISC::GET_GAME_TIMER() + 20000;
										}
									}
								}
							}
						}
						if (fVar4 >= 150f && bLocal_378)
						{
							if (iLocal_556 < 0)
							{
								iLocal_556 = MISC::GET_GAME_TIMER();
							}
							if (!bLocal_338)
							{
								func_254("FKN0_LOSING", -1, -1, -1, 0);
							}
						}
						else
						{
							if (!__LIB_0__.func_75())
							{
								fLocal_543 = (fLocal_543 + (1f * SYSTEM::TIMESTEP()));
							}
							else
							{
								fLocal_543 = 0f;
							}
							if (!bLocal_349)
							{
								bLocal_349 = func_251("FKN0_NOCAT1", 0, 0, 0, 1);
								if (bLocal_349)
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 8.5f, 3);
								}
							}
							else if (!iLocal_350)
							{
								if (func_251("FKN0_NOCAT2", 0, 0, 0, 1))
								{
									iLocal_350 = 1;
								}
							}
							else if (!bLocal_378)
							{
								bLocal_378 = func_251("FKN0_HOLDON", 0, 0, 0, 1);
							}
							if (iLocal_561 < 2)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_562)
								{
									if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_ON_SCREEN(Local_234.f_0)) && iLocal_350)
									{
										if (iLocal_561 == 0)
										{
											sVar5 = "FKN0_FSHOOT1";
										}
										else
										{
											sVar5 = "FKN0_FSHOOT2";
										}
										if (func_251(sVar5, 0, 0, 0, 1))
										{
											iLocal_561++;
											iLocal_562 = MISC::GET_GAME_TIMER() + 8000;
										}
									}
								}
							}
							if (!bLocal_351)
							{
								if (fVar0 >= 40000f)
								{
									bLocal_351 = true;
								}
								else if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_279[0], 277.51f, -66.64f, 48f, 293.19f, -72.39f, 102f, 340f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_279[0]) >= 23f) && __LIB_11__.func_417(PLAYER::PLAYER_PED_ID(), 156.7f, 30f)) && bLocal_354) && fLocal_543 >= 1.2f)
								{
									bLocal_351 = func_251("FKN0_VCHAS6", 0, 0, 0, 1);
								}
							}
							if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
							{
								if (!bLocal_354)
								{
									if ((fVar0 >= 12000f && iLocal_560 > 0) && fLocal_543 >= 1f)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_279[0], 364.11f, 323f, 102.7f, 60f, 60f, 60f, false, false, 0))
										{
											if (func_251("FKN0_FSPEC", 0, 0, 0, 1))
											{
												bLocal_354 = true;
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 3);
												iLocal_563 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							if (!bLocal_352)
							{
								if (fVar0 >= 43000f)
								{
									bLocal_352 = true;
								}
								else if (fVar0 >= 42000f)
								{
									if (fVar4 <= 70f && ENTITY::IS_ENTITY_ON_SCREEN(Local_234.f_0))
									{
										if ((iLocal_551 % 2) == 0)
										{
											bLocal_352 = func_251("FKN0_VCHAS7", 0, 0, 0, 1);
										}
										else
										{
											bLocal_352 = func_251("FKN0_VCHAS8", 0, 0, 0, 1);
										}
									}
								}
							}
							if (!bLocal_347)
							{
								if (fVar0 >= 65800f)
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(28), 70f, 70f, 70f, false, false, 0))
									{
										bLocal_347 = true;
									}
								}
							}
							if (!bLocal_353)
							{
								if (fVar0 >= 67400f)
								{
									bLocal_353 = true;
								}
								else if (bLocal_347)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_234.f_0))
									{
										bLocal_353 = func_251("FC_VANALL", 0, 0, 0, 1);
									}
								}
							}
							iLocal_556 = -1;
							switch (iLocal_560)
							{
								case 0:
									fVar6 = 13000f;
									break;
								case 1:
									fVar6 = 32000f;
									break;
								case 2:
									fVar6 = 48000f;
									break;
								case 3:
									fVar6 = 52000f;
									break;
								default:
									fVar6 = 100000000f;
									break;
							}
							if ((((fVar0 >= fVar6 && fLocal_543 >= 1.3f) && !bLocal_353) && iLocal_350) && !iLocal_341)
							{
								switch (iLocal_560)
								{
									case 0:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												sVar7 = "FKN0_VCHAS4";
												break;
											case 1:
												sVar7 = "FKN0_VCHAS5";
												break;
										}
										break;
									case 1:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
										{
											case 0:
												sVar7 = "FC_CCHAT9";
												break;
											case 1:
												sVar7 = "FKN0_VCHAS3";
												break;
											case 2:
												sVar7 = "FKN0_VCHAS1";
												break;
											case 3:
												sVar7 = "FKN0_VCHAS2";
												break;
											case 4:
												sVar7 = "FC_CCHAT7";
												break;
											case 5:
												sVar7 = "FC_CHAT10";
												break;
											case 6:
												sVar7 = "FC_CCHAT8";
												break;
											case 7:
												sVar7 = "FC_CCHAT6";
												break;
										}
										break;
									case 2:
										sVar7 = "FKN0_AGAIN";
										break;
									case 3:
										if ((iLocal_551 % 2) == 0)
										{
											sVar7 = "FKN0_PHONE1";
										}
										else
										{
											sVar7 = "FKN0_PHONE2";
										}
										break;
										break;
								}
								if (func_251(sVar7, 0, 0, 0, 1))
								{
									iLocal_560++;
								}
							}
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							iLocal_493 = 1;
							bLocal_354 = true;
							bLocal_355 = true;
							if (__LIB_0__.func_1("FC_SPCHLP"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_571 + 500)
								{
									HUD::CLEAR_HELP(false);
									iLocal_571 = MISC::GET_GAME_TIMER();
								}
							}
							if (MISC::IS_PC_VERSION())
							{
								if (__LIB_0__.func_1("FC_SPCHLP_KM"))
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_571 + 500)
									{
										HUD::CLEAR_HELP(false);
										iLocal_571 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						else if (bLocal_354)
						{
							if (!bLocal_355)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_563 + 600)
								{
									if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
									{
										bLocal_355 = func_802("FC_SPCHLP_KM", 1, 14000);
									}
									else
									{
										bLocal_355 = func_802("FC_SPCHLP", 1, 14000);
									}
								}
							}
						}
					}
				}
				iLocal_335 = iLocal_335;
				func_928();
			}
			else
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 200f, 200f, 200f, false, false, 0))
				{
					func_809(3);
				}
				if (bLocal_338)
				{
					if (iLocal_191 == 2)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_234.f_0, false))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_289))
							{
								HUD::REMOVE_BLIP(&iLocal_289);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_279[1]) >= 1f)
							{
							}
							else if (iLocal_339)
							{
								Var8 = { ENTITY::GET_ENTITY_ROTATION(iLocal_279[1], 2) };
								if ((Var8.f_1 < 0f && Var8.f_1 > -50f) || (Var8.f_1 > 0f && Var8.f_1 < 50f))
								{
									if (!PED::IS_PED_IN_VEHICLE(Local_234.f_0, iLocal_279[1], false))
									{
									}
								}
							}
						}
						if (!iLocal_341)
						{
							if (iLocal_260 <= 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_234.f_0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 60f, 60f, 4f, false, true, 0))
								{
									__LIB_0__.func_296();
									iLocal_341 = 1;
								}
							}
						}
						else if (!bLocal_340)
						{
							bLocal_340 = func_251("FKN0_CRSHED", 0, 0, 0, 1);
							if (bLocal_340)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
						}
						if (iLocal_260 > 1)
						{
						}
						else
						{
							if (!iLocal_343)
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_234.f_0) && !PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_234.f_0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_234.f_0, 0, 4160);
								}
								iLocal_343 = 1;
							}
							else if (!bLocal_342)
							{
								if (PED::CAN_PED_RAGDOLL(Local_234.f_0))
								{
									bLocal_342 = PED::SET_PED_TO_RAGDOLL(Local_234.f_0, 5000, 5000, 0, true, true, false);
								}
							}
							if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_234.f_0))
							{
								PED::RESET_PED_RAGDOLL_TIMER(Local_234.f_0);
							}
						}
					}
					if (!bLocal_454)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_605 + 3000)
						{
							func_368();
						}
					}
				}
				else
				{
					func_927();
				}
				func_928();
			}
			if (iLocal_260 == 0)
			{
				if (!iLocal_474)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false) && !PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
					{
						iLocal_474 = 1;
					}
				}
				func_235(1, (iLocal_474 && !bLocal_443), 0, 1);
				func_926();
			}
		}
		if (!bLocal_338)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
			{
				if (!PED::IS_PED_INJURED(Local_234.f_0))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_234.f_0, 0);
					PED::APPLY_DAMAGE_TO_PED(Local_234.f_0, 1000, true, 0);
				}
			}
		}
		if (PED::IS_PED_INJURED(Local_234.f_0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_289))
			{
				HUD::REMOVE_BLIP(&iLocal_289);
			}
		}
		func_987();
	}
	else
	{
		func_910();
		if (bLocal_467)
		{
			if (!PED::IS_PED_RAGDOLL(Local_234.f_0))
			{
				func_902();
				func_871();
				func_792();
			}
		}
	}
}

void func_910()//Position - 0x92A4F
{
	struct<3> Var0;
	func_928();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_193)
	{
		case 0:
			STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(457.7f, -690.7f, 27.7f);
			func_7(1, 1, -1, 1, 0, 1, 1, 1);
			iLocal_260 = 2;
			__LIB_9__.func_981(&uLocal_28, 0, 0);
			func_57();
			iLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_590, iLocal_279[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_279[0], "seat_dside_f"));
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_590, "VAN_GET_OUT_CAM", func_205(4));
			}
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_590, false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_279[1], false))
			{
				if (ENTITY::IS_ENTITY_IN_AREA(iLocal_279[1], 457.7003f, -684.90436f, 26.79034f, 463.63626f, -670.4812f, 26.35947f, false, false, 0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_279[1], true) + Vector(0f, 0f, 1.2f) };
					Var0.f_2 = 26.5919f;
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_279[1], Var0, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_279[1], 0.0150743f, 85.4796f, 10.1482f, 2, true);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_279[1], 0f, 0f, 0f);
				}
			}
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_275)) && !PED::IS_PED_INJURED(iLocal_274)) && !PED::IS_PED_INJURED(Local_234.f_0))
			{
				func_911(1, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(458.02f, -691.4f, 27.46f, 400f, true, false, false, false, false, false, 0);
				MISC::CLEAR_AREA(457.7502f, -692.06537f, 26.66529f, 8f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PROJECTILES(456.8039f, -689.5776f, 26.84026f, 26f, 0);
				FIRE::STOP_FIRE_IN_RANGE(456.8039f, -689.5776f, 26.84026f, 26f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(456.8039f, -689.5776f, 26.84026f, 26f);
				__LIB_11__.func_867(iLocal_279[0]);
				func_390(1, 1);
				func_389(0);
				ENTITY::SET_ENTITY_COORDS(iLocal_279[0], 458.02f, -691.4f, 26.7f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_279[0], -13.4f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_279[0], 5f);
				iLocal_590 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_590, iLocal_279[0], 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_590, func_205(4), "VAN_GET_OUT_FRANKLIN", 1000f, -8f, 2, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_274, ENTITY::GET_ENTITY_COORDS(iLocal_274, true), true, false, false, true);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274, iLocal_590, func_205(4), "van_get_out_lamar", 1000f, -8f, 2, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_274, false, false);
				ENTITY::DETACH_ENTITY(iLocal_275, true, true);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, iLocal_590, func_205(4), "van_get_out_chop", 1000f, -8f, 2, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_275, false, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_234.f_0);
				ENTITY::SET_ENTITY_COORDS(Local_234.f_0, 465.88248f, -677.4347f, 26.25079f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_234.f_0, 23.7f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_279[0], 0, true, true, false);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_279[0], "van_get_out_van", func_205(4), 1000f, false, false, false, 0f, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_279[0]);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_590, false);
				func_45(10);
				func_45(2);
				func_52(3);
				if (STREAMING::STREAMVOL_IS_VALID(iLocal_816))
				{
					STREAMING::STREAMVOL_DELETE(iLocal_816);
				}
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_553 = MISC::GET_GAME_TIMER();
				iLocal_193 = 1;
			}
			break;
		case 1:
			if (!bLocal_467)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_553 + 3800)
				{
					bLocal_467 = true;
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_51(10f, 1, 0);
				func_268(2, 0, 0, 0, 0, 1, 1, 1);
				iLocal_306 = 0;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			break;
	}
}

void func_911(bool bParam0, bool bParam1)//Position - 0x92E7D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_154))
	{
		iLocal_56 = 0;
		__LIB_11__.func_126();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_163);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_72)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_924());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_125());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_124());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_920();
			func_919();
			func_916();
		}
		else
		{
			func_912();
			func_385();
		}
		if (bParam1)
		{
			__LIB_32__.func_762(0);
		}
	}
}

void func_912()//Position - 0x92F39
{
	func_915();
	func_914();
	func_913();
}

void func_913()//Position - 0x92F4D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_173[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_173[iVar0]));
			}
		}
		iLocal_118[iVar0] = 0;
		if (!bLocal_52 && !bLocal_65)
		{
			if (iLocal_117[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_166[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
		}
		iVar0++;
	}
}

void func_914()//Position - 0x93044
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_172[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_172[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_172[iVar0]));
			}
		}
		iLocal_120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_165[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
		}
		iVar0++;
	}
	iLocal_126 = 0;
	iLocal_123 = 0;
}

void func_915()//Position - 0x930BF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_170[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_170[iVar0]));
			}
		}
		if (!bLocal_52 && !bLocal_65)
		{
			if (iLocal_114[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154);
			}
		}
		iLocal_115[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!iLocal_164[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164[iVar0]);
		}
		iVar0++;
	}
	iLocal_125 = 0;
	iLocal_121 = 0;
}

void func_916()//Position - 0x931BE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
				}
			}
			func_918(iLocal_173[iVar0]);
			__LIB_11__.func_122(iLocal_173[iVar0]);
		}
		iLocal_118[iVar0] = 0;
		iLocal_119[iVar0] = 0;
		if (!bLocal_52 && !bLocal_65)
		{
			if (iLocal_117[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_166[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
		}
		iVar0++;
	}
	iLocal_127 = 0;
}

void func_918(int iParam0)//Position - 0x932A2
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_73)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_919()//Position - 0x9333C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_172[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_172[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_172[iVar0], true, false);
			}
			__LIB_11__.func_122(iLocal_172[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_165[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
		}
		iVar0++;
	}
	iLocal_126 = 0;
	iLocal_123 = 0;
}

void func_920()//Position - 0x933BE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_170[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_170[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
				}
			}
			func_918(iLocal_170[iVar0]);
			__LIB_11__.func_122(iLocal_170[iVar0]);
		}
		iLocal_115[iVar0] = 0;
		iLocal_116[iVar0] = 0;
		if (!bLocal_52 && !bLocal_65)
		{
			if (iLocal_114[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (!iLocal_164[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164[iVar0]);
		}
		iVar0++;
	}
	iLocal_125 = 0;
	iLocal_121 = 0;
}

int func_924()//Position - 0x934D3
{
	if (iLocal_167 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_167;
}

void func_926()//Position - 0x9351A
{
	int iVar0;
	char* sVar1;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_279[0]);
	if (!bLocal_317)
	{
		if (iVar0 < iLocal_550)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_567)
			{
				iLocal_567 = MISC::GET_GAME_TIMER() + 800;
				bLocal_317 = true;
			}
		}
		iLocal_550 = iVar0;
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false))
	{
		if (!iLocal_491)
		{
			sVar1 = "FKN0_CRASH";
		}
		else
		{
			sVar1 = "FC_WARNF";
		}
		if (func_251(sVar1, 0, 0, 0, 1))
		{
			iLocal_491 = 1;
			bLocal_317 = false;
			iLocal_550 = iVar0;
			iLocal_567 = MISC::GET_GAME_TIMER() + 12000;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_567)
		{
			iLocal_550 = iVar0;
			bLocal_317 = false;
		}
	}
	else
	{
		iLocal_550 = iVar0;
		bLocal_317 = false;
	}
}

void func_927()//Position - 0x935CD
{
	if (!bLocal_338)
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_234.f_0, 0);
		if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_234.f_0))
		{
			PED::KNOCK_PED_OFF_VEHICLE(Local_234.f_0);
			iLocal_339 = 0;
		}
		else
		{
			iLocal_339 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_279[1], false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_279[1], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_279[1], true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_279[1], true);
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
		iLocal_605 = MISC::GET_GAME_TIMER();
		bLocal_338 = true;
	}
}

void func_928()//Position - 0x93657
{
	bool bVar0;
	float fVar1;
	float fVar2;
	if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_275)) && !PED::IS_PED_INJURED(iLocal_274)) && !PED::IS_PED_INJURED(Local_234.f_0))
	{
		switch (iLocal_260)
		{
			case 0:
				if (iLocal_262 == 2)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 454.8479f, -688.87665f, 26.97397f, 17f, 17f, 17f, false, false, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 458.08105f, -660.4894f, 26.4879f, 35f, 35f, 35f, false, false, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
							}
							func_204(12);
							iLocal_173[14] = 0;
							if (STREAMING::STREAMVOL_IS_VALID(iLocal_816))
							{
								STREAMING::STREAMVOL_DELETE(iLocal_816);
							}
							iLocal_816 = STREAMING::STREAMVOL_CREATE_FRUSTUM(456.5f, -686.2f, 28.9f, __LIB_2__.func_162(-2.5f, 0f, -178.1f), 100f, 12, 127);
							iLocal_617 = MISC::GET_GAME_TIMER();
							iLocal_260 = 1;
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 7f, 7f, 7f, false, true, 0))
						{
							if (!__LIB_0__.func_75())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
								}
								func_204(12);
								iLocal_173[14] = 0;
								iLocal_306 = 1;
							}
						}
					}
				}
				break;
			case 1:
				STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(457.7f, -690.7f, 27.7f);
				if (!iLocal_482)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_617 + 3000)
					{
						__LIB_0__.func_296();
						bLocal_340 = true;
						iLocal_482 = 1;
					}
				}
				if ((__LIB_6__.func_762(iLocal_279[0], 14f, 1, 1056964608, 0, 1, 0) && bLocal_338) && !__LIB_0__.func_75())
				{
					iLocal_306 = 1;
				}
				break;
			case 2:
				bVar0 = false;
				if (!bLocal_503)
				{
					bLocal_503 = __LIB_11__.func_828("FRA0_CHASE_MID");
				}
				if (!bLocal_344)
				{
					bLocal_344 = func_251("FKN0_GOGET", 0, 0, 0, 1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_590))
				{
					fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_590);
					if (fVar1 >= 0f)
					{
						if (bLocal_344)
						{
							if (!bLocal_345)
							{
								if (fVar1 >= 0.6f)
								{
									bLocal_345 = func_251("FKN0_GOGET2", 0, 0, 0, 1);
								}
							}
						}
						if (!iLocal_471)
						{
							if (fVar1 >= 0.845f)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_275);
								ENTITY::SET_ENTITY_COORDS(iLocal_275, 457.75085f, -686.55273f, 26.77712f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_275, -24.2f);
								PED::FORCE_PED_MOTION_STATE(iLocal_275, joaat("MotionState_Sprint"), true, 1, false);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood7", 7, 36, -1);
								iLocal_471 = 1;
							}
						}
					}
				}
				else
				{
					bVar0 = true;
				}
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 3f);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_279[0], func_205(4), "van_get_out_van", 3))
				{
					fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_279[0], func_205(4), "van_get_out_van");
					switch (iLocal_606)
					{
						case 0:
							if (fVar2 >= 0.16f)
							{
								AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(iLocal_279[0], 0);
								iLocal_606++;
							}
							break;
						case 1:
							if (fVar2 >= 0.569f)
							{
								AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(iLocal_279[0], 3);
								iLocal_606++;
							}
							break;
						case 2:
							if (fVar2 >= 0.581f)
							{
								iLocal_606++;
							}
							break;
						}
				}
				if (bVar0)
				{
				}
				break;
			}
	}
}

void func_933(int iParam0, float fParam1)//Position - 0x93C15
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_71 = false;
	if (!bLocal_53)
	{
		if (bLocal_52)
		{
			__LIB_11__.func_121();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_53 = true;
		}
	}
	else if (!bLocal_52)
	{
		__LIB_11__.func_126();
		bLocal_53 = false;
	}
	if (bLocal_52)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_46)
	{
		if (iLocal_41)
		{
			fLocal_98 = 0f;
		}
		else
		{
			fLocal_98 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_11__.func_140(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_51 = 1;
					}
					else
					{
						iLocal_51 = 0;
					}
				}
				fLocal_95 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_96) * fLocal_98));
				if (bLocal_50)
				{
					func_956(iParam0, fLocal_95);
					func_955(iParam0, fLocal_105);
					if (fLocal_100 > 1000f)
					{
						if (iLocal_137 == 0)
						{
							func_954(iParam0, fLocal_105);
						}
						fVar0 = ((fLocal_95 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_137) * 2000f));
						func_953(iParam0, fVar0, fLocal_99);
						iLocal_137++;
						if (iLocal_137 > 2)
						{
							fLocal_100 = 0f;
						}
					}
					else
					{
						iLocal_137 = 0;
						fLocal_100 = (fLocal_100 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_95 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_58)
		{
			if (!iLocal_40)
			{
				func_950(iParam0, ((fParam1 * fLocal_96) * fLocal_98), 0);
				if (!iLocal_61)
				{
				}
				iLocal_61 = 0;
			}
			if (bLocal_43)
			{
				func_949(iParam0);
			}
			if (!iLocal_40)
			{
				func_936(iParam0, ((fParam1 * fLocal_96) * fLocal_98), 0);
			}
		}
		if (iLocal_48)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_175 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_141 = { ENTITY::GET_ENTITY_COORDS(iLocal_175, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_175, &fLocal_79, &fLocal_80, &fLocal_81, &fLocal_82);
				}
			}
			iLocal_48 = 0;
		}
		if (iLocal_47)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				__LIB_11__.func_122(iLocal_176);
				iLocal_176 = iLocal_175;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_176, Local_141, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_176, fLocal_79, fLocal_80, fLocal_81, fLocal_82);
			}
			fLocal_94 = fLocal_97;
			iLocal_40 = 1;
			iLocal_47 = 0;
		}
		if (iLocal_40)
		{
			while (!func_934(&iParam0, fLocal_94))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_41 = 1;
		}
		if (iLocal_54)
		{
			iLocal_54 = 0;
		}
	}
}

int func_934(int iParam0, float fParam1)//Position - 0x93EB0
{
	if (!iLocal_55)
	{
		iLocal_40 = 1;
		func_912();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_124 == -1)
			{
				while (!func_935(iParam0, iLocal_124, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_45)
				{
					iLocal_41 = 1;
					fLocal_98 = 0f;
					iLocal_125 = 0;
					iLocal_127 = 0;
					iLocal_126 = 0;
					iLocal_121 = 0;
					iLocal_122 = 0;
					iLocal_123 = 0;
					iLocal_128 = 0;
					iLocal_129 = 0;
					iLocal_130 = 0;
				}
			}
		}
		iLocal_55 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_96) * fLocal_98));
				func_935(iParam0, iLocal_124, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_95 = fParam1;
		iLocal_131 = 0;
		iLocal_134 = 0;
		fLocal_110 = 0f;
		fLocal_109 = 0f;
		func_936(*iParam0, ((1f * fLocal_96) * fLocal_98), 1);
		func_950(*iParam0, ((1f * fLocal_96) * fLocal_98), 1);
		func_949(*iParam0);
		if ((iLocal_128 == 0 && iLocal_129 == 0) && iLocal_130 == 0)
		{
			iLocal_41 = 0;
			iLocal_40 = 0;
			iLocal_55 = 0;
			return 1;
		}
	}
	return 0;
}

int func_935(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x93FE2
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_154);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_154))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_154, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_132 && iParam1 != iLocal_133)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_154, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_154, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_154, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_154, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_154))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_154);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_154, 10f, 786603);
					}
					else if (iParam1 != iLocal_132 && iParam1 != iLocal_133)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_154, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_154, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_154, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_154, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_936(int iParam0, float fParam1, bool bParam2)//Position - 0x941C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bVar9 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar10 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar11 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar12 = false;
	if (bVar9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = iLocal_127;
		while (iVar0 < 15)
		{
			if (iLocal_118[iVar0] != 99)
			{
				if (iLocal_118[iVar0] == 0)
				{
					if (iLocal_117[iVar0] > 0)
					{
						if (!iLocal_40)
						{
							if (fLocal_95 > (fLocal_87[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_11__.func_110(iLocal_166[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_119[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_119[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_119[iVar0]), 1);
								iLocal_118[iVar0]++;
								iLocal_129++;
							}
						}
						else
						{
							fVar6 = (fLocal_95 - fLocal_87[iVar0]);
							fVar6 = (fVar6 * fLocal_88[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_947(iLocal_117[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_166[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_119[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_119[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_119[iVar0]), 1);
									iLocal_118[iVar0]++;
									iLocal_129++;
								}
								else
								{
									iLocal_118[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_118[iVar0] = 99;
					}
				}
				else if (iLocal_118[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154);
					if (BitTest(iLocal_119[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
					}
					else if (!bLocal_67 && ((!BitTest(iLocal_119[iVar0], 2) && bVar10) || (BitTest(iLocal_119[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_924());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_924());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_166[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_166[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_117[iVar0], &cLocal_154))
							{
								if (fLocal_95 >= (fLocal_87[iVar0] - (fLocal_108 * fParam1)))
								{
									if ((iLocal_54 || bParam2) || (!bLocal_71 && !func_946(Local_140[iVar0 /*3*/], Var5, 5f, fLocal_106)))
									{
										if (bLocal_50)
										{
											func_945(Local_140[iVar0 /*3*/], Var5, fLocal_99);
										}
										iLocal_173[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_166[iVar0], Local_140[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_166[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_173[iVar0], 0);
										}
										if (uLocal_63 && !BitTest(iLocal_119[iVar0], 0))
										{
											func_944(iLocal_173[iVar0]);
										}
										if (BitTest(iLocal_119[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_173[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_173[iVar0], Local_140[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_173[iVar0], fLocal_83[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_166[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_173[iVar0], 5f);
										}
										if (!BitTest(iLocal_119[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_173[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_173[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
										iLocal_129 = (iLocal_129 - 1);
										iLocal_118[iVar0]++;
										bLocal_71 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_173[iVar0], Local_140[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_173[iVar0], fLocal_83[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_166[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_173[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_173[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
							iLocal_129 = (iLocal_129 - 1);
							iLocal_118[iVar0]++;
						}
					}
				}
				else if (iLocal_118[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154);
					if (!BitTest(iLocal_119[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_119[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
							iVar13 = 2;
						}
						else if (!bLocal_67 && ((!BitTest(iLocal_119[iVar0], 2) && bVar10) || (BitTest(iLocal_119[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_924());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_924());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false))
						{
							if (!bLocal_71 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_173[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_173[iVar0], true), Var5) < 10000f || bParam2) || iLocal_54)
									{
										func_942(&(iLocal_173[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_119[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
					{
						if (fLocal_95 >= fLocal_87[iVar0])
						{
							if (8 > iLocal_122)
							{
								fVar6 = (fLocal_95 - fLocal_87[iVar0]);
								fVar6 = (fVar6 * fLocal_88[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_117[iVar0], &cLocal_154))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_173[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_117[iVar0], fVar6, &cLocal_154) };
										if (((!func_946(Var3, Var5, 5f, fLocal_106) && func_946(Var4, Var5, 5f, fLocal_106)) && !iLocal_54) && !bParam2)
										{
											if (!BitTest(iLocal_119[iVar0], 1))
											{
												func_942(&(iLocal_173[iVar0]), iVar13, 1);
											}
											iLocal_122++;
											iLocal_118[iVar0]++;
										}
										else if (((!bLocal_71 || BitTest(iLocal_119[iVar0], 1)) || iLocal_54) || bParam2)
										{
											if (func_935(&(iLocal_173[iVar0]), iLocal_117[iVar0], fVar6, 1, 0, 0, bLocal_69, bLocal_68))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_173[iVar0], (fParam1 * fLocal_88[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
												{
													if (BitTest(iLocal_119[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_173[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_173[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_173[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_119[iVar0], 1))
												{
													func_942(&(iLocal_173[iVar0]), iVar13, 1);
												}
												iLocal_122++;
												iLocal_118[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_119[iVar0], 1))
										{
											func_942(&(iLocal_173[iVar0]), iVar13, 1);
										}
										iLocal_122++;
										iLocal_118[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_119[iVar0], 1))
								{
									func_942(&(iLocal_173[iVar0]), iVar13, 1);
								}
								iLocal_122++;
								iLocal_118[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_119[iVar0], 1))
						{
							func_942(&(iLocal_173[iVar0]), iVar13, 1);
						}
						iLocal_122++;
						iLocal_118[iVar0]++;
					}
				}
				else if (iLocal_118[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_44 && !iLocal_41) && !bLocal_60) && (((!bLocal_69 && !bLocal_68) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_173[iVar0])) || func_941(iLocal_173[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_62)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_173[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_11__.func_138(iLocal_173[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_20__.func_444(iVar2, iLocal_173[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_937(iLocal_173[iVar0]);
												iLocal_118[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_173[iVar0], (fParam1 * fLocal_88[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
							}
						}
						else
						{
							iLocal_118[iVar0]++;
						}
					}
					else
					{
						iLocal_118[iVar0]++;
					}
				}
				else if (iLocal_118[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_173[iVar0]))
						{
							iLocal_118[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_173[iVar0], (fParam1 * fLocal_88[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_117[iVar0], &cLocal_154))
							{
								if (fLocal_95 > (fLocal_87[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_173[iVar0]);
							}
						}
					}
					else
					{
						iLocal_118[iVar0]++;
					}
				}
				else if (iLocal_118[iVar0] == 5)
				{
					if (!iLocal_173[iVar0] == iLocal_177)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_173[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_173[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_52 && !bLocal_65)
						{
							if (iLocal_117[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_117[iVar0], &cLocal_154);
							}
						}
						if (!bLocal_42)
						{
							if (!bLocal_70)
							{
								__LIB_11__.func_122(iLocal_173[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_173[iVar0]));
						}
					}
					iLocal_122 = (iLocal_122 - 1);
					iLocal_118[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_127 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_916();
	}
}

void func_937(int iParam0)//Position - 0x94DA7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_918(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_941(int iParam0)//Position - 0x94F0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_66)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_942(var uParam0, int iParam1, bool bParam2)//Position - 0x94F68
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_11__.func_123(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_163);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, true);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, true, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_924(), -1, false, false);
				if (bLocal_72)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_924());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_73)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_11__.func_109(iVar0);
			bLocal_71 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_944(int iParam0)//Position - 0x95076
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_168 >= -1 && iLocal_169 >= -1)
	{
		while (iVar0 == iLocal_168 || iVar0 == iLocal_169)
		{
			iVar0++;
		}
	}
	else if (iLocal_168 >= -1)
	{
		if (iVar0 == iLocal_168)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_945(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x951EF
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_53)
	{
		if (!func_946(Param0, Param1, fParam2, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, false, false, false, false, false, false, 0);
			}
		}
	}
}

int func_946(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x95262
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_53)
		{
			if (!iLocal_40)
			{
				if (SYSTEM::VMAG2(Param1 - Param0) - fParam2) < (fParam3 * fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_947(int iParam0)//Position - 0x952A9
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_154);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_154))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_154);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_154);
	return fVar0;
}

void func_949(int iParam0)//Position - 0x9535F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_126;
		while (iVar0 < 1)
		{
			switch (iLocal_120[iVar0])
			{
				case 0:
					if (!iLocal_165[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_139[iVar0 /*3*/], fLocal_93, fLocal_93, fLocal_93, false, true, 0))
						{
							iLocal_128++;
							iLocal_120[iVar0]++;
						}
					}
					else
					{
						iLocal_120[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_123)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_165[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_165[iVar0]))
							{
								if ((iLocal_40 || iLocal_54) || (!bLocal_71 && !func_946(Local_139[iVar0 /*3*/], Var1, 5f, fLocal_106)))
								{
									if (bLocal_50)
									{
										func_945(Local_139[iVar0 /*3*/], Var1, fLocal_99);
									}
									iLocal_172[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_165[iVar0], Local_139[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_165[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_172[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_172[iVar0], fLocal_89[iVar0], fLocal_90[iVar0], fLocal_91[iVar0], fLocal_92[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_172[iVar0], __LIB_11__.func_124()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_172[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_172[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_172[iVar0], __LIB_11__.func_125()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_172[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_172[iVar0], true);
									iLocal_128 = (iLocal_128 - 1);
									iLocal_123++;
									iLocal_120[iVar0]++;
									bLocal_71 = true;
								}
							}
						}
						else
						{
							iLocal_128 = (iLocal_128 - 1);
							iLocal_123++;
							iLocal_120[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_172[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_172[iVar0], true) };
						}
						if (fLocal_107 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_107 * fLocal_107))
						{
							if (!__LIB_20__.func_444(iLocal_172[iVar0], iParam0, 0))
							{
								if (!bLocal_42)
								{
									__LIB_11__.func_122(iLocal_172[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_172[iVar0]));
								}
								iLocal_123 = (iLocal_123 - 1);
								iLocal_120[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_120[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_126 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_919();
	}
}

void func_950(int iParam0, float fParam1, int iParam2)//Position - 0x95655
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	iVar5 = 0;
	bVar12 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar13 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar14 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_95 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_125;
		while (iVar0 < 51 && !bVar17)
		{
			if (iLocal_115[iVar0] != 99)
			{
				if (iLocal_115[iVar0] == 0)
				{
					if (iLocal_114[iVar0] > 0 && iLocal_164[iVar0] != 0)
					{
						if (!iLocal_40)
						{
							if (fLocal_95 < (fLocal_78[iVar0] + 20000f))
							{
								if (fLocal_95 >= (fLocal_78[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_11__.func_110(iLocal_164[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_116[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_164[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_116[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_116[iVar0]), 1);
									iLocal_130++;
									iLocal_115[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_952(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_95 - fLocal_78[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_947(iLocal_114[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_164[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_116[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_164[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_116[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_116[iVar0]), 1);
									iLocal_130++;
									iLocal_115[iVar0]++;
								}
								else
								{
									func_952(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_952(iVar0, 1090519040);
					}
				}
				else if (iLocal_115[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154);
					bVar11 = false;
					if (BitTest(iLocal_116[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_67 && ((!BitTest(iLocal_116[iVar0], 2) && bVar13) || (BitTest(iLocal_116[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_924());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_924());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_164[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_164[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_114[iVar0], &cLocal_154)) && bVar11)
						{
							if (fLocal_95 >= (fLocal_78[iVar0] - (fLocal_108 * fParam1)))
							{
								if ((iLocal_54 || iParam2) || (!bLocal_71 && !func_946(Local_138[iVar0 /*3*/], Var8, 5f, fLocal_106)))
								{
									if (bLocal_50)
									{
										func_945(Local_138[iVar0 /*3*/], Var8, fLocal_99);
									}
									iLocal_170[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_164[iVar0], Local_138[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_164[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_170[iVar0], 0);
									}
									if (uLocal_63 && !BitTest(iLocal_116[iVar0], 0))
									{
										func_944(iLocal_170[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_170[iVar0], Local_138[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_170[iVar0], fLocal_74[iVar0], fLocal_75[iVar0], fLocal_76[iVar0], fLocal_77[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_164[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_164[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_170[iVar0], 5f);
									}
									if (BitTest(iLocal_116[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_170[iVar0], true);
									}
									if (!BitTest(iLocal_116[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_170[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_170[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_170[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_170[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164[iVar0]);
									iLocal_130 = (iLocal_130 - 1);
									iLocal_115[iVar0]++;
									bLocal_71 = true;
								}
								else if (fLocal_95 > fLocal_78[iVar0])
								{
									iLocal_130 = (iLocal_130 - 1);
									func_952(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_115[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_136 || iLocal_136 == 0)) || iLocal_54) || iParam2)
					{
						if (!BitTest(iLocal_116[iVar0], 1))
						{
							if (BitTest(iLocal_116[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
								iVar15 = 2;
							}
							else if (!bLocal_67 && ((!BitTest(iLocal_116[iVar0], 2) && bVar13) || (BitTest(iLocal_116[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_924());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_924());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_170[iVar0], false))
							{
								if (!bLocal_71 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_170[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_170[iVar0], true), Var8) < 10000f || iParam2) || iLocal_54)
										{
											func_942(&(iLocal_170[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_116[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154);
							if (fLocal_95 >= fLocal_78[iVar0])
							{
								if (8 > iLocal_121)
								{
									fVar9 = (fLocal_95 - fLocal_78[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_114[iVar0], &cLocal_154))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_170[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_114[iVar0], fVar9, &cLocal_154) };
											if (!func_946(Var6, Var8, 5f, fLocal_106) && func_946(Var7, Var8, 5f, fLocal_106))
											{
												if (!BitTest(iLocal_116[iVar0], 1))
												{
													func_942(&(iLocal_170[iVar0]), iVar15, 0);
												}
												func_952(iVar0, 1090519040);
											}
											else if (((!bLocal_71 || BitTest(iLocal_116[iVar0], 1)) || iLocal_54) || iParam2)
											{
												if (func_935(&(iLocal_170[iVar0]), iLocal_114[iVar0], fVar9, 1, 0, 0, 1, bLocal_68))
												{
													if (!BitTest(iLocal_116[iVar0], 1))
													{
														func_942(&(iLocal_170[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_170[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_170[iVar0], fParam1);
													iLocal_121++;
													iLocal_115[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_116[iVar0], 1))
											{
												func_942(&(iLocal_170[iVar0]), iVar15, 0);
											}
											func_952(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154))
									{
										if (!BitTest(iLocal_116[iVar0], 1))
										{
											func_942(&(iLocal_170[iVar0]), iVar15, 0);
										}
										func_952(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_116[iVar0], 1))
									{
										func_942(&(iLocal_170[iVar0]), iVar15, 0);
									}
									func_952(iVar0, 1090519040);
								}
							}
							else if (iLocal_51 && !bLocal_59)
							{
								if (!BitTest(iLocal_116[iVar0], 1))
								{
									func_942(&(iLocal_170[iVar0]), iVar15, 0);
								}
								func_952(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_116[iVar0], 1))
							{
								func_942(&(iLocal_170[iVar0]), iVar15, 0);
							}
							func_952(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_136 = iVar0;
					}
				}
				else if (iLocal_115[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_49)
									{
										if ((!bLocal_44 && !iLocal_41) && func_941(iLocal_170[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_135 || iLocal_135 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_11__.func_139(iLocal_170[iVar0], iVar5) || __LIB_20__.func_444(iVar5, iLocal_170[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_135 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_64 && !BitTest(iLocal_116[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_135 || iLocal_135 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_170[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_135 = iVar0;
										}
									}
									if (bVar18)
									{
										func_937(iLocal_170[iVar0]);
										iLocal_115[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_170[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
							}
						}
						else
						{
							iLocal_115[iVar0]++;
						}
					}
					else
					{
						iLocal_115[iVar0]++;
					}
				}
				else if (iLocal_115[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
						{
							iLocal_115[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_170[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_114[iVar0], &cLocal_154))
							{
								if (fLocal_95 > (fLocal_78[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_154)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
							}
						}
					}
					else
					{
						iLocal_115[iVar0]++;
					}
				}
				else if (iLocal_115[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_170[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_170[iVar0]);
					}
					iLocal_121 = (iLocal_121 - 1);
					func_952(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_125 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_135 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_136 = 0;
		}
	}
	else
	{
		func_920();
	}
}

void func_952(int iParam0, float fParam1)//Position - 0x961F1
{
	int iVar0;
	if (!iLocal_164[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_170[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_170[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_170[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iParam0], -1, false);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_170[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_73)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_42)
	{
		if (!bLocal_70)
		{
			__LIB_11__.func_109(iVar0);
			__LIB_11__.func_122(iLocal_170[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_170[iParam0]));
		}
	}
	if (!bLocal_52 && !bLocal_65)
	{
		if (iLocal_114[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_114[iParam0], &cLocal_154);
		}
	}
	iLocal_115[iParam0] = 99;
}

void func_953(int iParam0, float fParam1, float fParam2)//Position - 0x9634C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var3 = { Var2 - Var1 };
			fVar5 = SYSTEM::VMAG(Var3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_945(Var1, Var4, fVar5);
		}
	}
}

void func_954(int iParam0, float fParam1)//Position - 0x963CF
{
	if (!bLocal_53)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_955(int iParam0, float fParam1)//Position - 0x9641D
{
	if (!bLocal_53)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_956(int iParam0, float fParam1)//Position - 0x9646B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_109 + 2000f);
		fVar2 = (fLocal_110 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_131 == 0)
				{
					Local_150 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_109) };
					iLocal_131++;
				}
				else if (iLocal_131 == 1)
				{
					Local_151 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_131++;
				}
				else if (!bLocal_71)
				{
					if (Local_150.f_0 > Local_151.f_0)
					{
						fVar3 = Local_150.f_0;
						Local_150.f_0 = Local_151.f_0;
						Local_151.f_0 = fVar3;
					}
					if (Local_150.f_1 > Local_151.f_1)
					{
						fVar3 = Local_150.f_1;
						Local_150.f_1 = Local_151.f_1;
						Local_151.f_1 = fVar3;
					}
					if (Local_150.f_2 > Local_151.f_2)
					{
						fVar3 = Local_150.f_2;
						Local_150.f_2 = Local_151.f_2;
						Local_151.f_2 = fVar3;
					}
					Local_150 = { Local_150 - Vector(fLocal_113, fLocal_113, fLocal_113) };
					Local_151 = { Local_151 + Vector(fLocal_113, fLocal_113, fLocal_113) };
					PATHFIND::SET_ROADS_IN_AREA(Local_150, Local_151, false, false);
					fLocal_109 = fVar1;
					iLocal_131 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_134 == 0)
			{
				Local_152 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_110) };
				iLocal_134++;
			}
			else if (iLocal_134 == 1)
			{
				Local_153 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_134++;
			}
			else if (!bLocal_71 && !bVar4)
			{
				if (Local_152.f_0 > Local_153.f_0)
				{
					fVar3 = Local_152.f_0;
					Local_152.f_0 = Local_153.f_0;
					Local_153.f_0 = fVar3;
				}
				if (Local_152.f_1 > Local_153.f_1)
				{
					fVar3 = Local_152.f_1;
					Local_152.f_1 = Local_153.f_1;
					Local_153.f_1 = fVar3;
				}
				if (Local_152.f_2 > Local_153.f_2)
				{
					fVar3 = Local_152.f_2;
					Local_152.f_2 = Local_153.f_2;
					Local_153.f_2 = fVar3;
				}
				Local_152 = { Local_152 - Vector(fLocal_113, fLocal_113, fLocal_113) };
				Local_153 = { Local_153 + Vector(fLocal_113, fLocal_113, fLocal_113) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_152, Local_153, 1);
				fLocal_110 = fVar2;
				iLocal_134 = 0;
			}
		}
	}
}

void func_958(float fParam0)//Position - 0x9675C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	switch (iLocal_233)
	{
		case 0:
			fVar0 = 15710f;
			break;
		case 1:
			fVar0 = 20500f;
			break;
		case 2:
			fVar0 = 24900f;
			break;
		case 3:
			fVar0 = 36000f;
			break;
		case 4:
			fVar0 = 44100f;
			break;
		case 5:
			fVar0 = 50000f;
			break;
		case 6:
			fVar0 = 56000f;
			break;
		case 7:
			fVar0 = 64000f;
			break;
		case 8:
			fVar0 = 67500f;
			break;
		case 9:
			fVar0 = 100000000f;
			break;
	}
	if (fParam0 >= fVar0)
	{
		iLocal_233++;
	}
	fVar1 = 1f;
	fVar2 = 10f;
	fVar3 = 25f;
	fVar4 = 52f;
	fVar5 = 2.2f;
	fVar6 = 0.6f;
	fVar7 = 0.45f;
	fVar8 = 0.03f;
	switch (iLocal_233)
	{
		case 0:
			fVar6 = 0.6f;
			fVar7 = 0.6f;
			break;
		case 1:
			fVar4 = 110f;
			fVar6 = 0.6f;
			fVar7 = 0.5f;
			break;
		case 2:
			break;
		case 3:
			fVar2 = 13f;
			fVar3 = 35f;
			break;
		case 4:
			fVar2 = 15f;
			fVar3 = 40f;
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_279[1], 15f, 15f, 15f, false, false, 0))
			{
				fVar2 = 12f;
				fVar3 = 28f;
			}
			else
			{
				fVar2 = 22f;
				fVar3 = 28f;
				fVar5 = 2.5f;
				fVar8 = 0.1f;
			}
			break;
		case 9:
			if (iLocal_356)
			{
				Var9 = { ENTITY::GET_ENTITY_COORDS(iLocal_279[1], true) };
				Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_279[1], 8f, 8f, 8f, false, false, 0) || Var10.f_1 > (Var9.f_1 - 3f))
				{
					fVar2 = 260f;
					fVar3 = 300f;
					fVar4 = 550f;
					fVar6 = 1f;
					fVar7 = 1f;
					fVar5 = 2.5f;
					fVar8 = 0.2f;
				}
				else
				{
					fVar2 = 8f;
					fVar3 = 12f;
					fVar4 = 18f;
					fVar6 = 0.85f;
					fVar7 = 0.7f;
				}
			}
			else
			{
				fVar2 = 0.9f;
				fVar3 = 1f;
				fVar4 = 2f;
				fVar6 = 0.05f;
				fVar7 = 0.05f;
			}
			break;
	}
	Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_279[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	if (iLocal_233 == 3 || iLocal_233 == 4)
	{
		if (((Var11.f_0 < -60f || Var11.f_0 > 60f) || Var11.f_1 > 0f) && Var11.f_1 > -130f)
		{
			fVar2 = 260f;
			fVar3 = 300f;
			fVar4 = 550f;
			fVar6 = 1f;
			fVar7 = 1f;
			fVar5 = 2.5f;
			fVar8 = 0.1f;
		}
	}
	if (fParam0 >= 8000f)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false) || fParam0 < 22000f)
		{
			__LIB_23__.func_168(&fLocal_540, &(iLocal_279[0]), iLocal_279[1], fVar2, fVar3, fVar4, 1120403456, 1106247680, fVar1, fVar6, fVar7, fVar5, 1, 0, 1097859072, 1);
		}
		else
		{
			fLocal_540 = 0.75f;
		}
		__LIB_23__.func_167(&fLocal_539, fLocal_540, fVar8);
	}
	else
	{
		fLocal_539 = 1f;
	}
}

void func_987()//Position - 0x97D31
{
	if (iLocal_191 >= 1 || iLocal_262 >= 1)
	{
		func_781(11);
		func_781(9);
	}
}

void func_988()//Position - 0x97D58
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	struct<6> Var9;
	char* sVar10;
	int iVar11;
	bool bVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	bool bVar16;
	bool bVar17;
	if (!bLocal_305)
	{
		func_996();
	}
	if (!iLocal_306)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
		switch (iLocal_257)
		{
			case 0:
				func_781(7);
				iLocal_257 = 1;
				break;
			case 1:
				if (func_780())
				{
					func_473(0, func_84(0), 210.17f, 1, 1, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], false);
					iLocal_257 = 2;
					iLocal_588 = MISC::GET_GAME_TIMER();
				}
				break;
			case 2:
				if (!iLocal_437)
				{
					if (!iLocal_328)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_588 + 2000)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], true);
							iLocal_437 = 1;
						}
					}
				}
				break;
		}
		if (bLocal_305)
		{
			if (!iLocal_472)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_279[0], func_84(2), true, false, false, true);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], true);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_274, iLocal_279[0], 0);
						func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 0, 1, 1, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
						PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_274);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_274, iLocal_279[0], true);
						iLocal_441 = 1;
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], false);
						SYSTEM::WAIT(0);
						iLocal_261 = 4;
						iLocal_328 = 1;
						bLocal_309 = true;
						iLocal_472 = 1;
					}
				}
			}
		}
		switch (iLocal_258)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(10), 700f, 700f, 700f, false, false, 0))
				{
					func_781(2);
					iLocal_628 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_258 = 1;
				}
				break;
			case 1:
				if (MISC::GET_GAME_TIMER() >= iLocal_628 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(10), 600f, 600f, 600f, false, false, 0))
				{
					func_781(5);
					iLocal_628 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_258 = 2;
				}
				break;
			case 2:
				if (MISC::GET_GAME_TIMER() >= iLocal_628 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(10), 500f, 500f, 500f, false, false, 0))
				{
					func_781(8);
					iLocal_258 = 3;
				}
				break;
			case 3:
				if (func_780())
				{
					func_472(0);
					iLocal_258 = 4;
				}
				break;
			case 4:
				func_388(0);
				iLocal_258 = 5;
				break;
			case 5:
				if (iLocal_188 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_276) && !PED::IS_PED_INJURED(Local_234.f_0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_276, joaat("SCRIPT_TASK_CHAT_TO_PED")) == 7)
						{
							TASK::TASK_CHAT_TO_PED(iLocal_276, Local_234.f_0, 1, 0f, 0f, 0f, 0f, 0f);
						}
					}
				}
				break;
		}
		if (!bLocal_305)
		{
			switch (iLocal_259)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 335.21927f, 338.35443f, 104.20057f, 900f, 900f, 900f, false, false, 0))
					{
						func_781(16);
						iLocal_629 = MISC::GET_GAME_TIMER() + 2000;
						iLocal_259 = 1;
					}
					break;
				case 1:
					if (MISC::GET_GAME_TIMER() >= iLocal_629 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 335.21927f, 338.35443f, 104.20057f, 800f, 800f, 800f, false, false, 0))
					{
						func_781(17);
						iLocal_259 = 2;
					}
					break;
				case 2:
					if (func_780())
					{
						func_995();
						iLocal_259 = 3;
					}
					break;
				case 3:
					break;
				}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false))
			{
				if (iLocal_261 < 4)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
				}
			}
		}
		if (!bLocal_305)
		{
			if (!PED::IS_PED_INJURED(iLocal_275))
			{
				if (!iLocal_447)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_601)
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
						AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_275, 3, "BARK");
						AUDIO::STOP_PED_SPEAKING(iLocal_275, true);
						iLocal_601 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 800));
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_600)
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
						iLocal_447 = 1;
					}
				}
			}
		}
		if (!bLocal_305)
		{
			bVar0 = false;
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_234.f_0, PLAYER::PLAYER_PED_ID(), true) || __LIB_0__.func_76(Local_234.f_0, PLAYER::PLAYER_PED_ID(), 0) < 5f)
				{
					bVar0 = true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
			{
				if (!PED::IS_PED_INJURED(iLocal_276))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_276, PLAYER::PLAYER_PED_ID(), true))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 385.48f, 354.65f, 101.4f, 386.54f, 360.31f, 104.71f, 23.5f, false, true, 0) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), 361.21f, 334.32f, 95f, 435.91f, 351.51f, 113f, false, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(func_84(10) - Vector(5f, 5f, 5f), func_84(10) + Vector(5f, 5f, 5f))) || MISC::IS_BULLET_IN_AREA(func_84(10), 5f, true)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(func_84(10), 18.8f) > 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (!iLocal_333)
				{
					if (!PED::IS_PED_INJURED(Local_234.f_0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_234.f_0, func_394(0), -1, false, true);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
						TASK::TASK_PERFORM_SEQUENCE(Local_234.f_0, iLocal_631);
					}
					if (!PED::IS_PED_INJURED(iLocal_276))
					{
						TASK::TASK_COWER(iLocal_276, -1);
					}
					iLocal_333 = 1;
				}
				func_809(6);
			}
		}
		if (iLocal_328)
		{
			if (iLocal_258 == 5)
			{
				func_75("fra_0_mcs_1", func_84(2), (100f - 5f), (120f - 10f));
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 20f, 20f, 4f, false, true, 0))
				{
					if (!bLocal_425)
					{
						bLocal_425 = func_251("FC_WANTBEF", 0, 0, 0, 1);
					}
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(iLocal_274))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", iLocal_274, 0);
				}
				if (!PED::IS_PED_INJURED(Local_234.f_0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ballas_OG", Local_234.f_0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ballas_OG", 0, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_276))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Hoodrat_girl", iLocal_276, 0);
				}
			}
			__LIB_33__.func_928(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, &uLocal_609, &uLocal_610, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(iLocal_274))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0], false) && PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
				{
					if (!bLocal_305)
					{
						if (iLocal_242 == 2)
						{
							func_255(2);
						}
						else
						{
							func_255(1);
						}
					}
					iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					if (iVar1 == 0)
					{
						if (!bLocal_305)
						{
							if (!iLocal_421)
							{
								iLocal_421 = func_251("FKN0_GOVINE", 0, 0, 0, 1);
							}
							else if (iLocal_310)
							{
								if (!iLocal_490)
								{
									if ((iLocal_551 % 2) == 0)
									{
										iLocal_490 = func_251("FKN0_CHOP", 0, 0, 0, 1);
									}
									else
									{
										iLocal_490 = 1;
									}
								}
								else if (!bLocal_312)
								{
									if ((iLocal_551 % 2) == 0)
									{
										if (__LIB_0__.func_176(2))
										{
											sVar2 = "FKN0_WALK";
										}
										else
										{
											sVar2 = "FKN0_NOARM2";
										}
									}
									else if (__LIB_0__.func_176(2))
									{
										sVar2 = "FKN0_B1AV1";
									}
									else
									{
										sVar2 = "FKN0_B1AV2";
									}
									bLocal_312 = func_251(sVar2, 0, 0, 0, 1);
								}
								else if (iLocal_313)
								{
									if (!bLocal_317 && !bLocal_309)
									{
										if (func_233())
										{
											iLocal_313 = 0;
										}
									}
								}
								else
								{
									if (!iLocal_331)
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 368.27f, 355.67f, 101.96f, 15f, 15f, 2f, false, true, 0))
										{
											if (!iLocal_316)
											{
												__LIB_0__.func_296();
												iLocal_316 = 1;
											}
											else
											{
												iLocal_331 = func_251("FKN0_CREEP", 0, 0, 0, 1);
											}
										}
									}
									if (!iLocal_330 || !iLocal_332)
									{
										if (__LIB_0__.func_75())
										{
											iLocal_568 = -1;
										}
										else if (iLocal_568 < 0)
										{
											iLocal_568 = MISC::GET_GAME_TIMER();
										}
										else if (MISC::GET_GAME_TIMER() >= iLocal_568 + 3000 && !bLocal_309)
										{
											bVar3 = false;
											if (!iLocal_332)
											{
												if (iLocal_272 == 0 || iLocal_272 == 4)
												{
													Var4 = { ENTITY::GET_ENTITY_ROTATION(iLocal_279[0], 2) };
													fVar5 = ENTITY::GET_ENTITY_SPEED(iLocal_279[0]);
													if (Var4.f_0 >= 9f)
													{
														if (fVar5 <= 21f && fVar5 >= 4f)
														{
															if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_279[0]))
															{
																if (func_251("FC_UPHILL", 0, 0, 0, 1))
																{
																	iLocal_332 = 1;
																	bVar3 = true;
																}
															}
														}
													}
												}
											}
											if (!bVar3)
											{
												switch (iLocal_272)
												{
													case 0:
														switch (iLocal_242)
														{
															case 1:
																iLocal_272 = 1;
																break;
															case 2:
																iLocal_272 = 2;
																iLocal_600 = MISC::GET_GAME_TIMER() + 6000;
																break;
															case 0:
																iLocal_272 = 4;
																break;
														}
														break;
													case 1:
														if (func_251("FC_CBEHAVE", 0, 0, 0, 1))
														{
															iLocal_272 = 4;
														}
														break;
													case 2:
														if (MISC::GET_GAME_TIMER() >= iLocal_601)
														{
															AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
															if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
															{
																AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_275, 3, "BARK");
															}
															else
															{
																AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_275, 3, "BARK_SEQ");
															}
															AUDIO::STOP_PED_SPEAKING(iLocal_275, true);
															iLocal_601 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 1000));
														}
														if (MISC::GET_GAME_TIMER() >= iLocal_600)
														{
															AUDIO::STOP_PED_SPEAKING(iLocal_275, false);
															iLocal_272 = 3;
														}
														break;
													case 3:
														if (func_251("FC_CMBEHAVE", 0, 0, 0, 1))
														{
															iLocal_272 = 4;
														}
														break;
													}
												}
											}
										}
									}
								}
						}
						if (!bLocal_305)
						{
							if (!iLocal_329)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(2), 50f, 50f, 4f, false, true, 0))
								{
									if (!iLocal_316)
									{
										__LIB_0__.func_296();
										iLocal_316 = 1;
									}
									else if ((iLocal_551 % 2) == 0)
									{
										iLocal_329 = func_251("FC_INALLEY", 0, 0, 0, 1);
										if (iLocal_329)
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
									else
									{
										iLocal_329 = func_251("FKN0_ALLEY", 0, 0, 0, 1);
										if (iLocal_329)
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
										}
									}
								}
							}
						}
					}
					if (!bLocal_309)
					{
						if (iVar1 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_84(2), 5f, 5f, 2f, true, true, 0))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]))
								{
									if (__LIB_0__.func_398(1, 0, 1))
									{
										__LIB_0__.func_686(1, 0, 1, 0);
										func_231();
										__LIB_12__.func_101();
										iLocal_554 = MISC::GET_GAME_TIMER();
										bLocal_309 = true;
									}
								}
							}
						}
					}
					else
					{
						__LIB_12__.func_101();
						if (__LIB_6__.func_762(iLocal_279[0], 6f, 1, 1056964608, 0, 1, 0))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_554 + 1000)
							{
								if (!iLocal_482)
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_554 + 3000)
									{
										iLocal_316 = 1;
										iLocal_329 = 1;
										iLocal_330 = 1;
										iLocal_332 = 1;
										iLocal_331 = 1;
										__LIB_0__.func_296();
										iLocal_482 = 1;
									}
								}
								if (!__LIB_0__.func_75())
								{
									if (func_210())
									{
										if (iLocal_192 > 0)
										{
											if (__LIB_0__.func_90())
											{
												iLocal_306 = 1;
											}
										}
									}
								}
								else
								{
									if (Global_21605 != 0)
									{
									}
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
									}
								}
							}
						}
					}
				}
				if (!bLocal_309)
				{
					func_235(1, 0, 1, 1);
					func_926();
				}
			}
		}
		else
		{
			func_255(0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (iLocal_623 < 0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_623 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_623 + 2000)
			{
				func_809(11);
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_279[0], false) || !ENTITY::IS_ENTITY_DEAD(iLocal_279[0], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], false);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				if (MISC::GET_GAME_TIMER() <= iLocal_558 + 1500)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_274, 1f);
				}
				if (MISC::GET_GAME_TIMER() <= iLocal_558 + 2000)
				{
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
				else if (!iLocal_334)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_334 = 1;
				}
				if (MISC::GET_GAME_TIMER() < iLocal_627)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				}
				Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_274, true) };
				if (!bLocal_326)
				{
					if (iLocal_261 == 0)
					{
						fVar8 = (Var7.f_0 - Var6.f_0);
						if (fVar8 > 0f)
						{
							fLocal_542 = (fLocal_542 + (0.06f * SYSTEM::TIMESTEP()));
						}
						else if (fVar8 < -1.2f)
						{
							fLocal_542 = (fLocal_542 - (0.06f * SYSTEM::TIMESTEP()));
						}
						else if (fLocal_542 > 1f)
						{
							fLocal_542 = (fLocal_542 - (0.06f * SYSTEM::TIMESTEP()));
							if (fLocal_542 < 1f)
							{
								fLocal_542 = 1f;
							}
						}
						else if (fLocal_542 < 1f)
						{
							fLocal_542 = (fLocal_542 + (0.06f * SYSTEM::TIMESTEP()));
							if (fLocal_542 > 1f)
							{
								fLocal_542 = 1f;
							}
						}
						if (fLocal_542 > 1.1f)
						{
							fLocal_542 = 1.1f;
						}
						else if (fLocal_542 < 0.8f)
						{
							fLocal_542 = 0.8f;
						}
					}
					else if (fLocal_542 > 1f)
					{
						fLocal_542 = (fLocal_542 - (0.1f * SYSTEM::TIMESTEP()));
						if (fLocal_542 < 1f)
						{
							fLocal_542 = 1f;
						}
					}
					else if (fLocal_542 < 1f)
					{
						fLocal_542 = (fLocal_542 + (0.1f * SYSTEM::TIMESTEP()));
						if (fLocal_542 > 1f)
						{
							fLocal_542 = 1f;
						}
					}
					PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_274, fLocal_542);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_274) < 0.1f)
					{
						fLocal_546 = (fLocal_546 + (1f * SYSTEM::TIMESTEP()));
					}
					else
					{
						fLocal_546 = (fLocal_546 - (1f * SYSTEM::TIMESTEP()));
						if (fLocal_546 < 0f)
						{
							fLocal_546 = 0f;
						}
					}
				}
				else
				{
					fLocal_546 = (fLocal_546 - (2f * SYSTEM::TIMESTEP()));
					if (fLocal_546 < 0f)
					{
						fLocal_546 = 0f;
					}
				}
				if (iLocal_257 < 2)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
					if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
					}
					if (!iLocal_322)
					{
						__LIB_8__.func_770(1);
						iLocal_322 = 1;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
				{
					if (!iLocal_328)
					{
						if (!iLocal_310)
						{
							iLocal_310 = 1;
						}
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 3.6f, (3.6f + 1.5f), 4f, false, true, 0) && !iLocal_441)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
							if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
							}
							if (!iLocal_322)
							{
								__LIB_8__.func_770(1);
								iLocal_322 = 1;
							}
						}
						else if (iLocal_322)
						{
							__LIB_8__.func_770(0);
							iLocal_322 = 0;
						}
						if (ENTITY::GET_ENTITY_SPEED(iLocal_274) < 1.2f && TASK::GET_SCRIPT_TASK_STATUS(iLocal_274, -1689270312) == 7)
						{
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_274);
						}
						if (iLocal_261 == 0)
						{
							if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_274, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_274, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							}
							if (!bLocal_326)
							{
								if (!bLocal_442)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_274, iLocal_279[0], 11f, 11f, 4f, false, true, 0))
									{
										__LIB_0__.func_296();
										bLocal_442 = true;
									}
								}
								if ((!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 3.6f, 3.6f, 4f, false, true, 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && MISC::GET_GAME_TIMER() >= iLocal_558 + 3000)
								{
									if (Var6.f_0 > Var7.f_0 || iLocal_458)
									{
										if (!func_994())
										{
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_274, iLocal_631);
											TASK::CLEAR_PED_SECONDARY_TASK(iLocal_274);
											TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
											TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
											iLocal_323 = 0;
											iLocal_320 = 0;
											bLocal_326 = true;
										}
									}
									else
									{
										if (bLocal_312)
										{
											if (!iLocal_323)
											{
												if (!func_236())
												{
													if (!iLocal_519)
													{
														bLocal_312 = false;
													}
												}
												__LIB_0__.func_296();
												iLocal_323 = 1;
											}
										}
										bLocal_459 = true;
									}
								}
								else
								{
									bLocal_459 = false;
									if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, -1, 2048, 2);
									}
									if (iLocal_310)
									{
										if (func_210() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (!bLocal_312)
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 3.2f, 3.2f, 4f, false, true, 0) && iLocal_447)
												{
													if (__LIB_0__.func_405("FC_FOLLAM", 0, 0))
													{
														__LIB_26__.func_550(0, 1, 0, 0);
													}
													bLocal_312 = func_251("FKN0_WALK2", 0, 0, 0, 1);
												}
											}
											else if (iLocal_313)
											{
												if (!bLocal_317 && !bLocal_442)
												{
													if (func_233())
													{
														iLocal_313 = 0;
													}
												}
											}
										}
									}
									if (!iLocal_519)
									{
										if (__LIB_0__.func_75() && bLocal_312)
										{
											Var9 = { __LIB_9__.func_980() };
											if (MISC::ARE_STRINGS_EQUAL(&Var9, "FKN0_WALK2_1"))
											{
												iLocal_519 = 1;
											}
										}
									}
								}
							}
							else
							{
								if (bLocal_312)
								{
									if (!iLocal_323)
									{
										func_236();
										__LIB_0__.func_296();
										iLocal_323 = 1;
									}
								}
								if (!iLocal_320)
								{
									if (func_210())
									{
										if (((iLocal_323 || !bLocal_312) && !bLocal_459) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_559)
											{
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 15f, 15f, 15f, false, false, 0))
												{
													if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 1.2f && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_274, 45f))
													{
														sVar10 = "FKN0_LFOL2";
													}
													else
													{
														sVar10 = "FKN0_LFOL1";
													}
													if (func_251(sVar10, 0, 0, 0, 1))
													{
														iLocal_320 = 1;
														iLocal_559 = MISC::GET_GAME_TIMER() + 10000;
													}
												}
												else
												{
													iLocal_320 = 1;
												}
											}
										}
									}
								}
								else if (!bLocal_321)
								{
									bLocal_321 = func_208("FC_FOLLAM", 1, 0, 7500);
								}
								if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 3.2f, 3.2f, 4f, false, true, 0) || Var6.f_0 < Var7.f_0) && (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || Var6.f_0 < Var7.f_0))
								{
									if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 3.2f, 3.2f, 4f, false, true, 0) || func_994()) || !iLocal_458)
									{
										func_273();
										iLocal_323 = 0;
										bLocal_326 = false;
									}
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_275))
							{
								if (MISC::GET_GAME_TIMER() <= iLocal_558 + 2000)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 1f);
								}
								if (ENTITY::GET_ENTITY_SPEED(iLocal_274) >= 0.3f)
								{
									fLocal_630 = 0f;
								}
								else
								{
									fLocal_630 = (fLocal_630 + (1f * SYSTEM::TIMESTEP()));
								}
								if ((fLocal_630 < 0.6f && !bLocal_326) || iLocal_497)
								{
									if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_275, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")) == 7 && func_798(1)) && MISC::GET_GAME_TIMER() >= iLocal_620 + 2000)
									{
										func_270();
										iLocal_620 = MISC::GET_GAME_TIMER();
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_275, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")) != 7 && MISC::GET_GAME_TIMER() >= iLocal_620 + 2000)
								{
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_631);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_631);
									if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, iLocal_274, 6f, 6f, 6f, false, false, 0))
									{
										TASK::TASK_GO_TO_ENTITY(0, iLocal_274, -1, 1.8f, 2f, 2f, 0);
									}
									else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, iLocal_274, 3f, 3f, 3f, false, false, 0))
									{
										TASK::TASK_GO_TO_ENTITY(0, iLocal_274, -1, 1.6f, 1f, 2f, 0);
									}
									TASK::TASK_PAUSE(0, 1000);
									TASK::TASK_PLAY_ANIM(0, func_205(0), "FRA0_IG_12_CHOP_WAITING_B", 4f, -2f, -1, 1, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_631);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_275, iLocal_631);
									iLocal_620 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_441)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 15f, 15f, 15f, false, false, 0))
							{
								iLocal_441 = func_251("FKN0_DRIVE", 0, 0, 0, 1);
							}
							else
							{
								iLocal_441 = 1;
							}
						}
						else
						{
							func_235(0, iLocal_460, 0, iLocal_460);
						}
						switch (iLocal_261)
						{
							case 0:
								if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(iLocal_274)) && !PED::IS_PED_INJURED(iLocal_275))
								{
									PED::SET_PED_GESTURE_GROUP(PLAYER::PLAYER_PED_ID(), "ANIM_GROUP_GESTURE_MISS_FRA0");
									PED::SET_PED_GESTURE_GROUP(iLocal_274, "ANIM_GROUP_GESTURE_MISS_FRA0");
									if (!iLocal_497)
									{
										if (fLocal_546 >= 10f)
										{
											TASK::CLEAR_PED_TASKS(iLocal_274);
											ENTITY::SET_ENTITY_COORDS(iLocal_274, -77.0374f, -1461.0315f, 31.12035f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_274, 46.7f);
											iLocal_497 = 1;
										}
									}
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_274, iLocal_279[0], 7f, 7f, 2f, false, true, 0) && !bLocal_326)
									{
										if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 3.6f, 3.6f, 4f, false, true, 0) && !func_994())
										{
											iLocal_458 = 1;
										}
										else
										{
											TASK::TASK_LOOK_AT_ENTITY(iLocal_274, iLocal_275, -1, 2048, 2);
											TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
											__LIB_0__.func_296();
											VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], true);
											if (HUD::DOES_BLIP_EXIST(iLocal_287))
											{
												HUD::REMOVE_BLIP(&iLocal_287);
											}
											iLocal_313 = 0;
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, -72.67596f, -1459.4102f, 31.11492f, 7f, 7f, 7f, false, false, 0))
											{
												iVar11 = 261;
											}
											else
											{
												iVar11 = 263;
											}
											TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_275, "hood12", 2, iVar11, -1);
											iLocal_619 = MISC::GET_GAME_TIMER() + 30000;
											iLocal_261 = 2;
										}
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, iLocal_274, 1.1f, 1.1f, 1.1f, false, false, 0))
									{
										PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, 1.01f);
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, iLocal_274, 1.8f, 1.8f, 1.8f, false, false, 0))
									{
										PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, 1.06f);
									}
									else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_275, iLocal_274, 7f, 7f, 7f, false, false, 0))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_275) >= 1f)
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_558 + 2000)
											{
												PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_275, 1.5f);
												PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, 1.06f);
											}
										}
									}
									else
									{
										PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, 1.1f);
									}
								}
								break;
							case 2:
								if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false) && !PED::IS_PED_INJURED(iLocal_274)) && !PED::IS_PED_INJURED(iLocal_275))
								{
									PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_274, 1f);
									PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_275, 1.15f);
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_275))
									{
										TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_275, 1f, false);
										TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iLocal_275, 0f, 0.2f, 0f);
									}
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_274, -79.15181f, -1454.3555f, 31.02351f, 2.5f, 2.5f, 2.5f, false, false, 0))
									{
										PED::SET_PED_RESET_FLAG(iLocal_274, 71, true);
										PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_274, false);
									}
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_275, -79.15181f, -1454.3555f, 31.02351f, 2.5f, 2.5f, 2.5f, false, false, 0))
									{
										PED::SET_PED_RESET_FLAG(iLocal_275, 71, true);
										PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_275, false);
									}
									bVar12 = false;
									if (MISC::GET_GAME_TIMER() >= iLocal_619)
									{
										bVar12 = true;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_274, -1689270312) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_275, -1689270312) == 7)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_274, -79.51687f, -1453.2769f, 31.12119f, 1f, 1f, 1f, false, false, 0) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_274, -79.0829f, -1453.5901f, 31.53415f, 1f, 1f, 1f, false, false, 0))
										{
											bVar12 = true;
										}
									}
									if (bVar12)
									{
										func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 0, 1, 1, 0, 0, 0, 0, 0);
										ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
										PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_274);
										TASK::TASK_CLEAR_LOOK_AT(iLocal_274);
										PED::SET_PED_INTO_VEHICLE(iLocal_274, iLocal_279[0], 0);
										iLocal_460 = 1;
										iLocal_516 = 1;
										iLocal_327 = 1;
										bLocal_489 = true;
										iLocal_261 = 4;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_274, -1689270312) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_275, -1689270312) == 7)
									{
										Local_529 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_274, -1.99f, 3.21f, -0.242f) };
										Local_531 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_274) + 36.655f) };
										Local_530 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_275, -2.596f, 1.97f, 0.332f) };
										Local_532 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_275) + 60.546f) };
										func_896(&Local_531, ENTITY::GET_ENTITY_ROTATION(iLocal_279[0], 2));
										func_896(&Local_532, ENTITY::GET_ENTITY_ROTATION(iLocal_279[0], 2));
										TASK::TASK_CLEAR_LOOK_AT(iLocal_274);
										iLocal_579 = PED::CREATE_SYNCHRONIZED_SCENE(Local_529, Local_531, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_579, false);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274, iLocal_579, func_205(1), "put_chop_in_van_lam", 8f, -8f, 5, 146, 1000f, 0);
										Local_235.f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Local_530, Local_532, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_275, Local_235.f_9, func_205(1), "put_chop_in_van_chop", 8f, -2f, 5, 146, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_235.f_9, false);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_275, iLocal_279[0], false);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_274, iLocal_279[0], false);
										ENTITY::PLAY_ENTITY_ANIM(iLocal_279[0], "put_chop_in_van_van", func_205(1), 8f, false, false, false, 0f, 262144);
										iLocal_261 = 3;
									}
								}
								break;
							case 3:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_279[0], func_205(1), "put_chop_in_van_van", 3))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
									{
										ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_279[0], func_205(1), "put_chop_in_van_van", PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_235.f_9));
									}
									fVar13 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_279[0], func_205(1), "put_chop_in_van_van");
									switch (iLocal_606)
									{
										case 0:
											if (fVar13 >= 0.113f)
											{
												AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(iLocal_279[0], 3);
												iLocal_606++;
											}
											break;
										case 1:
											if (fVar13 >= 0.68f)
											{
												iLocal_606++;
											}
											break;
										}
								}
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_235.f_9))
								{
									Var14 = { ENTITY::GET_ENTITY_COORDS(iLocal_279[0], true) };
									Var15 = { ENTITY::GET_ENTITY_ROTATION(iLocal_279[0], 2) };
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_579))
									{
										__LIB_26__.func_588(&Local_529, Var14, (1f / 3f));
										__LIB_26__.func_588(&Local_531, Var15, (20f / 3f));
										PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_579, Local_529, Local_531, 2);
									}
									__LIB_26__.func_588(&Local_530, Var14, (1f / 4f));
									__LIB_26__.func_588(&Local_532, Var15, (20f / 4f));
									PED::SET_SYNCHRONIZED_SCENE_ORIGIN(Local_235.f_9, Local_530, Local_532, 2);
									func_993();
								}
								else
								{
									func_786(iLocal_275, iLocal_279[0], &uLocal_268, &uLocal_544, 0, 0, 1, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_275, false, true, true, false, false, false, false, true);
									PED::SET_PED_CAN_RAGDOLL(iLocal_275, false);
									iLocal_261 = 4;
								}
								break;
							case 4:
								if (!bLocal_489)
								{
									func_993();
									PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_274, true);
								}
								break;
						}
						if (__LIB_0__.func_456(PLAYER::PLAYER_PED_ID(), iLocal_279[0]) || iLocal_261 > 2)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], false);
						}
						if (!iLocal_460)
						{
							if (iLocal_261 == 4)
							{
								if (!PED::IS_PED_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399()))
								{
									if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_274, iLocal_279[0], 7.5f, 7.5f, 7.5f, false, false, 0) || ((iLocal_461 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_274, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7) && MISC::GET_GAME_TIMER() >= iLocal_618 + 1000))
									{
										TASK::CLEAR_PED_TASKS(iLocal_274);
										TASK::TASK_LOOK_AT_ENTITY(iLocal_274, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
										PED::SET_PED_AS_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399());
										iLocal_460 = 1;
									}
								}
								else
								{
									iLocal_460 = 1;
								}
							}
						}
						if (iLocal_261 > 0)
						{
							if (!iLocal_327)
							{
								if (!bLocal_309)
								{
									if (iLocal_555 > 0)
									{
										if (iLocal_261 >= 3 && iLocal_261 < 4)
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_274, 15f, 15f, 15f, false, false, 0))
											{
												bVar16 = true;
												if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_279[0], func_205(1), "put_chop_in_van_van", 3))
												{
													if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_279[0], func_205(1), "put_chop_in_van_van") >= 0.34f)
													{
														bVar16 = false;
													}
												}
												if (bVar16)
												{
													iLocal_327 = func_251("FKN0_GDDOG", 1, 0, 0, !HUD::IS_MESSAGE_BEING_DISPLAYED());
												}
												else
												{
													iLocal_327 = 1;
												}
											}
											else
											{
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							if (iLocal_261 >= 3)
							{
								if (!iLocal_516)
								{
									bVar17 = false;
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_279[0], func_205(1), "put_chop_in_van_van", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_279[0], func_205(1), "put_chop_in_van_van") >= 0.885f)
										{
											bVar17 = true;
										}
									}
									if (bVar17)
									{
										ENTITY::STOP_ENTITY_ANIM(iLocal_279[0], "put_chop_in_van_van", func_205(1), -1000f);
										VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 2, true);
										VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_279[0], 3, true);
										iLocal_516 = 1;
									}
								}
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_274, iLocal_279[0]))
							{
								if (PED::IS_PED_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399()))
								{
									PED::REMOVE_PED_FROM_GROUP(iLocal_274);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_274, 3, false);
								}
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279[0]) && PED::IS_PED_IN_VEHICLE(iLocal_274, iLocal_279[0], false))
							{
								if (iLocal_261 == 4 && !__LIB_0__.func_75())
								{
									if (func_210())
									{
										if (!PED::IS_PED_INJURED(iLocal_275))
										{
											PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_275, true);
										}
										if (!PED::IS_PED_INJURED(iLocal_274))
										{
											PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_274, true);
										}
										func_45(0);
										func_52(1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_274, 3, false);
										func_740(3);
										bLocal_312 = false;
										iLocal_313 = 0;
										iLocal_310 = 0;
										iLocal_328 = 1;
										iLocal_557 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
										iLocal_555 = 2;
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
										PLAYER::SET_MAX_WANTED_LEVEL(5);
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
		func_989();
	}
}

void func_989()//Position - 0x99B7C
{
	int iVar0;
	int iVar1;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_193)
	{
		case 0:
			iLocal_553 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_274))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_274, "Lamar", 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274, true);
			}
			if (!PED::IS_PED_INJURED(Local_234.f_0))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_234.f_0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_234.f_0, "Ballas_OG", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_276))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_276, "Hoodrat_girl", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_279[1], "BallasOG_Bike", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_193 = 1;
			break;
		case 1:
			if (!iLocal_308)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_49();
					iVar0 = func_184(PLAYER::PLAYER_PED_ID(), 14, 0);
					if (__LIB_6__.func_779(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, iVar0, -1))
					{
						func_180(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(iLocal_279[0]);
					}
					MISC::CLEAR_AREA(369.24f, 344.64f, 102.08f, 27f, true, false, false, false);
					MISC::CLEAR_AREA(363.57892f, 322.47748f, 102.70776f, 16f, true, false, false, false);
					MISC::CLEAR_AREA_OF_VEHICLES(340.95465f, 247.10138f, 102.75685f, 92f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(364.9471f, 313.03796f, 102.6392f, 114f, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(370.34372f, 343.42828f, 102.09016f, 52f, 0);
					FIRE::STOP_FIRE_IN_RANGE(370.34372f, 343.42828f, 102.09016f, 52f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(370.34372f, 343.42828f, 102.09016f, 52f);
					func_45(1);
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_282[iVar1]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_282[iVar1]));
						}
						iVar1++;
					}
					func_204(16);
					func_204(17);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(iLocal_279[0]);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_279[0], "OFF");
						func_44();
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_279[0], false);
						ENTITY::SET_ENTITY_COORDS(iLocal_279[0], func_84(6), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_279[0], 289.94f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_279[0], 5f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279[0], true, true, false);
						__LIB_11__.func_867(iLocal_279[0]);
					}
					if (bLocal_305)
					{
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_305 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_308 = 1;
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 45231)
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
			}
			if (!bLocal_500)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 37400)
				{
					bLocal_500 = __LIB_11__.func_828("FRA0_MISSION_START");
				}
			}
			if (!bLocal_501)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 42200)
				{
					bLocal_501 = __LIB_11__.func_828("FRA0_SPEED_OFF");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", joaat("IG_LamarDavis")))
			{
				func_397(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("BallasOG_Bike", 0))
			{
				func_379();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ballas_OG", 0))
			{
				func_991();
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
				while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					SYSTEM::WAIT(0);
				}
				func_991();
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 371.0984f, 359.33514f, 101.60266f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 170f);
				STREAMING::LOAD_SCENE(371.0984f, 359.33514f, 101.60266f);
				SYSTEM::WAIT(0);
				RECORDING::REPLAY_STOP_EVENT();
				func_397(1);
				func_379();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (!bLocal_500)
				{
					bLocal_500 = __LIB_11__.func_828("FRA0_CHASE_RESTART");
				}
				func_268(1, 0, 1, 1, 0, 1, 1, 1);
				func_990(1);
				func_7(0, 1, -1, 1, 1, 1, 1, 1);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					RECORDING::REPLAY_STOP_EVENT();
					func_7(0, 1, -1, 0, 1, 1, 1, 1);
					func_268(1, 0, 1, 1, 0, 1, 1, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					func_990(0);
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 2000, 0f, true, false);
				}
			}
			break;
		case 2:
			break;
	}
}

void func_990(bool bParam0)//Position - 0x9A023
{
	if (bParam0)
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_84(11), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 164.8f);
	}
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Sprint"), bParam0, 1, false);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	else
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), bParam0, 1, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 2000, 0f, true, false);
	}
}

void func_991()//Position - 0x9A096
{
	if (!PED::IS_PED_INJURED(Local_234.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
	{
		PED::SET_PED_INTO_VEHICLE(Local_234.f_0, iLocal_279[1], -1);
	}
}

void func_993()//Position - 0x9A0F7
{
	bool bVar0;
	if (!iLocal_461)
	{
		if (!PED::IS_PED_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399()))
		{
			bVar0 = false;
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_274, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_274);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_274, iLocal_279[0], true);
				TASK::TASK_ENTER_VEHICLE(iLocal_274, iLocal_279[0], 20000, 0, 1f, 1, 0);
				iLocal_618 = MISC::GET_GAME_TIMER();
				iLocal_461 = 1;
			}
		}
	}
}

bool func_994()//Position - 0x9A164
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -81.93492f, -1453.0602f, 30.99545f, -73.88771f, -1467.5985f, 34.96272f, 10.5f, false, true, 0);
}

void func_995()//Position - 0x9A19A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				iVar1 = 16;
				Var2 = { 343.02f, 333.05f, 104.87f };
				fVar3 = -138.08f;
				break;
			case 1:
				iVar1 = 17;
				Var2 = { 338.54f, 340.18f, 105.06f };
				fVar3 = -15.46f;
				break;
		}
		iLocal_282[iVar0] = VEHICLE::CREATE_VEHICLE(func_76(iVar1), Var2, fVar3, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_282[iVar0], 5f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_282[iVar0], 3);
		iVar0++;
	}
}

void func_996()//Position - 0x9A240
{
	if (!iLocal_444 && !iLocal_487)
	{
		if (!__LIB_23__.func_159())
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_558 + 5000)
			{
				if (func_802("FC_DOWNLHLP", 0, -1))
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_487 = 1;
					}
					iLocal_444 = 1;
				}
			}
		}
		else
		{
			iLocal_444 = 1;
		}
	}
}

void func_998()//Position - 0x9A2FE
{
	func_1000();
	switch (iLocal_188)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_85(0);
				iLocal_304 = 1;
				func_1059();
			}
			break;
	}
}

void func_1000()//Position - 0x9A365
{
	float fVar0;
	struct<3> Var1;
	if (!iLocal_306)
	{
		if (PED::IS_PED_INJURED(iLocal_274))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_287))
			{
				HUD::REMOVE_BLIP(&iLocal_287);
			}
			if (__LIB_0__.func_405("FC_FOLLAM", 0, 0))
			{
				__LIB_26__.func_550(1, 1, 0, 0);
			}
			func_809(1);
		}
		else if (iLocal_189 == 0)
		{
			if (!iLocal_328)
			{
				if (!bLocal_305)
				{
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_274, 0) > 100f)
					{
						func_809(7);
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_275))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_291))
			{
				HUD::REMOVE_BLIP(&iLocal_291);
			}
			if (__LIB_0__.func_405("FC_GOCHOP", 0, 0) || __LIB_0__.func_405("FC_CLOSER", 0, 0))
			{
				__LIB_26__.func_550(1, 1, 0, 0);
			}
			func_809(2);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
		{
			if (PED::IS_PED_INJURED(Local_234.f_0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_288))
				{
					HUD::REMOVE_BLIP(&iLocal_288);
				}
				if (__LIB_0__.func_405("FC_CHASE", 0, 0))
				{
					__LIB_26__.func_550(1, 1, 0, 0);
				}
				if (iLocal_189 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279[1]);
						}
					}
				}
				func_809(4);
			}
			else if (iLocal_189 == 2)
			{
				if (!PED::IS_TRACKED_PED_VISIBLE(Local_234.f_0))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if ((Var1.f_0 >= 487.3f && Var1.f_1 <= -614f) && Var1.f_2 <= 27.2f)
					{
						fVar0 = 70f;
					}
					else
					{
						fVar0 = 90f;
					}
				}
				else
				{
					fVar0 = 160f;
				}
				__LIB_10__.func_618(iLocal_288, Local_234.f_0, fVar0, 1061158912, 0);
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_234.f_0, 0) >= fVar0 && Local_238.f_0 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_288))
					{
						HUD::REMOVE_BLIP(&iLocal_288);
					}
					func_809(3);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], true))
			{
				func_809(5);
			}
			else if (((iLocal_189 == 0 && iLocal_328) || iLocal_189 == 1) || iLocal_189 == 4)
			{
				if (!bLocal_305)
				{
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_279[0], 0) > 100f)
					{
						func_809(8);
					}
				}
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_279[0], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_279[0], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_279[0], 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_279[0], 0, 7000))
				{
					func_809(10);
				}
			}
		}
	}
}

void func_1001(bool bParam0)//Position - 0x9A5FA
{
	int iVar0;
	switch (iLocal_191)
	{
		case 0:
			if (func_1002() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_189 + 1;
				}
				func_779(iVar0, 0, 1);
				func_774(iVar0, 0, 1);
				func_769(iVar0, 0, 1);
				func_763(iVar0, 0, 1);
				func_758(iVar0, 0, 1);
				func_753(iVar0, 0, 1);
				func_747(iVar0, 0, 1);
				func_736(iVar0, 0, 1);
				func_735(0);
				iLocal_191 = 1;
			}
			break;
		case 1:
			if ((((((((func_780() && func_775()) && func_770()) && func_764()) && func_759()) && func_754()) && func_748()) && func_737()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_191 = 2;
			}
			break;
	}
}

int func_1002()//Position - 0x9A6DA
{
	switch (iLocal_189)
	{
		case 0:
			if (iLocal_306)
			{
				return 1;
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279[1]))
				{
				}
				else
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iLocal_244 >= 8)
			{
				return 1;
			}
			break;
		case 3:
			if (bLocal_401)
			{
				return 1;
			}
			break;
			break;
		case 4:
			return 0;
			break;
	}
	return 0;
}

int func_1003()//Position - 0x9A761
{
	int iVar0;
	switch (iLocal_187)
	{
		case 0:
			PED::SET_PED_NON_CREATION_AREA(-61.06803f, -1462.8933f, 11.02068f, 5.86775f, -1444.1488f, 49.5516f);
			__LIB_26__.func_550(1, 1, 1, 0);
			func_1058(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			iLocal_242 = __LIB_11__.func_826();
			func_1();
			if (__LIB_11__.func_808(2))
			{
				__LIB_11__.func_811(2, 0);
				iLocal_517 = 1;
			}
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 30f);
			func_1055(&Local_194, 0, 1);
			Local_238.f_1 = 0;
			Local_238.f_2 = 1;
			Global_113330 = 1;
			Local_238.f_8 = 1;
			iLocal_810 = PED::ADD_SCENARIO_BLOCKING_AREA(480.4f, -776.7f, -100f, 569.3f, -610.7f, 76f, false, true, true, true);
			iLocal_811 = PED::ADD_SCENARIO_BLOCKING_AREA(-225.51924f, -1513.0458f, -100f, -218.96721f, -1507.1919f, 100.4621f, false, true, true, true);
			iLocal_812 = PED::ADD_SCENARIO_BLOCKING_AREA(-91.34664f, -1457.3846f, 0f, -73.12756f, -1381.66f, 100.3357f, false, true, true, true);
			iLocal_813 = PED::ADD_SCENARIO_BLOCKING_AREA(449.96005f, -698.9451f, 0.66434f, 467.13477f, -680.6246f, 100.3357f, false, true, true, true);
			iLocal_814 = PED::ADD_SCENARIO_BLOCKING_AREA(454.75815f, -817.2333f, 0.7081f, 459.41602f, -685.3982f, 56.66263f, false, true, true, true);
			if (!__LIB_0__.func_294())
			{
				iLocal_551 = 0;
			}
			else
			{
				iLocal_551 = Global_113386.f_9085.f_330[40 /*6*/].f_1 + 1;
			}
			iLocal_187 = 1;
			break;
		case 1:
			if (!__LIB_0__.func_294())
			{
				__LIB_12__.func_101();
				if (BitTest(Global_96938.f_358, 4))
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(func_1054(), 13, 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(func_1054(), 14, 8);
				}
				iLocal_187 = 2;
			}
			else
			{
				CUTSCENE::STOP_CUTSCENE(false);
				func_1048();
			}
			break;
		case 2:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (__LIB_42__.func_64(40, &Local_802, 0, 0, 0, 0, 0))
			{
				if (__LIB_0__.func_90())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, func_76(0), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_274, "Lamar", 2, func_76(1), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_275, "Chop", 2, func_76(3), 0);
					__LIB_0__.func_372(40);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_187 = 3;
				}
			}
			else if (!iLocal_449)
			{
				if (CAM::DOES_CAM_EXIST(Local_802.f_4))
				{
					if (STREAMING::STREAMVOL_IS_VALID(iLocal_816))
					{
						STREAMING::STREAMVOL_DELETE(iLocal_816);
					}
					iLocal_816 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-13.6f, -1449.2f, 31.1f, __LIB_2__.func_162(-0.7f, 0.8f, 4.3f), 30f, 12, 127);
					bLocal_470 = true;
					func_1012();
					iLocal_449 = 1;
				}
			}
			break;
		case 3:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			if (!iLocal_308)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (bLocal_470)
					{
						__LIB_32__.func_805(&Local_802, 0, 0, 2000, 1, 1, 0, 1);
					}
					func_49();
					func_735(0);
					VEHICLE::DELETE_ALL_TRAINS();
					if (__LIB_20__.func_739(0f, 0f, 0f, 1))
					{
						iVar0 = __LIB_10__.func_691();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("speedo"))
							{
								if (VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iVar0) == 5)
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
									VEHICLE::DELETE_VEHICLE(&iVar0);
								}
							}
						}
						__LIB_42__.func_697(func_84(30), 95.68f, 0, 145);
					}
					func_1012();
					MISC::CLEAR_AREA_OF_PROJECTILES(-14.20779f, -1448.7261f, 30.01975f, 25f, 0);
					FIRE::STOP_FIRE_IN_RANGE(-14.20779f, -1448.7261f, 30.01975f, 25f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-14.20779f, -1448.7261f, 30.01975f, 25f);
					MISC::CLEAR_AREA_OF_OBJECTS(-14.20779f, -1448.7261f, 30.01975f, 25f, 2);
					func_85(0);
					func_47(0);
					if (STREAMING::STREAMVOL_IS_VALID(iLocal_816))
					{
						STREAMING::STREAMVOL_DELETE(iLocal_816);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_308 = 1;
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				bLocal_307 = true;
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 55554 && !bLocal_307)
			{
				func_996();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_274))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0)))
				{
					iLocal_274 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_275))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chop", 0)))
				{
					iLocal_275 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chop", 0));
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 40000)
			{
				func_1001(1);
			}
			if (!iLocal_318)
			{
				if (iLocal_191 == 2)
				{
					if (!iLocal_319)
					{
						func_1004();
						iLocal_319 = 1;
					}
					else
					{
						func_483(0);
						iLocal_318 = 1;
					}
				}
			}
			if (!bLocal_307)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_274))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_274, func_84(12), true, false, false, true);
					}
					func_272();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chop", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_275))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_275, func_84(15), true, false, false, true);
					}
					func_269();
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (bLocal_307)
				{
					func_471();
				}
				func_271();
			}
			else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::DOES_CAM_EXIST(Local_802.f_4))
				{
					CAM::DESTROY_CAM(Local_802.f_4, false);
				}
				RECORDING::REPLAY_STOP_EVENT();
				bLocal_481 = bLocal_307;
				func_7(0, 1, -1, 0, 1, 0, 1, 1);
				func_1048();
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
			break;
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_1004()//Position - 0x9ACEF
{
	__LIB_12__.func_2(func_84(1));
	__LIB_12__.func_2(func_84(0));
}

void func_1012()//Position - 0x9B082
{
	__LIB_32__.func_796(-42.555f, -1458.951f, 28.994f, -43.144f, -1452.933f, 35.456f, 62f, func_84(30), 95.68f, __LIB_9__.func_996(), 1, 0, 1, 0, 0);
	__LIB_32__.func_796(-19.634f, -1431.664f, 28.812f, -18.772f, -1456.846f, 35.471f, 30f, func_84(30), 95.68f, __LIB_9__.func_996(), 1, 0, 1, 0, 0);
	__LIB_32__.func_796(-75.69051f, -1460.3955f, 31.11074f, -80.50679f, -1452.1147f, 30.9896f, 7.15f, -64.4662f, -1463.3616f, 31.6336f, 112.38f, __LIB_9__.func_996(), 1, 0, 1, 0, 0);
}

void func_1048()//Position - 0x9DCDC
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__.func_294())
		{
			if (!bLocal_481)
			{
				func_268(0, 0, 1, 1, 1, 1, 0, 1);
			}
			else
			{
				func_1004();
				func_268(0, 1, 1, 1, 0, 0, 1, 1);
			}
		}
		else if (func_1050())
		{
		}
		else
		{
			iVar0 = __LIB_0__.func_315();
			if (iVar0 == 0)
			{
				func_471();
			}
			func_268(iVar0, 1, 1, 1, 0, 1, 1, 1);
		}
		if (!bLocal_305)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	iLocal_187 = 4;
}

int func_1050()//Position - 0x9DD9F
{
	int iVar0;
	if (__LIB_0__.func_294())
	{
		if (Global_94618 == 1)
		{
			switch (__LIB_0__.func_315())
			{
				case 0:
					iVar0 = 0;
					bLocal_305 = true;
					break;
				case 1:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 3;
					break;
				case 3:
					iVar0 = 3;
					bLocal_305 = true;
					break;
				case 4:
					iVar0 = 4;
					bLocal_305 = true;
					break;
			}
			func_1051();
			func_268(iVar0, 1, 1, 1, 0, 1, 1, 0);
			if (!bLocal_305)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
		}
	}
	return 0;
}

void func_1051()//Position - 0x9DE2E
{
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	SYSTEM::WAIT(1000);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	__LIB_9__.func_981(&uLocal_28, 0, 0);
	func_911(1, 1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
	func_1052();
}

void func_1052()//Position - 0x9DEB8
{
	int iVar0;
	int iVar1;
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	__LIB_11__.func_805();
	func_29(&Local_238, &Local_194, 0, 1, 1, 1, 0, 3000);
	__LIB_0__.func_402(0, -1);
	func_1053();
	PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_816))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_816);
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_584);
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	func_27(1);
	__LIB_36__.func_664(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_194[iVar0]))
		{
			PED::DELETE_PED(&(Local_194[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
	{
		PED::DELETE_PED(&Local_234);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_278)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_278[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
	{
		PED::DELETE_PED(&iLocal_274);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275))
	{
		PED::DELETE_PED(&iLocal_275);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
	{
		PED::DELETE_PED(&iLocal_276);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		PED::DELETE_PED(&iLocal_277);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_279[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_279[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_280[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_281[iVar0]))
		{
			VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_281[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_282[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_282[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_283);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_245[iVar0 /*5*/]))
		{
			PED::DELETE_PED(&(Local_245[iVar0 /*5*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/].f_1));
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_246[iVar0 /*12*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		OBJECT::DELETE_OBJECT(&iLocal_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
	{
		OBJECT::DELETE_OBJECT(&iLocal_285);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_292))
	{
		CAM::DESTROY_CAM(iLocal_292, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_294))
	{
		CAM::DESTROY_CAM(iLocal_294, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_295))
	{
		CAM::DESTROY_CAM(iLocal_295, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_238.f_4))
	{
		CAM::DESTROY_CAM(Local_238.f_4, false);
	}
	MISC::CLEAR_AREA(func_84(0), 10000f, true, false, false, false);
}

void func_1053()//Position - 0x9E1B5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_45(iVar0);
		iVar0++;
	}
}

char* func_1054()//Position - 0x9E1D6
{
	return "fra_0_int";
}

void func_1055(var uParam0, int iParam1, int iParam2)//Position - 0x9E1E3
{
	if (iParam1 != 4)
	{
		uParam0->f_24[iParam1] = iParam2;
	}
}

void func_1058(bool bParam0)//Position - 0x9E26C
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_76(7), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_76(8), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_76(16), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_76(17), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_76(2), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_76(1), bParam0);
	if (bParam0 == 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), bParam0);
	}
}

void func_1059()//Position - 0x9E2D5
{
	int iVar0;
	int iVar1;
	AUDIO::TRIGGER_MUSIC_EVENT("FRA0_MISSION_FAIL");
	__LIB_26__.func_550(1, 1, 1, 0);
	func_33(&Local_238, 1);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChopVision"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("ChopVision");
	}
	PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	func_1053();
	GRAPHICS::SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(1f);
	__LIB_6__.func_771();
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	__LIB_9__.func_485(0, 0);
	__LIB_9__.func_485(2, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_816))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_816);
	}
	__LIB_36__.func_664(0);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	func_27(1);
	CUTSCENE::REMOVE_CUTSCENE();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_389(1);
	func_390(0, 0);
	func_1058(0);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_584);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_810, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_811, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_812, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_813, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_814, false);
	__LIB_11__.func_810();
	__LIB_32__.func_762(0);
	Global_113330 = 0;
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[0], false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[0], true);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_279[0], false);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_279[0], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_279[0], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_279[0], true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279[0], false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_279[0], true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_279[1], true);
		ENTITY::SET_ENTITY_PROOFS(iLocal_279[1], false, false, false, false, false, false, false, false);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_279[1], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_279[1], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_279[1], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_279[1], false);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[4], false))
	{
		AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_280[4], 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_274))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_274, __LIB_0__.func_399()))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_274);
		}
	}
	AUDIO::STOP_SOUND(iLocal_624);
	AUDIO::RELEASE_SOUND_ID(iLocal_624);
	if (iLocal_304)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			OBJECT::DELETE_OBJECT(&iLocal_284);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
		{
			PED::DELETE_PED(&iLocal_274);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
		{
			PED::DELETE_PED(&Local_234);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 7)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_275))
	{
		TASK::CLEAR_PED_TASKS(iLocal_275);
	}
	if (!PED::IS_PED_INJURED(iLocal_277))
	{
		TASK::CLEAR_PED_TASKS(iLocal_277);
	}
	if (!PED::IS_PED_INJURED(Local_234.f_0))
	{
		TASK::CLEAR_PED_TASKS(Local_234.f_0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_294))
	{
		CAM::DESTROY_CAM(iLocal_294, false);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/]))
			{
				ENTITY::DETACH_ENTITY(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_246[iVar0 /*12*/].f_3[iVar1 /*4*/], true);
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_281[iVar0]))
		{
			if (iLocal_304)
			{
				VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_281[iVar0]));
			}
			else
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(iLocal_281[iVar0]), true);
			}
		}
		iVar0++;
	}
	func_1060();
	func_911(0, 1);
	if (iLocal_517)
	{
		__LIB_11__.func_811(2, 1);
	}
	__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1060()//Position - 0x9E6BD
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
	__LIB_8__.func_770(0);
	__LIB_9__.func_981(&uLocal_28, 0, 0);
}

void func_1061()//Position - 0x9E715
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_812(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_546();
		}
	}
}

