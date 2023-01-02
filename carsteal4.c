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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	float fLocal_48 = 0f;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	bool bLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	float fLocal_83[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_93[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_94[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_95[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_96[10] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_97 = 10;
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
	float fLocal_108[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_109[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[20] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118 = 0f;
	var uLocal_119 = 0;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	int iLocal_133[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_134[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_135[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_136[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_138[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_139[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	struct<3> Local_157[60];
	struct<3> Local_158[20];
	struct<3> Local_159[10];
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
	int iLocal_203 = 0;
	int iLocal_204[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_206[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_211[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_212[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_213[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_214[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 12;
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
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	bool bLocal_235 = 0;
	int iLocal_236 = 0;
	bool bLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	int iLocal_244 = 0;
	bool bLocal_245 = 0;
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
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
	int iLocal_260[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	float fLocal_324 = 0f;
	float fLocal_325 = 0f;
	struct<3> Local_326 = { 0, 0, 0 } ;
	struct<3> Local_327 = { 0, 0, 0 } ;
	struct<3> Local_328 = { 0, 0, 0 } ;
	struct<3> Local_329 = { 0, 0, 0 } ;
	struct<3> Local_330 = { 0, 0, 0 } ;
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	struct<3> Local_333 = { 0, 0, 0 } ;
	struct<3> Local_334 = { 0, 0, 0 } ;
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<3> Local_336 = { 0, 0, 0 } ;
	struct<3> Local_337 = { 0, 0, 0 } ;
	struct<3> Local_338 = { 0, 0, 0 } ;
	struct<3> Local_339 = { 0, 0, 0 } ;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	char* sLocal_344 = NULL;
	char* sLocal_345 = NULL;
	char* sLocal_346 = NULL;
	char* sLocal_347 = NULL;
	char* sLocal_348 = NULL;
	char* sLocal_349 = NULL;
	char* sLocal_350 = NULL;
	char* sLocal_351 = NULL;
	char* sLocal_352 = NULL;
	char* sLocal_353 = NULL;
	char* sLocal_354 = NULL;
	char* sLocal_355 = NULL;
	char* sLocal_356 = NULL;
	char* sLocal_357 = NULL;
	char* sLocal_358 = NULL;
	char* sLocal_359 = NULL;
	int iLocal_360 = 0;
	struct<6> Local_361 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_362[24] = "";
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372[3] = { 0, 0, 0 };
	int iLocal_373[3] = { 0, 0, 0 };
	int iLocal_374 = 0;
	int* iLocal_375 = NULL;
	int* iLocal_376 = NULL;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_380 = NULL;
	int iLocal_381 = 0;
	int* iLocal_382 = NULL;
	int* iLocal_383 = NULL;
	int* iLocal_384 = NULL;
	int iLocal_385 = 0;
	int iLocal_386[5] = { 0, 0, 0, 0, 0 };
	struct<19> Local_387[6];
	struct<3> Local_388 = { 0, 0, 0 } ;
	struct<3> Local_389 = { 0, 0, 0 } ;
	var uLocal_390 = 0;
	struct<4> Local_391[14];
	struct<14> Local_392 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 3;
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
	struct<14> Local_422[10];
	struct<6> Local_423 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_424 = 3;
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
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	var uLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 4;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 4;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 4;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 4;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 4;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 4;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 4;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	struct<20> Local_513 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<10> Local_528[16];
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = -1;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 1000;
	var uLocal_543 = 1000;
	var uLocal_544 = 0;
	bool bLocal_545 = 0;
	bool bLocal_546 = 0;
	float fLocal_547 = 0f;
	float fLocal_548 = 0f;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	float fLocal_553 = 0f;
	bool bLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 2;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 2;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 20;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = -1;
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
	var uLocal_599 = 1065353216;
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
	var uLocal_626 = -1;
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
	var uLocal_656 = 1065353216;
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
	var uLocal_683 = -1;
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
	var uLocal_713 = 1065353216;
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
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 1065353216;
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
	var uLocal_797 = -1;
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
	var uLocal_827 = 1065353216;
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
	var uLocal_854 = -1;
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
	var uLocal_884 = 1065353216;
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
	var uLocal_911 = -1;
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
	var uLocal_941 = 1065353216;
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
	var uLocal_968 = -1;
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
	var uLocal_998 = 1065353216;
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
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = -1;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
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
	var uLocal_1055 = 1065353216;
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
	var uLocal_1082 = -1;
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
	var uLocal_1112 = 1065353216;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
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
	var uLocal_1139 = -1;
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
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 1065353216;
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
	var uLocal_1196 = -1;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
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
	var uLocal_1226 = 1065353216;
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
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = -1;
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
	var uLocal_1283 = 1065353216;
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
	var uLocal_1310 = -1;
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
	var uLocal_1340 = 1065353216;
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
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
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
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 1065353216;
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
	var uLocal_1424 = -1;
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
	var uLocal_1454 = 1065353216;
	var uLocal_1455 = 0;
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
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = -1;
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
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
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
	var uLocal_1511 = 1065353216;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = -1;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 1065353216;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = -1;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 1065353216;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = -1;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 1065353216;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 16;
	var uLocal_1707 = 0;
	var uLocal_1708 = -1082130432;
	var uLocal_1709 = 0;
	var uLocal_1710 = -1082130432;
	var uLocal_1711 = 0;
	var uLocal_1712 = -1082130432;
	var uLocal_1713 = 0;
	var uLocal_1714 = -1082130432;
	var uLocal_1715 = 0;
	var uLocal_1716 = -1082130432;
	var uLocal_1717 = 0;
	var uLocal_1718 = -1082130432;
	var uLocal_1719 = 0;
	var uLocal_1720 = -1082130432;
	var uLocal_1721 = 0;
	var uLocal_1722 = -1082130432;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1082130432;
	var uLocal_1725 = 0;
	var uLocal_1726 = -1082130432;
	var uLocal_1727 = 0;
	var uLocal_1728 = -1082130432;
	var uLocal_1729 = 0;
	var uLocal_1730 = -1082130432;
	var uLocal_1731 = 0;
	var uLocal_1732 = -1082130432;
	var uLocal_1733 = 0;
	var uLocal_1734 = -1082130432;
	var uLocal_1735 = 0;
	var uLocal_1736 = -1082130432;
	var uLocal_1737 = 0;
	var uLocal_1738 = -1082130432;
	var uLocal_1739 = 16;
	var uLocal_1740 = 0;
	var uLocal_1741 = -1082130432;
	var uLocal_1742 = 0;
	var uLocal_1743 = -1082130432;
	var uLocal_1744 = 0;
	var uLocal_1745 = -1082130432;
	var uLocal_1746 = 0;
	var uLocal_1747 = -1082130432;
	var uLocal_1748 = 0;
	var uLocal_1749 = -1082130432;
	var uLocal_1750 = 0;
	var uLocal_1751 = -1082130432;
	var uLocal_1752 = 0;
	var uLocal_1753 = -1082130432;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1082130432;
	var uLocal_1756 = 0;
	var uLocal_1757 = -1082130432;
	var uLocal_1758 = 0;
	var uLocal_1759 = -1082130432;
	var uLocal_1760 = 0;
	var uLocal_1761 = -1082130432;
	var uLocal_1762 = 0;
	var uLocal_1763 = -1082130432;
	var uLocal_1764 = 0;
	var uLocal_1765 = -1082130432;
	var uLocal_1766 = 0;
	var uLocal_1767 = -1082130432;
	var uLocal_1768 = 0;
	var uLocal_1769 = -1082130432;
	var uLocal_1770 = 0;
	var uLocal_1771 = -1082130432;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = -1082130432;
	var uLocal_1789 = -1082130432;
	var uLocal_1790 = 1;
	var uLocal_1791 = 1;
	var uLocal_1792 = 1;
	var uLocal_1793 = -1;
	var uLocal_1794 = -1;
	var uLocal_1795 = -1;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	bool bLocal_1800 = 0;
	int iLocal_1801 = 0;
	bool bLocal_1802 = 0;
	int iLocal_1803 = 0;
	int iLocal_1804 = 0;
	bool bLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	int iLocal_1810 = 0;
	int iLocal_1811 = 0;
	int iLocal_1812 = 0;
	int iLocal_1813 = 0;
	float fLocal_1814 = 0f;
	float fLocal_1815 = 0f;
	float fLocal_1816 = 0f;
	float fLocal_1817 = 0f;
	float fLocal_1818 = 0f;
	float fLocal_1819 = 0f;
	float fLocal_1820 = 0f;
	float fLocal_1821 = 0f;
	float fLocal_1822 = 0f;
	float fLocal_1823 = 0f;
	float fLocal_1824 = 0f;
	float fLocal_1825 = 0f;
	float fLocal_1826 = 0f;
	float fLocal_1827 = 0f;
	float fLocal_1828 = 0f;
	float fLocal_1829 = 0f;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	struct<3> Local_1833 = { 0, 0, 0 } ;
	struct<3> Local_1834 = { 0, 0, 0 } ;
	struct<3> Local_1835 = { 0, 0, 0 } ;
	struct<3> Local_1836 = { 0, 0, 0 } ;
	struct<3> Local_1837 = { 0, 0, 0 } ;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_48 = 1f;
	iLocal_52 = 1;
	iLocal_59 = 1;
	bLocal_81 = true;
	fLocal_112 = 120f;
	fLocal_113 = 0f;
	fLocal_115 = 1f;
	fLocal_116 = 0f;
	fLocal_117 = 1f;
	fLocal_118 = 30f;
	fLocal_120 = 1f;
	fLocal_121 = 5f;
	fLocal_122 = 1f;
	fLocal_123 = 1f;
	fLocal_124 = 100f;
	fLocal_125 = 100f;
	fLocal_126 = 0f;
	fLocal_127 = 7000f;
	fLocal_128 = 0f;
	fLocal_129 = 0f;
	fLocal_130 = 0.3f;
	fLocal_131 = 0.5f;
	fLocal_132 = 50f;
	iLocal_143 = -1;
	iLocal_151 = -1;
	iLocal_152 = -1;
	iLocal_261 = 3;
	iLocal_297 = -1;
	iLocal_299 = -1;
	fLocal_319 = 221.0246f;
	fLocal_320 = 47.0949f;
	fLocal_321 = 0f;
	fLocal_322 = 0f;
	fLocal_323 = -50f;
	fLocal_324 = 154.5624f;
	fLocal_325 = 0f;
	Local_326 = { 517.0918f, -1327.6111f, 28.2764f };
	Local_327 = { 508.1402f, -1316.7883f, 30.2369f };
	Local_328 = { 520.1395f, -1326.7764f, 28.3382f };
	Local_329 = { 1566.4338f, 6463.426f, 23.191f };
	Local_332 = { -2197.7756f, 4265.8936f, 47.3056f };
	Local_333 = { 1576.93f, 6451.7017f, 24.0479f };
	Local_334 = { 0.75f, -10.85f, -1f };
	Local_335 = { -0.75f, -10.85f, -1f };
	Local_337 = { 255f, 100f, 10f };
	Local_338 = { 0.6f, 0.5f, 0f };
	Local_339 = { 0f, -0.08f, 0.05f };
	sLocal_344 = "MattCarHeist";
	sLocal_345 = "carsteal5_10";
	sLocal_346 = "carsteal5_11";
	sLocal_347 = "misscarstealfinale";
	sLocal_348 = "";
	sLocal_349 = "misscarstealfinalecar_5_ig_8";
	sLocal_350 = "misscarstealfinalecar_5_ig_6";
	sLocal_351 = "misscarstealfinalecar_5_ig_3";
	sLocal_352 = "misscarstealfinalecar_5_ig_4";
	sLocal_353 = "misscarstealfinalecar_5_ig_1";
	sLocal_354 = "misscarstealfinalecar_5_ig_10_switch";
	sLocal_355 = "misscarsteal4leadinout";
	sLocal_356 = "veh@truck@ps@base";
	sLocal_357 = "misscarsteal4asleep";
	sLocal_358 = "FACIALS@P_M_ONE@BASE";
	sLocal_359 = "shake_cam_all@";
	iLocal_456 = joaat("packer");
	iLocal_457 = joaat("tr4");
	iLocal_458 = joaat("prop_tyre_spike_01");
	iLocal_459 = joaat("S_M_Y_Sheriff_01");
	iLocal_460 = joaat("sheriff");
	iLocal_461 = joaat("IG_Molly");
	iLocal_462 = joaat("felon");
	iLocal_463 = joaat("A_M_Y_Business_02");
	iLocal_464 = joaat("oracle2");
	iLocal_468 = 2;
	bLocal_545 = true;
	fLocal_547 = 0.8f;
	fLocal_548 = 1f;
	iLocal_549 = 1000;
	iLocal_550 = 900;
	iLocal_551 = 600;
	iLocal_552 = 500;
	fLocal_553 = 0.25f;
	fLocal_1814 = 0.125f;
	fLocal_1815 = 0.1f;
	fLocal_1816 = 0.08f;
	fLocal_1817 = 0.25f;
	fLocal_1818 = 0.72f;
	fLocal_1819 = 0.725f;
	fLocal_1820 = 0f;
	fLocal_1821 = 0f;
	fLocal_1822 = 0f;
	fLocal_1823 = 0.3f;
	fLocal_1824 = 0f;
	fLocal_1825 = 0.245f;
	fLocal_1826 = 30f;
	fLocal_1827 = 100f;
	fLocal_1828 = 0f;
	fLocal_1829 = 0f;
	iLocal_1832 = 250;
	Local_1833 = { 15f, 10f, 0f };
	Local_1834 = { -5f, -10f, 0f };
	Local_1835 = { 0f, -40f, 0f };
	Local_1836 = { -0.75f, -0.8f, 1f };
	Local_1837 = { 0f, 0f, 180f };
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_939();
		func_915();
	}
	func_913();
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_910(0, 0);
		}
		else if (iVar0 == 1)
		{
			func_910(1, 0);
			bLocal_242 = true;
			__LIB_0__::func_544(8, 0, 0, 1, 0);
			__LIB_0__::func_544(9, 0, 0, 1, 0);
			__LIB_0__::func_544(10, 0, 0, 1, 0);
			__LIB_0__::func_544(7, 0, 0, 1, 0);
		}
		else if (iVar0 == 2)
		{
			func_910(3, 0);
		}
		else if (iVar0 == 3)
		{
			func_910(4, 0);
		}
		else if (iVar0 == 4)
		{
			func_910(5, 0);
		}
		else if (iVar0 > 4)
		{
			func_910(7, 0);
		}
		bLocal_246 = true;
	}
	else
	{
		func_862(0, "START_PHONE_CALL", 0, 0, 0, 1);
	}
	if (__LIB_0__::func_323() || __LIB_0__::func_2(0))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (bLocal_246)
		{
			if (iLocal_466 == 1)
			{
				bLocal_246 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_469[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_469[1]))
			{
				func_847(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_469[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_469[2]))
			{
				func_847(2);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_389.f_0))
		{
			if (PED::IS_PED_INJURED(Local_389.f_0))
			{
				func_847(12);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
			{
				func_847(4);
			}
			else
			{
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_388.f_1, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
			{
				func_847(4);
			}
			else
			{
				if (((__LIB_15__::func_929(&Local_388) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_388.f_1, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_388.f_1, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_388.f_1, 1, 40000))
				{
					func_847(8);
				}
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_388.f_0, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
		{
			if (PED::IS_PED_INJURED(iLocal_383))
			{
				func_847(17);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_376))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_376, false))
			{
				func_847(21);
			}
		}
		iVar1 = 0;
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_387.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_387[iVar1 /*19*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iVar1 /*19*/], false))
				{
					iVar2++;
				}
				else if (iLocal_465 == 1 || iLocal_465 == 5)
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_387[iVar1 /*19*/]))
					{
						iVar3 = 1;
						if (iLocal_465 == 5 && iVar1 == iLocal_261)
						{
							iVar3 = 1;
						}
						if (__LIB_15__::func_929(&(Local_387[iVar1 /*19*/])) && iVar3)
						{
							func_847(7);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
			if (iVar2 == 1)
			{
				func_847(3);
			}
			else if (iVar2 == Local_387.f_0)
			{
				func_847(6);
			}
			else
			{
				func_847(5);
			}
		}
		if (iLocal_465 > 1)
		{
			if (!__LIB_40__::func_631())
			{
				__LIB_16__::func_18(1);
			}
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_63165) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_63165) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_63165) != iVar4))
				{
					__LIB_0__::func_505(iVar4, -1);
				}
				if (iVar4 != Local_388.f_0)
				{
					if (iLocal_465 > 3)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Global_63167) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_63167) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_63167) != iVar4))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false) && VEHICLE::IS_VEHICLE_MODEL(iVar4, joaat("jb700")))
							{
								__LIB_0__::func_377(iVar4, -1);
							}
						}
					}
				}
			}
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_PackMan", 0);
		if (iLocal_318 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		switch (iLocal_465)
		{
			case 0:
				func_753();
				break;
			case 1:
				func_696();
				break;
			case 2:
				func_692();
				break;
			case 3:
			case 4:
				func_597();
				break;
			case 5:
				func_548();
				break;
			case 6:
				func_460();
				break;
			case 7:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x7C2
{
	int iVar0;
	int iVar1;
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			if (iLocal_257 != 99)
			{
				if (func_409())
				{
					if (bLocal_246)
					{
						__LIB_0__::func_427(1542.9697f, 6481.6245f, 21.582f, 314.9911f, 1, 0);
						iLocal_257 = 99;
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1542.9697f, 6481.6245f, 21.582f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						iLocal_257 = 99;
					}
				}
			}
			else
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_329, 50f, false, false, false, false, false, false, 0);
				if ((((((__LIB_0__::func_109() && func_405(1563.57f, 6465.22f, 23.96f, 231.4902f)) && func_402()) && func_398(1522.9697f, 6481.6245f, 21.582f, 200.8915f)) && func_53(1512.9697f, 6481.6245f, 21.582f, 204.3612f)) && func_52(0)) && func_51(0))
				{
					__LIB_0__::func_433(0, -1, 0);
					func_47(1);
					__LIB_14__::func_804(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_469[2]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_469[2], Local_388.f_0, -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[2], true);
							PED::SET_PED_MAX_HEALTH(iLocal_469[2], 1800);
							ENTITY::SET_ENTITY_HEALTH(iLocal_469[2], 1800, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_469[2], 3, false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_469[2], false);
						}
						if (!PED::IS_PED_INJURED(Local_389.f_0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_388.f_0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
							PED::SET_PED_MAX_HEALTH(Local_389.f_0, 1800);
							ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 1800, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_389.f_0, 3, false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_389.f_0, false);
						}
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_0, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_388.f_0, false, joaat("PLAYER"));
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_388.f_1, 5, false, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
					{
						ENTITY::DETACH_ENTITY(Local_387[iLocal_261 /*19*/], true, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_387[iLocal_261 /*19*/], false);
						VEHICLE::SET_VEHICLE_STRONG(Local_387[iLocal_261 /*19*/], true);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_387[iLocal_261 /*19*/], true);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], -1);
						ENTITY::SET_ENTITY_COLLISION(Local_387[iLocal_261 /*19*/], true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_387[iLocal_261 /*19*/], true, true, false);
						ENTITY::SET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], 1542.9697f, 6481.6245f, 21.582f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_387[iLocal_261 /*19*/], 231.4902f);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iLocal_261 /*19*/], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_387[iLocal_261 /*19*/], 5f);
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_387.f_0)
					{
						if (iVar0 != iLocal_261)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iVar0 /*19*/], false))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iVar0 /*19*/], false);
							}
						}
						iVar0++;
					}
					func_36(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					iLocal_231 = 0;
				}
			}
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE("CAR_5_EXT", 8);
			__LIB_16__::func_309(1, 0);
			func_25("CAR_5_EXT");
			if (__LIB_0__::func_90() && !__LIB_13__::func_755(&Local_392, 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				if (!PED::IS_PED_INJURED(iLocal_383))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_383, "Molly", 0, 0, 0);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_383);
				}
				if (!PED::IS_PED_INJURED(iLocal_384))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_384, "CAR_5_Driver", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_376, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_376, "Felon" /* GXT: Felon */, 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_AREA(1547.4613f, 6427.1416f, 0.6085f, 1577.7007f, 6472.8677f, 58.6085f, true, true);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
				RECORDING::REPLAY_START_EVENT(4);
				SYSTEM::SETTIMERB(0);
				Local_389.f_2 = 0;
				iLocal_257 = 0;
				iLocal_236 = 0;
				iLocal_251 = 0;
				iLocal_466 = 1;
			}
		}
	}
	if (iLocal_466 == 1)
	{
		if (!iLocal_251)
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 55000)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(1570.4407f, 6426.1177f, 23.428368f, 1644.3262f, 6396.519f, 35.548843f, 17.25f, false, false, false, false, false, 0, 0);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				iLocal_251 = 1;
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		switch (iLocal_257)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
					CAM::STOP_GAMEPLAY_HINT(true);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_377, false))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_377, fLocal_324);
						ENTITY::SET_ENTITY_COORDS(iLocal_377, Local_333, true, false, false, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_387[iLocal_261 /*19*/], false, false, false);
						if (ENTITY::IS_ENTITY_AT_COORD(Local_387[iLocal_261 /*19*/], 1587.147f, 6446.023f, 25.640854f, 3f, 6f, 2f, false, true, 0))
						{
							ENTITY::SET_ENTITY_HEADING(Local_387[iLocal_261 /*19*/], 231.4902f);
							ENTITY::SET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], 1542.9697f, 6481.6245f, 21.582f, true, false, false, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_388.f_0, 0f);
					}
					func_9(&Local_423);
					STREAMING::REMOVE_ANIM_DICT(sLocal_355);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, false, false, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					AUDIO::STOP_SOUND(iLocal_1830);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_STEAL_4");
					__LIB_16__::func_11();
					iLocal_257++;
				}
				break;
			case 1:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_236 = 1;
				}
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Molly", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_376, false) && !PED::IS_PED_INJURED(iLocal_383))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_383, iLocal_376, 2);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CAR_5_Driver", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_376, false) && !PED::IS_PED_INJURED(iLocal_384))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_384, iLocal_376, -1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_384, iLocal_376, 133.1f, 6550.4f, 31.4f, 70f, 786599, 5f);
							PED::SET_PED_KEEP_TASK(iLocal_384, true);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Felon" /* GXT: Felon */, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_376, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_376, true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_376, true, true, false);
							ENTITY::SET_ENTITY_HEADING(iLocal_376, 152.2173f);
							ENTITY::SET_ENTITY_COORDS(iLocal_376, 1589.9984f, 6438.8867f, 24.1705f, true, false, false, true);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_376, 7.5f);
						}
					}
				}
				else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					func_7(&(iLocal_469[2]), 1, 0);
					func_7(&Local_389, 1, 0);
					iVar1 = 0;
					while (iVar1 < Local_387.f_0)
					{
						func_6(&(Local_387[iVar1 /*19*/]), 1, 1);
						iVar1++;
					}
					func_6(&(Local_388.f_1), 1, 1);
					func_6(&Local_388, 1, 1);
					if (iLocal_236 == 1)
					{
						func_7(&iLocal_383, 1, 0);
						func_7(&iLocal_384, 1, 0);
						func_6(&iLocal_376, 1, 1);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1586.3639f, 6446.762f, 24.1461f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 160.0188f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					RECORDING::REPLAY_STOP_EVENT();
					SYSTEM::SETTIMERB(0);
					iLocal_257++;
				}
				break;
			case 2:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				if (SYSTEM::TIMERB() > 3000 || iLocal_236)
				{
					iLocal_466 = 2;
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_469[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
		{
			switch (Local_389.f_2)
			{
				case 0:
					VEHICLE::REQUEST_VEHICLE_RECORDING(100, sLocal_344);
					if ((CUTSCENE::IS_CUTSCENE_PLAYING() && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, sLocal_344)) && CUTSCENE::GET_CUTSCENE_TIME() > 29000)
					{
						VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_388.f_0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
							{
								if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_387[iLocal_261 /*19*/]))
								{
									VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_387[iLocal_261 /*19*/], Local_388.f_1, 0f, 0f, 0f, Local_387[iLocal_261 /*19*/].f_2, Local_387[iLocal_261 /*19*/].f_5, -1f);
								}
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_387[iLocal_261 /*19*/], false);
								VEHICLE::SET_VEHICLE_STRONG(Local_387[iLocal_261 /*19*/], true);
								VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_387[iLocal_261 /*19*/], true);
								AUDIO::SET_HORN_ENABLED(Local_387[iLocal_261 /*19*/], false);
							}
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_388.f_0, true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_388.f_0, 100, sLocal_344, true);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_388.f_0, false);
						VEHICLE::SET_PLAYBACK_SPEED(Local_388.f_0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_388.f_1, 5, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[2], true);
						Local_389.f_2++;
					}
					break;
				case 1:
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_388.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0.191836f, -9.89637f, 0.27933f), false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_388.f_1, ENTITY::GET_ENTITY_HEADING(Local_388.f_0));
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_388.f_0, Local_388.f_1, 1f);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_388.f_1, 5, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_388.f_1);
					}
					if (CUTSCENE::GET_CUTSCENE_TIME() > 49000)
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_388.f_1, 5, true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_388.f_0, 1f);
						Local_389.f_2++;
					}
					break;
				case 2:
					break;
				}
			}
	}
	if (iLocal_466 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1547.4613f, 6427.1416f, 0.6085f, 1577.7007f, 6472.8677f, 58.6085f, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_2();
	}
	if (iLocal_466 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_236 = 1;
		iLocal_466 = 1;
	}
}

void func_2()//Position - 0x11D0
{
	__LIB_0__::func_544(8, 0, 0, 1, 0);
	__LIB_0__::func_544(9, 0, 0, 1, 0);
	__LIB_0__::func_544(10, 0, 0, 1, 0);
	__LIB_0__::func_544(7, 0, 0, 1, 0);
	__LIB_16__::func_11();
	__LIB_0__::func_526(0, 0);
	func_915();
}

void func_6(int* iParam0, bool bParam1, bool bParam2)//Position - 0x134D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, true, true);
				}
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_7(int* iParam0, bool bParam1, bool bParam2)//Position - 0x1397
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_356, "sit", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_356, "die", 3))
					{
						ENTITY::DETACH_ENTITY(*iParam0, true, true);
					}
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
			}
			AUDIO::STOP_PED_SPEAKING(*iParam0, false);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*iParam0);
			if (bParam2)
			{
				PED::SET_PED_KEEP_TASK(*iParam0, bParam2);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_9(var uParam0)//Position - 0x149F
{
	STREAMING::REMOVE_PTFX_ASSET();
	if (uParam0->f_2 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_2))
		{
			AUDIO::STOP_SOUND(uParam0->f_2);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_2);
		uParam0->f_2 = -1;
	}
	if (uParam0->f_3 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_3))
		{
			AUDIO::STOP_SOUND(uParam0->f_3);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_3);
		uParam0->f_3 = -1;
	}
}

void func_25(char* sParam0)//Position - 0x1893
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == joaat("car_5_mcs_1"))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(Local_389.f_0) && !PED::IS_PED_INJURED(iLocal_469[2]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_389.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", iLocal_469[2], 0);
			}
		}
		else if (iVar0 == -1189620261)
		{
			if ((!PED::IS_PED_INJURED(func_26(1)) && !PED::IS_PED_INJURED(func_26(2))) && !PED::IS_PED_INJURED(Local_389.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_26(1), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_26(2), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_389.f_0, 0);
			}
		}
		else if (iVar0 == 1439764295)
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(iLocal_382))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", iLocal_382, 0);
			}
		}
		else if (iVar0 == joaat("car_5_ext"))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(iLocal_383))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("A_F_Y_Vinewood_02", iLocal_383, 0);
			}
		}
	}
}

