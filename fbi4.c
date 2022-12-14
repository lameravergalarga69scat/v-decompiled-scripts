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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	float fLocal_62[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_63[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_64[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_65[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_66[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_72[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_73[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_74[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_75[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_77[4] = { 0f, 0f, 0f, 0f };
	float fLocal_78[4] = { 0f, 0f, 0f, 0f };
	float fLocal_79[4] = { 0f, 0f, 0f, 0f };
	float fLocal_80[4] = { 0f, 0f, 0f, 0f };
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	int iLocal_102[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_103[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_104[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_105[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_107[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108[4] = { 0, 0, 0, 0 };
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<3> Local_126[40];
	struct<3> Local_127[4];
	struct<3> Local_128[22];
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	char cLocal_142[64] = "";
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[4] = { 0, 0, 0, 0 };
	int iLocal_154[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_159[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_160[4] = { 0, 0, 0, 0 };
	int iLocal_161[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[4] = { 0, 0, 0, 0 };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	var uLocal_166 = 14;
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
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
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
	struct<3> Local_214 = { 0, 0, 0 } ;
	struct<3> Local_215 = { 0, 0, 0 } ;
	int iLocal_216 = 0;
	var uLocal_217 = 0;
	float fLocal_218 = 0f;
	int iLocal_219 = 0;
	int iLocal_220[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_221[3] = { 0, 0, 0 };
	int iLocal_222[3] = { 0, 0, 0 };
	int iLocal_223[4] = { 0, 0, 0, 0 };
	struct<7> Local_224 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	struct<10> Local_233 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	struct<7> Local_239 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	struct<15> Local_248[14];
	struct<15> Local_249[2];
	struct<14> Local_250 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_251 = 0;
	struct<8> Local_252 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	struct<15> Local_260[8];
	struct<14> Local_261 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_262 = 0;
	struct<7> Local_263 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	struct<15> Local_272 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	struct<15> Local_278 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	struct<17> Local_284 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	struct<17> Local_288 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	struct<20> Local_292[36];
	struct<20> Local_293[4];
	struct<20> Local_294[2];
	struct<15> Local_295 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<11> Local_301 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	struct<11> Local_311 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	struct<16> Local_321 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	struct<20> Local_326[3];
	struct<20> Local_327[3];
	struct<20> Local_328[2];
	int iLocal_329 = 0;
	struct<5> Local_330[24];
	struct<21> Local_331 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	struct<3> Local_335 = { 0, 0, 0 } ;
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
	struct<13> Local_357 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<3> Local_369 = { 0, 0, 0 } ;
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
	struct<13> Local_391 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<10> Local_403[2];
	struct<6> Local_404 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_405 = 0;
	var uLocal_406 = 1092616192;
	var uLocal_407 = 1101004800;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 3;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	int iLocal_424 = 4;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 4;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 4;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 4;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 4;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 4;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 4;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	struct<20> Local_468 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	bool bLocal_485 = 0;
	bool bLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	bool bLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	bool bLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	bool bLocal_500 = 0;
	bool bLocal_501 = 0;
	int iLocal_502 = 0;
	bool bLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	bool bLocal_509 = 0;
	bool bLocal_510 = 0;
	bool bLocal_511 = 0;
	bool bLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	bool bLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	bool bLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	bool bLocal_523 = 0;
	bool bLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
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
	int iLocal_567[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_568 = 0;
	int iLocal_569 = 0;
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
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	var uLocal_590 = 0;
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
	int iLocal_604[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618[2] = { 0, 0 };
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
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650[2] = { 0, 0 };
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	struct<3> Local_658 = { 0, 0, 0 } ;
	struct<3> Local_659 = { 0, 0, 0 } ;
	struct<3> Local_660 = { 0, 0, 0 } ;
	struct<3> Local_661 = { 0, 0, 0 } ;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	struct<3> Local_665 = { 0, 0, 0 } ;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	struct<3> Local_669 = { 0, 0, 0 } ;
	struct<3> Local_670[2];
	float fLocal_671 = 0f;
	float fLocal_672 = 0f;
	float fLocal_673 = 0f;
	float fLocal_674 = 0f;
	char* sLocal_675 = NULL;
	char* sLocal_676 = NULL;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
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
	struct<165> Local_701[2];
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	struct<3> Local_706 = { 0, 0, 0 } ;
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
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	var uLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	float fLocal_733 = 0f;
	int iLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 2;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 2;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 20;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = -1;
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
	var uLocal_779 = 1065353216;
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
	var uLocal_806 = -1;
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
	var uLocal_836 = 1065353216;
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
	var uLocal_863 = -1;
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
	var uLocal_893 = 1065353216;
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
	var uLocal_920 = -1;
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
	var uLocal_950 = 1065353216;
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
	var uLocal_977 = -1;
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
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 1065353216;
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
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
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
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 1065353216;
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
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = -1;
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
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 1065353216;
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
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = -1;
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
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 1065353216;
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
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = -1;
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
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 1065353216;
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
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = -1;
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
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 1065353216;
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
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = -1;
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
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 1065353216;
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
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = -1;
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
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 1065353216;
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
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = -1;
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
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 1065353216;
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
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1;
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
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 1065353216;
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
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = -1;
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
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 1065353216;
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
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = -1;
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
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 1065353216;
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
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = -1;
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
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 1065353216;
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
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = -1;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 1065353216;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = -1;
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
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 1065353216;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = -1;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 1065353216;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 16;
	var uLocal_1887 = 0;
	var uLocal_1888 = -1082130432;
	var uLocal_1889 = 0;
	var uLocal_1890 = -1082130432;
	var uLocal_1891 = 0;
	var uLocal_1892 = -1082130432;
	var uLocal_1893 = 0;
	var uLocal_1894 = -1082130432;
	var uLocal_1895 = 0;
	var uLocal_1896 = -1082130432;
	var uLocal_1897 = 0;
	var uLocal_1898 = -1082130432;
	var uLocal_1899 = 0;
	var uLocal_1900 = -1082130432;
	var uLocal_1901 = 0;
	var uLocal_1902 = -1082130432;
	var uLocal_1903 = 0;
	var uLocal_1904 = -1082130432;
	var uLocal_1905 = 0;
	var uLocal_1906 = -1082130432;
	var uLocal_1907 = 0;
	var uLocal_1908 = -1082130432;
	var uLocal_1909 = 0;
	var uLocal_1910 = -1082130432;
	var uLocal_1911 = 0;
	var uLocal_1912 = -1082130432;
	var uLocal_1913 = 0;
	var uLocal_1914 = -1082130432;
	var uLocal_1915 = 0;
	var uLocal_1916 = -1082130432;
	var uLocal_1917 = 0;
	var uLocal_1918 = -1082130432;
	var uLocal_1919 = 16;
	var uLocal_1920 = 0;
	var uLocal_1921 = -1082130432;
	var uLocal_1922 = 0;
	var uLocal_1923 = -1082130432;
	var uLocal_1924 = 0;
	var uLocal_1925 = -1082130432;
	var uLocal_1926 = 0;
	var uLocal_1927 = -1082130432;
	var uLocal_1928 = 0;
	var uLocal_1929 = -1082130432;
	var uLocal_1930 = 0;
	var uLocal_1931 = -1082130432;
	var uLocal_1932 = 0;
	var uLocal_1933 = -1082130432;
	var uLocal_1934 = 0;
	var uLocal_1935 = -1082130432;
	var uLocal_1936 = 0;
	var uLocal_1937 = -1082130432;
	var uLocal_1938 = 0;
	var uLocal_1939 = -1082130432;
	var uLocal_1940 = 0;
	var uLocal_1941 = -1082130432;
	var uLocal_1942 = 0;
	var uLocal_1943 = -1082130432;
	var uLocal_1944 = 0;
	var uLocal_1945 = -1082130432;
	var uLocal_1946 = 0;
	var uLocal_1947 = -1082130432;
	var uLocal_1948 = 0;
	var uLocal_1949 = -1082130432;
	var uLocal_1950 = 0;
	var uLocal_1951 = -1082130432;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = -1082130432;
	var uLocal_1969 = -1082130432;
	var uLocal_1970 = 1;
	var uLocal_1971 = 1;
	var uLocal_1972 = 1;
	var uLocal_1973 = -1;
	var uLocal_1974 = -1;
	var uLocal_1975 = -1;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 2;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 2;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 20;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = -1;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 1065353216;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = -1;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 1065353216;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = -1;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 1065353216;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = -1;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 1065353216;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = -1;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 1065353216;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = -1;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 1065353216;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = -1;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 1065353216;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = -1;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 1065353216;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = -1;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 1065353216;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = -1;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 1065353216;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = -1;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 1065353216;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = -1;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 1065353216;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = -1;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 1065353216;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = -1;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 1065353216;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = -1;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 1065353216;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = -1;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 1065353216;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = -1;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 1065353216;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = -1;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 1065353216;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = -1;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 1065353216;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = -1;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 1065353216;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 16;
	var uLocal_3128 = 0;
	var uLocal_3129 = -1082130432;
	var uLocal_3130 = 0;
	var uLocal_3131 = -1082130432;
	var uLocal_3132 = 0;
	var uLocal_3133 = -1082130432;
	var uLocal_3134 = 0;
	var uLocal_3135 = -1082130432;
	var uLocal_3136 = 0;
	var uLocal_3137 = -1082130432;
	var uLocal_3138 = 0;
	var uLocal_3139 = -1082130432;
	var uLocal_3140 = 0;
	var uLocal_3141 = -1082130432;
	var uLocal_3142 = 0;
	var uLocal_3143 = -1082130432;
	var uLocal_3144 = 0;
	var uLocal_3145 = -1082130432;
	var uLocal_3146 = 0;
	var uLocal_3147 = -1082130432;
	var uLocal_3148 = 0;
	var uLocal_3149 = -1082130432;
	var uLocal_3150 = 0;
	var uLocal_3151 = -1082130432;
	var uLocal_3152 = 0;
	var uLocal_3153 = -1082130432;
	var uLocal_3154 = 0;
	var uLocal_3155 = -1082130432;
	var uLocal_3156 = 0;
	var uLocal_3157 = -1082130432;
	var uLocal_3158 = 0;
	var uLocal_3159 = -1082130432;
	var uLocal_3160 = 16;
	var uLocal_3161 = 0;
	var uLocal_3162 = -1082130432;
	var uLocal_3163 = 0;
	var uLocal_3164 = -1082130432;
	var uLocal_3165 = 0;
	var uLocal_3166 = -1082130432;
	var uLocal_3167 = 0;
	var uLocal_3168 = -1082130432;
	var uLocal_3169 = 0;
	var uLocal_3170 = -1082130432;
	var uLocal_3171 = 0;
	var uLocal_3172 = -1082130432;
	var uLocal_3173 = 0;
	var uLocal_3174 = -1082130432;
	var uLocal_3175 = 0;
	var uLocal_3176 = -1082130432;
	var uLocal_3177 = 0;
	var uLocal_3178 = -1082130432;
	var uLocal_3179 = 0;
	var uLocal_3180 = -1082130432;
	var uLocal_3181 = 0;
	var uLocal_3182 = -1082130432;
	var uLocal_3183 = 0;
	var uLocal_3184 = -1082130432;
	var uLocal_3185 = 0;
	var uLocal_3186 = -1082130432;
	var uLocal_3187 = 0;
	var uLocal_3188 = -1082130432;
	var uLocal_3189 = 0;
	var uLocal_3190 = -1082130432;
	var uLocal_3191 = 0;
	var uLocal_3192 = -1082130432;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = -1082130432;
	var uLocal_3210 = -1082130432;
	var uLocal_3211 = 1;
	var uLocal_3212 = 1;
	var uLocal_3213 = 1;
	var uLocal_3214 = -1;
	var uLocal_3215 = -1;
	var uLocal_3216 = -1;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 2;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 2;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 20;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = -1;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 1065353216;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = -1;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 1065353216;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = -1;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 1065353216;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = -1;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 1065353216;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = -1;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 1065353216;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = -1;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 1065353216;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = -1;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 1065353216;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = -1;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 1065353216;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = -1;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 1065353216;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = -1;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 1065353216;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = -1;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 1065353216;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = -1;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 1065353216;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = -1;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 1065353216;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = -1;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 1065353216;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = -1;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 1065353216;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = -1;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 1065353216;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = -1;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 1065353216;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = -1;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 1065353216;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = -1;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 1065353216;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = -1;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 1065353216;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 16;
	var uLocal_4369 = 0;
	var uLocal_4370 = -1082130432;
	var uLocal_4371 = 0;
	var uLocal_4372 = -1082130432;
	var uLocal_4373 = 0;
	var uLocal_4374 = -1082130432;
	var uLocal_4375 = 0;
	var uLocal_4376 = -1082130432;
	var uLocal_4377 = 0;
	var uLocal_4378 = -1082130432;
	var uLocal_4379 = 0;
	var uLocal_4380 = -1082130432;
	var uLocal_4381 = 0;
	var uLocal_4382 = -1082130432;
	var uLocal_4383 = 0;
	var uLocal_4384 = -1082130432;
	var uLocal_4385 = 0;
	var uLocal_4386 = -1082130432;
	var uLocal_4387 = 0;
	var uLocal_4388 = -1082130432;
	var uLocal_4389 = 0;
	var uLocal_4390 = -1082130432;
	var uLocal_4391 = 0;
	var uLocal_4392 = -1082130432;
	var uLocal_4393 = 0;
	var uLocal_4394 = -1082130432;
	var uLocal_4395 = 0;
	var uLocal_4396 = -1082130432;
	var uLocal_4397 = 0;
	var uLocal_4398 = -1082130432;
	var uLocal_4399 = 0;
	var uLocal_4400 = -1082130432;
	var uLocal_4401 = 16;
	var uLocal_4402 = 0;
	var uLocal_4403 = -1082130432;
	var uLocal_4404 = 0;
	var uLocal_4405 = -1082130432;
	var uLocal_4406 = 0;
	var uLocal_4407 = -1082130432;
	var uLocal_4408 = 0;
	var uLocal_4409 = -1082130432;
	var uLocal_4410 = 0;
	var uLocal_4411 = -1082130432;
	var uLocal_4412 = 0;
	var uLocal_4413 = -1082130432;
	var uLocal_4414 = 0;
	var uLocal_4415 = -1082130432;
	var uLocal_4416 = 0;
	var uLocal_4417 = -1082130432;
	var uLocal_4418 = 0;
	var uLocal_4419 = -1082130432;
	var uLocal_4420 = 0;
	var uLocal_4421 = -1082130432;
	var uLocal_4422 = 0;
	var uLocal_4423 = -1082130432;
	var uLocal_4424 = 0;
	var uLocal_4425 = -1082130432;
	var uLocal_4426 = 0;
	var uLocal_4427 = -1082130432;
	var uLocal_4428 = 0;
	var uLocal_4429 = -1082130432;
	var uLocal_4430 = 0;
	var uLocal_4431 = -1082130432;
	var uLocal_4432 = 0;
	var uLocal_4433 = -1082130432;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = -1082130432;
	var uLocal_4451 = -1082130432;
	var uLocal_4452 = 1;
	var uLocal_4453 = 1;
	var uLocal_4454 = 1;
	var uLocal_4455 = -1;
	var uLocal_4456 = -1;
	var uLocal_4457 = -1;
	struct<3> Local_4458 = { 0, 0, 0 } ;
	float fLocal_4459 = 0f;
	int iLocal_4460 = 0;
	float fLocal_4461 = 0f;
	float fLocal_4462 = 0f;
	float fLocal_4463 = 0f;
	float fLocal_4464 = 0f;
	int iLocal_4465 = 0;
	int iLocal_4466 = 0;
	int iLocal_4467 = 0;
	int iLocal_4468 = 0;
	int iLocal_4469 = 0;
	int iLocal_4470 = 0;
	float fLocal_4471 = 0f;
	float fLocal_4472 = 0f;
	float fLocal_4473 = 0f;
	float fLocal_4474 = 0f;
	float fLocal_4475 = 0f;
	float fLocal_4476 = 0f;
	float fLocal_4477 = 0f;
	float fLocal_4478 = 0f;
	float fLocal_4479 = 0f;
	int iLocal_4480 = 0;
	int iLocal_4481 = 0;
	int iLocal_4482 = 0;
	int iLocal_4483 = 0;
	int iLocal_4484 = 0;
	int iLocal_4485 = 0;
	int iLocal_4486 = 0;
	int iLocal_4487 = 0;
	int iLocal_4488 = 0;
	int iLocal_4489 = 0;
	int iLocal_4490 = 0;
	int iLocal_4491 = 0;
	int iLocal_4492 = 0;
	int iLocal_4493 = 0;
	char* sLocal_4494 = NULL;
	char* sLocal_4495 = NULL;
	float fLocal_4496 = 0f;
	int iLocal_4497 = 0;
	int iLocal_4498 = 0;
	int iLocal_4499 = 0;
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
	bLocal_31 = true;
	bLocal_38 = true;
	bLocal_60 = true;
	fLocal_81 = 120f;
	fLocal_82 = 0f;
	fLocal_84 = 1f;
	fLocal_85 = 0f;
	fLocal_86 = 1f;
	fLocal_87 = 30f;
	fLocal_89 = 1f;
	fLocal_90 = 5f;
	fLocal_91 = 1f;
	fLocal_92 = 1f;
	fLocal_93 = 100f;
	fLocal_94 = 100f;
	fLocal_95 = 0f;
	fLocal_96 = 7000f;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_99 = 0.3f;
	fLocal_100 = 0.5f;
	fLocal_101 = 50f;
	iLocal_112 = -1;
	iLocal_120 = -1;
	iLocal_121 = -1;
	iLocal_181 = 3;
	fLocal_184 = 80f;
	fLocal_185 = 140f;
	fLocal_186 = 180f;
	iLocal_192 = 1;
	iLocal_193 = 65;
	iLocal_194 = 49;
	iLocal_195 = 64;
	Local_214 = { 0f, 0f, 0f };
	Local_215 = { 0f, 0f, 0f };
	iLocal_216 = -1;
	fLocal_218 = 1f;
	iLocal_586 = -1;
	iLocal_656 = AUDIO::GET_SOUND_ID();
	iLocal_657 = AUDIO::GET_SOUND_ID();
	fLocal_671 = 0.6f;
	fLocal_672 = 1f;
	fLocal_673 = 1f;
	fLocal_674 = 1f;
	fLocal_733 = 0.05f;
	Local_4458 = { 790.8106f, -2330.1296f, 61.095f };
	fLocal_4459 = 137.22f;
	iLocal_4460 = -1;
	fLocal_4461 = 0.402f;
	fLocal_4462 = 0.54f;
	fLocal_4463 = 0.577f;
	fLocal_4464 = 0.808f;
	iLocal_4466 = 3;
	iLocal_4467 = 4;
	iLocal_4468 = 4250;
	iLocal_4469 = 3500;
	iLocal_4470 = 9250;
	fLocal_4471 = 11000f;
	fLocal_4472 = 19000f;
	fLocal_4473 = 0.575f;
	fLocal_4474 = 0.97f;
	fLocal_4475 = 0.8f;
	fLocal_4476 = 0.402f;
	fLocal_4477 = 0.454f;
	fLocal_4478 = 0.577f;
	fLocal_4479 = 0.663f;
	sLocal_4494 = "shake_cam_all@";
	sLocal_4495 = "fbi_4_binoculars";
	fLocal_4496 = 0f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_0__::func_544(1, 0, 1, 1, 0);
		__LIB_16__::func_323(PLAYER::PLAYER_PED_ID(), __LIB_17__::func_338());
		func_1075();
		func_1072();
	}
	func_1062();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_483)
		{
			if (func_1052())
			{
				func_1041();
			}
		}
		__LIB_0__::func_467();
		func_1039();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_BLITZ_PLAY", 0);
		switch (iLocal_219)
		{
			case 0:
				func_1024();
				break;
			case 16:
				func_1019();
				break;
			case 1:
				func_963();
				break;
			case 2:
				func_956();
				break;
			case 3:
				func_950();
				break;
			case 4:
				func_941();
				break;
			case 5:
				func_933();
				break;
			case 6:
				func_866();
				break;
			case 7:
				func_846();
				break;
			case 8:
				func_820();
				break;
			case 9:
				func_801();
				break;
			case 10:
				func_749();
				break;
			case 11:
				func_681();
				break;
			case 12:
				func_662();
				break;
			case 17:
				func_640();
				break;
			case 13:
				func_639();
				break;
			case 14:
				func_314();
				break;
			case 15:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x342
{
	if (__LIB_0__::func_611(&iLocal_596, 7000))
	{
		if (__LIB_0__::func_223())
		{
			func_2();
		}
	}
}

void func_2()//Position - 0x362
{
	func_6(PLAYER::PLAYER_PED_ID());
	func_3();
	MISC::CLEAR_AREA(1391.53f, -2063.67f, 52.79f, 10000f, true, false, false, false);
	__LIB_0__::func_544(1, 0, 1, 1, 0);
	func_1072();
}

void func_3()//Position - 0x39F
{
	int iVar0;
	iVar0 = 0;
	MISC::CLEAR_AREA(1376.45f, -2083.29f, 55.51f, 10000f, true, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(Local_272.f_0))
	{
		PED::DELETE_PED(&Local_272);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_278.f_0))
	{
		PED::DELETE_PED(&Local_278);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_284.f_0))
	{
		PED::DELETE_PED(&Local_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_288.f_0))
	{
		PED::DELETE_PED(&Local_288);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_292.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_292[iVar0 /*20*/]))
		{
			PED::DELETE_PED(&(Local_292[iVar0 /*20*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_293.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_293[iVar0 /*20*/]))
		{
			PED::DELETE_PED(&(Local_293[iVar0 /*20*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_294.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_294[iVar0 /*20*/]))
		{
			PED::DELETE_PED(&(Local_294[iVar0 /*20*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_295.f_0))
	{
		PED::DELETE_PED(&Local_295);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_301.f_0))
	{
		PED::DELETE_PED(&Local_301);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_311.f_0))
	{
		PED::DELETE_PED(&Local_311);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321.f_0))
	{
		PED::DELETE_PED(&Local_321);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
	{
		PED::DELETE_PED(&(iLocal_424[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
	{
		PED::DELETE_PED(&(iLocal_424[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
	{
		PED::DELETE_PED(&(iLocal_424[2]));
	}
	func_4();
	if (ENTITY::DOES_ENTITY_EXIST(Local_331.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_331);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_403.f_0 - 1))
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(Local_403[iVar0 /*10*/])))
		{
			PHYSICS::DELETE_ROPE(&(Local_403[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_4()//Position - 0x564
{
	int iVar0;
	iVar0 = 0;
	__LIB_17__::func_184(&Local_224, 0);
	__LIB_17__::func_184(&Local_233, 0);
	__LIB_17__::func_184(&Local_239, 0);
	__LIB_17__::func_184(&Local_250, 0);
	iVar0 = 0;
	while (iVar0 <= (Local_248.f_0 - 1))
	{
		__LIB_17__::func_184(&(Local_248[iVar0 /*15*/]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_249.f_0 - 1))
	{
		__LIB_17__::func_184(&(Local_249[iVar0 /*15*/]), 0);
		iVar0++;
	}
}

void func_6(int iParam0)//Position - 0x66E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_17__::func_104(iParam0);
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
		func_111(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_422(49))
				{
					iVar1 = func_96(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_7(__LIB_16__::func_509(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_422(44))
				{
					iVar1 = func_96(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_96(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_7(__LIB_16__::func_509(0), 3, 70, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 3, 71, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 3, 72, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 3, 73, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 3, 74, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 3, 75, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 4, 41, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 4, 42, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 4, 43, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 4, 44, 1, 0, 0, 0);
					func_7(__LIB_16__::func_509(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_96(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_111(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_7(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8CB
{
	__LIB_15__::func_948(iParam0, iParam1, iParam2, bParam3);
	func_81(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_950(iParam0, iParam1, iParam2, 0);
	}
}

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x176C4
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
								func_81(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_948(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_81(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_948(iParam0, 14, uVar4[iVar2], 1);
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
								func_81(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_81(iParam0, 14, iVar5, 1, 0);
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
								func_81(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_81(iParam0, 14, 17, 1, 0);
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

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0x1AC87
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
				if (func_103(iParam0, iParam1, iVar0))
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
				if (func_103(iParam0, iParam1, iVar1))
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

int func_103(int iParam0, int iParam1, int iParam2)//Position - 0x1B0E5
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
				if (!func_103(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_103(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_103(iParam0, 14, iVar4))
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
			if (!func_103(iParam0, 14, uVar8[iVar7]))
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

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1C49F
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
		iVar0 = __LIB_17__::func_104(iParam0);
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
			if (func_307(iParam0, iVar1, &iVar2, 0))
			{
				func_293(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_291(iParam0, iVar1, &iVar2))
			{
				func_293(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_288(iParam0);
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
			func_114(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_114(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_114(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1C97B
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
			func_246(iVar5, iParam1, iParam2, 1);
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
						func_246(iVar5, 10, 0, 1);
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
									func_246(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_114(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_246(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_244(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_114(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_238(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_246(iVar5, 14, uVar18[iVar1], 1);
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
							func_114(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_246(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_114(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_229(iParam0);
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
						func_114(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_114(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_228(iVar5, iVar24, iVar23, iVar25);
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
							func_114(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_114(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_114(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_114(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_114(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_114(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_114(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_238(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_228(iVar5, func_244(iParam0, 8, -1), iParam2, func_244(iParam0, 4, -1));
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
				func_161(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_228(iVar5, iParam2, iVar44, iVar45);
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
			func_238(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_228(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_114(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_114(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_228(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_228(iVar5, iVar58, iVar57, iParam2);
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
						func_114(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_228(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_114(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_138(iParam0, 9, iVar63))
						{
							func_114(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_114(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_114(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_114(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_244(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_244(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_114(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_114(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_114(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_114(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_114(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_114(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_114(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_114(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_114(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_114(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_229(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_114(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_114(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_115(iParam0, &uVar4))
		{
			func_114(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_114(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_114(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_114(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_244(iParam0, 3, -1), iVar10);
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
				func_114(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_115(int iParam0, var uParam1)//Position - 0x1E825
{
	int iVar0;
	int iVar1;
	*uParam1 = func_244(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_138(iParam0, iVar1, iVar0))
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

int func_138(int iParam0, int iParam1, int iParam2)//Position - 0x22B4E
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
				if (!func_138(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_138(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_138(iParam0, 14, iVar6))
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
			if (!func_138(iParam0, 14, uVar11[iVar10]))
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
						return func_138(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_138(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x29871
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
	func_162(iParam0, bParam3, 0, -1);
}

void func_162(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x298BE
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
		bVar3 = func_208(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_199(iParam0, iParam3);
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

int func_199(int iParam0, int iParam1)//Position - 0x38A4C
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
				iVar3 = func_244(iParam0, 11, -1);
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
				iVar5 = func_244(iParam0, 11, -1);
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

int func_208(int iParam0, bool bParam1)//Position - 0x38EAA
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_244(iParam0, 11, -1), 0);
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
						iVar3 = func_244(iParam0, 11, -1);
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
						iVar5 = func_244(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_244(iParam0, 11, -1), 0);
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
						iVar8 = func_244(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_244(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_244(iParam0, 11, -1), 0);
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
						iVar12 = func_244(iParam0, 8, -1);
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

int func_228(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x41D45
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
					iVar0 = func_228(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_228(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_229(int iParam0)//Position - 0x43080
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
		if (!func_234(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_234(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x43A4A
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_244(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4670E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_288(iParam0))
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

int func_244(int iParam0, int iParam1, int iParam2)//Position - 0x469BD
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
				if (func_138(iParam0, iParam1, iVar0))
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
				if (func_138(iParam0, iParam1, iVar1))
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

void func_246(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x46AF6
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
							func_246(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_246(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_246(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_246(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_246(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_246(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_246(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_246(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_246(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_246(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_288(int iParam0)//Position - 0x5F787
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_244(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_244(iParam0, 11, -1);
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

int func_291(int iParam0, int iParam1, int iParam2)//Position - 0x5FAF9
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_103(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x5FBC0
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
										func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_96(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_307(iParam0, iVar10, &iVar4, 1))
							{
								func_293(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_293(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_293(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_293(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_293(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_293(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_293(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_307(iParam0, iVar10, &iVar4, 0))
		{
			func_293(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_291(iParam0, iVar10, &iVar4))
		{
			func_293(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6217D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_103(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_314()//Position - 0x62564
{
	func_634();
	switch (iLocal_725)
	{
		case 0:
			func_583();
			break;
		case 1:
			PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, true);
			PATHFIND::SET_PED_PATHS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
			STREAMING::LOAD_ALL_OBJECTS_NOW();
			func_537(2, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 790.8106f, -2330.1296f, 61.2638f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.0764f);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, 0, "michael", 0, 1);
			iLocal_530 = 4;
			STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
			STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
			STREAMING::REQUEST_MODEL(Local_224.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
			STREAMING::REQUEST_MODEL(Local_239.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
			STREAMING::REQUEST_MODEL(Local_331.f_2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
			STREAMING::REQUEST_ANIM_DICT("missfbi4");
			STREAMING::REQUEST_ANIM_DICT("misssagrab");
			TASK::REQUEST_WAYPOINT_RECORDING("heat1");
			TASK::REQUEST_WAYPOINT_RECORDING("heat2");
			TASK::REQUEST_WAYPOINT_RECORDING("heat3");
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
			STREAMING::LOAD_SCENE(790.8106f, -2330.1296f, 61.2638f);
			func_532(1, 1, 0f, 0f, 0, 1);
			iLocal_219 = 2;
			break;
		case 2:
			func_529();
			break;
		case 3:
			func_527();
			func_526(PLAYER::PLAYER_PED_ID(), 0);
			func_526(PLAYER::PLAYER_PED_ID(), 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, true, true);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB")) < 5)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, false);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), true);
			break;
		case 4:
			Global_96893 = 4;
			func_490();
			break;
		case 5:
			func_407();
			break;
		case 6:
			func_315();
			break;
	}
}

void func_315()//Position - 0x62819
{
	if (iLocal_729)
	{
		__LIB_0__::func_427(-2557.475f, 1912.8906f, 167.8713f, 46.22f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_295.f_1);
	STREAMING::REQUEST_MODEL(Local_250.f_1);
	STREAMING::REQUEST_MODEL(Local_261.f_1);
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	if (iLocal_729)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((!STREAMING::HAS_MODEL_LOADED(Local_295.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_250.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_261.f_1)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(-2557.475f, 1912.8906f, 167.8713f, 1000f, true, false, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_537(0, 1);
	func_399(PLAYER::PLAYER_PED_ID());
	func_293(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2557.475f, 1912.8906f, 167.8713f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 46.2899f);
	Local_250.f_0 = VEHICLE::CREATE_VEHICLE(Local_250.f_1, Local_250.f_3, Local_250.f_6, true, true, false);
	VEHICLE::REMOVE_VEHICLE_WINDOW(Local_250.f_0, 0);
	VEHICLE::REMOVE_VEHICLE_WINDOW(Local_250.f_0, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_250.f_0, 5f);
	VEHICLE::SET_VEHICLE_COLOURS(Local_250.f_0, 0, 0);
	__LIB_16__::func_927(&Local_295, 29, Local_295.f_3, Local_295.f_9, 1);
	__LIB_17__::func_606(Local_295.f_0, 0);
	func_394(&Local_295, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_295.f_0, true);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 3, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 4, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 8, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 10, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 11, 0, 0, 0);
	__LIB_16__::func_41(&Local_261, 0, -2551.931f, 1912.0355f, 168.0432f, 244.1441f, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE("FBI_4_MCS_2_CONCAT", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		if (!PED::IS_PED_INJURED(Local_295.f_0))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("devin", Local_295.f_0, 0);
		}
		SYSTEM::WAIT(0);
	}
	if (!iLocal_729)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	if (!PED::IS_PED_INJURED(Local_295.f_0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_295.f_0, "devin", 0, Local_295.f_1, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_250.f_0, false))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_250.f_0, "devins_car", 0, Local_250.f_1, 0);
	}
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_562 = 1;
	CAM::DO_SCREEN_FADE_IN(800);
	iLocal_219 = 12;
}

void func_394(int iParam0, bool bParam1)//Position - 0x6C285
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_731, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_731);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_732);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_731, iLocal_732);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_732, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_732, iLocal_731);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_731, joaat("COP"));
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_731);
			PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
			PED::SET_PED_ACCURACY(*iParam0, 60);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
	}
}

void func_399(int iParam0)//Position - 0x6C4FF
{
	func_401(iParam0);
	func_400(iParam0);
}

void func_400(int iParam0)//Position - 0x6C513
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_104(iParam0);
		if (iVar0 == 0)
		{
			if (Global_113386.f_2363.f_539.f_2395[iVar0] == -99 || !func_293(iParam0, Global_113386.f_2363.f_539.f_2399[iVar0], Global_113386.f_2363.f_539.f_2395[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_293(iParam0, 14, 38, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (iVar0 == 1)
		{
			if (Global_113386.f_2363.f_539.f_2395[iVar0] == -99 || !func_293(iParam0, Global_113386.f_2363.f_539.f_2399[iVar0], Global_113386.f_2363.f_539.f_2395[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_293(iParam0, 14, 30, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (iVar0 == 2)
		{
			if (Global_113386.f_2363.f_539.f_2395[iVar0] == -99 || !func_293(iParam0, Global_113386.f_2363.f_539.f_2399[iVar0], Global_113386.f_2363.f_539.f_2395[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_293(iParam0, 14, 53, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
}

void func_401(int iParam0)//Position - 0x6C67A
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_104(iParam0);
		if (iVar0 == 0)
		{
			if (Global_113386.f_2363.f_539.f_2403[iVar0] == -99 || !func_293(iParam0, 12, Global_113386.f_2363.f_539.f_2403[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_293(iParam0, 12, 21, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (iVar0 == 1)
		{
			if (Global_113386.f_2363.f_539.f_2403[iVar0] == -99 || !func_293(iParam0, 12, Global_113386.f_2363.f_539.f_2403[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_293(iParam0, 12, 13, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (iVar0 == 2)
		{
			if (Global_113386.f_2363.f_539.f_2403[iVar0] == -99 || !func_293(iParam0, 12, Global_113386.f_2363.f_539.f_2403[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_293(iParam0, 12, 19, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
}

void func_407()//Position - 0x6C96B
{
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, false, true);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 10000f, true, false, false, false);
	if (iLocal_729)
	{
		__LIB_0__::func_427(897.9976f, -2351.9265f, 29.4873f, 203.22f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_233.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_233.f_1, true);
	STREAMING::REQUEST_MODEL(Local_248[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_357.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
	if (iLocal_729)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((((((!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) || !STREAMING::HAS_MODEL_LOADED(Local_224.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_233.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_248[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_357.f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_SOUND_FROM_COORD(iLocal_656, "SIRENS_DISTANT_01_MASTER", 844.7f, -2213.3f, 57.9f, 0, false, 0, false);
	__LIB_0__::func_544(1, 1, 0, 1, 0);
	func_489();
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, true);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	MISC::SET_FAKE_WANTED_LEVEL(1);
	Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 901.9453f, -2383.368f, 29.2789f, 341.1729f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 2);
	ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, true, true, true, true, true, false, false, false);
	__LIB_0__::func_679(Local_224.f_0, 0);
	Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 896.0925f, -2364.3994f, 29.4761f, 84.1277f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_239.f_0, 0f, 6.5f, 0.5f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_239.f_0, -2f, -0.5f, 0.5f, 1000f, 1000f, true);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_239.f_0, false);
	__LIB_17__::func_186(&Local_239);
	__LIB_0__::func_679(Local_239.f_0, 1);
	Local_248[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[0 /*15*/].f_1, 891.0364f, -2354.0908f, 29.3747f, 64.0679f, true, true, false);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_248[0 /*15*/], 0f, 6.5f, 0.5f, 500f, 500f, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_248[0 /*15*/], 5f);
	Local_248[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[1 /*15*/].f_1, 895.6796f, -2344.6904f, 29.4389f, 101.3151f, true, true, false);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_248[1 /*15*/], -0.5f, 6.5f, 0.5f, 500f, 500f, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_248[1 /*15*/], 5f);
	Local_248[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[2 /*15*/].f_1, 902.2714f, -2343.174f, 29.5052f, 150.328f, true, true, false);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_248[2 /*15*/], 0.5f, 6.5f, 0.5f, 500f, 500f, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_248[2 /*15*/], 5f);
	Local_248[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[3 /*15*/].f_1, 917.7601f, -2331.9087f, 29.3799f, 176.3431f, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_248[3 /*15*/], 5f);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	if (__LIB_17__::func_338() != 1)
	{
		func_537(1, 0);
	}
	func_399(PLAYER::PLAYER_PED_ID());
	func_293(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_485(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 897.9976f, -2351.9265f, 29.4873f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.2388f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	if (__LIB_0__::func_61(25, 0))
	{
		__LIB_16__::func_29(&Local_706, 25);
	}
	else
	{
		bLocal_503 = true;
		Local_706 = { 1121.0305f, -1249.9076f, 19.5717f };
	}
	Local_284.f_14 = 1;
	Local_288.f_14 = 1;
	if (!iLocal_729)
	{
		STREAMING::LOAD_SCENE(890.4393f, -2346.476f, 29.3413f);
	}
	Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, 904.981f, -2367.179f, 30.15f, 175.2936f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_233.f_0, 890.495f, -2365.6f, 30.5039f, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(Local_233.f_0, 0f, 91.8056f, 173.211f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_233.f_0, -2f, -0.5f, 0.5f, 1000f, 1000f, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 2, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 3, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_233.f_0, false, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_233.f_0, false);
	__LIB_17__::func_186(&Local_233);
	Local_357.f_0 = OBJECT::CREATE_OBJECT(Local_357.f_2, Local_357.f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_357.f_0, Local_357.f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_357.f_0, true);
	iLocal_532 = MISC::GET_GAME_TIMER();
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_611(&iLocal_532, 2000))
	{
		SYSTEM::WAIT(0);
	}
	__LIB_17__::func_713(&Local_404, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_GETAWAY_RESTART");
	func_408(4, "burn the truck", 1, 0, 0, 1);
	iLocal_219 = 8;
	func_532(0, 1, 0f, 0f, 0, 1);
}

void func_408(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6D176
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
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
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
		func_409(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_409(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6D2EF
{
	func_410(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_410(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x6D30B
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_17__::func_338();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_507(&(uParam0->f_2884), 0);
		__LIB_17__::func_439(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_616(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_17__::func_338())
		{
			__LIB_33__::func_591(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		uParam0->f_13[iVar1] = Global_60328[iVar1];
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
		func_412(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_412(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6E1B6
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_17__::func_104(iParam2);
	}
	if (__LIB_17__::func_499(iParam2, &iVar0, iParam3, iParam5))
	{
		__LIB_16__::func_33(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_16__::func_33(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

void func_485(int iParam0)//Position - 0x76CA1
{
	int iVar0;
	iVar0 = __LIB_16__::func_303(__LIB_17__::func_104(iParam0));
	if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true);
	}
}

void func_489()//Position - 0x76D8C
{
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(12, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(6, false);
	MISC::ENABLE_DISPATCH_SERVICE(7, false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	MISC::ENABLE_DISPATCH_SERVICE(11, false);
	MISC::ENABLE_DISPATCH_SERVICE(12, false);
	MISC::ENABLE_DISPATCH_SERVICE(13, false);
}

void func_490()//Position - 0x76DEF
{
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, false, true);
	MISC::CLEAR_AREA(Local_239.f_3, 1000f, true, false, false, false);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 1000f, true, false, false, false);
	if (iLocal_729)
	{
		__LIB_0__::func_427(873.9058f, -2353.096f, 29.3312f, 13.2f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
	STREAMING::REQUEST_MODEL(Local_292[0 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_292[8 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_233.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_233.f_1, true);
	STREAMING::REQUEST_MODEL(Local_248[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_249[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_357.f_2);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_248[0 /*15*/].f_1, 15);
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_249[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_249[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[2 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[3 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[4 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[5 /*15*/].f_13, "lkfbi4");
	AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
	if (iLocal_729)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) || !STREAMING::HAS_MODEL_LOADED(Local_292[0 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_292[8 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_224.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_233.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_248[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_249[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_357.f_2)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_248[0 /*15*/].f_1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_249[0 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_249[1 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[0 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[1 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[2 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[3 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[4 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[5 /*15*/].f_13, "lkfbi4")) || !AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 10000f, true, false, false, false);
	__LIB_0__::func_544(1, 1, 0, 1, 0);
	AUDIO::DISTANT_COP_CAR_SIRENS(true);
	Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 901.9453f, -2383.368f, 29.2789f, 341.1729f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 2);
	ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, true, true, true, true, true, false, false, false);
	__LIB_0__::func_679(Local_224.f_0, 0);
	Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 896.0925f, -2364.3994f, 29.4761f, 84.1277f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_239.f_0, 0f, 6.5f, 0.5f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_239.f_0, false);
	__LIB_17__::func_186(&Local_239);
	__LIB_0__::func_679(Local_239.f_0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_537(1, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	func_399(PLAYER::PLAYER_PED_ID());
	func_293(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 873.9058f, -2353.096f, 29.3312f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 13.92f);
	func_526(PLAYER::PLAYER_PED_ID(), 1);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), 873.256f, -2352.7104f, 29.3307f, -1, true, 0f, true, true, iLocal_699, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	func_499(&(iLocal_424[2]), 2, 804.7164f, -2330.2073f, 61.0967f, 264.4371f, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(iLocal_424[2], true, -1, 0);
	func_399(iLocal_424[2]);
	func_293(iLocal_424[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_498(iLocal_424[2]);
	__LIB_17__::func_606(iLocal_424[2], 0);
	func_394(&(iLocal_424[2]), 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, iLocal_424[2], "TREVOR", 0, 1);
	iLocal_680 = __LIB_0__::func_666(iLocal_424[2], 0, 145);
	HUD::SET_BLIP_DISPLAY(iLocal_680, 2);
	HUD::SET_BLIP_SCALE(iLocal_680, 0.5f);
	__LIB_17__::func_476(iLocal_424[2], 1500);
	func_499(&(iLocal_424[0]), 0, Local_661, 262f, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(iLocal_424[0], true, -1, 0);
	func_399(iLocal_424[0]);
	func_293(iLocal_424[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, iLocal_424[0], "michael", 0, 1);
	iLocal_679 = __LIB_0__::func_666(iLocal_424[0], 0, 145);
	HUD::SET_BLIP_DISPLAY(iLocal_679, 2);
	HUD::SET_BLIP_SCALE(iLocal_679, 0.5f);
	__LIB_17__::func_476(iLocal_424[0], 1500);
	func_491(iLocal_424[0]);
	__LIB_17__::func_606(iLocal_424[0], 0);
	func_394(&(iLocal_424[0]), 1);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_424[0], 881.53f, -2334.04f, 33.91f, -1, false, 0f, false, false, iLocal_697, false);
	iLocal_536 = 6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_239.f_0, false);
		ENTITY::SET_ENTITY_PROOFS(Local_239.f_0, false, false, false, false, false, false, false, false);
	}
	switch (Global_96893)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PED::SET_CREATE_RANDOM_COPS(false);
			MISC::SET_FAKE_WANTED_LEVEL(4);
			iLocal_547 = 4;
			iLocal_536 = 6;
			iLocal_561 = 1;
			iLocal_579 = MISC::GET_GAME_TIMER();
			iLocal_579 = (iLocal_579 - 6000);
			break;
	}
	if (!iLocal_729)
	{
		STREAMING::LOAD_SCENE(873.3599f, -2352.4114f, 29.3306f);
	}
	Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, 904.981f, -2367.179f, 30.15f, 175.2936f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_233.f_0, 890.495f, -2365.6f, 30.5039f, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(Local_233.f_0, 0f, 91.8056f, 173.211f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_233.f_0, -2f, -0.5f, 0.5f, 1000f, 1000f, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 2, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 3, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_233.f_0, false, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_233.f_0, false);
	__LIB_17__::func_186(&Local_233);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 2, false);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 3, false);
	MISC::CLEAR_AREA(904.981f, -2367.179f, 30.15f, 100f, true, false, false, false);
	Local_357.f_0 = OBJECT::CREATE_OBJECT(Local_357.f_2, Local_357.f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_357.f_0, Local_357.f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_357.f_0, true);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !(!PED::IS_PED_INJURED(iLocal_424[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_424[0])))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_SOUND_FROM_COORD(iLocal_656, "Distant_Sirens_Skip_Start", 913.6f, -2301.6f, 34f, "FBI_04_HEAT_SOUNDS", false, 0, false);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_COVER_RESTART");
	iLocal_553 = 22;
	Local_284.f_14 = 1;
	iLocal_557 = 22;
	Local_288.f_14 = 1;
	func_532(0, 1, -88f, 0f, 0, 1);
	func_408(3, "Start of Shootout", 0, 0, 0, 1);
	iLocal_219 = 6;
}

void func_491(int iParam0)//Position - 0x77806
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!func_493(iParam0, joaat("GROUP_SNIPER")))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_SNIPERRIFLE"), 200, false, false);
			}
			else if (func_492(iParam0, joaat("GROUP_SNIPER"), &iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 200)
				{
					WEAPON::SET_PED_AMMO(iParam0, iVar0, 200, false);
				}
				if (iVar0 == joaat("WEAPON_HEAVYSNIPER"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar0, joaat("COMPONENT_AT_AR_SUPP")))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar0, joaat("COMPONENT_AT_AR_SUPP"));
					}
				}
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_HEAVYSNIPER"), 200, false, false);
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_AR_SUPP")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_AR_SUPP"));
				}
			}
			else
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_AR_SUPP")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_AR_SUPP"));
				}
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER")) < 200)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_HEAVYSNIPER"), 200, false);
				}
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GRENADE"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_GRENADE"), 15, false, false);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_GRENADE")) < 15)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_GRENADE"), 15, false);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATMG"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), 500, true, true);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_COMBATMG_CLIP_01"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_AT_SCOPE_MEDIUM"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_AT_AR_AFGRIP"));
			}
			else
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_COMBATMG")) < 500)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_COMBATMG"), 500, false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_COMBATMG_CLIP_01")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_COMBATMG_CLIP_01"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_AT_SCOPE_MEDIUM")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_AT_SCOPE_MEDIUM"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_AT_AR_AFGRIP")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_AT_AR_AFGRIP"));
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_COMBATMG"), true);
			}
		}
	}
}

int func_492(int iParam0, int iParam1, var uParam2)//Position - 0x77A3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar2 = __LIB_0__::func_292(iVar0);
			if (iVar2 != 0)
			{
				iVar1 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, __LIB_0__::func_292(iVar0));
				if (iVar1 != 0 && iVar1 != joaat("WEAPON_UNARMED"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						*uParam2 = iVar1;
						return 1;
					}
				}
			}
			iVar0++;
		}
		iVar4 = FILES::GET_NUM_DLC_WEAPONS();
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
			{
				iVar1 = Var5.f_1;
				if (iVar1 != 0 && iVar1 != joaat("WEAPON_UNARMED"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						*uParam2 = iVar1;
						return 1;
					}
				}
			}
			iVar3++;
		}
	}
	return 0;
}

int func_493(int iParam0, int iParam1)//Position - 0x77AFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar2 = __LIB_0__::func_292(iVar0);
			if (iVar2 != 0)
			{
				iVar1 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
				if (iVar1 != 0 && iVar1 != joaat("WEAPON_UNARMED"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
		iVar4 = FILES::GET_NUM_DLC_WEAPONS();
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
			{
				iVar1 = Var5.f_1;
				if (iVar1 != 0 && iVar1 != joaat("WEAPON_UNARMED"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						return 1;
					}
				}
			}
			iVar3++;
		}
	}
	return 0;
}

void func_498(int iParam0)//Position - 0x77D1F
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!func_493(iParam0, joaat("GROUP_SNIPER")))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_SNIPERRIFLE"), 200, false, false);
			}
			else if (func_492(iParam0, joaat("GROUP_SNIPER"), &iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 200)
				{
					WEAPON::SET_PED_AMMO(iParam0, iVar0, 200, false);
				}
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_RPG"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_RPG"), 16, true, true);
			}
			else
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_RPG")) < 16)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_RPG"), 16, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_RPG"), true);
			}
		}
	}
}

int func_499(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x77DCF
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_16__::func_509(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_16__::func_892(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_6(*iParam0);
			__LIB_17__::func_453(*iParam0, 1, 0);
			__LIB_17__::func_446(*iParam0);
			__LIB_17__::func_445(*iParam0);
			func_501(*iParam0, bParam6);
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

int func_501(int iParam0, bool bParam1)//Position - 0x77EE7
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_17__::func_104(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_0__::func_472(iVar0, 0);
		func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_505(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(iVar0, 0);
			func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_505(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_103(iParam0, 3, 169))
					{
						func_293(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_103(iParam0, 12, 6))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 11))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 12, 10))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 12, 50))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 14, 59))
			{
				func_293(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_103(iParam0, 8, 22))
			{
				func_293(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_103(iParam0, 12, 14))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_103(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 4))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 12, 3))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 14, 82))
			{
				func_293(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_103(iParam0, 8, 76))
			{
				func_293(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_103(iParam0, 12, 1))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_103(iParam0, 12, 12))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 12, 15))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_103(iParam0, 3, 71))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_103(iParam0, 12, 7))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 12, 6))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_103(iParam0, 14, 88))
			{
				func_293(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_103(iParam0, 8, 17))
			{
				func_293(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_103(iParam0, 12, 11))
			{
				func_293(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_505(int iParam0, int iParam1)//Position - 0x7867A
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_104(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_96(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_111(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_33__::func_591(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_38__::func_195();
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

void func_526(int iParam0, bool bParam1)//Position - 0x79DE6
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_PUMPSHOTGUN"), 200, false, false);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN")) < 200)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_PUMPSHOTGUN"), 200, false);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_HEAVYSNIPER"), 200, false, false);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER")) < 200)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_HEAVYSNIPER"), 200, false);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GRENADE"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_GRENADE"), 15, false, false);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_GRENADE")) < 15)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_GRENADE"), 15, false);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_CARBINERIFLE"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_CARBINERIFLE"), 800, bParam1, bParam1);
			}
			else
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_CARBINERIFLE")) < 800)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("WEAPON_CARBINERIFLE"), 800, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_CARBINERIFLE"), bParam1);
			}
		}
	}
}

void func_527()//Position - 0x79F13
{
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, false, true);
	MISC::CLEAR_AREA(Local_239.f_3, 1000f, true, false, false, false);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 1000f, true, false, false, false);
	if (iLocal_729)
	{
		__LIB_0__::func_427(890.4393f, -2346.476f, 29.3413f, 184.3769f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
	STREAMING::REQUEST_MODEL(Local_272.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_272.f_1, true);
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_233.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_233.f_1, true);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATMG")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_COMBATMG"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_CARBINERIFLE")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
	STREAMING::REQUEST_MODEL(Local_357.f_2);
	STREAMING::REQUEST_MODEL(Local_391.f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("misssagrab");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	if (iLocal_729)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) || !STREAMING::HAS_MODEL_LOADED(Local_272.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_224.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_233.f_1)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATMG")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_COMBATMG"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_CARBINERIFLE")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_CARBINERIFLE"))) || !STREAMING::HAS_MODEL_LOADED(Local_357.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_391.f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) || !STREAMING::HAS_ANIM_DICT_LOADED("missheat")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1)) || !AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_0__::func_544(1, 1, 0, 1, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_537(1, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	func_399(PLAYER::PLAYER_PED_ID());
	func_293(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 890.4393f, -2346.476f, 29.3413f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 184.3769f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	func_526(PLAYER::PLAYER_PED_ID(), 0);
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, true, true);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB")) < 5)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, false);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), true);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 901.9453f, -2383.368f, 29.2789f, 341.1729f, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 2);
	ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, true, true, true, true, true, false, false, false);
	__LIB_0__::func_679(Local_224.f_0, 0);
	Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 896.0925f, -2364.3994f, 29.4761f, 84.1277f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_239.f_0, 5f);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_239.f_0, 0f, 6.5f, 0.5f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_239.f_0, false);
	__LIB_17__::func_186(&Local_239);
	__LIB_0__::func_679(Local_239.f_0, 1);
	func_499(&(iLocal_424[0]), 0, 894.0912f, -2349.3481f, 29.4448f, 163.8641f, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(iLocal_424[0], true, -1, 0);
	func_399(iLocal_424[0]);
	func_293(iLocal_424[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_491(iLocal_424[0]);
	__LIB_17__::func_606(iLocal_424[0], 0);
	func_394(&(iLocal_424[0]), 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, iLocal_424[0], "michael", 0, 1);
	iLocal_679 = __LIB_0__::func_666(iLocal_424[0], 0, 145);
	HUD::SET_BLIP_DISPLAY(iLocal_679, 2);
	HUD::SET_BLIP_SCALE(iLocal_679, 0.5f);
	TASK::TASK_AIM_GUN_AT_COORD(iLocal_424[0], 891.74f, -2358.18f, 30.71f, -1, true, false);
	PED::FORCE_PED_MOTION_STATE(iLocal_424[0], joaat("MotionState_Aiming"), false, 0, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_424[0], false, false);
	func_499(&(iLocal_424[2]), 2, 804.7164f, -2330.2073f, 61.0967f, 264.4371f, 0, 0, 0);
	func_399(iLocal_424[2]);
	func_293(iLocal_424[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_498(iLocal_424[2]);
	__LIB_17__::func_606(iLocal_424[2], 0);
	func_394(&(iLocal_424[2]), 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, iLocal_424[2], "TREVOR", 0, 1);
	iLocal_680 = __LIB_0__::func_666(iLocal_424[2], 0, 145);
	HUD::SET_BLIP_DISPLAY(iLocal_679, 2);
	HUD::SET_BLIP_SCALE(iLocal_679, 0.5f);
	Local_331.f_0 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_331.f_2, 889.84f, -2361.97f, 30.58f, true, true, false);
	ENTITY::SET_ENTITY_HEALTH(Local_331.f_0, Local_331.f_20, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_331.f_0, true);
	ENTITY::SET_ENTITY_HEADING(Local_331.f_0, 90f);
	iLocal_498 = 1;
	if (!PED::IS_PED_INJURED(Local_272.f_0))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_272.f_0, 2, 0);
	}
	if (!PED::IS_PED_INJURED(Local_278.f_0))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_278.f_0, 2, 0);
	}
	if (!iLocal_729)
	{
		STREAMING::LOAD_SCENE(890.4393f, -2346.476f, 29.3413f);
	}
	Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, 880f, -2357.4f, 30.15f, 175.2936f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
	ENTITY::SET_ENTITY_PROOFS(Local_233.f_0, true, true, true, true, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_233.f_0, 890.495f, -2365.6f, 30.5039f, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(Local_233.f_0, 0f, 91.8056f, 173.211f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_233.f_0, -2f, -0.5f, 0.5f, 1000f, 1000f, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_233.f_0, false, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 2);
	AUDIO::SET_HORN_ENABLED(Local_233.f_0, false);
	__LIB_17__::func_186(&Local_233);
	Local_272.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_272.f_1, -1, true, true);
	PED::SET_PED_DIES_WHEN_INJURED(Local_272.f_0, true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_272.f_0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272.f_0, true);
	ENTITY::SET_ENTITY_HEALTH(Local_272.f_0, 2, 0);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_272);
	Local_278.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_278.f_1, 0, true, true);
	PED::SET_PED_DIES_WHEN_INJURED(Local_278.f_0, true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_278.f_0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278.f_0, true);
	ENTITY::SET_ENTITY_HEALTH(Local_278.f_0, 2, 0);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_278);
	Local_357.f_0 = OBJECT::CREATE_OBJECT(Local_357.f_2, Local_357.f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_357.f_0, Local_357.f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_357.f_0, true);
	while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_312(iLocal_424[0])) || !__LIB_16__::func_312(iLocal_424[2]))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_EXPLODE_RESTART_ST");
	iLocal_536 = 1;
	iLocal_537 = 2;
	iLocal_570 = 22;
	iLocal_595 = MISC::GET_GAME_TIMER();
	func_408(2, "Detonate C4", 0, 0, 0, 1);
	func_532(0, 1, 0f, 0f, 0, 1);
	iLocal_219 = 5;
}

void func_529()//Position - 0x7A9B5
{
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, false, true);
	MISC::CLEAR_AREA(Local_239.f_3, 1000f, true, false, false, false);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 10000f, true, false, false, false);
	if (iLocal_729)
	{
		__LIB_0__::func_427(989.9289f, -2373.2302f, 29.5308f, 80.8604f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
	STREAMING::REQUEST_MODEL(Local_272.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_272.f_1, true);
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_233.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_233.f_1, true);
	STREAMING::REQUEST_MODEL(Local_357.f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATMG")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_COMBATMG"), 31, 0);
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("misssagrab");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
	AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
	if (iLocal_729)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) || !STREAMING::HAS_MODEL_LOADED(Local_272.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_224.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_233.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_357.f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATMG")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_COMBATMG"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) || !STREAMING::HAS_ANIM_DICT_LOADED("missheat")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1)) || !AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS"))
	{
		SYSTEM::WAIT(0);
	}
	Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 1024.1974f, -2376.5244f, 29.5306f, 85.759f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_239.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 12, "lkcountry", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 6250f);
	VEHICLE::SET_PLAYBACK_SPEED(Local_239.f_0, 0f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_239.f_0, true);
	__LIB_0__::func_679(Local_239.f_0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_537(1, 0);
	func_399(PLAYER::PLAYER_PED_ID());
	func_293(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 890.4393f, -2346.476f, 29.3413f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 184.3769f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0, -1);
	AUDIO::SET_VEH_RADIO_STATION(Local_239.f_0, "OFF");
	Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 906.2f, -2375.501f, 30.532f, 250.22f, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, true, true, true, true, true, false, false, false);
	__LIB_0__::func_679(Local_224.f_0, 0);
	func_531(&(iLocal_424[0]), 0, Local_224.f_0, -1, 0, 0, 0);
	func_399(iLocal_424[0]);
	func_293(iLocal_424[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, iLocal_424[0], "michael", 0, 1);
	if (!iLocal_729)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	iLocal_704 = STREAMING::STREAMVOL_CREATE_SPHERE(904.981f, -2367.179f, 30.15f, 7f, 1, 127);
	while (!STREAMING::STREAMVOL_HAS_LOADED(iLocal_704))
	{
		SYSTEM::WAIT(0);
	}
	Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, 904.981f, -2367.179f, 30.15f, 175.2936f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_233.f_0, 5f);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_233.f_0, false, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_233.f_0, "FBI_4_STOCKADE_GROUP", 0f);
	Local_272.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_272.f_1, -1, true, true);
	PED::SET_PED_DIES_WHEN_INJURED(Local_272.f_0, true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_272.f_0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272.f_0, true);
	Local_278.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_278.f_1, 0, true, true);
	PED::SET_PED_DIES_WHEN_INJURED(Local_278.f_0, true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_278.f_0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278.f_0, true);
	SYSTEM::WAIT(0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
	{
		VEHICLE::SET_PLAYBACK_SPEED(Local_239.f_0, 1f);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("fbi4_TRUCK_RAM_RESTART_ST");
	STREAMING::STREAMVOL_DELETE(iLocal_704);
	iLocal_552 = MISC::GET_GAME_TIMER();
	iLocal_705 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
	CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
	func_532(1, 1, 0f, 0f, 0, 1);
	__LIB_0__::func_229("cntry_god3", 7500, 1);
	func_408(1, "Ram money truck", 0, 0, 0, 1);
	iLocal_219 = 4;
}

int func_531(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7B16D
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_16__::func_509(iParam1);
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
				__LIB_16__::func_892(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_6(*iParam0);
				__LIB_17__::func_453(*iParam0, 1, 0);
				__LIB_17__::func_446(*iParam0);
				__LIB_17__::func_445(*iParam0);
				func_501(*iParam0, bParam6);
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

void func_532(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x7B21F
{
	__LIB_0__::func_532(0, 1, iParam5, 0, 0, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_638();
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(false);
		if (bParam1)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam3, 1f);
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (bParam4)
	{
		func_533();
	}
	else
	{
		func_489();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_533()//Position - 0x7B2C0
{
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(12, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(6, true);
	MISC::ENABLE_DISPATCH_SERVICE(7, true);
	MISC::ENABLE_DISPATCH_SERVICE(8, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(11, true);
	MISC::ENABLE_DISPATCH_SERVICE(12, true);
	MISC::ENABLE_DISPATCH_SERVICE(13, true);
}

int func_537(int iParam0, bool bParam1)//Position - 0x7B3F2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_16__::func_509(iVar0);
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
		func_531(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_499(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_42__::func_560(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

void func_583()//Position - 0x80C67
{
	if (iLocal_729)
	{
		__LIB_0__::func_427(1376.8572f, -2079.4595f, 50.9983f, 16.5575f, 0, 0);
	}
	__LIB_0__::func_544(1, 0, 0, 1, 0);
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_252.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_252.f_1, true);
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	STREAMING::REQUEST_MODEL(Local_335.f_2);
	iLocal_703 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("binoculars");
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(25, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkheat");
	if (iLocal_729)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_224.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_252.f_1)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) || !STREAMING::HAS_MODEL_LOADED(Local_335.f_2)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_703)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("missheat")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(25, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkheat"))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (__LIB_17__::func_418(&iLocal_695))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_695, 1400.6285f, -2053.28f, 50.9983f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_695, 78.1507f);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1379.4003f, -2074.7783f, 50.9988f, 50f, 50f, 50f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1400.6285f, -2053.28f, 50.9983f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 78.1507f);
			}
		}
	}
	PATHFIND::SET_ROADS_IN_AREA(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, false, true);
	MISC::CLEAR_AREA(1379.3738f, -2074.824f, 50.9985f, 1000f, true, false, false, false);
	Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 1381.4722f, -2072.2454f, 50.9981f, 38.334f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
	__LIB_0__::func_679(Local_224.f_0, 0);
	Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 1374.858f, -2077.3743f, 50.9981f, 37.5148f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	__LIB_0__::func_679(Local_239.f_0, 1);
	__LIB_16__::func_41(&Local_252, 2, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(101, 1450f, "lkheat"), 40.3225f, 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_252.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_252.f_0, 3);
	func_537(0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_399(PLAYER::PLAYER_PED_ID());
	func_293(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1376.8572f, -2079.4595f, 50.9983f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 16.5575f);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	func_531(&(iLocal_424[2]), 2, Local_252.f_0, -1, 0, 0, 0);
	func_399(iLocal_424[2]);
	func_293(iLocal_424[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_17__::func_606(iLocal_424[2], 0);
	func_394(&(iLocal_424[2]), 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, iLocal_424[2], "trevor", 0, 1);
	func_627("lkheat", 101, 1, 1);
	func_626();
	fLocal_93 = 200f;
	iLocal_50 = 1;
	iLocal_56 = 1;
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_252.f_0, 101, "lkheat", true);
	func_588(Local_252.f_0, 1f);
	func_584(Local_252.f_0, 2000f);
	func_588(Local_252.f_0, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_252.f_0, true);
	func_531(&(iLocal_424[1]), 1, Local_239.f_0, -1, 0, 0, 0);
	func_399(iLocal_424[1]);
	func_293(iLocal_424[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_17__::func_606(iLocal_424[1], 0);
	func_394(&(iLocal_424[1]), 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_424[1], true, 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, iLocal_424[1], "franklin", 0, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 102, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 800f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_239.f_0, true);
	if (!iLocal_729)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	SYSTEM::WAIT(0);
	while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_312(iLocal_424[1])) || !__LIB_16__::func_312(iLocal_424[2]))
	{
		SYSTEM::WAIT(0);
	}
	func_532(1, 1, 0f, 0f, 0, 1);
	iLocal_532 = MISC::GET_GAME_TIMER();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_SWITCH_BINOC_ST");
	func_408(0, "Enter ambulance at FIB depot", 0, 0, 0, 1);
	iLocal_219 = 1;
}

void func_584(int iParam0, float fParam1)//Position - 0x8159C
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			__LIB_17__::func_479();
			__LIB_17__::func_478(&iParam0, iLocal_112, fParam1, 1, 0, 1, 0, 0);
			fLocal_83 = fParam1;
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (iLocal_106[iVar0] > 2 && iLocal_106[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_75[iVar0]);
								fVar1 = (fVar1 * fLocal_76[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < __LIB_17__::func_477(iLocal_105[iVar0]))
									{
										__LIB_17__::func_478(&(iLocal_161[iVar0]), iLocal_105[iVar0], fVar1, 1, 0, 1, bLocal_57, iLocal_56);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_106[iVar0] = 99;
						iLocal_110 = (iLocal_110 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (iLocal_103[iVar0] > 2 && iLocal_103[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_66[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < __LIB_17__::func_477(iLocal_102[iVar0]))
									{
										__LIB_17__::func_478(&(iLocal_158[iVar0]), iLocal_102[iVar0], fVar1, 1, 0, 1, 1, iLocal_56);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_103[iVar0] = 99;
						iLocal_109 = (iLocal_109 - 1);
					}
				}
				iVar0++;
			}
			iLocal_113 = 0;
			iLocal_115 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_108[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_160[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_160[iVar0], true, false);
							iLocal_111++;
							iLocal_108[iVar0] = 2;
						}
					}
					else
					{
						iLocal_108[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_114 = 0;
			iLocal_119 = 0;
			iLocal_122 = 0;
			fLocal_98 = fParam1;
			fLocal_97 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_130 = { Var3 - Vector(100f, 100f, 100f) };
			Local_131 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_130, Local_131, false, false);
		}
	}
}

void func_588(int iParam0, float fParam1)//Position - 0x81A76
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_59 = false;
	if (!bLocal_41)
	{
		if (bLocal_40)
		{
			__LIB_15__::func_905();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_41 = true;
		}
	}
	else if (!bLocal_40)
	{
		__LIB_15__::func_910();
		bLocal_41 = false;
	}
	if (bLocal_40)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_34)
	{
		if (iLocal_29)
		{
			fLocal_86 = 0f;
		}
		else
		{
			fLocal_86 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_925(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_39 = 1;
					}
					else
					{
						iLocal_39 = 0;
					}
				}
				fLocal_83 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_84) * fLocal_86));
				if (bLocal_38)
				{
					__LIB_17__::func_489(iParam0, fLocal_83);
					__LIB_17__::func_488(iParam0, fLocal_93);
					if (fLocal_88 > 1000f)
					{
						if (iLocal_125 == 0)
						{
							__LIB_17__::func_487(iParam0, fLocal_93);
						}
						fVar0 = ((fLocal_83 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_125) * 2000f));
						__LIB_41__::func_351(iParam0, fVar0, fLocal_87);
						iLocal_125++;
						if (iLocal_125 > 2)
						{
							fLocal_88 = 0f;
						}
					}
					else
					{
						iLocal_125 = 0;
						fLocal_88 = (fLocal_88 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_83 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_46)
		{
			if (!iLocal_28)
			{
				func_615(iParam0, ((fParam1 * fLocal_84) * fLocal_86), 0);
				if (!iLocal_49)
				{
				}
				iLocal_49 = 0;
			}
			if (bLocal_31)
			{
				__LIB_41__::func_350(iParam0);
			}
			if (!iLocal_28)
			{
				func_595(iParam0, ((fParam1 * fLocal_84) * fLocal_86), 0);
			}
		}
		if (iLocal_36)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_163 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_129 = { ENTITY::GET_ENTITY_COORDS(iLocal_163, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_163, &fLocal_67, &fLocal_68, &fLocal_69, &fLocal_70);
				}
			}
			iLocal_36 = 0;
		}
		if (iLocal_35)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
			{
				__LIB_15__::func_906(iLocal_164);
				iLocal_164 = iLocal_163;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_164, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_164, Local_129, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_164, fLocal_67, fLocal_68, fLocal_69, fLocal_70);
			}
			fLocal_82 = fLocal_85;
			iLocal_28 = 1;
			iLocal_35 = 0;
		}
		if (iLocal_28)
		{
			while (!func_589(&iParam0, fLocal_82))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_29 = 1;
		}
		if (iLocal_42)
		{
			iLocal_42 = 0;
		}
	}
}

int func_589(int iParam0, float fParam1)//Position - 0x81D11
{
	if (!iLocal_43)
	{
		iLocal_28 = 1;
		func_590();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_112 == -1)
			{
				while (!__LIB_17__::func_478(iParam0, iLocal_112, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_33)
				{
					iLocal_29 = 1;
					fLocal_86 = 0f;
					iLocal_113 = 0;
					iLocal_115 = 0;
					iLocal_114 = 0;
					iLocal_109 = 0;
					iLocal_110 = 0;
					iLocal_111 = 0;
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
				}
			}
		}
		iLocal_43 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_84) * fLocal_86));
				__LIB_17__::func_478(iParam0, iLocal_112, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_83 = fParam1;
		iLocal_119 = 0;
		iLocal_122 = 0;
		fLocal_98 = 0f;
		fLocal_97 = 0f;
		func_595(*iParam0, ((1f * fLocal_84) * fLocal_86), 1);
		func_615(*iParam0, ((1f * fLocal_84) * fLocal_86), 1);
		__LIB_41__::func_350(*iParam0);
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			iLocal_29 = 0;
			iLocal_28 = 0;
			iLocal_43 = 0;
			return 1;
		}
	}
	return 0;
}

void func_590()//Position - 0x81E43
{
	func_593();
	__LIB_17__::func_480();
	__LIB_40__::func_812();
}

void func_593()//Position - 0x81FC9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_158[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_158[iVar0]));
			}
		}
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_102[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
			}
		}
		iLocal_103[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_152[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
		}
		iVar0++;
	}
	iLocal_113 = 0;
	iLocal_109 = 0;
}

void func_595(int iParam0, float fParam1, bool bParam2)//Position - 0x820DF
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
		iVar0 = iLocal_115;
		while (iVar0 < 22)
		{
			if (iLocal_106[iVar0] != 99)
			{
				if (iLocal_106[iVar0] == 0)
				{
					if (iLocal_105[iVar0] > 0)
					{
						if (!iLocal_28)
						{
							if (fLocal_83 > (fLocal_75[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_894(iLocal_154[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_107[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_107[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_107[iVar0]), 1);
								iLocal_106[iVar0]++;
								iLocal_117++;
							}
						}
						else
						{
							fVar6 = (fLocal_83 - fLocal_75[iVar0]);
							fVar6 = (fVar6 * fLocal_76[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < __LIB_17__::func_477(iLocal_105[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_154[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_107[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_107[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_107[iVar0]), 1);
									iLocal_106[iVar0]++;
									iLocal_117++;
								}
								else
								{
									iLocal_106[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_106[iVar0] = 99;
					}
				}
				else if (iLocal_106[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
					if (BitTest(iLocal_107[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
					}
					else if (!bLocal_55 && ((!BitTest(iLocal_107[iVar0], 2) && bVar10) || (BitTest(iLocal_107[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_154[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_154[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
							{
								if (fLocal_83 >= (fLocal_75[iVar0] - (fLocal_96 * fParam1)))
								{
									if ((iLocal_42 || bParam2) || (!bLocal_59 && !__LIB_17__::func_483(Local_128[iVar0 /*3*/], Var5, 5f, fLocal_94)))
									{
										if (bLocal_38)
										{
											__LIB_33__::func_555(Local_128[iVar0 /*3*/], Var5, fLocal_87);
										}
										iLocal_161[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_154[iVar0], Local_128[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_154[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_161[iVar0], 0);
										}
										if (uLocal_51 && !BitTest(iLocal_107[iVar0], 0))
										{
											__LIB_17__::func_482(iLocal_161[iVar0]);
										}
										if (BitTest(iLocal_107[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_161[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161[iVar0], Local_128[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_154[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161[iVar0], 5f);
										}
										if (!BitTest(iLocal_107[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_161[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_161[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
										iLocal_117 = (iLocal_117 - 1);
										iLocal_106[iVar0]++;
										bLocal_59 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161[iVar0], Local_128[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_154[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_161[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
							iLocal_117 = (iLocal_117 - 1);
							iLocal_106[iVar0]++;
						}
					}
				}
				else if (iLocal_106[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
					if (!BitTest(iLocal_107[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_107[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
							iVar13 = 2;
						}
						else if (!bLocal_55 && ((!BitTest(iLocal_107[iVar0], 2) && bVar10) || (BitTest(iLocal_107[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false))
						{
							if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_161[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true), Var5) < 10000f || bParam2) || iLocal_42)
									{
										__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_107[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (fLocal_83 >= fLocal_75[iVar0])
						{
							if (15 > iLocal_110)
							{
								fVar6 = (fLocal_83 - fLocal_75[iVar0]);
								fVar6 = (fVar6 * fLocal_76[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_105[iVar0], fVar6, &cLocal_142) };
										if (((!__LIB_17__::func_483(Var3, Var5, 5f, fLocal_94) && __LIB_17__::func_483(Var4, Var5, 5f, fLocal_94)) && !iLocal_42) && !bParam2)
										{
											if (!BitTest(iLocal_107[iVar0], 1))
											{
												__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
											}
											iLocal_110++;
											iLocal_106[iVar0]++;
										}
										else if (((!bLocal_59 || BitTest(iLocal_107[iVar0], 1)) || iLocal_42) || bParam2)
										{
											if (__LIB_17__::func_478(&(iLocal_161[iVar0]), iLocal_105[iVar0], fVar6, 1, 0, 0, bLocal_57, iLocal_56))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
												{
													if (BitTest(iLocal_107[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_161[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_161[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_161[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_107[iVar0], 1))
												{
													__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
												}
												iLocal_110++;
												iLocal_106[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_107[iVar0], 1))
										{
											__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
										}
										iLocal_110++;
										iLocal_106[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_107[iVar0], 1))
								{
									__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
								}
								iLocal_110++;
								iLocal_106[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_107[iVar0], 1))
						{
							__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
						}
						iLocal_110++;
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_32 && !iLocal_29) && !bLocal_48) && (((!bLocal_57 && !iLocal_56) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161[iVar0])) || __LIB_40__::func_813(iLocal_161[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (iLocal_50)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_161[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_923(iLocal_161[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_939(iVar2, iLocal_161[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												__LIB_33__::func_553(iLocal_161[iVar0]);
												iLocal_106[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
						}
						else
						{
							iLocal_106[iVar0]++;
						}
					}
					else
					{
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
						{
							iLocal_106[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
							{
								if (fLocal_83 > (fLocal_75[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
						}
					}
					else
					{
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 5)
				{
					if (!iLocal_161[iVar0] == iLocal_165)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_161[iVar0]);
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
						if (!bLocal_40 && !bLocal_53)
						{
							if (iLocal_105[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
							}
						}
						if (!bLocal_30)
						{
							if (!bLocal_58)
							{
								__LIB_15__::func_906(iLocal_161[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
						}
					}
					iLocal_110 = (iLocal_110 - 1);
					iLocal_106[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_115 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		__LIB_40__::func_815();
	}
}

void func_615(int iParam0, float fParam1, int iParam2)//Position - 0x8375C
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
			fLocal_83 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_113;
		while (iVar0 < 40 && !bVar17)
		{
			if (iLocal_103[iVar0] != 99)
			{
				if (iLocal_103[iVar0] == 0)
				{
					if (iLocal_102[iVar0] > 0 && iLocal_152[iVar0] != 0)
					{
						if (!iLocal_28)
						{
							if (fLocal_83 < (fLocal_66[iVar0] + 20000f))
							{
								if (fLocal_83 >= (fLocal_66[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_894(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_104[iVar0]), 1);
									iLocal_118++;
									iLocal_103[iVar0]++;
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
								__LIB_17__::func_486(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_83 - fLocal_66[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < __LIB_17__::func_477(iLocal_102[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_104[iVar0]), 1);
									iLocal_118++;
									iLocal_103[iVar0]++;
								}
								else
								{
									__LIB_17__::func_486(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						__LIB_17__::func_486(iVar0, 1090519040);
					}
				}
				else if (iLocal_103[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
					bVar11 = false;
					if (BitTest(iLocal_104[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_55 && ((!BitTest(iLocal_104[iVar0], 2) && bVar13) || (BitTest(iLocal_104[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
						bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_152[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_152[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142)) && bVar11)
						{
							if (fLocal_83 >= (fLocal_66[iVar0] - (fLocal_96 * fParam1)))
							{
								if ((iLocal_42 || iParam2) || (!bLocal_59 && !__LIB_17__::func_483(Local_126[iVar0 /*3*/], Var8, 5f, fLocal_94)))
								{
									if (bLocal_38)
									{
										__LIB_33__::func_555(Local_126[iVar0 /*3*/], Var8, fLocal_87);
									}
									iLocal_158[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_152[iVar0], Local_126[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_152[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_158[iVar0], 0);
									}
									if (uLocal_51 && !BitTest(iLocal_104[iVar0], 0))
									{
										__LIB_17__::func_482(iLocal_158[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_158[iVar0], Local_126[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_158[iVar0], fLocal_62[iVar0], fLocal_63[iVar0], fLocal_64[iVar0], fLocal_65[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_152[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[iVar0], 5f);
									}
									if (BitTest(iLocal_104[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_158[iVar0], true);
									}
									if (!BitTest(iLocal_104[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_158[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_158[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
									iLocal_118 = (iLocal_118 - 1);
									iLocal_103[iVar0]++;
									bLocal_59 = true;
								}
								else if (fLocal_83 > fLocal_66[iVar0])
								{
									iLocal_118 = (iLocal_118 - 1);
									__LIB_17__::func_486(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_103[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_124 || iLocal_124 == 0)) || iLocal_42) || iParam2)
					{
						if (!BitTest(iLocal_104[iVar0], 1))
						{
							if (BitTest(iLocal_104[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
								iVar15 = 2;
							}
							else if (!bLocal_55 && ((!BitTest(iLocal_104[iVar0], 2) && bVar13) || (BitTest(iLocal_104[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
							{
								if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_158[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true), Var8) < 10000f || iParam2) || iLocal_42)
										{
											__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_104[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
							if (fLocal_83 >= fLocal_66[iVar0])
							{
								if (14 > iLocal_109)
								{
									fVar9 = (fLocal_83 - fLocal_66[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_102[iVar0], fVar9, &cLocal_142) };
											if (!__LIB_17__::func_483(Var6, Var8, 5f, fLocal_94) && __LIB_17__::func_483(Var7, Var8, 5f, fLocal_94))
											{
												if (!BitTest(iLocal_104[iVar0], 1))
												{
													__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
												}
												__LIB_17__::func_486(iVar0, 1090519040);
											}
											else if (((!bLocal_59 || BitTest(iLocal_104[iVar0], 1)) || iLocal_42) || iParam2)
											{
												if (__LIB_17__::func_478(&(iLocal_158[iVar0]), iLocal_102[iVar0], fVar9, 1, 0, 0, 1, iLocal_56))
												{
													if (!BitTest(iLocal_104[iVar0], 1))
													{
														__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_158[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
													iLocal_109++;
													iLocal_103[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_104[iVar0], 1))
											{
												__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
											}
											__LIB_17__::func_486(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142))
									{
										if (!BitTest(iLocal_104[iVar0], 1))
										{
											__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
										}
										__LIB_17__::func_486(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_104[iVar0], 1))
									{
										__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
									}
									__LIB_17__::func_486(iVar0, 1090519040);
								}
							}
							else if (iLocal_39 && !bLocal_47)
							{
								if (!BitTest(iLocal_104[iVar0], 1))
								{
									__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
								}
								__LIB_17__::func_486(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_104[iVar0], 1))
							{
								__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
							}
							__LIB_17__::func_486(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_124 = iVar0;
					}
				}
				else if (iLocal_103[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_37)
									{
										if ((!bLocal_32 && !iLocal_29) && __LIB_40__::func_813(iLocal_158[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_123 || iLocal_123 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_924(iLocal_158[iVar0], iVar5) || __LIB_15__::func_939(iVar5, iLocal_158[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_123 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_52 && !BitTest(iLocal_104[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_123 || iLocal_123 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_123 = iVar0;
										}
									}
									if (bVar18)
									{
										__LIB_33__::func_553(iLocal_158[iVar0]);
										iLocal_103[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
						}
						else
						{
							iLocal_103[iVar0]++;
						}
					}
					else
					{
						iLocal_103[iVar0]++;
					}
				}
				else if (iLocal_103[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
						{
							iLocal_103[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142))
							{
								if (fLocal_83 > (fLocal_66[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
						}
					}
					else
					{
						iLocal_103[iVar0]++;
					}
				}
				else if (iLocal_103[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_158[iVar0]);
					}
					iLocal_109 = (iLocal_109 - 1);
					__LIB_17__::func_486(iVar0, fVar10);
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
			iLocal_113 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_123 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_124 = 0;
		}
	}
	else
	{
		func_616();
	}
}

void func_616()//Position - 0x8428E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_158[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
				}
			}
			__LIB_17__::func_481(iLocal_158[iVar0]);
			__LIB_15__::func_906(iLocal_158[iVar0]);
		}
		iLocal_103[iVar0] = 0;
		iLocal_104[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_102[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_152[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
		}
		iVar0++;
	}
	iLocal_113 = 0;
	iLocal_109 = 0;
}

void func_626()//Position - 0x849BF
{
	Local_128[0 /*3*/] = { 1422.3533f, -1877.0969f, 70.8741f };
	fLocal_71[0] = -0.0341f;
	fLocal_72[0] = -0.0104f;
	fLocal_73[0] = 0.9968f;
	fLocal_74[0] = 0.0712f;
	iLocal_105[0] = 1;
	fLocal_75[0] = 0f;
	fLocal_76[0] = 1f;
	iLocal_154[0] = joaat("intruder");
	Local_128[1 /*3*/] = { 1271.8022f, -2046.953f, 43.9714f };
	fLocal_71[1] = -0.0056f;
	fLocal_72[1] = 0.0029f;
	fLocal_73[1] = -0.5599f;
	fLocal_74[1] = 0.8285f;
	iLocal_105[1] = 2;
	fLocal_75[1] = 9000f;
	fLocal_76[1] = 1f;
	iLocal_154[1] = joaat("intruder");
	Local_128[2 /*3*/] = { 1121.799f, -2084.063f, 39.4448f };
	fLocal_71[2] = -0.0369f;
	fLocal_72[2] = 0.0405f;
	fLocal_73[2] = 0.7168f;
	fLocal_74[2] = -0.6952f;
	iLocal_105[2] = 3;
	fLocal_75[2] = 2000f;
	fLocal_76[2] = 1f;
	iLocal_154[2] = joaat("intruder");
	Local_128[4 /*3*/] = { 1198.348f, -1975.2615f, 41.4057f };
	fLocal_71[4] = -0.0144f;
	fLocal_72[4] = 0.0367f;
	fLocal_73[4] = 0.9809f;
	fLocal_74[4] = -0.1905f;
	iLocal_105[4] = 5;
	fLocal_75[4] = 6500f;
	fLocal_76[4] = 1f;
	iLocal_154[4] = joaat("utillitruck3");
	Local_128[5 /*3*/] = { 1068.9875f, -2081.0024f, 33.3438f };
	fLocal_71[5] = -0.0391f;
	fLocal_72[5] = 0.0363f;
	fLocal_73[5] = 0.7185f;
	fLocal_74[5] = -0.6935f;
	iLocal_105[5] = 6;
	fLocal_75[5] = 5500f;
	fLocal_76[5] = 1f;
	iLocal_154[5] = joaat("utillitruck3");
	Local_128[6 /*3*/] = { 963.4304f, -2086.3254f, 30.2687f };
	fLocal_71[6] = 0.005f;
	fLocal_72[6] = -0.0043f;
	fLocal_73[6] = -0.7028f;
	fLocal_74[6] = 0.7114f;
	iLocal_105[6] = 7;
	fLocal_75[6] = 7500f;
	fLocal_76[6] = 1f;
	iLocal_154[6] = joaat("speedo");
	Local_128[8 /*3*/] = { 907.752f, -2082.9995f, 30.0697f };
	fLocal_71[8] = 0.0014f;
	fLocal_72[8] = -0.0038f;
	fLocal_73[8] = 0.7314f;
	fLocal_74[8] = -0.682f;
	iLocal_105[8] = 9;
	fLocal_75[8] = 10000f;
	fLocal_76[8] = 1f;
	iLocal_154[8] = joaat("speedo");
	Local_128[9 /*3*/] = { 932.7582f, -2037.153f, 29.8118f };
	fLocal_71[9] = -0.0265f;
	fLocal_72[9] = -0.007f;
	fLocal_73[9] = 0.9995f;
	fLocal_74[9] = 0.0158f;
	iLocal_105[9] = 10;
	fLocal_75[9] = 14500f;
	fLocal_76[9] = 1f;
	iLocal_154[9] = joaat("intruder");
	Local_128[11 /*3*/] = { 1102.1646f, -2071.463f, 37.002f };
	fLocal_71[11] = -0.0721f;
	fLocal_72[11] = -0.0486f;
	fLocal_73[11] = 0.6862f;
	fLocal_74[11] = 0.7222f;
	iLocal_105[11] = 12;
	fLocal_75[11] = 15700f;
	fLocal_76[11] = 1f;
	iLocal_154[11] = joaat("intruder");
	Local_128[12 /*3*/] = { 929.1259f, -2132.2727f, 29.7939f };
	fLocal_71[12] = -0.004f;
	fLocal_72[12] = -0.0066f;
	fLocal_73[12] = -0.0359f;
	fLocal_74[12] = 0.9993f;
	iLocal_105[12] = 13;
	fLocal_75[12] = 16500f;
	fLocal_76[12] = 1f;
	iLocal_154[12] = joaat("speedo");
	Local_128[13 /*3*/] = { 927.9391f, -2152.3672f, 30.0681f };
	fLocal_71[13] = 0f;
	fLocal_72[13] = -0.0014f;
	fLocal_73[13] = -0.0385f;
	fLocal_74[13] = 0.9993f;
	iLocal_105[13] = 14;
	fLocal_75[13] = 20000f;
	fLocal_76[13] = 1f;
	iLocal_154[13] = joaat("utillitruck3");
	Local_128[14 /*3*/] = { 867.0321f, -2104.5317f, 29.8221f };
	fLocal_71[14] = -0.0044f;
	fLocal_72[14] = -0.0205f;
	fLocal_73[14] = -0.0787f;
	fLocal_74[14] = 0.9967f;
	iLocal_105[14] = 15;
	fLocal_75[14] = 18000f;
	fLocal_76[14] = 1f;
	iLocal_154[14] = joaat("speedo");
	Local_126[17 /*3*/] = { 792.7391f, -2071.5518f, 28.9547f };
	fLocal_62[17] = -0.004f;
	fLocal_63[17] = -0.0208f;
	fLocal_64[17] = -0.5235f;
	fLocal_65[17] = 0.8518f;
	iLocal_102[17] = 18;
	fLocal_66[17] = 27148f;
	iLocal_152[17] = joaat("feltzer2");
	Local_126[18 /*3*/] = { 789.3976f, -2078.59f, 28.954f };
	fLocal_62[18] = 0.0042f;
	fLocal_63[18] = -0.0002f;
	fLocal_64[18] = -0.0429f;
	fLocal_65[18] = 0.9991f;
	iLocal_102[18] = 19;
	fLocal_66[18] = 27214f;
	iLocal_152[18] = joaat("fq2");
	Local_126[19 /*3*/] = { 760.3094f, -2127.5635f, 28.816f };
	fLocal_62[19] = -0.0005f;
	fLocal_63[19] = -0.0036f;
	fLocal_64[19] = 0.9988f;
	fLocal_65[19] = 0.0494f;
	iLocal_102[19] = 20;
	fLocal_66[19] = 30513f;
	iLocal_152[19] = joaat("serrano");
	Local_126[20 /*3*/] = { 753.7613f, -2140.9443f, 28.8163f };
	fLocal_62[20] = -0.0021f;
	fLocal_63[20] = -0.0121f;
	fLocal_64[20] = 0.9987f;
	fLocal_65[20] = 0.0494f;
	iLocal_102[20] = 21;
	fLocal_66[20] = 30579f;
	iLocal_152[20] = joaat("fq2");
	Local_126[21 /*3*/] = { 780.1787f, -2120.8403f, 28.8168f };
	fLocal_62[21] = -0.0044f;
	fLocal_63[21] = 0f;
	fLocal_64[21] = -0.0484f;
	fLocal_65[21] = 0.9988f;
	iLocal_102[21] = 22;
	fLocal_66[21] = 30843f;
	iLocal_152[21] = joaat("serrano");
	Local_126[22 /*3*/] = { 750.2296f, -2242.9326f, 28.8457f };
	fLocal_62[22] = -0.0002f;
	fLocal_63[22] = -0.0035f;
	fLocal_64[22] = 0.9991f;
	fLocal_65[22] = 0.0431f;
	iLocal_102[22] = 23;
	fLocal_66[22] = 35727f;
	iLocal_152[22] = joaat("radi");
	Local_126[23 /*3*/] = { 781.4967f, -2233.732f, 28.8944f };
	fLocal_62[23] = 0.0052f;
	fLocal_63[23] = -0.0057f;
	fLocal_64[23] = 0.6125f;
	fLocal_65[23] = 0.7904f;
	iLocal_102[23] = 24;
	fLocal_66[23] = 36255f;
	iLocal_152[23] = joaat("bison");
	Local_126[24 /*3*/] = { 772.0815f, -2276.501f, 28.6292f };
	fLocal_62[24] = 0.0161f;
	fLocal_63[24] = -0.0006f;
	fLocal_64[24] = -0.0421f;
	fLocal_65[24] = 0.999f;
	iLocal_102[24] = 25;
	fLocal_66[24] = 36915f;
	iLocal_152[24] = joaat("fq2");
	Local_126[25 /*3*/] = { 763.6131f, -2310.3257f, 26.7922f };
	fLocal_62[25] = 0.0355f;
	fLocal_63[25] = -0.0023f;
	fLocal_64[25] = -0.0452f;
	fLocal_65[25] = 0.9983f;
	iLocal_102[25] = 26;
	fLocal_66[25] = 38235f;
	iLocal_152[25] = joaat("bison");
	Local_126[26 /*3*/] = { 766.6949f, -2338.007f, 24.7797f };
	fLocal_62[26] = 0.0396f;
	fLocal_63[26] = -0.0014f;
	fLocal_64[26] = -0.0413f;
	fLocal_65[26] = 0.9984f;
	iLocal_102[26] = 27;
	fLocal_66[26] = 39225f;
	iLocal_152[26] = joaat("bison");
}

void func_627(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x852A3
{
	struct<3> Var0;
	StringCopy(&cLocal_142, sParam0, 64);
	bLocal_38 = true;
	iLocal_43 = 0;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = iParam1;
	iLocal_113 = 0;
	iLocal_114 = 0;
	iLocal_115 = 0;
	iLocal_119 = 0;
	iLocal_122 = 0;
	iLocal_120 = -1;
	iLocal_121 = -1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_83 = 0f;
	iLocal_44 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_130.f_0 = (Var0.f_0 - 100f);
		Local_130.f_1 = (Var0.f_1 - 100f);
		Local_130.f_2 = (Var0.f_2 - 100f);
		Local_131.f_0 = (Var0.f_0 + 100f);
		Local_131.f_1 = (Var0.f_1 + 100f);
		Local_131.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_130, Local_131, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_151);
	__LIB_15__::func_905();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_628();
}

void func_628()//Position - 0x853C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iLocal_158[iVar0] = 0;
		Local_126[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_62[iVar0] = 0f;
		fLocal_63[iVar0] = 0f;
		fLocal_64[iVar0] = 0f;
		fLocal_65[iVar0] = 0f;
		iLocal_102[iVar0] = 0;
		fLocal_66[iVar0] = 0f;
		iLocal_103[iVar0] = 0;
		iLocal_152[iVar0] = 0;
		iLocal_104[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iLocal_159[iVar0] = 0;
		iVar0++;
	}
	iLocal_109 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_160[iVar0] = 0;
		Local_127[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_77[iVar0] = 0f;
		fLocal_78[iVar0] = 0f;
		fLocal_79[iVar0] = 0f;
		fLocal_80[iVar0] = 0f;
		iLocal_108[iVar0] = 0;
		iLocal_153[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_162[iVar0] = 0;
		iVar0++;
	}
	iLocal_111 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_161[iVar0] = 0;
		Local_128[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_71[iVar0] = 0f;
		fLocal_72[iVar0] = 0f;
		fLocal_73[iVar0] = 0f;
		fLocal_74[iVar0] = 0f;
		iLocal_105[iVar0] = 0;
		fLocal_75[iVar0] = 0f;
		iLocal_106[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iLocal_107[iVar0] = 0;
		iVar0++;
	}
	iLocal_110 = 0;
	iLocal_113 = 0;
	iLocal_116 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
}

void func_634()//Position - 0x856C1
{
	int iVar0;
	iVar0 = 0;
	iLocal_488 = 0;
	iLocal_489 = 0;
	iLocal_483 = 0;
	iLocal_484 = 0;
	bLocal_485 = false;
	bLocal_486 = false;
	iLocal_487 = 0;
	iLocal_488 = 0;
	iLocal_489 = 0;
	bLocal_490 = false;
	iLocal_491 = 0;
	iLocal_492 = 0;
	iLocal_493 = 0;
	iLocal_494 = 0;
	bLocal_495 = false;
	iLocal_496 = 0;
	iLocal_497 = 0;
	iLocal_498 = 0;
	iLocal_499 = 0;
	bLocal_500 = false;
	bLocal_501 = false;
	iLocal_502 = 0;
	bLocal_503 = false;
	iLocal_504 = 0;
	iLocal_505 = 0;
	iLocal_506 = 0;
	iLocal_507 = 0;
	iLocal_508 = 0;
	bLocal_509 = false;
	bLocal_510 = false;
	bLocal_511 = false;
	bLocal_512 = false;
	iLocal_513 = 0;
	iLocal_514 = 0;
	bLocal_515 = false;
	iLocal_516 = 0;
	iLocal_517 = 0;
	iLocal_518 = 0;
	iLocal_519 = 0;
	bLocal_520 = false;
	iLocal_521 = 0;
	bLocal_523 = false;
	bLocal_524 = false;
	iLocal_525 = 0;
	iLocal_526 = 0;
	iLocal_527 = 0;
	iLocal_528 = 0;
	iLocal_529 = 0;
	iLocal_530 = 0;
	iLocal_531 = 0;
	iLocal_533 = 0;
	iLocal_534 = 0;
	iLocal_535 = 0;
	iLocal_536 = 0;
	iLocal_537 = 0;
	iLocal_541 = 0;
	iLocal_542 = 0;
	iLocal_543 = 0;
	iLocal_544 = 0;
	iLocal_545 = 0;
	iLocal_547 = 0;
	iLocal_554 = 0;
	iLocal_555 = 0;
	iLocal_553 = 0;
	iLocal_557 = 0;
	iLocal_558 = 0;
	iLocal_559 = 0;
	iLocal_560 = 0;
	iLocal_561 = 0;
	iLocal_562 = 0;
	iLocal_563 = 0;
	iLocal_568 = 0;
	iLocal_569 = 0;
	iLocal_570 = 0;
	iLocal_571 = 0;
	iLocal_573 = 0;
	iLocal_574 = 0;
	iLocal_576 = 0;
	iLocal_577 = 0;
	iLocal_578 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	iLocal_582 = 0;
	iLocal_583 = 0;
	iLocal_584 = 0;
	iLocal_587 = 0;
	iLocal_588 = 0;
	iLocal_589 = 0;
	iLocal_593 = 0;
	iLocal_594 = 0;
	iLocal_551 = 0;
	iLocal_595 = 0;
	iLocal_596 = 0;
	iLocal_597 = 0;
	iLocal_598 = 0;
	iLocal_599 = 0;
	iLocal_600 = 0;
	iLocal_601 = 0;
	iLocal_602 = 0;
	iLocal_603 = 0;
	iLocal_574 = 0;
	iLocal_605 = 0;
	iLocal_606 = 0;
	iLocal_607 = 0;
	iLocal_608 = 0;
	iLocal_609 = 0;
	iLocal_610 = 0;
	iLocal_566 = 0;
	iLocal_611 = 0;
	iLocal_612 = 0;
	iLocal_613 = 0;
	iLocal_615 = 0;
	iLocal_616 = 0;
	iLocal_617 = 0;
	iLocal_619 = 0;
	iLocal_620 = 0;
	iLocal_621 = 0;
	iLocal_622 = 0;
	iLocal_623 = 0;
	iLocal_624 = 0;
	iLocal_625 = 0;
	iLocal_626 = 0;
	iLocal_627 = 0;
	iLocal_628 = 0;
	iLocal_629 = 0;
	iLocal_630 = 0;
	iLocal_631 = 0;
	iLocal_632 = 0;
	iLocal_633 = 0;
	iLocal_634 = 0;
	iLocal_635 = 0;
	iLocal_636 = 0;
	iLocal_637 = 0;
	iLocal_638 = 0;
	iLocal_639 = 0;
	iLocal_640 = 0;
	iLocal_641 = 0;
	iLocal_642 = 0;
	iLocal_643 = 0;
	iLocal_644 = 0;
	iLocal_645 = 0;
	iLocal_646 = 0;
	iLocal_647 = 0;
	iLocal_648 = 0;
	iLocal_649 = 0;
	iLocal_651 = 0;
	iLocal_652 = 0;
	iLocal_653 = 0;
	iLocal_654 = 0;
	iLocal_655 = 0;
	fLocal_672 = 1f;
	fLocal_673 = 1f;
	fLocal_674 = 1f;
	__LIB_16__::func_877(&iLocal_424, 0, 0);
	__LIB_16__::func_877(&iLocal_424, 1, 0);
	__LIB_16__::func_877(&iLocal_424, 2, 0);
	iLocal_705 = 1;
	iLocal_734 = 0;
	Local_661 = { 881.0168f, -2333.9124f, 33.9075f };
	Local_301.f_1 = __LIB_15__::func_955(30);
	Local_301.f_3 = { 1392.2704f, -2071.4844f, 51.0172f };
	Local_301.f_10 = 200;
	Local_311.f_1 = __LIB_15__::func_955(23);
	Local_311.f_3 = { 1393.0402f, -2069.2317f, 51.0114f };
	Local_311.f_10 = 200;
	Local_321.f_1 = __LIB_15__::func_955(67);
	Local_321.f_3 = { 1390.1227f, -2070.5527f, 51.0074f };
	Local_321.f_15 = joaat("WEAPON_UNARMED");
	Local_321.f_10 = 200;
	Local_252.f_1 = __LIB_15__::func_221(2, 0);
	Local_224.f_1 = joaat("trash");
	Local_224.f_3 = { 959.5624f, -2071.308f, 29.6226f };
	Local_224.f_6 = 87.4847f;
	Local_239.f_1 = joaat("towtruck");
	Local_239.f_3 = { 1022.3509f, -2376.3162f, 29.5306f };
	Local_239.f_6 = 85.1557f;
	Local_272.f_1 = joaat("S_M_M_Armoured_01");
	Local_278.f_1 = joaat("S_M_M_Armoured_01");
	Local_284.f_3 = { 855.28f, -2374.2f, 43.26f };
	Local_284.f_9 = 7.2f;
	Local_284.f_1 = joaat("S_M_M_Armoured_01");
	Local_284.f_10 = 200;
	StringCopy(&(Local_284.f_16), "army guy", 16);
	Local_288.f_3 = { 855.28f, -2374.2f, 44.26f };
	Local_288.f_9 = 7.2f;
	Local_288.f_1 = joaat("S_M_M_Armoured_01");
	Local_288.f_10 = 200;
	StringCopy(&(Local_288.f_16), "army guy 2", 16);
	Local_233.f_1 = joaat("stockade");
	Local_233.f_3 = { 736.8857f, -2730.5625f, 6.3323f };
	Local_233.f_6 = 0.3915f;
	Local_233.f_9 = 1000;
	Local_261.f_1 = __LIB_15__::func_221(0, 0);
	Local_261.f_3 = { -823.5428f, 181.3025f, 70.6662f };
	Local_261.f_6 = 142.815f;
	Local_260[0 /*15*/].f_3 = { 736.4277f, -2347.0225f, 24.0021f };
	Local_260[0 /*15*/].f_1 = joaat("stanier");
	Local_260[0 /*15*/].f_13 = 201;
	Local_260[1 /*15*/].f_3 = { 730.5193f, -2405.836f, 20.1767f };
	Local_260[1 /*15*/].f_1 = joaat("stanier");
	Local_260[1 /*15*/].f_13 = 202;
	Local_260[2 /*15*/].f_3 = { 639.3552f, -2504.7156f, 17.436f };
	Local_260[2 /*15*/].f_1 = joaat("stanier");
	Local_260[2 /*15*/].f_13 = 203;
	Local_260[3 /*15*/].f_3 = { 682.7643f, -2493.155f, 19.71f };
	Local_260[3 /*15*/].f_1 = joaat("stanier");
	Local_260[3 /*15*/].f_13 = 204;
	Local_260[4 /*15*/].f_3 = { 736.4277f, -2347.0225f, 24.0021f };
	Local_260[4 /*15*/].f_1 = joaat("stanier");
	Local_260[4 /*15*/].f_13 = 201;
	Local_260[5 /*15*/].f_3 = { 730.5193f, -2405.836f, 20.1767f };
	Local_260[5 /*15*/].f_1 = joaat("stanier");
	Local_260[5 /*15*/].f_13 = 201;
	Local_260[6 /*15*/].f_3 = { 639.3552f, -2504.7156f, 17.436f };
	Local_260[6 /*15*/].f_1 = joaat("stanier");
	Local_260[6 /*15*/].f_13 = 203;
	Local_260[7 /*15*/].f_3 = { 682.7643f, -2493.155f, 19.71f };
	Local_260[7 /*15*/].f_1 = joaat("stanier");
	Local_260[7 /*15*/].f_13 = 204;
	Local_658 = { 906.2f, -2375.501f, 30.532f };
	Local_331.f_2 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_STICKYBOMB"));
	Local_331.f_3 = { 872f, -2369f, 36.72f };
	Local_331.f_20 = 1000;
	Local_335.f_2 = joaat("prop_binoc_01");
	Local_391.f_2 = joaat("prop_cs_envolope_01");
	Local_391.f_3 = { 890.1637f, -2363.3625f, 29.77f };
	Local_391.f_12 = { 0f, 0f, 0f };
	Local_357.f_2 = joaat("prop_securityvan_lightrig");
	Local_357.f_3 = { 890.365f, -2367.289f, 28.104f };
	Local_357.f_12 = { 0f, 0f, -0.11f };
	iVar0 = 0;
	while (iVar0 <= (Local_292.f_0 - 1))
	{
		Local_292[iVar0 /*20*/].f_14 = 0;
		iLocal_220[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_326.f_0 - 1))
	{
		Local_326[iVar0 /*20*/].f_14 = 0;
		iLocal_221[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_327.f_0 - 1))
	{
		Local_327[iVar0 /*20*/].f_14 = 0;
		iLocal_222[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_328.f_0 - 1))
	{
		iLocal_650[iVar0] = 0;
		iVar0++;
	}
	Local_292[0 /*20*/].f_6 = { 883.9125f, -2361.3347f, 29.2142f };
	Local_292[0 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[0 /*20*/].f_12 = 1;
	Local_292[0 /*20*/].f_10 = 200;
	Local_292[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[0 /*20*/].f_16), "police man 0", 16);
	Local_292[1 /*20*/].f_6 = { 886.4715f, -2342.3625f, 29.33342f };
	Local_292[1 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[1 /*20*/].f_12 = 1;
	Local_292[1 /*20*/].f_10 = 200;
	Local_292[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[1 /*20*/].f_16), "police man 1", 16);
	Local_292[2 /*20*/].f_6 = { 888.0029f, -2362.3438f, 29.2334f };
	Local_292[2 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[2 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[2 /*20*/].f_12 = 0;
	Local_292[2 /*20*/].f_10 = 200;
	Local_292[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[2 /*20*/].f_16), "police man 2", 16);
	Local_292[3 /*20*/].f_6 = { 891.9032f, -2362.3477f, 29.3657f };
	Local_292[3 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[3 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[3 /*20*/].f_12 = 1;
	Local_292[3 /*20*/].f_10 = 200;
	Local_292[3 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[3 /*20*/].f_16), "police man 3", 16);
	Local_292[4 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_292[4 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[4 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[4 /*20*/].f_12 = 0;
	Local_292[4 /*20*/].f_10 = 200;
	Local_292[4 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[4 /*20*/].f_16), "police man 4", 16);
	Local_292[5 /*20*/].f_6 = { 886.3158f, -2343.9456f, 29.3304f };
	Local_292[5 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[5 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[5 /*20*/].f_12 = 1;
	Local_292[5 /*20*/].f_10 = 200;
	Local_292[5 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[5 /*20*/].f_16), "police man 5", 16);
	Local_292[6 /*20*/].f_6 = { 886.8484f, -2341.6223f, 29.3343f };
	Local_292[6 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[6 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[6 /*20*/].f_12 = 0;
	Local_292[6 /*20*/].f_10 = 200;
	Local_292[6 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[6 /*20*/].f_16), "police man 6", 16);
	Local_292[7 /*20*/].f_6 = { 899.53f, -2346.0066f, 29.5092f };
	Local_292[7 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[7 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[7 /*20*/].f_12 = 1;
	Local_292[7 /*20*/].f_10 = 200;
	Local_292[7 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[7 /*20*/].f_16), "police man 7", 16);
	Local_292[8 /*20*/].f_3 = { 962.9001f, -2379.5808f, 40.1731f };
	Local_292[8 /*20*/].f_9 = 85.5324f;
	Local_292[8 /*20*/].f_6 = { 925.729f, -2375.8982f, 40.1731f };
	Local_292[8 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[8 /*20*/].f_15 = joaat("WEAPON_SNIPERRIFLE");
	Local_292[8 /*20*/].f_12 = 1;
	Local_292[8 /*20*/].f_10 = 120;
	Local_292[8 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[8 /*20*/].f_16), "police man 8", 16);
	Local_292[9 /*20*/].f_3 = { 944.7178f, -2401.4944f, 40.1731f };
	Local_292[9 /*20*/].f_9 = 75.9638f;
	Local_292[9 /*20*/].f_6 = { 922.8425f, -2400.8088f, 40.2425f };
	Local_292[9 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[9 /*20*/].f_15 = joaat("WEAPON_SNIPERRIFLE");
	Local_292[9 /*20*/].f_12 = 1;
	Local_292[9 /*20*/].f_10 = 120;
	Local_292[9 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[9 /*20*/].f_16), "police man 9", 16);
	Local_292[10 /*20*/].f_6 = { 894.138f, -2346.749f, 29.4404f };
	Local_292[10 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[10 /*20*/].f_15 = joaat("WEAPON_CARBINERIFLE");
	Local_292[10 /*20*/].f_12 = 1;
	Local_292[10 /*20*/].f_10 = 200;
	Local_292[10 /*20*/].f_11 = 2;
	StringCopy(&(Local_292[10 /*20*/].f_16), "police man 10", 16);
	Local_292[11 /*20*/].f_6 = { 886.7021f, -2345.0166f, 29.3304f };
	Local_292[11 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[11 /*20*/].f_15 = joaat("WEAPON_CARBINERIFLE");
	Local_292[11 /*20*/].f_12 = 1;
	Local_292[11 /*20*/].f_10 = 200;
	Local_292[11 /*20*/].f_11 = 2;
	StringCopy(&(Local_292[11 /*20*/].f_16), "police man 11", 16);
	Local_292[12 /*20*/].f_3 = { 845.1862f, -2253.6438f, 29.2907f };
	Local_292[12 /*20*/].f_9 = 177.1563f;
	Local_292[12 /*20*/].f_6 = { 843.84436f, -2315.9158f, 29.3346f };
	Local_292[12 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[12 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[12 /*20*/].f_12 = 1;
	Local_292[12 /*20*/].f_10 = 200;
	Local_292[12 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[12 /*20*/].f_16), "police man 12", 16);
	Local_292[13 /*20*/].f_3 = { 846.6603f, -2270.7913f, 29.3452f };
	Local_292[13 /*20*/].f_9 = 186.9243f;
	Local_292[13 /*20*/].f_6 = { 857.6421f, -2312.7307f, 29.3462f };
	Local_292[13 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[13 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[13 /*20*/].f_12 = 1;
	Local_292[13 /*20*/].f_10 = 200;
	Local_292[13 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[13 /*20*/].f_16), "police man 13", 16);
	Local_292[14 /*20*/].f_3 = { 949.6615f, -2374.866f, 29.8815f };
	Local_292[14 /*20*/].f_9 = 115.1845f;
	Local_292[14 /*20*/].f_6 = { 885.1977f, -2361.141f, 29.2205f };
	Local_292[14 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[14 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[14 /*20*/].f_12 = 0;
	Local_292[14 /*20*/].f_10 = 200;
	Local_292[14 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[14 /*20*/].f_16), "police man 14", 16);
	Local_292[15 /*20*/].f_3 = { 957.048f, -2366.3638f, 29.5281f };
	Local_292[15 /*20*/].f_9 = 135.4363f;
	Local_292[15 /*20*/].f_6 = { 886.9384f, -2344.6528f, 29.3308f };
	Local_292[15 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[15 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[15 /*20*/].f_12 = 1;
	Local_292[15 /*20*/].f_10 = 200;
	Local_292[15 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[15 /*20*/].f_16), "police man 15", 16);
	Local_292[16 /*20*/].f_3 = { 864.4395f, -2251.6404f, 29.4899f };
	Local_292[16 /*20*/].f_9 = 176.214f;
	Local_292[16 /*20*/].f_6 = { 855.1099f, -2305.2273f, 29.34599f };
	Local_292[16 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[16 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[16 /*20*/].f_12 = 0;
	Local_292[16 /*20*/].f_10 = 200;
	Local_292[16 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[16 /*20*/].f_16), "police man 16", 16);
	Local_292[17 /*20*/].f_3 = { 868.1833f, -2259.8342f, 37.789f };
	Local_292[17 /*20*/].f_9 = 171.4895f;
	Local_292[17 /*20*/].f_6 = { 854.8495f, -2296.6997f, 29.3433f };
	Local_292[17 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[17 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[17 /*20*/].f_12 = 1;
	Local_292[17 /*20*/].f_10 = 200;
	Local_292[17 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[17 /*20*/].f_16), "police man 17", 16);
	Local_292[18 /*20*/].f_3 = { 836.7518f, -2249.3528f, 29.1574f };
	Local_292[18 /*20*/].f_9 = 243.6401f;
	Local_292[18 /*20*/].f_6 = { 845.26855f, -2304.2803f, 29.33778f };
	Local_292[18 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[18 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[18 /*20*/].f_12 = 0;
	Local_292[18 /*20*/].f_10 = 200;
	Local_292[18 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[18 /*20*/].f_16), "police man 18", 16);
	Local_292[19 /*20*/].f_3 = { 866.9947f, -2251.4563f, 29.5108f };
	Local_292[19 /*20*/].f_9 = 93.528f;
	Local_292[19 /*20*/].f_6 = { 861.5505f, -2324.3267f, 29.3458f };
	Local_292[19 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[19 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[19 /*20*/].f_12 = 1;
	Local_292[19 /*20*/].f_10 = 200;
	Local_292[19 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[19 /*20*/].f_16), "police man 19", 16);
	Local_292[20 /*20*/].f_3 = { 831.0994f, -2250.9937f, 29.0958f };
	Local_292[20 /*20*/].f_9 = 266.1835f;
	Local_292[20 /*20*/].f_6 = { 847.2873f, -2287.9622f, 29.33541f };
	Local_292[20 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[20 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[20 /*20*/].f_12 = 0;
	Local_292[20 /*20*/].f_10 = 200;
	Local_292[20 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[20 /*20*/].f_16), "police man 20", 16);
	Local_292[20 /*20*/].f_14 = 1;
	Local_292[21 /*20*/].f_6 = { 862.5962f, -2283.8804f, 37.7922f };
	Local_292[21 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[21 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[21 /*20*/].f_12 = 1;
	Local_292[21 /*20*/].f_10 = 150;
	Local_292[21 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[21 /*20*/].f_16), "police man 21", 16);
	Local_292[22 /*20*/].f_6 = { 864.5548f, -2284.0654f, 37.79219f };
	Local_292[22 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[22 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[22 /*20*/].f_12 = 0;
	Local_292[22 /*20*/].f_10 = 150;
	Local_292[22 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[22 /*20*/].f_16), "police man 22", 16);
	Local_292[23 /*20*/].f_6 = { 847.04865f, -2308.6606f, 29.33128f };
	Local_292[23 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[23 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[23 /*20*/].f_12 = 1;
	Local_292[23 /*20*/].f_10 = 150;
	Local_292[23 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[23 /*20*/].f_16), "police man 23", 16);
	Local_292[24 /*20*/].f_6 = { 844.24176f, -2315.3413f, 29.3346f };
	Local_292[24 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[24 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[24 /*20*/].f_12 = 0;
	Local_292[24 /*20*/].f_10 = 150;
	Local_292[24 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[24 /*20*/].f_16), "police man 24", 16);
	Local_292[25 /*20*/].f_6 = { 858.5804f, -2313.1565f, 29.34623f };
	Local_292[25 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[25 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[25 /*20*/].f_12 = 1;
	Local_292[25 /*20*/].f_10 = 150;
	Local_292[25 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[25 /*20*/].f_16), "police man 25", 16);
	Local_292[26 /*20*/].f_6 = { 852.40906f, -2315.2515f, 29.34282f };
	Local_292[26 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[26 /*20*/].f_15 = joaat("WEAPON_SMG");
	Local_292[26 /*20*/].f_12 = 0;
	Local_292[26 /*20*/].f_10 = 150;
	Local_292[26 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[26 /*20*/].f_16), "police man 26", 16);
	Local_292[26 /*20*/].f_14 = 1;
	Local_292[27 /*20*/].f_6 = { 884.3048f, -2361.2385f, 29.2162f };
	Local_292[27 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[27 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[27 /*20*/].f_12 = 1;
	Local_292[27 /*20*/].f_10 = 200;
	Local_292[27 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[27 /*20*/].f_16), "police man 27", 16);
	Local_292[28 /*20*/].f_6 = { 890.2f, -2347.5f, 29.3346f };
	Local_292[28 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[28 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[28 /*20*/].f_12 = 1;
	Local_292[28 /*20*/].f_10 = 200;
	Local_292[28 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[28 /*20*/].f_16), "police man 28", 16);
	Local_292[29 /*20*/].f_3 = { 957.1928f, -2366.227f, 29.5267f };
	Local_292[29 /*20*/].f_9 = 75.0198f;
	Local_292[29 /*20*/].f_6 = { 896.0663f, -2355.3826f, 29.4741f };
	Local_292[29 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[29 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[29 /*20*/].f_12 = 1;
	Local_292[29 /*20*/].f_10 = 200;
	Local_292[29 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[29 /*20*/].f_16), "police man 29", 16);
	Local_292[30 /*20*/].f_3 = { 950.1217f, -2375.131f, 29.8892f };
	Local_292[30 /*20*/].f_9 = 38.0107f;
	Local_292[30 /*20*/].f_6 = { 888.488f, -2358.472f, 29.2735f };
	Local_292[30 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[30 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[30 /*20*/].f_12 = 1;
	Local_292[30 /*20*/].f_10 = 200;
	Local_292[30 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[30 /*20*/].f_16), "police man 30", 16);
	Local_292[31 /*20*/].f_3 = { 969.2328f, -2382.3147f, 40.2425f };
	Local_292[31 /*20*/].f_9 = 104.0753f;
	Local_292[31 /*20*/].f_6 = { 923.9522f, -2394.8845f, 47.057f };
	Local_292[31 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_292[31 /*20*/].f_15 = joaat("WEAPON_SNIPERRIFLE");
	Local_292[31 /*20*/].f_12 = 1;
	Local_292[31 /*20*/].f_10 = 200;
	Local_292[31 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[31 /*20*/].f_16), "police man 31", 16);
	Local_292[32 /*20*/].f_6 = { 858.5545f, -2312.776f, 29.3462f };
	Local_292[32 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[32 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[32 /*20*/].f_12 = 1;
	Local_292[32 /*20*/].f_10 = 200;
	Local_292[32 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[32 /*20*/].f_16), "police man 32", 16);
	Local_292[33 /*20*/].f_6 = { 848.8008f, -2302.244f, 29.3291f };
	Local_292[33 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[33 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[33 /*20*/].f_12 = 1;
	Local_292[33 /*20*/].f_10 = 200;
	Local_292[33 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[33 /*20*/].f_16), "police man 33", 16);
	Local_292[34 /*20*/].f_3 = { 847.2f, -2270.3f, 29.5123f };
	Local_292[34 /*20*/].f_9 = 250.8976f;
	Local_292[34 /*20*/].f_6 = { 844.4641f, -2315.1985f, 29.3346f };
	Local_292[34 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[34 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[34 /*20*/].f_12 = 1;
	Local_292[34 /*20*/].f_10 = 200;
	Local_292[34 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[34 /*20*/].f_16), "police man 34", 16);
	Local_292[35 /*20*/].f_3 = { 856.1734f, -2266.6604f, 35.1378f };
	Local_292[35 /*20*/].f_9 = 178.9939f;
	Local_292[35 /*20*/].f_6 = { 855.016f, -2297.272f, 29.3439f };
	Local_292[35 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_292[35 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_292[35 /*20*/].f_12 = 1;
	Local_292[35 /*20*/].f_10 = 200;
	Local_292[35 /*20*/].f_11 = 5;
	StringCopy(&(Local_292[35 /*20*/].f_16), "police man 35", 16);
	Local_248[0 /*15*/].f_3 = { 866.4801f, -2240.5852f, 29.4915f };
	Local_248[0 /*15*/].f_6 = 264.0104f;
	Local_248[0 /*15*/].f_1 = joaat("police3");
	Local_248[0 /*15*/].f_13 = 11;
	Local_248[1 /*15*/].f_3 = { 850.8638f, -2238.8315f, 29.5151f };
	Local_248[1 /*15*/].f_6 = 264.1243f;
	Local_248[1 /*15*/].f_1 = joaat("police3");
	Local_248[1 /*15*/].f_13 = 12;
	Local_248[2 /*15*/].f_3 = { 1035.116f, -2417.376f, 28.2291f };
	Local_248[2 /*15*/].f_6 = 173.4809f;
	Local_248[2 /*15*/].f_1 = joaat("police3");
	Local_248[2 /*15*/].f_13 = 13;
	Local_248[3 /*15*/].f_3 = { 1036.7899f, -2402.2937f, 28.8534f };
	Local_248[3 /*15*/].f_6 = 173.5939f;
	Local_248[3 /*15*/].f_1 = joaat("police3");
	Local_248[3 /*15*/].f_13 = 14;
	Local_248[4 /*15*/].f_3 = { 1041.8916f, -2349.553f, 29.5271f };
	Local_248[4 /*15*/].f_6 = 173.2809f;
	Local_248[4 /*15*/].f_1 = joaat("police3");
	Local_248[4 /*15*/].f_13 = 6;
	Local_248[5 /*15*/].f_3 = { 810.7969f, -2240.9773f, 29.4969f };
	Local_248[5 /*15*/].f_6 = -98.9281f;
	Local_248[5 /*15*/].f_1 = joaat("police3");
	Local_248[5 /*15*/].f_13 = 2;
	Local_248[6 /*15*/].f_3 = { 1035.1079f, -2404.438f, 28.7375f };
	Local_248[6 /*15*/].f_6 = 172.0542f;
	Local_248[6 /*15*/].f_1 = joaat("police3");
	Local_248[6 /*15*/].f_13 = 3;
	Local_248[7 /*15*/].f_3 = { 1041.8916f, -2349.553f, 29.5271f };
	Local_248[7 /*15*/].f_6 = 173.2809f;
	Local_248[7 /*15*/].f_1 = joaat("police3");
	Local_248[7 /*15*/].f_13 = 6;
	Local_248[8 /*15*/].f_3 = { 1035.6378f, -2392.111f, 29.1724f };
	Local_248[8 /*15*/].f_6 = 173.2055f;
	Local_248[8 /*15*/].f_1 = joaat("police3");
	Local_248[8 /*15*/].f_13 = 5;
	Local_248[9 /*15*/].f_3 = { 884.7551f, -2082.003f, 29.5991f };
	Local_248[9 /*15*/].f_6 = 260.9446f;
	Local_248[9 /*15*/].f_1 = joaat("police3");
	Local_248[9 /*15*/].f_13 = 4;
	Local_248[10 /*15*/].f_3 = { 899.9318f, -2076.0388f, 29.7546f };
	Local_248[10 /*15*/].f_6 = 261.255f;
	Local_248[10 /*15*/].f_1 = joaat("police3");
	Local_248[10 /*15*/].f_13 = 7;
	Local_248[11 /*15*/].f_3 = { 760.2631f, -2410.3855f, 19.4231f };
	Local_248[11 /*15*/].f_6 = 178.6288f;
	Local_248[11 /*15*/].f_1 = joaat("police3");
	Local_248[11 /*15*/].f_13 = 10;
	Local_248[12 /*15*/].f_3 = { 899.9318f, -2076.0388f, 29.7546f };
	Local_248[12 /*15*/].f_6 = 261.255f;
	Local_248[12 /*15*/].f_1 = joaat("police3");
	Local_248[12 /*15*/].f_13 = 8;
	Local_248[13 /*15*/].f_3 = { 875.1038f, -2074.4688f, 29.482f };
	Local_248[13 /*15*/].f_6 = 261.4077f;
	Local_248[13 /*15*/].f_1 = joaat("police3");
	Local_248[13 /*15*/].f_13 = 9;
	Local_326[0 /*20*/].f_3 = { 949.6615f, -2374.866f, 29.8815f };
	Local_326[0 /*20*/].f_9 = 115.1845f;
	Local_326[0 /*20*/].f_6 = { 885.1977f, -2361.141f, 29.2205f };
	Local_326[0 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_326[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_326[0 /*20*/].f_12 = 1;
	Local_326[0 /*20*/].f_10 = 200;
	Local_326[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_326[0 /*20*/].f_16), "backup_front 0", 16);
	Local_326[1 /*20*/].f_3 = { 957.048f, -2366.3638f, 29.5281f };
	Local_326[1 /*20*/].f_9 = 135.4363f;
	Local_326[1 /*20*/].f_6 = { 892.1824f, -2361.9575f, 29.3794f };
	Local_326[1 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_326[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_326[1 /*20*/].f_12 = 1;
	Local_326[1 /*20*/].f_10 = 200;
	Local_326[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_326[1 /*20*/].f_16), "backup_front 1", 16);
	Local_326[2 /*20*/].f_3 = { 904.8995f, -2267.1782f, 29.5456f };
	Local_326[2 /*20*/].f_9 = 210.877f;
	Local_326[2 /*20*/].f_6 = { 898.52f, -2356.4607f, 29.4943f };
	Local_326[2 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_326[2 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_326[2 /*20*/].f_12 = 1;
	Local_326[2 /*20*/].f_10 = 200;
	Local_326[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_326[2 /*20*/].f_16), "backup_front 2", 16);
	Local_327[0 /*20*/].f_3 = { 845.1862f, -2253.6438f, 29.2907f };
	Local_327[0 /*20*/].f_9 = 177.1563f;
	Local_327[0 /*20*/].f_6 = { 843.84436f, -2315.9158f, 29.3346f };
	Local_327[0 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_327[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_327[0 /*20*/].f_12 = 1;
	Local_327[0 /*20*/].f_10 = 200;
	Local_327[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_327[0 /*20*/].f_16), "backup_alley 0", 16);
	Local_327[1 /*20*/].f_3 = { 834.8723f, -2250.6267f, 29.1487f };
	Local_327[1 /*20*/].f_9 = 263.29f;
	Local_327[1 /*20*/].f_6 = { 857.6421f, -2312.7307f, 29.3462f };
	Local_327[1 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_327[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_327[1 /*20*/].f_12 = 1;
	Local_327[1 /*20*/].f_10 = 200;
	Local_327[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_327[1 /*20*/].f_16), "backup_alley 1", 16);
	Local_327[2 /*20*/].f_3 = { 864.4395f, -2251.6404f, 29.4899f };
	Local_327[2 /*20*/].f_9 = 176.214f;
	Local_327[2 /*20*/].f_6 = { 855.1099f, -2305.2273f, 29.34599f };
	Local_327[2 /*20*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_327[2 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_327[2 /*20*/].f_12 = 1;
	Local_327[2 /*20*/].f_10 = 200;
	Local_327[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_327[2 /*20*/].f_16), "backup_alley 2", 16);
	Local_249[0 /*15*/].f_3 = { 775.1086f, -2442.4436f, 38.1976f };
	Local_249[0 /*15*/].f_6 = -102.3257f;
	Local_249[0 /*15*/].f_1 = joaat("polmav");
	Local_249[0 /*15*/].f_13 = 15;
	Local_249[1 /*15*/].f_3 = { 794.2238f, -2356.9136f, 40.3881f };
	Local_249[1 /*15*/].f_6 = -6.2599f;
	Local_249[1 /*15*/].f_1 = joaat("polmav");
	Local_249[1 /*15*/].f_13 = 16;
	Local_294[0 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_294[0 /*20*/].f_10 = 200;
	Local_294[0 /*20*/].f_15 = joaat("WEAPON_UNARMED");
	Local_294[0 /*20*/].f_12 = 1;
	Local_294[1 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_294[1 /*20*/].f_10 = 200;
	Local_294[1 /*20*/].f_15 = joaat("WEAPON_UNARMED");
	Local_294[1 /*20*/].f_12 = 1;
	Local_293[0 /*20*/].f_6 = { 888.0029f, -2362.3438f, 29.2334f };
	Local_293[0 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_293[0 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_293[0 /*20*/].f_12 = 1;
	Local_293[0 /*20*/].f_10 = 200;
	Local_293[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_293[0 /*20*/].f_16), "absail 0", 16);
	Local_293[1 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_293[1 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_293[1 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_293[1 /*20*/].f_12 = 0;
	Local_293[1 /*20*/].f_10 = 200;
	Local_293[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_293[1 /*20*/].f_16), "absail 1", 16);
	Local_293[2 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_293[2 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_293[2 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_293[2 /*20*/].f_12 = 1;
	Local_293[2 /*20*/].f_10 = 200;
	Local_293[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_293[2 /*20*/].f_16), "absail 2", 16);
	Local_293[3 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_293[3 /*20*/].f_1 = joaat("S_M_Y_Swat_01");
	Local_293[3 /*20*/].f_15 = joaat("WEAPON_PISTOL");
	Local_293[3 /*20*/].f_12 = 0;
	Local_293[3 /*20*/].f_10 = 200;
	Local_293[3 /*20*/].f_11 = 5;
	StringCopy(&(Local_293[3 /*20*/].f_16), "absail 3", 16);
	Local_263.f_3 = { 1109.8912f, -1243.8976f, 19.5119f };
	Local_263.f_6 = 64.3406f;
	Local_263.f_1 = joaat("fugitive");
	Local_670[0 /*3*/] = { 1201.4122f, -1412.4779f, 34.2269f };
	Local_670[1 /*3*/] = { 1489.8585f, -1484.1273f, 66.8696f };
	Local_295.f_3 = { -2594.9998f, 1930.1602f, 166.2958f };
	Local_295.f_9 = 94.5464f;
	Local_295.f_1 = __LIB_15__::func_955(29);
	Local_369.f_2 = joaat("prop_phone_ing");
	Local_250.f_3 = { -2592.689f, 1930.7489f, 166.2953f };
	Local_250.f_6 = 95.2679f;
	Local_250.f_1 = __LIB_14__::func_990(29, 0);
	Local_250.f_13 = 20;
	Local_328[0 /*20*/].f_3 = { -2558.413f, 1914.546f, 167.8589f };
	Local_328[0 /*20*/].f_9 = 228.9937f;
	Local_328[0 /*20*/].f_1 = joaat("S_M_Y_DevinSec_01");
	Local_328[0 /*20*/].f_10 = 200;
	Local_328[0 /*20*/].f_15 = joaat("WEAPON_COMBATPISTOL");
	StringCopy(&(Local_328[0 /*20*/].f_16), "security  0", 16);
	Local_328[1 /*20*/].f_3 = { -2559.465f, 1912.7107f, 167.8373f };
	Local_328[1 /*20*/].f_9 = 245.3184f;
	Local_328[1 /*20*/].f_1 = joaat("S_M_Y_DevinSec_01");
	Local_328[1 /*20*/].f_10 = 200;
	Local_328[1 /*20*/].f_15 = joaat("WEAPON_COMBATPISTOL");
	StringCopy(&(Local_328[1 /*20*/].f_16), "security  1", 16);
	iLocal_591 = 0;
	iLocal_592 = 0;
	Local_330[0 /*5*/].f_1 = { -1.2f, 4.2f, -0.7f };
	Local_330[1 /*5*/].f_1 = { -0.4f, 4.2f, -0.7f };
	Local_330[2 /*5*/].f_1 = { 0.4f, 4.2f, -0.7f };
	Local_330[3 /*5*/].f_1 = { 1.2f, 4.2f, -0.7f };
	Local_330[4 /*5*/].f_1 = { 1.2f, 4.2f, -0.7f };
	Local_330[5 /*5*/].f_1 = { 1.2f, 2.9f, -0.7f };
	Local_330[6 /*5*/].f_1 = { 1.2f, 1.6f, -0.7f };
	Local_330[7 /*5*/].f_1 = { 1.2f, 0.3f, -0.7f };
	Local_330[8 /*5*/].f_1 = { 1.2f, -1f, -0.7f };
	Local_330[9 /*5*/].f_1 = { 1.2f, -2.3f, -0.7f };
	Local_330[10 /*5*/].f_1 = { 1.2f, -3.6f, -0.7f };
	Local_330[11 /*5*/].f_1 = { 1.2f, -4.9f, -0.7f };
	Local_330[12 /*5*/].f_1 = { -1.2f, -5.1f, -0.7f };
	Local_330[13 /*5*/].f_1 = { -0.4f, -5.1f, -0.7f };
	Local_330[14 /*5*/].f_1 = { 0.4f, -5.1f, -0.7f };
	Local_330[15 /*5*/].f_1 = { 1.2f, -5.1f, -0.7f };
	Local_330[16 /*5*/].f_1 = { -1.3f, -4.9f, -0.7f };
	Local_330[17 /*5*/].f_1 = { -1.3f, -3.6f, -0.7f };
	Local_330[18 /*5*/].f_1 = { -1.3f, -2.3f, -0.7f };
	Local_330[19 /*5*/].f_1 = { -1.3f, -1f, -0.7f };
	Local_330[20 /*5*/].f_1 = { -1.3f, 0.3f, -0.7f };
	Local_330[21 /*5*/].f_1 = { -1.3f, 1.6f, -0.7f };
	Local_330[22 /*5*/].f_1 = { -1.3f, 2.9f, -0.7f };
	Local_330[23 /*5*/].f_1 = { -1.3f, 4.2f, -0.7f };
	iVar0 = 0;
	while (iVar0 <= (Local_293.f_0 - 1))
	{
		iLocal_223[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_293.f_0 - 1))
	{
		Local_293[iVar0 /*20*/].f_14 = 0;
		iLocal_223[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_330.f_0 - 1))
	{
		Local_330[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_618 - 1))
	{
		iLocal_618[iVar0] = 0;
		iVar0++;
	}
	Local_284.f_14 = 0;
	Local_288.f_14 = 0;
	func_635();
}

void func_635()//Position - 0x87B95
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_567)
	{
		iLocal_567[iVar0] = 0;
		iVar0++;
	}
}

void func_639()//Position - 0x88013
{
	func_2();
}

void func_640()//Position - 0x8801F
{
	switch (iLocal_620)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_263.f_0, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_263.f_0))
				{
					iLocal_532 = MISC::GET_GAME_TIMER();
					iLocal_620++;
				}
			}
			else
			{
				iLocal_620++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_532, 20022))
			{
				func_641();
			}
			break;
	}
}

void func_641()//Position - 0x88085
{
	__LIB_0__::func_526(0, 0);
	__LIB_16__::func_871(8, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
	__LIB_0__::func_364(25, 0);
	if ((iLocal_726 && iLocal_727) && iLocal_728)
	{
	}
	func_1072();
}

int func_662()//Position - 0x885F1
{
	int iVar0;
	switch (iLocal_562)
	{
		case 0:
			if (__LIB_0__::func_90())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
				RECORDING::REPLAY_START_EVENT(4);
				if (ENTITY::IS_ENTITY_ATTACHED(Local_369.f_0))
				{
					ENTITY::DETACH_ENTITY(Local_369.f_0, true, true);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_369.f_0, "davenortons_phone", 1, Local_369.f_2, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_295.f_0, "devin", 0, Local_295.f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_250.f_0, "devins_car", 0, Local_250.f_1, 0);
				if (!PED::IS_PED_INJURED(Local_328[0 /*20*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_328[0 /*20*/], "FIB_Security_Guy", 0, Local_328[0 /*20*/].f_1, 0);
				}
				if (!PED::IS_PED_INJURED(Local_328[1 /*20*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_328[1 /*20*/], "FIB_Security_Guy^1", 0, Local_328[1 /*20*/].f_1, 0);
				}
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				iVar0 = 0;
				while (iVar0 <= (Local_328.f_0 - 1))
				{
					iLocal_650[iVar0] = 23;
					iVar0++;
				}
				iLocal_562++;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				__LIB_17__::func_618(-2556.251f, 1908.599f, 167.581f, -2552.673f, 1915.53f, 171.481f, 9.1f, -2551.931f, 1912.0355f, 168.0432f, 244.1441f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
				func_665(-2551.931f, 1912.0355f, 168.0432f, 244.1441f);
				MISC::CLEAR_AREA(-2551.931f, 1912.0355f, 168.0432f, 10000f, true, false, false, false);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_562++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_562 = 22;
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_295.f_0))
				{
					PED::DELETE_PED(&Local_295);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_328.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_328[iVar0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_328[iVar0 /*20*/]));
					}
					iVar0++;
				}
				func_663(0, 0, 0, 0, 0, 3000, 1, 1);
				func_641();
			}
			break;
		case 22:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_295.f_0))
				{
					PED::DELETE_PED(&Local_295);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_328.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_328[iVar0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_328[iVar0 /*20*/]));
					}
					iVar0++;
				}
				RECORDING::REPLAY_STOP_EVENT();
				func_532(1, 1, 0, 0, 1, 1);
				func_641();
			}
			break;
	}
	return 0;
}

void func_663(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x888F6
{
	__LIB_16__::func_884();
	__LIB_0__::func_532(0, 1, iParam7, 0, 0, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_638();
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(false);
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, iParam5, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
			}
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam6)
	{
		func_533();
	}
	else
	{
		func_489();
	}
}

void func_665(struct<3> Param0, float fParam1)//Position - 0x889CE
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			__LIB_17__::func_506(iVar0, Param0, fParam1, 24, 0);
		}
	}
}

void func_681()//Position - 0x89778
{
	if (func_692())
	{
		iLocal_219 = 12;
	}
	func_691();
	func_689();
	func_682();
}

void func_682()//Position - 0x89798
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_328.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_328[iVar0 /*20*/]))
		{
			if (iLocal_650[iVar0] != 22)
			{
				if (func_688(&(Local_328[iVar0 /*20*/]), &(Local_328[iVar0 /*20*/].f_10), Local_328[iVar0 /*20*/].f_14) || PED::IS_PED_RAGDOLL(Local_328[iVar0 /*20*/]))
				{
					iLocal_650[0] = 22;
					iLocal_650[1] = 22;
					iLocal_516 = 1;
				}
			}
			switch (iLocal_650[iVar0])
			{
				case 0:
					TASK::TASK_LOOK_AT_ENTITY(Local_328[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					iLocal_650[iVar0] = 1;
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_328[iVar0 /*20*/], Local_328[iVar0 /*20*/].f_3, 0.3f, 0.3f, 2f, false, true, 0))
					{
						if (__LIB_17__::func_603(Local_328[iVar0 /*20*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), -2, 1))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_328[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_328[iVar0 /*20*/], Local_328[iVar0 /*20*/].f_3, 1f, -1, 0.2f, 512, Local_328[iVar0 /*20*/].f_9);
						}
					}
					else if (__LIB_17__::func_603(Local_328[iVar0 /*20*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), -2, 1))
					{
						if (__LIB_17__::func_603(Local_328[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
						{
							switch (iVar0)
							{
								case 0:
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@bouncer@idle_a", "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_328[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									break;
								case 1:
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@bouncer@idle_c", "idle_c", 8f, -8f, -1, 1, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_328[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									break;
								}
							}
					}
					break;
				case 22:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_328[iVar0 /*20*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_328[iVar0 /*20*/], Local_328[iVar0 /*20*/].f_6, 2f, false, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_328[iVar0 /*20*/], 51, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_328[iVar0 /*20*/], 50, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_328[iVar0 /*20*/], 200f, 0);
					iLocal_650[iVar0] = 23;
					break;
				case 23:
					break;
			}
		}
		else if (!Local_328[iVar0 /*20*/].f_14)
		{
			STREAMING::REQUEST_MODEL(Local_328[iVar0 /*20*/].f_1);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@bouncer@idle_a");
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@bouncer@idle_c");
			if ((STREAMING::HAS_MODEL_LOADED(Local_328[iVar0 /*20*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@bouncer@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@bouncer@idle_c"))
			{
				func_684(&(Local_328[iVar0 /*20*/]), 0);
				func_683(&(Local_328[iVar0 /*20*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_683(var uParam0, bool bParam1)//Position - 0x89A7A
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_731, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_731);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_732, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_732);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_732);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_731, iLocal_732);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_732, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_732, iLocal_731);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_732);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 9, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

void func_684(var uParam0, bool bParam1)//Position - 0x89B54
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, false, false, false, false);
	*uParam0 = PED::CREATE_PED(6, uParam0->f_1, uParam0->f_3, uParam0->f_9, true, true);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
	PED::SET_PED_AS_ENEMY(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, false);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_15, -1, true, true);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_11);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_10, 0);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_10);
	if (uParam0->f_12)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	if (uParam0->f_13)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_14 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_16));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	if (bParam1)
	{
		uParam0->f_2 = __LIB_0__::func_666(*uParam0, 1, 145);
		HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	}
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	__LIB_0__::func_609(*uParam0, 0);
	__LIB_16__::func_878(*uParam0, 311);
}

int func_688(int iParam0, var uParam1, bool bParam2)//Position - 0x89DBC
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*iParam0, 17))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (bParam2)
	{
		return 1;
	}
	return 0;
}

void func_689()//Position - 0x89E24
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[1]))
		{
			switch (iLocal_566)
			{
				case 0:
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_338() == 0)
						{
							PED::SET_PED_KEEP_TASK(iLocal_424[1], true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_424[1], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_566++;
						}
					}
					break;
				case 1:
					break;
				}
			}
	}
}

void func_691()//Position - 0x89EDE
{
	if (!PED::IS_PED_INJURED(Local_295.f_0))
	{
		switch (iLocal_559)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_295.f_0, Local_295.f_3, 1.5f, 1.5f, 2f, false, true, 0))
				{
					if (__LIB_17__::func_603(Local_295.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_295.f_0, true);
						TASK::CLEAR_PED_TASKS(Local_295.f_0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_295.f_3, 1f, -1, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
						TASK::TASK_PERFORM_SEQUENCE(Local_295.f_0, iLocal_693);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
					}
				}
				break;
			case 2:
				break;
		}
	}
	else if (!Local_295.f_14)
	{
		STREAMING::REQUEST_MODEL(Local_295.f_1);
		STREAMING::REQUEST_MODEL(Local_250.f_1);
		STREAMING::REQUEST_MODEL(Local_369.f_2);
		STREAMING::REQUEST_ANIM_DICT("missfbi4");
		if (((STREAMING::HAS_MODEL_LOADED(Local_295.f_1) && STREAMING::HAS_MODEL_LOADED(Local_250.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_369.f_2)) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4"))
		{
			Local_250.f_0 = VEHICLE::CREATE_VEHICLE(Local_250.f_1, Local_250.f_3, Local_250.f_6, true, true, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_250.f_0, 3);
			VEHICLE::REMOVE_VEHICLE_WINDOW(Local_250.f_0, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(Local_250.f_0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_250.f_0, 5f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_250.f_0, 0, 0);
			__LIB_16__::func_927(&Local_295, 29, Local_295.f_3, Local_295.f_9, 1);
			__LIB_17__::func_606(Local_295.f_0, 0);
			func_394(&Local_295, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_295.f_0, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 4, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 8, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_295.f_0, 11, 0, 0, 0);
			Local_369.f_0 = OBJECT::CREATE_OBJECT(Local_369.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_295.f_0, 0f, 0f, 5f), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_369.f_0, Local_295.f_0, PED::GET_PED_BONE_INDEX(Local_295.f_0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			Local_659 = { ENTITY::GET_ENTITY_COORDS(Local_250.f_0, true) };
			Local_660 = { ENTITY::GET_ENTITY_ROTATION(Local_250.f_0, 2) };
			iLocal_586 = PED::CREATE_SYNCHRONIZED_SCENE(Local_659, Local_660, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_295.f_0, iLocal_586, "missfbi4", "Idle_Loop_Devin", 1000f, -4f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_586, true);
			iLocal_559++;
		}
	}
}

int func_692()//Position - 0x8A192
{
	switch (iLocal_602)
	{
		case 0:
			__LIB_16__::func_37(&Local_404, -2552.443f, 1911.0929f, 167.9768f, 0.01f, 0.01f, 2f, 0, "cntry_god5", 1, 1, -1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_295.f_0))
			{
				__LIB_17__::func_78(ENTITY::GET_ENTITY_COORDS(Local_295.f_0, true), 100f, 120f, "FBI_4_MCS_2_CONCAT");
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("devin", Local_295.f_0, 0);
					if (!PED::IS_PED_INJURED(Local_328[0 /*20*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Security_Guy", Local_328[0 /*20*/], 0);
					}
					if (!PED::IS_PED_INJURED(Local_328[1 /*20*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Security_Guy^1", Local_328[1 /*20*/], 0);
					}
				}
				func_701();
				if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2556.251f, 1908.599f, 167.581f, -2552.673f, 1915.53f, 171.481f, 9.1f, false, true, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_GO_TO_MEETING"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_4_GO_TO_MEETING");
						}
						if (__LIB_17__::func_418(&iLocal_696))
						{
							__LIB_0__::func_213(iLocal_696, 4f, 1, 1056964608, 0, 1, 0);
							iLocal_602++;
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2557.516f, 1909.942f, 167.877f, -2554.61f, 1915.979f, 171.377f, 4f, false, true, 0))
						{
							if (CUTSCENE::HAS_CUTSCENE_LOADED())
							{
								if (func_693(1, 1, 1, 0, 1))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("fbi4_DEPOT_STOP_TRACK");
									func_662();
									return 1;
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_213(iLocal_696, 4f, 1, 1056964608, 0, 1, 0))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (func_693(1, 1, 1, 1, 1))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("fbi4_DEPOT_STOP_TRACK");
						func_662();
						return 1;
					}
				}
			}
			break;
		case 2:
			break;
	}
	return 0;
}

int func_693(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x8A376
{
	if (__LIB_0__::func_494(1, 0, 1) || iParam3)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_532(1, 1, iParam4, 0, 0, 0, 0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		if (bParam2)
		{
			__LIB_0__::func_429();
		}
		else
		{
			__LIB_0__::func_325();
		}
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
		HUD::DISPLAY_HUD(false);
		HUD::DISPLAY_RADAR(false);
		CAM::SET_WIDESCREEN_BORDERS(true, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
		}
		func_489();
		return 1;
	}
	return 0;
}

void func_701()//Position - 0x8A749
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		if (!iLocal_522)
		{
			STREAMING::SET_SRL_FORCE_PRESTREAM(2);
			iLocal_522 = 1;
		}
	}
	else if (iLocal_522)
	{
		iLocal_522 = 0;
	}
}

void func_749()//Position - 0x8D187
{
	int iVar0;
	switch (iLocal_599)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_DESTROY_TRUCK"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_DESTROY_TRUCK");
			}
			HUD::CLEAR_PRINTS();
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			MISC::SET_FAKE_WANTED_LEVEL(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PED::SET_CREATE_RANDOM_COPS(false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
			if (__LIB_17__::func_418(&iVar0))
			{
				__LIB_38__::func_192(PLAYER::PLAYER_PED_ID(), iVar0, &(Global_99845[1 /*98*/]), &(Global_100148[1 /*3*/]), &(Global_100158[1]), &(Global_100140[1]), &(Global_4541522[1]), 0);
			}
			func_794(&iLocal_424, 0);
			Local_468.f_12 = iLocal_424[0];
			iLocal_599++;
			break;
		case 1:
			if (__LIB_17__::func_668(&Local_468, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_468.f_18)
				{
					if (!Local_468.f_19)
					{
						if (__LIB_42__::func_560(&iLocal_424, 0, 0, 0))
						{
							Local_468.f_19 = 1;
						}
					}
				}
				func_751();
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT("misscommon@std_take_off_masks");
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_261.f_3, Local_261.f_6, -200f, 200f, 200f), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_261.f_3, Local_261.f_6, 200f, -200f, -200f), 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_261.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_261.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_263.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_263);
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_GO_TO_MEETING");
				ENTITY::FREEZE_ENTITY_POSITION(Local_261.f_0, false);
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
				iLocal_219 = 11;
			}
			break;
	}
}

void func_751()//Position - 0x8D37F
{
	int iVar0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
		switch (iLocal_651)
		{
			case 0:
				if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_261.f_0, false))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_261.f_0, true), 200f, true, false, false, false);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_261.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_261.f_0, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_261.f_0)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, Local_261.f_13, "lkheat", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
							}
						}
						iLocal_651++;
					}
				}
				break;
			case 1:
				if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_261.f_0, false))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_261.f_0, true), 200f, true, false, false, false);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_261.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_261.f_0, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_261.f_0)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, Local_261.f_13, "lkheat", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
							}
							iLocal_651++;
						}
					}
				}
				break;
			case 2:
				if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_261.f_0, false))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_261.f_0, true), 200f, true, false, false, false);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_261.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_261.f_0, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_261.f_0)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, Local_261.f_13, "lkheat", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
							}
						}
						iLocal_651++;
					}
				}
				break;
			case 3:
				if (iVar0 >= 9)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_261.f_0, false))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_261.f_0, true), 200f, true, false, false, false);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_261.f_0))
						{
							VEHICLE::SET_PLAYBACK_SPEED(Local_261.f_0, 1f);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_261.f_0)));
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, Local_261.f_13, "lkheat", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, 5000f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_261.f_0, false);
						iLocal_651++;
					}
				}
				break;
			case 4:
				break;
			}
	}
}

int func_794(int iParam0, bool bParam1)//Position - 0x8E9AE
{
	bool bVar0;
	bool bVar1;
	if (!iParam0->f_39)
	{
		iParam0->f_7 = 4;
		iParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_34[bParam1] == 2;
		if (__LIB_0__::func_682(__LIB_17__::func_338()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_24[bParam1] != 0) || ((__LIB_15__::func_969(bParam1) && __LIB_15__::func_973(bParam1)) && !iParam0->f_18[bParam1]))
			{
				if (!iParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*iParam0)[bParam1]) || bVar0)
					{
						if (iParam0->f_34[bParam1] != 1 && iParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !BitTest(Global_97919.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) && !Global_3) && !__LIB_0__::func_2(0)))
			{
				if (iParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	iParam0->f_39 = 0;
	return 0;
}

void func_801()//Position - 0x8F1D7
{
	func_819();
	func_818();
	func_817();
	switch (iLocal_598)
	{
		case 0:
			Local_669 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_263.f_0, false))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
				Local_263.f_2 = __LIB_0__::func_639(Local_263.f_0, 0, 0);
				__LIB_0__::func_229("cntry_god35", 7500, 1);
			}
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, 0, "michael", 0, 1);
			iLocal_532 = MISC::GET_GAME_TIMER();
			iLocal_598++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_263.f_0, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_263.f_0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_263.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_263.f_2));
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					__LIB_0__::func_229("cntry_god36", 7500, 1);
					iLocal_598 = 2;
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_263.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_263.f_2));
				}
				__LIB_0__::func_229("cntry_god36", 7500, 1);
				iLocal_598 = 2;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_669, true) > 200f)
			{
				iLocal_598 = 2;
			}
			break;
		case 2:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_669, true) > 200f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_263.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_263.f_2));
				}
				if (__LIB_17__::func_505(&(Local_701[0 /*165*/]), 0, "HeatAud", "fbi4_phoneM", 8, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					HUD::CLEAR_THIS_PRINT("cntry_god36");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_224);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_224.f_1);
					iLocal_598++;
				}
			}
			break;
		case 3:
			STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
			STREAMING::REQUEST_MODEL(Local_261.f_1);
			STREAMING::REQUEST_MODEL(Local_295.f_1);
			STREAMING::REQUEST_MODEL(Local_250.f_1);
			VEHICLE::REQUEST_VEHICLE_RECORDING(301, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(302, "lkheat");
			if ((((((STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) && STREAMING::HAS_MODEL_LOADED(Local_261.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_295.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_250.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(301, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(302, "lkheat")) && __LIB_14__::func_521())
			{
				switch (func_803(PLAYER::PLAYER_PED_ID(), &Local_670))
				{
					case 0:
						Local_261.f_3 = { -2855.658f, 1280.9719f, 59.1824f };
						Local_261.f_6 = 277.9344f;
						Local_261.f_13 = 301;
						break;
					case 1:
						Local_261.f_3 = { -2033.4918f, 1993.0211f, 188.9565f };
						Local_261.f_6 = 30.3781f;
						Local_261.f_13 = 302;
						break;
				}
				__LIB_17__::func_75(&iLocal_424, 0, 1);
				__LIB_17__::func_75(&iLocal_424, 1, 0);
				__LIB_17__::func_75(&iLocal_424, 2, 0);
				__LIB_16__::func_877(&iLocal_424, 0, 0);
				__LIB_16__::func_877(&iLocal_424, 1, 0);
				__LIB_16__::func_877(&iLocal_424, 2, 0);
				MISC::CLEAR_AREA(Local_261.f_3, 20f, true, false, false, false);
				__LIB_16__::func_41(&Local_261, 0, Local_261.f_3, Local_261.f_6, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, Local_261.f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_261.f_0, 5000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_261.f_0, true);
				VEHICLE::SET_PLAYBACK_SPEED(Local_261.f_0, 0f);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_261.f_0, true);
				PATHFIND::SET_ROADS_IN_AREA(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_261.f_3, Local_261.f_6, -200f, 200f, 200f), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_261.f_3, Local_261.f_6, 200f, -200f, -200f), false, true);
				func_531(&(iLocal_424[0]), 0, Local_261.f_0, -1, 0, 0, 0);
				func_293(iLocal_424[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, iLocal_424[0], "michael", 0, 1);
				__LIB_17__::func_75(&iLocal_424, 0, 1);
				Local_669 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				iLocal_219 = 10;
			}
			break;
	}
}

int func_803(int iParam0, var uParam1)//Position - 0x8F5E7
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (*uParam1 - 1))
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), *(uParam1[iVar3 /*3*/]), true);
		if (iVar3 == 0)
		{
			fVar0 = fVar1;
			iVar2 = 0;
		}
		else if (fVar1 > fVar0)
		{
			fVar0 = fVar1;
			iVar2 = iVar3;
		}
		iVar3++;
	}
	return iVar2;
}

void func_817()//Position - 0x8FD19
{
	int iVar0;
	switch (iLocal_652)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("misscommon@std_take_off_masks");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misscommon@std_take_off_masks"))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_17__::func_418(&iVar0))
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds", 8f, -8f, -1, 0, 0f, false, false, false);
								iLocal_652++;
							}
							else
							{
								iLocal_652 = 2;
							}
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_652 = 2;
							}
						}
					}
				}
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds") > 0.25f)
				{
					if (Global_113386.f_2363.f_539.f_2399[1] == 14)
					{
						func_293(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						func_293(PLAYER::PLAYER_PED_ID(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iLocal_652++;
				}
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds", 3))
			{
				STREAMING::REMOVE_ANIM_DICT("misscommon@std_take_off_masks");
				iLocal_652++;
			}
			break;
		case 3:
			break;
	}
}

void func_818()//Position - 0x8FE9B
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_263.f_0))
	{
		Local_263.f_0 = __LIB_0__::func_343(25);
		if (ENTITY::DOES_ENTITY_EXIST(Local_263.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_263.f_0, false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_263.f_0, true, true);
				ENTITY::SET_ENTITY_PROOFS(Local_263.f_0, false, true, true, false, false, false, false, false);
			}
		}
	}
}

void func_819()//Position - 0x8FEE4
{
	switch (iLocal_629)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_706, true) < 100f)
			{
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_GARBAGE_TRUCK_EXPLODE", false, -1);
				iLocal_629++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_657, "Garbage_Truck_Explosion", ENTITY::GET_ENTITY_COORDS(Local_224.f_0, false), "FBI_04_HEAT_SOUNDS", false, 0, false);
				iLocal_629++;
			}
			break;
		case 2:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_657))
			{
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_629++;
			}
			break;
		case 3:
			break;
	}
}

int func_820()//Position - 0x8FF8D
{
	func_818();
	func_845();
	func_844();
	func_841();
	func_840();
	__LIB_0__::func_467();
	func_819();
	func_838();
	if (func_829())
	{
		iLocal_219 = 9;
		return 1;
	}
	func_828();
	func_689();
	func_824();
	if (!iLocal_491)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 882.5773f, -2347.3586f, 29.3307f, true) > 150f)
		{
			func_822();
			PED::ADD_SCENARIO_BLOCKING_AREA(965.2f, -1693f, -100f, 1144.9f, -1929.1f, 100f, false, true, true, true);
		}
	}
	func_821();
	return 0;
}

void func_821()//Position - 0x9002F
{
	if (!iLocal_507)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 882.5773f, -2347.3586f, 29.3307f, true) > 250f)
		{
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			MISC::SET_FAKE_WANTED_LEVEL(0);
			PLAYER::SET_MAX_WANTED_LEVEL(1);
			PED::SET_CREATE_RANDOM_COPS(false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			func_533();
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, false);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, false);
			iLocal_507 = 1;
		}
	}
}

void func_822()//Position - 0x900C0
{
	int iVar0;
	iVar0 = 0;
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, true, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 1);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_239);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_239.f_1);
	iVar0 = 0;
	while (iVar0 <= (Local_292.f_0 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_292[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_292[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_248.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*15*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*15*/], false))
			{
				__LIB_0__::func_497(315, 1, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_248.f_0 - 1))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_248[iVar0 /*15*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_248[iVar0 /*15*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_293.f_0 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_293[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_293[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_326.f_0 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_326[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_326[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_327.f_0 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_327[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_327[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_249.f_0 - 1))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_249[iVar0 /*15*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_249[iVar0 /*15*/].f_1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_294[iVar0 /*20*/].f_1);
		iVar0++;
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_233);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_233.f_1);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_272);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_278);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_284);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_288);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_284.f_1);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_331);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_331.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Swat_01"));
	VEHICLE::REMOVE_VEHICLE_ASSET(Local_248[0 /*15*/].f_1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(16, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_249[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_249[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[2 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[3 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[4 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_248[5 /*15*/].f_13, "lkfbi4");
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_491 = 1;
}

void func_824()//Position - 0x90501
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[2]))
		{
			switch (iLocal_654)
			{
				case 0:
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_338() == 1)
						{
							if (((((func_827(&Local_292, 1) && func_826(&Local_326)) && func_826(&Local_327)) || !PED::IS_PED_IN_COMBAT(iLocal_424[2], 0)) || func_825(iLocal_424[2], 40f)) || __LIB_0__::func_611(&iLocal_628, 15000))
							{
								PED::SET_PED_KEEP_TASK(iLocal_424[2], true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_SMART_FLEE_COORD(0, 901.9453f, -2383.368f, 29.2789f, 5000f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_424[2], iLocal_693);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_424[2]);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_424[2]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_509(2));
								iLocal_654++;
							}
						}
					}
					break;
				case 1:
					break;
				}
			}
	}
}

int func_825(int iParam0, float fParam1)//Position - 0x9061B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_292.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_292[iVar0 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(Local_292[iVar0 /*20*/], true), true) < fParam1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_326.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_326[iVar0 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_326[iVar0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(Local_326[iVar0 /*20*/], true), true) < fParam1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_327.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_327[iVar0 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_327[iVar0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(Local_327[iVar0 /*20*/], true), true) < fParam1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_826(int iParam0)//Position - 0x90723
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*20*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*20*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*20*/]);
				if ((*iParam0)[iVar1 /*20*/] == Local_326[iVar1 /*20*/])
				{
					iLocal_635++;
				}
				else if ((*iParam0)[iVar1 /*20*/] == Local_327[iVar1 /*20*/])
				{
					iLocal_636++;
				}
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	iLocal_635 = iLocal_635;
	iLocal_636 = iLocal_636;
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}

int func_827(int iParam0, bool bParam1)//Position - 0x907C6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*20*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar0 /*20*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0 /*20*/]);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar0 /*20*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar0 /*20*/])->f_2));
				}
				iVar1++;
			}
		}
		else if ((iParam0[iVar0 /*20*/])->f_14)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		return 1;
	}
	return 0;
}

void func_828()//Position - 0x90852
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[0]))
		{
			switch (iLocal_622)
			{
				case 0:
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_338() == 1)
						{
							if (((((func_827(&Local_292, 1) && func_826(&Local_326)) && func_826(&Local_327)) || !PED::IS_PED_IN_COMBAT(iLocal_424[0], 0)) || func_825(iLocal_424[0], 40f)) || __LIB_0__::func_611(&iLocal_628, 15000))
							{
								TASK::CLEAR_PED_TASKS(iLocal_424[0]);
								__LIB_17__::func_606(iLocal_424[0], 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
								PED::SET_PED_KEEP_TASK(iLocal_424[0], true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_SMART_FLEE_COORD(0, 901.9453f, -2383.368f, 29.2789f, 5000f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_424[0], iLocal_693);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_424[0]);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_424[0]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_509(0));
								iLocal_622++;
							}
						}
					}
					break;
				case 1:
					break;
				}
			}
	}
}

int func_829()//Position - 0x9098C
{
	if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		iLocal_588 = 3;
	}
	switch (iLocal_588)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 1);
				__LIB_17__::func_423(&Local_224);
			}
			iLocal_588++;
			break;
		case 1:
			if (!func_835("FBI4_ENTER_VEHICLE_MA"))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI4_ENTER_VEHICLE_MA");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					func_832("FBI4_ENTER_VEHICLE_MA", 1);
				}
			}
			if (__LIB_16__::func_32(&Local_404, Local_706, 30f, 30f, 2f, 0, Local_224.f_0, "cntry_god27", "cntry_god14", "cntry_god13", 0, 0, 1, -1))
			{
				__LIB_13__::func_815(&Local_404, 1, 0);
				func_830();
				VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Local_224.f_0, true);
				__LIB_0__::func_229("cntry_god28", 7500, 1);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
				iLocal_588 = 3;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 100f, 100f, 100f, false, true, 0))
			{
				if (iLocal_649 == 0)
				{
					iLocal_649 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_0__::func_611(&iLocal_649, 100000))
				{
					func_830();
					bLocal_515 = true;
					iLocal_588 = 3;
				}
			}
			else
			{
				bLocal_515 = false;
			}
			break;
		case 2:
			iLocal_588++;
			break;
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 100f, 100f, 100f, false, true, 0))
			{
				if (iLocal_649 == 0)
				{
					iLocal_649 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_0__::func_611(&iLocal_649, 100000))
				{
					bLocal_515 = true;
				}
			}
			else
			{
				bLocal_515 = false;
			}
			if (!bLocal_515)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 40f, 40f, 15f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_224.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_224.f_2));
					}
					bLocal_501 = true;
					__LIB_16__::func_32(&Local_404, Local_706, 20f, 20f, 10f, 1, Local_224.f_0, "", "cntry_god14", "cntry_god13", 1, 0, 1, -1);
				}
				else
				{
					if (!iLocal_514)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 15f, 15f, 10f, false, true, 0))
							{
								if (__LIB_0__::func_213(Local_224.f_0, 5f, 1, 1056964608, 0, 1, 0))
								{
									iLocal_514 = 1;
								}
							}
						}
					}
					if (!iLocal_508)
					{
						if (!HUD::DOES_BLIP_EXIST(Local_224.f_2))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0))
							{
								if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
								{
									HUD::REMOVE_BLIP(&(Local_404.f_5));
								}
								if (HUD::DOES_BLIP_EXIST(Local_404.f_0))
								{
									HUD::REMOVE_BLIP(&Local_404);
								}
								__LIB_0__::func_229("cntry_god25", 12000, 1);
								Local_224.f_2 = __LIB_0__::func_639(Local_224.f_0, 1, 0);
								iLocal_508 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 20f, 20f, 10f, false, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
						{
							HUD::REMOVE_BLIP(&(Local_404.f_5));
						}
						if (HUD::DOES_BLIP_EXIST(Local_404.f_0))
						{
							HUD::REMOVE_BLIP(&Local_404);
						}
						if (!HUD::DOES_BLIP_EXIST(Local_224.f_2))
						{
							if (iLocal_508)
							{
								Local_224.f_2 = __LIB_0__::func_639(Local_224.f_0, 1, 0);
							}
						}
						bLocal_501 = false;
					}
					else if (bLocal_501)
					{
						if (!HUD::DOES_BLIP_EXIST(Local_224.f_2))
						{
							__LIB_16__::func_32(&Local_404, Local_706, 0.01f, 0.01f, 10f, 1, Local_224.f_0, "cntry_god24", "cntry_god14", "cntry_god13", 1, 0, 1, -1);
						}
					}
				}
			}
			else
			{
				if (!iLocal_508)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_224.f_2))
					{
						__LIB_0__::func_229("cntry_god25", 12000, 1);
						Local_224.f_2 = __LIB_0__::func_639(Local_224.f_0, 1, 0);
						iLocal_508 = 1;
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_224.f_2))
				{
					Local_224.f_2 = __LIB_0__::func_639(Local_224.f_0, 1, 0);
				}
				if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_404.f_5));
				}
				if (HUD::DOES_BLIP_EXIST(Local_404.f_0))
				{
					HUD::REMOVE_BLIP(&Local_404);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
				__LIB_13__::func_815(&Local_404, 1, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (!ENTITY::IS_ENTITY_IN_WATER(Local_224.f_0))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_224.f_0, false), 0, 2f, true, false, 1f, false);
				}
				if (HUD::DOES_BLIP_EXIST(Local_224.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_224.f_2));
				}
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_638 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 4:
			break;
	}
	return 0;
}

void func_830()//Position - 0x90E10
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), 5000, false, false);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN")) < 5000)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), 5000, false);
	}
}

void func_832(char* sParam0, bool bParam1)//Position - 0x90EB2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_567)
		{
			if (iLocal_567[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_567[iVar1] == 0)
			{
				iLocal_567[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_834(iVar0);
		if (iVar3 != -1)
		{
			iLocal_567[iVar3] = 0;
			func_833();
		}
	}
}

void func_833()//Position - 0x90F2D
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_567 - 1))
	{
		if (iLocal_567[iVar0] == 0)
		{
			if (iLocal_567[iVar0 + 1] != 0)
			{
				iLocal_567[iVar0] = iLocal_567[iVar0 + 1];
				iLocal_567[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_834(int iParam0)//Position - 0x90F80
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_567)
	{
		if (iLocal_567[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_567[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_835(char* sParam0)//Position - 0x90FC3
{
	return func_834(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_838()//Position - 0x91076
{
	switch (iLocal_640)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_COPS_ARRIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_COPS_ARRIVE");
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_GO_TO_ALLEYWAY");
				iLocal_640++;
			}
			break;
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_224.f_2))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_GO_TO_ALLEYWAY"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_GO_TO_ALLEYWAY");
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_DESTROY_TRUCK");
				iLocal_640++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_GO_TO_ALLEYWAY"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_GO_TO_ALLEYWAY");
				}
				iLocal_640++;
			}
			break;
		case 3:
			break;
	}
}

void func_840()//Position - 0x91142
{
	int iVar0;
	switch (iLocal_593)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_ENTER_VEHICLE_MA");
				func_832("FBI4_ENTER_VEHICLE_MA", 1);
				iLocal_593++;
			}
			break;
		case 1:
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
			{
				if (iVar0 == joaat("WEAPON_PETROLCAN"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI4_PETROL");
					iLocal_593 = 2;
				}
			}
			AUDIO::PREPARE_MUSIC_EVENT("FBI4_PETROL_EXPLODE");
			if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_PETROL_EXPLODE");
				iLocal_593 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_PETROL_EXPLODE");
				iLocal_593++;
			}
			break;
		case 3:
			break;
	}
}

void func_841()//Position - 0x91206
{
	if (!__LIB_13__::func_755(&Local_404, 0))
	{
		switch (iLocal_571)
		{
			case 0:
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 0);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 2);
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_SHOOTOUT_MID_MA");
				func_832("fbi4_SHOOTOUT_MID_MA", 1);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, 0, "michael", 0, 1);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, 0, "TREVOR", 0, 1);
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_end_1", 7, 0, 0, 0))
				{
					iLocal_571 = 2;
				}
				else
				{
					iLocal_571 = 1;
				}
				break;
			case 1:
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_end_1", 7, 0, 0, 0))
				{
					iLocal_571++;
				}
				break;
			case 2:
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_end_2", 7, 0, 0, 0))
				{
					iLocal_571++;
				}
				break;
			case 3:
				break;
			}
	}
}

void func_844()//Position - 0x9136D
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_263.f_0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_224.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_263.f_0, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_263.f_0) || __LIB_0__::func_611(&iLocal_638, 3500))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_263.f_0, false, false, false, false, false, false, false, false);
				}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_263.f_0, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_263.f_0))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_263.f_0, false, false, false, false, false, false, false, false);
				}
			}
		}
	}
}

void func_845()//Position - 0x913F8
{
	if (bLocal_503)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_263.f_0))
		{
			STREAMING::REQUEST_MODEL(Local_263.f_1);
			if (STREAMING::HAS_MODEL_LOADED(Local_263.f_1))
			{
				MISC::CLEAR_AREA(Local_263.f_3, 10f, true, false, false, false);
				Local_263.f_0 = VEHICLE::CREATE_VEHICLE(Local_263.f_1, Local_263.f_3, Local_263.f_6, true, true, false);
				ENTITY::SET_ENTITY_PROOFS(Local_263.f_0, false, true, true, false, false, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_263.f_0, 5f);
			}
		}
	}
}

void func_846()//Position - 0x91471
{
	switch (iLocal_597)
	{
		case 0:
			if (!func_835("cntry_help6"))
			{
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					__LIB_0__::func_229("cntry_help6", 7500, 1);
					func_832("cntry_help6", 1);
				}
			}
			if (func_850(&iLocal_424, 1, 1))
			{
				if (__LIB_17__::func_79(&iLocal_424, 1))
				{
					if (func_848())
					{
						func_847();
						iLocal_597++;
					}
				}
			}
			else if (__LIB_0__::func_611(&iLocal_653, 12500))
			{
				func_794(&iLocal_424, 1);
				func_848();
				func_847();
				iLocal_597++;
			}
			break;
		case 1:
			if (__LIB_17__::func_668(&Local_468, 3, 0, 999f, 999f, 0, 0, 0, 0, 0))
			{
				if (Local_468.f_18)
				{
					if (!Local_468.f_19)
					{
						if (__LIB_42__::func_560(&iLocal_424, 1, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_424[1]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[1], true);
								TASK::CLEAR_PED_TASKS(iLocal_424[1]);
							}
							if (!PED::IS_PED_INJURED(iLocal_424[2]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[2], true);
								TASK::CLEAR_PED_TASKS(iLocal_424[2]);
							}
							Local_468.f_19 = 1;
						}
					}
				}
			}
			else
			{
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_424[2], 806.297f, -2289.667f, 50.598f, 796.823f, -2421.828f, 64.098f, 37f, false, true, 0) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_424[2], true), true) > 30f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_424[2])))
				{
					PED::DELETE_PED(&(iLocal_424[2]));
				}
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_628 = MISC::GET_GAME_TIMER();
				func_408(4, "burn the truck", 1, 0, 0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_224.f_0, true);
					ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, false, false, false, false, false, false, false, false);
				}
				__LIB_17__::func_713(&Local_404, 1);
				iLocal_219 = 8;
			}
			break;
	}
}

void func_847()//Position - 0x91665
{
	HUD::CLEAR_PRINTS();
	func_832("cntry_help6", 1);
	if (HUD::DOES_BLIP_EXIST(iLocal_680))
	{
		HUD::REMOVE_BLIP(&iLocal_680);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_679))
	{
		HUD::REMOVE_BLIP(&iLocal_679);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_681))
	{
		HUD::REMOVE_BLIP(&iLocal_681);
	}
}

int func_848()//Position - 0x916AE
{
	Local_468.f_12 = iLocal_424[1];
	if (HUD::DOES_BLIP_EXIST(iLocal_681))
	{
		HUD::REMOVE_BLIP(&iLocal_681);
	}
	HUD::CLEAR_HELP(true);
	bLocal_490 = true;
	iLocal_727 = 1;
	return 1;
}

bool func_850(int iParam0, bool bParam1, int iParam2)//Position - 0x916FD
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
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__::func_81());
	bVar8 = __LIB_13__::func_749(bParam1);
	iParam0->f_6 = __LIB_0__::func_682(__LIB_17__::func_338());
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
		__LIB_16__::func_866(iParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__::func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_15__::func_969(iVar10) && __LIB_15__::func_973(iVar10)) && iVar10 == __LIB_0__::func_682(Global_113386.f_2363.f_539.f_4323))
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
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_13__::func_94() || __LIB_0__::func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__::func_39(14))
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
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_0__::func_540(0) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(3) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(2) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(9) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(10) || Global_23011.f_12) || __LIB_0__::func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__::func_39(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_16__::func_12(iParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_16__::func_12(iParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_16__::func_12(iParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_16__::func_12(iParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = func_794(iParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = func_794(iParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_17__::func_88(iParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = func_794(iParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
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
						iVar11 = __LIB_17__::func_338();
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
									if (func_794(iParam0, 0))
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
									if (func_794(iParam0, 1))
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
									if (func_794(iParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (func_794(iParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_794(iParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_794(iParam0, bVar14))
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

int func_866()//Position - 0x92C96
{
	func_932();
	func_931();
	func_930(&(Local_292[8 /*20*/]));
	func_930(&(Local_292[9 /*20*/]));
	func_930(&(Local_292[31 /*20*/]));
	if (func_918())
	{
		return 1;
	}
	func_915();
	func_912();
	func_911();
	func_910();
	func_909();
	func_907();
	func_905();
	if (Global_3)
	{
		func_904();
	}
	func_902();
	func_901();
	func_895();
	func_891();
	func_873();
	func_871();
	func_870();
	func_869();
	func_867();
	return 0;
}

void func_867()//Position - 0x92D1E
{
	switch (iLocal_581)
	{
		case 0:
			if (AUDIO::PREPARE_MUSIC_EVENT("fbi4_SHOOTOUT_MA"))
			{
				if (((bLocal_485 || func_868(&(Local_248[0 /*15*/]), 30f)) || func_868(&(Local_248[1 /*15*/]), 30f)) || func_868(&(Local_248[2 /*15*/]), 30f))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || CAM::DOES_CAM_EXIST(Local_468.f_9))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("fbi4_SHOOTOUT_MA");
						iLocal_581++;
					}
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

int func_868(var uParam0, float fParam1)//Position - 0x92DC6
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*uParam0, true), true) < fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_869()//Position - 0x92E05
{
	if (!PED::IS_PED_INJURED(Local_288.f_0))
	{
		switch (iLocal_557)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_540))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_540) >= 0.25f)
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_288.f_0);
						ENTITY::SET_ENTITY_HEALTH(Local_288.f_0, 200, 0);
						PED::SET_PED_MAX_HEALTH(Local_288.f_0, 200);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_288.f_0, 1);
						ENTITY::SET_ENTITY_PROOFS(Local_288.f_0, false, false, false, false, false, false, false, false);
						ENTITY::SET_ENTITY_COLLISION(Local_288.f_0, true, false);
						iLocal_557 = 1;
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Local_288.f_0) <= 9900)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_288.f_0, true, true, true, true, true, false, false, false);
						iLocal_557 = 3;
					}
				}
				break;
			case 1:
				if (func_688(&Local_288, &(Local_288.f_10), Local_288.f_14))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_540))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_540) >= 0.25f)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 40000f);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_288.f_0, iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_557++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_540))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_540) >= 0.655f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 40000f);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
						TASK::TASK_PERFORM_SEQUENCE(Local_288.f_0, iLocal_693);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
						iLocal_557++;
					}
				}
				else
				{
					iLocal_557++;
				}
				break;
			case 2:
				PED::SET_PED_CONFIG_FLAG(Local_288.f_0, 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_288);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_288.f_1);
				iLocal_557++;
				break;
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_540) >= 0.262f)
				{
					PED::SET_PED_TO_RAGDOLL(Local_288.f_0, 2000, 3000, 0, true, true, false);
					TASK::CLEAR_PED_TASKS(Local_288.f_0);
					ENTITY::SET_ENTITY_HEALTH(Local_288.f_0, 2, 0);
				}
				break;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_288.f_0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_288);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_288.f_1);
		}
		if (!Local_288.f_14)
		{
			Local_288.f_0 = PED::CREATE_PED(26, Local_288.f_1, Local_288.f_3, Local_288.f_9, true, true);
			Local_288.f_14 = 1;
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_288.f_0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_288.f_0, false);
			ENTITY::SET_ENTITY_HEALTH(Local_288.f_0, 10000, 0);
			PED::SET_PED_MAX_HEALTH(Local_288.f_0, 10000);
			ENTITY::SET_ENTITY_PROOFS(Local_288.f_0, false, true, true, true, true, false, false, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_288.f_0, 55);
			PED::SET_PED_CONFIG_FLAG(Local_288.f_0, 208, true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_288.f_0, true);
			PED::SET_PED_KEEP_TASK(Local_288.f_0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_288.f_0, true);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 7, Local_288.f_0, "AGENT2", 0, 1);
			PED::SET_PED_NAME_DEBUG(Local_288.f_0, &(Local_288.f_16));
			Local_659 = { 0f, 0f, 0f };
			Local_660 = { 0f, 0f, 0f };
			iLocal_540 = PED::CREATE_SYNCHRONIZED_SCENE(Local_659, Local_660, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_288.f_0, iLocal_540, "missfbi4", "push_agents_agent2", 1000f, -4f, 5, 0, 1000f, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_540, Local_233.f_0, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_288.f_0, false, false);
		}
	}
}

void func_870()//Position - 0x9317C
{
	if (!PED::IS_PED_INJURED(Local_284.f_0))
	{
		switch (iLocal_553)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_539))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_539) >= 0.28f)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_284.f_0, false, false, false, false, false, false, false, false);
						ENTITY::SET_ENTITY_COLLISION(Local_284.f_0, true, false);
					}
				}
				if (func_688(&Local_284, &(Local_284.f_10), Local_284.f_14))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 40000f);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
					TASK::TASK_PERFORM_SEQUENCE(Local_284.f_0, iLocal_693);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					iLocal_553 = 1;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_539))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_539) >= 1f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 40000f);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
						TASK::TASK_PERFORM_SEQUENCE(Local_284.f_0, iLocal_693);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
						iLocal_553 = 1;
					}
				}
				else
				{
					iLocal_553 = 1;
				}
				break;
			case 1:
				PED::SET_PED_CONFIG_FLAG(Local_284.f_0, 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_284);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_284.f_1);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 6);
				iLocal_553++;
				break;
			case 2:
				break;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_284.f_0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_284);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_284.f_1);
			__LIB_0__::func_221(&(Local_701[0 /*165*/]), 6);
		}
		if (!Local_284.f_14)
		{
			Local_284.f_0 = PED::CREATE_PED(26, Local_284.f_1, Local_284.f_3, Local_284.f_9, true, true);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_284.f_0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_284.f_0, 54);
			PED::SET_PED_CONFIG_FLAG(Local_284.f_0, 208, true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_284.f_0, true);
			PED::SET_PED_KEEP_TASK(Local_284.f_0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_284.f_0, true);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 6, Local_284.f_0, "AGENT1", 0, 1);
			PED::SET_PED_NAME_DEBUG(Local_284.f_0, &(Local_284.f_16));
			Local_284.f_14 = 1;
			Local_659 = { 0f, 0f, 0f };
			Local_660 = { 0f, 0f, 0f };
			iLocal_539 = PED::CREATE_SYNCHRONIZED_SCENE(Local_659, Local_660, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_284.f_0, iLocal_539, "missfbi4", "push_agents_agent1", 1000f, -4f, 1, 0, 1000f, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_539, Local_233.f_0, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_284.f_0, false, false);
		}
	}
}

void func_871()//Position - 0x9342F
{
	if (!Global_96894)
	{
		if (__LIB_17__::func_338() == 0 && !CAM::DOES_CAM_EXIST(Local_468.f_9))
		{
			if (iLocal_648 == 0)
			{
				iLocal_648 = MISC::GET_GAME_TIMER();
			}
			else if (__LIB_0__::func_611(&iLocal_648, 3000))
			{
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						__LIB_0__::func_151("cntry_help11_KM", -1);
					}
					else
					{
						__LIB_0__::func_151("cntry_help11", -1);
					}
				}
				else
				{
					__LIB_0__::func_151("cntry_help11", -1);
				}
				Global_96894 = 1;
			}
		}
	}
}

void func_873()//Position - 0x934C4
{
	int iVar0;
	int iVar1;
	if ((!__LIB_17__::func_490(&iLocal_424) && !Local_468.f_16) && bLocal_486)
	{
		switch (iLocal_547)
		{
			case 0:
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_van0", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 15f, 4);
						iLocal_547++;
					}
				}
				break;
			case 1:
				if (!func_835("heat_killM"))
				{
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						if ((!ENTITY::DOES_ENTITY_EXIST(Local_284.f_0) && Local_284.f_14) && (!ENTITY::DOES_ENTITY_EXIST(Local_288.f_0) && Local_288.f_14))
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_killM", 7, 0, 0, 0))
							{
								func_832("heat_killM", 1);
							}
						}
					}
				}
				if (iLocal_536 > 3)
				{
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "sirens", 7, 0, 0, 0))
						{
							iLocal_547++;
						}
					}
				}
				break;
			case 2:
				iLocal_547++;
				break;
			case 3:
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "cops_wave_0", 7, 0, 0, 0))
					{
						iLocal_547++;
					}
				}
				break;
			case 4:
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 873.3599f, -2352.4114f, 29.3306f, 4f, 4f, 2f, false, true, 0) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 873.3599f, -2352.4114f, 29.3306f, 4f, 4f, 2f, false, true, 0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_cover", 7, 0, 0, 0))
						{
							iLocal_547++;
						}
					}
					else if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_cover2", 7, 0, 0, 0))
					{
						iLocal_547++;
					}
				}
				break;
			case 5:
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "get_ready_0", 7, 0, 0, 0))
				{
					iLocal_547++;
				}
				break;
			case 6:
				iLocal_547++;
				break;
			case 7:
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "get_ready_1", 7, 0, 0, 0))
					{
						iLocal_547++;
					}
				}
				break;
			case 8:
				if (bLocal_485)
				{
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_229("cntry_god9", 7500, 1);
						iLocal_547++;
					}
				}
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
			case 22:
				break;
		}
		if (iLocal_547 > 8)
		{
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				if (func_888())
				{
					return;
				}
				if (func_886())
				{
					return;
				}
				if (func_882())
				{
					return;
				}
				if (func_881())
				{
					return;
				}
				if (func_880())
				{
					return;
				}
				if (func_879())
				{
					return;
				}
				if (!func_835("instruct_1"))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "instruct_1", 7, 0, 0, 0))
					{
						func_832("instruct_1", 1);
					}
				}
				if (!func_835("trevor_rpg"))
				{
					if (bLocal_485)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_424[2], joaat("WEAPON_RPG"), false))
							{
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "trevor_rpg", 7, 0, 0, 0))
								{
									func_832("trevor_rpg", 1);
								}
							}
						}
					}
				}
				if (!func_835("rpg_M_respon"))
				{
					if (__LIB_17__::func_338() == 0)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(4, Local_665, 10f))
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "rpg_M_respon", 7, 0, 0, 0))
							{
								func_832("rpg_M_respon", 1);
							}
						}
					}
				}
				if (!func_835("rpg_f_respon"))
				{
					if (__LIB_17__::func_338() == 1)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(4, Local_665, 10f))
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "rpg_f_respon", 7, 0, 0, 0))
							{
								func_832("rpg_f_respon", 1);
							}
						}
					}
				}
				if (!func_835("all_out"))
				{
					if (__LIB_17__::func_338() == 2)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RPG"), false))
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "all_out", 7, 0, 0, 0))
							{
								func_832("all_out", 1);
							}
						}
					}
				}
			}
			if (!func_835("fbi4_norock"))
			{
				if (__LIB_17__::func_338() == 2)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RPG"), false))
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_norock", 6, 0, 0, 0))
						{
							func_832("fbi4_norock", 1);
							iLocal_546 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (bLocal_485)
		{
			iVar0 = (func_874() - iLocal_578);
			if (iVar0 > iLocal_577)
			{
				iLocal_577 = iVar0;
				iLocal_632 = MISC::GET_GAME_TIMER();
			}
			if (__LIB_0__::func_611(&iLocal_546, 7000))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						switch (__LIB_17__::func_338())
						{
							case 0:
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_M_att0", 6, 0, 0, 0))
								{
									iLocal_546 = MISC::GET_GAME_TIMER();
								}
								break;
							case 1:
								if ((MISC::GET_GAME_TIMER() - iLocal_632) < 1000)
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FShoot1", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
								else if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_F_att0", 6, 0, 0, 0))
								{
									iLocal_546 = MISC::GET_GAME_TIMER();
								}
								break;
							case 2:
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
								if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 10f)
								{
									if (iVar1 == joaat("WEAPON_RPG"))
									{
										if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_T_att0", 6, 0, 0, 0))
										{
											iLocal_546 = MISC::GET_GAME_TIMER();
										}
									}
									else if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_rattack", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
								break;
							}
					}
				}
				else if (!__LIB_13__::func_755(&Local_404, 0))
				{
					switch (__LIB_17__::func_338())
					{
						case 0:
							if (!PED::IS_PED_INJURED(iLocal_424[2]))
							{
								if (PED::IS_PED_SHOOTING(iLocal_424[2]))
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_t_att0", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_424[1]))
							{
								if (PED::IS_PED_SHOOTING(iLocal_424[1]))
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_F_att0", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(iLocal_424[0]))
							{
								if (PED::IS_PED_SHOOTING(iLocal_424[0]))
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_M_att0", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_424[2]))
							{
								if (PED::IS_PED_SHOOTING(iLocal_424[2]))
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_t_att0", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						case 2:
							if (!PED::IS_PED_INJURED(iLocal_424[0]))
							{
								if (PED::IS_PED_SHOOTING(iLocal_424[0]))
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_M_att0", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_424[1]))
							{
								if (PED::IS_PED_SHOOTING(iLocal_424[1]))
								{
									if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FShoot1", 6, 0, 0, 0))
									{
										iLocal_546 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						}
					}
				}
		}
	}
	else if (!bLocal_486)
	{
		if (__LIB_0__::func_75())
		{
			__LIB_0__::func_325();
		}
	}
}

int func_874()//Position - 0x93CC1
{
	return (((__LIB_39__::func_434() + func_877()) + func_876()) + func_875());
}

int func_875()//Position - 0x93CDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	STATS::STAT_GET_INT(joaat("SP0_HELIS_EXPLODED"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("SP1_HELIS_EXPLODED"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("SP2_HELIS_EXPLODED"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_876()//Position - 0x93D12
{
	int iVar0;
	int iVar1;
	int iVar2;
	STATS::STAT_GET_INT(joaat("SP0_CARS_COPS_EXPLODED"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("SP1_CARS_COPS_EXPLODED"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("SP2_CARS_COPS_EXPLODED"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_877()//Position - 0x93D49
{
	int iVar0;
	int iVar1;
	int iVar2;
	STATS::STAT_GET_INT(joaat("SP0_KILLS_SWAT"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("SP1_KILLS_SWAT"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("SP2_KILLS_SWAT"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_879()//Position - 0x93DB7
{
	if (!func_835("fbi4_FrNice"))
	{
		if (Local_294[1 /*20*/].f_14)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FrNice", 7, 0, 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("cntry_god34");
					func_832("fbi4_FrNice", 1);
					iLocal_644 = 5;
				}
			}
		}
	}
	switch (iLocal_644)
	{
		case 0:
			switch (__LIB_17__::func_338())
			{
				case 0:
				case 1:
					if (Local_294[1 /*20*/].f_14)
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "sniper_chopt", 7, 0, 0, 0))
						{
							iLocal_644++;
							return 1;
						}
					}
					break;
				case 2:
					if (Local_294[1 /*20*/].f_14)
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "sniper_chopm", 7, 0, 0, 0))
						{
							iLocal_644++;
							return 1;
						}
					}
					break;
			}
			break;
		case 1:
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				__LIB_0__::func_229("cntry_god34", 7500, 1);
				iLocal_644++;
				return 1;
			}
			break;
		case 2:
			if (Local_294[1 /*20*/].f_14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FrHeli", 7, 0, 0, 0))
					{
						iLocal_644++;
						return 1;
					}
				}
			}
			break;
		case 3:
			if (Local_294[1 /*20*/].f_14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
				{
					switch (__LIB_17__::func_338())
					{
						case 0:
							if (!func_835("sniper_chopf"))
							{
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "sniper_chopf", 7, 0, 0, 0))
								{
									func_832("sniper_chopf", 1);
									return 1;
								}
							}
							break;
						case 1:
							if (!func_835("sniper_chopm"))
							{
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "sniper_chopm", 7, 0, 0, 0))
								{
									func_832("sniper_chopm", 1);
									return 1;
								}
							}
							break;
						case 2:
							if (!func_835("sniper_chopf"))
							{
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "sniper_chopm", 7, 0, 0, 0))
								{
									func_832("sniper_chopf", 1);
									return 1;
								}
							}
							break;
						}
					}
			}
			break;
		case 5:
			break;
	}
	return 0;
}

int func_880()//Position - 0x94015
{
	if (iLocal_643 < 2)
	{
		if (bLocal_512)
		{
			HUD::CLEAR_THIS_PRINT("cntry_god33");
			iLocal_643 = 2;
		}
	}
	switch (iLocal_643)
	{
		case 0:
			if (Local_292[34 /*20*/].f_14)
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_micleft", 7, 0, 0, 0))
				{
					iLocal_643++;
					return 1;
				}
			}
			break;
		case 1:
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				__LIB_0__::func_229("cntry_god33", 7500, 1);
				iLocal_643++;
				return 1;
			}
			break;
		case 2:
			break;
	}
	return 0;
}

int func_881()//Position - 0x940B3
{
	if (!bLocal_490)
	{
		switch (iLocal_568)
		{
			case 0:
				if (__LIB_0__::func_611(&iLocal_556, 7000))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_info0", 7, 0, 0, 0))
					{
						iLocal_556 = MISC::GET_GAME_TIMER();
						iLocal_568++;
						return 1;
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_611(&iLocal_556, 20000))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_info1", 7, 0, 0, 0))
					{
						iLocal_556 = MISC::GET_GAME_TIMER();
						iLocal_568++;
						return 1;
					}
				}
				break;
			case 2:
				break;
			}
	}
	return 0;
}

int func_882()//Position - 0x9415C
{
	int iVar0;
	if (bLocal_511)
	{
		if ((!PED::IS_PED_INJURED(Local_292[8 /*20*/]) || !PED::IS_PED_INJURED(Local_292[9 /*20*/])) || !PED::IS_PED_INJURED(Local_292[31 /*20*/]))
		{
			iVar0 = func_885();
			if (!func_835("fbi4_first"))
			{
				if (iVar0 == 1)
				{
					if (bLocal_524)
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_first", 7, 0, 0, 0))
						{
							func_832("fbi4_first", 1);
							return 1;
						}
					}
				}
			}
			if (!func_835("f_snip_react"))
			{
				if (func_835("fbi4_first"))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "f_snip_react", 7, 0, 0, 0))
					{
						func_832("f_snip_react", 1);
						return 1;
					}
				}
			}
			if (!func_835("fbi4_second"))
			{
				if (iVar0 == 2)
				{
					if (bLocal_524)
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_second", 7, 0, 0, 0))
						{
							func_832("fbi4_second", 1);
							return 1;
						}
					}
				}
			}
			if (!func_835("t_snip_see"))
			{
				if (iLocal_603 > 1)
				{
					if (__LIB_17__::func_338() == 2)
					{
						if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "t_snip_see", 7, 0, 0, 0))
							{
								func_832("t_snip_see", 1);
								return 1;
							}
						}
					}
				}
			}
			switch (iLocal_603)
			{
				case 0:
					if (func_884())
					{
						if (__LIB_17__::func_338() != 1)
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "f_snipers2", 7, 0, 0, 0))
							{
								iLocal_603++;
								return 1;
							}
						}
						else if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "m_snipers2", 7, 0, 0, 0))
						{
							iLocal_603++;
							return 1;
						}
					}
					break;
				case 1:
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						__LIB_0__::func_229("cntry_god32", 7500, 1);
						iLocal_603++;
						return 1;
					}
					break;
				case 2:
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "snip_on_roof", 7, 0, 0, 0))
					{
						iLocal_603++;
						return 1;
					}
					break;
				case 3:
					if (__LIB_17__::func_338() != 1)
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "f_snip_help", 7, 0, 0, 0))
						{
							iLocal_603++;
							iLocal_605 = MISC::GET_GAME_TIMER();
							return 1;
						}
					}
					else if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "m_snip_help", 7, 0, 0, 0))
					{
						iLocal_603++;
						iLocal_605 = MISC::GET_GAME_TIMER();
						return 1;
					}
					break;
				case 4:
					if (__LIB_0__::func_611(&iLocal_605, 30000))
					{
						switch (__LIB_17__::func_338())
						{
							case 0:
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "f_snipers", 7, 0, 0, 0))
								{
									iLocal_603++;
									return 1;
								}
								break;
							case 1:
								if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "m_snipers", 7, 0, 0, 0))
								{
									iLocal_603++;
									return 1;
								}
								break;
							case 2:
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "m_snipers", 7, 0, 0, 0))
										{
											iLocal_603++;
											return 1;
										}
										break;
									case 1:
										if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "f_snipers", 7, 0, 0, 0))
										{
											iLocal_603++;
											return 1;
										}
										break;
								}
								break;
							}
					}
					break;
				case 5:
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "snip_on_roof", 7, 0, 0, 0))
					{
						iLocal_605 = MISC::GET_GAME_TIMER();
						iLocal_603 = 4;
						return 1;
					}
					break;
			}
		}
		else
		{
			if (__LIB_0__::func_501("cntry_god32", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("cntry_god32");
			}
			if (!func_835("fbi4_gone"))
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_gone", 7, 0, 0, 0))
				{
					func_832("fbi4_gone", 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_884()//Position - 0x94589
{
	if (!iLocal_518)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_292[8 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_292[8 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_292[8 /*20*/], Local_292[8 /*20*/].f_6, 1f, 1f, 2f, false, true, 0))
				{
					iLocal_518 = 1;
					return 1;
				}
			}
		}
		else if (Local_292[8 /*20*/].f_14)
		{
			iLocal_518 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_292[9 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_292[9 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_292[9 /*20*/], Local_292[9 /*20*/].f_6, 1f, 1f, 2f, false, true, 0))
				{
					iLocal_518 = 1;
					return 1;
				}
			}
		}
		else if (Local_292[9 /*20*/].f_14)
		{
			iLocal_518 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_292[31 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_292[31 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_292[31 /*20*/], Local_292[31 /*20*/].f_6, 1f, 1f, 2f, false, true, 0))
				{
					iLocal_518 = 1;
					return 1;
				}
			}
		}
		else if (Local_292[31 /*20*/].f_14)
		{
			iLocal_518 = 1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_885()//Position - 0x946B1
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_292[8 /*20*/]))
	{
		if (PED::IS_PED_INJURED(Local_292[8 /*20*/]))
		{
			iVar0++;
		}
	}
	else if (Local_292[8 /*20*/].f_14)
	{
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_292[9 /*20*/]))
	{
		if (PED::IS_PED_INJURED(Local_292[9 /*20*/]))
		{
			iVar0++;
		}
	}
	else if (Local_292[9 /*20*/].f_14)
	{
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_292[31 /*20*/]))
	{
		if (PED::IS_PED_INJURED(Local_292[31 /*20*/]))
		{
			iVar0++;
		}
	}
	else if (Local_292[31 /*20*/].f_14)
	{
		iVar0++;
	}
	return iVar0;
}

int func_886()//Position - 0x94763
{
	if (iLocal_642 < 3)
	{
		if (bLocal_511)
		{
			if (__LIB_0__::func_501("cntry_god31", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("cntry_god31");
			}
			iLocal_642 = 3;
		}
	}
	switch (iLocal_642)
	{
		case 0:
			if (bLocal_510)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
				{
					switch (__LIB_17__::func_338())
					{
						case 0:
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_clearm", 7, 0, 0, 0))
							{
								iLocal_642++;
								return 1;
							}
							break;
						case 1:
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_clearf", 7, 0, 0, 0))
							{
								iLocal_642++;
								return 1;
							}
							break;
					}
				}
				else
				{
					iLocal_642++;
				}
			}
			break;
		case 1:
			if (func_887())
			{
				iLocal_519 = 1;
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				__LIB_0__::func_229("cntry_god31", 7500, 1);
				func_832("cntry_god31", 1);
				iLocal_642++;
				return 1;
			}
			break;
		case 3:
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FrGot", 7, 0, 0, 0))
				{
					iLocal_642++;
					return 1;
				}
			}
			break;
		case 4:
			break;
	}
	return 0;
}

int func_887()//Position - 0x948E1
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_424[0], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
		{
			if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_MFront", 7, 0, 0, 0))
			{
				iLocal_642++;
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_424[1], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
		{
			if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FFront", 7, 0, 0, 0))
			{
				iLocal_642++;
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_424[2], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
		{
			if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_Tfront", 7, 0, 0, 0))
			{
				iLocal_642++;
				return 1;
			}
		}
	}
	return 0;
}

int func_888()//Position - 0x94A22
{
	if (iLocal_627 < 5)
	{
		if (iLocal_627 > 2)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0) || func_889())
			{
				iLocal_627 = 5;
			}
		}
	}
	switch (iLocal_627)
	{
		case 0:
			if (Local_292[12 /*20*/].f_14)
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_frankB", 7, 0, 0, 0))
				{
					iLocal_627++;
					return 1;
				}
			}
			break;
		case 1:
			if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "alleycops1", 7, 0, 0, 0))
			{
				iLocal_627++;
				return 1;
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				__LIB_0__::func_229("cntry_god30", 7500, 1);
				iLocal_627++;
				return 1;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0) && !func_889())
			{
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_frankB2", 7, 0, 0, 0))
					{
						iLocal_627++;
						return 1;
					}
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0) && !func_889())
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_frankB3", 7, 0, 0, 0))
				{
					iLocal_627++;
					return 1;
				}
			}
			break;
		case 5:
			break;
	}
	return 0;
}

int func_889()//Position - 0x94C07
{
	int iVar0;
	iVar0 = 12;
	while (iVar0 <= 13)
	{
		if (Local_292[iVar0 /*20*/].f_14)
		{
			if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 16;
	while (iVar0 <= 18)
	{
		if (Local_292[iVar0 /*20*/].f_14)
		{
			if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_891()//Position - 0x94CC8
{
	switch (iLocal_626)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
			{
				__LIB_17__::func_75(&iLocal_424, 0, 0);
			}
			iLocal_329 = 4;
			if (bLocal_510)
			{
				if (iLocal_519)
				{
					switch (__LIB_17__::func_338())
					{
						case 0:
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 1);
							__LIB_16__::func_879(&iLocal_424, 1, 2, 0);
							iLocal_329 = 1;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
							break;
						case 1:
							__LIB_17__::func_75(&iLocal_424, 0, 1);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_16__::func_879(&iLocal_424, 0, 2, 0);
							iLocal_329 = 0;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
							break;
						case 2:
							if (iLocal_609 == 1)
							{
								__LIB_17__::func_75(&iLocal_424, 0, 0);
								__LIB_17__::func_75(&iLocal_424, 2, 0);
								__LIB_17__::func_75(&iLocal_424, 1, 1);
								__LIB_16__::func_879(&iLocal_424, 1, 2, 0);
								iLocal_329 = 1;
								iLocal_625 = MISC::GET_GAME_TIMER();
								iLocal_626++;
							}
							else if (iLocal_610 == 1)
							{
								__LIB_17__::func_75(&iLocal_424, 0, 1);
								__LIB_17__::func_75(&iLocal_424, 2, 0);
								__LIB_17__::func_75(&iLocal_424, 1, 0);
								__LIB_16__::func_879(&iLocal_424, 0, 2, 0);
								iLocal_329 = 0;
								iLocal_625 = MISC::GET_GAME_TIMER();
								iLocal_626++;
							}
							else
							{
								__LIB_17__::func_75(&iLocal_424, 0, 0);
								__LIB_17__::func_75(&iLocal_424, 2, 0);
								__LIB_17__::func_75(&iLocal_424, 1, 1);
								__LIB_16__::func_879(&iLocal_424, 1, 2, 0);
								iLocal_329 = 1;
								iLocal_625 = MISC::GET_GAME_TIMER();
								iLocal_626++;
							}
							break;
						}
					}
			}
			break;
		case 1:
			if (!Local_292[8 /*20*/].f_14)
			{
				if (__LIB_17__::func_338() != __LIB_0__::func_484(iLocal_329) && iLocal_329 != 4)
				{
					if (__LIB_0__::func_611(&iLocal_625, 10000))
					{
						__LIB_17__::func_491(&iLocal_424, iLocal_329, 1);
						func_892(iLocal_329);
					}
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						if (func_835("cntry_god31"))
						{
							switch (__LIB_0__::func_484(iLocal_329))
							{
								case 0:
									if (__LIB_0__::func_611(&iLocal_641, 20000))
									{
										if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_MFront", 7, 0, 0, 0))
										{
											iLocal_641 = MISC::GET_GAME_TIMER();
										}
									}
									break;
								case 1:
									if (__LIB_0__::func_611(&iLocal_641, 20000))
									{
										if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_FFront", 7, 0, 0, 0))
										{
											iLocal_641 = MISC::GET_GAME_TIMER();
										}
									}
									break;
								}
							}
						}
				}
			}
			else
			{
				__LIB_17__::func_491(&iLocal_424, iLocal_329, 0);
				iLocal_329 = 4;
				if (func_884())
				{
					switch (__LIB_17__::func_338())
					{
						case 0:
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 1);
							__LIB_16__::func_879(&iLocal_424, 2, 0, 1);
							iLocal_329 = 2;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
							break;
						case 1:
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 1);
							__LIB_16__::func_879(&iLocal_424, 2, 0, 1);
							iLocal_329 = 2;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
							break;
						case 2:
							break;
						}
					}
			}
			if (Local_292[34 /*20*/].f_14)
			{
				iLocal_626 = 2;
			}
			break;
		case 2:
			if (__LIB_17__::func_338() != __LIB_0__::func_484(iLocal_329) && iLocal_329 != 4)
			{
				if (__LIB_0__::func_611(&iLocal_625, 10000))
				{
				}
			}
			if (Local_292[34 /*20*/].f_14)
			{
				__LIB_17__::func_491(&iLocal_424, iLocal_329, 0);
				iLocal_329 = 4;
				switch (__LIB_17__::func_338())
				{
					case 0:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_292[34 /*20*/], PLAYER::PLAYER_PED_ID(), true))
						{
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 1);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_16__::func_879(&iLocal_424, 1, 0, 1);
							iLocal_329 = 1;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						else
						{
							iLocal_626++;
						}
						break;
					case 1:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_292[34 /*20*/], PLAYER::PLAYER_PED_ID(), true))
						{
							__LIB_17__::func_75(&iLocal_424, 0, 1);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_16__::func_879(&iLocal_424, 2, 0, 1);
							iLocal_329 = 0;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						else
						{
							iLocal_626++;
						}
						break;
					case 2:
						if (iLocal_609 == 1)
						{
							__LIB_17__::func_75(&iLocal_424, 0, 1);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_16__::func_879(&iLocal_424, 0, 2, 0);
							iLocal_329 = 0;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						else if (iLocal_610 == 1)
						{
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 1);
							__LIB_16__::func_879(&iLocal_424, 1, 2, 0);
							iLocal_329 = 1;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						else
						{
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 1);
							__LIB_16__::func_879(&iLocal_424, 1, 2, 0);
							iLocal_329 = 2;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						break;
					}
			}
			break;
		case 3:
			if (__LIB_17__::func_338() != __LIB_0__::func_484(iLocal_329) && iLocal_329 != 4)
			{
				if (__LIB_0__::func_611(&iLocal_625, 10000))
				{
					__LIB_17__::func_491(&iLocal_424, iLocal_329, 1);
				}
			}
			if (Local_292[10 /*20*/].f_14)
			{
				__LIB_17__::func_491(&iLocal_424, iLocal_329, 0);
				iLocal_329 = 4;
				switch (__LIB_17__::func_338())
				{
					case 0:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_292[10 /*20*/], PLAYER::PLAYER_PED_ID(), true))
						{
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 1);
							__LIB_16__::func_879(&iLocal_424, 2, 0, 1);
							iLocal_329 = 2;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						break;
					case 1:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_292[10 /*20*/], PLAYER::PLAYER_PED_ID(), true))
						{
							__LIB_17__::func_75(&iLocal_424, 0, 0);
							__LIB_17__::func_75(&iLocal_424, 1, 0);
							__LIB_17__::func_75(&iLocal_424, 2, 1);
							__LIB_16__::func_879(&iLocal_424, 2, 0, 1);
							iLocal_329 = 2;
							iLocal_625 = MISC::GET_GAME_TIMER();
							iLocal_626++;
						}
						break;
					case 2:
						break;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
				{
					iLocal_626 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_17__::func_338() != __LIB_0__::func_484(iLocal_329) && iLocal_329 != 4)
			{
				if (__LIB_0__::func_611(&iLocal_625, 10000))
				{
					__LIB_17__::func_491(&iLocal_424, iLocal_329, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
			{
				__LIB_17__::func_491(&iLocal_424, iLocal_329, 0);
				iLocal_626++;
			}
			break;
		case 5:
			break;
	}
}

void func_892(int iParam0)//Position - 0x95379
{
	if (__LIB_0__::func_611(&iLocal_624, 1000))
	{
		switch (iParam0)
		{
			case 0:
				ENTITY::SET_ENTITY_HEALTH(iLocal_424[0], (ENTITY::GET_ENTITY_HEALTH(iLocal_424[0]) - 15), 0);
				break;
			case 1:
				ENTITY::SET_ENTITY_HEALTH(iLocal_424[1], (ENTITY::GET_ENTITY_HEALTH(iLocal_424[1]) - 15), 0);
				break;
		}
		iLocal_624 = MISC::GET_GAME_TIMER();
	}
}

void func_895()//Position - 0x95415
{
	int iVar0;
	struct<3> Var1;
	switch (iLocal_541)
	{
		case 0:
			if (bLocal_485)
			{
				if (func_850(&iLocal_424, 1, 1))
				{
					HUD::CLEAR_HELP(true);
					if (__LIB_17__::func_79(&iLocal_424, 0))
					{
						if (func_900())
						{
							iLocal_541++;
						}
					}
					else if (__LIB_17__::func_79(&iLocal_424, 1))
					{
						if (func_848())
						{
							iLocal_541++;
						}
					}
					else if (__LIB_17__::func_79(&iLocal_424, 2))
					{
						if (func_899())
						{
							iLocal_541++;
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_17__::func_668(&Local_468, 3, 0, 999f, 999f, 0, 0, 0, 0, 0))
			{
				if (Local_468.f_18)
				{
					if (!Local_468.f_19)
					{
						if (__LIB_42__::func_560(&iLocal_424, 1, 1, 0))
						{
							PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
							switch (__LIB_17__::func_338())
							{
								case 0:
									AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_MICHAEL");
									iLocal_648 = 0;
									break;
								case 1:
									AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
									break;
								case 2:
									AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_TREVOR");
									break;
							}
							__LIB_17__::func_606(iLocal_424[iLocal_424.f_5], 0);
							func_394(&(iLocal_424[iLocal_424.f_5]), 0);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_424[iLocal_424.f_5], "FBI_4_BUDDIES_GROUP", 0f);
							WEAPON::GET_CURRENT_PED_WEAPON(iLocal_424[iLocal_424.f_5], &iVar0, true);
							if (iLocal_424.f_5 != 2)
							{
								if (iVar0 == joaat("WEAPON_GRENADELAUNCHER") || iVar0 == joaat("WEAPON_RPG"))
								{
									if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_424[iLocal_424.f_5], joaat("WEAPON_PISTOL"), false))
									{
										WEAPON::GIVE_WEAPON_TO_PED(iLocal_424[iLocal_424.f_5], joaat("WEAPON_PISTOL"), 200, false, true);
									}
									else
									{
										if (WEAPON::GET_AMMO_IN_PED_WEAPON(iLocal_424[iLocal_424.f_5], joaat("WEAPON_PISTOL")) < 200)
										{
											WEAPON::SET_PED_AMMO(iLocal_424[iLocal_424.f_5], joaat("WEAPON_PISTOL"), 200, false);
										}
										WEAPON::SET_CURRENT_PED_WEAPON(iLocal_424[iLocal_424.f_5], joaat("WEAPON_PISTOL"), false);
									}
								}
							}
							switch (iLocal_424.f_5)
							{
								case 0:
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_MICHAEL"))
									{
										AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_MICHAEL");
									}
									func_898();
									break;
								case 1:
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_FRANKLIN"))
									{
										AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
									}
									func_897();
									break;
								case 2:
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_TREVOR"))
									{
										AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_TREVOR");
									}
									Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_424[iLocal_424.f_5], true) };
									if (Var1.f_2 > 40f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_424[iLocal_424.f_5]))
										{
											ENTITY::SET_ENTITY_COORDS(iLocal_424[iLocal_424.f_5], 804.7164f, -2330.2073f, 61.0967f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_424[iLocal_424.f_5], 264.4371f);
										}
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[iLocal_424.f_5], 804.7164f, -2330.2073f, 61.09672f, 0.75f, false, false);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[iLocal_424.f_5], true);
									}
									else
									{
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[iLocal_424.f_5], 871.4848f, -2339.3643f, 29.3369f, 2f, false, false);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
									}
									iLocal_575 = MISC::GET_GAME_TIMER();
									__LIB_17__::func_476(iLocal_424[2], 1500);
									break;
							}
							if (iLocal_220[8] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_292[8 /*20*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_292[8 /*20*/], iLocal_424[iLocal_424.f_5], 2000, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_292[8 /*20*/], false, false);
									iLocal_604[8] = 0;
								}
							}
							if (iLocal_220[9] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_292[9 /*20*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_292[9 /*20*/], iLocal_424[iLocal_424.f_5], 2000, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_292[9 /*20*/], false, false);
									iLocal_604[9] = 0;
								}
							}
							if (iLocal_220[31] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_292[31 /*20*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_292[31 /*20*/], iLocal_424[iLocal_424.f_5], 2000, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_292[31 /*20*/], false, false);
									iLocal_604[31] = 0;
								}
							}
							if (!bLocal_512)
							{
								if (__LIB_17__::func_338() != 2)
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_424[2], true);
								}
								else
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
								}
							}
							else if (__LIB_17__::func_338() != 2)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_424[2], false);
							}
							__LIB_0__::func_497(313, 1, 0);
							Local_468.f_19 = 1;
						}
					}
				}
			}
			else
			{
				switch (__LIB_17__::func_338())
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_T_att0", 7, 0, 0, 0);
						break;
				}
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
				func_896();
				iLocal_541 = 0;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_896()//Position - 0x958E3
{
	switch (iLocal_424.f_5)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(iLocal_679))
			{
				iLocal_679 = __LIB_0__::func_666(iLocal_424[0], 0, 145);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_679, true);
				HUD::SET_BLIP_DISPLAY(iLocal_679, 2);
				HUD::SET_BLIP_SCALE(iLocal_679, 0.5f);
			}
			if (!PED::IS_PED_INJURED(iLocal_424[0]))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_424[0], false);
			}
			break;
		case 1:
			if (!HUD::DOES_BLIP_EXIST(iLocal_681))
			{
				iLocal_681 = __LIB_0__::func_666(iLocal_424[1], 0, 145);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_681, true);
				HUD::SET_BLIP_DISPLAY(iLocal_681, 2);
				HUD::SET_BLIP_SCALE(iLocal_681, 0.5f);
			}
			if (!PED::IS_PED_INJURED(iLocal_424[1]))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_424[1], false);
			}
			break;
		case 2:
			if (!HUD::DOES_BLIP_EXIST(iLocal_680))
			{
				iLocal_680 = __LIB_0__::func_666(iLocal_424[2], 0, 145);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_680, true);
				HUD::SET_BLIP_DISPLAY(iLocal_680, 2);
				HUD::SET_BLIP_SCALE(iLocal_680, 0.5f);
			}
			if (!PED::IS_PED_INJURED(iLocal_424[2]))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_424[2], false);
			}
			break;
	}
}

void func_897()//Position - 0x95A00
{
	if (!iLocal_504)
	{
		if (Local_292[12 /*20*/].f_14)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_424[iLocal_424.f_5], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
			{
				iLocal_610 = 1;
				iLocal_504 = 1;
			}
		}
	}
	switch (iLocal_610)
	{
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[iLocal_424.f_5], 874.0164f, -2353.893f, 29.3324f, 2.5f, false, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_424[iLocal_424.f_5], 200f, 0);
			__LIB_17__::func_476(iLocal_424[iLocal_424.f_5], 1500);
			break;
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[iLocal_424.f_5], 845.3195f, -2332.202f, 29.3346f, 2.5f, false, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_424[iLocal_424.f_5], 200f, 0);
			__LIB_17__::func_476(iLocal_424[iLocal_424.f_5], 1500);
			break;
	}
}

void func_898()//Position - 0x95B06
{
	if (!iLocal_504)
	{
		if (Local_292[12 /*20*/].f_14)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_424[iLocal_424.f_5], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
			{
				iLocal_609 = 1;
				iLocal_504 = 1;
			}
		}
	}
	switch (iLocal_609)
	{
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[iLocal_424.f_5], Local_661, 1.5f, false, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_424[iLocal_424.f_5], 200f, 0);
			__LIB_17__::func_476(iLocal_424[iLocal_424.f_5], 1500);
			break;
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[iLocal_424.f_5], 845.3195f, -2332.202f, 29.3346f, 2.5f, false, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_424[iLocal_424.f_5], 200f, 0);
			__LIB_17__::func_476(iLocal_424[iLocal_424.f_5], 1500);
			break;
		case 2:
			break;
	}
}

int func_899()//Position - 0x95C0B
{
	WEAPON::REFILL_AMMO_INSTANTLY(iLocal_424[2]);
	Local_468.f_12 = iLocal_424[2];
	if (HUD::DOES_BLIP_EXIST(iLocal_680))
	{
		HUD::REMOVE_BLIP(&iLocal_680);
	}
	HUD::CLEAR_HELP(true);
	bLocal_490 = true;
	iLocal_728 = 1;
	iLocal_576 = 2;
	return 1;
}

int func_900()//Position - 0x95C4C
{
	Local_468.f_12 = iLocal_424[0];
	if (HUD::DOES_BLIP_EXIST(iLocal_679))
	{
		HUD::REMOVE_BLIP(&iLocal_679);
	}
	HUD::CLEAR_HELP(true);
	bLocal_490 = true;
	iLocal_726 = 1;
	return 1;
}

void func_901()//Position - 0x95C7E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[2]))
		{
			switch (iLocal_576)
			{
				case 0:
					if (bLocal_485)
					{
						if (__LIB_0__::func_611(&iLocal_575, 20000))
						{
							TASK::TASK_SHOOT_AT_COORD(iLocal_424[2], 925.45f, -2343.15f, 31.98f, 5000, 0);
							Local_665 = { 925.45f, -2343.15f, 31.98f };
							iLocal_575 = MISC::GET_GAME_TIMER();
							iLocal_576++;
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_611(&iLocal_575, 30000))
					{
						if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(913.23f, -2360.12f, 80f, 40f))
						{
							Local_665 = { 913.23f, -2360.12f, 60f };
						}
						else
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
							{
								case 0:
									Local_665 = { 913.5f, -2357.29f, 30.4f };
									break;
								case 1:
									Local_665 = { 911f, -2337.11f, 30.02f };
									break;
								case 2:
									Local_665 = { 920.75f, -2364.49f, 30.22f };
									break;
								case 3:
									Local_665 = { 925.45f, -2343.15f, 31.98f };
									break;
								}
						}
						TASK::TASK_SHOOT_AT_COORD(iLocal_424[2], Local_665, 5000, 0);
						iLocal_575 = MISC::GET_GAME_TIMER();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
					{
						iLocal_576++;
					}
					break;
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_424[2], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_424[2], Local_249[1 /*15*/], -1, false);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_424[2], Local_249[1 /*15*/], -1, 0, 2);
							}
						}
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_424[2]);
						iLocal_575 = MISC::GET_GAME_TIMER();
						iLocal_576 = 1;
					}
					break;
				case 22:
					break;
				}
		}
	}
	else if (__LIB_17__::func_338() == 2)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 195, true);
	}
}

void func_902()//Position - 0x95E8E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[0]))
		{
			switch (iLocal_536)
			{
				case 0:
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_424[0], joaat("WEAPON_COMBATMG"), true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 894.0912f, -2349.3481f, 29.4448f, 891.74f, -2358.18f, 30.71f, 2f, false, 0.5f, 1f, false, 0, true, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, 891.74f, -2358.18f, 30.71f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_424[0], iLocal_693);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					iLocal_536++;
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_424[0], 894.0912f, -2349.3481f, 29.4448f, 1f, 1f, 2f, false, true, 0))
					{
						if (__LIB_17__::func_603(iLocal_424[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, 1))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
							TASK::CLEAR_PED_TASKS(iLocal_424[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 894.0912f, -2349.3481f, 29.4448f, 891.74f, -2358.18f, 30.71f, 2f, false, 0.5f, 0.5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_AIM_GUN_AT_COORD(0, 891.74f, -2358.18f, 30.71f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_424[0], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
						}
					}
					break;
				case 2:
					__LIB_17__::func_606(iLocal_424[0], 0);
					Local_659 = { 0f, 0f, 0f };
					Local_660 = { 0f, 0f, 0f };
					iLocal_538 = PED::CREATE_SYNCHRONIZED_SCENE(Local_659, Local_660, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_424[0], iLocal_538, "missfbi4", "push_agents_player0", 1000f, -8f, 5, 0, 1000f, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_538, Local_233.f_0, 0);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_424[0], false, false);
					iLocal_536++;
					break;
				case 3:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_538))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_391.f_0))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_391.f_0))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_538) >= 0.483f)
								{
									OBJECT::DELETE_OBJECT(&Local_391);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_391.f_2);
								}
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_538) >= 0.6f)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_538) >= 0.82f)
							{
								if (!PED::IS_PED_INJURED(Local_284.f_0) && !PED::IS_PED_INJURED(Local_284.f_0))
								{
									__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "van_scene_3", 7, 0, 0, 0);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
								TASK::TASK_AIM_GUN_AT_COORD(0, 887.65f, -2360.66f, 30.85f, 100, true, false);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat3", 0, 138, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_424[0], iLocal_693);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								iLocal_4497 = 1;
								iLocal_4498 = 0;
								iLocal_4499 = iLocal_697;
								iLocal_536++;
							}
						}
					}
					break;
				case 4:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_424[0]))
					{
						iLocal_536++;
					}
					break;
				case 5:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_424[0]))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_424[0], 2f, false);
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(iLocal_424[0], 900.25f, -2338.46f, 30.96f, false);
					}
					if (!PED::IS_PED_IN_COVER(iLocal_424[0], false))
					{
						if (iLocal_4497)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_424[0]) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_424[0]) > 13)
							{
								if (__LIB_17__::func_492(iLocal_424[0], 881.53f, -2334.04f, 33.91f, 2f, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 878.698f, -2332.427f, 31.493f, 878.277f, -2336.807f, 36.593f, 7f, false, true, 0))
								{
									Local_661 = { 871.79f, -2344.4417f, 29.33137f };
									iLocal_4499 = iLocal_698;
									iLocal_4498 = 1;
									iLocal_4497 = 0;
								}
							}
						}
						else if (__LIB_17__::func_492(iLocal_424[0], 871.79f, -2344.4417f, 29.33137f, 2f, 1))
						{
							Local_661 = { 881.53f, -2334.04f, 33.91f };
							iLocal_4499 = iLocal_697;
							iLocal_4498 = 1;
							iLocal_4497 = 1;
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_424[0], Local_661, 2f, 2f, 2f, false, true, 0))
						{
							if ((((((!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_424[0]) && !PED::IS_PED_IN_COVER(iLocal_424[0], false)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_424[0])) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_424[0], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_424[0], joaat("SCRIPT_TASK_SEEK_COVER_TO_COVER_POINT")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_424[0], joaat("SCRIPT_TASK_SEEK_COVER_TO_COORDS")) != 1) || iLocal_4498)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_424[0], Local_661, -1, false, 0f, false, false, iLocal_4499, false);
								iLocal_4498 = 0;
							}
						}
						else if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_424[0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_424[0])) || iLocal_4498)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_424[0], Local_661, 2f, -1, 0.2f, 0, 40000f);
							iLocal_4498 = 0;
						}
					}
					else
					{
						iLocal_536++;
					}
					break;
				case 6:
					if (iLocal_561 > 1)
					{
						__LIB_17__::func_606(iLocal_424[0], 0);
						func_394(&(iLocal_424[0]), 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_424[0], Local_661, 1.5f, false, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_424[0], 200f, 0);
						iLocal_536++;
					}
					break;
				case 7:
					break;
				}
			}
	}
}

void func_904()//Position - 0x964D2
{
	switch (iLocal_623)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_248[1 /*15*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_248[1 /*15*/], false))
				{
					if (!PED::IS_PED_INJURED(Local_292[2 /*20*/]))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_292[2 /*20*/], Local_248[1 /*15*/]))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_248[1 /*15*/], false);
							iLocal_623++;
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_248[1 /*15*/], false);
						iLocal_623++;
					}
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_248[3 /*15*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_248[3 /*15*/], false))
				{
					if (!PED::IS_PED_INJURED(Local_292[6 /*20*/]))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_292[6 /*20*/], Local_248[3 /*15*/]))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_248[3 /*15*/], false);
							iLocal_623++;
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_248[3 /*15*/], false);
						iLocal_623++;
					}
				}
			}
			break;
		case 2:
			break;
	}
}

void func_905()//Position - 0x965CB
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_574)
	{
		case 0:
			if (((ENTITY::DOES_ENTITY_EXIST(Local_248[0 /*15*/]) && ENTITY::DOES_ENTITY_EXIST(Local_248[1 /*15*/])) && ENTITY::DOES_ENTITY_EXIST(Local_248[2 /*15*/])) && ENTITY::DOES_ENTITY_EXIST(Local_248[3 /*15*/]))
			{
				if (((!ENTITY::IS_ENTITY_DEAD(Local_248[0 /*15*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_248[1 /*15*/], false)) && !ENTITY::IS_ENTITY_DEAD(Local_248[2 /*15*/], false)) && !ENTITY::IS_ENTITY_DEAD(Local_248[3 /*15*/], false))
				{
					if (((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[0 /*15*/]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[1 /*15*/])) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[2 /*15*/])) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[3 /*15*/]))
					{
						iVar0 = 0;
						while (iVar0 <= 3)
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_248[iVar0 /*15*/]);
							iVar0++;
						}
						iLocal_574 = 1;
					}
				}
				else
				{
					iLocal_574 = 2;
				}
			}
			break;
		case 1:
			if (func_906(&Local_292) >= (Local_292.f_0 - 4))
			{
				iLocal_574 = 2;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*15*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*15*/], false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_248[iVar0 /*15*/], PLAYER::PLAYER_PED_ID(), true))
							{
								Local_248[iVar0 /*15*/].f_9 = ENTITY::GET_ENTITY_HEALTH(Local_248[iVar0 /*15*/]);
								Local_248[iVar0 /*15*/].f_10 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_248[iVar0 /*15*/]);
								Local_248[iVar0 /*15*/].f_11 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_248[iVar0 /*15*/]);
								if ((ENTITY::GET_ENTITY_HEALTH(Local_248[iVar0 /*15*/]) < 700 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_248[iVar0 /*15*/]) < 700f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_248[iVar0 /*15*/]) < 700f)
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iVar0 /*15*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[iVar0 /*15*/]);
									}
									FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_248[iVar0 /*15*/], true), 7, 1f, true, false, 1f);
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_248[iVar0 /*15*/]));
									iLocal_574 = 2;
									return;
								}
								else
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_248[iVar0 /*15*/]);
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
		case 2:
			if (func_906(&Local_292) >= (Local_292.f_0 - 4))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_248.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*15*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*15*/], false))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_248[iVar0 /*15*/]);
						}
					}
					iVar0++;
				}
				iLocal_574 = 3;
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 <= (Local_248.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_248[iVar0 /*15*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[iVar0 /*15*/], false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_248[iVar0 /*15*/], PLAYER::PLAYER_PED_ID(), true))
						{
							if ((ENTITY::GET_ENTITY_HEALTH(Local_248[iVar0 /*15*/]) < 700 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_248[iVar0 /*15*/]) < 700f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_248[iVar0 /*15*/]) < 700f)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[iVar0 /*15*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[iVar0 /*15*/]);
								}
								VEHICLE::EXPLODE_VEHICLE(Local_248[iVar0 /*15*/], true, false);
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_248[iVar0 /*15*/]));
								iLocal_574 = 22;
								return;
							}
							else
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_248[iVar0 /*15*/]);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 22:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_248[5 /*15*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[5 /*15*/], false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[5 /*15*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_248[5 /*15*/], PLAYER::PLAYER_PED_ID(), true))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(Local_248[5 /*15*/]) < 500 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_248[5 /*15*/]) < 500f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_248[5 /*15*/]) < 500f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[5 /*15*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[5 /*15*/]);
						}
						VEHICLE::EXPLODE_VEHICLE(Local_248[5 /*15*/], true, false);
					}
					else
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_248[5 /*15*/]);
					}
				}
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_248[5 /*15*/]);
			}
		}
	}
}

int func_906(int iParam0)//Position - 0x969EA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*20*/])->f_14)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*20*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_907()//Position - 0x96A2E
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_294[1 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_294[1 /*20*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[1 /*15*/]))
					{
						switch (iLocal_619)
						{
							case 0:
								if (__LIB_17__::func_603(Local_294[1 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_HELI_MISSION(0, Local_249[1 /*15*/], 0, 0, 834.8f, -2327.7f, 68f, 4, 10f, 1f, 173.2674f, 15, 10, -1f, 0);
									TASK::TASK_HELI_MISSION(0, Local_249[1 /*15*/], 0, 0, 813.1f, -2338.4f, 68f, 4, 10f, 1f, 173.2674f, 15, 10, -1f, 0);
									TASK::TASK_HELI_MISSION(0, Local_249[1 /*15*/], 0, 0, 811.4f, -2313.22f, 68f, 4, 10f, 1f, 0f, 15, 10, -1f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_294[1 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								}
								break;
							case 1:
								break;
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_HEALTH(Local_294[1 /*20*/], 2, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[1 /*20*/]));
					if (!PED::IS_PED_INJURED(Local_292[10 /*20*/]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[10 /*20*/], Local_249[1 /*15*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_292[10 /*20*/], 2, 0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_292[11 /*20*/]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[11 /*20*/], Local_249[1 /*15*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_292[11 /*20*/], 2, 0);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_249[1 /*15*/], false))
					{
						VEHICLE::EXPLODE_VEHICLE(Local_249[1 /*15*/], true, false);
					}
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_249[1 /*15*/], false), 0, 1f, true, false, 1f, false);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_249[1 /*15*/]));
					func_908(1);
				}
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[1 /*20*/]));
				iLocal_618[1] = MISC::GET_GAME_TIMER();
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_249[1 /*15*/], false))
		{
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_249[1 /*15*/]) < 2.2f || (iLocal_618[1] != 0 && __LIB_0__::func_611(&(iLocal_618[1]), 7000)))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_249[1 /*15*/], false, false, false, false, false, false, false, false);
				VEHICLE::EXPLODE_VEHICLE(Local_249[1 /*15*/], true, false);
				VEHICLE::EXPLODE_VEHICLE(Local_249[1 /*15*/], true, false);
				if (!PED::IS_PED_INJURED(Local_294[1 /*20*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_294[1 /*20*/], 2, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[1 /*20*/]));
				}
				if (!PED::IS_PED_INJURED(Local_292[10 /*20*/]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[10 /*20*/], Local_249[1 /*15*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_292[10 /*20*/], 2, 0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_292[11 /*20*/]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[11 /*20*/], Local_249[1 /*15*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_292[11 /*20*/], 2, 0);
					}
				}
				func_908(1);
			}
		}
		else
		{
			func_908(1);
		}
	}
}

void func_908(bool bParam0)//Position - 0x96D31
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_293.f_0 - 1))
	{
		if (iLocal_223[iVar0] < 6)
		{
			if (!PED::IS_PED_INJURED(Local_293[iVar0 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_293[iVar0 /*20*/]))
				{
					ENTITY::DETACH_ENTITY(Local_293[iVar0 /*20*/], true, true);
				}
				PED::SET_PED_GRAVITY(Local_293[iVar0 /*20*/], true);
			}
			else
			{
				Local_293[iVar0 /*20*/].f_14 = 1;
			}
			iLocal_223[iVar0] = 6;
		}
		iVar0++;
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_403[0 /*10*/])))
	{
		PHYSICS::DELETE_ROPE(&(Local_403[0 /*10*/]));
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_403[1 /*10*/])))
	{
		PHYSICS::DELETE_ROPE(&(Local_403[1 /*10*/]));
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[1 /*15*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_249[1 /*15*/]);
		}
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(Local_294[1 /*20*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_294[1 /*20*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
				TASK::TASK_HELI_MISSION(0, Local_249[1 /*15*/], 0, 0, 0f, 0f, 0f, 4, 25f, 0f, -1f, 70, 65, -1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
				TASK::TASK_PERFORM_SEQUENCE(Local_294[1 /*20*/], iLocal_693);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
			}
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[1 /*20*/]));
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_249[1 /*15*/]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_249[1 /*15*/].f_1);
}

void func_909()//Position - 0x96E7B
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_249[0 /*15*/]))
	{
		if (!PED::IS_PED_INJURED(Local_294[0 /*20*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[0 /*15*/], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[0 /*15*/]))
				{
					switch (iLocal_621)
					{
						case 0:
							VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_249[0 /*15*/], true, true);
							TASK::TASK_VEHICLE_AIM_AT_COORD(Local_294[0 /*20*/], 863.7f, -2272f, 38f);
							iLocal_621++;
							break;
						case 1:
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 28000f)
							{
								TASK::TASK_VEHICLE_AIM_AT_COORD(Local_294[0 /*20*/], 864.3f, -2266.9f, 38.8f);
								iLocal_621++;
							}
							break;
						case 2:
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 31000f)
							{
								TASK::TASK_VEHICLE_AIM_AT_COORD(Local_294[0 /*20*/], 850f, -2305f, 30f);
								iLocal_621++;
							}
							break;
						case 3:
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 45000f)
							{
								TASK::TASK_VEHICLE_AIM_AT_COORD(Local_294[0 /*20*/], 841f, -2230f, 38f);
								iLocal_621++;
							}
							break;
						case 4:
							break;
					}
				}
				else
				{
					PED::DELETE_PED(&(Local_294[0 /*20*/]));
					VEHICLE::DELETE_VEHICLE(&(Local_249[0 /*15*/]));
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_249[0 /*15*/].f_13, "lkfbi4");
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(Local_294[0 /*20*/], 2, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[0 /*20*/]));
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_249[0 /*15*/], false), 0, 0.5f, true, false, 1f, false);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_249[0 /*15*/]));
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_249[0 /*15*/], false))
			{
				VEHICLE::EXPLODE_VEHICLE(Local_249[0 /*15*/], true, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_294[0 /*20*/]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_249[0 /*15*/]));
		}
	}
}

void func_910()//Position - 0x97050
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_327.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_327[iVar0 /*20*/]))
		{
			switch (iLocal_222[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_327[iVar0 /*20*/], 37, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_327[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_327[iVar0 /*20*/], Local_327[iVar0 /*20*/].f_6, 5f, false, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_327[iVar0 /*20*/], 200f, 0);
							iLocal_222[iVar0] = 1;
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							break;
					}
					break;
				case 5:
					break;
				}
		}
		iVar0++;
	}
}

void func_911()//Position - 0x97131
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_326.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_326[iVar0 /*20*/]))
		{
			switch (iLocal_221[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_326[iVar0 /*20*/], 37, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_326[iVar0 /*20*/], Local_326[iVar0 /*20*/].f_6, 5f, false, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_326[iVar0 /*20*/], 200f, 0);
							iLocal_221[iVar0] = 1;
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							break;
					}
					break;
				case 5:
					break;
				}
		}
		iVar0++;
	}
}

int func_912()//Position - 0x97212
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_292.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
		{
			switch (iLocal_220[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[0 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[0 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[0 /*15*/].f_13, "lkfbi4")
									{
										ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
									}
									else
									{
										ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], true, false, false, false, false, false, false, false);
									}
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[0 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[0 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[0 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[0 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[0 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									iLocal_220[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[1 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[1 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[1 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[1 /*15*/].f_13, "lkfbi4")
									{
										ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
									}
									else
									{
										ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], true, false, false, false, false, false, false, false);
									}
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[1 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[1 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[1 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[1 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[1 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									iLocal_220[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[2 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[2 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[2 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[2 /*15*/].f_13, "lkfbi4")
									{
										ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
									}
									else
									{
										ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], true, false, false, false, false, false, false, false);
									}
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[2 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[2 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[2 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 5:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[2 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[2 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									iLocal_220[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 6:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[3 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[3 /*15*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[3 /*15*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
									iLocal_220[iVar0] = 5;
								}
								else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[3 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[3 /*15*/].f_13, "lkfbi4")
								{
									ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
								}
								else
								{
									ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], true, false, false, false, false, false, false, false);
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_292[iVar0 /*20*/], false, false, false, false, false, false, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 7:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[3 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[3 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									iLocal_220[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 8:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_292[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, false, 0.5f, 0.5f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							fLocal_673 = 0f;
							iLocal_606 = MISC::GET_GAME_TIMER();
							iLocal_220[iVar0] = 1;
							break;
						case 9:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_292[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, false, 0.5f, 0.5f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							fLocal_674 = 0f;
							iLocal_607 = MISC::GET_GAME_TIMER();
							iLocal_220[iVar0] = 1;
							break;
						case 10:
							if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[iVar0 /*20*/], Local_249[1 /*15*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[1 /*15*/]))
										{
											if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[1 /*15*/]) > 13000f)
											{
												iLocal_220[iVar0] = 1;
											}
										}
									}
									else
									{
										iLocal_220[iVar0] = 1;
									}
								}
								else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_292[iVar0 /*20*/]))
								{
									iLocal_220[iVar0] = 1;
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(Local_292[iVar0 /*20*/], 2, 0);
								}
							}
							else
							{
								iLocal_220[iVar0] = 1;
							}
							break;
						case 11:
							if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[iVar0 /*20*/], Local_249[1 /*15*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[1 /*15*/]))
										{
											if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[1 /*15*/]) > 13000f)
											{
												iLocal_220[iVar0] = 1;
											}
										}
									}
									else
									{
										iLocal_220[iVar0] = 1;
									}
								}
								else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_292[iVar0 /*20*/]))
								{
									iLocal_220[iVar0] = 1;
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(Local_292[iVar0 /*20*/], 2, 0);
								}
							}
							else
							{
								iLocal_220[iVar0] = 1;
							}
							break;
						case 12:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 1;
							break;
						case 13:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 1;
							break;
						case 14:
						case 15:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 5;
							break;
						case 16:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 1;
							break;
						case 17:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 1;
							break;
						case 18:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 1;
							break;
						case 19:
						case 20:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_PAUSE(0, 1500);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_220[iVar0] = 1;
							break;
						case 21:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[0 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 27000f)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_292[iVar0 /*20*/].f_6, 847.3f, -2326.2f, 31f, 2f, false, 0.5f, 0.5f, true, 4608, false, joaat("FIRING_PATTERN_FULL_AUTO"));
										TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
										TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
										iLocal_220[iVar0] = 1;
									}
								}
							}
							break;
						case 22:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[0 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 27000f)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_292[iVar0 /*20*/].f_6, 847.3f, -2326.2f, 31f, 2f, false, 0.5f, 0.5f, true, 4608, false, joaat("FIRING_PATTERN_FULL_AUTO"));
										TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
										TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
										iLocal_220[iVar0] = 1;
									}
								}
							}
							break;
						case 23:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 3, 136, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_220[iVar0] = 1;
							break;
						case 24:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_PAUSE(0, 1000);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 5, 172, -1);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_220[iVar0] = 1;
							break;
						case 25:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_PAUSE(0, 2000);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 5, 136, -1);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_220[iVar0] = 1;
							break;
						case 26:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_PAUSE(0, 3000);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 5, 168, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_220[iVar0] = 1;
							break;
						case 27:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[4 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[4 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[4 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[4 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[4 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 28:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[4 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[4 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									iLocal_220[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 29:
						case 30:
						case 34:
						case 35:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 5;
							break;
						case 31:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_AIM_GUN_AT_COORD(0, 877.1f, -2353.6f, 40f, 5500, false, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 932.2432f, -2378.912f, 40.2425f, 877.1f, -2353.6f, 40f, 2f, false, 0.5f, 0.5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_292[iVar0 /*20*/].f_6, 2f, 20000, 0.25f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
							iLocal_220[iVar0] = 1;
							break;
						case 32:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[5 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[5 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_248[5 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_248[5 /*15*/].f_13, "lkfbi4")
									{
										MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_248[5 /*15*/], true), 2f, true, false, false, false);
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_248[5 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 33:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_248[5 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_248[5 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
									iLocal_220[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 15:
						case 28:
						case 33:
							if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 8:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 1f, 1f, 2f, false, true, 0))
							{
								if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1) || __LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_292[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, false, 0.5f, 0.5f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								}
							}
							else if (__LIB_0__::func_611(&(iLocal_604[iVar0]), 7500))
							{
								switch (__LIB_17__::func_338())
								{
									case 2:
										TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_424[1], 0f, 0f, fLocal_673), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_424[1], -1, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
										TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
										iLocal_604[iVar0] = MISC::GET_GAME_TIMER();
										PED::GET_PED_MAX_HEALTH(iLocal_424[1]);
										break;
									case 0:
									case 1:
										TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, fLocal_673), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
										TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
										iLocal_604[iVar0] = MISC::GET_GAME_TIMER();
										break;
								}
								if (__LIB_0__::func_611(&iLocal_606, 10000))
								{
									fLocal_673 = (fLocal_673 - 0.2f);
									if (fLocal_673 < 0f)
									{
										fLocal_673 = 0f;
									}
									iLocal_606 = MISC::GET_GAME_TIMER();
								}
							}
							if (func_914(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_292[iVar0 /*20*/], 2, 0);
							}
							break;
						case 9:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 1f, 1f, 2f, false, true, 0))
							{
								if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1) || __LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_292[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, false, 0.5f, 0.5f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								}
							}
							else
							{
								if (__LIB_0__::func_611(&(iLocal_604[iVar0]), 10500))
								{
									switch (__LIB_17__::func_338())
									{
										case 2:
											TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
											TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_424[1], 0f, 0f, fLocal_674), 4000, 0);
											TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_424[1], -1, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
											TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
											iLocal_604[iVar0] = MISC::GET_GAME_TIMER();
											break;
										case 0:
										case 1:
											TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
											TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, fLocal_674), 4000, 0);
											TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
											TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
											iLocal_604[iVar0] = MISC::GET_GAME_TIMER();
											break;
										}
								}
								if (__LIB_0__::func_611(&iLocal_607, 20000))
								{
									fLocal_674 = (fLocal_674 - 0.2f);
									if (fLocal_674 < 0f)
									{
										fLocal_674 = 0f;
									}
									iLocal_607 = MISC::GET_GAME_TIMER();
								}
							}
							if (func_914(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_292[iVar0 /*20*/], 2, 0);
							}
							break;
						case 10:
							if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[iVar0 /*20*/], Local_249[1 /*15*/]))
									{
										if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_DRIVE_BY"), -2, 0))
										{
											switch (__LIB_17__::func_338())
											{
												case 2:
													TASK::TASK_DRIVE_BY(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 2f, 300f, 50, false, joaat("FIRING_PATTERN_FULL_AUTO"));
													break;
												case 0:
												case 1:
													TASK::TASK_DRIVE_BY(Local_292[iVar0 /*20*/], iLocal_424[2], 0, 0f, 0f, 2f, 300f, 50, false, joaat("FIRING_PATTERN_FULL_AUTO"));
													break;
											}
											iLocal_604[10] = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
								else
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
									iLocal_220[iVar0] = 5;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 11:
							if (ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[1 /*15*/], false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_292[iVar0 /*20*/], Local_249[1 /*15*/]))
									{
										if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_DRIVE_BY"), -2, 0))
										{
											switch (__LIB_17__::func_338())
											{
												case 2:
													TASK::TASK_DRIVE_BY(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 2f, 300f, 50, false, joaat("FIRING_PATTERN_FULL_AUTO"));
													break;
												case 0:
												case 1:
													TASK::TASK_DRIVE_BY(Local_292[iVar0 /*20*/], iLocal_424[2], 0, 0f, 0f, 2f, 300f, 50, false, joaat("FIRING_PATTERN_FULL_AUTO"));
													break;
											}
											iLocal_604[11] = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
										iLocal_220[iVar0] = 5;
									}
								}
								else
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
									iLocal_220[iVar0] = 5;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 12:
						case 13:
						case 16:
						case 17:
						case 18:
							if (func_913() || func_688(&(Local_292[iVar0 /*20*/]), &(Local_292[iVar0 /*20*/].f_10), Local_292[iVar0 /*20*/].f_14))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_292[iVar0 /*20*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 50, true);
								PED::SET_PED_CONFIG_FLAG(Local_292[iVar0 /*20*/], 286, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 19:
						case 20:
							if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 51, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 5;
							}
							break;
						case 21:
						case 22:
							if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 1f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
								iLocal_220[iVar0] = 3;
							}
							break;
						case 23:
						case 24:
						case 25:
						case 26:
							Var1 = { 0f, 0f, 0f };
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_292[iVar0 /*20*/]))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_292[iVar0 /*20*/], 2f, false);
								TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_292[iVar0 /*20*/], 849f, -2328.6f, 31.1f, false);
							}
							TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("heat1", &iLocal_613);
							iLocal_613 = (iLocal_613 - 1);
							Local_292[iVar0 /*20*/].f_3 = { ENTITY::GET_ENTITY_COORDS(Local_292[iVar0 /*20*/], true) };
							if (TASK::WAYPOINT_RECORDING_GET_COORD("heat1", iLocal_613, &Var1))
							{
								if ((ENTITY::IS_ENTITY_AT_COORD(Local_292[iVar0 /*20*/], Var1, 1f, 1f, 1.6f, false, true, 0) || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_292[iVar0 /*20*/]) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_292[iVar0 /*20*/]) > 11)) || Local_292[iVar0 /*20*/].f_3.f_2 < 30.5f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 51, true);
									PED::SET_PED_CONFIG_FLAG(Local_292[iVar0 /*20*/], 286, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 2f, false, false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
									iLocal_220[iVar0] = 5;
								}
							}
							break;
						case 31:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_292[iVar0 /*20*/], Local_292[iVar0 /*20*/].f_6, 1f, 1f, 2f, false, true, 0))
							{
								if (__LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1) || __LIB_17__::func_603(Local_292[iVar0 /*20*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_292[iVar0 /*20*/].f_6, 2f, 20000, 0.5f, 0, 40000f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
									TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
								}
							}
							else if (__LIB_0__::func_611(&(iLocal_604[iVar0]), 12000))
							{
								switch (__LIB_17__::func_338())
								{
									case 0:
									case 2:
										TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_424[1], 0f, 0f, fLocal_673), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_424[1], -1, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
										TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
										iLocal_604[iVar0] = MISC::GET_GAME_TIMER();
										break;
									case 1:
										TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.2f), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
										TASK::TASK_PERFORM_SEQUENCE(Local_292[iVar0 /*20*/], iLocal_693);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
										iLocal_604[iVar0] = MISC::GET_GAME_TIMER();
										break;
									}
							}
							if (func_914(Local_292[iVar0 /*20*/], PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_292[iVar0 /*20*/], 2, 0);
							}
							break;
					}
					break;
				case 3:
					switch (iVar0)
					{
						case 21:
						case 22:
							iVar2 = 0;
							if ((((Local_292[21 /*20*/].f_14 && Local_292[22 /*20*/].f_14) && Local_292[23 /*20*/].f_14) && Local_292[24 /*20*/].f_14) && Local_292[25 /*20*/].f_14)
							{
								iVar3 = 21;
								while (iVar3 <= 25)
								{
									if (PED::IS_PED_INJURED(Local_292[iVar3 /*20*/]))
									{
										iVar2++;
									}
									iVar3++;
								}
								if (iVar2 >= 2)
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_292[iVar0 /*20*/], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 50, true);
									PED::SET_PED_CONFIG_FLAG(Local_292[iVar0 /*20*/], 286, true);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
									iLocal_220[iVar0] = 5;
								}
							}
							break;
					}
					break;
				case 5:
					break;
				}
		}
		iVar0++;
	}
	return 0;
}

int func_913()//Position - 0x99206
{
	if (bLocal_509)
	{
		if (iLocal_630 == 0)
		{
			iLocal_630 = MISC::GET_GAME_TIMER();
		}
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, false, true, 0))
		{
			if (__LIB_0__::func_611(&iLocal_630, 15000))
			{
				return 1;
			}
		}
		else
		{
			if (iLocal_631 == 0)
			{
				iLocal_631 = MISC::GET_GAME_TIMER();
			}
			if (__LIB_0__::func_611(&iLocal_631, 10000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_914(int iParam0, int iParam1)//Position - 0x99288
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, true))
			{
				if (iVar0 == joaat("WEAPON_HEAVYSNIPER") || iVar0 == joaat("WEAPON_SNIPERRIFLE"))
				{
					if ((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_SNIPERRIFLE"), 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_915()//Position - 0x992FF
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "REACT_Explosion", 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi4", "REACT_Explosion") > 0.7f)
		{
			func_916(joaat("SCRIPT_TASK_PLAY_ANIM"), 1);
		}
	}
}

void func_916(int iParam0, bool bParam1)//Position - 0x99342
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0) == 1)
	{
		iVar4 = 28;
		__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &iVar3, 0);
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar3 = (iVar3 * -1);
		}
		if (bParam1)
		{
			if (((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		else if ((((((((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

int func_918()//Position - 0x994FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	switch (iLocal_561)
	{
		case 0:
			func_929();
			if (iLocal_536 > 3)
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_233.f_0, 0f);
				AUDIO::DISTANT_COP_CAR_SIRENS(true);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_656, "Distant_Sirens", 913.6f, -2301.6f, 34f, "FBI_04_HEAT_SOUNDS", false, 0, false);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
				{
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_233.f_0, true);
				}
				__LIB_17__::func_476(iLocal_424[0], 4000);
				__LIB_17__::func_476(iLocal_424[2], 4000);
				iLocal_536 = 4;
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_579 = MISC::GET_GAME_TIMER();
				if (ENTITY::DOES_ENTITY_EXIST(Local_272.f_0))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_272);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_272.f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_278.f_0))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_278);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_278.f_1);
				STREAMING::REMOVE_PTFX_ASSET();
				STREAMING::REMOVE_ANIM_DICT("missfbi4");
				STREAMING::REMOVE_ANIM_DICT("misssagrab");
				STREAMING::REMOVE_ANIM_DICT("missheat");
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				iLocal_561++;
				func_408(3, "Start of Shootout", 0, 0, 0, 1);
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(Local_292[0 /*20*/].f_1);
			STREAMING::REQUEST_MODEL(Local_292[8 /*20*/].f_1);
			STREAMING::REQUEST_MODEL(Local_248[0 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_249[0 /*15*/].f_1);
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_248[0 /*15*/].f_1, 15);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_249[0 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_249[1 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[0 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[1 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[2 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[3 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[4 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_248[5 /*15*/].f_13, "lkfbi4");
			if (bLocal_486)
			{
				if ((((((((((((STREAMING::HAS_MODEL_LOADED(Local_292[0 /*20*/].f_1) && STREAMING::HAS_MODEL_LOADED(Local_292[8 /*20*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_248[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_249[0 /*15*/].f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_248[0 /*15*/].f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_249[0 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_249[1 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[0 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[1 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[2 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[3 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[4 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_248[5 /*15*/].f_13, "lkfbi4"))
				{
					if (__LIB_0__::func_611(&iLocal_579, 10000))
					{
						iLocal_578 = func_874();
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
						STREAMING::SET_PED_POPULATION_BUDGET(0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::SET_FAKE_WANTED_LEVEL(4);
						Local_248[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[0 /*15*/].f_1, Local_248[0 /*15*/].f_3, Local_248[0 /*15*/].f_6, true, true, false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_248[0 /*15*/], true);
						VEHICLE::SET_VEHICLE_SIREN(Local_248[0 /*15*/], true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[0 /*15*/], Local_248[0 /*15*/].f_13, "lkfbi4", true);
						Local_248[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[2 /*15*/].f_1, Local_248[2 /*15*/].f_3, Local_248[2 /*15*/].f_6, true, true, false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_248[2 /*15*/], true);
						VEHICLE::SET_VEHICLE_SIREN(Local_248[2 /*15*/], true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[2 /*15*/], Local_248[2 /*15*/].f_13, "lkfbi4", true);
						func_928(&(Local_292[0 /*20*/]), &(Local_248[0 /*15*/]), -1, 0);
						func_683(&(Local_292[0 /*20*/]), 1);
						func_928(&(Local_292[1 /*20*/]), &(Local_248[0 /*15*/]), 0, 0);
						func_683(&(Local_292[1 /*20*/]), 1);
						func_928(&(Local_292[4 /*20*/]), &(Local_248[2 /*15*/]), -1, 0);
						func_683(&(Local_292[4 /*20*/]), 1);
						func_928(&(Local_292[5 /*20*/]), &(Local_248[2 /*15*/]), 0, 0);
						func_683(&(Local_292[5 /*20*/]), 1);
						iLocal_578 = func_874();
						iLocal_579 = MISC::GET_GAME_TIMER();
						iLocal_561++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_579, 1500))
			{
				Local_248[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[1 /*15*/].f_1, Local_248[1 /*15*/].f_3, Local_248[1 /*15*/].f_6, true, true, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_248[1 /*15*/], true);
				VEHICLE::SET_VEHICLE_SIREN(Local_248[1 /*15*/], false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[1 /*15*/], Local_248[1 /*15*/].f_13, "lkfbi4", true);
				VEHICLE::SET_PLAYBACK_SPEED(Local_248[1 /*15*/], 0.9f);
				Local_248[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[3 /*15*/].f_1, Local_248[3 /*15*/].f_3, Local_248[3 /*15*/].f_6, true, true, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_248[3 /*15*/], true);
				VEHICLE::SET_VEHICLE_SIREN(Local_248[3 /*15*/], false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[3 /*15*/], Local_248[3 /*15*/].f_13, "lkfbi4", true);
				func_928(&(Local_292[2 /*20*/]), &(Local_248[1 /*15*/]), -1, 0);
				func_683(&(Local_292[2 /*20*/]), 1);
				func_928(&(Local_292[3 /*20*/]), &(Local_248[1 /*15*/]), 0, 0);
				func_683(&(Local_292[3 /*20*/]), 1);
				func_928(&(Local_292[6 /*20*/]), &(Local_248[3 /*15*/]), -1, 0);
				func_683(&(Local_292[6 /*20*/]), 1);
				func_928(&(Local_292[7 /*20*/]), &(Local_248[3 /*15*/]), 0, 0);
				func_683(&(Local_292[7 /*20*/]), 1);
				iLocal_561++;
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_579, 10000))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_PREP_FOR_COPS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_PREP_FOR_COPS");
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_COPS_ARRIVE");
				AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_424[0], "FBI_4_BUDDIES_GROUP", 0f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_424[2], "FBI_4_BUDDIES_GROUP", 0f);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(iLocal_424[0], true, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(iLocal_424[2], true, -1, 0);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_656))
				{
					AUDIO::STOP_SOUND(iLocal_656);
				}
				AUDIO::DISTANT_COP_CAR_SIRENS(false);
				__LIB_16__::func_879(&iLocal_424, 0, 2, 1);
				bLocal_485 = true;
				iLocal_556 = MISC::GET_GAME_TIMER();
				iLocal_575 = MISC::GET_GAME_TIMER();
				iLocal_561++;
			}
			break;
		case 4:
			if (__LIB_0__::func_611(&iLocal_556, 2000))
			{
				__LIB_0__::func_151("cntry_help5", 13000);
				iLocal_579 = MISC::GET_GAME_TIMER();
				iLocal_561++;
			}
			break;
		case 5:
			if (bLocal_486)
			{
				if (func_906(&Local_292) >= 1 || __LIB_0__::func_611(&iLocal_579, 5000))
				{
					func_684(&(Local_292[14 /*20*/]), 0);
					func_683(&(Local_292[14 /*20*/]), 1);
					func_684(&(Local_292[15 /*20*/]), 0);
					func_683(&(Local_292[15 /*20*/]), 1);
					iLocal_579 = MISC::GET_GAME_TIMER();
					iLocal_561++;
				}
			}
			break;
		case 6:
			if (func_906(&Local_292) >= 7)
			{
				if (func_927())
				{
					__LIB_17__::func_75(&iLocal_424, 1, 0);
					__LIB_17__::func_75(&iLocal_424, 2, 0);
					__LIB_17__::func_75(&iLocal_424, 0, 1);
					__LIB_16__::func_879(&iLocal_424, 0, 2, 1);
					bLocal_509 = true;
					iLocal_630 = MISC::GET_GAME_TIMER();
					iLocal_561++;
				}
			}
			break;
		case 7:
			func_925();
			iLocal_614 = 0;
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iLocal_614++;
				}
				iVar0++;
			}
			iVar0 = 16;
			while (iVar0 <= 18)
			{
				if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iLocal_614++;
				}
				iVar0++;
			}
			if (iLocal_614 >= 1)
			{
				func_684(&(Local_292[19 /*20*/]), 0);
				func_683(&(Local_292[19 /*20*/]), 1);
				Local_249[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_249[0 /*15*/].f_1, Local_249[0 /*15*/].f_3, Local_249[0 /*15*/].f_6, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(Local_249[0 /*15*/], 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_249[0 /*15*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_249[0 /*15*/], Local_249[0 /*15*/].f_13, "lkfbi4", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_249[0 /*15*/], 5000f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_249[0 /*15*/], 2.2f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_249[0 /*15*/], true);
				func_928(&(Local_294[0 /*20*/]), &(Local_249[0 /*15*/]), -1, 0);
				func_683(&(Local_294[0 /*20*/]), 1);
				func_928(&(Local_292[21 /*20*/]), &(Local_249[0 /*15*/]), 1, 0);
				func_683(&(Local_292[21 /*20*/]), 1);
				PED::ADD_ARMOUR_TO_PED(Local_292[21 /*20*/], -PED::GET_PED_ARMOUR(Local_292[21 /*20*/]));
				func_928(&(Local_292[22 /*20*/]), &(Local_249[0 /*15*/]), 2, 0);
				func_683(&(Local_292[22 /*20*/]), 1);
				PED::ADD_ARMOUR_TO_PED(Local_292[22 /*20*/], -PED::GET_PED_ARMOUR(Local_292[22 /*20*/]));
				VEHICLE::REQUEST_VEHICLE_ASSET(Local_249[0 /*15*/].f_1, 15);
				iLocal_561++;
			}
			break;
		case 8:
			func_925();
			if (!ENTITY::IS_ENTITY_DEAD(Local_249[0 /*15*/], false))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 28000f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_249[0 /*15*/], 0.1f);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_249[0 /*15*/]) > 28500f)
				{
					if (!Local_292[23 /*20*/].f_14)
					{
						if (!PED::IS_PED_INJURED(Local_292[21 /*20*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_292[21 /*20*/], Local_249[0 /*15*/], false))
							{
								func_928(&(Local_292[23 /*20*/]), &(Local_249[0 /*15*/]), 1, 0);
								func_683(&(Local_292[23 /*20*/]), 1);
								PED::ADD_ARMOUR_TO_PED(Local_292[23 /*20*/], -PED::GET_PED_ARMOUR(Local_292[23 /*20*/]));
							}
						}
						else
						{
							func_928(&(Local_292[23 /*20*/]), &(Local_249[0 /*15*/]), 1, 0);
							func_683(&(Local_292[23 /*20*/]), 1);
							PED::ADD_ARMOUR_TO_PED(Local_292[23 /*20*/], -PED::GET_PED_ARMOUR(Local_292[23 /*20*/]));
						}
					}
					if (!Local_292[24 /*20*/].f_14)
					{
						if (!PED::IS_PED_INJURED(Local_292[22 /*20*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_292[22 /*20*/], Local_249[0 /*15*/], false))
							{
								func_928(&(Local_292[24 /*20*/]), &(Local_249[0 /*15*/]), 2, 0);
								func_683(&(Local_292[24 /*20*/]), 1);
								PED::ADD_ARMOUR_TO_PED(Local_292[24 /*20*/], -PED::GET_PED_ARMOUR(Local_292[24 /*20*/]));
							}
						}
						else
						{
							func_928(&(Local_292[24 /*20*/]), &(Local_249[0 /*15*/]), 2, 0);
							func_683(&(Local_292[24 /*20*/]), 1);
							PED::ADD_ARMOUR_TO_PED(Local_292[24 /*20*/], -PED::GET_PED_ARMOUR(Local_292[24 /*20*/]));
						}
					}
					if (!Local_292[25 /*20*/].f_14)
					{
						if (Local_292[23 /*20*/].f_14)
						{
							if (!PED::IS_PED_INJURED(Local_292[23 /*20*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_292[23 /*20*/], Local_249[0 /*15*/], false))
								{
									func_928(&(Local_292[25 /*20*/]), &(Local_249[0 /*15*/]), 1, 0);
									func_683(&(Local_292[25 /*20*/]), 1);
									PED::ADD_ARMOUR_TO_PED(Local_292[25 /*20*/], -PED::GET_PED_ARMOUR(Local_292[25 /*20*/]));
								}
							}
							else
							{
								func_928(&(Local_292[25 /*20*/]), &(Local_249[0 /*15*/]), 1, 0);
								func_683(&(Local_292[25 /*20*/]), 1);
								PED::ADD_ARMOUR_TO_PED(Local_292[25 /*20*/], -PED::GET_PED_ARMOUR(Local_292[25 /*20*/]));
							}
						}
					}
				}
			}
			else
			{
				Local_292[23 /*20*/].f_14 = 1;
				Local_292[24 /*20*/].f_14 = 1;
				Local_292[25 /*20*/].f_14 = 1;
			}
			if ((Local_292[23 /*20*/].f_14 && Local_292[24 /*20*/].f_14) && Local_292[25 /*20*/].f_14)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[0 /*15*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[0 /*15*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_249[0 /*15*/], 1.1f);
					}
				}
				iLocal_561++;
			}
			break;
		case 9:
			func_925();
			iLocal_614 = 0;
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iLocal_614++;
				}
				iVar0++;
			}
			iVar0 = 16;
			while (iVar0 <= 19)
			{
				if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iLocal_614++;
				}
				iVar0++;
			}
			iVar0 = 21;
			while (iVar0 <= 25)
			{
				if (PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iLocal_614++;
				}
				iVar0++;
			}
			if (iLocal_614 >= 8)
			{
				if (func_924())
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
						{
							iLocal_617++;
						}
						iVar0++;
					}
					iVar0 = 14;
					while (iVar0 <= 15)
					{
						if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
						{
							iLocal_617++;
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_326.f_0 - 1))
					{
						if (!PED::IS_PED_INJURED(Local_326[iVar0 /*20*/]))
						{
							iLocal_617++;
						}
						iVar0++;
					}
					iLocal_633 = iLocal_617 + 4;
					bLocal_510 = true;
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
					iLocal_561++;
				}
			}
			break;
		case 10:
			func_922();
			iVar1 = 0;
			iVar0 = 27;
			while (iVar0 <= 30)
			{
				if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 14;
			while (iVar0 <= 15)
			{
				if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_326.f_0 - 1))
			{
				if (!PED::IS_PED_INJURED(Local_326[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			if ((iLocal_633 - iVar1) >= 3)
			{
				func_684(&(Local_292[8 /*20*/]), 0);
				func_683(&(Local_292[8 /*20*/]), 1);
				HUD::REMOVE_BLIP(&(Local_292[8 /*20*/].f_2));
				func_684(&(Local_292[9 /*20*/]), 0);
				func_683(&(Local_292[9 /*20*/]), 1);
				HUD::REMOVE_BLIP(&(Local_292[9 /*20*/].f_2));
				func_684(&(Local_292[31 /*20*/]), 0);
				func_683(&(Local_292[31 /*20*/]), 1);
				HUD::REMOVE_BLIP(&(Local_292[31 /*20*/].f_2));
				if (__LIB_17__::func_338() != 2)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_424[2], joaat("WEAPON_SNIPERRIFLE"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_424[2], joaat("WEAPON_SNIPERRIFLE"), true);
					}
				}
				bLocal_511 = true;
				iLocal_579 = 0;
				iLocal_561++;
			}
			break;
		case 11:
			func_925();
			func_922();
			iLocal_579 = 0;
			iLocal_561++;
			break;
		case 12:
			func_925();
			func_922();
			if ((PED::IS_PED_INJURED(Local_292[8 /*20*/]) && PED::IS_PED_INJURED(Local_292[9 /*20*/])) && PED::IS_PED_INJURED(Local_292[31 /*20*/]))
			{
				if (iLocal_579 == 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
					iLocal_579 = MISC::GET_GAME_TIMER();
				}
				if (!Local_292[34 /*20*/].f_14)
				{
					func_684(&(Local_292[34 /*20*/]), 0);
					func_683(&(Local_292[34 /*20*/]), 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
				{
					if (iLocal_609 > 0)
					{
						if (!iLocal_506)
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_424[0], 845.8183f, -2332.2798f, 29.3346f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_424[0], 75.8831f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_424[0], 845.66034f, -2332.3076f, 29.3346f, -1, false, 0f, true, false, iLocal_700, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_424[0], false, false);
							iLocal_506 = 1;
						}
					}
				}
				if ((__LIB_17__::func_338() == 0 || __LIB_17__::func_338() == 1) || __LIB_0__::func_611(&iLocal_579, 10000))
				{
					iVar2 = 0;
					Local_248[5 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[5 /*15*/].f_1, Local_248[5 /*15*/].f_3, Local_248[5 /*15*/].f_6, true, true, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_248[5 /*15*/], true);
					VEHICLE::SET_VEHICLE_SIREN(Local_248[5 /*15*/], true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[5 /*15*/], Local_248[5 /*15*/].f_13, "lkfbi4", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_248[5 /*15*/], 1500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_248[5 /*15*/], true);
					func_928(&(Local_292[32 /*20*/]), &(Local_248[5 /*15*/]), -1, 0);
					func_683(&(Local_292[32 /*20*/]), 1);
					func_928(&(Local_292[33 /*20*/]), &(Local_248[5 /*15*/]), 0, 0);
					func_683(&(Local_292[33 /*20*/]), 1);
					func_684(&(Local_292[35 /*20*/]), 0);
					func_683(&(Local_292[35 /*20*/]), 1);
					iVar0 = 12;
					while (iVar0 <= 13)
					{
						if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iVar0 = 16;
					while (iVar0 <= 18)
					{
						if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iVar0 = 21;
					while (iVar0 <= 25)
					{
						if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_327.f_0 - 1))
					{
						if (!PED::IS_PED_INJURED(Local_327[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iLocal_634 = iVar2 + 4;
					iLocal_561++;
				}
			}
			break;
		case 13:
			iVar3 = 0;
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 16;
			while (iVar0 <= 18)
			{
				if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 21;
			while (iVar0 <= 25)
			{
				if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 32;
			while (iVar0 <= 35)
			{
				if (!PED::IS_PED_INJURED(Local_292[32 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_327.f_0 - 1))
			{
				if (!PED::IS_PED_INJURED(Local_327[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			if ((iLocal_634 - iVar3) >= 3)
			{
				Local_249[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_249[1 /*15*/].f_1, Local_249[1 /*15*/].f_3, Local_249[1 /*15*/].f_6, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(Local_249[1 /*15*/], 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_249[1 /*15*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_249[1 /*15*/], Local_249[1 /*15*/].f_13, "lkfbi4", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_249[1 /*15*/], 1000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_249[1 /*15*/], true);
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_249[1 /*15*/], true, true);
				func_928(&(Local_294[1 /*20*/]), &(Local_249[1 /*15*/]), -1, 0);
				func_683(&(Local_294[1 /*20*/]), 1);
				func_928(&(Local_292[10 /*20*/]), &(Local_249[1 /*15*/]), 1, 0);
				func_683(&(Local_294[1 /*20*/]), 1);
				func_928(&(Local_292[11 /*20*/]), &(Local_249[1 /*15*/]), 2, 0);
				func_683(&(Local_294[1 /*20*/]), 1);
				bLocal_512 = true;
				if (__LIB_17__::func_338() != 2)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_424[2], joaat("WEAPON_RPG"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_424[2], joaat("WEAPON_RPG"), true);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_424[2], false);
				}
				MISC::SET_FAKE_WANTED_LEVEL(3);
				iLocal_561++;
			}
			break;
		case 14:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_249[1 /*15*/]))
			{
				__LIB_17__::func_75(&iLocal_424, 0, 0);
				__LIB_17__::func_75(&iLocal_424, 1, 0);
				__LIB_17__::func_75(&iLocal_424, 2, 0);
				__LIB_0__::func_630(308);
				iVar0 = 0;
				while (iVar0 <= (Local_292.f_0 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_292[iVar0 /*20*/]) > 125)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_292[iVar0 /*20*/], 125, 0);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_292[iVar0 /*20*/], 37, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_292[iVar0 /*20*/], false);
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_292[iVar0 /*20*/], 886.087f, -2332.138f, 29.331f, 883.225f, -2365.516f, 32.331f, 15.5f, false, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_292[iVar0 /*20*/], 200f, 0);
							iLocal_220[iVar0] = 5;
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (Local_326.f_0 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_326[iVar0 /*20*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_326[iVar0 /*20*/]) > 125)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_326[iVar0 /*20*/], 125, 0);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_326[iVar0 /*20*/], false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_326[iVar0 /*20*/], 37, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_326[iVar0 /*20*/], false);
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_326[iVar0 /*20*/], 886.087f, -2332.138f, 29.331f, 883.225f, -2365.516f, 32.331f, 15.5f, false, false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_326[iVar0 /*20*/], 200f, 0);
							iLocal_221[iVar0] = 5;
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (Local_327.f_0 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_327[iVar0 /*20*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_327[iVar0 /*20*/]) > 125)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_327[iVar0 /*20*/], 125, 0);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_327[iVar0 /*20*/], false);
						}
					}
					iVar0++;
				}
				MISC::SET_FAKE_WANTED_LEVEL(2);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				iLocal_561++;
			}
			break;
		case 15:
			iVar4 = ((func_906(&Local_292) + func_920(&Local_326)) + func_920(&Local_327));
			if (iVar4 >= 39)
			{
				MISC::SET_FAKE_WANTED_LEVEL(1);
				iLocal_561++;
			}
			switch (__LIB_17__::func_338())
			{
				case 0:
					__LIB_16__::func_879(&iLocal_424, 1, 2, 2);
					break;
				case 1:
					__LIB_16__::func_879(&iLocal_424, 2, 0, 2);
					break;
				case 2:
					__LIB_16__::func_879(&iLocal_424, 0, 1, 0);
					break;
			}
			break;
		case 16:
			if (!__LIB_17__::func_490(&iLocal_424) && !Local_468.f_16)
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_end_0", 7, 0, 0, 0))
				{
					func_919();
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_656))
					{
						AUDIO::STOP_SOUND(iLocal_656);
					}
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_656, "Distant_Sirens", 844.7f, -2213.3f, 57.9f, 0, false, 0, false);
					func_635();
					PED::ADD_SCENARIO_BLOCKING_AREA(965.2f, -1693f, -100f, 1144.9f, -1929.1f, 100f, false, true, true, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
					{
						__LIB_17__::func_606(iLocal_424[2], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[2], true);
						TASK::CLEAR_PED_TASKS(iLocal_424[2]);
					}
					func_908(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 1);
						VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_233.f_0, true);
						__LIB_17__::func_423(&Local_233);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 1);
					}
					if (__LIB_0__::func_61(25, 0))
					{
						__LIB_16__::func_29(&Local_706, 25);
					}
					else
					{
						bLocal_503 = true;
						Local_706 = { 1121.03f, -1249.9f, 19.57f };
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_424[0], 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_424[1], 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_424[2], 0f);
					}
					if (__LIB_17__::func_338() == 1)
					{
						__LIB_17__::func_75(&iLocal_424, 0, 0);
						__LIB_17__::func_75(&iLocal_424, 1, 0);
						__LIB_17__::func_75(&iLocal_424, 2, 0);
						__LIB_16__::func_877(&iLocal_424, 0, 1);
						__LIB_16__::func_877(&iLocal_424, 1, 1);
						__LIB_16__::func_877(&iLocal_424, 2, 1);
						if (HUD::DOES_BLIP_EXIST(iLocal_680))
						{
							HUD::REMOVE_BLIP(&iLocal_680);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_679))
						{
							HUD::REMOVE_BLIP(&iLocal_679);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_681))
						{
							HUD::REMOVE_BLIP(&iLocal_681);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_424[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						func_408(4, "burn the truck", 1, 0, 0, 1);
						iLocal_532 = MISC::GET_GAME_TIMER();
						iLocal_628 = MISC::GET_GAME_TIMER();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_224.f_0, true);
							ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, false, false, false, false, false, false, false, false);
						}
						__LIB_17__::func_713(&Local_404, 1);
						iLocal_219 = 8;
					}
					else
					{
						__LIB_17__::func_75(&iLocal_424, 0, 0);
						__LIB_17__::func_75(&iLocal_424, 1, 1);
						__LIB_17__::func_75(&iLocal_424, 2, 0);
						__LIB_16__::func_877(&iLocal_424, 0, 1);
						__LIB_16__::func_877(&iLocal_424, 1, 0);
						__LIB_16__::func_877(&iLocal_424, 2, 1);
						__LIB_16__::func_879(&iLocal_424, 1, 0, 1);
						iLocal_653 = MISC::GET_GAME_TIMER();
						iLocal_219 = 7;
					}
					return 1;
				}
			}
			break;
	}
	func_827(&Local_292, 1);
	func_826(&Local_326);
	func_826(&Local_327);
	return 0;
}

void func_919()//Position - 0x9AD5F
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_TREVOR"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_TREVOR");
	}
}

int func_920(int iParam0)//Position - 0x9ADA6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*20*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_922()//Position - 0x9AE50
{
	if (bLocal_486)
	{
		switch (iLocal_616)
		{
			case 0:
				if (func_920(&Local_327) >= 2)
				{
					func_923();
					func_923();
					iLocal_616++;
				}
				break;
			case 1:
				if (func_920(&Local_327) >= 1)
				{
					func_923();
					iLocal_616++;
				}
				break;
			case 2:
				if (func_920(&Local_327) >= 2)
				{
					func_923();
					iLocal_616++;
				}
				break;
			case 3:
				if (func_920(&Local_327) >= 3)
				{
					func_923();
					func_923();
					iLocal_616 = 0;
				}
				break;
			}
	}
}

void func_923()//Position - 0x9AEEA
{
	int iVar0;
	iVar0 = 0;
	iVar0 = iLocal_612;
	while (iVar0 <= (Local_327.f_0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_327[iVar0 /*20*/]))
		{
			func_684(&(Local_327[iVar0 /*20*/]), 0);
			func_683(&(Local_327[iVar0 /*20*/]), 1);
			iLocal_222[iVar0] = 0;
			iLocal_612++;
			if (iLocal_612 >= Local_327.f_0)
			{
				iLocal_612 = 0;
			}
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_612 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_327[iVar0 /*20*/]))
		{
			func_684(&(Local_327[iVar0 /*20*/]), 0);
			func_683(&(Local_327[iVar0 /*20*/]), 1);
			iLocal_222[iVar0] = 0;
			iLocal_612++;
			if (iLocal_612 >= Local_327.f_0)
			{
				iLocal_612 = 0;
			}
			return;
		}
		iVar0++;
	}
}

int func_924()//Position - 0x9AFB1
{
	switch (iLocal_647)
	{
		case 0:
			Local_248[4 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_248[4 /*15*/].f_1, Local_248[4 /*15*/].f_3, Local_248[4 /*15*/].f_6, true, true, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_248[4 /*15*/], true);
			VEHICLE::SET_VEHICLE_SIREN(Local_248[4 /*15*/], true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_248[4 /*15*/], Local_248[4 /*15*/].f_13, "lkfbi4", true);
			func_928(&(Local_292[27 /*20*/]), &(Local_248[4 /*15*/]), -1, 0);
			func_683(&(Local_292[27 /*20*/]), 1);
			func_928(&(Local_292[28 /*20*/]), &(Local_248[4 /*15*/]), 0, 0);
			func_683(&(Local_292[28 /*20*/]), 1);
			iLocal_647++;
			break;
		case 1:
			func_684(&(Local_292[29 /*20*/]), 0);
			func_683(&(Local_292[29 /*20*/]), 1);
			iLocal_647++;
			break;
		case 2:
			func_684(&(Local_292[30 /*20*/]), 0);
			func_683(&(Local_292[30 /*20*/]), 1);
			iLocal_647++;
			return 1;
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_925()//Position - 0x9B0C9
{
	int iVar0;
	if (bLocal_486)
	{
		iVar0 = 0;
		iLocal_645 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_292.f_0 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_292[iVar0 /*20*/]))
			{
				iLocal_645++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_326.f_0 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_326[iVar0 /*20*/]))
			{
				iLocal_645++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_327.f_0 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_327[iVar0 /*20*/]))
			{
				iLocal_645++;
			}
			iVar0++;
		}
		if (iLocal_645 < 10)
		{
			switch (iLocal_615)
			{
				case 0:
					if (func_920(&Local_326) >= 2)
					{
						func_926();
						func_926();
						iLocal_615++;
					}
					break;
				case 1:
					if (func_920(&Local_326) >= 1)
					{
						func_926();
						iLocal_615++;
					}
					break;
				case 2:
					if (func_920(&Local_326) >= 2)
					{
						func_926();
						func_926();
						iLocal_615 = 0;
					}
					break;
				}
			}
	}
}

void func_926()//Position - 0x9B1D9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = iLocal_611;
	while (iVar0 <= (Local_326.f_0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_326[iVar0 /*20*/]))
		{
			func_684(&(Local_326[iVar0 /*20*/]), 0);
			func_683(&(Local_326[iVar0 /*20*/]), 1);
			iLocal_221[iVar0] = 0;
			iLocal_611++;
			if (iLocal_611 >= Local_326.f_0)
			{
				iLocal_611 = 0;
			}
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_611 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_326[iVar0 /*20*/]))
		{
			func_684(&(Local_326[iVar0 /*20*/]), 0);
			func_683(&(Local_326[iVar0 /*20*/]), 1);
			iLocal_221[iVar0] = 0;
			iLocal_611++;
			if (iLocal_611 >= Local_326.f_0)
			{
				iLocal_611 = 0;
			}
			return;
		}
		iVar0++;
	}
}

int func_927()//Position - 0x9B2A0
{
	switch (iLocal_646)
	{
		case 0:
			func_684(&(Local_292[12 /*20*/]), 0);
			func_683(&(Local_292[12 /*20*/]), 1);
			iLocal_646++;
			break;
		case 1:
			func_684(&(Local_292[13 /*20*/]), 0);
			func_683(&(Local_292[13 /*20*/]), 1);
			iLocal_646++;
			break;
		case 2:
			func_684(&(Local_292[16 /*20*/]), 0);
			func_683(&(Local_292[16 /*20*/]), 1);
			iLocal_646++;
			break;
		case 3:
			func_684(&(Local_292[17 /*20*/]), 0);
			func_683(&(Local_292[17 /*20*/]), 1);
			iLocal_646++;
			break;
		case 4:
			func_684(&(Local_292[18 /*20*/]), 0);
			func_683(&(Local_292[18 /*20*/]), 1);
			iLocal_646++;
			return 1;
			break;
		case 5:
			return 1;
			break;
	}
	return 0;
}

void func_928(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x9B38F
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, true, false, false, false);
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam1, 6, uParam0->f_1, iParam2, true, true);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
	PED::SET_PED_AS_ENEMY(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, false);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_15, -1, true, true);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_11);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_10, 0);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_10);
	if (uParam0->f_12)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	if (uParam0->f_13)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	uParam0->f_14 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_16));
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	if (bParam3)
	{
		uParam0->f_2 = __LIB_0__::func_666(*uParam0, 1, 145);
		HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	}
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	__LIB_16__::func_878(*uParam0, 311);
	__LIB_0__::func_609(*uParam0, 0);
}

void func_929()//Position - 0x9B4B5
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 893.272f, -2360.499f, 29.293f, 886.701f, -2359.877f, 31.893f, 5.5f, false, true, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_284.f_0) || ENTITY::DOES_ENTITY_EXIST(Local_288.f_0))
		{
			if (!PED::IS_PED_INJURED(Local_284.f_0) || !PED::IS_PED_INJURED(Local_288.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_284.f_0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_284.f_0, 2000, 0, 2);
					}
				}
				else if (!PED::IS_PED_INJURED(Local_288.f_0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_288.f_0, 2000, 0, 2);
					}
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) == 1)
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) == 1)
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
}

void func_930(var uParam0)//Position - 0x9B5B1
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (PED::IS_PED_INJURED(*uParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (__LIB_17__::func_338() == 2)
				{
					bLocal_524 = true;
				}
				else
				{
					bLocal_524 = false;
				}
			}
		}
	}
}

void func_931()//Position - 0x9B5EF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_424[0], 227, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[1]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_424[1], 227, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_424[2]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_424[2], 227, true);
		}
	}
}

void func_932()//Position - 0x9B66F
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 787.998f, -2336.441f, 29.2f, 933.748f, -2351.246f, 80.35f, 126.3f, false, true, 0))
	{
		bLocal_486 = true;
		if (iLocal_487)
		{
			if (__LIB_0__::func_501(sLocal_675, 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(sLocal_675);
				iLocal_487 = 0;
			}
		}
		iLocal_548 = MISC::GET_GAME_TIMER();
	}
	else
	{
		bLocal_486 = false;
		if (!iLocal_487)
		{
			switch (__LIB_17__::func_338())
			{
				case 0:
					__LIB_0__::func_229("cntry_area1", 7500, 1);
					sLocal_675 = "cntry_area1";
					break;
				case 1:
					__LIB_0__::func_229("cntry_area2", 7500, 1);
					sLocal_675 = "cntry_area2";
					break;
				case 2:
					__LIB_0__::func_229("cntry_area0", 7500, 1);
					sLocal_675 = "cntry_area0";
					break;
			}
			iLocal_487 = 1;
		}
		if (__LIB_0__::func_611(&iLocal_548, 10000))
		{
			if (!Local_468.f_16)
			{
				switch (__LIB_17__::func_338())
				{
					case 0:
						sLocal_676 = "cntry_fail10";
						break;
					case 1:
						sLocal_676 = "cntry_fail11";
						break;
					case 2:
						sLocal_676 = "cntry_fail9";
						break;
				}
				iLocal_496 = 1;
			}
		}
	}
}

void func_933()//Position - 0x9B79B
{
	__LIB_0__::func_467();
	func_902();
	func_939();
	func_932();
	func_938();
	func_937();
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	switch (iLocal_537)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_391.f_2);
			Local_284.f_0 = PED::CREATE_PED(26, Local_284.f_1, Local_284.f_3, Local_284.f_9, true, true);
			ENTITY::SET_ENTITY_COLLISION(Local_284.f_0, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_284.f_0, true);
			ENTITY::SET_ENTITY_VISIBLE(Local_284.f_0, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_284.f_0, true);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 6, Local_284.f_0, "AGENT1", 0, 1);
			PED::SET_PED_NAME_DEBUG(Local_284.f_0, &(Local_284.f_16));
			iLocal_537++;
			break;
		case 1:
			if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("WEAPON_STICKYBOMB"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("WEAPON_PROXMINE"), false))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 4);
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_PLANT_BOMB_MA");
				TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Heat1assists");
				if (HUD::DOES_BLIP_EXIST(iLocal_678))
				{
					HUD::REMOVE_BLIP(&iLocal_678);
				}
				HUD::CLEAR_THIS_PRINT("cntry_god7");
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
				iLocal_484 = 0;
				iLocal_546 = MISC::GET_GAME_TIMER();
				iLocal_498 = 1;
				func_408(2, "Detonate C4", 0, 0, 0, 1);
				iLocal_537++;
			}
			break;
		case 2:
			if (!func_835("cntry_god8"))
			{
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					__LIB_0__::func_229("cntry_god8", 5000, 1);
					func_832("cntry_god8", 1);
				}
			}
			if (!iLocal_484)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 891.7935f, -2357.5984f, 29.3537f, true) > 6f)
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_151("cntry_help3", -1);
					iLocal_532 = MISC::GET_GAME_TIMER();
					iLocal_484 = 1;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 891.7935f, -2357.5984f, 29.3537f, true) < 50f)
			{
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (!func_835("heat_c4_3"))
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_c4_3", 7, 0, 0, 0))
						{
							func_832("heat_c4_3", 1);
						}
					}
					else if (__LIB_0__::func_611(&iLocal_532, 10000))
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_c4_4", 7, 0, 0, 0))
						{
							iLocal_532 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (!func_835("heat_c4_5"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 891.7935f, -2357.5984f, 29.3537f, true) > 22f)
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_c4_5", 6, 0, 0, 0))
					{
						func_832("heat_c4_5", 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 893.067f, -2361.493f, 29.32f, 887.091f, -2360.959f, 33.32f, 4.5f, false, true, 0))
			{
				iLocal_497 = 1;
			}
			else if (__LIB_0__::func_611(&iLocal_546, 10000) || iLocal_497)
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "fbi4_c4_0", 7, 0, 0, 0))
				{
					iLocal_546 = MISC::GET_GAME_TIMER();
					iLocal_497 = 0;
				}
			}
			if (func_936())
			{
				WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(joaat("WEAPON_GRENADE"), false);
				MISC::CLEAR_AREA(889.7f, -2362.58f, 30.24f, 50f, false, false, false, false);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_233.f_0, false);
				ENTITY::SET_ENTITY_PROOFS(Local_233.f_0, true, true, true, true, true, false, false, false);
				HUD::CLEAR_HELP(true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_RIG_EXPLOSIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_RIG_EXPLOSIVES");
				}
				iLocal_532 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 893.067f, -2361.493f, 29.32f, 887.091f, -2360.959f, 33.32f, 4.5f, false, true, 0))
				{
					if (func_693(1, 1, 1, 1, 0))
					{
						func_934();
						iLocal_537++;
					}
				}
				else
				{
					FIRE::ADD_EXPLOSION_WITH_USER_VFX(889.7f, -2362.58f, 30.24f, 0, MISC::GET_HASH_KEY("EXP_VFXTAG_FBI4_TRUCK_DOORS"), 0.5f, true, false, 1f);
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_565, "FBI_04_HEAT_C4_DOORS", 0, true);
					OBJECT::DELETE_OBJECT(&Local_331);
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 2, 0);
				}
			}
			break;
		case 3:
			if (func_934())
			{
				if (STREAMING::HAS_MODEL_LOADED(Local_391.f_2))
				{
					Local_391.f_0 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_391.f_2, Local_391.f_3, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(Local_391.f_0, Local_391.f_12, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_391.f_0, true);
				}
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 0);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 1);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 2);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 3);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 4);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 5);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 6);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 7);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, iLocal_424[0], "michael", 0, 1);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, iLocal_424[2], "trevor", 0, 1);
				iLocal_536 = 2;
				func_902();
				func_870();
				func_869();
				iLocal_532 = MISC::GET_GAME_TIMER();
				func_408(2, "Detonate C4", 0, 0, 0, 1);
				iLocal_219 = 6;
			}
			break;
	}
}

int func_934()//Position - 0x9BCFB
{
	struct<3> Var0;
	switch (iLocal_563)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_284.f_0))
			{
				PED::DELETE_PED(&Local_284);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_284.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_278.f_0))
			{
				PED::DELETE_PED(&Local_278);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_278.f_1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, true, true, true, true, true, false, false, false);
			}
			MISC::CLEAR_AREA(889.7411f, -2345.4558f, 29.3307f, 1000f, true, false, false, false);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PED::SET_CREATE_RANDOM_COPS(false);
			if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1));
			}
			if (func_935())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 890.4393f, -2346.476f, 29.3416f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 184.3769f);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 3, false, false);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB")) < 3)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 3, false);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE"), true);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_224.f_0, 901.9453f, -2383.368f, 29.2789f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_224.f_0, 341.1729f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_239.f_0, 898.3076f, -2364.3623f, 29.4919f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_239.f_0, 87.458f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_239.f_0, 5f);
			}
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 2, false);
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_233.f_0, 3, false);
			FIRE::ADD_EXPLOSION_WITH_USER_VFX(889.7f, -2362.58f, 30.24f, 0, MISC::GET_HASH_KEY("EXP_VFXTAG_FBI4_TRUCK_DOORS"), 0.5f, true, false, 1f);
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_565, "FBI_04_HEAT_C4_DOORS", 0, true);
			OBJECT::DELETE_OBJECT(&Local_331);
			iLocal_683 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 888.93506f, -2355.4731f, 29.955381f, 4.753477f, -1.775736f, -163.73799f, 36.009514f, false, 2);
			CAM::SET_CAM_ACTIVE(iLocal_683, true);
			CAM::SHAKE_CAM(iLocal_683, "SMALL_EXPLOSION_SHAKE", 0.5f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			RECORDING::REPLAY_START_EVENT(4);
			AUDIO::TRIGGER_MUSIC_EVENT("fbi4_EXPLODE_MA");
			AUDIO::START_AUDIO_SCENE("FBI_4_EXPLOSION_RAYFIRE");
			iLocal_532 = MISC::GET_GAME_TIMER();
			iLocal_563++;
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_532, 1100))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_EXPLOSION_RAYFIRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_EXPLOSION_RAYFIRE");
				}
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "REACT_Explosion", 1000f, -4f, -1, 131072, 0.2f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				AUDIO::START_AUDIO_SCENE("FBI_4_PREP_FOR_COPS");
				RECORDING::REPLAY_STOP_EVENT();
				func_663(0, 1, 0, 0f, 0f, 3000, 0, 0);
				return 1;
			}
			break;
		case 2:
			break;
		case 22:
			break;
	}
	return 0;
}

int func_935()//Position - 0x9C048
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 897.491f, -2352.488f, 29.431f, 860.245f, -2349.099f, 32.331f, 28.2f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 897.491f, -2352.488f, 29.431f, 860.245f, -2349.099f, 32.331f, 28.2f, false, true, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 897.957f, -2352.269f, 29.358f, 884.508f, -2351.092f, 33.658f, 12.3f, false, true, 0))
		{
			if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			{
				return 1;
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 894.352f, -2355.901f, 29.401f, 889.687f, -2355.331f, 33.641f, 13.4f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_936()//Position - 0x9C130
{
	if (!iLocal_498)
	{
		if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("WEAPON_STICKYBOMB"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("WEAPON_PROXMINE"), false)) || (ENTITY::DOES_ENTITY_EXIST(Local_331.f_0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_331.f_0, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f, false, true, 0)))
		{
			iLocal_498 = 1;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_331.f_0))
	{
		if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(40, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f))
		{
			return 1;
		}
	}
	else if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(40, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f)) || ENTITY::GET_ENTITY_HEALTH(Local_331.f_0) < 990)
	{
		return 1;
	}
	return 0;
}

void func_937()//Position - 0x9C2CA
{
	switch (iLocal_639)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0))
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_RIG_EXPLOSIVES");
					iLocal_639++;
				}
			}
			break;
		case 1:
			break;
	}
}

void func_938()//Position - 0x9C318
{
	if (!bLocal_486)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_678))
		{
			HUD::REMOVE_BLIP(&iLocal_678);
		}
	}
	else
	{
		switch (iLocal_537)
		{
			case 0:
			case 1:
				if (!HUD::DOES_BLIP_EXIST(iLocal_678))
				{
					iLocal_678 = __LIB_0__::func_488(889.7667f, -2361.8057f, 29.2762f, 0);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_678, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_678, "cntry_god21");
				}
				break;
			case 2:
				break;
			}
	}
}

void func_939()//Position - 0x9C391
{
	if (!__LIB_13__::func_755(&Local_404, 0))
	{
		switch (iLocal_570)
		{
			case 0:
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_plant", 7, 0, 0, 0))
				{
					iLocal_570++;
				}
				break;
			case 1:
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_c4_1", 7, 0, 0, 0))
				{
					iLocal_570++;
				}
				break;
			case 2:
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_678))
					{
						iLocal_546 = MISC::GET_GAME_TIMER();
						__LIB_0__::func_229("cntry_god7", 7500, 1);
					}
					iLocal_570++;
				}
				break;
			case 3:
				if (!HUD::DOES_BLIP_EXIST(iLocal_678))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 891.7935f, -2357.5984f, 29.3537f, true) < 50f)
					{
						if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "fbi4_c4_0", 7, 0, 0, 0))
						{
							iLocal_570++;
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_546, 15000))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_remind", 7, 0, 0, 0))
					{
						iLocal_570++;
					}
				}
				break;
			}
	}
}

void func_941()//Position - 0x9C4D8
{
	if (iLocal_534 < 1)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
	switch (iLocal_534)
	{
		case 0:
			func_949();
			func_948(0);
			func_946();
			if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
			{
				AUDIO::PREPARE_MUSIC_EVENT("FBI4_TRUCK_RAM_MA");
			}
			func_945();
			if (HUD::DOES_BLIP_EXIST(Local_233.f_2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 907.426f, -2371.301f, 29.55f, 908.093f, -2362.426f, 33.55f, 5.8f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_HEADING(Local_239.f_0) > 45f && ENTITY::GET_ENTITY_HEADING(Local_239.f_0) < 135f)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_239.f_0, Local_233.f_0))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_239.f_0) >= 5f)
							{
								if (func_693(1, 1, 1, 0, 1))
								{
									func_942();
									iLocal_534++;
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (func_942())
			{
				iLocal_595 = MISC::GET_GAME_TIMER();
				iLocal_678 = __LIB_0__::func_488(889.7667f, -2361.8057f, 29.2762f, 0);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_678, true);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_678, "cntry_god21");
				iLocal_484 = 0;
				iLocal_219 = 5;
			}
			break;
		case 2:
			break;
	}
}

int func_942()//Position - 0x9C604
{
	float fVar0;
	__LIB_0__::func_467();
	if (ENTITY::DOES_ENTITY_EXIST(Local_233.f_0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_233.f_0);
		}
	}
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (__LIB_0__::func_645(1000))
	{
		iLocal_535 = 22;
	}
	func_948(fVar0);
	switch (iLocal_535)
	{
		case 0:
			func_635();
			HUD::REMOVE_BLIP(&(Local_233.f_2));
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 2f, 3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_PICKUP_TRUCK_INT"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_PICKUP_TRUCK_INT");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, true);
			PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, false, 0);
			PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
			PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
			MISC::CLEAR_AREA(906.2467f, -2357.9153f, 30.943356f, 10000f, true, false, false, false);
			iLocal_683 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 906.04236f, -2377.9255f, 30.724129f, 0.229425f, -1.864868f, 12.602599f, 39.64163f, false, 2);
			iLocal_684 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 907.6775f, -2369.175f, 31.802547f, -5.724536f, 0.207416f, 57.186512f, 37f, false, 2);
			iLocal_685 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 900.2029f, -2367.9504f, 32.188667f, -13.272571f, 0.458764f, 56.31219f, 35f, false, 2);
			iLocal_686 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 881.20917f, -2372.3413f, 34.58205f, -14.494484f, 3.857126f, -69.51784f, 27.690786f, false, 2);
			iLocal_687 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 879.63696f, -2374.7327f, 30.373684f, -2.835233f, 3.857126f, -52.99608f, 26.474293f, false, 2);
			iLocal_688 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 899.6381f, -2368.8135f, 30.395008f, 5.178746f, 1.312154f, 55.968925f, 50f, false, 2);
			iLocal_689 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 879.63696f, -2374.7327f, 30.373684f, -2.835233f, 3.857126f, -52.99608f, 25.8f, false, 2);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			func_526(PLAYER::PLAYER_PED_ID(), 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, true, true);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB")) < 5)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, false);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), true);
			PED::SET_PED_USING_ACTION_MODE(iLocal_424[0], true, -1, 0);
			func_491(iLocal_424[0]);
			__LIB_17__::func_606(iLocal_424[0], 0);
			func_394(&(iLocal_424[0]), 1);
			iLocal_679 = __LIB_0__::func_666(iLocal_424[0], 0, 145);
			HUD::SET_BLIP_DISPLAY(iLocal_679, 2);
			HUD::SET_BLIP_SCALE(iLocal_679, 0.5f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
			func_499(&(iLocal_424[2]), 2, 804.7164f, -2330.2073f, 61.0967f, 264.4371f, 0, 0, 0);
			func_399(iLocal_424[2]);
			func_293(iLocal_424[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_498(iLocal_424[2]);
			__LIB_17__::func_606(iLocal_424[2], 0);
			func_394(&(iLocal_424[2]), 1);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, iLocal_424[2], "TREVOR", 0, 1);
			iLocal_680 = __LIB_0__::func_666(iLocal_424[2], 0, 145);
			HUD::SET_BLIP_DISPLAY(iLocal_680, 2);
			HUD::SET_BLIP_SCALE(iLocal_680, 0.5f);
			__LIB_17__::func_186(&Local_233);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 3, "lkcountry", true);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_233.f_0, true);
			__LIB_17__::func_186(&Local_239);
			VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_239.f_0, false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 4, "lkcountry", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 8375f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_239.f_0, true);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_224.f_0, 901.9453f, -2383.368f, 29.2789f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_224.f_0, 341.1729f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
			}
			MISC::SET_TIME_SCALE(0.4f);
			AUDIO::PLAY_STREAM_FRONTEND();
			AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_FIB4_TRUCK_SMASH");
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_424[0]);
			ENTITY::SET_ENTITY_COORDS(iLocal_424[0], 907.141f, -2376.7097f, 29.53554f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_424[0], 9.7089f);
			func_902();
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_424[0], false, false);
			iLocal_692 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			CAM::PLAY_CAM_ANIM(iLocal_692, "fbi4_RAMCAM_CAM", "missfbi4", 921.402f, -2362.843f, 29.479f, 0f, 0f, -2.25f, false, 2);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			AUDIO::START_AUDIO_SCENE("FBI_4_COLLISION_RAYFIRE");
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_532 = MISC::GET_GAME_TIMER();
			iLocal_535++;
			break;
		case 1:
			if (fVar0 > 80f)
			{
				__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "ram_cut_1", 7, 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fbi4_trucks_crash", Local_239.f_0, 0f, 5f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_TRUCK_RAM_MA");
				iLocal_535++;
			}
			break;
		case 2:
			if (fVar0 > 600f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_683, false);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_239.f_0, 0f, 6.5f, 0.5f, 375f, 400f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_233.f_0, -2f, -0.5f, 0.5f, 1000f, 1000f, true);
				if (!PED::IS_PED_INJURED(Local_272.f_0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_272.f_0, "missheat", "Guard_Dead_DS", ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_233.f_0, 2), 1000f, -1000f, -1, 2, 0f, 2, 0);
				}
				if (!PED::IS_PED_INJURED(Local_278.f_0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_278.f_0, "missheat", "Guard_Dead_PS", ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_233.f_0, 2), 1000f, -1000f, -1, 2, 0f, 2, 0);
				}
				iLocal_532 = MISC::GET_GAME_TIMER();
				MISC::SET_TIME_SCALE(0.4f);
				iLocal_692 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
				CAM::PLAY_CAM_ANIM(iLocal_692, "fbi4_WALLCRUSH_CAM", "missfbi4", 921.677f, -2360.643f, 28.779f, 0f, 0f, 0.25f, false, 2);
				ENTITY::SET_ENTITY_COORDS(iLocal_424[0], 905.51105f, -2373.9165f, 29.53282f, true, true, true, true);
				iLocal_535++;
			}
			break;
		case 3:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_692) >= 0.3f)
			{
				VEHICLE::SET_VEHICLE_DAMAGE(Local_233.f_0, 0f, -1.5f, 2f, 1000f, 1000f, true);
				bLocal_523 = true;
				iLocal_535++;
			}
			break;
		case 4:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_692) >= 0.97f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_535++;
				}
			}
			else
			{
				iLocal_535++;
			}
			break;
		case 5:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_692) >= 1f)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_233.f_0, true);
				VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_233.f_0, true);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
				}
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_535++;
			}
			break;
		case 6:
			MISC::SET_TIME_SCALE(1f);
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_FIB4_TRUCK_SMASH");
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_239.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0);
			}
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_239.f_0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_233.f_0, true);
			VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_233.f_0, true);
			iLocal_532 = MISC::GET_GAME_TIMER();
			iLocal_535++;
			break;
		case 7:
			Local_239.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_239.f_0, true) };
			Local_239.f_6 = ENTITY::GET_ENTITY_HEADING(Local_239.f_0);
			Local_239.f_3 = { 896.0892f, -2364.416f, 29.4761f };
			Local_239.f_6 = 84.0784f;
			ENTITY::SET_ENTITY_COORDS(Local_239.f_0, Local_239.f_3, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_239.f_0, Local_239.f_6);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_239.f_0, 5f);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_239.f_0);
			Local_357.f_0 = OBJECT::CREATE_OBJECT(Local_357.f_2, Local_357.f_3, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(Local_357.f_0, Local_357.f_12, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_357.f_0, true);
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "ram_cut_2", 7, 0, 0, 0);
			if (!PED::IS_PED_INJURED(Local_272.f_0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_272.f_0, 2, 0);
			}
			if (!PED::IS_PED_INJURED(Local_278.f_0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_278.f_0, 2, 0);
			}
			AUDIO::SET_HORN_ENABLED(Local_233.f_0, false);
			AUDIO::STOP_AUDIO_SCENE("RURAL_BANK_HEIST_SETUP_HIJACK_SCENE");
			CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_705);
			func_663(0, 1, 0, -30f, 0f, 1500, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_535++;
			break;
		case 8:
			if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				AUDIO::STOP_STREAM();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_COLLISION_RAYFIRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_COLLISION_RAYFIRE");
				}
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 3);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 4);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 5);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 6);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 7);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_233.f_0, 2);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_233.f_0, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 2);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 2);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_239.f_0, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
			else
			{
				AUDIO::STOP_STREAM();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_COLLISION_RAYFIRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_COLLISION_RAYFIRE");
				}
				AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_FIB4_TRUCK_SMASH");
				if (!ENTITY::DOES_ENTITY_EXIST(Local_357.f_0))
				{
					Local_357.f_0 = OBJECT::CREATE_OBJECT(Local_357.f_2, Local_357.f_3, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(Local_357.f_0, Local_357.f_12, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_357.f_0, true);
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				AUDIO::STOP_STREAM();
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_702))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_702, 9);
					iLocal_554 = 22;
				}
				MISC::SET_TIME_SCALE(1f);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 3);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 4);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 5);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 6);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 7);
				if (!PED::IS_PED_INJURED(Local_272.f_0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_272.f_0, 2, 0);
				}
				if (!PED::IS_PED_INJURED(Local_278.f_0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_278.f_0, 2, 0);
				}
				AUDIO::SET_HORN_ENABLED(Local_233.f_0, false);
				if (!bLocal_523)
				{
					VEHICLE::SET_VEHICLE_DAMAGE(Local_233.f_0, 0f, -1.5f, 2f, 1000f, 1000f, true);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
				}
				__LIB_17__::func_186(&Local_233);
				ENTITY::FREEZE_ENTITY_POSITION(Local_233.f_0, true);
				VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Local_233.f_0, true);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_233.f_0, 2);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_233.f_0, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 2);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_239.f_0))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0);
				}
				__LIB_17__::func_186(&Local_239);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_239.f_0, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_424[0]);
				ENTITY::SET_ENTITY_COORDS(iLocal_424[0], 908.1069f, -2371.9827f, 29.5291f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_424[0], 25.6402f);
				iLocal_536 = 0;
				func_902();
				AUDIO::STOP_AUDIO_SCENE("RURAL_BANK_HEIST_SETUP_HIJACK_SCENE");
				AUDIO::STOP_SOUND(iLocal_564);
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_705);
				func_532(0, 1, -30f, 0f, 0, 1);
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
	}
	return 0;
}

void func_945()//Position - 0x9D242
{
	int iVar0;
	iVar0 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
	if (iVar0 != 4)
	{
		iLocal_705 = iVar0;
	}
}

void func_946()//Position - 0x9D25B
{
	if (HUD::DOES_BLIP_EXIST(Local_233.f_2))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0))
		{
			if (__LIB_0__::func_501("cntry_god3", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("cntry_god3");
			}
			HUD::REMOVE_BLIP(&(Local_233.f_2));
			Local_239.f_2 = __LIB_0__::func_639(Local_239.f_0, 0, 0);
			if (!func_835("heat_getout"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_424[0], true), true) < 20f)
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_getout", 7, 0, 0, 0))
					{
						func_832("heat_getout", 1);
					}
				}
			}
			if (!BitTest(uLocal_730, 0))
			{
				if (!__LIB_13__::func_755(&Local_404, 0))
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_229("cntry_god15", 7500, 1);
					MISC::SET_BIT(&uLocal_730, 0);
				}
			}
		}
	}
	else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0))
	{
		if (__LIB_0__::func_501("cntry_god15", 0, 0))
		{
			HUD::CLEAR_THIS_PRINT("cntry_god15");
		}
		if (HUD::DOES_BLIP_EXIST(Local_239.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_239.f_2));
		}
		Local_233.f_2 = __LIB_0__::func_639(Local_233.f_0, 1, 0);
	}
}

int func_948(float fParam0)//Position - 0x9D38C
{
	switch (iLocal_554)
	{
		case 0:
			iLocal_702 = OBJECT::GET_RAYFIRE_MAP_OBJECT(890.3647f, -2367.289f, 28.10582f, 10f, "DES_Smash2");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_702))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_702, 4);
				iLocal_554++;
			}
			break;
		case 1:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_702) == 5)
			{
				if (fParam0 > 1100f)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_702, 6);
					iLocal_554++;
					return 1;
				}
			}
			break;
		case 2:
			break;
		case 22:
			break;
	}
	return 0;
}

void func_949()//Position - 0x9D425
{
	if (!iLocal_517)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_239.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true), true) < 18f)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Securicar_Horn", ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true), "FBI_04_HEAT_SOUNDS", false, 0, false);
			iLocal_517 = 1;
		}
	}
	if (__LIB_0__::func_611(&iLocal_601, 4000))
	{
		VEHICLE::START_VEHICLE_HORN(Local_233.f_0, 2500, 0, false);
		iLocal_601 = MISC::GET_GAME_TIMER();
	}
}

void func_950()//Position - 0x9D490
{
	if (iLocal_531 < 1)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
	switch (iLocal_531)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_424[1], Local_239.f_0, false))
				{
					if (__LIB_17__::func_603(iLocal_424[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
						TASK::TASK_ENTER_VEHICLE(0, Local_239.f_0, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_424[1], iLocal_693);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					}
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_224.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0);
				iLocal_532 = 0;
				iLocal_551 = 0;
			}
			if (!func_835("park_truck"))
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "park_truck", 7, 0, 0, 0))
				{
					func_832("park_truck", 1);
				}
			}
			__LIB_16__::func_32(&Local_404, 906.2f, -2375.501f, 29.532f, 0.01f, 0.01f, 2f, 0, Local_224.f_0, "cntry_god2", "cntry_god14", "cntry_god13", 1, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
			{
				if (!func_835("cntry_help8"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.759f, -2375.988f, 29.409f, 896.07f, -2373.784f, 33.4f, 55f, false, true, 0))
					{
						__LIB_0__::func_151("cntry_help8", -1);
						func_832("cntry_help8", 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 912.891f, -2376.258f, 29.409f, 900.659f, -2374.972f, 33.309f, 16.8f, false, true, 0))
				{
					if (!func_835("stop_truck"))
					{
						if (!__LIB_13__::func_755(&Local_404, 0))
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "stop_truck", 7, 0, 0, 0))
							{
								func_832("stop_truck", 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
					{
						HUD::REMOVE_BLIP(&(Local_404.f_5));
					}
					Local_224.f_6 = ENTITY::GET_ENTITY_HEADING(Local_224.f_0);
					if ((Local_224.f_6 > 215f && Local_224.f_6 < 305f) || (Local_224.f_6 > 50f && Local_224.f_6 < 140f))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_224.f_0) < 0.5f)
						{
							if (__LIB_0__::func_1("cntry_help8"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!__LIB_13__::func_755(&Local_404, 0))
							{
								if (func_835("stop_truck"))
								{
									if (iLocal_551 == 0)
									{
										iLocal_551 = MISC::GET_GAME_TIMER();
									}
									if (__LIB_0__::func_611(&iLocal_551, 500))
									{
										if (func_693(0, 1, 1, 0, 1))
										{
											__LIB_13__::func_815(&Local_404, 1, 0);
											iLocal_531++;
										}
									}
								}
							}
						}
						else
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_224.f_0) > 5f)
							{
								func_954();
							}
							iLocal_551 = 0;
						}
					}
					else
					{
						iLocal_551 = 0;
						func_954();
						if (!func_835("cntry_help8"))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_224.f_0) < 2f)
							{
								if (iLocal_532 == 0)
								{
									iLocal_532 = MISC::GET_GAME_TIMER();
								}
								if (__LIB_0__::func_611(&iLocal_532, 2000))
								{
									__LIB_0__::func_190("cntry_help8");
									func_832("cntry_help8", 1);
								}
							}
						}
						else if (!__LIB_0__::func_1("cntry_help8"))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_224.f_0) < 2f)
							{
								__LIB_0__::func_190("cntry_help8");
							}
						}
					}
				}
				else
				{
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 906.2f, -2375.501f, 29.732f, 0.01f, 0.01f, 2f, true, true, 0);
					func_954();
					iLocal_551 = 0;
				}
			}
			else
			{
				func_954();
				iLocal_551 = 0;
				if (__LIB_0__::func_1("cntry_help8"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT("fbi4_PARK_AMBULANCE_OS");
			STREAMING::REQUEST_MODEL(Local_233.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_233.f_1, true);
			STREAMING::REQUEST_MODEL(Local_272.f_1);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_272.f_1, true);
			STREAMING::REQUEST_MODEL(Local_357.f_2);
			STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATMG")));
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_COMBATMG"), 31, 0);
			AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
			__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "in_pos_2", 7, 0, 0, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
			iLocal_532 = MISC::GET_GAME_TIMER();
			iLocal_531++;
			break;
		case 2:
			if (((((((STREAMING::HAS_MODEL_LOADED(Local_233.f_1) && STREAMING::HAS_MODEL_LOADED(Local_272.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_357.f_2)) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATMG")))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_COMBATMG"))) && AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS")) && AUDIO::PREPARE_MUSIC_EVENT("fbi4_PARK_AMBULANCE_OS")) && !__LIB_13__::func_755(&Local_404, 0))
			{
				PHYSICS::ACTIVATE_PHYSICS(Local_224.f_0);
				iLocal_531++;
			}
			break;
		case 3:
			if (func_951())
			{
				func_408(1, "Ram money truck", 0, 0, 0, 1);
				iLocal_219 = 4;
			}
			break;
	}
}

int func_951()//Position - 0x9D967
{
	if (__LIB_0__::func_645(1000))
	{
		iLocal_533 = 22;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_233.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
		{
		}
	}
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	switch (iLocal_533)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_BLOCK_THE_STREET"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_BLOCK_THE_STREET");
			}
			AUDIO::START_AUDIO_SCENE("FBI_4_TRUCK_SMASH_MAIN");
			ENTITY::SET_ENTITY_PROOFS(Local_224.f_0, true, true, true, true, true, false, false, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 1);
			__LIB_0__::func_221(&(Local_701[0 /*165*/]), 0);
			__LIB_0__::func_221(&(Local_701[0 /*165*/]), 1);
			__LIB_0__::func_221(&(Local_701[0 /*165*/]), 2);
			__LIB_0__::func_221(&(Local_701[0 /*165*/]), 3);
			__LIB_0__::func_221(&(Local_701[0 /*165*/]), 4);
			PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
			VEHICLE::SET_DISTANT_CARS_ENABLED(false);
			MISC::CLEAR_AREA(922.4016f, -2156.801f, 29.4934f, 1000f, true, false, false, false);
			iLocal_683 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 910.21454f, -2388.1309f, 34.77703f, -2.897402f, 3E-06f, 13.471053f, 36.06252f, false, 2);
			iLocal_684 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 910.23254f, -2388.203f, 33.276062f, -2.897402f, 3E-06f, 13.471053f, 34.06252f, false, 2);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
			VEHICLE::SET_VEHICLE_FIXED(Local_239.f_0);
			ENTITY::SET_ENTITY_COORDS(Local_239.f_0, 1024.1974f, -2376.5244f, 29.5306f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_239.f_0, 85.759f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_239.f_1);
			PED::SET_PED_INTO_VEHICLE(iLocal_424[1], Local_239.f_0, -1);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, iLocal_424[1], "franklin", 0, 1);
			func_794(&iLocal_424, 1);
			__LIB_42__::func_560(&iLocal_424, 1, 0, 0);
			__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
			ENTITY::SET_ENTITY_COORDS(Local_224.f_0, Local_658, true, false, false, true);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
			PHYSICS::ACTIVATE_PHYSICS(Local_224.f_0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[0], true);
			TASK::TASK_LOOK_AT_COORD(iLocal_424[0], 907.64f, -2373.35f, 31.5f, 5000, 0, 2);
			Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, 922.4016f, -2156.801f, 29.4934f, 174.54f, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_233.f_0, 3);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_233.f_0, false, 0);
			Local_233.f_2 = __LIB_0__::func_639(Local_233.f_0, 1, 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_233.f_0, "FBI_4_STOCKADE_GROUP", 0f);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_233.f_0, true);
			Local_272.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_272.f_1, -1, true, true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_272.f_0, true);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Local_272.f_0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272.f_0, true);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 6, Local_272.f_0, "AGENT1", 0, 1);
			Local_278.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_278.f_1, 0, true, true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_278.f_0, true);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Local_278.f_0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278.f_0, true);
			__LIB_0__::func_222(&(Local_701[0 /*165*/]), 7, Local_278.f_0, "AGENT2", 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 2, "lkcountry", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 7500f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_233.f_0, true);
			iLocal_685 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_685, Local_233.f_0, 2.18f, -0.3f, 0.32f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_685, Local_233.f_0, 1.4f, 8f, 0.6f, true);
			CAM::SET_CAM_FOV(iLocal_685, 50f);
			iLocal_686 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_686, Local_233.f_0, 2.21f, -0.8f, 1.63f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_686, Local_233.f_0, -0.8f, 8f, 0.7f, true);
			CAM::SET_CAM_FOV(iLocal_686, 35f);
			iLocal_687 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_687, Local_233.f_0, 1.58f, 5.83f, 0.78f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_687, Local_233.f_0, -1.2f, 0.2f, 1.1f, true);
			CAM::SET_CAM_FOV(iLocal_687, 32f);
			iLocal_690 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_690, Local_233.f_0, 0.82f, 4.85f, 1.43f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_690, Local_233.f_0, -0.6f, -0.2f, 1.4f, true);
			CAM::SET_CAM_FOV(iLocal_690, 32f);
			iLocal_688 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_688, Local_239.f_0, -0.21f, 0.75f, 1.35f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_688, Local_239.f_0, -3.1f, 20f, -1.3f, true);
			CAM::SET_CAM_FOV(iLocal_688, 45f);
			iLocal_689 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_689, Local_239.f_0, -0.21f, 0.8f, 1.35f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_689, Local_239.f_0, -3.1f, 20f, -1.3f, true);
			CAM::SET_CAM_FOV(iLocal_689, 45f);
			iLocal_704 = STREAMING::STREAMVOL_CREATE_SPHERE(905.92f, -2367.47f, 30.54f, 20f, 1, 127);
			Local_659 = { 892.138f, -2368.97f, 30.939f };
			Local_660 = { 0f, 0f, 0f };
			CAM::SET_CAM_ACTIVE(iLocal_685, true);
			CAM::SHAKE_CAM(iLocal_685, "ROAD_VIBRATION_SHAKE", 2.5f);
			iLocal_692 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			CAM::PLAY_CAM_ANIM(iLocal_692, "fbi4_garagetruck_block_cam", "missfbi4", Local_659, Local_660, false, 2);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iLocal_532 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("fbi4_PARK_AMBULANCE_OS");
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_239.f_0, "FBI_4_TOWTRUCK_GROUP", 0f);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_533++;
			break;
		case 1:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_692) >= 1f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_692, false);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
				CAM::SET_CAM_ACTIVE(iLocal_685, true);
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_533++;
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_532, 2000))
			{
				CAM::SET_CAM_ACTIVE(iLocal_686, false);
				CAM::SET_CAM_ACTIVE(iLocal_685, false);
				CAM::SET_CAM_ACTIVE(iLocal_687, true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_690, iLocal_687, 3000, 0, 1);
				CAM::SHAKE_CAM(iLocal_690, "ROAD_VIBRATION_SHAKE", 2.5f);
				__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "amb_cut_1", 7, 0, 0, 0);
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_533++;
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_532, 2000))
			{
				CAM::SET_CAM_ACTIVE(iLocal_690, false);
				CAM::SET_CAM_ACTIVE(iLocal_687, false);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 1000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_233.f_0, true);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_239.f_0, 2);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 15, "lkcountry", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 1500f);
				Local_659 = { 924.627f, -2362f, 29.516f };
				Local_660 = { 0f, 0f, 0f };
				CAM::PLAY_CAM_ANIM(iLocal_692, "fbi4_securityvan_blocked_cam", "missfbi4", Local_659, Local_660, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_692, true);
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_533++;
			}
			break;
		case 4:
			if (__LIB_0__::func_611(&iLocal_532, 1000))
			{
				__LIB_0__::func_429();
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_PRE_TRUCK_RAM_MA");
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_533++;
			}
			break;
		case 5:
			if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
			{
				AUDIO::PREPARE_MUSIC_EVENT("FBI4_RAM_OS");
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_692) >= 1f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_692, false);
				MISC::CLEAR_AREA(1030.147f, -2376.7976f, 29.4686f, 150f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(Local_233.f_0, 904.981f, -2367.179f, 30.15f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_233.f_0, 175.2936f);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_239.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0);
				}
				ENTITY::SET_ENTITY_COORDS(Local_239.f_0, 1030.147f, -2376.7976f, 29.4686f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_239.f_0, 86.1538f);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 12, "lkcountry", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 4500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_239.f_0, 1f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_239.f_0, true);
				CAM::DESTROY_CAM(iLocal_692, false);
				Local_659 = { 0f, 0f, 0f };
				Local_660 = { 0f, 0f, 0f };
				iLocal_539 = PED::CREATE_SYNCHRONIZED_SCENE(Local_659, Local_660, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
				{
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_539, Local_239.f_0, 0);
				}
				iLocal_692 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_692, iLocal_539, "fbi4_franklin_truck_cam", "missfbi4");
				CAM::SET_CAM_ACTIVE(iLocal_692, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				iLocal_532 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_429();
				__LIB_14__::func_654(&(Local_701[0 /*165*/]), "heataud", "amb_cut_2", 7, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_RAM_OS");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_239.f_0, 0f);
				AUDIO::START_AUDIO_SCENE("FBI_4_PICKUP_TRUCK_INT");
				iLocal_533++;
			}
			break;
		case 6:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_239.f_0) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(12, "lkcountry")
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_TRUCK_SMASH_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_TRUCK_SMASH_MAIN");
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_233.f_0, false);
				iLocal_705 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
				STREAMING::STREAMVOL_DELETE(iLocal_704);
				VEHICLE::SET_DISTANT_CARS_ENABLED(true);
				iLocal_552 = MISC::GET_GAME_TIMER();
				RECORDING::REPLAY_STOP_EVENT();
				func_663(0, 1, 0, 0f, 0f, 3000, 0, 1);
				__LIB_0__::func_229("cntry_god3", 7500, 1);
				return 1;
			}
			break;
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
			else
			{
				RECORDING::REPLAY_CANCEL_EVENT();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_TRUCK_SMASH_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_TRUCK_SMASH_MAIN");
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_233.f_0, false);
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
				while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry"))
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::STREAMVOL_DELETE(iLocal_704);
				VEHICLE::SET_DISTANT_CARS_ENABLED(true);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
				}
				ENTITY::SET_ENTITY_COORDS(Local_233.f_0, 904.981f, -2367.179f, 30.15f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_233.f_0, 175.2936f);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_239.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0);
				}
				ENTITY::SET_ENTITY_COORDS(Local_239.f_0, 1030.147f, -2376.7976f, 29.4686f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_239.f_0, 86.1538f);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_239.f_0, 2);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 12, "lkcountry", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 6500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_239.f_0, 1f);
				iLocal_705 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_239.f_0, 0f);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_PICKUP_TRUCK_INT"))
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_PICKUP_TRUCK_INT");
				}
				iLocal_552 = MISC::GET_GAME_TIMER();
				func_532(1, 1, 0f, 0f, 0, 1);
				__LIB_0__::func_229("cntry_god3", 7500, 1);
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
	}
	return 0;
}

void func_954()//Position - 0x9E47F
{
	if (!func_835("park_truck"))
	{
		if (func_835("stop_truck"))
		{
			if (!__LIB_13__::func_755(&Local_404, 0))
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "park_truck", 7, 0, 0, 0))
				{
					func_832("park_truck", 1);
				}
			}
		}
	}
	if (!func_835("heat_tofar0"))
	{
		if (!__LIB_13__::func_755(&Local_404, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_424[1], true), 1016.7465f, -2375.7974f, 29.5309f, true) < 55f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_424[1], true), true) < 15f)
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_tofar0", 6, 0, 0, 0))
					{
						func_832("heat_tofar0", 1);
					}
				}
			}
		}
	}
}

void func_956()//Position - 0x9E57B
{
	int iVar0;
	struct<3> Var1;
	switch (iLocal_530)
	{
		case 0:
			if (func_962(&Local_468, iLocal_687, 2, 0, 1148829696, 1148829696, 0, 0, 0, 2))
			{
				if (Local_468.f_18)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_687, true);
					if (!Local_468.f_19)
					{
						if (__LIB_42__::func_560(&iLocal_424, 0, 0, 0))
						{
							Local_468.f_19 = 1;
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), false, 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(PLAYER::PLAYER_PED_ID(), true);
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
							{
								PED::DELETE_PED(&(iLocal_424[0]));
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_509(0));
							if (ENTITY::DOES_ENTITY_EXIST(Local_224.f_0))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_224);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_224.f_1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_252.f_0))
							{
								VEHICLE::DELETE_VEHICLE(&Local_252);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252.f_1);
							Local_335.f_0 = OBJECT::CREATE_OBJECT(Local_335.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 40f), true, true, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_335.f_0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.22f);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheat", "binoculars_loop", 1000f, -8f, -1, 1, 0f, false, false, false);
						}
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				STREAMING::STREAMVOL_DELETE(iLocal_704);
				iLocal_704 = STREAMING::STREAMVOL_CREATE_SPHERE(740.894f, -2475.9226f, 19.3226f, 50f, 1, 127);
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
				func_693(0, 1, 1, 0, 1);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 1);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, 0, "michael", 0, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_688, iLocal_687, 2500, 0, 1);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_530++;
			}
			break;
		case 1:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_688))
			{
				func_959();
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_530++;
			}
			break;
		case 2:
			if (func_959())
			{
				STREAMING::STREAMVOL_DELETE(iLocal_704);
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_530++;
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heatAUD", "van_cut_1", 7, 0, 0, 0))
				{
					iLocal_530++;
				}
			}
			break;
		case 4:
			if (((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_224.f_1) && STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) && STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0))) && STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) && STREAMING::HAS_MODEL_LOADED(Local_331.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) && STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1))
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(945.8f, -2080.8f, 100f, 1015.3f, -2035.2f, -100f, false, true);
				MISC::CLEAR_AREA(Local_224.f_3, 50f, true, false, false, false);
				iLocal_704 = STREAMING::STREAMVOL_CREATE_SPHERE(937.2f, -2080.8f, 30f, 20f, 1, 127);
				Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, Local_224.f_3, Local_224.f_6, true, true, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0, 11, "lkcountry", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0, 5200f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_224.f_0, true);
				VEHICLE::SET_PLAYBACK_SPEED(Local_224.f_0, 0f);
				__LIB_0__::func_679(Local_224.f_0, 0);
				func_531(&(iLocal_424[0]), 0, Local_224.f_0, -1, 0, 0, 0);
				func_399(iLocal_424[0]);
				func_293(iLocal_424[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_17__::func_606(iLocal_424[0], 0);
				func_394(&(iLocal_424[0]), 1);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, iLocal_424[0], "michael", 0, 1);
				Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 1024.1974f, -2376.5244f, 29.5306f, 85.759f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_239.f_0, true, true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 3);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
				__LIB_0__::func_679(Local_239.f_0, 1);
				func_531(&(iLocal_424[1]), 1, Local_239.f_0, -1, 0, 0, 0);
				func_399(iLocal_424[1]);
				func_293(iLocal_424[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, iLocal_424[1], "franklin", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[1], true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_BINOCULARS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
				}
				iLocal_530++;
			}
			break;
		case 5:
			func_794(&iLocal_424, 0);
			func_957();
			break;
		case 6:
			if (__LIB_17__::func_668(&Local_468, 2, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_468.f_18)
				{
					if (!Local_468.f_19)
					{
						if (__LIB_42__::func_560(&iLocal_424, 1, 1, 0))
						{
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
							Local_468.f_19 = 1;
						}
					}
				}
				if (!iLocal_505)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
						if (iVar0 == 9)
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_224.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_224.f_0, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0, (5200f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_224.f_0)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_224.f_0, true);
								iLocal_505 = 1;
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0, 11, "lkcountry", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0, 5200f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_224.f_0, true);
								iLocal_505 = 1;
							}
						}
					}
				}
				if (__LIB_0__::func_611(&iLocal_532, 2500))
				{
					MISC::CLEAR_AREA(Local_224.f_3, 100f, true, false, false, false);
				}
			}
			else
			{
				STREAMING::STREAMVOL_DELETE(iLocal_704);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_224.f_0, false, 1);
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_0))
				{
					ENTITY::DETACH_ENTITY(Local_335.f_0, true, true);
					OBJECT::DELETE_OBJECT(&Local_335);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_335.f_2);
				if (!PED::IS_PED_INJURED(iLocal_424[iLocal_424.f_5]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_424[iLocal_424.f_5], true);
				}
				if (!PED::IS_PED_INJURED(Local_272.f_0))
				{
					PED::DELETE_PED(&Local_272);
				}
				if (!PED::IS_PED_INJURED(Local_278.f_0))
				{
					PED::DELETE_PED(&Local_278);
				}
				if (!PED::IS_PED_INJURED(iLocal_694))
				{
					__LIB_0__::func_221(&(Local_701[0 /*165*/]), 1);
					PED::DELETE_PED(&iLocal_694);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
					}
					VEHICLE::DELETE_VEHICLE(&Local_233);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_224.f_0))
				{
					Var1 = { ENTITY::GET_ENTITY_VELOCITY(Local_224.f_0) };
					Var1 = { Var1 * Vector(1.2f, 1.2f, 1.2f) };
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_224.f_0);
					ENTITY::SET_ENTITY_VELOCITY(Local_224.f_0, Var1);
				}
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 0);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
				__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_move", 9, 0, 0, 0);
				AUDIO::START_AUDIO_SCENE("FBI_4_BLOCK_THE_STREET");
				iLocal_219 = 3;
			}
			break;
	}
}

void func_957()//Position - 0x9ED66
{
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	__LIB_17__::func_75(&iLocal_424, 0, 0);
	__LIB_16__::func_877(&iLocal_424, 1, 0);
	func_958();
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_224.f_0, true, 1);
	iLocal_530++;
}

int func_958()//Position - 0x9ED9F
{
	Local_468.f_12 = iLocal_424[0];
	return 1;
}

int func_959()//Position - 0x9EDB3
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	__LIB_0__::func_467();
	if (__LIB_0__::func_645(1000))
	{
		iLocal_545 = 22;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
		{
			fVar1 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_233.f_0);
		}
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	switch (iLocal_545)
	{
		case 0:
			if ((STREAMING::HAS_MODEL_LOADED(Local_233.f_1) && STREAMING::HAS_MODEL_LOADED(Local_272.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_260[0 /*15*/].f_1))
			{
				func_960(1, 1);
				PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, true);
				PATHFIND::SET_PED_PATHS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, false, true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, false, true);
				PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, false, true);
				MISC::CLEAR_AREA(790.83f, -2330.06f, 62.67f, 1000f, true, false, false, false);
				Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, Local_233.f_3, Local_233.f_6, true, true, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
				ENTITY::SET_ENTITY_PROOFS(Local_233.f_0, true, true, true, true, true, false, false, false);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_233.f_0, false, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 1, "lkcountry", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 6000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_233.f_0, true);
				Local_272.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_272.f_1, 0, true, true);
				PED::SET_PED_DIES_WHEN_INJURED(Local_272.f_0, true);
				PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_272.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272.f_0, true);
				Local_278.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_278.f_1, -1, true, true);
				PED::SET_PED_DIES_WHEN_INJURED(Local_278.f_0, true);
				PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_278.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278.f_0, true);
				Local_260[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[0 /*15*/].f_1, Local_260[0 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[0 /*15*/], Local_260[0 /*15*/].f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[0 /*15*/], 7000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[0 /*15*/], true);
				Local_260[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[1 /*15*/].f_1, Local_260[1 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[1 /*15*/], Local_260[1 /*15*/].f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[1 /*15*/], 7000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[1 /*15*/], true);
				Local_260[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[2 /*15*/].f_1, Local_260[2 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[2 /*15*/], Local_260[2 /*15*/].f_13, "lkheat", true);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[2 /*15*/], true);
				Local_260[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[3 /*15*/].f_1, Local_260[3 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[3 /*15*/], Local_260[3 /*15*/].f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[3 /*15*/], 7000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[3 /*15*/], true);
				Local_260[7 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[7 /*15*/].f_1, Local_260[7 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[7 /*15*/], Local_260[7 /*15*/].f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[7 /*15*/], 4200f);
				iLocal_683 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 768.6289f, -2357.2751f, 57.672928f, -5.133545f, 0.001094f, 153.9442f, 28f, false, 2);
				iLocal_684 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 768.7133f, -2356.7507f, 57.853672f, -18.86613f, -0.410374f, 158.94235f, 28f, false, 2);
				iLocal_685 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 768.7133f, -2356.7507f, 57.853672f, -18.86613f, -0.410374f, 158.94235f, 28f, false, 2);
				iLocal_686 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 765.14545f, -2378.9038f, 50.21748f, -13.958374f, 0f, 172.83864f, 22.251091f, false, 2);
				iLocal_689 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 765.1417f, -2378.9124f, 50.21524f, -25.080309f, -0.25713f, 167.93471f, 20.208502f, false, 2);
				iLocal_687 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 757.39355f, -2407.6963f, 20.083193f, 3.599488f, 0.001119f, 156.81755f, 36.713017f, false, 2);
				iLocal_688 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 757.89935f, -2406.8093f, 20.134092f, 4.586555f, 0f, 158.10097f, 36.713017f, false, 2);
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
				bLocal_495 = true;
				CAM::SET_CAM_ACTIVE(iLocal_683, true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_684, iLocal_683, 5500, 0, 1);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
				CAM::SHAKE_CAM(iLocal_686, "HAND_SHAKE", 1f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_532 = MISC::GET_GAME_TIMER();
				AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
				STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
				STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
				STREAMING::REQUEST_MODEL(Local_224.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
				STREAMING::REQUEST_MODEL(Local_239.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
				STREAMING::REQUEST_MODEL(Local_331.f_2);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
				STREAMING::REQUEST_ANIM_DICT("missfbi4");
				STREAMING::REQUEST_ANIM_DICT("misssagrab");
				TASK::REQUEST_WAYPOINT_RECORDING("heat1");
				TASK::REQUEST_WAYPOINT_RECORDING("heat2");
				TASK::REQUEST_WAYPOINT_RECORDING("heat3");
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
				__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_looks", 7, 0, 0, 0);
				iLocal_545++;
			}
			break;
		case 1:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_684))
			{
				CAM::SET_CAM_ACTIVE(iLocal_683, false);
				CAM::SET_CAM_ACTIVE(iLocal_684, false);
				Local_260[4 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[4 /*15*/].f_1, Local_260[4 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[4 /*15*/], Local_260[0 /*15*/].f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[4 /*15*/], 3000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[4 /*15*/], true);
				Local_260[5 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[5 /*15*/].f_1, Local_260[5 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[5 /*15*/], Local_260[5 /*15*/].f_13, "lkheat", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[5 /*15*/], 5250f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[5 /*15*/], true);
				Local_260[6 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[6 /*15*/].f_1, Local_260[6 /*15*/].f_3, 0f, true, true, false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[6 /*15*/], Local_260[6 /*15*/].f_13, "lkheat", true);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[6 /*15*/], true);
				CAM::SET_CAM_ACTIVE(iLocal_685, true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_686, iLocal_685, 5500, 0, 1);
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_545++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_532, 3000))
			{
				__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "van_cut_0", 7, 0, 0, 0);
				iLocal_545++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			break;
		case 3:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_686))
			{
				CAM::SET_CAM_ACTIVE(iLocal_685, false);
				CAM::SET_CAM_ACTIVE(iLocal_686, true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_689, iLocal_686, 3000, 0, 1);
				iLocal_545++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			break;
		case 4:
			if (fVar1 > 20277f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_686, false);
				CAM::SET_CAM_ACTIVE(iLocal_689, false);
				__LIB_0__::func_429();
				__LIB_14__::func_654(&(Local_701[0 /*165*/]), "heataud", "van_cut_0b", 7, 0, 0);
				VEHICLE::SET_PLAYBACK_SPEED(Local_233.f_0, 0.8f);
				CAM::SET_CAM_ACTIVE(iLocal_687, true);
				AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
				CAM::SHAKE_CAM(iLocal_687, "ROAD_VIBRATION_SHAKE", 1f);
				bLocal_495 = false;
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_545++;
			}
			else
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			}
			break;
		case 5:
			if (__LIB_0__::func_611(&iLocal_532, 1800))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_260.f_0 - 1))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_260[iVar0 /*15*/].f_1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_260[iVar0 /*15*/]));
					iVar0++;
				}
				PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, true, true);
				PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, true);
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_703);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
				}
				PED::DELETE_PED(&Local_272);
				PED::DELETE_PED(&Local_278);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_272.f_1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_TRUCK"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				func_663(0, 1, 0, 0f, 0f, 3000, 0, 1);
				return 1;
			}
			break;
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
				if (bLocal_495)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
				}
			}
			else
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_TRUCK"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
				}
				iVar0 = 0;
				while (iVar0 <= (Local_260.f_0 - 1))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_260[iVar0 /*15*/].f_1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_260[iVar0 /*15*/]));
					iVar0++;
				}
				STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
				STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
				STREAMING::REQUEST_MODEL(Local_224.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
				STREAMING::REQUEST_MODEL(Local_239.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
				STREAMING::REQUEST_MODEL(Local_331.f_2);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
				STREAMING::REQUEST_ANIM_DICT("missfbi4");
				STREAMING::REQUEST_ANIM_DICT("misssagrab");
				TASK::REQUEST_WAYPOINT_RECORDING("heat1");
				TASK::REQUEST_WAYPOINT_RECORDING("heat2");
				TASK::REQUEST_WAYPOINT_RECORDING("heat3");
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
				while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_224.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(Local_331.f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1))
				{
					SYSTEM::WAIT(0);
				}
				PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, true, true);
				PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, true);
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_703);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
				}
				PED::DELETE_PED(&Local_272);
				PED::DELETE_PED(&Local_278);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_272.f_1);
				VEHICLE::DELETE_VEHICLE(&Local_233);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_233.f_1);
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				func_532(0, 1, 0f, 0f, 0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_960(bool bParam0, bool bParam1)//Position - 0x9FB3A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_142))
	{
		iLocal_44 = 0;
		__LIB_15__::func_910();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_151);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_60)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_17__::func_484());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_908());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_907());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_616();
			__LIB_17__::func_485();
			__LIB_40__::func_815();
		}
		else
		{
			func_590();
			func_628();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

int func_962(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x9FBFE
{
	return __LIB_17__::func_623(uParam0, iParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

void func_963()//Position - 0x9FC25
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 913.6f, -2229.3f, 29.4f };
	if (iLocal_560 < 2)
	{
		func_1018();
	}
	if (!iLocal_521)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(Local_224.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0, false))
				{
					if (SYSTEM::VDIST2(Var1, Var0) <= 32400f)
					{
						STREAMING::PREFETCH_SRL(sLocal_4495);
						STREAMING::SET_SRL_READAHEAD_TIMES(3, 3, 3, 3);
						STREAMING::SET_SRL_FORCE_PRESTREAM(2);
						iLocal_521 = 1;
					}
				}
			}
		}
	}
	switch (iLocal_560)
	{
		case 0:
			if (!func_835("over_take0"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1129.308f, -2095.91f, 32.359f, 1129.251f, -2062.817f, 48.059f, 115f, false, true, 0))
					{
						if (func_1017())
						{
							if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "over_take0", 6, 0, 0, 0))
							{
								func_832("over_take0", 1);
							}
						}
					}
				}
			}
			if (!func_835("FBI_4_DRIVE_TO_CYPRUS_FLATS"))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0))
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_DRIVE_TO_CYPRUS_FLATS");
					func_832("FBI_4_DRIVE_TO_CYPRUS_FLATS", 1);
				}
			}
			if (__LIB_16__::func_32(&Local_404, Var0, 2f, 2f, 2f, 1, Local_224.f_0, "cntry_god18", "cntry_god23", "cntry_god13", 1, 0, 1, -1))
			{
				__LIB_13__::func_815(&Local_404, 1, 0);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				__LIB_0__::func_213(Local_224.f_0, 7f, 1, 1056964608, 0, 1, 0);
				iLocal_532 = MISC::GET_GAME_TIMER();
				iLocal_734 = 1;
				iLocal_560++;
			}
			break;
		case 1:
			if (__LIB_0__::func_213(Local_224.f_0, 7f, 1, 1056964608, 0, 1, 0))
			{
				if (func_1016())
				{
					if (!__LIB_13__::func_755(&Local_404, 0))
					{
						if (func_693(1, 1, 1, 0, 1))
						{
							func_971(&uLocal_735, &uLocal_1976, &uLocal_3217);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
							iLocal_560++;
						}
					}
				}
			}
			break;
		case 2:
			if (func_971(&uLocal_735, &uLocal_1976, &uLocal_3217))
			{
				iLocal_560++;
			}
			break;
		case 3:
			func_970();
			if (((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_224.f_1) && STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) && STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0))) && STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) && STREAMING::HAS_MODEL_LOADED(Local_331.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) && STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_0))
				{
					ENTITY::DETACH_ENTITY(Local_335.f_0, true, true);
					OBJECT::DELETE_OBJECT(&Local_335);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_335.f_2);
				if (!PED::IS_PED_INJURED(iLocal_424[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_424[1], true);
				}
				if (!PED::IS_PED_INJURED(Local_272.f_0))
				{
					PED::DELETE_PED(&Local_272);
				}
				if (!PED::IS_PED_INJURED(Local_278.f_0))
				{
					PED::DELETE_PED(&Local_278);
				}
				if (!PED::IS_PED_INJURED(iLocal_694))
				{
					__LIB_0__::func_221(&(Local_701[0 /*165*/]), 1);
					PED::DELETE_PED(&iLocal_694);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
					}
					VEHICLE::DELETE_VEHICLE(&Local_233);
				}
				STREAMING::REMOVE_ANIM_DICT(sLocal_4494);
				Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 1024.1974f, -2376.5244f, 29.5306f, 85.759f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_239.f_0, true, true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 3);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
				__LIB_0__::func_679(Local_239.f_0, 1);
				func_531(&(iLocal_424[1]), 1, Local_239.f_0, -1, 0, 0, 0);
				func_399(iLocal_424[1]);
				func_293(iLocal_424[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, iLocal_424[1], "franklin", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_424[1], true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_BINOCULARS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
				}
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
				__LIB_0__::func_221(&(Local_701[0 /*165*/]), 0);
				__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
				__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_move", 9, 0, 0, 0);
				AUDIO::START_AUDIO_SCENE("FBI_4_BLOCK_THE_STREET");
				iLocal_219 = 3;
			}
			break;
		case 4:
			break;
	}
	func_969();
	if (!iLocal_493)
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_239.f_0))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_239.f_0) > 18000f)
			{
				VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_239.f_0, 786603);
				iLocal_493 = 1;
			}
		}
	}
	func_964();
}

void func_964()//Position - 0xA01B4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_252.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_252.f_0))
		{
			switch (iLocal_582)
			{
				case 0:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_252.f_0) > 18000f)
					{
						iLocal_582++;
					}
					func_588(Local_252.f_0, 1f);
					break;
				case 1:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_252.f_0) < 44300f)
					{
						__LIB_33__::func_556(Local_252.f_0, PLAYER::PLAYER_PED_ID(), &(Local_252.f_7), 1f, 260f, 280f, 320f, 1.2f, 1f, 1f, 1);
						func_588(Local_252.f_0, Local_252.f_7);
					}
					else
					{
						func_960(0, 1);
						PATHFIND::SET_ROADS_IN_AREA(885.8f, -2086.9f, 100f, 941.9f, -2463f, -100f, false, true);
						iLocal_582++;
					}
					break;
				case 2:
					break;
				}
			}
	}
}

void func_969()//Position - 0xA06B6
{
	switch (iLocal_573)
	{
		case 0:
			iLocal_573++;
			break;
		case 1:
			iLocal_573++;
			break;
		case 2:
			switch (iLocal_572)
			{
				case 0:
					break;
			}
			break;
	}
	if (!func_835("fbi4_ram0"))
	{
		if (!__LIB_13__::func_755(&Local_404, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_404.f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_239.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "fbi4_ram0", 6, 0, 0, 0))
					{
						func_832("fbi4_ram0", 1);
					}
				}
			}
		}
	}
	if (!func_835("heat_tofar0"))
	{
		if (!__LIB_13__::func_755(&Local_404, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_424[1], true), 1016.7465f, -2375.7974f, 29.5309f, true) < 55f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_424[1], true), true) < 15f)
				{
					if (__LIB_17__::func_503(&(Local_701[0 /*165*/]), "heataud", "heat_tofar0", 6, 0, 0, 0))
					{
						func_832("heat_tofar0", 1);
					}
				}
			}
		}
	}
}

void func_970()//Position - 0xA07F2
{
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_331.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("misssagrab");
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", false, -1);
}

int func_971(var uParam0, var uParam1, var uParam2)//Position - 0xA08EA
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar2 = 0;
	iVar2 = iVar2;
	switch (iLocal_734)
	{
		case 0:
			break;
		case 1:
			__LIB_17__::func_186(&Local_224);
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(885.8f, -2086.9f, 100f, 941.9f, -2463f, -100f, 1);
			func_1015();
			func_1014();
			func_1013();
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_DRIVE_TO_CYPRUS_FLATS"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_DRIVE_TO_CYPRUS_FLATS");
			}
			CAM::DESTROY_ALL_CAMS(false);
			func_1012(uParam0, Local_224.f_0, iLocal_424[2]);
			__LIB_16__::func_27(uParam0);
			MISC::CLEAR_AREA_OF_VEHICLES(913.3915f, -2231.6924f, 29.385f, 100f, false, false, false, false, false, false, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_224.f_0, -1);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (!func_835("in_pos_1_1"))
			{
				if (__LIB_17__::func_504(&(Local_701[0 /*165*/]), "heataud", "in_pos_1", "in_pos_1_1", 7, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 30f, 4);
					func_832("in_pos_1_1", 1);
				}
			}
			iLocal_4480 = 0;
			iLocal_4481 = 0;
			iLocal_4482 = 0;
			iLocal_4483 = 0;
			iLocal_4484 = 0;
			iLocal_4485 = 0;
			iLocal_4486 = 0;
			iLocal_4487 = 0;
			iLocal_4488 = 0;
			iLocal_4489 = 0;
			iLocal_4490 = 0;
			iLocal_4491 = 0;
			iLocal_4492 = 0;
			iLocal_4493 = 0;
			func_994(iLocal_424[2]);
			STREAMING::BEGIN_SRL();
			fLocal_4496 = -9999f;
			SYSTEM::SETTIMERA(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FBI4_SWITCH_1");
			iLocal_734 = 2;
		case 2:
			func_993();
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = func_979(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				iLocal_4480 = iLocal_4480;
				iLocal_4481 = iLocal_4481;
				fLocal_4463 = fLocal_4463;
				fLocal_4462 = fLocal_4462;
				if (!iLocal_525)
				{
					if (fVar1 >= fLocal_4461)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_655 = MISC::GET_GAME_TIMER();
						iLocal_525 = 1;
					}
				}
				else if (!iLocal_529)
				{
					if (__LIB_0__::func_611(&iLocal_655, 200))
					{
						iLocal_4460 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_4460, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_529 = 1;
					}
				}
				if (!iLocal_4490)
				{
					if (fVar1 >= fLocal_4476)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, false);
						iLocal_4490 = 1;
					}
				}
				if (!iLocal_4491)
				{
					if (fVar1 >= fLocal_4477)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
						iLocal_4491 = 1;
					}
				}
				if (!iLocal_526)
				{
					if (fVar1 >= 0.5f)
					{
						iLocal_526 = 1;
					}
				}
				if (!iLocal_4484)
				{
					if (SYSTEM::TIMERA() > iLocal_4468)
					{
						__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "heat_looks", 7, 0, 0, 0);
						iLocal_4484 = 1;
					}
				}
				if (!iLocal_4487)
				{
					if (iVar0 >= 3)
					{
						MISC::CLEAR_AREA(790.83f, -2330.06f, 62.67f, 10000f, true, false, false, false);
						ENTITY::SET_ENTITY_HEADING(Local_224.f_0, 175.1171f);
						ENTITY::SET_ENTITY_COORDS(Local_224.f_0, 913.3915f, -2231.6924f, 29.385f, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
						func_978();
						iLocal_4487 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
						{
							CAM::DESTROY_CAM(uParam0->f_1, false);
						}
					}
					CAM::DESTROY_ALL_CAMS(false);
					iLocal_734 = 3;
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
		case 3:
			CAM::DESTROY_ALL_CAMS(false);
			func_977(uParam1, iLocal_424[2], Local_233.f_0);
			__LIB_16__::func_27(uParam1);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam1->f_1, iLocal_4467 + 1, 4);
			CAM::SET_CAM_ACTIVE(uParam1->f_1, true);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("telescope");
			func_978();
			func_976();
			SYSTEM::SETTIMERA(0);
			iLocal_734 = 4;
		case 4:
			func_993();
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				iVar0 = func_979(uParam1);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam1->f_1);
				if (!iLocal_4488 && !CAM::IS_CAM_SPLINE_PAUSED(uParam1->f_1))
				{
					if (iVar0 >= iLocal_4465 && iVar0 <= iLocal_4466)
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_703, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
					}
				}
				if (!iLocal_4488)
				{
					if (CAM::IS_CAM_SPLINE_PAUSED(uParam1->f_1))
					{
						CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam1->f_1, iLocal_4467 + 1, 0);
						func_975();
						func_974(iLocal_424[2], fLocal_4473);
						if (ENTITY::DOES_ENTITY_EXIST(Local_233.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_233.f_0, false))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 1, "lkcountry", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, fLocal_4472);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_233.f_0, true);
								AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
							}
						}
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						iLocal_4488 = 1;
					}
				}
				if (!iLocal_4485)
				{
					if (SYSTEM::TIMERA() > iLocal_4469)
					{
						__LIB_17__::func_503(&(Local_701[0 /*165*/]), "HeatAud", "van_cut_0", 7, 0, 0, 0);
						iLocal_4485 = 1;
					}
				}
				if (!iLocal_4486)
				{
					if (SYSTEM::TIMERA() > iLocal_4470)
					{
						__LIB_0__::func_429();
						__LIB_14__::func_654(&(Local_701[0 /*165*/]), "heataud", "van_cut_0b", 7, 0, 0);
						iLocal_4486 = 1;
					}
				}
				if (!iLocal_4489)
				{
					if (fVar1 >= fLocal_4474)
					{
						CAM::SHAKE_CAM(uParam1->f_1, "SKY_DIVING_SHAKE", fLocal_4475);
						iLocal_4489 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam1->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
						{
							CAM::DESTROY_CAM(uParam1->f_1, false);
						}
					}
					CAM::DESTROY_ALL_CAMS(false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_TRUCK"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
					}
					func_973();
					iLocal_734 = 5;
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
		case 5:
			func_972(uParam2, iLocal_424[2], Local_224.f_0);
			__LIB_16__::func_27(uParam2);
			CAM::SET_CAM_ACTIVE(uParam2->f_1, true);
			SYSTEM::SETTIMERA(0);
			func_970();
			iLocal_734 = 6;
		case 6:
			func_993();
			if (CAM::IS_CAM_ACTIVE(uParam2->f_1))
			{
				iVar0 = func_979(uParam2);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam2->f_1);
				if (!iLocal_527)
				{
					if (fVar1 > 0.55f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_655 = MISC::GET_GAME_TIMER();
						iLocal_527 = 1;
					}
				}
				else if (!iLocal_4482)
				{
					fLocal_4463 = fLocal_4463;
					if (__LIB_0__::func_611(&iLocal_655, 200))
					{
						iLocal_4460 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_4460, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_4482 = 1;
					}
				}
				if (!iLocal_4483)
				{
					if (fVar1 > fLocal_4464)
					{
						Var3 = { 914.7f, -2216.7f, 34.8f };
						Var4 = { -5.3f, 0f, 174.9f };
						STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(Var3, Var4);
						iLocal_4483 = 1;
					}
				}
				if (!iLocal_4492)
				{
					if (fVar1 >= fLocal_4478)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, false);
						iLocal_4492 = 1;
					}
				}
				if (!iLocal_4493)
				{
					if (fVar1 >= fLocal_4479)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
						iLocal_4493 = 1;
					}
				}
				if (!iLocal_528)
				{
					if (fVar1 >= 0.75f)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_4460))
						{
							AUDIO::STOP_SOUND(iLocal_4460);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_528 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_BINOCULARS"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
					}
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam2->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam2->f_1))
						{
							CAM::DESTROY_CAM(uParam2->f_1, false);
						}
					}
					CAM::DESTROY_ALL_CAMS(false);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_WIDESCREEN_BORDERS(false, 500);
					AUDIO::STOP_SOUND(iLocal_4460);
					SYSTEM::SETTIMERA(0);
					__LIB_17__::func_423(&Local_224);
					func_663(0, 1, 0, 0f, 0f, 3000, 0, 1);
					iLocal_734 = 7;
				}
			}
			break;
		case 7:
			func_993();
			if (SYSTEM::TIMERA() > 100)
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::END_SRL();
				iLocal_734 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_972(var uParam0, var uParam1, int iParam2)//Position - 0xA109F
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 0.2801f, 1.2967f, 0.5344f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { -0.1119f, 0.0055f, 0.4533f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
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
		uParam0->f_10[1 /*57*/].f_5 = 3000;
		uParam0->f_10[1 /*57*/].f_6 = { -1.0713f, -0.7852f, 0.5344f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { -3.4369f, 0f, -53.5033f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 45f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
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
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -1.1351f, -0.8325f, -0.7892f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -3.4369f, 0f, -53.5033f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 2;
		uParam0->f_10[2 /*57*/].f_29 = 0.2f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 100f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 200;
		uParam0->f_10[2 /*57*/].f_38 = 0.4f;
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
		uParam0->f_10[4 /*57*/].f_6 = { 3.3398f, -7.5898f, 7.7279f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_9 = { -2.3801f, -0.0023f, 36.1109f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 1f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 1f;
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
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { 3.5008f, -7.8098f, 1.1697f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_9 = { -2.3801f, -0.0023f, 36.1112f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0f;
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
		uParam0->f_10[6 /*57*/].f_5 = 1000;
		uParam0->f_10[6 /*57*/].f_6 = { 3.4317f, -7.7129f, 1.1648f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_9 = { -2.3801f, -0.0023f, 36.1112f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 50f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0f;
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
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB4_TrevorToTruck.txt";
		uParam0->f_1225 = "CameraInfo_FIB4_TrevorToTruck.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = uParam1;
	uParam0->f_4[1] = iParam2;
}

void func_973()//Position - 0xA1B85
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_260.f_0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_260[iVar0 /*15*/].f_1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_260[iVar0 /*15*/]));
		iVar0++;
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, 1);
	PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, true);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_703);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_233.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_233.f_0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0);
		}
	}
	PED::DELETE_PED(&Local_272);
	PED::DELETE_PED(&Local_278);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_272.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

void func_974(int iParam0, float fParam1)//Position - 0xA1C60
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_PLAY_ANIM(iParam0, "missfbi4", "_binoculars_trevor", 1000f, -8f, -1, 1, fParam1, false, false, false);
			TASK::TASK_LOOK_AT_COORD(iParam0, 788.3f, -2333.5f, 61.6f, -1, 10240, 2);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		}
	}
}

void func_975()//Position - 0xA1CC5
{
	Local_260[4 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[4 /*15*/].f_1, Local_260[4 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[4 /*15*/], Local_260[0 /*15*/].f_13, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[4 /*15*/], 3000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[4 /*15*/], true);
	Local_260[5 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[5 /*15*/].f_1, Local_260[5 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[5 /*15*/], Local_260[5 /*15*/].f_13, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[5 /*15*/], 5250f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[5 /*15*/], true);
	Local_260[6 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[6 /*15*/].f_1, Local_260[6 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[6 /*15*/], Local_260[6 /*15*/].f_13, "lkheat", true);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[6 /*15*/], true);
}

void func_976()//Position - 0xA1DB4
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_233.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_233);
	}
	Local_233.f_0 = VEHICLE::CREATE_VEHICLE(Local_233.f_1, Local_233.f_3, Local_233.f_6, true, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Local_233.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_233.f_0, false))
		{
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_233.f_0, true);
			ENTITY::SET_ENTITY_PROOFS(Local_233.f_0, true, true, true, true, true, false, false, false);
			Local_272.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_272.f_1, 0, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_272.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_272.f_0, false))
				{
					PED::SET_PED_DIES_WHEN_INJURED(Local_272.f_0, true);
					PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_272.f_0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_272.f_0, true);
				}
			}
			Local_278.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_233.f_0, 26, Local_278.f_1, -1, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_278.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_278.f_0, false))
				{
					PED::SET_PED_DIES_WHEN_INJURED(Local_278.f_0, true);
					PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_278.f_0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_278.f_0, true);
				}
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, 1, "lkcountry", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_233.f_0, fLocal_4471);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_233.f_0, true);
		}
	}
}

void func_977(var uParam0, var uParam1, var uParam2)//Position - 0xA1EB7
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 768.7385f, -2357.3118f, 57.6729f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -17.0247f, 0.0011f, 153.7904f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 15f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 3;
		uParam0->f_10[0 /*57*/].f_23 = 0.25f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 1f;
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
		uParam0->f_10[1 /*57*/].f_2 = 3;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 2000;
		uParam0->f_10[1 /*57*/].f_6 = { 768.7133f, -2356.7507f, 57.8537f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -18.4764f, -0.4104f, 161.6453f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 15f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 3;
		uParam0->f_10[1 /*57*/].f_23 = 0.25f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 1f;
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
		uParam0->f_10[2 /*57*/].f_2 = 3;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 2000;
		uParam0->f_10[2 /*57*/].f_6 = { 768.7133f, -2356.7507f, 57.8537f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -12.7536f, -0.4104f, 170.3669f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 15f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 3;
		uParam0->f_10[2 /*57*/].f_23 = 0.25f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 1f;
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
		uParam0->f_10[3 /*57*/].f_2 = 3;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 3000;
		uParam0->f_10[3 /*57*/].f_6 = { 765.1157f, -2378.9001f, 50.2175f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { -14.0014f, 0f, 169.4132f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 10f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 3;
		uParam0->f_10[3 /*57*/].f_23 = 0.25f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 1f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 1f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_54 = 1;
		uParam0->f_10[5 /*57*/].f_2 = 3;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 0;
		uParam0->f_10[5 /*57*/].f_6 = { 759.9988f, -2387.2766f, 21.0888f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 1.0832f, 0f, 161.7656f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 25.37f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 1f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 1f;
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
		uParam0->f_10[6 /*57*/].f_2 = 3;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 2500;
		uParam0->f_10[6 /*57*/].f_6 = { 758.6471f, -2387.2766f, 21.0888f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 1.0832f, 0f, 161.036f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 25.37f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.5f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 1f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 1f;
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
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB4_BinocularsScene.txt";
		uParam0->f_1225 = "CameraInfo_FIB4_BinocularsScene.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = uParam1;
	uParam0->f_4[1] = uParam2;
}

void func_978()//Position - 0xA2A64
{
	Local_260[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[0 /*15*/].f_1, Local_260[0 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[0 /*15*/], Local_260[0 /*15*/].f_13, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[0 /*15*/], 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[0 /*15*/], true);
	Local_260[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[1 /*15*/].f_1, Local_260[1 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[1 /*15*/], Local_260[1 /*15*/].f_13, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[1 /*15*/], 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[1 /*15*/], true);
	Local_260[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[2 /*15*/].f_1, Local_260[2 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[2 /*15*/], Local_260[2 /*15*/].f_13, "lkheat", true);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[2 /*15*/], true);
	Local_260[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[3 /*15*/].f_1, Local_260[3 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[3 /*15*/], Local_260[3 /*15*/].f_13, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[3 /*15*/], 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[3 /*15*/], true);
	Local_260[7 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_260[7 /*15*/].f_1, Local_260[7 /*15*/].f_3, 0f, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_260[7 /*15*/], Local_260[7 /*15*/].f_13, "lkheat", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_260[7 /*15*/], 4200f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_260[7 /*15*/], true);
}

int func_979(var uParam0)//Position - 0xA2BF7
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_218 = __LIB_0__::func_504(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			case 1:
				fLocal_218 = __LIB_15__::func_922(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 2:
				fLocal_218 = __LIB_15__::func_921(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 3:
				fLocal_218 = __LIB_15__::func_938(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_218);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		__LIB_15__::func_920(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						case 2:
							sVar2 = "switch_cam_1";
							break;
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							__LIB_15__::func_956(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						case 3:
							__LIB_15__::func_956(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), false);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(__LIB_15__::func_919(), ""))
				{
					__LIB_15__::func_956(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				__LIB_15__::func_918(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			__LIB_15__::func_918(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::RESET_ADAPTATION(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, true);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		__LIB_15__::func_917(0, 0, 1, 1);
	}
	else
	{
		__LIB_15__::func_917(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	__LIB_15__::func_916(uParam0);
	return iVar0;
}

void func_993()//Position - 0xA35FD
{
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	fLocal_4496 = (fLocal_4496 + (MISC::GET_FRAME_TIME() * 1000f));
	if (fLocal_4496 < 0f)
	{
		fLocal_4496 = 0f;
	}
	STREAMING::SET_SRL_TIME(fLocal_4496);
}

void func_994(int iParam0)//Position - 0xA362E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
			ENTITY::SET_ENTITY_COORDS(iParam0, Local_4458, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_4459);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			Local_335.f_0 = OBJECT::CREATE_OBJECT(Local_335.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 40f), true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_335.f_0, false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_335.f_0, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			func_974(iParam0, 0);
		}
	}
}

void func_1012(var uParam0, int iParam1, var uParam2)//Position - 0xA486E
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -5.375f, -4.6971f, 1.3159f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { -2.9126f, 1.2595f, 0.9778f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
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
		uParam0->f_10[1 /*57*/].f_5 = 3500;
		uParam0->f_10[1 /*57*/].f_6 = { -4.9301f, -3.6343f, 1.3798f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { -2.9214f, 1.2467f, 1.1996f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 45f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
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
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -4.984f, -3.4091f, 6.9017f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -3.2586f, 0.8236f, 7.1985f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 100;
		uParam0->f_10[2 /*57*/].f_42 = 100;
		uParam0->f_10[2 /*57*/].f_43 = 800;
		uParam0->f_10[2 /*57*/].f_38 = 0.4f;
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
		uParam0->f_10[4 /*57*/].f_6 = { -0.1211f, 1.082f, -0.0704f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_9 = { -14.6695f, -0.002f, 170.824f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 45f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 1f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
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
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -0.1532f, 0.8833f, 0.698f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_9 = { -14.6696f, -0.002f, 170.824f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 45f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0f;
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
		uParam0->f_10[6 /*57*/].f_5 = 4000;
		uParam0->f_10[6 /*57*/].f_6 = { -0.2473f, 0.8093f, 0.6748f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_9 = { -14.6696f, -0.002f, 170.824f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 45f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0f;
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
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB4_TruckToTrevor.txt";
		uParam0->f_1225 = "CameraInfo_FIB4_TruckToTrevor.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_1013()//Position - 0xA5317
{
	STREAMING::REQUEST_MODEL(Local_233.f_1);
	STREAMING::REQUEST_MODEL(Local_272.f_1);
	STREAMING::REQUEST_MODEL(Local_260[0 /*15*/].f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	iLocal_703 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("binoculars");
}

void func_1014()//Position - 0xA53B3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]))
	{
		PED::DELETE_PED(&(iLocal_424[1]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_509(1));
	if (ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_239);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_239.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_252.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_252);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_261.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_261);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
}

void func_1015()//Position - 0xA5433
{
	func_960(1, 1);
	PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, false, 0);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, false, true);
	PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, false, true);
}

int func_1016()//Position - 0xA551C
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_335.f_2))
	{
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4"))
	{
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missheat"))
	{
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_703))
	{
	}
	if (!AUDIO::PREPARE_MUSIC_EVENT("FBI4_SWITCH_1"))
	{
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
	}
	if (!STREAMING::IS_SRL_LOADED())
	{
	}
	if (((((((STREAMING::HAS_MODEL_LOADED(Local_335.f_2) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) && STREAMING::HAS_ANIM_DICT_LOADED("missheat")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_4494)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_703)) && AUDIO::PREPARE_MUSIC_EVENT("FBI4_SWITCH_1")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::IS_SRL_LOADED())
	{
		return 1;
	}
	return 0;
}

int func_1017()//Position - 0xA55D8
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_424[1], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_424[1], 0f, 3f, 0f) - ENTITY::GET_ENTITY_COORDS(iLocal_424[1], true) };
	if (__LIB_0__::func_158(Var0, Var1) < 0f)
	{
		return 1;
	}
	return 0;
}

void func_1018()//Position - 0xA562C
{
	STREAMING::REQUEST_MODEL(Local_335.f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	STREAMING::REQUEST_ANIM_DICT(sLocal_4494);
	iLocal_703 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("binoculars");
	AUDIO::PREPARE_MUSIC_EVENT("FBI4_SWITCH_1");
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_1019()//Position - 0xA5670
{
	int iVar0;
	switch (iLocal_608)
	{
		case 0:
			__LIB_0__::func_544(1, 0, 0, 1, 0);
			STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
			STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
			STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
			STREAMING::REQUEST_MODEL(Local_224.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
			STREAMING::REQUEST_MODEL(Local_239.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
			STREAMING::REQUEST_MODEL(Local_252.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_252.f_1, true);
			STREAMING::REQUEST_ANIM_DICT("missfbi4");
			STREAMING::REQUEST_ANIM_DICT("missheat");
			STREAMING::REQUEST_MODEL(Local_335.f_2);
			iLocal_703 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("binoculars");
			STREAMING::REQUEST_PTFX_ASSET();
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(25, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkheat");
			STREAMING::REQUEST_ANIM_DICT("missfbi4leadinoutfbi_4_mcs_3");
			while (((((((((((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_224.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_252.f_1)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(25, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkheat")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4leadinoutfbi_4_mcs_3"))
			{
				SYSTEM::WAIT(0);
			}
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			MISC::CLEAR_AREA(1376.082f, -2082.0479f, 50.9983f, 40f, true, false, false, false);
			PATHFIND::SET_ROADS_IN_AREA(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, false, true);
			func_499(&(iLocal_424[0]), 0, 1376.082f, -2082.0479f, 50.9983f, 46.596f, 0, 0, 0);
			func_293(PLAYER::PLAYER_PED_ID(), 12, 36, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			Local_659 = { 1377.63f, -2082.943f, 50.997f };
			Local_660 = { 0f, 0f, 130.5f };
			iLocal_538 = PED::CREATE_SYNCHRONIZED_SCENE(Local_659, Local_660, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_424[0], iLocal_538, "missfbi4leadinoutfbi_4_mcs_3", "_leadin_michael", 1000f, -1000f, 0, 0, 1000f, 0);
			Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 1381.4722f, -2072.2454f, 50.9981f, 38.334f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_224.f_0, 5f);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_224.f_0, true);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_224.f_0, false, 0);
			__LIB_0__::func_679(Local_224.f_0, 0);
			Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 1377.14f, -2076.2f, 52f, 40.03813f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_239.f_0, 5f);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_239.f_0, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_239.f_0, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 3);
			VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_239.f_0);
			__LIB_0__::func_679(Local_239.f_0, 1);
			__LIB_16__::func_41(&Local_252, 2, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(101, 1450f, "lkheat"), 40.3225f, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_252.f_0, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_252.f_0, 3);
			iLocal_608++;
			break;
		case 1:
			CUTSCENE::REQUEST_CUTSCENE("fbi_4_mcs_3_concat", 8);
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!Global_10)
				{
					iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
					if ((iVar0 >= 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < 1) && CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						__LIB_17__::func_501();
						Global_10 = 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.0385f, -2063.9792f, 50.623257f, 1360.4175f, -2085.5063f, 57.873257f, 14.625f, false, true, 0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_424[0], "michael", 0, __LIB_16__::func_509(0), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_224.f_0, "fbi_bin_lorry", 0, joaat("trash"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "fbi_truck", 0, joaat("towtruck"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_16__::func_509(2), 0);
					CUTSCENE::START_CUTSCENE(0);
					iLocal_569 = 1;
					iLocal_219 = 0;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_1024()//Position - 0xA5EA1
{
	int iVar0;
	switch (iLocal_569)
	{
		case 0:
			__LIB_0__::func_544(1, 0, 0, 1, 0);
			switch (__LIB_17__::func_338())
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("fbi_4_mcs_3_concat", 8);
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
						{
							Local_224.f_0 = Global_96938[0];
							Local_239.f_0 = Global_96938[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_224.f_0, true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_239.f_0, true, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklin", 2, __LIB_16__::func_509(1), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_16__::func_509(2), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevors_car", 2, Local_252.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_224.f_0, "fbi_bin_lorry", 0, joaat("trash"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "fbi_truck", 0, joaat("towtruck"), 0);
							__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::REPLAY_START_EVENT(4);
							iLocal_569++;
						}
					}
					break;
				case 1:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_4_mcs_3_concat", 14, 8);
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938[0])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
						{
							bLocal_520 = true;
							iLocal_424[0] = Global_96938.f_9[0];
							Local_224.f_0 = Global_96938[0];
							Local_239.f_0 = Global_96938[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_424[0], true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_224.f_0, true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_239.f_0, true, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_424[0], "michael", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_16__::func_509(2), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevors_car", 2, Local_252.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_224.f_0, "fbi_bin_lorry", 0, joaat("trash"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "fbi_truck", 0, joaat("towtruck"), 0);
							__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(256);
							RECORDING::REPLAY_START_EVENT(3);
							iLocal_569++;
						}
					}
					break;
				case 2:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_4_mcs_3_concat", 12, 8);
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if ((((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[0])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[1])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
						{
							bLocal_520 = true;
							iLocal_424[0] = Global_96938.f_9[0];
							iLocal_424[1] = Global_96938.f_9[1];
							Local_224.f_0 = Global_96938[0];
							Local_239.f_0 = Global_96938[1];
							Local_252.f_0 = Global_96938[2];
							if (!ENTITY::IS_ENTITY_DEAD(Local_252.f_0, false))
							{
								VEHICLE::SET_VEHICLE_FIXED(Local_252.f_0);
								ENTITY::SET_ENTITY_HEALTH(Local_252.f_0, 1000, 0);
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_252.f_0, 1000f);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_252.f_0, 1000f);
							}
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_424[0], true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_424[1], true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_224.f_0, true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_239.f_0, true, true);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_252.f_0, true, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_424[0], "michael", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_424[1], "franklin", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_252.f_0, "trevors_car", 0, Local_252.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_224.f_0, "fbi_bin_lorry", 0, joaat("trash"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "fbi_truck", 0, joaat("towtruck"), 0);
							__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(256);
							RECORDING::REPLAY_START_EVENT(4);
							iLocal_569++;
						}
					}
					break;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
				__LIB_0__::func_468(38);
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (iVar0 != Local_252.f_0)
				{
					__LIB_17__::func_195(1401.5897f, -2053.6978f, 50.9983f, 4f, 0);
					__LIB_17__::func_618(1351.419f, -2065.903f, 46.098f, 1395.749f, -2028.968f, 58.998f, 80f, 1401.5897f, -2053.6978f, 50.9983f, 80.931f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
					func_665(1401.5897f, -2053.6978f, 50.9983f, 80.931f);
				}
				PATHFIND::SET_ROADS_IN_AREA(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, false, true);
				MISC::CLEAR_AREA(1379.3738f, -2074.824f, 50.9985f, 1000f, true, false, false, false);
				__LIB_13__::func_815(&Local_404, 1, 0);
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_239.f_0, true, true, true);
				func_1033();
				func_1032();
				iLocal_569++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_1033();
					func_1032();
					switch (__LIB_17__::func_338())
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1))))
							{
								iLocal_424[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)));
							}
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2))))
							{
								iLocal_424[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2)));
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_252.f_0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1)))
								{
									Local_252.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1));
									if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 6)
									{
										VEHICLE::SET_VEHICLE_LIGHTS(Local_252.f_0, 3);
									}
								}
							}
							if (!iLocal_513)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
								{
									func_1028(PLAYER::PLAYER_PED_ID());
									func_1028(iLocal_424[1]);
									func_1028(iLocal_424[2]);
									iLocal_513 = 1;
								}
							}
							if (!iLocal_502)
							{
								if (CUTSCENE::GET_CUTSCENE_TIME() >= 84000)
								{
									func_399(PLAYER::PLAYER_PED_ID());
									func_399(iLocal_424[1]);
									func_399(iLocal_424[2]);
									iLocal_502 = 1;
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_424[1], Local_239.f_0, -1);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
							{
							}
							break;
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2))))
							{
								iLocal_424[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2)));
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_252.f_0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1)))
								{
									Local_252.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1));
									if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 6)
									{
										VEHICLE::SET_VEHICLE_LIGHTS(Local_252.f_0, 3);
									}
								}
							}
							if (!iLocal_513)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
								{
									func_1028(PLAYER::PLAYER_PED_ID());
									func_1028(iLocal_424[0]);
									func_1028(iLocal_424[2]);
									iLocal_513 = 1;
								}
							}
							if (!iLocal_502)
							{
								if (CUTSCENE::GET_CUTSCENE_TIME() >= 84000)
								{
									func_399(PLAYER::PLAYER_PED_ID());
									func_399(iLocal_424[0]);
									func_399(iLocal_424[2]);
									iLocal_502 = 1;
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0, -1);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
								{
									func_794(&iLocal_424, 0);
									__LIB_42__::func_560(&iLocal_424, 1, 1, 0);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									func_794(&iLocal_424, 0);
									__LIB_42__::func_560(&iLocal_424, 1, 1, 0);
								}
							}
							break;
						case 2:
							if (!iLocal_513)
							{
								func_1028(PLAYER::PLAYER_PED_ID());
								func_1028(iLocal_424[0]);
								func_1028(iLocal_424[1]);
								iLocal_513 = 1;
							}
							if (!iLocal_502)
							{
								if (CUTSCENE::GET_CUTSCENE_TIME() >= 84000)
								{
									func_399(PLAYER::PLAYER_PED_ID());
									func_399(iLocal_424[0]);
									func_399(iLocal_424[1]);
									iLocal_502 = 1;
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_424[1], Local_239.f_0, -1);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
								{
									func_794(&iLocal_424, 0);
									__LIB_42__::func_560(&iLocal_424, 1, 1, 0);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									func_794(&iLocal_424, 0);
									__LIB_42__::func_560(&iLocal_424, 1, 1, 0);
								}
							}
							break;
					}
				}
				else
				{
					RECORDING::REPLAY_CANCEL_EVENT();
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_569++;
				}
			}
			else
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_1027();
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				switch (__LIB_17__::func_338())
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1))))
						{
							iLocal_424[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)));
						}
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2))))
						{
							iLocal_424[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2)));
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_252.f_0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1)))
							{
								Local_252.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1));
							}
						}
						if (!iLocal_513)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
							{
								func_1028(PLAYER::PLAYER_PED_ID());
								func_1028(iLocal_424[1]);
								func_1028(iLocal_424[2]);
								iLocal_513 = 1;
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
						{
							RECORDING::REPLAY_STOP_EVENT();
						}
						break;
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2))))
						{
							iLocal_424[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_16__::func_509(2)));
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_252.f_0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1)))
							{
								Local_252.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_252.f_1));
							}
						}
						if (!iLocal_513)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
							{
								func_1028(PLAYER::PLAYER_PED_ID());
								func_1028(iLocal_424[0]);
								func_1028(iLocal_424[2]);
								iLocal_513 = 1;
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0, -1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
						{
							func_794(&iLocal_424, 0);
							__LIB_42__::func_560(&iLocal_424, 1, 1, 0);
							RECORDING::REPLAY_STOP_EVENT();
						}
						break;
					case 2:
						if (!iLocal_513)
						{
							func_1028(PLAYER::PLAYER_PED_ID());
							func_1028(iLocal_424[0]);
							func_1028(iLocal_424[1]);
							iLocal_513 = 1;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", __LIB_16__::func_509(1)))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_424[1], Local_239.f_0, -1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_16__::func_509(0)))
						{
							func_794(&iLocal_424, 0);
							__LIB_42__::func_560(&iLocal_424, 1, 1, 0);
							RECORDING::REPLAY_STOP_EVENT();
						}
						break;
				}
			}
			else
			{
				func_1033();
				func_1032();
				if ((((func_1026() && func_1025()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_424[1])) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_424[2]))
				{
					RECORDING::REPLAY_STOP_EVENT();
					switch (__LIB_17__::func_338())
					{
						case 0:
							if (!iLocal_502)
							{
								func_399(PLAYER::PLAYER_PED_ID());
								func_399(iLocal_424[1]);
								func_399(iLocal_424[2]);
								iLocal_502 = 1;
							}
							break;
					}
					while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::WAIT(0);
					}
					func_1052();
					func_1027();
				}
			}
			break;
	}
}

int func_1025()//Position - 0xA6A6E
{
	if ((((((((((((((((((((((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkcountry") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(25, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkheat"))
	{
		return 1;
	}
	return 0;
}

int func_1026()//Position - 0xA6C63
{
	if (((((((STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) && STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) && STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) && STREAMING::HAS_MODEL_LOADED(Local_224.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_224.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_252.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat"))
	{
		return 1;
	}
	return 0;
}

void func_1027()//Position - 0xA6CE0
{
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_424[1]);
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_424[2]);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	PED::SET_PED_INTO_VEHICLE(iLocal_424[2], Local_252.f_0, -1);
	__LIB_17__::func_606(iLocal_424[2], 0);
	func_394(&(iLocal_424[2]), 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 2, iLocal_424[2], "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(iLocal_424[1], Local_239.f_0, -1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_424[1], true, 1);
	__LIB_17__::func_606(iLocal_424[1], 0);
	func_394(&(iLocal_424[1]), 1);
	__LIB_0__::func_222(&(Local_701[0 /*165*/]), 1, iLocal_424[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_224.f_0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_224.f_0, false);
	ENTITY::SET_ENTITY_COLLISION(Local_224.f_0, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_224.f_0, 1);
	__LIB_0__::func_679(Local_224.f_0, 0);
	ENTITY::SET_ENTITY_VISIBLE(Local_252.f_0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_252.f_0, false);
	ENTITY::SET_ENTITY_COLLISION(Local_252.f_0, true, false);
	func_627("lkheat", 101, 1, 1);
	func_626();
	fLocal_93 = 200f;
	iLocal_50 = 1;
	iLocal_56 = 1;
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_252.f_0, 101, "lkheat", true);
	func_588(Local_252.f_0, 1f);
	func_584(Local_252.f_0, 2000f);
	func_588(Local_252.f_0, 1f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_252.f_0, true, true, false);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_252.f_0, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_239.f_0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_239.f_0, false);
	ENTITY::SET_ENTITY_COLLISION(Local_239.f_0, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 3);
	VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_239.f_0, true);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 102, "lkheat", false);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_239.f_0, 800f);
	VEHICLE::SET_PLAYBACK_SPEED(Local_239.f_0, 1f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_252.f_0, true, true, false);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_239.f_0, false);
	__LIB_0__::func_679(Local_239.f_0, 1);
	if (bLocal_520)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_663(0, 0, 0, 0f, 0f, 3000, 0, 1);
	}
	else
	{
		func_532(0, 0, 0f, 0f, 0, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	iLocal_532 = MISC::GET_GAME_TIMER();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_SWITCH_BINOC_ST");
	iLocal_219 = 1;
}

void func_1028(int iParam0)//Position - 0xA6F23
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_104(iParam0);
		if (iVar0 == 0)
		{
			if (Global_113386.f_2363.f_539.f_2403[iVar0] == -99)
			{
				__LIB_17__::func_38(iParam0, 21);
			}
			else
			{
				__LIB_17__::func_38(iParam0, Global_113386.f_2363.f_539.f_2403[iVar0]);
			}
			if (Global_113386.f_2363.f_539.f_2395[iVar0] == -99)
			{
				__LIB_17__::func_619(iParam0, 14, 38);
			}
			else
			{
				__LIB_17__::func_619(iParam0, Global_113386.f_2363.f_539.f_2399[iVar0], Global_113386.f_2363.f_539.f_2395[iVar0]);
			}
		}
		else if (iVar0 == 1)
		{
			if (Global_113386.f_2363.f_539.f_2403[iVar0] == -99)
			{
				__LIB_17__::func_38(iParam0, 13);
			}
			else
			{
				__LIB_17__::func_38(iParam0, Global_113386.f_2363.f_539.f_2403[iVar0]);
			}
			if (Global_113386.f_2363.f_539.f_2395[iVar0] == -99)
			{
				__LIB_17__::func_619(iParam0, 14, 30);
			}
			else
			{
				__LIB_17__::func_619(iParam0, Global_113386.f_2363.f_539.f_2399[iVar0], Global_113386.f_2363.f_539.f_2395[iVar0]);
			}
		}
		else if (iVar0 == 2)
		{
			if (Global_113386.f_2363.f_539.f_2403[iVar0] == -99)
			{
				__LIB_17__::func_38(iParam0, 19);
			}
			else
			{
				__LIB_17__::func_38(iParam0, Global_113386.f_2363.f_539.f_2403[iVar0]);
			}
			if (Global_113386.f_2363.f_539.f_2395[iVar0] == -99)
			{
				__LIB_17__::func_619(iParam0, 14, 53);
			}
			else
			{
				__LIB_17__::func_619(iParam0, Global_113386.f_2363.f_539.f_2399[iVar0], Global_113386.f_2363.f_539.f_2395[iVar0]);
			}
		}
	}
}

void func_1032()//Position - 0xA7271
{
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_224.f_1, 15);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_252.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_252.f_1, true);
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
}

void func_1033()//Position - 0xA72E3
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(25, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkheat");
}

void func_1039()//Position - 0xA769A
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
}

void func_1041()//Position - 0xA76BE
{
	if (bLocal_500)
	{
		iLocal_596 = MISC::GET_GAME_TIMER();
	}
	while (!__LIB_0__::func_611(&iLocal_596, 4000))
	{
		SYSTEM::WAIT(0);
	}
	func_1051();
	iLocal_483 = 1;
	iLocal_532 = MISC::GET_GAME_TIMER();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_MISSION_FAIL");
	func_1042(sLocal_676);
	iLocal_219 = 15;
}

void func_1042(char* sParam0)//Position - 0xA770E
{
	__LIB_0__::func_381(sParam0);
	func_1043(0);
}

void func_1043(int iParam0)//Position - 0xA7721
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_1044(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_1044(int iParam0)//Position - 0xA7766
{
	int iVar0;
	int iVar1;
	__LIB_17__::func_502();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_1045(&(Global_113386.f_2363.f_539), iVar1);
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

void func_1045(var uParam0, int iParam1)//Position - 0xA7876
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
			if (!func_1047(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_1047(int iParam0, var uParam1, float fParam2)//Position - 0xA7A4A
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
			return func_1047(8, uParam1, fParam2);
			break;
		case 10:
			return func_1047(8, uParam1, fParam2);
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

void func_1051()//Position - 0xA852D
{
	int iVar0;
	iVar0 = 0;
	if (HUD::DOES_BLIP_EXIST(iLocal_677))
	{
		HUD::REMOVE_BLIP(&iLocal_677);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_682))
	{
		HUD::REMOVE_BLIP(&iLocal_682);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_678))
	{
		HUD::REMOVE_BLIP(&iLocal_678);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_292.f_0 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_292[iVar0 /*20*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_292[iVar0 /*20*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_293.f_0 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_293[iVar0 /*20*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_293[iVar0 /*20*/].f_2));
		}
		iVar0++;
	}
}

int func_1052()//Position - 0xA85D1
{
	switch (iLocal_219)
	{
		case 0:
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
				sLocal_676 = "cntry_fail7";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[2])))
			{
				sLocal_676 = "cntry_fail8";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_252))
			{
				sLocal_676 = "cntry_fail19";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_224))
			{
				sLocal_676 = "cntry_fail3";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_239))
			{
				sLocal_676 = "cntry_fail19";
				return 1;
			}
			if (__LIB_17__::func_338() == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_424[0], PLAYER::PLAYER_PED_ID(), true))
					{
						sLocal_676 = "cntry_fail18";
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[2]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_424[2], PLAYER::PLAYER_PED_ID(), true))
					{
						sLocal_676 = "cntry_fail18";
						return 1;
					}
				}
			}
			else if (__LIB_17__::func_338() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_424[0]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_424[0], PLAYER::PLAYER_PED_ID(), true))
					{
						sLocal_676 = "cntry_fail18";
						return 1;
					}
				}
			}
			if (__LIB_16__::func_310(&Local_224))
			{
				sLocal_676 = "cntry_fail3";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_239))
			{
				sLocal_676 = "cntry_fail4";
				return 1;
			}
			break;
		case 16:
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
			}
			if (__LIB_16__::func_311(&(iLocal_424[2])))
			{
			}
			if (__LIB_16__::func_310(&Local_252))
			{
			}
			if (__LIB_16__::func_310(&Local_224))
			{
			}
			if (__LIB_16__::func_310(&Local_239))
			{
			}
			break;
		case 1:
			if (__LIB_16__::func_310(&Local_224))
			{
				sLocal_676 = "cntry_fail3";
				return 1;
			}
			if (__LIB_17__::func_190(&Local_224))
			{
				sLocal_676 = "cntry_fail12";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_239))
			{
				sLocal_676 = "cntry_fail4";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_252))
			{
				sLocal_676 = "cntry_fail19";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
				sLocal_676 = "cntry_fail7";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[2])))
			{
				sLocal_676 = "cntry_fail8";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_224.f_0, true), true) > 200f)
			{
				sLocal_676 = "cntry_fail22";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 972.8909f, -2073.692f, 30.5f, true) > 500f)
			{
				sLocal_676 = "cntry_fail10";
				return 1;
			}
			break;
		case 2:
			if (__LIB_16__::func_310(&Local_233))
			{
				sLocal_676 = "cntry_fail2";
				return 1;
			}
			if (__LIB_16__::func_311(&Local_272))
			{
				sLocal_676 = "cntry_fail0";
				return 1;
			}
			if (__LIB_16__::func_311(&Local_278))
			{
				sLocal_676 = "cntry_fail1";
				return 1;
			}
			if (__LIB_16__::func_311(&iLocal_694))
			{
				sLocal_676 = "cntry_fail6";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_224))
			{
				sLocal_676 = "cntry_fail3";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_676 = "cntry_fail6";
				return 1;
			}
			break;
		case 3:
			if (__LIB_16__::func_310(&Local_224))
			{
				sLocal_676 = "cntry_fail3";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
				sLocal_676 = "cntry_fail7";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[iLocal_424.f_5])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_233))
			{
				sLocal_676 = "cntry_fail2";
				return 1;
			}
			if (__LIB_17__::func_190(&Local_224))
			{
				sLocal_676 = "cntry_fail12";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_239))
			{
				sLocal_676 = "cntry_fail4";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_676 = "cntry_fail6";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 972.8909f, -2073.692f, 30.5f, true) > 500f)
			{
				sLocal_676 = "cntry_fail10";
				return 1;
			}
			break;
		case 4:
			if (__LIB_16__::func_310(&Local_224))
			{
				sLocal_676 = "cntry_fail3";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_239))
			{
				sLocal_676 = "cntry_fail4";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_233))
			{
				sLocal_676 = "cntry_fail2";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_17__::func_190(&Local_239))
			{
				sLocal_676 = "cntry_fail20";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true), true) > 150f)
			{
				sLocal_676 = "cntry_fail11";
				return 1;
			}
			if (iLocal_534 == 0)
			{
				if (func_1056())
				{
					if (!PED::IS_PED_INJURED(Local_272.f_0))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_272.f_0, Local_233.f_0))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_233.f_0, 20f, 262144);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
							TASK::TASK_PERFORM_SEQUENCE(Local_272.f_0, iLocal_693);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
						}
					}
					else if (!PED::IS_PED_INJURED(Local_278.f_0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
						TASK::TASK_PERFORM_SEQUENCE(Local_272.f_0, iLocal_693);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					}
					HUD::CLEAR_PRINTS();
					sLocal_676 = "cntry_fail6";
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
					iLocal_532 = MISC::GET_GAME_TIMER();
					iLocal_219 = 13;
					return 1;
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_676 = "cntry_fail6";
				return 1;
			}
			break;
		case 5:
			if (__LIB_16__::func_310(&Local_233))
			{
				sLocal_676 = "cntry_fail2";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
				sLocal_676 = "cntry_fail7";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[2])))
			{
				sLocal_676 = "cntry_fail8";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_676 = "cntry_fail6";
				return 1;
			}
			if (iLocal_563 == 0)
			{
				if (__LIB_0__::func_611(&iLocal_595, 90000000))
				{
					sLocal_676 = "cntry_fail26";
					AUDIO::DISTANT_COP_CAR_SIRENS(true);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_656, "Distant_Sirens", 913.6f, -2301.6f, 34f, 0, false, 0, false);
					bLocal_500 = true;
					return 1;
				}
			}
			if ((__LIB_17__::func_496(joaat("WEAPON_STICKYBOMB")) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("WEAPON_STICKYBOMB"), false)) && !iLocal_498)
			{
				if (__LIB_0__::func_611(&iLocal_637, 2500))
				{
					sLocal_676 = "cntry_god22";
					return 1;
				}
			}
			else
			{
				iLocal_637 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_496)
			{
				return 1;
			}
			break;
		case 6:
		case 7:
			if (!Local_468.f_16)
			{
				if (__LIB_16__::func_311(&(iLocal_424[0])))
				{
					sLocal_676 = "cntry_fail5";
					return 1;
				}
				if (__LIB_16__::func_311(&(iLocal_424[1])))
				{
					sLocal_676 = "cntry_fail7";
					return 1;
				}
				if (__LIB_16__::func_311(&(iLocal_424[2])))
				{
					sLocal_676 = "cntry_fail8";
					return 1;
				}
				if (iLocal_496)
				{
					return 1;
				}
			}
			break;
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(Local_224.f_0))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_224.f_0, false))
				{
					if (!bLocal_515)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 50f, 50f, 50f, false, false, 0))
						{
							sLocal_676 = "cntry_fail25";
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_COORD(Local_224.f_0, Local_706, 110f, 110f, 110f, false, false, 0))
					{
						sLocal_676 = "cntry_fail25";
						return 1;
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_224.f_2))
			{
				if (__LIB_17__::func_190(&Local_224))
				{
					sLocal_676 = "cntry_fail24";
					return 1;
				}
			}
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
				sLocal_676 = "cntry_fail7";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[2])))
			{
				sLocal_676 = "cntry_fail8";
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_224.f_0, true), true) > 200f)
				{
					sLocal_676 = "cntry_fail22";
					return 1;
				}
			}
			break;
		case 11:
			if (__LIB_16__::func_311(&(iLocal_424[0])))
			{
				sLocal_676 = "cntry_fail5";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[1])))
			{
				sLocal_676 = "cntry_fail7";
				return 1;
			}
			if (__LIB_16__::func_311(&(iLocal_424[2])))
			{
				sLocal_676 = "cntry_fail8";
				return 1;
			}
			if (__LIB_16__::func_311(&Local_295))
			{
				sLocal_676 = "cntry_fail13";
				func_1054();
				return 1;
			}
			if (__LIB_16__::func_310(&Local_250))
			{
				sLocal_676 = "cntry_fail14";
				func_1054();
				return 1;
			}
			if (iLocal_516)
			{
				sLocal_676 = "cntry_fail18";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_295.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
			{
				if (func_688(&Local_295, &(Local_295.f_10), Local_295.f_14))
				{
				}
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_295.f_0, true), 15f))
				{
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_250.f_0, ENTITY::GET_ENTITY_COORDS(Local_250.f_0, true), 2f, 2f, 2f, false, true, 0))
				{
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_250.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
				}
				if (func_1053())
				{
				}
				if (((((func_688(&Local_295, &(Local_295.f_10), Local_295.f_14) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_295.f_0, true), 15f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_295.f_0, true), 4f, true)) || !ENTITY::IS_ENTITY_AT_COORD(Local_250.f_0, ENTITY::GET_ENTITY_COORDS(Local_250.f_0, true), 2f, 2f, 2f, false, true, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_250.f_0, PLAYER::PLAYER_PED_ID(), true)) || func_1053())
				{
					func_1054();
					TASK::OPEN_SEQUENCE_TASK(&iLocal_693);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_693);
					TASK::TASK_PERFORM_SEQUENCE(Local_295.f_0, iLocal_693);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_693);
					sLocal_676 = "cntry_fail18";
					return 1;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_295.f_0, true), true) < 30f)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						sLocal_676 = "cntry_fail18";
						return 1;
					}
				}
			}
			break;
		case 12:
			if (__LIB_16__::func_311(&Local_295))
			{
				sLocal_676 = "cntry_fail13";
				return 1;
			}
			if (__LIB_16__::func_310(&Local_250))
			{
				sLocal_676 = "cntry_fail14";
				return 1;
			}
			break;
	}
	return 0;
}

int func_1053()//Position - 0xA9078
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2560.765f, 1899.763f, 166.057f, -2553.95f, 1898.684f, 171.157f, 15.9f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2558.312f, 1900.146f, 166.87f, -2604.425f, 1926.876f, 174.5f, 16.2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2559.274f, 1911.036f, 166.87f, -2604.942f, 1934.406f, 174.5f, 24.1f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_1054()//Position - 0xA911E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_328.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_328[iVar0 /*20*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_328[iVar0 /*20*/], false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_328[iVar0 /*20*/], Local_328[iVar0 /*20*/].f_6, 2f, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_328[iVar0 /*20*/], 51, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_328[iVar0 /*20*/], 50, true);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_328[iVar0 /*20*/], 200f, 0);
		}
		iVar0++;
	}
}

int func_1056()//Position - 0xA91CD
{
	if ((__LIB_0__::func_611(&iLocal_552, 42000) || func_1058()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 907.426f, -2371.301f, 29.55f, 908.093f, -2362.426f, 33.55f, 6f, false, true, 0))
		{
			if ((func_688(&Local_272, &(Local_272.f_10), Local_272.f_14) || func_688(&Local_278, &(Local_278.f_10), Local_278.f_14)) || func_1057(&Local_233, &(Local_233.f_9)))
			{
				return 1;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(Local_239.f_0) > 45f && ENTITY::GET_ENTITY_HEADING(Local_239.f_0) < 135f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_239.f_0, Local_233.f_0))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_239.f_0) < 5f)
				{
					return 1;
				}
			}
		}
		else
		{
			if (func_688(&Local_272, &(Local_272.f_10), Local_272.f_14))
			{
			}
			if (func_688(&Local_278, &(Local_278.f_10), Local_278.f_14))
			{
			}
			if (func_1057(&Local_233, &(Local_233.f_9)))
			{
			}
			if ((func_688(&Local_272, &(Local_272.f_10), Local_272.f_14) || func_688(&Local_278, &(Local_278.f_10), Local_278.f_14)) || func_1057(&Local_233, &(Local_233.f_9)))
			{
				return 1;
			}
		}
	}
	else
	{
		if (func_688(&Local_272, &(Local_272.f_10), Local_272.f_14))
		{
		}
		if (func_688(&Local_278, &(Local_278.f_10), Local_278.f_14))
		{
		}
		if (func_1057(&Local_233, &(Local_233.f_9)))
		{
		}
		if ((func_688(&Local_272, &(Local_272.f_10), Local_272.f_14) || func_688(&Local_278, &(Local_278.f_10), Local_278.f_14)) || func_1057(&Local_233, &(Local_233.f_9)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1057(int iParam0, var uParam1)//Position - 0xA93B6
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if (((VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(*iParam0) < IntToFloat(*uParam1) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam0) < IntToFloat(*uParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true)) || iVar0 < *uParam1)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1058()//Position - 0xA9427
{
	if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_239.f_0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 875.867f, -2347.926f, 27.521f, 925.899f, -2352.039f, 35.521f, 190.8f, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 913.41f, -2369.405f, 27.55f, 914.169f, -2360.739f, 33.55f, 22.9f, false, true, 0))
			{
				if (!iLocal_488)
				{
					iLocal_549 = MISC::GET_GAME_TIMER();
					iLocal_488 = 1;
				}
				else if (__LIB_0__::func_611(&iLocal_549, 5000))
				{
					return 1;
				}
			}
			else if (!iLocal_489)
			{
				iLocal_550 = MISC::GET_GAME_TIMER();
				iLocal_489 = 1;
			}
			else if (__LIB_0__::func_611(&iLocal_550, 5000))
			{
				return 1;
			}
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 913.41f, -2369.405f, 27.55f, 914.169f, -2360.739f, 33.55f, 22.9f, false, true, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 875.867f, -2347.926f, 27.521f, 925.899f, -2352.039f, 35.521f, 190.8f, false, true, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_233.f_0, true), true) < 7f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1062()//Position - 0xA961C
{
	int iVar0;
	__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
	func_1071();
	func_1070();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
	__LIB_15__::func_999();
	PED::ADD_SCENARIO_BLOCKING_AREA(1570.8f, -1923.1f, 100f, 1258.2f, -2153.2f, -100f, false, true, true, true);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(891.696f, -2368.981f, 29.853f, 8.675f, 0.75f, 2.125f, __LIB_12__::func_418(-44.4f), false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(884.755f, -2365.731f, 29.785f, 7.325f, 0.75f, 2.125f, __LIB_12__::func_418(-4.7f), false, 7);
	TASK::ADD_COVER_BLOCKING_AREA(843.7094f, -2302.6978f, 29.3429f, 846.3494f, -2306.4895f, 29.33395f, true, false, true, false);
	iLocal_697 = TASK::ADD_COVER_POINT(881.53f, -2334.04f, 33.91f, 269.9536f, 0, 0, 0, false);
	iLocal_698 = TASK::ADD_COVER_POINT(871.79f, -2344.4417f, 29.33137f, 273.9499f, 0, 0, 0, false);
	iLocal_699 = TASK::ADD_COVER_POINT(873.8578f, -2353.0298f, 29.33141f, 281.0534f, 0, 0, 0, false);
	iLocal_700 = TASK::ADD_COVER_POINT(845.66034f, -2332.3076f, 29.3346f, 348.7454f, 0, 0, 0, false);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	PED::SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(false);
	func_634();
	Global_9 = 1;
	if (!Global_3)
	{
		if (Global_113386.f_2363.f_539.f_2403[0] == -99)
		{
			Global_113386.f_2363.f_539.f_2403[0] = 21;
			Global_113386.f_2363.f_539.f_2403[1] = 13;
			Global_113386.f_2363.f_539.f_2403[2] = 19;
		}
	}
	if (__LIB_0__::func_323())
	{
		iLocal_729 = 1;
		if (!Global_94618)
		{
			switch (__LIB_0__::func_344())
			{
				case 0:
					func_583();
					break;
				case 1:
					func_529();
					break;
				case 2:
					func_527();
					break;
				case 3:
					func_490();
					break;
				case 4:
					func_407();
					break;
			}
		}
		else
		{
			iVar0 = __LIB_0__::func_344() + 1;
			switch (iVar0)
			{
				case 1:
					func_529();
					break;
				case 2:
					func_527();
					break;
				case 3:
					func_490();
					break;
				case 4:
					func_407();
					break;
				case 5:
					func_315();
					break;
				}
		}
		iLocal_729 = 0;
	}
	else
	{
		Global_96893 = 4;
		if (!__LIB_0__::func_2(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			func_408(0, "Start of mission", 0, 0, 0, 1);
		}
		else
		{
			func_1063();
		}
	}
}

void func_1063()//Position - 0xA98D9
{
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(0));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(1));
	STREAMING::REQUEST_MODEL(__LIB_16__::func_509(2));
	STREAMING::REQUEST_MODEL(Local_224.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_224.f_1, true);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_224.f_1, 15);
	STREAMING::REQUEST_MODEL(Local_239.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_239.f_1, true);
	STREAMING::REQUEST_MODEL(Local_252.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_252.f_1, true);
	while ((((((!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(0)) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(2))) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_509(1))) || !STREAMING::HAS_MODEL_LOADED(Local_224.f_1)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_224.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_239.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_252.f_1))
	{
		SYSTEM::WAIT(0);
	}
	__LIB_0__::func_544(1, 0, 0, 1, 0);
	MISC::CLEAR_AREA(1377.9087f, -2071.441f, 50.9983f, 1000f, true, false, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_537(0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1368.4437f, -2072.8225f, 50.9983f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 235.72f);
	Local_224.f_0 = VEHICLE::CREATE_VEHICLE(Local_224.f_1, 1381.4722f, -2072.2454f, 50.9981f, 38.334f, true, true, false);
	AUDIO::SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Local_224.f_0, false);
	__LIB_0__::func_679(Local_224.f_0, 0);
	Local_239.f_0 = VEHICLE::CREATE_VEHICLE(Local_239.f_1, 1374.858f, -2077.3743f, 50.9981f, 37.5148f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_239.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_239.f_0, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_239.f_0, true);
	__LIB_0__::func_679(Local_239.f_0, 1);
	CUTSCENE::REQUEST_CUTSCENE("fbi_4_mcs_3_concat", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("franklin", PLAYER::PLAYER_PED_ID(), 0);
		__LIB_33__::func_592(0, "michael", 2);
		__LIB_33__::func_592(2, "trevor", 2);
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_START(1368.4437f, -2072.8225f, 50.9983f, __LIB_3__::func_80(0f, 0f, 235.72f), 10f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklin", 2, __LIB_16__::func_509(1), 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_16__::func_509(2), 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevors_car", 2, Local_252.f_1, 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_224.f_0, false))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_224.f_0, "fbi_bin_lorry", 0, joaat("trash"), 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_239.f_0, false))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "fbi_truck", 0, joaat("towtruck"), 0);
	}
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	iLocal_569 = 1;
}

void func_1070()//Position - 0xAA306
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_731);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_732);
}

void func_1071()//Position - 0xAA328
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	HUD::REQUEST_ADDITIONAL_TEXT("heataud", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("CNTRY1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_1072()//Position - 0xAA366
{
	__LIB_0__::func_468(38);
	__LIB_0__::func_325();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	}
	__LIB_0__::func_221(&(Local_701[0 /*165*/]), 0);
	__LIB_0__::func_221(&(Local_701[0 /*165*/]), 1);
	__LIB_0__::func_221(&(Local_701[0 /*165*/]), 2);
	__LIB_0__::func_221(&(Local_701[0 /*165*/]), 3);
	__LIB_0__::func_221(&(Local_701[0 /*165*/]), 4);
	if (!__LIB_0__::func_134())
	{
		MISC::SET_TIME_SCALE(1f);
	}
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	STREAMING::END_SRL();
	__LIB_15__::func_929();
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_656))
	{
		AUDIO::STOP_SOUND(iLocal_656);
	}
	MISC::RESET_DISPATCH_SPAWN_BLOCKING_AREAS();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::CLEAR_PED_NON_CREATION_AREA();
	VEHICLE::SET_DISTANT_CARS_ENABLED(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(945.8f, -2080.8f, 100f, 1015.3f, -2035.2f, 32.3f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(924.63f, -2338.35f, 100f, 906.44f, -2371.57f, -100f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, true, true);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	TASK::REMOVE_WAYPOINT_RECORDING("heat1");
	if (!iLocal_703 == 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_703);
	}
	STREAMING::STREAMVOL_DELETE(iLocal_704);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_MISSION_FAIL");
	STREAMING::END_SRL();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1075()//Position - 0xAA525
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_1044(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_17__::func_502();
		}
	}
}

