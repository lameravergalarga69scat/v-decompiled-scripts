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
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
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
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	int* iLocal_101 = NULL;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 3;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 16;
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
	int iLocal_275 = 0;
	struct<61> Local_276 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_277 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	struct<55> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180000, 3, 0, 0, 0, 2, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_281[3];
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	var uLocal_284 = 0;
	struct<21> Local_285 = { 2055493265, 1065353216, 1065353216, 1065353216, 1033476506, 1033476506, 0, 1056964608, 1045220557, 0, 1092616192, 1093664768, 1067450368, 1074790400, 1073741824, 1075838976, 99, 100, -1, -1, 1056964608 } ;
	struct<567> Local_286 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int* iLocal_301 = NULL;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<8> Local_308[10];
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	bool bLocal_312 = 0;
	int iLocal_313 = 0;
	bool bLocal_314 = 0;
	bool bLocal_315 = 0;
	int iLocal_316 = 0;
	float fLocal_317 = 0f;
	float fLocal_318 = 0f;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	struct<17> Local_321[6];
	int iLocal_322 = 0;
	struct<13> Local_323[10];
	struct<20> Local_324[5];
	struct<3> Local_325 = { 0, 0, 0 } ;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	int iLocal_333[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	float fLocal_342 = 0f;
	float fLocal_343 = 0f;
	float fLocal_344 = 0f;
	float fLocal_345 = 0f;
	float fLocal_346 = 0f;
	float fLocal_347 = 0f;
	struct<44> Local_348[8];
	struct<215> Local_349 = { 0, 0, 1000, 3000, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1110651699, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<33> Local_350 = { 0, 10000, 20000, 0, 0, 1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_351 = 1114636288;
	var uLocal_352 = 1123024896;
	var uLocal_353 = 1;
	struct<8> Local_354 = { 0, 2, 1, 250, 1000, 0, 1101004800, 1114636288 } ;
	var uLocal_355 = 1063675494;
	struct<9> Local_356 = { 0, 2, 1, 250, 1000, 0, 1101004800, 1114636288, 1063675494 } ;
	struct<6> Local_357 = { 0, 1095237632, 1000, 3000, 0, 0 } ;
	var uLocal_358 = 3;
	var uLocal_359 = 0;
	var uLocal_360 = 1120403456;
	bool bLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	struct<3> Local_364 = { 0, 0, 0 } ;
	float fLocal_365 = 0f;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	struct<8> Local_371 = { 2, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380[4] = { 0, 0, 0, 0 };
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 4;
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
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	char* sLocal_409 = NULL;
	char* sLocal_410[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_411[5] = { 0, 0, 0, 0, 0 };
	int iLocal_412[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	bool bLocal_419 = 0;
	var uLocal_420 = 16;
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
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	bool bLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	struct<3> Local_597 = { 0, 0, 0 } ;
	struct<3> Local_598 = { 0, 0, 0 } ;
	bool bLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	struct<61> Local_602 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<61> Local_603 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_84 = 1;
	iLocal_85 = 65;
	iLocal_86 = 49;
	iLocal_87 = 64;
	Local_99 = { 1180.969f, -402.381f, 67.2f };
	Local_100 = { 5f, 0f, 57.33f };
	iLocal_102 = -1;
	iLocal_310 = AUDIO::GET_SOUND_ID();
	fLocal_317 = 1.5f;
	fLocal_318 = 0.5f;
	fLocal_319 = 0.5f;
	fLocal_320 = 0.1f;
	iLocal_338 = Local_323.f_0;
	fLocal_342 = 30f;
	fLocal_343 = 8f;
	fLocal_344 = 10f;
	fLocal_365 = 200f;
	iLocal_367 = 1;
	iLocal_373 = 10000;
	iLocal_378 = 1;
	iLocal_381 = 255;
	bLocal_419 = true;
	iLocal_586 = 5;
	iLocal_587 = 4000;
	iLocal_588 = 8000;
	iLocal_590 = 1;
	iLocal_592 = 750;
	iLocal_593 = 1500;
	bLocal_594 = true;
	Local_602 = { ScriptParam_603 };
	__LIB_10__.func_700(&Local_602, 0, 0);
	MISC::SET_MISSION_FLAG(true);
	__LIB_42__.func_15(78);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		__LIB_41__.func_463(1);
		func_586(1);
	}
	__LIB_40__.func_715(&Local_602);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_R2", 0);
		__LIB_40__.func_690(Local_602.f_9, 0, 1, 0, 0, 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x17B
{
	iLocal_302++;
	iLocal_368 = MISC::GET_GAME_TIMER();
	if ((iLocal_302 % 10) == 0)
	{
		__LIB_30__.func_806();
	}
	__LIB_10__.func_713();
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (__LIB_30__.func_805())
	{
		func_549();
	}
	else
	{
		func_135();
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	if (iLocal_378 == 4)
	{
		__LIB_42__.func_717();
		__LIB_37__.func_533();
		__LIB_30__.func_773();
		__LIB_39__.func_538();
		__LIB_42__.func_716(&Local_323);
		__LIB_41__.func_459();
		__LIB_42__.func_561(&Local_325);
		__LIB_37__.func_523();
		__LIB_42__.func_16();
		iLocal_336 = __LIB_35__.func_132(&Local_323);
		iLocal_337 = __LIB_30__.func_764();
		if (__LIB_30__.func_763())
		{
			if (iLocal_368 > (Local_277.f_13 + iLocal_341))
			{
				__LIB_41__.func_457(&Local_350);
			}
			if (iLocal_368 > (Local_277.f_13 + iLocal_340))
			{
				__LIB_40__.func_709(&Local_354);
				__LIB_40__.func_709(&Local_356);
				__LIB_41__.func_456(&Local_357);
				__LIB_42__.func_14(&Local_349);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_366))
		{
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_364, 0) > fLocal_365)
			{
				iLocal_367 = 0;
				Local_356.f_0 = 1;
				iLocal_366 = HUD::ADD_BLIP_FOR_COORD(Local_364);
				if (HUD::DOES_BLIP_EXIST(iLocal_366))
				{
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_366, false);
				}
			}
		}
		else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_364, 0) < (fLocal_365 - 10f))
		{
			Local_356.f_0 = 0;
			iLocal_367 = 1;
			__LIB_0__.func_523(&iLocal_366);
			iLocal_366 = 0;
		}
		if (Local_277.f_11 > 0)
		{
			if (iLocal_368 > Local_277.f_11 + 3500)
			{
				if (Local_277.f_16 > 1)
				{
					if (Local_277.f_16 > Local_277.f_17)
					{
						Local_277.f_17 = Local_277.f_16;
						if (bLocal_361)
						{
						}
					}
					else if (bLocal_361)
					{
					}
				}
				Local_277.f_16 = 0;
			}
		}
	}
}

void func_135()//Position - 0x6526
{
	int iVar0;
	switch (iLocal_378)
	{
		case 0:
			__LIB_24__.func_930();
			iLocal_378 = 1;
			iLocal_309 = 0;
			break;
		case 1:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			__LIB_24__.func_930();
			if (__LIB_30__.func_803())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				__LIB_35__.func_148(1);
				__LIB_11__.func_728(Local_280.f_43, Local_280.f_42, 0, 0);
				__LIB_35__.func_139(&Local_276);
				HUD::CLEAR_HELP(true);
				HUD::HIDE_HELP_TEXT_THIS_FRAME();
				iLocal_378 = 2;
				__LIB_20__.func_262(&Local_276, 1);
				__LIB_30__.func_797(&Local_277);
				__LIB_10__.func_708(0, 0, 1, 1);
				__LIB_42__.func_718();
				func_267(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 0, 0, 1, 1, 1, 1, 1, 1, 1);
				__LIB_32__.func_574(1, 1, 1, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 240f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 240f, false, false, false, false, false, false, 0);
				__LIB_10__.func_707(&iLocal_307, 0);
				Global_112473[Local_276.f_0 /*10*/] = 1;
				return;
			}
			if (func_227())
			{
				iLocal_378 = 2;
			}
			break;
		case 2:
			iLocal_381 = 255;
			__LIB_30__.func_797(&Local_277);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_375, "SHOW_SHARD_CENTERED_MP_MESSAGE");
			__LIB_0__.func_478("RAMPAGE");
			__LIB_0__.func_478("");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_382 = MISC::GET_GAME_TIMER() + 3500;
			iLocal_378 = 3;
			if (Local_280.f_54 > 0)
			{
				MISC::SET_RANDOM_SEED(Local_280.f_54);
			}
			break;
		case 3:
			__LIB_30__.func_797(&Local_277);
			if (__LIB_30__.func_803())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
				}
				if (CAM::IS_SCREEN_FADING_IN())
				{
				}
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
				__LIB_40__.func_720(1);
				__LIB_40__.func_719();
			}
			iLocal_378 = 4;
			iLocal_303 = 0;
			iLocal_362 = 0;
			Local_277.f_13 = MISC::GET_GAME_TIMER();
			Local_277.f_15 = (Local_277.f_13 + Local_280.f_16);
			__LIB_6__.func_775(0, -1, 1);
			__LIB_0__.func_84(500, 0);
			__LIB_30__.func_789();
			__LIB_35__.func_136(&Local_323);
			__LIB_30__.func_788();
			__LIB_30__.func_787();
			__LIB_30__.func_786();
			if (__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_30__.func_785();
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
				PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), Local_285.f_1);
				PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), Local_285.f_2);
				if (!bLocal_413)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_11, 4f, -4f, -1, 0, 0f, false, false, false);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iLocal_370))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_370))
				{
					AUDIO::START_AUDIO_SCENE(iLocal_370);
				}
			}
			HUD::BEGIN_TEXT_COMMAND_PRINT("TR_ROBJ1");
			HUD::ADD_TEXT_COMPONENT_INTEGER(Local_280.f_53);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(Local_280.f_2);
			HUD::END_TEXT_COMMAND_PRINT(7500, true);
			if (AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
			{
				AUDIO::PLAY_STREAM_FRONTEND();
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_11, 3))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (!iLocal_601)
			{
				if (MISC::GET_GAME_TIMER() > Local_277.f_13 + 2500)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_375, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_601 = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > Local_277.f_13 + 3000)
			{
				if (iLocal_363 == 0)
				{
					if (Local_280.f_0 == 77)
					{
						__LIB_0__.func_151("RAMP_WPN_CHNGE" /* GXT: A choice of weapons are available. Hold ~INPUT_SELECT_WEAPON~ to access the weapon wheel. */, -1);
						iLocal_363 = 1;
					}
				}
				if (iLocal_375 != 0)
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_375);
					iLocal_375 = 0;
				}
				return;
			}
			break;
		case 5:
			iLocal_381 = 255;
			Local_277.f_14 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_STOP");
			AUDIO::STOP_SOUND(iLocal_310);
			__LIB_0__.func_523(&iLocal_366);
			__LIB_30__.func_771(&Local_325, 1);
			__LIB_30__.func_784();
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f);
			func_267(0f, 0f, 0f, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1);
			__LIB_35__.func_147(PLAYER::PLAYER_PED_ID(), 10f, 0, 1101004800);
			__LIB_40__.func_714(&Local_324);
			__LIB_37__.func_525(&Local_323);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::GIVE_PLAYER_RAGDOLL_CONTROL(PLAYER::PLAYER_ID(), true);
			}
			if (Local_280.f_50)
			{
				__LIB_37__.func_524(2000);
				AUDIO::STOP_STREAM();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_PASSED_MASTER", 0, true);
			}
			else
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iLocal_370))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_370))
				{
					AUDIO::STOP_AUDIO_SCENE(iLocal_370);
					iLocal_370 = 0;
				}
			}
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == Local_280.f_17[0] || ((iVar0 == Local_280.f_17[1] && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
						{
							bLocal_312 = true;
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_13, 4f, -8f, -1, 0, 0f, false, false, false);
						}
						else
						{
							bLocal_312 = false;
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_12, 4f, -8f, -1, 0, 0f, false, false, false);
						}
						if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
					else
					{
						iLocal_301 = __LIB_30__.func_747(iVar0, 0);
						if (__LIB_0__.func_524(iLocal_301))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_301))
							{
								ENTITY::DETACH_ENTITY(iLocal_301, true, true);
							}
						}
						if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
						}
					}
				}
			}
			__LIB_40__.func_713();
			iLocal_382 = MISC::GET_GAME_TIMER();
			iLocal_378 = 6;
			break;
		case 6:
			__LIB_30__.func_784();
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (bLocal_312)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_13, 3))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_13) > Local_280.f_15)
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
						{
							iLocal_301 = __LIB_30__.func_747(iVar0, 0);
						}
						if (__LIB_0__.func_524(iLocal_301))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_301))
							{
								ENTITY::DETACH_ENTITY(iLocal_301, true, true);
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_12, 3))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_12) > Local_280.f_14)
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
					{
						iLocal_301 = __LIB_30__.func_747(iVar0, 0);
					}
					if (__LIB_0__.func_524(iLocal_301))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_301))
						{
							ENTITY::DETACH_ENTITY(iLocal_301, true, true);
						}
					}
				}
			}
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			if (Local_280.f_50 == 0)
			{
				iLocal_378 = 7;
				iLocal_382 = MISC::GET_GAME_TIMER() + 1500;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_382 + 7500 || (__LIB_0__.func_964() && MISC::GET_GAME_TIMER() > iLocal_382 + 2000))
			{
				__LIB_10__.func_573(&Local_286);
				iLocal_378 = 8;
				iLocal_382 = MISC::GET_GAME_TIMER() + 1500;
			}
			break;
		case 7:
			__LIB_30__.func_784();
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 0, false);
			if (MISC::GET_GAME_TIMER() > iLocal_382)
			{
				__LIB_0__.func_123(&iLocal_301);
				iLocal_301 = 0;
				__LIB_30__.func_776();
				return;
			}
			break;
		case 8:
			if (__LIB_35__.func_928(&Local_286, 0, 1065353216, 0, 0, 0))
			{
				iLocal_378 = 9;
			}
			break;
		case 9:
			__LIB_30__.func_784();
			WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
			__LIB_0__.func_122(&iLocal_301, 0);
			__LIB_6__.func_889(&Local_286, 0);
			func_586(0);
			return;
	}
	if (iLocal_378 >= 5)
	{
		if (Local_280.f_50 == 0)
		{
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		}
	}
	if (!__LIB_30__.func_805())
	{
		if (iLocal_378 >= 5)
		{
			if (Local_280.f_50)
			{
				__LIB_35__.func_928(&Local_286, 0, 1065353216, 0, 0, 0);
			}
		}
		else if (iLocal_378 >= 2)
		{
			if (iLocal_375 != 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_375, 255, 255, 255, iLocal_381, 0);
			}
		}
	}
}