int func_26(int iParam0)//Position - 0x19B7
{
	if (__LIB_15__::func_944() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_469[__LIB_0__::func_682(iParam0)];
}

void func_36(bool bParam0)//Position - 0x1C73
{
	int iVar0;
	iVar0 = 0;
	if (bParam0)
	{
		if (iLocal_386[0] == 0)
		{
			iLocal_386[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-2257.812f, 4221.4644f, 0.1865f, -2119.2112f, 4336.617f, 54.1865f, false, true, true, true);
		}
		if (iLocal_386[1] == 0)
		{
			iLocal_386[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-470.8388f, 5992.07f, 0.8099f, -412.9256f, 6094.3013f, 38.3099f, false, true, true, true);
		}
		if (iLocal_386[2] == 0)
		{
			iLocal_386[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-107.0392f, 6259.404f, 0.2007f, -94.945625f, 6268.5176f, 38.3446f, false, true, true, true);
		}
		if (iLocal_386[3] == 0)
		{
			iLocal_386[3] = PED::ADD_SCENARIO_BLOCKING_AREA(1547.0812f, 6406.139f, 0.7764f, 1650.0532f, 6498.2285f, 40.7764f, false, true, true, true);
		}
		if (iLocal_386[4] == 0)
		{
			iLocal_386[4] = PED::ADD_SCENARIO_BLOCKING_AREA(-38.985653f, 6296.902f, 0.2007f, -25.40839f, 6308.043f, 38.3446f, false, true, true, true);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1547.0812f, 6406.139f, 0.7764f, 1650.0532f, 6498.2285f, 60.7764f, false, true);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_BIKE", false);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_CAR", false);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_NEXT_TO_CAR", false);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_386)
		{
			if (iLocal_386[iVar0] != 0)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_386[iVar0], false);
				iLocal_386[iVar0] = 0;
			}
			iVar0++;
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1547.0812f, 6406.139f, 0.7764f, 1650.0532f, 6498.2285f, 60.7764f, true, true);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_BIKE", true);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_CAR", true);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_POLICE_NEXT_TO_CAR", true);
	}
}

void func_47(bool bParam0)//Position - 0x240B
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hauler"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pounder"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("scrap"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mixer"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("flatbed"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailersmall"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boattrailer"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr3"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr4"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailerlogs"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailers"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailers2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trailers3"), bParam0);
}

int func_51(bool bParam0)//Position - 0x25C1
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_377))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_333) < 40000f || CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::REQUEST_MODEL(iLocal_464);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_464))
			{
				if (bParam0)
				{
					return 1;
				}
				else
				{
					MISC::CLEAR_AREA(Local_333, 10f, true, false, false, false);
					iLocal_377 = VEHICLE::CREATE_VEHICLE(iLocal_464, Local_333, fLocal_324, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_377, 61, 61);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_377, 67, 0);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_377, 1f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_377, 5f);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_377, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_464);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0)//Position - 0x2681
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	Var0 = { 1587.4498f, 6447.6797f, 24.1753f };
	Var1 = { 1587.7891f, 6445.383f, 24.2117f };
	fVar2 = 88.1625f;
	fVar3 = 156.445f;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_376))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1) < 40000f)
		{
			STREAMING::REQUEST_MODEL(iLocal_461);
			STREAMING::REQUEST_MODEL(iLocal_462);
			STREAMING::REQUEST_MODEL(iLocal_463);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_461) && STREAMING::HAS_MODEL_LOADED(iLocal_462)) && STREAMING::HAS_MODEL_LOADED(iLocal_463))
			{
				if (bParam0)
				{
					return 1;
				}
				else
				{
					MISC::CLEAR_AREA(Var1, 10f, true, false, false, false);
					iLocal_376 = VEHICLE::CREATE_VEHICLE(iLocal_462, Var1, fVar3, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_376, 0, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_376, 0, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_376, "665LDI37");
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_376, 0f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_376, 5f);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_376, 3, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_376, true);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_376, false);
					iLocal_383 = PED::CREATE_PED(26, iLocal_461, Var0, fVar2, true, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_383, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_383, joaat("PLAYER"));
					PED::SET_PED_PROP_INDEX(iLocal_383, 1, 0, 0, false);
					PED::SET_PED_LOD_MULTIPLIER(iLocal_383, 2f);
					iLocal_468 = 2;
					iLocal_299 = -1;
					iLocal_384 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_376, 26, iLocal_463, -1, true, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_384, joaat("PLAYER"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_461);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_463);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_53(struct<3> Param0, float fParam1)//Position - 0x2817
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469[2]))
	{
		if (func_55(&(iLocal_469[2]), 2, Param0, fParam1, 1, 0, 0))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_469[2], true);
			__LIB_0__::func_222(&Local_528, 2, iLocal_469[2], "TREVOR", 0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_469[2], false);
			PED::SET_PED_MAX_HEALTH(iLocal_469[2], 200);
			ENTITY::SET_ENTITY_HEALTH(iLocal_469[2], 200, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_469[2], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_469[2], joaat("PLAYER"));
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_55(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2948
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_0__::func_550(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_379(*iParam0);
			__LIB_37__::func_182(*iParam0, 1, 0);
			__LIB_37__::func_180(*iParam0);
			__LIB_37__::func_179(*iParam0);
			func_57(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, bool bParam1)//Position - 0x2A60
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_148(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_148(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_126(iParam0, 3, 169))
					{
						func_342(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_126(iParam0, 12, 6))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 11))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 12, 10))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 12, 50))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 14, 59))
			{
				func_342(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_126(iParam0, 8, 22))
			{
				func_342(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_126(iParam0, 12, 14))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_126(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 4))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 12, 3))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 14, 82))
			{
				func_342(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_126(iParam0, 8, 76))
			{
				func_342(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_126(iParam0, 12, 1))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_126(iParam0, 12, 12))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 12, 15))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_126(iParam0, 3, 71))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_126(iParam0, 12, 7))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 12, 6))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_126(iParam0, 14, 88))
			{
				func_342(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_126(iParam0, 8, 17))
			{
				func_342(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_126(iParam0, 12, 11))
			{
				func_342(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x19FE7
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
				if (!func_126(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_126(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_126(iParam0, 14, iVar4))
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
			if (!func_126(iParam0, 14, uVar8[iVar7]))
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

void func_148(int iParam0, int iParam1)//Position - 0x1E664
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_650(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_341(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_159(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_16__::func_32(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_180();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::isGlobal_43052EqualsValue(0) && !__LIB_0__::isGlobal_43052EqualsValue(1)) && !__LIB_0__::isGlobal_43052EqualsValue(2)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !__LIB_0__::isGlobal_43052EqualsValue(4)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(10)))
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

void func_159(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1F642
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
		iVar0 = __LIB_0__::func_650(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_339(iParam0, iVar1, &iVar2, 0))
			{
				func_342(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_337(iParam0, iVar1, &iVar2))
			{
				func_342(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_334(iParam0);
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
			func_165(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_165(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_165(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1FDDE
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
			func_293(iVar5, iParam1, iParam2, 1);
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
						func_293(iVar5, 10, 0, 1);
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
									func_293(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_165(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_293(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_290(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_165(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_284(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_293(iVar5, 14, uVar18[iVar1], 1);
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
							func_165(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_293(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_165(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_275(iParam0);
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
						func_165(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_165(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_274(iVar5, iVar24, iVar23, iVar25);
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
							func_165(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_165(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_165(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_165(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_165(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_165(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_165(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_284(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_274(iVar5, func_290(iParam0, 8, -1), iParam2, func_290(iParam0, 4, -1));
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
				func_208(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_274(iVar5, iParam2, iVar44, iVar45);
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
			func_284(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_274(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_165(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_165(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_274(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_274(iVar5, iVar58, iVar57, iParam2);
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
						func_165(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_274(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_165(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_185(iParam0, 9, iVar63))
						{
							func_165(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_165(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_165(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_165(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_290(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_290(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_165(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_165(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_165(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_165(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_165(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_165(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_165(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_165(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_165(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_165(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_275(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_165(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_165(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_166(iParam0, &uVar4))
		{
			func_165(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_165(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_165(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_165(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_290(iParam0, 3, -1), iVar10);
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
				func_165(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_166(int iParam0, var uParam1)//Position - 0x21C8A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_290(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_185(iParam0, iVar1, iVar0))
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

int func_185(int iParam0, int iParam1, int iParam2)//Position - 0x25F45
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
				if (!func_185(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_185(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_185(iParam0, 14, iVar6))
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
			if (!func_185(iParam0, 14, uVar11[iVar10]))
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
						return func_185(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_185(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2CC5E
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
	func_209(iParam0, bParam3, 0, -1);
}

void func_209(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2CCAB
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
		bVar3 = func_254(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_245(iParam0, iParam3);
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

int func_245(int iParam0, int iParam1)//Position - 0x3BF5D
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
				iVar3 = func_290(iParam0, 11, -1);
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
				iVar5 = func_290(iParam0, 11, -1);
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

int func_254(int iParam0, bool bParam1)//Position - 0x3C3C4
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_290(iParam0, 11, -1), 0);
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
						iVar3 = func_290(iParam0, 11, -1);
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
						iVar5 = func_290(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_290(iParam0, 11, -1), 0);
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
						iVar8 = func_290(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_290(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_290(iParam0, 11, -1), 0);
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
						iVar12 = func_290(iParam0, 8, -1);
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

int func_274(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45251
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
					iVar0 = func_274(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_274(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_275(int iParam0)//Position - 0x4658C
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
		if (!func_280(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_280(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x46F56
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_290(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x49940
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_334(iParam0))
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

int func_290(int iParam0, int iParam1, int iParam2)//Position - 0x49BEF
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
				if (func_185(iParam0, iParam1, iVar0))
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
				if (func_185(iParam0, iParam1, iVar1))
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

void func_293(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x49D6E
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
							func_293(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_293(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_293(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_293(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_293(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_293(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_293(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_293(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_293(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_293(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_334(int iParam0)//Position - 0x62A9F
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
				iVar1 = func_290(iParam0, 11, -1);
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
				iVar3 = func_290(iParam0, 11, -1);
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

int func_337(int iParam0, int iParam1, int iParam2)//Position - 0x62E11
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_126(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x62ED8
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_126(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_341(int iParam0, int iParam1, int iParam2)//Position - 0x63198
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
				if (func_126(iParam0, iParam1, iVar0))
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
				if (func_126(iParam0, iParam1, iVar1))
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

int func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x63239
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
										func_342(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_342(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_341(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_339(iParam0, iVar10, &iVar4, 1))
							{
								func_342(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_342(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_342(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_342(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_342(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_342(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_342(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_342(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_342(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_342(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_339(iParam0, iVar10, &iVar4, 0))
		{
			func_342(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_337(iParam0, iVar10, &iVar4))
		{
			func_342(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_379(int iParam0)//Position - 0x6791E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(iVar0))
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
		func_159(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_341(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_380(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_341(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_341(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_380(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_380(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_341(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_159(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_380(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x67B7B
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_383(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_383(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x67D36
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
								func_383(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_383(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_383(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_383(iParam0, 14, iVar5, 1, 0);
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
								func_383(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_383(iParam0, 14, 17, 1, 0);
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

int func_398(struct<3> Param0, float fParam1)//Position - 0x68605
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_389.f_0))
	{
		if (__LIB_0__::func_648(&Local_389, 19, Param0, fParam1, 1))
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_389.f_0, false);
			PED::SET_PED_MAX_HEALTH(Local_389.f_0, 200);
			ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 200, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_389.f_0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_389.f_0, joaat("PLAYER"));
			PED::SET_PED_CONFIG_FLAG(Local_389.f_0, 32, false);
			PED::SET_PED_CONFIG_FLAG(Local_389.f_0, 118, false);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_389.f_0, true);
			__LIB_0__::func_222(&Local_528, 5, Local_389.f_0, "LAMAR", 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_389.f_0, joaat("WEAPON_PISTOL"), -1, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_389.f_0, 2, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_389.f_0, 150);
			PED::SET_PED_LOD_MULTIPLIER(Local_389.f_0, 5f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_402()//Position - 0x687B7
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_387[5 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			STREAMING::REQUEST_MODEL(Local_387[0 /*19*/].f_18);
			STREAMING::REQUEST_MODEL(Local_387[3 /*19*/].f_18);
			if (STREAMING::HAS_MODEL_LOADED(Local_387[0 /*19*/].f_18) && STREAMING::HAS_MODEL_LOADED(Local_387[3 /*19*/].f_18))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_387.f_0)
				{
					switch (iVar0)
					{
						case 0:
						case 3:
							if (!ENTITY::DOES_ENTITY_EXIST(Local_387[iVar0 /*19*/]))
							{
								Local_387[iVar0 /*19*/] = __LIB_16__::func_0(Local_387[iVar0 /*19*/].f_18, Local_326 + Vector(IntToFloat(iVar0), 0f, 0f), 0f);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_387[iVar0 /*19*/], true);
								__LIB_0__::func_679(Local_387[iVar0 /*19*/], iVar0);
								if (Local_387[iVar0 /*19*/].f_18 == joaat("monroe"))
								{
									VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_387[iVar0 /*19*/], Local_388.f_1, 0f, 0f, 0f, Local_387[iVar0 /*19*/].f_2, Local_387[iVar0 /*19*/].f_5, -1f);
								}
								else
								{
									VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_387[iVar0 /*19*/], Local_388.f_1, 0f, 0f, 0f, Local_387[iVar0 /*19*/].f_2, Local_387[iVar0 /*19*/].f_5, -1f);
								}
								Local_387[iVar0 /*19*/].f_12 = 0;
								if (Local_387[iVar0 /*19*/].f_18 == joaat("jb700"))
								{
									VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_387[iVar0 /*19*/], false);
									VEHICLE::SET_VEHICLE_STRONG(Local_387[iVar0 /*19*/], true);
									VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_387[iVar0 /*19*/], true);
									AUDIO::SET_HORN_ENABLED(Local_387[iVar0 /*19*/], false);
								}
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_387[iVar0 /*19*/].f_18);
							break;
					}
					iVar0++;
				}
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

int func_405(struct<3> Param0, float fParam1)//Position - 0x68AF8
{
	if (func_406(Param0, fParam1))
	{
		if (iLocal_231 && iLocal_264 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0 + Vector(0f, 10f, 10f), true, false, false, true);
			SYSTEM::WAIT(500);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
			{
				if (iLocal_264 == 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_0, false);
					if (iLocal_231)
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_388.f_0, 5f);
						ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_0, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_1, false);
					if (iLocal_231)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_388.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, -0.00281182f, -9.76194f, 0.332852f), false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_0, false);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_388.f_0, Local_388.f_1, 1f);
					}
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_388.f_1, 5, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_0, 1);
					iLocal_264++;
					return 1;
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

int func_406(struct<3> Param0, float fParam1)//Position - 0x68BF5
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_388.f_1))
	{
		STREAMING::REQUEST_MODEL(iLocal_456);
		STREAMING::REQUEST_MODEL(iLocal_457);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_456) && STREAMING::HAS_MODEL_LOADED(iLocal_457))
		{
			Local_388.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_456, Param0, fParam1, true, true, false);
			Local_388.f_1 = VEHICLE::CREATE_VEHICLE(iLocal_457, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, -0.3f, -9.5f, -0.25f), (ENTITY::GET_ENTITY_HEADING(Local_388.f_0) - 20f), true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_388.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, -0.00281182f, -9.76194f, 0.332852f), false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_388.f_1, fParam1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_1, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_388.f_1, false);
			VEHICLE::SET_VEHICLE_EXTRA(Local_388.f_1, 7, true);
			VEHICLE::SET_VEHICLE_COLOURS(Local_388.f_0, 45, 40);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_388.f_0, 35, 156);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_0, 3);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_456);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_457);
			ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_0, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_1, true);
			VEHICLE::SET_VEHICLE_STRONG(Local_388.f_0, true);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_388.f_0, true);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_388.f_0, false);
			AUDIO::SET_VEH_RADIO_STATION(Local_388.f_0, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
			__LIB_0__::func_679(Local_388.f_0, 6);
			iLocal_264 = 0;
			iLocal_265 = 0;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_409()//Position - 0x68DE3
{
	if (__LIB_15__::func_944() != 1)
	{
		func_411(1, 1);
	}
	else
	{
		func_410();
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
		return 1;
	}
	return 0;
}

void func_410()//Position - 0x68E13
{
	if (!PED::IS_PED_INJURED(iLocal_469[0]))
	{
		if (Local_528[0 /*10*/] != iLocal_469[0])
		{
			__LIB_0__::func_222(&Local_528, 0, iLocal_469[0], "MICHAEL", 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_469[1]))
	{
		if (Local_528[1 /*10*/] != iLocal_469[1])
		{
			__LIB_0__::func_222(&Local_528, 1, iLocal_469[1], "FRANKLIN", 0, 1);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_469[2]))
	{
		if (Local_528[2 /*10*/] != iLocal_469[2])
		{
			__LIB_0__::func_222(&Local_528, 2, iLocal_469[2], "TREVOR", 0, 1);
		}
	}
	if (__LIB_15__::func_944() == 0)
	{
		if (Local_528[0 /*10*/] != PLAYER::PLAYER_PED_ID())
		{
			__LIB_0__::func_222(&Local_528, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
	}
	else if (__LIB_15__::func_944() == 1)
	{
		if (Local_528[1 /*10*/] != PLAYER::PLAYER_PED_ID())
		{
			__LIB_0__::func_222(&Local_528, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
	}
	else if (__LIB_15__::func_944() == 2)
	{
		if (Local_528[2 /*10*/] != PLAYER::PLAYER_PED_ID())
		{
			__LIB_0__::func_222(&Local_528, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
}

int func_411(int iParam0, bool bParam1)//Position - 0x68F2D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_0__::func_518(bVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_458(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_55(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_32__::func_7(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_458(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6EAEE
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_0__::func_550(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_379(*iParam0);
				__LIB_37__::func_182(*iParam0, 1, 0);
				__LIB_37__::func_180(*iParam0);
				__LIB_37__::func_179(*iParam0);
				func_57(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_460()//Position - 0x6EBCE
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	int iVar3;
	float fVar4;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			if (iLocal_257 != 99)
			{
				if (func_409())
				{
					if (bLocal_246)
					{
						__LIB_0__::func_427(1542.9697f, 6481.6245f, 21.582f, 314.9911f, 1, 0);
						iLocal_257 = 99;
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1542.9697f, 6481.6245f, 21.582f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						iLocal_257 = 99;
					}
				}
			}
			else
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_329, 50f, false, false, false, false, false, false, 0);
				if ((((((__LIB_0__::func_109() && func_405(1563.57f, 6465.22f, 23.96f, 231.4902f)) && func_402()) && func_398(504.1672f, -1304.7441f, 28.3103f, 200.8915f)) && func_53(496.6033f, -1308.379f, 28.302f, 204.3612f)) && func_52(0)) && func_51(0))
				{
					__LIB_0__::func_433(0, -1, 0);
					func_47(1);
					__LIB_14__::func_804(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_469[2]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_469[2], Local_388.f_0, -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[2], true);
							PED::SET_PED_MAX_HEALTH(iLocal_469[2], 1800);
							ENTITY::SET_ENTITY_HEALTH(iLocal_469[2], 1800, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_469[2], 3, false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_469[2], false);
						}
						if (!PED::IS_PED_INJURED(Local_389.f_0))
						{
							PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_388.f_0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
							PED::SET_PED_MAX_HEALTH(Local_389.f_0, 1800);
							ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 1800, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_389.f_0, 3, false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_389.f_0, false);
						}
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_0, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_388.f_0, false, joaat("PLAYER"));
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_388.f_1, 5, false, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
					{
						ENTITY::DETACH_ENTITY(Local_387[iLocal_261 /*19*/], true, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_387[iLocal_261 /*19*/], false);
						VEHICLE::SET_VEHICLE_STRONG(Local_387[iLocal_261 /*19*/], true);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_387[iLocal_261 /*19*/], true);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], -1);
						ENTITY::SET_ENTITY_COLLISION(Local_387[iLocal_261 /*19*/], true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_387[iLocal_261 /*19*/], true, true, false);
						ENTITY::SET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], 1542.9697f, 6481.6245f, 21.582f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_387[iLocal_261 /*19*/], 231.4902f);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iLocal_261 /*19*/], true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_387[iLocal_261 /*19*/], 5f);
					}
					func_547(&Local_423);
					func_546();
					func_36(1);
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_387.f_0)
					{
						if (iVar0 != iLocal_261)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iVar0 /*19*/], false))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iVar0 /*19*/], false);
							}
						}
						iVar0++;
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					iLocal_231 = 0;
				}
			}
		}
		else
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			VEHICLE::ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(1);
			iLocal_279 = 0;
			iLocal_304 = 0;
			iLocal_305 = 0;
			iLocal_298 = 0;
			iLocal_315 = 0;
			iLocal_249 = 0;
			iLocal_250 = 0;
			if (!PED::IS_PED_INJURED(iLocal_383))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			__LIB_16__::func_11();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			SYSTEM::SETTIMERB(0);
			iLocal_257 = 0;
			iLocal_466 = 1;
		}
	}
	if (iLocal_466 == 1)
	{
		func_545(0);
		func_535();
		func_534(Local_387[iLocal_261 /*19*/], &Local_423);
		func_533();
		if (!PED::IS_PED_INJURED(iLocal_383))
		{
			if (!func_532("CST7_MEET"))
			{
				if (!__LIB_13__::func_755(&Local_392, 1))
				{
					if (__LIB_17__::func_730(&Local_528, "CST7AUD", "CST7_MEET", 7, 0, 0, 0, 0))
					{
						__LIB_13__::func_783();
						func_529("CST7_MEET", 1);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
					}
				}
			}
			__LIB_16__::func_39(&Local_392, Local_329, 0.001f, 0.001f, 2f, 0, "CH_MEETMOL", 1, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
			{
				switch (iLocal_257)
				{
					case 0:
						if (!HUD::DOES_BLIP_EXIST(iLocal_366))
						{
							HUD::SET_BLIP_ALPHA(Local_392.f_5, 0);
							HUD::SET_BLIP_ROUTE(Local_392.f_5, false);
							iLocal_366 = __LIB_0__::func_639(iLocal_383, 0, 0);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1575.005f, 6446.9526f, 23.16296f, 1595.8275f, 6440.4873f, 29.37853f, 16f, false, true, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_315 = MISC::GET_GAME_TIMER();
								iLocal_250 = 1;
							}
							if (__LIB_0__::func_75())
							{
								Var2 = { __LIB_0__::func_486() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var2, "CST7_MEET"))
									{
										__LIB_0__::func_638();
									}
								}
							}
							iLocal_257++;
						}
						break;
					case 1:
						if (iLocal_250 == 1)
						{
							__LIB_16__::func_309(1, 0);
							func_484();
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							if (iLocal_250 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_315) > 3000)
								{
									iLocal_466 = 2;
								}
							}
						}
						else
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
							if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
								if (__LIB_0__::func_213(iVar1, 5f, 1, 1056964608, 0, 1, 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									iLocal_257++;
								}
							}
						}
						break;
					case 2:
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_315 = MISC::GET_GAME_TIMER();
							iLocal_250 = 1;
							iLocal_257++;
						}
						break;
					case 3:
						if (iLocal_250 == 1)
						{
							__LIB_16__::func_309(1, 0);
							func_484();
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							if (iLocal_250 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_315) > 3000)
								{
									iLocal_466 = 2;
								}
							}
						}
						break;
					}
			}
			if (!func_532("CST7_NOGO"))
			{
				if (!__LIB_13__::func_755(&Local_392, 1))
				{
					if (iLocal_298 == 0)
					{
						iLocal_298 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_298) > 0)
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_NOGO", 7, 0, 0, 0))
						{
							func_529("CST7_NOGO", 1);
						}
					}
				}
			}
			if (!func_532("CST7_MOLLY"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 18f, 18f, 18f, false, true, 0))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_383) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_383))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_383, PLAYER::PLAYER_PED_ID()))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_305) > 6000)
								{
									if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
									{
										if (WEAPON::GET_WEAPONTYPE_GROUP(iVar3) != joaat("GROUP_MELEE"))
										{
											if (!__LIB_13__::func_755(&Local_392, 1))
											{
												__LIB_0__::func_222(&Local_528, 8, iLocal_383, "MOLLY", 0, 1);
												if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_MOLLY", 7, 0, 0, 0))
												{
													iLocal_304++;
													iLocal_305 = MISC::GET_GAME_TIMER();
													if (iLocal_304 == 4)
													{
														func_529("CST7_MOLLY", 1);
													}
												}
											}
											else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_383))
											{
												__LIB_0__::func_709(iLocal_383, "CST7_AJAA", "MOLLY", 6);
												iLocal_304++;
												iLocal_305 = MISC::GET_GAME_TIMER();
												if (iLocal_304 == 4)
												{
													func_529("CST7_MOLLY", 1);
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
			if (!func_532("CST7_MOLLY1"))
			{
				if (!__LIB_13__::func_755(&Local_392, 1))
				{
					if (!iLocal_249)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 11f, 11f, 6f, false, true, 0))
						{
							if (func_532("CST7_MEET"))
							{
								iLocal_249 = 1;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 13f, 13f, 6f, false, true, 0))
					{
						__LIB_0__::func_222(&Local_528, 8, iLocal_383, "MOLLY", 0, 1);
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_MOLLY1", 7, 0, 0, 0))
						{
							func_529("CST7_MOLLY1", 1);
						}
					}
				}
			}
			if (((((FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f) || FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_383, 400, true, 0);
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 8f, true))
			{
				AUDIO::PLAY_PAIN(iLocal_383, 5, 0, 0);
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_383, -8f, true);
				TASK::TASK_SMART_FLEE_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				func_847(26);
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_383))
			{
				AUDIO::PLAY_PAIN(iLocal_383, 5, 0, 0);
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_383, -8f, true);
				TASK::TASK_SMART_FLEE_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				func_847(26);
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
		{
			func_847(4);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
			{
				func_847(9);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_383))
		{
			fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_383, true));
			if (fVar4 < (100f * 100f))
			{
				CUTSCENE::REQUEST_CUTSCENE("CAR_5_EXT", 8);
				func_25("CAR_5_EXT");
			}
			else if (fVar4 > 40000f)
			{
				func_847(18);
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			func_847(19);
		}
	}
	if (iLocal_466 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_466();
		__LIB_13__::func_815(&Local_392, 1, 0);
		__LIB_0__::func_638();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
		SYSTEM::SETTIMERA(0);
		iLocal_466 = 0;
		iLocal_465 = 7;
	}
	if (iLocal_466 == 3)
	{
		func_910(7, 1);
	}
}

void func_466()//Position - 0x6F854
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_366))
	{
		HUD::REMOVE_BLIP(&iLocal_366);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_387.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_387[iVar0 /*19*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_387[iVar0 /*19*/].f_1));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(Local_388.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_388.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_367))
	{
		HUD::REMOVE_BLIP(&iLocal_367);
	}
	if (HUD::DOES_BLIP_EXIST(Local_389.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_389.f_1));
	}
}

void func_484()//Position - 0x703D7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_383, false))
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_383, -1f, 0f, 0.5f, true, -1, 2500, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.75f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.05f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-4f);
			}
		}
	}
}

void func_529(char* sParam0, bool bParam1)//Position - 0x72AF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_260;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_260[iVar2] == 0)
			{
				iLocal_260[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_260[iVar2] == iVar0)
		{
			iLocal_260[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_532(char* sParam0)//Position - 0x72BBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_260;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_260[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_533()//Position - 0x72BFA
{
	struct<3> Var0;
	var uVar1;
	Var0 = { -0.05f, 0f, -0.1f };
	if (!PED::IS_PED_INJURED(iLocal_383) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_376, false))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_355);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_355))
		{
			switch (iLocal_468)
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_299))
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_383) && !TASK::IS_PED_GETTING_UP(iLocal_383))
						{
							iLocal_299 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_299, iLocal_376, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_383, iLocal_299, sLocal_355, "ig_1_base", 8f, -8f, 1, 208, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_299, true);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_299, 0f);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_383, iLocal_376, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_383, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_383, 172, false);
						}
					}
					else
					{
						MemCopy(&uVar1, {__LIB_0__::func_486()}, 4);
						if (MISC::ARE_STRINGS_EQUAL(&uVar1, "CST7_MOLLY1"))
						{
							iLocal_299 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_299, iLocal_376, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_383, iLocal_299, sLocal_355, "ig_1_idle_b", 8f, -8f, 1, 208, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_299, false);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_299, 0f);
							iLocal_468 = 3;
						}
					}
					break;
				case 3:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_299))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_299) > 0.99f)
						{
							iLocal_299 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_299, iLocal_376, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_383, iLocal_299, sLocal_355, "ig_1_base", 8f, -8f, 1, 208, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_299, true);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_299, 0f);
							iLocal_468 = 2;
						}
					}
					break;
				}
			}
	}
}

void func_534(int iParam0, var uParam1)//Position - 0x72DCF
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	STREAMING::REQUEST_PTFX_ASSET();
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		uParam1->f_5 = 69;
	}
	else
	{
		uParam1->f_5 = 68;
	}
	if (uParam1->f_2 == -1)
	{
		uParam1->f_2 = AUDIO::GET_SOUND_ID();
	}
	if (uParam1->f_3 == -1)
	{
		uParam1->f_3 = AUDIO::GET_SOUND_ID();
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0)) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, uParam1->f_5))
		{
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 225)
			{
				if (uParam1->f_1 == 0)
				{
					uParam1->f_1 = 1;
				}
				Var0 = { (0.6826f * IntToFloat(uParam1->f_1)), 1.6707f, 0.3711f };
				Var1 = { Var0.f_0, (Var0.f_1 + 10f), (Var0.f_2 - 0.1f) };
				Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0) };
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var2, Var3, 15, true, joaat("WEAPON_ASSAULTSHOTGUN"), PLAYER::PLAYER_PED_ID(), true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var2 + Vector(0.2f, 0f, 0f), Var3 + Vector(0.2f, 0f, 0f), 15, true, joaat("WEAPON_ASSAULTSHOTGUN"), PLAYER::PLAYER_PED_ID(), true, true, -1f);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_car_muzzle_flash", iParam0, Var0 + Vector(0f, -0.15f, 0f), 0f, 0f, 90f, 1f, false, false, false);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "FRANKLIN_GUN_MASTER", Var2, 0, false, 0, false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "JB700_GUN_PLAYER_MASTER", Var2, 0, false, 0, false);
					}
				}
				uParam1->f_4 = 1;
				uParam1->f_1 = (uParam1->f_1 * -1);
				*uParam1 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else
	{
		if (!AUDIO::HAS_SOUND_FINISHED(uParam1->f_2))
		{
			AUDIO::STOP_SOUND(uParam1->f_2);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(uParam1->f_3))
		{
			AUDIO::STOP_SOUND(uParam1->f_3);
		}
	}
}

void func_535()//Position - 0x72FCD
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12[3];
	var uVar13[3];
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	float fVar22;
	int iVar23;
	bool bVar24;
	struct<3> Var25;
	float fVar26;
	float fVar27;
	float fVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
	{
		iVar0 = 0;
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], true) };
		STREAMING::REQUEST_MODEL(iLocal_458);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", false, -1);
		STREAMING::REQUEST_PTFX_ASSET();
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
			if (((((!CAM::DOES_CAM_EXIST(iLocal_369) && PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/)) && (MISC::GET_GAME_TIMER() - iLocal_263) > 1600) && ENTITY::IS_ENTITY_UPRIGHT(Local_387[iLocal_261 /*19*/], 90f)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", false, -1)) && STREAMING::HAS_MODEL_LOADED(iLocal_458))
			{
				bVar2 = true;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_372[0]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_372[0], true)) < 9f)
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					iVar3 = func_544();
					if (iVar3 == -1)
					{
						iVar3 = 0;
					}
					Local_422[iVar3 /*14*/].f_10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_387[iLocal_261 /*19*/], 0f, -2f, 0f) };
					Local_422[iVar3 /*14*/] = 0;
					Local_422[iVar3 /*14*/].f_2 = 0;
					Local_422[iVar3 /*14*/].f_3 = 0;
					Local_422[iVar3 /*14*/].f_13 = 0;
					iVar0 = 0;
					while (iVar0 < iLocal_372)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_372[iVar0]))
						{
							__LIB_16__::func_13(&(iLocal_372[iVar0]), !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_372[iVar0]));
						}
						iVar0++;
					}
					iLocal_262 = MISC::GET_GAME_TIMER();
					iLocal_263 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "spikes", Local_387[iLocal_261 /*19*/], "CAR_THEFT_DB5_ESCAPE", false, 0);
				}
			}
		}
		if (iLocal_262 != 0)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_262) < 100)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_372[0]))
				{
					iLocal_372[0] = OBJECT::CREATE_OBJECT(iLocal_458, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_387[iLocal_261 /*19*/], 0f, -1.2f, -0.25f), true, true, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_372[0], Local_387[iLocal_261 /*19*/], true);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_372[0], true);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_372[0]);
					iLocal_373[0] = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_262) < 160)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_372[1]))
				{
					iLocal_372[1] = OBJECT::CREATE_OBJECT(iLocal_458, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_387[iLocal_261 /*19*/], 0.15f, -1.1f, -0.25f), true, true, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_372[1], Local_387[iLocal_261 /*19*/], true);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_372[1], true);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_372[1]);
					iLocal_373[1] = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_262) < 220)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_372[2]))
				{
					iLocal_372[2] = OBJECT::CREATE_OBJECT(iLocal_458, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_387[iLocal_261 /*19*/], -0.15f, -1f, -0.25f), true, true, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_372[2], Local_387[iLocal_261 /*19*/], true);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_372[2], true);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_372[2]);
					iLocal_262 = 0;
					iLocal_373[2] = 0;
				}
			}
		}
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (iLocal_373[0] == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_372[0]))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_372[0]))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spikes", iLocal_372[0], 0f, 0f, -0.025f, 0f, 0f, 0f, 1f, false, false, false);
						iLocal_373[0] = 1;
					}
				}
			}
			if (iLocal_373[1] == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_372[1]))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_372[1]))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spikes", iLocal_372[1], 0f, 0f, -0.025f, 0f, 0f, 0f, 1f, false, false, false);
						iLocal_373[1] = 1;
					}
				}
			}
			if (iLocal_373[2] == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_372[2]))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_372[2]))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spikes", iLocal_372[2], 0f, 0f, -0.025f, 0f, 0f, 0f, 1f, false, false, false);
						iLocal_373[2] = 1;
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_381))
		{
			STREAMING::REQUEST_MODEL(__LIB_0__::func_493(19));
			STREAMING::REQUEST_PTFX_ASSET();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", false, -1);
			if (STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(19)))
			{
				if (Local_422[0 /*14*/].f_10 != 0f)
				{
					iLocal_381 = PED::CREATE_PED(26, __LIB_0__::func_493(19), Local_422[0 /*14*/].f_10 - Vector(5f, 0f, 0f), 0f, true, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_381, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_381, false, false);
					ENTITY::SET_ENTITY_COLLISION(iLocal_381, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_381, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(19));
				}
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_372[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_372[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_372[2]))
		{
			iVar4 = VEHICLE::GET_CLOSEST_VEHICLE(Local_422[0 /*14*/].f_10, 10f, 0, __LIB_17__::func_715());
			if (((((!ENTITY::IS_ENTITY_DEAD(iVar4, false) && iVar4 != Local_387[iLocal_261 /*19*/]) && iVar4 != Local_388.f_0) && iVar4 != Local_388.f_1) && ENTITY::GET_ENTITY_MODEL(iVar4) != joaat("police")) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_372[0], true) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_372[1], true) };
				Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_372[2], true) };
				Var8 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar4, "wheel_lf")) };
				Var9 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar4, "wheel_rf")) };
				Var10 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar4, "wheel_rr")) };
				Var11 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar4, "wheel_lr")) };
				if ((SYSTEM::VDIST2(Var5, Var8) < 4f || SYSTEM::VDIST2(Var6, Var8) < 4f) || SYSTEM::VDIST2(Var7, Var8) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar4, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar4, 0, true, 1000f);
					}
				}
				if ((SYSTEM::VDIST2(Var5, Var9) < 4f || SYSTEM::VDIST2(Var6, Var9) < 4f) || SYSTEM::VDIST2(Var7, Var9) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar4, 1, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar4, 1, true, 1000f);
					}
				}
				if ((SYSTEM::VDIST2(Var5, Var10) < 4f || SYSTEM::VDIST2(Var6, Var10) < 4f) || SYSTEM::VDIST2(Var7, Var10) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar4, 5, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar4, 5, true, 1000f);
					}
				}
				if ((SYSTEM::VDIST2(Var5, Var11) < 4f || SYSTEM::VDIST2(Var6, Var11) < 4f) || SYSTEM::VDIST2(Var7, Var11) < 4f)
				{
					if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iVar4, 4, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_BURST(iVar4, 4, true, 1000f);
					}
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_422.f_0)
		{
			if (Local_422[iVar0 /*14*/].f_10 != 0f)
			{
				if (Local_422[iVar0 /*14*/].f_3 == 0)
				{
					if (!CAM::DOES_CAM_EXIST(iLocal_369))
					{
						if (SYSTEM::VDIST2(Local_422[iVar0 /*14*/].f_10, Var1) > 2500f)
						{
							Local_422[iVar0 /*14*/].f_10 = { 0f, 0f, 0f };
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_381))
							{
								Var18 = { ENTITY::GET_ENTITY_COORDS(iLocal_381, true) };
								if (SYSTEM::VDIST2(Var18.f_0, Var18.f_1, 0f, Local_422[iVar0 /*14*/].f_10, Local_422[iVar0 /*14*/].f_10.f_1, 0f) > 1f)
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_381, Local_422[iVar0 /*14*/].f_10 - Vector(5f, 0f, 0f), false, false, true);
								}
							}
							Local_422[iVar0 /*14*/].f_13 = func_541(iLocal_381);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_422[iVar0 /*14*/].f_13, false))
							{
								Var19 = { ENTITY::GET_ENTITY_COORDS(Local_422[iVar0 /*14*/].f_13, true) };
								if (((((SYSTEM::VDIST2(Var19, Local_422[iVar0 /*14*/].f_10) < 100f && SYSTEM::VDIST2(Var1, Local_422[iVar0 /*14*/].f_10) > 225f) && ENTITY::GET_ENTITY_SPEED(Local_422[iVar0 /*14*/].f_13) > 10f) && ENTITY::DOES_ENTITY_EXIST(iLocal_372[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_372[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_372[2]))
								{
									Var20 = { __LIB_3__::func_80(0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_422[iVar0 /*14*/].f_13)) };
									Var21 = { Local_422[iVar0 /*14*/].f_10 - Var19 };
									Var21 = { Var21 / FtoV(SYSTEM::VMAG(Var21)) };
									if (__LIB_0__::func_158(Var20, Var21) > 0f)
									{
										STREAMING::REQUEST_PTFX_ASSET();
										Local_422[iVar0 /*14*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_422[iVar0 /*14*/].f_13, -4f, 25f, 2f) };
										Local_422[iVar0 /*14*/].f_7 = { ENTITY::GET_ENTITY_COORDS(Local_422[iVar0 /*14*/].f_13, true) };
										MISC::GET_GROUND_Z_FOR_3D_COORD(Local_422[iVar0 /*14*/].f_4 + Vector(100f, 0f, 0f), &(Local_422[iVar0 /*14*/].f_4.f_2), false, false);
										Local_422[iVar0 /*14*/].f_4.f_2 = (Local_422[iVar0 /*14*/].f_4.f_2 + 2f);
										fVar22 = (Local_422[iVar0 /*14*/].f_4.f_2 - Local_422[iVar0 /*14*/].f_7.f_2);
										if (fVar22 < 7f && fVar22 > -1f)
										{
											Local_422[iVar0 /*14*/].f_3++;
										}
									}
								}
							}
						}
					}
				}
				else if (Local_422[iVar0 /*14*/].f_3 == 1)
				{
					if (iLocal_385 == 0)
					{
						iLocal_385 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Local_422[iVar0 /*14*/].f_4, Local_422[iVar0 /*14*/].f_7, 1, 0, 7);
					}
					if (iLocal_385 != 0)
					{
						iVar23 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_385, &uVar14, &uVar15, &uVar16, &uVar17);
						if (iVar23 == 2)
						{
						}
						else if (iVar23 == 0)
						{
						}
					}
					Var12[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_422[iVar0 /*14*/].f_13, 0.8f, 6f, 0f) };
					Var12[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_422[iVar0 /*14*/].f_13, 0.5f, 7f, 0f) };
					Var12[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_422[iVar0 /*14*/].f_13, 0.9f, 8f, 0f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var12[0 /*3*/], &(uVar13[0]), false, false);
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var12[1 /*3*/], &(uVar13[1]), false, false);
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var12[2 /*3*/], &(uVar13[2]), false, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_372[0], Var12[0 /*3*/], Var12[0 /*3*/].f_1, (uVar13[0] + 0.05f), true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(iLocal_372[1], Var12[1 /*3*/], Var12[1 /*3*/].f_1, (uVar13[1] + 0.05f), true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(iLocal_372[2], Var12[2 /*3*/], Var12[2 /*3*/].f_1, (uVar13[2] + 0.05f), true, false, false, true);
					Local_422[iVar0 /*14*/].f_10 = { Var12[1 /*3*/] };
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
					{
						iLocal_369 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
						CAM::SET_CAM_COORD(iLocal_369, Local_422[iVar0 /*14*/].f_4);
						CAM::SET_CAM_FOV(iLocal_369, 30f);
						CAM::SHAKE_CAM(iLocal_369, "HAND_SHAKE", 1f);
						CAM::POINT_CAM_AT_ENTITY(iLocal_369, Local_422[iVar0 /*14*/].f_13, 0f, 0f, 0f, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], Local_333, 4, 20f, 786469, 5f, 10f, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
						__LIB_0__::func_345(&uLocal_533, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_TRUCK"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_TRUCK");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_SPIKES_CAM_SCENE"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_4_SPIKES_CAM_SCENE");
						}
						__LIB_0__::func_497(135, 1, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
						Local_422[iVar0 /*14*/].f_2 = MISC::GET_GAME_TIMER();
						Local_422[iVar0 /*14*/].f_3++;
					}
					else
					{
						Local_422[iVar0 /*14*/].f_3 = 0;
					}
				}
				else if (Local_422[iVar0 /*14*/].f_3 == 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_422[iVar0 /*14*/].f_13, false))
					{
						Var25 = { ENTITY::GET_ENTITY_COORDS(Local_422[iVar0 /*14*/].f_13, true) };
						if (Local_422[iVar0 /*14*/] == 0)
						{
							if (SYSTEM::VDIST2(Var25, Local_422[iVar0 /*14*/].f_10) < 9f)
							{
								fVar26 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_422[iVar0 /*14*/].f_13);
								fVar27 = ENTITY::GET_ENTITY_SPEED(Local_422[iVar0 /*14*/].f_13);
								fVar28 = (fVar27 / (fVar26 - 20f));
								if (fVar28 > 1f)
								{
									fVar28 = 1f;
								}
								else if (fVar28 < 0.3f)
								{
									fVar28 = 0.3f;
								}
								Local_422[iVar0 /*14*/] = (MISC::GET_GAME_TIMER() - SYSTEM::ROUND(((1f - fVar28) * 1000f)));
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									Local_422[iVar0 /*14*/].f_1 = 1;
								}
								else
								{
									Local_422[iVar0 /*14*/].f_1 = -1;
								}
								VEHICLE::SET_VEHICLE_TYRE_BURST(Local_422[iVar0 /*14*/].f_13, 0, false, 1000f);
								VEHICLE::SET_VEHICLE_TYRE_BURST(Local_422[iVar0 /*14*/].f_13, 1, false, 1000f);
								if (STREAMING::HAS_PTFX_ASSET_LOADED() && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE", false, -1))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_tyre_spiked", Local_422[iVar0 /*14*/].f_13, 1.2f, 2f, -0.3f, 0f, 0f, 0f, 1f, false, false, false);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_tyre_spiked", Local_422[iVar0 /*14*/].f_13, -1.2f, 2f, -0.3f, 0f, 0f, 0f, 1f, false, false, false);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "tyre", Local_422[iVar0 /*14*/].f_13, "CAR_THEFT_DB5_ESCAPE", false, 0);
								}
							}
						}
						else if ((MISC::GET_GAME_TIMER() - Local_422[iVar0 /*14*/]) < 1000)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_422[iVar0 /*14*/].f_13, 0, (25f * IntToFloat(Local_422[iVar0 /*14*/].f_1)), 0f, 0f, 0f, -2f, 0f, 0, true, true, true, false, true);
						}
						else if ((MISC::GET_GAME_TIMER() - Local_422[iVar0 /*14*/]) > 1750)
						{
							iVar29 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_422[iVar0 /*14*/].f_13, 0, false);
							if (!PED::IS_PED_INJURED(iVar29) && TASK::GET_SCRIPT_TASK_STATUS(iVar29, joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
							{
								TASK::TASK_DRIVE_BY(iVar29, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 50f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							}
						}
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
						if ((MISC::GET_GAME_TIMER() - Local_422[iVar0 /*14*/].f_2) > 2000)
						{
							bVar24 = true;
						}
					}
					else
					{
						bVar24 = true;
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_369))
					{
						bVar24 = true;
					}
					if (bVar24)
					{
						if (iLocal_465 == 5)
						{
							iVar30 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_422[iVar0 /*14*/].f_13, -1, false);
							iVar31 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_422[iVar0 /*14*/].f_13, 0, false);
							if (!PED::IS_PED_INJURED(iVar30))
							{
								PED::APPLY_DAMAGE_TO_PED(iVar30, 200, true, 0);
							}
							if (!PED::IS_PED_INJURED(iVar31))
							{
								PED::APPLY_DAMAGE_TO_PED(iVar31, 200, true, 0);
							}
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_SPIKES_CAM_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_4_SPIKES_CAM_SCENE");
						}
						CAM::DESTROY_ALL_CAMS(false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						STREAMING::REMOVE_PTFX_ASSET();
						Local_422[iVar0 /*14*/].f_3 = 0;
						Local_422[iVar0 /*14*/].f_10 = { 0f, 0f, 0f };
					}
				}
			}
			iVar0++;
		}
	}
}

