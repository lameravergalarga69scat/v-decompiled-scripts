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
	struct<36> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117[1] = { 0 };
	int iLocal_118[1] = { 0 };
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	float fLocal_126 = 0f;
	int iLocal_127[5] = { 0, 0, 0, 0, 0 };
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 8;
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
	var uLocal_159 = 8;
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
	float fLocal_193 = 0f;
	float fLocal_194 = 0f;
	float fLocal_195 = 0f;
	float fLocal_196 = 0f;
	var uLocal_197 = 0;
	int iLocal_198[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	struct<383> Local_202 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 1443296302, 1, -1, 0, -1, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1065353216, 12, 1, 0, 2, -1, -1, 3, 15000, 5000, 1128792064, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 0, 2, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 0, 1, 0, 0, 0, 0, 9, 1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, -1, 1, 0, 0, 0, 0, 0, -1, -1, 1, 0, 0 } ;
	var uLocal_203 = 3;
	var uLocal_204 = 0;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	struct<619> Local_210 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	struct<20> Local_213 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_214[6];
	struct<21> Local_215[6];
	struct<19> Local_216 = { 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_217 = 0;
	var uLocal_218 = 1;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 5;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 1;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 5;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 5;
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
	var uLocal_278 = 2;
	var uLocal_279 = 0;
	var uLocal_280 = 5;
	var uLocal_281 = -1;
	var uLocal_282 = 6;
	var uLocal_283 = -1;
	var uLocal_284 = 0;
	var uLocal_285 = -1;
	var uLocal_286 = 0;
	var uLocal_287 = -1;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	var uLocal_290 = 0;
	var uLocal_291 = -1;
	var uLocal_292 = 0;
	var uLocal_293 = -1;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = -1;
	var uLocal_301 = 6;
	var uLocal_302 = -1;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = -1;
	var uLocal_309 = 0;
	var uLocal_310 = -1;
	var uLocal_311 = 0;
	var uLocal_312 = -1;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = 6;
	var uLocal_321 = -1;
	var uLocal_322 = 0;
	var uLocal_323 = -1;
	var uLocal_324 = 0;
	var uLocal_325 = -1;
	var uLocal_326 = 0;
	var uLocal_327 = -1;
	var uLocal_328 = 0;
	var uLocal_329 = -1;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 6;
	var uLocal_340 = -1;
	var uLocal_341 = 0;
	var uLocal_342 = -1;
	var uLocal_343 = 0;
	var uLocal_344 = -1;
	var uLocal_345 = 0;
	var uLocal_346 = -1;
	var uLocal_347 = 0;
	var uLocal_348 = -1;
	var uLocal_349 = 0;
	var uLocal_350 = -1;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = -1;
	var uLocal_358 = 6;
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = -1;
	var uLocal_362 = 0;
	var uLocal_363 = -1;
	var uLocal_364 = 0;
	var uLocal_365 = -1;
	var uLocal_366 = 0;
	var uLocal_367 = -1;
	var uLocal_368 = 0;
	var uLocal_369 = -1;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 5;
	var uLocal_378 = -1;
	var uLocal_379 = 6;
	var uLocal_380 = -1;
	var uLocal_381 = 0;
	var uLocal_382 = -1;
	var uLocal_383 = 0;
	var uLocal_384 = -1;
	var uLocal_385 = 0;
	var uLocal_386 = -1;
	var uLocal_387 = 0;
	var uLocal_388 = -1;
	var uLocal_389 = 0;
	var uLocal_390 = -1;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = -1;
	var uLocal_398 = 6;
	var uLocal_399 = -1;
	var uLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = 0;
	var uLocal_405 = -1;
	var uLocal_406 = 0;
	var uLocal_407 = -1;
	var uLocal_408 = 0;
	var uLocal_409 = -1;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = -1;
	var uLocal_417 = 6;
	var uLocal_418 = -1;
	var uLocal_419 = 0;
	var uLocal_420 = -1;
	var uLocal_421 = 0;
	var uLocal_422 = -1;
	var uLocal_423 = 0;
	var uLocal_424 = -1;
	var uLocal_425 = 0;
	var uLocal_426 = -1;
	var uLocal_427 = 0;
	var uLocal_428 = -1;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = -1;
	var uLocal_436 = 6;
	var uLocal_437 = -1;
	var uLocal_438 = 0;
	var uLocal_439 = -1;
	var uLocal_440 = 0;
	var uLocal_441 = -1;
	var uLocal_442 = 0;
	var uLocal_443 = -1;
	var uLocal_444 = 0;
	var uLocal_445 = -1;
	var uLocal_446 = 0;
	var uLocal_447 = -1;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = -1;
	var uLocal_455 = 6;
	var uLocal_456 = -1;
	var uLocal_457 = 0;
	var uLocal_458 = -1;
	var uLocal_459 = 0;
	var uLocal_460 = -1;
	var uLocal_461 = 0;
	var uLocal_462 = -1;
	var uLocal_463 = 0;
	var uLocal_464 = -1;
	var uLocal_465 = 0;
	var uLocal_466 = -1;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 2;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = -1;
	struct<7> Local_477 = { 1, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = -1;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_487[1];
	struct<2> Local_488 = { 0, 0 } ;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	struct<6> Local_491 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_492 = 0;
	int iLocal_493 = 0;
	struct<7> Local_494 = { 0, -1, -1, 0, 0, 0, 0 } ;
	var uLocal_495 = 0;
	int iLocal_496 = 0;
	struct<2> Local_497 = { -1, -1 } ;
	struct<12> Local_498 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	struct<17> Local_499 = { 1, 0, 1, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_500 = 1;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504[1] = { -1 };
	struct<4> Local_505[1];
	struct<3> Local_506 = { 1, 0, 1 } ;
	var uLocal_507 = 0;
	struct<8> Local_508 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_509 = 0;
	bool bLocal_510 = 0;
	bool bLocal_511 = 0;
	bool bLocal_512 = 0;
	bool bLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	struct<3> Local_519 = { 0, 0, 0 } ;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	bool bLocal_522 = 0;
	bool bLocal_523 = 0;
	struct<2> Local_524 = { -1, -1 } ;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	var uLocal_527 = 3;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	var uLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	struct<3> Local_538[1];
	int iLocal_539 = 0;
	float fLocal_540 = 0f;
	float fLocal_541 = 0f;
	float fLocal_542 = 0f;
	float fLocal_543 = 0f;
	int iLocal_544 = 0;
	int iLocal_545[1] = { 0 };
	var uLocal_546[1] = { 0 };
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	char cLocal_554[64] = "";
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
	var uLocal_565 = -1;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 1000;
	var uLocal_573 = 1000;
	var uLocal_574 = 0;
	struct<286> Local_575 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 4, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 7, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, -1, -1, 1232348144, 1232348144, 0, -1, -1, 1232348144, 1232348144, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 } ;
	var uLocal_576 = 1;
	var uLocal_577 = 0;
	var uLocal_578 = -1;
	var uLocal_579 = -1;
	var uLocal_580 = -1;
	var uLocal_581 = 0;
	struct<62> Local_582[32];
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	struct<21> Local_586 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_126 = 0f;
	fLocal_128 = 0f;
	fLocal_129 = 0f;
	fLocal_130 = 0f;
	fLocal_193 = 0.62f;
	fLocal_194 = 0.51f;
	fLocal_195 = 0.55f;
	fLocal_196 = 25f;
	iLocal_531 = -1;
	iLocal_532 = -1;
	iLocal_535 = -1;
	fLocal_540 = 99999f;
	fLocal_541 = 99999f;
	fLocal_542 = 99999f;
	fLocal_543 = 999999f;
	StringCopy(&cLocal_554, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	cLocal_554 = { cLocal_554 };
	Local_213 = { Local_213 };
	func_3187(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_510)
		{
			if (!func_3177(ScriptParam_586))
			{
				func_3012(0, 1);
				func_2973();
			}
		}
		else
		{
			func_2973();
		}
	}
	else
	{
		func_3012(0, 1);
		func_2973();
	}
	__LIB_21__.func_141(&(Local_575.f_260));
	func_2818();
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_3012(0, 1);
			func_2973();
		}
		if (__LIB_33__.func_1())
		{
			func_3012(0, 1);
			func_2973();
		}
		if (Local_210.f_102.f_4 != 0)
		{
			Call_Loc(Local_210.f_102.f_4);
			if (StackVal)
			{
				func_3012(0, 1);
				func_2973();
			}
		}
		func_3187(1);
		switch (func_2806())
		{
			case 0:
				switch (func_2805())
				{
					case 1:
						if (func_2559())
						{
							func_2558(1);
						}
						break;
					case 2:
					case 3:
						func_2558(3);
						break;
				}
				break;
			case 1:
				func_2509();
				func_1772();
				__LIB_0__.func_109();
				if (func_2805() != 1)
				{
					func_1765();
					if (Local_210.f_102.f_5 != 0)
					{
						Call_Loc(Local_210.f_102.f_5);
					}
					func_2558(func_2805());
				}
				break;
			case 2:
				func_2509();
				func_1033();
				func_785();
				if (func_2805() > 2)
				{
					func_3012(func_784(11), 0);
					func_2558(3);
				}
				break;
			case 3:
				func_2973();
				break;
		}
		if (bLocal_512)
		{
			switch (func_2805())
			{
				case 0:
					if (func_542())
					{
						func_541(1);
					}
					break;
				case 1:
					if (func_540() == 0)
					{
						func_6();
					}
					else
					{
						func_541(2);
					}
					break;
				case 2:
					if (func_2())
					{
						func_541(3);
					}
					break;
				case 3:
					func_2973();
					break;
				}
		}
		func_1();
	}
}

void func_1()//Position - 0x2B9
{
	Local_216.f_79++;
	if (Local_216.f_79 >= Local_202.f_38)
	{
		Local_216.f_79 = 0;
	}
}

int func_2()//Position - 0x2DF
{
	if (Local_210.f_3.f_2 != 0)
	{
		Call_Loc(Local_210.f_3.f_2);
	}
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)//Position - 0x314
{
	return __LIB_9__.func_807(&(Local_575.f_215), iParam0);
}

bool func_5()//Position - 0x34A
{
	return func_3(21);
}

void func_6()//Position - 0x358
{
	__LIB_0__.func_371();
	if (Local_210.f_3 != 0)
	{
		Call_Loc(Local_210.f_3);
	}
	func_487();
	__LIB_21__.func_165();
	func_191();
	func_173();
	func_49();
	func_42();
	func_33();
	func_23();
	func_20();
	func_12();
	func_7();
}

void func_7()//Position - 0x39F
{
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (!__LIB_1__.func_264(__LIB_1__.func_301(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(__LIB_1__.func_301()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)//Position - 0x3D4
{
	if (!bLocal_512)
	{
		return;
	}
	Local_575.f_209 = iParam0;
}

void func_12()//Position - 0x46D
{
	if (func_19() == -1)
	{
		return;
	}
	if (Local_210.f_82 == 0)
	{
		return;
	}
	Call_Loc(Local_210.f_82);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_210.f_82.f_1 != 0)
	{
		Call_Loc(Local_210.f_82.f_1);
		if (StackVal)
		{
			__LIB_0__.func_495(&(Local_575.f_238), 0, 0);
			func_16(5);
		}
	}
	if (!__LIB_0__.func_649(&(Local_575.f_238)))
	{
		__LIB_0__.func_580(&(Local_575.f_238), 0, 0);
	}
	else if (__LIB_0__.func_649(&(Local_575.f_238)))
	{
		if (__LIB_2__.func_47(&(Local_575.f_238), func_19(), 0))
		{
			if (Local_210.f_82.f_3 != 0)
			{
				Call_Loc(Local_210.f_82.f_3);
			}
			func_8(1);
		}
	}
}

void func_16(int iParam0)//Position - 0x5CA
{
	if (__LIB_1__.func_101(&(Local_575.f_215), iParam0))
	{
	}
}

int func_19()//Position - 0x655
{
	if (Local_202.f_252 != -1)
	{
		return Local_202.f_252 * 60 * 1000;
	}
	return Local_202.f_252;
}

void func_20()//Position - 0x675
{
	int iVar0;
	if (func_22() == -1)
	{
		func_21(0);
		Call_Loc(Local_214[func_22() /*20*/].f_17);
		return;
	}
	while ((func_22() < iLocal_525 && iVar0 < Local_214[func_22() /*20*/].f_19) && Local_214[func_22() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_214[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_22() != Local_214[func_22() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_214[func_22() /*20*/].f_18);
				Local_575.f_213 = func_22();
				func_21(Local_214[func_22() /*20*/].f_1[iVar0 /*3*/]);
				MISC::SET_BIT(&(Local_575.f_214), func_22());
				Call_Loc(Local_214[func_22() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_21(int iParam0)//Position - 0x745
{
	if (!bLocal_512)
	{
		return;
	}
	Local_575.f_212 = iParam0;
}

int func_22()//Position - 0x75E
{
	return Local_575.f_212;
}

void func_23()//Position - 0x76B
{
	struct<3> Var0;
	if (Local_210.f_80 == 0)
	{
		return;
	}
	Call_Loc(Local_210.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__.func_86(Var0))
	{
		return;
	}
	if (__LIB_2__.func_47(&(Local_575.f_240), __LIB_13__.func_800(), 0))
	{
		if (!__LIB_0__.func_394(Local_575.f_247, Var0, 1056964608, 0))
		{
			__LIB_13__.func_993(__LIB_7__.func_213(1, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), Var0, -1082130432);
			__LIB_0__.func_579(&(Local_575.f_240));
		}
		Local_575.f_247 = { Var0 };
	}
}

void func_33()//Position - 0x9E8
{
	bool bVar0;
	if (func_40())
	{
		if (func_37())
		{
			if (__LIB_0__.func_649(&(Local_575.f_182.f_11)))
			{
				__LIB_0__.func_579(&(Local_575.f_182.f_11));
				func_36();
				Local_575.f_182.f_13++;
			}
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 2)
		{
			if (func_35(bVar0) && Local_575.f_182[bVar0 /*5*/].f_1 != -1)
			{
				func_34(bVar0);
				Local_575.f_182.f_13++;
			}
			bVar0++;
		}
	}
}

void func_34(bool bParam0)//Position - 0xA71
{
	Local_575.f_182[bParam0 /*5*/].f_3 = 999999f;
	Local_575.f_182[bParam0 /*5*/].f_4 = 999999f;
	Local_575.f_182[bParam0 /*5*/].f_1 = -1;
}

int func_35(bool bParam0)//Position - 0xAA5
{
	if (!BitTest(Local_575.f_182.f_15, bParam0))
	{
		return 0;
	}
	return 1;
}

void func_36()//Position - 0xAC0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_34(iVar0);
		iVar0++;
	}
}

bool func_37()//Position - 0xAE0
{
	return (func_39() && func_38());
}

int func_38()//Position - 0xAF5
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (!BitTest(Local_575.f_182.f_15, bVar0))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var func_39()//Position - 0xB22
{
	return Local_575.f_182.f_16;
}

int func_40()//Position - 0xB31
{
	if (func_41(13))
	{
		return 0;
	}
	return 1;
}

bool func_41(int iParam0)//Position - 0xB47
{
	return __LIB_9__.func_807(&(Local_202.f_16), iParam0);
}

void func_42()//Position - 0xB59
{
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_43(&(Local_575.f_173), &(Local_575.f_173.f_3)))
		{
			func_16(2);
		}
	}
}

int func_43(var uParam0, int* iParam1)//Position - 0xB8D
{
	int iVar0[1];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (__LIB_0__.func_114(iVar2))
		{
			iVar0[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	if (iVar1 < func_46())
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < func_46())
	{
		if (__LIB_0__.func_114())
		{
			if (iVar2 > 0)
			{
				(*uParam0)[iVar2] = (*uParam0)[(iVar2 - 1)];
			}
			else
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
				(*uParam0)[iVar2] = iVar0[iVar3];
				if (iVar0[iVar3] < 32)
				{
					MISC::SET_BIT(iParam1, iVar0[iVar3]);
				}
				if (iVar2 < (func_46() - 1))
				{
					func_44(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
					iVar1 = (iVar1 - 1);
				}
			}
			iVar2++;
			return 1;
		}
void func_44(var uParam0, var uParam1)//Position - 0xC53
{
	var uVar0;
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_46()//Position - 0xC74
{
	return Local_202.f_19;
}

void func_49()//Position - 0xC92
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int* iVar5;
	int iVar6;
	__LIB_13__.func_743(&iVar5);
	iVar6 = 0;
	while (iVar6 < Local_202.f_38)
	{
		func_171(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_210.f_156.f_182 != 0)
			{
				Stack.Push(iVar6);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_156.f_182);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_170(iVar6, 6);
				}
				else if (bVar3)
				{
					func_170(iVar6, 6);
				}
				else if (func_148(iVar6, iVar0))
				{
					func_170(iVar6, 6);
				}
				else
				{
					func_147(&iVar5, iVar6);
				}
			}
		}
		else
		{
			func_147(&iVar5, iVar6);
		}
		switch (iVar4)
		{
			case 0:
				if (func_143(iVar6))
				{
					func_170(iVar6, 2);
				}
				break;
			case 1:
				if (!bVar2)
				{
					if (func_140(iVar6))
					{
						func_139(iVar6);
						func_170(iVar6, 2);
					}
				}
				else if (__LIB_0__.func_109(iVar6))
				{
					__LIB_1__.func_162(&(Local_575.f_22[iVar6 /*24*/]));
				}
				break;
			case 2:
				if (!bVar1)
				{
					if (func_134(iVar6))
					{
						if (func_90(iVar6))
						{
							func_170(iVar6, 3);
							if (__LIB_14__.func_760(iVar6, 8))
							{
								__LIB_14__.func_759(iVar6, 31);
							}
							__LIB_0__.func_371(iVar6);
							bVar1 = true;
						}
					}
				}
				break;
			case 3:
				if (bVar2)
				{
					if (func_84(iVar6, iVar0))
					{
						func_170(iVar6, 6);
						break;
					}
					if (!bVar3)
					{
						func_66(iVar6);
						func_61(iVar6, iVar0, 1);
						if (func_60(iVar6))
						{
							func_170(iVar6, 4);
						}
					}
				}
				break;
			case 6:
				__LIB_14__.func_759(iVar6, 8);
				if (bVar2)
				{
					if (func_84(iVar6, iVar0))
					{
						break;
					}
					if (func_60(iVar6))
					{
						func_170(iVar6, 4);
					}
				}
				if (__LIB_14__.func_760(iVar6, 19) && func_59())
				{
					__LIB_1__.func_162(&(Local_575.f_22[iVar6 /*24*/]));
				}
				if (func_52(iVar6))
				{
					if (__LIB_0__.func_109(iVar6))
					{
						__LIB_1__.func_162(&(Local_575.f_22[iVar6 /*24*/]));
					}
					func_170(iVar6, 1);
				}
				if (func_540() == 0)
				{
					if (func_51(iVar6, 0))
					{
						func_8(9);
					}
				}
				break;
			case 4:
				if (!func_51(iVar6, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					__LIB_14__.func_759(iVar6, 26);
					func_170(iVar6, 5);
				}
				break;
			case 5:
				break;
		}
		iVar6++;
	}
	func_50(&iVar5);
	iVar6 = Local_216.f_79;
	func_171(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_61(iVar6, iVar0, 0);
				}
			}
			break;
	}
}

void func_50(int* iParam0)//Position - 0xF33
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (BitTest(*iParam0, bVar0))
		{
			if (!BitTest(Local_575.f_182.f_15, bVar0))
			{
				MISC::SET_BIT(&(Local_575.f_182.f_15), bVar0);
			}
		}
		else if (BitTest(Local_575.f_182.f_15, bVar0))
		{
			MISC::CLEAR_BIT(&(Local_575.f_182.f_15), bVar0);
		}
		bVar0++;
	}
}

bool func_51(int iParam0, int iParam1)//Position - 0xF8E
{
	return __LIB_9__.func_807(&(Local_202.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_52(int iParam0)//Position - 0xFA6
{
	if (func_540() != 0)
	{
		return 0;
	}
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return func_53(Local_202.f_38.f_1[iParam0 /*21*/].f_8);
	}
	if (func_51(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_169);
		return StackVal;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0xFF1
{
	if (!func_58())
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (func_40() && func_56())
	{
		return 0;
	}
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (func_40() && !func_37())
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)//Position - 0x1048
{
	int iVar0;
	iVar0 = func_55(1, iParam0);
	if (iVar0 != -1)
	{
		return BitTest(Local_575.f_182.f_15, iVar0);
	}
	return 0;
}

int func_55(int iParam0, int iParam1)//Position - 0x106D
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Local_202.f_272[iVar0] == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Local_202.f_272[iVar0] == Local_202.f_38.f_1[iParam1 /*21*/].f_8)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
	}
	return -1;
}

bool func_56()//Position - 0x10E3
{
	return Local_575.f_182.f_13 >= func_57();
}

int func_57()//Position - 0x10F7
{
	return Local_575.f_182.f_14;
}

int func_58()//Position - 0x1106
{
	if (func_784(58))
	{
		if (Local_210.f_530.f_9 == 0)
		{
			return 1;
		}
		Call_Loc(Local_210.f_530.f_9);
		return StackVal;
	}
	return 0;
}

int func_59()//Position - 0x1134
{
	if (func_784(58))
	{
		Stack.Push(Local_210.f_530.f_8 != 0);
		Call_Loc(Local_210.f_530.f_8);
		if (StackVal && StackVal)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1165
{
	if (Local_210.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_168);
		return StackVal;
	}
	return 0;
}

void func_61(int iParam0, int iParam1, int iParam2)//Position - 0x1186
{
	int iVar0;
	int iVar1;
	iVar0 = func_65(iParam0);
	if (__LIB_14__.func_758(iParam0) == -1)
	{
		func_63(iParam0, 0);
		if (Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_14 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_14);
		}
		return;
	}
	if (__LIB_13__.func_329(Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/]) != iParam2)
	{
		return;
	}
	if (Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_17);
	}
	while ((__LIB_14__.func_758(iParam0) < Local_216.f_80[iVar0 /*97*/] && iVar1 < Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_18) && Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_15 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_15);
			}
			func_63(iParam0, Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_1[iVar1 /*2*/]);
			if (Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_14 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_216.f_80[iVar0 /*97*/].f_1[__LIB_14__.func_758(iParam0) /*19*/].f_14);
			}
			return;
		}
		iVar1++;
	}
}

void func_63(int iParam0, int iParam1)//Position - 0x1353
{
	if (!bLocal_512)
	{
		return;
	}
	Local_575.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_65(int iParam0)//Position - 0x1385
{
	if (__LIB_9__.func_807(&(Local_575.f_22[iParam0 /*24*/].f_3), 19))
	{
		return 1;
	}
	if (Local_210.f_156.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_1);
		return StackVal;
	}
	return 0;
}

void func_66(int iParam0)//Position - 0x13BE
{
	bool bVar0;
	int iVar1;
	bVar0 = Local_202.f_38.f_1[iParam0 /*21*/].f_14;
	if (func_83(bVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < Local_216[iParam0 /*19*/].f_16)
	{
		if (Local_216[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_216[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				if (!BitTest(Local_575.f_172, bVar0))
				{
					func_67(iParam0);
				}
				MISC::SET_BIT(&(Local_575.f_172), bVar0);
				if (Local_210.f_156.f_174 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(bVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_210.f_156.f_174);
				}
			}
		}
		iVar1++;
	}
}

void func_67(int iParam0)//Position - 0x1454
{
	if (func_41(28))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iParam0 /*24*/]))
	{
		if (__LIB_10__.func_952(NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/])))
		{
			func_68(func_80(), 1, 0);
		}
	}
}

void func_68(int iParam0, int iParam1, int iParam2)//Position - 0x1496
{
	if (__LIB_19__.func_760(1))
	{
		__LIB_13__.func_330(Local_524.f_0, __LIB_26__.func_795(1), iParam0, iParam1, iParam2);
	}
	else
	{
		__LIB_13__.func_330(Local_524.f_0, __LIB_0__.func_679(iLocal_514), iParam0, iParam1, iParam2);
	}
}

int func_80()//Position - 0x16E2
{
	int iVar0;
	iVar0 = func_81();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_81()//Position - 0x16FB
{
	Call_Loc(Local_210.f_64);
	return StackVal;
}

bool func_83(var uParam0)//Position - 0x1748
{
	return BitTest(Local_575.f_172, uParam0);
}

int func_84(int iParam0, int iParam1)//Position - 0x1758
{
	Stack.Push(Local_210.f_156.f_192 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_210.f_156.f_192);
	if (StackVal && StackVal)
	{
		if (Local_210.f_156.f_191 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_191);
		}
		if (func_86(iParam0))
		{
			__LIB_4__.func_509(&(Local_575.f_22[iParam0 /*24*/]));
		}
		else
		{
			__LIB_1__.func_162(&(Local_575.f_22[iParam0 /*24*/]));
		}
		return 1;
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x17F6
{
	if (func_51(iParam0, 18))
	{
		return 1;
	}
	Stack.Push(Local_210.f_156.f_195 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_195);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x186A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	func_133(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_176);
	iVar0 = StackVal;
	if (__LIB_0__.func_584(iVar0))
	{
		iVar1 = Local_202.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (__LIB_0__.func_682(Local_575.f_119[iVar1 /*8*/]))
			{
				if (__LIB_0__.func_668(&(Local_575.f_22[iParam0 /*24*/]), Local_575.f_119[iVar1 /*8*/], 26, iVar0, Local_202.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_106(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_105();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_177);
			Var2 = { StackVal, StackVal, StackVal };
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_178);
			fVar3 = StackVal;
			if (!__LIB_0__.func_86(Var2))
			{
				if (!func_104(iParam0) || __LIB_36__.func_199(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_1__.func_263(&(Local_575.f_22[iParam0 /*24*/]), 26, iVar0, Var2, fVar3, 1, 1, 1))
					{
						func_106(iParam0);
						func_105();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return 1;
					}
				}
				else
				{
					func_105();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_104(int iParam0)//Position - 0x1F79
{
	if ((func_51(iParam0, 10) && __LIB_14__.func_760(iParam0, 8)) && !func_51(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_105()//Position - 0x1FAC
{
	if (Local_575.f_226 != -1)
	{
		Local_575.f_244 = { 0f, 0f, 0f };
		Local_575.f_253 = 0f;
		iLocal_534 = 0;
		Local_575.f_211 = -1;
		Local_575.f_226 = -1;
	}
}

void func_106(int iParam0)//Position - 0x1FDD
{
	int iVar0;
	bool bVar1;
	iVar0 = NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/]);
	bVar1 = __LIB_14__.func_760(iParam0, 19);
	func_126(iParam0, iVar0);
	if (bVar1)
	{
		func_125(iParam0, iVar0);
	}
	else
	{
		func_115(iParam0, iVar0);
	}
	if (func_112(iParam0, iVar0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
		PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
	}
	if (Local_210.f_156.f_180 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_210.f_156.f_180);
	}
	if (func_51(iParam0, 5))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
		func_107(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_107(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2098
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_202.f_38.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var1, 25, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, Var0, 25, true, joaat("WEAPON_ASSAULTSHOTGUN"), 0, true, true, -1f);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
			__LIB_21__.func_98(Var2, &Var3, &Var4, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, true, joaat("WEAPON_HEAVYSNIPER"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			__LIB_21__.func_74(iParam0, -1, 0);
		}
	}
}

int func_112(int iParam0, int iParam1)//Position - 0x275A
{
	if (func_51(iParam0, 9))
	{
		return 1;
	}
	if (__LIB_12__.func_626(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0, int iParam1)//Position - 0x2834
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
	if (func_51(iParam0, 6))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, false);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_202.f_38.f_1[iParam0 /*21*/].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_124());
	PED::SET_PED_ACCURACY(iParam1, func_123(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_122());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_121());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_121(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	if (func_120(iParam0))
	{
		AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, true);
	}
	func_116(iParam0, iParam1);
}

void func_116(int iParam0, int iParam1)//Position - 0x28F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return;
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), Local_202.f_38.f_1[iParam0 /*21*/].f_20, false, false);
		return;
	}
	else if (Local_202.f_38.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_202.f_38.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_202.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_202.f_38.f_86[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_118(iVar2, 4))
			{
				Var3 = { func_117(iVar2) };
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, false, false);
			}
		}
		iVar1++;
	}
}

struct<9> func_117(int iParam0)//Position - 0x29CF
{
	struct<9> Var0;
	Var0 = 1;
	if (Local_210.f_541.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_541.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_202.f_280.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_202.f_280.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_202.f_280.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_202.f_280.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

bool func_118(int iParam0, int iParam1)//Position - 0x2A4E
{
	struct<9> Var0;
	Var0 = { func_119(iParam0) };
	return __LIB_9__.func_807(&Var0, iParam1);
}

struct<9> func_119(int iParam0)//Position - 0x2A69
{
	return Local_202.f_280.f_1[iParam0 /*9*/];
}

int func_120(int iParam0)//Position - 0x2A7F
{
	if (func_41(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_121()//Position - 0x2A9A
{
	switch (Local_575.f_210)
	{
		case 2:
			return 200;
		case 3:
			return 300;
		case 4:
			return 300;
		default:
	}
	return 200;
}

int func_122()//Position - 0x2AD1
{
	switch (Local_575.f_210)
	{
		case 2:
			return 60;
		case 3:
			return 80;
		case 4:
			return 100;
		default:
	}
	return 60;
}

int func_123(int iParam0)//Position - 0x2B06
{
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_179);
	Stack.Push(StackVal == joaat("WEAPON_RPG"));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_179);
	if (StackVal || StackVal == joaat("WEAPON_RAILGUN"))
	{
		return 2;
	}
	switch (Local_575.f_210)
	{
		case 2:
			return 10;
		case 3:
			return 25;
		case 4:
			return 40;
		default:
	}
	return 10;
}

int func_124()//Position - 0x2B68
{
	switch (Local_575.f_210)
	{
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		default:
	}
	return 1;
}

void func_125(int iParam0, int iParam1)//Position - 0x2B99
{
	PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
	PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
	PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_DRIVER_ABILITY(iParam1, 1f);
	PED::SET_PED_ACCURACY(iParam1, func_123(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_122());
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_121());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_121(), 0);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_124());
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}

void func_126(int iParam0, int iParam1)//Position - 0x2C24
{
	int iVar0;
	int iVar1;
	if (func_129(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_575.f_22[iParam0 /*24*/]), true);
	}
	if (!__LIB_10__.func_952(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_2 == joaat("MP_G_M_Pros_01"))
	{
		switch (PED::GET_PED_DRAWABLE_VARIATION(iParam1, 0))
		{
			case 0:
				AUDIO::SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_black_pvg"));
				break;
			case 1:
				AUDIO::SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_white_pvg"));
				break;
			case 2:
				AUDIO::SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_latino_pvg"));
				break;
			}
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_12 != -1)
	{
		__LIB_14__.func_759(iParam0, 2);
		PHYSICS::ACTIVATE_PHYSICS(iParam1);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
	}
	if (func_51(iParam0, 11))
	{
		NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_179);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_128(iParam0), true);
		}
	}
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_SEEING_RANGE(iParam1, Local_202.f_38.f_1[iParam0 /*21*/].f_17);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_202.f_38.f_1[iParam0 /*21*/].f_18);
	PED::SET_PED_HEARING_RANGE(iParam1, Local_202.f_38.f_1[iParam0 /*21*/].f_19);
	PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
	iVar1 = func_127(iParam0);
	if (iVar1 != joaat("COP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
	}
}

var func_127(int iParam0)//Position - 0x2D97
{
	return Local_202.f_38.f_86[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_128(int iParam0)//Position - 0x2DB3
{
	if (Local_210.f_156.f_193 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_193);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2);
	if (StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (__LIB_14__.func_760(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x2E0F
{
	if (func_41(22))
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1)//Position - 0x2EED
{
	if (Local_575.f_226 == -1)
	{
		Local_575.f_211 = iParam0;
		Local_575.f_226 = uParam1;
	}
}

int func_134(int iParam0)//Position - 0x2F0C
{
	if (!func_136(0, iParam0))
	{
		return 0;
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (__LIB_14__.func_761(Local_202.f_38.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_514))
	{
		return 0;
	}
	Stack.Push(Local_210.f_156.f_194 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_194);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0, int iParam1)//Position - 0x2F8D
{
	if (Local_575.f_211 == -1)
	{
		return 1;
	}
	if (Local_575.f_211 == iParam0)
	{
		if (Local_575.f_226 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_139(int iParam0)//Position - 0x2FE8
{
	func_63(iParam0, 0);
	if (Local_210.f_156.f_169.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_169.f_3);
	}
}

int func_140(int iParam0)//Position - 0x3010
{
	int iVar0;
	if (__LIB_14__.func_760(iParam0, 19))
	{
		if (!__LIB_5__.func_69(Local_575.f_182.f_11, func_142(), 0))
		{
			return 0;
		}
	}
	if (Local_210.f_156.f_169.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_169.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_2__.func_47(&(Local_575.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__.func_579(&(Local_575.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

int func_142()//Position - 0x30EC
{
	return Local_202.f_272.f_5;
}

int func_143(int iParam0)//Position - 0x30FB
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return func_144();
	}
	if (Local_210.f_156.f_175 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_175);
		return StackVal;
	}
	return 1;
}

int func_144()//Position - 0x312E
{
	Call_Loc(Local_210.f_530);
	if (StackVal)
	{
		if (__LIB_2__.func_47(&(Local_575.f_182.f_11), func_146(), 0))
		{
			func_145(58);
			return 1;
		}
	}
	return 0;
}

void func_145(int iParam0)//Position - 0x315E
{
	if (__LIB_1__.func_101(&uLocal_527, iParam0))
	{
	}
}

int func_146()//Position - 0x3172
{
	return Local_202.f_272.f_4;
}

void func_147(int* iParam0, int iParam1)//Position - 0x3181
{
	int iVar0;
	if (__LIB_14__.func_760(iParam1, 19))
	{
		iVar0 = func_55(0, iParam1);
		if (iVar0 != -1)
		{
			MISC::CLEAR_BIT(iParam0, iVar0);
		}
	}
}

int func_148(int iParam0, int iParam1)//Position - 0x31AB
{
	int iVar0;
	if (__LIB_14__.func_760(iParam0, 19))
	{
		iVar0 = func_55(0, iParam0);
		if (iVar0 != -1)
		{
			if ((Local_575.f_182[iVar0 /*5*/].f_2 != -1 && __LIB_14__.func_764(Local_575.f_182[iVar0 /*5*/].f_2) == 6) && Local_575.f_182[iVar0 /*5*/].f_3 >= 299f)
			{
				return 1;
			}
			if (Local_575.f_182[iVar0 /*5*/].f_3 != 999999f && Local_575.f_182[iVar0 /*5*/].f_3 > func_168())
			{
				return 1;
			}
			if (Local_575.f_182[iVar0 /*5*/].f_4 != 999999f && Local_575.f_182[iVar0 /*5*/].f_4 < func_167())
			{
				return 1;
			}
			if (func_149(iVar0))
			{
				return 1;
			}
			if (func_59())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x3280
{
	if (!func_150(func_160(iParam0, 1), func_157(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_150(bool bParam0, int iParam1)//Position - 0x32A2
{
	bool bVar0;
	int iVar1;
	if (Local_210.f_530.f_1 != 0)
	{
		Stack.Push(bParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_530.f_1);
		return StackVal;
	}
	if (bParam0 == -1)
	{
		return 0;
	}
	switch (func_156())
	{
		case 3:
			if (__LIB_14__.func_763(bParam0, 23))
			{
				return 0;
			}
			if (func_167() == -1f || Local_477[bParam0 /*7*/].f_2 > func_167())
			{
				if (Local_477[bParam0 /*7*/].f_4 != __LIB_0__.func_160())
				{
					if (__LIB_8__.func_153(Local_477[bParam0 /*7*/].f_4))
					{
						return 0;
					}
				}
			}
			break;
		case 4:
			bVar0 = bParam0;
			if (__LIB_1__.func_264(bVar0, 0, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
				if (func_152(iVar1, 2) || func_152(iVar1, 8))
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 0:
			if (__LIB_14__.func_760(bParam0, 2))
			{
				return 0;
			}
			break;
		case 1:
			if (__LIB_14__.func_762(bParam0, 2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_152(int iParam0, int iParam1)//Position - 0x33C8
{
	return __LIB_9__.func_807(&(Local_582[iParam0 /*62*/].f_1), iParam1);
}

int func_156()//Position - 0x3750
{
	if (Local_210.f_530.f_3 != 0)
	{
		Call_Loc(Local_210.f_530.f_3);
		return StackVal;
	}
	return 3;
}

int func_157(int iParam0)//Position - 0x3771
{
	return func_158(func_160(iParam0, 0));
}

int func_158(bool bParam0)//Position - 0x3784
{
	return func_159(func_156(), bParam0);
}

int func_159(int iParam0, bool bParam1)//Position - 0x3796
{
	int iVar0;
	if (bParam1 == -1)
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 3:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[bParam1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_575.f_2[bParam1]), false))
				{
					iVar0 = NETWORK::NET_TO_ENT(Local_575.f_2[bParam1]);
				}
			}
			break;
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[bParam1 /*24*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_575.f_22[bParam1 /*24*/]), false))
				{
					iVar0 = NETWORK::NET_TO_ENT(Local_575.f_22[bParam1 /*24*/]);
				}
			}
			break;
		case 1:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[bParam1 /*8*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_575.f_119[bParam1 /*8*/]), false))
				{
					iVar0 = NETWORK::NET_TO_ENT(Local_575.f_119[bParam1 /*8*/]);
				}
			}
			break;
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[bParam1 /*5*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_575.f_136[bParam1 /*5*/]), false))
				{
					iVar0 = NETWORK::NET_TO_ENT(Local_575.f_136[bParam1 /*5*/]);
				}
			}
			break;
		case 4:
			if (__LIB_1__.func_264(bParam1, 0, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
			}
			break;
	}
	return iVar0;
}

int func_160(int iParam0, bool bParam1)//Position - 0x38C6
{
	if (iParam0 != -1)
	{
		if (!bParam1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(func_158(Local_575.f_182[iParam0 /*5*/].f_1)))
			{
				Local_575.f_182[iParam0 /*5*/].f_1 = func_161(iParam0);
			}
		}
		return Local_575.f_182[iParam0 /*5*/].f_1;
	}
	return -1;
}

bool func_161(int iParam0)//Position - 0x3911
{
	bool bVar0[32];
	bool bVar1[32];
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bVar6 = -1;
	bVar2 = false;
	while (bVar2 < func_166())
	{
		if (func_163(bVar2))
		{
			iVar7 = func_158(bVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (func_150(bVar2, iVar7))
				{
					if (func_162(bVar2, iVar7))
					{
						bVar1[iVar4] = bVar2;
						iVar4++;
					}
					bVar0[iVar3] = bVar2;
					iVar3++;
				}
				bVar5 = bVar2;
			}
		}
		bVar2++;
	}
	if (iVar4 > 0)
	{
		bVar6 = bVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4)];
	}
	else if (iVar3 > 0)
	{
		bVar6 = bVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3)];
	}
	else
	{
		bVar6 = bVar5;
	}
	return bVar6;
}

int func_162(bool bParam0, int iParam1)//Position - 0x39BF
{
	if (Local_210.f_530.f_2 != 0)
	{
		Stack.Push(bParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_530.f_2);
		return StackVal;
	}
	switch (func_156())
	{
		case 3:
			if (Local_477[bParam0 /*7*/].f_4 != __LIB_0__.func_160())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x3A0A
{
	switch (func_156())
	{
		case 3:
			return 1;
		case 0:
			return func_51(iParam0, 2);
		case 2:
			return func_165(iParam0, 24);
		case 1:
			return func_164(iParam0, 2);
		case 4:
			return 1;
		default:
	}
	return 0;
}

bool func_164(int iParam0, int iParam1)//Position - 0x3A61
{
	return __LIB_9__.func_807(&(Local_202.f_130.f_1[iParam0 /*15*/]), iParam1);
}

bool func_165(int iParam0, int iParam1)//Position - 0x3A79
{
	return __LIB_9__.func_807(&(Local_202.f_163.f_1[iParam0 /*12*/]), iParam1);
}

int func_166()//Position - 0x3A91
{
	switch (func_156())
	{
		case 3:
			return Local_202.f_19;
		case 0:
			return Local_202.f_38;
		case 2:
			return Local_202.f_163;
		case 1:
			return Local_202.f_130;
		case 4:
			return 32;
		default:
	}
	return 0;
}

float func_167()//Position - 0x3AE2
{
	if (Local_210.f_530.f_4 != 0)
	{
		Call_Loc(Local_210.f_530.f_4);
		return StackVal;
	}
	return 200f;
}

float func_168()//Position - 0x3B07
{
	if (Local_210.f_530.f_7 != 0)
	{
		Call_Loc(Local_210.f_530.f_7);
		return StackVal;
	}
	return 400f;
}

void func_170(int iParam0, int iParam1)//Position - 0x3B3F
{
	if (!bLocal_512)
	{
		return;
	}
	Local_575.f_22[iParam0 /*24*/].f_1 = iParam1;
}

void func_171(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x3B5E
{
	*iParam4 = __LIB_14__.func_764(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

void func_173()//Position - 0x3BC1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	iVar4 = 0;
	while (iVar4 < Local_202.f_163)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_575.f_136[iVar4 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_210.f_407.f_36 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_210.f_407.f_36);
			}
		}
		if (func_190(iVar4) > 1 && func_190(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_189(iVar4, 3);
				}
				else if (func_188(iVar4))
				{
					func_189(iVar4, 3);
				}
			}
			else
			{
				func_189(iVar4, 3);
			}
		}
		func_184(iVar4, iVar0);
		switch (func_190(iVar4))
		{
			case 0:
				if (func_183(iVar4))
				{
					func_189(iVar4, 1);
				}
				break;
			case 1:
				if ((!bVar1 && func_182(iVar4)) && func_174(iVar4))
				{
					func_189(iVar4, 2);
					bVar1 = true;
				}
				break;
			case 2:
				break;
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_174(int iParam0)//Position - 0x3CD8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[iParam0 /*5*/]))
	{
		Var1 = { func_181(iParam0) };
		Var2 = { func_180(iParam0) };
		if (__LIB_0__.func_86(Var1))
		{
			return 0;
		}
		iVar3 = Local_202.f_163.f_1[iParam0 /*12*/].f_3;
		if (!__LIB_0__.func_584(iVar3))
		{
			return 0;
		}
		if (__LIB_1__.func_262(&(Local_575.f_136[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_165(iParam0, 22), 1, 0, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_575.f_136[iParam0 /*5*/]);
			ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, true);
			func_175(iParam0, iVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, int iParam1)//Position - 0x3D92
{
	var uVar0;
	var uVar1;
	NETWORK::NETWORK_SET_OBJECT_SCOPE_DISTANCE(NETWORK::NET_TO_OBJ(Local_575.f_136[iParam0 /*5*/]), 4.2E-43f);
	ENTITY::SET_ENTITY_PROOFS(iParam1, func_165(iParam0, 17), func_165(iParam0, 18), func_165(iParam0, 19), func_165(iParam0, 20), func_165(iParam0, 21), false, false, false);
	func_177(iParam0, 0);
	if (func_165(iParam0, 32))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (!func_165(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_575.f_136[iParam0 /*5*/]));
	}
	if (func_165(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_575.f_136[iParam0 /*5*/], true, true);
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_575.f_136[iParam0 /*5*/], 1);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_165(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (func_165(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, true);
	}
	if (func_165(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, false);
	}
	if (func_165(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
	}
	if (func_165(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (func_165(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_575.f_136[iParam0 /*5*/]), 1200);
	}
	if (func_165(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_165(iParam0, 9))
	{
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_575.f_136[iParam0 /*5*/]), true);
	}
	if (func_165(iParam0, 34))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, func_181(iParam0), false, false, true);
	}
	else if (func_165(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, func_181(iParam0), true, false, false, true);
	}
	if (func_165(iParam0, 33))
	{
		ENTITY::SET_ENTITY_ROTATION(iParam1, func_180(iParam0), 2, true);
	}
	if (func_165(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (func_165(iParam0, 11))
	{
		ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iParam1, true);
	}
	if (func_176(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	if (func_165(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
	}
	if (func_165(iParam0, 14))
	{
		Stack.Push(Local_210.f_407.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_210.f_407.f_24);
		if (StackVal && StackVal)
		{
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, true);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar1);
		}
	}
	if (Local_210.f_407.f_33 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_407.f_33);
	}
}

int func_176(int iParam0)//Position - 0x4003
{
	if (func_165(iParam0, 12))
	{
		return 1;
	}
	if (func_41(22))
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0, int iParam1)//Position - 0x4028
{
	if (__LIB_11__.func_631(&(Local_575.f_136[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

Vector3 func_180(int iParam0)//Position - 0x4120
{
	struct<3> Var0;
	if (Local_210.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__.func_86(Var0))
	{
		Var0 = { Local_202.f_163.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_181(int iParam0)//Position - 0x4164
{
	struct<3> Var0;
	if (Local_210.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__.func_86(Var0))
	{
		Var0 = { Local_202.f_163.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_182(int iParam0)//Position - 0x41A8
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_514))
	{
		return 0;
	}
	return 1;
}

int func_183(int iParam0)//Position - 0x41BF
{
	if (Local_210.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_23);
		return StackVal;
	}
	return 1;
}

void func_184(int iParam0, int iParam1)//Position - 0x41E2
{
	if (Local_202.f_163.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_190(iParam0) > 1 && func_190(iParam0) < 3)
	{
		if (func_186(iParam0, iParam1))
		{
			func_185(iParam0, 8);
		}
		else
		{
			func_177(iParam0, 8);
		}
	}
}

void func_185(int iParam0, int iParam1)//Position - 0x4233
{
	if (__LIB_1__.func_101(&(Local_575.f_136[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_186(int iParam0, int iParam1)//Position - 0x424F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	return func_187(iParam0, 8);
}

bool func_187(int iParam0, int iParam1)//Position - 0x4268
{
	return __LIB_9__.func_807(&(Local_575.f_136[iParam0 /*5*/].f_2), iParam1);
}

int func_188(int iParam0)//Position - 0x4281
{
	if (Local_210.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_27);
		return StackVal;
	}
	return 0;
}

void func_189(int iParam0, int iParam1)//Position - 0x42A4
{
	Local_575.f_136[iParam0 /*5*/].f_1 = iParam1;
}

int func_190(int iParam0)//Position - 0x42B9
{
	return Local_575.f_136[iParam0 /*5*/].f_1;
}

void func_191()//Position - 0x42CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	iVar1 = -1;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_130)
	{
		bVar6 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]);
		if (bVar6)
		{
			iVar3 = NETWORK::NET_TO_VEH(Local_575.f_119[iVar0 /*8*/]);
			bVar5 = __LIB_2__.func_63(Local_575.f_119[iVar0 /*8*/]);
			bVar7 = __LIB_7__.func_181(iVar3, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar5)
			{
				iVar1 = func_478(iVar0, 2);
			}
		}
		if (__LIB_14__.func_761(iVar0) > 2)
		{
			if (__LIB_14__.func_761(iVar0) != 5 && __LIB_14__.func_761(iVar0) != 3)
			{
				if (!bVar6)
				{
					__LIB_14__.func_768(iVar0, 5);
				}
				else if (!bVar5)
				{
					__LIB_14__.func_768(iVar0, 5);
				}
				else if (func_476(iVar0, iVar3))
				{
					__LIB_14__.func_768(iVar0, 5);
				}
				else
				{
					__LIB_21__.func_436(iVar0, &iVar2);
				}
			}
		}
		else
		{
			__LIB_21__.func_436(iVar0, &iVar2);
		}
		if (Local_210.f_352.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar3);
			Stack.Push(bVar5);
			Stack.Push(iVar1);
			Call_Loc(Local_210.f_352.f_46);
		}
		func_472(iVar0, iVar3);
		switch (__LIB_14__.func_761(iVar0))
		{
			case 0:
				if (func_471(iVar0))
				{
					__LIB_14__.func_768(iVar0, 2);
				}
				break;
			case 1:
				if (!bVar6)
				{
					if (func_470(iVar0))
					{
						__LIB_14__.func_768(iVar0, 2);
					}
				}
				else
				{
					__LIB_1__.func_162(&(Local_575.f_119[iVar0 /*8*/]));
				}
				break;
			case 2:
				if (!bVar4)
				{
					if (func_469(iVar0))
					{
						if (func_208(iVar0))
						{
							__LIB_14__.func_768(iVar0, 4);
							bVar4 = true;
						}
					}
				}
				break;
			case 4:
				if (bVar6)
				{
					if (func_207(iVar0, iVar3))
					{
						__LIB_14__.func_768(iVar0, 5);
					}
					else
					{
						if (bVar5)
						{
							func_206(iVar0, iVar3);
							func_197(iVar0, iVar3);
						}
						break;
					case 5:
						if (func_164(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar6)
						{
							if (func_207(iVar0, iVar3))
							{
							}
							else
							{
								if (func_164(iVar0, 23))
								{
									if (bVar6)
									{
										__LIB_1__.func_162(&(Local_575.f_119[iVar0 /*8*/]));
									}
								}
								if (func_196(iVar0))
								{
									__LIB_1__.func_162(&(Local_575.f_119[iVar0 /*8*/]));
									__LIB_14__.func_768(iVar0, 1);
								}
								break;
							case 3:
								break;
							case 6:
								if (bVar6 && func_195(iVar0, iVar3))
								{
									__LIB_1__.func_162(&(Local_575.f_119[iVar0 /*8*/]));
								}
								break;
							case 7:
								break;
						}
						if (bVar7)
						{
							__LIB_14__.func_766(iVar0, 13);
						}
						else
						{
							__LIB_14__.func_765(iVar0, 13);
						}
					}
					iVar0++;
					func_192(&iVar2);
				}
void func_192(int iParam0)//Position - 0x4542
{
	if (Local_575.f_182.f_16 != *iParam0)
	{
		Local_575.f_182.f_16 = *iParam0;
	}
}

int func_195(int iParam0, int iParam1)//Position - 0x4599
{
	if (func_164(iParam0, 23) || __LIB_14__.func_762(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_210.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_210.f_352.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0x45E2
{
	if (func_540() != 0)
	{
		return 0;
	}
	if (__LIB_14__.func_762(iParam0, 15))
	{
		return func_53(iParam0);
	}
	if (func_164(iParam0, 13))
	{
		if (Local_210.f_352.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_352.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1)//Position - 0x4634
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (!__LIB_14__.func_762(iParam0, 15))
	{
		return;
	}
	iVar0 = func_55(1, iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar2 = SYSTEM::VDIST(Var1, func_198());
	if (MISC::ABSF((fVar2 - Local_575.f_182[iVar0 /*5*/].f_4)) > 10f)
	{
		Local_575.f_182[iVar0 /*5*/].f_4 = fVar2;
	}
	iVar3 = func_157(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		fVar2 = SYSTEM::VDIST(Var1, ENTITY::GET_ENTITY_COORDS(iVar3, false));
		if (MISC::ABSF((fVar2 - Local_575.f_182[iVar0 /*5*/].f_3)) > 10f)
		{
			Local_575.f_182[iVar0 /*5*/].f_3 = fVar2;
		}
	}
}

Vector3 func_198()//Position - 0x46E8
{
	if (Local_210.f_563.f_4.f_2 != 0)
	{
		Call_Loc(Local_210.f_563.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_199(func_205());
}

Vector3 func_199(int iParam0)//Position - 0x4714
{
	struct<3> Var0;
	struct<3> Var1;
	if (bLocal_511 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_521))
		{
			Var0 = { __LIB_21__.func_107(iParam0) };
			if (!__LIB_0__.func_86(Var0))
			{
				return Var0;
			}
		}
		Var1 = { __LIB_13__.func_347(iParam0) };
		if (!__LIB_0__.func_86(Var1))
		{
			return Var1;
		}
	}
	return __LIB_13__.func_259(iParam0);
}

int func_205()//Position - 0x4A98
{
	if (Local_210.f_563.f_4.f_1 != 0)
	{
		Call_Loc(Local_210.f_563.f_4.f_1);
		return StackVal;
	}
	if (iLocal_517 != -1)
	{
		return Local_498.f_1[Local_582[iLocal_517 /*62*/].f_32 /*4*/];
	}
	return 0;
}

void func_206(int iParam0, int iParam1)//Position - 0x4AD8
{
	struct<3> Var0;
	float fVar1;
	if (iParam0 != Local_202.f_130.f_32)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar1 = 500f;
	if (__LIB_0__.func_86(Local_575.f_250))
	{
		Local_575.f_250 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_575.f_250) > (550f * 550f))
	{
		if (Local_575.f_230 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_575.f_230, false);
		}
		Local_575.f_250 = { Var0 };
		Local_575.f_230 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_575.f_250, fVar1, 1f, 0.02f, false, true);
	}
}

int func_207(int iParam0, int iParam1)//Position - 0x4B76
{
	Stack.Push(Local_210.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_210.f_352.f_52);
	if (StackVal && StackVal)
	{
		__LIB_1__.func_162(&(Local_575.f_119[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x4BAF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	func_133(1, iParam0);
	iVar0 = Local_202.f_130.f_1[iParam0 /*15*/].f_3;
	func_468(&iVar0, iParam0);
	if (!__LIB_0__.func_584(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (__LIB_0__.func_86(Local_575.f_244))
	{
		if (__LIB_14__.func_762(iParam0, 15))
		{
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				if (!func_463(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (!func_455(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			if (func_164(iParam0, 35) && !__LIB_14__.func_762(iParam0, 24))
			{
				if (!__LIB_36__.func_199(Local_202.f_130.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
				{
					__LIB_14__.func_766(iParam0, 24);
				}
			}
			if (func_164(iParam0, 17) || __LIB_14__.func_762(iParam0, 24))
			{
				if (!func_329(iParam0, &(Local_575.f_244), &(Local_575.f_253)))
				{
					bVar1 = false;
				}
			}
			else if (func_164(iParam0, 25))
			{
				Stack.Push(iParam0);
				Stack.Push(&(Local_575.f_244));
				Stack.Push(&(Local_575.f_253));
				Call_Loc(Local_210.f_352.f_37);
				if (!StackVal)
				{
					bVar1 = false;
				}
			}
			else if (func_164(iParam0, 18))
			{
				if (!func_455(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (func_164(iParam0, 19))
			{
				if (!func_463(iParam0))
				{
					bVar1 = false;
				}
			}
			else
			{
				Local_575.f_244 = { Local_202.f_130.f_1[iParam0 /*15*/].f_4 };
				Local_575.f_253 = Local_202.f_130.f_1[iParam0 /*15*/].f_7;
			}
		}
	}
	if (bVar1)
	{
		if (!func_164(iParam0, 30))
		{
			__LIB_32__.func_562(Local_575.f_244, 30f, 0);
			MISC::CLEAR_AREA(Local_575.f_244, 30f, false, false, false, true);
		}
		if (__LIB_18__.func_220(&(Local_575.f_119[iParam0 /*8*/]), iVar0, Local_575.f_244, Local_575.f_253, 1, 1, 1, 0, 1, 1, 0, 0, Local_575.f_244.f_2 <= -100f, 0))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_575.f_119[iParam0 /*8*/]);
			func_209(iParam0, iVar2);
			func_105();
			return 1;
		}
	}
	else
	{
		func_105();
	}
	return 0;
}

void func_209(int iParam0, int iParam1)//Position - 0x4DCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!func_228(iParam0, iParam1))
	{
		func_227(iParam0, iParam1);
	}
	if (func_226(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_164(iParam0, 10));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_164(iParam0, 3));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_164(iParam0, 6));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_164(iParam0, 5));
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
	}
	if (func_164(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (func_164(iParam0, 25))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_575.f_244, false, false, true);
	}
	if (func_164(iParam0, 8))
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
		VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, false);
	}
	if (func_164(iParam0, 28))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_575.f_119[iParam0 /*8*/], true, true);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (__LIB_14__.func_762(iParam0, 14))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
		VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
		if (func_225(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, func_224(iParam0, iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
		}
		__LIB_21__.func_100(iParam1, iVar0);
		__LIB_1__.func_419(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
		VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, func_164(iParam0, 7), false);
		__LIB_13__.func_332(iParam0, iParam1);
		iVar1 = func_219(iParam0);
		if (iVar1 != -1 && __LIB_14__.func_767(iVar1) != -1)
		{
			__LIB_13__.func_260(NETWORK::NET_TO_ENT(Local_575.f_119[iParam0 /*8*/]), Local_575.f_285.f_1[__LIB_14__.func_767(iVar1) /*5*/].f_1);
		}
	}
	if (func_164(iParam0, 11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_164(iParam0, 32))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
		VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, true);
	}
	if (func_164(iParam0, 33))
	{
		VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
	}
	if (__LIB_13__.func_331(iParam1))
	{
		if (func_164(iParam0, 34))
		{
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, true, true);
		}
		else
		{
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, false, true);
		}
	}
	if (__LIB_14__.func_762(iParam0, 15))
	{
		iVar2 = func_215(iParam0);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam1, ENTITY::GET_ENTITY_SPEED(iVar2));
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
			VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(iParam1, true);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam1, false);
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) > 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam1, 0);
			if (!VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18))
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(iParam1, 18, true);
			}
		}
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			if (func_164(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1))
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
		{
			VEHICLE::SET_BOAT_ANCHOR(iParam1, true);
		}
	}
	if (__LIB_14__.func_762(iParam0, 15) || func_164(iParam0, 19))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
			PHYSICS::ACTIVATE_PHYSICS(iParam1);
			ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
		}
	}
	VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam1, true);
	VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam1, true);
	if (!__LIB_0__.func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_202.f_130.f_1[iParam0 /*15*/].f_3))
	{
		func_212(iParam0, iParam1);
	}
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, true);
	__LIB_21__.func_99(iParam1);
	NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_575.f_119[iParam0 /*8*/], true);
	if (Local_210.f_352.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_352.f_43);
	}
}

void func_212(int iParam0, int iParam1)//Position - 0x51EC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (VEHICLE::GET_IS_DOOR_VALID(iParam1, iVar0))
		{
			iVar1 = func_213(iParam0, iVar0);
			if (iVar1 != -1)
			{
				switch (iVar1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 0f);
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, true, true, true);
						break;
					case 1:
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, false, false, true);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 1f);
						break;
					case 2:
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, false, false, true);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 1, 0.3f);
						break;
					case 3:
						VEHICLE::SET_VEHICLE_DOOR_BROKEN(iParam1, iVar0, true);
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_213(int iParam0, int iParam1)//Position - 0x5298
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 8;
			break;
		case 3:
			iVar0 = 12;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 20;
			break;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (BitTest(Local_202.f_130.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_215(int iParam0)//Position - 0x5329
{
	return func_158(func_160(func_55(1, iParam0), 0));
}

int func_219(int iParam0)//Position - 0x53B1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (Local_575.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_224(int iParam0, int iParam1)//Position - 0x5495
{
	if (Local_210.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		default:
	}
	return 0.2f;
}

bool func_225(int iParam0, int iParam1)//Position - 0x54CD
{
	return func_224(iParam0, iParam1) != 1f;
}

int func_226(int iParam0)//Position - 0x54DF
{
	if (func_41(22))
	{
		return 1;
	}
	return 0;
}

void func_227(int iParam0, int iParam1)//Position - 0x54F5
{
	if (Local_202.f_130.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_202.f_130.f_1[iParam0 /*15*/].f_8, Local_202.f_130.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_202.f_130.f_1[iParam0 /*15*/].f_8, Local_202.f_130.f_1[iParam0 /*15*/].f_8);
	}
}

int func_228(var uParam0, int iParam1)//Position - 0x5549
{
	struct<101> Var0;
	if (Local_210.f_352.f_44 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_210.f_352.f_44);
		if (StackVal)
		{
			func_229(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_229(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x55B4
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
			func_281(iParam0, uParam1, bParam2, bParam3);
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

void func_281(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xCDEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!__LIB_26__.func_797(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (__LIB_6__.func_820(uParam1->f_5) || __LIB_6__.func_820(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || __LIB_0__.func_289(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && __LIB_0__.func_262())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !__LIB_0__.func_111(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						__LIB_0__.func_288(iParam0, uParam1->f_69);
					}
				}
				else
				{
					__LIB_0__.func_288(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			__LIB_18__.func_176(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((__LIB_27__.func_3() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

bool func_329(int iParam0, var uParam1, var uParam2)//Position - 0x1368E
{
	struct<35> Var0;
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_330(Local_202.f_130.f_1[iParam0 /*15*/].f_4, Local_202.f_130.f_1[iParam0 /*15*/].f_4, Local_202.f_130.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_330(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x136D9
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
		if (func_442(Param0))
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
		if (!uParam6->f_27 || (((((((__LIB_26__.func_952(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_36__.func_230(Param0, iParam2);
		}
		if (__LIB_36__.func_250(Param0))
		{
			__LIB_36__.func_230(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_36__.func_199(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__.func_374(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
					func_350(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
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
						func_345(Global_2667225.f_683, 0);
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
								if (__LIB_25__.func_370(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_38__.func_215(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_345(Global_2667225.f_683, 0);
									__LIB_0__.func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_345(Global_2667225.f_683, 0);
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
			func_350(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
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

void func_345(struct<3> Param0, int iParam1)//Position - 0x149A6
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__.func_607(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_345(Var0, iParam1 + 1);
	}
}

void func_350(var uParam0, var uParam1, var uParam2)//Position - 0x14BBA
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_399(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_351(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_351(var uParam0, var uParam1, var uParam2)//Position - 0x14C29
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
		if (func_395(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
																		if ((uParam2->f_12 && !__LIB_32__.func_84(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_395(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																							if (__LIB_36__.func_199(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_36__.func_199(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_38__.func_215(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_36__.func_186(Var1, uParam2->f_54, &fVar23);
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
																													func_359(Var1, fVar2, iVar14);
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
							func_357(0, uParam2);
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
						if (func_395(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__.func_371(&Var27, bVar29))
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

void func_357(int iParam0, var uParam1)//Position - 0x15988
{
	if (!__LIB_7__.func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__.func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_357(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_357(iParam0 + 1, uParam1);
	}
}

void func_359(struct<3> Param0, float fParam1, int iParam2)//Position - 0x15A2E
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
			func_359(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_395(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x173F3
{
	int iVar0;
	bool bVar1;
	if (func_442(Param0))
	{
		if (func_398(uParam1, bParam4, 0, 1, 1))
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

int func_398(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1763D
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
							if (func_398(&Var1, 0, 0, 0, 1))
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

int func_399(var uParam0, var uParam1, var uParam2)//Position - 0x17718
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
			if (func_395(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
							if ((uParam2->f_12 && !__LIB_32__.func_84(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_395(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
												if (__LIB_36__.func_199(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_36__.func_199(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_38__.func_215(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_36__.func_186(Var3, uParam2->f_54, &fVar12);
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
																		func_359(Var3, fVar4, iVar5);
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
					func_357(0, uParam2);
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

int func_442(struct<3> Param0)//Position - 0x20810
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
				if (!func_398(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_398(&Param0, 0, 1, 0, 1))
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
					if (!func_398(&Var1, 0, 0, 0, 1))
					{
						if (!func_398(&Param0, 0, 0, 0, 1))
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

int func_455(int iParam0)//Position - 0x20BB2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (func_461(iParam0, &Var1, &Var2, &fVar4, &iVar0))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var2, Var1, fVar4, &Var3))
		{
			if (func_457(iParam0, Var3, Var2, iVar0))
			{
				Local_575.f_244 = { Var3 };
				Local_575.f_253 = __LIB_0__.func_670(Var3, Var2);
				return 1;
			}
		}
	}
	return 0;
}

int func_457(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3)//Position - 0x20C2F
{
	if (__LIB_14__.func_762(iParam0, 15))
	{
		if (!func_458(iParam0, Param1, Param2, iParam3))
		{
			return 0;
		}
	}
	if (Local_210.f_352.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_210.f_352.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!__LIB_36__.func_199(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_458(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3)//Position - 0x20CB5
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = SYSTEM::VDIST(Param1, Param2);
	if (fVar0 > func_460())
	{
		return 0;
	}
	fVar1 = SYSTEM::VDIST(Param1, func_198());
	if (fVar1 < func_167())
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam3, Param1) };
		if (MISC::ABSF(Var2.f_0) > func_459())
		{
			return 0;
		}
	}
	return 1;
}

float func_459()//Position - 0x20D1F
{
	if (Local_210.f_530.f_6 != 0)
	{
		Call_Loc(Local_210.f_530.f_6);
		return StackVal;
	}
	return 100f;
}

float func_460()//Position - 0x20D44
{
	if (Local_210.f_530.f_5 != 0)
	{
		Call_Loc(Local_210.f_530.f_5);
		return StackVal;
	}
	return Local_202.f_272.f_6;
}

int func_461(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x20D6B
{
	if (__LIB_14__.func_762(iParam0, 15))
	{
		*uParam4 = func_215(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam4) && !ENTITY::IS_ENTITY_DEAD(*uParam4, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam4) };
			*uParam2 = { ENTITY::GET_ENTITY_COORDS(*uParam4, false) };
		}
		else
		{
			return 0;
		}
	}
	else if (Local_210.f_352.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_202.f_130.f_1[iParam0 /*15*/].f_4 };
		*uParam2 = { Local_202.f_130.f_1[iParam0 /*15*/].f_4 };
	}
	if (iLocal_534 > 0)
	{
		func_462(uParam1);
	}
	if (!__LIB_14__.func_762(iParam0, 15) && Local_210.f_352.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_41);
		*uParam3 = StackVal;
	}
	else if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 120f;
	}
	else
	{
		*uParam3 = 60f;
	}
	return 1;
}

void func_462(var uParam0)//Position - 0x20E95
{
	if (iLocal_534 < 5)
	{
		switch (iLocal_534)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_534 = 0;
	}
	iLocal_534++;
}

int func_463(int iParam0)//Position - 0x20F3A
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (func_465(iParam0, &Var2, &Var1, &iVar0))
	{
		if (func_464(iParam0, Var2, Var1, iVar0))
		{
			Local_575.f_244 = { Var2 };
			Local_575.f_253 = __LIB_0__.func_670(Var2, Var1);
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3)//Position - 0x20F85
{
	float fVar0;
	if (__LIB_14__.func_762(iParam0, 15))
	{
		if (!func_458(iParam0, Param1, Param2, iParam3))
		{
			return 0;
		}
	}
	if (!__LIB_36__.func_199(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, true, false))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Param1.f_0, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_465(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x21017
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	fVar0 = 200f;
	if (__LIB_14__.func_762(iParam0, 15))
	{
		*uParam3 = func_215(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			return 0;
		}
		if (func_156() == 4)
		{
			bVar1 = func_160(func_55(1, iParam0), 0);
			bVar2 = bVar1;
			if (!__LIB_1__.func_264(bVar2, 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
			{
				return 0;
			}
			iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar2);
			*uParam2 = { Local_582[iVar3 /*62*/].f_34 };
		}
		else
		{
			*uParam2 = { ENTITY::GET_ENTITY_COORDS(*uParam3, false) };
		}
		fVar0 = (func_460() / 2f);
	}
	else
	{
		*uParam2 = { Local_202.f_130.f_1[iParam0 /*15*/].f_4 };
	}
	*uParam1 = { __LIB_1__.func_249(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_534) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_534) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + __LIB_13__.func_262());
	iLocal_534++;
	if (iLocal_534 >= 12)
	{
		iLocal_534 = 0;
	}
	return 1;
}

void func_468(var uParam0, int iParam1)//Position - 0x21177
{
	int iVar0;
	if (!__LIB_14__.func_762(iParam1, 15))
	{
		return;
	}
	if (Local_210.f_530.f_10 == 0)
	{
		return;
	}
	Call_Loc(Local_210.f_530.f_10);
	iVar0 = StackVal;
	if (iVar0 == 0 || !STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	*uParam0 = iVar0;
}

int func_469(int iParam0)//Position - 0x211C4
{
	if (!func_136(1, iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_514))
	{
		return 0;
	}
	Stack.Push(Local_210.f_352.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_470(int iParam0)//Position - 0x2120C
{
	int iVar0;
	if (__LIB_14__.func_762(iParam0, 15))
	{
		if (!__LIB_2__.func_47(&(Local_575.f_182.f_11), func_142(), 0))
		{
			return 0;
		}
	}
	if (Local_210.f_352.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_2__.func_47(&(Local_575.f_119[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__.func_579(&(Local_575.f_119[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

int func_471(int iParam0)//Position - 0x21283
{
	if (__LIB_14__.func_762(iParam0, 15))
	{
		return func_144();
	}
	if (Local_210.f_352.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_23);
		return StackVal;
	}
	return 1;
}

void func_472(int iParam0, int iParam1)//Position - 0x212B8
{
	if (Local_202.f_130.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (__LIB_14__.func_761(iParam0) > 2 && __LIB_14__.func_761(iParam0) < 5)
	{
		if (func_473(iParam0, iParam1))
		{
			__LIB_14__.func_766(iParam0, 2);
		}
		else
		{
			__LIB_14__.func_765(iParam0, 2);
		}
	}
}

bool func_473(int iParam0, int iParam1)//Position - 0x21307
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = __LIB_13__.func_334(iParam1);
		if (iVar0 != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			return func_152(iVar1, 2);
		}
	}
	return __LIB_14__.func_762(iParam0, 2);
}

int func_476(int iParam0, int iParam1)//Position - 0x213C1
{
	var uVar0;
	if (__LIB_14__.func_762(iParam0, 15))
	{
		if (func_54(iParam0))
		{
			uVar0 = func_55(1, iParam0);
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_478(int iParam0, int iParam1)//Position - 0x21404
{
	int iVar0;
	if (iParam1 != func_480())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (iParam0 == __LIB_14__.func_769(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_480()//Position - 0x21452
{
	return Local_202.f_19.f_5[0 /*13*/].f_11;
}

void func_487()//Position - 0x21651
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		func_498(iVar0);
		func_493(iVar0);
		iVar0++;
	}
	func_488();
}

void func_488()//Position - 0x2167E
{
	if (Local_202.f_19 <= 0)
	{
		return;
	}
	if (!func_492())
	{
		return;
	}
	Stack.Push(Local_210.f_114.f_36 != 0);
	Call_Loc(Local_210.f_114.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_491())
	{
		if (func_490())
		{
			func_8(5);
		}
	}
	else if (func_489())
	{
		func_8(5);
	}
}

int func_489()//Position - 0x216DA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (__LIB_14__.func_763(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_490()//Position - 0x21706
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (!__LIB_14__.func_763(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_491()//Position - 0x21733
{
	return func_41(0);
}

int func_492()//Position - 0x21740
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (!__LIB_14__.func_763(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_493(int iParam0)//Position - 0x2176D
{
	if (__LIB_14__.func_763(iParam0, 29) && func_496(iParam0))
	{
		if (func_495(iParam0))
		{
			__LIB_14__.func_770(iParam0, 29);
		}
	}
}

int func_495(int iParam0)//Position - 0x217B8
{
	int iVar0;
	if (func_496(iParam0))
	{
		iVar0 = __LIB_14__.func_769(iParam0);
		return (Local_575.f_119[iVar0 /*8*/].f_1 == 5 || __LIB_14__.func_763(iParam0, 0));
	}
	return 1;
}

bool func_496(int iParam0)//Position - 0x217EF
{
	return (__LIB_14__.func_771(iParam0) && func_480() == 2);
}

void func_498(int iParam0)//Position - 0x2181D
{
	if (Local_202.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_23);
		if (StackVal)
		{
			if (!__LIB_14__.func_763(iParam0, 6))
			{
				if (__LIB_0__.func_584(Local_202.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PICKUPS(1))
					{
						if (func_500(iParam0))
						{
							__LIB_14__.func_772(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

int func_500(int iParam0)//Position - 0x21897
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_575.f_2[iParam0]))
	{
		Var0 = { func_536(iParam0) };
		fVar1 = Local_202.f_19.f_5[iParam0 /*13*/].f_6;
		Var2 = { Local_202.f_19.f_5[iParam0 /*13*/].f_7 };
		if (__LIB_0__.func_86(Var0))
		{
			return 0;
		}
		Local_575.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_535(iParam0), Var0, !func_534(iParam0, 0), Local_202.f_19.f_5[iParam0 /*13*/].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), fVar1);
		if (!__LIB_0__.func_86(Var2))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), Var2, 2, true);
		}
		func_528(iParam0, Var0);
		if (Local_210.f_114.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_114.f_30);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_575.f_2[iParam0]))
	{
		if (func_501(&(Local_575.f_2.f_13[iParam0]), 0, iParam0, func_527(iParam0), __LIB_2__.func_574(), __LIB_0__.func_109(iParam0), __LIB_0__.func_114(iParam0)))
		{
			__LIB_13__.func_260(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), Local_575.f_285.f_1[__LIB_14__.func_767(iParam0) /*5*/].f_1);
			Local_575.f_2.f_11[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
			return 1;
		}
	}
	return 0;
}

int func_501(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x219DF
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_523();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_575.f_285 != iParam4)
	{
		Local_575.f_285 = iParam4;
	}
	if (Local_575.f_285.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_575.f_285.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_575.f_285.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (__LIB_32__.func_968(&(Local_575.f_285.f_1[*uParam0 /*5*/]), iParam3, *uParam0, Local_575.f_285, &(Local_575.f_260), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_523()//Position - 0x2223A
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!__LIB_2__.func_467(Local_575.f_285.f_1[iVar1 /*5*/]))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_527(int iParam0)//Position - 0x22292
{
	return iLocal_514;
}

void func_528(int iParam0, struct<3> Param1)//Position - 0x2229D
{
	if (__LIB_14__.func_771(iParam0))
	{
		__LIB_14__.func_772(iParam0, 29);
		if (iParam0 != func_533(__LIB_14__.func_769(iParam0)))
		{
			__LIB_14__.func_772(iParam0, 40);
		}
	}
	else if (!func_534(iParam0, 7))
	{
		__LIB_14__.func_772(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_575.f_2[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true, true, false, true, true, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), true);
	OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
	OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
	if (__LIB_0__.func_114())
	{
		OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
	}
	if (func_531(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
	}
	else
	{
		__LIB_14__.func_772(iParam0, 28);
	}
	if (!func_534(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]));
	}
	if (func_534(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), Param1, true, false, false, true);
	}
	if (func_534(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
	}
	if (func_534(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), true);
	}
	if ((func_534(iParam0, 6) || func_534(iParam0, 7)) || __LIB_14__.func_771(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), false, false);
	}
	if (Local_202.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		__LIB_14__.func_772(iParam0, 23);
	}
	if (func_530(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), true);
	}
	if (func_534(iParam0, 9) || Local_210.f_114.f_38 != 0)
	{
		__LIB_14__.func_773(iParam0, 1, 0);
	}
}

int func_530(int iParam0)//Position - 0x224FD
{
	if (func_534(iParam0, 8))
	{
		return 1;
	}
	if (func_41(22))
	{
		return 1;
	}
	return 0;
}

bool func_531(int iParam0)//Position - 0x22522
{
	if (__LIB_14__.func_763(iParam0, 29))
	{
		return 0;
	}
	return !func_534(iParam0, 5);
}

int func_533(int iParam0)//Position - 0x2254A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (Local_575.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_534(int iParam0, int iParam1)//Position - 0x2257D
{
	return __LIB_9__.func_807(&(Local_202.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_535(int iParam0)//Position - 0x22595
{
	if (Local_210.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_28);
		return StackVal;
	}
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS_UPRIGHT");
}

Vector3 func_536(int iParam0)//Position - 0x225BA
{
	if (func_538(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_496(iParam0))
	{
		return Local_202.f_130.f_1[__LIB_14__.func_769(iParam0) /*15*/].f_4 + __LIB_13__.func_338(iParam0, Local_202.f_130.f_1[__LIB_14__.func_769(iParam0) /*15*/].f_3);
	}
	return Local_202.f_19.f_5[iParam0 /*13*/].f_3;
}

bool func_538(var uParam0)//Position - 0x2274D
{
	struct<3> Var0;
	if (Local_210.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !__LIB_0__.func_86(Var0);
}

int func_540()//Position - 0x22783
{
	return Local_575.f_209;
}

void func_541(int iParam0)//Position - 0x22790
{
	Local_575.f_208 = iParam0;
}

int func_542()//Position - 0x2279F
{
	int iVar0;
	int iVar1;
	if (!func_781(__LIB_14__.func_4(), __LIB_14__.func_3()))
	{
		return 0;
	}
	if (!func_557())
	{
		return 0;
	}
	__LIB_0__.func_371();
	__LIB_0__.func_371();
	Local_575.f_220 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(__LIB_1__.func_388(), -1, 0);
	func_553();
	func_550();
	func_549();
	func_547();
	func_545();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_575.f_231[iVar0] = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Local_575.f_173[iVar1] = -1;
		iVar1++;
	}
	Local_575.f_224 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_575.f_217), &(Local_575.f_218));
	Global_1892703[iLocal_515 /*599*/].f_526 = Local_575.f_217;
	Global_1892703[iLocal_515 /*599*/].f_527 = Local_575.f_218;
	func_544();
	if (!__LIB_0__.func_109())
	{
		return 0;
	}
	Call_Loc(Local_210.f_1);
	return StackVal;
}

void func_544()//Position - 0x2288B
{
	if (Local_575.f_225 == -1)
	{
		Local_575.f_225 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_545()//Position - 0x228A5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		Local_575.f_22[iVar0 /*24*/].f_15 = func_546(iVar0);
		iVar0++;
	}
}

int func_546(int iParam0)//Position - 0x228D3
{
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_202.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_202.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_202.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_547()//Position - 0x22929
{
	Local_575.f_182.f_14 = func_548();
}

var func_548()//Position - 0x2293C
{
	return Local_202.f_272.f_3;
}

void func_549()//Position - 0x2294B
{
	Local_575.f_210 = 2;
}

void func_550()//Position - 0x22959
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		Local_575.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	func_551();
}

void func_551()//Position - 0x22986
{
	int iVar0;
	if (__LIB_0__.func_114())
	{
		if (func_43(&(Local_575.f_2.f_9), &(Local_575.f_173.f_3)))
		{
			func_16(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_19)
		{
			Local_575.f_2.f_9[iVar0] = Local_202.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

void func_553()//Position - 0x229E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		iVar3 = Local_202.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_202.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					__LIB_14__.func_766(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		iVar2 = Local_202.f_272[iVar5];
		if (iVar2 != -1)
		{
			__LIB_14__.func_766(iVar2, 15);
		}
		iVar5++;
	}
	iVar1 = 0;
	while (iVar1 < Local_202.f_38)
	{
		iVar2 = Local_202.f_38.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && __LIB_14__.func_762(iVar2, 15))
		{
			if (Local_202.f_38.f_1[iVar1 /*21*/].f_9 == -1)
			{
				iVar5 = 0;
				while (iVar5 < 2)
				{
					if (iVar2 == Local_202.f_272[iVar5])
					{
						Local_575.f_182[iVar5 /*5*/].f_2 = iVar1;
					}
					iVar5++;
				}
			}
			__LIB_14__.func_759(iVar1, 19);
		}
		iVar6 = 0;
		while (iVar6 < Local_202.f_291)
		{
			if (Local_202.f_291.f_1[iVar6 /*10*/] == iVar1)
			{
				__LIB_14__.func_759(iVar1, 21);
			}
			iVar6++;
		}
		iVar1++;
	}
}

int func_557()//Position - 0x22B4F
{
	__LIB_0__.func_371();
	func_592();
	if (!func_559())
	{
		return 0;
	}
	__LIB_0__.func_371();
	Stack.Push(Local_210.f_0 != 0);
	Call_Loc(Local_210.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_559()//Position - 0x22B8E
{
	if (func_784(12))
	{
		return 1;
	}
	if (!func_567())
	{
		return 0;
	}
	func_562();
	func_561();
	__LIB_0__.func_371();
	if (Local_210.f_13 != 0)
	{
		Call_Loc(Local_210.f_13);
	}
	func_145(12);
	return 1;
}

void func_561()//Position - 0x22BD9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
	}
	if (Local_202.f_351 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_351)
		{
			iVar0++;
		}
	}
	if (Local_202.f_260 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_260)
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar0++;
	}
	if (Local_202.f_303 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_303)
		{
			iVar0++;
		}
	}
	if (Local_202.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_19)
		{
			if (-1 != Local_202.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_202.f_291 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_291)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_202.f_38 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_38)
		{
			if (-1 != Local_202.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_202.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (Local_202.f_38.f_86[iVar0 /*5*/].f_1[iVar1] != 1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__.func_86(Local_202.f_365[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_202.f_163 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_163)
		{
			iVar0++;
		}
	}
	if (Local_202.f_382 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_382)
		{
			iVar0++;
		}
	}
	if (Local_202.f_280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_280)
		{
			iVar0++;
		}
	}
	if (Local_202.f_130 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_130)
		{
			iVar0++;
		}
	}
}

void func_562()//Position - 0x22DD2
{
	var uVar0;
	var uVar1;
	uVar0 = uVar0;
	uVar1 = uVar1;
	__LIB_13__.func_339(Local_202.f_272.f_7, 2, "data.Ambush.iCount", "MAX_NUM_AMBUSH_VEHICLES");
	__LIB_13__.func_339(Local_202.f_351, 1, "data.MovingDoor.MovingDoors", "MAX_NUM_EVENT_LOCATION_BLIPS");
	__LIB_13__.func_339(Local_202.f_260, 1, "data.Flares.iCount", "MAX_NUM_FLARES");
	__LIB_13__.func_339(func_565(), 1, "data.FocusCam (GET_NUM_FOCUS_CAMS())", "MAX_NUM_FOCUS_CAMS");
	__LIB_13__.func_339(Local_202.f_303, 2, "data.Interact.iNumLocations", "MAX_NUM_INTERACT_LOCATIONS");
	__LIB_13__.func_339(Local_202.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	__LIB_13__.func_339(Local_202.f_38, 4, "data.Ped.iCount", "MAX_NUM_PEDS");
	__LIB_13__.func_339(func_564(), 1, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
	__LIB_13__.func_339(Local_202.f_291, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	__LIB_13__.func_339(Local_202.f_163, 7, "data.Prop.iCount", "MAX_NUM_PROPS");
	__LIB_13__.func_339(func_563(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
	__LIB_13__.func_339(Local_202.f_382, 3, "data.Tags.iCount", "MAX_NUM_TAGS");
	__LIB_13__.func_339(Local_202.f_280, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	__LIB_13__.func_339(Local_202.f_130, 2, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_563()//Position - 0x22ED9
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__.func_86(Local_202.f_365[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_564()//Position - 0x22F0E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		if (Local_202.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_202.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

int func_565()//Position - 0x22F4E
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (Local_202.f_358[iVar1 /*6*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_567()//Position - 0x22F8F
{
	if (!__LIB_13__.func_278(Local_524.f_0))
	{
		return 1;
	}
	return func_568(func_587(), &Local_202, &Local_213);
}

int func_568(char* sParam0, var uParam1, var uParam2)//Position - 0x22FB3
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	__LIB_1__.func_713();
	if (!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0))
	{
		return 0;
	}
	func_570(uParam1);
	__LIB_13__.func_269(uParam2);
	return 1;
}

void func_570(var uParam0)//Position - 0x23012
{
	var* uVar0;
	var* uVar1;
	var uVar2;
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	Global_4718592.f_116954 = DATAFILE::DATADICT_GET_INT(uVar0, "debugOnlyVersion");
	func_571(&uVar1, uParam0, 0, &uVar2);
}

bool func_571(var* uParam0, var uParam1, bool bParam2, var uParam3)//Position - 0x2304D
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_572(uParam0, uParam1);
	}
	if (!bParam2 || *uParam3 == 1)
	{
	}
	if (!bParam2 || *uParam3 == 2)
	{
		*uParam3 = 0;
		return 1;
	}
	*uParam3++;
	return !bParam2;
}

void func_572(var uParam0, var uParam1)//Position - 0x230A3
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	var* uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var* uVar8[1];
	int iVar9[1];
	var* uVar10;
	bool bVar11;
	var* uVar12;
	bool bVar13;
	var* uVar14;
	bool bVar15;
	var* uVar16;
	bool bVar17;
	var* uVar18;
	bool bVar19;
	var* uVar20;
	bool bVar21;
	var* uVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var* uVar26[1];
	int iVar27[1];
	var* uVar28;
	bool bVar29;
	var* uVar30;
	bool bVar31;
	var* uVar32;
	bool bVar33;
	var* uVar34;
	bool bVar35;
	var* uVar36;
	bool bVar37;
	var* uVar38;
	bool bVar39;
	var* uVar40;
	bool bVar41;
	var* uVar42;
	bool bVar43;
	var* uVar44;
	bool bVar45;
	var* uVar46;
	bool bVar47;
	var* uVar48;
	bool bVar49;
	var* uVar50;
	bool bVar51;
	var* uVar52;
	bool bVar53;
	var* uVar54;
	bool bVar55;
	var* uVar56;
	bool bVar57;
	var* uVar58;
	bool bVar59;
	var* uVar60;
	bool bVar61;
	int iVar62;
	var uVar63;
	int iVar64;
	var* uVar65[1];
	int iVar66[1];
	var* uVar67;
	bool bVar68;
	var* uVar69;
	bool bVar70;
	int iVar71;
	int iVar72;
	var* uVar73[2];
	int iVar74[2];
	var* uVar75;
	bool bVar76;
	var* uVar77;
	bool bVar78;
	var* uVar79;
	bool bVar80;
	var* uVar81;
	bool bVar82;
	var* uVar83;
	bool bVar84;
	var* uVar85;
	bool bVar86;
	int iVar87;
	var* uVar88;
	bool bVar89;
	var* uVar90;
	bool bVar91;
	var* uVar92;
	bool bVar93;
	var* uVar94;
	bool bVar95;
	int iVar96;
	int iVar97;
	var* uVar98[2];
	int iVar99[2];
	var* uVar100;
	bool bVar101;
	var* uVar102;
	bool bVar103;
	var* uVar104;
	bool bVar105;
	var* uVar106;
	bool bVar107;
	var* uVar108;
	bool bVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	var* uVar114;
	bool bVar115;
	int iVar116;
	int iVar117;
	var* uVar118[1];
	int iVar119[1];
	var* uVar120;
	bool bVar121;
	var* uVar122;
	bool bVar123;
	var* uVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	var* uVar128;
	bool bVar129;
	int iVar130;
	var* uVar131[1];
	int iVar132[1];
	var* uVar133[1];
	int iVar134[1];
	var* uVar135[1];
	int iVar136[1];
	var* uVar137[1];
	int iVar138[1];
	int iVar139;
	int iVar140;
	var* uVar141;
	bool bVar142;
	var* uVar143;
	bool bVar144;
	var* uVar145;
	bool bVar146;
	var* uVar147;
	bool bVar148;
	int iVar149;
	var* uVar150;
	bool bVar151;
	var* uVar152;
	bool bVar153;
	var* uVar154;
	bool bVar155;
	var* uVar156[1];
	int iVar157[1];
	int iVar158;
	int iVar159;
	var* uVar160;
	bool bVar161;
	var* uVar162;
	bool bVar163;
	__LIB_5__.func_185(&iVar5, *uParam0, "me");
	__LIB_5__.func_185(&iVar6, iVar5, "blp");
	__LIB_5__.func_185(&iVar7, iVar5, "ents");
	__LIB_5__.func_185(&iVar24, *uParam0, "pd");
	__LIB_5__.func_185(&iVar25, iVar24, "pds");
	__LIB_5__.func_185(&iVar62, iVar24, "grp");
	__LIB_5__.func_185(&uVar63, iVar62, "rel");
	__LIB_5__.func_185(&iVar64, iVar62, "trg");
	__LIB_5__.func_185(&iVar71, *uParam0, "vh");
	__LIB_5__.func_185(&iVar72, iVar71, "veh");
	__LIB_5__.func_185(&iVar87, iVar72, "blp");
	__LIB_5__.func_185(&iVar96, *uParam0, "pp");
	__LIB_5__.func_185(&iVar97, iVar96, "prps");
	__LIB_5__.func_185(&iVar110, *uParam0, "want");
	__LIB_5__.func_185(&iVar111, *uParam0, "modt");
	__LIB_5__.func_185(&iVar112, *uParam0, "amb");
	__LIB_5__.func_185(&iVar113, iVar112, "veh");
	__LIB_5__.func_185(&iVar116, *uParam0, "ta");
	__LIB_5__.func_185(&iVar117, iVar116, "ars");
	__LIB_5__.func_185(&iVar126, *uParam0, "ptrl");
	__LIB_5__.func_185(&iVar127, iVar126, "pat");
	__LIB_5__.func_185(&iVar130, iVar127, "nd");
	__LIB_5__.func_185(&iVar139, *uParam0, "fcs");
	__LIB_5__.func_185(&iVar140, iVar139, "fcs");
	__LIB_5__.func_185(&iVar149, *uParam0, "port");
	__LIB_5__.func_185(&iVar158, *uParam0, "tags");
	__LIB_5__.func_185(&iVar159, iVar158, "tag");
	if (__LIB_13__.func_276(*uParam0, "fmbs") == 7)
	{
		bVar4 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar7, &Var0) == 7)
		{
			iVar9[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar7, "mn") == 7)
	{
		bVar11 = true;
	}
	if (__LIB_13__.func_276(iVar7, "pos") == 7)
	{
		bVar13 = true;
	}
	if (__LIB_13__.func_276(iVar7, "head") == 7)
	{
		bVar15 = true;
	}
	if (__LIB_13__.func_276(iVar7, "rot") == 7)
	{
		bVar17 = true;
	}
	if (__LIB_13__.func_276(iVar7, "cv") == 7)
	{
		bVar19 = true;
	}
	if (__LIB_13__.func_276(iVar7, "crt") == 7)
	{
		bVar21 = true;
	}
	if (__LIB_13__.func_276(iVar7, "int") == 7)
	{
		bVar23 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar25, &Var0) == 7)
		{
			iVar27[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar25, "mn") == 7)
	{
		bVar29 = true;
	}
	if (__LIB_13__.func_276(iVar25, "pos") == 7)
	{
		bVar31 = true;
	}
	if (__LIB_13__.func_276(iVar25, "head") == 7)
	{
		bVar33 = true;
	}
	if (__LIB_13__.func_276(iVar25, "wpn") == 7)
	{
		bVar35 = true;
	}
	if (__LIB_13__.func_276(iVar25, "veh") == 7)
	{
		bVar37 = true;
	}
	if (__LIB_13__.func_276(iVar25, "st") == 7)
	{
		bVar39 = true;
	}
	if (__LIB_13__.func_276(iVar25, "scen") == 7)
	{
		bVar41 = true;
	}
	if (__LIB_13__.func_276(iVar25, "anim") == 7)
	{
		bVar43 = true;
	}
	if (__LIB_13__.func_276(iVar25, "int") == 7)
	{
		bVar45 = true;
	}
	if (__LIB_13__.func_276(iVar25, "asi") == 7)
	{
		bVar47 = true;
	}
	if (__LIB_13__.func_276(iVar25, "grp") == 7)
	{
		bVar49 = true;
	}
	if (__LIB_13__.func_276(iVar25, "mvmt") == 7)
	{
		bVar51 = true;
	}
	if (__LIB_13__.func_276(iVar25, "mrd") == 7)
	{
		bVar53 = true;
	}
	if (__LIB_13__.func_276(iVar25, "sr") == 7)
	{
		bVar55 = true;
	}
	if (__LIB_13__.func_276(iVar25, "sa") == 7)
	{
		bVar57 = true;
	}
	if (__LIB_13__.func_276(iVar25, "hr") == 7)
	{
		bVar59 = true;
	}
	if (__LIB_13__.func_276(iVar25, "dr") == 7)
	{
		bVar61 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar64, &Var0) == 7)
		{
			iVar66[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar62, "ed") == 7)
	{
		bVar68 = true;
	}
	if (__LIB_13__.func_276(iVar62, "gt") == 7)
	{
		bVar70 = true;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar72, &Var0) == 7)
		{
			iVar74[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar72, "mn") == 7)
	{
		bVar76 = true;
	}
	if (__LIB_13__.func_276(iVar72, "pos") == 7)
	{
		bVar78 = true;
	}
	if (__LIB_13__.func_276(iVar72, "head") == 7)
	{
		bVar80 = true;
	}
	if (__LIB_13__.func_276(iVar72, "col") == 7)
	{
		bVar82 = true;
	}
	if (__LIB_13__.func_276(iVar72, "int") == 7)
	{
		bVar84 = true;
	}
	if (__LIB_13__.func_276(iVar72, "vds") == 7)
	{
		bVar86 = true;
	}
	if (__LIB_13__.func_276(iVar87, "sprt") == 7)
	{
		bVar89 = true;
	}
	if (__LIB_13__.func_276(iVar87, "hclr") == 7)
	{
		bVar91 = true;
	}
	if (__LIB_13__.func_276(iVar87, "scl") == 7)
	{
		bVar93 = true;
	}
	if (__LIB_13__.func_276(iVar87, "sh") == 7)
	{
		bVar95 = true;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar97, &Var0) == 7)
		{
			iVar99[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar97, "mn") == 7)
	{
		bVar101 = true;
	}
	if (__LIB_13__.func_276(iVar97, "pos") == 7)
	{
		bVar103 = true;
	}
	if (__LIB_13__.func_276(iVar97, "head") == 7)
	{
		bVar105 = true;
	}
	if (__LIB_13__.func_276(iVar97, "rot") == 7)
	{
		bVar107 = true;
	}
	if (__LIB_13__.func_276(iVar97, "int") == 7)
	{
		bVar109 = true;
	}
	if (__LIB_13__.func_276(iVar113, "idx") == 7)
	{
		bVar115 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar117, &Var0) == 7)
		{
			iVar119[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar117, "vmn") == 7)
	{
		bVar121 = true;
	}
	if (__LIB_13__.func_276(iVar117, "vmx") == 7)
	{
		bVar123 = true;
	}
	if (__LIB_13__.func_276(iVar117, "fwd") == 7)
	{
		bVar125 = true;
	}
	if (__LIB_13__.func_276(iVar127, "pedi") == 7)
	{
		bVar129 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar130, &Var0) == 7)
		{
			iVar132[iVar2] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar130, &Var0) == 7)
		{
			iVar134[iVar2] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar130, &Var0) == 7)
		{
			iVar136[iVar2] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar130, &Var0) == 7)
		{
			iVar138[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar140, "ftyp") == 7)
	{
		bVar142 = true;
	}
	if (__LIB_13__.func_276(iVar140, "feid") == 7)
	{
		bVar144 = true;
	}
	if (__LIB_13__.func_276(iVar140, "fvec") == 7)
	{
		bVar146 = true;
	}
	if (__LIB_13__.func_276(iVar140, "frng") == 7)
	{
		bVar148 = true;
	}
	if (__LIB_13__.func_276(iVar149, "pos") == 7)
	{
		bVar151 = true;
	}
	if (__LIB_13__.func_276(iVar149, "head") == 7)
	{
		bVar153 = true;
	}
	if (__LIB_13__.func_276(iVar149, "plnkp") == 7)
	{
		bVar155 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_13__.func_276(iVar149, &Var0) == 7)
		{
			iVar157[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_13__.func_276(iVar159, "typ") == 7)
	{
		bVar161 = true;
	}
	if (__LIB_13__.func_276(iVar159, "id") == 7)
	{
		bVar163 = true;
	}
	if (bVar4)
	{
		uVar3 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fmbs");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar9[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar8[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar7, &Var0);
		}
		iVar2++;
	}
	if (bVar11)
	{
		uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "mn");
	}
	if (bVar13)
	{
		uVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "pos");
	}
	if (bVar15)
	{
		uVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "head");
	}
	if (bVar17)
	{
		uVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "rot");
	}
	if (bVar19)
	{
		uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "cv");
	}
	if (bVar21)
	{
		uVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "crt");
	}
	if (bVar23)
	{
		uVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "int");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar27[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar26[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar25, &Var0);
		}
		iVar2++;
	}
	if (bVar29)
	{
		uVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "mn");
	}
	if (bVar31)
	{
		uVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "pos");
	}
	if (bVar33)
	{
		uVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "head");
	}
	if (bVar35)
	{
		uVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "wpn");
	}
	if (bVar37)
	{
		uVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "veh");
	}
	if (bVar39)
	{
		uVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "st");
	}
	if (bVar41)
	{
		uVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "scen");
	}
	if (bVar43)
	{
		uVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "anim");
	}
	if (bVar45)
	{
		uVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "int");
	}
	if (bVar47)
	{
		uVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "asi");
	}
	if (bVar49)
	{
		uVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "grp");
	}
	if (bVar51)
	{
		uVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "mvmt");
	}
	if (bVar53)
	{
		uVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "mrd");
	}
	if (bVar55)
	{
		uVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "sr");
	}
	if (bVar57)
	{
		uVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "sa");
	}
	if (bVar59)
	{
		uVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "hr");
	}
	if (bVar61)
	{
		uVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "dr");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar66[iVar2])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar65[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar64, &Var0);
		}
		iVar2++;
	}
	if (bVar68)
	{
		uVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar62, "ed");
	}
	if (bVar70)
	{
		uVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar62, "gt");
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (iVar74[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar73[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar72, &Var0);
		}
		iVar2++;
	}
	if (bVar76)
	{
		uVar75 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "mn");
	}
	if (bVar78)
	{
		uVar77 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "pos");
	}
	if (bVar80)
	{
		uVar79 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "head");
	}
	if (bVar82)
	{
		uVar81 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "col");
	}
	if (bVar84)
	{
		uVar83 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "int");
	}
	if (bVar86)
	{
		uVar85 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "vds");
	}
	if (bVar89)
	{
		uVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "sprt");
	}
	if (bVar91)
	{
		uVar90 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "hclr");
	}
	if (bVar93)
	{
		uVar92 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "scl");
	}
	if (bVar95)
	{
		uVar94 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "sh");
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (iVar99[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar98[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar97, &Var0);
		}
		iVar2++;
	}
	if (bVar101)
	{
		uVar100 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "mn");
	}
	if (bVar103)
	{
		uVar102 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "pos");
	}
	if (bVar105)
	{
		uVar104 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "head");
	}
	if (bVar107)
	{
		uVar106 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "rot");
	}
	if (bVar109)
	{
		uVar108 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "int");
	}
	if (bVar115)
	{
		uVar114 = DATAFILE::DATADICT_GET_ARRAY(iVar113, "idx");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar119[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar118[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar117, &Var0);
		}
		iVar2++;
	}
	if (bVar121)
	{
		uVar120 = DATAFILE::DATADICT_GET_ARRAY(iVar117, "vmn");
	}
	if (bVar123)
	{
		uVar122 = DATAFILE::DATADICT_GET_ARRAY(iVar117, "vmx");
	}
	if (bVar125)
	{
		uVar124 = DATAFILE::DATADICT_GET_ARRAY(iVar117, "fwd");
	}
	if (bVar129)
	{
		uVar128 = DATAFILE::DATADICT_GET_ARRAY(iVar127, "pedi");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar132[iVar2])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar131[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar130, &Var0);
		}
		if (iVar134[iVar2])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar133[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar130, &Var0);
		}
		if (iVar136[iVar2])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar135[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar130, &Var0);
		}
		if (iVar138[iVar2])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar137[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar130, &Var0);
		}
		iVar2++;
	}
	if (bVar142)
	{
		uVar141 = DATAFILE::DATADICT_GET_ARRAY(iVar140, "ftyp");
	}
	if (bVar144)
	{
		uVar143 = DATAFILE::DATADICT_GET_ARRAY(iVar140, "feid");
	}
	if (bVar146)
	{
		uVar145 = DATAFILE::DATADICT_GET_ARRAY(iVar140, "fvec");
	}
	if (bVar148)
	{
		uVar147 = DATAFILE::DATADICT_GET_ARRAY(iVar140, "frng");
	}
	if (bVar151)
	{
		uVar150 = DATAFILE::DATADICT_GET_ARRAY(iVar149, "pos");
	}
	if (bVar153)
	{
		uVar152 = DATAFILE::DATADICT_GET_ARRAY(iVar149, "head");
	}
	if (bVar155)
	{
		uVar154 = DATAFILE::DATADICT_GET_ARRAY(iVar149, "plnkp");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar157[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar156[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar149, &Var0);
		}
		iVar2++;
	}
	if (bVar161)
	{
		uVar160 = DATAFILE::DATADICT_GET_ARRAY(iVar159, "typ");
	}
	if (bVar163)
	{
		uVar162 = DATAFILE::DATADICT_GET_ARRAY(iVar159, "id");
	}
	*uParam1 = { __LIB_13__.func_275(*uParam0, "fmnm", "") };
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_16[iVar1] = __LIB_13__.func_273(uVar3, iVar1, 0, bVar4);
		iVar1++;
	}
	uParam1->f_19 = __LIB_6__.func_597(iVar5, "num", 0);
	uParam1->f_19.f_1 = __LIB_6__.func_597(iVar6, "sprt", -1);
	uParam1->f_19.f_1.f_1 = __LIB_6__.func_597(iVar6, "hclr", 12);
	uParam1->f_19.f_1.f_2 = __LIB_13__.func_274(iVar6, "scl", 1f);
	uParam1->f_19.f_1.f_3 = __LIB_21__.func_75(iVar6, "sh", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_19.f_5[iVar1 /*13*/][iVar2] = __LIB_13__.func_273(uVar8[iVar2], iVar1, 0, iVar9[iVar2]);
			iVar2++;
		}
		uParam1->f_19.f_5[iVar1 /*13*/].f_2 = __LIB_13__.func_273(uVar10, iVar1, 0, bVar11);
		uParam1->f_19.f_5[iVar1 /*13*/].f_3 = { __LIB_13__.func_272(uVar12, iVar1, 0f, 0f, 0f, bVar13) };
		uParam1->f_19.f_5[iVar1 /*13*/].f_6 = __LIB_13__.func_271(uVar14, iVar1, 0f, bVar15);
		uParam1->f_19.f_5[iVar1 /*13*/].f_7 = { __LIB_13__.func_272(uVar16, iVar1, 0f, 0f, 0f, bVar17) };
		uParam1->f_19.f_5[iVar1 /*13*/].f_10 = __LIB_13__.func_273(uVar18, iVar1, -1, bVar19);
		uParam1->f_19.f_5[iVar1 /*13*/].f_11 = __LIB_13__.func_273(uVar20, iVar1, 2, bVar21);
		uParam1->f_19.f_5[iVar1 /*13*/].f_12 = __LIB_13__.func_273(uVar22, iVar1, -1, bVar23);
		iVar1++;
	}
	uParam1->f_38 = __LIB_6__.func_597(iVar24, "num", 0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_38.f_1[iVar1 /*21*/][iVar2] = __LIB_13__.func_273(uVar26[iVar2], iVar1, 0, iVar27[iVar2]);
			iVar2++;
		}
		uParam1->f_38.f_1[iVar1 /*21*/].f_2 = __LIB_13__.func_273(uVar28, iVar1, 0, bVar29);
		uParam1->f_38.f_1[iVar1 /*21*/].f_3 = { __LIB_13__.func_272(uVar30, iVar1, 0f, 0f, 0f, bVar31) };
		uParam1->f_38.f_1[iVar1 /*21*/].f_6 = __LIB_13__.func_271(uVar32, iVar1, 0f, bVar33);
		uParam1->f_38.f_1[iVar1 /*21*/].f_7 = __LIB_13__.func_273(uVar34, iVar1, 0, bVar35);
		uParam1->f_38.f_1[iVar1 /*21*/].f_8 = __LIB_13__.func_273(uVar36, iVar1, -1, bVar37);
		uParam1->f_38.f_1[iVar1 /*21*/].f_9 = __LIB_13__.func_273(uVar38, iVar1, 0, bVar39);
		uParam1->f_38.f_1[iVar1 /*21*/].f_10 = __LIB_13__.func_273(uVar40, iVar1, -1, bVar41);
		uParam1->f_38.f_1[iVar1 /*21*/].f_11 = __LIB_13__.func_273(uVar42, iVar1, -1, bVar43);
		uParam1->f_38.f_1[iVar1 /*21*/].f_12 = __LIB_13__.func_273(uVar44, iVar1, -1, bVar45);
		uParam1->f_38.f_1[iVar1 /*21*/].f_13 = __LIB_13__.func_273(uVar46, iVar1, -1, bVar47);
		uParam1->f_38.f_1[iVar1 /*21*/].f_14 = __LIB_13__.func_273(uVar48, iVar1, 0, bVar49);
		uParam1->f_38.f_1[iVar1 /*21*/].f_15 = __LIB_13__.func_273(uVar50, iVar1, 2, bVar51);
		uParam1->f_38.f_1[iVar1 /*21*/].f_16 = __LIB_13__.func_273(uVar52, iVar1, -1, bVar53);
		uParam1->f_38.f_1[iVar1 /*21*/].f_17 = __LIB_13__.func_271(uVar54, iVar1, 60f, bVar55);
		uParam1->f_38.f_1[iVar1 /*21*/].f_18 = __LIB_13__.func_271(uVar56, iVar1, 60f, bVar57);
		uParam1->f_38.f_1[iVar1 /*21*/].f_19 = __LIB_13__.func_271(uVar58, iVar1, 60f, bVar59);
		uParam1->f_38.f_1[iVar1 /*21*/].f_20 = __LIB_13__.func_271(uVar60, iVar1, -1f, bVar61);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_38.f_86[iVar1 /*5*/].f_1[iVar2] = __LIB_13__.func_273(uVar65[iVar2], iVar1, -1, iVar66[iVar2]);
			iVar2++;
		}
		uParam1->f_38.f_86[iVar1 /*5*/].f_3 = __LIB_13__.func_273(uVar67, iVar1, 0, bVar68);
		uParam1->f_38.f_86[iVar1 /*5*/].f_4 = __LIB_13__.func_273(uVar69, iVar1, -1, bVar70);
		iVar1++;
	}
	uParam1->f_130 = __LIB_6__.func_597(iVar71, "num", 0);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			uParam1->f_130.f_1[iVar1 /*15*/][iVar2] = __LIB_13__.func_273(uVar73[iVar2], iVar1, 0, iVar74[iVar2]);
			iVar2++;
		}
		uParam1->f_130.f_1[iVar1 /*15*/].f_3 = __LIB_13__.func_273(uVar75, iVar1, 0, bVar76);
		uParam1->f_130.f_1[iVar1 /*15*/].f_4 = { __LIB_13__.func_272(uVar77, iVar1, 0f, 0f, 0f, bVar78) };
		uParam1->f_130.f_1[iVar1 /*15*/].f_7 = __LIB_13__.func_271(uVar79, iVar1, 0f, bVar80);
		uParam1->f_130.f_1[iVar1 /*15*/].f_8 = __LIB_13__.func_273(uVar81, iVar1, -1, bVar82);
		uParam1->f_130.f_1[iVar1 /*15*/].f_9 = __LIB_13__.func_273(uVar83, iVar1, -1, bVar84);
		uParam1->f_130.f_1[iVar1 /*15*/].f_10 = __LIB_13__.func_273(uVar85, iVar1, 0, bVar86);
		uParam1->f_130.f_1[iVar1 /*15*/].f_11 = __LIB_13__.func_273(uVar88, iVar1, -1, bVar89);
		uParam1->f_130.f_1[iVar1 /*15*/].f_11.f_1 = __LIB_13__.func_273(uVar90, iVar1, 12, bVar91);
		uParam1->f_130.f_1[iVar1 /*15*/].f_11.f_2 = __LIB_13__.func_271(uVar92, iVar1, 1f, bVar93);
		uParam1->f_130.f_1[iVar1 /*15*/].f_11.f_3 = __LIB_13__.func_270(uVar94, iVar1, 0, bVar95);
		iVar1++;
	}
	uParam1->f_130.f_32 = __LIB_6__.func_597(iVar71, "trv", -1);
	uParam1->f_163 = __LIB_6__.func_597(iVar96, "num", 0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			uParam1->f_163.f_1[iVar1 /*12*/][iVar2] = __LIB_13__.func_273(uVar98[iVar2], iVar1, 0, iVar99[iVar2]);
			iVar2++;
		}
		uParam1->f_163.f_1[iVar1 /*12*/].f_3 = __LIB_13__.func_273(uVar100, iVar1, 0, bVar101);
		uParam1->f_163.f_1[iVar1 /*12*/].f_4 = { __LIB_13__.func_272(uVar102, iVar1, 0f, 0f, 0f, bVar103) };
		uParam1->f_163.f_1[iVar1 /*12*/].f_7 = __LIB_13__.func_271(uVar104, iVar1, 0f, bVar105);
		uParam1->f_163.f_1[iVar1 /*12*/].f_8 = { __LIB_13__.func_272(uVar106, iVar1, 0f, 0f, 0f, bVar107) };
		uParam1->f_163.f_1[iVar1 /*12*/].f_11 = __LIB_13__.func_273(uVar108, iVar1, -1, bVar109);
		iVar1++;
	}
	uParam1->f_249 = __LIB_6__.func_597(iVar110, "wnum", 0);
	uParam1->f_249.f_1 = __LIB_6__.func_597(iVar110, "wfak", -1);
	uParam1->f_249.f_2 = __LIB_13__.func_274(iVar110, "wblk", 250f);
	uParam1->f_252 = __LIB_6__.func_597(iVar111, "time", -1);
	uParam1->f_252.f_1 = __LIB_6__.func_597(iVar111, "disp", 0);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_272[iVar1] = __LIB_13__.func_273(uVar114, iVar1, -1, bVar115);
		iVar1++;
	}
	uParam1->f_272.f_3 = __LIB_6__.func_597(iVar112, "wvs", 3);
	uParam1->f_272.f_4 = __LIB_6__.func_597(iVar112, "spd", 15000);
	uParam1->f_272.f_5 = __LIB_6__.func_597(iVar112, "rspd", 5000);
	uParam1->f_272.f_6 = __LIB_13__.func_274(iVar112, "sdst", 200f);
	uParam1->f_272.f_7 = __LIB_6__.func_597(iVar112, "num", 0);
	uParam1->f_280 = __LIB_6__.func_597(iVar116, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_280.f_1[iVar1 /*9*/][iVar2] = __LIB_13__.func_273(uVar118[iVar2], iVar1, 0, iVar119[iVar2]);
			iVar2++;
		}
		uParam1->f_280.f_1[iVar1 /*9*/].f_2 = { __LIB_13__.func_272(uVar120, iVar1, 0f, 0f, 0f, bVar121) };
		uParam1->f_280.f_1[iVar1 /*9*/].f_5 = { __LIB_13__.func_272(uVar122, iVar1, 0f, 0f, 0f, bVar123) };
		uParam1->f_280.f_1[iVar1 /*9*/].f_8 = __LIB_13__.func_271(uVar124, iVar1, 0f, bVar125);
		iVar1++;
	}
	uParam1->f_291 = __LIB_6__.func_597(iVar126, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_291.f_1[iVar1 /*10*/] = __LIB_13__.func_273(uVar128, iVar1, -1, bVar129);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_291.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/] = __LIB_13__.func_273(uVar131[iVar2], iVar1, -1, iVar132[iVar2]);
			uParam1->f_291.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_1 = { __LIB_13__.func_272(uVar133[iVar2], iVar1, 0f, 0f, 0f, iVar134[iVar2]) };
			uParam1->f_291.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_4 = { __LIB_13__.func_272(uVar135[iVar2], iVar1, 0f, 0f, 0f, iVar136[iVar2]) };
			uParam1->f_291.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_7 = __LIB_13__.func_273(uVar137[iVar2], iVar1, 2000, iVar138[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_358[iVar1 /*6*/] = __LIB_13__.func_273(uVar141, iVar1, 0, bVar142);
		uParam1->f_358[iVar1 /*6*/].f_1 = __LIB_13__.func_273(uVar143, iVar1, 0, bVar144);
		uParam1->f_358[iVar1 /*6*/].f_2 = { __LIB_13__.func_272(uVar145, iVar1, 0f, 0f, 0f, bVar146) };
		uParam1->f_358[iVar1 /*6*/].f_5 = __LIB_13__.func_271(uVar147, iVar1, 0f, bVar148);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_365[iVar1 /*8*/] = { __LIB_13__.func_272(uVar150, iVar1, 0f, 0f, 0f, bVar151) };
		uParam1->f_365[iVar1 /*8*/].f_3 = __LIB_13__.func_271(uVar152, iVar1, 0f, bVar153);
		uParam1->f_365[iVar1 /*8*/].f_4 = __LIB_13__.func_273(uVar154, iVar1, -1, bVar155);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_365[iVar1 /*8*/].f_6[iVar2] = __LIB_13__.func_273(uVar156[iVar2], iVar1, 0, iVar157[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	uParam1->f_382 = __LIB_6__.func_597(iVar158, "num", 0);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam1->f_382.f_1[iVar1 /*2*/] = __LIB_13__.func_273(uVar160, iVar1, 0, bVar161);
		uParam1->f_382.f_1[iVar1 /*2*/].f_1 = __LIB_13__.func_273(uVar162, iVar1, -1, bVar163);
		iVar1++;
	}
}

char* func_587()//Position - 0x24A02
{
	return __LIB_14__.func_774(func_590(), func_589());
}

int func_589()//Position - 0x24AEC
{
	return Local_575.f_256.f_1;
}

var func_590()//Position - 0x24AFC
{
	return Local_575.f_256;
}

void func_592()//Position - 0x24B4E
{
	if (func_784(21))
	{
		return;
	}
	func_593();
	func_145(21);
}

void func_593()//Position - 0x24B6C
{
	Local_210.f_11 = 171159/*func_772*/;
	Local_210.f_11.f_1 = 169931/*func_757*/;
	Local_210.f_0 = 169832/*func_755*/;
	Local_210.f_1 = 169767/*func_753*/;
	Local_210.f_13 = 169244/*func_743*/;
	Local_210.f_3 = 169007/*func_737*/;
	Local_210.f_3.f_1 = 156113/*func_659*/;
	Local_210.f_3.f_4 = 156087/*func_658*/;
	Local_210.f_3.f_4.f_1 = 155690/*func_653*/;
	Local_210.f_3.f_4.f_2 = 155557/*func_650*/;
	Local_210.f_15 = 155536/*func_649*/;
	Local_210.f_407.f_35 = 155168/*func_645*/;
	Local_210.f_453 = 155159/*func_644*/;
	Local_210.f_453.f_1 = 155119/*func_643*/;
	Local_210.f_453.f_30 = 155110/*func_642*/;
	Local_210.f_453.f_53 = 155069/*func_641*/;
	Local_210.f_453.f_55.f_1 = 154999/*func_640*/;
	Local_210.f_453.f_55.f_2 = 152584/*func_631*/;
	Local_210.f_453.f_55.f_3 = 152491/*func_630*/;
	Local_210.f_453.f_55.f_4 = 152466/*func_629*/;
	Local_210.f_453.f_21 = 152291/*func_628*/;
	Local_210.f_453.f_22 = 151717/*func_620*/;
	Local_210.f_112 = 151683/*func_619*/;
	Local_210.f_112.f_1 = 151459/*func_615*/;
	Local_210.f_86 = 151450/*func_614*/;
	Local_210.f_86.f_2 = 151441/*func_613*/;
	Local_210.f_86.f_3 = 151432/*func_612*/;
	Local_210.f_86.f_4 = 151420/*func_611*/;
	Local_210.f_530 = 151395/*func_610*/;
	Local_210.f_530.f_3 = 151386/*func_609*/;
	Local_210.f_530.f_4 = 151377/*func_608*/;
	Local_210.f_554.f_1 = 151125/*func_604*/;
	Local_210.f_554 = 151054/*func_603*/;
	Local_210.f_544 = 151007/*func_602*/;
	Local_210.f_544.f_1 = 150998/*func_601*/;
	Local_210.f_544.f_4 = 150986/*func_600*/;
	Local_210.f_94 = 150930/*func_598*/;
	Local_210.f_94.f_1 = 150850/*func_596*/;
	Local_210.f_82 = 150818/*func_594*/;
}

bool func_594()//Position - 0x24D22
{
	return func_595(2);
}

bool func_595(int iParam0)//Position - 0x24D2F
{
	return __LIB_9__.func_807(&(Local_575.f_254), iParam0);
}

int func_596(var uParam0, int iParam1)//Position - 0x24D42
{
	switch (iParam1)
	{
		case 0:
			return __LIB_13__.func_365(uParam0, "PICKUP_DEFAULT", "HUD_FRONTEND_STANDARD_PICKUPS_SOUNDSET", 1);
		default:
	}
	return 0;
}

int func_598(int iParam0)//Position - 0x24D92
{
	switch (iParam0)
	{
		case 0:
			return func_599(iLocal_518, 3);
		default:
	}
	return 0;
}

bool func_599(int iParam0, int iParam1)//Position - 0x24DB3
{
	return __LIB_9__.func_807(&(Local_582[iParam0 /*62*/].f_56), iParam1);
}

char* func_600(var uParam0)//Position - 0x24DCA
{
	return "RE_ST_EL" /* GXT: Flare */;
}

bool func_602(var uParam0)//Position - 0x24DDF
{
	return (!func_595(2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_519, Local_202.f_351.f_1[0 /*5*/], true) < 400f);
}

char* func_603(int iParam0)//Position - 0x24E0E
{
	switch (iParam0)
	{
		case 0:
			return "RE_ST_HELP01" /* GXT: Look for another flare highlighting the next location. Follow the trail before it disappears to collect a Smuggler Cache. */;
		case 1:
			return "RE_ST_FOCUS" /* GXT: Toggle ~INPUT_VEH_CIN_CAM~ to focus on the Smuggler Cache. */;
		case 2:
			return "RE_ST_HELP03" /* GXT: Continue following the trail to a Smuggler Cache to earn cash and RP. */;
		case 3:
			return "RE_ST_HELP02" /* GXT: The trail leading to the Smuggler Cache has disappeared. */;
		default:
	}
	return "";
}

int func_604(int iParam0)//Position - 0x24E55
{
	switch (iParam0)
	{
		case 0:
			return (!func_606(iParam0) && func_599(iLocal_518, 2));
		case 1:
			return (!func_606(iParam0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_202.f_163.f_1[func_605(2) /*12*/].f_4, Local_519, true) <= Local_202.f_358[0 /*6*/].f_5);
		case 2:
			return ((!func_606(iParam0) && func_595(2)) && Local_575.f_256.f_2 > 1);
		case 3:
			return ((!func_606(iParam0) && func_540() > 0) && func_540() != 3);
		default:
	}
	return 0;
}

int func_605(int iParam0)//Position - 0x24F0C
{
	return Local_202.f_382.f_1[iParam0 /*2*/].f_1;
}

bool func_606(int iParam0)//Position - 0x24F21
{
	return __LIB_2__.func_319(&uLocal_500, iParam0);
}

var func_610()//Position - 0x24F63
{
	return (func_595(9) && func_595(10));
}

char* func_611(var uParam0)//Position - 0x24F7C
{
	return "RE_ST_FOCUS" /* GXT: Toggle ~INPUT_VEH_CIN_CAM~ to focus on the Smuggler Cache. */;
}

int func_615(var uParam0, var uParam1, var uParam2)//Position - 0x24FA3
{
	int iVar0;
	if ((!func_595(8) && func_618()) && func_616(Local_575.f_256.f_2, &iVar0))
	{
		*uParam1 = NETWORK::NET_TO_ENT(Local_575.f_136[iVar0 /*5*/]);
		*uParam2 = { 0f, 0f, 3.33f };
		return 1;
	}
	return 0;
}

int func_616(int iParam0, var uParam1)//Position - 0x24FF1
{
	if (func_617(iParam0, uParam1) && Local_202.f_163.f_1[*uParam1 /*12*/].f_3 == joaat("prop_dock_bouy_3"))
	{
		return 1;
	}
	return 0;
}

int func_617(int iParam0, var uParam1)//Position - 0x25021
{
	*uParam1 = (func_605(0) + iParam0);
	if (*uParam1 >= func_605(0) && *uParam1 < 7)
	{
		return 1;
	}
	return 0;
}

int func_618()//Position - 0x2504F
{
	switch (func_589())
	{
		case 2:
		case 4:
		case 7:
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

bool func_619(var uParam0)//Position - 0x25083
{
	if (func_618())
	{
		return !func_595(5);
	}
	return !func_595(8);
}

void func_620(int iParam0)//Position - 0x250A5
{
	if (iParam0 == 0)
	{
		func_622();
		func_621(2);
	}
	else if (iParam0 == 1)
	{
		func_621(5);
	}
}

void func_621(int iParam0)//Position - 0x250CA
{
	if (__LIB_1__.func_101(&(Local_582[iLocal_517 /*62*/].f_56), iParam0))
	{
	}
}

void func_622()//Position - 0x250E5
{
	__LIB_18__.func_437("RE_ST_TICKER2" /* GXT: You discovered a smuggler trail. */, 0);
}

void func_628(int iParam0)//Position - 0x252E3
{
	if (iParam0 == 0)
	{
		if ((!func_595(0) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_516, func_631(iParam0), func_630(iParam0), 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_516, func_631(iParam0), func_630(iParam0)) >= 0.95f)
		{
			func_621(0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PICKUP_DEFAULT", "HUD_FRONTEND_STANDARD_PICKUPS_SOUNDSET", true);
		}
	}
	else if (iParam0 == 1)
	{
		if ((!func_595(3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_516, func_631(iParam0), func_630(iParam0), 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_516, func_631(iParam0), func_630(iParam0)) >= 0.32f)
		{
			func_621(3);
		}
	}
}

char* func_629(int iParam0)//Position - 0x25392
{
	if (iParam0 == 1)
	{
		return "grab_low_facial";
	}
	return "";
}

char* func_630(int iParam0)//Position - 0x253AB
{
	if (iParam0 == 0)
	{
		switch (Local_499.f_11)
		{
			case 0:
				return "ENTER";
			case 1:
				return "EXIT";
			default:
		}
	}
	else if (iParam0 == 1)
	{
		switch (Local_499.f_11)
		{
			case 0:
				return "GRAB_LOW";
			default:
		}
		return "";
	}
	return "";
}

char* func_631(int iParam0)//Position - 0x25408
{
	if (iParam0 == 0)
	{
		switch (Local_499.f_11)
		{
			case 0:
				return "AMB@MEDIC@STANDING@TENDTODEAD@ENTER";
			case 1:
				return "AMB@MEDIC@STANDING@TENDTODEAD@EXIT";
			default:
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_7__.func_43(PLAYER::PLAYER_PED_ID()))
		{
			return "ANIM@SCRIPTED@PLAYER@FREEMODE@TUN_PREP_IG1_GRAB_LOW@HEELED@";
		}
		else
		{
			return "ANIM@SCRIPTED@PLAYER@FREEMODE@TUN_PREP_IG1_GRAB_LOW@MALE@";
		}
	}
	return "";
}

float func_640(int iParam0)//Position - 0x25D77
{
	if (iParam0 == 1)
	{
		return __LIB_0__.func_670(Local_519, Local_202.f_163.f_1[func_605(2) /*12*/].f_4);
	}
	return __LIB_0__.func_670(Local_519, Local_202.f_303.f_1[iParam0 /*23*/].f_3);
}

char* func_641(int iParam0)//Position - 0x25DBD
{
	if (iParam0 == 0)
	{
		return "RE_ST_I1" /* GXT: Press ~INPUT_CONTEXT~ to investigate the flare. */;
	}
	else if (iParam0 == 1)
	{
		return "RE_ST_I2" /* GXT: Press ~INPUT_CONTEXT~ to collect the Smuggler Cache. */;
	}
	return "";
}

int func_643(int iParam0)//Position - 0x25DEF
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return !func_618();
		default:
	}
	return 0;
}

void func_645(int iParam0, int iParam1, bool bParam2)//Position - 0x25E20
{
	int iVar0;
	if (iParam0 == func_605(2))
	{
		if ((!func_595(4) && func_595(3)) && __LIB_6__.func_924(Local_575.f_136[iParam0 /*5*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam1, false, false);
			func_621(1);
		}
	}
	else if (func_647(iParam0))
	{
		iVar0 = 0;
		if ((!bParam2 && func_646(iParam0, &iVar0)) && iParam0 < func_605(1))
		{
			if (iParam0 == func_605(0))
			{
				if ((!func_595(1) && func_595(0)) && __LIB_6__.func_924(Local_575.f_136[iParam0 /*5*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
					func_621(1);
				}
			}
			else if (Local_575.f_256.f_2 > iVar0)
			{
				if (ENTITY::IS_ENTITY_VISIBLE(iParam1) && __LIB_6__.func_924(Local_575.f_136[iParam0 /*5*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
				}
			}
		}
	}
}

int func_646(int iParam0, int iParam1)//Position - 0x25F0A
{
	if (iParam0 >= func_605(0) && iParam0 < 7)
	{
		*iParam1 = (iParam0 - func_605(0));
		return 1;
	}
	return 0;
}

int func_647(int iParam0)//Position - 0x25F36
{
	if (iParam0 >= func_605(0) && iParam0 <= func_605(1))
	{
		return 1;
	}
	return 0;
}

void func_649(var uParam0, struct<6> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x25F90
{
	if (Param1.f_5)
	{
		func_621(10);
	}
}

void func_650()//Position - 0x25FA5
{
	if (bLocal_512)
	{
		if (iLocal_583)
		{
			if (Local_575.f_256.f_2 + 1 < func_652())
			{
				Local_575.f_256.f_2++;
			}
			else
			{
				func_651(8);
			}
		}
		if (iLocal_585 == iLocal_584 && func_540() == 0)
		{
			func_8(4);
		}
	}
}

void func_651(int iParam0)//Position - 0x25FFF
{
	if (__LIB_1__.func_101(&(Local_575.f_254), iParam0))
	{
	}
}

int func_652()//Position - 0x26015
{
	return (func_605(1) - func_605(0)) + 1;
}

void func_653(int iParam0, var uParam1)//Position - 0x2602A
{
	if (bLocal_512)
	{
		if (!iLocal_583)
		{
			if ((func_22() == 0 && Local_575.f_256.f_2 == 0) && func_595(2))
			{
				Local_575.f_256.f_3 = uParam1;
				iLocal_583 = 1;
			}
			else if ((func_22() == 1 && Local_575.f_256.f_2 > 0) && func_655(Local_582[iParam0 /*62*/].f_34, func_657(Local_575.f_256.f_2), __LIB_14__.func_775(iParam0)))
			{
				Local_575.f_256.f_3 = uParam1;
				iLocal_583 = 1;
			}
		}
		if (func_654(Local_582[iParam0 /*62*/].f_34, func_657(Local_575.f_256.f_2)))
		{
			iLocal_585++;
		}
		iLocal_584++;
	}
}

bool func_654(struct<3> Param0, struct<3> Param1)//Position - 0x260EC
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, false) > 700f;
}

bool func_655(struct<3> Param0, struct<3> Param1, int iParam2)//Position - 0x26107
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, true);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
	{
		bVar0 = fVar1 < 10f;
	}
	else if (func_618())
	{
		bVar0 = fVar1 < 2f;
	}
	else
	{
		bVar0 = fVar1 < 5f;
	}
	return bVar0;
}

Vector3 func_657(int iParam0)//Position - 0x2617D
{
	int iVar0;
	iVar0 = (func_605(0) + iParam0);
	if (iVar0 >= func_605(0) && iVar0 < 7)
	{
		return Local_202.f_163.f_1[iVar0 /*12*/].f_4;
	}
	return 0f, 0f, 0f;
}

void func_658()//Position - 0x261B7
{
	if (bLocal_512)
	{
		iLocal_583 = 0;
		iLocal_584 = 0;
		iLocal_585 = 0;
	}
}

void func_659()//Position - 0x261D1
{
	if ((!func_595(5) && func_618()) && func_655(Local_519, Local_202.f_163.f_1[func_605(2) /*12*/].f_4, iLocal_516))
	{
		func_621(5);
	}
	if (!func_595(7) && func_655(Local_519, func_657((func_652() - 1)), iLocal_516))
	{
		func_621(7);
	}
	if (!func_595(9) && ((func_595(7) || func_595(5)) || Local_575.f_256.f_2 == (func_652() - 1)))
	{
		func_621(11);
	}
	if (Local_575.f_256.f_2 != Local_582[iLocal_517 /*62*/].f_58)
	{
		if ((Local_575.f_256.f_3 == iLocal_518 && Local_575.f_256.f_2 > 1) && Local_575.f_256.f_2 < func_652())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PICKUP_DEFAULT", "HUD_FRONTEND_STANDARD_PICKUPS_SOUNDSET", true);
		}
		Local_582[iLocal_517 /*62*/].f_58 = Local_575.f_256.f_2;
	}
	func_727();
	func_660();
}

void func_660()//Position - 0x262E2
{
	if (!func_599(iLocal_518, 6) && func_599(iLocal_518, 5))
	{
		func_664();
		func_661();
		func_621(6);
	}
}

void func_661()//Position - 0x26310
{
	__LIB_25__.func_828("RE_ST_TICKER1" /* GXT: Smuggler Cache collected:~n~$~1~ */, func_663(), 0);
}

int func_663()//Position - 0x26379
{
	return Global_262145.f_32702 /* Tunable: -705426340 */;
}

void func_664()//Position - 0x26388
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = func_726();
	if (iVar0 > 0)
	{
		if (Local_202.f_258.f_1)
		{
			__LIB_1__.func_444();
		}
		__LIB_39__.func_980(0, iLocal_516, "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_FM_CONTENT_SUM22_SMUGGLER_TRAIL"), iVar0, 1, -1, 0, 0, 0);
		Local_494.f_6 = (Local_494.f_6 + iVar0);
	}
	iVar1 = func_663();
	if (iVar1 > 0)
	{
		if (__LIB_0__.func_112())
		{
			__LIB_35__.func_530(joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"), iVar1, &iVar2, 0, 1, 0);
			StringCopy(&(Global_4534105[iVar2 /*85*/].f_14.f_26), "fm_content_smuggler_trail", 32);
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar1, "fm_content_smuggler_trail", &uVar3);
		}
		Local_494.f_5 = (Local_494.f_5 + iVar1);
	}
}

var func_726()//Position - 0x290B0
{
	return Global_262145.f_32703 /* Tunable: -1876635403 */;
}

void func_727()//Position - 0x290BF
{
	if (func_595(0) && !func_595(2))
	{
		if (Local_582[iLocal_517 /*62*/].f_58.f_1 == 0)
		{
			func_736();
			func_735(1);
			Local_582[iLocal_517 /*62*/].f_58.f_1 = 1;
		}
	}
	else if (func_595(8))
	{
		if (!func_599(iLocal_518, 9))
		{
			if (func_618())
			{
				func_736();
				func_730();
			}
			else
			{
				func_729();
			}
			func_621(9);
		}
	}
	else if (Local_582[iLocal_517 /*62*/].f_58 != Local_582[iLocal_517 /*62*/].f_58.f_1)
	{
		func_736();
		func_735(Local_582[iLocal_517 /*62*/].f_58);
		Local_582[iLocal_517 /*62*/].f_58.f_1 = Local_582[iLocal_517 /*62*/].f_58;
	}
	if (__LIB_0__.func_649(&(Local_112.f_35)) && __LIB_2__.func_47(&(Local_112.f_35), 5000, 0))
	{
		func_728();
	}
}

void func_728()//Position - 0x29199
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_32.f_1))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_32.f_1, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_32.f_2))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_32.f_2, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_32))
	{
		OBJECT::DELETE_OBJECT(&(Local_112.f_32));
	}
	__LIB_0__.func_579(&(Local_112.f_35));
}

void func_729()//Position - 0x291EC
{
	if (__LIB_0__.func_649(&(Local_112.f_35)))
	{
		func_728();
	}
	Local_112.f_32 = Local_538[0 /*3*/];
	Local_112.f_32.f_1 = Local_538[0 /*3*/].f_1;
	Local_112.f_32.f_2 = Local_538[0 /*3*/].f_2;
	Local_538[0 /*3*/] = 0;
	Local_538[0 /*3*/].f_1 = 0;
	Local_538[0 /*3*/].f_2 = 0;
	Local_202.f_260.f_1[0 /*10*/] = { 0f, 0f, 0f };
	__LIB_0__.func_580(&(Local_112.f_35), 0, 0);
}

void func_730()//Position - 0x2925B
{
	struct<3> Var0;
	float fVar1;
	func_733(0, 0);
	func_733(0, 1);
	func_731(0, 2);
	Var0 = { Local_202.f_163.f_1[func_605(2) /*12*/].f_4 };
	fVar1 = Local_202.f_163.f_1[func_605(2) /*12*/].f_7;
	Local_202.f_260.f_1[0 /*10*/] = { __LIB_1__.func_249(Var0, fVar1, 0.5f, 0f, 0f) };
}

void func_731(int iParam0, int iParam1)//Position - 0x292B8
{
	__LIB_13__.func_759(&(Local_202.f_260.f_1[iParam0 /*10*/].f_8), iParam0, iParam1);
}

void func_733(int iParam0, int iParam1)//Position - 0x292E8
{
	func_734(&(Local_202.f_260.f_1[iParam0 /*10*/].f_8), iParam0, iParam1);
}

void func_734(var uParam0, int iParam1, var uParam2)//Position - 0x29305
{
	if (__LIB_11__.func_631(uParam0, uParam2))
	{
	}
}

void func_735(int iParam0)//Position - 0x29318
{
	var uVar0;
	if (func_618() && func_616(iParam0, &uVar0))
	{
		func_733(0, 0);
		func_733(0, 1);
		func_733(0, 2);
		Local_202.f_260.f_1[0 /*10*/] = { func_657(iParam0) };
	}
	else
	{
		func_731(0, 0);
		func_733(0, 1);
		func_733(0, 2);
		Local_202.f_260.f_1[0 /*10*/] = { func_657(iParam0) };
	}
}

void func_736()//Position - 0x2937F
{
	if (__LIB_0__.func_649(&(Local_112.f_35)))
	{
		func_728();
	}
	Local_112.f_32 = Local_538[0 /*3*/];
	Local_112.f_32.f_1 = Local_538[0 /*3*/].f_1;
	Local_112.f_32.f_2 = Local_538[0 /*3*/].f_2;
	Local_538[0 /*3*/] = 0;
	Local_538[0 /*3*/].f_1 = 0;
	Local_538[0 /*3*/].f_2 = 0;
	Local_202.f_260.f_1[0 /*10*/] = { 0f, 0f, 0f };
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_32.f_1))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_32.f_1, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_112.f_32.f_2))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_112.f_32.f_2, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_32))
	{
		OBJECT::DELETE_OBJECT(&(Local_112.f_32));
	}
	__LIB_0__.func_579(&(Local_112.f_35));
}

void func_737()//Position - 0x2942F
{
	if (func_595(10) && func_595(9))
	{
		func_738();
	}
	if (!func_595(10) && func_595(5))
	{
		func_8(3);
	}
}

void func_738()//Position - 0x29468
{
	if (func_740())
	{
		func_739(10);
	}
}

void func_739(int iParam0)//Position - 0x2947D
{
	if (__LIB_11__.func_631(&(Local_575.f_254), iParam0))
	{
	}
}

int func_740()//Position - 0x29493
{
	if (__LIB_0__.func_529(iLocal_516, Local_202.f_163.f_1[func_605(2) /*12*/].f_4, 1) > 400f)
	{
		return 1;
	}
	if (func_741())
	{
		return 1;
	}
	return 0;
}

bool func_741()//Position - 0x294CD
{
	return (func_56() && func_38());
}

void func_743()//Position - 0x2951C
{
	func_751();
	func_749();
	func_747();
	func_746();
	func_745();
	func_744();
}

void func_744()//Position - 0x2953C
{
	Local_202.f_258 = 1;
	Local_202.f_258.f_1 = 1;
}

void func_745()//Position - 0x29552
{
	Local_202.f_351 = 1;
	Local_202.f_351.f_1[0 /*5*/] = { Local_202.f_163.f_1[func_605(0) /*12*/].f_4 };
	Local_202.f_351.f_1[0 /*5*/].f_3 = 100f;
}

void func_746()//Position - 0x2958E
{
	Local_202.f_272.f_4 = 10000;
	Local_202.f_272.f_5 = 0;
}

void func_747()//Position - 0x295A8
{
	Local_202.f_303 = 2;
	Local_202.f_303.f_1[0 /*23*/].f_2 = 2;
	Local_202.f_303.f_1[0 /*23*/].f_3 = { func_657(0) + Vector(0.8f, 0f, 0f) };
	Local_202.f_303.f_1[0 /*23*/].f_16 = 2;
	func_748(0, 15);
	Local_202.f_303.f_1[1 /*23*/].f_2 = 2;
	Local_202.f_303.f_1[1 /*23*/].f_3 = { Local_202.f_163.f_1[func_605(2) /*12*/].f_4 + Vector(0.8f, 0f, 0f) };
	Local_202.f_303.f_1[1 /*23*/].f_16 = 1;
	func_748(1, 15);
}

void func_748(int iParam0, int iParam1)//Position - 0x2963A
{
	if (__LIB_1__.func_101(&(Local_202.f_303.f_1[iParam0 /*23*/]), iParam1))
	{
	}
}

void func_749()//Position - 0x29656
{
	Local_202.f_260 = 1;
	Local_202.f_260.f_1[0 /*10*/] = { func_657(0) };
	Local_202.f_260.f_1[0 /*10*/].f_7 = func_750();
	Local_202.f_260.f_1[0 /*10*/].f_6 = 2f;
	func_731(0, 0);
}

int func_750()//Position - 0x29698
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			return 12;
		case 1:
			return 15;
		default:
	}
	return 6;
}

void func_751()//Position - 0x296C2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_752(iVar0, 8);
		if (iVar0 >= func_605(0) && iVar0 <= func_605(1))
		{
			func_752(iVar0, 34);
		}
		func_752(iVar0, 33);
		iVar0++;
	}
}

void func_752(int iParam0, int iParam1)//Position - 0x2970C
{
	if (__LIB_1__.func_101(&(Local_202.f_163.f_1[iParam0 /*12*/]), iParam1))
	{
	}
}

int func_753()//Position - 0x29727
{
	func_754();
	return 1;
}

void func_754()//Position - 0x29734
{
	int iVar0;
	iVar0 = Global_262145.f_32704 /* Tunable: -58677600 */;
	if ((iVar0 > 0 && MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= iVar0) || 0)
	{
		func_651(10);
	}
}

int func_755()//Position - 0x29768
{
	func_756();
	return 1;
}

void func_756()//Position - 0x29775
{
	StringCopy(&Local_112, "[", 64);
	StringConCat(&Local_112, &cLocal_554, 64);
	StringConCat(&Local_112, "] ", 64);
	StringConCat(&Local_112, "[STS_", 64);
	StringIntConCat(&Local_112, func_589() + 1, 64);
	StringConCat(&Local_112, "] ", 64);
	StringCopy(&(Local_112.f_16), "[PARTICIPANT_", 64);
	StringIntConCat(&(Local_112.f_16), iLocal_517, 64);
	StringConCat(&(Local_112.f_16), "] ", 64);
}

void func_757()//Position - 0x297CB
{
	func_770(0, 19, 171151/*func_771*/);
	func_769(0, 1, 1);
	func_769(0, 3, 3);
	func_770(1, 43, 171028/*func_768*/);
	func_769(1, 2, 2);
	func_769(1, 3, 3);
	func_770(2, 43, 171020/*func_767*/);
	func_769(2, 3, 3);
	func_770(3, 48, 170018/*func_758*/);
}

void func_769(int iParam0, int iParam1, int iParam2)//Position - 0x29C1C
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = Local_215[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_215[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_215[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_215[iParam0 /*21*/].f_19++;
}

void func_770(int iParam0, int iParam1, int iParam2)//Position - 0x29C6B
{
	Local_215[iParam0 /*21*/] = iParam1;
	Local_215[iParam0 /*21*/].f_20 = iParam2;
	iLocal_526++;
}

void func_772()//Position - 0x29C97
{
	func_779(0, 19);
	func_777(0, 1, 171414/*func_778*/);
	func_777(0, 3, 171303/*func_776*/);
	func_779(1, 43);
	func_777(1, 2, 171281/*func_775*/);
	func_777(1, 3, 171303/*func_776*/);
	func_779(2, 43);
	func_777(2, 3, 171303/*func_776*/);
	func_779(3, 48);
	func_773(3, 171273/*func_774*/);
}

void func_773(int iParam0, int iParam1)//Position - 0x29CF6
{
	Local_214[iParam0 /*20*/].f_17 = iParam1;
}

int func_775()//Position - 0x29D11
{
	if (func_595(8))
	{
		return 1;
	}
	return 0;
}

int func_776()//Position - 0x29D27
{
	if (func_540() == 3)
	{
		return 1;
	}
	else if (func_540() > 0)
	{
		return 1;
	}
	return 0;
}

void func_777(int iParam0, int iParam1, int iParam2)//Position - 0x29D4B
{
	int iVar0;
	var uVar1;
	iVar0 = Local_214[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_214[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_214[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_214[iParam0 /*20*/].f_19++;
}

int func_778()//Position - 0x29D96
{
	if (Local_575.f_256.f_2 == 1)
	{
		return 1;
	}
	return 0;
}

void func_779(int iParam0, int iParam1)//Position - 0x29DAF
{
	Local_214[iParam0 /*20*/] = iParam1;
	iLocal_525++;
}

int func_781(var uParam0, var uParam1)//Position - 0x29DD0
{
	Local_575.f_256 = uParam0;
	Local_575.f_256.f_1 = uParam1;
	return 1;
}

bool func_784(int iParam0)//Position - 0x29E33
{
	return __LIB_9__.func_807(&uLocal_527, iParam0);
}

void func_785()//Position - 0x29E44
{
	if (Local_210.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_210.f_3.f_2.f_1);
	}
	if (Local_210.f_102.f_6 != 0)
	{
		Call_Loc(Local_210.f_102.f_6);
		if (StackVal)
		{
			return;
		}
	}
	if (func_1032())
	{
		return;
	}
	if (!func_1031())
	{
		return;
	}
	if (func_784(46))
	{
		return;
	}
	if (!__LIB_0__.func_109())
	{
		return;
	}
	func_841();
	func_834();
	func_829();
	func_792();
	func_789();
	func_786();
}

void func_786()//Position - 0x29EC0
{
	if (!func_784(30))
	{
		if (Local_210.f_91 != 0)
		{
			Call_Loc(Local_210.f_91);
			__LIB_21__.func_130(StackVal);
		}
		func_145(30);
	}
}

void func_789()//Position - 0x29F37
{
	int iVar0;
	int iVar1;
	if (func_152(iLocal_518, 0))
	{
		return;
	}
	if (func_784(11))
	{
		if (Local_210.f_54 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_210.f_54);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_210.f_54.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_210.f_54.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	if (Local_210.f_54.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Stack.Push(0);
		Call_Loc(Local_210.f_54.f_5);
		iVar0 = SYSTEM::ROUND((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Stack.Push(1);
		Call_Loc(Local_210.f_54.f_5);
		iVar1 = SYSTEM::ROUND((StackVal * StackVal));
	}
	if (iVar0 > 0)
	{
		__LIB_38__.func_250(iVar0);
		if (Local_202.f_258)
		{
			Global_2727753 = iVar0;
			__LIB_0__.func_495(&Global_2725869, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_202.f_258.f_1)
		{
			__LIB_1__.func_444();
		}
		Stack.Push(0);
		Stack.Push(iLocal_516);
		Stack.Push("");
		Stack.Push(joaat("XPTYPE_COMPLETE"));
		Call_Loc(Local_210.f_54.f_9);
		__LIB_39__.func_980(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, 1, -1, 0, 0, 0);
	}
	Local_494.f_5 = (Local_494.f_5 + iVar0);
	Local_494.f_6 = (Local_494.f_6 + iVar1);
	func_790(0);
}

void func_790(int iParam0)//Position - 0x2A02E
{
	if (__LIB_1__.func_101(&(Local_582[iLocal_517 /*62*/].f_1), iParam0))
	{
	}
}

void func_792()//Position - 0x2A077
{
	if (!func_784(8))
	{
		if (func_827())
		{
			if (__LIB_36__.func_232(0, 1, 1) && __LIB_0__.func_109())
			{
				__LIB_0__.func_371();
				func_145(8);
			}
		}
		else
		{
			func_145(8);
		}
	}
}

int func_827()//Position - 0x2A720
{
	if (func_540() == 2 && __LIB_1__.func_297(Local_524.f_0) != 3)
	{
		return 0;
	}
	if (func_784(11))
	{
		if (func_41(24) || func_41(23))
		{
			return 0;
		}
	}
	return 1;
}

void func_829()//Position - 0x2A9A8
{
	int iVar0;
	if (func_152(iLocal_518, 25))
	{
		return;
	}
	if (__LIB_19__.func_482())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_831())
	{
		if (Local_575.f_285.f_1[iVar0 /*5*/].f_1 != -1)
		{
			__LIB_13__.func_281(Local_575.f_285.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_790(25);
}

int func_831()//Position - 0x2AA64
{
	int iVar0;
	iVar0 = (iVar0 + func_46());
	return iVar0;
}

void func_834()//Position - 0x2AAC8
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < Local_202.f_38)
	{
		if (__LIB_14__.func_760(iVar1, 19))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iVar1 /*24*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_575.f_22[iVar1 /*24*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					func_835(iVar1, iVar0);
				}
			}
		}
		iVar1++;
	}
}

void func_835(int iParam0, int iParam1)//Position - 0x2AB22
{
	struct<3> Var0;
	if (!__LIB_0__.func_583(iParam1, -251125078, 1) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		func_839(iParam0, iParam1);
		Var0 = { func_838(iParam0) };
		TASK::TASK_SMART_FLEE_COORD(iParam1, Var0, func_837(iParam0), func_836(iParam0), false, false);
	}
}

int func_836(int iParam0)//Position - 0x2AB76
{
	if (Local_210.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_837(int iParam0)//Position - 0x2AB9F
{
	if (Local_210.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

Vector3 func_838(int iParam0)//Position - 0x2ABCC
{
	if (Local_210.f_156.f_2.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_72);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/]), false);
}

void func_839(int iParam0, int iParam1)//Position - 0x2AC02
{
	if (Local_210.f_156.f_2.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_72.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
}

void func_841()//Position - 0x2AC9F
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_202.f_19)
	{
		func_1030(iVar4);
		bVar0 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = NETWORK::NET_TO_ENT(Local_575.f_2[iVar4]);
			bVar1 = ENTITY::IS_ENTITY_DEAD(iVar3, false);
			if (Local_210.f_114.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_210.f_114.f_34);
			}
			if (!bVar1)
			{
				func_1025(iVar4, iVar3);
				func_1024(iVar4, iVar3);
				func_1016(iVar4, iVar3, &bVar2, &iVar5);
				func_1011(iVar4, iVar3);
				func_998(iVar4, iVar3, bVar2);
				func_993(iVar4, iVar3);
			}
			func_991(iVar4);
			func_978(iVar4, Local_498.f_11);
			func_895(iVar4);
		}
		else
		{
			Local_477[iVar4 /*7*/].f_1 = 99999f;
			Local_477[iVar4 /*7*/].f_2 = 99999f;
			Local_477[iVar4 /*7*/].f_3 = 99999f;
		}
		func_886(iVar4, bVar0);
		iVar4++;
	}
	if (bVar2)
	{
		__LIB_21__.func_108(1);
	}
	else
	{
		func_878(0, 0);
		__LIB_21__.func_108(0);
	}
	func_865();
	func_843();
	iLocal_544++;
	if (iLocal_544 >= func_46())
	{
		iLocal_544 = 0;
		func_842();
	}
}

void func_842()//Position - 0x2ADCC
{
	if (__LIB_2__.func_47(&(Local_477.f_12), 5000, 0) && Local_477.f_14)
	{
		__LIB_0__.func_579(&(Local_477.f_12));
		Local_477.f_14 = 0;
	}
}

void func_843()//Position - 0x2ADFD
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iLocal_544]))
	{
		iVar2 = NETWORK::NET_TO_ENT(Local_575.f_2[iLocal_544]);
		bVar1 = ENTITY::IS_ENTITY_DEAD(iVar2, false);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, false) };
		if (!bVar1)
		{
			func_863(iLocal_544, Var0);
			if (__LIB_2__.func_47(&(Local_477.f_12), 5000, 0))
			{
				if (iLocal_544 == 0)
				{
					Local_477.f_14 = 1;
				}
				__LIB_38__.func_280(iLocal_544, iVar2, Var0);
			}
		}
	}
}

void func_863(int iParam0, struct<3> Param1)//Position - 0x2D53A
{
	Local_477[iParam0 /*7*/].f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_519, func_864(iParam0));
	Local_477[iParam0 /*7*/].f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, func_198(), func_864(iParam0));
	Local_477[iParam0 /*7*/].f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_202.f_19.f_5[iParam0 /*13*/].f_3, func_864(iParam0));
}

int func_864(int iParam0)//Position - 0x2D59E
{
	if (Local_210.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_29);
	}
	return 1;
}

void func_865()//Position - 0x2D5BD
{
	if (func_875(iLocal_514, 1) && func_874())
	{
		if (func_870())
		{
			if (!func_784(35))
			{
				__LIB_0__.func_151(__LIB_13__.func_348(), -1);
				func_145(35);
			}
		}
	}
	else if (func_784(35))
	{
		if (__LIB_0__.func_1(__LIB_13__.func_348()))
		{
			HUD::CLEAR_HELP(true);
		}
		func_866(35);
	}
}

void func_866(int iParam0)//Position - 0x2D61B
{
	if (__LIB_11__.func_631(&uLocal_527, iParam0))
	{
	}
}

int func_870()//Position - 0x2D665
{
	if (((((((((!__LIB_0__.func_190() && !__LIB_0__.func_661()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && bLocal_511) && !__LIB_1__.func_159()) && func_784(9)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	return 0;
}

int func_874()//Position - 0x2D70A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar0]))
		{
			if (iLocal_545[iVar0] != iLocal_518)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_575.f_2[iVar0])))
				{
					if (Local_477[iVar0 /*7*/].f_1 < 2f)
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

int func_875(int iParam0, bool bParam1)//Position - 0x2D76C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (func_876(iParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_876(int iParam0, int iParam1, bool bParam2)//Position - 0x2D79B
{
	if (Local_477[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (__LIB_14__.func_763(iParam1, 4) || func_877(iParam1, iLocal_518, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_877(int iParam0, int iParam1, int iParam2)//Position - 0x2D7D9
{
	return __LIB_9__.func_807(&(Local_582[iParam1 /*62*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_878(bool bParam0, int iParam1)//Position - 0x2D7F4
{
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (bParam0)
	{
		if (__LIB_14__.func_763(iParam1, 32))
		{
			__LIB_21__.func_79(1);
		}
		__LIB_13__.func_349(Local_202.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		__LIB_21__.func_79(0);
		__LIB_13__.func_349(0);
	}
}

void func_886(int iParam0, bool bParam1)//Position - 0x2D92A
{
	if (!func_894(iParam0))
	{
		return;
	}
	if (bParam1 && __LIB_6__.func_924(Local_575.f_2[iParam0]))
	{
		__LIB_4__.func_509(&(Local_575.f_2[iParam0]));
	}
	func_888(iParam0);
	__LIB_14__.func_776(iParam0);
}

int func_888(int iParam0)//Position - 0x2D9BC
{
	int iVar0;
	if (!__LIB_14__.func_763(iParam0, 4) || !func_893(iParam0))
	{
		return 1;
	}
	if (!func_890(iParam0))
	{
		return 0;
	}
	iVar0 = func_889(iParam0);
	if (!func_41(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_889(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_889(iParam0)), true, true);
	}
	if (func_41(11))
	{
		if (!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_889(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_889(iParam0)), true, true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_889(iParam0))))
		{
			__LIB_4__.func_509(&iVar0);
		}
	}
	else if (func_41(12))
	{
		__LIB_1__.func_162(&iVar0);
	}
	else if (!func_41(32))
	{
		__LIB_4__.func_509(&iVar0);
	}
	return 0;
}

int func_889(int iParam0)//Position - 0x2DA8C
{
	var uVar0;
	int iVar1;
	if (!__LIB_14__.func_771(iParam0))
	{
		return uVar0;
	}
	iVar1 = __LIB_14__.func_769(iParam0);
	switch (func_480())
	{
		case 2:
			return Local_575.f_119[iVar1 /*8*/];
		case 1:
			return Local_575.f_22[iVar1 /*24*/];
		default:
	}
	return uVar0;
}

int func_890(int iParam0)//Position - 0x2DADA
{
	if (!func_41(12))
	{
		switch (func_480())
		{
			case 2:
				if (__LIB_21__.func_80(func_892(iParam0), 0, 1))
				{
					return 0;
				}
				break;
		}
		if (!__LIB_6__.func_924(func_889(iParam0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_892(int iParam0)//Position - 0x2DBDE
{
	var uVar0;
	int iVar1;
	iVar1 = func_889(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		return NETWORK::NET_TO_VEH(iVar1);
	}
	return uVar0;
}

int func_893(int iParam0)//Position - 0x2DC02
{
	if (!__LIB_14__.func_771(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_889(iParam0)))
	{
		return 0;
	}
	if ((__LIB_14__.func_763(iParam0, 35) || __LIB_14__.func_763(iParam0, 36)) || __LIB_14__.func_763(iParam0, 37))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_889(iParam0)), false))
	{
		return 0;
	}
	return 1;
}

int func_894(int iParam0)//Position - 0x2DC6C
{
	if ((((__LIB_14__.func_763(iParam0, 19) || (__LIB_14__.func_763(iParam0, 3) && __LIB_2__.func_47(&(Local_575.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || __LIB_14__.func_763(iParam0, 4)) || __LIB_14__.func_763(iParam0, 25)) || __LIB_14__.func_763(iParam0, 33))
	{
		return (__LIB_14__.func_763(iParam0, 4) || __LIB_14__.func_763(iParam0, 3));
	}
	return 0;
}

void func_895(int iParam0)//Position - 0x2DCE5
{
	if (func_972(iParam0))
	{
		func_897(iParam0);
	}
	else
	{
		func_896(iParam0);
	}
}

void func_896(int iParam0)//Position - 0x2DD05
{
	if (HUD::DOES_BLIP_EXIST(Local_477[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_477[iParam0 /*7*/]));
	}
}

void func_897(int iParam0)//Position - 0x2DD26
{
	if (!HUD::DOES_BLIP_EXIST(Local_477[iParam0 /*7*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iParam0]))
		{
			Local_477[iParam0 /*7*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]));
			if (__LIB_13__.func_352(func_970(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_477[iParam0 /*7*/], func_970(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_477[iParam0 /*7*/], func_967(iParam0));
			HUD::SET_BLIP_COLOUR(Local_477[iParam0 /*7*/], func_959(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_477[iParam0 /*7*/], func_957(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_477[iParam0 /*7*/], 12);
			if (func_956(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_477[iParam0 /*7*/], true);
			}
			if (!func_877(iParam0, iLocal_518, 46))
			{
				__LIB_13__.func_350(&(Local_477[iParam0 /*7*/]), 1);
				func_954(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_477[iParam0 /*7*/], func_959(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_477[iParam0 /*7*/]) != func_970(iParam0) && __LIB_13__.func_352(func_970(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_477[iParam0 /*7*/], func_970(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_477[iParam0 /*7*/], func_957(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_477[iParam0 /*7*/]) != func_959(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_477[iParam0 /*7*/], func_959(iParam0, 0));
		}
		if (func_534(iParam0, 17))
		{
			__LIB_38__.func_249(Local_477[iParam0 /*7*/], 100, 5000f, 1137180672);
		}
		if (__LIB_14__.func_769(iParam0) > -1 && func_480() == 2)
		{
			if (func_898(iParam0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[__LIB_14__.func_769(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_575.f_119[__LIB_14__.func_769(iParam0) /*8*/]), false))
				{
					HUD::SET_BLIP_ROTATION(Local_477[iParam0 /*7*/], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_575.f_119[__LIB_14__.func_769(iParam0) /*8*/]))));
				}
			}
		}
	}
}

int func_898(int iParam0)//Position - 0x2DF13
{
	if (Local_210.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_18);
		return StackVal;
	}
	return 0;
}

void func_954(int iParam0, int iParam1)//Position - 0x2F352
{
	if (__LIB_1__.func_101(&(Local_582[iLocal_517 /*62*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_956(int iParam0)//Position - 0x2F39D
{
	if (Local_210.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_14);
		return StackVal;
	}
	return Local_202.f_19.f_1.f_3;
}

var func_957(int iParam0)//Position - 0x2F3C5
{
	if (Local_210.f_114.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_13);
		return StackVal;
	}
	return __LIB_13__.func_351();
}

int func_959(int iParam0, bool bParam1)//Position - 0x2F3F5
{
	if (Local_210.f_114.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_5);
		return __LIB_1__.func_48(StackVal);
	}
	if (!bParam1)
	{
		if (func_877(iParam0, iLocal_518, 12))
		{
			return 1;
		}
	}
	else if (func_964() == 23 && func_877(iParam0, iLocal_518, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_477[iParam0 /*7*/].f_4 != __LIB_0__.func_160())
	{
		return __LIB_1__.func_48(__LIB_21__.func_110(Local_477[iParam0 /*7*/].f_4));
	}
	if (func_496(iParam0))
	{
		if (!func_41(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_964()//Position - 0x2F5C3
{
	if (func_965() != -1)
	{
		return Local_215[func_965() /*21*/];
	}
	return -1;
}

int func_965()//Position - 0x2F5E0
{
	return Local_582[iLocal_517 /*62*/];
}

var func_967(int iParam0)//Position - 0x2F858
{
	if (Local_210.f_114.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_6);
		return StackVal;
	}
	return func_968();
}

var func_968()//Position - 0x2F87C
{
	return Local_202.f_19.f_1.f_2;
}

int func_970(int iParam0)//Position - 0x2F8AC
{
	if (Local_210.f_114.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_4);
		return StackVal;
	}
	if (Local_202.f_19.f_1 != -1)
	{
		return Local_202.f_19.f_1;
	}
	return __LIB_13__.func_762();
}

int func_972(int iParam0)//Position - 0x2F8EE
{
	if (!bLocal_523)
	{
		return 0;
	}
	if (func_977(iParam0, 1))
	{
		return 0;
	}
	if (Local_477[iParam0 /*7*/].f_4 != __LIB_0__.func_160() && func_480() != 1)
	{
		return 0;
	}
	if (func_534(iParam0, 10) && !__LIB_14__.func_763(iParam0, 7))
	{
		return 0;
	}
	if (func_877(iParam0, iLocal_518, 14))
	{
		return 0;
	}
	if ((func_534(iParam0, 16) && __LIB_14__.func_763(iParam0, 23)) && !func_152(iLocal_518, 2))
	{
		return 0;
	}
	if (__LIB_14__.func_763(iParam0, 23) && __LIB_1__.func_454(iLocal_514))
	{
		return 0;
	}
	if (__LIB_14__.func_763(iParam0, 29) && __LIB_14__.func_763(iParam0, 40))
	{
		return 0;
	}
	if (func_973())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_114);
	return StackVal;
}

int func_973()//Position - 0x2F9D1
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(iLocal_514) < 1)
	{
		return 0;
	}
	if (func_976())
	{
		return 1;
	}
	if (func_975())
	{
		if (func_974(iLocal_514, 0, 1, 0) || func_875(iLocal_514, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_974(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2FA29
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if ((((iParam1 || !__LIB_14__.func_763(iVar0, 4)) && (iParam2 || !func_877(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 1))) && (iParam3 || !func_877(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 12))) && func_877(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_975()//Position - 0x2FAA8
{
	if (Local_210.f_64.f_11 != 0)
	{
		Call_Loc(Local_210.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_976()//Position - 0x2FAC7
{
	if (Local_210.f_64.f_10 != 0)
	{
		Call_Loc(Local_210.f_64.f_10);
		return StackVal;
	}
	return 0;
}

int func_977(int iParam0, bool bParam1)//Position - 0x2FAE6
{
	if (__LIB_14__.func_763(iParam0, 4) || __LIB_14__.func_763(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_877(iParam0, iLocal_518, 6) || func_877(iParam0, iLocal_518, 9))
		{
			return 1;
		}
	}
	return 0;
}

void func_978(int iParam0, int iParam1)//Position - 0x2FB31
{
	if (Local_477[iParam0 /*7*/].f_4 == iLocal_514)
	{
		if (iParam1 != 5)
		{
			if (!func_989(__LIB_14__.func_767(iParam0)))
			{
				func_987(__LIB_14__.func_767(iParam0));
				if (Local_210.f_114.f_32 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_114.f_32);
				}
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1952191.f_5314 && !__LIB_4__.func_15(iLocal_514)) && !__LIB_19__.func_482())
		{
			if (func_989(__LIB_14__.func_767(iParam0)))
			{
				func_979(__LIB_14__.func_767(iParam0));
			}
		}
	}
}

void func_979(int iParam0)//Position - 0x2FBBD
{
	if (!func_983(iParam0))
	{
		return;
	}
	__LIB_21__.func_131(Local_575.f_285.f_1[iParam0 /*5*/]);
}

int func_983(int iParam0)//Position - 0x2FCE7
{
	if ((iParam0 == -1 || func_985(iParam0) == -1) || func_984(iParam0) == -1)
	{
		return 0;
	}
	return __LIB_2__.func_467(Local_575.f_285.f_1[iParam0 /*5*/]);
}

int func_984(int iParam0)//Position - 0x2FD28
{
	return Local_575.f_285.f_1[iParam0 /*5*/].f_3;
}

int func_985(int iParam0)//Position - 0x2FD3E
{
	return Local_575.f_285.f_1[iParam0 /*5*/].f_2;
}

void func_987(int iParam0)//Position - 0x2FD96
{
	if (!func_983(iParam0))
	{
		return;
	}
	__LIB_26__.func_831(Local_575.f_285.f_1[iParam0 /*5*/]);
}

int func_989(int iParam0)//Position - 0x2FE40
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	return __LIB_13__.func_354(Local_575.f_285.f_1[iParam0 /*5*/]);
}

void func_991(int iParam0)//Position - 0x2FED7
{
	if (iLocal_545[iParam0] != __LIB_0__.func_160())
	{
		if (uLocal_546[iParam0] != iLocal_545[iParam0])
		{
			uLocal_546[iParam0] = iLocal_545[iParam0];
		}
	}
}

void func_993(int iParam0, int iParam1)//Position - 0x2FF15
{
	bool bVar0;
	struct<3> Var1;
	if (!func_534(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_477[iParam0 /*7*/].f_1 < func_997(iParam0))
	{
		bVar0 = true;
		if (func_996(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_516, iParam1, 287))
		{
			bVar0 = false;
		}
		if (func_995(iParam0) != -1f)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			if (MISC::ABSF((Var1.f_2 - Local_519.f_2)) > func_995(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_210.f_114.f_35 != 0)
		{
			if (!func_877(iParam0, iLocal_518, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_114.f_35);
			}
		}
		func_954(iParam0, 35);
		func_954(iParam0, 0);
	}
	else
	{
		func_994(iParam0, 0);
	}
}

void func_994(int iParam0, int iParam1)//Position - 0x2FFD6
{
	if (__LIB_11__.func_631(&(Local_582[iLocal_517 /*62*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_995(int iParam0)//Position - 0x2FFF5
{
	if (Local_210.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_996(int iParam0)//Position - 0x30017
{
	if (Local_210.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_997(int iParam0)//Position - 0x30038
{
	if (Local_210.f_114.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_24);
		return StackVal;
	}
	if (func_496(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_998(int iParam0, int iParam1, bool bParam2)//Position - 0x3006E
{
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (!__LIB_14__.func_763(iParam0, 32) && !func_877(iParam0, iLocal_518, 24))
	{
		if (func_1007(iParam0))
		{
			if (__LIB_6__.func_924(Local_575.f_2[iParam0]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_575.f_2[iParam0], true);
				OBJECT::ALLOW_PICKUP_BY_NONE_PARTICIPANT(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true);
				__LIB_32__.func_998(Local_524.f_0, 0, 0);
				func_954(iParam0, 24);
			}
		}
	}
	else
	{
		__LIB_26__.func_803(iParam1, &(Local_477[iParam0 /*7*/].f_5), func_1004(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_878(bParam2, iParam0);
	}
}

int func_1004(int iParam0)//Position - 0x302AA
{
	if ((__LIB_14__.func_763(iParam0, 3) || __LIB_14__.func_763(iParam0, 4)) || Local_477[iParam0 /*7*/].f_4 != __LIB_0__.func_160())
	{
		return 1;
	}
	return 0;
}

int func_1007(int iParam0)//Position - 0x3036A
{
	if (!func_1010(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_114.f_39);
	if (!StackVal)
	{
		return 0;
	}
	if (__LIB_2__.func_47(&(Local_575.f_2.f_18), func_1008(), 0))
	{
		return 1;
	}
	return 0;
}

int func_1008()//Position - 0x303AA
{
	if (Local_210.f_114.f_39.f_1 != 0)
	{
		Call_Loc(Local_210.f_114.f_39.f_1);
		return StackVal;
	}
	return __LIB_13__.func_356();
}

bool func_1010(int iParam0)//Position - 0x303DB
{
	return __LIB_14__.func_763(iParam0, 1);
}

void func_1011(int iParam0, int iParam1)//Position - 0x303EA
{
	if (__LIB_14__.func_763(iParam0, 29) || !__LIB_0__.func_114(iParam0))
	{
		return;
	}
	func_1012(iParam1, iParam0);
}

void func_1012(int iParam0, int iParam1)//Position - 0x30415
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		fVar0 = func_1014(iParam1);
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
		__LIB_10__.func_948(iParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0, 1, 0, 0);
	}
}

float func_1014(var uParam0)//Position - 0x30662
{
	if (Local_210.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_114.f_20);
		return StackVal;
	}
	return 0.3f;
}

void func_1016(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x30690
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (func_534(iParam0, 9) || Local_210.f_114.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_38);
		if (StackVal)
		{
			if (!__LIB_14__.func_763(iParam0, 31))
			{
				if (__LIB_6__.func_924(Local_575.f_2[iParam0]))
				{
					__LIB_14__.func_773(iParam0, 0, 0);
					func_954(iParam0, 22);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam1);
		if (iVar0 != -1)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 == iLocal_514)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_2[iParam0]))
						{
							OBJECT::HIDE_PORTABLE_PICKUP_WHEN_DETACHED(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_575.f_2[iParam0]), false);
							func_954(iParam0, 1);
							if (!__LIB_14__.func_763(iParam0, 1))
							{
								func_954(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_0__.func_371();
							*iParam3 = iParam0;
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_954(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_493))
						{
							func_954(iParam0, 1);
							if (!__LIB_14__.func_763(iParam0, 1))
							{
								func_954(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_0__.func_371();
							*iParam3 = iParam0;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_520)
					{
						func_954(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !__LIB_0__.func_114())
				{
					iVar4 = __LIB_14__.func_769(iParam0);
					if (!__LIB_13__.func_288(Local_202.f_130.f_1[iVar4 /*15*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
					{
						if (!__LIB_13__.func_288(iLocal_521))
						{
							func_954(iParam0, 21);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iLocal_516, false) == iVar3)
								{
									if (__LIB_0__.func_306(iLocal_516, 0) == -1)
									{
										func_954(iParam0, 1);
										if (!__LIB_14__.func_763(iParam0, 1))
										{
											func_954(iParam0, 18);
											__LIB_0__.func_371();
										}
										*uParam2 = 1;
										__LIB_0__.func_371();
										*iParam3 = iParam0;
									}
									func_954(iParam0, 14);
								}
								else
								{
									func_1020(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_540() == 0)
				{
					func_1017(iParam0);
				}
			}
		}
	}
}

void func_1017(int iParam0)//Position - 0x308FB
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (__LIB_6__.func_924(Local_575.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true, false);
		__LIB_13__.func_287(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]));
		func_954(iParam0, 45);
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), true) };
		Var1 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1.2f, 1.5f) };
		if (Var1.f_0 == Var0.f_0 && Var1.f_1 == Var0.f_1)
		{
			iVar2 = __LIB_14__.func_769(iParam0);
			if (iVar2 != -1)
			{
				iVar3 = Local_575.f_119[iVar2 /*8*/];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar3))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar3), false) };
				}
			}
		}
		fVar4 = __LIB_18__.func_308(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0])));
		Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), Var1, true, false, false, true);
	}
}

void func_1020(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x30A63
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_520) && __LIB_0__.func_306(iLocal_516, 0) == -1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_520)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_520))
		{
			func_954(iParam1, 1);
			if (!__LIB_14__.func_763(iParam1, 1))
			{
				func_954(iParam1, 18);
			}
			*uParam2 = 1;
			__LIB_0__.func_371();
			*uParam3 = iParam1;
		}
	}
}

void func_1024(int iParam0, int iParam1)//Position - 0x30B43
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!func_534(iParam0, 7) || __LIB_14__.func_763(iParam0, 39)) || func_877(iParam0, iLocal_518, 32))
	{
		return;
	}
	iVar0 = __LIB_0__.func_160();
	if (Local_210.f_114.f_37 != 0)
	{
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			Stack.Push(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2));
			Stack.Push(iParam0);
			Stack.Push(iVar2);
			Call_Loc(Local_210.f_114.f_37);
			if (StackVal && StackVal)
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (__LIB_1__.func_264(iVar0, 1, 1))
	{
		if (iVar0 == iLocal_514 && __LIB_0__.func_682(Local_575.f_2[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam1))
			{
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iLocal_516);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
			func_954(iParam0, 32);
		}
	}
	else if (__LIB_6__.func_924(Local_575.f_2[iParam0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
		func_954(iParam0, 32);
	}
}

void func_1025(int iParam0, int iParam1)//Position - 0x30C3B
{
	int iVar0;
	int iVar1;
	if ((!__LIB_14__.func_771(iParam0) || __LIB_14__.func_763(iParam0, 39)) || func_877(iParam0, iLocal_518, 36))
	{
		return;
	}
	iVar0 = func_1029(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		iVar1 = NETWORK::NET_TO_ENT(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (__LIB_6__.func_924(Local_575.f_2[iParam0]) && __LIB_0__.func_682(iVar0))
			{
				if (func_1027(iParam1, iVar1, func_1028(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
				{
					func_1026(iVar1);
					func_954(iParam0, 36);
				}
			}
		}
	}
}

void func_1026(int iParam0)//Position - 0x30CDC
{
	int iVar0;
	switch (func_480())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_1027(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x30D05
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (func_480())
		{
			case 2:
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), Param2, Param3, bParam4, false, bParam5, false, 2, true, 0);
				break;
			case 1:
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_1028(int iParam0, int iParam1)//Position - 0x30D6E
{
	switch (func_480())
	{
		case 2:
			switch (iParam1)
			{
				case joaat("insurgent3"):
				case joaat("limo2"):
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0.1f;
						case 1:
							return -1f, -2f, -0.1f;
						case 2:
							return 1f, -2f, -0.1f;
						case 3:
							return -1f, -2f, -0.1f;
						default:
					}
					break;
				case joaat("issi3"):
				case joaat("panto"):
				case joaat("raptor"):
					switch (iParam0)
					{
						case 0:
							return 0.5f, 0f, -0.1f;
						case 1:
							return -0.5f, 0f, -0.1f;
						case 2:
							return 0.5f, 0f, -0.1f;
						case 3:
							return -0.5f, 0f, -0.1f;
						default:
					}
					break;
				case joaat("faggio"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					return 0f, -0.65f, 0.5f;
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0.1f;
				case 1:
					return -1f, 0f, -0.1f;
				case 2:
					return 1f, 0f, -0.1f;
				case 3:
					return -1f, 0f, -0.1f;
				default:
			}
			return 0f, -1f, -0.1f;
		default:
	}
	return 0f, 0f, 0f;
}

var func_1029(int iParam0)//Position - 0x30EDB
{
	var uVar0;
	switch (func_480())
	{
		case 2:
			return Local_575.f_119[__LIB_14__.func_769(iParam0) /*8*/];
		case 1:
			return Local_575.f_22[__LIB_14__.func_769(iParam0) /*24*/];
		default:
	}
	return uVar0;
}

void func_1030(int iParam0)//Position - 0x30F1A
{
	func_994(iParam0, 1);
	func_994(iParam0, 21);
	func_994(iParam0, 14);
}

int func_1031()//Position - 0x30F39
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (!func_888(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1032()//Position - 0x30F65
{
	return Local_508.f_0 != -1;
}

void func_1033()//Position - 0x30F72
{
	func_1715();
	func_1036();
	func_1034();
}

void func_1034()//Position - 0x30F86
{
	int iVar0;
	if (!func_152(iLocal_518, 29))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_130)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]))
		{
			func_1035(iVar0, NETWORK::NET_TO_VEH(Local_575.f_119[iVar0 /*8*/]), func_478(iVar0, 2));
		}
		iVar0++;
	}
}

void func_1035(int iParam0, int iParam1, int iParam2)//Position - 0x30FDD
{
	bool bVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (__LIB_14__.func_762(iParam0, 14))
		{
			if (iParam2 != -1 && !__LIB_14__.func_763(iParam2, 4))
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
			if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (func_164(iParam0, 20))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, -1000f);
				}
				if (func_164(iParam0, 21))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_202.f_130.f_1[iParam0 /*15*/].f_3))
					{
						NETWORK::NETWORK_EXPLODE_HELI(iParam1, true, false, 0);
					}
					else
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(iParam1, true, false, -1);
					}
				}
			}
		}
	}
}

void func_1036()//Position - 0x3107D
{
	if (!func_784(46))
	{
		return;
	}
	if (!func_1714())
	{
		func_866(46);
		return;
	}
	if (!func_784(26))
	{
		if (func_1713(800))
		{
			Stack.Push(1);
			Stack.Push(1);
			Call_Loc(Local_210.f_15.f_26);
			func_1705(StackVal, StackVal, 0);
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
	else
	{
		Call_Loc(Local_210.f_15.f_26.f_1);
		Stack.Push(0);
		Call_Loc(Local_210.f_15.f_26.f_2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(Local_210.f_15.f_26.f_3);
		Call_Loc(Local_210.f_15.f_26.f_4);
		Stack.Push(3000);
		Stack.Push(1);
		Stack.Push(1);
		Call_Loc(Local_210.f_15.f_26.f_5);
		if (func_1038(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 1, 0))
		{
			func_1037(800);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(Local_210.f_15.f_26);
			func_1705(StackVal, StackVal, 0);
			func_866(46);
		}
	}
}

int func_1037(int iParam0)//Position - 0x31139
{
	func_866(40);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1038(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x31165
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
				if (!__LIB_26__.func_817())
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
			else if (func_1472(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, uParam5, iParam6, uParam8, uParam12, 0, bParam13, iParam17))
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
						__LIB_32__.func_971(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__.func_232();
						__LIB_36__.func_227(&iVar2);
					}
					if (__LIB_26__.func_817())
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
							func_1444(iVar2);
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
			if (func_1440())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_1293(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__.func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
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
					func_1093(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
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
				__LIB_39__.func_982(Global_2667225.f_706);
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
				func_1057(0, 0);
			}
			__LIB_3__.func_678(0, 0);
			if (bParam10)
			{
				__LIB_1__.func_914();
			}
			__LIB_0__.func_744();
			__LIB_38__.func_216();
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
		__LIB_36__.func_227(&(Global_2667225.f_45.f_173));
		__LIB_0__.func_643();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_1057(int iParam0, bool bParam1)//Position - 0x3219A
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
			func_1057(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_1093(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x33912
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
				func_1094(0);
			}
		}
	}
}

void func_1094(bool bParam0)//Position - 0x33A1C
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
			func_1095(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1095(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_1095(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x33AF3
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
			func_1237(iVar5, iParam1, iParam2, 1);
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
						func_1237(iVar5, 10, 0, 1);
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
									func_1237(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1095(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1237(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iVar0, func_1225(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_1095(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_395();
			if (iVar17 != -1)
			{
				__LIB_18__.func_394(iVar17, 0, iParam10);
			}
			func_1218(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1237(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__.func_721(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1095(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1237(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1095(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_36__.func_270(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__.func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1095(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__.func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1095(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1209(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__.func_721(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1095(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1095(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1095(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1095(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1095(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1095(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1095(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_931(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1218(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1209(iVar5, func_1225(iParam0, 8, -1), iParam2, func_1225(iParam0, 4, -1));
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
				func_1149(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_1209(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__.func_721(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1218(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_931(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1209(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
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
						func_1095(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1095(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1209(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1209(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__.func_721(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_39__.func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1095(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1209(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__.func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1095(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1121(iParam0, 9, iVar63))
						{
							func_1095(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1095(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1095(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1095(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1225(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1225(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1095(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_1095(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1095(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1095(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1095(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1095(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1095(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1095(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1095(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1095(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_36__.func_270(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__.func_721(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1095(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__.func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1095(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1096(iParam0, &uVar4))
		{
			func_1095(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1095(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1095(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1095(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_1225(iParam0, 3, -1), iVar10);
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
				func_1095(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1096(int iParam0, var uParam1)//Position - 0x3599F
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1225(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_1121(iParam0, iVar1, iVar0))
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

int func_1121(int iParam0, int iParam1, int iParam2)//Position - 0x39DE3
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
				if (!func_1121(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1121(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1121(iParam0, 14, iVar6))
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
			if (!func_1121(iParam0, 14, uVar11[iVar10]))
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
						return func_1121(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_1121(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1149(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x41B2E
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__.func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__.func_394(iVar1, 1, iParam2);
	}
	func_1150(iParam0, bParam3, 0, -1);
}

void func_1150(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x41B7B
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
		bVar3 = func_1188(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_1179(iParam0, iParam3);
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
			if (__LIB_18__.func_373(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_373(123, iVar0))
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
					if (__LIB_18__.func_373(iVar10, iVar0))
					{
						if (__LIB_25__.func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
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

int func_1179(int iParam0, int iParam1)//Position - 0x50C53
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
				iVar3 = func_1225(iParam0, 11, -1);
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
				iVar5 = func_1225(iParam0, 11, -1);
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

int func_1188(int iParam0, bool bParam1)//Position - 0x510B1
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
							iVar2 = __LIB_25__.func_18(joaat("MP_M_Freemode_01"), 11, func_1225(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_373(72, -1))
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
						iVar3 = func_1225(iParam0, 11, -1);
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
						iVar5 = func_1225(iParam0, 8, -1);
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
							iVar7 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_1225(iParam0, 11, -1), 0);
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
						iVar8 = func_1225(iParam0, 11, -1);
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
							iVar10 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_1225(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__.func_18(joaat("MP_F_Freemode_01"), 11, func_1225(iParam0, 11, -1), 0);
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
						iVar12 = func_1225(iParam0, 8, -1);
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

int func_1209(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5ACF1
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
					iVar0 = func_1209(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1209(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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

void func_1218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5F315
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1220(iParam0))
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
			__LIB_25__.func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_28(iVar0, iParam2, 13) && !__LIB_25__.func_28(iVar0, iParam2, 14)) && !__LIB_25__.func_28(iVar0, iParam2, 15)) && !__LIB_25__.func_28(iVar0, iParam2, 16)) && !__LIB_25__.func_28(iVar0, iParam2, 71)) && !__LIB_25__.func_28(iVar0, iParam2, 72))
				{
					__LIB_25__.func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__.func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__.func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1220(int iParam0)//Position - 0x5F4A4
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
				iVar1 = func_1225(iParam0, 11, -1);
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
				iVar3 = func_1225(iParam0, 11, -1);
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

int func_1225(int iParam0, int iParam1, int iParam2)//Position - 0x5F90D
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
				if (func_1121(iParam0, iParam1, iVar0))
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
				if (func_1121(iParam0, iParam1, iVar1))
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

void func_1237(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x628BB
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
							func_1237(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_1237(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1237(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1237(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1237(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1237(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1237(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1237(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1237(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1237(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1293(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x7EC9B
{
	int* iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_18__.func_460(PLAYER::PLAYER_ID()))
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
	if (func_1434() && !bVar3)
	{
		if (func_1433())
		{
			if (func_1427(&bVar2))
			{
				if (__LIB_4__.func_942(bVar2))
				{
					if (!bVar4)
					{
						func_1093(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
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
						func_1093(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), iVar5, 0);
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
		if (__LIB_7__.func_798(iVar0))
		{
			if ((__LIB_26__.func_817() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_26__.func_817())
			{
				if (!__LIB_32__.func_941(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1444(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__.func_851())
	{
		__LIB_36__.func_227(&iVar0);
	}
	if (func_1440())
	{
		__LIB_36__.func_227(&(Global_2667225.f_45.f_173));
		if (__LIB_2__.func_65())
		{
			if (__LIB_1__.func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__.func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__.func_64(), __LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__.func_64(), fParam1);
				func_1400(__LIB_2__.func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__.func_662())
			{
				if (__LIB_7__.func_138(__LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__.func_165(), 1))
				{
					func_1400(__LIB_2__.func_64());
					return 1;
				}
			}
			else if (func_1296(__LIB_18__.func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__.func_165(), 0, 1, 0))
			{
				func_1400(__LIB_2__.func_64());
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
			func_1400(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_1296(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7F331
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
							__LIB_37__.func_835(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__.func_371(iVar1) || !__LIB_7__.func_193(iVar1, 1))
							{
								if (!__LIB_0__.func_113(iVar1))
								{
								}
								else
								{
									__LIB_35__.func_937(iParam3, -1);
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
									if (func_330(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_330(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
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
										if (func_330(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (func_330(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
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
									func_1350(&iVar0, iParam3);
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
													__LIB_39__.func_768(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_35__.func_565(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
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
									__LIB_35__.func_565(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
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

void func_1350(int iParam0, int iParam1)//Position - 0x8B7B2
{
	func_229(*iParam0, &(Global_1585857[iParam1 /*142*/]), 1, 1, 0);
	__LIB_35__.func_581(iParam0, iParam1);
}

void func_1400(int iParam0)//Position - 0x8CFC1
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
	func_1444(iParam0);
	__LIB_1__.func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		func_1417(iParam0, 1);
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

void func_1417(int iParam0, bool bParam1)//Position - 0x8DA2C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		func_229(iParam0, &(Global_2667225.f_45.f_69), bParam1, 1, 0);
	}
}

int func_1427(var uParam0)//Position - 0x8DD5B
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
						Jump @555; //curOff = 335
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
											if (func_1428(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
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
int func_1428(bool bParam0)//Position - 0x8DF8A
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

int func_1433()//Position - 0x8E003
{
	bool bVar0;
	if (__LIB_1__.func_389())
	{
		if (func_1427(&bVar0))
		{
			if (func_1428(bVar0))
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

int func_1434()//Position - 0x8E048
{
	var uVar0;
	if (__LIB_1__.func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_1427(&uVar0))
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

int func_1440()//Position - 0x8E1BD
{
	bool bVar0;
	var uVar1;
	if (__LIB_26__.func_817())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1434())
		{
			if (func_1433())
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
						if (__LIB_18__.func_460(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
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

void func_1444(int iParam0)//Position - 0x8E497
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
			func_1093(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
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

int func_1472(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x8F3C7
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
			if (func_1481(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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
							func_345(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
						func_1473(&(Global_2667225.f_623));
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
								func_345(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
			if (func_1481(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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

void func_1473(var uParam0)//Position - 0x8F94F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_345(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1481(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x8FD7B
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
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	float fVar43;
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
				if (__LIB_32__.func_941(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
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
		Global_2667225.f_520.f_30 = __LIB_32__.func_917();
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
			Global_2667225.f_489 = func_1676();
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
				__LIB_38__.func_266(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_38__.func_265(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_38__.func_259(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1665(bParam2) };
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
				__LIB_38__.func_259(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
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
						if (__LIB_32__.func_912(Global_1888188))
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
				Var13 = { __LIB_32__.func_945(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1654(&(Global_2667225.f_555), 1))
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
				if (__LIB_26__.func_817() || iVar40)
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
				if (func_1654(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__.func_160())
					{
						if (__LIB_1__.func_264(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__.func_265(Global_1836068.f_14) };
							if (__LIB_26__.func_817())
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
				if (__LIB_26__.func_817())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_5__.func_703() };
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
				iVar30 = __LIB_36__.func_186(Var21, fVar35, &fVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_36__.func_210(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_36__.func_210(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_32__.func_944(Var21, fVar35) };
						Var23 = { __LIB_32__.func_943(Var21, fVar35) };
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
							uVar26[iVar0] = __LIB_36__.func_186(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
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
				if (func_398(&(Global_2667225.f_555), 0, 0, 0, 1))
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
					Var17 = { func_1626(PLAYER::PLAYER_ID()) };
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
					Var17 = { func_1626(PLAYER::PLAYER_ID()) };
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
				if (__LIB_36__.func_169())
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
					Global_2667225.f_555 = { func_1626(__LIB_0__.func_582()) };
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
							__LIB_25__.func_672(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
					Global_2667225.f_555 = { __LIB_5__.func_701() };
					Global_2667225.f_555 = { __LIB_2__.func_75(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__.func_581(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_6__.func_513(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__.func_160())
					{
						Global_2667225.f_555 = { func_1626(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1626(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1626(__LIB_0__.func_582()) };
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
					iVar37 = __LIB_6__.func_513(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__.func_160())
					{
						Global_2667225.f_555 = { func_1626(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1626(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1626(__LIB_0__.func_582()) };
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
				Global_2667225.f_555 = { func_1626(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1626(PLAYER::PLAYER_ID()) };
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
				if (Global_2667225.f_490.f_3 && !__LIB_36__.func_248(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_38__.func_264() };
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
				if (func_398(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_33__.func_16(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_32__.func_917())
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
			func_1563();
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
			if ((__LIB_0__.func_698() && __LIB_26__.func_817()) && func_398(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_32__.func_916();
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
			func_350(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1556(&(Var18[iVar0 /*3*/]), __LIB_7__.func_137(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1553(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1553(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1553(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
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
			if ((__LIB_1__.func_62(Global_2667225.f_489) && !__LIB_7__.func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_32__.func_917())
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
						func_1563();
						return 0;
					}
					else
					{
						__LIB_1__.func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_32__.func_941(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_32__.func_184(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						func_1563();
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
		Global_2667225.f_520.f_9 = __LIB_32__.func_916();
		Global_2667225.f_520.f_10 = 0;
		if (func_1482(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
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

int func_1482(var uParam0, var uParam1, var uParam2)//Position - 0x95076
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
				if (__LIB_36__.func_199(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
					func_350(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
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
			if (func_1492(uParam2, uParam0, uParam1, 0))
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
			if (func_1492(uParam2, uParam0, uParam1, 1))
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
						func_1484(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				func_1484(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
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

void func_1484(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x960BE
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
	if (func_1486(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_3__.func_902(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_350(&Var0, &uVar1, &Var2);
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
			if (func_1486(*uParam0, &Var0, iVar6, iParam3, 0))
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
			else if (func_398(uParam0, 1, 1, 1, 1))
			{
				func_1484(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_1486(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x9659E
{
	if (__LIB_1__.func_64(Param0, uParam1))
	{
		if (func_1487(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1487(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1487(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x965FA
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_395(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
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

int func_1492(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x968C9
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
					func_1538(uParam1, uParam2);
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
									func_1484(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1484(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1538(uParam1, uParam2);
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
					func_1538(uParam1, uParam2);
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
				func_1538(uParam1, uParam2);
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
		func_1535(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1500(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_1500(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
					func_1484(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
					func_1484(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__.func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1484(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
				func_1484(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_1484(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__.func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1500(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x9718D
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
		if (!__LIB_32__.func_941(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_38__.func_247(Param0, fParam1, uParam2->f_15, __LIB_1__.func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
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
		if (!__LIB_26__.func_931(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_26__.func_931(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
				if (func_442(Var12))
				{
					if (!func_398(&Param0, 0, 0, 0, 1) && !__LIB_24__.func_959(&Param0, 0))
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
				fVar0 = __LIB_36__.func_209(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_36__.func_209(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__.func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__.func_220(Param0);
			}
			fVar7 = __LIB_32__.func_942(Param0, 1, 0, 0, 0, 0);
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
							fVar0 = __LIB_36__.func_209(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_36__.func_209(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
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
							func_1503(Var19, iVar18);
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
						func_1503(Var19, iVar18);
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
						fVar6 = __LIB_32__.func_942(Param0, 1, 1, 1, 1, 0);
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
						func_1503(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1503(struct<10> Param0, int iParam1)//Position - 0x97D80
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1503(Var0, iParam1 + 1);
	}
}

void func_1535(struct<3> Param0, var uParam1, var uParam2)//Position - 0x992E6
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
					func_1537(&Var3, uParam1, iVar0);
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
				func_1537(&Var3, uParam1, iVar0);
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
					func_1537(&Var3, uParam1, iVar0);
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
				func_1536(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1536(var uParam0, var uParam1, int iParam2)//Position - 0x99606
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1536(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1537(var uParam0, var uParam1, int iParam2)//Position - 0x99644
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1537(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1538(var uParam0, var uParam1)//Position - 0x9967E
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
				func_1500(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
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

Vector3 func_1553(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x99A5F
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
		if (func_1556(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1556(var uParam0, bool bParam1)//Position - 0x99BA0
{
	func_1557(uParam0, bParam1);
	if (__LIB_36__.func_199(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1557(var uParam0, bool bParam1)//Position - 0x99BD7
{
	float fVar0;
	if (!bParam1)
	{
		func_1559(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1559(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_1__.func_975(uParam0);
}

void func_1559(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x99CAD
{
	if (bParam1)
	{
		if (func_442(Global_2667225.f_512))
		{
			if (func_398(uParam0, 1, 0, 0, bParam5))
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

void func_1563()//Position - 0x99EE2
{
	if (!Global_2667225.f_701)
	{
		if (func_442(Global_2667225.f_555))
		{
			if (func_398(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1654(&(Global_2667225.f_555), 1))
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
	if (__LIB_32__.func_917())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1626(int iParam0)//Position - 0x9EE12
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__.func_293(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__.func_293(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1627(iParam0);
}

Vector3 func_1627(int iParam0)//Position - 0x9EE86
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__.func_87(iParam0))
		{
			Var1 = { __LIB_2__.func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_1__.func_986(__LIB_1__.func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1629(__LIB_1__.func_265(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__.func_986(__LIB_1__.func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_3__.func_859(iParam0))
	{
		Var1 = { __LIB_26__.func_830(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_4__.func_15(iParam0))
	{
		iVar2 = __LIB_1__.func_259(iParam0);
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
		if (__LIB_2__.func_87(iParam0))
		{
			Var1 = { __LIB_2__.func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__.func_265(iParam0);
}

void func_1629(struct<3> Param0, var uParam1)//Position - 0x9F07C
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1630(Param0, iVar0, 0))
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
		if (func_1630(Param0, iVar0, 0))
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
		if (func_1630(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1630(Param0, iVar0, 0))
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
	if (func_1630(Param0, iVar0, 0))
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

int func_1630(struct<3> Param0, int iParam1, float fParam2)//Position - 0x9F1C0
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
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1630(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1630(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1630(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1654(var uParam0, bool bParam1)//Position - 0xA27DB
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
						if (func_398(&Var1, 0, 0, 0, 1))
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

struct<18> func_1665(bool bParam0)//Position - 0xA3217
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
			if (__LIB_26__.func_931(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_26__.func_931(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_26__.func_931(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
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
				fVar5 = __LIB_32__.func_942(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__.func_73(fVar5, Global_2667225.f_714.f_515, __LIB_32__.func_915(), __LIB_32__.func_926(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_32__.func_942(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
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
					fVar3 = __LIB_1__.func_73(fVar5, Global_2667225.f_714.f_515, __LIB_32__.func_915(), __LIB_32__.func_926(), fVar8, 0.3f);
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
					func_1666(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1666(&Var0, iVar1, fVar4, iVar7, fVar6);
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

void func_1666(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0xA367A
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
		func_1666(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1676()//Position - 0xA3CC3
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
					if (func_1687(PLAYER::PLAYER_ID()))
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
				else if ((((((__LIB_19__.func_760(1) && func_1687(PLAYER::PLAYER_ID())) && (__LIB_0__.func_396(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 157 && __LIB_0__.func_582() != __LIB_1__.func_301()))) && !__LIB_2__.func_91()) && !__LIB_8__.func_768(PLAYER::PLAYER_ID())) && !__LIB_18__.func_447(1)) && !(__LIB_0__.func_292(PLAYER::PLAYER_ID(), 0) == 0 && func_1683(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_36__.func_169())
					{
						return 34;
					}
					else if (__LIB_25__.func_531(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_4__.func_962(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__.func_57(iVar0) && __LIB_21__.func_133(iVar0)) && (__LIB_32__.func_908(iVar0) || __LIB_0__.func_581(PLAYER::PLAYER_ID())))
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
				else if (__LIB_25__.func_531(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_4__.func_962(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__.func_57(iVar0) && __LIB_21__.func_133(iVar0))
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

int func_1683(bool bParam0)//Position - 0xA4184
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_13__.func_258(bParam0, 0))
	{
		iVar0 = __LIB_2__.func_191(bParam0);
		Var1 = { func_1626(iVar0) };
		return func_398(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1687(bool bParam0)//Position - 0xA4268
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_1626(bParam0) };
	if (__LIB_13__.func_258(bParam0, 0))
	{
		iVar1 = __LIB_2__.func_191(bParam0);
		Var2 = { func_1626(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_6__.func_513(bParam0, 1);
		if (!iVar3 == __LIB_0__.func_160())
		{
			Var4 = { func_1626(iVar3) };
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

void func_1705(bool bParam0, int iParam1, int iParam2)//Position - 0xA468D
{
	if (bParam0)
	{
		__LIB_32__.func_918(iLocal_514, 0, iParam1, iParam2);
		func_145(26);
	}
	else
	{
		__LIB_32__.func_918(iLocal_514, 1, iParam1, iParam2);
		func_866(26);
	}
}

int func_1713(int iParam0)//Position - 0xA4D02
{
	func_145(40);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1714()//Position - 0xA4D2E
{
	if ((!bLocal_511 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_514)) || func_964() == 21)
	{
		return 0;
	}
	if (__LIB_2__.func_214(PLAYER::PLAYER_ID(), 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1715()//Position - 0xA4D6D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_1764(iVar0))
		{
		}
		else
		{
			func_1754(iVar0);
		}
		iVar0++;
	}
	if (func_1032())
	{
		iVar0 = __LIB_28__.func_474();
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_571.f_3);
		bVar3 = StackVal;
		if (!bLocal_511)
		{
			func_1747(0);
			return;
		}
		if (func_1746())
		{
			Stack.Push(Local_210.f_571.f_10 == 0);
			Stack.Push(__LIB_28__.func_474());
			Call_Loc(Local_210.f_571.f_10);
			Stack.Push((StackVal || MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
			Stack.Push(__LIB_28__.func_474());
			Call_Loc(Local_210.f_571.f_10);
			if (StackVal || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1))
			{
				Stack.Push(__LIB_28__.func_474());
				Stack.Push(&(Local_508.f_2));
				Call_Loc(Local_210.f_571.f_8);
			}
		}
		if (func_1745(0))
		{
			Stack.Push(func_1744());
			Call_Loc(Local_210.f_571.f_6);
			if (!StackVal)
			{
				func_1741();
			}
			return;
		}
		bVar4 = true;
		if (!CAM::IS_SCREEN_FADED_OUT() && !func_1740(__LIB_28__.func_474(), 6))
		{
			bVar4 = false;
		}
		Stack.Push(Local_210.f_571.f_8 != 0);
		Stack.Push(__LIB_28__.func_474());
		Call_Loc(Local_210.f_571.f_9);
		if (StackVal && StackVal)
		{
			if (!func_1739())
			{
				bVar4 = false;
			}
		}
		if (func_784(79) && bVar3)
		{
			bVar4 = false;
		}
		Var1 = { func_1737() };
		if (Local_210.f_571.f_14 != 0)
		{
			Stack.Push(__LIB_28__.func_474());
			Call_Loc(Local_210.f_571.f_14);
			Var2 = { StackVal, StackVal, StackVal };
			if (!__LIB_0__.func_86(Var2) && !func_1736(Var1))
			{
				Var1 = { Var2 };
			}
		}
		if (bVar4)
		{
			iVar5 = 0;
			if ((bVar3 && ENTITY::DOES_ENTITY_EXIST(iLocal_520)) && iLocal_516 != VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_520, -1, true))
			{
				iVar5 = 1;
			}
			if (iVar5 || __LIB_18__.func_391(Var1, func_1734(), bVar3, 1, 0, 0, 1, 0, func_1733(), 0, 0))
			{
				if (Local_210.f_571.f_6 == 0)
				{
					func_1741();
				}
				else
				{
					func_1732(0);
				}
			}
		}
		return;
	}
	func_1730();
	if (func_1745(1))
	{
		if (SYSTEM::VDIST(Local_519, Local_202.f_365[func_1729() /*8*/]) > func_1728())
		{
			func_1727(1);
		}
		return;
	}
	iVar6 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_1764(iVar0))
		{
		}
		else if (!func_1726(iVar0))
		{
		}
		else
		{
			func_1722(iVar0);
			Stack.Push(((bLocal_511 && func_540() == 0) && (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, true) || func_1721(iVar0))));
			Stack.Push(iVar0);
			Stack.Push(Local_202.f_365[iVar0 /*8*/]);
			Call_Loc(Local_210.f_571.f_1);
			if (StackVal && (StackVal || func_784(79)))
			{
				iVar6 = iVar0;
				Stack.Push(Local_210.f_571.f_10 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_571.f_10);
				if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
				{
					Stack.Push(iVar0);
					Call_Loc(Local_210.f_571.f_10);
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1);
				}
				Stack.Push(func_1740(iVar0, 4));
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_571.f_15);
				if (StackVal || StackVal)
				{
					__LIB_3__.func_988(func_1720(iVar0));
					if (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						return;
					}
					else
					{
						HUD::CLEAR_HELP(true);
					}
				}
				NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(2500);
				Local_508.f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514);
				Stack.Push(1);
				Stack.Push(49280);
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_571.f_41);
				func_1705(StackVal, (StackVal || StackVal), 0);
				func_1717(iVar0);
				func_1716(iVar0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Stack.Push(func_1740(iVar0, 4));
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_571.f_15);
		if (((StackVal || StackVal) && iVar6 != iVar0) && __LIB_0__.func_1(func_1720(iVar0)))
		{
			HUD::CLEAR_HELP(true);
		}
		iVar0++;
	}
}

void func_1716(int iParam0)//Position - 0xA50F3
{
	if (Local_508.f_0 != iParam0)
	{
		Local_508.f_0 = iParam0;
		func_790(27);
	}
}

void func_1717(int iParam0)//Position - 0xA510E
{
	if (!func_1718(iParam0))
	{
		func_1713(800);
	}
	Stack.Push(__LIB_28__.func_474());
	Call_Loc(Local_210.f_571.f_3);
	if ((StackVal && PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false)) && (func_1718(iParam0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		NETWORK::NETWORK_FADE_OUT_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_516, false), false, true);
	}
	func_145(40);
}

bool func_1718(int iParam0)//Position - 0xA516E
{
	return Local_202.f_365[iParam0 /*8*/].f_5 != -1;
}

char* func_1720(int iParam0)//Position - 0xA5199
{
	if (Local_210.f_571.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_16);
		return StackVal;
	}
	if (func_1740(iParam0, 0))
	{
		return "ILH_H_PORT2" /* GXT: Press ~INPUT_CONTEXT~ to exit. */;
	}
	return "ILH_H_PORT1" /* GXT: Press ~INPUT_CONTEXT~ to enter. */;
}

int func_1721(int iParam0)//Position - 0xA51D0
{
	int iVar0;
	Stack.Push(Local_210.f_571.f_3 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_571.f_3);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	Stack.Push(Local_210.f_571.f_4 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_571.f_4);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_1722(int iParam0)//Position - 0xA521A
{
	if (func_1725(iParam0))
	{
		__LIB_13__.func_357(Local_202.f_365[iParam0 /*8*/], (0.5f * 1.8f), (0.5f * 1.8f), 1f, func_1724(iParam0), 0.2f);
	}
}

int func_1724(int iParam0)//Position - 0xA529F
{
	if (Local_210.f_571.f_18.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_5);
		return StackVal;
	}
	return 12;
}

int func_1725(int iParam0)//Position - 0xA52C7
{
	if (Local_210.f_571.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_5);
		return StackVal;
	}
	if (func_1740(iParam0, 3))
	{
		return 0;
	}
	return 1;
}

int func_1726(int iParam0)//Position - 0xA52F8
{
	if (Local_210.f_571 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571);
		return StackVal;
	}
	return 1;
}

void func_1727(int iParam0)//Position - 0xA5317
{
	if (__LIB_11__.func_631(&(Local_508.f_7), iParam0))
	{
	}
}

float func_1728()//Position - 0xA532D
{
	if (Local_210.f_571.f_11 != 0)
	{
		Stack.Push(func_1729());
		Call_Loc(Local_210.f_571.f_11);
		return StackVal;
	}
	return 2f;
}

int func_1729()//Position - 0xA5352
{
	return Local_508.f_1;
}

void func_1730()//Position - 0xA535F
{
	int iVar0;
	if (!func_784(3))
	{
		if (Local_508.f_3 > 0)
		{
			if (bLocal_511)
			{
				iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514);
				if (Local_508.f_3 > iVar0)
				{
					func_1731(iLocal_514, Local_508.f_3, 0, 0);
					Local_508.f_3 = 0;
				}
				else
				{
					Local_508.f_3 = 0;
				}
			}
		}
	}
}

void func_1731(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA53AF
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(iParam0, 1, 1))
	{
		__LIB_13__.func_330(Local_524.f_0, __LIB_0__.func_679(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_1732(int iParam0)//Position - 0xA53E1
{
	if (__LIB_1__.func_101(&(Local_508.f_7), iParam0))
	{
	}
}

int func_1733()//Position - 0xA53F7
{
	if (Local_210.f_571.f_7 != 0)
	{
		Stack.Push(Local_202.f_365[__LIB_28__.func_474() /*8*/].f_4);
		Call_Loc(Local_210.f_571.f_7);
		return StackVal;
	}
	return 1;
}

float func_1734()//Position - 0xA5425
{
	return func_1735(__LIB_28__.func_474());
}

var func_1735(int iParam0)//Position - 0xA5435
{
	var uVar0;
	if (Local_210.f_571.f_13 != 0)
	{
		Stack.Push(Local_202.f_365[iParam0 /*8*/].f_4);
		Stack.Push(&uVar0);
		Call_Loc(Local_210.f_571.f_13);
		if (StackVal)
		{
			return uVar0;
		}
	}
	return Local_202.f_365[Local_202.f_365[iParam0 /*8*/].f_4 /*8*/].f_3;
}

int func_1736(struct<3> Param0)//Position - 0xA547B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	Var7 = { Param0 - Vector(0.75f, 0.75f, 0.75f) };
	Var8 = { Param0 + Vector(0.75f, 0.75f, 0.75f) };
	fVar9 = 0.5f;
	if (!bVar6)
	{
		iVar0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var7, Var8, fVar9, 2, iLocal_516, 4);
		bVar6 = true;
	}
	if (bVar6)
	{
		iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar0, &iVar2, &uVar3, &uVar4, &uVar5);
	}
	if (iVar1 == 2)
	{
		if (iVar2 == 1)
		{
			bVar6 = false;
			return 0;
		}
	}
	return 1;
}

Vector3 func_1737()//Position - 0xA5501
{
	return func_1738(__LIB_28__.func_474());
}

Vector3 func_1738(int iParam0)//Position - 0xA5511
{
	struct<3> Var0;
	if (Local_210.f_571.f_12 != 0)
	{
		Stack.Push(Local_202.f_365[iParam0 /*8*/].f_4);
		Call_Loc(Local_210.f_571.f_12);
		Var0 = { StackVal, StackVal, StackVal };
		if (!__LIB_0__.func_86(Var0))
		{
			return Var0;
		}
	}
	return Local_202.f_365[Local_202.f_365[iParam0 /*8*/].f_4 /*8*/];
}

bool func_1739()//Position - 0xA5564
{
	return AUDIO::HAS_SOUND_FINISHED(Local_508.f_2);
}

bool func_1740(int iParam0, int iParam1)//Position - 0xA5575
{
	return __LIB_9__.func_807(&(Local_202.f_365[iParam0 /*8*/].f_6), iParam1);
}

void func_1741()//Position - 0xA558E
{
	func_1705(0, 0, 0);
	Stack.Push(__LIB_28__.func_474());
	Call_Loc(Local_210.f_571.f_2);
	if (func_1740(__LIB_28__.func_474(), 0) && !func_1740(func_1744(), 0))
	{
		func_1742();
	}
	func_1732(1);
	func_1747(0);
	NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(2500);
}

void func_1742()//Position - 0xA55DA
{
	int iVar0;
	int iVar1;
	if (!func_875(iLocal_514, 1))
	{
		return;
	}
	iVar0 = func_1743(iLocal_514);
	if (iVar0 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar0]))
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_OBJ(Local_575.f_2[iVar0]);
	OBJECT::FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(iVar1);
}

int func_1743(int iParam0)//Position - 0xA562C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (Local_477[iVar0 /*7*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1744()//Position - 0xA565D
{
	return Local_202.f_365[__LIB_28__.func_474() /*8*/].f_4;
}

bool func_1745(int iParam0)//Position - 0xA5672
{
	return __LIB_9__.func_807(&(Local_508.f_7), iParam0);
}

int func_1746()//Position - 0xA5685
{
	if (Local_210.f_571.f_8 != 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

void func_1747(int iParam0)//Position - 0xA56A5
{
	if (iParam0 && !func_1032())
	{
		return;
	}
	func_1727(0);
	__LIB_6__.func_352(&(Local_508.f_2));
	Stack.Push(Local_210.f_571.f_10 != 0);
	Stack.Push(__LIB_28__.func_474());
	Call_Loc(Local_210.f_571.f_10);
	if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(__LIB_28__.func_474());
		Call_Loc(Local_210.f_571.f_10);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(StackVal);
	}
	func_1751();
	func_1748();
}

void func_1748()//Position - 0xA570A
{
	func_1750(8);
	func_1750(26);
	func_1750(27);
	__LIB_13__.func_358(3);
	Local_508.f_1 = Local_202.f_365[Local_508.f_0 /*8*/].f_4;
	Local_508.f_0 = -1;
}

void func_1750(int iParam0)//Position - 0xA5755
{
	if (__LIB_11__.func_631(&(Local_582[iLocal_517 /*62*/].f_1), iParam0))
	{
	}
}

void func_1751()//Position - 0xA5770
{
	int iVar0;
	func_1037(3000);
	Stack.Push(__LIB_28__.func_474());
	Call_Loc(Local_210.f_571.f_3);
	if (StackVal && PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_516, false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
	}
	func_866(40);
}

void func_1754(int iParam0)//Position - 0xA57EA
{
	int iVar0;
	if (bLocal_522 && func_1763(iParam0))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_508.f_4[iParam0]))
		{
			__LIB_21__.func_113(&(Local_508.f_4[iParam0]), Local_202.f_365[iParam0 /*8*/], func_1762(iParam0), func_1724(iParam0), func_1761(iParam0), func_1760(iParam0), 0, func_1759(iParam0), 0, func_1758(iParam0));
			iVar0 = func_1755(iParam0);
			if (iVar0 != 5)
			{
				HUD::SET_BLIP_PRIORITY(Local_508.f_4[iParam0], iVar0);
			}
			Stack.Push(Local_210.f_571.f_18.f_9 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_571.f_18.f_9);
			if (StackVal && StackVal)
			{
				__LIB_13__.func_350(&(Local_508.f_4[iParam0]), 0);
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_571.f_18.f_15);
			if (StackVal)
			{
				if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_508.f_4[iParam0]))
				{
					HUD::SET_BLIP_ROUTE(Local_508.f_4[iParam0], true);
				}
			}
			else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_508.f_4[iParam0]))
			{
				HUD::SET_BLIP_ROUTE(Local_508.f_4[iParam0], false);
			}
			if (func_1740(iParam0, 1))
			{
				__LIB_38__.func_249(Local_508.f_4[iParam0], 100, 5000f, 1137180672);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_508.f_4[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_508.f_4[iParam0]));
	}
}

int func_1755(int iParam0)//Position - 0xA5934
{
	if (Local_210.f_571.f_18.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_7);
		return StackVal;
	}
	return 9;
}

int func_1758(int iParam0)//Position - 0xA5A02
{
	if (Local_210.f_571.f_18.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_14);
		return StackVal;
	}
	return 1;
}

int func_1759(int iParam0)//Position - 0xA5A29
{
	if (Local_210.f_571.f_18.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_16);
		return StackVal;
	}
	return 0;
}

float func_1760(int iParam0)//Position - 0xA5A50
{
	if (Local_210.f_571.f_18.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_6);
		return StackVal;
	}
	return 1f;
}

char* func_1761(int iParam0)//Position - 0xA5A77
{
	if (Local_210.f_571.f_18.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_13);
		return StackVal;
	}
	if (func_1740(iParam0, 0))
	{
		return "ILH_BLP_EXIT" /* GXT: Exit */;
	}
	return "ILH_BLP_ENTR" /* GXT: Entrance */;
}

int func_1762(int iParam0)//Position - 0xA5AB2
{
	if (Local_210.f_571.f_18.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18.f_4);
		return StackVal;
	}
	return -1;
}

int func_1763(int iParam0)//Position - 0xA5AD9
{
	if (func_1032())
	{
		return 0;
	}
	if (!func_1726(iParam0))
	{
		return 0;
	}
	if (func_1745(1))
	{
		if (iParam0 == Local_508.f_1)
		{
			return 0;
		}
	}
	if (func_152(iLocal_518, 2))
	{
		if (!func_1740(iParam0, 0))
		{
			return 0;
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
		{
			return 0;
		}
	}
	else if (func_1740(iParam0, 0))
	{
		return 0;
	}
	if (Local_210.f_571.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_571.f_18);
		return StackVal;
	}
	if (func_1740(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1764(int iParam0)//Position - 0xA5B7C
{
	if ((!__LIB_0__.func_86(Local_202.f_365[iParam0 /*8*/]) && Local_202.f_365[iParam0 /*8*/].f_4 != -1) && !__LIB_0__.func_86(Local_202.f_365[Local_202.f_365[iParam0 /*8*/].f_4 /*8*/]))
	{
		return 1;
	}
	return 0;
}

void func_1765()//Position - 0xA5BCC
{
	if (func_1766())
	{
		func_145(11);
	}
}

bool func_1766()//Position - 0xA5BE4
{
	if (Local_210.f_102 != 0)
	{
		Call_Loc(Local_210.f_102);
		return StackVal;
	}
	if (Local_202.f_19 > 0)
	{
		if (func_491())
		{
			return func_1770(iLocal_514);
		}
		return func_1767(iLocal_514);
	}
	return func_540() == 3;
}

int func_1767(int iParam0)//Position - 0xA5C27
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (!__LIB_14__.func_763(iVar0, 4) || !func_1768(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1768(int iParam0, int iParam1)//Position - 0xA5C63
{
	int iVar0;
	iVar0 = __LIB_14__.func_767(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (__LIB_13__.func_258(iParam0, 1) && !func_41(21))
	{
		return func_1769(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__.func_191(iParam0));
	}
	return func_1769(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0);
}

int func_1769(int iParam0)//Position - 0xA5CB4
{
	return Local_575.f_285.f_1[iParam0 /*5*/].f_4;
}

int func_1770(int iParam0)//Position - 0xA5CCA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (__LIB_14__.func_763(iVar0, 4) && func_1768(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1772()//Position - 0xA5D0C
{
	func_2505();
	func_2501();
	func_2499();
	func_2465();
	__LIB_0__.func_371();
	if (Local_210.f_3.f_1 != 0)
	{
		Call_Loc(Local_210.f_3.f_1);
	}
	func_841();
	func_2449();
	func_2394();
	func_2363();
	func_2290();
	func_2268();
	func_2209();
	func_2189();
	func_2145();
	func_2083();
	func_2078();
	func_2060();
	func_2019();
	func_2016();
	func_2005();
	func_1715();
	func_1874();
	func_1871();
	func_1861();
	func_1843();
	func_1835();
	func_1036();
	func_1822();
	func_1815();
	func_1811();
	func_1783();
	func_1782();
	func_1779();
	func_1777();
	func_1773();
}

void func_1773()//Position - 0xA5DB3
{
	int iVar0;
	if (func_965() == -1)
	{
		func_1776(0);
		Call_Loc(Local_215[func_965() /*21*/].f_17);
		return;
	}
	while ((func_965() < iLocal_526 && iVar0 < Local_215[func_965() /*21*/].f_19) && Local_215[func_965() /*21*/].f_1[iVar0 /*3*/] != -1)
	{
		if (func_1774(func_965(), iVar0))
		{
			if (func_965() != Local_215[func_965() /*21*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_215[func_965() /*21*/].f_18);
				func_1776(Local_215[func_965() /*21*/].f_1[iVar0 /*3*/]);
				Call_Loc(Local_215[func_965() /*21*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

int func_1774(int iParam0, int iParam1)//Position - 0xA5E65
{
	if (Local_215[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1 != 0)
	{
		Call_Loc(Local_215[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1);
		return StackVal;
	}
	if (Local_215[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 != -1)
	{
		if (Global_2815059.f_6777 && __LIB_0__.func_684(Local_524.f_0) == 0)
		{
			return (Local_215[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == func_22() || Local_215[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == Local_575.f_213);
		}
		else
		{
			return BitTest(Local_575.f_214, Local_215[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2);
		}
	}
	return 0;
}

void func_1776(int iParam0)//Position - 0xA6070
{
	Local_582[iLocal_517 /*62*/] = iParam0;
}

void func_1777()//Position - 0xA6082
{
	int iVar0;
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (__LIB_0__.func_649(&(Local_575.f_238)) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 == -1)
	{
		iVar0 = ((func_19() - __LIB_1__.func_295(&(Local_575.f_238), 0, 0)) / 1000);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 = (NETWORK::GET_CLOUD_TIME_AS_INT() + iVar0);
	}
}

void func_1779()//Position - 0xA612C
{
	Call_Loc(Local_210.f_15.f_4);
	if (!StackVal)
	{
		return;
	}
	func_1781();
	func_1780();
}

void func_1780()//Position - 0xA614B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	if (iLocal_521 != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 83 /*INPUT_VEH_NEXT_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 84 /*INPUT_VEH_PREV_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	}
}

void func_1781()//Position - 0xA6342
{
	int iVar0;
	if (bLocal_511)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iLocal_516, &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_516, joaat("WEAPON_UNARMED"), true);
		}
	}
}

void func_1782()//Position - 0xA6382
{
	Call_Loc(Local_210.f_102.f_7);
	if (__LIB_0__.func_86(StackVal, StackVal, StackVal))
	{
		func_1750(15);
		fLocal_543 = 999999f;
		return;
	}
	Stack.Push(Local_519);
	Call_Loc(Local_210.f_102.f_7);
	fLocal_543 = SYSTEM::VDIST(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
	Stack.Push(fLocal_543);
	Call_Loc(Local_210.f_102.f_8);
	if (StackVal <= StackVal)
	{
		func_790(15);
	}
	else
	{
		func_1750(15);
	}
}

void func_1783()//Position - 0xA63DC
{
	if (!func_41(31))
	{
		return;
	}
	if (__LIB_0__.func_114(iLocal_514))
	{
		func_1784(func_1809());
	}
}

void func_1784(int iParam0)//Position - 0xA6403
{
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
	}
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (iParam0 && __LIB_21__.func_82())
	{
		if (!__LIB_25__.func_111(Global_2703735.f_4.f_15, __LIB_26__.func_818(), -1))
		{
			STREAMING::REQUEST_CLIP_SET("move_m@bag");
			if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
			{
				func_1796(Global_2703735.f_4.f_15, __LIB_26__.func_818(), -1);
				PED::SET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, "move_m@bag", 0.25f);
			}
		}
	}
	else if (__LIB_25__.func_111(Global_2703735.f_4.f_15, __LIB_26__.func_818(), -1))
	{
		func_1785(Global_2703735.f_4.f_15, __LIB_26__.func_818(), -1, -1);
		STREAMING::REMOVE_CLIP_SET("move_m@bag");
		PED::RESET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, 0.25f);
	}
}

void func_1785(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA64C1
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
	if (__LIB_18__.func_485(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__.func_155(0))
			{
				if (__LIB_1__.func_563(161, -1))
				{
					func_1095(iParam0, 2, __LIB_1__.func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1095(iParam0, 2, __LIB_1__.func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_25__.func_44(iParam0, -1);
				}
			}
			__LIB_0__.func_917(0);
			__LIB_18__.func_775(1, 2);
		}
	}
}

void func_1796(int iParam0, int iParam1, int iParam2)//Position - 0xAE745
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
	if (__LIB_18__.func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1800(iParam0);
			__LIB_25__.func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__.func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__.func_256(iVar1) == 8)
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
					if (__LIB_7__.func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1225(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__.func_113(iParam0, &Var0, iParam2);
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

void func_1800(int iParam0)//Position - 0xAF48B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__.func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1785(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

int func_1809()//Position - 0xAF8E6
{
	if (Local_210.f_15.f_3 != 0)
	{
		Call_Loc(Local_210.f_15.f_3);
		return StackVal;
	}
	return func_875(iLocal_514, 1);
}

void func_1811()//Position - 0xAF915
{
	if (func_784(55))
	{
		return;
	}
	if (!func_1814())
	{
		return;
	}
	if (Local_210.f_15.f_18.f_2 == 0)
	{
		return;
	}
	if (Local_210.f_15.f_18.f_3 == 0)
	{
		return;
	}
	Stack.Push(iLocal_516);
	Call_Loc(Local_210.f_15.f_18.f_2);
	if (WEAPON::HAS_PED_GOT_WEAPON(StackVal, StackVal, false))
	{
		func_145(78);
	}
	Stack.Push(iLocal_516);
	Call_Loc(Local_210.f_15.f_18.f_2);
	Call_Loc(Local_210.f_15.f_18.f_3);
	WEAPON::GIVE_WEAPON_TO_PED(StackVal, StackVal, StackVal, func_1813(), func_1812());
	if (Local_210.f_15.f_18.f_1 != 0)
	{
		Call_Loc(Local_210.f_15.f_18.f_1);
		__LIB_18__.func_437(StackVal, 0);
	}
	func_145(55);
}

int func_1812()//Position - 0xAF9B5
{
	if (Local_210.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_210.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_1813()//Position - 0xAF9D8
{
	if (Local_210.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_210.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

bool func_1814()//Position - 0xAF9FB
{
	if (Local_210.f_15.f_18 != 0)
	{
		Call_Loc(Local_210.f_15.f_18);
		return StackVal;
	}
	return func_784(64);
}

void func_1815()//Position - 0xAFA1F
{
	if (func_1821())
	{
		if (iLocal_535 == -1)
		{
			iLocal_535 = __LIB_1__.func_556(2048, -1, 0);
		}
		if (!func_784(60))
		{
			if (__LIB_25__.func_111(iLocal_516, 3, -1))
			{
				func_145(61);
			}
			if (__LIB_1__.func_556(2048, -1, 0) < func_1820())
			{
				__LIB_6__.func_981(2048, func_1820(), -1);
			}
			MISC::SET_BIT(&(Global_2815059.f_4660), 22);
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(iLocal_514, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_516, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_516, false);
			Global_1957702 = 1;
			func_145(60);
		}
		else if (__LIB_1__.func_556(2048, -1, 0) > 0 && PED::GET_PED_DIES_IN_WATER(iLocal_516))
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(iLocal_514, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_516, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_516, false);
			Global_1957702 = 1;
		}
		if (!__LIB_25__.func_111(iLocal_516, 3, -1))
		{
			func_1818(0);
			func_1796(iLocal_516, 3, -1);
			__LIB_13__.func_289(1);
		}
	}
	else
	{
		func_1816();
	}
}

void func_1816()//Position - 0xAFB14
{
	if (func_784(60))
	{
		if (__LIB_25__.func_111(iLocal_516, 3, -1))
		{
			if (!func_784(61))
			{
				func_1785(iLocal_516, 3, -1, -1);
			}
		}
		PED::SET_PED_DIES_IN_WATER(iLocal_516, true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_516, true);
		PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(iLocal_514, 100f);
		MISC::SET_BIT(&(Global_2815059.f_4660), 22);
		__LIB_1__.func_597(2048, iLocal_535, -1, 1, 0);
		__LIB_13__.func_289(0);
		func_866(60);
	}
}

void func_1818(bool bParam0)//Position - 0xAFBA1
{
	func_790(13);
	if (bParam0)
	{
		func_790(9);
	}
	Local_497.f_0 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	Local_497.f_1 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	__LIB_13__.func_290(iLocal_516);
}

int func_1820()//Position - 0xAFC96
{
	if (Local_210.f_15.f_2 != 0)
	{
		Call_Loc(Local_210.f_15.f_2);
		return StackVal;
	}
	return 3;
}

bool func_1821()//Position - 0xAFCB5
{
	if (Local_210.f_15.f_1 != 0)
	{
		Call_Loc(Local_210.f_15.f_1);
		return StackVal;
	}
	return func_784(62);
}

void func_1822()//Position - 0xAFCD9
{
	if (Local_210.f_15.f_13 == 0)
	{
		return;
	}
	if (!func_784(47))
	{
		if (!func_784(56))
		{
			Call_Loc(Local_210.f_15.f_13);
			if (StackVal)
			{
				func_145(56);
			}
		}
		if (func_784(56))
		{
			if (func_1828() && func_1827())
			{
				func_145(47);
				func_866(56);
				if (func_1826())
				{
					__LIB_1__.func_114(__LIB_4__.func_335(iLocal_520, 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				}
				if (func_1823())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_520, true);
				}
			}
		}
	}
	else
	{
		Call_Loc(Local_210.f_15.f_13);
		if (!StackVal)
		{
			func_866(47);
			func_866(56);
		}
	}
}

int func_1823()//Position - 0xAFD7E
{
	if (Local_210.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_210.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_1826()//Position - 0xAFE8D
{
	if (Local_210.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_210.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

int func_1827()//Position - 0xAFEB0
{
	if (Local_210.f_15.f_13.f_3 != 0)
	{
		Stack.Push(&uLocal_549);
		Call_Loc(Local_210.f_15.f_13.f_3);
		return __LIB_2__.func_47(StackVal, StackVal, 0);
	}
	return 1;
}

int func_1828()//Position - 0xAFEDB
{
	if (bLocal_510)
	{
		if (iLocal_521 != 0)
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_520, -1, false) == iLocal_516)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_520, false))
				{
					if (!__LIB_13__.func_360(iLocal_516))
					{
						return __LIB_6__.func_762(iLocal_520, func_1833(), __LIB_0__.func_109(), __LIB_13__.func_291(), 0, 0, 0);
					}
				}
			}
		}
	}
	return 0;
}

float func_1833()//Position - 0xB010A
{
	if (Local_210.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_210.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

void func_1835()//Position - 0xB0175
{
	float fVar0;
	if (!func_1842())
	{
		return;
	}
	if (!func_1841())
	{
		if (func_1840())
		{
			PED::SET_PED_RESET_FLAG(iLocal_516, 46, true);
			PED::SET_PED_RESET_FLAG(iLocal_516, 47, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		PED::SET_PED_RESET_FLAG(iLocal_516, 102, true);
		PED::SET_PED_RESET_FLAG(iLocal_516, 362, true);
	}
	fVar0 = func_1839();
	if (fVar0 != -1f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_516, fVar0);
	}
	fVar0 = func_1838();
	if (fVar0 != -1f)
	{
		PED::SET_PED_CAPSULE(iLocal_516, fVar0);
	}
	if (func_1837())
	{
		ENTITY::SET_ENTITY_VELOCITY(iLocal_516, func_1836());
	}
}

Vector3 func_1836()//Position - 0xB0209
{
	if (Local_210.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_210.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_1837()//Position - 0xB022E
{
	if (Local_210.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_210.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_1838()//Position - 0xB0251
{
	if (Local_210.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_210.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

float func_1839()//Position - 0xB0278
{
	if (Local_210.f_15.f_6.f_3 != 0)
	{
		Call_Loc(Local_210.f_15.f_6.f_3);
		return StackVal;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_516) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

int func_1840()//Position - 0xB02AF
{
	if (Local_210.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_210.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_1841()//Position - 0xB02D2
{
	if (Local_210.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_210.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_1842()//Position - 0xB02F5
{
	if (Local_210.f_15.f_6 != 0)
	{
		Call_Loc(Local_210.f_15.f_6);
		return StackVal;
	}
	return 0;
}

void func_1843()//Position - 0xB0314
{
	int iVar0;
	if (!func_41(19) || !__LIB_0__.func_114(iLocal_514))
	{
		return;
	}
	switch (__LIB_13__.func_292())
	{
		case 0:
			if (!func_784(33))
			{
				func_145(33);
			}
			break;
		case 9:
			if (func_784(33))
			{
				if ((iLocal_496 == joaat("WEAPON_UNARMED") || WEAPON::GET_WEAPONTYPE_GROUP(iLocal_496) == joaat("GROUP_MELEE")) && WEAPON::HAS_PED_GOT_WEAPON(iLocal_516, iLocal_496, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_516, iLocal_496, true);
				}
				else
				{
					__LIB_38__.func_214(2);
				}
				func_866(33);
			}
			break;
		case 99:
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_516, &iVar0, false);
			if (iLocal_496 != iVar0)
			{
				iLocal_496 = iVar0;
			}
			break;
	}
}

void func_1861()//Position - 0xB2760
{
	int iVar0;
	if (__LIB_9__.func_294(iLocal_514))
	{
		return;
	}
	if (func_540() != 0)
	{
		return;
	}
	if (!bLocal_511)
	{
		return;
	}
	if (func_784(25))
	{
		__LIB_0__.func_371();
	}
	if (func_1870(0))
	{
		__LIB_0__.func_371();
		if (__LIB_0__.func_114(iLocal_514))
		{
			return;
		}
	}
	if (func_974(iLocal_514, 0, 1, 0))
	{
		__LIB_0__.func_371();
		if (__LIB_0__.func_114(iLocal_514))
		{
			return;
		}
	}
	iVar0 = 0;
	if (func_1868(__LIB_13__.func_807()))
	{
		func_790(3);
	}
	else if (!func_1868(__LIB_14__.func_20()))
	{
		if (func_152(iLocal_518, 3))
		{
			func_1750(3);
			iVar0 = 1;
		}
	}
	func_1862(iVar0);
}

void func_1862(int iParam0)//Position - 0xB2809
{
	if (__LIB_0__.func_114(iParam0))
	{
		func_1864();
	}
	if (__LIB_0__.func_1(__LIB_13__.func_361()))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			__LIB_0__.func_371();
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_1864()//Position - 0xB285E
{
	if (!bLocal_522)
	{
		__LIB_13__.func_428();
		return;
	}
	if (!func_870())
	{
		return;
	}
	if (!func_152(iLocal_518, 5))
	{
		__LIB_0__.func_151(__LIB_13__.func_361(), -1);
		func_790(5);
	}
}

bool func_1868(float fParam0)//Position - 0xB28C7
{
	struct<3> Var0;
	Call_Loc(Local_210.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__.func_86(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_519, Var0) <= (fParam0 * fParam0);
}

int func_1870(bool bParam0)//Position - 0xB2908
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_516, false);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = __LIB_0__.func_201(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (__LIB_0__.func_114(iVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != iLocal_516)
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
			iVar2++;
		}
	}
	return 0;
}

void func_1871()//Position - 0xB298F
{
	if (__LIB_0__.func_114(iLocal_514))
	{
		if (!__LIB_13__.func_362())
		{
			__LIB_2__.func_229(1);
		}
	}
}

void func_1874()//Position - 0xB2A05
{
	if (func_784(10) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_202.f_254)))
	{
		__LIB_38__.func_251(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, &(Local_202.f_254));
	}
}

void func_2005()//Position - 0xB6350
{
	int iVar0;
	if (Local_210.f_544 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_351)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_544);
		if (StackVal)
		{
			if (func_2015(iVar0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_117[iVar0]))
				{
					iLocal_117[iVar0] = HUD::ADD_BLIP_FOR_RADIUS(func_2014(iVar0), Local_202.f_351.f_1[iVar0 /*5*/].f_3);
					__LIB_6__.func_958(&(iLocal_117[iVar0]), Local_202.f_351.f_1[iVar0 /*5*/].f_4);
					HUD::SET_BLIP_ALPHA(iLocal_117[iVar0], 85);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_117[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_117[iVar0]));
			}
			if (func_2013(iVar0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_118[iVar0]))
				{
					if (func_2012(iVar0))
					{
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_544.f_8);
						iLocal_118[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(StackVal));
					}
					else
					{
						iLocal_118[iVar0] = HUD::ADD_BLIP_FOR_COORD(func_2014(iVar0));
					}
					HUD::SET_BLIP_SPRITE(iLocal_118[iVar0], func_2010(iVar0));
					__LIB_6__.func_958(&(iLocal_118[iVar0]), func_2008(iVar0));
					HUD::SET_BLIP_SCALE(iLocal_118[iVar0], func_2006(iVar0));
					if (Local_210.f_544.f_4 != 0)
					{
						Stack.Push(iLocal_118[iVar0]);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_544.f_4);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
					}
					if (!func_784(29))
					{
						HUD::FLASH_MINIMAP_DISPLAY();
						func_145(29);
					}
				}
				else
				{
					if (HUD::GET_BLIP_COLOUR(iLocal_118[iVar0]) != __LIB_1__.func_48(func_2008(iVar0)))
					{
						__LIB_6__.func_958(&(iLocal_118[iVar0]), func_2008(iVar0));
					}
					if (!func_2012(iVar0) && !__LIB_0__.func_78(HUD::GET_BLIP_COORDS(iLocal_118[iVar0]), func_2014(iVar0), 0))
					{
						HUD::SET_BLIP_COORDS(iLocal_118[iVar0], func_2014(iVar0));
					}
					if (Local_210.f_544.f_4 != 0)
					{
						Stack.Push(iLocal_118[iVar0]);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_544.f_4);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
					}
				}
				if (Local_210.f_544.f_3 != 0)
				{
					Stack.Push(iVar0);
					Call_Loc(Local_210.f_544.f_3);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_118[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_118[iVar0]));
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_117[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_117[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_118[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_118[iVar0]));
			}
		}
		iVar0++;
	}
}

float func_2006(int iParam0)//Position - 0xB658B
{
	if (Local_210.f_544.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_544.f_7);
		return StackVal;
	}
	return __LIB_13__.func_291();
}

int func_2008(int iParam0)//Position - 0xB65BE
{
	if (Local_210.f_544.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_544.f_6);
		return StackVal;
	}
	return __LIB_1__.func_160();
}

int func_2010(int iParam0)//Position - 0xB65EE
{
	if (Local_210.f_544.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_544.f_5);
		return StackVal;
	}
	return __LIB_14__.func_21();
}

int func_2012(int iParam0)//Position - 0xB661E
{
	Stack.Push(Local_210.f_544.f_8 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_544.f_8);
	if (StackVal && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(StackVal))
	{
		return 1;
	}
	return 0;
}

int func_2013(int iParam0)//Position - 0xB664C
{
	if (Local_210.f_544.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_544.f_2);
		return StackVal;
	}
	return 1;
}

Vector3 func_2014(int iParam0)//Position - 0xB666F
{
	if (Local_210.f_544.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_544.f_9);
		if (!__LIB_0__.func_86(StackVal, StackVal, StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_544.f_9);
			return StackVal, StackVal, StackVal;
		}
	}
	return Local_202.f_351.f_1[iParam0 /*5*/];
}

int func_2015(int iParam0)//Position - 0xB66B1
{
	if (Local_210.f_544.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_544.f_1);
		return StackVal;
	}
	return 1;
}

void func_2016()//Position - 0xB66D4
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (Local_210.f_112 == 0)
	{
		return;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sm");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sm"))
	{
		return;
	}
	Stack.Push(iLocal_539);
	Call_Loc(Local_210.f_112);
	if (StackVal)
	{
		if (!__LIB_0__.func_86(Local_202.f_260.f_1[iLocal_539 /*10*/]))
		{
			if (!func_2017(iLocal_539, 0) && !ENTITY::DOES_ENTITY_EXIST(Local_538[iLocal_539 /*3*/]))
			{
				Local_538[iLocal_539 /*3*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_flare_01"), Local_202.f_260.f_1[iLocal_539 /*10*/], false, false, false);
				ENTITY::SET_ENTITY_ROTATION(Local_538[iLocal_539 /*3*/], Local_202.f_260.f_1[iLocal_539 /*10*/].f_3, 2, true);
				Stack.Push(Local_210.f_112.f_1 != 0);
				Stack.Push(iLocal_539);
				Stack.Push(&iVar0);
				Stack.Push(&Var1);
				Call_Loc(Local_210.f_112.f_1);
				if (StackVal && StackVal)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_538[iLocal_539 /*3*/], iVar0, 0, Var1, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			if (!func_2017(iLocal_539, 1) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_538[iLocal_539 /*3*/].f_1))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_sm");
				Stack.Push(Local_210.f_112.f_1 != 0);
				Stack.Push(iLocal_539);
				Stack.Push(&iVar0);
				Stack.Push(&Var1);
				Call_Loc(Local_210.f_112.f_1);
				if (StackVal && StackVal)
				{
					Local_538[iLocal_539 /*3*/].f_1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sm_hl_flare", iVar0, Var1, 0f, 0f, 0f, Local_202.f_260.f_1[iLocal_539 /*10*/].f_6, false, false, false);
				}
				else
				{
					Local_538[iLocal_539 /*3*/].f_1 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sm_hl_flare", Local_202.f_260.f_1[iLocal_539 /*10*/], 0f, 0f, 0f, Local_202.f_260.f_1[iLocal_539 /*10*/].f_6, false, false, false, true);
				}
				if (Local_538[iLocal_539 /*3*/].f_1 != 0)
				{
				}
			}
			if (!func_2017(iLocal_539, 2) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_538[iLocal_539 /*3*/].f_2))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_sm");
				Stack.Push(Local_210.f_112.f_1 != 0);
				Stack.Push(iLocal_539);
				Stack.Push(&iVar0);
				Stack.Push(&Var1);
				Call_Loc(Local_210.f_112.f_1);
				if (StackVal && StackVal)
				{
					Local_538[iLocal_539 /*3*/].f_2 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sm_hl_package_flare", iVar0, Var1, 0f, 0f, 0f, Local_202.f_260.f_1[iLocal_539 /*10*/].f_6, false, false, false);
				}
				else
				{
					Local_538[iLocal_539 /*3*/].f_2 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sm_hl_package_flare", Local_202.f_260.f_1[iLocal_539 /*10*/], 0f, 0f, 0f, Local_202.f_260.f_1[iLocal_539 /*10*/].f_6, false, false, false, true);
				}
				if (Local_538[iLocal_539 /*3*/].f_2 != 0)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_538[iLocal_539 /*3*/].f_2))
					{
						iVar2 = 0;
						iVar3 = 0;
						iVar4 = 0;
						iVar5 = 0;
						HUD::GET_HUD_COLOUR(Local_202.f_260.f_1[iLocal_539 /*10*/].f_7, &iVar2, &iVar3, &iVar4, &iVar5);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_538[iLocal_539 /*3*/].f_2, (SYSTEM::TO_FLOAT(iVar2) / 255f), (SYSTEM::TO_FLOAT(iVar3) / 255f), (SYSTEM::TO_FLOAT(iVar4) / 255f), true);
					}
				}
			}
		}
	}
	iLocal_539++;
	if (iLocal_539 >= Local_202.f_260)
	{
		iLocal_539 = 0;
	}
}

bool func_2017(int iParam0, int iParam1)//Position - 0xB69B4
{
	struct<10> Var0;
	Var0 = { func_2018(iParam0) };
	return __LIB_9__.func_807(&(Var0.f_8), iParam1);
}

struct<10> func_2018(int iParam0)//Position - 0xB69D1
{
	return Local_202.f_260.f_1[iParam0 /*10*/];
}

void func_2019()//Position - 0xB69E7
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	bVar0 = false;
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (func_2059(iVar3))
		{
			if ((bLocal_511 && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_CINEMATIC_CAM_RENDERING())
			{
				Var4 = { Local_202.f_358[iVar3 /*6*/].f_2 };
				if (func_2058(iVar3))
				{
					bVar2 = false;
					iVar1 = func_2057(iVar3);
					if (__LIB_0__.func_121(iVar1))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
					}
				}
				else
				{
					bVar2 = true;
				}
				if (!__LIB_0__.func_86(Var4) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Local_519, true) <= Local_202.f_358[iVar3 /*6*/].f_5)
				{
					if (func_2056(iVar3))
					{
						if (bVar2)
						{
							__LIB_33__.func_44(&uLocal_563, Var4, func_2055(iVar3), 0, 1, func_2054(iVar3), 1);
						}
						else
						{
							__LIB_38__.func_281(&uLocal_563, iVar1, func_2055(iVar3), 0, 1, func_2054(iVar3), 1);
						}
					}
					else if (bVar2)
					{
						__LIB_36__.func_268(&uLocal_563, Var4, func_2055(iVar3), 0, 1, func_2054(iVar3), 1);
					}
					else
					{
						__LIB_39__.func_996(&uLocal_563, iVar1, func_2055(iVar3), 0, 1, func_2054(iVar3), 1);
					}
					bVar0 = true;
				}
				if (bVar0)
				{
					func_2023(iVar3);
					__LIB_11__.func_36(1);
					func_145(27);
				}
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		func_2020();
	}
}

void func_2020()//Position - 0xB6B34
{
	if (func_784(27))
	{
		__LIB_9__.func_981(&uLocal_563, 0, 0);
		func_866(27);
		__LIB_11__.func_36(0);
	}
}

void func_2023(int iParam0)//Position - 0xB6C50
{
	if (func_2025(iParam0))
	{
		__LIB_11__.func_833(&uLocal_563, 1);
		func_145(28);
	}
	else if (func_784(28))
	{
		func_866(28);
		__LIB_11__.func_833(&uLocal_563, 0);
	}
}

int func_2025(var uParam0)//Position - 0xB6CA6
{
	if (Local_210.f_86.f_1 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_86.f_1);
		return StackVal;
	}
	return 0;
}

int func_2054(int iParam0)//Position - 0xB802B
{
	if (Local_210.f_86.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_86.f_3);
		return StackVal;
	}
	return 1;
}

char* func_2055(int iParam0)//Position - 0xB804C
{
	if (Local_210.f_86.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_86.f_4);
		return StackVal;
	}
	return "GR_TOGFOCUS" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
}

int func_2056(int iParam0)//Position - 0xB8070
{
	Stack.Push(Local_210.f_86.f_2 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_86.f_2);
	if (StackVal && StackVal)
	{
		if (bLocal_511)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_2057(int iParam0)//Position - 0xB80AA
{
	int iVar0;
	iVar0 = -1;
	switch (Local_202.f_358[iParam0 /*6*/])
	{
		case 1:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[Local_202.f_358[iParam0 /*6*/].f_1 /*24*/]))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_575.f_22[Local_202.f_358[iParam0 /*6*/].f_1 /*24*/]);
			}
			break;
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_358[iParam0 /*6*/].f_1 /*8*/]))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_575.f_119[Local_202.f_358[iParam0 /*6*/].f_1 /*8*/]);
			}
			break;
		case 3:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[Local_202.f_358[iParam0 /*6*/].f_1 /*5*/]))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_575.f_136[Local_202.f_358[iParam0 /*6*/].f_1 /*5*/]);
			}
			break;
	}
	return iVar0;
}

int func_2058(int iParam0)//Position - 0xB8173
{
	if (Local_202.f_358[iParam0 /*6*/] != 0 && Local_202.f_358[iParam0 /*6*/].f_1 != -1)
	{
		return 1;
	}
	return 0;
}

int func_2059(int iParam0)//Position - 0xB81A0
{
	if (Local_210.f_86 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_86);
		return StackVal;
	}
	return 0;
}

void func_2060()//Position - 0xB81BD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<9> Var7;
	iVar0 = iLocal_516;
	if (!func_2077())
	{
		return;
	}
	bVar3 = (PED::IS_PED_IN_FLYING_VEHICLE(iVar0) || __LIB_13__.func_360(iVar0));
	iVar1 = 0;
	while (iVar1 < Local_202.f_280)
	{
		bVar2 = false;
		Var7 = { func_117(iVar1) };
		if ((__LIB_0__.func_86(Var7.f_2) || __LIB_0__.func_86(Var7.f_5)) || Var7.f_8 == 0f)
		{
			Jump @717; //curOff = 109
		}
		else
		{
			Var4 = { Var7.f_2 };
			Var5 = { Var7.f_5 };
			fVar6 = Var7.f_8;
		}
		if (((((((func_118(iVar1, 0) || func_118(iVar1, 1)) || func_118(iVar1, 2)) || func_118(iVar1, 6)) || func_118(iVar1, 7)) || func_118(iVar1, 8)) || func_118(iVar1, 9)) || func_118(iVar1, 5))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Var4, Var5, fVar6, false, true, 0))
			{
				Stack.Push(func_118(iVar1, 7));
				Stack.Push(iVar1);
				Stack.Push(7);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal && StackVal)
				{
					if (func_964() == 4)
					{
						func_790(1);
					}
				}
				Stack.Push(func_118(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal && StackVal)
				{
					func_2076(iVar1, 1);
					func_2073(iVar1, 1);
					bVar2 = true;
					if (!func_41(14))
					{
						__LIB_0__.func_371();
					}
				}
				Stack.Push(func_118(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((func_118(iVar1, 2) && bVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_2076(iVar1, 1);
					bVar2 = true;
					if (!func_41(14))
					{
						__LIB_0__.func_371();
					}
				}
				Stack.Push(func_118(iVar1, 6));
				Stack.Push(iVar1);
				Stack.Push(6);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal && StackVal)
				{
					func_2076(iVar1, 1);
					bVar2 = true;
					func_2072(iVar1);
				}
				Stack.Push(func_118(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal && StackVal)
				{
					func_2076(iVar1, 1);
					bVar2 = true;
					func_2069(iVar1);
				}
				Stack.Push(func_118(iVar1, 9));
				Stack.Push(iVar1);
				Stack.Push(9);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal && StackVal)
				{
					func_2076(iVar1, 1);
					bVar2 = true;
					func_145(46);
				}
				Stack.Push(func_118(iVar1, 5));
				Stack.Push(iVar1);
				Stack.Push(5);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_541.f_1);
				if (StackVal && StackVal)
				{
					func_2076(iVar1, 1);
					bVar2 = true;
					if (__LIB_0__.func_109(iVar1))
					{
						func_2063();
					}
				}
			}
			if (!bVar2)
			{
				func_2076(iVar1, 0);
			}
			if (func_118(iVar1, 1) || func_118(iVar1, 2))
			{
				if (__LIB_0__.func_109(iVar1))
				{
					func_2061(iVar1, bVar2, bVar3);
				}
			}
		}
		if (func_118(iVar1, 3))
		{
		}
		iVar1++;
	}
}

void func_2061(int iParam0, bool bParam1, bool bParam2)//Position - 0xB8496
{
	if (func_2062(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_0__.func_649(&(Local_575.f_199.f_4[iParam0 /*4*/])))
		{
			__LIB_0__.func_580(&(Local_575.f_199.f_4[iParam0 /*4*/]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_575.f_199.f_4[iParam0 /*4*/]));
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_541);
			if (__LIB_2__.func_47(StackVal, StackVal, 0))
			{
				func_2073(iParam0, 1);
			}
		}
	}
	else
	{
		__LIB_0__.func_579(&(Local_575.f_199.f_4[iParam0 /*4*/]));
	}
}

bool func_2062(int iParam0)//Position - 0xB850B
{
	return __LIB_2__.func_319(&(Local_575.f_199), iParam0);
}

int func_2063()//Position - 0xB851E
{
	int iVar0;
	iVar0 = func_2067();
	if (iVar0 != -1)
	{
		__LIB_6__.func_834(NETWORK::NET_TO_PED(Local_575.f_22[iVar0 /*24*/]), __LIB_13__.func_364(iVar0), 35);
		return 1;
	}
	return 0;
}

int func_2067()//Position - 0xB8768
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	iVar1 = -1;
	fVar4 = 999999.9f;
	Var2 = { Local_519 };
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iVar0 /*24*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_22[iVar0 /*24*/]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__.func_364(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_575.f_22[iVar0 /*24*/]), true))
					{
						fVar3 = SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_575.f_22[iVar0 /*24*/]), false));
						if (fVar3 < fVar4)
						{
							fVar4 = fVar3;
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_2069(int iParam0)//Position - 0xB8813
{
	if (func_118(iParam0, 10))
	{
		if (bLocal_511)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_516, 0, 0);
		}
	}
	else if (func_2070())
	{
	}
}

int func_2070()//Position - 0xB883F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
	{
		return func_2071();
	}
	else if (bLocal_511)
	{
		FIRE::ADD_EXPLOSION(Local_519, 72, 1f, true, false, 1f, false);
		ENTITY::SET_ENTITY_HEALTH(iLocal_516, 0, 0);
		return 1;
	}
	return 0;
}

int func_2071()//Position - 0xB8884
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iLocal_516);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			NETWORK::NETWORK_EXPLODE_HELI(iVar0, true, false, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
			return 1;
		}
	}
	return 0;
}

void func_2072(int iParam0)//Position - 0xB88CA
{
	int iVar0;
	Stack.Push(&(Local_582[iLocal_517 /*62*/].f_44.f_4[iParam0 /*4*/].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_541);
	if (!__LIB_2__.func_47(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_541);
		iVar0 = (StackVal - __LIB_1__.func_295(&(Local_582[iLocal_517 /*62*/].f_44.f_4[iParam0 /*4*/].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			__LIB_6__.func_352(&(uLocal_504[iParam0]));
			if (__LIB_13__.func_365(&(uLocal_504[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (__LIB_13__.func_365(&(uLocal_504[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (func_118(iParam0, 10))
	{
		if (bLocal_511)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_516, 0, 0);
		}
	}
	else if (func_2070())
	{
	}
}

void func_2073(int iParam0, bool bParam1)//Position - 0xB897F
{
	if (!__LIB_0__.func_109(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_2__.func_319(&(Local_582[iLocal_517 /*62*/].f_44), iParam0))
		{
			__LIB_4__.func_745(&(Local_582[iLocal_517 /*62*/].f_44), iParam0);
		}
	}
	else if (__LIB_2__.func_319(&(Local_582[iLocal_517 /*62*/].f_44), iParam0))
	{
		__LIB_4__.func_743(&(Local_582[iLocal_517 /*62*/].f_44), iParam0);
	}
}

void func_2076(int iParam0, bool bParam1)//Position - 0xB8A27
{
	if (bParam1)
	{
		if (!__LIB_2__.func_319(&(Local_582[iLocal_517 /*62*/].f_44.f_2), iParam0))
		{
			__LIB_4__.func_745(&(Local_582[iLocal_517 /*62*/].f_44.f_2), iParam0);
		}
	}
	else
	{
		if (__LIB_2__.func_319(&(Local_582[iLocal_517 /*62*/].f_44.f_2), iParam0))
		{
			__LIB_4__.func_743(&(Local_582[iLocal_517 /*62*/].f_44.f_2), iParam0);
		}
		if (func_118(iParam0, 6))
		{
			if (uLocal_504[iParam0] != -1)
			{
				__LIB_6__.func_352(&(uLocal_504[iParam0]));
			}
			if (__LIB_0__.func_649(&(Local_582[iLocal_517 /*62*/].f_44.f_4[iParam0 /*4*/].f_2)))
			{
				__LIB_0__.func_579(&(Local_582[iLocal_517 /*62*/].f_44.f_4[iParam0 /*4*/].f_2));
			}
		}
	}
}

int func_2077()//Position - 0xB8AD5
{
	if (((!bLocal_511 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_514)) || func_964() == 21) || func_964() == 48)
	{
		return 0;
	}
	return 1;
}

void func_2078()//Position - 0xB8B10
{
	func_2079();
}

void func_2079()//Position - 0xB8B1C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Stack.Push(Local_210.f_94 != 0);
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_94);
		if (StackVal && StackVal)
		{
			if (!func_2082(iVar0))
			{
				Stack.Push(Local_210.f_94.f_1 != 0);
				Stack.Push(&(Local_506.f_2[iVar0]));
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_94.f_1);
				if (StackVal && StackVal)
				{
					func_2081(iVar0);
					return;
				}
			}
			else
			{
				Stack.Push(Local_210.f_94.f_2 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_94.f_2);
				if (StackVal && StackVal)
				{
					if (AUDIO::HAS_SOUND_FINISHED(Local_506.f_2[iVar0]))
					{
						__LIB_6__.func_352(&(Local_506.f_2[iVar0]));
						func_2080(iVar0);
					}
				}
			}
		}
		else if (func_2082(iVar0))
		{
			__LIB_6__.func_352(&(Local_506.f_2[iVar0]));
			func_2080(iVar0);
		}
		iVar0++;
	}
}

void func_2080(int iParam0)//Position - 0xB8BE4
{
	if (__LIB_2__.func_319(&Local_506, iParam0))
	{
		__LIB_4__.func_743(&Local_506, iParam0);
	}
}

void func_2081(int iParam0)//Position - 0xB8C01
{
	if (!__LIB_2__.func_319(&Local_506, iParam0))
	{
		__LIB_4__.func_745(&Local_506, iParam0);
	}
}

bool func_2082(int iParam0)//Position - 0xB8C1F
{
	return __LIB_2__.func_319(&Local_506, iParam0);
}

void func_2083()//Position - 0xB8C30
{
	if (!func_2143())
	{
		func_2093();
		return;
	}
	if (!__LIB_0__.func_109())
	{
		__LIB_26__.func_963();
		return;
	}
	if (__LIB_0__.func_114())
	{
		__LIB_25__.func_25(__LIB_2__.func_641(), 0);
	}
	else if (func_973())
	{
		__LIB_25__.func_25("BBOT_LOSECOPS" /* GXT: Lose the Cops. */, 0);
	}
	else if (func_965() != -1)
	{
		Call_Loc(Local_215[func_965() /*21*/].f_20);
	}
}

void func_2093()//Position - 0xB8DF7
{
	__LIB_26__.func_963();
	func_2094(1, 1, 1);
}

void func_2094(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB8E0A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (bParam2)
	{
		func_2142();
	}
	func_2138();
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = 0;
			while (iVar0 < func_46())
			{
				if (uLocal_546[iVar0] != __LIB_0__.func_160())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uLocal_546[iVar0]))
					{
						bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(uLocal_546[iVar0]);
						bVar2 = __LIB_1__.func_264(bVar1, 1, 1);
						func_2095(bVar1, bVar2, 0);
					}
				}
				iVar0++;
			}
		}
	}
	if (bParam1)
	{
	}
}

void func_2095(bool bParam0, bool bParam1, int iParam2)//Position - 0xB8E81
{
	var uVar0;
	uVar0 = func_1743(bParam0);
	if (bParam0 != __LIB_0__.func_160())
	{
		if (bParam1)
		{
			if (BitTest(Local_477.f_8, bParam0) || iParam2)
			{
				if (__LIB_13__.func_296(bParam0))
				{
					__LIB_21__.func_85(bParam0, __LIB_1__.func_48(__LIB_36__.func_172(iLocal_514, -2, 0, 0, 0)), 0, 0);
				}
				if (__LIB_13__.func_369(bParam0))
				{
					__LIB_2__.func_314(bParam0, 0);
				}
				if (__LIB_13__.func_295(bParam0))
				{
					__LIB_20__.func_361(bParam0, 0, 1, 0);
				}
				if (__LIB_13__.func_368(bParam0))
				{
					if (__LIB_21__.func_84(bParam0))
					{
						__LIB_21__.func_117(bParam0, 0, 1);
					}
				}
				if (__LIB_13__.func_367(bParam0))
				{
					__LIB_19__.func_770(bParam0, func_970(uVar0), 0, 0);
				}
				if (__LIB_13__.func_366(bParam0))
				{
					__LIB_21__.func_116(bParam0, 1f, 0, 0);
				}
				if (__LIB_13__.func_296(bParam0))
				{
					__LIB_21__.func_85(bParam0, 1, 0, 0);
				}
				if (__LIB_21__.func_115(bParam0))
				{
					__LIB_26__.func_791(bParam0, 0, 0);
				}
				MISC::CLEAR_BIT(&(Local_477.f_8), bParam0);
			}
		}
	}
}

void func_2138()//Position - 0xB9DFB
{
	func_2141();
	func_2139();
}

void func_2139()//Position - 0xB9E0B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_303)
	{
		func_2140(iVar0);
		iVar0++;
	}
}

void func_2140(int iParam0)//Position - 0xB9E2F
{
	if (HUD::DOES_BLIP_EXIST(Local_499.f_8[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_499.f_8[iParam0]));
	}
}

void func_2141()//Position - 0xB9E54
{
	if (HUD::DOES_BLIP_EXIST(iLocal_553))
	{
		HUD::REMOVE_BLIP(&iLocal_553);
	}
}

void func_2142()//Position - 0xB9E6D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_477.f_0)
	{
		func_896(iVar0);
		iVar0++;
	}
}

int func_2143()//Position - 0xB9E8F
{
	if (!bLocal_522)
	{
		return 0;
	}
	if (!func_784(7))
	{
		return 0;
	}
	if (func_784(8))
	{
		return 0;
	}
	if (!func_784(31))
	{
		return 0;
	}
	if (!func_540() == 0)
	{
		return 0;
	}
	if (func_2144())
	{
		return 0;
	}
	return 1;
}

bool func_2144()//Position - 0xB9EE4
{
	Call_Loc(Local_210.f_47);
	return StackVal;
}

void func_2145()//Position - 0xB9EF2
{
	func_2181();
	func_2176();
	func_2169();
	if (bLocal_523)
	{
		func_2153();
		func_2149();
		func_2146();
	}
}

void func_2146()//Position - 0xB9F18
{
	int iVar0;
	if (!func_870())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_606(iVar0))
		{
			Stack.Push(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED());
			Stack.Push(iVar0);
			Call_Loc(Local_210.f_554.f_8);
			if (StackVal || StackVal)
			{
				Stack.Push(Local_210.f_554.f_1 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_554.f_1);
				if (StackVal && StackVal)
				{
					if (func_2148(iVar0))
					{
						if (Local_210.f_554.f_3 != 0)
						{
							Stack.Push(iVar0);
							Call_Loc(Local_210.f_554.f_3);
						}
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_554.f_6);
						if (StackVal)
						{
							func_2147(iVar0);
						}
						return;
					}
				}
			}
		}
		else
		{
			Stack.Push(Local_210.f_554.f_7 != 0);
			Stack.Push(iVar0);
			Call_Loc(Local_210.f_554.f_7);
			if (StackVal && StackVal)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_554);
				if (__LIB_0__.func_1(StackVal))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		iVar0++;
	}
}

void func_2147(int iParam0)//Position - 0xB9FE9
{
	if (!__LIB_2__.func_319(&uLocal_500, iParam0))
	{
		__LIB_4__.func_745(&uLocal_500, iParam0);
	}
}

int func_2148(int iParam0)//Position - 0xBA007
{
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_554.f_2);
	switch (StackVal)
	{
		case 0:
			if (Local_210.f_554 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_554);
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_554.f_5);
				__LIB_0__.func_151(StackVal, StackVal);
				return 1;
			}
			break;
		case 3:
			if (Local_210.f_554.f_4 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_554.f_4);
				return 1;
			}
			break;
	}
	return 0;
}

void func_2149()//Position - 0xBA073
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (Local_477.f_11 != -1)
		{
			if (Local_477.f_11 == iVar0 && Local_477[iVar0 /*7*/].f_4 != iLocal_514)
			{
				Local_477.f_11 = func_1743(iLocal_514);
				if (!func_877(iVar0, iLocal_518, 6) && !__LIB_14__.func_763(iVar0, 29))
				{
				}
			}
		}
		else if (Local_477[iVar0 /*7*/].f_4 == iLocal_514)
		{
			if (!func_877(iVar0, iLocal_518, 6) && !__LIB_14__.func_763(iVar0, 4))
			{
				if (func_2152(iVar0))
				{
					Local_477.f_11 = iVar0;
					__LIB_21__.func_118(Local_524.f_0, iLocal_514, __LIB_0__.func_582(), 0, func_41(20), -1, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_2152(int iParam0)//Position - 0xBA1F6
{
	if (func_41(16))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_47.f_2);
	if (!StackVal)
	{
		if (Local_477.f_11 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

void func_2153()//Position - 0xBA228
{
	if (!__LIB_0__.func_109())
	{
		return;
	}
	func_2161();
	func_2154();
}

void func_2154()//Position - 0xBA243
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (func_3(12))
	{
		if (!__LIB_13__.func_355())
		{
			if (!func_784(54))
			{
				__LIB_11__.func_53();
				__LIB_13__.func_297(1, 2147483647, 1);
				func_145(54);
				__LIB_0__.func_151("BBH_VISWARN" /* GXT: WARNING: You are visible ~HUD_COLOUR_RED~~BLIP_SIGHTSEER~~s~ to all players in session. */, -1);
			}
		}
		else if (func_784(54))
		{
			__LIB_11__.func_54();
			__LIB_13__.func_297(0, -1, 0);
			func_866(54);
		}
	}
	if (__LIB_0__.func_649(&(Local_575.f_2.f_18)))
	{
		if (!__LIB_2__.func_47(&(Local_575.f_2.f_18), func_1008(), 0))
		{
			iVar0 = (func_1008() - __LIB_1__.func_295(&(Local_575.f_2.f_18), 0, 0));
			if (iVar0 <= 0)
			{
				return;
			}
			iVar1 = 6;
			if (iVar0 > 5000)
			{
				iVar1 = 1;
			}
			__LIB_6__.func_929(iVar0, "GR_GLBPNG" /* GXT: GLOBAL SIGNAL */, 0, 0, -1, 0, 6, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
		}
	}
}

void func_2161()//Position - 0xBA5E0
{
	int iVar0;
	int iVar1;
	if (Local_202.f_252 == -1 || Local_202.f_252.f_1 == 1)
	{
		return;
	}
	if (!__LIB_0__.func_649(&(Local_575.f_238)))
	{
		return;
	}
	if (NETWORK::IS_PLAYER_IN_CUTSCENE(iLocal_514))
	{
		return;
	}
	iVar0 = (func_19() - __LIB_1__.func_295(&(Local_575.f_238), 0, 0));
	if (iVar0 <= func_2168() && !func_784(59))
	{
		func_145(59);
	}
	if (Local_202.f_252.f_1 == 2 && !func_784(59))
	{
		return;
	}
	if (Local_202.f_252.f_1 == 3 && (!func_2164() || !func_784(59)))
	{
		return;
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 30000)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = __LIB_2__.func_750();
	}
	__LIB_6__.func_929(iVar0, "SMHUD_TIMEREM" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
	if (__LIB_2__.func_30(Local_575.f_238, (func_19() - 5000), 0) && !__LIB_2__.func_30(Local_575.f_238, (func_19() - 4000), 0))
	{
		if (!func_784(22))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_145(22);
		}
	}
	else if (func_784(22))
	{
		func_866(22);
	}
}

int func_2164()//Position - 0xBA782
{
	int iVar0;
	if (func_152(iLocal_518, 3))
	{
		__LIB_26__.func_941(Local_524.f_1, 1);
		iVar0 = 1;
	}
	else
	{
		__LIB_26__.func_941(Local_524.f_1, 0);
		iVar0 = 0;
	}
	return iVar0;
}

int func_2168()//Position - 0xBA850
{
	if (Local_210.f_82.f_2 != 0)
	{
		Call_Loc(Local_210.f_82.f_2);
		return StackVal;
	}
	return 300000;
}

void func_2169()//Position - 0xBA872
{
	if (func_2175())
	{
		if (__LIB_1__.func_523() != 2 && MISC::GET_PROFILE_SETTING(221) != 1)
		{
			HUD::SET_RADAR_ZOOM_PRECISE(func_2174());
			__LIB_11__.func_35(1);
			if (func_2172())
			{
				func_2170(1);
			}
			func_145(41);
		}
	}
	else if (func_784(41))
	{
		HUD::SET_RADAR_ZOOM_PRECISE(0f);
		__LIB_11__.func_35(0);
		if (func_2172())
		{
			func_2170(0);
		}
		func_866(41);
	}
}

void func_2170(bool bParam0)//Position - 0xBA8DE
{
	if (bParam0)
	{
		__LIB_9__.func_99(1);
		func_145(71);
	}
	else
	{
		__LIB_9__.func_99(0);
		func_866(71);
	}
}

int func_2172()//Position - 0xBA921
{
	if (Local_210.f_618.f_1 != 0)
	{
		Call_Loc(Local_210.f_618.f_1);
		return StackVal;
	}
	return 0;
}

float func_2174()//Position - 0xBA959
{
	if (Local_210.f_618.f_2 != 0)
	{
		Call_Loc(Local_210.f_618.f_2);
		return StackVal;
	}
	return 60f;
}

int func_2175()//Position - 0xBA97E
{
	if (bLocal_511 && !PED::IS_PED_IN_ANY_PLANE(iLocal_516))
	{
		if (Local_210.f_618 != 0)
		{
			Call_Loc(Local_210.f_618);
			return StackVal;
		}
	}
	return 0;
}

void func_2176()//Position - 0xBA9AE
{
	if (func_2180())
	{
		func_2177(1);
	}
	else
	{
		func_2177(0);
	}
}

void func_2177(bool bParam0)//Position - 0xBA9CA
{
	if (bParam0)
	{
		if (!func_784(32))
		{
			__LIB_13__.func_299(0, 13, 1, 1, 0, 1, 1, 0, 0);
			func_145(32);
		}
	}
	else if (func_784(32))
	{
		__LIB_13__.func_298(0);
		func_866(32);
	}
}

int func_2180()//Position - 0xBAB80
{
	if ((((bLocal_523 && func_41(18)) && func_875(iLocal_514, 1)) && func_495(func_1743(iLocal_514))) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
	{
		return 1;
	}
	return 0;
}

void func_2181()//Position - 0xBABC9
{
	func_2182();
}

void func_2182()//Position - 0xBABD5
{
	if (func_2806() > 0)
	{
		if (!func_784(9))
		{
			if (func_2188())
			{
				if (func_2186())
				{
					Stack.Push(&uLocal_547);
					Call_Loc(Local_210.f_47.f_1);
					if (__LIB_2__.func_47(StackVal, StackVal, 0) && !__LIB_13__.func_300())
					{
						__LIB_0__.func_371();
						func_145(9);
					}
				}
			}
			else
			{
				func_145(9);
				func_145(10);
			}
		}
		else if (!func_784(10))
		{
			if (__LIB_1__.func_480(86))
			{
				func_145(10);
			}
		}
		else if (!__LIB_1__.func_480(86))
		{
			func_145(69);
		}
	}
}

int func_2186()//Position - 0xBAC8D
{
	if ((((bLocal_511 && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__.func_190()) && bLocal_522) && __LIB_13__.func_370())
	{
		return 1;
	}
	return 0;
}

int func_2188()//Position - 0xBACED
{
	if (func_41(24) || func_41(25))
	{
		return 0;
	}
	Stack.Push(Local_210.f_47.f_6 != 0);
	Call_Loc(Local_210.f_47.f_6);
	if (StackVal && StackVal)
	{
		return 0;
	}
	return 1;
}

void func_2189()//Position - 0xBAD2C
{
	func_2202();
	func_2198();
	func_2195();
	__LIB_0__.func_371();
	func_2193();
	func_2192();
	func_2191();
	func_2190();
}

void func_2190()//Position - 0xBAD54
{
	if ((((func_784(80) && bLocal_510) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_1731(iLocal_514, func_81(), 0, 10000);
		func_866(80);
	}
}

void func_2191()//Position - 0xBADA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_81() <= 0)
	{
		return;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_520))
	{
		return;
	}
	if (!__LIB_2__.func_47(&(Local_491.f_5), 1000, 0))
	{
		return;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_520, iVar0, false))
		{
		}
		else
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_520, iVar0, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (!PED::IS_PED_A_PLAYER(iVar1))
			{
			}
			else
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (!__LIB_1__.func_264(iVar2, 1, 1) || iVar2 == PLAYER::PLAYER_ID())
				{
				}
				else
				{
					iVar3 = PLAYER::GET_PLAYER_WANTED_LEVEL(iVar2);
					if (iVar3 > 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__.func_265(iVar2), PLAYER::GET_PLAYER_WANTED_CENTRE_POSITION(iVar2), true) < PLAYER::GET_WANTED_LEVEL_RADIUS(iVar3))
					{
						func_1731(PLAYER::PLAYER_ID(), func_81(), 0, 0);
					}
					else
					{
						iVar0++;
					}
					__LIB_0__.func_579(&(Local_491.f_5));
				}
void func_2192()//Position - 0xBAE97
{
	if (Local_210.f_64.f_8 == 0)
	{
		return;
	}
	if (!__LIB_1__.func_264(iLocal_514, 1, 1))
	{
		if (func_784(67))
		{
			func_145(66);
		}
		return;
	}
	if (__LIB_2__.func_214(iLocal_514, 0, 0))
	{
		return;
	}
	Call_Loc(Local_210.f_64.f_8);
	if (StackVal)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) > 0)
		{
			func_145(67);
		}
		else if (func_784(66))
		{
			func_1731(iLocal_514, func_81(), 0, 0);
			func_866(66);
		}
		else
		{
			func_866(67);
		}
	}
	else
	{
		func_866(67);
	}
}

void func_2193()//Position - 0xBAF28
{
	if (((((func_784(14) && bLocal_510) && !__LIB_2__.func_214(iLocal_514, 0, 0)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_1731(iLocal_514, func_81(), 0, 10000);
		func_866(14);
	}
}

void func_2195()//Position - 0xBAF8B
{
	if (func_2197())
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) < func_81())
		{
			func_1731(iLocal_514, func_81(), 0, 0);
		}
		PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(iLocal_514);
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(iLocal_514);
		func_145(17);
	}
	else if (func_784(17))
	{
		if (func_2196())
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) > 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(iLocal_514, 0, false);
			}
		}
		func_866(17);
	}
}

int func_2196()//Position - 0xBAFF6
{
	if (Local_210.f_64.f_9 != 0)
	{
		Call_Loc(Local_210.f_64.f_9);
		return StackVal;
	}
	return 0;
}

int func_2197()//Position - 0xBB015
{
	if (Local_210.f_64.f_7 != 0)
	{
		Call_Loc(Local_210.f_64.f_7);
		return StackVal;
	}
	return 0;
}

void func_2198()//Position - 0xBB034
{
	if (func_2201())
	{
		if (!func_784(18))
		{
			if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(iLocal_514) < func_2200())
			{
				MISC::SET_FAKE_WANTED_LEVEL(func_2200());
			}
			func_145(18);
			if (func_784(14))
			{
				func_145(72);
			}
			if (func_784(80))
			{
				func_145(81);
			}
		}
	}
	else
	{
		func_2199();
	}
}

void func_2199()//Position - 0xBB091
{
	if (func_784(18))
	{
		MISC::SET_FAKE_WANTED_LEVEL(0);
		func_866(18);
		func_866(72);
		func_866(81);
	}
}

int func_2200()//Position - 0xBB0B9
{
	if (Local_210.f_64.f_1 != 0)
	{
		Call_Loc(Local_210.f_64.f_1);
		return StackVal;
	}
	if (func_784(14))
	{
		return func_81();
	}
	if (func_784(80))
	{
		return func_81();
	}
	return Local_202.f_249.f_1;
}

int func_2201()//Position - 0xBB0FD
{
	if (((func_784(14) || (func_784(72) && PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) == 0)) || func_784(80)) || (func_784(81) && PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) == 0))
	{
		return 1;
	}
	if (Local_210.f_64.f_6 != 0)
	{
		Call_Loc(Local_210.f_64.f_6);
		return StackVal;
	}
	return 0;
}

void func_2202()//Position - 0xBB169
{
	if (func_784(15))
	{
		if (!func_2208(Local_491.f_2))
		{
			if (func_2205(Local_491.f_0, Local_491.f_1))
			{
				if (__LIB_0__.func_684(Local_524.f_0) != 2)
				{
					if (Local_491.f_0 > func_81())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(Local_491.f_0);
					}
					else if (PLAYER::GET_MAX_WANTED_LEVEL() != func_81())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_81());
						func_866(13);
					}
				}
				if (BitTest(Global_1853348[iLocal_514 /*834*/].f_833, 17))
				{
					__LIB_10__.func_885();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(iLocal_514, Local_491.f_0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iLocal_514, false);
				Stack.Push(Local_210.f_64.f_12 != 0);
				Call_Loc(Local_210.f_64.f_12);
				if (StackVal && StackVal)
				{
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(104 /*EVENT_SHOCKING_PED_SHOT*/, iLocal_516, -1f);
					PED::TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(iLocal_516, Local_519, 20f, joaat("ARMY"));
				}
				func_2203();
				func_866(15);
			}
			else
			{
				func_2203();
				func_866(15);
			}
		}
	}
}

void func_2203()//Position - 0xBB24D
{
	Local_491.f_0 = 0;
	Local_491.f_2 = 0;
	Local_491.f_1 = 0;
	__LIB_0__.func_579(&(Local_491.f_3));
}

int func_2205(int iParam0, bool bParam1)//Position - 0xBB308
{
	if (func_81() <= 0 && !bParam1)
	{
		return 0;
	}
	if (__LIB_21__.func_329(iLocal_514, 0, -1))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) == iParam0)
	{
		return 0;
	}
	if (__LIB_13__.func_371() && !bParam1)
	{
		return 0;
	}
	Stack.Push(Local_210.f_64.f_3 != 0);
	Stack.Push(bParam1);
	Call_Loc(Local_210.f_64.f_3);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_2208(var uParam0)//Position - 0xBB44A
{
	Stack.Push(Local_210.f_64.f_13 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_64.f_13);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (Local_491.f_2 == 0 || __LIB_2__.func_47(&(Local_491.f_3), Local_491.f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_2209()//Position - 0xBB495
{
	int iVar0;
	int iVar1;
	func_2263();
	if (func_2262())
	{
		func_2259();
		iVar0 = func_2250();
		if (func_2246(iVar0))
		{
			if (Local_582[iLocal_517 /*62*/].f_53 != -1)
			{
				__LIB_8__.func_611(0);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 50 /*INPUT_ACCURATE_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				if (!func_2240(iVar0, 6))
				{
					HUD::HUD_FORCE_WEAPON_WHEEL(false);
					HUD::DISPLAY_AMMO_THIS_FRAME(false);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
					HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
					if (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_516, &iVar1, true) && iVar1 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_516, joaat("WEAPON_UNARMED"), true);
					}
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				}
			}
			if (func_2239(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_516);
				func_2235();
				return;
			}
			if (!func_2234(iVar0) || func_2233(iVar0, iLocal_517))
			{
				switch (func_2232())
				{
					case 0:
						if (func_2230(iVar0))
						{
							if (Local_210.f_453.f_17 != 0)
							{
								Stack.Push(iVar0);
								Call_Loc(Local_210.f_453.f_17);
							}
							func_2229(1);
						}
						break;
					case 1:
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_6);
						if (StackVal)
						{
							Local_582[iLocal_517 /*62*/].f_53 = iVar0;
							__LIB_0__.func_371();
							func_2226();
							__LIB_0__.func_802();
							if (Local_210.f_453.f_18 != 0)
							{
								Stack.Push(iVar0);
								Call_Loc(Local_210.f_453.f_18);
							}
							func_2229(2);
						}
						break;
					case 2:
						if (func_2234(iVar0))
						{
							if (func_2233(iVar0, iLocal_517))
							{
								switch (Local_202.f_303.f_1[iVar0 /*23*/].f_2)
								{
									case 0:
										func_2229(10);
										break;
									case 1:
										func_2229(3);
										break;
									case 2:
										func_2229(4);
										break;
									case 3:
										func_2229(6);
										break;
									case 4:
										func_2229(9);
										break;
									default:
										func_2229(8);
										break;
								}
							}
							else
							{
								func_2235();
							}
						}
						break;
					case 3:
						Stack.Push(iLocal_516);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_3);
						TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, true);
						func_145(19);
						func_2229(8);
						break;
					case 4:
						switch (func_2224(iVar0))
						{
							case 1:
								TASK::CLEAR_PED_TASKS(iLocal_516);
								func_2223();
								if (__LIB_0__.func_114(iVar0))
								{
									func_2229(9);
								}
								else
								{
									func_2229(10);
								}
								break;
							case 2:
								if (Local_210.f_453.f_20 != 0)
								{
									Stack.Push(iVar0);
									Call_Loc(Local_210.f_453.f_20);
								}
								func_145(19);
								if (__LIB_0__.func_114(iVar0))
								{
									func_2229(9);
								}
								else
								{
									func_2229(5);
								}
								break;
						}
						break;
					case 5:
						if (Local_210.f_453.f_21 != 0)
						{
							Stack.Push(iVar0);
							Call_Loc(Local_210.f_453.f_21);
						}
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_5);
						Stack.Push(iLocal_516);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_2);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_3);
						Stack.Push(ENTITY::IS_ENTITY_PLAYING_ANIM(StackVal, StackVal, StackVal, 3));
						Stack.Push(iLocal_516);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_2);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_3);
						Stack.Push(ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(StackVal, StackVal, StackVal));
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_6);
						Stack.Push((StackVal || (StackVal && StackVal > StackVal)));
						Stack.Push(&(Local_499.f_5));
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_7);
						if (StackVal || __LIB_2__.func_47(StackVal, StackVal, 0))
						{
							func_2223();
							if (Local_499.f_11 < Local_202.f_303.f_1[iVar0 /*23*/].f_16)
							{
								func_2229(4);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iLocal_516);
								func_2229(10);
							}
						}
						break;
					case 6:
						switch (func_2212(iVar0))
						{
							case 1:
								TASK::CLEAR_PED_TASKS(iLocal_516);
								func_2223();
								if (__LIB_0__.func_114(iVar0))
								{
									func_2229(9);
								}
								else
								{
									func_2229(10);
								}
								break;
							case 2:
								if (Local_210.f_453.f_20 != 0)
								{
									Stack.Push(iVar0);
									Call_Loc(Local_210.f_453.f_20);
								}
								func_145(19);
								if (__LIB_0__.func_114(iVar0))
								{
									func_2229(9);
								}
								else
								{
									func_2229(7);
								}
								break;
						}
						break;
					case 7:
						if (Local_210.f_453.f_21 != 0)
						{
							Stack.Push(iVar0);
							Call_Loc(Local_210.f_453.f_21);
						}
						func_2211(iVar0);
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_63.f_1);
						Stack.Push((!StackVal && PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_499.f_14))));
						Stack.Push(PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_499.f_14)));
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_55.f_6);
						Stack.Push((StackVal && StackVal > StackVal));
						Stack.Push(&(Local_499.f_5));
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_7);
						Stack.Push((StackVal || __LIB_2__.func_47(StackVal, StackVal, 0)));
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_63);
						if (StackVal || StackVal)
						{
							func_2223();
							if (Local_499.f_11 < Local_202.f_303.f_1[iVar0 /*23*/].f_16)
							{
								func_2229(6);
							}
							else
							{
								func_2229(10);
							}
						}
						break;
					case 8:
						Stack.Push(&(Local_499.f_5));
						Stack.Push(iVar0);
						Call_Loc(Local_210.f_453.f_7);
						if (__LIB_2__.func_47(StackVal, StackVal, 0))
						{
							if (__LIB_0__.func_114(iVar0))
							{
								func_2229(9);
							}
							else
							{
								func_2229(10);
							}
						}
						break;
					case 9:
						func_145(19);
						break;
					case 10:
						switch (Local_202.f_303.f_1[iVar0 /*23*/].f_2)
						{
							case 4:
								if (func_2240(iVar0, 16))
								{
									if (!func_2240(iVar0, 11))
									{
										func_2210(iVar0);
									}
									if (Local_210.f_453.f_22 != 0)
									{
										Stack.Push(iVar0);
										Call_Loc(Local_210.f_453.f_22);
									}
								}
								break;
							default:
								if (!func_2240(iVar0, 11))
								{
									func_2210(iVar0);
								}
								if (Local_210.f_453.f_22 != 0)
								{
									Stack.Push(iVar0);
									Call_Loc(Local_210.f_453.f_22);
								}
								break;
						}
						func_2235();
						break;
				}
			}
			else
			{
				func_2235();
			}
		}
		else
		{
			func_2235();
		}
	}
	else
	{
		func_2235();
	}
}

void func_2210(int iParam0)//Position - 0xBBA17
{
	__LIB_4__.func_745(&(Local_582[iLocal_517 /*62*/].f_54), iParam0);
}

void func_2211(int iParam0)//Position - 0xBBA2F
{
	int iVar0;
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_9);
	if (StackVal && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_499.f_14.f_1))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_499.f_14.f_1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			if (Local_210.f_453.f_63.f_12 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_453.f_63.f_12);
			}
		}
	}
}

int func_2212(int iParam0)//Position - 0xBBA9E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63);
	if (StackVal)
	{
		return 2;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	STREAMING::REQUEST_ANIM_DICT(StackVal);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(StackVal))
	{
		return 0;
	}
	Stack.Push(Local_210.f_453.f_26 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_26);
	Stack.Push((StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_26);
	if (StackVal && !AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1))
	{
		return 0;
	}
	iVar0 = __LIB_0__.func_160();
	if (func_2219(iParam0, &iVar0) && iVar0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (iVar0 != __LIB_0__.func_160() && !__LIB_0__.func_682(iVar0))
	{
		return 0;
	}
	Stack.Push(Local_210.f_453.f_19 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_19);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55);
	Var1 = { StackVal, StackVal, StackVal };
	Stack.Push(0f);
	Stack.Push(0f);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_1);
	Var2 = { StackVal, StackVal, StackVal };
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_3);
	Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(StackVal, StackVal, Var1, Var2, 0f, 2) };
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_3);
	Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(StackVal, StackVal, Var1, Var2, 0f, 2) };
	switch (func_2214(iParam0, Var3, Var4.f_2))
	{
		case 0:
			return 0;
		case 1:
			return 1;
			break;
	}
	Stack.Push(Var1);
	Stack.Push(Var2);
	Stack.Push(2);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_1);
	Stack.Push(!StackVal);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_1);
	Local_499.f_14 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1f, 0f, Local_202.f_303.f_1[iParam0 /*23*/].f_20);
	Stack.Push(iLocal_516);
	Stack.Push(Local_499.f_14);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_3);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_4);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_5);
	Stack.Push(3341);
	Stack.Push(16);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_6);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 8192);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(NETWORK::NET_TO_ENT(iVar0));
		Stack.Push(Local_499.f_14);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_55.f_2);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_63.f_3);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_63.f_7);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_63.f_8);
		NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 13);
	}
	if (Local_210.f_453.f_63.f_13 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Local_499.f_14);
		Call_Loc(Local_210.f_453.f_63.f_13);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_63.f_11);
	if (StackVal != 0)
	{
		Stack.Push(Local_499.f_14);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_63.f_11);
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(StackVal, StackVal, -1);
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_499.f_14);
	if (iVar0 != __LIB_0__.func_160())
	{
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(iVar0));
	}
	func_2213(iParam0);
	return 2;
}

void func_2213(int iParam0)//Position - 0xBBD7A
{
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		return;
	}
	Stack.Push(iLocal_516);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_4);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	PED::PLAY_FACIAL_ANIM(StackVal, StackVal, StackVal);
}

int func_2214(int iParam0, struct<3> Param1, float fParam2)//Position - 0xBBDBA
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	if (Local_499.f_11 > 0)
	{
		return 2;
	}
	if (__LIB_2__.func_47(&(Local_499.f_5), 10000, 0))
	{
		return 1;
	}
	if (func_2240(iParam0, 7))
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, false, false))
		{
			Param1.f_2 = uVar0;
		}
		else
		{
			return 0;
		}
	}
	switch (func_2218())
	{
		case 0:
			if (func_2240(iParam0, 8))
			{
				func_2217(1);
			}
			else if (func_2240(iParam0, 14))
			{
				func_2217(4);
			}
			else if (func_2240(iParam0, 15))
			{
				func_2217(5);
			}
			else if (func_2240(iParam0, 20))
			{
				func_2217(6);
			}
			else
			{
				return 2;
			}
			return 0;
			break;
		case 1:
			switch (SHAPETEST::GET_SHAPE_TEST_RESULT(Local_499.f_11.f_2, &iVar1, &Var2, &uVar3, &uVar4))
			{
				case 0:
					Local_499.f_11.f_2 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Local_519, 1, iLocal_516, 4);
					return 0;
				case 1:
					return 0;
				case 2:
					if (iVar1 != 0)
					{
						return 1;
					}
					func_2217(2);
					return 0;
					break;
			}
			break;
		case 2:
			switch (SHAPETEST::GET_SHAPE_TEST_RESULT(Local_499.f_11.f_2, &iVar1, &Var2, &uVar3, &uVar4))
			{
				case 0:
					Var2 = { Param1.f_0, Param1.f_1, (Param1.f_2 + 0.25f) };
					Local_499.f_11.f_2 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var2.f_0, Var2.f_1, (Var2.f_2 + 0.25f), 0.1f, 1, iLocal_516, 4);
					return 0;
				case 1:
					return 0;
				case 2:
					if (iVar1 != 0)
					{
						return 1;
					}
					if (func_2240(iParam0, 14))
					{
						func_2217(4);
					}
					else if (!func_2240(iParam0, 9))
					{
						func_2217(3);
					}
					else if (func_2240(iParam0, 15))
					{
						func_2217(5);
					}
					else if (func_2240(iParam0, 20))
					{
						func_2217(6);
					}
					else
					{
						return 2;
					}
					return 0;
					break;
			}
			break;
		case 3:
			switch (TASK::GET_NAVMESH_ROUTE_RESULT(iLocal_516))
			{
				case 0:
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_516, Param1, 1f, -1, 0.25f, 4096, fParam2);
					return 0;
				case 1:
					return 0;
				case 2:
					TASK::CLEAR_PED_TASKS(iLocal_516);
					return 1;
				case 3:
					if (__LIB_1__.func_147(Local_519, Param1) > 0.5f)
					{
						return 0;
					}
					else if (func_2240(iParam0, 15))
					{
						func_2217(5);
						return 0;
					}
					else if (func_2240(iParam0, 20))
					{
						func_2217(6);
						return 0;
					}
					else if (func_2240(iParam0, 21))
					{
						func_2217(7);
						return 0;
					}
					break;
			}
			break;
		case 4:
			if (__LIB_1__.func_147(Local_519, Param1) > 0.01f || !__LIB_2__.func_336(ENTITY::GET_ENTITY_HEADING(iLocal_516), fParam2, 5f))
			{
				if (!__LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), 1))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_516, Param1, 1f, -1, fParam2, 0.01f);
				}
				return 0;
			}
			else if (func_2240(iParam0, 20))
			{
				func_2217(6);
				return 0;
			}
			else if (func_2240(iParam0, 21))
			{
				func_2217(7);
				return 0;
			}
			break;
		case 5:
			if (!__LIB_2__.func_336(ENTITY::GET_ENTITY_HEADING(iLocal_516), fParam2, 5f))
			{
				if (!__LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_ACHIEVE_HEADING"), 1))
				{
					TASK::TASK_ACHIEVE_HEADING(iLocal_516, fParam2, 0);
				}
				return 0;
			}
			else if (func_2240(iParam0, 20))
			{
				func_2217(6);
				return 0;
			}
			else if (func_2240(iParam0, 21))
			{
				func_2217(7);
				return 0;
			}
			break;
		case 6:
			if (__LIB_1__.func_147(Local_519, Param1) > 0.01f || !__LIB_2__.func_336(ENTITY::GET_ENTITY_HEADING(iLocal_516), fParam2, 2f))
			{
				if (!__LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_PED_SLIDE_TO_COORD"), 1))
				{
					TASK::TASK_PED_SLIDE_TO_COORD(iLocal_516, Param1, fParam2, 0.75f);
				}
				return 0;
			}
			else if (func_2240(iParam0, 21))
			{
				func_2217(7);
				return 0;
			}
			break;
		case 7:
			if (((__LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1) || __LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), 1)) || __LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_ACHIEVE_HEADING"), 1)) || __LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_PED_SLIDE_TO_COORD"), 1))
			{
				return 0;
			}
			break;
	}
	__LIB_0__.func_579(&(Local_499.f_5));
	return 2;
}

void func_2217(int iParam0)//Position - 0xBC2D6
{
	if (Local_499.f_11.f_1 != iParam0)
	{
		Local_499.f_11.f_1 = iParam0;
	}
}

int func_2218()//Position - 0xBC2F3
{
	return Local_499.f_11.f_1;
}

int func_2219(int iParam0, var uParam1)//Position - 0xBC302
{
	if (Local_202.f_303.f_1[iParam0 /*23*/].f_20.f_2 != 0)
	{
		if (func_2220(iParam0))
		{
			*uParam1 = Local_499.f_14.f_1;
		}
		return 1;
	}
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Local_210.f_453.f_63.f_2);
	return StackVal;
}

int func_2220(int iParam0)//Position - 0xBC343
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_499.f_14.f_1))
	{
		return 1;
	}
	iVar0 = Local_202.f_303.f_1[iParam0 /*23*/].f_20.f_2;
	if (iVar0 != 0 && __LIB_0__.func_584(iVar0))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 2) + 1);
			if (__LIB_1__.func_262(&(Local_499.f_14.f_1), iVar0, Local_519, 0, 1, 0, 1, 0, 0, 0))
			{
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_ENT(Local_499.f_14.f_1), false, false);
				if (func_2240(iParam0, 10))
				{
					Stack.Push(NETWORK::NET_TO_ENT(Local_499.f_14.f_1));
					Stack.Push(iLocal_516);
					Stack.Push(PED::GET_PED_BONE_INDEX(iLocal_516, 28422));
					Stack.Push(0f);
					Stack.Push(0f);
					Stack.Push(0f);
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_453.f_63.f_10);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, false, false, false, false, 2, true, 0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				Stack.Push(NETWORK::NET_TO_ENT(Local_499.f_14.f_1));
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_453.f_63.f_9);
				ENTITY::SET_ENTITY_VISIBLE(StackVal, StackVal, false);
				return 1;
			}
		}
	}
	return 0;
}

void func_2223()//Position - 0xBC439
{
	Local_499.f_11++;
}

int func_2224(int iParam0)//Position - 0xBC44D
{
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	STREAMING::REQUEST_ANIM_DICT(StackVal);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(StackVal))
	{
		return 0;
	}
	Stack.Push(Local_210.f_453.f_19 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_19);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	Stack.Push(iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_1);
	switch (func_2214(StackVal, StackVal, StackVal, StackVal, StackVal))
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
	}
	Stack.Push(iLocal_516);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_2);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_3);
	Stack.Push(Local_202.f_303.f_1[iParam0 /*23*/].f_16.f_1);
	Stack.Push(Local_202.f_303.f_1[iParam0 /*23*/].f_16.f_2);
	Stack.Push(-1);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_453.f_55.f_7);
	TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_202.f_303.f_1[iParam0 /*23*/].f_16.f_3, false, false, false);
	func_2213(iParam0);
	return 2;
}

void func_2226()//Position - 0xBC55D
{
	if (Local_499.f_7 != -1)
	{
		__LIB_6__.func_404(&(Local_499.f_7));
	}
}

void func_2229(int iParam0)//Position - 0xBC609
{
	if (Local_499.f_4 != iParam0)
	{
		Local_499.f_4 = iParam0;
	}
}

int func_2230(int iParam0)//Position - 0xBC622
{
	if (__LIB_2__.func_47(&(Local_499.f_5), 500, 0))
	{
		__LIB_0__.func_579(&(Local_499.f_5));
		HUD::CLEAR_HELP(true);
		Local_499.f_7 = -1;
		Stack.Push(&(Local_499.f_7));
		Stack.Push(5);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_53);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_53);
		__LIB_14__.func_605(StackVal, StackVal, StackVal, MISC::IS_STRING_NULL_OR_EMPTY(StackVal), 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_2232()//Position - 0xBC7A5
{
	return Local_499.f_4;
}

bool func_2233(int iParam0, int iParam1)//Position - 0xBC7B2
{
	return Local_575.f_231[iParam0] == iParam1;
}

bool func_2234(int iParam0)//Position - 0xBC7C6
{
	return Local_575.f_231[iParam0] != -1;
}

void func_2235()//Position - 0xBC7D9
{
	if (func_2232() == 0)
	{
		return;
	}
	if (Local_210.f_453.f_25 != 0)
	{
		Call_Loc(Local_210.f_453.f_25);
	}
	if (func_784(19))
	{
		if (func_2238())
		{
			TASK::CLEAR_PED_TASKS(iLocal_516);
		}
		func_866(19);
	}
	if (Local_582[iLocal_517 /*62*/].f_53 != -1)
	{
		func_1705(0, 0, 0);
		__LIB_0__.func_801();
		if ((func_2240(Local_582[iLocal_517 /*62*/].f_53, 13) && WEAPON::IS_WEAPON_VALID(__LIB_1__.func_876())) && WEAPON::HAS_PED_GOT_WEAPON(iLocal_516, __LIB_1__.func_876(), false))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_516, __LIB_1__.func_876(), true);
		}
		Stack.Push(Local_210.f_453.f_26 != 0);
		Stack.Push(Local_582[iLocal_517 /*62*/].f_53);
		Call_Loc(Local_210.f_453.f_26);
		if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
		{
			Stack.Push(Local_582[iLocal_517 /*62*/].f_53);
			Call_Loc(Local_210.f_453.f_26);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(StackVal);
		}
	}
	func_2226();
	Local_582[iLocal_517 /*62*/].f_53 = -1;
	Local_499.f_11 = 0;
	func_2217(0);
	Local_499.f_11.f_2 = 0;
	Local_499.f_14 = -1;
	func_2236();
	__LIB_0__.func_579(&(Local_499.f_5));
	func_2229(0);
}

int func_2236()//Position - 0xBC8F0
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_499.f_14.f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(Local_499.f_14.f_1)))
		{
			__LIB_4__.func_509(&(Local_499.f_14.f_1));
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 2) - 1));
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(Local_499.f_14.f_1));
		}
	}
	return 0;
}

int func_2238()//Position - 0xBC965
{
	if (!bLocal_511)
	{
		return 0;
	}
	switch (Local_202.f_303.f_1[Local_582[iLocal_517 /*62*/].f_53 /*23*/].f_2)
	{
		case 2:
			if (Local_499.f_11 < (Local_202.f_303.f_1[Local_582[iLocal_517 /*62*/].f_53 /*23*/].f_16 - 1))
			{
				return 1;
			}
			break;
		case 1:
			if (TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_516))
			{
				return 1;
			}
			break;
		case 3:
			if (Local_499.f_14 != -1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2239(int iParam0)//Position - 0xBC9EC
{
	if (func_2240(iParam0, 22) && func_2233(iParam0, iLocal_517))
	{
		if ((((func_2232() == 7 || func_2232() == 6) || func_2232() == 5) || func_2232() == 4) || func_2232() == 3)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_2240(int iParam0, int iParam1)//Position - 0xBCA55
{
	return __LIB_9__.func_807(&(Local_202.f_303.f_1[iParam0 /*23*/]), iParam1);
}

int func_2246(int iParam0)//Position - 0xBCBD5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_2233(iParam0, iLocal_517))
	{
		if (!func_2240(iParam0, 12) && func_2249(iParam0))
		{
			return 0;
		}
		if (func_2248(iParam0, iLocal_518))
		{
			return 0;
		}
	}
	if (func_2247(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_2247(int iParam0)//Position - 0xBCC2D
{
	return __LIB_2__.func_319(&(Local_499.f_2), iParam0);
}

bool func_2248(int iParam0, int iParam1)//Position - 0xBCC40
{
	return __LIB_2__.func_319(&(Local_582[iParam1 /*62*/].f_54), iParam0);
}

bool func_2249(int iParam0)//Position - 0xBCC57
{
	return __LIB_2__.func_319(&(Local_575.f_234), iParam0);
}

int func_2250()//Position - 0xBCC6A
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	iVar0 = -1;
	if (bLocal_511 && func_2254())
	{
		if (Local_582[iLocal_517 /*62*/].f_53 != -1)
		{
			return Local_582[iLocal_517 /*62*/].f_53;
		}
		fVar1 = -1f;
		iVar2 = 0;
		while (iVar2 < Local_202.f_303)
		{
			Stack.Push(iVar2);
			Call_Loc(Local_210.f_453.f_1);
			if (StackVal)
			{
				Stack.Push(iVar2);
				Call_Loc(Local_210.f_453.f_2);
				Var3 = { StackVal, StackVal, StackVal };
				if (!__LIB_0__.func_86(Var3))
				{
					Stack.Push(iVar2);
					Stack.Push(Local_519.f_2);
					Call_Loc(Local_210.f_453.f_5);
					if (StackVal)
					{
						fVar4 = __LIB_1__.func_147(Local_519, Var3);
						Stack.Push(((iVar0 == -1 || fVar4 < fVar1) && fVar4 < (Local_202.f_303.f_1[iVar2 /*23*/].f_6 * Local_202.f_303.f_1[iVar2 /*23*/].f_6)));
						Stack.Push(!func_2240(iVar2, 5));
						Stack.Push(iVar2);
						Call_Loc(Local_210.f_453.f_3);
						Stack.Push(iVar2);
						Call_Loc(Local_210.f_453.f_4);
						if (StackVal && (StackVal || func_2251(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_202.f_303.f_1[iVar2 /*23*/].f_7)))
						{
							iVar0 = iVar2;
							fVar1 = fVar4;
						}
					}
				}
			}
			iVar2++;
		}
	}
	return iVar0;
}

int func_2251(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xBCD7C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_516) };
	Var1 = { __LIB_0__.func_79(Param0 - Local_519) };
	if (!__LIB_0__.func_86(Param1))
	{
		fVar2 = __LIB_0__.func_156(Param1, Var1);
		if (!fVar2 < 0f)
		{
			return 0;
		}
		fVar2 = __LIB_0__.func_156(Var0, -Param1);
	}
	else
	{
		fVar2 = __LIB_0__.func_156(Var0, Var1);
	}
	if (MISC::ACOS(__LIB_0__.func_301(fVar2, -1f, 1f)) > fParam2)
	{
		return 0;
	}
	return 1;
}

int func_2254()//Position - 0xBCE64
{
	if (PED::IS_PED_RAGDOLL(iLocal_516))
	{
		return 0;
	}
	if (__LIB_0__.func_77(0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_COVER(iLocal_516, false))
	{
		return 0;
	}
	if (__LIB_0__.func_200())
	{
		return 0;
	}
	if (__LIB_9__.func_396())
	{
		return 0;
	}
	Call_Loc(Local_210.f_453.f_28);
	if (!StackVal)
	{
		if (!func_2256())
		{
			return 0;
		}
	}
	if (__LIB_18__.func_460(iLocal_514))
	{
		return 0;
	}
	if (__LIB_0__.func_661())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iLocal_514) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(iLocal_514))
	{
		return 0;
	}
	return 1;
}

int func_2256()//Position - 0xBCF05
{
	if (CAM::IS_SCREEN_FADED_IN() && Global_2689235[iLocal_514 /*453*/].f_230 == 99)
	{
		return 1;
	}
	return 0;
}

void func_2259()//Position - 0xBCF75
{
	int iVar0;
	bool bVar1;
	if (Local_210.f_453.f_16 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_303)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_453.f_1);
		if (StackVal)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_210.f_453.f_16);
			bVar1 = StackVal;
			if (bVar1)
			{
				func_2261(iVar0);
			}
			else
			{
				func_2260(iVar0);
			}
			Stack.Push(iVar0);
			Stack.Push(bVar1);
			Call_Loc(Local_210.f_453.f_13);
		}
		iVar0++;
	}
}

void func_2260(int iParam0)//Position - 0xBCFDE
{
	__LIB_4__.func_743(&(Local_499.f_2), iParam0);
}

void func_2261(int iParam0)//Position - 0xBCFF1
{
	__LIB_4__.func_745(&(Local_499.f_2), iParam0);
}

int func_2262()//Position - 0xBD004
{
	Call_Loc(Local_210.f_453);
	if (!StackVal)
	{
		return 0;
	}
	if (!bLocal_522)
	{
		return 0;
	}
	if (__LIB_0__.func_190())
	{
		return 0;
	}
	if (func_540() != 0)
	{
		return 0;
	}
	if (BitTest(Global_4541229, 21))
	{
		return 0;
	}
	return 1;
}

void func_2263()//Position - 0xBD04C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar3 = 0;
	while (iVar3 < Local_202.f_303)
	{
		Stack.Push(iVar3);
		Call_Loc(Local_210.f_453.f_30);
		if (StackVal)
		{
			Stack.Push(iVar3);
			Call_Loc(Local_210.f_453.f_30.f_5);
			iVar4 = StackVal;
			Stack.Push(iVar3);
			Call_Loc(Local_210.f_453.f_30.f_4);
			iVar5 = StackVal;
			if (!HUD::DOES_BLIP_EXIST(Local_499.f_8[iVar3]))
			{
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_2);
				Var6 = { StackVal, StackVal, StackVal };
				Local_499.f_8[iVar3] = HUD::ADD_BLIP_FOR_COORD(Var6);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_4);
				if (StackVal != -1)
				{
					Stack.Push(Local_499.f_8[iVar3]);
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_30.f_4);
					HUD::SET_BLIP_SPRITE(StackVal, StackVal);
				}
				__LIB_6__.func_958(&(Local_499.f_8[iVar3]), iVar4);
				Stack.Push(Local_499.f_8[iVar3]);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_13);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
				Stack.Push(Local_499.f_8[iVar3]);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_6);
				HUD::SET_BLIP_SCALE(StackVal, StackVal);
				HUD::SET_BLIP_PRIORITY(Local_499.f_8[iVar3], 12);
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_499.f_8[iVar3], func_2240(iVar3, 1));
				Stack.Push(Local_499.f_8[iVar3]);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_14);
				HUD::SHOW_HEIGHT_ON_BLIP(StackVal, StackVal);
				Stack.Push(Local_499.f_8[iVar3]);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_14);
				HUD::SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(StackVal, !StackVal);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_9);
				if (StackVal)
				{
					__LIB_13__.func_350(&(Local_499.f_8[iVar3]), 0);
				}
				if (Local_210.f_453.f_15 != 0)
				{
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_15);
				}
			}
			else
			{
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_11);
				if (StackVal && !HUD::IS_BLIP_FLASHING(Local_499.f_8[iVar3]))
				{
					__LIB_13__.func_350(&(Local_499.f_8[iVar3]), 0);
				}
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_8);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(StackVal))
				{
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_10);
					HUD::GET_HUD_COLOUR(StackVal, &iVar7, &iVar8, &iVar9, &iVar10);
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_8);
					Stack.Push(NETWORK::NET_TO_ENT(StackVal));
					Stack.Push(iVar7);
					Stack.Push(iVar8);
					Stack.Push(iVar9);
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_11);
					__LIB_10__.func_948(StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 1, 0, 0);
				}
				else
				{
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_9);
					if (!__LIB_0__.func_86(StackVal, StackVal, StackVal))
					{
						iVar11 = 0;
						iVar12 = 0;
						iVar13 = 0;
						iVar14 = 0;
						Stack.Push(iVar3);
						Call_Loc(Local_210.f_453.f_10);
						HUD::GET_HUD_COLOUR(StackVal, &iVar11, &iVar12, &iVar13, &iVar14);
						Stack.Push(iVar3);
						Call_Loc(Local_210.f_453.f_9);
						Stack.Push(iVar11);
						Stack.Push(iVar12);
						Stack.Push(iVar13);
						Stack.Push(iVar3);
						Call_Loc(Local_210.f_453.f_11);
						__LIB_13__.func_738(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
					}
				}
				if (func_2240(iVar3, 4))
				{
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_12);
					__LIB_13__.func_357(StackVal, StackVal, StackVal, func_2266(iVar3), Local_202.f_303.f_1[iVar3 /*23*/].f_12, 1045220557);
				}
				Stack.Push(func_2240(iVar3, 0));
				Stack.Push(HUD::GET_BLIP_COORDS(Local_499.f_8[iVar3]));
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_2);
				if (StackVal && !__LIB_0__.func_78(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0))
				{
					Stack.Push(Local_499.f_8[iVar3]);
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_2);
					HUD::SET_BLIP_COORDS(StackVal, StackVal, StackVal, StackVal);
				}
				if (iVar5 != -1 && iVar5 != HUD::GET_BLIP_SPRITE(Local_499.f_8[iVar3]))
				{
					HUD::SET_BLIP_SPRITE(Local_499.f_8[iVar3], iVar5);
					Stack.Push(Local_499.f_8[iVar3]);
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_30.f_6);
					HUD::SET_BLIP_SCALE(StackVal, StackVal);
					Stack.Push(Local_499.f_8[iVar3]);
					Stack.Push(iVar3);
					Call_Loc(Local_210.f_453.f_30.f_13);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
					if (func_2265(iVar3))
					{
						__LIB_13__.func_350(&(Local_499.f_8[iVar3]), 0);
					}
				}
				if (__LIB_1__.func_48(iVar4) != HUD::GET_BLIP_COLOUR(Local_499.f_8[iVar3]))
				{
					__LIB_6__.func_958(&(Local_499.f_8[iVar3]), iVar4);
					if (func_2265(iVar3))
					{
						__LIB_13__.func_350(&(Local_499.f_8[iVar3]), 0);
					}
				}
				Stack.Push(Local_499.f_8[iVar3]);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_14);
				HUD::SHOW_HEIGHT_ON_BLIP(StackVal, StackVal);
				Stack.Push(Local_499.f_8[iVar3]);
				Stack.Push(iVar3);
				Call_Loc(Local_210.f_453.f_30.f_14);
				HUD::SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(StackVal, !StackVal);
				if (func_2240(iVar3, 17) && func_2264(iVar3, &iVar0, &fVar1, &fVar2))
				{
					__LIB_38__.func_249(Local_499.f_8[iVar3], iVar0, fVar1, fVar2);
				}
			}
		}
		else
		{
			func_2140(iVar3);
		}
		iVar3++;
	}
}

int func_2264(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xBD442
{
	if (Local_210.f_453.f_30.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_210.f_453.f_30.f_17);
		return StackVal;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 200f;
	return 1;
}

int func_2265(int iParam0)//Position - 0xBD484
{
	if (Local_210.f_453.f_30.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_453.f_30.f_10);
		return StackVal;
	}
	return 0;
}

Vector3 func_2266(int iParam0)//Position - 0xBD4AB
{
	if (__LIB_0__.func_86(Local_202.f_303.f_1[iParam0 /*23*/].f_12.f_1))
	{
		return 0.5f, 0.5f, 1f;
	}
	return Local_202.f_303.f_1[iParam0 /*23*/].f_12.f_1;
}

void func_2268()//Position - 0xBD51A
{
	func_2289();
	func_2269();
}

void func_2269()//Position - 0xBD52A
{
	int iVar0;
	int iVar1;
	int iVar2;
	Stack.Push((Local_575.f_263.f_19 > 1 && Local_210.f_563.f_3 != 0));
	Call_Loc(Local_210.f_563.f_3);
	if (StackVal && StackVal)
	{
		Local_498.f_9 = func_205();
		iVar0 = 0;
		while (iVar0 < Local_575.f_263.f_19)
		{
			Stack.Push(func_2288());
			Stack.Push(iVar0);
			Call_Loc(Local_210.f_563.f_4.f_3);
			if (StackVal && StackVal)
			{
				if (func_2287(iVar0))
				{
					if (!__LIB_0__.func_394(HUD::GET_BLIP_COORDS(Local_498.f_1[iVar0 /*4*/].f_1), func_2286(Local_498.f_1[iVar0 /*4*/]), 10f, 0) && !__LIB_0__.func_86(func_198()))
					{
						HUD::SET_BLIP_COORDS(Local_498.f_1[iVar0 /*4*/].f_1, func_2286(Local_498.f_1[iVar0 /*4*/]));
						HUD::SET_BLIP_ROUTE(Local_498.f_1[iVar0 /*4*/].f_1, func_2285(iVar0));
					}
					iVar1 = __LIB_0__.func_160();
					if (iVar1 != -1)
					{
						HUD::SET_BLIP_ROTATION(Local_498.f_1[iVar0 /*4*/].f_1, iVar1);
					}
					if (func_2283())
					{
						func_2282(iVar0);
					}
				}
			}
			else
			{
				func_2281(iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		if (func_2288())
		{
			if (func_2278())
			{
				if (!__LIB_0__.func_394(HUD::GET_BLIP_COORDS(Local_498.f_1[func_2277() /*4*/].f_1), func_198(), 10f, 0) && !__LIB_0__.func_86(func_198()))
				{
					HUD::SET_BLIP_COORDS(Local_498.f_1[func_2277() /*4*/].f_1, func_198());
					HUD::SET_BLIP_ROUTE(Local_498.f_1[func_2277() /*4*/].f_1, func_2275());
				}
				iVar2 = __LIB_0__.func_160();
				if (iVar2 != -1)
				{
					HUD::SET_BLIP_ROTATION(Local_498.f_1[func_2277() /*4*/].f_1, iVar2);
				}
				if (func_2283())
				{
					func_2271();
				}
			}
		}
		else
		{
			func_2270();
		}
		Local_498.f_9 = func_205();
	}
}

void func_2270()//Position - 0xBD6E2
{
	if (HUD::DOES_BLIP_EXIST(Local_498.f_1[func_2277() /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_498.f_1[func_2277() /*4*/].f_1));
	}
}

void func_2271()//Position - 0xBD70F
{
	float fVar0;
	fVar0 = func_2274();
	__LIB_13__.func_357(func_198(), (fVar0 * 1.8f), (fVar0 * 1.8f), __LIB_13__.func_301(), 12, __LIB_13__.func_372());
}

float func_2274()//Position - 0xBD759
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
	{
		return 1.5f;
	}
	return 0.5f;
}

int func_2275()//Position - 0xBD779
{
	if (func_964() == 24)
	{
		Stack.Push(func_2277());
		Call_Loc(Local_210.f_563.f_2);
		return StackVal;
	}
	else if (func_964() == 25 && func_2276(iLocal_514))
	{
		Stack.Push(func_2277());
		Call_Loc(Local_210.f_563.f_2);
		return StackVal;
	}
	return 0;
}

int func_2276(int iParam0)//Position - 0xBD7C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (__LIB_0__.func_306(iVar0, 0) != -1)
	{
		return 0;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar1))
	{
		if (iVar3 == -1)
		{
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar3, false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (func_875(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), 1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_2277()//Position - 0xBD862
{
	return Local_582[iLocal_517 /*62*/].f_32;
}

int func_2278()//Position - 0xBD874
{
	if (!HUD::DOES_BLIP_EXIST(Local_498.f_1[func_2277() /*4*/].f_1))
	{
		if (__LIB_0__.func_86(func_198()))
		{
			return 0;
		}
		Local_498.f_1[func_2277() /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(func_198());
		if (__LIB_0__.func_160() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_498.f_1[func_2277() /*4*/].f_1, __LIB_0__.func_160());
		}
		__LIB_6__.func_958(&(Local_498.f_1[func_2277() /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_498.f_1[func_2277() /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_498.f_1[func_2277() /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_498.f_1[func_2277() /*4*/].f_1, func_2275());
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_2__.func_641()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_498.f_1[func_2277() /*4*/].f_1, __LIB_2__.func_641());
		}
		if (Local_498.f_1[func_2277() /*4*/].f_2 && !Local_498.f_1[func_2277() /*4*/].f_3)
		{
			__LIB_13__.func_350(&(Local_498.f_1[func_2277() /*4*/].f_1), 0);
			Local_498.f_1[func_2277() /*4*/].f_3 = 1;
		}
		return 0;
	}
	else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_498.f_1[func_2277() /*4*/].f_1))
	{
		if (!func_2275())
		{
			HUD::SET_BLIP_ROUTE(Local_498.f_1[func_2277() /*4*/].f_1, false);
		}
	}
	else if (func_2275())
	{
		HUD::SET_BLIP_ROUTE(Local_498.f_1[func_2277() /*4*/].f_1, true);
	}
	return 1;
}

void func_2281(int iParam0)//Position - 0xBD9EA
{
	if (HUD::DOES_BLIP_EXIST(Local_498.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_498.f_1[iParam0 /*4*/].f_1));
	}
}

void func_2282(int iParam0)//Position - 0xBDA13
{
	float fVar0;
	fVar0 = func_2274();
	__LIB_13__.func_357(func_2286(Local_498.f_1[iParam0 /*4*/]), (fVar0 * 1.8f), (fVar0 * 1.8f), 2.5f, 12, 0.7f);
}

int func_2283()//Position - 0xBDA4E
{
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	Stack.Push(Local_210.f_563.f_1 != 0);
	Call_Loc(Local_210.f_563.f_1);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	if (iLocal_521 != 0 && VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_521))
	{
		if (!__LIB_0__.func_86(__LIB_21__.func_107(func_205())))
		{
			return 0;
		}
	}
	return 1;
}

int func_2285(int iParam0)//Position - 0xBDAB6
{
	if (func_964() == 24)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_563.f_2);
		return StackVal;
	}
	else if (func_964() == 25 && func_2276(iLocal_514))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_563.f_2);
		return StackVal;
	}
	return 0;
}

Vector3 func_2286(int iParam0)//Position - 0xBDAFD
{
	return func_199(iParam0);
}

int func_2287(int iParam0)//Position - 0xBDB0B
{
	if (!HUD::DOES_BLIP_EXIST(Local_498.f_1[iParam0 /*4*/].f_1))
	{
		if (__LIB_0__.func_86(func_2286(Local_498.f_1[iParam0 /*4*/])))
		{
			return 0;
		}
		Local_498.f_1[iParam0 /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(func_2286(Local_498.f_1[iParam0 /*4*/]));
		if (__LIB_0__.func_160() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_498.f_1[iParam0 /*4*/].f_1, __LIB_0__.func_160());
		}
		__LIB_6__.func_958(&(Local_498.f_1[iParam0 /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_498.f_1[iParam0 /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_498.f_1[iParam0 /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_498.f_1[iParam0 /*4*/].f_1, func_2285(iParam0));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_2__.func_641()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_498.f_1[iParam0 /*4*/].f_1, __LIB_2__.func_641());
		}
		if (Local_498.f_1[iParam0 /*4*/].f_2 && !Local_498.f_1[iParam0 /*4*/].f_3)
		{
			__LIB_13__.func_350(&(Local_498.f_1[iParam0 /*4*/].f_1), 0);
			Local_498.f_1[iParam0 /*4*/].f_3 = 1;
		}
		return 0;
	}
	else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_498.f_1[iParam0 /*4*/].f_1))
	{
		if (!func_2285(iParam0))
		{
			HUD::SET_BLIP_ROUTE(Local_498.f_1[iParam0 /*4*/].f_1, false);
		}
	}
	else if (func_2285(iParam0))
	{
		HUD::SET_BLIP_ROUTE(Local_498.f_1[iParam0 /*4*/].f_1, true);
	}
	return 1;
}

int func_2288()//Position - 0xBDC66
{
	if (!bLocal_523)
	{
		return 0;
	}
	Stack.Push(Local_210.f_563 != 0);
	Call_Loc(Local_210.f_563);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	if (func_152(iLocal_518, 2))
	{
		return 0;
	}
	if (func_964() != 24 && func_964() != 25)
	{
		return 0;
	}
	if (Local_498.f_9 != func_205())
	{
		return 0;
	}
	if (func_973())
	{
		return 0;
	}
	return 1;
}

void func_2289()//Position - 0xBDCDA
{
	fLocal_540 = 99999f;
	if (!bLocal_511 || __LIB_0__.func_86(func_198()))
	{
		return;
	}
	Local_498.f_10 = SYSTEM::VDIST(Local_519, func_198());
	fLocal_540 = Local_498.f_10;
	Local_498.f_10 = fLocal_540;
}

void func_2290()//Position - 0xBDD24
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	bVar5 = func_2362();
	fVar6 = func_2361();
	fVar6 = (fVar6 * fVar6);
	iVar7 = 0;
	while (iVar7 < Local_202.f_38)
	{
		bVar2 = false;
		bVar3 = false;
		func_171(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
				{
					func_2360(iVar7, 1);
				}
				else
				{
					func_2359(iVar7, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					func_2360(iVar7, 0);
				}
				else
				{
					func_2359(iVar7, 0);
				}
			}
			if (Local_210.f_156.f_181 != 0)
			{
				Stack.Push(iVar7);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_210.f_156.f_181);
			}
			func_2339(iVar7, iVar0, bVar3);
		}
		switch (iVar1)
		{
			case 1:
				if (bVar2)
				{
				}
				break;
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						if (__LIB_14__.func_760(iVar7, 20))
						{
							func_2338();
						}
						func_2327(iVar7, iVar0);
						func_2325(iVar7, iVar0);
						func_2324(iVar7, iVar0, 1);
						if (!func_2322(iVar7, 0))
						{
							func_2316(iVar7, iVar0, bVar5);
							func_2309(iVar7, iVar0, &bVar4);
							func_2306(iVar7, iVar0, fVar6);
							func_2304(iVar7, iVar0);
						}
						func_2294(iVar7, iVar0);
						func_2293(iVar7, iVar0);
					}
				}
				break;
			case 4:
				func_2292(iVar7, iVar0);
				break;
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
						if (__LIB_14__.func_760(iVar7, 19))
						{
							func_835(iVar7, iVar0);
						}
					}
				}
				if (!func_41(7))
				{
					func_2291(iVar7, 1);
				}
				break;
			case 5:
				if (bVar2)
				{
					if (func_51(iVar7, 12) && __LIB_6__.func_924(Local_575.f_22[iVar7 /*24*/]))
					{
						__LIB_4__.func_509(&(Local_575.f_22[iVar7 /*24*/]));
					}
				}
				break;
		}
		iVar7++;
	}
	if (!bVar4)
	{
		if (__LIB_0__.func_649(&(Local_216.f_77)))
		{
			__LIB_0__.func_579(&(Local_216.f_77));
		}
	}
	iVar7 = Local_216.f_79;
	func_171(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_2324(iVar7, iVar0, 0);
				}
			}
			break;
	}
}

void func_2291(int iParam0, int iParam1)//Position - 0xBDF32
{
	int iVar0;
	if (iParam1 != func_480())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (((__LIB_14__.func_771(iVar0) && iParam0 == __LIB_14__.func_769(iVar0)) && !__LIB_14__.func_763(iVar0, 4)) && !func_877(iVar0, iLocal_518, 6))
		{
			func_954(iVar0, 9);
			func_954(iVar0, 47);
		}
		iVar0++;
	}
}

void func_2292(int iParam0, int iParam1)//Position - 0xBDF9F
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		if (func_51(iParam0, 13))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
}

void func_2293(int iParam0, int iParam1)//Position - 0xBDFF5
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_TARGET_FROM_COMBAT_PED(iParam1, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) != iLocal_516)
	{
		return;
	}
	func_790(24);
	if (!func_41(28))
	{
		if (__LIB_10__.func_952(iParam1))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) < func_80() || PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(iLocal_514))
			{
				Call_Loc(Local_210.f_64.f_14);
				iVar1 = StackVal;
				func_1731(iLocal_514, func_80(), 1, iVar1);
			}
		}
	}
}

void func_2294(int iParam0, int iParam1)//Position - 0xBE07C
{
	if (!func_2303(iParam0))
	{
		return;
	}
	if (__LIB_14__.func_760(iParam0, 1) && !func_2302(iParam0))
	{
		return;
	}
	if (!func_2301(iParam0, iLocal_518, 1))
	{
		if (func_2298(iParam1, func_2300(iParam0), func_2299(iParam0)))
		{
			if (__LIB_2__.func_47(&(Local_216[iParam0 /*19*/].f_17), func_2297(iParam0), 0))
			{
				func_2296(iParam0, 1);
				if (Local_210.f_156.f_132.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_210.f_156.f_132.f_1.f_5);
				}
			}
		}
		else if (__LIB_0__.func_649(&(Local_216[iParam0 /*19*/].f_17)))
		{
			__LIB_0__.func_579(&(Local_216[iParam0 /*19*/].f_17));
		}
	}
	else if (!func_2298(iParam1, func_2300(iParam0), func_2299(iParam0)))
	{
		func_2295(iParam0, 1);
		if (Local_210.f_156.f_132.f_1.f_5 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_210.f_156.f_132.f_1.f_5);
		}
	}
}

void func_2295(int iParam0, int iParam1)//Position - 0xBE167
{
	if (__LIB_11__.func_631(&(Local_582[iLocal_518 /*62*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2296(int iParam0, int iParam1)//Position - 0xBE186
{
	if (__LIB_1__.func_101(&(Local_582[iLocal_518 /*62*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2297(int iParam0)//Position - 0xBE1A5
{
	if (Local_210.f_156.f_132.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_132.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_2298(int iParam0, float fParam1, bool bParam2)//Position - 0xBE1CE
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_519) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			if (bLocal_511)
			{
				return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_516, iParam0, 287);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_2299(int iParam0)//Position - 0xBE211
{
	if (Local_210.f_156.f_132.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_132.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_2300(int iParam0)//Position - 0xBE23A
{
	if (Local_210.f_156.f_132.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_132.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

bool func_2301(int iParam0, int iParam1, int iParam2)//Position - 0xBE267
{
	return __LIB_9__.func_807(&(Local_582[iParam1 /*62*/].f_7[iParam0 /*2*/]), iParam2);
}

int func_2302(int iParam0)//Position - 0xBE282
{
	if (Local_210.f_156.f_132.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_132.f_1.f_4);
		return StackVal;
	}
	return 0;
}

bool func_2303(int iParam0)//Position - 0xBE2AB
{
	if (Local_210.f_156.f_132.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_132.f_1);
		return StackVal;
	}
	return __LIB_14__.func_760(iParam0, 17);
}

void func_2304(int iParam0, int iParam1)//Position - 0xBE2D7
{
	if (!bLocal_511)
	{
		return;
	}
	if (!__LIB_21__.func_437(iParam0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iLocal_516))
	{
		func_2296(iParam0, 11);
		if (Local_210.f_156.f_190 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_190);
		}
	}
}

void func_2306(int iParam0, int iParam1, float fParam2)//Position - 0xBE33A
{
	if (!bLocal_511)
	{
		return;
	}
	if (!__LIB_21__.func_438(iParam0))
	{
		return;
	}
	if (func_2307(iParam1, fParam2))
	{
		func_2296(iParam0, 0);
	}
}

int func_2307(int iParam0, float fParam1)//Position - 0xBE36B
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iLocal_514, iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iLocal_514, iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (SYSTEM::VDIST2(Local_519, Var0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_2309(int iParam0, int iParam1, var uParam2)//Position - 0xBE3CE
{
	if (!__LIB_14__.func_760(iParam0, 18) && !func_2315(iParam0))
	{
		return;
	}
	if (func_2313(iParam0, iParam1))
	{
		*uParam2 = 1;
		if (!__LIB_0__.func_649(&(Local_216.f_77)))
		{
			__LIB_0__.func_580(&(Local_216.f_77), 0, 0);
			if (Local_210.f_156.f_185 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_210.f_156.f_185);
			}
		}
		else if (__LIB_2__.func_47(&(Local_216.f_77), func_2310(iParam0), 0))
		{
			func_2296(iParam0, 8);
			if (Local_210.f_156.f_186 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_210.f_156.f_186);
			}
		}
	}
}

int func_2310(int iParam0)//Position - 0xBE464
{
	bool bVar0;
	bVar0 = func_2312();
	if (Local_210.f_156.f_183 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bVar0);
		Call_Loc(Local_210.f_156.f_183);
		return StackVal;
	}
	if (func_2311() && !bVar0)
	{
		return 8000;
	}
	return 1000;
}

bool func_2311()//Position - 0xBE4A4
{
	return func_152(iLocal_518, 9);
}

bool func_2312()//Position - 0xBE4B5
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_516, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"));
}

int func_2313(int iParam0, int iParam1)//Position - 0xBE4E1
{
	if (bLocal_511)
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(iLocal_516))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iLocal_516, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iLocal_516, func_2314(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_2314(var uParam0)//Position - 0xBE533
{
	if (Local_210.f_156.f_184 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_156.f_184);
		return StackVal;
	}
	return 287;
}

int func_2315(int iParam0)//Position - 0xBE556
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 0;
	}
	if (Local_210.f_156.f_140.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_12);
		return StackVal;
	}
	if (func_51(iParam0, 8))
	{
		return 1;
	}
	if (func_41(30) && !__LIB_14__.func_760(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_2316(int iParam0, int iParam1, bool bParam2)//Position - 0xBE5B4
{
	if (!bParam2 || func_51(iParam0, 7))
	{
		return;
	}
	if (!__LIB_0__.func_649(&(Local_487[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*2*/])))
	{
		if (__LIB_13__.func_373(iParam0, iParam1))
		{
			__LIB_0__.func_580(&(Local_487[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), 0, 0);
		}
	}
	else if (func_2317(iParam0))
	{
		func_2296(iParam0, 7);
	}
}

int func_2317(int iParam0)//Position - 0xBE620
{
	if (__LIB_2__.func_47(&(Local_487[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), func_2320(iParam0), 0))
	{
		if (!func_2318(func_2319(iParam0), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_2318(int iParam0, int iParam1)//Position - 0xBE65B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		if (Local_202.f_38.f_1[iVar0 /*21*/].f_14 == iParam0)
		{
			if (iParam1 && __LIB_14__.func_760(iVar0, 19))
			{
			}
			else if (__LIB_14__.func_764(iVar0) < 6)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_2319(int iParam0)//Position - 0xBE6AD
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_14;
}

int func_2320(int iParam0)//Position - 0xBE6C1
{
	return Local_202.f_38.f_86[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

int func_2322(int iParam0, int iParam1)//Position - 0xBE751
{
	if (func_83(Local_202.f_38.f_1[iParam0 /*21*/].f_14))
	{
		if ((__LIB_2__.func_47(&(Local_575.f_22[iParam0 /*24*/].f_13), Local_575.f_22[iParam0 /*24*/].f_15, 0) || __LIB_21__.func_439(iParam0)) || iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_2324(int iParam0, int iParam1, int iParam2)//Position - 0xBE7FF
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_14__.func_758(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_65(iParam0);
	if (__LIB_13__.func_329(Local_216.f_80[iVar1 /*97*/].f_1[iVar0 /*19*/]) != iParam2)
	{
		return;
	}
	if (Local_216.f_80[iVar1 /*97*/].f_1[iVar0 /*19*/].f_16 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_216.f_80[iVar1 /*97*/].f_1[iVar0 /*19*/].f_16);
	}
}

void func_2325(int iParam0, int iParam1)//Position - 0xBE866
{
	func_2326(iParam0, iParam1);
}

void func_2326(int iParam0, int iParam1)//Position - 0xBE876
{
	if (!func_2301(iParam0, iLocal_518, 12))
	{
		if (Local_202.f_38.f_86[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*5*/] == Global_1837194 || Local_202.f_38.f_86[Local_202.f_38.f_1[iParam0 /*21*/].f_14 /*5*/] == Global_1837195)
		{
			PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 1);
			func_2296(iParam0, 12);
		}
	}
}

void func_2327(int iParam0, int iParam1)//Position - 0xBE8D8
{
	if (func_2335(iParam0, iParam1))
	{
		func_2328(0, iParam0, iParam1, func_2332(iParam0), func_2331(iParam0));
	}
}

void func_2328(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xBE900
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	HUD::GET_HUD_COLOUR(iParam3, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = func_2330(iParam0, iParam1);
	fVar5 = func_2329(iParam0, iParam1);
	switch (iParam0)
	{
		case 0:
		case 1:
			__LIB_10__.func_948(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, 0, 1, 0, fVar5);
			break;
		case 2:
			__LIB_10__.func_948(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, (Local_202.f_163.f_1[iParam1 /*12*/].f_8.f_1 > 170f && Local_202.f_163.f_1[iParam1 /*12*/].f_8.f_1 < 190f), 1, 0, fVar5);
			break;
	}
}

float func_2329(int iParam0, var uParam1)//Position - 0xBE99F
{
	switch (iParam0)
	{
		case 1:
			if (Local_210.f_352.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_210.f_352.f_22);
				return StackVal;
			}
			break;
		case 0:
			if (Local_210.f_156.f_140.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_210.f_156.f_140.f_22);
				return StackVal;
			}
			break;
		case 2:
			if (Local_210.f_407.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_210.f_407.f_22);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_2330(int iParam0, var uParam1)//Position - 0xBEA1A
{
	switch (iParam0)
	{
		case 0:
			if (Local_210.f_156.f_140.f_21 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_210.f_156.f_140.f_21);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_2331(int iParam0)//Position - 0xBEA4F
{
	if (Local_210.f_156.f_140.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_20);
		return StackVal;
	}
	return 0.5f;
}

int func_2332(int iParam0)//Position - 0xBEA78
{
	if (func_51(iParam0, 0))
	{
		return 9;
	}
	if (__LIB_14__.func_760(iParam0, 20))
	{
		return 6;
	}
	return func_2333(iParam0);
}

int func_2333(int iParam0)//Position - 0xBEAA4
{
	if (Local_210.f_156.f_140.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_5);
		return StackVal;
	}
	switch (func_964())
	{
		case 7:
			if (__LIB_14__.func_760(iParam0, 20))
			{
				return 6;
			}
			break;
		case 6:
			if (__LIB_14__.func_760(iParam0, 20))
			{
				return 10;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__.func_160(iParam0) != -1)
			{
				return 9;
			}
			break;
	}
	if (func_51(iParam0, 3))
	{
		return 9;
	}
	return 6;
}

int func_2335(int iParam0, var uParam1)//Position - 0xBEB3F
{
	if ((func_51(iParam0, 0) && !func_2337(iParam0, 0)) && !__LIB_14__.func_760(iParam0, 30))
	{
		return 1;
	}
	if (__LIB_14__.func_760(iParam0, 20) && func_2336(iParam0))
	{
		return 1;
	}
	if (Local_210.f_156.f_140.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_210.f_156.f_140.f_19);
		return StackVal;
	}
	return 0;
}

bool func_2336(int iParam0)//Position - 0xBEBA9
{
	if (Local_210.f_613.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_613.f_4);
		return StackVal;
	}
	if (func_964() == 7 && func_41(36))
	{
		return 0;
	}
	return (func_964() == 7 || func_964() == 6);
}

bool func_2337(int iParam0, int iParam1)//Position - 0xBEBF5
{
	return __LIB_9__.func_807(&(Local_216[iParam0 /*19*/]), iParam1);
}

void func_2338()//Position - 0xBEC0A
{
	Local_488.f_0++;
}

void func_2339(int iParam0, int iParam1, bool bParam2)//Position - 0xBEC1A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	if (func_2357(iParam0, bParam2))
	{
		if (!BitTest(Local_216[iParam0 /*19*/].f_2.f_6, 2) && HUD::DOES_BLIP_EXIST(Local_216[iParam0 /*19*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_216[iParam0 /*19*/].f_2));
		}
		__LIB_7__.func_121(Local_575.f_22[iParam0 /*24*/], &(Local_216[iParam0 /*19*/].f_2), __LIB_21__.func_440(iParam0), 0, 0, 0, func_2355(iParam0), 1, -1, 0, 0);
	}
	else if ((bLocal_522 && !BitTest(Local_216[iParam0 /*19*/].f_2.f_6, 2)) && func_2350(iParam0, bParam2))
	{
		iVar0 = func_2333(iParam0);
		iVar1 = func_2349(iParam0);
		bVar2 = func_2348(iParam0);
		if (!HUD::DOES_BLIP_EXIST(Local_216[iParam0 /*19*/].f_2))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
			{
				__LIB_0__.func_489(&(Local_216[iParam0 /*19*/].f_2));
			}
			Stack.Push(Local_210.f_156.f_140.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_140.f_14);
			bVar3 = (StackVal && StackVal);
			__LIB_13__.func_433(&(Local_216[iParam0 /*19*/].f_2), iParam1, iVar1, iVar0, func_2355(iParam0), func_2346(iParam0), 0, bVar2, func_2345(iParam0), bVar3);
			HUD::SET_BLIP_PRIORITY(Local_216[iParam0 /*19*/].f_2, func_2343(iParam0));
		}
		else
		{
			if (__LIB_0__.func_114(iParam0))
			{
				HUD::SET_BLIP_ROTATION(Local_216[iParam0 /*19*/].f_2, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam1)));
			}
			if (func_2315(iParam0))
			{
				HUD::SET_BLIP_SHOW_CONE(Local_216[iParam0 /*19*/].f_2, true, 11);
			}
			if (iVar1 != -1 && iVar1 != HUD::GET_BLIP_SPRITE(Local_216[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_SPRITE(Local_216[iParam0 /*19*/].f_2, iVar1);
				HUD::SET_BLIP_SCALE(Local_216[iParam0 /*19*/].f_2, func_2346(iParam0));
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_216[iParam0 /*19*/].f_2, func_2355(iParam0));
				if (func_2341(iParam0))
				{
					__LIB_13__.func_350(&(Local_216[iParam0 /*19*/].f_2), 0);
				}
			}
			if (__LIB_1__.func_48(iVar0) != HUD::GET_BLIP_COLOUR(Local_216[iParam0 /*19*/].f_2))
			{
				__LIB_6__.func_958(&(Local_216[iParam0 /*19*/].f_2), iVar0);
				HUD::SET_BLIP_SCALE(Local_216[iParam0 /*19*/].f_2, func_2346(iParam0));
				if (func_2341(iParam0))
				{
					__LIB_13__.func_350(&(Local_216[iParam0 /*19*/].f_2), 0);
				}
			}
			if (bVar2 != HUD::IS_BLIP_SHORT_RANGE(Local_216[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_216[iParam0 /*19*/].f_2, bVar2);
			}
			if (func_2340(iParam0, &iVar4, &fVar5, &fVar6))
			{
				__LIB_38__.func_249(Local_216[iParam0 /*19*/].f_2, iVar4, fVar5, fVar6);
			}
			Stack.Push(Local_210.f_156.f_140.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_140.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(Local_216[iParam0 /*19*/].f_2))
				{
					__LIB_13__.func_350(&(Local_216[iParam0 /*19*/].f_2), 0);
				}
			}
		}
	}
	else if (BitTest(Local_216[iParam0 /*19*/].f_2.f_6, 2))
	{
		__LIB_0__.func_489(&(Local_216[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
	{
		__LIB_0__.func_489(&(Local_216[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_BLIP_EXIST(Local_216[iParam0 /*19*/].f_2))
	{
		HUD::REMOVE_BLIP(&(Local_216[iParam0 /*19*/].f_2));
	}
}

int func_2340(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xBEF16
{
	if (Local_210.f_156.f_140.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_210.f_156.f_140.f_17);
		return StackVal;
	}
	if (!func_51(iParam0, 15))
	{
		return 0;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

int func_2341(int iParam0)//Position - 0xBEF66
{
	if (Local_210.f_156.f_140.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_10);
		return StackVal;
	}
	return 0;
}

int func_2343(int iParam0)//Position - 0xBEF94
{
	if (Local_210.f_156.f_140.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_7);
		return StackVal;
	}
	return 11;
}

int func_2345(int iParam0)//Position - 0xBF043
{
	if (Local_210.f_156.f_140.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_9);
		return StackVal;
	}
	return 0;
}

float func_2346(int iParam0)//Position - 0xBF068
{
	if (Local_210.f_156.f_140.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_6);
		return StackVal;
	}
	switch (func_964())
	{
		case 7:
			if (__LIB_14__.func_760(iParam0, 20))
			{
				return 0.75f;
			}
			break;
	}
	if (func_2315(iParam0))
	{
		return 0.5f;
	}
	return 1f;
}

int func_2348(int iParam0)//Position - 0xBF135
{
	if (Local_210.f_156.f_140.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_16);
		return StackVal;
	}
	return 0;
}

int func_2349(int iParam0)//Position - 0xBF15A
{
	if (Local_210.f_156.f_140.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_4);
		return StackVal;
	}
	switch (func_964())
	{
		case 7:
			if (__LIB_14__.func_760(iParam0, 20) && !func_41(36))
			{
				return 432;
			}
			break;
		case 6:
			if (__LIB_14__.func_760(iParam0, 20))
			{
				return 280;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__.func_160(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_2350(int iParam0, bool bParam1)//Position - 0xBF1ED
{
	if (bParam1 && !func_51(iParam0, 20))
	{
		return 0;
	}
	if (Local_210.f_156.f_140 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140);
		return StackVal;
	}
	if (!__LIB_0__.func_109(iParam0))
	{
		return 0;
	}
	switch (func_964())
	{
		case 7:
		case 6:
			if (__LIB_14__.func_760(iParam0, 20))
			{
				return 1;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__.func_160(iParam0) == func_2351())
			{
				return 1;
			}
			break;
	}
	if (func_2315(iParam0) && !func_2322(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_2351()//Position - 0xBF29A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (Local_477[iVar0 /*7*/].f_4 == iLocal_514 || func_877(iVar0, iLocal_518, 14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_2355(int iParam0)//Position - 0xBF553
{
	if (Local_210.f_156.f_140.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_140.f_13);
		return StackVal;
	}
	if (func_51(iParam0, 4))
	{
		return "PB_COP" /* GXT: Cop */;
	}
	if (func_51(iParam0, 3))
	{
		return "PB_CIV" /* GXT: Civilian */;
	}
	switch (func_964())
	{
		case 7:
		case 6:
			if (__LIB_14__.func_760(iParam0, 20))
			{
				return "PB_TARGET" /* GXT: Target */;
			}
			break;
	}
	return "PB_ENEMY" /* GXT: Enemy */;
}

int func_2357(int iParam0, bool bParam1)//Position - 0xBF5E3
{
	Stack.Push(Local_210.f_156.f_187 != 0);
	Stack.Push(iParam0);
	Stack.Push(bParam1);
	Call_Loc(Local_210.f_156.f_187);
	if (StackVal && StackVal)
	{
		return 0;
	}
	if (!func_152(iLocal_518, 2) && __LIB_2__.func_369())
	{
		return 0;
	}
	if (func_152(iLocal_518, 2) && __LIB_1__.func_454(iLocal_514))
	{
		return 0;
	}
	if (!__LIB_0__.func_109(iParam0))
	{
		return 0;
	}
	if (func_51(iParam0, 3) || func_2301(iParam0, iLocal_518, 12))
	{
		return 0;
	}
	if (!__LIB_14__.func_760(iParam0, 19))
	{
		if (!func_2322(iParam0, 0))
		{
			return 0;
		}
	}
	else
	{
		Stack.Push(Local_210.f_530.f_8 != 0);
		Call_Loc(Local_210.f_530.f_8);
		if (StackVal && StackVal)
		{
			return 0;
		}
	}
	if (func_2350(iParam0, bParam1))
	{
		return 0;
	}
	if (bParam1)
	{
		return 0;
	}
	return 1;
}

void func_2359(int iParam0, int iParam1)//Position - 0xBF6D4
{
	if (__LIB_11__.func_631(&(Local_216[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_2360(int iParam0, int iParam1)//Position - 0xBF6EC
{
	if (__LIB_1__.func_101(&(Local_216[iParam0 /*19*/]), iParam1))
	{
	}
}

float func_2361()//Position - 0xBF704
{
	if (Local_210.f_156.f_132.f_7 != 0)
	{
		Call_Loc(Local_210.f_156.f_132.f_7);
		return StackVal;
	}
	return 20f;
}

bool func_2362()//Position - 0xBF72B
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() > Local_575.f_225 + 2;
}

void func_2363()//Position - 0xBF73F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < Local_202.f_163)
	{
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[iVar3 /*5*/]);
		if (bVar1)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_575.f_136[iVar3 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_210.f_407.f_35 != 0)
			{
				Stack.Push(iVar3);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_210.f_407.f_35);
			}
			func_2390(iVar3, iVar0);
			func_2382(iVar3, iVar0, bVar2);
			func_2376(iVar3, iVar0);
			switch (func_190(iVar3))
			{
				case 2:
					func_2372(iVar3, iVar0);
					if (!bVar2)
					{
						func_2369(iVar3, iVar0);
						func_2365(iVar3, iVar0);
					}
					break;
				case 3:
					if (func_2364(iVar3))
					{
						if (__LIB_6__.func_924(Local_575.f_136[iVar3 /*5*/]))
						{
							__LIB_4__.func_509(&(Local_575.f_136[iVar3 /*5*/]));
						}
					}
					else if (func_188(iVar3))
					{
						if (__LIB_6__.func_924(Local_575.f_136[iVar3 /*5*/]))
						{
							__LIB_1__.func_162(&(Local_575.f_136[iVar3 /*5*/]));
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

int func_2364(int iParam0)//Position - 0xBF847
{
	if (Local_210.f_407.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_28);
		return StackVal;
	}
	return 0;
}

void func_2365(int iParam0, int iParam1)//Position - 0xBF86A
{
	if (func_2368(iParam0))
	{
		func_2328(2, iParam0, iParam1, func_2367(iParam0), func_2366(iParam0));
	}
}

float func_2366(var uParam0)//Position - 0xBF890
{
	if (Local_210.f_407.f_41 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_407.f_41);
		return StackVal;
	}
	return 0.5f;
}

int func_2367(var uParam0)//Position - 0xBF8B7
{
	if (Local_210.f_407.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_407.f_42);
		return StackVal;
	}
	return 18;
}

int func_2368(var uParam0)//Position - 0xBF8DB
{
	if (Local_210.f_407.f_40 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_407.f_40);
		return StackVal;
	}
	return 0;
}

void func_2369(int iParam0, int iParam1)//Position - 0xBF8FE
{
	if (func_187(iParam0, 5))
	{
		if (__LIB_13__.func_374(func_964()))
		{
			func_2370(2, iParam0, iParam1);
		}
		func_2338();
	}
}

void func_2370(int iParam0, int iParam1, int iParam2)//Position - 0xBF928
{
	switch (iParam0)
	{
		case 0:
			if (func_41(8))
			{
				func_2328(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 1:
			if (func_41(10))
			{
				func_2328(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 2:
			if (func_41(9))
			{
				func_2328(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
	}
}

void func_2372(int iParam0, int iParam1)//Position - 0xBF9C0
{
	if (!func_2374(iParam0))
	{
		return;
	}
	if (__LIB_6__.func_924(Local_575.f_136[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2373(iParam0, 8);
	}
}

void func_2373(int iParam0, int iParam1)//Position - 0xBF9F4
{
	if (__LIB_1__.func_101(&(Local_582[iLocal_518 /*62*/].f_16[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2374(int iParam0)//Position - 0xBFA13
{
	if (func_2375(iParam0, iLocal_518, 8))
	{
		return 0;
	}
	Stack.Push(Local_210.f_407.f_29 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_407.f_29);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_2375(int iParam0, int iParam1, int iParam2)//Position - 0xBFA4F
{
	return __LIB_9__.func_807(&(Local_582[iParam1 /*62*/].f_16[iParam0 /*2*/]), iParam2);
}

void func_2376(int iParam0, int iParam1)//Position - 0xBFA6A
{
	float fVar0;
	if (!func_165(iParam0, 30))
	{
		return;
	}
	fVar0 = func_2381(iParam0);
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2375(iParam0, iLocal_518, 10))
	{
		if (func_2378(iParam1, fVar0, func_2380(iParam0), func_2379(iParam0)))
		{
			func_2373(iParam0, 11);
			func_2373(iParam0, 10);
			if (Local_210.f_407.f_45 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(1);
				Call_Loc(Local_210.f_407.f_45);
			}
		}
	}
	else if (!func_2378(iParam1, fVar0, func_2380(iParam0), func_2379(iParam0)))
	{
		func_2377(iParam0, 10);
		if (Local_210.f_407.f_45 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_210.f_407.f_45);
		}
	}
}

void func_2377(int iParam0, int iParam1)//Position - 0xBFB1C
{
	if (__LIB_11__.func_631(&(Local_582[iLocal_518 /*62*/].f_16[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2378(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0xBFB3B
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_519) > (fParam1 * fParam1))
	{
		return 0;
	}
	if (iParam2 && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_516, iParam0, 287))
	{
		return 0;
	}
	if (iParam3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_2379(int iParam0)//Position - 0xBFB91
{
	if (Local_210.f_407.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_44);
		return StackVal;
	}
	return 0;
}

int func_2380(int iParam0)//Position - 0xBFBB4
{
	if (Local_210.f_407.f_43 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_43);
		return StackVal;
	}
	return 0;
}

float func_2381(int iParam0)//Position - 0xBFBD7
{
	if (Local_210.f_407.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_39);
		return StackVal;
	}
	return 10f;
}

void func_2382(int iParam0, int iParam1, bool bParam2)//Position - 0xBFBFE
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	if (bLocal_522 && func_2389(iParam0, bParam2))
	{
		iVar0 = func_2388(iParam0);
		iVar1 = func_2387(iParam0);
		fVar2 = func_2386(iParam0);
		bVar3 = func_2385(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_486[iParam0]))
		{
			Stack.Push(Local_210.f_407.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_407.f_14);
			bVar4 = (StackVal && StackVal);
			__LIB_13__.func_433(&(uLocal_486[iParam0]), iParam1, iVar1, iVar0, func_2384(iParam0), fVar2, 0, bVar3, func_2383(iParam0), bVar4);
			HUD::SET_BLIP_PRIORITY(uLocal_486[iParam0], 12);
		}
		else
		{
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_486[iParam0]))
			{
				if (iVar1 != -1)
				{
					HUD::SET_BLIP_SPRITE(uLocal_486[iParam0], iVar1);
				}
				HUD::SET_BLIP_SCALE(uLocal_486[iParam0], fVar2);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_486[iParam0], func_2384(iParam0));
			}
			if (bVar3 != HUD::IS_BLIP_SHORT_RANGE(uLocal_486[iParam0]))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_486[iParam0], bVar3);
			}
			if (__LIB_1__.func_48(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_486[iParam0]))
			{
				__LIB_6__.func_958(&(uLocal_486[iParam0]), iVar0);
			}
			if (func_165(iParam0, 23))
			{
				__LIB_38__.func_249(uLocal_486[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_210.f_407.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_407.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_486[iParam0]))
				{
					__LIB_13__.func_350(&(uLocal_486[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_486[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_486[iParam0]));
	}
}

int func_2383(int iParam0)//Position - 0xBFD8D
{
	if (Local_210.f_407.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_9);
		return StackVal;
	}
	return 0;
}

char* func_2384(int iParam0)//Position - 0xBFDB0
{
	if (Local_210.f_407.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_13);
		return StackVal;
	}
	if (__LIB_13__.func_374(func_964()) && func_187(iParam0, 5))
	{
		return "PB_TARGET" /* GXT: Target */;
	}
	return "BLIP_OBJ" /* GXT: Object */;
}

int func_2385(int iParam0)//Position - 0xBFDF4
{
	if (Local_210.f_407.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_16);
		return StackVal;
	}
	return 0;
}

float func_2386(int iParam0)//Position - 0xBFE17
{
	if (Local_210.f_407.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_6);
		return StackVal;
	}
	if (__LIB_13__.func_374(func_964()) && func_187(iParam0, 5))
	{
		return 1f;
	}
	return 1f;
}

int func_2387(int iParam0)//Position - 0xBFE55
{
	if (Local_210.f_407.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_4);
		return StackVal;
	}
	if ((func_964() == 7 && func_187(iParam0, 5)) && !func_41(36))
	{
		return 432;
	}
	if (func_964() == 6 && func_187(iParam0, 5))
	{
		return 32;
	}
	return 32;
}

int func_2388(int iParam0)//Position - 0xBFEBA
{
	if (Local_210.f_407.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_5);
		return StackVal;
	}
	if (func_964() == 7 && func_187(iParam0, 5))
	{
		return 6;
	}
	if (func_964() == 6 && func_187(iParam0, 5))
	{
		return 10;
	}
	return 6;
}

int func_2389(int iParam0, bool bParam1)//Position - 0xBFF10
{
	if (bParam1)
	{
		return 0;
	}
	if (!bLocal_523)
	{
		return 0;
	}
	if (Local_210.f_407 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407);
		return StackVal;
	}
	if (__LIB_13__.func_374(func_964()) && func_187(iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_2390(int iParam0, int iParam1)//Position - 0xBFF5E
{
	if (!func_2393(iParam0))
	{
		return;
	}
	if (__LIB_6__.func_924(Local_575.f_136[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, true);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iParam1, true), func_2392(iParam0), func_2391(iParam0), true, false, 1f, false);
		func_2373(iParam0, 9);
	}
}

float func_2391(int iParam0)//Position - 0xBFFCE
{
	if (Local_210.f_407.f_30.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_30.f_2);
		return StackVal;
	}
	return 1f;
}

int func_2392(int iParam0)//Position - 0xBFFF5
{
	if (Local_210.f_407.f_30.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_407.f_30.f_1);
		return StackVal;
	}
	return 6;
}

int func_2393(int iParam0)//Position - 0xC001F
{
	if (func_2375(iParam0, iLocal_518, 9) || func_187(iParam0, 3))
	{
		return 0;
	}
	Stack.Push(Local_210.f_407.f_30 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_407.f_30);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_2394()//Position - 0xC0068
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	iVar1 = -1;
	fLocal_541 = 99999f;
	uLocal_473.f_3 = -1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_130)
	{
		func_2448(iVar0);
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_575.f_119[iVar0 /*8*/]);
			bVar3 = __LIB_2__.func_63(Local_575.f_119[iVar0 /*8*/]);
			bVar4 = __LIB_1__.func_126(iLocal_516, iVar2);
			bVar6 = false;
			if (bVar3)
			{
				iVar1 = func_478(iVar0, 2);
			}
			if (bVar4)
			{
				uLocal_473.f_3 = iVar0;
				func_2446(iVar0, 4);
				bVar6 = iLocal_516 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
				if (bVar6)
				{
					func_2446(iVar0, 9);
				}
			}
			if (__LIB_14__.func_762(iVar0, 14))
			{
				if (!func_2445(iVar0, NETWORK::PARTICIPANT_ID(), 10))
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iVar2)
					{
						func_2446(iVar0, 10);
					}
				}
			}
			if (Local_210.f_352.f_45 != 0)
			{
				Stack.Push(iVar0);
				Stack.Push(iVar2);
				Stack.Push(bVar3);
				Stack.Push(bVar4);
				Stack.Push(iVar1);
				Call_Loc(Local_210.f_352.f_45);
			}
		}
		else
		{
			iVar2 = -1;
			bVar3 = false;
			bVar4 = false;
			bVar6 = false;
			iVar1 = -1;
		}
		func_2434(iVar0, iVar2, bVar3);
		if (bVar5)
		{
			func_2433(iVar0, iVar2);
			func_2431(iVar0, iVar2);
			func_2430(iVar0, iVar2);
			switch (__LIB_14__.func_761(iVar0))
			{
				case 0:
					break;
				case 2:
					break;
				case 4:
					if (bVar5)
					{
						func_2426(iVar0, iVar2);
						func_2425(iVar0);
						func_2424(iVar0, iVar2);
						func_2422(iVar0, iVar2, iVar1, bVar4);
						if (bVar3)
						{
							func_2421(iVar0, iVar2);
							func_2420(iVar0, iVar2);
							func_2413(iVar0, iVar2);
							func_2411(iVar0, iVar2);
							func_2402(iVar0, iVar2);
							func_2401(iVar0, iVar2);
							func_2400(iVar0, iVar2);
							if (func_2399(iVar0, iVar2))
							{
								bVar7 = true;
							}
						}
					}
					break;
				case 5:
					if (!func_41(7))
					{
						func_2291(iVar0, 2);
					}
					break;
				case 3:
					func_2396(iVar0, iVar2);
					break;
				case 6:
					break;
				case 7:
					break;
				}
		}
		iVar0++;
	}
	if (bVar7)
	{
		func_2395(1);
	}
	else
	{
		func_2395(0);
	}
	fLocal_542 = fLocal_541;
	fLocal_541 = fLocal_542;
}

void func_2395(bool bParam0)//Position - 0xC0292
{
	if (bParam0)
	{
		if (!func_784(57))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_516, 426, true);
			func_145(57);
		}
	}
	else if (func_784(57))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_516, 426, false);
		func_866(57);
	}
}

void func_2396(int iParam0, int iParam1)//Position - 0xC02D7
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
	{
		Var2.f_4 = 1125515264;
		Var2.f_5 = 1;
		Var2.f_6 = 1;
		Var2.f_8 = 1082130432;
		Var2.f_9 = 1176255488;
		Var2.f_10 = 1;
		Var2.f_13 = 1;
		Var2.f_15 = 2;
		Var2.f_22 = 2;
		Var2.f_25 = 1;
		Var2.f_26 = 1;
		Var2.f_29 = 1123024896;
		Var2.f_30 = 1;
		Var2.f_0 = 20f;
		Var2.f_4 = 100f;
		Var2.f_1 = 1;
		Var2.f_12 = 1;
		Var2.f_13 = 0;
		Var2.f_5 = 0;
		if (func_330(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			__LIB_13__.func_375(iParam0, 1, Local_575.f_225);
		}
	}
}

int func_2399(int iParam0, int iParam1)//Position - 0xC0467
{
	if (!func_164(iParam0, 31))
	{
		return 0;
	}
	return func_2378(iParam1, 12f, 0, 0);
}

void func_2400(int iParam0, int iParam1)//Position - 0xC048C
{
	if (!func_2445(iParam0, iLocal_518, 8))
	{
		if (func_164(iParam0, 9))
		{
			PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(iLocal_516, iParam1, 0, 1, -2);
		}
		func_2446(iParam0, 8);
	}
}

void func_2401(int iParam0, int iParam1)//Position - 0xC04C4
{
	if (Local_210.f_352.f_49 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_352.f_49);
	}
}

void func_2402(int iParam0, int iParam1)//Position - 0xC04E5
{
	if (__LIB_14__.func_762(iParam0, 16) && __LIB_13__.func_374(func_964()))
	{
		func_2370(1, iParam0, iParam1);
	}
	else if (func_2408(iParam0, iParam1))
	{
		func_2403(iParam0, iParam1);
	}
}

void func_2403(int iParam0, int iParam1)//Position - 0xC0524
{
	func_2328(1, iParam0, iParam1, func_2405(iParam0), func_2404(iParam0));
}

float func_2404(int iParam0)//Position - 0xC0541
{
	if (Local_210.f_352.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_20);
		return StackVal;
	}
	return 0.5f;
}

int func_2405(int iParam0)//Position - 0xC0568
{
	int iVar0;
	int iVar1;
	if (__LIB_14__.func_762(iParam0, 14))
	{
		iVar0 = func_478(iParam0, 2);
		iVar1 = func_959(iVar0, 0);
		return __LIB_13__.func_376(iVar1);
	}
	return func_2406(iParam0);
}

int func_2406(int iParam0)//Position - 0xC059C
{
	if (Local_210.f_352.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_5);
		return StackVal;
	}
	if (func_964() == 7 && __LIB_14__.func_762(iParam0, 16))
	{
		return 6;
	}
	if (func_964() == 6 && __LIB_14__.func_762(iParam0, 16))
	{
		return 10;
	}
	return 9;
}

int func_2408(int iParam0, int iParam1)//Position - 0xC0629
{
	if (func_2409(iParam0))
	{
		return 1;
	}
	if (Local_210.f_352.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_352.f_19);
		return StackVal;
	}
	return 0;
}

int func_2409(int iParam0)//Position - 0xC065B
{
	if (!__LIB_14__.func_762(iParam0, 14))
	{
		return 0;
	}
	if (!func_41(17) && !__LIB_0__.func_114())
	{
		return 0;
	}
	if (!__LIB_14__.func_762(iParam0, 13))
	{
		return 0;
	}
	if (func_964() != 22)
	{
		return 0;
	}
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	return 1;
}

void func_2411(int iParam0, int iParam1)//Position - 0xC06C0
{
	Stack.Push(!func_164(iParam0, 3));
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_210.f_352.f_31);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
	{
		func_2412(iParam0, iParam1);
	}
}

void func_2412(int iParam0, int iParam1)//Position - 0xC0702
{
	if (func_164(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam1, iLocal_514, false);
	if (!__LIB_0__.func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!func_164(iParam0, 6))
	{
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, false);
	}
}

void func_2413(int iParam0, int iParam1)//Position - 0xC0757
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (!func_164(iParam0, 14) || !func_2416(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
	{
		Var2.f_4 = 1125515264;
		Var2.f_5 = 1;
		Var2.f_6 = 1;
		Var2.f_8 = 1082130432;
		Var2.f_9 = 1176255488;
		Var2.f_10 = 1;
		Var2.f_13 = 1;
		Var2.f_15 = 2;
		Var2.f_22 = 2;
		Var2.f_25 = 1;
		Var2.f_26 = 1;
		Var2.f_29 = 1123024896;
		Var2.f_30 = 1;
		Var2.f_0 = __LIB_1__.func_146();
		Var2.f_4 = __LIB_11__.func_638();
		Var2.f_1 = 1;
		Var2.f_12 = 1;
		Var2.f_13 = 0;
		Var2.f_5 = 1;
		if (func_330(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			if (Local_210.f_352.f_35 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_352.f_35);
			}
		}
	}
}

int func_2416(int iParam0, int iParam1)//Position - 0xC0888
{
	Stack.Push(Local_210.f_352.f_32 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_32);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (__LIB_21__.func_119(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_2420(int iParam0, int iParam1)//Position - 0xC091B
{
	float fVar0;
	Stack.Push(Local_210.f_352.f_30 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_30);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(Local_519, ENTITY::GET_ENTITY_COORDS(iParam1, false));
	if (fVar0 < fLocal_541)
	{
		fLocal_541 = fVar0;
		iLocal_532 = iLocal_532;
		iLocal_532 = iParam0;
	}
}

void func_2421(int iParam0, int iParam1)//Position - 0xC0970
{
	if (__LIB_14__.func_762(iParam0, 16))
	{
		func_2338();
	}
}

void func_2422(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xC0987
{
	if (!func_2423(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2446(iParam0, 1);
	}
}

int func_2423(int iParam0, int iParam1, var uParam2)//Position - 0xC09BE
{
	if (func_2445(iParam0, iLocal_518, 1))
	{
		return 0;
	}
	if ((__LIB_14__.func_762(iParam0, 14) && uParam2) || ((iParam1 != -1 && __LIB_14__.func_763(iParam1, 7)) && __LIB_14__.func_763(iParam1, 1)))
	{
		return 1;
	}
	Stack.Push(Local_210.f_352.f_29 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_29);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_2424(int iParam0, int iParam1)//Position - 0xC0A31
{
	if ((!func_164(iParam0, 12) || __LIB_14__.func_762(iParam0, 11)) || func_2445(iParam0, iLocal_518, 7))
	{
		return;
	}
	if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iParam1))
	{
		if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
		{
			VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iParam1, 5f, 5f, false);
			func_2446(iParam0, 7);
		}
	}
}

void func_2425(int iParam0)//Position - 0xC0A8F
{
	if (func_152(iLocal_518, 29))
	{
		return;
	}
	if (func_164(iParam0, 20) || func_164(iParam0, 21))
	{
		func_790(29);
	}
}

void func_2426(int iParam0, int iParam1)//Position - 0xC0AC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!func_164(iParam0, 15) || __LIB_14__.func_762(iParam0, 3)) || func_2445(iParam0, iLocal_518, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Local_575.f_119[iVar0 /*8*/];
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1) && __LIB_2__.func_63(iVar1))
	{
		iVar2 = NETWORK::NET_TO_VEH(iVar1);
		if (__LIB_11__.func_47(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam1))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iParam1, iVar2, 1f);
			}
			else
			{
				func_2446(iParam0, 3);
			}
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1, iVar2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar2, "chassis_dummy"), func_2428(iParam0), func_2427(iParam0), false, false, false, false, 2, true, 0);
		}
		else
		{
			func_2446(iParam0, 3);
		}
	}
}

Vector3 func_2427(int iParam0)//Position - 0xC0B91
{
	if (Local_210.f_352.f_50.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_50.f_1);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

Vector3 func_2428(int iParam0)//Position - 0xC0BBA
{
	if (Local_210.f_352.f_50 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_50);
		return StackVal, StackVal, StackVal;
	}
	return 0f, -5.5f, 0.7f;
}

void func_2430(int iParam0, int iParam1)//Position - 0xC0C61
{
	if (bLocal_511 && Local_498.f_10 <= 10f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
		{
			if (iParam1 == PED::GET_VEHICLE_PED_IS_IN(iLocal_516, false) && iLocal_531 != iParam0)
			{
				iLocal_531 = iParam0;
			}
		}
	}
	else if ((iLocal_531 != -1 && !Global_1952191.f_5314) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iLocal_531 = -1;
	}
	if (iParam0 == iLocal_531)
	{
		if (Global_1952191.f_5314 && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			__LIB_13__.func_375(iParam0, 0, Local_575.f_225);
			iLocal_531 = -1;
		}
	}
}

void func_2431(int iParam0, int iParam1)//Position - 0xC0CF9
{
	float fVar0;
	if (!func_164(iParam0, 24))
	{
		return;
	}
	Stack.Push(__LIB_14__.func_762(iParam0, 6));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_24);
	if (StackVal && !StackVal)
	{
		return;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352.f_25);
	fVar0 = StackVal;
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2445(iParam0, iLocal_518, 5))
	{
		Stack.Push(iParam1);
		Stack.Push(fVar0);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_26);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_27);
		if (func_2378(StackVal, StackVal, StackVal, StackVal))
		{
			func_2446(iParam0, 5);
			if (Local_210.f_352.f_28 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(1);
				Call_Loc(Local_210.f_352.f_28);
			}
		}
	}
	else
	{
		Stack.Push(iParam1);
		Stack.Push(fVar0);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_26);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_27);
		if (!func_2378(StackVal, StackVal, StackVal, StackVal))
		{
			func_2432(iParam0, 5);
			if (Local_210.f_352.f_28 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(0);
				Call_Loc(Local_210.f_352.f_28);
			}
		}
	}
}

void func_2432(int iParam0, int iParam1)//Position - 0xC0DD7
{
	if (__LIB_11__.func_631(&(Local_582[iLocal_518 /*62*/].f_37[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2433(int iParam0, int iParam1)//Position - 0xC0DF6
{
	if (Local_202.f_130.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (!__LIB_14__.func_762(iParam0, 2))
	{
		if (!__LIB_14__.func_762(iParam0, 0) && !func_2445(iParam0, iLocal_518, 0))
		{
			if (__LIB_6__.func_924(Local_575.f_119[iParam0 /*8*/]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_575.f_119[iParam0 /*8*/], true);
				func_2446(iParam0, 0);
			}
		}
	}
}

void func_2434(int iParam0, int iParam1, bool bParam2)//Position - 0xC0E63
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	bool bVar6;
	if (bLocal_522 && func_2442(iParam0, iParam1, bParam2))
	{
		iVar0 = func_2406(iParam0);
		iVar1 = func_2441(iParam0);
		fVar2 = func_2440(iParam0);
		bVar3 = func_2439(iParam0);
		bVar4 = func_2438(iParam0);
		sVar5 = func_2437(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_473[iParam0]))
		{
			Stack.Push(Local_210.f_352.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_352.f_14);
			bVar6 = (StackVal && StackVal);
			__LIB_13__.func_433(&(uLocal_473[iParam0]), iParam1, iVar1, iVar0, sVar5, fVar2, 0, bVar3, bVar4, bVar6);
			HUD::SET_BLIP_PRIORITY(uLocal_473[iParam0], func_2436(iParam0));
			func_2446(iParam0, 11);
		}
		else
		{
			if (func_2435(iParam0))
			{
				HUD::SET_BLIP_ROTATION(uLocal_473[iParam0], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam1)));
			}
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_473[iParam0]))
			{
				HUD::SET_BLIP_SPRITE(uLocal_473[iParam0], iVar1);
				HUD::SET_BLIP_SCALE(uLocal_473[iParam0], fVar2);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_473[iParam0], sVar5);
				}
			}
			if (bVar3 != HUD::IS_BLIP_SHORT_RANGE(uLocal_473[iParam0]))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_473[iParam0], bVar3);
			}
			if (__LIB_1__.func_48(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_473[iParam0]))
			{
				__LIB_6__.func_958(&(uLocal_473[iParam0]), iVar0);
			}
			if (func_164(iParam0, 16))
			{
				__LIB_38__.func_249(uLocal_473[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_210.f_352.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_352.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_473[iParam0]))
				{
					__LIB_13__.func_350(&(uLocal_473[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_473[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_473[iParam0]));
	}
}

int func_2435(int iParam0)//Position - 0xC1026
{
	if (Local_210.f_352.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_18);
		return StackVal;
	}
	switch (func_2441(iParam0))
	{
		case 460:
			return 1;
		default:
	}
	return 0;
}

int func_2436(int iParam0)//Position - 0xC105E
{
	if (Local_210.f_352.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_7);
		return StackVal;
	}
	return 12;
}

char* func_2437(int iParam0)//Position - 0xC1082
{
	if (Local_210.f_352.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_13);
		return StackVal;
	}
	if (__LIB_13__.func_374(func_964()) && __LIB_14__.func_762(iParam0, 16))
	{
		return "PB_TARGET" /* GXT: Target */;
	}
	return "BLIP_VEH" /* GXT: Vehicle */;
}

int func_2438(int iParam0)//Position - 0xC10C7
{
	if (Local_210.f_352.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_9);
		return StackVal;
	}
	return 0;
}

int func_2439(int iParam0)//Position - 0xC10EA
{
	if (Local_210.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_16);
		return StackVal;
	}
	return 0;
}

float func_2440(int iParam0)//Position - 0xC110D
{
	if (Local_210.f_352.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_6);
		return StackVal;
	}
	if (__LIB_13__.func_374(func_964()) && __LIB_14__.func_762(iParam0, 16))
	{
		return 1f;
	}
	return 1f;
}

int func_2441(int iParam0)//Position - 0xC114C
{
	if (Local_210.f_352.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_352.f_4);
		return StackVal;
	}
	switch (func_964())
	{
		case 7:
			if (__LIB_14__.func_762(iParam0, 16) && !func_41(36))
			{
				return 432;
			}
			break;
		case 6:
			if (__LIB_14__.func_762(iParam0, 16))
			{
				return 225;
			}
			break;
	}
	return 225;
}

int func_2442(int iParam0, int iParam1, bool bParam2)//Position - 0xC11B8
{
	if (!bParam2)
	{
		return 0;
	}
	if (iLocal_520 == iParam1)
	{
		return 0;
	}
	Stack.Push(Local_210.f_352 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_352);
	if (StackVal && StackVal)
	{
		return 1;
	}
	switch (func_964())
	{
		case 7:
		case 6:
			if (__LIB_14__.func_762(iParam0, 16))
			{
				return 1;
			}
			break;
		case 29:
			if ((__LIB_0__.func_160(func_478(iParam0, 2)) != -1 && !func_2443(func_478(iParam0, 2))) && !func_977(func_478(iParam0, 2), 1))
			{
				return 1;
			}
			break;
		case 33:
			if (__LIB_0__.func_160(func_478(iParam0, 2)) != -1 && !func_977(func_478(iParam0, 2), 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_2443(int iParam0)//Position - 0xC128A
{
	return Local_477[iParam0 /*7*/].f_4 != __LIB_0__.func_160();
}

bool func_2445(int iParam0, int iParam1, int iParam2)//Position - 0xC12A9
{
	return __LIB_9__.func_807(&(Local_582[iParam1 /*62*/].f_37[iParam0 /*2*/]), iParam2);
}

void func_2446(int iParam0, int iParam1)//Position - 0xC12C4
{
	if (__LIB_1__.func_101(&(Local_582[iLocal_518 /*62*/].f_37[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2448(int iParam0)//Position - 0xC1327
{
	func_2432(iParam0, 4);
	func_2432(iParam0, 9);
}

void func_2449()//Position - 0xC133E
{
	if (__LIB_19__.func_481(iLocal_514, Local_575.f_260) > 0)
	{
		__LIB_18__.func_369(1, __LIB_0__.func_684(Local_524.f_0));
		func_2457(1);
		func_2451(1);
	}
	else
	{
		__LIB_18__.func_369(0, __LIB_0__.func_684(Local_524.f_0));
		func_2457(0);
		func_2451(0);
	}
	if (Local_498.f_11 > 0)
	{
		__LIB_0__.func_371();
	}
}

void func_2451(bool bParam0)//Position - 0xC139D
{
	if (bParam0)
	{
		if (__LIB_3__.func_161() == 0)
		{
			__LIB_21__.func_134(func_205(), Local_575.f_260);
		}
	}
	else
	{
		__LIB_26__.func_809(Local_575.f_260);
	}
}

void func_2457(bool bParam0)//Position - 0xC1587
{
	if (bParam0 != func_2460(iLocal_514))
	{
		__LIB_21__.func_321(Local_524.f_1, bParam0);
	}
}

int func_2460(int iParam0)//Position - 0xC161E
{
	return __LIB_14__.func_26(iParam0, Local_524.f_1);
}

void func_2465()//Position - 0xC1736
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
		switch (iVar0)
		{
			case 174:
				if (!SCRIPT::GET_EVENT_DATA(1, iVar2, &iVar1, 2))
				{
					return;
				}
				switch (iVar1)
				{
					case 145637109:
						func_2498(iVar2);
						break;
					case -1544474774:
						func_2487(iVar2);
						break;
					case -1946222827:
						func_2486(iVar2);
						break;
					case 177099551:
						func_2485(iVar2);
						break;
					case 1592032725:
						break;
					case 1275205244:
						func_2478(iVar2);
						break;
				}
				break;
			case 186:
				func_2467(iVar2);
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		switch (iVar0)
		{
			case 149:
				func_2466(iVar2);
				break;
		}
		iVar2++;
	}
}

void func_2466(int iParam0)//Position - 0xC181D
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!SCRIPT::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Var0.f_1))
	{
		return;
	}
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < Local_202.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iVar3 /*24*/]))
		{
			iVar4 = NETWORK::NET_TO_PED(Local_575.f_22[iVar3 /*24*/]);
			if (iVar4 == Var0.f_1)
			{
				if (__LIB_14__.func_760(iVar3, 25) || func_2301(iVar3, iLocal_518, 15))
				{
					Jump @197; //curOff = 137
				}
				else
				{
					iVar1 = iVar3;
				}
			}
			else if (iVar4 == Var0.f_0)
			{
				iVar2 = iVar3;
			}
			if (iVar1 != -1 && iVar2 != -1)
			{
				func_2296(iVar1, 15);
			}
			else
			{
				iVar3++;
			}
		}
void func_2467(int iParam0)//Position - 0xC18E5
{
	int iVar0;
	struct<13> Var1;
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
	int iVar12;
	int iVar13;
	int iVar14;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 13))
	{
		__LIB_0__.func_371(Var1);
		if (ENTITY::DOES_ENTITY_EXIST(Var1.f_0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var1.f_0))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) == 0)
				{
					if (__LIB_10__.func_952(iVar3))
					{
						if (func_2476(iVar3))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_516 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								uVar4 = func_80();
								func_1731(iLocal_514, uVar4, 1, 0);
							}
						}
					}
				}
				iVar5 = 0;
				while (iVar5 < Local_202.f_38.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iVar5 /*24*/]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_575.f_22[iVar5 /*24*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
								if (PED::IS_PED_A_PLAYER(iVar6))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
									if (__LIB_21__.func_121(Var1, iVar6))
									{
										func_2296(iVar5, 9);
									}
									if (Local_210.f_156.f_188 != 0)
									{
										Stack.Push(iVar5);
										Stack.Push(Var1);
										Stack.Push(iVar2);
										Call_Loc(Local_210.f_156.f_188);
									}
									if (iVar2 == iLocal_514)
									{
										__LIB_0__.func_371();
										if (Var1.f_5 && func_2473(iVar5))
										{
											Local_494.f_3++;
										}
									}
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
									{
									}
								}
							}
							else if (Local_210.f_156.f_189 != 0)
							{
								Stack.Push(iVar5);
								Stack.Push(Var1);
								Call_Loc(Local_210.f_156.f_189);
							}
						}
					}
					iVar5++;
				}
				if (((!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(Var1.f_0)) && Var1.f_5) && func_2472())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
							{
								Local_494.f_4++;
							}
						}
					}
				}
				func_2471(Var1, iVar3, iVar2);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(Var1.f_0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_514) < func_80())
				{
					iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
					iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), 0, false);
					if (__LIB_14__.func_825(Var1.f_0, iVar8, iVar9))
					{
						if (func_2476(iVar8))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_516 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								iVar10 = func_80();
								func_1731(iLocal_514, iVar10, 1, 0);
							}
						}
					}
				}
				iVar11 = 0;
				while (iVar11 < Local_202.f_130.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[iVar11 /*8*/]))
					{
						if (((((Local_210.f_352.f_48 != 0 && ENTITY::DOES_ENTITY_EXIST(Var1.f_1)) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_575.f_119[iVar11 /*8*/]), -1, false)) && Var1.f_9) && (Var1.f_6 == joaat("WEAPON_RAMMED_BY_CAR") || Var1.f_6 == joaat("WEAPON_RUN_OVER_BY_CAR")))
						{
							Stack.Push(iVar11);
							Stack.Push(Var1);
							Stack.Push(0);
							Call_Loc(Local_210.f_352.f_48);
						}
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_575.f_119[iVar11 /*8*/]))
						{
							iVar2 = 0;
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar2 == iLocal_514)
									{
										__LIB_0__.func_371();
									}
									iVar12 = func_2468(iVar11);
									if (iVar12 != -1)
									{
										func_2296(iVar12, 10);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
										{
										}
									}
								}
							}
							if (Local_210.f_352.f_47 != 0)
							{
								Stack.Push(iVar11);
								Stack.Push(Var1);
								Stack.Push(iVar2);
								Call_Loc(Local_210.f_352.f_47);
							}
						}
					}
					iVar11++;
				}
				iVar13 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					func_2471(Var1, iVar13, iVar2);
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(Var1.f_0))
			{
				iVar0 = 0;
				while (iVar0 < Local_202.f_19.f_5)
				{
					if (!__LIB_14__.func_763(iVar0, 4) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar0]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_575.f_2[iVar0]))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
								if (Var1.f_5)
								{
								}
							}
							if (Var1.f_5)
							{
								func_954(iVar0, 9);
								func_954(iVar0, 47);
								if (Local_210.f_114.f_33 != 0)
								{
									Stack.Push(iVar0);
									Call_Loc(Local_210.f_114.f_33);
								}
							}
						}
					}
					iVar0++;
				}
				iVar14 = 0;
				while (iVar14 < Local_202.f_163.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[iVar14 /*5*/]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_575.f_136[iVar14 /*5*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar2 == iLocal_514)
									{
										__LIB_0__.func_371();
									}
									if (Local_210.f_407.f_34 != 0)
									{
										Stack.Push(iVar14);
										Stack.Push(Var1);
										Stack.Push(iVar2);
										Call_Loc(Local_210.f_407.f_34);
									}
								}
							}
						}
					}
					iVar14++;
				}
			}
		}
	}
}

int func_2468(int iParam0)//Position - 0xC1E26
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_575.f_119[iParam0 /*8*/]), -1, false))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_575.f_119[iParam0 /*8*/]), -1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_202.f_38.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iVar1 /*24*/]) && iVar0 == NETWORK::NET_TO_PED(Local_575.f_22[iVar1 /*24*/]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

void func_2471(struct<13> Param0, int iParam1, int iParam2)//Position - 0xC2034
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_A_PLAYER(iParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (Local_210.f_15 != 0)
					{
						Stack.Push(iVar0);
						Stack.Push(Param0);
						Stack.Push(iParam2);
						Call_Loc(Local_210.f_15);
					}
					if (iParam2 == iLocal_514)
					{
						if (func_41(15))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
							{
								if (__LIB_0__.func_114(iVar0))
								{
									__LIB_0__.func_371();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_2472()//Position - 0xC20C8
{
	if (Local_210.f_92.f_1 != 0)
	{
		Call_Loc(Local_210.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_2473(int iParam0)//Position - 0xC20E7
{
	if (Local_210.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_92);
		return StackVal;
	}
	return 1;
}

int func_2476(int iParam0)//Position - 0xC21CF
{
	if (!func_2164() || !__LIB_36__.func_232(0, 0, 1))
	{
		return 0;
	}
	if (func_41(28))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2478(int iParam0)//Position - 0xC221B
{
	struct<4> Var0;
	char* sVar1;
	char* sVar2;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	if (Global_1663509.f_833 || !SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		return;
	}
	if (!func_2164())
	{
		return;
	}
	sVar1 = func_2484(Var0.f_3);
	sVar2 = func_2483(Var0.f_3);
	switch (Var0.f_2)
	{
		case 0:
			if (Var0.f_1 == iLocal_514)
			{
				__LIB_18__.func_437("FMC_TIC_HAXSPu" /* GXT: You hacked the security panel. */, 0);
			}
			else
			{
				__LIB_36__.func_179("FMC_TIC_HAXSPr" /* GXT: ~a~~s~ hacked the security panel. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 1:
			if (Var0.f_1 == iLocal_514)
			{
				__LIB_18__.func_437("FMC_TIC_HAXLAPu" /* GXT: You hacked a laptop. */, 0);
			}
			else
			{
				__LIB_36__.func_179("FMC_TIC_HAXLAPr" /* GXT: ~a~~s~ hacked a laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (Var0.f_1 == iLocal_514)
			{
				__LIB_18__.func_437("FMC_TIC_HKTLTPL" /* GXT: You hacked the laptop. */, 0);
			}
			else
			{
				__LIB_36__.func_179("FMC_TIC_HKTLTPR" /* GXT: ~a~~s~ hacked the laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 5:
			if (Var0.f_1 == iLocal_514 && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				__LIB_18__.func_437(sVar1, 0);
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && __LIB_1__.func_264(Var0.f_1, 0, 1))
			{
				__LIB_36__.func_179(sVar2, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
	}
}

char* func_2483(var uParam0, var uParam1)//Position - 0xC2581
{
	if (Local_210.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_210.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_2484(var uParam0, var uParam1)//Position - 0xC25A9
{
	if (Local_210.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_210.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

void func_2485(int iParam0)//Position - 0xC25D1
{
	struct<7> Var0;
	if (!bLocal_512)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != Local_524.f_0 || Var0.f_6 != NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT())
		{
			return;
		}
		Local_575.f_22[Var0.f_3 /*24*/].f_6 = Var0.f_2;
	}
}

void func_2486(int iParam0)//Position - 0xC2621
{
	struct<7> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7) || Local_524.f_0 != Var0.f_2)
	{
		return;
	}
	Local_491.f_0 = Var0.f_3;
	Local_491.f_2 = Var0.f_5;
	Local_491.f_1 = Var0.f_6;
	func_145(15);
}

void func_2487(int iParam0)//Position - 0xC2667
{
	struct<22> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_15 = 5;
	Var0.f_21 = 5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 27))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = (iVar2 + func_2492(Var0.f_15[iVar1], Var0.f_2[iVar1 /*2*/].f_1, Var0.f_1, Var0.f_21[iVar1]));
			iVar1++;
		}
		if (iVar2 > 0)
		{
			func_2490(Var0.f_1);
			func_2488(iVar2, Var0.f_1);
		}
	}
}

void func_2488(int iParam0, int iParam1)//Position - 0xC2712
{
	if (func_2489(iParam1))
	{
		Local_582[iLocal_517 /*62*/].f_31 = (Local_582[iLocal_517 /*62*/].f_31 + iParam0);
	}
}

bool func_2489(int iParam0)//Position - 0xC273A
{
	return ((iParam0 == iLocal_514 && !__LIB_19__.func_760(1)) || __LIB_2__.func_191(iParam0) == iLocal_514);
}

void func_2490(int iParam0)//Position - 0xC2763
{
	if (!__LIB_1__.func_302(26))
	{
		if (!func_2491())
		{
		}
	}
	if (!func_41(27))
	{
		if (__LIB_1__.func_264(iParam0, 0, 1))
		{
			MISC::SET_BIT(&(Global_2815059.f_1814), iParam0);
			Global_2815059.f_1815[iParam0] = Local_524.f_0;
		}
	}
}

int func_2491()//Position - 0xC27AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (__LIB_14__.func_763(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2492(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC27D9
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < func_831())
	{
		if (iParam0 != Local_575.f_285)
		{
		}
		else if (iParam1 != Local_575.f_285.f_1[iVar1 /*5*/].f_1)
		{
		}
		else
		{
			switch (func_985(iVar1))
			{
				case 0:
					func_2496(func_984(iVar1), iParam2);
					break;
				case 1:
					break;
			}
			if (iParam3 > 0)
			{
				func_2270();
				Local_582[iLocal_517 /*62*/].f_32++;
				return 0;
			}
			iVar0++;
			switch (func_985(iVar1))
			{
				case 0:
					func_2495(func_984(iVar1), iParam2);
					break;
				case 1:
					break;
			}
			if (bLocal_512)
			{
				if (__LIB_13__.func_258(iParam2, 1))
				{
					Local_575.f_285.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__.func_191(iParam2));
				}
				else
				{
					Local_575.f_285.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam2);
				}
			}
			if (Local_210.f_54.f_6 != 0)
			{
				Stack.Push(iParam2 == iLocal_514);
				Call_Loc(Local_210.f_54.f_6);
				__LIB_0__.func_371(StackVal);
			}
			if (Local_210.f_54.f_7 != 0)
			{
				Stack.Push(iParam2 == iLocal_514);
				Call_Loc(Local_210.f_54.f_7);
				__LIB_0__.func_371(StackVal);
			}
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_2495(int iParam0, int iParam1)//Position - 0xC292E
{
	if (iParam1 == iLocal_514)
	{
		func_954(iParam0, 6);
	}
	else if (__LIB_2__.func_457(iLocal_514, iParam1))
	{
	}
	else
	{
		func_954(iParam0, 9);
		func_954(iParam0, 25);
	}
}

void func_2496(var uParam0, int iParam1)//Position - 0xC2967
{
	if (Local_210.f_114.f_31 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1 == iLocal_514);
		Call_Loc(Local_210.f_114.f_31);
	}
	__LIB_0__.func_371(uParam0, iParam1 == iLocal_514);
}

void func_2498(int iParam0)//Position - 0xC299E
{
	struct<11> Var0;
	int iVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar1 = func_2492(Var0.f_5, Var0.f_2.f_1, Var0.f_1, Var0.f_7);
		if (iVar1 > 0)
		{
			func_2490(Var0.f_1);
			func_2488(iVar1, Var0.f_1);
		}
	}
}

void func_2499()//Position - 0xC2A00
{
	var uVar0;
	bool bVar1;
	int iVar2;
	uVar0 = __LIB_36__.func_232(0, 0, 1);
	bVar1 = func_784(6);
	iVar2 = 0;
	while (iVar2 < func_46())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar2]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_575.f_2[iVar2]), false))
		{
			if (uVar0 && !func_877(iVar2, iLocal_518, 31))
			{
				OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_202.f_19.f_5[0 /*13*/].f_2, func_2500());
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_575.f_2[iVar2]), false, true);
				OBJECT::SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Local_202.f_19.f_5[0 /*13*/].f_2, true);
				func_145(6);
				bVar1 = true;
			}
			else
			{
				if (bVar1)
				{
					OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_202.f_19.f_5[0 /*13*/].f_2, -1);
					func_866(6);
					bVar1 = false;
				}
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_575.f_2[iVar2]), true, true);
				if (func_877(iVar2, iLocal_518, 1) && func_495(iVar2))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_2[iVar2]))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_575.f_2[iVar2]), true, true);
					}
				}
			}
		}
		iVar2++;
	}
}

int func_2500()//Position - 0xC2B17
{
	if (Local_210.f_114.f_41 != 0)
	{
		Call_Loc(Local_210.f_114.f_41);
		return StackVal;
	}
	return 1;
}

void func_2501()//Position - 0xC2B36
{
	if ((!func_784(31) && bLocal_522) && func_540() == 0)
	{
		func_2502();
		func_145(31);
	}
}

void func_2502()//Position - 0xC2B65
{
	Local_494.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_0__.func_371();
	__LIB_0__.func_371();
}

void func_2505()//Position - 0xC2B8E
{
	func_2508();
	func_2507();
	func_2506();
}

void func_2506()//Position - 0xC2BA2
{
	Local_498.f_11 = __LIB_19__.func_481(iLocal_514, Local_575.f_260);
}

void func_2507()//Position - 0xC2BBE
{
	func_1750(24);
}

void func_2508()//Position - 0xC2BCC
{
	if (Local_488.f_0 > Local_488.f_1)
	{
		Local_488.f_1 = Local_488.f_0;
	}
	Local_488.f_0 = 0;
}

void func_2509()//Position - 0xC2BEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	Var3 = 1;
	Var3.f_1 = 1;
	Var4 = 4;
	Var4.f_1 = 1;
	Var4.f_1.f_2 = 1;
	Var4.f_1.f_2.f_2 = 1;
	Var4.f_1.f_2.f_2.f_2 = 1;
	uVar5 = 1;
	bVar6 = true;
	bVar7 = true;
	iVar1 = iVar1;
	iVar2 = 0;
	while (iVar2 < Local_202.f_19)
	{
		iLocal_545[iVar2] = __LIB_0__.func_160();
		Local_477[iVar2 /*7*/].f_4 = __LIB_0__.func_160();
		func_994(iVar2, 33);
		func_994(iVar2, 12);
		iVar2++;
	}
	func_866(79);
	if (bLocal_512)
	{
		func_16(4);
		func_2557(7);
		func_2557(10);
		func_2557(15);
	}
	if (Local_210.f_3.f_4 != 0)
	{
		Call_Loc(Local_210.f_3.f_4);
	}
	bVar10 = func_2555();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (bLocal_512)
		{
			func_2554(iVar0);
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar9 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar9);
			iVar1 = bVar8;
			if (__LIB_1__.func_264(bVar8, 0, 1))
			{
				func_2553(bVar8, iVar9);
				iVar11 = 0;
				iVar2 = 0;
				while (iVar2 < Local_202.f_19)
				{
					if (func_877(iVar2, iVar9, 1))
					{
						iLocal_545[iVar2] = iVar9;
						iLocal_545[iVar2] = iLocal_545[iVar2];
						Local_477[iVar2 /*7*/].f_4 = bVar8;
						if (iLocal_514 != bVar8)
						{
							if (__LIB_2__.func_457(iLocal_514, bVar8) && !func_41(21))
							{
								func_954(iVar2, 33);
							}
							else
							{
								func_954(iVar2, 12);
							}
						}
						if (!func_877(iVar2, iLocal_518, 14))
						{
							iVar11 = 1;
						}
					}
					iVar2++;
				}
				func_2546(bVar8, iVar11, bVar10, PLAYER::IS_PLAYER_PLAYING(bVar8));
				if (bLocal_512)
				{
					if ((!func_3(1) && func_152(iVar9, 1)) && !func_2544(iVar9))
					{
						func_16(1);
					}
					if (func_152(iVar9, 7))
					{
						func_16(7);
					}
					if (func_152(iVar9, 10))
					{
						func_16(10);
					}
					iVar12 = 0;
					while (iVar12 < Local_202.f_303)
					{
						if (!func_2249(iVar12) && func_2248(iVar12, iVar9))
						{
							func_2543(iVar12);
						}
						iVar12++;
					}
					iVar2 = 0;
					while (iVar2 < Local_202.f_19)
					{
						if (func_877(iVar2, iVar9, 1))
						{
							if (func_152(iVar9, 2))
							{
								__LIB_14__.func_772(iVar2, 23);
							}
							else
							{
								__LIB_14__.func_770(iVar2, 23);
							}
						}
						func_2540(iVar2, iVar0, iVar9);
						func_2538(&Var3, iVar2, iVar9);
						iVar2++;
					}
					func_2535(iVar0, iVar9);
					func_2532(iVar0);
					iVar2 = 0;
					while (iVar2 < Local_202.f_130)
					{
						func_2529(iVar2, iVar0, iVar9);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_202.f_38)
					{
						func_2526(iVar2, iVar0, iVar9);
						func_2524(&Var4, iVar2, iVar9);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_202.f_163)
					{
						func_2521(iVar2, iVar0, iVar9);
						iVar2++;
					}
					if (!func_152(iVar9, 0))
					{
						bVar6 = false;
					}
					if (!func_152(iVar9, 23))
					{
						bVar7 = false;
					}
					if (!func_152(iVar9, 4))
					{
						func_2557(4);
					}
					iVar13 = 0;
					while (iVar13 < Local_202.f_280)
					{
						if (func_2520(iVar0, iVar13))
						{
							__LIB_13__.func_384(&uVar5, iVar13);
						}
						iVar13++;
					}
				}
				if (Local_210.f_3.f_4.f_1 != 0)
				{
					Stack.Push(iVar0);
					Stack.Push(iVar9);
					Call_Loc(Local_210.f_3.f_4.f_1);
				}
			}
		}
		iVar0++;
	}
	if (Local_477.f_9 != iLocal_515)
	{
		bVar14 = Local_477.f_9;
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar14))
		{
			if (!BitTest(Local_477.f_10, Local_477.f_9))
			{
				MISC::SET_BIT(&(Local_477.f_10), Local_477.f_9);
				func_2095(bVar14, __LIB_1__.func_264(bVar14, 1, 1), 1);
			}
		}
		else if (BitTest(Local_477.f_10, Local_477.f_9))
		{
			MISC::CLEAR_BIT(&(Local_477.f_10), Local_477.f_9);
		}
	}
	Local_477.f_9++;
	if (Local_477.f_9 >= 31)
	{
		Local_477.f_9 = 0;
	}
	if (bLocal_512)
	{
		func_2517(&Var3);
		func_2514(&Var4);
		func_2510(&uVar5);
		if (bVar6)
		{
			if (!func_3(0))
			{
				func_16(0);
			}
		}
		else if (func_3(0))
		{
			func_2557(0);
		}
		if (bVar7)
		{
			if (!func_3(20))
			{
				func_16(20);
			}
		}
		Stack.Push(Local_210.f_80.f_1 != 0);
		Stack.Push(NETWORK::NETWORK_GET_NUM_PARTICIPANTS());
		Call_Loc(Local_210.f_80.f_1);
		if (StackVal && StackVal < StackVal)
		{
			func_8(12);
		}
	}
	if (Local_210.f_3.f_4.f_2 != 0)
	{
		Call_Loc(Local_210.f_3.f_4.f_2);
	}
}

void func_2510(var uParam0)//Position - 0xC3051
{
	if (!__LIB_13__.func_381(&(Local_575.f_199), uParam0))
	{
		__LIB_14__.func_369(uParam0, &(Local_575.f_199));
	}
}

void func_2514(var uParam0)//Position - 0xC30F9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (__LIB_2__.func_319(uParam0[iVar0 /*2*/], iVar1))
			{
				__LIB_14__.func_759(iVar0, __LIB_13__.func_382(iVar1));
			}
			else
			{
				__LIB_14__.func_777(iVar0, __LIB_13__.func_382(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_2517(var uParam0)//Position - 0xC3193
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (__LIB_2__.func_319(uParam0[iVar0 /*2*/], iVar1))
			{
				__LIB_14__.func_772(iVar0, __LIB_13__.func_383(iVar1));
			}
			else
			{
				__LIB_14__.func_770(iVar0, __LIB_13__.func_383(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_2520(int iParam0, int iParam1)//Position - 0xC3224
{
	return __LIB_2__.func_319(&(Local_582[iParam0 /*62*/].f_44), iParam1);
}

void func_2521(int iParam0, int iParam1, int iParam2)//Position - 0xC323B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_13__.func_385(iVar1);
		if (iVar2 != 13)
		{
			if (func_2375(iParam0, iParam2, iVar1))
			{
				func_2522(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2522(int iParam0, int iParam1, var uParam2)//Position - 0xC3280
{
	if (!func_187(iParam1, iParam0))
	{
		func_185(iParam1, iParam0);
	}
}

void func_2524(var uParam0, int iParam1, int iParam2)//Position - 0xC32EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_13__.func_386(iVar1);
		if (iVar2 != 17)
		{
			if (!__LIB_2__.func_319(uParam0[iParam1 /*2*/], iVar0) && func_2301(iParam1, iParam2, iVar2))
			{
				__LIB_4__.func_745(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

void func_2526(int iParam0, int iParam1, int iParam2)//Position - 0xC3367
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_13__.func_387(iVar1);
		if (iVar2 != 32)
		{
			if (func_2301(iParam0, iParam2, iVar1))
			{
				__LIB_21__.func_441(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2529(int iParam0, int iParam1, int iParam2)//Position - 0xC346F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_13__.func_388(iVar1);
		if (iVar2 != 25)
		{
			if (func_2445(iParam0, iParam2, iVar1))
			{
				__LIB_21__.func_442(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2532(int iParam0)//Position - 0xC3562
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		iVar2 = func_2534(iVar1);
		if (iVar2 != 11)
		{
			func_2533(iVar1, iVar2, iParam0);
		}
		iVar0++;
	}
}

void func_2533(int iParam0, int iParam1, int iParam2)//Position - 0xC359A
{
	if (!func_595(iParam1))
	{
		if (func_599(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2), iParam0))
		{
			func_651(iParam1);
		}
	}
}

int func_2534(int iParam0)//Position - 0xC35C1
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 11:
			return 9;
		default:
	}
	return 11;
}

void func_2535(int iParam0, int iParam1)//Position - 0xC3638
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = iVar0;
		if (func_152(iParam1, iVar1))
		{
			iVar2 = __LIB_13__.func_389(iVar1);
			if (iVar2 != 23)
			{
				func_2536(iVar2, iParam0);
			}
		}
		iVar0++;
	}
}

void func_2536(int iParam0, var uParam1)//Position - 0xC3679
{
	if (!func_3(iParam0))
	{
		func_16(iParam0);
	}
}

void func_2538(var uParam0, int iParam1, int iParam2)//Position - 0xC36CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_13__.func_390(iVar1);
		if (iVar2 != 48)
		{
			if (!__LIB_2__.func_319(uParam0[iParam1 /*2*/], iVar0) && func_877(iParam1, iParam2, iVar2))
			{
				__LIB_4__.func_745(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

void func_2540(int iParam0, int iParam1, int iParam2)//Position - 0xC3741
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_13__.func_391(iVar1);
		if (iVar2 != 49)
		{
			if (func_877(iParam0, iParam2, iVar1))
			{
				if (iVar2 == 32)
				{
					func_16(12);
				}
				func_2541(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2541(int iParam0, int iParam1, var uParam2)//Position - 0xC3793
{
	if (!__LIB_14__.func_763(iParam1, iParam0))
	{
		__LIB_14__.func_772(iParam1, iParam0);
	}
}

void func_2543(int iParam0)//Position - 0xC391B
{
	__LIB_4__.func_745(&(Local_575.f_234), iParam0);
}

int func_2544(int iParam0)//Position - 0xC392E
{
	int iVar0;
	int iVar1;
	iVar0 = func_2545(iParam0);
	iVar1 = 0;
	while (iVar1 < Local_215[iVar0 /*21*/].f_19)
	{
		if (Local_215[iVar0 /*21*/].f_1[iVar1 /*3*/].f_2 == func_22())
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

var func_2545(int iParam0)//Position - 0xC3973
{
	return Local_582[iParam0 /*62*/];
}

void func_2546(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xC3982
{
	if (iParam1 && func_2552(bParam0, bParam2, bParam3))
	{
		func_2547(bParam0, bParam3, !__LIB_2__.func_457(iLocal_514, bParam0));
	}
	else
	{
		func_2095(bParam0, bParam3, 0);
	}
}

void func_2547(bool bParam0, bool bParam1, bool bParam2)//Position - 0xC39BC
{
	int iVar0;
	iVar0 = func_1743(bParam0);
	if (!BitTest(Local_477.f_8, bParam0))
	{
		if (bParam0 != __LIB_0__.func_160())
		{
			if (bParam1)
			{
				if (__LIB_13__.func_352(func_970(iVar0)))
				{
					__LIB_21__.func_122(bParam0, 0, 1);
					__LIB_2__.func_314(bParam0, 1);
					if (!__LIB_13__.func_304(bParam0))
					{
						__LIB_20__.func_361(bParam0, 1, 1, 1);
					}
					__LIB_19__.func_770(bParam0, func_970(iVar0), 1, 1);
					__LIB_21__.func_116(bParam0, func_2549(iVar0), 1, 1);
					__LIB_21__.func_85(bParam0, func_959(iVar0, 0), 1, 0);
					if (__LIB_13__.func_368(bParam0))
					{
						if (!__LIB_21__.func_84(bParam0))
						{
							__LIB_21__.func_117(bParam0, 1, 1);
						}
					}
					__LIB_26__.func_791(bParam0, 0, 1);
					MISC::SET_BIT(&(Local_477.f_8), bParam0);
				}
			}
		}
	}
	else if (__LIB_13__.func_392(bParam0) != func_970(iVar0))
	{
		__LIB_19__.func_770(bParam0, func_970(iVar0), 1, 1);
		__LIB_21__.func_116(bParam0, func_2549(iVar0), 1, 1);
		__LIB_21__.func_85(bParam0, func_959(iVar0, 0), 1, 0);
	}
}

float func_2549(int iParam0)//Position - 0xC3ABE
{
	if (Local_210.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

int func_2552(int iParam0, bool bParam1, bool bParam2)//Position - 0xC3B41
{
	if (!bParam1)
	{
		return 0;
	}
	if (iParam0 == iLocal_514)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

void func_2553(int iParam0, int iParam1)//Position - 0xC3B6A
{
	if (iLocal_514 == iParam0)
	{
		return;
	}
	if ((func_152(iParam1, 27) && ENTITY::DOES_ENTITY_EXIST(iLocal_520)) && PLAYER::GET_PLAYER_PED(iParam0) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_520, -1, false))
	{
		func_145(79);
	}
}

void func_2554(int iParam0)//Position - 0xC3BAF
{
	int iVar0;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		if (Local_582[iParam0 /*62*/].f_53 != -1 && !func_2234(Local_582[iParam0 /*62*/].f_53))
		{
			Local_575.f_231[Local_582[iParam0 /*62*/].f_53] = iParam0;
		}
	}
	else if (Local_582[iParam0 /*62*/].f_53 != -1 && Local_575.f_231[Local_582[iParam0 /*62*/].f_53] == iParam0)
	{
		Local_575.f_231[Local_582[iParam0 /*62*/].f_53] = -1;
	}
	if (iParam0 == (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_2234(iVar0) && Local_582[Local_575.f_231[iVar0] /*62*/].f_53 == -1)
			{
				Local_575.f_231[iVar0] = -1;
			}
			iVar0++;
		}
	}
}

int func_2555()//Position - 0xC3C78
{
	if (!__LIB_13__.func_305())
	{
		return 0;
	}
	if (!func_784(7))
	{
		return 0;
	}
	if (func_2806() > 2)
	{
		return 0;
	}
	if (func_480() == 1)
	{
		return 0;
	}
	return 1;
}

void func_2557(int iParam0)//Position - 0xC3CC1
{
	if (__LIB_11__.func_631(&(Local_575.f_215), iParam0))
	{
	}
}

void func_2558(int iParam0)//Position - 0xC3CD7
{
	Local_582[iLocal_517 /*62*/].f_42 = iParam0;
}

int func_2559()//Position - 0xC3CEB
{
	bool bVar0;
	if (!func_557())
	{
		return 0;
	}
	func_2775();
	func_2746();
	func_2587();
	__LIB_0__.func_371();
	__LIB_0__.func_371(1);
	func_2581();
	if (!func_2580())
	{
		return 0;
	}
	__LIB_0__.func_371();
	func_2565(1);
	func_2564();
	if (!__LIB_0__.func_109())
	{
		return 0;
	}
	Call_Loc(Local_210.f_2);
	bVar0 = StackVal;
	if (!bVar0)
	{
		return 0;
	}
	func_2561();
	func_2560();
	return 1;
}

void func_2560()//Position - 0xC3D58
{
	Global_1943929.f_2 = Local_575.f_217;
	Global_1943929.f_3 = Local_575.f_218;
}

void func_2561()//Position - 0xC3D76
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = iVar2;
	__LIB_13__.func_339(iLocal_525, 6, "iNumModeStates", "MAX_NUM_STATES");
	__LIB_13__.func_339(iLocal_526, 6, "iNumClientModeStates", "MAX_NUM_CLIENT_STATES");
	iVar0 = 0;
	while (iVar0 < iLocal_525)
	{
		__LIB_13__.func_339(Local_214[iVar0 /*20*/].f_19, 5, "sModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_526)
	{
		__LIB_13__.func_339(Local_215[iVar0 /*21*/].f_19, 5, "sClientModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_13__.func_339(Local_216.f_80[iVar0 /*97*/], 5, "sPedLocal.sBehaviour[iLoop].iNumTasks", "MAX_NUM_PED_TASKS");
		iVar1 = 0;
		while (iVar1 < Local_216.f_80[iVar0 /*97*/])
		{
			__LIB_13__.func_339(Local_216.f_80[iVar0 /*97*/].f_1[iVar1 /*19*/].f_18, 6, "sPedLocal.sBehaviour[iLoop].Task[iLoop2].iNumTransitions", "MAX_NUM_PED_TASK_TRANSITIONS");
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		__LIB_13__.func_339(Local_216[iVar0 /*19*/].f_16, 5, "sPedLocal.sPed[iLoop].iNumTriggers", "MAX_NUM_PED_TRIGGERS");
		iVar0++;
	}
	iVar2 = func_2562();
	__LIB_13__.func_339(iVar2, 4, "GET_NUM_HELP_TEXTS()", "MAX_NUM_HELP_TEXTS");
}

int func_2562()//Position - 0xC3E96
{
	int iVar0;
	if (Local_210.f_554 == 0)
	{
		return 0;
	}
	Stack.Push(iVar0);
	Call_Loc(Local_210.f_554);
	while (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		iVar0++;
	}
	return iVar0;
}

void func_2564()//Position - 0xC3ED1
{
	func_145(7);
}

void func_2565(bool bParam0)//Position - 0xC3EDE
{
	if (func_784(52) == bParam0)
	{
		return;
	}
	if (func_41(1))
	{
		if (bParam0)
		{
			__LIB_9__.func_32(8);
		}
		else
		{
			__LIB_9__.func_40(8);
		}
	}
	if (func_41(2))
	{
		if (bParam0)
		{
			__LIB_1__.func_468();
		}
		else
		{
			__LIB_1__.func_532();
		}
	}
	if (func_41(34))
	{
		if (bParam0)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		else
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
		}
	}
	if (func_41(3))
	{
		__LIB_13__.func_396(bParam0);
	}
	if (func_41(4))
	{
		func_2572(bParam0);
		__LIB_13__.func_395(bParam0);
	}
	if (func_41(5))
	{
		if (bParam0)
		{
			__LIB_11__.func_646(2);
		}
		else
		{
			__LIB_11__.func_648(2);
		}
	}
	if (func_41(6))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_516, 432, bParam0);
	}
	__LIB_13__.func_394(!bParam0);
	func_2567(bParam0);
	if (Local_210.f_14 != 0)
	{
		Stack.Push(bParam0);
		Call_Loc(Local_210.f_14);
	}
	if (bParam0)
	{
		__LIB_13__.func_393(7);
		func_145(52);
	}
	else
	{
		__LIB_13__.func_358(7);
		func_866(52);
	}
}

void func_2567(bool bParam0)//Position - 0xC3FF4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_575.f_2[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_575.f_2[iVar0], true);
				}
			}
			else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_575.f_2[iVar0]))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_575.f_2[iVar0], false);
			}
		}
		iVar0++;
	}
}

void func_2572(bool bParam0)//Position - 0xC40B7
{
	Global_31967 = bParam0;
	if (bParam0)
	{
		__LIB_0__.func_387(7, iLocal_516, 0);
		__LIB_0__.func_387(8, iLocal_516, 0);
		__LIB_0__.func_387(20, iLocal_516, 0);
		__LIB_0__.func_387(21, iLocal_516, 0);
	}
}

int func_2580()//Position - 0xC4405
{
	int iVar0;
	if (func_784(53) || Local_210.f_563.f_4 == 0)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_498.f_1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_563.f_4);
		Local_498.f_1[iVar0 /*4*/] = StackVal;
		iVar0++;
	}
	Local_498.f_0 = iVar0;
	func_145(53);
	return 1;
}

void func_2581()//Position - 0xC4460
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (func_784(51))
	{
		return;
	}
	iVar0 = func_2584();
	iVar1 = func_2583();
	iVar2 = func_2582();
	iVar3 = (Local_202.f_38 - iVar0);
	iVar4 = (Local_202.f_130 - iVar1);
	iVar5 = (Local_202.f_163 - iVar2);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar4);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar5);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(iVar0);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(iVar1);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(iVar2);
	func_145(51);
}

int func_2582()//Position - 0xC44CB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_163)
	{
		if (func_176(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2583()//Position - 0xC44F9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_130)
	{
		if (func_226(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2584()//Position - 0xC4527
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		if (func_129(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_2587()//Position - 0xC4565
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_784(50))
	{
		return;
	}
	if (Local_202.f_38 == 0)
	{
		func_145(50);
		return;
	}
	iVar1 = func_2745();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_156);
		func_2593(iVar0);
		iVar0++;
	}
	func_2590(1);
	func_2593(1);
	iVar2 = 0;
	while (iVar2 < Local_202.f_38)
	{
		Stack.Push(iVar2);
		Call_Loc(Local_210.f_156.f_132);
		func_2588(iVar2);
		iVar2++;
	}
	func_145(50);
}

void func_2588(int iParam0)//Position - 0xC45E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < Local_202.f_291)
	{
		if (Local_202.f_291.f_1[iVar0 /*10*/] == iParam0)
		{
			StringCopy(&(Local_505[iVar0 /*4*/]), "miss_", 16);
			StringIntConCat(&(Local_505[iVar0 /*4*/]), Local_524.f_0, 16);
			StringConCat(&(Local_505[iVar0 /*4*/]), "_", 16);
			StringIntConCat(&(Local_505[iVar0 /*4*/]), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), 16);
			StringConCat(&(Local_505[iVar0 /*4*/]), "_", 16);
			StringIntConCat(&(Local_505[iVar0 /*4*/]), iVar0, 16);
			TASK::OPEN_PATROL_ROUTE(&(Local_505[iVar0 /*4*/]));
			while (iVar1 < 1 && !__LIB_0__.func_86(Local_202.f_291.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_1))
			{
				TASK::ADD_PATROL_ROUTE_NODE(iVar1, func_2589(iVar0, iVar1), Local_202.f_291.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_1, Local_202.f_291.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_4, Local_202.f_291.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_7);
				iVar1++;
			}
			iVar3 = iVar1;
			iVar1 = 0;
			while (iVar1 < iVar3)
			{
				iVar2 = iVar1 + 1;
				if (iVar2 >= iVar3)
				{
					iVar2 = 0;
				}
				TASK::ADD_PATROL_ROUTE_LINK(iVar1, iVar2);
				iVar1++;
			}
			TASK::CLOSE_PATROL_ROUTE();
			TASK::CREATE_PATROL_ROUTE();
		}
		iVar0++;
	}
}

char* func_2589(int iParam0, int iParam1)//Position - 0xC471B
{
	int iVar0;
	iVar0 = Local_202.f_291.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/];
	if (iVar0 != -1)
	{
	}
	return "";
}

void func_2590(int iParam0)//Position - 0xC4740
{
	func_2592(iParam0, 0, 6);
	func_2591(iParam0, 0, 2);
	func_2591(iParam0, 0, 1);
	func_2591(iParam0, 0, 3);
	func_2591(iParam0, 0, 4);
	func_2592(iParam0, 2, 7);
	func_2591(iParam0, 2, 0);
	func_2591(iParam0, 2, 1);
	func_2591(iParam0, 2, 3);
	func_2591(iParam0, 2, 4);
	func_2592(iParam0, 1, 16);
	func_2591(iParam0, 1, 0);
	func_2591(iParam0, 1, 2);
	func_2591(iParam0, 1, 3);
	func_2591(iParam0, 1, 4);
	func_2592(iParam0, 3, 13);
	func_2591(iParam0, 3, 0);
	func_2591(iParam0, 3, 2);
	func_2591(iParam0, 3, 1);
	func_2591(iParam0, 3, 4);
	func_2592(iParam0, 4, 15);
	func_2591(iParam0, 4, 0);
	func_2591(iParam0, 4, 2);
	func_2591(iParam0, 4, 1);
	func_2591(iParam0, 4, 3);
}

void func_2591(int iParam0, int iParam1, int iParam2)//Position - 0xC4813
{
	int iVar0;
	var uVar1;
	iVar0 = Local_216.f_80[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18;
	uVar1 = iParam2;
	Local_216.f_80[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/] = uVar1;
	Local_216.f_80[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18++;
}

void func_2592(int iParam0, int iParam1, int iParam2)//Position - 0xC486D
{
	Local_216.f_80[iParam0 /*97*/].f_1[iParam1 /*19*/] = iParam2;
	Local_216.f_80[iParam0 /*97*/]++;
}

void func_2593(int iParam0)//Position - 0xC489A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar3 = Local_216.f_80[iParam0 /*97*/].f_1[iVar0 /*19*/];
		if (iVar3 != -1)
		{
			if (Local_216.f_80[iParam0 /*97*/].f_1[iVar0 /*19*/].f_16 == 0)
			{
				func_2612(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_216.f_80[iParam0 /*97*/].f_1[iVar0 /*19*/].f_18)
			{
				if (Local_216.f_80[iParam0 /*97*/].f_1[iVar0 /*19*/].f_1[iVar1 /*2*/].f_1 == 0)
				{
					iVar2 = Local_216.f_80[iParam0 /*97*/].f_1[iVar0 /*19*/].f_1[iVar1 /*2*/];
					func_2594(iParam0, iVar3, Local_216.f_80[iParam0 /*97*/].f_1[iVar2 /*19*/], &(Local_216.f_80[iParam0 /*97*/].f_1[iVar0 /*19*/].f_1[iVar1 /*2*/].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_2594(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xC496C
{
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 6:
				switch (iParam2)
				{
					case 7:
						*uParam3 = 806772/*func_2610*/;
						break;
					case 13:
						*uParam3 = 806680/*func_2609*/;
						break;
					case 16:
						*uParam3 = 806499/*func_2606*/;
						break;
					case 23:
						*uParam3 = 806406/*func_2605*/;
						break;
					case 15:
						*uParam3 = 806208/*func_2603*/;
						break;
				}
				break;
			case 7:
				switch (iParam2)
				{
					case 6:
						*uParam3 = 806007/*func_2601*/;
						break;
					case 13:
						*uParam3 = 806680/*func_2609*/;
						break;
					case 16:
						*uParam3 = 806499/*func_2606*/;
						break;
					case 23:
						*uParam3 = 806406/*func_2605*/;
						break;
					case 15:
						*uParam3 = 806208/*func_2603*/;
						break;
				}
				break;
			case 13:
				switch (iParam2)
				{
					case 6:
						*uParam3 = 806007/*func_2601*/;
						break;
					case 7:
						*uParam3 = 806772/*func_2610*/;
						break;
					case 16:
						*uParam3 = 806499/*func_2606*/;
						break;
					case 23:
						*uParam3 = 806406/*func_2605*/;
						break;
					case 15:
						*uParam3 = 806208/*func_2603*/;
						break;
				}
				break;
			case 16:
				switch (iParam2)
				{
					case 6:
						*uParam3 = 806007/*func_2601*/;
						break;
					case 7:
						*uParam3 = 806772/*func_2610*/;
						break;
					case 13:
						*uParam3 = 806680/*func_2609*/;
						break;
					case 23:
						*uParam3 = 806406/*func_2605*/;
						break;
					case 15:
						*uParam3 = 806208/*func_2603*/;
						break;
				}
				break;
			case 15:
				switch (iParam2)
				{
					case 6:
						*uParam3 = 806007/*func_2601*/;
						break;
					case 7:
						*uParam3 = 806772/*func_2610*/;
						break;
					case 16:
						*uParam3 = 806499/*func_2606*/;
						break;
					case 23:
						*uParam3 = 806406/*func_2605*/;
						break;
					case 13:
						*uParam3 = 806680/*func_2609*/;
						break;
				}
				break;
		}
		return;
	}
	switch (iParam2)
	{
		case 8:
			*uParam3 = 805966/*func_2600*/;
			break;
		case 21:
			*uParam3 = 805950/*func_2599*/;
			break;
		case 7:
			*uParam3 = 805935/*func_2598*/;
			break;
		case 23:
			*uParam3 = 805920/*func_2597*/;
			break;
		case 2:
			*uParam3 = 805920/*func_2597*/;
			break;
		case 10:
			*uParam3 = 805920/*func_2597*/;
			break;
		case 11:
			*uParam3 = 805920/*func_2597*/;
			break;
	}
	switch (iParam1)
	{
		case 12:
			*uParam3 = 805905/*func_2596*/;
			break;
		case 16:
			*uParam3 = 805890/*func_2595*/;
			break;
	}
}

int func_2597(int iParam0, var uParam1)//Position - 0xC4C20
{
	return func_2322(iParam0, 0);
}

int func_2598(int iParam0, var uParam1)//Position - 0xC4C2F
{
	return func_2322(iParam0, 0);
}

bool func_2600(int iParam0, var uParam1)//Position - 0xC4C4E
{
	return (Local_202.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_202.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

int func_2601(int iParam0, int iParam1)//Position - 0xC4C77
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = func_55(0, iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(func_2602(iVar0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_2602(int iParam0)//Position - 0xC4CA4
{
	bool bVar0;
	int iVar1;
	switch (func_156())
	{
		case 3:
			bVar0 = func_160(iParam0, 0);
			if (bVar0 != -1)
			{
				if (Local_477[bVar0 /*7*/].f_4 != __LIB_0__.func_160())
				{
					return PLAYER::GET_PLAYER_PED(Local_477[bVar0 /*7*/].f_4);
				}
			}
			break;
		case 1:
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(func_157(iParam0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			}
			break;
		case 4:
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(func_157(iParam0)))
			{
				return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_157(iParam0));
			}
			break;
	}
	return -1;
}

int func_2603(int iParam0, int iParam1)//Position - 0xC4D40
{
	int iVar0;
	int iVar1;
	if (func_2604(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		if (func_2606(iParam0, iParam1))
		{
			return 1;
		}
		iVar0 = func_55(0, iParam0);
		iVar1 = func_2602(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar1))
			{
				return 1;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_COMBAT"), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_2604(int iParam0)//Position - 0xC4DC4
{
	return (VEHICLE::IS_THIS_MODEL_A_HELI(Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3));
}

int func_2605(int iParam0, var uParam1)//Position - 0xC4E06
{
	int iVar0;
	if (func_540() != 0)
	{
		return 1;
	}
	if (func_167() != -1f)
	{
		iVar0 = func_55(0, iParam0);
		if ((iVar0 != -1 && Local_575.f_182[iVar0 /*5*/].f_4 != 999999f) && Local_575.f_182[iVar0 /*5*/].f_4 < func_167())
		{
			return 1;
		}
	}
	return 0;
}

int func_2606(int iParam0, int iParam1)//Position - 0xC4E63
{
	int iVar0;
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_9 == -1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar0 = func_55(0, iParam0);
			if (func_2608(iVar0) > func_2607(iParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(func_2602(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_2607(int iParam0)//Position - 0xC4EB1
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
	{
		return 100f;
	}
	return 30f;
}

float func_2608(int iParam0)//Position - 0xC4EE3
{
	if (iParam0 != -1)
	{
		if (Local_575.f_182[iParam0 /*5*/].f_3 != 999999f)
		{
			return Local_575.f_182[iParam0 /*5*/].f_3;
		}
	}
	return 999999f;
}

int func_2609(int iParam0, int iParam1)//Position - 0xC4F18
{
	int iVar0;
	int iVar1;
	if (func_2604(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = func_55(0, iParam0);
		if (func_2608(iVar0) < 10f)
		{
			iVar1 = func_2602(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || !PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_2610(int iParam0, int iParam1)//Position - 0xC4F74
{
	int iVar0;
	iVar0 = func_55(0, iParam0);
	if (func_2608(iVar0) < func_2607(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_2602(iVar0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
			{
				return 1;
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2612(int iParam0, int iParam1, int iParam2)//Position - 0xC5009
{
	int iVar0;
	int iVar1;
	switch (iParam2)
	{
		case 8:
			iVar0 = 820469/*func_2742*/;
			break;
		case 10:
			iVar0 = 820369/*func_2741*/;
			break;
		case 11:
			iVar0 = 820322/*func_2740*/;
			break;
		case 15:
			iVar0 = 819884/*func_2738*/;
			break;
		case 13:
			iVar0 = 819735/*func_2735*/;
			break;
		case 14:
			iVar0 = 819649/*func_2734*/;
			break;
		case 9:
			iVar0 = 819483/*func_2733*/;
			break;
		case 7:
			iVar0 = 819386/*func_2732*/;
			break;
		case 18:
			iVar0 = 819303/*func_2731*/;
			break;
		case 19:
			iVar0 = 819194/*func_2730*/;
			break;
		case 20:
			iVar0 = 819074/*func_2729*/;
			break;
		case 12:
			iVar0 = 816862/*func_2708*/;
			iVar1 = 816176/*func_2701*/;
			break;
		case 6:
			iVar0 = 815663/*func_2695*/;
			break;
		case 26:
			iVar0 = 815454/*func_2693*/;
			break;
		case 28:
			iVar0 = 815035/*func_2688*/;
			break;
		case 38:
			iVar0 = 814934/*func_2686*/;
			break;
		case 21:
			iVar0 = 814449/*func_2679*/;
			iVar1 = 814032/*func_2677*/;
			break;
		case 40:
			iVar0 = 813784/*func_2672*/;
			break;
		case 23:
			iVar0 = 174882/*func_835*/;
			break;
		case 1:
			iVar0 = 813439/*func_2668*/;
			break;
		case 2:
			iVar0 = 812876/*func_2663*/;
			break;
		case 39:
			iVar0 = 812268/*func_2658*/;
			break;
		case 16:
			iVar0 = 811404/*func_2650*/;
			iVar1 = 810950/*func_2643*/;
			break;
		case 29:
			iVar0 = 810520/*func_2641*/;
			break;
		case 34:
			iVar0 = 810503/*func_2640*/;
			break;
		case 35:
			iVar0 = 810036/*func_2638*/;
			break;
		case 32:
			iVar0 = 809593/*func_2633*/;
			break;
		case 41:
			iVar0 = 808416/*func_2627*/;
			break;
		case 42:
			iVar0 = 808212/*func_2624*/;
			break;
		case 43:
			iVar0 = 807754/*func_2617*/;
			break;
		case 44:
			iVar0 = 807483/*func_2614*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2613(iParam0, iParam1, iVar0, iVar1);
	}
}

void func_2613(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC520D
{
	Local_216.f_80[iParam0 /*97*/].f_1[iParam1 /*19*/].f_16 = iParam2;
	Local_216.f_80[iParam0 /*97*/].f_1[iParam1 /*19*/].f_17 = iParam3;
}

void func_2614(int iParam0, int iParam1)//Position - 0xC523B
{
	int iVar0;
	struct<3> Var1;
	iVar0 = func_2616(iParam0, iParam1);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(iVar0), false))
		{
			if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar0)) != 21)
			{
				if (PED::IS_PED_IN_ANY_PLANE(iParam1))
				{
					if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
					{
						if (Local_210.f_156.f_2.f_52.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_210.f_156.f_2.f_52.f_1);
						}
						Var1 = { func_2615(iParam0, iParam1) };
						TASK::TASK_PLANE_MISSION(iParam1, NETWORK::NET_TO_VEH(iVar0), 0, 0, Var1, 21, 50f, 0f, -1f, 0f, 0f, true);
					}
				}
			}
		}
	}
}

Vector3 func_2615(int iParam0, int iParam1)//Position - 0xC52D4
{
	if (Local_210.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_2616(int iParam0, int iParam1)//Position - 0xC52FF
{
	int iVar0;
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
		return NETWORK::VEH_TO_NET(iVar0);
	}
	return 0;
}

void func_2617(int iParam0, int iParam1)//Position - 0xC534A
{
	struct<3> Var0;
	if (!__LIB_14__.func_760(iParam0, 28) && !func_2301(iParam0, iLocal_518, 16))
	{
		Var0 = { func_2622(iParam0, iParam1) };
		if (!__LIB_0__.func_86(Var0))
		{
			if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				if (func_2621(iParam0) != -1f && __LIB_0__.func_529(iParam1, Var0, 1) > func_2621(iParam0))
				{
					if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var0, 2f, 20000, func_2621(iParam0), 4, 40000f);
					}
				}
				else if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_THROW_PROJECTILE"), 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam1, func_2620(iParam0), func_2619(iParam0), true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam1, func_2620(iParam0), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
					TASK::TASK_THROW_PROJECTILE(iParam1, Var0, 0, true);
					if (func_2618(iParam0))
					{
						func_2296(iParam0, 16);
					}
				}
			}
		}
	}
}

int func_2618(int iParam0)//Position - 0xC543B
{
	if (Local_210.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_2619(int iParam0)//Position - 0xC5464
{
	if (Local_210.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_2620(int iParam0)//Position - 0xC548D
{
	if (Local_210.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_2621(int iParam0)//Position - 0xC54B6
{
	if (Local_210.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

Vector3 func_2622(int iParam0, var uParam1)//Position - 0xC54DF
{
	if (Local_210.f_156.f_2.f_125 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_210.f_156.f_2.f_125);
		return StackVal, StackVal, StackVal;
	}
	return __LIB_2__.func_364();
}

void func_2624(int iParam0, int iParam1)//Position - 0xC5514
{
	struct<3> Var0;
	float fVar1;
	if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_STAY_IN_COVER"), 1) && !PED::IS_PED_IN_COVER(iParam1, false))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, 0, 0);
			}
			else
			{
				Var0 = { func_2626(iParam0, iParam1) };
				fVar1 = func_2625(iParam0, iParam1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Var0, fVar1, false, false);
				TASK::TASK_STAY_IN_COVER(iParam1);
			}
		}
	}
}

float func_2625(int iParam0, int iParam1)//Position - 0xC5588
{
	if (Local_210.f_156.f_2.f_123.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_123.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_2626(int iParam0, int iParam1)//Position - 0xC55B3
{
	if (Local_210.f_156.f_2.f_123 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_123);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, false);
}

void func_2627(int iParam0, int iParam1)//Position - 0xC55E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	if (Local_210.f_156.f_2.f_106 == 0)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_106);
		iVar1 = StackVal;
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iVar1)
		{
			if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				iVar2 = 0;
				iVar3 = 0;
				if (Local_210.f_156.f_2.f_106.f_1 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_106.f_1);
					iVar5 = StackVal;
					if (ENTITY::IS_ENTITY_A_PED(iVar5))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
						Var4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false) };
					}
					else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar5))
					{
						iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar5);
						Var4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
					}
				}
				if (iVar2 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, func_2632(iParam0, iVar1), func_2631(iParam0, iVar1), -1f, func_2630(iParam0, iVar1), func_2630(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, func_2632(iParam0, iVar1), func_2631(iParam0, iVar1), -1f, func_2630(iParam0, iVar1), func_2630(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, iVar1, func_2632(iParam0, iVar1), func_2629(iParam0, iVar1), func_2631(iParam0, iVar1), func_2628(iParam0, iVar1), true);
					}
				}
				else if (iVar3 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, func_2632(iParam0, iVar1), func_2631(iParam0, iVar1), -1f, func_2630(iParam0, iVar1), func_2630(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, func_2632(iParam0, iVar1), func_2631(iParam0, iVar1), -1f, func_2630(iParam0, iVar1), func_2630(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, iVar3, iVar1, func_2632(iParam0, iVar1), func_2629(iParam0, iVar1), func_2631(iParam0, iVar1), func_2628(iParam0, iVar1), true);
					}
				}
				else if (Local_210.f_156.f_2.f_106.f_2 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_106.f_2);
						TASK::TASK_PLANE_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, func_2632(iParam0, iVar1), func_2631(iParam0, iVar1), -1f, func_2630(iParam0, iVar1), func_2630(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_106.f_2);
						TASK::TASK_HELI_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, func_2632(iParam0, iVar1), func_2631(iParam0, iVar1), -1f, func_2630(iParam0, iVar1), func_2630(iParam0, iVar1), -1f, 128);
					}
					else
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_106.f_2);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, func_2632(iParam0, iVar1), func_2629(iParam0, iVar1), func_2631(iParam0, iVar1), func_2628(iParam0, iVar1), true);
					}
				}
				else
				{
					return;
				}
			}
		}
	}
}

float func_2628(int iParam0, int iParam1)//Position - 0xC5914
{
	if (Local_210.f_156.f_2.f_106.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_106.f_4);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 1f;
		case 4:
			return 10f;
		default:
	}
	return 1f;
}

int func_2629(int iParam0, int iParam1)//Position - 0xC595E
{
	if (Local_210.f_156.f_2.f_106.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_106.f_3);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 786469;
		case 4:
			return 262144;
		default:
	}
	return 786469;
}

int func_2630(int iParam0, int iParam1)//Position - 0xC59AD
{
	if (Local_210.f_156.f_2.f_106.f_7 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_106.f_7);
		return StackVal;
	}
	return 100;
}

float func_2631(int iParam0, int iParam1)//Position - 0xC59D9
{
	if (Local_210.f_156.f_2.f_106.f_5 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_106.f_5);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 5f;
		case 4:
			return 0.1f;
		default:
	}
	return 10f;
}

float func_2632(int iParam0, int iParam1)//Position - 0xC5A27
{
	if (Local_210.f_156.f_2.f_106.f_6 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_106.f_6);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 30f;
		case 4:
			return 30f;
		default:
	}
	return 30f;
}

void func_2633(int iParam0, int iParam1)//Position - 0xC5A79
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 19)
		{
			if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				Var1 = { func_2637(iParam0, iVar0) };
				fVar2 = func_2636(iParam0);
				TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 19, 30f, fVar2, func_2635(iParam0), 10, 10, -1f, 8225);
			}
		}
		else if (func_2634(iParam0) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 19)
		{
			if (__LIB_6__.func_924(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				VEHICLE::SET_SHORT_SLOWDOWN_FOR_LANDING(iVar0);
				VEHICLE::SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(iVar0, true);
			}
		}
	}
}

int func_2634(int iParam0)//Position - 0xC5B60
{
	if (Local_210.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_2635(int iParam0)//Position - 0xC5B89
{
	if (Local_210.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_2636(int iParam0)//Position - 0xC5BB2
{
	if (Local_210.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_2637(int iParam0, int iParam1)//Position - 0xC5BDF
{
	struct<3> Var0;
	float fVar1;
	if (Local_210.f_156.f_2.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_102);
		return StackVal, StackVal, StackVal;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
	{
		fVar1 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1);
	}
	Var0.f_2 = fVar1;
	return Var0;
}

void func_2638(int iParam0, int iParam1)//Position - 0xC5C34
{
	func_2639(iParam0, iParam1, 1);
}

void func_2639(int iParam0, int iParam1, bool bParam2)//Position - 0xC5C45
{
	int iVar0;
	if (!((__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_WANDER_STANDARD"), 1) || __LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_WANDER_IN_AREA"), 1)) || __LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_WANDER_SPECIFIC"), 1)))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			if (bParam2)
			{
				iVar0 = joaat("SCRIPT_TASK_WANDER_SPECIFIC");
			}
			else
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2.f_114);
				iVar0 = StackVal;
			}
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_WANDER_STANDARD"):
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_114.f_1);
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_114.f_2);
					TASK::TASK_WANDER_STANDARD(StackVal, StackVal, StackVal);
					break;
				case joaat("SCRIPT_TASK_WANDER_IN_AREA"):
					Stack.Push((Local_210.f_156.f_2.f_114.f_3 != 0 && Local_210.f_156.f_2.f_114.f_4 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_114.f_3);
					Stack.Push((StackVal && !__LIB_0__.func_86(StackVal, StackVal, StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_114.f_4);
					if (StackVal && StackVal > 0f)
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_4);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_5);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_6);
						TASK::TASK_WANDER_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
					}
					break;
				case joaat("SCRIPT_TASK_WANDER_SPECIFIC"):
					Stack.Push((Local_210.f_156.f_2.f_114.f_7 != 0 && Local_210.f_156.f_2.f_114.f_8 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_114.f_7);
					Stack.Push((StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_114.f_8);
					if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_7);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_8);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_114.f_1);
						TASK::TASK_WANDER_SPECIFIC(StackVal, StackVal, StackVal, StackVal);
					}
					break;
				}
			}
	}
}

void func_2640(int iParam0, int iParam1)//Position - 0xC5E07
{
	func_2639(iParam0, iParam1, 0);
}

void func_2641(int iParam0, int iParam1)//Position - 0xC5E18
{
	int iVar0;
	struct<3> Var1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 4)
		{
			if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				Var1 = { func_2642(iParam0) };
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
				{
					TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, 0, Var1, 4, 20f, 786469, 10f, 268);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
				{
					TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 4, 20f, 1f, -1f, SYSTEM::CEIL(Var1.f_2), 10, -1f, 128);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, iVar0, Var1, 4, 20f, 786469, 10f, 1f, false);
				}
			}
		}
	}
}

Vector3 func_2642(int iParam0)//Position - 0xC5F2F
{
	struct<3> Var0;
	Var0 = { Local_202.f_130.f_1[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			Var0 = { Var0 + Vector(0f, 0f, 1000f) };
			break;
		case 1:
			Var0 = { Var0 - Vector(0f, 0f, 1000f) };
			break;
		case 2:
			Var0 = { Var0 + Vector(0f, 1000f, 0f) };
			break;
		case 3:
			Var0 = { Var0 - Vector(0f, 1000f, 0f) };
			break;
	}
	return Var0;
}

void func_2643(int iParam0, int iParam1)//Position - 0xC5FC6
{
	struct<3> Var0;
	float fVar1;
	Var0 = { func_2648(iParam0, -1) };
	fVar1 = __LIB_0__.func_529(iParam1, Var0, func_2647(iParam0, Local_575.f_22[iParam0 /*24*/].f_5));
	if (fVar1 <= func_2645(iParam0))
	{
		Local_575.f_22[iParam0 /*24*/].f_5++;
		if (Local_575.f_22[iParam0 /*24*/].f_5 >= func_2644(iParam0))
		{
			Local_575.f_22[iParam0 /*24*/].f_5 = 0;
			__LIB_14__.func_759(iParam0, 5);
			func_16(3);
		}
	}
}

int func_2644(int iParam0)//Position - 0xC6046
{
	if (Local_210.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

float func_2645(int iParam0)//Position - 0xC606F
{
	if (Local_210.f_156.f_2.f_91.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_3);
		return StackVal;
	}
	return (func_2646(iParam0) + 2.5f);
}

float func_2646(int iParam0)//Position - 0xC60A3
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 10f;
	}
	if (Local_210.f_156.f_2.f_91.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_2);
		return StackVal;
	}
	return 10f;
}

int func_2647(int iParam0, var uParam1)//Position - 0xC60E3
{
	if (Local_210.f_156.f_2.f_91.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_210.f_156.f_2.f_91.f_10);
		return StackVal;
	}
	return 0;
}

Vector3 func_2648(int iParam0, int iParam1)//Position - 0xC610E
{
	int iVar0;
	int iVar1;
	if (__LIB_14__.func_760(iParam0, 19))
	{
		iVar0 = func_2649(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, false);
		}
	}
	if (Local_210.f_156.f_2.f_91 != 0)
	{
		iVar1 = Local_575.f_22[iParam0 /*24*/].f_5;
		if (iParam1 != -1)
		{
			iVar1 = iParam1;
		}
		Stack.Push(iParam0);
		Stack.Push(iVar1);
		Call_Loc(Local_210.f_156.f_2.f_91);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_2649(int iParam0)//Position - 0xC6174
{
	return func_158(func_160(func_55(0, iParam0), 0));
}

void func_2650(int iParam0, int iParam1)//Position - 0xC618C
{
	struct<3> Var0;
	if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		if (__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED"), 1))
		{
			if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5 && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iParam1))
			{
				TASK::CLEAR_PED_TASKS(iParam1);
			}
		}
		else
		{
			if (Local_575.f_22[iParam0 /*24*/].f_6 == -1)
			{
				TASK::CLEAR_PED_TASKS(iParam1);
			}
			if (__LIB_14__.func_760(iParam0, 19))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
			}
			Var0 = { func_2648(iParam0, -1) };
			TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var0, func_2657(iParam0), func_2656(iParam0), true, func_2655(iParam0), 50f, func_2654(iParam0), 10f, func_2653(iParam0), func_2652(iParam0), func_2646(iParam0));
			if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
			{
				func_2651(Local_575.f_22[iParam0 /*24*/].f_5, iParam0);
			}
		}
	}
}

void func_2651(var uParam0, int iParam1)//Position - 0xC627D
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 177099551;
	Var0.f_1 = iLocal_514;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	Var0.f_5 = Local_524.f_0;
	Var0.f_6 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	iVar1 = __LIB_4__.func_511(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

float func_2652(int iParam0)//Position - 0xC62D0
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 100f;
	}
	if (Local_210.f_156.f_2.f_91.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_9);
		return StackVal;
	}
	return 20f;
}

int func_2653(int iParam0)//Position - 0xC6310
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 25;
	}
	if (Local_210.f_156.f_2.f_91.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_8);
		return StackVal;
	}
	return 25;
}

float func_2654(int iParam0)//Position - 0xC634A
{
	if (Local_210.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

int func_2655(int iParam0)//Position - 0xC6373
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 1076642364;
	}
	if (Local_210.f_156.f_2.f_91.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_6);
		return StackVal;
	}
	return 1076642364;
}

int func_2656(int iParam0)//Position - 0xC63B3
{
	if (__LIB_14__.func_760(iParam0, 19) && Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	if (Local_210.f_156.f_2.f_91.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_5);
		return StackVal;
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return 0;
}

float func_2657(int iParam0)//Position - 0xC64B4
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 2f;
	}
	if (Local_210.f_156.f_2.f_91.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_91.f_4);
		return StackVal;
	}
	return 2f;
}

void func_2658(int iParam0, int iParam1)//Position - 0xC64EC
{
	if (!PED::IS_PED_IN_GROUP(iParam1))
	{
		if (func_2661(iParam0, iParam1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1);
				if (Local_210.f_156.f_2.f_85.f_3 != 0)
				{
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_85.f_3);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(StackVal, StackVal);
				}
				PED::SET_PED_CONFIG_FLAG(iParam1, 268, true);
				PED::SET_PED_AS_GROUP_MEMBER(iParam1, iLocal_493);
				PED::SET_GROUP_FORMATION_SPACING(iLocal_493, 2f, 0f, 0f);
				PED::SET_GROUP_SEPARATION_RANGE(iLocal_493, 36f);
				if (Local_210.f_156.f_2.f_85.f_4 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_85.f_4);
				}
			}
		}
		else if (Local_210.f_156.f_2.f_85.f_1 != 0)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2.f_85.f_1);
				switch (StackVal)
				{
					case 1:
						func_2742(iParam0, iParam1);
						break;
					case 2:
						func_2733(iParam0, iParam1);
						break;
					}
				}
		}
	}
	else if (PED::IS_PED_GROUP_MEMBER(iParam1, iLocal_493))
	{
		Stack.Push((__LIB_0__.func_76(iLocal_516, iParam1, 1) > __LIB_13__.func_320(iParam0) || !bLocal_511));
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_85);
		if (StackVal || !StackVal)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::REMOVE_PED_FROM_GROUP(iParam1);
				if (Local_210.f_156.f_2.f_85.f_5 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_210.f_156.f_2.f_85.f_5);
				}
			}
		}
	}
}

int func_2661(var uParam0, int iParam1)//Position - 0xC66C8
{
	var uVar0;
	int iVar1;
	if (!bLocal_511)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_210.f_156.f_2.f_85);
	if (!StackVal)
	{
		return 0;
	}
	PED::GET_GROUP_SIZE(iLocal_493, &uVar0, &iVar1);
	if (iVar1 > 0)
	{
		return 0;
	}
	if (__LIB_0__.func_76(iLocal_516, iParam1, 1) > func_2662(uParam0))
	{
		return 0;
	}
	return 1;
}

float func_2662(var uParam0)//Position - 0xC671F
{
	if (Local_210.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

void func_2663(int iParam0, int iParam1)//Position - 0xC674C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		if (Local_210.f_156.f_2.f_79 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_2.f_79);
			iVar0 = StackVal;
			iVar1 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam1);
			iVar1 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 8)
					{
						iVar2 = iLocal_516;
						if (Local_210.f_156.f_2.f_79.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_210.f_156.f_2.f_79.f_1);
							iVar2 = StackVal;
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_2667(iParam0, 0), 10f, -1f, SYSTEM::ROUND(func_2666(iParam0)), func_2665(iParam0), -1f, 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							VEHICLE::SET_BOAT_ANCHOR(iVar0, false);
							TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_2667(iParam0, 1), 786469, -1f, 111);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, 8, func_2667(iParam0, 0), func_2664(iParam0), 1000f, 1000f, true);
						}
					}
				}
				else if ((iVar1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

int func_2664(int iParam0)//Position - 0xC68C2
{
	if (Local_210.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_2665(int iParam0)//Position - 0xC68EE
{
	if (Local_210.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_2666(int iParam0)//Position - 0xC6918
{
	if (Local_210.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_2667(int iParam0, bool bParam1)//Position - 0xC6945
{
	if (Local_210.f_156.f_2.f_79.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_79.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

void func_2668(int iParam0, int iParam1)//Position - 0xC697F
{
	int iVar0;
	if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		if (func_2671(iParam0, &iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, 0, 1, func_2670(iParam0), func_2669(iParam0), -1f, -1f, false);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

int func_2669(int iParam0)//Position - 0xC6A12
{
	if (Local_210.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_2670(int iParam0)//Position - 0xC6A3D
{
	if (Local_210.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_2671(int iParam0, var uParam1)//Position - 0xC6A6A
{
	int iVar0;
	if (Local_210.f_156.f_2.f_76 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_76);
		iVar0 = StackVal;
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		iVar0 = Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iVar0)))
	{
		*uParam1 = NETWORK::NET_TO_VEH(iVar0);
		return 1;
	}
	return 0;
}

void func_2672(int iParam0, int iParam1)//Position - 0xC6AD8
{
	if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_HANDS_UP"), 1) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_210.f_156.f_2.f_67.f_4);
		TASK::TASK_HANDS_UP(iParam1, func_2676(iParam0), func_2675(iParam0), func_2674(iParam0), func_2673(iParam0));
	}
}

int func_2673(int iParam0)//Position - 0xC6B30
{
	if (Local_210.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_2674(int iParam0)//Position - 0xC6B59
{
	if (Local_210.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_2675(int iParam0)//Position - 0xC6B82
{
	if (Local_210.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_2676(int iParam0)//Position - 0xC6BAB
{
	if (Local_210.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

void func_2677(int iParam0, int iParam1)//Position - 0xC6BD0
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	Stack.Push(Local_210.f_156.f_2.f_62.f_3 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2.f_62.f_3);
	if (StackVal || StackVal == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_291)
	{
		if (Local_202.f_291.f_1[iVar0 /*10*/] == iParam0)
		{
			Var1 = { func_2678(iVar0, Local_575.f_22[iParam0 /*24*/].f_5) };
			fVar2 = __LIB_0__.func_529(iParam1, Var1, 1);
			if (fVar2 <= 2f)
			{
				if (Local_575.f_22[iParam0 /*24*/].f_6 != 1)
				{
					Local_575.f_22[iParam0 /*24*/].f_5++;
				}
				else
				{
					Local_575.f_22[iParam0 /*24*/].f_5 = (Local_575.f_22[iParam0 /*24*/].f_5 - 1);
				}
				if ((Local_575.f_22[iParam0 /*24*/].f_5 >= 1 || (__LIB_0__.func_86(Local_202.f_291.f_1[iVar0 /*10*/].f_1[Local_575.f_22[iParam0 /*24*/].f_5 /*8*/].f_1) && Local_575.f_22[iParam0 /*24*/].f_6 == 0)) || Local_575.f_22[iParam0 /*24*/].f_6 == -1)
				{
					Local_575.f_22[iParam0 /*24*/].f_5 = (Local_575.f_22[iParam0 /*24*/].f_5 - 1);
					Local_575.f_22[iParam0 /*24*/].f_6 = 1;
				}
				if ((Local_575.f_22[iParam0 /*24*/].f_5 <= 0 && Local_575.f_22[iParam0 /*24*/].f_6 == 1) || Local_575.f_22[iParam0 /*24*/].f_6 == -1)
				{
					Local_575.f_22[iParam0 /*24*/].f_6 = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_2678(int iParam0, int iParam1)//Position - 0xC6D54
{
	return Local_202.f_291.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/].f_1;
}

void func_2679(int iParam0, int iParam1)//Position - 0xC6D71
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_PATROL"), 1) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		iVar0 = func_2685(iParam0);
		if (iVar0 != -1)
		{
			if (!func_2684(iParam0))
			{
				Var1 = { func_2683(iVar0) };
				TASK::TASK_PATROL(iParam1, &Var1, func_2682(iVar0), func_2681(iVar0), true);
			}
			else if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), 1))
			{
				iVar2 = 0;
				while (iVar2 < Local_202.f_291)
				{
					if (Local_202.f_291.f_1[iVar2 /*10*/] == iParam0)
					{
						if (func_2680(iParam0, Local_575.f_22[iParam0 /*24*/].f_5))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iParam1, Local_202.f_291.f_1[iVar2 /*10*/].f_1[Local_575.f_22[iParam0 /*24*/].f_5 /*8*/].f_1, 1f, -1, 40000f, 0.5f);
						}
					}
					iVar2++;
				}
			}
		}
	}
}

int func_2680(int iParam0, var uParam1)//Position - 0xC6E4F
{
	if (Local_210.f_156.f_2.f_62.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_210.f_156.f_2.f_62.f_4);
		return StackVal;
	}
	return 1;
}

int func_2681(int iParam0)//Position - 0xC6E7A
{
	if (Local_210.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_2682(int iParam0)//Position - 0xC6EA3
{
	if (Local_210.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

struct<4> func_2683(int iParam0)//Position - 0xC6ECC
{
	if (Local_210.f_156.f_2.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_62);
		return StackVal, StackVal, StackVal, StackVal;
	}
	return Local_505[iParam0 /*4*/];
}

int func_2684(int iParam0)//Position - 0xC6EF9
{
	if (Local_210.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

int func_2685(int iParam0)//Position - 0xC6F22
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_291)
	{
		if (Local_202.f_291.f_1[iVar0 /*10*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_2686(int iParam0, int iParam1)//Position - 0xC6F56
{
	if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_ACHIEVE_HEADING"), 1) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		TASK::TASK_ACHIEVE_HEADING(iParam1, func_2687(iParam0), 0);
	}
}

var func_2687(int iParam0)//Position - 0xC6F8D
{
	if (Local_210.f_156.f_2.f_61 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_61);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_178);
	return StackVal;
}

void func_2688(int iParam0, int iParam1)//Position - 0xC6FBB
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		if (Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
					{
						TASK::CLEAR_PED_TASKS(iParam1);
						TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, Local_202.f_38.f_1[iParam0 /*21*/].f_9, func_2692(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
		{
			Var1 = { func_2691(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, func_2692(iParam0), func_2690(), 0.25f, 4096, func_2689(iParam0));
		}
	}
}

float func_2689(int iParam0)//Position - 0xC70B1
{
	if (Local_210.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_2690()//Position - 0xC70DA
{
	if (Local_210.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_210.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_2691(int iParam0)//Position - 0xC7103
{
	if (Local_210.f_156.f_2.f_56.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_56.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

float func_2692(int iParam0)//Position - 0xC7135
{
	if (Local_210.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

void func_2693(int iParam0, int iParam1)//Position - 0xC715E
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		iVar0 = joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS");
		if (func_2694(iParam0))
		{
			iVar0 = joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD");
		}
		if (!__LIB_0__.func_583(iParam1, iVar0, 1))
		{
			Var1 = { func_2691(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"):
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, func_2692(iParam0), func_2690(), 0.25f, 4096, func_2689(iParam0));
					break;
				case joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS"):
					TASK::TASK_GO_TO_COORD_ANY_MEANS(iParam1, Var1, func_2692(iParam0), 0, false, 786603, -1f);
					break;
				}
			}
	}
}

int func_2694(int iParam0)//Position - 0xC720A
{
	if (Local_210.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

void func_2695(int iParam0, int iParam1)//Position - 0xC722F
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_COMBAT"), 1))
	{
		if (func_2700(iParam0, &iVar0))
		{
			if (__LIB_13__.func_401(iVar0))
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
				{
					func_2697(iParam0, iParam1);
					iVar1 = func_2696(iParam0);
					TASK::TASK_COMBAT_PED(iParam1, iVar0, iVar1, 16);
				}
			}
		}
	}
}

int func_2696(int iParam0)//Position - 0xC7287
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		return 67108864;
	}
	if (Local_210.f_156.f_2.f_54.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_54.f_1);
		return StackVal;
	}
	return 0;
}

void func_2697(int iParam0, int iParam1)//Position - 0xC72C3
{
	if (!func_2698(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam1, false);
	}
	else
	{
		func_116(iParam0, iParam1);
	}
	if (__LIB_14__.func_760(iParam0, 19))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	}
	if (func_51(iParam0, 9))
	{
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam1, joaat("VEHICLE_WEAPON_PLAYER_BUZZARD")))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, true);
			PED::SET_PED_FIRING_PATTERN(iParam1, joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 89, true);
		}
	}
}

bool func_2698(int iParam0)//Position - 0xC7338
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_202.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_202.f_38.f_86[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1 && func_118(iVar2, 4))
		{
			return 1;
		}
		iVar1++;
	}
	return Local_202.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f;
}

int func_2700(int iParam0, var uParam1)//Position - 0xC73DC
{
	if (__LIB_14__.func_760(iParam0, 19))
	{
		*uParam1 = func_2602(func_55(0, iParam0));
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return 1;
		}
		return 0;
	}
	if (Local_210.f_156.f_2.f_54 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_54);
		*uParam1 = StackVal;
		return 1;
	}
	return 0;
}

void func_2701(int iParam0, int iParam1)//Position - 0xC7430
{
	struct<3> Var0;
	float fVar1;
	Var0 = { func_2707(iParam0, -1) };
	Stack.Push(Local_210.f_156.f_2.f_25.f_21 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2.f_25.f_21);
	if (StackVal && StackVal)
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, PED::GET_PED_BONE_COORDS(iParam1, -1, 0f, 0f, 0f), func_2706(iParam0, Local_575.f_22[iParam0 /*24*/].f_5));
	}
	else
	{
		fVar1 = __LIB_0__.func_529(iParam1, Var0, func_2706(iParam0, Local_575.f_22[iParam0 /*24*/].f_5));
	}
	if (Local_210.f_156.f_2.f_25.f_22 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fVar1);
		Call_Loc(Local_210.f_156.f_2.f_25.f_22);
	}
	if (Local_210.f_156.f_2.f_25.f_24 != 0)
	{
		if (!__LIB_0__.func_649(&(Local_575.f_22[iParam0 /*24*/].f_20)))
		{
			__LIB_0__.func_580(&(Local_575.f_22[iParam0 /*24*/].f_20), 0, 0);
		}
		if (__LIB_2__.func_47(&(Local_575.f_22[iParam0 /*24*/].f_20), 60000, 0))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_210.f_156.f_2.f_25.f_24);
		}
	}
	if (fVar1 <= func_2705(iParam0) || func_2703(iParam0))
	{
		if (Local_210.f_156.f_2.f_25.f_23 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_210.f_156.f_2.f_25.f_23);
		}
		if (__LIB_0__.func_649(&(Local_575.f_22[iParam0 /*24*/].f_20)))
		{
			__LIB_0__.func_579(&(Local_575.f_22[iParam0 /*24*/].f_20));
		}
		Local_575.f_22[iParam0 /*24*/].f_5++;
		if (Local_575.f_22[iParam0 /*24*/].f_5 >= func_2702(iParam0))
		{
			Local_575.f_22[iParam0 /*24*/].f_5 = 0;
			__LIB_14__.func_759(iParam0, 5);
			func_16(3);
		}
	}
}

int func_2702(int iParam0)//Position - 0xC75C2
{
	if (Local_210.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

int func_2703(int iParam0)//Position - 0xC75E7
{
	int iVar0;
	struct<3> Var1;
	iVar0 = NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/]);
	Var1 = { func_2707(iParam0, -1) };
	if (__LIB_0__.func_530(iVar0, Var1, func_2705(iParam0), 1))
	{
		return 1;
	}
	return 0;
}

float func_2705(int iParam0)//Position - 0xC7640
{
	if (Local_210.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_2706(int iParam0, var uParam1)//Position - 0xC766D
{
	if (Local_210.f_156.f_2.f_25.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_210.f_156.f_2.f_25.f_25);
		return StackVal;
	}
	return 0;
}

Vector3 func_2707(int iParam0, int iParam1)//Position - 0xC7698
{
	int iVar0;
	struct<3> Var1;
	iVar0 = Local_575.f_22[iParam0 /*24*/].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_210.f_156.f_2.f_25.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_1);
		Var1 = { StackVal, StackVal, StackVal };
	}
	return Var1;
}

void func_2708(int iParam0, int iParam1)//Position - 0xC76DE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	bVar0 = func_2728(iParam0);
	iVar1 = func_2727(iParam0);
	if (bVar0 || NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		if (bVar0)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(iVar1);
		}
		if (bVar0 || !ENTITY::IS_ENTITY_DEAD(iVar2, false))
		{
			if ((func_2726() && !bVar0) && !PED::IS_PED_IN_VEHICLE(iParam1, iVar2, false))
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
				{
					if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar2)
					{
						Stack.Push(iParam1);
						Call_Loc(Local_210.f_156.f_2.f_5.f_5);
						Stack.Push(iParam1);
						Stack.Push(iVar2);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_5.f_1);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_5.f_2);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_5.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_210.f_156.f_2.f_5.f_4);
						TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(iParam1))
			{
				if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
					{
						Var3 = { func_2707(iParam0, -1) };
						PED::SET_PED_CONFIG_FLAG(iParam1, 429, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, false);
						VEHICLE::SET_HELI_BLADES_SPEED(iVar2, 1f);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
						if (Local_210.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_210.f_156.f_2.f_25.f_26);
						}
						TASK::TASK_HELI_MISSION(iParam1, iVar2, 0, 0, Var3, 4, func_2725(iParam0), 10f, func_2724(iParam0), SYSTEM::ROUND(func_2723()), func_2722(), -1f, 128);
						if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
						{
							func_2651(Local_575.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iParam1))
			{
				if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
					{
						Var4 = { func_2707(iParam0, -1) };
						PED::SET_PED_CONFIG_FLAG(iParam1, 429, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
						if (Local_210.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_210.f_156.f_2.f_25.f_26);
						}
						TASK::TASK_PLANE_MISSION(iParam1, iVar2, 0, 0, Var4, 4, func_2725(iParam0), func_2721(iParam0), func_2724(iParam0), SYSTEM::ROUND(func_2723()), func_2722(), true);
						if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
						{
							func_2651(Local_575.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_BOAT(iParam1))
			{
				if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar1)) != 4)
				{
					if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
					{
						fVar5 = func_2720(iParam0);
						Var6 = { func_2707(iParam0, -1) };
						if (Local_210.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_210.f_156.f_2.f_25.f_26);
						}
						VEHICLE::SET_BOAT_ANCHOR(iVar2, false);
						TASK::TASK_BOAT_MISSION(iParam1, iVar2, 0, 0, Var6, 4, fVar5, 786469, -1f, func_2719(iParam0));
					}
				}
			}
			else if (!__LIB_0__.func_583(iParam1, func_2718(iParam0), 1))
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]) && (bVar0 || __LIB_6__.func_924(iVar1)))
				{
					Var7 = { func_2707(iParam0, -1) };
					fVar8 = func_2720(iParam0);
					fVar9 = func_2717(iParam0);
					if (!bVar0)
					{
						__LIB_13__.func_402(iVar2);
					}
					if (Local_210.f_156.f_2.f_25.f_26 != 0)
					{
						Stack.Push(iParam0);
						Stack.Push(iParam1);
						Call_Loc(Local_210.f_156.f_2.f_25.f_26);
					}
					if (func_2715(iParam0))
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var7, func_2714(iParam0), iVar2, true, func_2713(iParam0), -1f, 0f, fVar9, func_2712(iParam0), fVar8, func_2721(iParam0));
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iVar2, Var7, fVar8, func_2711(iParam0), ENTITY::GET_ENTITY_MODEL(iVar2), func_2713(iParam0), func_2721(iParam0), fVar9);
					}
					if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
					{
						func_2651(Local_575.f_22[iParam0 /*24*/].f_5, iParam0);
					}
					if (func_2710(iParam0) != -1f)
					{
						if (!__LIB_14__.func_760(iParam0, 7) && !func_2301(iParam0, iLocal_518, 6))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar2, func_2710(iParam0));
							func_2296(iParam0, 6);
						}
					}
				}
			}
			else if (Local_575.f_22[iParam0 /*24*/].f_6 != Local_575.f_22[iParam0 /*24*/].f_5)
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
				}
			}
			if ((!__LIB_14__.func_760(iParam0, 6) && !func_2301(iParam0, iLocal_518, 5)) && func_2709(iParam0))
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
					func_2296(iParam0, 5);
				}
			}
		}
	}
}

int func_2709(int iParam0)//Position - 0xC7C0F
{
	if (Local_210.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_2710(int iParam0)//Position - 0xC7C38
{
	if (Local_210.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_2711(int iParam0)//Position - 0xC7C61
{
	if (Local_210.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_2712(int iParam0)//Position - 0xC7C8A
{
	if (Local_210.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_2713(int iParam0)//Position - 0xC7CB4
{
	if (Local_210.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_2714(int iParam0)//Position - 0xC7CE0
{
	if (Local_210.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_2715(int iParam0)//Position - 0xC7D09
{
	if (Local_210.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_2717(int iParam0)//Position - 0xC7D74
{
	if (Local_210.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_2718(int iParam0)//Position - 0xC7D9D
{
	if (func_2715(iParam0))
	{
		return joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED");
	}
	return joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
}

int func_2719(int iParam0)//Position - 0xC7DBB
{
	if (Local_210.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_2720(int iParam0)//Position - 0xC7DE4
{
	if (Local_210.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_2721(int iParam0)//Position - 0xC7E11
{
	if (Local_210.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_2722()//Position - 0xC7E3A
{
	if (Local_210.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_210.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_2723()//Position - 0xC7E62
{
	if (Local_210.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_210.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_2724(int iParam0)//Position - 0xC7E8D
{
	if (Local_210.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_2725(int iParam0)//Position - 0xC7EB6
{
	if (Local_210.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_2726()//Position - 0xC7EE3
{
	if (Local_210.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_210.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_2727(int iParam0)//Position - 0xC7F0A
{
	if (Local_210.f_156.f_2.f_25.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_2);
		return StackVal;
	}
	if (Local_202.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_575.f_119[Local_202.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	return 0;
}

int func_2728(var uParam0)//Position - 0xC7F59
{
	if (Local_210.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_210.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

void func_2729(int iParam0, int iParam1)//Position - 0xC7F82
{
	int iVar0;
	if (Local_210.f_156.f_2.f_23 != 0)
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_210.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
				{
					Stack.Push(iParam1);
					Stack.Push(NETWORK::NET_TO_ENT(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_210.f_156.f_2.f_23.f_1);
					TASK::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_2730(int iParam0, int iParam1)//Position - 0xC7FFA
{
	int iVar0;
	if (Local_210.f_156.f_2.f_22 != 0)
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam1, iVar0, -1, false);
				}
			}
		}
	}
}

void func_2731(int iParam0, int iParam1)//Position - 0xC8067
{
	if (Local_210.f_156.f_2.f_21 != 0)
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2.f_21);
				TASK::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, false, false);
			}
		}
	}
}

void func_2732(int iParam0, int iParam1)//Position - 0xC80BA
{
	if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"), 1))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			func_2697(iParam0, iParam1);
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_210.f_156.f_2.f_18.f_2);
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_2.f_18);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_2.f_18.f_1);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
		}
	}
}

void func_2733(int iParam0, int iParam1)//Position - 0xC811B
{
	char* sVar0;
	char* sVar1;
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2.f_15);
	sVar0 = StackVal;
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2.f_15.f_1);
	sVar1 = StackVal;
	if ((!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(sVar0);
				Stack.Push(sVar1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2.f_15.f_2);
				TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0f, false, false, false);
			}
		}
	}
}

void func_2734(int iParam0, int iParam1)//Position - 0xC81C1
{
	if (func_2337(iParam0, 0))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_2735(int iParam0, int iParam1)//Position - 0xC8217
{
	if (func_2337(iParam0, 0))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, func_2737(iParam0), func_2736(iParam0));
			}
		}
	}
}

int func_2736(int iParam0)//Position - 0xC825E
{
	if (Local_210.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_2737(int iParam0)//Position - 0xC8287
{
	if (Local_210.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

void func_2738(int iParam0, int iParam1)//Position - 0xC82AC
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!func_2337(iParam0, 0))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			if (func_2739(&iVar0, &uVar1, iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
						{
							iVar2 = -1;
							if (Local_210.f_156.f_2.f_5.f_2 != 0)
							{
								Stack.Push(iParam0);
								Call_Loc(Local_210.f_156.f_2.f_5.f_2);
								iVar2 = StackVal;
							}
							if (__LIB_14__.func_760(iParam0, 19))
							{
								iVar2 = Local_202.f_38.f_1[iParam0 /*21*/].f_9;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
							}
							else
							{
								Stack.Push(iParam1);
								Call_Loc(Local_210.f_156.f_2.f_5.f_5);
							}
							Stack.Push(iParam1);
							Stack.Push(iVar0);
							Stack.Push(iParam0);
							Call_Loc(Local_210.f_156.f_2.f_5.f_1);
							Stack.Push(iVar2);
							Stack.Push(iParam0);
							Call_Loc(Local_210.f_156.f_2.f_5.f_3);
							Stack.Push(iParam0);
							Call_Loc(Local_210.f_156.f_2.f_5.f_4);
							TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
						}
					}
				}
			}
		}
	}
	else
	{
		Stack.Push(Local_210.f_156.f_2.f_5.f_7 != 0);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_5.f_7);
		if (StackVal && StackVal)
		{
			if (func_2739(&iVar0, &uVar1, iParam0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(iParam1, false) != iVar0)
				{
					func_2735(iParam0, iParam1);
				}
			}
		}
	}
}

bool func_2739(int iParam0, var uParam1, int iParam2)//Position - 0xC83DD
{
	Stack.Push(iParam2);
	Call_Loc(Local_210.f_156.f_2.f_5);
	*uParam1 = StackVal;
	if (__LIB_14__.func_760(iParam2, 19))
	{
		*uParam1 = Local_202.f_38.f_1[iParam2 /*21*/].f_8;
	}
	if (*uParam1 != -1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_575.f_119[*uParam1 /*8*/]))
	{
		*iParam0 = NETWORK::NET_TO_VEH(Local_575.f_119[*uParam1 /*8*/]);
	}
	else if (Local_210.f_156.f_2.f_5.f_6 != 0)
	{
		Stack.Push(iParam2);
		Call_Loc(Local_210.f_156.f_2.f_5.f_6);
		*iParam0 = StackVal;
	}
	return *iParam0 != 0;
}

void func_2742(int iParam0, int iParam1)//Position - 0xC84F5
{
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2);
		if (func_2744(StackVal, StackVal))
		{
			if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2);
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_210.f_156.f_2.f_2);
				TASK::TASK_START_SCENARIO_AT_POSITION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, true, true);
			}
		}
		else if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1) && __LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_210.f_156.f_2);
			TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, false);
		}
		if (func_2743(iParam0))
		{
			if (__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) || __LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_22[iParam0 /*24*/]))
				{
					if (!PED::IS_PED_HEADTRACKING_PED(iParam1, iLocal_516))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam1, iLocal_516, -1, 2048, 2);
					}
				}
			}
		}
	}
}

int func_2743(int iParam0)//Position - 0xC85FE
{
	if (Local_210.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_2744(var uParam0, char* sParam1)//Position - 0xC8623
{
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

var func_2745()//Position - 0xC8697
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < Local_202.f_38)
	{
		iVar2 = func_65(iVar1);
		if (iVar2 < 1 && iVar2 > iVar0)
		{
			iVar0 = iVar2;
		}
		iVar1++;
	}
	return iVar0 + 1;
}

void func_2746()//Position - 0xC86D5
{
	if (func_784(49))
	{
		return;
	}
	Call_Loc(Local_210.f_11.f_1);
	func_2747();
	func_145(49);
}

void func_2747()//Position - 0xC86FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < iLocal_526)
	{
		iVar1 = Local_215[iVar0 /*21*/];
		if (iVar1 != -1)
		{
			iVar2 = 0;
			while (iVar2 < Local_215[iVar0 /*21*/].f_19)
			{
				if (Local_215[iVar0 /*21*/].f_1[iVar2 /*3*/].f_1 == 0 && Local_215[iVar0 /*21*/].f_1[iVar2 /*3*/].f_2 == -1)
				{
					iVar3 = Local_215[iVar0 /*21*/].f_1[iVar2 /*3*/];
					func_2756(iVar1, Local_215[iVar3 /*21*/], &(Local_215[iVar0 /*21*/].f_1[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
			if (Local_215[iVar0 /*21*/].f_18 == 0)
			{
				func_2752(iVar0, iVar1);
			}
			if (Local_215[iVar0 /*21*/].f_17 == 0)
			{
				func_2748(iVar0, iVar1);
			}
			if (Local_215[iVar0 /*21*/].f_20 == 0)
			{
				Local_215[iVar0 /*21*/].f_20 = 171273/*func_774*/;
			}
		}
		iVar0++;
	}
}

void func_2748(int iParam0, int iParam1)//Position - 0xC87D9
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 821316/*func_2751*/;
			break;
		case 27:
			iVar0 = 821303/*func_2750*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2749(iParam0, iVar0);
	}
	else
	{
		Local_215[iParam0 /*21*/].f_17 = 171273/*func_774*/;
	}
}

void func_2749(int iParam0, int iParam1)//Position - 0xC8824
{
	Local_215[iParam0 /*21*/].f_17 = iParam1;
}

void func_2750()//Position - 0xC8837
{
	func_1750(4);
}

void func_2752(int iParam0, int iParam1)//Position - 0xC884C
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 821431/*func_2755*/;
			break;
		case 27:
			iVar0 = 821418/*func_2754*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2753(iParam0, iVar0);
	}
	else
	{
		Local_215[iParam0 /*21*/].f_18 = 171273/*func_774*/;
	}
}

void func_2753(int iParam0, int iParam1)//Position - 0xC8897
{
	Local_215[iParam0 /*21*/].f_18 = iParam1;
}

void func_2754()//Position - 0xC88AA
{
	func_1750(4);
}

void func_2755()//Position - 0xC88B7
{
	func_1750(1);
	func_2141();
}

void func_2756(int iParam0, int iParam1, var uParam2)//Position - 0xC88C8
{
	switch (iParam0)
	{
		case 22:
		case 24:
		case 25:
		case 23:
		case 46:
		case 47:
			switch (iParam1)
			{
				case 22:
					*uParam2 = 822502/*func_2774*/;
					break;
				case 24:
					*uParam2 = 822478/*func_2773*/;
					break;
				case 25:
					*uParam2 = 822415/*func_2772*/;
					break;
				case 23:
					*uParam2 = 822306/*func_2770*/;
					break;
			}
			break;
		case 29:
		case 30:
		case 31:
		case 32:
		case 34:
		case 33:
			switch (iParam1)
			{
				case 29:
					*uParam2 = 822184/*func_2768*/;
					break;
				case 30:
					*uParam2 = 822175/*func_2767*/;
					break;
				case 31:
					*uParam2 = 822166/*func_2766*/;
					break;
				case 32:
					*uParam2 = 822157/*func_2765*/;
					break;
				case 34:
					*uParam2 = 822148/*func_2764*/;
					break;
				case 33:
					*uParam2 = 821939/*func_2761*/;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case 46:
			*uParam2 = 821892/*func_2760*/;
			break;
		case 47:
			*uParam2 = 821754/*func_2757*/;
			break;
	}
}

int func_2757()//Position - 0xC89FA
{
	if (!func_152(iLocal_518, 2))
	{
		return 0;
	}
	if (!func_2773() && func_2758())
	{
		return 0;
	}
	return 1;
}

int func_2758()//Position - 0xC8A28
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (func_2759(iVar0) && !func_2443(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2759(int iParam0)//Position - 0xC8A5F
{
	if (!func_1010(iParam0) || __LIB_14__.func_763(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_2760()//Position - 0xC8A84
{
	if (func_2773())
	{
		return 0;
	}
	if (func_152(iLocal_518, 2))
	{
		return 0;
	}
	if (!func_2758())
	{
		return 0;
	}
	return 1;
}

int func_2761()//Position - 0xC8AB3
{
	if ((!func_875(iLocal_514, 1) && !func_974(iLocal_514, 0, 1, 0)) && func_2762(0))
	{
		return 1;
	}
	return 0;
}

int func_2762(int iParam0)//Position - 0xC8AE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (__LIB_14__.func_763(iVar0, 6))
		{
			if (!__LIB_14__.func_763(iVar0, 3))
			{
				if (!__LIB_14__.func_763(iVar0, 4) || iParam0)
				{
					if (func_2443(iVar0))
					{
						iVar1++;
					}
				}
				else
				{
					iVar2++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		else
		{
			return 0;
		}
		iVar0++;
	}
	if (iVar1 > 0 && iVar1 == (func_46() - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_2768()//Position - 0xC8BA8
{
	if ((!func_875(iLocal_514, 1) && !func_974(iLocal_514, 0, 1, 0)) || func_977(func_2351(), 1))
	{
		if (!func_2762(0) && !func_2769(0))
		{
			return 1;
		}
	}
	return 0;
}

int func_2769(bool bParam0)//Position - 0xC8BF4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (!func_977(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_2770()//Position - 0xC8C22
{
	if (func_2773())
	{
		return 0;
	}
	if (!func_2771())
	{
		return 0;
	}
	if (func_974(iLocal_514, 0, 0, 0))
	{
		return 0;
	}
	if (func_2769(1))
	{
		return 0;
	}
	return 1;
}

int func_2771()//Position - 0xC8C5F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (func_877(iVar0, iLocal_518, 12))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2772()//Position - 0xC8C8F
{
	if (func_2773())
	{
		return 0;
	}
	if (func_974(iLocal_514, 0, 0, 0) && !func_2443(func_2351()))
	{
		return 0;
	}
	if (func_2769(1))
	{
		return 0;
	}
	return 1;
}

int func_2773()//Position - 0xC8CCE
{
	if (func_875(iLocal_514, 1))
	{
		return 1;
	}
	return 0;
}

int func_2774()//Position - 0xC8CE6
{
	if (func_2773())
	{
		return 0;
	}
	if (func_2762(0))
	{
		return 0;
	}
	if (func_974(iLocal_514, 0, 0, 0))
	{
		return 0;
	}
	if (func_2769(1))
	{
		return 0;
	}
	return 1;
}

void func_2775()//Position - 0xC8D23
{
	if (func_784(48))
	{
		return;
	}
	Call_Loc(Local_210.f_11);
	func_2776();
	func_145(48);
}

void func_2776()//Position - 0xC8D47
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < iLocal_525)
	{
		iVar1 = Local_214[iVar0 /*20*/];
		if (iVar1 != -1)
		{
			iVar2 = 0;
			while (iVar2 < Local_214[iVar0 /*20*/].f_19)
			{
				if (Local_214[iVar0 /*20*/].f_1[iVar2 /*3*/].f_1 == 0)
				{
					func_2791(iVar1, &(Local_214[iVar0 /*20*/].f_1[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
			if (Local_214[iVar0 /*20*/].f_18 == 0)
			{
				func_2783(iVar0, iVar1);
			}
			if (Local_214[iVar0 /*20*/].f_17 == 0)
			{
				func_2777(iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_2777(int iParam0, int iParam1)//Position - 0xC8DDE
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 822915/*func_2782*/;
			break;
		case 48:
			iVar0 = 822894/*func_2781*/;
			break;
		case 27:
			iVar0 = 822886/*func_2780*/;
			break;
		case 7:
			iVar0 = 822878/*func_2779*/;
			break;
		case 6:
			iVar0 = 822870/*func_2778*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_773(iParam0, iVar0);
	}
	else
	{
		Local_214[iParam0 /*20*/].f_17 = 171273/*func_774*/;
	}
}

void func_2781()//Position - 0xC8E6E
{
	if (func_540() == 0)
	{
		func_8(3);
	}
}

void func_2782()//Position - 0xC8E83
{
	func_2557(1);
}

void func_2783(int iParam0, int iParam1)//Position - 0xC8E90
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 823168/*func_2790*/;
			break;
		case 27:
			iVar0 = 823155/*func_2789*/;
			break;
		case 7:
			iVar0 = 823143/*func_2788*/;
			break;
		case 20:
			iVar0 = 823110/*func_2787*/;
			break;
		case 6:
			iVar0 = 823067/*func_2785*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2784(iParam0, iVar0);
	}
	else
	{
		Local_214[iParam0 /*20*/].f_18 = 171273/*func_774*/;
	}
}

void func_2784(int iParam0, int iParam1)//Position - 0xC8F08
{
	Local_214[iParam0 /*20*/].f_18 = iParam1;
}

void func_2785()//Position - 0xC8F1B
{
	func_2786();
}

void func_2786()//Position - 0xC8F27
{
	if (Local_575.f_228 + 1 < 1)
	{
		Local_575.f_228++;
	}
}

void func_2787()//Position - 0xC8F46
{
	Local_575.f_178.f_2++;
	__LIB_0__.func_579(&(Local_575.f_178));
}

void func_2788()//Position - 0xC8F67
{
	func_2786();
}

void func_2789()//Position - 0xC8F73
{
	func_2557(4);
}

void func_2791(int iParam0, var uParam1)//Position - 0xC8F88
{
	*uParam1 = 823653/*func_2804*/;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 823644/*func_2803*/;
			break;
		case 22:
			*uParam1 = 823580/*func_2801*/;
			break;
		case 24:
			*uParam1 = 823559/*func_2800*/;
			break;
		case 7:
			*uParam1 = 823522/*func_2798*/;
			break;
		case 29:
			*uParam1 = 823443/*func_2796*/;
			break;
		case 27:
			*uParam1 = 823430/*func_2795*/;
			break;
		case 20:
			*uParam1 = 823386/*func_2794*/;
			break;
		case 19:
			*uParam1 = 823326/*func_2792*/;
			break;
	}
}

int func_2792()//Position - 0xC901E
{
	return __LIB_6__.func_312(&(Local_575.f_234));
}

int func_2794()//Position - 0xC905A
{
	if (Local_210.f_111 == 0)
	{
		return 0;
	}
	Stack.Push(&(Local_575.f_178));
	Stack.Push(Local_575.f_178.f_2);
	Call_Loc(Local_210.f_111);
	return __LIB_2__.func_47(StackVal, StackVal, 0);
}

bool func_2795()//Position - 0xC9086
{
	return func_3(4);
}

int func_2796()//Position - 0xC9093
{
	if (func_489())
	{
		return 1;
	}
	else if (func_2797())
	{
		return 1;
	}
	return 0;
}

int func_2797()//Position - 0xC90B5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_19)
	{
		if (!__LIB_14__.func_763(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_2798()//Position - 0xC90E2
{
	return func_2799();
}

bool func_2799()//Position - 0xC90EE
{
	return (Local_488.f_0 == 0 && Local_488.f_1 > 0);
}

int func_2800()//Position - 0xC9107
{
	if (func_2769(0))
	{
		return 1;
	}
	return 0;
}

int func_2801()//Position - 0xC911C
{
	if (func_2802())
	{
		return 1;
	}
	return 0;
}

int func_2802()//Position - 0xC9130
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (__LIB_14__.func_763(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2805()//Position - 0xC916E
{
	return Local_575.f_208;
}

int func_2806()//Position - 0xC917B
{
	return Local_582[iLocal_517 /*62*/].f_42;
}

void func_2818()//Position - 0xC92ED
{
	Local_210.f_11 = 829765/*func_2971*/;
	Local_210.f_11.f_1 = 829302/*func_2966*/;
	Local_210.f_2 = 829293/*func_2965*/;
	Local_210.f_1 = 829284/*func_2964*/;
	Local_210.f_47 = 823653/*func_2804*/;
	Local_210.f_47.f_1 = 829273/*func_2963*/;
	Local_210.f_47.f_2 = 829264/*func_2962*/;
	Local_210.f_64.f_2 = 829255/*func_2961*/;
	Local_210.f_64 = 829243/*func_2960*/;
	Local_210.f_64.f_14 = 829234/*func_2959*/;
	Local_210.f_64.f_15 = 829225/*func_2958*/;
	Local_210.f_54 = 829216/*func_2957*/;
	Local_210.f_54.f_1 = 829207/*func_2956*/;
	Local_210.f_54.f_2 = 829198/*func_2955*/;
	Local_210.f_54.f_3 = 829189/*func_2954*/;
	Local_210.f_54.f_4 = 829177/*func_2953*/;
	Local_210.f_54.f_5 = 829168/*func_2952*/;
	Local_210.f_54.f_8 = 829159/*func_2951*/;
	Local_210.f_54.f_9 = 829146/*func_2950*/;
	Local_210.f_82 = 829137/*func_2949*/;
	Local_210.f_80 = 829126/*func_2948*/;
	Local_210.f_114.f_23 = 829117/*func_2947*/;
	Local_210.f_114.f_27 = 829106/*func_2946*/;
	Local_210.f_114 = 829060/*func_2945*/;
	Local_210.f_114.f_39 = 829051/*func_2944*/;
	Local_210.f_156.f_176 = 829031/*func_2943*/;
	Local_210.f_156.f_177 = 828968/*func_2942*/;
	Local_210.f_156.f_178 = 828907/*func_2941*/;
	Local_210.f_156.f_179 = 828887/*func_2940*/;
	Local_210.f_156.f_169 = 828878/*func_2939*/;
	Local_210.f_156.f_169.f_1 = 828856/*func_2938*/;
	Local_210.f_156.f_169.f_2 = 828836/*func_2937*/;
	Local_210.f_156 = 828754/*func_2936*/;
	Local_210.f_156.f_132 = 828325/*func_2926*/;
	Local_210.f_156.f_2 = 828313/*func_2925*/;
	Local_210.f_156.f_2.f_1 = 828295/*func_2924*/;
	Local_210.f_156.f_2.f_2 = 828277/*func_2923*/;
	Local_210.f_156.f_2.f_4 = 828268/*func_2922*/;
	Local_210.f_156.f_2.f_5 = 828248/*func_2921*/;
	Local_210.f_156.f_2.f_5.f_1 = 828239/*func_2920*/;
	Local_210.f_156.f_2.f_5.f_2 = 828219/*func_2919*/;
	Local_210.f_156.f_2.f_5.f_3 = 828210/*func_2918*/;
	Local_210.f_156.f_2.f_5.f_4 = 828185/*func_2917*/;
	Local_210.f_156.f_2.f_5.f_5 = 828171/*func_2916*/;
	Local_210.f_156.f_2.f_15 = 828159/*func_2915*/;
	Local_210.f_156.f_2.f_15.f_1 = 828147/*func_2914*/;
	Local_210.f_156.f_2.f_15.f_2 = 828138/*func_2913*/;
	Local_210.f_156.f_2.f_18 = 828068/*func_2912*/;
	Local_210.f_156.f_2.f_18.f_1 = 828055/*func_2911*/;
	Local_210.f_156.f_2.f_18.f_2 = 827853/*func_2910*/;
	Local_210.f_156.f_2.f_23.f_1 = 827840/*func_2909*/;
	Local_210.f_156.f_2.f_67.f_4 = 827820/*func_2908*/;
	Local_210.f_156.f_2.f_85 = 827811/*func_2907*/;
	Local_210.f_156.f_2.f_114 = 827798/*func_2906*/;
	Local_210.f_156.f_2.f_114.f_1 = 827785/*func_2905*/;
	Local_210.f_156.f_2.f_114.f_2 = 827776/*func_2904*/;
	Local_210.f_156.f_2.f_114.f_5 = 827767/*func_2903*/;
	Local_210.f_156.f_2.f_114.f_6 = 827758/*func_2902*/;
	Local_210.f_352.f_24 = 827749/*func_2901*/;
	Local_210.f_352.f_25 = 827740/*func_2900*/;
	Local_210.f_352.f_26 = 827731/*func_2899*/;
	Local_210.f_352.f_27 = 827722/*func_2898*/;
	Local_210.f_352.f_37 = 827713/*func_2897*/;
	Local_210.f_352.f_38 = 827561/*func_2896*/;
	Local_210.f_352.f_31 = 827552/*func_2895*/;
	Local_210.f_407.f_25 = 827543/*func_2894*/;
	Local_210.f_407.f_26 = 827534/*func_2893*/;
	Local_210.f_563.f_2 = 827525/*func_2892*/;
	Local_210.f_571.f_1 = 827500/*func_2891*/;
	Local_210.f_571.f_3 = 827491/*func_2890*/;
	Local_210.f_571.f_2 = 827483/*func_2889*/;
	Local_210.f_571.f_9 = 827474/*func_2888*/;
	Local_210.f_571.f_17 = 827267/*func_2887*/;
	Local_210.f_571.f_18.f_15 = 827258/*func_2886*/;
	Local_210.f_571.f_41 = 827246/*func_2885*/;
	Local_210.f_571.f_15 = 827237/*func_2884*/;
	Local_210.f_453 = 827222/*func_2883*/;
	Local_210.f_453.f_1 = 827170/*func_2882*/;
	Local_210.f_453.f_2 = 827147/*func_2881*/;
	Local_210.f_453.f_3 = 827128/*func_2880*/;
	Local_210.f_453.f_5 = 827092/*func_2879*/;
	Local_210.f_453.f_13 = 827012/*func_2878*/;
	Local_210.f_453.f_6 = 826593/*func_2875*/;
	Local_210.f_453.f_7 = 826582/*func_2874*/;
	Local_210.f_453.f_8 = 826570/*func_2873*/;
	Local_210.f_453.f_9 = 826559/*func_2872*/;
	Local_210.f_453.f_10 = 826549/*func_2871*/;
	Local_210.f_453.f_11 = 826536/*func_2870*/;
	Local_210.f_453.f_12 = 826517/*func_2869*/;
	Local_210.f_453.f_4 = 826506/*func_2868*/;
	Local_210.f_453.f_30.f_5 = 826483/*func_2867*/;
	Local_210.f_453.f_30.f_11 = 826468/*func_2866*/;
	Local_210.f_453.f_30 = 826429/*func_2865*/;
	Local_210.f_453.f_30.f_9 = 826414/*func_2864*/;
	Local_210.f_453.f_30.f_13 = 826402/*func_2863*/;
	Local_210.f_453.f_30.f_6 = 826379/*func_2862*/;
	Local_210.f_453.f_30.f_14 = 826370/*func_2861*/;
	Local_210.f_453.f_30.f_4 = 826349/*func_2860*/;
	Local_210.f_453.f_53 = 826337/*func_2859*/;
	Local_210.f_453.f_53.f_1 = 826325/*func_2858*/;
	Local_210.f_453.f_55 = 826306/*func_2857*/;
	Local_210.f_453.f_55.f_1 = 826293/*func_2856*/;
	Local_210.f_453.f_55.f_2 = 826281/*func_2855*/;
	Local_210.f_453.f_55.f_3 = 826269/*func_2854*/;
	Local_210.f_453.f_55.f_4 = 826257/*func_2853*/;
	Local_210.f_453.f_55.f_5 = 826235/*func_2852*/;
	Local_210.f_453.f_55.f_6 = 826222/*func_2851*/;
	Local_210.f_453.f_55.f_7 = 826186/*func_2850*/;
	Local_210.f_453.f_63 = 826177/*func_2849*/;
	Local_210.f_453.f_63.f_1 = 826168/*func_2848*/;
	Local_210.f_453.f_63.f_4 = 826145/*func_2847*/;
	Local_210.f_453.f_63.f_5 = 826132/*func_2846*/;
	Local_210.f_453.f_63.f_6 = 826119/*func_2845*/;
	Local_210.f_453.f_63.f_2 = 826110/*func_2844*/;
	Local_210.f_453.f_63.f_3 = 826098/*func_2843*/;
	Local_210.f_453.f_63.f_7 = 826089/*func_2842*/;
	Local_210.f_453.f_63.f_8 = 826076/*func_2841*/;
	Local_210.f_453.f_63.f_9 = 826067/*func_2840*/;
	Local_210.f_453.f_63.f_10 = 826052/*func_2839*/;
	Local_210.f_453.f_63.f_11 = 826043/*func_2838*/;
	Local_210.f_453.f_28 = 826034/*func_2837*/;
	Local_210.f_541 = 825991/*func_2836*/;
	Local_210.f_541.f_1 = 825982/*func_2835*/;
	Local_210.f_544 = 825942/*func_2834*/;
	Local_210.f_554.f_2 = 825933/*func_2833*/;
	Local_210.f_554.f_6 = 825924/*func_2832*/;
	Local_210.f_554.f_8 = 825915/*func_2831*/;
	Local_210.f_554.f_5 = 825906/*func_2830*/;
	Local_210.f_530 = 825894/*func_2829*/;
	Local_210.f_563.f_4.f_3 = 825885/*func_2828*/;
	Local_210.f_102.f_7 = 825874/*func_2827*/;
	Local_210.f_102.f_8 = 825861/*func_2826*/;
	Local_210.f_15.f_4 = 825852/*func_2825*/;
	Local_210.f_15.f_26 = 825843/*func_2824*/;
	Local_210.f_15.f_26.f_1 = 825833/*func_2823*/;
	Local_210.f_15.f_26.f_2 = 825824/*func_2822*/;
	Local_210.f_15.f_26.f_3 = 825790/*func_2821*/;
	Local_210.f_15.f_26.f_4 = 825781/*func_2820*/;
	Local_210.f_15.f_26.f_5 = 825772/*func_2819*/;
}

int func_2821()//Position - 0xC99BE
{
	if (iLocal_521 == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iLocal_521))
	{
		return 0;
	}
	return 1;
}

int func_2829()//Position - 0xC9A26
{
	return func_2802();
}

int func_2834(var uParam0)//Position - 0xC9A56
{
	if (__LIB_14__.func_763(0, 1) || __LIB_21__.func_329(iLocal_514, 0, -1))
	{
		return 0;
	}
	return func_2164();
}

int func_2836(int iParam0)//Position - 0xC9A87
{
	if (func_118(iParam0, 2))
	{
		return 3000;
	}
	if (func_118(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

var func_2847(int iParam0)//Position - 0xC9B21
{
	return Local_202.f_303.f_1[iParam0 /*23*/].f_20.f_1;
}

int func_2850(int iParam0)//Position - 0xC9B4A
{
	if (Local_499.f_11 < (Local_202.f_303.f_1[iParam0 /*23*/].f_16 - 1))
	{
		return 2;
	}
	return 0;
}

bool func_2852(var uParam0)//Position - 0xC9B7B
{
	return !__LIB_0__.func_583(iLocal_516, joaat("SCRIPT_TASK_PLAY_ANIM"), 1);
}

var func_2856(var uParam0)//Position - 0xC9BB5
{
	return Local_499.f_16;
}

Vector3 func_2857(var uParam0)//Position - 0xC9BC2
{
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_453.f_2);
	return StackVal, StackVal, StackVal;
}

var func_2860(int iParam0)//Position - 0xC9BED
{
	return Local_202.f_303.f_1[iParam0 /*23*/].f_8;
}

var func_2862(int iParam0)//Position - 0xC9C0B
{
	return Local_202.f_303.f_1[iParam0 /*23*/].f_8.f_2;
}

bool func_2864(int iParam0)//Position - 0xC9C2E
{
	return func_2240(iParam0, 2);
}

int func_2865(var uParam0)//Position - 0xC9C3D
{
	Call_Loc(Local_210.f_453);
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_453.f_1);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_2866(int iParam0)//Position - 0xC9C64
{
	return func_2240(iParam0, 3);
}

var func_2867(int iParam0)//Position - 0xC9C73
{
	return Local_202.f_303.f_1[iParam0 /*23*/].f_8.f_1;
}

bool func_2875(var uParam0)//Position - 0xC9CE1
{
	Stack.Push(__LIB_2__.func_187(Local_499.f_7, 1));
	Stack.Push(__LIB_2__.func_278(Local_499.f_7, 0));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_453.f_53);
	return (StackVal && (StackVal || MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
}

void func_2878(var uParam0, bool bParam1)//Position - 0xC9E84
{
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_453.f_53.f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		if (bParam1)
		{
			Stack.Push(uParam0);
			Call_Loc(Local_210.f_453.f_53.f_1);
			__LIB_0__.func_151(StackVal, -1);
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(Local_210.f_453.f_53.f_1);
			if (__LIB_0__.func_1(StackVal))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

bool func_2879(var uParam0, float fParam1)//Position - 0xC9ED4
{
	struct<3> Var0;
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_453.f_2);
	Var0 = { StackVal, StackVal, StackVal };
	return MISC::ABSF((fParam1 - Var0.f_2)) < 2f;
}

Vector3 func_2881(int iParam0)//Position - 0xC9F0B
{
	return Local_202.f_303.f_1[iParam0 /*23*/].f_3;
}

int func_2882(int iParam0)//Position - 0xC9F22
{
	if (func_2248(iParam0, iLocal_518))
	{
		return 0;
	}
	if (func_2249(iParam0) && !func_2240(iParam0, 12))
	{
		return 0;
	}
	return 1;
}

bool func_2883()//Position - 0xC9F56
{
	return func_964() == 19;
}

void func_2887(float fParam0)//Position - 0xC9F83
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	iVar1 = -1;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_1764(iVar0))
		{
		}
		else if (!func_1726(iVar0))
		{
		}
		else
		{
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_516, true), Local_202.f_365[iVar0 /*8*/], false);
			if (IntToFloat(iVar1) == -1f || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		if (fVar2 > fParam0)
		{
			Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_202.f_365[iVar1 /*8*/], Local_202.f_365[iVar1 /*8*/].f_3, -fParam0, 0f, 1f) };
		}
		else
		{
			Var4 = { Local_202.f_365[iVar1 /*8*/] };
		}
		__LIB_18__.func_391(Var4, Local_202.f_365[iVar1 /*8*/].f_3, 0, 1, 0, 0, 1, 0, 1, 0, 0);
	}
}

bool func_2891(var uParam0, struct<3> Param1)//Position - 0xCA06C
{
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_516, Param1, 1f, 1f, 2f, false, true, 0);
}

void func_2910(var uParam0, int iParam1)//Position - 0xCA1CD
{
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_2);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

var func_2919(int iParam0)//Position - 0xCA33B
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_2921(int iParam0)//Position - 0xCA358
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_2923(var uParam0)//Position - 0xCA375
{
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_178);
	return StackVal;
}

Vector3 func_2924(var uParam0)//Position - 0xCA387
{
	Stack.Push(uParam0);
	Call_Loc(Local_210.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_2926(int iParam0)//Position - 0xCA3A5
{
	if (func_41(30))
	{
		func_2933(iParam0);
		return;
	}
	func_2931(iParam0, 828601/*func_2932*/);
	func_2931(iParam0, 828473/*func_2930*/);
	func_2931(iParam0, 828449/*func_2929*/);
	func_2931(iParam0, 828425/*func_2928*/);
	func_2931(iParam0, 828401/*func_2927*/);
}

int func_2930(int iParam0)//Position - 0xCA439
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = Local_202.f_38.f_1[iParam0 /*21*/].f_14;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = Local_202.f_38.f_86[iVar1 /*5*/].f_1[iVar0];
		if (iVar2 != -1)
		{
			if (func_2062(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_2931(int iParam0, int iParam1)//Position - 0xCA487
{
	Local_216[iParam0 /*19*/].f_10[Local_216[iParam0 /*19*/].f_16] = iParam1;
	Local_216[iParam0 /*19*/].f_16++;
}

void func_2933(int iParam0)//Position - 0xCA4D8
{
	func_2931(iParam0, 828722/*func_2935*/);
	func_2931(iParam0, 828690/*func_2934*/);
	func_2931(iParam0, 828449/*func_2929*/);
	func_2931(iParam0, 828425/*func_2928*/);
	func_2931(iParam0, 828401/*func_2927*/);
}

void func_2936(int iParam0)//Position - 0xCA552
{
	func_2592(iParam0, 0, 0);
	func_2591(iParam0, 0, 3);
	func_2591(iParam0, 0, 2);
	func_2591(iParam0, 0, 1);
	func_2592(iParam0, 1, 8);
	func_2591(iParam0, 1, 3);
	func_2592(iParam0, 2, 21);
	func_2591(iParam0, 2, 3);
	func_2592(iParam0, 3, 7);
}

var func_2937(int iParam0)//Position - 0xCA5A4
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_2938(int iParam0)//Position - 0xCA5B8
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_2940(int iParam0)//Position - 0xCA5D7
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_2941(int iParam0)//Position - 0xCA5EB
{
	Stack.Push(__LIB_14__.func_760(iParam0, 8));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_169);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_169.f_2);
		return StackVal;
	}
	return Local_202.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_2942(int iParam0)//Position - 0xCA628
{
	Stack.Push(__LIB_14__.func_760(iParam0, 8));
	Stack.Push(iParam0);
	Call_Loc(Local_210.f_156.f_169);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_210.f_156.f_169.f_1);
		return StackVal, StackVal, StackVal;
	}
	return Local_202.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_2943(int iParam0)//Position - 0xCA667
{
	return Local_202.f_38.f_1[iParam0 /*21*/].f_2;
}

int func_2945(var uParam0)//Position - 0xCA684
{
	switch (func_964())
	{
		case 22:
		case 24:
		case 25:
		case 23:
			return 1;
		default:
	}
	return 0;
}

var func_2960()//Position - 0xCA73B
{
	return Local_202.f_249;
}

void func_2966()//Position - 0xCA776
{
	func_770(0, 4, 171273/*func_774*/);
	func_2970(0, 1);
	func_2967(1, 2, 4, 5, 3, 171273/*func_774*/, 171273/*func_774*/, 171273/*func_774*/, 171273/*func_774*/, 1);
	func_770(3, 48, 171273/*func_774*/);
}

void func_2967(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xCA7B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_770(iVar0, 22, iParam5);
	func_2968(iVar0, iParam4, 829686/*func_2969*/);
	func_2970(iVar0, iVar1);
	func_2970(iVar0, iVar4);
	func_2970(iVar0, iVar5);
	func_2970(iVar0, iVar2);
	func_770(iVar1, 24, iParam6);
	func_2968(iVar1, iParam4, 829686/*func_2969*/);
	func_2970(iVar1, iVar4);
	func_2970(iVar1, iVar5);
	func_2970(iVar1, iVar2);
	func_770(iVar2, 25, iParam7);
	func_2968(iVar2, iParam4, 829686/*func_2969*/);
	func_2970(iVar2, iVar1);
	func_2970(iVar2, iVar4);
	func_2970(iVar2, iVar5);
	func_770(iVar3, 23, iParam8);
	func_2968(iVar3, iParam4, 829686/*func_2969*/);
	func_2970(iVar3, iVar1);
	func_2970(iVar3, iVar4);
	func_2970(iVar3, iVar5);
	func_2970(iVar3, iVar2);
}

void func_2968(int iParam0, var uParam1, int iParam2)//Position - 0xCA8AB
{
	int iVar0;
	var uVar1;
	iVar0 = Local_215[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_215[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_215[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_215[iParam0 /*21*/].f_19++;
}

int func_2969()//Position - 0xCA8F6
{
	if (func_2769(0))
	{
		return 1;
	}
	return 0;
}

void func_2970(int iParam0, int iParam1)//Position - 0xCA90B
{
	int iVar0;
	var uVar1;
	iVar0 = Local_215[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_215[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_215[iParam0 /*21*/].f_19++;
}

void func_2971()//Position - 0xCA945
{
	func_779(0, 4);
	func_777(0, 1, 823644/*func_2803*/);
	func_779(1, 22);
	func_777(1, 2, 823580/*func_2801*/);
	func_779(2, 24);
	func_777(2, 3, 823559/*func_2800*/);
	func_779(3, 48);
	func_773(3, 822894/*func_2781*/);
}

void func_2973()//Position - 0xCA9AD
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_540() != false;
	bVar1 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (func_3011() && __LIB_4__.func_715())
	{
		func_1705(0, 0, 0);
	}
	if (func_784(71))
	{
		func_2170(0);
	}
	func_2177(0);
	func_2395(0);
	func_3010();
	func_3009();
	func_3008();
	func_3007();
	func_2199();
	if (bVar1)
	{
		func_1816();
	}
	func_3006();
	if (func_3005())
	{
		func_3004();
	}
	__LIB_18__.func_369(0, __LIB_0__.func_684(Local_524.f_0));
	__LIB_21__.func_108(0);
	func_3002(bVar0);
	if (bVar1)
	{
		__LIB_21__.func_86(Local_575.f_260);
		func_3001();
		func_2235();
		if (__LIB_0__.func_114(iLocal_514))
		{
			__LIB_2__.func_229(0);
		}
	}
	func_2094(1, 1, 1);
	__LIB_26__.func_963();
	func_2999();
	func_2020();
	func_2998();
	func_2997();
	func_1747(1);
	func_2565(0);
	__LIB_0__.func_371(0);
	if (bVar0 || (bVar1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1))
	{
		func_2996();
		func_2994();
		func_2992();
		func_2991();
		if (bVar1)
		{
			func_829();
		}
	}
	OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_202.f_19.f_5[0 /*13*/].f_2, -1);
	__LIB_0__.func_371();
	__LIB_0__.func_371();
	if (Local_210.f_10 != 0)
	{
		Call_Loc(Local_210.f_10);
	}
	__LIB_0__.func_371();
	func_2457(0);
	if (bVar0)
	{
		func_2974();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2974()//Position - 0xCAAF5
{
	struct<3> Var0;
	if (Local_210.f_102.f_3 == 0)
	{
		return;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Stack.Push(&Var0);
	Call_Loc(Local_210.f_102.f_3);
	if (!StackVal)
	{
		return;
	}
	switch (Var0.f_0)
	{
		case 181:
			break;
		case 256:
			if (__LIB_1__.func_145())
			{
				__LIB_26__.func_942(Var0.f_1);
			}
			break;
		default:
			__LIB_26__.func_937(Var0.f_0, Var0.f_1, Var0.f_2);
			break;
	}
}

void func_2991()//Position - 0xCAD7A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_163)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_136[iVar0 /*5*/]))
		{
			if (func_165(iVar0, 26))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_575.f_136[iVar0 /*5*/]), false, true);
			}
			if (func_165(iVar0, 31))
			{
				if (__LIB_6__.func_924(Local_575.f_136[iVar0 /*5*/]))
				{
					__LIB_4__.func_509(&(Local_575.f_136[iVar0 /*5*/]));
				}
			}
			else
			{
				__LIB_1__.func_162(&(Local_575.f_136[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
}

void func_2992()//Position - 0xCADFD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < Local_202.f_130)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_575.f_119[iVar0 /*8*/]);
			if (func_164(iVar0, 22) && !__LIB_21__.func_80(iVar2, 0, 1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]))
				{
					return;
				}
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_575.f_119[iVar0 /*8*/]), false, true);
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_575.f_119[iVar0 /*8*/]), false, false);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_575.f_119[iVar0 /*8*/]), true);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_575.f_119[iVar0 /*8*/]), false), 1f, true, false, false, false);
			}
			if (iVar2 == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
			{
				VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
			}
			if (func_2993(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]))
				{
					if (bVar1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					__LIB_4__.func_509(&(Local_575.f_119[iVar0 /*8*/]));
				}
			}
			else
			{
				if (Local_210.f_352.f_53 != 0)
				{
					Stack.Push(iVar0);
					Call_Loc(Local_210.f_352.f_53);
				}
				if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Local_202.f_130.f_1[iVar0 /*15*/].f_3))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_119[iVar0 /*8*/]))
					{
						VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iVar2, false);
					}
				}
				else
				{
					__LIB_1__.func_162(&(Local_575.f_119[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

int func_2993(int iParam0)//Position - 0xCAF68
{
	bool bVar0;
	bVar0 = !__LIB_21__.func_80(NETWORK::NET_TO_VEH(Local_575.f_119[iParam0 /*8*/]), 0, 1);
	if (__LIB_14__.func_762(iParam0, 2) && bVar0)
	{
		return 1;
	}
	if (func_164(iParam0, 29))
	{
		if (bVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_2994()//Position - 0xCAFB3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_202.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iVar0 /*24*/]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_575.f_22[iVar0 /*24*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_22[iVar0 /*24*/]))
				{
					if (PED::GET_PED_TYPE(iVar1) == 6)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar1))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
						}
						TASK::CLEAR_PED_TASKS(iVar1);
						PED::SET_PED_KEEP_TASK(iVar1, false);
					}
				}
				PED::REMOVE_PED_FROM_GROUP(iVar1);
			}
			if (Local_210.f_156.f_191 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_210.f_156.f_191);
			}
			if (func_2995(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_22[iVar0 /*24*/]))
				{
					__LIB_4__.func_509(&(Local_575.f_22[iVar0 /*24*/]));
				}
			}
			else
			{
				__LIB_1__.func_162(&(Local_575.f_22[iVar0 /*24*/]));
			}
		}
		iVar0++;
	}
}

int func_2995(int iParam0)//Position - 0xCB088
{
	if (func_86(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_2996()//Position - 0xCB09E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_575.f_2[iVar0]))
			{
				__LIB_4__.func_509(&(Local_575.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2.f_15[iVar0]))
		{
			if (__LIB_6__.func_924(Local_575.f_2.f_15[iVar0]))
			{
				__LIB_4__.func_509(&(Local_575.f_2.f_15[iVar0]));
			}
			__LIB_1__.func_162(&(Local_575.f_2.f_15[iVar0]));
		}
		iVar0++;
	}
}

void func_2997()//Position - 0xCB12A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_6__.func_352(&(Local_506.f_2[iVar0]));
		func_2080(iVar0);
		iVar0++;
	}
}

void func_2998()//Position - 0xCB157
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_280)
	{
		__LIB_6__.func_352(&(uLocal_504[iVar0]));
		iVar0++;
	}
}

void func_2999()//Position - 0xCB180
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_260)
	{
		func_3000(iVar0);
		iVar0++;
	}
}

void func_3000(int iParam0)//Position - 0xCB1A4
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_538[iParam0 /*3*/].f_1))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_538[iParam0 /*3*/].f_1, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_538[iParam0 /*3*/].f_2))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_538[iParam0 /*3*/].f_2, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_538[iParam0 /*3*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_538[iParam0 /*3*/]));
	}
}

void func_3001()//Position - 0xCB201
{
	struct<3> Var0;
	Var0 = { func_198() };
	if (!__LIB_0__.func_86(Var0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Var0, 80f, false, false, true, true, true, false, 0);
	}
}

void func_3002(bool bParam0)//Position - 0xCB231
{
	if (bParam0)
	{
	}
	else
	{
		func_3003();
	}
}

void func_3003()//Position - 0xCB245
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_202.f_291)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_505[iVar0 /*4*/])))
		{
			TASK::DELETE_PATROL_ROUTE(&(Local_505[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

void func_3004()//Position - 0xCB27D
{
	Stack.Push(iLocal_516);
	Call_Loc(Local_210.f_15.f_18.f_2);
	WEAPON::REMOVE_WEAPON_FROM_PED(StackVal, StackVal);
}

int func_3005()//Position - 0xCB296
{
	if ((func_784(55) && !func_784(78)) && Local_210.f_15.f_18.f_2 != 0)
	{
		Call_Loc(Local_210.f_15.f_18.f_2);
		switch (StackVal)
		{
			case joaat("WEAPON_STUNGUN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_RAILGUN"):
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
				return 1;
			}
		default:
	}
	return 0;
}

void func_3006()//Position - 0xCB301
{
	if (!func_41(31))
	{
		return;
	}
	func_1784(0);
}

void func_3007()//Position - 0xCB31B
{
	if (!__LIB_0__.func_114())
	{
		return;
	}
	if (func_784(54))
	{
		__LIB_11__.func_54();
		__LIB_13__.func_297(0, -1, 1);
	}
	func_878(0, 0);
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 = -1;
	}
	if (Global_2815059.f_6725 != 0)
	{
		Global_2815059.f_6725 = 0;
	}
}

void func_3008()//Position - 0xCB380
{
	if (func_784(40))
	{
		CAM::DO_SCREEN_FADE_IN(5000);
	}
}

void func_3009()//Position - 0xCB398
{
	if (func_784(41))
	{
		HUD::SET_RADAR_ZOOM_PRECISE(0f);
		__LIB_11__.func_35(0);
		if (func_2172())
		{
			func_2170(0);
		}
		func_866(41);
	}
}

void func_3010()//Position - 0xCB3C5
{
	func_1750(9);
	if (func_152(iLocal_518, 13))
	{
		func_1750(13);
		if (Local_497.f_0 == -1)
		{
			PED::CLEAR_PED_PROP(iLocal_516, 0);
		}
		else
		{
			PED::SET_PED_PROP_INDEX(iLocal_516, 0, Local_497.f_0, Local_497.f_1, false);
			Local_497.f_0 = -1;
			Local_497.f_1 = -1;
		}
	}
}

bool func_3011()//Position - 0xCB412
{
	return func_784(26);
}

void func_3012(bool bParam0, bool bParam1)//Position - 0xCB420
{
	if (!func_784(31))
	{
		return;
	}
	if (!func_784(0))
	{
		Local_494.f_2 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_494.f_1);
		__LIB_0__.func_371();
		func_3013(bParam0, bParam1);
		func_145(0);
	}
}

void func_3013(bool bParam0, bool bParam1)//Position - 0xCB45E
{
	var uVar0;
	uVar0 = func_3171(func_540(), bParam0, bParam1);
	Local_494.f_0 = uVar0;
	__LIB_38__.func_248(bParam0, uVar0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 1);
}

int func_3171(int iParam0, bool bParam1, bool bParam2)//Position - 0xCF6C9
{
	if (bParam2)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 14:
			return 0;
		case 2:
			return 8;
		case 1:
			return 7;
		case 12:
			return 6;
		case 0:
			return 4;
		default:
	}
	if (func_3175() && func_3174())
	{
		return 13;
	}
	if (bParam1)
	{
		if (func_3172())
		{
			return 11;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

bool func_3172()//Position - 0xCF745
{
	if (Local_210.f_102.f_1 != 0)
	{
		Call_Loc(Local_210.f_102.f_1);
		return StackVal;
	}
	if (!func_491())
	{
		return 0;
	}
	if (func_2797() && func_3173(iLocal_514) < func_46())
	{
		return 1;
	}
	return (func_1770(iLocal_514) && !func_2797());
}

int func_3173(int iParam0)//Position - 0xCF79C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (__LIB_14__.func_763(iVar0, 4) && func_1768(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_3174()//Position - 0xCF7D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (!__LIB_14__.func_763(iVar0, 33))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_3175()//Position - 0xCF806
{
	return func_46() > 0;
}

int func_3177(struct<21> Param0)//Position - 0xCF81C
{
	int iVar0;
	__LIB_0__.func_673(__LIB_6__.func_875(Param0.f_0), Param0);
	__LIB_1__.func_569(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_575.f_2.f_11[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_545[iVar0] = __LIB_0__.func_160();
		uLocal_546[iVar0] = __LIB_0__.func_160();
		Local_477[iVar0 /*7*/].f_4 = __LIB_0__.func_160();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_198[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_127[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_506.f_2[iVar0] = -1;
		iVar0++;
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_575, 292, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_582, 1985, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_3181(__LIB_0__.func_685(Param0.f_0, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT());
	__LIB_0__.func_371();
	__LIB_13__.func_328();
	__LIB_0__.func_371();
	iLocal_493 = PLAYER::GET_PLAYER_GROUP(iLocal_514);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_575.f_223 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	}
	Local_582[NETWORK::PARTICIPANT_ID_TO_INT() /*62*/].f_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	return 1;
}

void func_3181(int iParam0, int iParam1)//Position - 0xCF999
{
	Local_524.f_0 = iParam0;
	Local_524.f_1 = iParam1;
}

void func_3187(bool bParam0)//Position - 0xD07B1
{
	iLocal_514 = PLAYER::PLAYER_ID();
	iLocal_515 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iLocal_516 = PLAYER::PLAYER_PED_ID();
	Local_519 = { ENTITY::GET_ENTITY_COORDS(iLocal_516, false) };
	bLocal_510 = __LIB_1__.func_264(iLocal_514, 0, 1);
	if (bParam0)
	{
		bLocal_512 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		iLocal_517 = NETWORK::PARTICIPANT_ID_TO_INT();
		iLocal_518 = NETWORK::PARTICIPANT_ID();
		bLocal_513 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_518);
	}
	if (bLocal_510)
	{
		bLocal_511 = PLAYER::IS_PLAYER_PLAYING(iLocal_514);
	}
	else
	{
		bLocal_511 = false;
	}
	if (bLocal_511)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, false))
		{
			iLocal_520 = PED::GET_VEHICLE_PED_IS_IN(iLocal_516, false);
			iLocal_521 = ENTITY::GET_ENTITY_MODEL(iLocal_520);
		}
		else
		{
			func_3188();
		}
	}
	else
	{
		func_3188();
	}
	if (__LIB_2__.func_47(&uLocal_551, 1000, 0))
	{
		if (bLocal_513)
		{
			if (!__LIB_0__.func_394(Local_582[iLocal_517 /*62*/].f_34, Local_519, 1f, 0))
			{
				Local_582[iLocal_517 /*62*/].f_34 = { Local_519 };
			}
		}
		__LIB_0__.func_579(&uLocal_551);
	}
	bLocal_512 = bLocal_512;
	iLocal_517 = iLocal_517;
	iLocal_518 = iLocal_518;
	Local_519 = { Local_519 };
	bLocal_513 = bLocal_513;
	iLocal_521 = iLocal_521;
	bLocal_522 = __LIB_36__.func_232(1, 0, 1);
	bLocal_523 = func_2143();
}

void func_3188()//Position - 0xD08D6
{
	int iVar0;
	iLocal_520 = iVar0;
	iLocal_521 = 0;
}