int func_227()//Position - 0xBCEF
{
	struct<3> Var0;
	switch (iLocal_309)
	{
		case 0:
			__LIB_35__.func_139(&Local_276);
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_26__.func_478(&(Local_276.f_9), 0);
				__LIB_30__.func_748(&Local_276, &sLocal_410);
				if (Local_280.f_0 == 78)
				{
					if (__LIB_0__.func_121(Local_276.f_28[0]))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 9, 1, 0, 0);
					}
				}
			}
			iLocal_309 = 1;
			break;
		case 1:
			__LIB_30__.func_748(&Local_276, &sLocal_410);
			if (Local_280.f_0 == 78)
			{
				if (__LIB_0__.func_121(Local_276.f_28[0]))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 9, 1, 0, 0);
				}
			}
			bLocal_413 = false;
			if (__LIB_18__.func_170(1, 1093140480, 0))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				PED::REQUEST_ACTION_MODE_ASSET("TREVOR_ACTION");
				__LIB_30__.func_795();
				CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
				__LIB_40__.func_725();
				CUTSCENE::START_CUTSCENE(0);
				__LIB_30__.func_794(&uLocal_384);
				func_267(Var0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1);
				__LIB_0__.func_84(500, 0);
				iLocal_600 = 0;
				__LIB_35__.func_148(0);
				iLocal_309 = 2;
			}
			break;
		case 2:
			if (__LIB_30__.func_793())
			{
				if (!iLocal_414)
				{
					iLocal_414 = 1;
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(true);
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					iLocal_309 = 3;
					return 0;
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_600 == 0)
			{
				__LIB_10__.func_707(&iLocal_307, 0);
				PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), Local_285.f_1);
				PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), Local_285.f_2);
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
				__LIB_42__.func_718();
				if (Local_280.f_0 == 81)
				{
					if (__LIB_0__.func_121(Local_276.f_41[2]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_276.f_41[2], 1179.778f, -401.7374f, 66.8697f, true, false, false, true);
					}
				}
				if (Local_280.f_0 == 77)
				{
					if (__LIB_0__.func_121(Local_276.f_41[1]))
					{
						ENTITY::DETACH_ENTITY(Local_276.f_41[1], true, true);
						ENTITY::SET_ENTITY_COORDS(Local_276.f_41[1], 909.8177f, 3643.293f, 31.7073f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_276.f_41[1], 0f, 0f, 140.6f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[1], true);
						ENTITY::SET_ENTITY_VISIBLE(Local_276.f_41[1], false, false);
					}
					if (__LIB_0__.func_121(Local_276.f_41[2]))
					{
						ENTITY::DETACH_ENTITY(Local_276.f_41[2], true, true);
						ENTITY::SET_ENTITY_COORDS(Local_276.f_41[2], 907.6703f, 3643.417f, 31.7073f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_276.f_41[2], 0f, 0f, -62.47f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[2], true);
						ENTITY::SET_ENTITY_VISIBLE(Local_276.f_41[2], false, false);
					}
				}
				iLocal_600 = 1;
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > iLocal_595)
			{
				__LIB_30__.func_788();
			}
			if (Local_280.f_0 == 79)
			{
				if (!iLocal_313)
				{
					if (__LIB_0__.func_121(Local_276.f_28[1]))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 20100)
						{
							PED::APPLY_PED_BLOOD_SPECIFIC(Local_276.f_28[1], 1, 0.5f, 0.65f, 307.546f, 1f, 3, 0f, "BulletLarge");
							iLocal_313 = 1;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_32__.func_574(1, 0, 1, 1);
				__LIB_40__.func_720(0);
				__LIB_40__.func_719();
				if (Local_280.f_0 == 81)
				{
					__LIB_20__.func_654(&iLocal_101);
				}
				if (Local_280.f_0 == 77)
				{
					if (__LIB_0__.func_121(Local_276.f_41[1]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[1], false);
						ENTITY::SET_ENTITY_VISIBLE(Local_276.f_41[1], true, false);
					}
					if (__LIB_0__.func_121(Local_276.f_41[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[2], false);
						ENTITY::SET_ENTITY_VISIBLE(Local_276.f_41[2], true, false);
					}
				}
				if (bLocal_599)
				{
					__LIB_30__.func_792();
				}
				return 1;
			}
			else
			{
				__LIB_30__.func_821();
				if (!bLocal_413)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
			}
			break;
		case 3:
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			__LIB_10__.func_696(250, 0);
			__LIB_32__.func_792(1, 1, 1);
			__LIB_32__.func_574(1, 1, 1, 1);
			__LIB_0__.func_123(&(Local_276.f_41[0]));
			if (Local_280.f_0 == 77)
			{
				if (__LIB_0__.func_121(Local_276.f_41[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[1], false);
					ENTITY::SET_ENTITY_VISIBLE(Local_276.f_41[1], true, false);
				}
				if (__LIB_0__.func_121(Local_276.f_41[2]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[2], false);
					ENTITY::SET_ENTITY_VISIBLE(Local_276.f_41[2], true, false);
				}
			}
			__LIB_40__.func_720(1);
			__LIB_40__.func_719();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			SYSTEM::WAIT(250);
			return 1;
		case 4:
			__LIB_32__.func_574(1, 0, 1, 1);
			return 1;
	}
	return 0;
}

void func_267(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0xF191
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
			{
				case 0:
					if (func_384(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_269(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_384(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_269(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_384(PLAYER::PLAYER_PED_ID(), 8, 1) || func_384(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_269(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_384(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_269(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_37 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_269(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xF362
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
										func_269(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_269(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_278(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_277(iParam0, iVar10, &iVar4, 1))
							{
								func_269(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_269(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_269(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_269(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_269(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_269(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_269(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_269(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_269(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_269(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_277(iParam0, iVar10, &iVar4, 0))
		{
			func_269(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_270(iParam0, iVar10, &iVar4))
		{
			func_269(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_270(int iParam0, int iParam1, int iParam2)//Position - 0xFB72
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_384(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10467
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_384(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_278(int iParam0, int iParam1, int iParam2)//Position - 0x104FD
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
				if (func_384(iParam0, iParam1, iVar0))
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
				if (func_384(iParam0, iParam1, iVar1))
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

int func_384(int iParam0, int iParam1, int iParam2)//Position - 0x2D663
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
				if (!func_384(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_384(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_384(iParam0, 14, iVar4))
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
			if (!func_384(iParam0, 14, uVar8[iVar7]))
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

void func_549()//Position - 0x3B9C4
{
	__LIB_30__.func_784();
	switch (iLocal_379)
	{
		case 0:
			break;
		case 1:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_30__.func_777();
			if (Local_277.f_0 < Local_280.f_53)
			{
				__LIB_42__.func_349("TR_FAIL", 1);
			}
			else
			{
				__LIB_41__.func_463(1);
			}
			iLocal_379 = 2;
			break;
		case 2:
			if (__LIB_0__.func_204())
			{
				GRAPHICS::REMOVE_DECALS_IN_RANGE(__LIB_30__.func_804(), 500f);
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
				func_586(0);
			}
			break;
	}
}

void func_586(bool bParam0)//Position - 0x3CEBB
{
	int iVar0;
	int iVar1;
	AUDIO::STOP_STREAM();
	if (bParam0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_FAIL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iLocal_370))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_370))
		{
			AUDIO::STOP_AUDIO_SCENE(iLocal_370);
		}
	}
	__LIB_9__.func_485(23, 0);
	Global_32209 = uLocal_284;
	__LIB_30__.func_777();
	AUDIO::STOP_SOUND(iLocal_310);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	if (Local_280.f_0 == 81)
	{
		__LIB_20__.func_654(&iLocal_101);
	}
	__LIB_30__.func_812();
	__LIB_30__.func_811();
	__LIB_32__.func_762(0);
	__LIB_0__.func_523(&iLocal_366);
	__LIB_0__.func_122(&iLocal_301, 0);
	iLocal_301 = 0;
	if (!__LIB_0__.func_524(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
		{
			iLocal_301 = __LIB_30__.func_747(iVar1, 0);
			__LIB_0__.func_122(&iLocal_301, 0);
			iLocal_301 = 0;
		}
	}
	if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
	__LIB_20__.func_604(&Global_103950);
	if (!bParam0)
	{
		__LIB_32__.func_750(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
	if (Local_280.f_50 == 1)
	{
		iVar0 = 0;
		while (iVar0 < Local_280.f_17)
		{
			if (Local_280.f_17[iVar0] != 0 && Local_280.f_17[iVar0] != joaat("WEAPON_UNARMED"))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], WEAPON::GET_WEAPON_CLIP_SIZE(Local_280.f_17[iVar0]) * 3, true, true);
			}
			iVar0++;
		}
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	__LIB_32__.func_762(0);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	if (iLocal_375 != 0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_375, "RESET_MOVIE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_375);
		iLocal_375 = 0;
	}
	if (iLocal_376 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_376);
		iLocal_376 = 0;
	}
	if (iLocal_377 != 0)
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_377, "RESET_MOVIE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_377);
		iLocal_377 = 0;
	}
	__LIB_37__.func_537(&Local_324);
	__LIB_37__.func_525(&Local_323);
	__LIB_30__.func_771(&Local_325, 1);
	__LIB_30__.func_810();
	__LIB_30__.func_809();
	__LIB_10__.func_720(iLocal_307);
	if (iLocal_306 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_306, false);
	}
	TASK::RESET_SCENARIO_GROUPS_ENABLED();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_304);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_305);
	OBJECT::CLEAR_ALL_PICKUP_REWARD_TYPE_SUPPRESSION();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), true);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	__LIB_10__.func_708(1, 1, 0, 0);
	__LIB_10__.func_718(1);
	__LIB_8__.func_770(0);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), true);
	if (Local_280.f_50)
	{
		switch (Local_280.f_0)
		{
			case 77:
				func_611(194, 1);
				break;
			case 78:
				func_611(196, 1);
				break;
			case 79:
				func_611(197, 1);
				break;
			case 80:
				func_611(198, 1);
				break;
			case 81:
				__LIB_0__.func_503(108, 1);
				__LIB_35__.func_525(21, 1);
				func_611(195, 1);
				break;
			default:
				break;
		}
		if (__LIB_0__.func_368(108))
		{
			__LIB_35__.func_525(21, 1);
			BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_rampage");
		}
	}
	if (__LIB_39__.func_542())
	{
	}
	Global_31962 = 0;
	Global_31969 = 1;
	__LIB_32__.func_757(&Local_276, 0, 0, 0);
	__LIB_30__.func_807();
	__LIB_0__.func_181(74, 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_611(int iParam0, bool bParam1)//Position - 0x3D7FA
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_39__.func_539();
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
	__LIB_42__.func_17(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_40__.func_722(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_633();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_633()//Position - 0x3E843
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
			iVar3 = __LIB_18__.func_168(iVar1);
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
				if (func_384(iVar1, 14, iVar2))
				{
					func_634(iVar1, 14, iVar2);
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

int func_634(int iParam0, int iParam1, int iParam2)//Position - 0x3E904
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
	if (!func_384(iParam0, iParam1, iParam2))
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
				func_634(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_634(iParam0, 14, uVar5[iVar3]))
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
	if (func_277(iParam0, iVar0, &iVar7, 0))
	{
		func_269(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_270(iParam0, iVar0, &iVar7))
	{
		func_269(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