var func_541(int iParam0)//Position - 0x74122
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	int iVar5;
	float fVar6;
	iVar1 = 0;
	iVar2 = 0;
	fVar3 = 0f;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		PED::GET_PED_NEARBY_VEHICLES(iParam0, &iVar0);
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0[iVar2], false))
			{
				iVar5 = ENTITY::GET_ENTITY_MODEL(iVar0[iVar2]);
				if (iVar5 == joaat("police") || iVar5 == joaat("sheriff"))
				{
					fVar6 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0[iVar2], true), Var4);
					if (fVar6 < fVar3 || fVar3 == 0f)
					{
						fVar3 = fVar6;
						iVar1 = iVar2;
					}
				}
			}
			iVar2++;
		}
	}
	if (fVar3 == 0f)
	{
		iVar0[iVar1] = 0;
	}
	return iVar0[iVar1];
}

int func_544()//Position - 0x74224
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_422.f_0)
	{
		if (Local_422[iVar0 /*14*/].f_10 == 0f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_545(int iParam0)//Position - 0x74257
{
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_456, 3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_469[2]) && !PED::IS_PED_INJURED(Local_389.f_0))
		{
			VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_388.f_0, true);
			VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_388.f_1, true);
			if (PED::IS_PED_GROUP_MEMBER(iLocal_469[2], __LIB_0__::func_495()))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_469[2]);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_469[2], Local_388.f_0, true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[2], true);
					TASK::TASK_ENTER_VEHICLE(iLocal_469[2], Local_388.f_0, 20000, -1, 2f, 1, 0);
				}
			}
			else if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_469[2], Local_388.f_0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_389.f_0, Local_388.f_0))
				{
					switch (iLocal_279)
					{
						case 0:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 12.1723f, 3.3128f), 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_387[iLocal_261 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 12.1723f, 3.3128f), 6f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")) == 7)
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_388.f_0) > 1f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_469[2], Local_388.f_0, 24, -1);
									}
								}
							}
							else
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) > 100f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 7 || iParam0)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_469[2], Local_388.f_0, Local_329, 35f, 0, iLocal_456, 262208, 10f, 20f);
									}
								}
								TASK::REQUEST_WAYPOINT_RECORDING(sLocal_346);
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_346))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), 1250.4f, 6483.8f, 19.9f) < 100f)
									{
										iLocal_279++;
									}
								}
							}
							break;
						case 1:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 12.1723f, 3.3128f), 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_387[iLocal_261 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 12.1723f, 3.3128f), 6f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")) == 7)
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_388.f_0) > 1f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_469[2], Local_388.f_0, 24, -1);
									}
								}
							}
							else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) > 400f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 7 || iParam0)
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_469[2], Local_388.f_0, sLocal_346, 262144, 0, 8, -1, 35f, false, 5f);
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
							{
								if (VEHICLE::IS_VEHICLE_STOPPED(Local_388.f_0))
								{
									if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1830))
									{
										AUDIO::STOP_SOUND(iLocal_1830);
										AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_STEAL_4");
									}
								}
							}
							break;
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_282) > 0 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_389.f_0))
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_389.f_0, __LIB_0__::func_495()))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_389.f_0);
			}
			if (!PED::IS_PED_IN_VEHICLE(Local_389.f_0, Local_388.f_0, true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_389.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_389.f_0, Local_388.f_0, 20000, 0, 2f, 1, 0);
				}
			}
		}
	}
}

void func_546()//Position - 0x74619
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_387.f_0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iVar0 /*19*/], false))
		{
			if (Local_387[iVar0 /*19*/].f_18 != joaat("jb700"))
			{
			}
		}
		iVar0++;
	}
}

void func_547(var uParam0)//Position - 0x74656
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_1 = 1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 68;
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_31 = 0;
	uParam0->f_32 = 0;
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
}

void func_548()//Position - 0x7469F
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_1839, Local_335, Local_336);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_1840, Local_334, Local_336);
	}
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			if (iLocal_257 != 99)
			{
				if (bLocal_246)
				{
					__LIB_0__::func_427(-1815.5596f, 4701.3066f, 56.0453f, 314.9911f, 1, 0);
					iLocal_257 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1815.5596f, 4701.3066f, 56.0453f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 314.9911f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					SYSTEM::WAIT(0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_257 = 99;
				}
				iLocal_280 = 0;
				iLocal_285 = 0;
				iLocal_286 = 0;
				iLocal_287 = 0;
				iLocal_288 = 0;
				__LIB_0__::func_109();
				func_47(1);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				MISC::CLEAR_AREA_OF_PEDS(-1779.3804f, 4732.687f, 56.0433f, 15f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1810.5596f, 4701.3066f, 56.0453f, 100f, false, false, false, false, false, false, 0);
				func_596(-1815.5596f, 4701.3066f, 56.0453f);
				STREAMING::REQUEST_PTFX_ASSET();
				while (((((!func_409() || !func_405(-1779.3804f, 4732.687f, 56.0433f, 314.9911f)) || !func_402()) || !func_398(504.1672f, -1304.7441f, 28.3103f, 200.8915f)) || !func_53(496.6033f, -1308.379f, 28.302f, 204.3612f)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					SYSTEM::WAIT(0);
				}
				__LIB_0__::func_433(0, -1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
					{
						iLocal_1839 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_388.f_1, Local_335, Local_336, 1f, false, false, false);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
					{
						iLocal_1840 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_388.f_1, Local_334, Local_336, 1f, false, false, false);
					}
				}
				SYSTEM::SETTIMERB(0);
				while (!ENTITY::DOES_ENTITY_EXIST(iLocal_379[0]) || SYSTEM::TIMERB() < 2000)
				{
					if (!PED::IS_PED_INJURED(Local_389.f_0))
					{
						func_589();
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					func_596(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true));
					PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_330.f_0, Local_330.f_1, Local_331.f_0, Local_331.f_1);
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_469[2]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_469[2], Local_388.f_0, -1);
					}
					if (!PED::IS_PED_INJURED(Local_389.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_388.f_0, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_388.f_1, 5, false, false);
				}
				func_588();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_387[iLocal_261 /*19*/]))
					{
						ENTITY::DETACH_ENTITY(Local_387[iLocal_261 /*19*/], true, true);
					}
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], -1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_387[iLocal_261 /*19*/], false);
					VEHICLE::SET_VEHICLE_STRONG(Local_387[iLocal_261 /*19*/], true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_387[iLocal_261 /*19*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_387[iLocal_261 /*19*/], true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_387[iLocal_261 /*19*/], true, true, false);
					ENTITY::SET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], -1810.5596f, 4701.3066f, 56.0453f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_387[iLocal_261 /*19*/], 309.9444f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iLocal_261 /*19*/], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_387[iLocal_261 /*19*/], 5f);
				}
				func_546();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				iLocal_252 = 1;
				iLocal_231 = 0;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_469[2]))
			{
				if (PED::IS_PED_GROUP_MEMBER(iLocal_469[2], __LIB_0__::func_495()))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_469[2]);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[2], true);
				PED::SET_PED_MAX_HEALTH(iLocal_469[2], 1800);
				ENTITY::SET_ENTITY_HEALTH(iLocal_469[2], 1800, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_469[2], 3, false);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_469[2], false);
			}
			if (!PED::IS_PED_INJURED(Local_389.f_0))
			{
				if (PED::IS_PED_GROUP_MEMBER(Local_389.f_0, __LIB_0__::func_495()))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_389.f_0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
				PED::SET_PED_MAX_HEALTH(Local_389.f_0, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 1800, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_389.f_0, 3, false);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_389.f_0, false);
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_387.f_0)
			{
				if (iVar0 != iLocal_261)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iVar0 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iVar0 /*19*/], false);
					}
				}
				iVar0++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_0, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_388.f_0, false, joaat("PLAYER"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_388.f_0, true, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_388.f_0, "CAR_4_TRANSPORTER_GROUP", 0f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_388.f_1, true, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_388.f_1, "CAR_4_TRANSPORTER_GROUP", 0f);
			}
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
			PED::SET_CREATE_RANDOM_COPS(false);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(1, false);
			MISC::ENABLE_DISPATCH_SERVICE(8, false);
			MISC::ENABLE_DISPATCH_SERVICE(2, false);
			MISC::ENABLE_DISPATCH_SERVICE(6, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, true);
			VEHICLE::ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(0);
			GRAPHICS::SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(5f);
			func_36(1);
			__LIB_14__::func_804(1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("CAR4_TRUCK_RESTART");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_DEFEND_THE_TRUCK"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_4_DEFEND_THE_TRUCK");
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(3);
			iLocal_277 = 0;
			iLocal_279 = 0;
			func_547(&Local_423);
			func_410();
			func_862(4, "LOSE_COPS", 0, 0, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, false, false, false, false, false, false, 0);
				CAM::DO_SCREEN_FADE_IN(800);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_330.f_0, Local_330.f_1, Local_331.f_0, Local_331.f_1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_388.f_0, 15f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_387[iLocal_261 /*19*/], 15f);
					}
					SYSTEM::WAIT(0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_387[iLocal_261 /*19*/], false);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_310 = 0;
			iLocal_314 = 0;
			iLocal_312 = 0;
			iLocal_313 = 0;
			iLocal_311 = 0;
			iLocal_340 = 0;
			iLocal_341 = 0;
			iLocal_342 = 0;
			iLocal_343 = 0;
			iLocal_258 = 0;
			iLocal_259 = MISC::GET_GAME_TIMER();
			iLocal_257 = 0;
			iLocal_466 = 1;
		}
	}
	if (iLocal_466 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_388.f_0, true);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
			{
				func_587(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, Local_335 + Local_339), Local_337, Local_338.f_0, Local_338.f_1, &iLocal_340, &iLocal_341, 50, 300, 30, 100);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
			{
				func_587(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, Local_334 + Local_339), Local_337, Local_338.f_0, Local_338.f_1, &iLocal_342, &iLocal_343, 50, 300, 30, 100);
			}
		}
		if (!iLocal_252)
		{
			if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_252 = 1;
			}
		}
		func_596(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true));
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_330.f_0, Local_330.f_1, Local_331.f_0, Local_331.f_1);
		if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_388.f_2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
				{
					Local_388.f_2 = __LIB_0__::func_639(Local_388.f_0, 0, 0);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_388.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_388.f_2));
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
		func_589();
		func_52(0);
		func_533();
		func_51(0);
		func_535();
		func_534(Local_387[iLocal_261 /*19*/], &Local_423);
		func_545(0);
		uVar1 = func_585();
		switch (iLocal_257)
		{
			case 0:
				__LIB_16__::func_34(&Local_392, Local_329, 0.001f, 0.001f, 2f, 0, Local_387[iLocal_261 /*19*/], "CH_DEFTRUCK", "CH_GETINCAR", "CH_GETBACKCAR", 0, 0, 1, -1);
				if (uVar1 || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_13__::func_815(&Local_392, 1, 0);
					HUD::CLEAR_PRINTS();
					PED::SET_CREATE_RANDOM_COPS(false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_459);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_DEFEND_THE_TRUCK"))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_4_DEFEND_THE_TRUCK");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOLLOW_TRUCK"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_4_FOLLOW_TRUCK");
					}
					__LIB_0__::func_498(0, -1);
					iLocal_257++;
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
				{
					if (!func_532("CST7_NEAREND") && iLocal_277 < 50)
					{
						if (!__LIB_13__::func_755(&Local_392, 1))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) < 640000f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 40000f)
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_NEAREND", 7, 0, 0, 0))
								{
									func_529("CST7_NEAREND", 1);
								}
							}
						}
					}
					if ((((MISC::GET_GAME_TIMER() - iLocal_289) > 0 && iLocal_290 < 7) && !func_532("CST7_CDONE")) && !__LIB_13__::func_755(&Local_392, 1))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 40000f)
						{
							if (__LIB_17__::func_243(&Local_528, "CST7AUD", __LIB_1__::func_295(__LIB_0__::func_680(), "CST7_LAMSH", "CST7_LOFF"), 7, 0, 0, 0))
							{
								iLocal_290++;
								iLocal_289 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, (13000 + iLocal_290 * 500)));
							}
						}
					}
					if (!func_532("CST7_HSET"))
					{
						if (!__LIB_13__::func_755(&Local_392, 1))
						{
							if (SYSTEM::TIMERB() > MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_HSET1", 7, 0, 0, 0))
									{
										func_529("CST7_HSET", 1);
									}
								}
								else if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_HSET2", 7, 0, 0, 0))
								{
									func_529("CST7_HSET", 1);
								}
							}
						}
					}
					else if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_314) > 0)
						{
							if (!func_532("CST7_SHOOT"))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
								{
									if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, Local_423.f_5))
									{
										if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), 2.5f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), 2.5f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_387[0 /*19*/], true), 2.5f, true))
										{
											if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_SHOOT", 7, 0, 0, 0))
											{
												iLocal_311++;
												iLocal_314 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000));
												if (iLocal_311 == 5)
												{
													func_529("CST7_SHOOT", 1);
												}
											}
										}
									}
								}
							}
							if (!func_532("CST7_BASH"))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
								{
									if (!PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, Local_423.f_5))
									{
										if (((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_388.f_1, Local_387[iLocal_261 /*19*/]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_388.f_0, Local_387[iLocal_261 /*19*/])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_387[0 /*19*/], Local_387[iLocal_261 /*19*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_388.f_1, Local_387[iLocal_261 /*19*/], true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_388.f_0, Local_387[iLocal_261 /*19*/], true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_387[0 /*19*/], Local_387[iLocal_261 /*19*/], true))
										{
											if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_BASH", 7, 0, 0, 0))
											{
												iLocal_312++;
												iLocal_314 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000));
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_388.f_1);
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_388.f_0);
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_387[0 /*19*/]);
												if (iLocal_312 == 6)
												{
													func_529("CST7_BASH", 1);
												}
											}
										}
									}
								}
							}
							if (!func_532("CST7_STING"))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
								{
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_372[iVar2]))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_372[iVar2], false))
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_372[iVar2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 4.1723f, -2.3128f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0f, 12.1723f, 3.3128f), 6f, false, true, 0))
												{
													if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_STING", 7, 0, 0, 0))
													{
														iLocal_313++;
														iLocal_314 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000));
														if (iLocal_313 == 3)
														{
															func_529("CST7_STING", 1);
														}
													}
												}
											}
										}
										iVar2++;
									}
								}
							}
						}
					}
				}
				break;
			case 1:
				if (!func_532("CST7_FIN02"))
				{
					if (!func_532("CST7_FIN01") && !func_532("CST7_FIN01B"))
					{
						if (!__LIB_13__::func_755(&Local_392, 1))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_329) > 40000f)
							{
								__LIB_0__::func_222(&Local_528, 8, 0, "MOLLY", 0, 1);
								if (__LIB_31__::func_805(&Local_528, 45, "CST7AUD", __LIB_1__::func_295(__LIB_0__::func_323(), "CST7_FIN01B", "CST7_FIN01"), 11, 1, 0, 0, 0))
								{
									func_529(__LIB_1__::func_295(__LIB_0__::func_323(), "CST7_FIN01B", "CST7_FIN01"), 1);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
								}
							}
							else
							{
								func_529("CST7_FIN01", 1);
								func_529("CST7_FIN01B", 1);
							}
						}
					}
					else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						func_529("CST7_FIN02", 1);
					}
				}
				else
				{
					if (!func_532("CST7_STOP"))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_STOP", 7, 0, 0, 0))
						{
							func_529("CST7_STOP", 1);
						}
					}
					else if (!func_532("CST7_DRIVE"))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE", 7, 0, 0, 0))
						{
							func_529("CST7_DRIVE", 1);
						}
					}
					__LIB_16__::func_34(&Local_392, Local_329, 0.001f, 0.001f, 2f, 0, Local_387[iLocal_261 /*19*/], "CH_FOLTRUCK2", "CH_GETINCAR", "CH_GETBACKCAR", 0, 0, 1, -1);
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_13__::func_815(&Local_392, 1, 0);
					iLocal_277 = 0;
					iLocal_257 = (iLocal_257 - 1);
				}
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) < 400f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 900f)
						{
							iLocal_466 = 2;
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_392.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) < 400f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 900f)
						{
							iLocal_466 = 2;
						}
					}
				}
				break;
		}
		if (!func_532("CST7_WALK2"))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) > 900f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_392.f_0))
				{
					if (!PED::IS_PED_INJURED(iLocal_383))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 18f, 18f, 18f, false, true, 0))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_383, PLAYER::PLAYER_PED_ID()))
							{
								if (!__LIB_13__::func_755(&Local_392, 1))
								{
									__LIB_0__::func_222(&Local_528, 8, iLocal_383, "MOLLY", 0, 1);
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_WALK2", 7, 0, 0, 0))
									{
										func_529("CST7_WALK2", 1);
									}
								}
								else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_383))
								{
									__LIB_0__::func_709(iLocal_383, "CST7_AIAA", "MOLLY", 6);
									func_529("CST7_WALK2", 1);
								}
							}
						}
					}
				}
			}
		}
		if (!func_532("CST7_WALK1"))
		{
			if (func_532("CST7_WALK2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) > 900f)
				{
					if (HUD::DOES_BLIP_EXIST(Local_392.f_0))
					{
						if (!PED::IS_PED_INJURED(iLocal_383))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 10f, 10f, 10f, false, true, 0))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_383, PLAYER::PLAYER_PED_ID()))
								{
									if (!__LIB_13__::func_755(&Local_392, 1))
									{
										__LIB_0__::func_222(&Local_528, 8, iLocal_383, "MOLLY", 0, 1);
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_WALK1", 7, 0, 0, 0))
										{
											func_529("CST7_WALK1", 1);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_383))
									{
										__LIB_0__::func_709(iLocal_383, "CST7_AIAA", "MOLLY", 6);
										func_529("CST7_WALK1", 1);
									}
								}
							}
						}
					}
				}
			}
		}
		switch (iLocal_258)
		{
			case 0:
				iLocal_258++;
				break;
			case 1:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("CAR4_RADIO_1"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CAR4_RADIO_1");
						iLocal_259 = MISC::GET_GAME_TIMER();
						iLocal_258++;
					}
				}
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_259) > 5000)
				{
					iLocal_258++;
				}
				break;
		}
		if (!func_532("CST7_MORE"))
		{
			if (!__LIB_13__::func_755(&Local_392, 0))
			{
				if (iLocal_294 > 1)
				{
					iVar3 = (iLocal_294 - 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_379[iVar3], false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true), ENTITY::GET_ENTITY_COORDS(iLocal_379[iVar3], true)) < 1600f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_LMORE", 7, 0, 0, 0))
								{
									func_529("CST7_MORE", 1);
								}
							}
							else if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_TMORE", 7, 0, 0, 0))
							{
								func_529("CST7_MORE", 1);
							}
						}
					}
				}
			}
		}
		else if (iLocal_294 != iLocal_280)
		{
			func_529("CST7_MORE", 0);
		}
		iLocal_294 = iLocal_280;
		if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_392.f_5, 0);
			HUD::SET_BLIP_ROUTE(Local_392.f_5, false);
		}
		if (!func_532("CH_SHOTHELP"))
		{
			if (SYSTEM::TIMERB() > 3000 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_0__::func_151("CH_SHOTHELP_KM", 15000);
				}
				else
				{
					__LIB_0__::func_151("CH_SHOTHELP", 15000);
				}
				func_529("CH_SHOTHELP", 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
			{
				if (!func_532("CST7_BUTTON"))
				{
					if (__LIB_0__::func_501("LOSE_WANTED" /* GXT: Lose the Cops. */, 0, 0))
					{
						if (SYSTEM::TIMERB() > 4000)
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if (Local_423.f_4 == 0)
					{
						if (!__LIB_13__::func_755(&Local_392, 1))
						{
							if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_BUTTON", 7, 0, 0, 0))
							{
								func_529("CST7_BUTTON", 1);
							}
						}
					}
					else
					{
						func_529("CST7_BUTTON", 1);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_1("CH_SHOTHELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f)
				{
					func_847(25);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
			{
				__LIB_17__::func_71(&uLocal_533, Local_388.f_0, 0, 0, 1, 1, 1);
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_TRUCK"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_4_FOCUS_ON_TRUCK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_TRUCK"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_TRUCK");
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
		{
			func_847(4);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
			{
				func_847(9);
			}
		}
		if (!PED::IS_PED_INJURED(Local_389.f_0) && !PED::IS_PED_INJURED(iLocal_469[2]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true)) > 90000f)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_469[2], true)) > 40000f)
				{
					func_847(15);
				}
				else
				{
					func_847(13);
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_469[2], true)) > 90000f)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true)) > 40000f)
				{
					func_847(15);
				}
				else
				{
					func_847(14);
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) < 22500f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true)) < 3600f)
			{
				func_847(19);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_383, false))
			{
				if (((((FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f) || FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 5f))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_383, 400, true, 0);
				}
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_383)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_383, PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::PLAY_PAIN(iLocal_383, 5, 0, 0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_383, -8f, true);
					TASK::TASK_SMART_FLEE_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					func_847(26);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_376))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_376, false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_376, PLAYER::PLAYER_PED_ID(), true) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_376, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
						{
							AUDIO::PLAY_PAIN(iLocal_383, 5, 0, 0);
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_383, -8f, true);
							TASK::TASK_SMART_FLEE_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							func_847(26);
						}
					}
				}
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 8f, true))
				{
					AUDIO::PLAY_PAIN(iLocal_383, 5, 0, 0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_383, -8f, true);
					TASK::TASK_SMART_FLEE_PED(iLocal_383, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					func_847(26);
				}
			}
		}
	}
	if (((ENTITY::DOES_ENTITY_EXIST(Local_388.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false)) && ENTITY::DOES_ENTITY_EXIST(Local_388.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_388.f_0) < 1f || VEHICLE::IS_VEHICLE_STOPPED(Local_388.f_0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1830))
			{
				AUDIO::STOP_SOUND(iLocal_1830);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1839, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1840, false);
			}
		}
		else
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_1830))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", false, -1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_387[0 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_387[0 /*19*/], false))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1830, "CAR_STEAL_4_RAMP_SCRAPE", Local_387[0 /*19*/], "CAR_STEAL_4_SOUNDSET", false, 0);
					}
				}
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
			{
				iLocal_1839 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_388.f_1, Local_335, Local_336, 1f, false, false, false);
			}
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
			{
				iLocal_1840 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_388.f_1, Local_334, Local_336, 1f, false, false, false);
			}
		}
	}
	if (iLocal_466 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_466();
		__LIB_13__::func_815(&Local_392, 1, 0);
		AUDIO::STOP_AUDIO_SCENES();
		GRAPHICS::SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(1f);
		__LIB_0__::func_345(&uLocal_533, 0, 0);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1830))
		{
			AUDIO::STOP_SOUND(iLocal_1830);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1839, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1840, false);
		}
		iLocal_466 = 0;
		iLocal_465 = 6;
	}
	if (iLocal_466 == 3)
	{
		func_910(6, 0);
	}
}

int func_585()//Position - 0x77256
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5[10];
	float fVar6;
	float fVar7;
	iVar0 = 0;
	iVar1 = iLocal_379;
	iVar2 = 0;
	fVar3 = 0f;
	fVar4 = 0f;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_379[iVar0], false))
		{
			iVar2++;
		}
		else if (iVar0 >= iLocal_280)
		{
			iVar2++;
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_469[2]))
	{
		PED::GET_PED_NEARBY_VEHICLES(iLocal_469[2], &iVar5);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar5[iVar0]))
			{
				if (__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(iVar5[iVar0])) || ENTITY::GET_ENTITY_MODEL(iVar5[iVar0]) == iLocal_460)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar5[iVar0], false))
					{
						fVar6 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_469[2], true), ENTITY::GET_ENTITY_COORDS(iVar5[iVar0], true));
						fVar7 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar5[iVar0], true));
						if (fVar3 == 0f || fVar6 < fVar3)
						{
							fVar3 = fVar6;
						}
						if (fVar4 == 0f || fVar7 < fVar4)
						{
							fVar4 = fVar7;
						}
					}
				}
			}
			iVar0++;
		}
	}
	switch (iLocal_277)
	{
		case 0:
			PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			if (iLocal_280 >= 5)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				iLocal_277++;
			}
			break;
		case 1:
			PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			if (iLocal_280 >= (iVar1 - 1))
			{
				iLocal_277++;
			}
			break;
		case 2:
			PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (iVar2 == 0 && iLocal_280 >= iVar1))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				iLocal_277 = 50;
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			break;
		case 50:
			if (!func_532("CST7_CDONE"))
			{
				if (!__LIB_13__::func_755(&Local_392, 1))
				{
					if (CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_CDONE", 7, 0, 0, 0))
						{
							func_529("CST7_CDONE", 1);
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (iVar2 == 0 && iLocal_280 >= iVar1))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_278) > 10000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_277 = 100;
				}
			}
			else
			{
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			break;
		case 100:
			return 1;
			break;
	}
	return 0;
}

void func_587(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x7757F
{
	if ((MISC::GET_GAME_TIMER() - *iParam4) > 0)
	{
		if (*iParam5 == 0)
		{
			*iParam5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iParam6, iParam7));
		}
		else
		{
			GRAPHICS::DRAW_LIGHT_WITH_RANGE(Param0, SYSTEM::FLOOR(Param1.f_0), SYSTEM::FLOOR(Param1.f_1), SYSTEM::FLOOR(Param1.f_2), fParam2, fParam3);
			if ((MISC::GET_GAME_TIMER() - *iParam5) > 0)
			{
				*iParam4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iParam8, iParam9));
				*iParam5 = 0;
			}
		}
	}
}

void func_588()//Position - 0x775EF
{
	if (!PED::IS_PED_INJURED(iLocal_469[1]))
	{
		func_342(iLocal_469[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_469[2]))
	{
		func_342(iLocal_469[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == __LIB_0__::func_518(1))
	{
		func_342(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	else
	{
		func_342(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_389.f_0))
	{
		PED::SET_PED_PROP_INDEX(Local_389.f_0, 2, 0, 0, false);
	}
}

void func_589()//Position - 0x7769C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	int iVar11;
	if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true) };
		AUDIO::REQUEST_MISSION_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG", false, -1);
		if (iLocal_280 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_379[0]))
			{
				if ((SYSTEM::VDIST2(Var1, Local_332) < 40000f || (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) < 16000000f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_332) > 4000000f)) || iLocal_465 == 5)
				{
					STREAMING::REQUEST_MODEL(iLocal_459);
					STREAMING::REQUEST_MODEL(iLocal_460);
					if (STREAMING::HAS_MODEL_LOADED(iLocal_459) && STREAMING::HAS_MODEL_LOADED(iLocal_460))
					{
						if (iLocal_465 == 5 || SYSTEM::VDIST2(Var1, Local_332) > 40000f)
						{
							if (func_595(&Var0, &fVar3, 0, -40f))
							{
								if (SYSTEM::VDIST2(Var1, Var0) < 40000f)
								{
									MISC::CLEAR_AREA(Var0, 3f, true, false, false, false);
									iLocal_379[0] = VEHICLE::CREATE_VEHICLE(iLocal_460, Var0, fVar3, true, true, false);
								}
							}
						}
						else
						{
							iLocal_379[0] = VEHICLE::CREATE_VEHICLE(iLocal_460, Local_332, 54.7075f, true, true, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_379[0]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_379[0], "CAR_4_COPS_GROUP", 0f);
							Local_391[0 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_379[0], 6, iLocal_459, -1, true, true);
							Local_391[1 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_379[0], 6, iLocal_459, 0, true, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_459);
							Local_391[0 /*4*/].f_2 = 1;
							Local_391[1 /*4*/].f_2 = 0;
							Local_391[0 /*4*/].f_3 = 0;
							Local_391[1 /*4*/].f_3 = 0;
							fLocal_323 = -60f;
							iLocal_280++;
							iLocal_318 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
			}
		}
		else if ((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false)) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			STREAMING::REQUEST_MODEL(iLocal_459);
			STREAMING::REQUEST_MODEL(iLocal_460);
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < iLocal_379)
			{
				iVar6 = iVar5 * 2;
				iVar7 = iVar6 + 1;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_379[iVar5]))
				{
					func_593(&(Local_391[iVar6 /*4*/]), iLocal_379[iVar5], Local_391[iVar6 /*4*/], -1, Local_388.f_0, PLAYER::PLAYER_PED_ID());
					func_593(&(Local_391[iVar7 /*4*/]), iLocal_379[iVar5], Local_391[iVar6 /*4*/], 0, Local_388.f_0, PLAYER::PLAYER_PED_ID());
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_379[iVar5], false))
					{
						Var10 = { ENTITY::GET_ENTITY_COORDS(iLocal_379[iVar5], true) };
						fVar8 = SYSTEM::VDIST2(Var2, Var10);
						fVar9 = SYSTEM::VDIST2(Var1, Var10);
						if (!PED::IS_PED_INJURED(Local_391[iVar6 /*4*/]))
						{
							if (Local_391[iVar6 /*4*/].f_2 == 1 || Local_391[iVar6 /*4*/].f_2 == 2)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_284) > 0 && !__LIB_13__::func_755(&Local_392, 1))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_391[iVar6 /*4*/], true), ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true)) < 1600f)
									{
										iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
										if (iLocal_465 == 5)
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_391[iVar6 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 1600f)
											{
												if (iVar11 == 0)
												{
													if (iLocal_287 < 4)
													{
														__LIB_0__::func_221(&Local_528, 4);
														__LIB_0__::func_221(&Local_528, 6);
														__LIB_0__::func_222(&Local_528, 4, Local_391[iVar6 /*4*/], "CSTFCop1", 0, 1);
														if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_COPWAR3", 7, 0, 0, 0))
														{
															iLocal_284 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
															iLocal_287++;
														}
													}
												}
												else if (iLocal_288 < 4)
												{
													__LIB_0__::func_221(&Local_528, 4);
													__LIB_0__::func_221(&Local_528, 6);
													__LIB_0__::func_222(&Local_528, 6, Local_391[iVar6 /*4*/], "CSTFCop2", 0, 1);
													if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_COPWAR4", 7, 0, 0, 0))
													{
														iLocal_284 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
														iLocal_288++;
													}
												}
											}
										}
										else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_391[iVar6 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 2500f)
										{
											if (Local_528[4 /*10*/] != Local_391[iVar6 /*4*/])
											{
												__LIB_0__::func_222(&Local_528, 4, Local_391[iVar6 /*4*/], "CSTFCop1", 0, 1);
											}
											if (iLocal_285 < 2)
											{
												if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_COPWARN", 7, 0, 0, 0))
												{
													iLocal_284 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
													iLocal_285++;
												}
											}
											else if (iLocal_286 < 4)
											{
												if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_COPWAR2", 7, 0, 0, 0))
												{
													iLocal_284 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(11000, 15000));
													iLocal_286++;
												}
											}
										}
									}
								}
							}
						}
						if (iLocal_465 == 5)
						{
							if (((MISC::GET_GAME_TIMER() - iLocal_310) > 0 && !ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false)) && !__LIB_13__::func_755(&Local_392, 1))
							{
								if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]) && !PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, Local_423.f_5)) && MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2.5f, false, true))
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_SHOT", 7, 0, 0, 0))
									{
										iLocal_310 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12500));
									}
								}
							}
						}
						if ((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_379[iVar5]) < 400f || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_379[iVar5]) < 400f) || (fVar8 > 40000f && fVar9 > 40000f))
						{
							if (!PED::IS_PED_INJURED(Local_391[iVar6 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_391[iVar6 /*4*/], iLocal_379[iVar5], false))
							{
								PED::APPLY_DAMAGE_TO_PED(Local_391[iVar6 /*4*/], 200, true, 0);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
							}
							else
							{
								func_7(&(Local_391[iVar6 /*4*/]), 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_391[iVar7 /*4*/]) && PED::IS_PED_IN_VEHICLE(Local_391[iVar7 /*4*/], iLocal_379[iVar5], false))
							{
								PED::APPLY_DAMAGE_TO_PED(Local_391[iVar7 /*4*/], 200, true, 0);
							}
							else
							{
								func_7(&(Local_391[iVar7 /*4*/]), 0, 0);
							}
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_379[iVar5], 900f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_379[iVar5], 900f);
							if (AUDIO::REQUEST_MISSION_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG", false, -1))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Destroy_Cop_Car", iLocal_379[iVar5], "JEWEL_HEIST_SOUNDS", false, 0);
							}
						}
						else if (func_591(iLocal_379[iVar5], Local_387[iLocal_261 /*19*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_379[iVar5], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_379[iVar5]) - 100f));
							WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_379[iVar5]);
						}
						if (!PED::IS_PED_INJURED(Local_391[iVar6 /*4*/]) && !PED::IS_PED_INJURED(Local_391[iVar7 /*4*/]))
						{
							iVar4++;
						}
						else if (PED::IS_PED_INJURED(Local_391[iVar6 /*4*/]) && PED::IS_PED_INJURED(Local_391[iVar7 /*4*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_379[iVar5], false))
							{
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_379[iVar5], 0f);
							}
							func_7(&(Local_391[iVar6 /*4*/]), 0, 0);
							func_7(&(Local_391[iVar7 /*4*/]), 0, 0);
							func_6(&(iLocal_379[iVar5]), 0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_379[iVar5], false))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_379[iVar5], 0f);
						}
						func_7(&(Local_391[iVar6 /*4*/]), 0, 1);
						func_7(&(Local_391[iVar7 /*4*/]), 0, 1);
						func_6(&(iLocal_379[iVar5]), 0, 1);
					}
				}
				else if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (iVar5 == iLocal_280)
					{
						if ((iVar4 < 2 && iLocal_280 > 1) || (iVar4 < 1 && iLocal_280 == 1))
						{
							if (STREAMING::HAS_MODEL_LOADED(iLocal_459) && STREAMING::HAS_MODEL_LOADED(iLocal_460))
							{
								if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_388.f_0) || __LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/]))
								{
									if (func_595(&Var0, &fVar3, 0, fLocal_323))
									{
										if (SYSTEM::VDIST2(Var1, Var0) < 40000f)
										{
											MISC::CLEAR_AREA(Var0, 3f, true, false, false, false);
											iLocal_379[iVar5] = VEHICLE::CREATE_VEHICLE(iLocal_460, Var0, fVar3, true, true, false);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_379[iVar5], true, true, false);
											VEHICLE::SET_VEHICLE_SIREN(iLocal_379[iVar5], true);
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_379[iVar5], true);
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_379[iVar5], 2);
											AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_379[iVar5], "CAR_4_COPS_GROUP", 0f);
											VEHICLE::SET_VEHICLE_STRONG(iLocal_379[iVar5], true);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_379[iVar5], 5f);
											Local_391[iVar6 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_379[iVar5], 6, iLocal_459, -1, true, true);
											Local_391[iVar7 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_379[iVar5], 6, iLocal_459, 0, true, true);
											Local_391[iVar6 /*4*/].f_2 = 0;
											Local_391[iVar7 /*4*/].f_2 = 0;
											Local_391[iVar6 /*4*/].f_3 = 0;
											Local_391[iVar7 /*4*/].f_3 = 0;
											if (fLocal_323 == -50f)
											{
												fLocal_323 = -60f;
											}
											else if (fLocal_323 == -60f)
											{
												fLocal_323 = -50f;
											}
											iVar4++;
											if (__LIB_15__::func_944() == 1)
											{
												iLocal_280++;
											}
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
}

int func_591(int iParam0, int iParam1)//Position - 0x7806E
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN"), 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_593(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x780CE
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam4, false), ENTITY::GET_ENTITY_COORDS(iParam1, false), true);
			switch (uParam0->f_2)
			{
				case 0:
					if (uParam0->f_3 == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("WEAPON_PISTOL"), -1, false, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
						uParam0->f_3 = 1;
					}
					if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
					{
						if (__LIB_1__::func_483(*uParam0, iParam1))
						{
							switch (__LIB_2__::func_837(*uParam0, iParam1))
							{
								case -1:
									uParam0->f_3 = 0;
									uParam0->f_2 = 2;
									break;
								case 0:
									uParam0->f_3 = 0;
									uParam0->f_2 = 3;
									break;
								}
						}
					}
					else
					{
						uParam0->f_3 = 0;
						uParam0->f_2 = 5;
					}
					break;
				case 1:
					if (uParam0->f_3 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
							{
								TASK::TASK_VEHICLE_MISSION(*uParam0, iParam1, iParam4, 10, 50f, 786468, 5f, 10f, true);
							}
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
						iLocal_316 = MISC::GET_GAME_TIMER();
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
							{
								if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 0, true) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 1, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 4, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 5, true))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1, false))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
									if ((MISC::GET_GAME_TIMER() - iLocal_316) > 45000)
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 2;
									}
								}
							}
						}
					}
					break;
				case 2:
					if (uParam0->f_3 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1, false)))
							{
								TASK::TASK_VEHICLE_CHASE(*uParam0, VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1, false));
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
							{
								TASK::TASK_VEHICLE_MISSION(*uParam0, iParam1, iParam4, 4, 25f, 786468, 20f, 20f, true);
							}
						}
						WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("WEAPON_PISTOL"), -1, false, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_VEHICLE_CHASE")) == 1)
						{
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 8, true);
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 1, true);
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 2, true);
							TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(*uParam0, 32, true);
							if (iLocal_1838 == 0)
							{
								TASK::SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(*uParam0, 20f);
							}
							else
							{
								TASK::SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(*uParam0, 60f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
							{
								if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 0, true) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 1, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 4, true)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, 5, true))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1, false))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 3:
					if (uParam0->f_3 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
							{
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									if (PED::IS_PED_INJURED(iParam2))
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 2;
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1, false))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
									if (iLocal_465 == 5)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam5, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam5, true))
										{
											uParam0->f_3 = 0;
											uParam0->f_2 = 4;
										}
									}
								}
							}
						}
					}
					break;
				case 4:
					if (uParam0->f_3 == 0)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 39, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
						TASK::TASK_COMBAT_PED(*uParam0, iParam5, 67108864, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
							{
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_JACKING(iParam5) && PED::GET_VEHICLE_PED_IS_USING(iParam5) == iParam1)
								{
									uParam0->f_3 = 0;
									uParam0->f_2 = 5;
								}
								if (PED::IS_PED_IN_VEHICLE(*uParam0, iParam1, false))
								{
									if (PED::IS_PED_INJURED(iParam2))
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 2;
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
									{
										if (fVar0 < 40f)
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam4) || VEHICLE::IS_VEHICLE_SEAT_FREE(iParam4, -1, false))
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 5;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 5:
					if (uParam0->f_3 == 0)
					{
						PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
						PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
						PED::SET_COMBAT_FLOAT(*uParam0, 5, 0.9f);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 39, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, true);
						PED::SET_COMBAT_FLOAT(*uParam0, 13, 15f);
						TASK::TASK_COMBAT_PED(*uParam0, iParam5, 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
						uParam0->f_3 = 1;
					}
					if (uParam0->f_3 == 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam4, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1, false)))
							{
								if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1, false), false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam4, -1, false), iParam4))
									{
										if (!VEHICLE::IS_VEHICLE_STOPPED(iParam4))
										{
											if (fVar0 > 50f)
											{
												uParam0->f_3 = 0;
												uParam0->f_2 = 6;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 6:
					if (uParam0->f_3 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
						{
							if (!PED::IS_PED_INJURED(iParam2))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam3, false))
								{
									TASK::TASK_ENTER_VEHICLE(*uParam0, iParam1, 40000, iParam3, 2f, 8388609, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
								}
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, -1, false))
							{
								TASK::TASK_ENTER_VEHICLE(*uParam0, iParam1, 40000, -1, 2f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
							}
						}
						uParam0->f_3 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iParam1))
						{
							switch (__LIB_2__::func_837(*uParam0, iParam1))
							{
								case -1:
									uParam0->f_3 = 0;
									uParam0->f_2 = 2;
									break;
								case 0:
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam5, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam5, true))
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 4;
									}
									else
									{
										uParam0->f_3 = 0;
										uParam0->f_2 = 3;
									}
									break;
								}
						}
					}
					else
					{
						uParam0->f_3 = 0;
						uParam0->f_2 = 5;
					}
					break;
				}
			}
	}
}

int func_595(var uParam0, float fParam1, int iParam2, float fParam3)//Position - 0x788ED
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true) };
		if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var2, 1, 3f, 0f))
		{
			if (SYSTEM::VDIST2(Var0, Var2) < 100f)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, false))
				{
					fVar8 = ENTITY::GET_ENTITY_HEADING(Local_388.f_0);
				}
				else
				{
					fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1));
				}
				Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar8, 0f, fParam3, 0f) };
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var4, 1, &Var3, &fVar5, &uVar9, 1, 3f, 0f))
				{
					*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar5, 0f, (-10f * IntToFloat(iParam2)), 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(*uParam0, 3f) || CAM::IS_SCREEN_FADED_OUT())
					{
						fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Var0.f_0 - *uParam0), (Var0.f_1 - uParam0->f_1));
						fVar7 = MISC::ABSF((fVar6 - fVar5));
						if (fVar7 > 180f)
						{
							fVar7 = MISC::ABSF((fVar7 - 360f));
						}
						if (fVar7 < 90f)
						{
							*fParam1 = fVar5;
						}
						else
						{
							*fParam1 = (fVar5 + 180f);
						}
						iLocal_318 = MISC::GET_GAME_TIMER() + 1000;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_596(struct<3> Param0)//Position - 0x78A45
{
	Local_330 = { 0f, 0f, 0f };
	Local_331 = { 0f, 0f, 0f };
	if (Param0.f_0 < Local_329.f_0)
	{
		Local_330.f_0 = Param0.f_0;
		Local_331.f_0 = Local_329.f_0;
	}
	else
	{
		Local_330.f_0 = Local_329.f_0;
		Local_331.f_0 = Param0.f_0;
	}
	if (Param0.f_1 < Local_329.f_1)
	{
		Local_330.f_1 = Param0.f_1;
		Local_331.f_1 = Local_329.f_1;
	}
	else
	{
		Local_330.f_1 = Local_329.f_1;
		Local_331.f_1 = Param0.f_1;
	}
	if (Param0.f_2 < Local_329.f_2)
	{
		Local_330.f_2 = Param0.f_2;
		Local_331.f_2 = Local_329.f_2;
	}
	else
	{
		Local_330.f_2 = Local_329.f_2;
		Local_331.f_2 = Param0.f_2;
	}
	Local_330 = { Local_330 - Vector(200f, 200f, 200f) };
	Local_331 = { Local_331 + Vector(200f, 200f, 200f) };
}

void func_597()//Position - 0x78B1F
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 228, true);
	if (!PED::IS_PED_INJURED(Local_389.f_0))
	{
		PED::SET_PED_RESET_FLAG(Local_389.f_0, 227, true);
	}
	Var0 = { Local_326 };
	fVar1 = fLocal_319;
	if (iLocal_465 == 4)
	{
		Var0 = { -2205.16f, 4326.3677f, 48.4147f };
		fVar1 = 339.0508f;
	}
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			if (bLocal_246)
			{
				__LIB_0__::func_427(Var0 + Vector(0f, 5f, 5f), 0f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0 + Vector(0f, 5f, 5f), true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			func_691();
			__LIB_0__::func_109();
			STREAMING::REQUEST_ANIM_DICT(sLocal_351);
			STREAMING::REQUEST_ANIM_DICT(sLocal_354);
			STREAMING::REQUEST_ANIM_DICT(sLocal_359);
			while (((((((!func_690() || !func_405(Var0, fVar1)) || !func_402()) || !func_398(Var0 + Vector(0f, 10f, 10f), 200.8915f)) || !func_689(Var0 + Vector(0f, 15f, 15f), 204.3612f)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_351)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_354)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_359))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_351);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_326, 30f, false, false, false, false, false, false, 0);
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(Local_388.f_0, -1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, -1);
				}
				if (!PED::IS_PED_INJURED(iLocal_469[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_469[1], Local_388.f_0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_389.f_0))
				{
					PED::SET_PED_MAX_HEALTH(Local_389.f_0, 500);
					ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 500, 0);
					func_688();
				}
			}
			func_546();
			iLocal_257 = 99;
			iLocal_231 = 0;
		}
		else
		{
			iLocal_280 = 0;
			iLocal_300 = 0;
			iLocal_301 = 0;
			iLocal_302 = 0;
			iLocal_285 = 0;
			iLocal_286 = 0;
			iLocal_287 = 0;
			iLocal_288 = 0;
			func_47(1);
			func_36(1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (iLocal_465 == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, -1);
						}
						MISC::CLEAR_AREA_OF_VEHICLES(Var0, 100f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_COORDS(Local_388.f_0, Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_388.f_0, fVar1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_388.f_0, 5f);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_388.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0.191836f, -9.89637f, 0.27933f), false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_388.f_1, ENTITY::GET_ENTITY_HEADING(Local_388.f_0));
							VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_388.f_0, Local_388.f_1, 1f);
							PHYSICS::ACTIVATE_PHYSICS(Local_388.f_1);
						}
					}
					SYSTEM::SETTIMERB(0);
					while (SYSTEM::TIMERB() < 2000)
					{
						func_589();
						SYSTEM::WAIT(0);
					}
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				else if (iLocal_257 != 99)
				{
					STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					SYSTEM::WAIT(500);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < Local_387.f_0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iVar2 /*19*/], false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iVar2 /*19*/], false);
				}
				iVar2++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, false);
			}
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PED::SET_CREATE_RANDOM_COPS(false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, true);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, true);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, true);
			MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
			iLocal_234 = 0;
			iLocal_233 = 0;
			iLocal_244 = 0;
			bLocal_245 = false;
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
			if (iLocal_465 == 4)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
				}
				func_862(3, "COPS_ARRIVE", 0, 0, 0, 1);
				bLocal_247 = true;
			}
			else
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_GET_TO_PALETO"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_4_GET_TO_PALETO");
				}
				func_862(2, "GO_TO_GAS_STATION", 0, 0, 0, 1);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
				if (iLocal_465 == 3)
				{
					SYSTEM::WAIT(2000);
				}
				CAM::DO_SCREEN_FADE_IN(800);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (iLocal_465 == 4)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_388.f_0, 15f);
						}
					}
					SYSTEM::WAIT(0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_389.f_0))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_389.f_0, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_469[2]))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_469[2], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_469[1]))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_469[1], true);
			}
			__LIB_0__::func_222(&Local_528, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_222(&Local_528, 1, iLocal_469[1], "FRANKLIN", 0, 1);
			__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_GODROP", 7, 0, 0, 0);
			Local_330 = { 0f, 0f, 0f };
			Local_331 = { 0f, 0f, 0f };
			iLocal_274 = 0;
			fLocal_322 = 0f;
			iLocal_239 = 1;
			bLocal_247 = false;
			iLocal_258 = 0;
			iLocal_297 = -1;
			iLocal_340 = 0;
			iLocal_341 = 0;
			iLocal_342 = 0;
			iLocal_343 = 0;
			iLocal_257 = 0;
			iLocal_466 = 1;
		}
	}
	if (iLocal_466 == 1)
	{
		func_589();
		func_688();
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
			{
				func_587(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, Local_335 + Local_339), Local_337, Local_338.f_0, Local_338.f_1, &iLocal_340, &iLocal_341, 50, 300, 30, 100);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1840))
			{
				func_587(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, Local_334 + Local_339), Local_337, Local_338.f_0, Local_338.f_1, &iLocal_342, &iLocal_343, 50, 300, 30, 100);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
			{
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5) && iLocal_257 < 100)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_388.f_2))
					{
						HUD::CLEAR_PRINTS();
						Local_388.f_2 = __LIB_0__::func_639(Local_388.f_1, 0, 0);
					}
					if (!func_532("CST7_UNHOOK"))
					{
						if (!__LIB_13__::func_755(&Local_392, 1))
						{
							if (iLocal_300 < 3)
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_UNHOOK", 7, 0, 0, 0))
								{
									func_529("CST7_UNHOOK", 1);
									func_529("CST7_HOOKED", 0);
									iLocal_300++;
								}
								else
								{
									__LIB_0__::func_638();
								}
							}
							else
							{
								func_529("CST7_UNHOOK", 1);
							}
						}
						else
						{
							MemCopy(&uVar3, {__LIB_0__::func_486()}, 4);
							if ((((((((MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2B") || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2B")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2C")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVcon")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2D")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2R")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2F")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIV2Fb")) || MISC::ARE_STRINGS_EQUAL(&uVar3, "CST7_DRIVE2G"))
							{
								__LIB_0__::func_638();
							}
						}
					}
					else if (!func_532("CH_REATTACH"))
					{
						if (!__LIB_13__::func_755(&Local_392, 2))
						{
							__LIB_0__::func_229("CH_REATTACH", 7500, 0);
							func_529("CH_REATTACH", 1);
						}
					}
					else if (!func_532("CST7_UNHOOK2"))
					{
						if (iLocal_302 < 5)
						{
							if (!__LIB_13__::func_755(&Local_392, 1))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_303) > 7700)
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_UNHOOK2", 7, 0, 0, 0))
									{
										func_529("CST7_UNHOOK2", 1);
										iLocal_302++;
									}
								}
							}
							else
							{
								iLocal_303 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_388.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_388.f_2));
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_295) > 90000)
				{
					func_847(9);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_295) > 30000)
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
					{
						if (!ENTITY::IS_ENTITY_UPRIGHT(Local_388.f_1, 90f) || ENTITY::IS_ENTITY_UPSIDEDOWN(Local_388.f_1))
						{
							func_847(9);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true)) > 40000f)
					{
						func_847(10);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_388.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_388.f_2));
				}
				if (__LIB_0__::func_501("CH_REATTACH", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (func_532("CST7_UNHOOK"))
				{
					if (!func_532("CST7_HOOKED"))
					{
						if (iLocal_301 < 2)
						{
							if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_HOOKED", 7, 0, 0, 0))
							{
								func_529("CST7_HOOKED", 1);
								iLocal_301++;
							}
						}
					}
					func_529("CST7_UNHOOK", 0);
				}
				iLocal_295 = MISC::GET_GAME_TIMER();
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			Var4 = { ENTITY::GET_ENTITY_ROTATION(Local_388.f_1, 2) };
		}
		if (iLocal_465 == 4)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			func_596(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true));
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_330.f_0, Local_330.f_1, Local_331.f_0, Local_331.f_1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
		}
		if (iLocal_465 == 4)
		{
			if ((__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_388.f_0, 0) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4) && (!CAM::DOES_CAM_EXIST(iLocal_369) || (CAM::DOES_CAM_EXIST(iLocal_369) && !CAM::IS_CAM_RENDERING(iLocal_369))))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
		}
		switch (iLocal_257)
		{
			case 0:
				if (iLocal_465 != 4)
				{
					MISC::SET_BIT(&(Local_392.f_13), 24);
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
					{
						__LIB_31__::func_971(&Local_392, Local_329, 0.001f, 0.001f, 2f, 1, iLocal_469[1], Local_388.f_0, "CH_GOTODROP", "CH_LEAVEFRAN", "CH_GETIN_TRUCK", "CH_GETBACK", 0, 0, 1, -1);
					}
					else
					{
						__LIB_31__::func_971(&Local_392, Local_329, 0.001f, 0.001f, 2f, 1, iLocal_469[1], Local_388.f_0, "", "CH_LEAVEFRAN", "CH_GETIN_TRUCK", "CH_GETBACK", 0, 0, 1, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_379[0], false))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_379[0], true) };
					bVar6 = (((MISC::IS_PROJECTILE_IN_AREA(Var5 - Vector(15f, 15f, 15f), Var5 + Vector(15f, 15f, 15f), true) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var5, 30f)) || MISC::IS_BULLET_IN_AREA(Var5, 30f, true)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var5) < 225f);
				}
				if (!bLocal_247)
				{
					bVar7 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_388.f_0, -2149.358f, 4304.0767f, 70.41945f, -2375.6838f, 4450.168f, -5.207527f, 53.5f, false, true, 0);
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), Local_329) < 16000000f || bVar7) || bVar6)
					{
						if (((bVar7 || bVar6) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_332) > 4000000f) || (ENTITY::DOES_ENTITY_EXIST(iLocal_379[0]) && ENTITY::IS_ENTITY_DEAD(iLocal_379[0], false)))
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							PLAYER::SET_POLICE_RADAR_BLIPS(true);
							PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
							PED::SET_CREATE_RANDOM_COPS(false);
							MISC::ENABLE_DISPATCH_SERVICE(3, false);
							MISC::ENABLE_DISPATCH_SERVICE(1, false);
							MISC::ENABLE_DISPATCH_SERVICE(8, false);
							MISC::ENABLE_DISPATCH_SERVICE(2, false);
							MISC::ENABLE_DISPATCH_SERVICE(6, false);
							MISC::ENABLE_DISPATCH_SERVICE(5, false);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_GET_TO_PALETO"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_4_GET_TO_PALETO");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
							{
								AUDIO::START_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
							}
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_CAR_STEAL_4_01", 0f);
							bLocal_247 = true;
						}
					}
				}
				if ((HUD::DOES_BLIP_EXIST(Local_392.f_5) || iLocal_465 == 4) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
				{
					if (iLocal_465 != 4)
					{
						func_684(1);
					}
					if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
					}
					if (bLocal_247)
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_WAKE", 7, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_469[1]))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_469[1], sLocal_357, "franklin_asleep", 3))
								{
									TASK::STOP_ANIM_TASK(iLocal_469[1], sLocal_357, "franklin_asleep", -1f);
								}
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_469[1]);
								PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_469[1]);
								AUDIO::STOP_PED_SPEAKING(iLocal_469[1], false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[1], true);
							}
							if (iLocal_233)
							{
								HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
								HUD::CLEAR_GPS_MULTI_ROUTE();
								iLocal_233 = 0;
							}
							__LIB_13__::func_815(&Local_392, 1, 0);
							__LIB_0__::func_499(134, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							fLocal_321 = 0f;
							iLocal_261 = 3;
							iLocal_275 = 0;
							iLocal_257++;
							iLocal_465 = 4;
							func_862(3, "COPS_ARRIVE", 0, 0, 0, 1);
						}
						else
						{
							__LIB_0__::func_638();
						}
					}
					if (iLocal_465 != 4)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_332) > 10000f)
						{
							if (!__LIB_13__::func_755(&Local_392, 1))
							{
								if (!func_532("CST7_DRIVE2B"))
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE2B", 7, 0, 0, 0))
									{
										func_529("CST7_DRIVE2B", 1);
										iLocal_281 = 0;
									}
								}
								else if (!func_532("CST7_DRIVE2C"))
								{
									STREAMING::REQUEST_ANIM_DICT(sLocal_357);
									STREAMING::REQUEST_ANIM_DICT(sLocal_358);
									if (iLocal_281 == 0)
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_357) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_358))
										{
											TASK::TASK_PLAY_ANIM(iLocal_469[1], sLocal_357, "franklin_asleep", 1f, -1f, -1, 9, 0f, false, false, false);
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_469[1], "mood_sleeping_1", 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[1], true);
											AUDIO::STOP_PED_SPEAKING(iLocal_469[1], true);
											iLocal_281 = MISC::GET_GAME_TIMER();
										}
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 5000)
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE2C", 7, 0, 0, 0))
										{
											func_529("CST7_DRIVE2C", 1);
											iLocal_281 = 0;
										}
									}
								}
								else if (!func_532("CST7_DRIVCon"))
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVCon", 7, 0, 0, 0))
									{
										func_529("CST7_DRIVCon", 1);
										iLocal_281 = 0;
									}
								}
								else if (!func_532("CST7_DRIVE2D"))
								{
									if (iLocal_281 == 0)
									{
										iLocal_281 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 5000)
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE2D", 7, 0, 0, 0))
										{
											func_529("CST7_DRIVE2D", 1);
											iLocal_281 = 0;
										}
									}
								}
								else if (!func_532("CST7_DRIVE2E"))
								{
									if (iLocal_281 == 0)
									{
										iLocal_281 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 3000)
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE2E", 7, 0, 0, 0))
										{
											func_529("CST7_DRIVE2E", 1);
										}
									}
								}
								else if (!func_532("CST7_DRIVE2F"))
								{
									if (iLocal_281 == 0)
									{
										iLocal_281 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 3000)
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE2F", 7, 0, 0, 0))
										{
											func_529("CST7_DRIVE2F", 1);
										}
									}
								}
								else if (!func_532("CST7_DRIV2Fb"))
								{
									if (iLocal_281 == 0)
									{
										iLocal_281 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 2000)
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIV2Fb", 7, 0, 0, 0))
										{
											func_529("CST7_DRIV2Fb", 1);
										}
									}
								}
								else if (!func_532("CST7_DRIVE2G"))
								{
									if (iLocal_281 == 0)
									{
										iLocal_281 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_281) > 3000)
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DRIVE2G", 7, 0, 0, 0))
										{
											func_529("CST7_DRIVE2G", 1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					func_684(0);
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
					{
						if (func_532("CST7_FHANG") || func_532("CST7_DRIVE2B"))
						{
							if (!__LIB_0__::func_568())
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									if (iLocal_274 == 0 || (MISC::GET_GAME_TIMER() - iLocal_274) > 7000)
									{
										__LIB_0__::func_620(1);
									}
								}
								else
								{
									__LIB_0__::func_620(1);
								}
							}
						}
					}
				}
				break;
			case 1:
				PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_PTFX_ASSET();
				STREAMING::REQUEST_ANIM_DICT(sLocal_354);
				STREAMING::REQUEST_ANIM_DICT(sLocal_359);
				MISC::SET_BIT(&(Local_392.f_13), 24);
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
				{
					__LIB_16__::func_34(&Local_392, Local_329, 0.001f, 0.001f, 2f, 0, Local_388.f_0, "", "", "CH_GETBACK", 0, 0, 1, -1);
				}
				else
				{
					__LIB_16__::func_34(&Local_392, Local_329, 0.001f, 0.001f, 2f, 0, Local_388.f_0, "", "", "CH_GETBACK", 0, 0, 1, -1);
				}
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
				{
					HUD::SET_BLIP_ALPHA(Local_392.f_5, 0);
					HUD::SET_BLIP_ROUTE(Local_392.f_5, false);
					if (!HUD::DOES_BLIP_EXIST(iLocal_366))
					{
						if (!PED::IS_PED_INJURED(iLocal_469[1]))
						{
							iLocal_366 = __LIB_0__::func_639(iLocal_469[1], 0, 0);
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_366))
					{
						HUD::REMOVE_BLIP(&iLocal_366);
					}
					if (HUD::DOES_BLIP_EXIST(Local_392.f_5) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
					{
						HUD::SET_BLIP_ALPHA(Local_392.f_5, 0);
						HUD::SET_BLIP_ROUTE(Local_392.f_5, false);
					}
				}
				if (func_532("CST7_SIDE"))
				{
					func_681();
				}
				iVar8 = 1;
				if (MISC::ABSF(Var4.f_1) > 30f)
				{
					iVar8 = 0;
				}
				if ((((((!__LIB_0__::func_77(0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && CAM::DOES_CAM_EXIST(iLocal_369)) && __LIB_0__::func_669(1, 1, 1)) && __LIB_13__::func_796(&uLocal_533, 1, 1, 1)) && iVar8) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_369))
					{
						if (!iLocal_244)
						{
							if (__LIB_0__::func_1("CH_FRANHELP"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_FRANKLIN"))
							{
								AUDIO::START_AUDIO_SCENE("CAR_4_FOCUS_ON_FRANKLIN");
							}
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							iLocal_244 = 1;
						}
					}
				}
				else if (iLocal_244)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_FRANKLIN"))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_FRANKLIN");
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					iLocal_244 = 0;
				}
				if (!func_532("CST7_TODO"))
				{
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_TODO", 7, 0, 0, 0))
						{
							func_529("CST7_TODO", 1);
						}
					}
				}
				else if (!func_532("CST7_OUTSIDE"))
				{
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_OUTSIDE", 7, 0, 0, 0))
						{
							func_529("CST7_OUTSIDE", 1);
						}
					}
				}
				else if (!func_532("CST7_SIDE"))
				{
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_SIDE", 7, 0, 0, 0))
						{
							func_529("CST7_SIDE", 1);
						}
					}
				}
				else if (!func_532("CST7_HEADS"))
				{
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_HEADS", 7, 0, 0, 0))
						{
							func_588();
							func_529("CST7_HEADS", 1);
						}
					}
				}
				else if (!func_532("CH_STEADY"))
				{
					if (!__LIB_13__::func_755(&Local_392, 2))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_366))
						{
							__LIB_0__::func_229("CH_STEADY", 7500, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
							func_529("CH_STEADY", 1);
						}
					}
				}
				else if (!func_532("CST7_WAIT"))
				{
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_WAIT", 7, 0, 0, 0))
						{
							func_529("CST7_WAIT", 1);
							iLocal_283 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 12000));
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_283) > 0)
				{
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (bLocal_245)
						{
							Var9 = { ENTITY::GET_ENTITY_ROTATION(Local_388.f_1, 2) };
							if (((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_388.f_1) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_388.f_0)) || Var9.f_1 < -5f) || Var9.f_1 > 5f)
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_MESS", 7, 0, 0, 0))
								{
									iLocal_283 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 11000));
								}
							}
							else if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_CLIMB", 7, 0, 0, 0))
							{
								iLocal_283 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 11000));
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false) && !PED::IS_PED_INJURED(iLocal_469[1]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_469[1], Local_387[iLocal_261 /*19*/]))
					{
						STREAMING::REMOVE_ANIM_DICT(sLocal_350);
						STREAMING::REMOVE_ANIM_DICT(sLocal_349);
						STREAMING::REMOVE_ANIM_DICT(sLocal_352);
						STREAMING::REMOVE_ANIM_DICT(sLocal_357);
						STREAMING::REMOVE_ANIM_DICT(sLocal_358);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FOCUS_ON_FRANKLIN"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_4_FOCUS_ON_FRANKLIN");
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 5f, 4);
						__LIB_15__::func_961(&iLocal_469, 1, 0, 2);
						__LIB_16__::func_15(&iLocal_469, 1, 1);
						__LIB_13__::func_815(&Local_392, 1, 0);
						func_466();
						iLocal_257++;
					}
				}
				break;
			case 2:
				MISC::SET_BIT(&(Local_392.f_13), 24);
				__LIB_16__::func_34(&Local_392, Local_329, 0.001f, 0.001f, 2f, 0, Local_388.f_0, "", "", "CH_GETBACK", 0, 0, 1, -1);
				PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", false, -1);
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
				{
					HUD::SET_BLIP_ALPHA(Local_392.f_5, 0);
					HUD::SET_BLIP_ROUTE(Local_392.f_5, false);
					if (MISC::ABSF(Var4.f_1) < 30f)
					{
						if (!func_532("CH_SWFRAN"))
						{
							if (!__LIB_13__::func_755(&Local_392, 2))
							{
								__LIB_0__::func_229("CH_SWFRAN", 15000, 0);
								func_529("CH_SWFRAN", 1);
							}
						}
						if (__LIB_32__::func_5(&iLocal_469, 1, 1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_1, 1);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_388.f_1, 5, false, false);
								VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_388.f_1, true);
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
							{
								VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_388.f_0, true);
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
							{
								AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_REVERSE_OFF_TRUCK"))
							{
								AUDIO::START_AUDIO_SCENE("CAR_4_REVERSE_OFF_TRUCK");
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_388.f_0, Local_329, 35f, 0, iLocal_456, 262208, 10f, 20f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
							__LIB_16__::func_15(&iLocal_469, 1, 0);
							__LIB_13__::func_815(&Local_392, 1, 0);
							HUD::CLEAR_PRINTS();
							SYSTEM::SETTIMERB(0);
							iLocal_257 = 100;
							iLocal_1809 = 0;
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								iLocal_1838 = 1;
							}
							else
							{
								iLocal_1838 = 2;
							}
						}
					}
				}
				if (!func_532("CST7_CLIMB2"))
				{
					if (!PED::IS_PED_INJURED(iLocal_469[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_469[1], Local_387[iLocal_261 /*19*/], false))
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_CLIMB2", 7, 0, 0, 0))
								{
									func_529("CST7_CLIMB2", 1);
								}
							}
						}
					}
				}
				break;
			case 100:
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_388.f_0, 2);
				}
				PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (!func_532("CST7_SWITCH"))
				{
					if (!PED::IS_PED_INJURED(iLocal_469[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_469[1], Local_387[iLocal_261 /*19*/], false))
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_SWITCH", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
									func_529("CST7_SWITCH", 1);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(Local_389.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_389.f_0, Local_388.f_0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_389.f_0);
						if (ENTITY::IS_ENTITY_ATTACHED(Local_389.f_0))
						{
							ENTITY::DETACH_ENTITY(Local_389.f_0, true, true);
						}
						PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_388.f_0, 0);
					}
				}
				if (func_603(&uLocal_555))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_410();
					VEHICLE::ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(0);
					Local_387[iLocal_261 /*19*/].f_10 = 0;
					iLocal_257++;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_466 = 2;
				}
				else
				{
					func_602();
					func_545(0);
				}
				break;
		}
		switch (iLocal_258)
		{
			case 0:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR4_RADIO_2");
					iLocal_259 = MISC::GET_GAME_TIMER();
					iLocal_258++;
				}
				break;
			case 1:
				AUDIO::PREPARE_MUSIC_EVENT("CAR4_RADIO_2_START_TRACK");
				if ((MISC::GET_GAME_TIMER() - iLocal_259) > 6000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR4_RADIO_2_START_TRACK");
					iLocal_258++;
				}
				break;
			case 2:
				if (bLocal_245 && !PED::IS_PED_INJURED(iLocal_469[1]))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_267))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_267) > 0.6f)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("CAR4_CLIMB");
							iLocal_258++;
						}
					}
				}
				break;
		}
		if (!PED::IS_PED_INJURED(Local_389.f_0) && !PED::IS_PED_INJURED(iLocal_469[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true)) > 90000f)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_469[1], true)) > 40000f)
				{
					func_847(16);
				}
				else
				{
					func_847(13);
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_469[1], true)) > 90000f)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_292) > 500)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true)) > 40000f)
					{
						func_847(16);
					}
					else
					{
						func_847(11);
					}
				}
			}
			else
			{
				iLocal_292 = MISC::GET_GAME_TIMER();
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(Local_388.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_388.f_1)) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false)) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if ((__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), 3, 0, 0) && __LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true), 3, 0, 0)) || (__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true), 4, 0, 0) && __LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true), 4, 0, 0)))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_847(23);
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false)) && !ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false)) && !PED::IS_PED_INJURED(iLocal_469[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_469[1], false) && iLocal_257 > 0)
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_469[1], Local_387[iLocal_261 /*19*/], false))
				{
					if (MISC::ABSF(Var4.f_1) > 45f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_469[1], -8f, true);
						iLocal_267 = -1;
						ENTITY::DETACH_ENTITY(iLocal_469[1], true, false);
						PED::SET_PED_CAN_RAGDOLL(iLocal_469[1], true);
						PED::SET_PED_TO_RAGDOLL(iLocal_469[1], 3000, 10000, 2, true, true, false);
					}
				}
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_267) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_469[1], Local_388.f_1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_469[1], Local_388.f_0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_293) > 500)
					{
						func_847(24);
					}
				}
				else
				{
					iLocal_293 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (iLocal_466 == 2)
	{
		func_466();
		__LIB_13__::func_815(&Local_392, 1, 0);
		__LIB_0__::func_638();
		__LIB_16__::func_884(&iLocal_469);
		AUDIO::STOP_AUDIO_SCENES();
		STREAMING::REMOVE_ANIM_DICT(sLocal_356);
		STREAMING::REMOVE_ANIM_DICT(sLocal_357);
		STREAMING::REMOVE_ANIM_DICT(sLocal_358);
		STREAMING::REMOVE_ANIM_DICT(sLocal_354);
		STREAMING::REMOVE_ANIM_DICT(sLocal_359);
		iLocal_466 = 0;
		iLocal_465 = 5;
	}
	if (iLocal_466 == 3)
	{
		if (iLocal_257 == 0)
		{
			if (iLocal_233)
			{
				HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
				HUD::CLEAR_GPS_MULTI_ROUTE();
				iLocal_233 = 0;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_1, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, -1);
				}
				ENTITY::SET_ENTITY_COORDS(Local_388.f_0, -2205.16f, 4326.3677f, 48.4147f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_388.f_0, 339.0508f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_388.f_0, 5f);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_388.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, 0.191836f, -9.89637f, 0.27933f), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_388.f_1, ENTITY::GET_ENTITY_HEADING(Local_388.f_0));
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_388.f_0, Local_388.f_1, 1f);
				PHYSICS::ACTIVATE_PHYSICS(Local_388.f_1);
			}
			while (!ENTITY::DOES_ENTITY_EXIST(iLocal_379[0]))
			{
				func_589();
				SYSTEM::WAIT(0);
			}
			SYSTEM::SETTIMERB(0);
			__LIB_0__::func_429();
			HUD::CLEAR_PRINTS();
			iLocal_466 = 1;
		}
		else
		{
			func_910(5, 0);
		}
	}
}

void func_602()//Position - 0x7B6FF
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

int func_603(var uParam0)//Position - 0x7B777
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	switch (iLocal_1838)
	{
		case 0:
			break;
		case 1:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (!iLocal_1809)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_1809 = 1;
			}
			if (SYSTEM::TIMERB() >= 800)
			{
				SYSTEM::SETTIMERB(0);
				__LIB_15__::func_959(&uLocal_404);
				__LIB_17__::func_713(&uLocal_404, Local_387[iLocal_261 /*19*/], 1, fLocal_548, iLocal_549, iLocal_550, iLocal_551, iLocal_552, fLocal_553);
				iLocal_1838 = 2;
			}
			break;
		case 2:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			CAM::SET_WIDESCREEN_BORDERS(true, 500);
			if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], true) };
					MISC::CLEAR_AREA(Var2, 50f, true, false, false, false);
					MISC::CLEAR_AREA_OF_VEHICLES(Var2, 50f, false, false, false, false, false, false, 0);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_387[iLocal_261 /*19*/], 3);
				}
			}
			CAM::DESTROY_ALL_CAMS(false);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			func_660(uParam0, Local_387[iLocal_261 /*19*/], Local_387[iLocal_261 /*19*/]);
			__LIB_16__::func_29(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			func_642();
			__LIB_0__::func_345(&uLocal_533, 0, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_COPS_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_4_COPS_ARRIVE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_REVERSE_OFF_TRUCK"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_4_REVERSE_OFF_TRUCK");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_FIRST_PERSON_MUTES_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_4_FIRST_PERSON_MUTES_SCENE");
			}
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
			if (iLocal_1809 == 0)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			}
			SYSTEM::SETTIMERA(0);
			SYSTEM::SETTIMERB(0);
			iLocal_1796 = 0;
			iLocal_1797 = 0;
			iLocal_1806 = 0;
			iLocal_1798 = 0;
			iLocal_1799 = 0;
			bLocal_1800 = false;
			iLocal_1801 = 0;
			bLocal_1802 = false;
			iLocal_1803 = 0;
			bLocal_1805 = false;
			iLocal_1807 = 0;
			iLocal_1808 = 0;
			if (iLocal_1809 == 0)
			{
				iLocal_1810 = 0;
			}
			else
			{
				iLocal_1810 = 1;
			}
			iLocal_1811 = 0;
			iLocal_1812 = 0;
			iLocal_1813 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
			iLocal_1838 = 3;
		case 3:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = iVar0;
				iVar0 = __LIB_17__::func_618(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (!iLocal_1806)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("CAR4_REVERSE"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CAR4_REVERSE");
						iLocal_1806 = 1;
					}
				}
				if (!iLocal_1807)
				{
					if (fVar1 > fLocal_1822)
					{
						iLocal_1831 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_1831, "out", "SHORT_PLAYER_SWITCH_SOUND_SET", true);
						iLocal_1807 = 1;
					}
				}
				if (!iLocal_1813)
				{
					if (SYSTEM::TIMERB() > 200)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_1813 = 1;
					}
				}
				if (!iLocal_1810)
				{
					if (fVar1 >= fLocal_1824)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, false);
						iLocal_1810 = 1;
					}
				}
				if (!iLocal_1796)
				{
					if (__LIB_15__::func_944() != 1)
					{
						iLocal_469[2] = PLAYER::PLAYER_PED_ID();
						__LIB_17__::func_760(&iLocal_469, 1);
						__LIB_32__::func_7(&iLocal_469, 1, 1, 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						if (!PED::IS_PED_INJURED(iLocal_469[2]))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_469[2], Local_388.f_0, Local_329, 35f, 0, iLocal_456, 262208, 10f, 20f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[2], true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_354, "ig_10_switch_franklin", 8f, 8f, -1, 0, 0f, false, false, false);
							}
						}
						iLocal_1796 = 1;
					}
				}
				if (!iLocal_1797)
				{
					if (__LIB_15__::func_944() == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_354, "ig_10_switch_franklin", 8f, 8f, -1, 0, fLocal_1814, false, false, false);
								iLocal_1797 = 1;
							}
						}
					}
				}
				if (!iLocal_1798)
				{
					if (fVar1 > fLocal_1815)
					{
						func_624();
						iLocal_1798 = 1;
					}
				}
				if (!iLocal_1799)
				{
					if (fVar1 > fLocal_1816)
					{
						func_623();
						iLocal_1839 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_388.f_1, Local_335, Local_336, 1f, false, false, false);
						iLocal_1840 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_carsteal4_trailer_scrape", Local_388.f_1, Local_334, Local_336, 1f, false, false, false);
						iLocal_1799 = 1;
					}
				}
				if (!bLocal_1800)
				{
					func_622();
					func_621();
					bLocal_1800 = true;
				}
				if (!iLocal_1801)
				{
					if (bLocal_1800)
					{
						if (fVar1 > fLocal_1817)
						{
							iLocal_1801 = 1;
						}
						else
						{
							func_620();
						}
					}
				}
				if (!bLocal_1802)
				{
					if (fVar1 > fLocal_1817)
					{
						func_619();
						func_618();
						bLocal_1802 = true;
					}
				}
				if (!iLocal_1803)
				{
					if (bLocal_1802)
					{
						if (fVar1 > fLocal_1818)
						{
							CAM::RENDER_SCRIPT_CAMS(false, true, 2000, false, false, 0);
							bLocal_1805 = true;
							iLocal_1838 = 5;
						}
						if (func_616(uParam0))
						{
							func_615(fVar1);
							func_614();
							iLocal_1803 = 1;
						}
						else
						{
							func_613();
							func_612();
						}
					}
				}
				if (iLocal_1803 && !bLocal_1805)
				{
					func_609(fVar1);
				}
				if (iVar0 >= 3)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_1820);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_1821, 1f);
				}
				if (!bLocal_1805)
				{
					if (iLocal_1803 && fVar1 > fLocal_1819)
					{
						__LIB_0__::func_603(&iVar3, &iVar4, &iVar5, &iVar6, 0);
						if (((((((iVar3 != 0 || iVar4 != 0) || iVar5 != 0) || iVar6 != 0) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								iLocal_1838 = 4;
							}
							else
							{
								CAM::RENDER_SCRIPT_CAMS(false, true, 2000, false, false, 0);
								iLocal_1838 = 5;
							}
							bLocal_1805 = true;
						}
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (fVar1 >= fLocal_547)
					{
						iLocal_1838 = 4;
					}
				}
				else if (fVar1 >= 1f)
				{
					iLocal_1838 = 5;
				}
			}
			break;
		case 4:
			if (__LIB_15__::func_966(&uLocal_404, bLocal_545, 1, 1, bLocal_546, bLocal_554, 0))
			{
				iLocal_1838 = 5;
			}
			break;
		case 5:
			MISC::SET_TIME_SCALE(1f);
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
			if (!bLocal_1805)
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
					{
						CAM::DESTROY_CAM(uParam0->f_1, false);
					}
				}
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			CAM::SET_WIDESCREEN_BORDERS(false, 500);
			STREAMING::REMOVE_ANIM_DICT(sLocal_354);
			STREAMING::REMOVE_ANIM_DICT(sLocal_359);
			iLocal_1838 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_609(float fParam0)//Position - 0x7C343
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_388.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_388.f_0, true) };
			Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_387[iLocal_261 /*19*/], true) };
			fVar2 = __LIB_0__::func_331(((fParam0 - fLocal_1828) * (1f / MISC::ABSF((1f - fLocal_1828)))), 0f, 1f);
			fVar3 = __LIB_0__::func_504(Var1.f_1, Var0.f_1, fVar2);
			if ((fVar3 - Var1.f_1) > 1f)
			{
				fVar3 = (Var1.f_1 + 1f);
			}
			else if ((fVar3 - Var1.f_1) < 1f)
			{
				fVar3 = (Var1.f_1 - 1f);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_387[iLocal_261 /*19*/], fVar3);
		}
	}
}

void func_612()//Position - 0x7C441
{
	struct<3> Var0;
	bool bVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_387[iLocal_261 /*19*/], 2) };
			bVar1 = false;
			if (Var0.f_0 > Local_1833.f_0)
			{
				Var0.f_0 = Local_1833.f_0;
				bVar1 = true;
			}
			else if (Var0.f_0 < Local_1834.f_0)
			{
				Var0.f_0 = Local_1834.f_0;
				bVar1 = true;
			}
			if (Var0.f_1 > Local_1833.f_1)
			{
				Var0.f_1 = Local_1833.f_1;
				bVar1 = true;
			}
			else if (Var0.f_1 < Local_1834.f_1)
			{
				Var0.f_1 = Local_1834.f_1;
				bVar1 = true;
			}
			if (bVar1)
			{
				ENTITY::SET_ENTITY_ROTATION(Local_387[iLocal_261 /*19*/], Var0, 2, true);
			}
		}
	}
}

void func_613()//Position - 0x7C4EE
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], false))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
			else
			{
				iVar0 = iLocal_469[1];
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_387[iLocal_261 /*19*/], 2, Local_1835, 0f, 0f, 0f, 0, true, true, true, false, true);
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")) != 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
					}
				}
			}
		}
	}
}

void func_614()//Position - 0x7C587
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_388.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], false))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
			}
			else
			{
				iVar0 = iLocal_469[1];
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
					TASK::TASK_VEHICLE_TEMP_ACTION(iVar0, Local_387[iLocal_261 /*19*/], 9, 5000);
				}
			}
		}
	}
}

void func_615(float fParam0)//Position - 0x7C61B
{
	struct<3> Var0;
	fLocal_1828 = fParam0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_388.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(Local_387[iLocal_261 /*19*/], true) };
			fLocal_1829 = Var0.f_1;
			fLocal_1829 = fLocal_1829;
		}
	}
}

int func_616(var uParam0)//Position - 0x7C680
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			if (func_617() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_387[iLocal_261 /*19*/]))
			{
				if (!iLocal_1804)
				{
					if (!iLocal_1812)
					{
						CAM::SHAKE_CAM(uParam0->f_1, "SMALL_EXPLOSION_SHAKE", 0.15f);
						iLocal_1812 = 1;
					}
					if (!iLocal_1811)
					{
						fLocal_1825 = fLocal_1825;
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 0, false);
						iLocal_1811 = 1;
					}
					if (!iLocal_1808)
					{
						fLocal_1823 = fLocal_1823;
						AUDIO::STOP_SOUND(iLocal_1831);
						iLocal_1808 = 1;
					}
					SYSTEM::SETTIMERB(0);
					iLocal_1804 = 1;
				}
				else if (SYSTEM::TIMERB() > iLocal_1832)
				{
					return 1;
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
				iLocal_1804 = 0;
			}
		}
	}
	return 0;
}

int func_617()//Position - 0x7C73F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_388.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_387[iLocal_261 /*19*/], true), ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true)) > fLocal_1827)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_618()//Position - 0x7C7AC
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[iLocal_261 /*19*/], false))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
			else
			{
				iVar0 = iLocal_469[1];
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					fVar1 = ENTITY::GET_ENTITY_SPEED(Local_388.f_1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_387[iLocal_261 /*19*/], fVar1);
				}
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_387[iLocal_261 /*19*/], 2, Local_1835, 0f, 0f, 0f, 0, true, true, true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
				}
			}
		}
	}
}

void func_619()//Position - 0x7C869
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_387[iLocal_261 /*19*/], true, false);
		}
	}
}

void func_620()//Position - 0x7C89F
{
	struct<3> Var0;
	if ((ENTITY::DOES_ENTITY_EXIST(Local_388.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_387[0 /*19*/]))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false)) && !ENTITY::IS_ENTITY_DEAD(Local_387[0 /*19*/], false))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_387[0 /*19*/], 2) };
			ENTITY::SET_ENTITY_ROTATION(Local_387[iLocal_261 /*19*/], Var0, 2, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_387[iLocal_261 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, Local_387[iLocal_261 /*19*/].f_2), false, false, true);
		}
	}
}

void func_621()//Position - 0x7C94A
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_387[iLocal_261 /*19*/], false, false);
		}
	}
}

void func_622()//Position - 0x7C980
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			ENTITY::DETACH_ENTITY(Local_387[iLocal_261 /*19*/], true, false);
		}
	}
}

void func_623()//Position - 0x7C9D4
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_1, 1);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_388.f_1, 5, false, false);
		}
	}
}

void func_624()//Position - 0x7CA0C
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_387[iLocal_261 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_387[iLocal_261 /*19*/], false))
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_wheel_burnout", Local_387[iLocal_261 /*19*/], Local_1836, Local_1837, 1f, false, false, false);
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_4", false, -1))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_4_BURNOUT", Local_387[iLocal_261 /*19*/], "CAR_STEAL_4_SOUNDSET", false, 0);
			}
		}
	}
}

void func_642()//Position - 0x7D6D6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_388.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_388.f_0) > fLocal_1826)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_388.f_0, fLocal_1826);
			}
		}
	}
}

void func_660(var uParam0, var uParam1, var uParam2)//Position - 0x7E8A0
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -0.7917f, 2.2113f, 0.6422f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -0.2027f, -0.0921f, 0.2221f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 40f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.2f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 300;
		uParam0->f_10[1 /*57*/].f_6 = { -0.9939f, 3.0014f, 0.7855f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -0.2026f, -0.0923f, 0.2216f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 40f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1200;
		uParam0->f_10[2 /*57*/].f_6 = { -1.0419f, 3.1884f, 0.819f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -0.2029f, -0.0924f, 0.2218f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 40f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.4f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0.8f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { -1.4945f, -4.9765f, 0.3261f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.2235f, 0.0415f, -0.1569f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 2f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 1000;
		uParam0->f_10[5 /*57*/].f_6 = { -1.5344f, -6.3627f, 0.4002f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 0.0236f, -0.015f, -0.1142f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0.01f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 600;
		uParam0->f_10[6 /*57*/].f_6 = { -0.9759f, -4.926f, 1.5771f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.2805f, 0.0644f, 0.0843f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 0f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 2f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 2200;
		uParam0->f_10[7 /*57*/].f_6 = { -0.4285f, -5.1203f, 0.883f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -0.4801f, 0.0052f, 0.8198f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 0f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 0;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_CarSteal4_TruckToCar.txt";
		uParam0->f_1225 = "CameraInfo_CarSteal4_TruckToCar.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = uParam1;
	uParam0->f_4[1] = uParam2;
}

void func_681()//Position - 0x80C8E
{
	int iVar0;
	float fVar1;
	float fVar2;
	STREAMING::REQUEST_ANIM_DICT(sLocal_350);
	STREAMING::REQUEST_ANIM_DICT(sLocal_349);
	STREAMING::REQUEST_ANIM_DICT(sLocal_352);
	if (!PED::IS_PED_INJURED(iLocal_469[1]))
	{
		if ((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_350) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_349)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_352)) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false)) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_267))
			{
				fLocal_321 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_267);
			}
			if (iLocal_275 > 0)
			{
				if (!func_532("CH_FRANHELP"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0))
						{
							if (__LIB_0__::func_669(1, 1, 1))
							{
								__LIB_0__::func_151("CH_FRANHELP", -1);
								func_529("CH_FRANHELP", 1);
							}
						}
					}
				}
				else if (__LIB_0__::func_1("CH_FRANHELP"))
				{
					if (!__LIB_0__::func_669(1, 1, 1) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			if (iLocal_275 == 0)
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_469[1], -1000f, true);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_469[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_469[1], true);
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_469[1]))
					{
						ENTITY::DETACH_ENTITY(iLocal_469[1], true, true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_469[1], Local_387[iLocal_261 /*19*/], false);
					}
					PED::SET_PED_MAX_HEALTH(iLocal_469[1], 1800);
					ENTITY::SET_ENTITY_HEALTH(iLocal_469[1], 1800, 0);
					iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_267, Local_388.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_388.f_0, "seat_pside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_469[1], iLocal_267, sLocal_349, "ig_8_part_01_exit", 1000f, -1000f, 5, 9843, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_469[1], false, false);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_267, 0f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_267, 1f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_267, false);
					ENTITY::PLAY_ENTITY_ANIM(Local_388.f_0, "ig_8_part_01_exit_door", sLocal_349, 8f, false, false, false, 0f, 0);
					CAM::DESTROY_ALL_CAMS(false);
					iLocal_369 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_369, iLocal_267, "ig_8_part_01_exit_cam", sLocal_349);
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[2 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[4 /*19*/], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[3 /*19*/], false))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_469[1], Local_387[2 /*19*/], false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_469[1], Local_387[4 /*19*/], false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_469[1], Local_387[3 /*19*/], false);
					}
					iLocal_255 = 0;
					iLocal_256 = 0;
					bLocal_245 = false;
					iLocal_275++;
				}
			}
			else if (iLocal_275 == 1)
			{
				if (iLocal_255 == 0)
				{
					if (fLocal_321 >= 0.05f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
						{
							AUDIO::PLAY_VEHICLE_DOOR_OPEN_SOUND(Local_388.f_0, 1);
						}
						iLocal_255 = 1;
					}
				}
				if (iLocal_256 == 0)
				{
					if (fLocal_321 >= 0.535f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
						{
							AUDIO::PLAY_VEHICLE_DOOR_CLOSE_SOUND(Local_388.f_0, 1);
						}
						iLocal_256 = 1;
					}
				}
				if (fLocal_321 >= 1f)
				{
					iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_267, Local_388.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_388.f_0, "seat_pside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_469[1], iLocal_267, sLocal_349, "ig_8_part_02_loop", 1000f, -1000f, 5, 9843, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_267, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_267, true);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_267, 1.15f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_369, iLocal_267, "ig_8_part_02_loop_cam", sLocal_349);
					AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("CAR_5_IG_6", iLocal_469[1]);
					iLocal_317 = 0;
					iLocal_276 = MISC::GET_GAME_TIMER();
					iLocal_275++;
				}
			}
			else if (iLocal_275 == 2)
			{
				fVar1 = ENTITY::GET_ENTITY_HEADING(Local_388.f_0);
				fVar2 = ENTITY::GET_ENTITY_HEADING(Local_388.f_1);
				if (MISC::ABSF((fVar1 - fVar2)) < 10f)
				{
					if (iLocal_317 == 0)
					{
						iLocal_317 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_317) > 1000)
					{
						iVar0 = 1;
					}
				}
				else
				{
					iLocal_317 = 0;
					iVar0 = 0;
				}
				if ((((MISC::GET_GAME_TIMER() - iLocal_276) > 500 && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CAR_5_IG_6", 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_388.f_0)) && iVar0)
				{
					iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_267, Local_388.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_388.f_0, "seat_pside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_469[1], iLocal_267, sLocal_349, "ig_8_part_03_jump", 4f, -1000f, 5, 9843, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_267, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_267, false);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_267, 1.15f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_369, iLocal_267, "ig_8_part_03_jump_cam", sLocal_349);
					iLocal_276 = MISC::GET_GAME_TIMER();
					iLocal_275++;
				}
			}
			else if (iLocal_275 == 3)
			{
				if (fLocal_321 >= 0.5f)
				{
					iLocal_268 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_268, Local_388.f_1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_469[1], iLocal_268, sLocal_349, "ig_8_part_03_jump_alt_trailer", 1000f, -1000f, 5, 9843, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_268, fLocal_321);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_268, false);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_268, 1.15f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_469[1], true, false);
					iLocal_276 = MISC::GET_GAME_TIMER();
					iLocal_275++;
				}
			}
			else if (iLocal_275 == 4)
			{
				if (fLocal_321 >= 1f)
				{
					iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_267, Local_388.f_1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_469[1], iLocal_267, sLocal_352, "car_5_ig_4", 1000f, -1000f, 13, 9843, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_267, 0f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_267, false);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_267, 1.15f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_369, iLocal_267, "car_5_ig_4_cam", sLocal_352);
					iLocal_275 = 50;
				}
			}
			else if (iLocal_275 == 50)
			{
				if (fLocal_321 >= 1f)
				{
					iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_267, Local_388.f_1, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_469[1], iLocal_267, sLocal_350, "car_5_ig_6", 1000f, -1000f, 5, 9843, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_267, false);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_369, iLocal_267, "car_5_ig_6_cam", sLocal_350);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
					{
						ENTITY::PLAY_ENTITY_ANIM(Local_387[iLocal_261 /*19*/], "car_5_ig_6_car", sLocal_350, 1000f, false, false, false, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_387[iLocal_261 /*19*/]);
					}
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_267);
					bLocal_245 = true;
					iLocal_275++;
				}
			}
			else if (iLocal_275 == 51)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_387[iLocal_261 /*19*/], sLocal_350, "car_5_ig_6_car", 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(Local_387[iLocal_261 /*19*/], sLocal_350, "car_5_ig_6_car", fLocal_321);
					}
				}
				if (fLocal_321 >= 1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iLocal_261 /*19*/], false))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_469[1], -1000f, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_469[1]);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_469[1], Local_387[iLocal_261 /*19*/], true);
						PED::SET_PED_INTO_VEHICLE(iLocal_469[1], Local_387[iLocal_261 /*19*/], -1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iLocal_261 /*19*/], true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_387[iLocal_261 /*19*/], 1);
						CAM::DESTROY_ALL_CAMS(false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						__LIB_0__::func_345(&uLocal_533, 0, 0);
						bLocal_245 = false;
						iLocal_275++;
					}
				}
			}
		}
	}
	else if (ENTITY::GET_ENTITY_HEALTH(iLocal_469[1]) < 150)
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_469[1], -8f, true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_267, -1f);
		PED::SET_PED_CAN_RAGDOLL(iLocal_469[1], true);
		PED::SET_PED_TO_RAGDOLL(iLocal_469[1], 1000, 7000, 2, true, true, false);
		PED::APPLY_DAMAGE_TO_PED(iLocal_469[1], ENTITY::GET_ENTITY_HEALTH(iLocal_469[1]) + 50, true, 0);
	}
}

void func_684(bool bParam0)//Position - 0x814CD
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4[12];
	float fVar5;
	struct<3> Var6;
	if (bParam0)
	{
		if (!iLocal_234)
		{
			iVar0 = 0;
			iVar1 = -1;
			fVar2 = 0f;
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4[0 /*3*/] = { 536.0454f, -1421.6313f, 28.356f };
			Var4[1 /*3*/] = { 473.5091f, -1420.0912f, 28.343f };
			Var4[2 /*3*/] = { 353.3233f, -1335.3615f, 31.5383f };
			Var4[3 /*3*/] = { -2225.3345f, -338.3899f, 12.4178f };
			Var4[4 /*3*/] = { -2726.1013f, 2263.6096f, 19.3537f };
			Var4[5 /*3*/] = { -2694.3357f, 2351.5085f, 15.9009f };
			Var4[6 /*3*/] = { -2654.2808f, 2614.4666f, 15.6938f };
			Var4[7 /*3*/] = { -2585.6885f, 3168.405f, 13.2889f };
			Var4[8 /*3*/] = { -2567.392f, 3336.45f, 12.5477f };
			Var4[9 /*3*/] = { -2028.6205f, 4484.0723f, 56.0054f };
			Var4[10 /*3*/] = { -735.6742f, 5510.3154f, 34.996f };
			Var4[11 /*3*/] = { Local_329 };
			iVar0 = 0;
			while (iVar0 < (Var4.f_0 - 1))
			{
				fVar5 = SYSTEM::VDIST2(Var3, Var4[iVar0 /*3*/]);
				if (iVar1 == -1 || fVar5 < fVar2)
				{
					iVar1 = iVar0;
					fVar2 = fVar5;
				}
				iVar0++;
			}
			if (SYSTEM::VDIST2(Var3, Var4[iVar1 + 1 /*3*/]) < SYSTEM::VDIST2(Var4[iVar1 /*3*/], Var4[iVar1 + 1 /*3*/]))
			{
				iVar1++;
			}
			if (iVar1 != iLocal_297 && (fVar2 > 20000f || iLocal_297 == -1))
			{
				if (!__LIB_0__::func_490(Local_329, Var4[iVar1 /*3*/], 1056964608, 0))
				{
					HUD::SET_BLIP_ALPHA(Local_392.f_5, 255);
					HUD::SET_BLIP_ROUTE(Local_392.f_6, false);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					HUD::START_GPS_MULTI_ROUTE(156, true, false);
					iVar0 = iVar1;
					while (iVar0 < (Var4.f_0 - 1))
					{
						HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Var4[iVar0 /*3*/]);
						iVar0++;
					}
					HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Local_329);
					HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
					iLocal_233 = 1;
				}
				else if (iLocal_233)
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_233 = 0;
				}
			}
			Var6 = { 1618.82f, 1168.37f, 85f };
			if (SYSTEM::VDIST2(Var6, Var3) < fVar2)
			{
				if (iLocal_233)
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_233 = 0;
				}
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
				{
					HUD::SET_BLIP_ALPHA(Local_392.f_5, 255);
					HUD::SET_BLIP_ROUTE(Local_392.f_6, true);
				}
				iLocal_234 = 1;
			}
			iLocal_297 = iVar1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_392.f_5, 0);
			HUD::SET_BLIP_ROUTE(Local_392.f_6, false);
		}
		if (iLocal_233)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_233 = 0;
		}
		iLocal_297 = -1;
		iLocal_234 = 0;
	}
}

void func_688()//Position - 0x81888
{
	if (!PED::IS_PED_INJURED(Local_389.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_356);
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_389.f_0, Local_388.f_0))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_389.f_0, Local_388.f_0, 0, 0f, 1.5f, 0.85f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_356))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_389.f_0, sLocal_356, "sit", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_389.f_0, sLocal_356, "sit", 8f, -8f, -1, 9, 0f, false, false, false);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_389.f_0, false);
				PED::SET_PED_CAN_RAGDOLL(Local_389.f_0, false);
				PED::SET_PED_CONFIG_FLAG(Local_389.f_0, 118, false);
				PED::SET_PED_CONFIG_FLAG(Local_389.f_0, 208, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
				PED::SET_PED_KEEP_TASK(Local_389.f_0, true);
			}
			if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_389.f_0)) < 150f)
			{
				TASK::TASK_PLAY_ANIM(Local_389.f_0, sLocal_356, "die", 8f, -8f, -1, 10, 0f, false, false, false);
				ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 0, 0);
			}
		}
	}
}

int func_689(struct<3> Param0, float fParam1)//Position - 0x81987
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469[1]))
	{
		if (func_55(&(iLocal_469[1]), 1, Param0, fParam1, 1, 0, 0))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_469[1], true);
			__LIB_0__::func_222(&Local_528, 1, iLocal_469[1], "FRANKLIN", 0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_469[1], false);
			PED::SET_PED_MAX_HEALTH(iLocal_469[1], 200);
			ENTITY::SET_ENTITY_HEALTH(iLocal_469[1], 200, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_469[1], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_469[1], joaat("PLAYER"));
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_690()//Position - 0x81A1E
{
	if (__LIB_15__::func_944() != 2)
	{
		func_411(2, 1);
	}
	else
	{
		func_410();
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
		return 1;
	}
	return 0;
}

int func_691()//Position - 0x81A4E
{
	int iVar0;
	Local_387[0 /*19*/].f_2 = { 0f, -5f, 0.82f };
	Local_387[0 /*19*/].f_5 = { 3.8f, 0f, 0f };
	Local_387[0 /*19*/].f_16 = 46164f;
	Local_387[0 /*19*/].f_9 = 5;
	Local_387[0 /*19*/].f_18 = joaat("monroe");
	Local_387[1 /*19*/].f_2 = { 0f, 0f, 0.95f };
	Local_387[1 /*19*/].f_5 = { -2.6f, 0f, 0f };
	Local_387[1 /*19*/].f_18 = joaat("cheetah");
	Local_387[2 /*19*/].f_2 = { 0f, 5f, 0.85f };
	Local_387[2 /*19*/].f_5 = { 0.09f, 0f, 0f };
	Local_387[2 /*19*/].f_18 = joaat("stinger");
	Local_387[3 /*19*/].f_2 = { 0f, -5f, 3.35f };
	Local_387[3 /*19*/].f_5 = { 0.09f, 0f, 0f };
	Local_387[3 /*19*/].f_16 = 46045f;
	Local_387[3 /*19*/].f_9 = 7;
	Local_387[3 /*19*/].f_18 = joaat("jb700");
	Local_387[4 /*19*/].f_2 = { 0f, -0.25f, 2.95f };
	Local_387[4 /*19*/].f_5 = { -4.67f, 0f, 0f };
	Local_387[4 /*19*/].f_18 = joaat("entityxf");
	Local_387[5 /*19*/].f_2 = { 0f, 5f, 2.91f };
	Local_387[5 /*19*/].f_5 = { 4f, 0f, 0f };
	Local_387[5 /*19*/].f_18 = joaat("ztype");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_387.f_0)
	{
		Local_387[iVar0 /*19*/].f_13 = 0;
		Local_387[iVar0 /*19*/].f_14 = 0;
		Local_387[iVar0 /*19*/].f_12 = 0;
		Local_387[iVar0 /*19*/].f_15 = 0;
		Local_387[iVar0 /*19*/].f_8 = 0;
		iVar0++;
	}
	return 1;
}

void func_692()//Position - 0x81BEE
{
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			if (iLocal_257 != 99)
			{
				if (bLocal_246)
				{
					__LIB_0__::func_427(Local_326 + Vector(0f, 5f, 5f), 0f, 1, 0);
					iLocal_257 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_326 + Vector(0f, 5f, 5f), true, false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_257 = 99;
				}
			}
			else if (func_409() && func_691())
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_326, 30f, false, false, false, false, false, false, 0);
				if (((((func_695() && __LIB_0__::func_109()) && func_405(Local_326, fLocal_319)) && func_402()) && func_398(504.1672f, -1304.7441f, 28.3103f, 200.8915f)) && func_53(496.6033f, -1308.379f, 28.302f, 204.3612f))
				{
					__LIB_0__::func_433(0, -1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					iLocal_231 = 0;
				}
			}
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			CUTSCENE::REQUEST_CUTSCENE("CAR_5_MCS_1", 8);
			func_25("CAR_5_MCS_1");
			if (__LIB_0__::func_90())
			{
				if (!PED::IS_PED_INJURED(iLocal_469[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_469[2], "Trevor", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_389.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_389.f_0, "Lamar", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_0, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_388.f_0, "CAR_5_Truck", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_1, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_388.f_1, "CAR_5_Trailer", 0, 0, 0);
				}
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(iLocal_456);
				CUTSCENE::START_CUTSCENE(1024);
				RECORDING::REPLAY_START_EVENT(4);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
				__LIB_16__::func_11();
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				iLocal_236 = 0;
				iLocal_257 = 0;
				iLocal_466 = 1;
			}
		}
	}
	if (iLocal_466 == 1)
	{
		if (!iLocal_236)
		{
			if (__LIB_1__::func_254())
			{
				iLocal_236 = 1;
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_466 = 2;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_356);
		switch (iLocal_257)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_387[0 /*19*/], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_387[0 /*19*/], true);
						VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_387[0 /*19*/], Local_388.f_1, 0f, 0f, 0f, Local_387[0 /*19*/].f_2, Local_387[0 /*19*/].f_5, -1f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_387[0 /*19*/], false, false, false);
						AUDIO::SET_VEHICLE_RADIO_LOUD(Local_387[0 /*19*/], false);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_388.f_1, 5, true);
					}
					func_695();
					MISC::CLEAR_AREA_OF_VEHICLES(Local_326, 200f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_326, 100f, 0);
					AUDIO::STOP_AUDIO_SCENES();
					iLocal_257++;
				}
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CAR_5_Truck", 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_388.f_0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_0, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CAR_5_Trailer", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (__LIB_15__::func_944() != 2)
				{
					__LIB_17__::func_760(&iLocal_469, 2);
					__LIB_32__::func_7(&iLocal_469, 1, 0, 0);
					func_410();
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
				if (!PED::IS_PED_INJURED(iLocal_469[1]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_469[1], joaat("PLAYER"));
				}
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!PED::IS_PED_INJURED(iLocal_469[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_469[1], Local_388.f_0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_469[1], false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_387[3 /*19*/]) && !ENTITY::IS_ENTITY_DEAD(Local_387[3 /*19*/], false))
					{
						ENTITY::DETACH_ENTITY(Local_387[3 /*19*/], false, true);
						VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_387[3 /*19*/], Local_388.f_1, 0f, 0f, 0f, Local_387[3 /*19*/].f_2, Local_387[3 /*19*/].f_5, -1f);
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_546();
			}
			if (!PED::IS_PED_INJURED(Local_389.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					PED::SET_PED_MAX_HEALTH(Local_389.f_0, 500);
					ENTITY::SET_ENTITY_HEALTH(Local_389.f_0, 500, 0);
					func_688();
				}
			}
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_351);
	}
	if (iLocal_466 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_351);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_351))
		{
			if (iLocal_236)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && !ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_388.f_0, -1);
				}
			}
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(491.9493f, -1421.7377f, 10.2604f, 563.2618f, -1267.808f, 40.3393f, 1);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			STREAMING::REMOVE_ANIM_DICT(sLocal_347);
			iLocal_257 = 0;
			iLocal_466 = 0;
			iLocal_465 = 3;
		}
	}
	if (iLocal_466 == 3)
	{
		__LIB_17__::func_708(0);
		RECORDING::REPLAY_CANCEL_EVENT();
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_236 = 1;
		iLocal_466 = 1;
	}
}

int func_695()//Position - 0x821DD
{
	PATHFIND::SET_ROADS_IN_AREA(491.9493f, -1421.7377f, 10.2604f, 563.2618f, -1267.808f, 40.3393f, false, true);
	return 1;
}

void func_696()//Position - 0x8220A
{
	int iVar0[3];
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			if (bLocal_246)
			{
				if (bLocal_242)
				{
					__LIB_0__::func_427(-212.6681f, -1358.6426f, 30.261f, 326.8683f, 1, 0);
				}
				else
				{
					__LIB_0__::func_427(-62.8697f, -1457.6414f, 31.1163f, 111.782f, 1, 0);
				}
			}
			else
			{
				if (bLocal_242)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -212.6681f, -1358.6426f, 30.261f, true, false, false, true);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 493.5279f, -1315.5464f, 28.2455f, true, false, false, true);
				}
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 326.8683f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			func_691();
			while ((!func_409() || !ENTITY::DOES_ENTITY_EXIST(Local_387[0 /*19*/])) || !(ENTITY::DOES_ENTITY_EXIST(Local_389.f_0) || !bLocal_242))
			{
				func_752(-209.6797f, -1360.2938f, 30.2959f, 117.6006f);
				if (bLocal_242)
				{
					func_398(-210.6681f, -1358.6426f, 30.261f, 123.1137f);
				}
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(0, -1, 0);
			iLocal_231 = 0;
		}
		else
		{
			func_691();
			if (func_752(-209.6797f, -1360.2938f, 30.2959f, 117.6006f))
			{
				__LIB_0__::func_109();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (bLocal_242)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], -1);
							}
							if (!PED::IS_PED_INJURED(Local_389.f_0) && !PED::IS_PED_IN_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], 0);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_378, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_378, 5f);
					}
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2000f, true, true, false, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!bLocal_242)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_387[0 /*19*/], true, true, false);
						AUDIO::SET_VEHICLE_RADIO_LOUD(Local_387[0 /*19*/], true);
						AUDIO::SET_VEH_RADIO_STATION(Local_387[0 /*19*/], "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
					}
					Local_389.f_2 = 0;
					iLocal_257 = 0;
				}
				else
				{
					func_695();
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_TAKE_CAR_TO_TRANSPORTER"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_4_TAKE_CAR_TO_TRANSPORTER");
					}
					func_862(1, "MEET_TREVOR", 0, 0, 0, 1);
					Local_389.f_2 = 1;
					iLocal_257 = 50;
				}
				__LIB_16__::func_11();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_378))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_378);
				}
				fLocal_325 = 0f;
				iLocal_248 = 0;
				bLocal_237 = false;
				iLocal_231 = 0;
				iLocal_238 = 0;
				iLocal_240 = 0;
				iLocal_266 = 0;
				iLocal_308 = 0;
				iLocal_309 = 0;
				iLocal_306 = 0;
				iLocal_307 = 0;
				iLocal_360 = 0;
				iLocal_466 = 1;
			}
		}
	}
	if (iLocal_466 == 1)
	{
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		iVar1 = 0;
		Var3 = { 507.5f, -1316.7f, 30f };
		if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_388.f_1) < 0.5f)
			{
				Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, 0f, -4.8707f, 0.5282f) };
			}
			else
			{
				Var2 = { Local_327 };
			}
		}
		else
		{
			Var2 = { Local_327 };
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_269) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], false))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_389.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_389.f_0, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], false))
					{
						AUDIO::SET_VEH_FORCED_RADIO_THIS_FRAME(Local_387[0 /*19*/]);
						AUDIO::SET_VEH_RADIO_STATION(Local_387[0 /*19*/], "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_374))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_374);
		}
		switch (iLocal_257)
		{
			case 0:
				__LIB_16__::func_34(&Local_392, Var3, 0.001f, 0.001f, 2f, 0, Local_387[0 /*19*/], "CH_CHOPSHOP", "CH_COLLECT", "CH_GETBACKCAR", 1, 0, 1, -1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_389.f_0))
				{
					if (SYSTEM::VDIST2(-209.6797f, -1360.2938f, 30.2959f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 22500f)
					{
						func_398(-210.6681f, -1358.6426f, 30.261f, 123.1137f);
					}
				}
				if (!PED::IS_PED_INJURED(Local_389.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
				{
					if (Local_389.f_2 == 0)
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_353);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_353))
						{
							iLocal_269 = PED::CREATE_SYNCHRONIZED_SCENE(0f, -0.6f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_269, Local_387[0 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_387[0 /*19*/], "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(Local_389.f_0, iLocal_269, sLocal_353, "waitloop_lamar", 1000f, -8f, 1, 153, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_269, 0f);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_269, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
							Local_389.f_2++;
						}
					}
					else
					{
						Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var6 = { ENTITY::GET_ENTITY_COORDS(Local_387[0 /*19*/], true) };
						fVar4 = SYSTEM::VDIST2(Var5, Var6);
						if (!bLocal_237)
						{
							if (((PED::IS_PED_RAGDOLL(Local_389.f_0) || TASK::IS_PED_GETTING_UP(Local_389.f_0)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_269)) || PED::IS_PED_IN_COMBAT(Local_389.f_0, 0))
							{
								bLocal_237 = true;
							}
						}
						PED::GET_PED_NEARBY_VEHICLES(Local_389.f_0, &iVar0);
						iVar1 = 0;
						while (iVar1 < iVar0)
						{
							if (iVar0[iVar1] != Local_387[0 /*19*/])
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0[iVar1], false))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true), ENTITY::GET_ENTITY_COORDS(iVar0[iVar1], true)) < 100f && ENTITY::GET_ENTITY_SPEED(iVar0[iVar1]) > 3f)
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_389.f_0, -8f, true);
										TASK::CLEAR_PED_TASKS(Local_389.f_0);
										iLocal_269 = -1;
									}
								}
							}
							iVar1++;
						}
						if (fVar4 < 225f)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
						}
						if (fVar4 < 225f)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_389.f_0) && ENTITY::IS_ENTITY_ON_SCREEN(Local_389.f_0))
							{
								fLocal_325 = (fLocal_325 + MISC::GET_FRAME_TIME());
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_387[0 /*19*/] || PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_387[0 /*19*/])
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
							}
						}
						bVar7 = (((fVar4 < 225f && MISC::ABSF((Var5.f_2 - Var6.f_2)) < 2f) && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_389.f_0, PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], true))) && (fLocal_325 > 1f || fVar4 < 64f));
						bVar8 = ((bLocal_237 && fVar4 < 400f) && MISC::ABSF((Var5.f_2 - Var6.f_2)) < 2f);
						if (bVar7 || bVar8)
						{
							if (!PED::IS_PED_RAGDOLL(Local_389.f_0) && !TASK::IS_PED_GETTING_UP(Local_389.f_0))
							{
								if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_LAMHI", 7, 0, 0, 0))
								{
									if (!bLocal_237)
									{
										iLocal_269 = PED::CREATE_SYNCHRONIZED_SCENE(0f, -0.6f, 0f, 0f, 0f, 0f, 2);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_269, Local_387[0 /*19*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_387[0 /*19*/], "seat_pside_f"));
										TASK::TASK_SYNCHRONIZED_SCENE(Local_389.f_0, iLocal_269, sLocal_353, "entercar_lamar", 8f, -1.5f, 1, 153, 1000f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
										ENTITY::SET_ENTITY_COLLISION(Local_389.f_0, true, false);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_269, 0f);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_269, false);
									}
									else
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_389.f_0, -1.5f, true);
										iLocal_269 = -1;
										TASK::TASK_ENTER_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], 20000, 0, 2f, 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
									}
									ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
									__LIB_13__::func_815(&Local_392, 1, 0);
									HUD::CLEAR_PRINTS();
									iLocal_241 = 0;
									iLocal_257++;
								}
							}
							else
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_389.f_0, -8f, true);
								iLocal_269 = -1;
							}
						}
					}
				}
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/]))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_387[0 /*19*/].f_1))
						{
							Local_387[0 /*19*/].f_1 = __LIB_0__::func_639(Local_387[0 /*19*/], 0, 0);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_387[0 /*19*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_387[0 /*19*/].f_1));
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], false))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_269))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_269) < 0.55f)
							{
								if (SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(Local_387[0 /*19*/])) > 0.5f)
								{
									bVar9 = true;
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(Local_389.f_0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_269) && !PED::IS_PED_RAGDOLL(Local_389.f_0)) && !bVar9)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_269) >= 1f)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_389.f_0);
								PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_389.f_0, false, false);
								ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
								func_466();
								iLocal_257++;
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_269) >= 0.24f)
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_389.f_0, -1.5f, true);
								TASK::TASK_ENTER_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], 20000, 0, 1f, 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_389.f_0, true);
								ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
								func_466();
								iLocal_269 = -1;
								iLocal_257++;
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_269))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_389.f_0, -8f, true);
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_387[0 /*19*/], sLocal_353, "entercar_cardoor", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_387[0 /*19*/], "entercar_cardoor", sLocal_353, -8f);
						}
						PED::SET_PED_TO_RAGDOLL(Local_389.f_0, 1500, 2500, 0, false, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
						iLocal_269 = -1;
						iLocal_257++;
					}
				}
				if (!iLocal_241)
				{
					__LIB_16__::func_17(&(Local_387[0 /*19*/].f_1), 217.3918f, -1395.3651f, 30.265f, 26.1585f);
					iLocal_241 = 1;
				}
				break;
			case 2:
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false) && !PED::IS_PED_INJURED(Local_389.f_0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], true))
					{
						if (HUD::DOES_BLIP_EXIST(Local_387[0 /*19*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_387[0 /*19*/].f_1));
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_387[0 /*19*/], true)) < 16f)
						{
							if ((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && __LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_GOTREV", 7, 0, 0, 0)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								__LIB_0__::func_544(8, 0, 0, 1, 0);
								__LIB_0__::func_544(9, 0, 0, 1, 0);
								__LIB_0__::func_544(10, 0, 0, 1, 0);
								__LIB_0__::func_544(7, 0, 0, 1, 0);
								func_695();
								if (__LIB_14__::func_742(0f, 0f, 0f, 1))
								{
									__LIB_40__::func_511(-219.37f, -1355.8894f, 30.2681f, 117.4465f, 0, 145);
								}
								func_862(1, "MEET_TREVOR", 0, 0, 0, 1);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
								iLocal_296 = 0;
								iLocal_257 = 50;
							}
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_4_TAKE_CAR_TO_TRANSPORTER"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_4_TAKE_CAR_TO_TRANSPORTER");
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_387[0 /*19*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_387[0 /*19*/].f_1));
				}
				__LIB_31__::func_971(&Local_392, Var3, 0.001f, 0.001f, 2f, 0, Local_389.f_0, Local_387[0 /*19*/], "", "CH_LEAVELAM", "", "CH_GETBACKCAR", 0, 1, !iLocal_240, -1);
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
				{
					HUD::SET_BLIP_COLOUR(Local_392.f_5, 3);
					HUD::SET_BLIP_ROUTE_COLOUR(Local_392.f_5, 3);
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, __LIB_15__::func_996(), true, true, 0);
				}
				else if (HUD::DOES_BLIP_EXIST(Local_388.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_388.f_2));
				}
				break;
			case 50:
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.5f);
				if (__LIB_31__::func_971(&Local_392, Var3, 0.001f, 0.001f, 2f, 0, Local_389.f_0, Local_387[0 /*19*/], "CH_CHOPSHOP", "CH_LEAVELAM", "", "CH_GETBACKCAR", 0, 1, !iLocal_240, -1))
				{
					iLocal_257++;
				}
				if (HUD::DOES_BLIP_EXIST(Local_392.f_5))
				{
					HUD::SET_BLIP_COLOUR(Local_392.f_5, 3);
					HUD::SET_BLIP_ROUTE_COLOUR(Local_392.f_5, 3);
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, __LIB_15__::func_996(), true, true, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						if (!__LIB_13__::func_755(&Local_392, 1))
						{
							if (!func_532("CST7_LINEUP2"))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, -0.034f, -9.8469f, 0.5873f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, 0.1043f, -2.2616f, 2.2863f), 1.75f, false, true, 0))
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_LINEUP2", 7, 0, 0, 0))
									{
										func_529("CST7_LINEUP2", 1);
									}
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, -0.034f, -5.8469f, 0.5873f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, 0.1043f, -2.2616f, 2.2863f), 1.75f, false, true, 0))
						{
							__LIB_0__::func_366(0);
							__LIB_0__::func_638();
							__LIB_16__::func_21(&Local_392, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							SYSTEM::SETTIMERB(0);
							iLocal_257++;
						}
					}
					if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
					}
					if (!__LIB_13__::func_755(&Local_392, 1))
					{
						if (!func_532("CST7_CHAT1") && !func_532("CST7_CHAT1b"))
						{
							if (iLocal_296 == 0)
							{
								iLocal_296 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 750));
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_296) > 0)
							{
								if (__LIB_16__::func_932() > 0)
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_CHAT1", 7, 0, 0, 0))
									{
										func_529("CST7_CHAT1", 1);
									}
								}
								else if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_CHAT1b", 7, 0, 0, 0))
								{
									func_529("CST7_CHAT1b", 1);
								}
							}
						}
						else if (!func_532("CST7_LINEUP"))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true)) < 1600f)
								{
									if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_LINEUP", 7, 0, 0, 0))
									{
										func_529("CST7_LINEUP", 1);
									}
								}
							}
						}
						else if (!func_532("CST7_TREVHI"))
						{
							if (!PED::IS_PED_INJURED(iLocal_469[2]))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_469[2]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_469[2], true)) < 900f)
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_469[2], PLAYER::PLAYER_PED_ID()))
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_TREVHI", 7, 0, 0, 0))
										{
											func_529("CST7_TREVHI", 1);
											iLocal_306 = 0;
											iLocal_307 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						if (iLocal_360 == 1)
						{
							if (func_532("CST7_DMG"))
							{
								if (func_532("CST7_CHAT1") || func_532("CST7_CHAT1b"))
								{
									if (!__LIB_13__::func_755(&Local_392, 1))
									{
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_361) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_362))
										{
											if (__LIB_17__::func_244(&Local_528, "CST7AUD", &Local_361, &cLocal_362, 7, 0, 0))
											{
												iLocal_360 = 0;
												func_529("CST7_DMG", 0);
											}
										}
									}
								}
							}
						}
						if (!func_532("CST7_BACK"))
						{
							if (func_532("CST7_TREVHI"))
							{
								if (!PED::IS_PED_INJURED(iLocal_469[2]))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_469[2], sLocal_347, "packer_idle_base_trevor", 3))
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_307) > 7500)
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 523.937f, -1325.7849f, 27.221191f, 509.3284f, -1302.5088f, 33.191227f, 16f, false, true, 0))
											{
												if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_469[2], PLAYER::PLAYER_PED_ID()))
												{
													if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_BACK", 7, 0, 0, 0))
													{
														TASK::TASK_LOOK_AT_ENTITY(iLocal_469[2], PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
														iLocal_306++;
														iLocal_307 = MISC::GET_GAME_TIMER();
														if (iLocal_306 == 3)
														{
															func_529("CST7_TREVHI", 1);
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
					if (!func_532("CST7_MONDMG"))
					{
						if (!func_532("CST7_LINEUP"))
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_387[0 /*19*/]))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_309) > 5000)
								{
									if (func_532("CST7_CHAT1") || func_532("CST7_CHAT1b"))
									{
										if (__LIB_0__::func_75())
										{
											Local_361 = { __LIB_0__::func_486() };
											if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_361))
											{
												if (MISC::ARE_STRINGS_EQUAL(&Local_361, "CST7_CHAT1") || MISC::ARE_STRINGS_EQUAL(&Local_361, "CST7_CHAT1b"))
												{
													Local_361 = { __LIB_0__::func_486() };
													cLocal_362 = { __LIB_0__::func_485() };
													if (MISC::ARE_STRINGS_EQUAL(&cLocal_362, "NULL"))
													{
														cLocal_362 = { Local_361 };
														StringConCat(&cLocal_362, "_1", 24);
													}
													__LIB_0__::func_429();
													iLocal_360 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_360 == 1)
							{
								if (!func_532("CST7_DMG"))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_DMG", 7, 0, 0, 0))
										{
											func_529("CST7_DMG", 1);
											iLocal_308++;
											iLocal_309 = MISC::GET_GAME_TIMER();
											if (iLocal_308 == 4)
											{
												func_529("CST7_MONDMG", 1);
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
					if (func_532("CST7_CHAT1") || func_532("CST7_CHAT1b"))
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_388.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_388.f_2));
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true)) < (100f * 100f))
					{
						CUTSCENE::REQUEST_CUTSCENE("CAR_5_MCS_1", 8);
						func_25("CAR_5_MCS_1");
					}
				}
				break;
			case 51:
				if (!ENTITY::IS_ENTITY_DEAD(Local_387[0 /*19*/], false))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_387[0 /*19*/]) < 0.5f)
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_387[0 /*19*/], 1f, 5, false);
					}
				}
				if (!__LIB_13__::func_755(&Local_392, 1))
				{
					if (!func_532("CST7_LINEUP2"))
					{
						if (__LIB_17__::func_243(&Local_528, "CST7AUD", "CST7_LINEUP2", 7, 0, 0, 0))
						{
							func_529("CST7_LINEUP2", 1);
						}
					}
					else if (SYSTEM::TIMERB() > 1000)
					{
						iLocal_466 = 2;
					}
				}
				break;
		}
		if (!iLocal_240)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_240 = 1;
			}
		}
		else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			iLocal_240 = 0;
		}
		if (iLocal_257 > 0)
		{
			if (!PED::IS_PED_INJURED(Local_389.f_0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_389.f_0, true)) > 90000f)
				{
					func_847(13);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
		{
			if (iLocal_257 > 0)
			{
				if (!func_698(Local_326, fLocal_319))
				{
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(468.4835f, -1336.4393f, 27.2305f, 480.836f, -1334.431f, 38.2508f, false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_326, 30f, false, false, false, false, false, false, 0);
				}
				func_402();
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469[2]))
				{
					func_53(503.2f, -1345.4f, 29.9f, fLocal_320);
					func_697();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, -0.0617f, -15.5324f, -0.8495f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_1, 0.0877f, 1.9641f, 4.6127f), 3.75f, false, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_469[2]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(iLocal_469[2]))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_347);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_347) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (iLocal_266 == 0)
					{
						TASK::TASK_PLAY_ANIM(iLocal_469[2], sLocal_347, "packer_idle_base_trevor", 8f, -8f, -1, 1, 0f, false, false, false);
						iLocal_266 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-2000, 2000));
					}
					else if (!iLocal_238)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_PLAY_ANIM")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_469[2]);
							iLocal_238 = 1;
						}
						else
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_266) > 10000 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_469[2], sLocal_347, "packer_idle_base_trevor", 3))
							{
								iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								TASK::OPEN_SEQUENCE_TASK(&iVar10);
								if (iVar11 == 0)
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_347, "packer_idle_1_trevor", 8f, -8f, -1, 262144, 0f, false, false, false);
								}
								else if (iVar11 == 1)
								{
									if (!iLocal_248)
									{
										TASK::TASK_PLAY_ANIM(0, sLocal_347, "packer_idle_2_trevor", 8f, -8f, -1, 262144, 0f, false, false, false);
									}
								}
								else if (iVar11 == 2)
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_347, "packer_idle_3_trevor", 8f, -8f, -1, 262144, 0f, false, false, false);
								}
								TASK::TASK_PLAY_ANIM(0, sLocal_347, "packer_idle_base_trevor", 8f, -8f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar10);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_469[2], iVar10);
								TASK::CLEAR_SEQUENCE_TASK(&iVar10);
								iLocal_266 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-2000, 2000));
							}
							if (!iLocal_248)
							{
								if (func_532("CST7_TREVHI"))
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar12);
									TASK::TASK_PLAY_ANIM(0, sLocal_347, "packer_idle_4_trevor", 8f, -8f, -1, 262144, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, sLocal_347, "packer_idle_base_trevor", 8f, -8f, -1, 262145, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iVar12);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_469[2], iVar12);
									TASK::CLEAR_SEQUENCE_TASK(&iVar12);
									iLocal_248 = 1;
								}
							}
						}
					}
					else if (SYSTEM::VDIST2(Local_328, ENTITY::GET_ENTITY_COORDS(iLocal_469[2], true)) > 2f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_469[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar13);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_328, 1f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, 512.32f, -1316.91f, 30.32f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar13);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_469[2], iVar13);
							TASK::CLEAR_SEQUENCE_TASK(&iVar13);
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_469[2], true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_469[2], true, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_469[2], false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_469[2], false);
				ENTITY::SET_ENTITY_COORDS(iLocal_469[2], 519.93f, -1327.7f, 28.31f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_469[2], 51f);
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_0, false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_388.f_0, true)) < 2500f)
				{
					func_847(23);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_387[0 /*19*/], false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_387[0 /*19*/], true)) < 2500f)
				{
					func_847(20);
				}
			}
		}
	}
	if (iLocal_466 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		__LIB_13__::func_815(&Local_392, 1, 0);
		func_466();
		__LIB_0__::func_429();
		STREAMING::REMOVE_ANIM_DICT(sLocal_353);
		iLocal_466 = 0;
		iLocal_465 = 2;
	}
	if (iLocal_466 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[0 /*19*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_387[0 /*19*/], -1);
			}
			if (!PED::IS_PED_INJURED(Local_389.f_0) && !PED::IS_PED_IN_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_389.f_0, Local_387[0 /*19*/], 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(Local_387[0 /*19*/], false);
			if (iLocal_257 >= 2)
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_387[0 /*19*/], Local_327, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_387[0 /*19*/], fLocal_319);
			}
		}
		iLocal_466 = 1;
	}
}

int func_697()//Position - 0x83AF4
{
	if (!PED::IS_PED_INJURED(iLocal_469[2]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_469[2], false, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_469[2], false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_469[2], true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_469[2], true);
		return 1;
	}
	return 0;
}

int func_698(struct<3> Param0, float fParam1)//Position - 0x83B3D
{
	int iVar0;
	iVar0 = 0;
	if (func_406(Param0, fParam1))
	{
		switch (iLocal_264)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_388.f_1, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_388.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_388.f_0, -0.00281182f, -9.76194f, 0.332852f), false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_388.f_1, fParam1);
					iLocal_265 = MISC::GET_GAME_TIMER();
					iLocal_264++;
				}
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_265) > 500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
					{
						if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_388.f_1) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_388.f_1))
						{
							VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_388.f_0, Local_388.f_1, 1f);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_388.f_1, 5, false, false);
							iLocal_265 = MISC::GET_GAME_TIMER();
							iLocal_264++;
						}
					}
				}
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_265) > 1000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_388.f_0, false))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_388.f_1, true)) < 2500f && !ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_388.f_1)) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_388.f_1))
						{
							iVar0 = 0;
							while (iVar0 < Local_387.f_0)
							{
								if (iVar0 != 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_387[iVar0 /*19*/], false))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_387[iVar0 /*19*/], false);
									}
								}
								iVar0++;
							}
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_0, false);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, false);
							iLocal_264++;
						}
					}
				}
				break;
			case 3:
				return 1;
				break;
			}
	}
	return 0;
}

int func_752(struct<3> Param0, float fParam1)//Position - 0x8A504
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_387[0 /*19*/]))
	{
		STREAMING::REQUEST_MODEL(Local_387[0 /*19*/].f_18);
		if (STREAMING::HAS_MODEL_LOADED(Local_387[0 /*19*/].f_18))
		{
			MISC::CLEAR_AREA(Param0, 22f, true, false, false, false);
			Local_387[0 /*19*/] = __LIB_16__::func_0(Local_387[0 /*19*/].f_18, Param0, fParam1);
			__LIB_0__::func_679(Local_387[0 /*19*/], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_387[0 /*19*/].f_18);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_753()//Position - 0x8A581
{
	if (iLocal_466 == 0)
	{
		if (iLocal_231)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -62.8697f, -1457.6414f, 31.1163f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.782f);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			func_691();
			iLocal_231 = 0;
		}
		else
		{
			__LIB_16__::func_11();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
			iLocal_253 = 0;
			iLocal_257 = 0;
			iLocal_466 = 1;
		}
	}
	if (iLocal_466 == 1)
	{
		switch (iLocal_257)
		{
			case 0:
				switch (__LIB_15__::func_944())
				{
					case 1:
						if (!func_532("CST7_LAMPH"))
						{
							func_410();
							__LIB_0__::func_222(&Local_528, 5, 0, "LAMAR", 0, 1);
							if (__LIB_32__::func_4(&Local_528, 19, "CST7AUD", "CST7_LAMPH", 7, 0, 0, 1))
							{
								func_529("CST7_LAMPH", 1);
							}
						}
						else if (!__LIB_0__::func_75())
						{
							if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !__LIB_0__::func_769(19)) && !__LIB_1__::func_860(19))
							{
								iLocal_257 = 0;
								iLocal_466 = 2;
							}
						}
						else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -210.6681f, -1358.6426f, 30.261f, 1) <= 65f)
						{
							__LIB_0__::func_366(0);
						}
						break;
					case 2:
						if (!func_532("CST7_LAMPH2"))
						{
							func_410();
							__LIB_0__::func_222(&Local_528, 5, 0, "LAMAR", 0, 1);
							if (__LIB_32__::func_4(&Local_528, 19, "CST7AUD", "CST7_LAMPH2", 7, 0, 0, 1))
							{
								func_529("CST7_LAMPH2", 1);
							}
						}
						else if (!__LIB_0__::func_75())
						{
							if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !__LIB_0__::func_769(19)) && !__LIB_1__::func_860(19))
							{
								iLocal_257++;
							}
						}
						break;
				}
				break;
			case 1:
				switch (__LIB_15__::func_944())
				{
					case 1:
						break;
					case 2:
						VEHICLE::REQUEST_VEHICLE_RECORDING(900, sLocal_344);
						if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(900, sLocal_344) && func_689(-951.4235f, -1234.1798f, 4.2849f, 299.6498f)) && __LIB_16__::func_43(&iLocal_374, 1, -952.6679f, -1229.8711f, 4.3307f, 298.613f, 1, 1))
						{
							if (!PED::IS_PED_INJURED(iLocal_469[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_374, false))
							{
								CAM::DESTROY_ALL_CAMS(false);
								iLocal_368 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
								CAM::SET_CAM_PARAMS(iLocal_368, -940.17114f, -1224.3013f, 27.479607f, -89.28317f, -0.029118f, -60.138767f, 44.4f, 0, 1, 1, 2);
								PED::SET_PED_INTO_VEHICLE(iLocal_469[1], iLocal_374, -1);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_374, 900, sLocal_344, true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_374, 3000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_374, true);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_374, 0f);
								__LIB_17__::func_760(&iLocal_469, 1);
								Local_513.f_12 = iLocal_469[iLocal_469.f_7];
								iLocal_257++;
							}
						}
						break;
				}
				break;
			case 2:
				if (func_755(&Local_513, iLocal_368, 1, 0, 1148829696, 1148829696, 0, 0, 0, 2))
				{
					if (!iLocal_253)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_374, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_374))
							{
								if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
								{
									MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_374, true), 50f, true, false, false, false);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_374, (1500f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_374)));
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_374, 0.7f);
									iLocal_253 = 1;
								}
							}
						}
					}
					if (Local_513.f_18)
					{
						if (!Local_513.f_19)
						{
							if (__LIB_32__::func_7(&iLocal_469, 1, 1, 0))
							{
								Local_513.f_19 = 1;
							}
						}
					}
					if (!iLocal_254)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 9)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_374, (3000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_374)));
							iLocal_254 = 1;
						}
					}
				}
				else if ((!__LIB_0__::func_477() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__::func_201())
				{
					if (__LIB_15__::func_944() == 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_374, false))
						{
							VEHICLE::REMOVE_VEHICLE_RECORDING(900, sLocal_344);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_374);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_374, ENTITY::GET_ENTITY_SPEED(iLocal_374));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_374);
						}
					}
					func_7(&(iLocal_469[2]), 1, 0);
					iLocal_257 = 0;
					iLocal_466 = 2;
				}
				break;
			}
	}
	if (iLocal_466 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		__LIB_13__::func_815(&Local_392, 1, 0);
		func_466();
		__LIB_0__::func_429();
		iLocal_466 = 0;
		iLocal_465 = 1;
	}
}

int func_755(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x8AA1C
{
	return __LIB_32__::func_106(uParam0, iParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

void func_847(int iParam0)//Position - 0x90CD6
{
	if (!bLocal_235)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_466();
		__LIB_13__::func_815(&Local_392, 1, 0);
		__LIB_15__::func_959(&uLocal_404);
		__LIB_0__::func_325();
		if (iLocal_233)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_233 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_383))
		{
			TASK::TASK_SMART_FLEE_COORD(iLocal_383, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 500f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_383, true);
		}
		switch (iParam0)
		{
			case 0:
				sLocal_348 = "";
				break;
			case 3:
				sLocal_348 = "CH_CARDEAD";
				break;
			case 6:
				sLocal_348 = "CH_CARSDEAD";
				break;
			case 5:
				sLocal_348 = "CH_CARSDEAD2";
				break;
			case 4:
				sLocal_348 = "CH_TRUCKDEAD";
				break;
			case 1:
				sLocal_348 = "CMN_FDIED" /* GXT: ~s~Franklin died. */;
				break;
			case 2:
				sLocal_348 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
				break;
			case 7:
				sLocal_348 = "CH_STUCK";
				break;
			case 8:
				sLocal_348 = "CH_STUCK2";
				break;
			case 9:
				sLocal_348 = "CH_TRAILFAIL";
				break;
			case 11:
				sLocal_348 = "CMN_FLEFT" /* GXT: ~s~Franklin was left behind. */;
				break;
			case 12:
				sLocal_348 = "CH_LAMDEAD";
				break;
			case 13:
				sLocal_348 = "CH_LAMLEFT";
				break;
			case 14:
				sLocal_348 = "CMN_TLEFT" /* GXT: ~s~Trevor was left behind. */;
				break;
			case 15:
				sLocal_348 = "CH_TLLEFT";
				break;
			case 16:
				sLocal_348 = "CH_FLLEFT";
				break;
			case 17:
				sLocal_348 = "CH_MOLDEAD";
				break;
			case 18:
				sLocal_348 = "CH_MLEFT";
				break;
			case 19:
				sLocal_348 = "CH_COPFAIL3";
				break;
			case 21:
				sLocal_348 = "CH_MOLCDEAD";
				break;
			case 22:
				sLocal_348 = "CH_TRAILFAIL";
				break;
			case 23:
				sLocal_348 = "CH_COPFAIL4";
				break;
			case 20:
				sLocal_348 = "CH_COPFAIL2";
				break;
			case 24:
				sLocal_348 = "CH_FELLFAIL";
				break;
			case 25:
				sLocal_348 = "CH_CARABAN";
				break;
			case 10:
				sLocal_348 = "CH_TRABAN";
				break;
			case 26:
				sLocal_348 = "CH_MSPOOK";
				break;
			}
	}
	AUDIO::TRIGGER_MUSIC_EVENT("CAR4_MISSION_FAIL");
	func_851(sLocal_348);
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_848(iLocal_469[1]);
	func_848(iLocal_469[2]);
	func_848(Local_389.f_0);
	__LIB_0__::func_544(8, 1, 0, 1, 0);
	__LIB_0__::func_544(9, 1, 0, 1, 0);
	__LIB_0__::func_544(10, 1, 0, 1, 0);
	__LIB_0__::func_544(7, 1, 0, 1, 0);
	func_915();
}

void func_848(int* iParam0)//Position - 0x90F7A
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_495()) || __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			func_7(&iParam0, 1, 0);
		}
	}
}

void func_851(char* sParam0)//Position - 0x91029
{
	__LIB_0__::func_381(sParam0);
	func_852(0);
}

void func_852(int iParam0)//Position - 0x9103C
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_853(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_853(int iParam0)//Position - 0x91081
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_40();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_854(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
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

void func_854(var uParam0, int iParam1)//Position - 0x91191
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
			if (!func_856(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_856(int iParam0, var uParam1, float fParam2)//Position - 0x91365
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
			return func_856(8, uParam1, fParam2);
			break;
		case 10:
			return func_856(8, uParam1, fParam2);
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

void func_862(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x91E7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_863(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_863(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x91FF4
{
	func_864(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_864(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x92010
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_15__::func_944();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_186(&(uParam0->f_2884), 0);
		__LIB_16__::func_26(PLAYER::PLAYER_PED_ID());
		__LIB_16__::func_28(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_15__::func_944())
		{
			__LIB_16__::func_32(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328_SPN_TOTAL_CASH[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_32__::func_110(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_910(int iParam0, bool bParam1)//Position - 0x9BF17
{
	__LIB_17__::func_708(0);
	iLocal_231 = 1;
	iLocal_257 = 0;
	iLocal_465 = iParam0;
	iLocal_466 = 0;
	func_915();
	if (bParam1)
	{
		if (iLocal_465 >= 5)
		{
			func_862(4, "LOSE_COPS", 1, 0, 0, 1);
		}
		else if (iLocal_465 >= 4)
		{
			func_862(3, "COPS_ARRIVE", 0, 0, 0, 1);
		}
		else if (iLocal_465 >= 3)
		{
			func_862(2, "GO_TO_GAS_STATION", 0, 0, 0, 1);
		}
		else
		{
			func_862(0, "COLLECT_FINAL_CAR", 0, 0, 0, 1);
		}
	}
	if (iParam0 >= 3)
	{
		__LIB_0__::func_544(8, 0, 0, 1, 0);
		__LIB_0__::func_544(9, 0, 0, 1, 0);
		__LIB_0__::func_544(10, 0, 0, 1, 0);
		__LIB_0__::func_544(7, 0, 0, 1, 0);
	}
}

void func_913()//Position - 0x9C013
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Carsteal5_spycar_crane");
	HUD::REQUEST_ADDITIONAL_TEXT("H4HEIST", 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(585.5f, -2645.5f, 1.6f, 600f, -2610.9f, 10.6f, false, true);
	__LIB_0__::func_222(&Local_528, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_691();
	__LIB_16__::func_1();
	__LIB_16__::func_18(1);
	__LIB_13__::func_824(39, 1);
	__LIB_13__::func_824(40, 1);
	__LIB_13__::func_824(41, 1);
	__LIB_13__::func_824(42, 1);
	__LIB_13__::func_824(43, 1);
	__LIB_13__::func_824(44, 1);
	func_547(&Local_423);
	iLocal_1830 = AUDIO::GET_SOUND_ID();
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(false);
}

void func_915()//Position - 0x9C100
{
	HUD::CLEAR_HELP(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(8, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(6, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, false);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, false);
	VEHICLE::SET_RANDOM_TRAINS(true);
	WEAPON::ENABLE_LASER_SIGHT_RENDERING(true);
	__LIB_14__::func_804(0);
	__LIB_0__::func_424(0);
	MISC::RESET_DISPATCH_SPAWN_BLOCKING_AREAS();
	VEHICLE::ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(1);
	GRAPHICS::SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(1f);
	AUDIO::TRIGGER_MUSIC_EVENT("CAR4_MISSION_FAIL");
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, true);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		if (iLocal_231)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_383))
	{
		TASK::TASK_SMART_FLEE_COORD(iLocal_383, ENTITY::GET_ENTITY_COORDS(iLocal_383, true), 500f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_383, true);
	}
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(false);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_231)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_388.f_1, false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_388.f_1, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_388.f_1, true);
	}
	STREAMING::REMOVE_ANIM_DICT("map_objects");
	STREAMING::REMOVE_ANIM_DICT(sLocal_350);
	STREAMING::REMOVE_ANIM_DICT(sLocal_349);
	STREAMING::REMOVE_ANIM_DICT(sLocal_353);
	STREAMING::REMOVE_ANIM_DICT(sLocal_351);
	STREAMING::REMOVE_ANIM_DICT(sLocal_352);
	STREAMING::REMOVE_ANIM_DICT(sLocal_356);
	STREAMING::REMOVE_ANIM_DICT(sLocal_357);
	STREAMING::REMOVE_ANIM_DICT(sLocal_358);
	STREAMING::REMOVE_ANIM_DICT(sLocal_355);
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_456);
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::SET_AUDIO_FLAG("ForceSeamlessRadioSwitch", false);
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_THEFT_FINALE");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Crane");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Crane_Impact_Sweeteners");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Crane_Stress");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	STREAMING::REMOVE_PTFX_ASSET();
	__LIB_0__::func_325();
	func_922(iLocal_231, 1);
	__LIB_0__::func_221(&Local_528, 2);
	__LIB_0__::func_377(0, -1);
	func_466();
	func_921();
	func_920(iLocal_231);
	func_919(iLocal_231);
	func_918(iLocal_231);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	func_9(&Local_423);
	__LIB_16__::func_884(&iLocal_469);
	__LIB_0__::func_345(&uLocal_533, 0, 0);
	if (iLocal_232)
	{
		PLAYER::ASSISTED_MOVEMENT_FLUSH_ROUTE();
		PLAYER::ASSISTED_MOVEMENT_CLOSE_ROUTE();
		iLocal_232 = 0;
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(491.9493f, -1421.7377f, 10.2604f, 563.2618f, -1267.808f, 40.3393f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(468.4835f, -1336.4393f, 27.2305f, 480.836f, -1334.431f, 38.2508f, true, true);
	func_36(0);
	if (bLocal_243)
	{
		MISC::UNLOAD_ALL_CLOUD_HATS();
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::STOP_SOUND(iLocal_1830);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_STEAL_4");
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1839, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1839))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1839, false);
	}
	if (!iLocal_231)
	{
		__LIB_0__::func_544(60, 0, 0, 1, 0);
		__LIB_16__::func_18(0);
		__LIB_13__::func_824(39, 0);
		__LIB_13__::func_824(40, 0);
		__LIB_13__::func_824(41, 0);
		__LIB_13__::func_824(42, 0);
		__LIB_13__::func_824(43, 0);
		__LIB_13__::func_824(44, 0);
		__LIB_0__::func_638();
		__LIB_15__::func_931();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(585.5f, -2645.5f, 1.6f, 600f, -2610.9f, 10.6f, true, true);
		func_47(0);
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		func_916();
		__LIB_13__::func_815(&Local_392, 1, 0);
		__LIB_15__::func_959(&uLocal_404);
		func_691();
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_459);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_464);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_461);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_463);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_458);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_457);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_456);
		VEHICLE::REMOVE_VEHICLE_RECORDING(100, sLocal_344);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, true, false, false, false);
		bLocal_242 = false;
	}
}

void func_916()//Position - 0x9C5A0
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_260;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_260[iVar1] = 0;
		iVar1++;
	}
}

void func_918(bool bParam0)//Position - 0x9C5E7
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_387.f_0)
	{
		if (bParam0)
		{
			func_6(&(Local_387[iVar0 /*19*/]), bParam0, 1);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_387[iVar0 /*19*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_379)
	{
		func_6(&(iLocal_379[iVar0]), bParam0, 1);
		iVar0++;
	}
	func_6(&Local_388, bParam0, 0);
	func_6(&(Local_388.f_1), bParam0, 0);
	func_6(&iLocal_375, bParam0, 1);
}

void func_919(bool bParam0)//Position - 0x9C669
{
	int iVar0;
	func_7(&(iLocal_469[1]), bParam0, 0);
	func_7(&(iLocal_469[2]), bParam0, 0);
	func_7(&Local_389, bParam0, 0);
	func_7(&iLocal_381, 1, 0);
	func_7(&iLocal_382, bParam0, 0);
	func_7(&iLocal_380, bParam0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_391.f_0)
	{
		func_7(&(Local_391[iVar0 /*4*/]), bParam0, 1);
		iVar0++;
	}
}

void func_920(bool bParam0)//Position - 0x9C6D7
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_372)
	{
		__LIB_16__::func_13(&(iLocal_372[iVar0]), bParam0);
		iVar0++;
	}
}

void func_921()//Position - 0x9C703
{
	bool bVar0;
	bVar0 = false;
	if (CAM::DOES_CAM_EXIST(iLocal_369))
	{
		if (CAM::IS_CAM_RENDERING(iLocal_369))
		{
			bVar0 = true;
		}
		CAM::DESTROY_CAM(iLocal_369, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_371))
	{
		if (CAM::IS_CAM_RENDERING(iLocal_371))
		{
			bVar0 = true;
		}
		CAM::DESTROY_CAM(iLocal_371, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_370))
	{
		if (CAM::IS_CAM_RENDERING(iLocal_370))
		{
			bVar0 = true;
		}
		CAM::DESTROY_CAM(iLocal_370, false);
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (bVar0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
}

void func_922(bool bParam0, bool bParam1)//Position - 0x9C786
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_187))
	{
		iLocal_65 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_203);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_81)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_936());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_932();
			func_931();
			func_928();
		}
		else
		{
			func_924();
			func_923();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_923()//Position - 0x9C842
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		iLocal_210[iVar0] = 0;
		Local_157[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_83[iVar0] = 0f;
		fLocal_84[iVar0] = 0f;
		fLocal_85[iVar0] = 0f;
		fLocal_86[iVar0] = 0f;
		iLocal_133[iVar0] = 0;
		fLocal_87[iVar0] = 0f;
		iLocal_134[iVar0] = 0;
		iLocal_204[iVar0] = 0;
		iLocal_135[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_211[iVar0] = 0;
		iVar0++;
	}
	iLocal_140 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_212[iVar0] = 0;
		Local_158[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_108[iVar0] = 0f;
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		iLocal_139[iVar0] = 0;
		iLocal_205[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_214[iVar0] = 0;
		iVar0++;
	}
	iLocal_142 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_213[iVar0] = 0;
		Local_159[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_92[iVar0] = 0f;
		fLocal_93[iVar0] = 0f;
		fLocal_94[iVar0] = 0f;
		fLocal_95[iVar0] = 0f;
		iLocal_136[iVar0] = 0;
		fLocal_96[iVar0] = 0f;
		iLocal_137[iVar0] = 0;
		iLocal_206[iVar0] = 0;
		iLocal_138[iVar0] = 0;
		iVar0++;
	}
	iLocal_141 = 0;
	iLocal_144 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
	iLocal_149 = 0;
}

void func_924()//Position - 0x9C9CE
{
	func_927();
	func_926();
	func_925();
}

void func_925()//Position - 0x9C9E2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_213[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_213[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_213[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_213[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_213[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_213[iVar0]));
			}
		}
		iLocal_137[iVar0] = 0;
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_136[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_136[iVar0], &uLocal_187);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!iLocal_206[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_206[iVar0]);
		}
		iVar0++;
	}
}

void func_926()//Position - 0x9CAD9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_212[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_212[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_212[iVar0]));
			}
		}
		iLocal_139[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_205[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_205[iVar0]);
		}
		iVar0++;
	}
	iLocal_145 = 0;
	iLocal_142 = 0;
}

void func_927()//Position - 0x9CB56
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_210[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_210[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_210[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_210[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_210[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_210[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_210[iVar0]));
			}
		}
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_133[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_133[iVar0], &uLocal_187);
			}
		}
		iLocal_134[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_204[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_204[iVar0]);
		}
		iVar0++;
	}
	iLocal_144 = 0;
	iLocal_140 = 0;
}

void func_928()//Position - 0x9CC55
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_213[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_213[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_213[iVar0]);
				}
			}
			__LIB_17__::func_629(iLocal_213[iVar0]);
			__LIB_15__::func_908(iLocal_213[iVar0]);
		}
		iLocal_137[iVar0] = 0;
		iLocal_138[iVar0] = 0;
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_136[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_136[iVar0], &uLocal_187);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!iLocal_206[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_206[iVar0]);
		}
		iVar0++;
	}
	iLocal_146 = 0;
}

void func_931()//Position - 0x9CDD3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_212[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_212[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_212[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_212[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!iLocal_205[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_205[iVar0]);
		}
		iVar0++;
	}
	iLocal_145 = 0;
	iLocal_142 = 0;
}

void func_932()//Position - 0x9CE57
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_210[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_210[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_210[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_210[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_210[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_210[iVar0]);
				}
			}
			__LIB_17__::func_629(iLocal_210[iVar0]);
			__LIB_15__::func_908(iLocal_210[iVar0]);
		}
		iLocal_134[iVar0] = 0;
		iLocal_135[iVar0] = 0;
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_133[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_133[iVar0], &uLocal_187);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_204[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_204[iVar0]);
		}
		iVar0++;
	}
	iLocal_144 = 0;
	iLocal_140 = 0;
}

int func_936()//Position - 0x9CF6C
{
	if (iLocal_207 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_207;
}

void func_939()//Position - 0x9CFDF
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_853(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_40();
		}
	}
}

