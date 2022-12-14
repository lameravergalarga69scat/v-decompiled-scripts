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
	struct<8> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
	bool bLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120[1] = { 0 };
	int iLocal_121[1] = { 0 };
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	float fLocal_129 = 0f;
	int iLocal_130[5] = { 0, 0, 0, 0, 0 };
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 8;
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
	var uLocal_162 = 8;
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
	float fLocal_196 = 0f;
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
	float fLocal_199 = 0f;
	var uLocal_200 = 0;
	int iLocal_201[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	struct<142> Local_205 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 1443296302, 1, -1, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 0, 1, 0, 0, 0, 0, 9, 2 } ;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = -1;
	var uLocal_212 = 1;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = -1;
	var uLocal_219 = -1;
	var uLocal_220 = 1;
	var uLocal_221 = 0;
	struct<522> Local_222 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	struct<20> Local_225 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_226[5];
	struct<21> Local_227[7];
	struct<24> Local_228 = { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 5;
	var uLocal_231 = -1;
	var uLocal_232 = 3;
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = -1;
	var uLocal_245 = 3;
	var uLocal_246 = -1;
	var uLocal_247 = 0;
	var uLocal_248 = -1;
	var uLocal_249 = 0;
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = -1;
	var uLocal_258 = 3;
	var uLocal_259 = -1;
	var uLocal_260 = 0;
	var uLocal_261 = -1;
	var uLocal_262 = 0;
	var uLocal_263 = -1;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = -1;
	var uLocal_271 = 3;
	var uLocal_272 = -1;
	var uLocal_273 = 0;
	var uLocal_274 = -1;
	var uLocal_275 = 0;
	var uLocal_276 = -1;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = -1;
	var uLocal_284 = 3;
	var uLocal_285 = -1;
	var uLocal_286 = 0;
	var uLocal_287 = -1;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 1;
	var uLocal_297 = 0;
	var uLocal_298 = -1;
	struct<7> Local_299 = { 1, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308[1] = { 0 };
	struct<2> Local_309[1];
	struct<2> Local_310 = { 0, 0 } ;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	struct<6> Local_313 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_314 = 0;
	int iLocal_315 = 0;
	struct<7> Local_316 = { 0, -1, -1, 0, 0, 0, 0 } ;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	struct<2> Local_319 = { -1, -1 } ;
	struct<12> Local_320 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	var uLocal_321[1] = { -1 };
	struct<4> Local_322[1];
	struct<3> Local_323 = { 1, 0, 6 } ;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = -1;
	struct<8> Local_331 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_332 = 0;
	bool bLocal_333 = 0;
	bool bLocal_334 = 0;
	bool bLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	struct<3> Local_342 = { 0, 0, 0 } ;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	bool bLocal_345 = 0;
	bool bLocal_346 = 0;
	struct<2> Local_347 = { -1, -1 } ;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 3;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 1;
	var uLocal_362 = 0;
	float fLocal_363 = 0f;
	float fLocal_364 = 0f;
	float fLocal_365 = 0f;
	float fLocal_366 = 0f;
	int iLocal_367 = 0;
	int iLocal_368[1] = { 0 };
	var uLocal_369[1] = { 0 };
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	int iLocal_376 = 0;
	struct<16> Local_377 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<161> Local_378 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 5, -1, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 } ;
	var uLocal_379 = 1;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = -1;
	var uLocal_383 = -1;
	var uLocal_384 = 0;
	struct<38> Local_385[32];
	struct<21> Local_386 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_114 = -1f;
	fLocal_129 = 0f;
	fLocal_131 = 0f;
	fLocal_132 = 0f;
	fLocal_133 = 0f;
	fLocal_196 = 0.62f;
	fLocal_197 = 0.51f;
	fLocal_198 = 0.55f;
	fLocal_199 = 25f;
	iLocal_354 = -1;
	iLocal_355 = -1;
	iLocal_358 = -1;
	fLocal_363 = 99999f;
	fLocal_364 = 99999f;
	fLocal_365 = 99999f;
	fLocal_366 = 999999f;
	StringCopy(&Local_377, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_377 = { Local_377 };
	Local_225 = { Local_225 };
	func_2935(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_333)
		{
			if (!func_2925(ScriptParam_386))
			{
				func_2759(0, 1);
				func_2722();
			}
		}
		else
		{
			func_2722();
		}
	}
	else
	{
		func_2759(0, 1);
		func_2722();
	}
	__LIB_19__::func_539(&(Local_378.f_135));
	func_2618();
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_2759(0, 1);
			func_2722();
		}
		if (__LIB_20__::func_426())
		{
			func_2759(0, 1);
			func_2722();
		}
		if (Local_222.f_102.f_4 != 0)
		{
			Call_Loc(Local_222.f_102.f_4);
			if (StackVal)
			{
				func_2759(0, 1);
				func_2722();
			}
		}
		func_2935(1);
		switch (func_2606())
		{
			case 0:
				switch (func_2605())
				{
					case 1:
						if (func_2372())
						{
							func_2371(1);
						}
						break;
					case 2:
					case 3:
						func_2371(3);
						break;
				}
				break;
			case 1:
				func_2323();
				func_1676();
				__LIB_0__::func_109();
				if (func_2605() != 1)
				{
					func_1669();
					if (Local_222.f_102.f_5 != 0)
					{
						Call_Loc(Local_222.f_102.f_5);
					}
					func_2371(func_2605());
				}
				break;
			case 2:
				func_2323();
				func_930();
				func_616();
				if (func_2605() > 2)
				{
					func_2759(func_615(11), 0);
					func_2371(3);
				}
				break;
			case 3:
				func_2722();
				break;
		}
		if (bLocal_335)
		{
			switch (func_2605())
			{
				case 0:
					if (func_489())
					{
						func_488(1);
					}
					break;
				case 1:
					if (func_487() == 0)
					{
						func_6();
					}
					else
					{
						func_488(2);
					}
					break;
				case 2:
					if (func_2())
					{
						func_488(3);
					}
					break;
				case 3:
					func_2722();
					break;
				}
		}
		func_1();
	}
}

void func_1()//Position - 0x2BB
{
	Local_228.f_22++;
	if (Local_228.f_22 >= Local_205.f_38)
	{
		Local_228.f_22 = 0;
	}
}

int func_2()//Position - 0x2E1
{
	if (Local_222.f_3.f_2 != 0)
	{
		Call_Loc(Local_222.f_3.f_2);
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

bool func_3(int iParam0)//Position - 0x316
{
	return __LIB_0__::func_316(&(Local_378.f_88), iParam0);
}

bool func_5()//Position - 0x34C
{
	return func_3(21);
}

void func_6()//Position - 0x35A
{
	__LIB_0__::func_467();
	if (Local_222.f_3 != 0)
	{
		Call_Loc(Local_222.f_3);
	}
	func_433();
	__LIB_19__::func_912();
	func_149();
	func_130();
	func_40();
	func_33();
	func_23();
	func_20();
	func_12();
	func_7();
}

void func_7()//Position - 0x39D
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (!__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(__LIB_1__::func_730()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)//Position - 0x3D2
{
	if (!bLocal_335)
	{
		return;
	}
	Local_378.f_82 = iParam0;
}

void func_12()//Position - 0x46B
{
	if (func_19() == -1)
	{
		return;
	}
	if (Local_222.f_82 == 0)
	{
		return;
	}
	Call_Loc(Local_222.f_82);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_222.f_82.f_1 != 0)
	{
		Call_Loc(Local_222.f_82.f_1);
		if (StackVal)
		{
			__LIB_0__::func_627(&(Local_378.f_106), 0, 0);
			func_16(5);
		}
	}
	if (!__LIB_0__::func_864(&(Local_378.f_106)))
	{
		__LIB_0__::func_795(&(Local_378.f_106), 0, 0);
	}
	else if (__LIB_0__::func_864(&(Local_378.f_106)))
	{
		if (__LIB_0__::func_937(&(Local_378.f_106), func_19(), 0))
		{
			if (Local_222.f_82.f_3 != 0)
			{
				Call_Loc(Local_222.f_82.f_3);
			}
			func_8(1);
		}
	}
}

void func_16(int iParam0)//Position - 0x5C8
{
	if (__LIB_1__::func_458(&(Local_378.f_88), iParam0))
	{
	}
}

int func_19()//Position - 0x653
{
	if (Local_205.f_102 != -1)
	{
		return Local_205.f_102 * 60 * 1000;
	}
	return Local_205.f_102;
}

void func_20()//Position - 0x673
{
	int iVar0;
	if (func_22() == -1)
	{
		func_21(0);
		Call_Loc(Local_226[func_22() /*20*/].f_17);
		return;
	}
	while ((func_22() < iLocal_348 && iVar0 < Local_226[func_22() /*20*/].f_19) && Local_226[func_22() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_226[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_22() != Local_226[func_22() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_226[func_22() /*20*/].f_18);
				Local_378.f_86 = func_22();
				func_21(Local_226[func_22() /*20*/].f_1[iVar0 /*3*/]);
				MISC::SET_BIT(&(Local_378.f_87), func_22());
				Call_Loc(Local_226[func_22() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_21(int iParam0)//Position - 0x743
{
	if (!bLocal_335)
	{
		return;
	}
	Local_378.f_85 = iParam0;
}

int func_22()//Position - 0x75C
{
	return Local_378.f_85;
}

void func_23()//Position - 0x769
{
	struct<3> Var0;
	if (Local_222.f_80 == 0)
	{
		return;
	}
	Call_Loc(Local_222.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__::func_86(Var0))
	{
		return;
	}
	if (__LIB_0__::func_937(&(Local_378.f_108), __LIB_20__::func_24(), 0))
	{
		if (!__LIB_0__::func_490(Local_378.f_115, Var0, 1056964608, 0))
		{
			__LIB_20__::func_378(__LIB_3__::func_206(1, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), Var0, -1082130432);
			__LIB_0__::func_794(&(Local_378.f_108));
		}
		Local_378.f_115 = { Var0 };
	}
}

void func_33()//Position - 0x9E6
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_34(&(Local_378.f_63), &(Local_378.f_63.f_3)))
		{
			func_16(2);
		}
	}
}

int func_34(var uParam0, int* iParam1)//Position - 0xA1A
{
	int iVar0[1];
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (__LIB_0__::func_114(iVar2))
		{
			iVar0[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	if (iVar1 < func_37())
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < func_37())
	{
		if (__LIB_0__::func_114())
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
				if (iVar2 < (func_37() - 1))
				{
					func_35(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
					iVar1 = (iVar1 - 1);
				}
			}
			iVar2++;
			return 1;
		}
void func_35(var uParam0, var uParam1)//Position - 0xAE0
{
	var uVar0;
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_37()//Position - 0xB01
{
	return Local_205.f_19;
}

void func_40()//Position - 0xB1F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 < Local_205.f_38)
	{
		func_128(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_222.f_156.f_182 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_156.f_182);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_127(iVar5, 6);
				}
				else if (bVar3)
				{
					func_127(iVar5, 6);
				}
				else if (__LIB_0__::func_114(iVar5, iVar0))
				{
					func_127(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_125(iVar5))
				{
					func_127(iVar5, 2);
				}
				break;
			case 1:
				if (!bVar2)
				{
					if (func_124(iVar5))
					{
						func_123(iVar5);
						func_127(iVar5, 2);
					}
				}
				else if (__LIB_0__::func_109(iVar5))
				{
					__LIB_1__::func_518(&(Local_378.f_22[iVar5 /*24*/]));
				}
				break;
			case 2:
				if (!bVar1)
				{
					if (func_118(iVar5))
					{
						if (func_74(iVar5))
						{
							func_127(iVar5, 3);
							if (func_73(iVar5, 8))
							{
								func_72(iVar5, 31);
							}
							__LIB_0__::func_467(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			case 3:
				if (bVar2)
				{
					if (func_68(iVar5, iVar0))
					{
						func_127(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_49(iVar5);
						func_44(iVar5, iVar0, 1);
						if (func_43(iVar5))
						{
							func_127(iVar5, 4);
						}
					}
				}
				break;
			case 6:
				func_72(iVar5, 8);
				if (bVar2)
				{
					if (func_68(iVar5, iVar0))
					{
						break;
					}
					if (func_43(iVar5))
					{
						func_127(iVar5, 4);
					}
				}
				if (func_42(iVar5))
				{
					if (__LIB_0__::func_109(iVar5))
					{
						__LIB_1__::func_518(&(Local_378.f_22[iVar5 /*24*/]));
					}
					func_127(iVar5, 1);
				}
				if (func_487() == 0)
				{
					if (func_41(iVar5, 0))
					{
						func_8(9);
					}
				}
				break;
			case 4:
				if (!func_41(iVar5, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_72(iVar5, 26);
					func_127(iVar5, 5);
				}
				break;
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_228.f_22;
	func_128(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_44(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_41(int iParam0, int iParam1)//Position - 0xD7D
{
	return __LIB_0__::func_316(&(Local_205.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_42(int iParam0)//Position - 0xD95
{
	if (func_487() != 0)
	{
		return 0;
	}
	if (func_41(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_169);
		return StackVal;
	}
	return 0;
}

int func_43(int iParam0)//Position - 0xDC2
{
	if (Local_222.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_168);
		return StackVal;
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0xDE3
{
	int iVar0;
	int iVar1;
	iVar0 = func_48(iParam0);
	if (func_47(iParam0) == -1)
	{
		func_46(iParam0, 0);
		if (Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (__LIB_19__::func_374(Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_11);
	}
	while ((func_47(iParam0) < Local_228.f_23[iVar0 /*67*/] && iVar1 < Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_12) && Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_9);
			}
			func_46(iParam0, Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_228.f_23[iVar0 /*67*/].f_1[func_47(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

void func_46(int iParam0, int iParam1)//Position - 0xFB0
{
	if (!bLocal_335)
	{
		return;
	}
	Local_378.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_47(int iParam0)//Position - 0xFCF
{
	return Local_378.f_22[iParam0 /*24*/].f_2;
}

int func_48(int iParam0)//Position - 0xFE2
{
	if (Local_222.f_156.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_1);
		return StackVal;
	}
	return 0;
}

void func_49(int iParam0)//Position - 0x1003
{
	bool bVar0;
	int iVar1;
	bVar0 = Local_205.f_38.f_1[iParam0 /*21*/].f_14;
	if (func_67(bVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < Local_228[iParam0 /*19*/].f_16)
	{
		if (Local_228[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_228[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				if (!BitTest(Local_378.f_62, bVar0))
				{
					func_50(iParam0);
				}
				MISC::SET_BIT(&(Local_378.f_62), bVar0);
				if (Local_222.f_156.f_174 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(bVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_222.f_156.f_174);
				}
			}
		}
		iVar1++;
	}
}

void func_50(int iParam0)//Position - 0x1099
{
	if (func_66(28))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iParam0 /*24*/]))
	{
		if (__LIB_15__::func_407(NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/])))
		{
			func_51(func_63(), 1, 0);
		}
	}
}

void func_51(int iParam0, int iParam1, int iParam2)//Position - 0x10DB
{
	if (__LIB_12__::func_548(1))
	{
		__LIB_19__::func_375(Local_347.f_0, __LIB_19__::func_477(1), iParam0, iParam1, iParam2);
	}
	else
	{
		__LIB_19__::func_375(Local_347.f_0, __LIB_0__::func_950(bLocal_337), iParam0, iParam1, iParam2);
	}
}

int func_63()//Position - 0x1327
{
	int iVar0;
	iVar0 = func_64();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_64()//Position - 0x1340
{
	Call_Loc(Local_222.f_64);
	return StackVal;
}

bool func_66(int iParam0)//Position - 0x138D
{
	return __LIB_0__::func_316(&(Local_205.f_16), iParam0);
}

bool func_67(var uParam0)//Position - 0x139F
{
	return BitTest(Local_378.f_62, uParam0);
}

int func_68(int iParam0, int iParam1)//Position - 0x13AF
{
	Stack.Push(Local_222.f_156.f_192 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_222.f_156.f_192);
	if (StackVal && StackVal)
	{
		if (Local_222.f_156.f_191 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_191);
		}
		if (func_70(iParam0))
		{
			__LIB_6__::func_843(&(Local_378.f_22[iParam0 /*24*/]));
		}
		else
		{
			__LIB_1__::func_518(&(Local_378.f_22[iParam0 /*24*/]));
		}
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x144D
{
	if (func_41(iParam0, 18))
	{
		return 1;
	}
	Stack.Push(Local_222.f_156.f_195 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_195);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_72(int iParam0, int iParam1)//Position - 0x148C
{
	if (__LIB_1__::func_458(&(Local_378.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_73(int iParam0, int iParam1)//Position - 0x14A8
{
	return __LIB_0__::func_316(&(Local_378.f_22[iParam0 /*24*/].f_3), iParam1);
}

int func_74(int iParam0)//Position - 0x14C1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	func_117(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_176);
	iVar0 = StackVal;
	if (__LIB_0__::func_799(iVar0))
	{
		iVar1 = Local_205.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_953(Local_378.f_47[iVar1 /*8*/]))
			{
				if (__LIB_0__::func_930(&(Local_378.f_22[iParam0 /*24*/]), Local_378.f_47[iVar1 /*8*/], 26, iVar0, Local_205.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_90(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_89();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_177);
			Var2 = { StackVal, StackVal, StackVal };
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_178);
			fVar3 = StackVal;
			if (!__LIB_0__::func_86(Var2))
			{
				if (!func_88(iParam0) || __LIB_20__::func_318(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_1__::func_672(&(Local_378.f_22[iParam0 /*24*/]), 26, iVar0, Var2, fVar3, 1, 1, 1))
					{
						func_90(iParam0);
						func_89();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return 1;
					}
				}
				else
				{
					func_89();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x1BD0
{
	if ((func_41(iParam0, 10) && func_73(iParam0, 8)) && !func_41(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_89()//Position - 0x1C03
{
	if (Local_378.f_99 != -1)
	{
		Local_378.f_112 = { 0f, 0f, 0f };
		Local_378.f_121 = 0f;
		iLocal_357 = 0;
		Local_378.f_84 = -1;
		Local_378.f_99 = -1;
	}
}

void func_90(int iParam0)//Position - 0x1C34
{
	int iVar0;
	bool bVar1;
	iVar0 = NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]);
	bVar1 = func_73(iParam0, 19);
	func_110(iParam0, iVar0);
	if (bVar1)
	{
		func_109(iParam0, iVar0);
	}
	else
	{
		func_99(iParam0, iVar0);
	}
	if (func_96(iParam0, iVar0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
		PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
	}
	if (Local_222.f_156.f_180 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_222.f_156.f_180);
	}
	if (func_41(iParam0, 5))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
		func_91(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_91(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1CEF
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_205.f_38.f_1[iParam1 /*21*/].f_8 != -1)
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
			__LIB_19__::func_445(Var2, &Var3, &Var4, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, true, joaat("WEAPON_HEAVYSNIPER"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			__LIB_19__::func_332(iParam0, -1, 0);
		}
	}
}

int func_96(int iParam0, int iParam1)//Position - 0x23B1
{
	if (func_41(iParam0, 9))
	{
		return 1;
	}
	if (__LIB_16__::func_830(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_99(int iParam0, int iParam1)//Position - 0x248B
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
	if (func_41(iParam0, 6))
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
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_205.f_38.f_1[iParam0 /*21*/].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_108());
	PED::SET_PED_ACCURACY(iParam1, func_107(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_106());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_105());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_105(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	if (func_104(iParam0))
	{
		AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, true);
	}
	func_100(iParam0, iParam1);
}

void func_100(int iParam0, int iParam1)//Position - 0x254D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	if (func_73(iParam0, 19))
	{
		return;
	}
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), Local_205.f_38.f_1[iParam0 /*21*/].f_20, false, false);
		return;
	}
	else if (Local_205.f_38.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_205.f_38.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_205.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_205.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_102(iVar2, 4))
			{
				Var3 = { func_101(iVar2) };
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, false, false);
			}
		}
		iVar1++;
	}
}

struct<9> func_101(int iParam0)//Position - 0x2626
{
	struct<9> Var0;
	Var0 = 1;
	if (Local_222.f_453.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_453.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_205.f_111.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_205.f_111.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_205.f_111.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_205.f_111.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

bool func_102(int iParam0, int iParam1)//Position - 0x26A1
{
	struct<9> Var0;
	Var0 = { func_103(iParam0) };
	return __LIB_0__::func_316(&Var0, iParam1);
}

struct<9> func_103(int iParam0)//Position - 0x26BC
{
	return Local_205.f_111.f_1[iParam0 /*9*/];
}

int func_104(int iParam0)//Position - 0x26D1
{
	if (func_66(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_105()//Position - 0x26EC
{
	switch (Local_378.f_83)
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

int func_106()//Position - 0x2723
{
	switch (Local_378.f_83)
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

int func_107(int iParam0)//Position - 0x2758
{
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_179);
	Stack.Push(StackVal == joaat("WEAPON_RPG"));
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_179);
	if (StackVal || StackVal == joaat("WEAPON_RAILGUN"))
	{
		return 2;
	}
	switch (Local_378.f_83)
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

int func_108()//Position - 0x27BA
{
	switch (Local_378.f_83)
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

void func_109(int iParam0, int iParam1)//Position - 0x27EB
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
	PED::SET_PED_ACCURACY(iParam1, func_107(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_106());
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_105());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_105(), 0);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_108());
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}

void func_110(int iParam0, int iParam1)//Position - 0x2876
{
	int iVar0;
	int iVar1;
	if (func_113(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_378.f_22[iParam0 /*24*/]), true);
	}
	if (!__LIB_15__::func_407(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_2 == joaat("MP_G_M_Pros_01"))
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
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_72(iParam0, 2);
		PHYSICS::ACTIVATE_PHYSICS(iParam1);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
	}
	if (func_41(iParam0, 11))
	{
		NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_179);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_112(iParam0), true);
		}
	}
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_SEEING_RANGE(iParam1, Local_205.f_38.f_1[iParam0 /*21*/].f_17);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_205.f_38.f_1[iParam0 /*21*/].f_18);
	PED::SET_PED_HEARING_RANGE(iParam1, Local_205.f_38.f_1[iParam0 /*21*/].f_19);
	PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
	iVar1 = func_111(iParam0);
	if (iVar1 != joaat("COP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
	}
}

var func_111(int iParam0)//Position - 0x29E9
{
	return Local_205.f_38.f_23[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_112(int iParam0)//Position - 0x2A05
{
	if (Local_222.f_156.f_193 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_193);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2);
	if (StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_73(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x2A61
{
	if (func_66(22))
	{
		return 1;
	}
	return 0;
}

void func_117(int iParam0, var uParam1)//Position - 0x2B3F
{
	if (Local_378.f_99 == -1)
	{
		Local_378.f_84 = iParam0;
		Local_378.f_99 = uParam1;
	}
}

int func_118(int iParam0)//Position - 0x2B5E
{
	if (!func_120(0, iParam0))
	{
		return 0;
	}
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (func_119(Local_205.f_38.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_337))
	{
		return 0;
	}
	Stack.Push(Local_222.f_156.f_194 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_194);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_119(int iParam0)//Position - 0x2BCC
{
	return Local_378.f_47[iParam0 /*8*/].f_1;
}

int func_120(int iParam0, int iParam1)//Position - 0x2BDF
{
	if (Local_378.f_84 == -1)
	{
		return 1;
	}
	if (Local_378.f_84 == iParam0)
	{
		if (Local_378.f_99 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_123(int iParam0)//Position - 0x2C3A
{
	func_46(iParam0, 0);
	if (Local_222.f_156.f_169.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_169.f_3);
	}
}

int func_124(int iParam0)//Position - 0x2C62
{
	int iVar0;
	if (Local_222.f_156.f_169.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_169.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_0__::func_937(&(Local_378.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::func_794(&(Local_378.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

int func_125(int iParam0)//Position - 0x2CB8
{
	if (Local_222.f_156.f_175 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_175);
		return StackVal;
	}
	return 1;
}

void func_127(int iParam0, int iParam1)//Position - 0x2CE2
{
	if (!bLocal_335)
	{
		return;
	}
	Local_378.f_22[iParam0 /*24*/].f_1 = iParam1;
}

void func_128(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x2D01
{
	*iParam4 = func_129(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

int func_129(int iParam0)//Position - 0x2D42
{
	return Local_378.f_22[iParam0 /*24*/].f_1;
}

void func_130()//Position - 0x2D55
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	iVar4 = 0;
	while (iVar4 < Local_205.f_85)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_56[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_378.f_56[iVar4 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_222.f_407.f_36 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_222.f_407.f_36);
			}
		}
		if (func_148(iVar4) > 1 && func_148(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_147(iVar4, 3);
				}
				else if (func_146(iVar4))
				{
					func_147(iVar4, 3);
				}
			}
			else
			{
				func_147(iVar4, 3);
			}
		}
		func_142(iVar4, iVar0);
		switch (func_148(iVar4))
		{
			case 0:
				if (func_141(iVar4))
				{
					func_147(iVar4, 1);
				}
				break;
			case 1:
				if ((!bVar1 && func_140(iVar4)) && func_131(iVar4))
				{
					func_147(iVar4, 2);
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

int func_131(int iParam0)//Position - 0x2E6C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_56[iParam0 /*5*/]))
	{
		Var1 = { func_139(iParam0) };
		Var2 = { func_138(iParam0) };
		if (__LIB_0__::func_86(Var1))
		{
			return 0;
		}
		iVar3 = Local_205.f_85.f_1[iParam0 /*12*/].f_3;
		if (!__LIB_0__::func_799(iVar3))
		{
			return 0;
		}
		if (__LIB_1__::func_671(&(Local_378.f_56[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_137(iParam0, 22), 1, 0, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_378.f_56[iParam0 /*5*/]);
			ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, true);
			func_132(iParam0, iVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_56[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0, int iParam1)//Position - 0x2F26
{
	var uVar0;
	var uVar1;
	NETWORK::NETWORK_SET_OBJECT_SCOPE_DISTANCE(NETWORK::NET_TO_OBJ(Local_378.f_56[iParam0 /*5*/]), 4.2E-43f);
	ENTITY::SET_ENTITY_PROOFS(iParam1, func_137(iParam0, 17), func_137(iParam0, 18), func_137(iParam0, 19), func_137(iParam0, 20), func_137(iParam0, 21), false, false, false);
	func_134(iParam0, 0);
	if (func_137(iParam0, 32))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (!func_137(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_378.f_56[iParam0 /*5*/]));
	}
	if (func_137(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_378.f_56[iParam0 /*5*/], true, true);
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_378.f_56[iParam0 /*5*/], 1);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_137(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (func_137(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, true);
	}
	if (func_137(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, false);
	}
	if (func_137(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
	}
	if (func_137(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (func_137(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_378.f_56[iParam0 /*5*/]), 1200);
	}
	if (func_137(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_137(iParam0, 9))
	{
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_378.f_56[iParam0 /*5*/]), true);
	}
	if (func_137(iParam0, 34))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, func_139(iParam0), false, false, true);
	}
	else if (func_137(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, func_139(iParam0), true, false, false, true);
	}
	if (func_137(iParam0, 33))
	{
		ENTITY::SET_ENTITY_ROTATION(iParam1, func_138(iParam0), 2, true);
	}
	if (func_137(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (func_137(iParam0, 11))
	{
		ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iParam1, true);
	}
	if (func_133(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	if (func_137(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
	}
	if (func_137(iParam0, 14))
	{
		Stack.Push(Local_222.f_407.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_222.f_407.f_24);
		if (StackVal && StackVal)
		{
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, true);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar1);
		}
	}
	if (Local_222.f_407.f_33 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_407.f_33);
	}
}

int func_133(int iParam0)//Position - 0x3196
{
	if (func_137(iParam0, 12))
	{
		return 1;
	}
	if (func_66(22))
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0, int iParam1)//Position - 0x31BB
{
	if (__LIB_16__::func_755(&(Local_378.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_137(int iParam0, int iParam1)//Position - 0x32B3
{
	return __LIB_0__::func_316(&(Local_205.f_85.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_138(int iParam0)//Position - 0x32CB
{
	struct<3> Var0;
	if (Local_222.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_205.f_85.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_139(int iParam0)//Position - 0x330F
{
	struct<3> Var0;
	if (Local_222.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_205.f_85.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_140(int iParam0)//Position - 0x3353
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_337))
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0)//Position - 0x336A
{
	if (Local_222.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_23);
		return StackVal;
	}
	return 1;
}

void func_142(int iParam0, int iParam1)//Position - 0x338D
{
	if (Local_205.f_85.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_148(iParam0) > 1 && func_148(iParam0) < 3)
	{
		if (func_144(iParam0, iParam1))
		{
			func_143(iParam0, 8);
		}
		else
		{
			func_134(iParam0, 8);
		}
	}
}

void func_143(int iParam0, int iParam1)//Position - 0x33DE
{
	if (__LIB_1__::func_458(&(Local_378.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_144(int iParam0, int iParam1)//Position - 0x33FA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	return func_145(iParam0, 8);
}

bool func_145(int iParam0, int iParam1)//Position - 0x3413
{
	return __LIB_0__::func_316(&(Local_378.f_56[iParam0 /*5*/].f_2), iParam1);
}

int func_146(int iParam0)//Position - 0x342C
{
	if (Local_222.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_27);
		return StackVal;
	}
	return 0;
}

void func_147(int iParam0, int iParam1)//Position - 0x344F
{
	Local_378.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_148(int iParam0)//Position - 0x3464
{
	return Local_378.f_56[iParam0 /*5*/].f_1;
}

void func_149()//Position - 0x3477
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_67)
	{
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_378.f_47[iVar0 /*8*/]);
			bVar4 = __LIB_0__::func_939(Local_378.f_47[iVar0 /*8*/]);
			bVar6 = __LIB_3__::func_161(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_424(iVar0, 2);
			}
		}
		if (func_119(iVar0) > 2)
		{
			if (func_119(iVar0) != 5 && func_119(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_423(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_423(iVar0, 5);
				}
				else if (__LIB_0__::func_114(iVar0, iVar2))
				{
					func_423(iVar0, 5);
				}
			}
		}
		if (Local_222.f_352.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_222.f_352.f_46);
		}
		func_418(iVar0, iVar2);
		switch (func_119(iVar0))
		{
			case 0:
				if (func_417(iVar0))
				{
					func_423(iVar0, 2);
				}
				break;
			case 1:
				if (!bVar5)
				{
					if (func_416(iVar0))
					{
						func_423(iVar0, 2);
					}
				}
				else
				{
					__LIB_1__::func_518(&(Local_378.f_47[iVar0 /*8*/]));
				}
				break;
			case 2:
				if (!bVar3)
				{
					if (func_415(iVar0))
					{
						if (func_158(iVar0))
						{
							func_423(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			case 4:
				if (bVar5)
				{
					if (func_157(iVar0, iVar2))
					{
						func_423(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_156(iVar0, iVar2);
						}
						break;
					case 5:
						if (func_155(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (func_157(iVar0, iVar2))
							{
							}
							else
							{
								if (func_155(iVar0, 23))
								{
									if (bVar5)
									{
										__LIB_1__::func_518(&(Local_378.f_47[iVar0 /*8*/]));
									}
								}
								if (func_154(iVar0))
								{
									__LIB_1__::func_518(&(Local_378.f_47[iVar0 /*8*/]));
									func_423(iVar0, 1);
								}
								break;
							case 3:
								break;
							case 6:
								if (bVar5 && func_152(iVar0, iVar2))
								{
									__LIB_1__::func_518(&(Local_378.f_47[iVar0 /*8*/]));
								}
								break;
							case 7:
								break;
						}
						if (bVar6)
						{
							func_151(iVar0, 13);
						}
						else
						{
							func_150(iVar0, 13);
						}
					}
					iVar0++;
				}
void func_150(int iParam0, int iParam1)//Position - 0x36C6
{
	if (__LIB_16__::func_755(&(Local_378.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_151(int iParam0, int iParam1)//Position - 0x36E2
{
	if (__LIB_1__::func_458(&(Local_378.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_152(int iParam0, int iParam1)//Position - 0x36FE
{
	if (func_155(iParam0, 23) || func_153(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_222.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_222.f_352.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_153(int iParam0, int iParam1)//Position - 0x3747
{
	return __LIB_0__::func_316(&(Local_378.f_47[iParam0 /*8*/].f_2), iParam1);
}

int func_154(int iParam0)//Position - 0x3760
{
	if (func_487() != 0)
	{
		return 0;
	}
	if (func_155(iParam0, 13))
	{
		if (Local_222.f_352.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_352.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_155(int iParam0, int iParam1)//Position - 0x379E
{
	return __LIB_0__::func_316(&(Local_205.f_67.f_1[iParam0 /*15*/]), iParam1);
}

void func_156(int iParam0, int iParam1)//Position - 0x37B6
{
	struct<3> Var0;
	float fVar1;
	if (iParam0 != Local_205.f_67.f_17)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar1 = 500f;
	if (__LIB_0__::func_86(Local_378.f_118))
	{
		Local_378.f_118 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_378.f_118) > (550f * 550f))
	{
		if (Local_378.f_103 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_378.f_103, false);
		}
		Local_378.f_118 = { Var0 };
		Local_378.f_103 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_378.f_118, fVar1, 1f, 0.02f, false, true);
	}
}

int func_157(int iParam0, int iParam1)//Position - 0x3854
{
	Stack.Push(Local_222.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_222.f_352.f_52);
	if (StackVal && StackVal)
	{
		__LIB_1__::func_518(&(Local_378.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x388D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	func_117(1, iParam0);
	iVar0 = Local_205.f_67.f_1[iParam0 /*15*/].f_3;
	if (!__LIB_0__::func_799(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (__LIB_0__::func_86(Local_378.f_112))
	{
		if (func_153(iParam0, 15))
		{
		}
		else
		{
			if (func_155(iParam0, 35) && !func_153(iParam0, 24))
			{
				if (!__LIB_20__::func_318(Local_205.f_67.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
				{
					func_151(iParam0, 24);
				}
			}
			if (func_155(iParam0, 17) || func_153(iParam0, 24))
			{
				if (!func_289(iParam0, &(Local_378.f_112), &(Local_378.f_121)))
				{
					bVar1 = false;
				}
			}
			else if (func_155(iParam0, 25))
			{
				Stack.Push(iParam0);
				Stack.Push(&(Local_378.f_112));
				Stack.Push(&(Local_378.f_121));
				Call_Loc(Local_222.f_352.f_37);
				if (!StackVal)
				{
					bVar1 = false;
				}
			}
			else if (func_155(iParam0, 18))
			{
				if (!func_285(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (func_155(iParam0, 19))
			{
				if (!func_279(iParam0))
				{
					bVar1 = false;
				}
			}
			else
			{
				Local_378.f_112 = { Local_205.f_67.f_1[iParam0 /*15*/].f_4 };
				Local_378.f_121 = Local_205.f_67.f_1[iParam0 /*15*/].f_7;
			}
		}
	}
	if (bVar1)
	{
		if (!func_155(iParam0, 30))
		{
			__LIB_14__::func_588(Local_378.f_112, 30f, 0);
			MISC::CLEAR_AREA(Local_378.f_112, 30f, false, false, false, true);
		}
		if (__LIB_0__::func_957(&(Local_378.f_47[iParam0 /*8*/]), iVar0, Local_378.f_112, Local_378.f_121, 1, 1, 1, 0, 1, 1, 0, 0, Local_378.f_112.f_2 <= -100f, 0))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_378.f_47[iParam0 /*8*/]);
			func_159(iParam0, iVar2);
			func_89();
			return 1;
		}
	}
	else
	{
		func_89();
	}
	return 0;
}

void func_159(int iParam0, int iParam1)//Position - 0x3A73
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!func_177(iParam0, iParam1))
	{
		func_176(iParam0, iParam1);
	}
	if (func_175(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_155(iParam0, 10));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_155(iParam0, 3));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_155(iParam0, 6));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_155(iParam0, 5));
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
	}
	if (func_155(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (func_155(iParam0, 25))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_378.f_112, false, false, true);
	}
	if (func_155(iParam0, 8))
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
		VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, false);
	}
	if (func_155(iParam0, 28))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_378.f_47[iParam0 /*8*/], true, true);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_153(iParam0, 14))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
		VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
		if (func_174(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, func_173(iParam0, iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
		}
		__LIB_19__::func_447(iParam1, iVar0);
		__LIB_1__::func_901(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
		VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, func_155(iParam0, 7), false);
		__LIB_19__::func_377(iParam0, iParam1);
		iVar1 = func_168(iParam0);
		if (iVar1 != -1 && func_167(iVar1) != -1)
		{
			__LIB_19__::func_257(NETWORK::NET_TO_ENT(Local_378.f_47[iParam0 /*8*/]), Local_378.f_160.f_1[func_167(iVar1) /*5*/].f_1);
		}
	}
	if (func_155(iParam0, 11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_155(iParam0, 32))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
		VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, true);
	}
	if (func_155(iParam0, 33))
	{
		VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
	}
	if (__LIB_19__::func_376(iParam1))
	{
		if (func_155(iParam0, 34))
		{
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, true, true);
		}
		else
		{
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, false, true);
		}
	}
	if (func_153(iParam0, 15))
	{
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			if (func_155(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1))
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
	if (func_153(iParam0, 15) || func_155(iParam0, 19))
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
	if (!__LIB_0__::func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_205.f_67.f_1[iParam0 /*15*/].f_3))
	{
		func_162(iParam0, iParam1);
	}
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, true);
	__LIB_19__::func_446(iParam1);
	NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_378.f_47[iParam0 /*8*/], true);
	if (Local_222.f_352.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_352.f_43);
	}
}

void func_162(int iParam0, int iParam1)//Position - 0x3E20
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (VEHICLE::GET_IS_DOOR_VALID(iParam1, iVar0))
		{
			iVar1 = func_163(iParam0, iVar0);
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

int func_163(int iParam0, int iParam1)//Position - 0x3ECC
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
		if (BitTest(Local_205.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_167(int iParam0)//Position - 0x3FBA
{
	return Local_378.f_2.f_13[iParam0];
}

int func_168(int iParam0)//Position - 0x3FCD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (Local_378.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_173(int iParam0, int iParam1)//Position - 0x40B1
{
	if (Local_222.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_36);
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

bool func_174(int iParam0, int iParam1)//Position - 0x40E9
{
	return func_173(iParam0, iParam1) != 1f;
}

int func_175(int iParam0)//Position - 0x40FB
{
	if (func_66(22))
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, int iParam1)//Position - 0x4111
{
	if (Local_205.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_205.f_67.f_1[iParam0 /*15*/].f_8, Local_205.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_205.f_67.f_1[iParam0 /*15*/].f_8, Local_205.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

int func_177(var uParam0, int iParam1)//Position - 0x4165
{
	struct<101> Var0;
	if (Local_222.f_352.f_44 != 0)
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
		Call_Loc(Local_222.f_352.f_44);
		if (StackVal)
		{
			__LIB_20__::func_483(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x125BC
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (func_282(iParam0, &Var2, &Var1, &uVar0))
	{
		if (__LIB_20__::func_427(iParam0, Var2, Var1, uVar0))
		{
			Local_378.f_112 = { Var2 };
			Local_378.f_121 = __LIB_0__::func_932(Var2, Var1);
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x12690
{
	float fVar0;
	fVar0 = 200f;
	if (func_153(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_205.f_67.f_1[iParam0 /*15*/].f_4 };
	}
	*uParam1 = { __LIB_1__::func_657(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_357) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_357) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + __LIB_19__::func_259());
	iLocal_357++;
	if (iLocal_357 >= 12)
	{
		iLocal_357 = 0;
	}
	return 1;
}

int func_285(int iParam0)//Position - 0x12773
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (func_287(iParam0, &Var1, &Var2, &fVar4, &uVar0))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var2, Var1, fVar4, &Var3))
		{
			if (func_286(iParam0, Var3, Var2, uVar0))
			{
				Local_378.f_112 = { Var3 };
				Local_378.f_121 = __LIB_0__::func_932(Var3, Var2);
				return 1;
			}
		}
	}
	return 0;
}

int func_286(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x127D6
{
	if (Local_222.f_352.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_222.f_352.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!__LIB_20__::func_318(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_287(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x12839
{
	if (func_153(iParam0, 15))
	{
	}
	else if (Local_222.f_352.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_205.f_67.f_1[iParam0 /*15*/].f_4 };
		*uParam2 = { Local_205.f_67.f_1[iParam0 /*15*/].f_4 };
	}
	if (iLocal_357 > 0)
	{
		func_288(uParam1);
	}
	if (!func_153(iParam0, 15) && Local_222.f_352.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_41);
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

void func_288(var uParam0)//Position - 0x12924
{
	if (iLocal_357 < 5)
	{
		switch (iLocal_357)
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
		iLocal_357 = 0;
	}
	iLocal_357++;
}

bool func_289(int iParam0, var uParam1, var uParam2)//Position - 0x129C9
{
	struct<35> Var0;
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_290(Local_205.f_67.f_1[iParam0 /*15*/].f_4, Local_205.f_67.f_1[iParam0 /*15*/].f_4, Local_205.f_67.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_290(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x12A14
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
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_402(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
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
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_20__::func_43(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_20__::func_321(Param0, iParam2);
		}
		if (__LIB_20__::func_320(Param0))
		{
			__LIB_20__::func_321(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_20__::func_318(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_4__::func_986(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
					func_310(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_3__::func_247(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
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
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
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
						func_305(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
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
				__LIB_0__::func_821(-1);
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
								if (__LIB_4__::func_985(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_20__::func_50(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_305(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_305(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
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
			func_310(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
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
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_305(struct<3> Param0, int iParam1)//Position - 0x13CE1
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_305(Var0, iParam1 + 1);
	}
}

void func_310(var uParam0, var uParam1, var uParam2)//Position - 0x13EF5
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_359(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_311(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_311(var uParam0, var uParam1, var uParam2)//Position - 0x13F64
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
		if (func_355(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (__LIB_1__::func_572(uParam0, 1))
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
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
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
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !__LIB_8__::func_982(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_355(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_20__::func_318(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_20__::func_318(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_20__::func_50(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_20__::func_319(Var1, uParam2->f_54, &fVar23);
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
																													func_319(Var1, fVar2, iVar14);
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
																									if (__LIB_1__::func_546(Var1, uParam2))
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
							func_317(0, uParam2);
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
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_355(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
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
				__LIB_9__::func_811(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_317(int iParam0, var uParam1)//Position - 0x14CC5
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_317(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_317(iParam0 + 1, uParam1);
	}
}

void func_319(struct<3> Param0, float fParam1, int iParam2)//Position - 0x14D6B
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
			func_319(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_355(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x16730
{
	int iVar0;
	bool bVar1;
	if (func_402(Param0))
	{
		if (func_358(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
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
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_358(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1697A
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
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_358(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_359(var uParam0, var uParam1, var uParam2)//Position - 0x16A55
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
			if (func_355(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
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
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
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
							if ((uParam2->f_12 && !__LIB_8__::func_982(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_355(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_20__::func_318(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_20__::func_318(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_20__::func_50(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_20__::func_319(Var3, uParam2->f_54, &fVar12);
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
																		func_319(Var3, fVar4, iVar5);
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
					func_317(0, uParam2);
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

int func_402(struct<3> Param0)//Position - 0x1FB4D
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_358(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_358(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_358(&Var1, 0, 0, 0, 1))
					{
						if (!func_358(&Param0, 0, 0, 0, 1))
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

int func_415(int iParam0)//Position - 0x1FEEF
{
	if (!func_120(1, iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_337))
	{
		return 0;
	}
	Stack.Push(Local_222.f_352.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_416(int iParam0)//Position - 0x1FF37
{
	int iVar0;
	if (Local_222.f_352.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_0__::func_937(&(Local_378.f_47[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::func_794(&(Local_378.f_47[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

int func_417(int iParam0)//Position - 0x1FF8B
{
	if (Local_222.f_352.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_23);
		return StackVal;
	}
	return 1;
}

void func_418(int iParam0, int iParam1)//Position - 0x1FFAE
{
	if (Local_205.f_67.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (func_119(iParam0) > 2 && func_119(iParam0) < 5)
	{
		if (func_419(iParam0, iParam1))
		{
			func_151(iParam0, 2);
		}
		else
		{
			func_150(iParam0, 2);
		}
	}
}

bool func_419(int iParam0, int iParam1)//Position - 0x1FFFD
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = __LIB_19__::func_260(iParam1);
		if (iVar0 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			return func_420(iVar1, 2);
		}
	}
	return func_153(iParam0, 2);
}

bool func_420(int iParam0, int iParam1)//Position - 0x20047
{
	return __LIB_0__::func_316(&(Local_385[iParam0 /*38*/].f_1), iParam1);
}

void func_423(int iParam0, int iParam1)//Position - 0x200C3
{
	Local_378.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_424(int iParam0, int iParam1)//Position - 0x200D8
{
	int iVar0;
	if (iParam1 != func_426())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (iParam0 == func_425(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_425(int iParam0)//Position - 0x20113
{
	return Local_378.f_2.f_9[iParam0];
}

int func_426()//Position - 0x20126
{
	return Local_205.f_19.f_5[0 /*13*/].f_11;
}

void func_433()//Position - 0x20325
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		func_445(iVar0);
		func_440(iVar0);
		iVar0++;
	}
	func_434();
}

void func_434()//Position - 0x20352
{
	if (Local_205.f_19 <= 0)
	{
		return;
	}
	if (!func_439())
	{
		return;
	}
	Stack.Push(Local_222.f_114.f_36 != 0);
	Call_Loc(Local_222.f_114.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_438())
	{
		if (func_437())
		{
			func_8(5);
		}
	}
	else if (func_435())
	{
		func_8(5);
	}
}

int func_435()//Position - 0x203AE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_436(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_436(int iParam0, int iParam1)//Position - 0x203DA
{
	return __LIB_0__::func_316(&(Local_378.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_437()//Position - 0x203F3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (!func_436(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_438()//Position - 0x20420
{
	return func_66(0);
}

int func_439()//Position - 0x2042D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (!func_436(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_440(int iParam0)//Position - 0x2045A
{
	if (func_436(iParam0, 29) && func_443(iParam0))
	{
		if (func_442(iParam0))
		{
			func_441(iParam0, 29);
		}
	}
}

void func_441(int iParam0, int iParam1)//Position - 0x20489
{
	if (__LIB_16__::func_755(&(Local_378.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_442(int iParam0)//Position - 0x204A5
{
	int iVar0;
	if (func_443(iParam0))
	{
		iVar0 = func_425(iParam0);
		return (Local_378.f_47[iVar0 /*8*/].f_1 == 5 || func_436(iParam0, 0));
	}
	return 1;
}

bool func_443(int iParam0)//Position - 0x204DC
{
	return (func_444(iParam0) && func_426() == 2);
}

bool func_444(int iParam0)//Position - 0x204F5
{
	return Local_378.f_2.f_9[iParam0] != -1;
}

void func_445(int iParam0)//Position - 0x2050A
{
	if (Local_205.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_23);
		if (StackVal)
		{
			if (!func_436(iParam0, 6))
			{
				if (__LIB_0__::func_799(Local_205.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PICKUPS(1))
					{
						if (func_447(iParam0))
						{
							func_446(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_446(int iParam0, int iParam1)//Position - 0x20568
{
	if (__LIB_1__::func_458(&(Local_378.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_447(int iParam0)//Position - 0x20584
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_378.f_2[iParam0]))
	{
		Var0 = { func_483(iParam0) };
		fVar1 = Local_205.f_19.f_5[iParam0 /*13*/].f_6;
		Var2 = { Local_205.f_19.f_5[iParam0 /*13*/].f_7 };
		if (__LIB_0__::func_86(Var0))
		{
			return 0;
		}
		Local_378.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_482(iParam0), Var0, !func_481(iParam0, 0), Local_205.f_19.f_5[iParam0 /*13*/].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), fVar1);
		if (!__LIB_0__::func_86(Var2))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), Var2, 2, true);
		}
		func_475(iParam0, Var0);
		if (Local_222.f_114.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_114.f_30);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_378.f_2[iParam0]))
	{
		if (func_448(&(Local_378.f_2.f_13[iParam0]), 0, iParam0, func_474(iParam0), __LIB_3__::func_793(), __LIB_0__::func_109(iParam0), __LIB_0__::func_114(iParam0)))
		{
			__LIB_19__::func_257(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), Local_378.f_160.f_1[func_167(iParam0) /*5*/].f_1);
			Local_378.f_2.f_11[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
			return 1;
		}
	}
	return 0;
}

int func_448(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x206CB
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_470();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_378.f_160 != iParam4)
	{
		Local_378.f_160 = iParam4;
	}
	if (Local_378.f_160.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_378.f_160.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_378.f_160.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (__LIB_19__::func_868(&(Local_378.f_160.f_1[*uParam0 /*5*/]), iParam3, *uParam0, Local_378.f_160, &(Local_378.f_135), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_470()//Position - 0x20F1E
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!__LIB_3__::func_487(Local_378.f_160.f_1[iVar1 /*5*/]))
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

bool func_474(int iParam0)//Position - 0x20F75
{
	return bLocal_337;
}

void func_475(int iParam0, struct<3> Param1)//Position - 0x20F80
{
	if (func_444(iParam0))
	{
		func_446(iParam0, 29);
		if (iParam0 != func_480(func_425(iParam0)))
		{
			func_446(iParam0, 40);
		}
	}
	else if (!func_481(iParam0, 7))
	{
		func_446(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_378.f_2[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true, true, false, true, true, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), true);
	OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
	OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
	if (__LIB_0__::func_114())
	{
		OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
	}
	if (func_478(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
	}
	else
	{
		func_446(iParam0, 28);
	}
	if (!func_481(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]));
	}
	if (func_481(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), Param1, true, false, false, true);
	}
	if (func_481(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
	}
	if (func_481(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), true);
	}
	if ((func_481(iParam0, 6) || func_481(iParam0, 7)) || func_444(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), false, false);
	}
	if (Local_205.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_446(iParam0, 23);
	}
	if (func_477(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), true);
	}
	if (func_481(iParam0, 9) || Local_222.f_114.f_38 != 0)
	{
		func_476(iParam0, 1, 0);
	}
}

void func_476(int iParam0, bool bParam1, bool bParam2)//Position - 0x211C3
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), bParam1, bParam2);
}

int func_477(int iParam0)//Position - 0x211E0
{
	if (func_481(iParam0, 8))
	{
		return 1;
	}
	if (func_66(22))
	{
		return 1;
	}
	return 0;
}

bool func_478(int iParam0)//Position - 0x21205
{
	if (func_436(iParam0, 29))
	{
		return 0;
	}
	return !func_481(iParam0, 5);
}

int func_480(int iParam0)//Position - 0x2122D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (Local_378.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_481(int iParam0, int iParam1)//Position - 0x21260
{
	return __LIB_0__::func_316(&(Local_205.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_482(int iParam0)//Position - 0x21278
{
	if (Local_222.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_28);
		return StackVal;
	}
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS_UPRIGHT");
}

Vector3 func_483(int iParam0)//Position - 0x2129D
{
	if (func_485(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_443(iParam0))
	{
		return Local_205.f_67.f_1[func_425(iParam0) /*15*/].f_4 + __LIB_19__::func_382(iParam0, Local_205.f_67.f_1[func_425(iParam0) /*15*/].f_3);
	}
	return Local_205.f_19.f_5[iParam0 /*13*/].f_3;
}

bool func_485(var uParam0)//Position - 0x21430
{
	struct<3> Var0;
	if (Local_222.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !__LIB_0__::func_86(Var0);
}

int func_487()//Position - 0x21466
{
	return Local_378.f_82;
}

void func_488(int iParam0)//Position - 0x21473
{
	Local_378.f_81 = iParam0;
}

int func_489()//Position - 0x21482
{
	int iVar0;
	if (!func_610(__LIB_20__::func_388(), __LIB_20__::func_387()))
	{
		return 0;
	}
	if (!func_502())
	{
		return 0;
	}
	__LIB_0__::func_467();
	__LIB_0__::func_467();
	Local_378.f_93 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(__LIB_1__::func_834(), -1, 0);
	func_498();
	func_495();
	func_494();
	func_492();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_378.f_63[iVar0] = -1;
		iVar0++;
	}
	Local_378.f_97 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_378.f_90), &(Local_378.f_91));
	Global_1892703[iLocal_338 /*599*/].f_526 = Local_378.f_90;
	Global_1892703[iLocal_338 /*599*/].f_527 = Local_378.f_91;
	func_491();
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	Call_Loc(Local_222.f_1);
	return StackVal;
}

void func_491()//Position - 0x2154E
{
	if (Local_378.f_98 == -1)
	{
		Local_378.f_98 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_492()//Position - 0x21568
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		Local_378.f_22[iVar0 /*24*/].f_15 = func_493(iVar0);
		iVar0++;
	}
}

int func_493(int iParam0)//Position - 0x21596
{
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_205.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_205.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_205.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_494()//Position - 0x215EC
{
	Local_378.f_83 = 2;
}

void func_495()//Position - 0x215FA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		Local_378.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	func_496();
}

void func_496()//Position - 0x21627
{
	int iVar0;
	if (__LIB_0__::func_114())
	{
		if (func_34(&(Local_378.f_2.f_9), &(Local_378.f_63.f_3)))
		{
			func_16(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_19)
		{
			Local_378.f_2.f_9[iVar0] = Local_205.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

void func_498()//Position - 0x21688
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		iVar3 = Local_205.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_205.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_151(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_205.f_38)
	{
		iVar2 = Local_205.f_38.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_153(iVar2, 15))
		{
			func_72(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_205.f_122)
		{
			if (Local_205.f_122.f_1[iVar5 /*10*/] == iVar1)
			{
				func_72(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
}

int func_502()//Position - 0x21786
{
	__LIB_0__::func_467();
	func_513();
	if (!func_504())
	{
		return 0;
	}
	__LIB_0__::func_467();
	Stack.Push(Local_222.f_0 != 0);
	Call_Loc(Local_222.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_504()//Position - 0x217C5
{
	if (func_615(12))
	{
		return 1;
	}
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	func_508();
	func_507();
	__LIB_0__::func_467();
	if (Local_222.f_13 != 0)
	{
		Call_Loc(Local_222.f_13);
	}
	func_505(12);
	return 1;
}

void func_505(int iParam0)//Position - 0x21808
{
	if (__LIB_1__::func_458(&uLocal_350, iParam0))
	{
	}
}

void func_507()//Position - 0x21824
{
	int iVar0;
	int iVar1;
	if (Local_205.f_134 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_134)
		{
			iVar0++;
		}
	}
	if (Local_205.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_19)
		{
			if (-1 != Local_205.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_205.f_122 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_122)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_205.f_38 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_38)
		{
			if (-1 != Local_205.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_205.f_38.f_1[iVar0 /*21*/].f_8)
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
			if (Local_205.f_38.f_23[iVar0 /*5*/].f_1[iVar1] != 1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(Local_205.f_141[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_205.f_85 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_85)
		{
			iVar0++;
		}
	}
	if (Local_205.f_111 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_111)
		{
			iVar0++;
		}
	}
	if (Local_205.f_67 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_205.f_67)
		{
			iVar0++;
		}
	}
}

void func_508()//Position - 0x21995
{
	var uVar0;
	var uVar1;
	uVar0 = uVar0;
	uVar1 = uVar1;
	__LIB_19__::func_383(Local_205.f_134, 1, "data.MovingDoor.MovingDoors", "MAX_NUM_EVENT_LOCATION_BLIPS");
	__LIB_19__::func_383(Local_205.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	__LIB_19__::func_383(Local_205.f_38, 1, "data.Ped.iCount", "MAX_NUM_PEDS");
	__LIB_19__::func_383(func_510(), 1, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
	__LIB_19__::func_383(Local_205.f_122, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	__LIB_19__::func_383(Local_205.f_85, 1, "data.Prop.iCount", "MAX_NUM_PROPS");
	__LIB_19__::func_383(func_509(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
	__LIB_19__::func_383(Local_205.f_111, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	__LIB_19__::func_383(Local_205.f_67, 1, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_509()//Position - 0x21A3E
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_86(Local_205.f_141[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_510()//Position - 0x21A72
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		if (Local_205.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_205.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_513()//Position - 0x21ACD
{
	if (func_615(21))
	{
		return;
	}
	func_514();
	func_505(21);
}

void func_514()//Position - 0x21AEB
{
	Local_222.f_11 = 148104/*func_605*/;
	Local_222.f_11.f_1 = 147944/*func_601*/;
	Local_222.f_13 = 147828/*func_599*/;
	Local_222.f_156 = 147139/*func_590*/;
	Local_222.f_156.f_1 = 147130/*func_589*/;
	Local_222.f_156.f_180 = 146096/*func_587*/;
	Local_222.f_156.f_177 = 146072/*func_586*/;
	Local_222.f_156.f_178 = 146053/*func_585*/;
	Local_222.f_156.f_181 = 145370/*func_578*/;
	Local_222.f_156.f_191 = 145274/*func_576*/;
	Local_222.f_156.f_132.f_1 = 145240/*func_575*/;
	Local_222.f_156.f_132.f_1.f_1 = 145198/*func_574*/;
	Local_222.f_156.f_132.f_1.f_3 = 145158/*func_573*/;
	Local_222.f_156.f_2.f_54 = 145146/*func_572*/;
	Local_222.f_156.f_2.f_54.f_1 = 145133/*func_571*/;
	Local_222.f_156.f_168 = 140996/*func_541*/;
	Local_222.f_3.f_1 = 140416/*func_532*/;
	Local_222.f_3.f_4.f_1 = 140343/*func_530*/;
	Local_222.f_94 = 139410/*func_529*/;
	Local_222.f_94.f_1 = 138549/*func_526*/;
	Local_222.f_94.f_3 = 138523/*func_525*/;
	Local_222.f_94.f_3.f_1 = 138491/*func_524*/;
	Local_222.f_94.f_3.f_2 = 138479/*func_523*/;
	Local_222.f_94.f_3.f_3 = 138467/*func_522*/;
	Local_222.f_456 = 138393/*func_520*/;
	Local_222.f_456.f_4 = 138381/*func_519*/;
	Local_222.f_456.f_6 = 138372/*func_518*/;
	Local_222.f_456.f_1 = 138363/*func_517*/;
	Local_222.f_456.f_8 = 138347/*func_516*/;
	Local_222.f_102.f_6 = 138320/*func_515*/;
}

int func_515()//Position - 0x21C50
{
	if (!__LIB_0__::func_937(&uLocal_118, 2500, 0))
	{
		return 1;
	}
	return 0;
}

var func_516(var uParam0)//Position - 0x21C6B
{
	return Local_378.f_22[0 /*24*/];
}

char* func_519(var uParam0)//Position - 0x21C8D
{
	return "TR_BLIP_RE_SL" /* GXT: Slasher */;
}

int func_520(var uParam0)//Position - 0x21C99
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]) && func_521() == bLocal_337)
	{
		return 1;
	}
	return 0;
}

bool func_521()//Position - 0x21CC2
{
	if (Local_378.f_124.f_3 != -1)
	{
		return Local_378.f_124.f_3;
	}
	return __LIB_0__::func_162();
}

char* func_522()//Position - 0x21CE3
{
	return "H21_SLASHER_STOP_MUSIC";
}

char* func_524(int iParam0)//Position - 0x21CFB
{
	switch (iParam0)
	{
		case 0:
			return "H21_SLASHER_START_MUSIC";
		default:
	}
	return "";
}

int func_525(int iParam0)//Position - 0x21D1B
{
	switch (iParam0)
	{
		case -1:
			return 0;
		default:
	}
	return -1;
}

int func_526(var uParam0, int iParam1)//Position - 0x21D35
{
	switch (func_528())
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "FE_Spawn", "DLC_Tuner_Halloween_Slasher_Soundset", true);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Ingame_Spawn", func_527(), "DLC_Tuner_Halloween_Slasher_Soundset", false, 0);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Character_Loop", func_527(), "DLC_Tuner_Halloween_Slasher_Soundset", false, 0);
					break;
				case 4:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "Despawn_FE", "DLC_Tuner_Halloween_Slasher_Soundset", true);
					break;
				case 5:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Despawn_Ingame", func_527(), "DLC_Tuner_Halloween_Slasher_Soundset", false, 0);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "FE_Spawn", "DLC_Tuner_Halloween_Driver_Soundset", true);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Ingame_Spawn", func_527(), "DLC_Tuner_Halloween_Driver_Soundset", false, 0);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Character_Loop", func_527(), "DLC_Tuner_Halloween_Driver_Soundset", false, 0);
					break;
				case 4:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "Despawn_FE", "DLC_Tuner_Halloween_Driver_Soundset", true);
					break;
				case 5:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Despawn_Ingame", func_527(), "DLC_Tuner_Halloween_Driver_Soundset", false, 0);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "FE_Spawn", "DLC_Tuner_Halloween_Psycho_Soundset", true);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Ingame_Spawn", func_527(), "DLC_Tuner_Halloween_Psycho_Soundset", false, 0);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Character_Loop", func_527(), "DLC_Tuner_Halloween_Psycho_Soundset", false, 0);
					break;
				case 4:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "Despawn_FE", "DLC_Tuner_Halloween_Psycho_Soundset", true);
					break;
				case 5:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Despawn_Ingame", func_527(), "DLC_Tuner_Halloween_Psycho_Soundset", false, 0);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "FE_Spawn", "DLC_Tuner_Halloween_Clown_Soundset", true);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Ingame_Spawn", func_527(), "DLC_Tuner_Halloween_Clown_Soundset", false, 0);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Character_Loop", func_527(), "DLC_Tuner_Halloween_Clown_Soundset", false, 0);
					break;
				case 3:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Honk_Loop", func_527(), "DLC_Tuner_Halloween_Clown_Soundset", false, 0);
					break;
				case 4:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "Despawn_FE", "DLC_Tuner_Halloween_Clown_Soundset", true);
					break;
				case 5:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Despawn_Ingame", func_527(), "DLC_Tuner_Halloween_Clown_Soundset", false, 0);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "FE_Spawn", "Freemode_Mirror_Slash_sounds", true);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Ingame_Spawn", func_527(), "Freemode_Mirror_Slash_sounds", false, 0);
					break;
				case 2:
					break;
				case 4:
					AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "FE_Despawn", "Freemode_Mirror_Slash_sounds", true);
					break;
				case 5:
					AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, "Ingame_Despawn", func_527(), "Freemode_Mirror_Slash_sounds", false, 0);
					break;
			}
			break;
	}
	return 1;
}

int func_527()//Position - 0x2205C
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_378.f_22[0 /*24*/]);
	}
	return iVar0;
}

int func_528()//Position - 0x22083
{
	return Local_378.f_124.f_10;
}

int func_529(int iParam0)//Position - 0x22092
{
	switch (func_528())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/])));
				case 1:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 2:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 4:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && func_73(0, 26));
				case 5:
					return func_73(0, 26);
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/])));
				case 1:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 2:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 4:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && func_73(0, 26));
				case 5:
					return func_73(0, 26);
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/])));
				case 1:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 2:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 4:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && func_73(0, 26));
				case 5:
					return func_73(0, 26);
				default:
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/])));
				case 1:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 2:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 3:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 4:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && func_73(0, 26));
				case 5:
					return func_73(0, 26);
				default:
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/])));
				case 1:
					return (func_129(0) > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[0 /*24*/]));
				case 2:
					return 0;
				case 4:
					return (Local_378.f_124.f_3 == PLAYER::NETWORK_PLAYER_ID_TO_INT() && func_73(0, 26));
				case 5:
					return func_73(0, 26);
				default:
			}
			break;
	}
	return 0;
}

void func_530(int iParam0, var uParam1)//Position - 0x22437
{
	if (Local_378.f_124.f_9 == 5)
	{
		if (Local_385[iParam0 /*38*/].f_35 != 5)
		{
			func_531(Local_385[iParam0 /*38*/].f_35);
		}
	}
}

void func_531(var uParam0)//Position - 0x22464
{
	if (Local_378.f_124.f_9 == 5)
	{
		Local_378.f_124.f_9 = uParam0;
	}
}

void func_532()//Position - 0x22480
{
	struct<3> Var0;
	if (__LIB_0__::func_86(Local_113))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(func_539(), func_539(), 50f, &Var0))
		{
			if (__LIB_20__::func_318(Var0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				Local_113 = { Var0 };
			}
		}
	}
	else if (fLocal_114 == -1f)
	{
		fLocal_114 = __LIB_0__::func_932(Local_113, Local_342);
	}
	else
	{
		bLocal_115 = true;
	}
	func_535();
	if (bLocal_337 == func_521())
	{
		if (!__LIB_21__::func_291(bLocal_337))
		{
			__LIB_33__::func_901(1);
		}
		if (__LIB_1__::func_693(bLocal_337, 1, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_339, 417, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_339, 119, true);
		}
	}
}

void func_535()//Position - 0x225AB
{
	if (bLocal_337 == func_521())
	{
		if (iLocal_344 == 0)
		{
			Local_112.f_4 = 1;
		}
	}
	else if (__LIB_1__::func_693(func_521(), 1, 1) && !PED::IS_PED_IN_ANY_VEHICLE(func_537(), false))
	{
		Local_112.f_4 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_527()))
	{
		if (__LIB_0__::func_121(func_527()))
		{
			Local_112.f_7 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(func_527()));
		}
		else
		{
			Local_112.f_7 = 0f;
			if (Local_385[iLocal_340 /*38*/].f_35 == 5)
			{
				Local_385[iLocal_340 /*38*/].f_35 = 3;
			}
		}
	}
	else
	{
		Local_112.f_7 = 0f;
	}
}

int func_537()//Position - 0x2265D
{
	int iVar0;
	if (func_521() != __LIB_0__::func_162())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(func_521());
	}
	return iVar0;
}

Vector3 func_539()//Position - 0x22696
{
	if (ENTITY::DOES_ENTITY_EXIST(func_537()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_537(), false);
	}
	return __LIB_3__::func_554();
}

int func_541(int iParam0)//Position - 0x226C4
{
	if (!func_543() || func_129(iParam0) == 6)
	{
		if (__LIB_0__::func_937(&uLocal_116, func_542(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_542()//Position - 0x226F5
{
	if (func_528() == 4)
	{
		return 5500;
	}
	return 3500;
}

int func_543()//Position - 0x2270E
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (func_570(0) || func_569(iLocal_341, 0))
	{
		return 0;
	}
	if (Local_378.f_124.f_3 != -1)
	{
		bVar0 = func_521();
		iVar1 = func_537();
		bVar2 = true;
		iVar3 = 5;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (!__LIB_1__::func_693(bVar0, 1, 1))
		{
			iVar3 = 0;
			bVar2 = false;
		}
		if (__LIB_2__::func_826(iVar1, 0))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (__LIB_10__::func_774(bVar0, 1, 1))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (__LIB_10__::func_225(bVar0))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (__LIB_21__::func_293(iVar1))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (__LIB_8__::func_355(Local_378.f_124.f_5, 300000, 0))
		{
			iVar3 = 2;
			bVar2 = false;
		}
		if (func_561(bVar0))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (iVar1 == iLocal_339 && func_547())
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (__LIB_21__::func_292(bVar0))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (__LIB_1__::func_708(PLAYER::PLAYER_ID()))
		{
			iVar3 = 1;
			bVar2 = false;
		}
		if (!bVar2 && !func_569(iLocal_341, 0))
		{
			Local_385[iLocal_340 /*38*/].f_35 = iVar3;
			func_544(0);
		}
	}
	return 1;
}

void func_544(int iParam0)//Position - 0x22836
{
	if (__LIB_1__::func_458(&(Local_385[iLocal_340 /*38*/].f_33), iParam0))
	{
	}
}

bool func_547()//Position - 0x2289C
{
	return func_548() != -1;
}

int func_548()//Position - 0x228AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		iVar1 = __LIB_11__::func_840(iVar0);
		if (iVar1 != -1)
		{
			return iVar1;
		}
		if (Global_100493.f_373 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				__LIB_10__::func_346(iVar3);
				if (Global_1951109[iVar2] == Global_100493.f_373)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

int func_561(bool bParam0)//Position - 0x2343E
{
	if (bParam0 > -1)
	{
		if (Global_2689235[bParam0 /*453*/].f_244 > -1)
		{
			return 1;
		}
		if (BitTest(Global_2689235[bParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_569(int iParam0, int iParam1)//Position - 0x236C3
{
	return __LIB_0__::func_316(&(Local_385[iParam0 /*38*/].f_33), iParam1);
}

bool func_570(int iParam0)//Position - 0x236DA
{
	return __LIB_0__::func_316(&(Local_378.f_122), iParam0);
}

int func_572(var uParam0)//Position - 0x236FA
{
	return func_537();
}

int func_573(var uParam0)//Position - 0x23706
{
	switch (func_528())
	{
		case 3:
		case 4:
			return Local_378.f_124.f_4;
		default:
	}
	return 0;
}

float func_574(var uParam0)//Position - 0x2372E
{
	switch (func_528())
	{
		case 3:
			return 5f;
		case 4:
			return 45f;
		default:
	}
	return 0f;
}

int func_575(var uParam0)//Position - 0x23758
{
	switch (func_528())
	{
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

void func_576(int iParam0)//Position - 0x2377A
{
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]), true, true);
	}
}

void func_578(int iParam0, int iParam1, bool bParam2)//Position - 0x237DA
{
	float fVar0;
	float fVar1;
	switch (func_528())
	{
		case 0:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				PED::SET_PED_RESET_FLAG(iParam1, 440, true);
				PED::SET_PED_RESET_FLAG(iParam1, 187, true);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 1f);
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					if (!bParam2 && !FIRE::IS_ENTITY_ON_FIRE(iParam1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
						{
							FIRE::START_ENTITY_FIRE(iParam1);
						}
					}
					break;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				PED::SET_PED_RESET_FLAG(iParam1, 440, true);
				PED::SET_PED_RESET_FLAG(iParam1, 187, true);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 2f);
			}
			break;
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				PED::SET_PED_RESET_FLAG(iParam1, 440, true);
				PED::SET_PED_RESET_FLAG(iParam1, 187, true);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 2f);
			}
			break;
		case 3:
			if (func_584(iParam0) == 6)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
				{
					PED::SET_PED_RESET_FLAG(iParam1, 440, true);
					PED::SET_PED_RESET_FLAG(iParam1, 187, true);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 2f);
				}
			}
			break;
		case 4:
			func_581(iParam1);
			if (func_584(iParam0) == 6)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
				{
					PED::SET_PED_RESET_FLAG(iParam1, 440, true);
					PED::SET_PED_RESET_FLAG(iParam1, 187, true);
					if (func_580(0) || __LIB_0__::func_937(&(Local_378.f_124.f_7), 60000, 0))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 2f);
					}
					else if (PED::GET_PED_CURRENT_MOVE_BLEND_RATIO(func_537(), &fVar0, &fVar1))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, __LIB_25__::func_515(fVar0, fVar1));
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, __LIB_25__::func_515(fVar0, fVar1));
					}
				}
			}
			break;
	}
}

bool func_580(int iParam0)//Position - 0x239A2
{
	return __LIB_0__::func_316(&uLocal_361, iParam0);
}

void func_581(int iParam0)//Position - 0x239B3
{
	int iVar0;
	if (!func_580(0))
	{
		iVar0 = func_537();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (__LIB_0__::func_76(iParam0, iVar0, 0) <= 5f)
			{
				func_582(0);
			}
		}
	}
}

void func_582(int iParam0)//Position - 0x239E6
{
	if (__LIB_1__::func_458(&uLocal_361, iParam0))
	{
	}
}

int func_584(int iParam0)//Position - 0x23A58
{
	if (func_47(iParam0) != -1)
	{
		return Local_228.f_23[func_48(iParam0) /*67*/].f_1[func_47(iParam0) /*13*/];
	}
	return -1;
}

float func_585(var uParam0)//Position - 0x23A85
{
	if (bLocal_115)
	{
		return fLocal_114;
	}
	return -1f;
}

Vector3 func_586(var uParam0)//Position - 0x23A98
{
	if (bLocal_115)
	{
		return Local_113;
	}
	return __LIB_3__::func_554();
}

void func_587(int iParam0, int iParam1, var uParam2)//Position - 0x23AB0
{
	int iVar0;
	if (iParam0 != 0 || uParam2)
	{
		return;
	}
	AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, true);
	AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, false);
	PED::SET_PED_CAN_RAGDOLL(iParam1, false);
	PED::SET_DISABLE_HIGH_FALL_DEATH(iParam1, true);
	PED::SET_COMBAT_FLOAT(iParam1, 7, 1f);
	PED::SET_COMBAT_FLOAT(iParam1, 29, 2f);
	PED::SET_PED_COMBAT_ABILITY(iParam1, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 27, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 31, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 55, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 25, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 109, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 286, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 311, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 410, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 404, false);
	PED::SET_PED_CONFIG_FLAG(iParam1, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 118, false);
	PED::SET_PED_CONFIG_FLAG(iParam1, 430, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 458, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, false, false, false);
	switch (func_528())
	{
		case 0:
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 8000);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 8000, 0);
			iVar0 = joaat("WEAPON_MACHETE");
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 5, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 2, 0, 0);
			AUDIO::USE_FOOTSTEP_SCRIPT_SWEETENERS(iParam1, true, joaat("slasher"));
			break;
		case 1:
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 1000);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
			iVar0 = joaat("WEAPON_WRENCH");
			FIRE::START_ENTITY_FIRE(iParam1);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 0, 0, 0);
			break;
		case 2:
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 1000);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
			iVar0 = joaat("WEAPON_BAT");
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 5, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 3, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam1, 7, 0, 0, false);
			break;
		case 3:
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 1000);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
			iVar0 = joaat("WEAPON_SWITCHBLADE");
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 5, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 1, 0, 0);
			AUDIO::USE_FOOTSTEP_SCRIPT_SWEETENERS(iParam1, true, joaat("clown"));
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(func_537()))
			{
				PED::CLONE_PED_TO_TARGET(func_537(), iParam1);
			}
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 1000);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
			iVar0 = func_588(func_521(), 1);
			if (iVar0 == joaat("WEAPON_UNARMED") || !WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_KNIFE");
			}
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 2, 0.495f, 0.225f, 345.478f, 1f, 1, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 2, 0.58f, 0.367f, 326.788f, 1f, 1, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0.412f, 0.34f, 337.244f, 1f, 1, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0.555f, 0.205f, 346.031f, 1f, 1, 0f, "ShotgunLargeMonolithic");
			PED::SET_HEAD_BLEND_EYE_COLOR(iParam1, 26);
			break;
	}
	PED::FINALIZE_HEAD_BLEND(iParam1);
	WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 1, true, true);
	__LIB_0__::func_795(&(Local_378.f_124.f_5), 0, 0);
	__LIB_0__::func_795(&(Local_378.f_124.f_7), 0, 0);
}

int func_588(bool bParam0, bool bParam1)//Position - 0x23E88
{
	if (bParam0 != -1)
	{
		if (bParam1)
		{
			return Global_1911933[bParam0 /*260*/].f_258;
		}
		return Global_1911933[bParam0 /*260*/].f_257;
	}
	return 0;
}

void func_590(int iParam0)//Position - 0x23EC3
{
	switch (iParam0)
	{
		case 0:
			func_598(iParam0, 0, 1);
			func_596(iParam0, 0, 1, 147749/*func_597*/);
			func_596(iParam0, 0, 2, 147471/*func_594*/);
			func_598(iParam0, 1, 45);
			func_591(iParam0, 1, 147463/*func_593*/, 147285/*func_592*/);
			func_596(iParam0, 1, 2, 147471/*func_594*/);
			func_598(iParam0, 2, 6);
			break;
	}
}

void func_591(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23F27
{
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_10 = iParam2;
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_11 = iParam3;
}

void func_592(int iParam0, int iParam1)//Position - 0x23F55
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && __LIB_0__::func_121(iParam1)) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_22[iParam0 /*24*/]))
	{
		iVar0 = func_537();
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_121(iVar0)) && !PED::IS_PED_HEADTRACKING_PED(iParam1, iVar0))
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam1, iVar0, -1, 2048, 3);
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 0)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			Var2 = { func_539() };
			fVar3 = __LIB_0__::func_932(Var1, Var2);
			TASK::TASK_ACHIEVE_HEADING(iParam1, fVar3, 0);
		}
	}
}

int func_594(int iParam0, var uParam1)//Position - 0x2400F
{
	switch (func_528())
	{
		case 3:
		case 4:
			if (func_595(iParam0, uParam1) || __LIB_0__::func_937(&(Local_378.f_124.f_7), 60000, 0))
			{
				return 1;
			}
			return 0;
		default:
	}
	return 1;
}

int func_595(int iParam0, var uParam1)//Position - 0x24056
{
	if (((((func_73(iParam0, 1) || func_73(iParam0, 10)) || func_73(iParam0, 11)) || func_73(iParam0, 12)) || func_73(iParam0, 14)) || func_73(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_596(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x240B2
{
	int iVar0;
	var uVar1;
	iVar0 = Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

int func_597(var uParam0, var uParam1)//Position - 0x24125
{
	switch (func_528())
	{
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

void func_598(int iParam0, int iParam1, int iParam2)//Position - 0x24147
{
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/] = iParam2;
	Local_228.f_23[iParam0 /*67*/]++;
}

void func_599()//Position - 0x24174
{
	Local_205.f_38 = 1;
	Local_205.f_38.f_1[0 /*21*/].f_2 = joaat("G_M_M_Slasher_01");
	func_600(0, 18);
	func_600(0, 11);
	func_72(0, 15);
	func_72(0, 16);
	Local_205.f_134 = 1;
	if (func_528() == 4)
	{
		Local_205.f_38.f_1[0 /*21*/].f_2 = ENTITY::GET_ENTITY_MODEL(func_537());
	}
}

void func_600(int iParam0, int iParam1)//Position - 0x241CD
{
	if (__LIB_1__::func_458(&(Local_205.f_38.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_601()//Position - 0x241E8
{
	func_603(0, 43, 148096/*func_604*/);
	func_602(0, 1, 1);
	func_603(1, 48, 148096/*func_604*/);
}

void func_602(int iParam0, int iParam1, int iParam2)//Position - 0x2420D
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = Local_227[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_227[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_227[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_227[iParam0 /*21*/].f_19++;
}

void func_603(int iParam0, int iParam1, int iParam2)//Position - 0x2425C
{
	Local_227[iParam0 /*21*/] = iParam1;
	Local_227[iParam0 /*21*/].f_20 = iParam2;
	iLocal_349++;
}

void func_605()//Position - 0x24288
{
	func_608(0, 43);
	func_606(0, 1, 148211/*func_607*/);
	func_608(1, 48);
}

void func_606(int iParam0, int iParam1, int iParam2)//Position - 0x242A8
{
	int iVar0;
	var uVar1;
	iVar0 = Local_226[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_226[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_226[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_226[iParam0 /*20*/].f_19++;
}

int func_607()//Position - 0x242F3
{
	if (func_73(0, 26))
	{
		return 1;
	}
	return 0;
}

void func_608(int iParam0, int iParam1)//Position - 0x2430A
{
	Local_226[iParam0 /*20*/] = iParam1;
	iLocal_348++;
}

int func_610(var uParam0, var uParam1)//Position - 0x2432B
{
	int iVar0;
	Local_378.f_124 = uParam0;
	Local_378.f_124.f_1 = uParam1;
	if (Local_378.f_124.f_3 == -1)
	{
		Local_378.f_124.f_3 = bLocal_337;
	}
	if (Local_378.f_124.f_1 == 7 && Local_378.f_124.f_4 == -1)
	{
		Local_378.f_124.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 5000);
	}
	Local_378.f_124.f_10 = func_611();
	if (Global_262145.f_31153 /* Tunable: 400101144 */ != -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
		if (iVar0 <= Global_262145.f_31153 /* Tunable: 400101144 */)
		{
			Local_378.f_124.f_10 = 4;
		}
	}
	return 1;
}

int func_611()//Position - 0x243B7
{
	switch (func_612())
	{
		case 0:
			return 0;
		case 1:
		case 2:
			return 1;
		case 3:
		case 4:
		case 5:
		case 6:
			return 2;
		case 7:
			return 3;
		default:
	}
	return -1;
}

int func_612()//Position - 0x24409
{
	return Local_378.f_124.f_1;
}

bool func_615(int iParam0)//Position - 0x24460
{
	return __LIB_0__::func_316(&uLocal_350, iParam0);
}

void func_616()//Position - 0x24471
{
	if (Local_222.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_222.f_3.f_2.f_1);
	}
	if (Local_222.f_102.f_6 != 0)
	{
		Call_Loc(Local_222.f_102.f_6);
		if (StackVal)
		{
			return;
		}
	}
	if (func_929())
	{
		return;
	}
	if (!func_928())
	{
		return;
	}
	if (func_615(46))
	{
		return;
	}
	if (!__LIB_0__::func_109())
	{
		return;
	}
	func_731();
	func_724();
	func_719();
	func_684();
	func_620();
	func_617();
}

void func_617()//Position - 0x244ED
{
	if (!func_615(30))
	{
		if (Local_222.f_91 != 0)
		{
			Call_Loc(Local_222.f_91);
			__LIB_19__::func_533(StackVal);
		}
		func_505(30);
	}
}

void func_620()//Position - 0x24564
{
	int iVar0;
	int iVar1;
	if (func_420(iLocal_341, 0))
	{
		return;
	}
	if (func_615(11))
	{
		if (Local_222.f_54 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_222.f_54);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_222.f_54.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_222.f_54.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	if (Local_222.f_54.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Stack.Push(0);
		Call_Loc(Local_222.f_54.f_5);
		iVar0 = SYSTEM::ROUND((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Stack.Push(1);
		Call_Loc(Local_222.f_54.f_5);
		iVar1 = SYSTEM::ROUND((StackVal * StackVal));
	}
	if (iVar0 > 0)
	{
		__LIB_20__::func_51(iVar0);
		if (Local_205.f_108)
		{
			Global_2727753 = iVar0;
			__LIB_0__::func_627(&Global_2725869, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_205.f_108.f_1)
		{
			__LIB_1__::func_925();
		}
		Stack.Push(0);
		Stack.Push(iLocal_339);
		Stack.Push("");
		Stack.Push(joaat("XPTYPE_COMPLETE"));
		Call_Loc(Local_222.f_54.f_9);
		__LIB_20__::func_435(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, 1, -1, 0, 0, 0);
	}
	Local_316.f_5 = (Local_316.f_5 + iVar0);
	Local_316.f_6 = (Local_316.f_6 + iVar1);
	func_621(0);
}

void func_621(int iParam0)//Position - 0x24659
{
	if (__LIB_1__::func_458(&(Local_385[iLocal_340 /*38*/].f_1), iParam0))
	{
	}
}

void func_684()//Position - 0x2732B
{
	if (!func_615(8))
	{
		if (func_717())
		{
			if (func_687(0, 1, 1) && __LIB_0__::func_109())
			{
				__LIB_0__::func_467();
				func_505(8);
			}
		}
		else
		{
			func_505(8);
		}
	}
}

bool func_687(bool bParam0, int iParam1, bool bParam2)//Position - 0x2737B
{
	return (!__LIB_20__::func_419() && func_688(iParam1, bParam0, bParam2));
}

int func_688(var uParam0, bool bParam1, bool bParam2)//Position - 0x27397
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
	if (__LIB_12__::func_487(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_965(PLAYER::PLAYER_ID()) != __LIB_0__::func_162() && __LIB_1__::func_965(PLAYER::PLAYER_ID()) == __LIB_2__::func_39(PLAYER::PLAYER_ID()))
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
	if (__LIB_10__::func_774(PLAYER::PLAYER_ID(), 1, 1))
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
	if (__LIB_3__::func_462(PLAYER::PLAYER_ID()))
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
	if (__LIB_0__::func_927(PLAYER::PLAYER_ID()))
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
	return 1;
}

int func_717()//Position - 0x2794B
{
	if (func_487() == 2 && __LIB_1__::func_726(Local_347.f_0) != 3)
	{
		return 0;
	}
	if (func_615(11))
	{
		if (func_66(24) || func_66(23))
		{
			return 0;
		}
	}
	return 1;
}

void func_719()//Position - 0x27BD3
{
	int iVar0;
	if (func_420(iLocal_341, 25))
	{
		return;
	}
	if (__LIB_12__::func_311())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_721())
	{
		if (Local_378.f_160.f_1[iVar0 /*5*/].f_1 != -1)
		{
			__LIB_19__::func_276(Local_378.f_160.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_621(25);
}

int func_721()//Position - 0x27C8D
{
	int iVar0;
	iVar0 = (iVar0 + func_37());
	return iVar0;
}

void func_724()//Position - 0x27CF1
{
	char* sVar0;
	if (func_615(11))
	{
		sVar0 = func_729();
	}
	else
	{
		sVar0 = func_727();
	}
	if (iLocal_330 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
		}
	}
	func_725(0);
}

void func_725(bool bParam0)//Position - 0x27D34
{
	if (bParam0)
	{
		if (!func_615(34))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			func_505(34);
		}
	}
	else if (func_615(34))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		func_726(34);
	}
}

void func_726(int iParam0)//Position - 0x27D87
{
	if (__LIB_16__::func_755(&uLocal_350, iParam0))
	{
	}
}

var func_727()//Position - 0x27D9B
{
	if (Local_222.f_94.f_3.f_3 != 0)
	{
		Call_Loc(Local_222.f_94.f_3.f_3);
		return StackVal;
	}
	return __LIB_3__::func_860();
}

var func_729()//Position - 0x27DCD
{
	if (Local_222.f_94.f_3.f_2 != 0)
	{
		Call_Loc(Local_222.f_94.f_3.f_2);
		return StackVal;
	}
	return __LIB_3__::func_860();
}

void func_731()//Position - 0x27DFF
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_205.f_19)
	{
		func_927(iVar4);
		bVar0 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = NETWORK::NET_TO_ENT(Local_378.f_2[iVar4]);
			bVar1 = ENTITY::IS_ENTITY_DEAD(iVar3, false);
			if (Local_222.f_114.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_222.f_114.f_34);
			}
			if (!bVar1)
			{
				func_922(iVar4, iVar3);
				func_921(iVar4, iVar3);
				func_913(iVar4, iVar3, &bVar2, &iVar5);
				func_908(iVar4, iVar3);
				func_895(iVar4, iVar3, bVar2);
				func_890(iVar4, iVar3);
			}
			func_888(iVar4);
			func_875(iVar4, Local_320.f_11);
			func_792(iVar4);
		}
		else
		{
			Local_299[iVar4 /*7*/].f_1 = 99999f;
			Local_299[iVar4 /*7*/].f_2 = 99999f;
			Local_299[iVar4 /*7*/].f_3 = 99999f;
		}
		func_783(iVar4, bVar0);
		iVar4++;
	}
	if (bVar2)
	{
		__LIB_19__::func_455(1);
	}
	else
	{
		func_775(0, 0);
		__LIB_19__::func_455(0);
	}
	func_763();
	func_733();
	iLocal_367++;
	if (iLocal_367 >= func_37())
	{
		iLocal_367 = 0;
		func_732();
	}
}

void func_732()//Position - 0x27F2C
{
	if (__LIB_0__::func_937(&(Local_299.f_12), 5000, 0) && Local_299.f_14)
	{
		__LIB_0__::func_794(&(Local_299.f_12));
		Local_299.f_14 = 0;
	}
}

void func_733()//Position - 0x27F5D
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iLocal_367]))
	{
		iVar2 = NETWORK::NET_TO_ENT(Local_378.f_2[iLocal_367]);
		bVar1 = ENTITY::IS_ENTITY_DEAD(iVar2, false);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, false) };
		if (!bVar1)
		{
			func_753(iLocal_367, Var0);
			if (__LIB_0__::func_937(&(Local_299.f_12), 5000, 0))
			{
				if (iLocal_367 == 0)
				{
					Local_299.f_14 = 1;
				}
				func_734(iLocal_367, iVar2, Var0);
			}
		}
	}
}

void func_734(int iParam0, int iParam1, struct<3> Param2)//Position - 0x27FD5
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = __LIB_3__::func_309(Param2, 6, -1, 0, 1, -1);
	Var1 = { __LIB_0__::func_785(iVar0, 0) };
	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, __LIB_3__::func_285(iVar0));
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar2 != 0 && iVar2 == iVar3)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			return;
		}
		if (!__LIB_1__::func_561(Local_378.f_2[iParam0]))
		{
			return;
		}
		if (__LIB_0__::func_388(iVar0, &Var1, &fVar4))
		{
			Var1 = { Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) };
			ENTITY::SET_ENTITY_COORDS(iParam1, Var1, true, false, false, true);
			if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			}
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar4);
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
		}
	}
}

void func_753(int iParam0, struct<3> Param1)//Position - 0x2A697
{
	Local_299[iParam0 /*7*/].f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_342, func_762(iParam0));
	Local_299[iParam0 /*7*/].f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, func_754(), func_762(iParam0));
	Local_299[iParam0 /*7*/].f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_205.f_19.f_5[iParam0 /*13*/].f_3, func_762(iParam0));
}

Vector3 func_754()//Position - 0x2A6FB
{
	if (Local_222.f_466.f_4.f_2 != 0)
	{
		Call_Loc(Local_222.f_466.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_755(func_761());
}

Vector3 func_755(int iParam0)//Position - 0x2A727
{
	struct<3> Var0;
	struct<3> Var1;
	if (bLocal_334 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_344))
		{
			Var0 = { __LIB_19__::func_454(iParam0) };
			if (!__LIB_0__::func_86(Var0))
			{
				return Var0;
			}
		}
		Var1 = { __LIB_19__::func_387(iParam0) };
		if (!__LIB_0__::func_86(Var1))
		{
			return Var1;
		}
	}
	return __LIB_19__::func_256(iParam0);
}

int func_761()//Position - 0x2AAAB
{
	if (Local_222.f_466.f_4.f_1 != 0)
	{
		Call_Loc(Local_222.f_466.f_4.f_1);
		return StackVal;
	}
	if (iLocal_340 != -1)
	{
		return Local_320.f_1[Local_385[iLocal_340 /*38*/].f_14 /*4*/];
	}
	return 0;
}

int func_762(int iParam0)//Position - 0x2AAEB
{
	if (Local_222.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_29);
	}
	return 1;
}

void func_763()//Position - 0x2AB0A
{
	if (func_772(bLocal_337, 1) && func_771())
	{
		if (func_767())
		{
			if (!func_615(35))
			{
				__LIB_0__::func_151(__LIB_19__::func_388(), -1);
				func_505(35);
			}
		}
	}
	else if (func_615(35))
	{
		if (__LIB_0__::func_1(__LIB_19__::func_388()))
		{
			HUD::CLEAR_HELP(true);
		}
		func_726(35);
	}
}

int func_767()//Position - 0x2AB9E
{
	if (((((((((!__LIB_0__::func_193() && !__LIB_0__::func_877()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && bLocal_334) && !__LIB_1__::func_515()) && func_615(9)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	return 0;
}

int func_771()//Position - 0x2AC43
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar0]))
		{
			if (iLocal_368[iVar0] != iLocal_341)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_378.f_2[iVar0])))
				{
					if (Local_299[iVar0 /*7*/].f_1 < 2f)
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

int func_772(bool bParam0, bool bParam1)//Position - 0x2ACA5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_773(bParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_773(int iParam0, int iParam1, bool bParam2)//Position - 0x2ACD4
{
	if (Local_299[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_436(iParam1, 4) || func_774(iParam1, iLocal_341, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_774(int iParam0, int iParam1, int iParam2)//Position - 0x2AD12
{
	return __LIB_0__::func_316(&(Local_385[iParam1 /*38*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_775(bool bParam0, int iParam1)//Position - 0x2AD2D
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (bParam0)
	{
		if (func_436(iParam1, 32))
		{
			__LIB_19__::func_336(1);
		}
		__LIB_19__::func_389(Local_205.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		__LIB_19__::func_336(0);
		__LIB_19__::func_389(0);
	}
}

void func_783(int iParam0, bool bParam1)//Position - 0x2AE63
{
	if (!func_791(iParam0))
	{
		return;
	}
	if (bParam1 && __LIB_1__::func_561(Local_378.f_2[iParam0]))
	{
		__LIB_6__::func_843(&(Local_378.f_2[iParam0]));
	}
	func_785(iParam0);
	func_784(iParam0);
}

void func_784(int iParam0)//Position - 0x2AEA9
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2.f_15[iParam0]) && __LIB_1__::func_561(Local_378.f_2.f_15[iParam0]))
	{
		__LIB_6__::func_843(&(Local_378.f_2.f_15[iParam0]));
		__LIB_1__::func_518(&(Local_378.f_2.f_15[iParam0]));
	}
}

int func_785(int iParam0)//Position - 0x2AEF5
{
	int iVar0;
	if (!func_436(iParam0, 4) || !func_790(iParam0))
	{
		return 1;
	}
	if (!func_787(iParam0))
	{
		return 0;
	}
	iVar0 = func_786(iParam0);
	if (!func_66(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_786(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_786(iParam0)), true, true);
	}
	if (func_66(11))
	{
		if (!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_786(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_786(iParam0)), true, true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_786(iParam0))))
		{
			__LIB_6__::func_843(&iVar0);
		}
	}
	else if (func_66(12))
	{
		__LIB_1__::func_518(&iVar0);
	}
	else if (!func_66(32))
	{
		__LIB_6__::func_843(&iVar0);
	}
	return 0;
}

int func_786(int iParam0)//Position - 0x2AFC5
{
	var uVar0;
	int iVar1;
	if (!func_444(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_425(iParam0);
	switch (func_426())
	{
		case 2:
			return Local_378.f_47[iVar1 /*8*/];
		case 1:
			return Local_378.f_22[iVar1 /*24*/];
		default:
	}
	return uVar0;
}

int func_787(int iParam0)//Position - 0x2B013
{
	if (!func_66(12))
	{
		switch (func_426())
		{
			case 2:
				if (__LIB_15__::func_400(func_789(iParam0), 0, 1))
				{
					return 0;
				}
				break;
		}
		if (!__LIB_1__::func_561(func_786(iParam0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_789(int iParam0)//Position - 0x2B117
{
	var uVar0;
	int iVar1;
	iVar1 = func_786(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		return NETWORK::NET_TO_VEH(iVar1);
	}
	return uVar0;
}

int func_790(int iParam0)//Position - 0x2B13B
{
	if (!func_444(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_786(iParam0)))
	{
		return 0;
	}
	if ((func_436(iParam0, 35) || func_436(iParam0, 36)) || func_436(iParam0, 37))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_786(iParam0)), false))
	{
		return 0;
	}
	return 1;
}

int func_791(int iParam0)//Position - 0x2B1A5
{
	if ((((func_436(iParam0, 19) || (func_436(iParam0, 3) && __LIB_0__::func_937(&(Local_378.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_436(iParam0, 4)) || func_436(iParam0, 25)) || func_436(iParam0, 33))
	{
		return (func_436(iParam0, 4) || func_436(iParam0, 3));
	}
	return 0;
}

void func_792(int iParam0)//Position - 0x2B21E
{
	if (func_869(iParam0))
	{
		func_794(iParam0);
	}
	else
	{
		func_793(iParam0);
	}
}

void func_793(int iParam0)//Position - 0x2B23E
{
	if (HUD::DOES_BLIP_EXIST(Local_299[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_299[iParam0 /*7*/]));
	}
}

void func_794(int iParam0)//Position - 0x2B25F
{
	if (!HUD::DOES_BLIP_EXIST(Local_299[iParam0 /*7*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iParam0]))
		{
			Local_299[iParam0 /*7*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]));
			if (__LIB_19__::func_392(func_867(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_299[iParam0 /*7*/], func_867(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_299[iParam0 /*7*/], func_864(iParam0));
			HUD::SET_BLIP_COLOUR(Local_299[iParam0 /*7*/], func_856(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_299[iParam0 /*7*/], func_854(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_299[iParam0 /*7*/], 12);
			if (func_853(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_299[iParam0 /*7*/], true);
			}
			if (!func_774(iParam0, iLocal_341, 46))
			{
				__LIB_19__::func_390(&(Local_299[iParam0 /*7*/]), 1);
				func_851(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_299[iParam0 /*7*/], func_856(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_299[iParam0 /*7*/]) != func_867(iParam0) && __LIB_19__::func_392(func_867(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_299[iParam0 /*7*/], func_867(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_299[iParam0 /*7*/], func_854(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_299[iParam0 /*7*/]) != func_856(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_299[iParam0 /*7*/], func_856(iParam0, 0));
		}
		if (func_481(iParam0, 17))
		{
			__LIB_20__::func_328(Local_299[iParam0 /*7*/], 100, 5000f, 1137180672);
		}
		if (func_425(iParam0) > -1 && func_426() == 2)
		{
			if (func_795(iParam0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[func_425(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_378.f_47[func_425(iParam0) /*8*/]), false))
				{
					HUD::SET_BLIP_ROTATION(Local_299[iParam0 /*7*/], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_378.f_47[func_425(iParam0) /*8*/]))));
				}
			}
		}
	}
}

int func_795(int iParam0)//Position - 0x2B44C
{
	if (Local_222.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_18);
		return StackVal;
	}
	return 0;
}

void func_851(int iParam0, int iParam1)//Position - 0x2C88F
{
	if (__LIB_1__::func_458(&(Local_385[iLocal_340 /*38*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_853(int iParam0)//Position - 0x2C8DA
{
	if (Local_222.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_14);
		return StackVal;
	}
	return Local_205.f_19.f_1.f_3;
}

var func_854(int iParam0)//Position - 0x2C902
{
	if (Local_222.f_114.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_13);
		return StackVal;
	}
	return __LIB_19__::func_391();
}

int func_856(int iParam0, bool bParam1)//Position - 0x2C932
{
	if (Local_222.f_114.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_5);
		return __LIB_1__::func_389(StackVal);
	}
	if (!bParam1)
	{
		if (func_774(iParam0, iLocal_341, 12))
		{
			return 1;
		}
	}
	else if (func_861() == 23 && func_774(iParam0, iLocal_341, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_299[iParam0 /*7*/].f_4 != __LIB_0__::func_162())
	{
		return __LIB_1__::func_389(__LIB_19__::func_457(Local_299[iParam0 /*7*/].f_4));
	}
	if (func_443(iParam0))
	{
		if (!func_66(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_861()//Position - 0x2CB00
{
	if (func_862() != -1)
	{
		return Local_227[func_862() /*21*/];
	}
	return -1;
}

int func_862()//Position - 0x2CB1D
{
	return Local_385[iLocal_340 /*38*/];
}

var func_864(int iParam0)//Position - 0x2CD95
{
	if (Local_222.f_114.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_6);
		return StackVal;
	}
	return func_865();
}

var func_865()//Position - 0x2CDB9
{
	return Local_205.f_19.f_1.f_2;
}

int func_867(int iParam0)//Position - 0x2CDE9
{
	if (Local_222.f_114.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_4);
		return StackVal;
	}
	if (Local_205.f_19.f_1 != -1)
	{
		return Local_205.f_19.f_1;
	}
	return __LIB_19__::func_953();
}

int func_869(int iParam0)//Position - 0x2CE2B
{
	if (!bLocal_346)
	{
		return 0;
	}
	if (func_874(iParam0, 1))
	{
		return 0;
	}
	if (Local_299[iParam0 /*7*/].f_4 != __LIB_0__::func_162() && func_426() != 1)
	{
		return 0;
	}
	if (func_481(iParam0, 10) && !func_436(iParam0, 7))
	{
		return 0;
	}
	if (func_774(iParam0, iLocal_341, 14))
	{
		return 0;
	}
	if ((func_481(iParam0, 16) && func_436(iParam0, 23)) && !func_420(iLocal_341, 2))
	{
		return 0;
	}
	if (func_436(iParam0, 23) && __LIB_1__::func_936(bLocal_337))
	{
		return 0;
	}
	if (func_436(iParam0, 29) && func_436(iParam0, 40))
	{
		return 0;
	}
	if (func_870())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_114);
	return StackVal;
}

int func_870()//Position - 0x2CF0E
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_337) < 1)
	{
		return 0;
	}
	if (func_873())
	{
		return 1;
	}
	if (func_872())
	{
		if (func_871(bLocal_337, 0, 1, 0) || func_772(bLocal_337, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_871(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2CF66
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if ((((iParam1 || !func_436(iVar0, 4)) && (iParam2 || !func_774(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 1))) && (iParam3 || !func_774(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 12))) && func_774(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_872()//Position - 0x2CFE5
{
	if (Local_222.f_64.f_11 != 0)
	{
		Call_Loc(Local_222.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_873()//Position - 0x2D004
{
	if (Local_222.f_64.f_10 != 0)
	{
		Call_Loc(Local_222.f_64.f_10);
		return StackVal;
	}
	return 0;
}

int func_874(int iParam0, bool bParam1)//Position - 0x2D023
{
	if (func_436(iParam0, 4) || func_436(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_774(iParam0, iLocal_341, 6) || func_774(iParam0, iLocal_341, 9))
		{
			return 1;
		}
	}
	return 0;
}

void func_875(int iParam0, int iParam1)//Position - 0x2D06E
{
	if (Local_299[iParam0 /*7*/].f_4 == bLocal_337)
	{
		if (iParam1 != 5)
		{
			if (!func_886(func_167(iParam0)))
			{
				func_884(func_167(iParam0));
				if (Local_222.f_114.f_32 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_114.f_32);
				}
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1952191.f_5314 && !__LIB_5__::func_241(bLocal_337)) && !__LIB_12__::func_311())
		{
			if (func_886(func_167(iParam0)))
			{
				func_876(func_167(iParam0));
			}
		}
	}
}

void func_876(int iParam0)//Position - 0x2D0FA
{
	if (!func_880(iParam0))
	{
		return;
	}
	__LIB_19__::func_458(Local_378.f_160.f_1[iParam0 /*5*/]);
}

int func_880(int iParam0)//Position - 0x2D223
{
	if ((iParam0 == -1 || func_882(iParam0) == -1) || func_881(iParam0) == -1)
	{
		return 0;
	}
	return __LIB_3__::func_487(Local_378.f_160.f_1[iParam0 /*5*/]);
}

int func_881(int iParam0)//Position - 0x2D263
{
	return Local_378.f_160.f_1[iParam0 /*5*/].f_3;
}

int func_882(int iParam0)//Position - 0x2D278
{
	return Local_378.f_160.f_1[iParam0 /*5*/].f_2;
}

void func_884(int iParam0)//Position - 0x2D2CF
{
	if (!func_880(iParam0))
	{
		return;
	}
	__LIB_19__::func_545(Local_378.f_160.f_1[iParam0 /*5*/]);
}

int func_886(int iParam0)//Position - 0x2D378
{
	if (!func_880(iParam0))
	{
		return 0;
	}
	return __LIB_19__::func_282(Local_378.f_160.f_1[iParam0 /*5*/]);
}

void func_888(int iParam0)//Position - 0x2D40E
{
	if (iLocal_368[iParam0] != __LIB_0__::func_162())
	{
		if (uLocal_369[iParam0] != iLocal_368[iParam0])
		{
			uLocal_369[iParam0] = iLocal_368[iParam0];
		}
	}
}

void func_890(int iParam0, int iParam1)//Position - 0x2D44C
{
	bool bVar0;
	struct<3> Var1;
	if (!func_481(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_299[iParam0 /*7*/].f_1 < func_894(iParam0))
	{
		bVar0 = true;
		if (func_893(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_339, iParam1, 287))
		{
			bVar0 = false;
		}
		if (func_892(iParam0) != -1f)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			if (MISC::ABSF((Var1.f_2 - Local_342.f_2)) > func_892(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_222.f_114.f_35 != 0)
		{
			if (!func_774(iParam0, iLocal_341, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_114.f_35);
			}
		}
		func_851(iParam0, 35);
		func_851(iParam0, 0);
	}
	else
	{
		func_891(iParam0, 0);
	}
}

void func_891(int iParam0, int iParam1)//Position - 0x2D50D
{
	if (__LIB_16__::func_755(&(Local_385[iLocal_340 /*38*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_892(int iParam0)//Position - 0x2D52C
{
	if (Local_222.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_893(int iParam0)//Position - 0x2D54D
{
	if (Local_222.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_894(int iParam0)//Position - 0x2D56E
{
	if (Local_222.f_114.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_24);
		return StackVal;
	}
	if (func_443(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_895(int iParam0, int iParam1, bool bParam2)//Position - 0x2D5A4
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (!func_436(iParam0, 32) && !func_774(iParam0, iLocal_341, 24))
	{
		if (func_904(iParam0))
		{
			if (__LIB_1__::func_561(Local_378.f_2[iParam0]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_378.f_2[iParam0], true);
				OBJECT::ALLOW_PICKUP_BY_NONE_PARTICIPANT(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true);
				__LIB_20__::func_424(Local_347.f_0, 0, 0);
				func_851(iParam0, 24);
			}
		}
	}
	else
	{
		__LIB_19__::func_546(iParam1, &(Local_299[iParam0 /*7*/].f_5), func_901(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_775(bParam2, iParam0);
	}
}

int func_901(int iParam0)//Position - 0x2D7E0
{
	if ((func_436(iParam0, 3) || func_436(iParam0, 4)) || Local_299[iParam0 /*7*/].f_4 != __LIB_0__::func_162())
	{
		return 1;
	}
	return 0;
}

int func_904(int iParam0)//Position - 0x2D8A0
{
	if (!func_907(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_114.f_39);
	if (!StackVal)
	{
		return 0;
	}
	if (__LIB_0__::func_937(&(Local_378.f_2.f_18), func_905(), 0))
	{
		return 1;
	}
	return 0;
}

int func_905()//Position - 0x2D8E0
{
	if (Local_222.f_114.f_39.f_1 != 0)
	{
		Call_Loc(Local_222.f_114.f_39.f_1);
		return StackVal;
	}
	return __LIB_19__::func_394();
}

bool func_907(int iParam0)//Position - 0x2D911
{
	return func_436(iParam0, 1);
}

void func_908(int iParam0, int iParam1)//Position - 0x2D920
{
	if (func_436(iParam0, 29) || !__LIB_0__::func_114(iParam0))
	{
		return;
	}
	func_909(iParam1, iParam0);
}

void func_909(int iParam0, int iParam1)//Position - 0x2D94B
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		fVar0 = func_911(iParam1);
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
		__LIB_15__::func_403(iParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0, 1, 0, 0);
	}
}

float func_911(var uParam0)//Position - 0x2DB98
{
	if (Local_222.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_114.f_20);
		return StackVal;
	}
	return 0.3f;
}

void func_913(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2DBC6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (func_481(iParam0, 9) || Local_222.f_114.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_38);
		if (StackVal)
		{
			if (!func_436(iParam0, 31))
			{
				if (__LIB_1__::func_561(Local_378.f_2[iParam0]))
				{
					func_476(iParam0, 0, 0);
					func_851(iParam0, 22);
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
					if (iVar2 == bLocal_337)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_2[iParam0]))
						{
							OBJECT::HIDE_PORTABLE_PICKUP_WHEN_DETACHED(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_378.f_2[iParam0]), false);
							func_851(iParam0, 1);
							if (!func_436(iParam0, 1))
							{
								func_851(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_0__::func_467();
							*iParam3 = iParam0;
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_851(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_315))
						{
							func_851(iParam0, 1);
							if (!func_436(iParam0, 1))
							{
								func_851(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_0__::func_467();
							*iParam3 = iParam0;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_343)
					{
						func_851(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !__LIB_0__::func_114())
				{
					iVar4 = func_425(iParam0);
					if (!__LIB_19__::func_285(Local_205.f_67.f_1[iVar4 /*15*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
					{
						if (!__LIB_19__::func_285(iLocal_344))
						{
							func_851(iParam0, 21);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iLocal_339, false) == iVar3)
								{
									if (__LIB_0__::func_336(iLocal_339, 0) == -1)
									{
										func_851(iParam0, 1);
										if (!func_436(iParam0, 1))
										{
											func_851(iParam0, 18);
											__LIB_0__::func_467();
										}
										*uParam2 = 1;
										__LIB_0__::func_467();
										*iParam3 = iParam0;
									}
									func_851(iParam0, 14);
								}
								else
								{
									func_917(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_487() == 0)
				{
					func_914(iParam0);
				}
			}
		}
	}
}

void func_914(int iParam0)//Position - 0x2DE31
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (__LIB_1__::func_561(Local_378.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true, false);
		__LIB_19__::func_284(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]));
		func_851(iParam0, 45);
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), true) };
		Var1 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1.2f, 1.5f) };
		if (Var1.f_0 == Var0.f_0 && Var1.f_1 == Var0.f_1)
		{
			iVar2 = func_425(iParam0);
			if (iVar2 != -1)
			{
				iVar3 = Local_378.f_47[iVar2 /*8*/];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar3))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar3), false) };
				}
			}
		}
		fVar4 = __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0])));
		Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_378.f_2[iParam0]), Var1, true, false, false, true);
	}
}

void func_917(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2DF99
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_343) && __LIB_0__::func_336(iLocal_339, 0) == -1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_343)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_343))
		{
			func_851(iParam1, 1);
			if (!func_436(iParam1, 1))
			{
				func_851(iParam1, 18);
			}
			*uParam2 = 1;
			__LIB_0__::func_467();
			*uParam3 = iParam1;
		}
	}
}

void func_921(int iParam0, int iParam1)//Position - 0x2E079
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!func_481(iParam0, 7) || func_436(iParam0, 39)) || func_774(iParam0, iLocal_341, 32))
	{
		return;
	}
	iVar0 = __LIB_0__::func_162();
	if (Local_222.f_114.f_37 != 0)
	{
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			Stack.Push(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2));
			Stack.Push(iParam0);
			Stack.Push(iVar2);
			Call_Loc(Local_222.f_114.f_37);
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
	if (__LIB_1__::func_693(iVar0, 1, 1))
	{
		if (iVar0 == bLocal_337 && __LIB_0__::func_953(Local_378.f_2[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam1))
			{
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iLocal_339);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
			func_851(iParam0, 32);
		}
	}
	else if (__LIB_1__::func_561(Local_378.f_2[iParam0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
		func_851(iParam0, 32);
	}
}

void func_922(int iParam0, int iParam1)//Position - 0x2E171
{
	int iVar0;
	int iVar1;
	if ((!func_444(iParam0) || func_436(iParam0, 39)) || func_774(iParam0, iLocal_341, 36))
	{
		return;
	}
	iVar0 = func_926(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		iVar1 = NETWORK::NET_TO_ENT(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (__LIB_1__::func_561(Local_378.f_2[iParam0]) && __LIB_0__::func_953(iVar0))
			{
				if (func_924(iParam1, iVar1, func_925(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
				{
					func_923(iVar1);
					func_851(iParam0, 36);
				}
			}
		}
	}
}

void func_923(int iParam0)//Position - 0x2E212
{
	int iVar0;
	switch (func_426())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_924(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x2E23B
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (func_426())
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

Vector3 func_925(int iParam0, int iParam1)//Position - 0x2E2A4
{
	switch (func_426())
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

var func_926(int iParam0)//Position - 0x2E411
{
	var uVar0;
	switch (func_426())
	{
		case 2:
			return Local_378.f_47[func_425(iParam0) /*8*/];
		case 1:
			return Local_378.f_22[func_425(iParam0) /*24*/];
		default:
	}
	return uVar0;
}

void func_927(int iParam0)//Position - 0x2E450
{
	func_891(iParam0, 1);
	func_891(iParam0, 21);
	func_891(iParam0, 14);
}

int func_928()//Position - 0x2E46F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (!func_785(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_929()//Position - 0x2E49B
{
	return Local_331.f_0 != -1;
}

void func_930()//Position - 0x2E4A8
{
	func_1619();
	func_933();
	func_931();
}

void func_931()//Position - 0x2E4BC
{
	int iVar0;
	if (!func_420(iLocal_341, 29))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_205.f_67)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]))
		{
			func_932(iVar0, NETWORK::NET_TO_VEH(Local_378.f_47[iVar0 /*8*/]), func_424(iVar0, 2));
		}
		iVar0++;
	}
}

void func_932(int iParam0, int iParam1, int iParam2)//Position - 0x2E513
{
	bool bVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (func_153(iParam0, 14))
		{
			if (iParam2 != -1 && !func_436(iParam2, 4))
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
			if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (func_155(iParam0, 20))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, -1000f);
				}
				if (func_155(iParam0, 21))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_205.f_67.f_1[iParam0 /*15*/].f_3))
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

void func_933()//Position - 0x2E5B3
{
	if (!func_615(46))
	{
		return;
	}
	if (!func_1618())
	{
		func_726(46);
		return;
	}
	if (!func_615(26))
	{
		if (func_1617(800))
		{
			Stack.Push(1);
			Stack.Push(1);
			Call_Loc(Local_222.f_15.f_26);
			func_1609(StackVal, StackVal, 0);
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
	else
	{
		Call_Loc(Local_222.f_15.f_26.f_1);
		Stack.Push(0);
		Call_Loc(Local_222.f_15.f_26.f_2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(Local_222.f_15.f_26.f_3);
		Call_Loc(Local_222.f_15.f_26.f_4);
		Stack.Push(3000);
		Stack.Push(1);
		Stack.Push(1);
		Call_Loc(Local_222.f_15.f_26.f_5);
		if (func_935(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 1, 0))
		{
			func_934(800);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(Local_222.f_15.f_26);
			func_1609(StackVal, StackVal, 0);
			func_726(46);
		}
	}
}

int func_934(int iParam0)//Position - 0x2E66F
{
	func_726(40);
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

int func_935(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x2E69B
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_189();
	if (__LIB_3__::func_144(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_628() == 28)
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
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_853(0))
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
				if (!__LIB_19__::func_487())
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
			else if (func_1377(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, uParam5, iParam6, uParam8, uParam12, 0, bParam13, iParam17))
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
						__LIB_20__::func_312(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_20__::func_428(&iVar2);
					}
					if (__LIB_19__::func_487())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_2__::func_930();
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
							func_1349(iVar2);
							__LIB_3__::func_308(1);
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
					__LIB_3__::func_308(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_1345())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_1198(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
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
					func_990(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
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
				__LIB_20__::func_478(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_793(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_3__::func_276(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_6__::func_444();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_6__::func_444();
			}
			else if (__LIB_3__::func_399(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_3__::func_167())
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
				__LIB_6__::func_444();
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
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
					__LIB_3__::func_274(iParam9, 0, 0);
				}
			}
			__LIB_3__::func_221(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_2__::func_930();
			}
			if (!(__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_954(0, 0);
			}
			__LIB_3__::func_138(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_19__::func_569();
			if (bParam13)
			{
				__LIB_0__::func_854();
			}
			__LIB_0__::func_858();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_20__::func_428(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_954(int iParam0, bool bParam1)//Position - 0x2F6D0
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
			func_954(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_990(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x30E49
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_623(iParam0, iParam1, bVar0))
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
			if (__LIB_2__::func_918(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_991(0);
			}
		}
	}
}

void func_991(bool bParam0)//Position - 0x30F53
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_360(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_3__::func_310(__LIB_2__::func_82(), 14, iVar1, -1) };
			__LIB_2__::func_620(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_992(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_992(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_992(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3102A
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_1142(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_1142(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1142(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_992(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1142(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_1129(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_992(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_1122(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1142(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_992(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1142(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_992(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1114(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_992(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_992(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1110(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_992(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_992(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_992(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_992(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_992(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_992(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_992(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1122(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1110(iVar5, func_1129(iParam0, 8, -1), iParam2, func_1129(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_1048(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1110(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1122(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1110(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_992(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_992(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1110(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1110(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_992(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1110(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_992(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1020(iParam0, 9, iVar63))
						{
							func_992(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_992(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_992(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
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
						func_992(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1129(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1129(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_992(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_992(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_992(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_992(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_992(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_992(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_992(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_992(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_992(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_992(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1114(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_992(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_992(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_993(iParam0, &uVar4))
		{
			func_992(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_992(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_992(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_992(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_1129(iParam0, 3, -1), iVar10);
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
				func_992(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_993(int iParam0, var uParam1)//Position - 0x32ED4
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1129(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_1020(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1020(int iParam0, int iParam1, int iParam2)//Position - 0x3771F
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1020(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1020(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1020(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_1020(iParam0, 14, uVar11[iVar10]))
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
						return func_1020(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_1020(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1048(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3F468
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_1049(iParam0, bParam3, 0, -1);
}

void func_1049(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3F4B5
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
		bVar3 = func_1088(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1079(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_1079(int iParam0, int iParam1)//Position - 0x4E5A1
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1129(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_1129(iParam0, 11, -1);
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

int func_1088(int iParam0, bool bParam1)//Position - 0x4E9FF
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_1129(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
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
						iVar3 = func_1129(iParam0, 11, -1);
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
						iVar5 = func_1129(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1129(iParam0, 11, -1), 0);
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
						iVar8 = func_1129(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1129(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1129(iParam0, 11, -1), 0);
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
						iVar12 = func_1129(iParam0, 8, -1);
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

int func_1110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x58759
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
					iVar0 = func_1110(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1110(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1114(int iParam0)//Position - 0x59C65
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
		if (!func_1119(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1119(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5A62F
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_1129(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5CF4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1124(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1124(int iParam0)//Position - 0x5D0DC
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
				iVar1 = func_1129(iParam0, 11, -1);
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
				iVar3 = func_1129(iParam0, 11, -1);
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

int func_1129(int iParam0, int iParam1, int iParam2)//Position - 0x5D545
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
				if (func_1020(iParam0, iParam1, iVar0))
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
				if (func_1020(iParam0, iParam1, iVar1))
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

void func_1142(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x605A4
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
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1142(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1142(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1142(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1142(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1142(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1142(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1142(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1142(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1142(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1142(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1198(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x7C976
{
	int* iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_3__::func_467(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_640();
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
	if (func_1339() && !bVar3)
	{
		if (func_1338())
		{
			if (func_1332(&bVar2))
			{
				if (__LIB_3__::func_173(bVar2))
				{
					if (!bVar4)
					{
						func_990(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_2__::func_641() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_2__::func_640(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false));
						iVar5 = __LIB_2__::func_639(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_2__::func_641(), false))
						{
							iVar5 = __LIB_2__::func_641();
						}
						func_990(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), iVar5, 0);
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
		if (__LIB_3__::func_379(iVar0))
		{
			if ((__LIB_19__::func_487() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_19__::func_487())
			{
				if (!__LIB_20__::func_44(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1349(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_20__::func_428(&iVar0);
	}
	if (func_1345())
	{
		__LIB_20__::func_428(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_1305(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_1305(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_1201(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_1305(__LIB_2__::func_638());
				return 1;
			}
		}
		else if (__LIB_0__::func_957(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
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
				__LIB_2__::func_626(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_2__::func_625(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_1305(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_1201(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7D00C
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
	if (!__LIB_1__::func_599(8))
	{
		__LIB_1__::func_891(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_653(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_599(16))
		{
			__LIB_1__::func_653(16);
		}
	}
	__LIB_1__::func_653(31);
	if (!__LIB_2__::func_734())
	{
		if (!__LIB_1__::func_599(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_863())
					{
						if (!__LIB_2__::func_923())
						{
							__LIB_7__::func_73(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_9__::func_527(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_799(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_1__::func_24())
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
								if (__LIB_3__::func_462(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
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
									if (func_290(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_290(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_3__::func_225(&Param0, &fParam1))
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
										if (func_290(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (func_290(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_0__::func_957(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_20__::func_889(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_8__::func_248(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_653(34);
									}
									else
									{
										__LIB_1__::func_600(34);
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
													__LIB_11__::func_282(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_3__::func_578(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
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
									__LIB_3__::func_578(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_3__::func_224(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_653(0);
									__LIB_1__::func_653(44);
									__LIB_1__::func_600(10);
									__LIB_1__::func_600(1);
									__LIB_1__::func_600(2);
									__LIB_1__::func_600(9);
									__LIB_1__::func_600(12);
									__LIB_1__::func_600(31);
									__LIB_1__::func_600(32);
									__LIB_1__::func_600(33);
									__LIB_1__::func_600(35);
									__LIB_1__::func_600(37);
									__LIB_1__::func_600(38);
									__LIB_2__::func_627();
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

void func_1305(int iParam0)//Position - 0x8AC01
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
	func_1349(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_20__::func_888(iParam0, 1);
	}
	else
	{
		__LIB_8__::func_61(iParam0, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_1332(var uParam0)//Position - 0x8B99B
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
		if (__LIB_2__::func_644())
		{
			iVar2 = __LIB_2__::func_642(__LIB_2__::func_643());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
				iVar5 = __LIB_2__::func_642(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_3__::func_144(bVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar7)))
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
						if (!__LIB_1__::func_837())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
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
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_1333(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
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
int func_1333(bool bParam0)//Position - 0x8BBCA
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

int func_1338()//Position - 0x8BC43
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_1332(&bVar0))
		{
			if (func_1333(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_2__::func_644())
	{
		return 1;
	}
	return 0;
}

int func_1339()//Position - 0x8BC88
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_1332(&uVar0))
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

int func_1345()//Position - 0x8BDFD
{
	bool bVar0;
	var uVar1;
	if (__LIB_19__::func_487())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1339())
		{
			if (func_1338())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_870())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_463() /*142*/].f_66;
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
						if (__LIB_3__::func_467(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_8__::func_61(Global_2667225.f_2669, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_2__::func_648();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_2__::func_647();
			}
		}
		else if (!__LIB_2__::func_870())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_663())
				{
					__LIB_2__::func_648();
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

void func_1349(int iParam0)//Position - 0x8C0DF
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_2__::func_917(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_2__::func_659(iParam0);
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
			if (__LIB_10__::func_720(PLAYER::PLAYER_ID()))
			{
				__LIB_10__::func_727(iParam0);
			}
		}
		__LIB_3__::func_208(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_990(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_2__::func_654(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_1__::func_141());
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
					__LIB_2__::func_653(iParam0, 1);
					__LIB_2__::func_652(iParam0, 1);
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
			if (__LIB_2__::func_651(ENTITY::GET_ENTITY_MODEL(iParam0)))
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
						__LIB_2__::func_650(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 189)
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
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_2__::func_649() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
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

int func_1377(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x8D00F
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
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
		__LIB_0__::func_851();
		if (bParam10)
		{
			__LIB_0__::func_854();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_1386(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_3__::func_255(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
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
						if (((Global_2667225.f_518 && !__LIB_3__::func_254()) && __LIB_3__::func_253(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_305(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_2__::func_662(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_2__::func_765(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
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
								bVar1 = __LIB_2__::func_873(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
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
						func_1378(&(Global_2667225.f_623));
						__LIB_2__::func_662(-1);
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
								func_305(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_2__::func_662(-1);
							}
						}
					}
					else
					{
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					__LIB_2__::func_662(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_1386(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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
		__LIB_0__::func_851();
		if (bParam10)
		{
			if (!__LIB_3__::func_139(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_854();
			}
		}
		return 1;
	}
	return 0;
}

void func_1378(var uParam0)//Position - 0x8D597
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_305(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1386(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x8D9C3
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
		if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
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
				if (__LIB_20__::func_44(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_3__::func_261(Global_2676213);
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
		__LIB_2__::func_941();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_19__::func_561();
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
		if (Global_2667225.f_489 == 0 || __LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1580();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
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
			iVar20 = __LIB_3__::func_380(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_867(iVar20))
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
			if (__LIB_2__::func_698())
			{
				__LIB_1__::func_633();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_697(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_697(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_697(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_697(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_697(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_697(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_697(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_697(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_697(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_697(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_697(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_697(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_697(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_697(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_697(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_697(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_697(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_697(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_697(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_697(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_697(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_697(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_697(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_697(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_697(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_697(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_697(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_697(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_697(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_697(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_697(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_697(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_697(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_697(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_697(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_697(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_697(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_697(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_697(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_697(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_697(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_697(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_697(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_697(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_697(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_697(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_697(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_697(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_697(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_697(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_20__::func_476(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_20__::func_475(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_20__::func_446(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1569(bParam2) };
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
					__LIB_2__::func_892();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_20__::func_446(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_2__::func_938();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_891(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
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
				if (__LIB_19__::func_357(PLAYER::PLAYER_ID()))
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
				iVar38 = __LIB_1__::func_557(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_2__::func_693(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
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
					if (__LIB_1__::func_693(Global_1888188, 0, 1))
					{
						if (__LIB_20__::func_45(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1888188) };
							if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
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
					if (__LIB_0__::func_828(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_19__::func_357(PLAYER::PLAYER_ID()))
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
				if (__LIB_19__::func_357(PLAYER::PLAYER_ID()))
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
				Var13 = { __LIB_20__::func_316(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1558(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_2__::func_691(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_19__::func_487() || iVar40)
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
				if (func_1558(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::func_162())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_19__::func_487())
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
					if (__LIB_0__::func_828(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
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
				if (__LIB_19__::func_487())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_8__::func_272() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_890(__LIB_1__::func_694(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_890(Global_2667225.f_512);
				}
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_19__::func_357(PLAYER::PLAYER_ID()))
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
				if (!__LIB_1__::func_528(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_3__::func_182(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
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
				iVar30 = __LIB_20__::func_319(Var21, fVar35, &fVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_20__::func_431(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_20__::func_431(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_20__::func_315(Var21, fVar35) };
						Var23 = { __LIB_20__::func_314(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_817(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_1__::func_528(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_3__::func_182(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_20__::func_319(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_158(Var14, Var23) < 0f)
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
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_2__::func_687());
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_358(&(Global_2667225.f_555), 0, 0, 0, 1))
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
					Var17 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
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
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
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
					Var17 = { func_1530(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_2__::func_686(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_2__::func_690(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672120[0 /*12*/]));
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
					Var17 = { func_1530(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
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
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
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
					iVar16 = __LIB_3__::func_232();
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
					iVar16 = __LIB_3__::func_232();
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
						__LIB_3__::func_394(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				if (__LIB_19__::func_505())
				{
					iVar20 = __LIB_1__::func_780(__LIB_0__::func_797());
					if (iVar20 <= 0)
					{
					}
					__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1530(__LIB_0__::func_797()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_2__::func_745();
				if (iVar20 <= 0)
				{
				}
				__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_259(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_179(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
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
				iVar20 = __LIB_2__::func_745();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_670())
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
								__LIB_3__::func_283(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_3__::func_232();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1303;
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
						switch (__LIB_1__::func_670())
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
								__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_2__::func_771(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var44, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_2__::func_771(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_3__::func_210(iVar15, 912, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				switch (__LIB_1__::func_670())
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
							switch (__LIB_0__::func_813(PLAYER::PLAYER_ID()))
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
							iVar46 = __LIB_1__::func_669(__LIB_2__::func_744(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_656(__LIB_1__::func_721(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_654(__LIB_1__::func_380(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_651(__LIB_1__::func_817(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_639(__LIB_1__::func_642(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_162())
								{
									iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_1__::func_631(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_1__::func_627(PLAYER::PLAYER_ID()));
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
							iVar46 = __LIB_1__::func_604(__LIB_1__::func_605(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_0__::func_813(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_9__::func_743(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
					Global_2667225.f_555 = { __LIB_8__::func_270() };
					Global_2667225.f_555 = { __LIB_2__::func_878(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_3__::func_258(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_162())
					{
						Global_2667225.f_555 = { func_1530(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1530(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1530(__LIB_0__::func_797()) };
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
				if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_3__::func_258(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_162())
					{
						Global_2667225.f_555 = { func_1530(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1530(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1530(__LIB_0__::func_797()) };
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
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_1530(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1530(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_3__::func_176(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_876(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
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
					if (__LIB_3__::func_253(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
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
				if (Global_2667225.f_490.f_3 && !__LIB_20__::func_430(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_20__::func_445() };
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
				if (func_358(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_20__::func_46(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_19__::func_561())
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
					if (!__LIB_2__::func_674(Var17))
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
			func_1467();
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
			if ((__LIB_0__::func_975() && __LIB_19__::func_487()) && func_358(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_19__::func_560();
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
			if (__LIB_3__::func_139(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_310(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1460(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1457(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1457(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1457(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
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
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_19__::func_561())
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
						func_1467();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_20__::func_44(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_9__::func_516(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						func_1467();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_2__::func_670(&Var18, &iVar0);
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
		Global_2667225.f_520.f_9 = __LIB_19__::func_560();
		Global_2667225.f_520.f_10 = 0;
		if (func_1387(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
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

int func_1387(var uParam0, var uParam1, var uParam2)//Position - 0x92CBB
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
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_853(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_2__::func_740();
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
		__LIB_1__::func_442();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_20__::func_318(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
				__LIB_1__::func_436(Var6.f_0, Var6.f_1);
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
					if (__LIB_1__::func_435(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_310(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_828(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
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
				if (uParam0->f_5 && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
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
				__LIB_2__::func_739(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_432() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
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
				__LIB_2__::func_740();
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
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
			if (func_1397(uParam2, uParam0, uParam1, 0))
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
				if (!__LIB_1__::func_413(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_412(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
					__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_1397(uParam2, uParam0, uParam1, 1))
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
										if (__LIB_0__::func_828(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_1__::func_453(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
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
						func_1389(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				if (__LIB_1__::func_410(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam2, &(Global_2667225.f_2491.f_6));
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
				func_1389(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_1389(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x93D03
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
						if (__LIB_1__::func_413(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
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
	if (func_1391(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_310(&Var0, &uVar1, &Var2);
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
		if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_1391(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
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
			else if (func_358(uParam0, 1, 1, 1, 1))
			{
				func_1389(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_1391(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x941E5
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_1392(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1392(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1392(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x94241
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_355(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_2__::func_990(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_664(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1397(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x94510
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
					func_1442(uParam1, uParam2);
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
							if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_1389(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1389(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1442(uParam1, uParam2);
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
					func_1442(uParam1, uParam2);
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
				func_1442(uParam1, uParam2);
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
		func_1439(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1405(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_1405(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
				__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1389(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_664(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1389(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1389(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_1389(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_1389(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1405(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x94DD4
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
		if (__LIB_19__::func_357(PLAYER::PLAYER_ID()))
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
		if (!__LIB_3__::func_202(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_20__::func_44(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_20__::func_434(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_9__::func_516(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_19__::func_492(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_19__::func_492(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
			if (!__LIB_0__::func_822(Param0, 0.5f))
			{
				if (func_402(Var12))
				{
					if (!func_358(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_2__::func_784(&Param0, 0))
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
	else if (!__LIB_1__::func_428(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_1__::func_456(PLAYER::PLAYER_ID()) && __LIB_12__::func_238(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_668(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
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
		if (!__LIB_12__::func_238(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_427(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
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
	if (__LIB_2__::func_738(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_410(Global_2667225.f_489))
			{
				if (__LIB_1__::func_560(Param0, 0.01f))
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
		if (__LIB_1__::func_426(Param0))
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
			if (!__LIB_2__::func_766(&Param0, 0, 0))
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
	if (!__LIB_2__::func_664(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_1__::func_559(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_2__::func_667(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_2__::func_975(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_2__::func_990(Param0, 1056964608))
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
	else if (__LIB_1__::func_423(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
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
				fVar0 = __LIB_20__::func_429(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_20__::func_429(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_20__::func_313(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_2__::func_665(Var19);
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
							fVar0 = __LIB_20__::func_429(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_20__::func_429(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_410(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_3__::func_256(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_1408(Var19, iVar18);
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
						func_1408(Var19, iVar18);
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
						fVar5 = __LIB_3__::func_201(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_20__::func_313(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_420(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_420(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_1408(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1408(struct<10> Param0, int iParam1)//Position - 0x959C7
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1408(Var0, iParam1 + 1);
	}
}

void func_1439(struct<3> Param0, var uParam1, var uParam2)//Position - 0x96F15
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
					func_1441(&Var3, uParam1, iVar0);
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
				func_1441(&Var3, uParam1, iVar0);
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
					func_1441(&Var3, uParam1, iVar0);
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
				func_1440(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1440(var uParam0, var uParam1, int iParam2)//Position - 0x97235
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1440(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1441(var uParam0, var uParam1, int iParam2)//Position - 0x97273
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1441(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1442(var uParam0, var uParam1)//Position - 0x972AD
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_2__::func_851(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_1405(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_1457(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x9768E
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_878(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_2__::func_671(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_875(Param0, Param1, fParam2) };
				break;
		}
		if (func_1460(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1460(var uParam0, bool bParam1)//Position - 0x977CF
{
	func_1461(uParam0, bParam1);
	if (__LIB_20__::func_318(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1461(var uParam0, bool bParam1)//Position - 0x97806
{
	float fVar0;
	if (!bParam1)
	{
		func_1463(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1463(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_1463(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x978DC
{
	if (bParam1)
	{
		if (func_402(Global_2667225.f_512))
		{
			if (func_358(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_766(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_2__::func_784(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_3__::func_175(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_673(uParam0, 1120403456);
}

void func_1467()//Position - 0x97B11
{
	if (!Global_2667225.f_701)
	{
		if (func_402(Global_2667225.f_555))
		{
			if (func_358(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1558(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_2__::func_766(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_2__::func_784(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_19__::func_561())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1530(int iParam0)//Position - 0x9CCC5
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_722(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_722(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1531(iParam0);
}

Vector3 func_1531(int iParam0)//Position - 0x9CD39
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
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
		Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1533(__LIB_1__::func_694(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_4__::func_902(iParam0))
	{
		Var1 = { __LIB_19__::func_544(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_5__::func_241(iParam0))
	{
		iVar2 = __LIB_1__::func_668(iParam0);
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
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
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
	return __LIB_1__::func_694(iParam0);
}

void func_1533(struct<3> Param0, var uParam1)//Position - 0x9CF2F
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1534(Param0, iVar0, 0))
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
		if (func_1534(Param0, iVar0, 0))
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
		if (func_1534(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1534(Param0, iVar0, 0))
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
	if (func_1534(Param0, iVar0, 0))
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

int func_1534(struct<3> Param0, int iParam1, float fParam2)//Position - 0x9D073
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
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1534(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1534(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1534(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1558(var uParam0, bool bParam1)//Position - 0xA04D2
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
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
						Var1.f_2 = __LIB_2__::func_692(&(Global_2672169[iVar0 /*17*/]));
						__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_358(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

struct<18> func_1569(bool bParam0)//Position - 0xA0F0E
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
				if (__LIB_1__::func_423(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_822(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_19__::func_492(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_19__::func_492(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_19__::func_492(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_3__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_20__::func_313(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_19__::func_559(), __LIB_19__::func_558(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_20__::func_313(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_2__::func_737(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_19__::func_559(), __LIB_19__::func_558(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_2__::func_695(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, 65f, 0.8f, 1f);
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
					func_1570(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1570(&Var0, iVar1, fVar4, iVar7, fVar6);
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

void func_1570(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0xA1371
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
		func_1570(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1580()//Position - 0xA19BA
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
					__LIB_2__::func_892();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_897())
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
				if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_896() && (__LIB_2__::func_940(PLAYER::PLAYER_ID()) || __LIB_2__::func_700(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_974())
				{
					if (func_1591(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_975())
				{
					return 20;
				}
				else if ((((((__LIB_12__::func_548(1) && func_1591(PLAYER::PLAYER_ID())) && (__LIB_0__::func_492(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_2__::func_939(PLAYER::PLAYER_ID())) && !__LIB_1__::func_375(1)) && !(__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) == 0 && func_1587(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_19__::func_505())
					{
						return 34;
					}
					else if (__LIB_9__::func_773(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_7__::func_693(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_867(iVar0) && __LIB_19__::func_337(iVar0)) && (__LIB_19__::func_495(iVar0) || __LIB_0__::func_796(PLAYER::PLAYER_ID())))
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
				else if (__LIB_9__::func_773(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_7__::func_693(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_867(iVar0) && __LIB_19__::func_337(iVar0))
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

int func_1587(bool bParam0)//Position - 0xA1E7A
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_12__::func_486(bParam0, 0))
	{
		iVar0 = __LIB_2__::func_39(bParam0);
		Var1 = { func_1530(iVar0) };
		return func_358(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1591(bool bParam0)//Position - 0xA1F5E
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_1530(bParam0) };
	if (__LIB_12__::func_486(bParam0, 0))
	{
		iVar1 = __LIB_2__::func_39(bParam0);
		Var2 = { func_1530(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_3__::func_258(bParam0, 1);
		if (!iVar3 == __LIB_0__::func_162())
		{
			Var4 = { func_1530(iVar3) };
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

void func_1609(bool bParam0, int iParam1, int iParam2)//Position - 0xA2383
{
	if (bParam0)
	{
		__LIB_19__::func_496(bLocal_337, 0, iParam1, iParam2);
		func_505(26);
	}
	else
	{
		__LIB_19__::func_496(bLocal_337, 1, iParam1, iParam2);
		func_726(26);
	}
}

int func_1617(int iParam0)//Position - 0xA29F8
{
	func_505(40);
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

int func_1618()//Position - 0xA2A24
{
	if ((!bLocal_334 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_337)) || func_861() == 21)
	{
		return 0;
	}
	if (__LIB_3__::func_144(PLAYER::PLAYER_ID(), 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1619()//Position - 0xA2A63
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
		if (!func_1668(iVar0))
		{
		}
		else
		{
			func_1658(iVar0);
		}
		iVar0++;
	}
	if (func_929())
	{
		iVar0 = func_1657();
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_474.f_3);
		bVar3 = StackVal;
		if (!bLocal_334)
		{
			func_1651(0);
			return;
		}
		if (func_1650())
		{
			Stack.Push(Local_222.f_474.f_10 == 0);
			Stack.Push(func_1657());
			Call_Loc(Local_222.f_474.f_10);
			Stack.Push((StackVal || MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
			Stack.Push(func_1657());
			Call_Loc(Local_222.f_474.f_10);
			if (StackVal || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1))
			{
				Stack.Push(func_1657());
				Stack.Push(&(Local_331.f_2));
				Call_Loc(Local_222.f_474.f_8);
			}
		}
		if (func_1649(0))
		{
			Stack.Push(func_1648());
			Call_Loc(Local_222.f_474.f_6);
			if (!StackVal)
			{
				func_1645();
			}
			return;
		}
		bVar4 = true;
		if (!CAM::IS_SCREEN_FADED_OUT() && !func_1644(func_1657(), 6))
		{
			bVar4 = false;
		}
		Stack.Push(Local_222.f_474.f_8 != 0);
		Stack.Push(func_1657());
		Call_Loc(Local_222.f_474.f_9);
		if (StackVal && StackVal)
		{
			if (!func_1643())
			{
				bVar4 = false;
			}
		}
		if (func_615(79) && bVar3)
		{
			bVar4 = false;
		}
		Var1 = { func_1641() };
		if (Local_222.f_474.f_14 != 0)
		{
			Stack.Push(func_1657());
			Call_Loc(Local_222.f_474.f_14);
			Var2 = { StackVal, StackVal, StackVal };
			if (!__LIB_0__::func_86(Var2) && !func_1640(Var1))
			{
				Var1 = { Var2 };
			}
		}
		if (bVar4)
		{
			iVar5 = 0;
			if ((bVar3 && ENTITY::DOES_ENTITY_EXIST(iLocal_343)) && iLocal_339 != VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, -1, true))
			{
				iVar5 = 1;
			}
			if (iVar5 || __LIB_3__::func_276(Var1, func_1638(), bVar3, 1, 0, 0, 1, 0, func_1637(), 0, 0))
			{
				if (Local_222.f_474.f_6 == 0)
				{
					func_1645();
				}
				else
				{
					func_1636(0);
				}
			}
		}
		return;
	}
	func_1634();
	if (func_1649(1))
	{
		if (SYSTEM::VDIST(Local_342, Local_205.f_141[func_1633() /*8*/]) > func_1632())
		{
			func_1631(1);
		}
		return;
	}
	iVar6 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_1668(iVar0))
		{
		}
		else if (!func_1630(iVar0))
		{
		}
		else
		{
			func_1626(iVar0);
			Stack.Push(((bLocal_334 && func_487() == 0) && (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, true) || func_1625(iVar0))));
			Stack.Push(iVar0);
			Stack.Push(Local_205.f_141[iVar0 /*8*/]);
			Call_Loc(Local_222.f_474.f_1);
			if (StackVal && (StackVal || func_615(79)))
			{
				iVar6 = iVar0;
				Stack.Push(Local_222.f_474.f_10 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_222.f_474.f_10);
				if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
				{
					Stack.Push(iVar0);
					Call_Loc(Local_222.f_474.f_10);
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1);
				}
				Stack.Push(func_1644(iVar0, 4));
				Stack.Push(iVar0);
				Call_Loc(Local_222.f_474.f_15);
				if (StackVal || StackVal)
				{
					__LIB_5__::func_401(func_1624(iVar0));
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
				Local_331.f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337);
				Stack.Push(1);
				Stack.Push(49280);
				Stack.Push(iVar0);
				Call_Loc(Local_222.f_474.f_41);
				func_1609(StackVal, (StackVal || StackVal), 0);
				func_1621(iVar0);
				func_1620(iVar0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Stack.Push(func_1644(iVar0, 4));
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_474.f_15);
		if (((StackVal || StackVal) && iVar6 != iVar0) && __LIB_0__::func_1(func_1624(iVar0)))
		{
			HUD::CLEAR_HELP(true);
		}
		iVar0++;
	}
}

void func_1620(int iParam0)//Position - 0xA2DE7
{
	if (Local_331.f_0 != iParam0)
	{
		Local_331.f_0 = iParam0;
		func_621(27);
	}
}

void func_1621(int iParam0)//Position - 0xA2E02
{
	if (!func_1622(iParam0))
	{
		func_1617(800);
	}
	Stack.Push(func_1657());
	Call_Loc(Local_222.f_474.f_3);
	if ((StackVal && PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false)) && (func_1622(iParam0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		NETWORK::NETWORK_FADE_OUT_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_339, false), false, true);
	}
	func_505(40);
}

bool func_1622(int iParam0)//Position - 0xA2E62
{
	return Local_205.f_141[iParam0 /*8*/].f_5 != -1;
}

char* func_1624(int iParam0)//Position - 0xA2E8C
{
	if (Local_222.f_474.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_16);
		return StackVal;
	}
	if (func_1644(iParam0, 0))
	{
		return "ILH_H_PORT2" /* GXT: Press ~INPUT_CONTEXT~ to exit. */;
	}
	return "ILH_H_PORT1" /* GXT: Press ~INPUT_CONTEXT~ to enter. */;
}

int func_1625(int iParam0)//Position - 0xA2EC3
{
	int iVar0;
	Stack.Push(Local_222.f_474.f_3 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_474.f_3);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	Stack.Push(Local_222.f_474.f_4 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_474.f_4);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_1626(int iParam0)//Position - 0xA2F0D
{
	if (func_1629(iParam0))
	{
		__LIB_19__::func_395(Local_205.f_141[iParam0 /*8*/], (0.5f * 1.8f), (0.5f * 1.8f), 1f, func_1628(iParam0), 0.2f);
	}
}

int func_1628(int iParam0)//Position - 0xA2F91
{
	if (Local_222.f_474.f_18.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_5);
		return StackVal;
	}
	return 12;
}

int func_1629(int iParam0)//Position - 0xA2FB9
{
	if (Local_222.f_474.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_5);
		return StackVal;
	}
	if (func_1644(iParam0, 3))
	{
		return 0;
	}
	return 1;
}

int func_1630(int iParam0)//Position - 0xA2FEA
{
	if (Local_222.f_474 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474);
		return StackVal;
	}
	return 1;
}

void func_1631(int iParam0)//Position - 0xA3009
{
	if (__LIB_16__::func_755(&(Local_331.f_7), iParam0))
	{
	}
}

float func_1632()//Position - 0xA301F
{
	if (Local_222.f_474.f_11 != 0)
	{
		Stack.Push(func_1633());
		Call_Loc(Local_222.f_474.f_11);
		return StackVal;
	}
	return 2f;
}

int func_1633()//Position - 0xA3044
{
	return Local_331.f_1;
}

void func_1634()//Position - 0xA3051
{
	int iVar0;
	if (!func_615(3))
	{
		if (Local_331.f_3 > 0)
		{
			if (bLocal_334)
			{
				iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337);
				if (Local_331.f_3 > iVar0)
				{
					func_1635(bLocal_337, Local_331.f_3, 0, 0);
					Local_331.f_3 = 0;
				}
				else
				{
					Local_331.f_3 = 0;
				}
			}
		}
	}
}

void func_1635(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA30A1
{
	if (iParam0 != __LIB_0__::func_162() && __LIB_1__::func_693(iParam0, 1, 1))
	{
		__LIB_19__::func_375(Local_347.f_0, __LIB_0__::func_950(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_1636(int iParam0)//Position - 0xA30D3
{
	if (__LIB_1__::func_458(&(Local_331.f_7), iParam0))
	{
	}
}

int func_1637()//Position - 0xA30E9
{
	if (Local_222.f_474.f_7 != 0)
	{
		Stack.Push(Local_205.f_141[func_1657() /*8*/].f_4);
		Call_Loc(Local_222.f_474.f_7);
		return StackVal;
	}
	return 1;
}

float func_1638()//Position - 0xA3116
{
	return func_1639(func_1657());
}

var func_1639(int iParam0)//Position - 0xA3126
{
	var uVar0;
	if (Local_222.f_474.f_13 != 0)
	{
		Stack.Push(Local_205.f_141[iParam0 /*8*/].f_4);
		Stack.Push(&uVar0);
		Call_Loc(Local_222.f_474.f_13);
		if (StackVal)
		{
			return uVar0;
		}
	}
	return Local_205.f_141[Local_205.f_141[iParam0 /*8*/].f_4 /*8*/].f_3;
}

int func_1640(struct<3> Param0)//Position - 0xA3169
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
		iVar0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var7, Var8, fVar9, 2, iLocal_339, 4);
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

Vector3 func_1641()//Position - 0xA31EF
{
	return func_1642(func_1657());
}

Vector3 func_1642(int iParam0)//Position - 0xA31FF
{
	struct<3> Var0;
	if (Local_222.f_474.f_12 != 0)
	{
		Stack.Push(Local_205.f_141[iParam0 /*8*/].f_4);
		Call_Loc(Local_222.f_474.f_12);
		Var0 = { StackVal, StackVal, StackVal };
		if (!__LIB_0__::func_86(Var0))
		{
			return Var0;
		}
	}
	return Local_205.f_141[Local_205.f_141[iParam0 /*8*/].f_4 /*8*/];
}

bool func_1643()//Position - 0xA324F
{
	return AUDIO::HAS_SOUND_FINISHED(Local_331.f_2);
}

bool func_1644(int iParam0, int iParam1)//Position - 0xA3260
{
	return __LIB_0__::func_316(&(Local_205.f_141[iParam0 /*8*/].f_6), iParam1);
}

void func_1645()//Position - 0xA3278
{
	func_1609(0, 0, 0);
	Stack.Push(func_1657());
	Call_Loc(Local_222.f_474.f_2);
	if (func_1644(func_1657(), 0) && !func_1644(func_1648(), 0))
	{
		func_1646();
	}
	func_1636(1);
	func_1651(0);
	NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(2500);
}

void func_1646()//Position - 0xA32C4
{
	int iVar0;
	int iVar1;
	if (!func_772(bLocal_337, 1))
	{
		return;
	}
	iVar0 = func_1647(bLocal_337);
	if (iVar0 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar0]))
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_OBJ(Local_378.f_2[iVar0]);
	OBJECT::FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(iVar1);
}

int func_1647(int iParam0)//Position - 0xA3316
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (Local_299[iVar0 /*7*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1648()//Position - 0xA3347
{
	return Local_205.f_141[func_1657() /*8*/].f_4;
}

bool func_1649(int iParam0)//Position - 0xA335B
{
	return __LIB_0__::func_316(&(Local_331.f_7), iParam0);
}

int func_1650()//Position - 0xA336E
{
	if (Local_222.f_474.f_8 != 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

void func_1651(int iParam0)//Position - 0xA338E
{
	if (iParam0 && !func_929())
	{
		return;
	}
	func_1631(0);
	__LIB_10__::func_399(&(Local_331.f_2));
	Stack.Push(Local_222.f_474.f_10 != 0);
	Stack.Push(func_1657());
	Call_Loc(Local_222.f_474.f_10);
	if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(func_1657());
		Call_Loc(Local_222.f_474.f_10);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(StackVal);
	}
	func_1655();
	func_1652();
}

void func_1652()//Position - 0xA33F3
{
	func_1654(8);
	func_1654(26);
	func_1654(27);
	__LIB_19__::func_286(3);
	Local_331.f_1 = Local_205.f_141[Local_331.f_0 /*8*/].f_4;
	Local_331.f_0 = -1;
}

void func_1654(int iParam0)//Position - 0xA343D
{
	if (__LIB_16__::func_755(&(Local_385[iLocal_340 /*38*/].f_1), iParam0))
	{
	}
}

void func_1655()//Position - 0xA3458
{
	int iVar0;
	func_934(3000);
	Stack.Push(func_1657());
	Call_Loc(Local_222.f_474.f_3);
	if (StackVal && PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_339, false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
	}
	func_726(40);
}

int func_1657()//Position - 0xA34C7
{
	return Local_331.f_0;
}

void func_1658(int iParam0)//Position - 0xA34D2
{
	int iVar0;
	if (bLocal_345 && func_1667(iParam0))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_331.f_4[iParam0]))
		{
			__LIB_19__::func_534(&(Local_331.f_4[iParam0]), Local_205.f_141[iParam0 /*8*/], func_1666(iParam0), func_1628(iParam0), func_1665(iParam0), func_1664(iParam0), 0, func_1663(iParam0), 0, func_1662(iParam0));
			iVar0 = func_1659(iParam0);
			if (iVar0 != 5)
			{
				HUD::SET_BLIP_PRIORITY(Local_331.f_4[iParam0], iVar0);
			}
			Stack.Push(Local_222.f_474.f_18.f_9 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_474.f_18.f_9);
			if (StackVal && StackVal)
			{
				__LIB_19__::func_390(&(Local_331.f_4[iParam0]), 0);
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_474.f_18.f_15);
			if (StackVal)
			{
				if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_331.f_4[iParam0]))
				{
					HUD::SET_BLIP_ROUTE(Local_331.f_4[iParam0], true);
				}
			}
			else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_331.f_4[iParam0]))
			{
				HUD::SET_BLIP_ROUTE(Local_331.f_4[iParam0], false);
			}
			if (func_1644(iParam0, 1))
			{
				__LIB_20__::func_328(Local_331.f_4[iParam0], 100, 5000f, 1137180672);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_331.f_4[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_331.f_4[iParam0]));
	}
}

int func_1659(int iParam0)//Position - 0xA361B
{
	if (Local_222.f_474.f_18.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_7);
		return StackVal;
	}
	return 9;
}

int func_1662(int iParam0)//Position - 0xA36E9
{
	if (Local_222.f_474.f_18.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_14);
		return StackVal;
	}
	return 1;
}

int func_1663(int iParam0)//Position - 0xA3710
{
	if (Local_222.f_474.f_18.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_16);
		return StackVal;
	}
	return 0;
}

float func_1664(int iParam0)//Position - 0xA3737
{
	if (Local_222.f_474.f_18.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_6);
		return StackVal;
	}
	return 1f;
}

char* func_1665(int iParam0)//Position - 0xA375E
{
	if (Local_222.f_474.f_18.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_13);
		return StackVal;
	}
	if (func_1644(iParam0, 0))
	{
		return "ILH_BLP_EXIT" /* GXT: Exit */;
	}
	return "ILH_BLP_ENTR" /* GXT: Entrance */;
}

int func_1666(int iParam0)//Position - 0xA3799
{
	if (Local_222.f_474.f_18.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18.f_4);
		return StackVal;
	}
	return -1;
}

int func_1667(int iParam0)//Position - 0xA37C0
{
	if (func_929())
	{
		return 0;
	}
	if (!func_1630(iParam0))
	{
		return 0;
	}
	if (func_1649(1))
	{
		if (iParam0 == Local_331.f_1)
		{
			return 0;
		}
	}
	if (func_420(iLocal_341, 2))
	{
		if (!func_1644(iParam0, 0))
		{
			return 0;
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
		{
			return 0;
		}
	}
	else if (func_1644(iParam0, 0))
	{
		return 0;
	}
	if (Local_222.f_474.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_474.f_18);
		return StackVal;
	}
	if (func_1644(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1668(int iParam0)//Position - 0xA3863
{
	if ((!__LIB_0__::func_86(Local_205.f_141[iParam0 /*8*/]) && Local_205.f_141[iParam0 /*8*/].f_4 != -1) && !__LIB_0__::func_86(Local_205.f_141[Local_205.f_141[iParam0 /*8*/].f_4 /*8*/]))
	{
		return 1;
	}
	return 0;
}

void func_1669()//Position - 0xA38AF
{
	if (func_1670())
	{
		func_505(11);
	}
}

bool func_1670()//Position - 0xA38C7
{
	if (Local_222.f_102 != 0)
	{
		Call_Loc(Local_222.f_102);
		return StackVal;
	}
	if (Local_205.f_19 > 0)
	{
		if (func_438())
		{
			return func_1674(bLocal_337);
		}
		return func_1671(bLocal_337);
	}
	return func_487() == 3;
}

int func_1671(int iParam0)//Position - 0xA390A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (!func_436(iVar0, 4) || !func_1672(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1672(int iParam0, int iParam1)//Position - 0xA3946
{
	int iVar0;
	iVar0 = func_167(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (__LIB_12__::func_486(iParam0, 1) && !func_66(21))
	{
		return func_1673(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__::func_39(iParam0));
	}
	return func_1673(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0);
}

int func_1673(int iParam0)//Position - 0xA3997
{
	return Local_378.f_160.f_1[iParam0 /*5*/].f_4;
}

int func_1674(int iParam0)//Position - 0xA39AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_436(iVar0, 4) && func_1672(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1676()//Position - 0xA39EE
{
	func_2319();
	func_2315();
	func_2313();
	func_2278();
	__LIB_0__::func_467();
	if (Local_222.f_3.f_1 != 0)
	{
		Call_Loc(Local_222.f_3.f_1);
	}
	func_731();
	func_2262();
	func_2207();
	func_2176();
	func_2103();
	func_2081();
	func_2061();
	func_2020();
	func_1951();
	func_1943();
	func_1923();
	func_1912();
	func_1619();
	func_1781();
	func_1778();
	func_1768();
	func_1750();
	func_1742();
	func_933();
	func_1729();
	func_1722();
	func_1714();
	func_1687();
	func_1686();
	func_1683();
	func_1681();
	func_1677();
}

void func_1677()//Position - 0xA3A89
{
	int iVar0;
	if (func_862() == -1)
	{
		func_1680(0);
		Call_Loc(Local_227[func_862() /*21*/].f_17);
		return;
	}
	while ((func_862() < iLocal_349 && iVar0 < Local_227[func_862() /*21*/].f_19) && Local_227[func_862() /*21*/].f_1[iVar0 /*3*/] != -1)
	{
		if (func_1678(func_862(), iVar0))
		{
			if (func_862() != Local_227[func_862() /*21*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_227[func_862() /*21*/].f_18);
				func_1680(Local_227[func_862() /*21*/].f_1[iVar0 /*3*/]);
				Call_Loc(Local_227[func_862() /*21*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

int func_1678(int iParam0, int iParam1)//Position - 0xA3B3B
{
	if (Local_227[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1 != 0)
	{
		Call_Loc(Local_227[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1);
		return StackVal;
	}
	if (Local_227[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 != -1)
	{
		if (Global_2815059.f_6777 && __LIB_0__::func_955(Local_347.f_0) == 0)
		{
			return (Local_227[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == func_22() || Local_227[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == Local_378.f_86);
		}
		else
		{
			return BitTest(Local_378.f_87, Local_227[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2);
		}
	}
	return 0;
}

void func_1680(int iParam0)//Position - 0xA3D46
{
	Local_385[iLocal_340 /*38*/] = iParam0;
}

void func_1681()//Position - 0xA3D58
{
	int iVar0;
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (__LIB_0__::func_864(&(Local_378.f_106)) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 == -1)
	{
		iVar0 = ((func_19() - __LIB_1__::func_724(&(Local_378.f_106), 0, 0)) / 1000);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 = (NETWORK::GET_CLOUD_TIME_AS_INT() + iVar0);
	}
}

void func_1683()//Position - 0xA3E02
{
	Call_Loc(Local_222.f_15.f_4);
	if (!StackVal)
	{
		return;
	}
	func_1685();
	func_1684();
}

void func_1684()//Position - 0xA3E21
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
	if (iLocal_344 != 0)
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

void func_1685()//Position - 0xA401A
{
	int iVar0;
	if (bLocal_334)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iLocal_339, &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_339, joaat("WEAPON_UNARMED"), true);
		}
	}
}

void func_1686()//Position - 0xA405A
{
	Call_Loc(Local_222.f_102.f_7);
	if (__LIB_0__::func_86(StackVal, StackVal, StackVal))
	{
		func_1654(15);
		fLocal_366 = 999999f;
		return;
	}
	Stack.Push(Local_342);
	Call_Loc(Local_222.f_102.f_7);
	fLocal_366 = SYSTEM::VDIST(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
	Stack.Push(fLocal_366);
	Call_Loc(Local_222.f_102.f_8);
	if (StackVal <= StackVal)
	{
		func_621(15);
	}
	else
	{
		func_1654(15);
	}
}

void func_1687()//Position - 0xA40B4
{
	if (!func_66(31))
	{
		return;
	}
	if (__LIB_0__::func_114(bLocal_337))
	{
		func_1688(func_1712());
	}
}

void func_1688(int iParam0)//Position - 0xA40DB
{
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (iParam0 && __LIB_19__::func_338())
	{
		if (!__LIB_3__::func_521(Global_2703735.f_4.f_15, __LIB_19__::func_548(), -1))
		{
			STREAMING::REQUEST_CLIP_SET("move_m@bag");
			if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
			{
				func_1700(Global_2703735.f_4.f_15, __LIB_19__::func_548(), -1);
				PED::SET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, "move_m@bag", 0.25f);
			}
		}
	}
	else if (__LIB_3__::func_521(Global_2703735.f_4.f_15, __LIB_19__::func_548(), -1))
	{
		func_1689(Global_2703735.f_4.f_15, __LIB_19__::func_548(), -1, -1);
		STREAMING::REMOVE_CLIP_SET("move_m@bag");
		PED::RESET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, 0.25f);
	}
}

void func_1689(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA4199
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
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_992(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_992(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

void func_1700(int iParam0, int iParam1, int iParam2)//Position - 0xAC1B2
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
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1704(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1129(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
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

void func_1704(int iParam0)//Position - 0xACEF8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1689(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

int func_1712()//Position - 0xAD332
{
	if (Local_222.f_15.f_3 != 0)
	{
		Call_Loc(Local_222.f_15.f_3);
		return StackVal;
	}
	return func_772(bLocal_337, 1);
}

void func_1714()//Position - 0xAD361
{
	if (func_615(55))
	{
		return;
	}
	if (!func_1721())
	{
		return;
	}
	if (Local_222.f_15.f_18.f_2 == 0)
	{
		return;
	}
	if (Local_222.f_15.f_18.f_3 == 0)
	{
		return;
	}
	Stack.Push(iLocal_339);
	Call_Loc(Local_222.f_15.f_18.f_2);
	if (WEAPON::HAS_PED_GOT_WEAPON(StackVal, StackVal, false))
	{
		func_505(78);
	}
	Stack.Push(iLocal_339);
	Call_Loc(Local_222.f_15.f_18.f_2);
	Call_Loc(Local_222.f_15.f_18.f_3);
	WEAPON::GIVE_WEAPON_TO_PED(StackVal, StackVal, StackVal, func_1720(), func_1719());
	if (Local_222.f_15.f_18.f_1 != 0)
	{
		Call_Loc(Local_222.f_15.f_18.f_1);
		__LIB_3__::func_218(StackVal, 0);
	}
	func_505(55);
}

int func_1719()//Position - 0xAD5DC
{
	if (Local_222.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_222.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_1720()//Position - 0xAD5FF
{
	if (Local_222.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_222.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

bool func_1721()//Position - 0xAD622
{
	if (Local_222.f_15.f_18 != 0)
	{
		Call_Loc(Local_222.f_15.f_18);
		return StackVal;
	}
	return func_615(64);
}

void func_1722()//Position - 0xAD646
{
	if (func_1728())
	{
		if (iLocal_358 == -1)
		{
			iLocal_358 = __LIB_1__::func_360(2048, -1, 0);
		}
		if (!func_615(60))
		{
			if (__LIB_3__::func_521(iLocal_339, 3, -1))
			{
				func_505(61);
			}
			if (__LIB_1__::func_360(2048, -1, 0) < func_1727())
			{
				__LIB_1__::func_746(2048, func_1727(), -1);
			}
			MISC::SET_BIT(&(Global_2815059.f_4660), 22);
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_337, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_339, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_339, false);
			Global_1957702 = 1;
			func_505(60);
		}
		else if (__LIB_1__::func_360(2048, -1, 0) > 0 && PED::GET_PED_DIES_IN_WATER(iLocal_339))
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_337, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_339, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_339, false);
			Global_1957702 = 1;
		}
		if (!__LIB_3__::func_521(iLocal_339, 3, -1))
		{
			func_1725(0);
			func_1700(iLocal_339, 3, -1);
			__LIB_19__::func_287(1);
		}
	}
	else
	{
		func_1723();
	}
}

void func_1723()//Position - 0xAD73B
{
	if (func_615(60))
	{
		if (__LIB_3__::func_521(iLocal_339, 3, -1))
		{
			if (!func_615(61))
			{
				func_1689(iLocal_339, 3, -1, -1);
			}
		}
		PED::SET_PED_DIES_IN_WATER(iLocal_339, true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_339, true);
		PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_337, 100f);
		MISC::SET_BIT(&(Global_2815059.f_4660), 22);
		__LIB_1__::func_354(2048, iLocal_358, -1, 1, 0);
		__LIB_19__::func_287(0);
		func_726(60);
	}
}

void func_1725(bool bParam0)//Position - 0xAD7C8
{
	func_621(13);
	if (bParam0)
	{
		func_621(9);
	}
	Local_319.f_0 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	Local_319.f_1 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	__LIB_19__::func_288(iLocal_339);
}

int func_1727()//Position - 0xAD8BD
{
	if (Local_222.f_15.f_2 != 0)
	{
		Call_Loc(Local_222.f_15.f_2);
		return StackVal;
	}
	return 3;
}

bool func_1728()//Position - 0xAD8DC
{
	if (Local_222.f_15.f_1 != 0)
	{
		Call_Loc(Local_222.f_15.f_1);
		return StackVal;
	}
	return func_615(62);
}

void func_1729()//Position - 0xAD900
{
	if (Local_222.f_15.f_13 == 0)
	{
		return;
	}
	if (!func_615(47))
	{
		if (!func_615(56))
		{
			Call_Loc(Local_222.f_15.f_13);
			if (StackVal)
			{
				func_505(56);
			}
		}
		if (func_615(56))
		{
			if (func_1735() && func_1734())
			{
				func_505(47);
				func_726(56);
				if (func_1733())
				{
					__LIB_1__::func_473(__LIB_6__::func_281(iLocal_343, 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				}
				if (func_1730())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_343, true);
				}
			}
		}
	}
	else
	{
		Call_Loc(Local_222.f_15.f_13);
		if (!StackVal)
		{
			func_726(47);
			func_726(56);
		}
	}
}

int func_1730()//Position - 0xAD9A5
{
	if (Local_222.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_222.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_1733()//Position - 0xADAB4
{
	if (Local_222.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_222.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

int func_1734()//Position - 0xADAD7
{
	if (Local_222.f_15.f_13.f_3 != 0)
	{
		Stack.Push(&uLocal_372);
		Call_Loc(Local_222.f_15.f_13.f_3);
		return __LIB_0__::func_937(StackVal, StackVal, 0);
	}
	return 1;
}

int func_1735()//Position - 0xADB02
{
	if (bLocal_333)
	{
		if (iLocal_344 != 0)
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, -1, false) == iLocal_339)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_343, false))
				{
					if (!__LIB_19__::func_397(iLocal_339))
					{
						return __LIB_0__::func_213(iLocal_343, func_1740(), __LIB_0__::func_109(), __LIB_19__::func_289(), 0, 0, 0);
					}
				}
			}
		}
	}
	return 0;
}

float func_1740()//Position - 0xADD30
{
	if (Local_222.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_222.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

void func_1742()//Position - 0xADD9B
{
	float fVar0;
	if (!func_1749())
	{
		return;
	}
	if (!func_1748())
	{
		if (func_1747())
		{
			PED::SET_PED_RESET_FLAG(iLocal_339, 46, true);
			PED::SET_PED_RESET_FLAG(iLocal_339, 47, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		PED::SET_PED_RESET_FLAG(iLocal_339, 102, true);
		PED::SET_PED_RESET_FLAG(iLocal_339, 362, true);
	}
	fVar0 = func_1746();
	if (fVar0 != -1f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_339, fVar0);
	}
	fVar0 = func_1745();
	if (fVar0 != -1f)
	{
		PED::SET_PED_CAPSULE(iLocal_339, fVar0);
	}
	if (func_1744())
	{
		ENTITY::SET_ENTITY_VELOCITY(iLocal_339, func_1743());
	}
}

Vector3 func_1743()//Position - 0xADE2F
{
	if (Local_222.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_222.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_1744()//Position - 0xADE54
{
	if (Local_222.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_222.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_1745()//Position - 0xADE77
{
	if (Local_222.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_222.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

float func_1746()//Position - 0xADE9E
{
	if (Local_222.f_15.f_6.f_3 != 0)
	{
		Call_Loc(Local_222.f_15.f_6.f_3);
		return StackVal;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_339) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

int func_1747()//Position - 0xADED5
{
	if (Local_222.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_222.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_1748()//Position - 0xADEF8
{
	if (Local_222.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_222.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_1749()//Position - 0xADF1B
{
	if (Local_222.f_15.f_6 != 0)
	{
		Call_Loc(Local_222.f_15.f_6);
		return StackVal;
	}
	return 0;
}

void func_1750()//Position - 0xADF3A
{
	int iVar0;
	if (!func_66(19) || !__LIB_0__::func_114(bLocal_337))
	{
		return;
	}
	switch (__LIB_19__::func_290())
	{
		case 0:
			if (!func_615(33))
			{
				func_505(33);
			}
			break;
		case 9:
			if (func_615(33))
			{
				if ((iLocal_318 == joaat("WEAPON_UNARMED") || WEAPON::GET_WEAPONTYPE_GROUP(iLocal_318) == joaat("GROUP_MELEE")) && WEAPON::HAS_PED_GOT_WEAPON(iLocal_339, iLocal_318, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_339, iLocal_318, true);
				}
				else
				{
					__LIB_19__::func_570(2);
				}
				func_726(33);
			}
			break;
		case 99:
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_339, &iVar0, false);
			if (iLocal_318 != iVar0)
			{
				iLocal_318 = iVar0;
			}
			break;
	}
}

void func_1768()//Position - 0xB0389
{
	int iVar0;
	if (__LIB_12__::func_487(bLocal_337))
	{
		return;
	}
	if (func_487() != 0)
	{
		return;
	}
	if (!bLocal_334)
	{
		return;
	}
	if (func_615(25))
	{
		__LIB_0__::func_467();
	}
	if (func_1777(0))
	{
		__LIB_0__::func_467();
		if (__LIB_0__::func_114(bLocal_337))
		{
			return;
		}
	}
	if (func_871(bLocal_337, 0, 1, 0))
	{
		__LIB_0__::func_467();
		if (__LIB_0__::func_114(bLocal_337))
		{
			return;
		}
	}
	iVar0 = 0;
	if (func_1775(__LIB_20__::func_31()))
	{
		func_621(3);
	}
	else if (!func_1775(__LIB_20__::func_402()))
	{
		if (func_420(iLocal_341, 3))
		{
			func_1654(3);
			iVar0 = 1;
		}
	}
	func_1769(iVar0);
}

void func_1769(int iParam0)//Position - 0xB0432
{
	if (__LIB_0__::func_114(iParam0))
	{
		func_1771();
	}
	if (__LIB_0__::func_1(__LIB_19__::func_398()))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			__LIB_0__::func_467();
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_1771()//Position - 0xB0487
{
	if (!bLocal_345)
	{
		__LIB_19__::func_521();
		return;
	}
	if (!func_767())
	{
		return;
	}
	if (!func_420(iLocal_341, 5))
	{
		__LIB_0__::func_151(__LIB_19__::func_398(), -1);
		func_621(5);
	}
}

bool func_1775(float fParam0)//Position - 0xB04F0
{
	struct<3> Var0;
	Call_Loc(Local_222.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__::func_86(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_342, Var0) <= (fParam0 * fParam0);
}

int func_1777(bool bParam0)//Position - 0xB0531
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_339, false);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = __LIB_0__::func_220(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (__LIB_0__::func_114(iVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != iLocal_339)
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

void func_1778()//Position - 0xB05B8
{
	if (__LIB_0__::func_114(bLocal_337))
	{
		if (!__LIB_19__::func_399())
		{
			__LIB_3__::func_157(1);
		}
	}
}

void func_1781()//Position - 0xB062E
{
	if (func_615(10) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_205.f_104)))
	{
		func_1782(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, &(Local_205.f_104));
	}
}

void func_1782(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xB0670
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
	if (__LIB_20__::func_443(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_19__::func_368() || iParam2 == 28)
	{
		if (__LIB_19__::func_373(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_12__::func_553(), sParam7))
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
										if (__LIB_12__::func_558(bVar4) || func_1843(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_796(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_1842(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
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
							if ((__LIB_12__::func_533(bVar4) && func_1832(bVar4, iParam2, bVar3)) && __LIB_1__::func_693(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_12__::func_552(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_12__::func_562(bVar4);
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
									if (!__LIB_12__::func_490())
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
								iVar17 = __LIB_19__::func_461(bVar4, 0);
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
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_982(iParam5))
								{
									__LIB_19__::func_506(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_19__::func_506(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_12__::func_533(bVar4))
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_12__::func_552(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_12__::func_562(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_19__::func_461(bVar4, 1);
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
									__LIB_19__::func_508(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_12__::func_532(uParam3, iParam1, iParam2);
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

int func_1832(int iParam0, int iParam1, bool bParam2)//Position - 0xB1DCD
{
	if (iParam1 == 27)
	{
		if ((__LIB_3__::func_438(iParam0) || __LIB_12__::func_484(iParam0)) || __LIB_3__::func_491(iParam0))
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_796(iParam0))
	{
		return 0;
	}
	if (!__LIB_12__::func_558(iParam0) && !func_1843(iParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

void func_1842(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xB2143
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_2__::func_40(iVar1, 0))
			{
				if (__LIB_12__::func_558(iVar1) || func_1843(iVar1, bParam4))
				{
					if (__LIB_1__::func_876(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_1843(int iParam0, bool bParam1)//Position - 0xB21BC
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2689235[iParam0 /*453*/].f_244 != -1 || __LIB_10__::func_225(iParam0));
}

void func_1912()//Position - 0xB3F77
{
	int iVar0;
	if (Local_222.f_456 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_205.f_134)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_456);
		if (StackVal)
		{
			if (func_1922(iVar0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_120[iVar0]))
				{
					iLocal_120[iVar0] = HUD::ADD_BLIP_FOR_RADIUS(func_1921(iVar0), Local_205.f_134.f_1[iVar0 /*5*/].f_3);
					__LIB_2__::func_53(&(iLocal_120[iVar0]), Local_205.f_134.f_1[iVar0 /*5*/].f_4);
					HUD::SET_BLIP_ALPHA(iLocal_120[iVar0], 85);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_120[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_120[iVar0]));
			}
			if (func_1920(iVar0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
				{
					if (func_1919(iVar0))
					{
						Stack.Push(iVar0);
						Call_Loc(Local_222.f_456.f_8);
						iLocal_121[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(StackVal));
					}
					else
					{
						iLocal_121[iVar0] = HUD::ADD_BLIP_FOR_COORD(func_1921(iVar0));
					}
					HUD::SET_BLIP_SPRITE(iLocal_121[iVar0], func_1917(iVar0));
					__LIB_2__::func_53(&(iLocal_121[iVar0]), func_1915(iVar0));
					HUD::SET_BLIP_SCALE(iLocal_121[iVar0], func_1913(iVar0));
					if (Local_222.f_456.f_4 != 0)
					{
						Stack.Push(iLocal_121[iVar0]);
						Stack.Push(iVar0);
						Call_Loc(Local_222.f_456.f_4);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
					}
					if (!func_615(29))
					{
						HUD::FLASH_MINIMAP_DISPLAY();
						func_505(29);
					}
				}
				else
				{
					if (HUD::GET_BLIP_COLOUR(iLocal_121[iVar0]) != __LIB_1__::func_389(func_1915(iVar0)))
					{
						__LIB_2__::func_53(&(iLocal_121[iVar0]), func_1915(iVar0));
					}
					if (!func_1919(iVar0) && !__LIB_0__::func_78(HUD::GET_BLIP_COORDS(iLocal_121[iVar0]), func_1921(iVar0), 0))
					{
						HUD::SET_BLIP_COORDS(iLocal_121[iVar0], func_1921(iVar0));
					}
					if (Local_222.f_456.f_4 != 0)
					{
						Stack.Push(iLocal_121[iVar0]);
						Stack.Push(iVar0);
						Call_Loc(Local_222.f_456.f_4);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(StackVal, StackVal);
					}
				}
				if (Local_222.f_456.f_3 != 0)
				{
					Stack.Push(iVar0);
					Call_Loc(Local_222.f_456.f_3);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_120[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_120[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_121[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_121[iVar0]));
			}
		}
		iVar0++;
	}
}

float func_1913(int iParam0)//Position - 0xB41B0
{
	if (Local_222.f_456.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_456.f_7);
		return StackVal;
	}
	return __LIB_19__::func_289();
}

int func_1915(int iParam0)//Position - 0xB41E3
{
	if (Local_222.f_456.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_456.f_6);
		return StackVal;
	}
	return __LIB_1__::func_516();
}

int func_1917(int iParam0)//Position - 0xB4213
{
	if (Local_222.f_456.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_456.f_5);
		return StackVal;
	}
	return __LIB_20__::func_403();
}

int func_1919(int iParam0)//Position - 0xB4243
{
	Stack.Push(Local_222.f_456.f_8 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_456.f_8);
	if (StackVal && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(StackVal))
	{
		return 1;
	}
	return 0;
}

int func_1920(int iParam0)//Position - 0xB4271
{
	if (Local_222.f_456.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_456.f_2);
		return StackVal;
	}
	return 1;
}

Vector3 func_1921(int iParam0)//Position - 0xB4294
{
	if (Local_222.f_456.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_456.f_9);
		if (!__LIB_0__::func_86(StackVal, StackVal, StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_456.f_9);
			return StackVal, StackVal, StackVal;
		}
	}
	return Local_205.f_134.f_1[iParam0 /*5*/];
}

int func_1922(int iParam0)//Position - 0xB42D5
{
	if (Local_222.f_456.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_456.f_1);
		return StackVal;
	}
	return 1;
}

void func_1923()//Position - 0xB42F8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<9> Var7;
	iVar0 = iLocal_339;
	if (!func_1942())
	{
		return;
	}
	bVar3 = (PED::IS_PED_IN_FLYING_VEHICLE(iVar0) || __LIB_19__::func_397(iVar0));
	iVar1 = 0;
	while (iVar1 < Local_205.f_111)
	{
		bVar2 = false;
		Var7 = { func_101(iVar1) };
		if ((__LIB_0__::func_86(Var7.f_2) || __LIB_0__::func_86(Var7.f_5)) || Var7.f_8 == 0f)
		{
			Jump @716; //curOff = 108
		}
		else
		{
			Var4 = { Var7.f_2 };
			Var5 = { Var7.f_5 };
			fVar6 = Var7.f_8;
		}
		if (((((((func_102(iVar1, 0) || func_102(iVar1, 1)) || func_102(iVar1, 2)) || func_102(iVar1, 6)) || func_102(iVar1, 7)) || func_102(iVar1, 8)) || func_102(iVar1, 9)) || func_102(iVar1, 5))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Var4, Var5, fVar6, false, true, 0))
			{
				Stack.Push(func_102(iVar1, 7));
				Stack.Push(iVar1);
				Stack.Push(7);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal && StackVal)
				{
					if (func_861() == 4)
					{
						func_621(1);
					}
				}
				Stack.Push(func_102(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_1941(iVar1, 1);
					func_1938(iVar1, 1);
					bVar2 = true;
					if (!func_66(14))
					{
						__LIB_0__::func_467();
					}
				}
				Stack.Push(func_102(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((func_102(iVar1, 2) && bVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_1941(iVar1, 1);
					bVar2 = true;
					if (!func_66(14))
					{
						__LIB_0__::func_467();
					}
				}
				Stack.Push(func_102(iVar1, 6));
				Stack.Push(iVar1);
				Stack.Push(6);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_1941(iVar1, 1);
					bVar2 = true;
					func_1936(iVar1);
				}
				Stack.Push(func_102(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_1941(iVar1, 1);
					bVar2 = true;
					func_1933(iVar1);
				}
				Stack.Push(func_102(iVar1, 9));
				Stack.Push(iVar1);
				Stack.Push(9);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_1941(iVar1, 1);
					bVar2 = true;
					func_505(46);
				}
				Stack.Push(func_102(iVar1, 5));
				Stack.Push(iVar1);
				Stack.Push(5);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_1941(iVar1, 1);
					bVar2 = true;
					if (__LIB_0__::func_109(iVar1))
					{
						func_1927();
					}
				}
			}
			if (!bVar2)
			{
				func_1941(iVar1, 0);
			}
			if (func_102(iVar1, 1) || func_102(iVar1, 2))
			{
				if (__LIB_0__::func_109(iVar1))
				{
					func_1924(iVar1, bVar2, bVar3);
				}
			}
		}
		if (func_102(iVar1, 3))
		{
		}
		iVar1++;
	}
}

void func_1924(int iParam0, bool bParam1, bool bParam2)//Position - 0xB45D0
{
	if (func_1925(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_864(&(Local_378.f_72.f_4[iParam0 /*4*/])))
		{
			__LIB_0__::func_795(&(Local_378.f_72.f_4[iParam0 /*4*/]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_378.f_72.f_4[iParam0 /*4*/]));
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_453);
			if (__LIB_0__::func_937(StackVal, StackVal, 0))
			{
				func_1938(iParam0, 1);
			}
		}
	}
	else
	{
		__LIB_0__::func_794(&(Local_378.f_72.f_4[iParam0 /*4*/]));
	}
}

bool func_1925(int iParam0)//Position - 0xB4645
{
	return __LIB_3__::func_479(&(Local_378.f_72), iParam0);
}

int func_1927()//Position - 0xB4677
{
	int iVar0;
	iVar0 = func_1931();
	if (iVar0 != -1)
	{
		__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_378.f_22[iVar0 /*24*/]), __LIB_19__::func_401(iVar0), 35);
		return 1;
	}
	return 0;
}

int func_1931()//Position - 0xB48C1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	iVar1 = -1;
	fVar4 = 999999.9f;
	Var2 = { Local_342 };
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iVar0 /*24*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_22[iVar0 /*24*/]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_19__::func_401(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_378.f_22[iVar0 /*24*/]), true))
					{
						fVar3 = SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_378.f_22[iVar0 /*24*/]), false));
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

void func_1933(int iParam0)//Position - 0xB496C
{
	if (func_102(iParam0, 10))
	{
		if (bLocal_334)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_339, 0, 0);
		}
	}
	else if (func_1934())
	{
	}
}

int func_1934()//Position - 0xB4998
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
	{
		return func_1935();
	}
	else if (bLocal_334)
	{
		FIRE::ADD_EXPLOSION(Local_342, 72, 1f, true, false, 1f, false);
		ENTITY::SET_ENTITY_HEALTH(iLocal_339, 0, 0);
		return 1;
	}
	return 0;
}

int func_1935()//Position - 0xB49DD
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iLocal_339);
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

void func_1936(int iParam0)//Position - 0xB4A23
{
	int iVar0;
	Stack.Push(&(Local_385[iLocal_340 /*38*/].f_24.f_4[iParam0 /*4*/].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_453);
	if (!__LIB_0__::func_937(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_453);
		iVar0 = (StackVal - __LIB_1__::func_724(&(Local_385[iLocal_340 /*38*/].f_24.f_4[iParam0 /*4*/].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			__LIB_10__::func_399(&(uLocal_321[iParam0]));
			if (__LIB_19__::func_402(&(uLocal_321[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (__LIB_19__::func_402(&(uLocal_321[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (func_102(iParam0, 10))
	{
		if (bLocal_334)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_339, 0, 0);
		}
	}
	else if (func_1934())
	{
	}
}

void func_1938(int iParam0, bool bParam1)//Position - 0xB4B00
{
	if (!__LIB_0__::func_109(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Local_385[iLocal_340 /*38*/].f_24), iParam0))
		{
			__LIB_7__::func_698(&(Local_385[iLocal_340 /*38*/].f_24), iParam0);
		}
	}
	else if (__LIB_3__::func_479(&(Local_385[iLocal_340 /*38*/].f_24), iParam0))
	{
		__LIB_7__::func_696(&(Local_385[iLocal_340 /*38*/].f_24), iParam0);
	}
}

void func_1941(int iParam0, bool bParam1)//Position - 0xB4BA8
{
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Local_385[iLocal_340 /*38*/].f_24.f_2), iParam0))
		{
			__LIB_7__::func_698(&(Local_385[iLocal_340 /*38*/].f_24.f_2), iParam0);
		}
	}
	else
	{
		if (__LIB_3__::func_479(&(Local_385[iLocal_340 /*38*/].f_24.f_2), iParam0))
		{
			__LIB_7__::func_696(&(Local_385[iLocal_340 /*38*/].f_24.f_2), iParam0);
		}
		if (func_102(iParam0, 6))
		{
			if (uLocal_321[iParam0] != -1)
			{
				__LIB_10__::func_399(&(uLocal_321[iParam0]));
			}
			if (__LIB_0__::func_864(&(Local_385[iLocal_340 /*38*/].f_24.f_4[iParam0 /*4*/].f_2)))
			{
				__LIB_0__::func_794(&(Local_385[iLocal_340 /*38*/].f_24.f_4[iParam0 /*4*/].f_2));
			}
		}
	}
}

int func_1942()//Position - 0xB4C56
{
	if (((!bLocal_334 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_337)) || func_861() == 21) || func_861() == 48)
	{
		return 0;
	}
	return 1;
}

void func_1943()//Position - 0xB4C91
{
	func_1947();
	func_1944();
}

void func_1944()//Position - 0xB4CA1
{
	int iVar0;
	func_725(1);
	if (!__LIB_0__::func_109())
	{
		return;
	}
	if (Local_222.f_94.f_3 != 0)
	{
		Stack.Push(iLocal_330);
		Call_Loc(Local_222.f_94.f_3);
		iVar0 = StackVal;
		if (iVar0 != iLocal_330 && iVar0 != -1)
		{
			iLocal_330 = iVar0;
			func_1945(iLocal_330);
		}
	}
}

void func_1945(int iParam0)//Position - 0xB4CEF
{
	if (Local_222.f_94.f_3.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_94.f_3.f_1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_94.f_3.f_1);
			AUDIO::TRIGGER_MUSIC_EVENT(StackVal);
		}
	}
}

void func_1947()//Position - 0xB4D38
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Stack.Push(Local_222.f_94 != 0);
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_94);
		if (StackVal && StackVal)
		{
			if (!func_1950(iVar0))
			{
				Stack.Push(Local_222.f_94.f_1 != 0);
				Stack.Push(&(Local_323.f_2[iVar0]));
				Stack.Push(iVar0);
				Call_Loc(Local_222.f_94.f_1);
				if (StackVal && StackVal)
				{
					func_1949(iVar0);
					return;
				}
			}
			else
			{
				Stack.Push(Local_222.f_94.f_2 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_222.f_94.f_2);
				if (StackVal && StackVal)
				{
					if (AUDIO::HAS_SOUND_FINISHED(Local_323.f_2[iVar0]))
					{
						__LIB_10__::func_399(&(Local_323.f_2[iVar0]));
						func_1948(iVar0);
					}
				}
			}
		}
		else if (func_1950(iVar0))
		{
			__LIB_10__::func_399(&(Local_323.f_2[iVar0]));
			func_1948(iVar0);
		}
		iVar0++;
	}
}

void func_1948(int iParam0)//Position - 0xB4E00
{
	if (__LIB_3__::func_479(&Local_323, iParam0))
	{
		__LIB_7__::func_696(&Local_323, iParam0);
	}
}

void func_1949(int iParam0)//Position - 0xB4E1D
{
	if (!__LIB_3__::func_479(&Local_323, iParam0))
	{
		__LIB_7__::func_698(&Local_323, iParam0);
	}
}

bool func_1950(int iParam0)//Position - 0xB4E3B
{
	return __LIB_3__::func_479(&Local_323, iParam0);
}

void func_1951()//Position - 0xB4E4C
{
	if (!func_2018())
	{
		func_1969();
		return;
	}
	if (!__LIB_0__::func_109())
	{
		__LIB_19__::func_497();
		return;
	}
	if (__LIB_0__::func_114())
	{
		__LIB_3__::func_198(__LIB_3__::func_860(), 0);
	}
	else if (func_870())
	{
		__LIB_3__::func_198("BBOT_LOSECOPS" /* GXT: Lose the Cops. */, 0);
	}
	else if (func_862() != -1)
	{
		Call_Loc(Local_227[func_862() /*21*/].f_20);
	}
}

void func_1969()//Position - 0xB53EA
{
	__LIB_19__::func_497();
	func_1970(1, 1, 1);
}

void func_1970(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB53FD
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (bParam2)
	{
		func_2017();
	}
	func_2015();
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = 0;
			while (iVar0 < func_37())
			{
				if (uLocal_369[iVar0] != __LIB_0__::func_162())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uLocal_369[iVar0]))
					{
						bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(uLocal_369[iVar0]);
						bVar2 = __LIB_1__::func_693(bVar1, 1, 1);
						func_1971(bVar1, bVar2, 0);
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

void func_1971(bool bParam0, bool bParam1, int iParam2)//Position - 0xB5474
{
	var uVar0;
	uVar0 = func_1647(bParam0);
	if (bParam0 != __LIB_0__::func_162())
	{
		if (bParam1)
		{
			if (BitTest(Local_299.f_8, bParam0) || iParam2)
			{
				if (__LIB_19__::func_295(bParam0))
				{
					__LIB_12__::func_554(bParam0, __LIB_1__::func_389(__LIB_19__::func_564(bLocal_337, -2, 0, 0, 0)), 0, 0);
				}
				if (__LIB_19__::func_405(bParam0))
				{
					__LIB_3__::func_459(bParam0, 0);
				}
				if (__LIB_19__::func_294(bParam0))
				{
					__LIB_15__::func_359(bParam0, 0, 1, 0);
				}
				if (__LIB_19__::func_293(bParam0))
				{
					if (__LIB_19__::func_342(bParam0))
					{
						__LIB_19__::func_341(bParam0, 0, 1);
					}
				}
				if (__LIB_19__::func_404(bParam0))
				{
					__LIB_12__::func_535(bParam0, func_867(uVar0), 0, 0);
				}
				if (__LIB_19__::func_403(bParam0))
				{
					__LIB_19__::func_340(bParam0, 1f, 0, 0);
				}
				if (__LIB_19__::func_295(bParam0))
				{
					__LIB_12__::func_554(bParam0, 1, 0, 0);
				}
				if (__LIB_19__::func_462(bParam0))
				{
					__LIB_19__::func_359(bParam0, 0, 0);
				}
				MISC::CLEAR_BIT(&(Local_299.f_8), bParam0);
			}
		}
	}
}

void func_2015()//Position - 0xB63FC
{
	func_2016();
}

void func_2016()//Position - 0xB6408
{
	if (HUD::DOES_BLIP_EXIST(iLocal_376))
	{
		HUD::REMOVE_BLIP(&iLocal_376);
	}
}

void func_2017()//Position - 0xB6421
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_299.f_0)
	{
		func_793(iVar0);
		iVar0++;
	}
}

int func_2018()//Position - 0xB6443
{
	if (!bLocal_345)
	{
		return 0;
	}
	if (!func_615(7))
	{
		return 0;
	}
	if (func_615(8))
	{
		return 0;
	}
	if (!func_615(31))
	{
		return 0;
	}
	if (!func_487() == 0)
	{
		return 0;
	}
	if (func_2019())
	{
		return 0;
	}
	return 1;
}

bool func_2019()//Position - 0xB6498
{
	Call_Loc(Local_222.f_47);
	return StackVal;
}

void func_2020()//Position - 0xB64A6
{
	func_2053();
	func_2048();
	func_2041();
	if (bLocal_346)
	{
		func_2025();
		func_2021();
	}
}

void func_2021()//Position - 0xB64C8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (Local_299.f_11 != -1)
		{
			if (Local_299.f_11 == iVar0 && Local_299[iVar0 /*7*/].f_4 != bLocal_337)
			{
				Local_299.f_11 = func_1647(bLocal_337);
				if (!func_774(iVar0, iLocal_341, 6) && !func_436(iVar0, 29))
				{
				}
			}
		}
		else if (Local_299[iVar0 /*7*/].f_4 == bLocal_337)
		{
			if (!func_774(iVar0, iLocal_341, 6) && !func_436(iVar0, 4))
			{
				if (func_2024(iVar0))
				{
					Local_299.f_11 = iVar0;
					__LIB_19__::func_463(Local_347.f_0, bLocal_337, __LIB_0__::func_797(), 0, func_66(20), -1, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_2024(int iParam0)//Position - 0xB664B
{
	if (func_66(16))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_47.f_2);
	if (!StackVal)
	{
		if (Local_299.f_11 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

void func_2025()//Position - 0xB667D
{
	if (!__LIB_0__::func_109())
	{
		return;
	}
	func_2033();
	func_2026();
}

void func_2026()//Position - 0xB6698
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (func_3(12))
	{
		if (!__LIB_19__::func_393())
		{
			if (!func_615(54))
			{
				__LIB_15__::func_570();
				__LIB_19__::func_296(1, 2147483647, 1);
				func_505(54);
				__LIB_0__::func_151("BBH_VISWARN" /* GXT: WARNING: You are visible ~HUD_COLOUR_RED~~BLIP_SIGHTSEER~~s~ to all players in session. */, -1);
			}
		}
		else if (func_615(54))
		{
			__LIB_15__::func_571();
			__LIB_19__::func_296(0, -1, 0);
			func_726(54);
		}
	}
	if (__LIB_0__::func_864(&(Local_378.f_2.f_18)))
	{
		if (!__LIB_0__::func_937(&(Local_378.f_2.f_18), func_905(), 0))
		{
			iVar0 = (func_905() - __LIB_1__::func_724(&(Local_378.f_2.f_18), 0, 0));
			if (iVar0 <= 0)
			{
				return;
			}
			iVar1 = 6;
			if (iVar0 > 5000)
			{
				iVar1 = 1;
			}
			__LIB_1__::func_350(iVar0, "GR_GLBPNG" /* GXT: GLOBAL SIGNAL */, 0, 0, -1, 0, 6, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
		}
	}
}

void func_2033()//Position - 0xB6A35
{
	int iVar0;
	int iVar1;
	if (Local_205.f_102 == -1 || Local_205.f_102.f_1 == 1)
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_378.f_106)))
	{
		return;
	}
	if (NETWORK::IS_PLAYER_IN_CUTSCENE(bLocal_337))
	{
		return;
	}
	iVar0 = (func_19() - __LIB_1__::func_724(&(Local_378.f_106), 0, 0));
	if (iVar0 <= func_2040() && !func_615(59))
	{
		func_505(59);
	}
	if (Local_205.f_102.f_1 == 2 && !func_615(59))
	{
		return;
	}
	if (Local_205.f_102.f_1 == 3 && (!func_2036() || !func_615(59)))
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
		iVar1 = __LIB_3__::func_969();
	}
	__LIB_1__::func_350(iVar0, "SMHUD_TIMEREM" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
	if (__LIB_2__::func_815(Local_378.f_106, (func_19() - 5000), 0) && !__LIB_2__::func_815(Local_378.f_106, (func_19() - 4000), 0))
	{
		if (!func_615(22))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_505(22);
		}
	}
	else if (func_615(22))
	{
		func_726(22);
	}
}

int func_2036()//Position - 0xB6BD7
{
	int iVar0;
	if (func_420(iLocal_341, 3))
	{
		__LIB_20__::func_481(Local_347.f_1, 1);
		iVar0 = 1;
	}
	else
	{
		__LIB_20__::func_481(Local_347.f_1, 0);
		iVar0 = 0;
	}
	return iVar0;
}

int func_2040()//Position - 0xB6CA5
{
	if (Local_222.f_82.f_2 != 0)
	{
		Call_Loc(Local_222.f_82.f_2);
		return StackVal;
	}
	return 300000;
}

void func_2041()//Position - 0xB6CC7
{
	if (func_2047())
	{
		if (__LIB_2__::func_6() != 2 && MISC::GET_PROFILE_SETTING(221) != 1)
		{
			HUD::SET_RADAR_ZOOM_PRECISE(func_2046());
			__LIB_15__::func_553(1);
			if (func_2044())
			{
				func_2042(1);
			}
			func_505(41);
		}
	}
	else if (func_615(41))
	{
		HUD::SET_RADAR_ZOOM_PRECISE(0f);
		__LIB_15__::func_553(0);
		if (func_2044())
		{
			func_2042(0);
		}
		func_726(41);
	}
}

void func_2042(bool bParam0)//Position - 0xB6D33
{
	if (bParam0)
	{
		__LIB_11__::func_966(1);
		func_505(71);
	}
	else
	{
		__LIB_11__::func_966(0);
		func_726(71);
	}
}

int func_2044()//Position - 0xB6D76
{
	if (Local_222.f_521.f_1 != 0)
	{
		Call_Loc(Local_222.f_521.f_1);
		return StackVal;
	}
	return 0;
}

float func_2046()//Position - 0xB6DAE
{
	if (Local_222.f_521.f_2 != 0)
	{
		Call_Loc(Local_222.f_521.f_2);
		return StackVal;
	}
	return 60f;
}

int func_2047()//Position - 0xB6DD3
{
	if (bLocal_334 && !PED::IS_PED_IN_ANY_PLANE(iLocal_339))
	{
		if (Local_222.f_521 != 0)
		{
			Call_Loc(Local_222.f_521);
			return StackVal;
		}
	}
	return 0;
}

void func_2048()//Position - 0xB6E03
{
	if (func_2052())
	{
		func_2049(1);
	}
	else
	{
		func_2049(0);
	}
}

void func_2049(bool bParam0)//Position - 0xB6E1F
{
	if (bParam0)
	{
		if (!func_615(32))
		{
			__LIB_19__::func_298(0, 13, 1, 1, 0, 1, 1, 0, 0);
			func_505(32);
		}
	}
	else if (func_615(32))
	{
		__LIB_19__::func_297(0);
		func_726(32);
	}
}

int func_2052()//Position - 0xB6FD5
{
	if ((((bLocal_346 && func_66(18)) && func_772(bLocal_337, 1)) && func_442(func_1647(bLocal_337))) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
	{
		return 1;
	}
	return 0;
}

void func_2053()//Position - 0xB701E
{
	func_2054();
}

void func_2054()//Position - 0xB702A
{
	if (func_2606() > 0)
	{
		if (!func_615(9))
		{
			if (func_2060())
			{
				if (func_2058())
				{
					Stack.Push(&uLocal_370);
					Call_Loc(Local_222.f_47.f_1);
					if (__LIB_0__::func_937(StackVal, StackVal, 0) && !__LIB_19__::func_299())
					{
						__LIB_0__::func_467();
						func_505(9);
					}
				}
			}
			else
			{
				func_505(9);
				func_505(10);
			}
		}
		else if (!func_615(10))
		{
			if (__LIB_1__::func_962(86))
			{
				func_505(10);
			}
		}
		else if (!__LIB_1__::func_962(86))
		{
			func_505(69);
		}
	}
}

int func_2058()//Position - 0xB70E2
{
	if ((((bLocal_334 && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_193()) && bLocal_345) && __LIB_19__::func_406())
	{
		return 1;
	}
	return 0;
}

int func_2060()//Position - 0xB7142
{
	if (func_66(24) || func_66(25))
	{
		return 0;
	}
	Stack.Push(Local_222.f_47.f_6 != 0);
	Call_Loc(Local_222.f_47.f_6);
	if (StackVal && StackVal)
	{
		return 0;
	}
	return 1;
}

void func_2061()//Position - 0xB7181
{
	func_2074();
	func_2070();
	func_2067();
	__LIB_0__::func_467();
	func_2065();
	func_2064();
	func_2063();
	func_2062();
}

void func_2062()//Position - 0xB71A9
{
	if ((((func_615(80) && bLocal_333) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_1635(bLocal_337, func_64(), 0, 10000);
		func_726(80);
	}
}

void func_2063()//Position - 0xB71F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_64() <= 0)
	{
		return;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_343))
	{
		return;
	}
	if (!__LIB_0__::func_937(&(Local_313.f_5), 1000, 0))
	{
		return;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_343, iVar0, false))
		{
		}
		else
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, iVar0, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (!PED::IS_PED_A_PLAYER(iVar1))
			{
			}
			else
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (!__LIB_1__::func_693(iVar2, 1, 1) || iVar2 == PLAYER::PLAYER_ID())
				{
				}
				else
				{
					iVar3 = PLAYER::GET_PLAYER_WANTED_LEVEL(iVar2);
					if (iVar3 > 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_694(iVar2), PLAYER::GET_PLAYER_WANTED_CENTRE_POSITION(iVar2), true) < PLAYER::GET_WANTED_LEVEL_RADIUS(iVar3))
					{
						func_1635(PLAYER::PLAYER_ID(), func_64(), 0, 0);
					}
					else
					{
						iVar0++;
					}
					__LIB_0__::func_794(&(Local_313.f_5));
				}
void func_2064()//Position - 0xB72EC
{
	if (Local_222.f_64.f_8 == 0)
	{
		return;
	}
	if (!__LIB_1__::func_693(bLocal_337, 1, 1))
	{
		if (func_615(67))
		{
			func_505(66);
		}
		return;
	}
	if (__LIB_3__::func_144(bLocal_337, 0, 0))
	{
		return;
	}
	Call_Loc(Local_222.f_64.f_8);
	if (StackVal)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) > 0)
		{
			func_505(67);
		}
		else if (func_615(66))
		{
			func_1635(bLocal_337, func_64(), 0, 0);
			func_726(66);
		}
		else
		{
			func_726(67);
		}
	}
	else
	{
		func_726(67);
	}
}

void func_2065()//Position - 0xB737D
{
	if (((((func_615(14) && bLocal_333) && !__LIB_3__::func_144(bLocal_337, 0, 0)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_1635(bLocal_337, func_64(), 0, 10000);
		func_726(14);
	}
}

void func_2067()//Position - 0xB73E0
{
	if (func_2069())
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) < func_64())
		{
			func_1635(bLocal_337, func_64(), 0, 0);
		}
		PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(bLocal_337);
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(bLocal_337);
		func_505(17);
	}
	else if (func_615(17))
	{
		if (func_2068())
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) > 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_337, 0, false);
			}
		}
		func_726(17);
	}
}

int func_2068()//Position - 0xB744B
{
	if (Local_222.f_64.f_9 != 0)
	{
		Call_Loc(Local_222.f_64.f_9);
		return StackVal;
	}
	return 0;
}

int func_2069()//Position - 0xB746A
{
	if (Local_222.f_64.f_7 != 0)
	{
		Call_Loc(Local_222.f_64.f_7);
		return StackVal;
	}
	return 0;
}

void func_2070()//Position - 0xB7489
{
	if (func_2073())
	{
		if (!func_615(18))
		{
			if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_337) < func_2072())
			{
				MISC::SET_FAKE_WANTED_LEVEL(func_2072());
			}
			func_505(18);
			if (func_615(14))
			{
				func_505(72);
			}
			if (func_615(80))
			{
				func_505(81);
			}
		}
	}
	else
	{
		func_2071();
	}
}

void func_2071()//Position - 0xB74E6
{
	if (func_615(18))
	{
		MISC::SET_FAKE_WANTED_LEVEL(0);
		func_726(18);
		func_726(72);
		func_726(81);
	}
}

int func_2072()//Position - 0xB750E
{
	if (Local_222.f_64.f_1 != 0)
	{
		Call_Loc(Local_222.f_64.f_1);
		return StackVal;
	}
	if (func_615(14))
	{
		return func_64();
	}
	if (func_615(80))
	{
		return func_64();
	}
	return Local_205.f_99.f_1;
}

int func_2073()//Position - 0xB7552
{
	if (((func_615(14) || (func_615(72) && PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) == 0)) || func_615(80)) || (func_615(81) && PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) == 0))
	{
		return 1;
	}
	if (Local_222.f_64.f_6 != 0)
	{
		Call_Loc(Local_222.f_64.f_6);
		return StackVal;
	}
	return 0;
}

void func_2074()//Position - 0xB75BE
{
	if (func_615(15))
	{
		if (!func_2080(Local_313.f_2))
		{
			if (func_2077(Local_313.f_0, Local_313.f_1))
			{
				if (__LIB_0__::func_955(Local_347.f_0) != 2)
				{
					if (Local_313.f_0 > func_64())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(Local_313.f_0);
					}
					else if (PLAYER::GET_MAX_WANTED_LEVEL() != func_64())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_64());
						func_726(13);
					}
				}
				if (BitTest(Global_1853348[bLocal_337 /*834*/].f_833, 17))
				{
					__LIB_15__::func_302();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_337, Local_313.f_0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(bLocal_337, false);
				Stack.Push(Local_222.f_64.f_12 != 0);
				Call_Loc(Local_222.f_64.f_12);
				if (StackVal && StackVal)
				{
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(104 /*EVENT_SHOCKING_PED_SHOT*/, iLocal_339, -1f);
					PED::TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(iLocal_339, Local_342, 20f, joaat("ARMY"));
				}
				func_2075();
				func_726(15);
			}
			else
			{
				func_2075();
				func_726(15);
			}
		}
	}
}

void func_2075()//Position - 0xB76A2
{
	Local_313.f_0 = 0;
	Local_313.f_2 = 0;
	Local_313.f_1 = 0;
	__LIB_0__::func_794(&(Local_313.f_3));
}

int func_2077(int iParam0, bool bParam1)//Position - 0xB775D
{
	if (func_64() <= 0 && !bParam1)
	{
		return 0;
	}
	if (func_2079(bLocal_337, 0, -1))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) == iParam0)
	{
		return 0;
	}
	if (__LIB_19__::func_407() && !bParam1)
	{
		return 0;
	}
	Stack.Push(Local_222.f_64.f_3 != 0);
	Stack.Push(bParam1);
	Call_Loc(Local_222.f_64.f_3);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_2079(bool bParam0, bool bParam1, int iParam2)//Position - 0xB7818
{
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || __LIB_0__::func_172(Global_2689235[bParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return __LIB_19__::func_453(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_2080(var uParam0)//Position - 0xB789F
{
	Stack.Push(Local_222.f_64.f_13 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_64.f_13);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (Local_313.f_2 == 0 || __LIB_0__::func_937(&(Local_313.f_3), Local_313.f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_2081()//Position - 0xB78EA
{
	func_2102();
	func_2082();
}

void func_2082()//Position - 0xB78FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	Stack.Push((Local_378.f_138.f_19 > 1 && Local_222.f_466.f_3 != 0));
	Call_Loc(Local_222.f_466.f_3);
	if (StackVal && StackVal)
	{
		Local_320.f_9 = func_761();
		iVar0 = 0;
		while (iVar0 < Local_378.f_138.f_19)
		{
			Stack.Push(func_2101());
			Stack.Push(iVar0);
			Call_Loc(Local_222.f_466.f_4.f_3);
			if (StackVal && StackVal)
			{
				if (func_2100(iVar0))
				{
					if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(Local_320.f_1[iVar0 /*4*/].f_1), func_2099(Local_320.f_1[iVar0 /*4*/]), 10f, 0) && !__LIB_0__::func_86(func_754()))
					{
						HUD::SET_BLIP_COORDS(Local_320.f_1[iVar0 /*4*/].f_1, func_2099(Local_320.f_1[iVar0 /*4*/]));
						HUD::SET_BLIP_ROUTE(Local_320.f_1[iVar0 /*4*/].f_1, func_2098(iVar0));
					}
					iVar1 = __LIB_0__::func_162();
					if (iVar1 != -1)
					{
						HUD::SET_BLIP_ROTATION(Local_320.f_1[iVar0 /*4*/].f_1, iVar1);
					}
					if (func_2096())
					{
						func_2095(iVar0);
					}
				}
			}
			else
			{
				func_2094(iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		if (func_2101())
		{
			if (func_2091())
			{
				if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(Local_320.f_1[func_2090() /*4*/].f_1), func_754(), 10f, 0) && !__LIB_0__::func_86(func_754()))
				{
					HUD::SET_BLIP_COORDS(Local_320.f_1[func_2090() /*4*/].f_1, func_754());
					HUD::SET_BLIP_ROUTE(Local_320.f_1[func_2090() /*4*/].f_1, func_2088());
				}
				iVar2 = __LIB_0__::func_162();
				if (iVar2 != -1)
				{
					HUD::SET_BLIP_ROTATION(Local_320.f_1[func_2090() /*4*/].f_1, iVar2);
				}
				if (func_2096())
				{
					func_2084();
				}
			}
		}
		else
		{
			func_2083();
		}
		Local_320.f_9 = func_761();
	}
}

void func_2083()//Position - 0xB7AB0
{
	if (HUD::DOES_BLIP_EXIST(Local_320.f_1[func_2090() /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_320.f_1[func_2090() /*4*/].f_1));
	}
}

void func_2084()//Position - 0xB7ADD
{
	float fVar0;
	fVar0 = func_2087();
	__LIB_19__::func_395(func_754(), (fVar0 * 1.8f), (fVar0 * 1.8f), __LIB_19__::func_300(), 12, __LIB_19__::func_408());
}

float func_2087()//Position - 0xB7B27
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
	{
		return 1.5f;
	}
	return 0.5f;
}

int func_2088()//Position - 0xB7B47
{
	if (func_861() == 24)
	{
		Stack.Push(func_2090());
		Call_Loc(Local_222.f_466.f_2);
		return StackVal;
	}
	else if (func_861() == 25 && func_2089(bLocal_337))
	{
		Stack.Push(func_2090());
		Call_Loc(Local_222.f_466.f_2);
		return StackVal;
	}
	return 0;
}

int func_2089(int iParam0)//Position - 0xB7B92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (__LIB_0__::func_336(iVar0, 0) != -1)
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
						if (func_772(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), 1))
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

int func_2090()//Position - 0xB7C30
{
	return Local_385[iLocal_340 /*38*/].f_14;
}

int func_2091()//Position - 0xB7C42
{
	if (!HUD::DOES_BLIP_EXIST(Local_320.f_1[func_2090() /*4*/].f_1))
	{
		if (__LIB_0__::func_86(func_754()))
		{
			return 0;
		}
		Local_320.f_1[func_2090() /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(func_754());
		if (__LIB_0__::func_162() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_320.f_1[func_2090() /*4*/].f_1, __LIB_0__::func_162());
		}
		__LIB_2__::func_53(&(Local_320.f_1[func_2090() /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_320.f_1[func_2090() /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_320.f_1[func_2090() /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_320.f_1[func_2090() /*4*/].f_1, func_2088());
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_3__::func_860()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_320.f_1[func_2090() /*4*/].f_1, __LIB_3__::func_860());
		}
		if (Local_320.f_1[func_2090() /*4*/].f_2 && !Local_320.f_1[func_2090() /*4*/].f_3)
		{
			__LIB_19__::func_390(&(Local_320.f_1[func_2090() /*4*/].f_1), 0);
			Local_320.f_1[func_2090() /*4*/].f_3 = 1;
		}
		return 0;
	}
	else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_320.f_1[func_2090() /*4*/].f_1))
	{
		if (!func_2088())
		{
			HUD::SET_BLIP_ROUTE(Local_320.f_1[func_2090() /*4*/].f_1, false);
		}
	}
	else if (func_2088())
	{
		HUD::SET_BLIP_ROUTE(Local_320.f_1[func_2090() /*4*/].f_1, true);
	}
	return 1;
}

void func_2094(int iParam0)//Position - 0xB7DB8
{
	if (HUD::DOES_BLIP_EXIST(Local_320.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_320.f_1[iParam0 /*4*/].f_1));
	}
}

void func_2095(int iParam0)//Position - 0xB7DE1
{
	float fVar0;
	fVar0 = func_2087();
	__LIB_19__::func_395(func_2099(Local_320.f_1[iParam0 /*4*/]), (fVar0 * 1.8f), (fVar0 * 1.8f), 2.5f, 12, 0.7f);
}

int func_2096()//Position - 0xB7E1C
{
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	Stack.Push(Local_222.f_466.f_1 != 0);
	Call_Loc(Local_222.f_466.f_1);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	if (iLocal_344 != 0 && VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_344))
	{
		if (!__LIB_0__::func_86(__LIB_19__::func_454(func_761())))
		{
			return 0;
		}
	}
	return 1;
}

int func_2098(int iParam0)//Position - 0xB7E84
{
	if (func_861() == 24)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_466.f_2);
		return StackVal;
	}
	else if (func_861() == 25 && func_2089(bLocal_337))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_466.f_2);
		return StackVal;
	}
	return 0;
}

Vector3 func_2099(int iParam0)//Position - 0xB7ECB
{
	return func_755(iParam0);
}

int func_2100(int iParam0)//Position - 0xB7ED9
{
	if (!HUD::DOES_BLIP_EXIST(Local_320.f_1[iParam0 /*4*/].f_1))
	{
		if (__LIB_0__::func_86(func_2099(Local_320.f_1[iParam0 /*4*/])))
		{
			return 0;
		}
		Local_320.f_1[iParam0 /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(func_2099(Local_320.f_1[iParam0 /*4*/]));
		if (__LIB_0__::func_162() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_320.f_1[iParam0 /*4*/].f_1, __LIB_0__::func_162());
		}
		__LIB_2__::func_53(&(Local_320.f_1[iParam0 /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_320.f_1[iParam0 /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_320.f_1[iParam0 /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_320.f_1[iParam0 /*4*/].f_1, func_2098(iParam0));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_3__::func_860()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_320.f_1[iParam0 /*4*/].f_1, __LIB_3__::func_860());
		}
		if (Local_320.f_1[iParam0 /*4*/].f_2 && !Local_320.f_1[iParam0 /*4*/].f_3)
		{
			__LIB_19__::func_390(&(Local_320.f_1[iParam0 /*4*/].f_1), 0);
			Local_320.f_1[iParam0 /*4*/].f_3 = 1;
		}
		return 0;
	}
	else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_320.f_1[iParam0 /*4*/].f_1))
	{
		if (!func_2098(iParam0))
		{
			HUD::SET_BLIP_ROUTE(Local_320.f_1[iParam0 /*4*/].f_1, false);
		}
	}
	else if (func_2098(iParam0))
	{
		HUD::SET_BLIP_ROUTE(Local_320.f_1[iParam0 /*4*/].f_1, true);
	}
	return 1;
}

int func_2101()//Position - 0xB8034
{
	if (!bLocal_346)
	{
		return 0;
	}
	Stack.Push(Local_222.f_466 != 0);
	Call_Loc(Local_222.f_466);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	if (func_420(iLocal_341, 2))
	{
		return 0;
	}
	if (func_861() != 24 && func_861() != 25)
	{
		return 0;
	}
	if (Local_320.f_9 != func_761())
	{
		return 0;
	}
	if (func_870())
	{
		return 0;
	}
	return 1;
}

void func_2102()//Position - 0xB80A8
{
	fLocal_363 = 99999f;
	if (!bLocal_334 || __LIB_0__::func_86(func_754()))
	{
		return;
	}
	Local_320.f_10 = SYSTEM::VDIST(Local_342, func_754());
	fLocal_363 = Local_320.f_10;
	Local_320.f_10 = fLocal_363;
}

void func_2103()//Position - 0xB80F2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	bVar5 = func_2175();
	fVar6 = func_2174();
	fVar6 = (fVar6 * fVar6);
	iVar7 = 0;
	while (iVar7 < Local_205.f_38)
	{
		bVar2 = false;
		bVar3 = false;
		func_128(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
				{
					func_2173(iVar7, 1);
				}
				else
				{
					func_2172(iVar7, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					func_2173(iVar7, 0);
				}
				else
				{
					func_2172(iVar7, 0);
				}
			}
			if (Local_222.f_156.f_181 != 0)
			{
				Stack.Push(iVar7);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_222.f_156.f_181);
			}
			func_2152(iVar7, iVar0, bVar3);
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
						if (func_73(iVar7, 20))
						{
							func_2151();
						}
						func_2140(iVar7, iVar0);
						func_2138(iVar7, iVar0);
						func_2137(iVar7, iVar0, 1);
						if (!func_2135(iVar7, 0))
						{
							func_2129(iVar7, iVar0, bVar5);
							func_2122(iVar7, iVar0, &bVar4);
							func_2119(iVar7, iVar0, fVar6);
							func_2117(iVar7, iVar0);
						}
						func_2107(iVar7, iVar0);
						func_2106(iVar7, iVar0);
					}
				}
				break;
			case 4:
				func_2105(iVar7, iVar0);
				break;
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
					}
				}
				if (!func_66(7))
				{
					func_2104(iVar7, 1);
				}
				break;
			case 5:
				if (bVar2)
				{
					if (func_41(iVar7, 12) && __LIB_1__::func_561(Local_378.f_22[iVar7 /*24*/]))
					{
						__LIB_6__::func_843(&(Local_378.f_22[iVar7 /*24*/]));
					}
				}
				break;
		}
		iVar7++;
	}
	if (!bVar4)
	{
		if (__LIB_0__::func_864(&(Local_228.f_20)))
		{
			__LIB_0__::func_794(&(Local_228.f_20));
		}
	}
	iVar7 = Local_228.f_22;
	func_128(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_2137(iVar7, iVar0, 0);
				}
			}
			break;
	}
}

void func_2104(int iParam0, int iParam1)//Position - 0xB82ED
{
	int iVar0;
	if (iParam1 != func_426())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (((func_444(iVar0) && iParam0 == func_425(iVar0)) && !func_436(iVar0, 4)) && !func_774(iVar0, iLocal_341, 6))
		{
			func_851(iVar0, 9);
			func_851(iVar0, 47);
		}
		iVar0++;
	}
}

void func_2105(int iParam0, int iParam1)//Position - 0xB835A
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		if (func_41(iParam0, 13))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
}

void func_2106(int iParam0, int iParam1)//Position - 0xB83B0
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
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) != iLocal_339)
	{
		return;
	}
	func_621(24);
	if (!func_66(28))
	{
		if (__LIB_15__::func_407(iParam1))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) < func_63() || PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(bLocal_337))
			{
				Call_Loc(Local_222.f_64.f_14);
				iVar1 = StackVal;
				func_1635(bLocal_337, func_63(), 1, iVar1);
			}
		}
	}
}

void func_2107(int iParam0, int iParam1)//Position - 0xB8437
{
	if (!func_2116(iParam0))
	{
		return;
	}
	if (func_73(iParam0, 1) && !func_2115(iParam0))
	{
		return;
	}
	if (!func_2114(iParam0, iLocal_341, 1))
	{
		if (func_2111(iParam1, func_2113(iParam0), func_2112(iParam0)))
		{
			if (__LIB_0__::func_937(&(Local_228[iParam0 /*19*/].f_17), func_2110(iParam0), 0))
			{
				func_2109(iParam0, 1);
				if (Local_222.f_156.f_132.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_222.f_156.f_132.f_1.f_5);
				}
			}
		}
		else if (__LIB_0__::func_864(&(Local_228[iParam0 /*19*/].f_17)))
		{
			__LIB_0__::func_794(&(Local_228[iParam0 /*19*/].f_17));
		}
	}
	else if (!func_2111(iParam1, func_2113(iParam0), func_2112(iParam0)))
	{
		func_2108(iParam0, 1);
		if (Local_222.f_156.f_132.f_1.f_5 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_222.f_156.f_132.f_1.f_5);
		}
	}
}

void func_2108(int iParam0, int iParam1)//Position - 0xB8522
{
	if (__LIB_16__::func_755(&(Local_385[iLocal_341 /*38*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2109(int iParam0, int iParam1)//Position - 0xB8541
{
	if (__LIB_1__::func_458(&(Local_385[iLocal_341 /*38*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2110(int iParam0)//Position - 0xB8560
{
	if (Local_222.f_156.f_132.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_132.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_2111(int iParam0, float fParam1, bool bParam2)//Position - 0xB8589
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_342) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			if (bLocal_334)
			{
				return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_339, iParam0, 287);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_2112(int iParam0)//Position - 0xB85CC
{
	if (Local_222.f_156.f_132.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_132.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_2113(int iParam0)//Position - 0xB85F5
{
	if (Local_222.f_156.f_132.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_132.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

bool func_2114(int iParam0, int iParam1, int iParam2)//Position - 0xB8622
{
	return __LIB_0__::func_316(&(Local_385[iParam1 /*38*/].f_7[iParam0 /*2*/]), iParam2);
}

int func_2115(int iParam0)//Position - 0xB863D
{
	if (Local_222.f_156.f_132.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_132.f_1.f_4);
		return StackVal;
	}
	return 0;
}

bool func_2116(int iParam0)//Position - 0xB8666
{
	if (Local_222.f_156.f_132.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_132.f_1);
		return StackVal;
	}
	return func_73(iParam0, 17);
}

void func_2117(int iParam0, int iParam1)//Position - 0xB8692
{
	if (!bLocal_334)
	{
		return;
	}
	if (!func_2118(iParam0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iLocal_339))
	{
		func_2109(iParam0, 11);
		if (Local_222.f_156.f_190 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_190);
		}
	}
}

bool func_2118(int iParam0)//Position - 0xB86E5
{
	return func_73(iParam0, 15);
}

void func_2119(int iParam0, int iParam1, float fParam2)//Position - 0xB86F5
{
	if (!bLocal_334)
	{
		return;
	}
	if (!func_2121(iParam0))
	{
		return;
	}
	if (func_2120(iParam1, fParam2))
	{
		func_2109(iParam0, 0);
	}
}

int func_2120(int iParam0, float fParam1)//Position - 0xB8726
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(bLocal_337, iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(bLocal_337, iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (SYSTEM::VDIST2(Local_342, Var0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_2121(int iParam0)//Position - 0xB876C
{
	return (func_73(iParam0, 16) && !func_73(iParam0, 0));
}

void func_2122(int iParam0, int iParam1, var uParam2)//Position - 0xB8789
{
	if (!func_73(iParam0, 18) && !func_2128(iParam0))
	{
		return;
	}
	if (func_2126(iParam0, iParam1))
	{
		*uParam2 = 1;
		if (!__LIB_0__::func_864(&(Local_228.f_20)))
		{
			__LIB_0__::func_795(&(Local_228.f_20), 0, 0);
			if (Local_222.f_156.f_185 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_222.f_156.f_185);
			}
		}
		else if (__LIB_0__::func_937(&(Local_228.f_20), func_2123(iParam0), 0))
		{
			func_2109(iParam0, 8);
			if (Local_222.f_156.f_186 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_222.f_156.f_186);
			}
		}
	}
}

int func_2123(int iParam0)//Position - 0xB881F
{
	bool bVar0;
	bVar0 = func_2125();
	if (Local_222.f_156.f_183 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bVar0);
		Call_Loc(Local_222.f_156.f_183);
		return StackVal;
	}
	if (func_2124() && !bVar0)
	{
		return 8000;
	}
	return 1000;
}

bool func_2124()//Position - 0xB885F
{
	return func_420(iLocal_341, 9);
}

bool func_2125()//Position - 0xB8870
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_339, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"));
}

int func_2126(int iParam0, int iParam1)//Position - 0xB889C
{
	if (bLocal_334)
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(iLocal_339))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iLocal_339, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iLocal_339, func_2127(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_2127(var uParam0)//Position - 0xB88EE
{
	if (Local_222.f_156.f_184 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_156.f_184);
		return StackVal;
	}
	return 287;
}

int func_2128(int iParam0)//Position - 0xB8911
{
	if (func_73(iParam0, 19))
	{
		return 0;
	}
	if (Local_222.f_156.f_140.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_12);
		return StackVal;
	}
	if (func_41(iParam0, 8))
	{
		return 1;
	}
	if (func_66(30) && !func_73(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_2129(int iParam0, int iParam1, bool bParam2)//Position - 0xB896F
{
	if (!bParam2 || func_41(iParam0, 7))
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_309[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*2*/])))
	{
		if (__LIB_19__::func_409(iParam0, iParam1))
		{
			__LIB_0__::func_795(&(Local_309[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), 0, 0);
		}
	}
	else if (func_2130(iParam0))
	{
		func_2109(iParam0, 7);
	}
}

int func_2130(int iParam0)//Position - 0xB89DB
{
	if (__LIB_0__::func_937(&(Local_309[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), func_2133(iParam0), 0))
	{
		if (!func_2131(func_2132(iParam0), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_2131(int iParam0, int iParam1)//Position - 0xB8A16
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		if (Local_205.f_38.f_1[iVar0 /*21*/].f_14 == iParam0)
		{
			if (iParam1 && func_73(iVar0, 19))
			{
			}
			else if (func_129(iVar0) < 6)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_2132(int iParam0)//Position - 0xB8A68
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_14;
}

int func_2133(int iParam0)//Position - 0xB8A7C
{
	return Local_205.f_38.f_23[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

int func_2135(int iParam0, int iParam1)//Position - 0xB8B0C
{
	if (func_67(Local_205.f_38.f_1[iParam0 /*21*/].f_14))
	{
		if ((__LIB_0__::func_937(&(Local_378.f_22[iParam0 /*24*/].f_13), Local_378.f_22[iParam0 /*24*/].f_15, 0) || func_2136(iParam0)) || iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_2136(int iParam0)//Position - 0xB8B5E
{
	if (((((func_73(iParam0, 1) || func_73(iParam0, 0)) || func_73(iParam0, 14)) || func_73(iParam0, 12)) || func_73(iParam0, 11)) || func_73(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

void func_2137(int iParam0, int iParam1, int iParam2)//Position - 0xB8BBA
{
	int iVar0;
	int iVar1;
	iVar0 = func_47(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_48(iParam0);
	if (__LIB_19__::func_374(Local_228.f_23[iVar1 /*67*/].f_1[iVar0 /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_228.f_23[iVar1 /*67*/].f_1[iVar0 /*13*/].f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_228.f_23[iVar1 /*67*/].f_1[iVar0 /*13*/].f_10);
	}
}

void func_2138(int iParam0, int iParam1)//Position - 0xB8C21
{
	func_2139(iParam0, iParam1);
}

void func_2139(int iParam0, int iParam1)//Position - 0xB8C31
{
	if (!func_2114(iParam0, iLocal_341, 12))
	{
		if (Local_205.f_38.f_23[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*5*/] == Global_1837194 || Local_205.f_38.f_23[Local_205.f_38.f_1[iParam0 /*21*/].f_14 /*5*/] == Global_1837195)
		{
			PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 1);
			func_2109(iParam0, 12);
		}
	}
}

void func_2140(int iParam0, int iParam1)//Position - 0xB8C93
{
	if (func_2148(iParam0, iParam1))
	{
		func_2141(0, iParam0, iParam1, func_2145(iParam0), func_2144(iParam0));
	}
}

void func_2141(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xB8CBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	HUD::GET_HUD_COLOUR(iParam3, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = func_2143(iParam0, iParam1);
	fVar5 = func_2142(iParam0, iParam1);
	switch (iParam0)
	{
		case 0:
		case 1:
			__LIB_15__::func_403(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, 0, 1, 0, fVar5);
			break;
		case 2:
			__LIB_15__::func_403(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, (Local_205.f_85.f_1[iParam1 /*12*/].f_8.f_1 > 170f && Local_205.f_85.f_1[iParam1 /*12*/].f_8.f_1 < 190f), 1, 0, fVar5);
			break;
	}
}

float func_2142(int iParam0, var uParam1)//Position - 0xB8D5A
{
	switch (iParam0)
	{
		case 1:
			if (Local_222.f_352.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_222.f_352.f_22);
				return StackVal;
			}
			break;
		case 0:
			if (Local_222.f_156.f_140.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_222.f_156.f_140.f_22);
				return StackVal;
			}
			break;
		case 2:
			if (Local_222.f_407.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_222.f_407.f_22);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_2143(int iParam0, var uParam1)//Position - 0xB8DD5
{
	switch (iParam0)
	{
		case 0:
			if (Local_222.f_156.f_140.f_21 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_222.f_156.f_140.f_21);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_2144(int iParam0)//Position - 0xB8E0A
{
	if (Local_222.f_156.f_140.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_20);
		return StackVal;
	}
	return 0.5f;
}

int func_2145(int iParam0)//Position - 0xB8E33
{
	if (func_41(iParam0, 0))
	{
		return 9;
	}
	if (func_73(iParam0, 20))
	{
		return 6;
	}
	return func_2146(iParam0);
}

int func_2146(int iParam0)//Position - 0xB8E5F
{
	if (Local_222.f_156.f_140.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_5);
		return StackVal;
	}
	switch (func_861())
	{
		case 7:
			if (func_73(iParam0, 20))
			{
				return 6;
			}
			break;
		case 6:
			if (func_73(iParam0, 20))
			{
				return 10;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__::func_162(iParam0) != -1)
			{
				return 9;
			}
			break;
	}
	if (func_41(iParam0, 3))
	{
		return 9;
	}
	return 6;
}

int func_2148(int iParam0, var uParam1)//Position - 0xB8EFA
{
	if ((func_41(iParam0, 0) && !func_2150(iParam0, 0)) && !func_73(iParam0, 30))
	{
		return 1;
	}
	if (func_73(iParam0, 20) && func_2149(iParam0))
	{
		return 1;
	}
	if (Local_222.f_156.f_140.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_222.f_156.f_140.f_19);
		return StackVal;
	}
	return 0;
}

bool func_2149(int iParam0)//Position - 0xB8F64
{
	if (Local_222.f_516.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_516.f_4);
		return StackVal;
	}
	if (func_861() == 7 && func_66(36))
	{
		return 0;
	}
	return (func_861() == 7 || func_861() == 6);
}

bool func_2150(int iParam0, int iParam1)//Position - 0xB8FB0
{
	return __LIB_0__::func_316(&(Local_228[iParam0 /*19*/]), iParam1);
}

void func_2151()//Position - 0xB8FC5
{
	Local_310.f_0++;
}

void func_2152(int iParam0, int iParam1, bool bParam2)//Position - 0xB8FD5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	if (func_2170(iParam0, bParam2))
	{
		if (!BitTest(Local_228[iParam0 /*19*/].f_2.f_6, 2) && HUD::DOES_BLIP_EXIST(Local_228[iParam0 /*19*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_228[iParam0 /*19*/].f_2));
		}
		__LIB_2__::func_848(Local_378.f_22[iParam0 /*24*/], &(Local_228[iParam0 /*19*/].f_2), func_2169(iParam0), 0, 0, 0, func_2168(iParam0), 1, -1, 0, 0);
	}
	else if ((bLocal_345 && !BitTest(Local_228[iParam0 /*19*/].f_2.f_6, 2)) && func_2163(iParam0, bParam2))
	{
		iVar0 = func_2146(iParam0);
		iVar1 = func_2162(iParam0);
		bVar2 = func_2161(iParam0);
		if (!HUD::DOES_BLIP_EXIST(Local_228[iParam0 /*19*/].f_2))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
			{
				__LIB_0__::func_621(&(Local_228[iParam0 /*19*/].f_2));
			}
			Stack.Push(Local_222.f_156.f_140.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_140.f_14);
			bVar3 = (StackVal && StackVal);
			__LIB_19__::func_526(&(Local_228[iParam0 /*19*/].f_2), iParam1, iVar1, iVar0, func_2168(iParam0), func_2159(iParam0), 0, bVar2, func_2158(iParam0), bVar3);
			HUD::SET_BLIP_PRIORITY(Local_228[iParam0 /*19*/].f_2, func_2156(iParam0));
		}
		else
		{
			if (__LIB_0__::func_114(iParam0))
			{
				HUD::SET_BLIP_ROTATION(Local_228[iParam0 /*19*/].f_2, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam1)));
			}
			if (func_2128(iParam0))
			{
				HUD::SET_BLIP_SHOW_CONE(Local_228[iParam0 /*19*/].f_2, true, 11);
			}
			if (iVar1 != -1 && iVar1 != HUD::GET_BLIP_SPRITE(Local_228[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_SPRITE(Local_228[iParam0 /*19*/].f_2, iVar1);
				HUD::SET_BLIP_SCALE(Local_228[iParam0 /*19*/].f_2, func_2159(iParam0));
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_228[iParam0 /*19*/].f_2, func_2168(iParam0));
				if (func_2154(iParam0))
				{
					__LIB_19__::func_390(&(Local_228[iParam0 /*19*/].f_2), 0);
				}
			}
			if (__LIB_1__::func_389(iVar0) != HUD::GET_BLIP_COLOUR(Local_228[iParam0 /*19*/].f_2))
			{
				__LIB_2__::func_53(&(Local_228[iParam0 /*19*/].f_2), iVar0);
				HUD::SET_BLIP_SCALE(Local_228[iParam0 /*19*/].f_2, func_2159(iParam0));
				if (func_2154(iParam0))
				{
					__LIB_19__::func_390(&(Local_228[iParam0 /*19*/].f_2), 0);
				}
			}
			if (bVar2 != HUD::IS_BLIP_SHORT_RANGE(Local_228[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_228[iParam0 /*19*/].f_2, bVar2);
			}
			if (func_2153(iParam0, &iVar4, &fVar5, &fVar6))
			{
				__LIB_20__::func_328(Local_228[iParam0 /*19*/].f_2, iVar4, fVar5, fVar6);
			}
			Stack.Push(Local_222.f_156.f_140.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_140.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(Local_228[iParam0 /*19*/].f_2))
				{
					__LIB_19__::func_390(&(Local_228[iParam0 /*19*/].f_2), 0);
				}
			}
		}
	}
	else if (BitTest(Local_228[iParam0 /*19*/].f_2.f_6, 2))
	{
		__LIB_0__::func_621(&(Local_228[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
	{
		__LIB_0__::func_621(&(Local_228[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_BLIP_EXIST(Local_228[iParam0 /*19*/].f_2))
	{
		HUD::REMOVE_BLIP(&(Local_228[iParam0 /*19*/].f_2));
	}
}

int func_2153(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB92D1
{
	if (Local_222.f_156.f_140.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_222.f_156.f_140.f_17);
		return StackVal;
	}
	if (!func_41(iParam0, 15))
	{
		return 0;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

int func_2154(int iParam0)//Position - 0xB9321
{
	if (Local_222.f_156.f_140.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_10);
		return StackVal;
	}
	return 0;
}

int func_2156(int iParam0)//Position - 0xB934F
{
	if (Local_222.f_156.f_140.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_7);
		return StackVal;
	}
	return 11;
}

int func_2158(int iParam0)//Position - 0xB93FE
{
	if (Local_222.f_156.f_140.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_9);
		return StackVal;
	}
	return 0;
}

float func_2159(int iParam0)//Position - 0xB9423
{
	if (Local_222.f_156.f_140.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_6);
		return StackVal;
	}
	switch (func_861())
	{
		case 7:
			if (func_73(iParam0, 20))
			{
				return 0.75f;
			}
			break;
	}
	if (func_2128(iParam0))
	{
		return 0.5f;
	}
	return 1f;
}

int func_2161(int iParam0)//Position - 0xB94F0
{
	if (Local_222.f_156.f_140.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_16);
		return StackVal;
	}
	return 0;
}

int func_2162(int iParam0)//Position - 0xB9515
{
	if (Local_222.f_156.f_140.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_4);
		return StackVal;
	}
	switch (func_861())
	{
		case 7:
			if (func_73(iParam0, 20) && !func_66(36))
			{
				return 432;
			}
			break;
		case 6:
			if (func_73(iParam0, 20))
			{
				return 280;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__::func_162(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_2163(int iParam0, bool bParam1)//Position - 0xB95A8
{
	if (bParam1 && !func_41(iParam0, 20))
	{
		return 0;
	}
	if (Local_222.f_156.f_140 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140);
		return StackVal;
	}
	if (!__LIB_0__::func_109(iParam0))
	{
		return 0;
	}
	switch (func_861())
	{
		case 7:
		case 6:
			if (func_73(iParam0, 20))
			{
				return 1;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__::func_162(iParam0) == func_2164())
			{
				return 1;
			}
			break;
	}
	if (func_2128(iParam0) && !func_2135(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_2164()//Position - 0xB9655
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (Local_299[iVar0 /*7*/].f_4 == bLocal_337 || func_774(iVar0, iLocal_341, 14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_2168(int iParam0)//Position - 0xB990E
{
	if (Local_222.f_156.f_140.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_140.f_13);
		return StackVal;
	}
	if (func_41(iParam0, 4))
	{
		return "PB_COP" /* GXT: Cop */;
	}
	if (func_41(iParam0, 3))
	{
		return "PB_CIV" /* GXT: Civilian */;
	}
	switch (func_861())
	{
		case 7:
		case 6:
			if (func_73(iParam0, 20))
			{
				return "PB_TARGET" /* GXT: Target */;
			}
			break;
	}
	return "PB_ENEMY" /* GXT: Enemy */;
}

float func_2169(int iParam0)//Position - 0xB9982
{
	if (func_73(iParam0, 19))
	{
		return 300f;
	}
	return -1f;
}

int func_2170(int iParam0, bool bParam1)//Position - 0xB999E
{
	Stack.Push(Local_222.f_156.f_187 != 0);
	Stack.Push(iParam0);
	Stack.Push(bParam1);
	Call_Loc(Local_222.f_156.f_187);
	if (StackVal && StackVal)
	{
		return 0;
	}
	if (!func_420(iLocal_341, 2) && __LIB_3__::func_559())
	{
		return 0;
	}
	if (func_420(iLocal_341, 2) && __LIB_1__::func_936(bLocal_337))
	{
		return 0;
	}
	if (!__LIB_0__::func_109(iParam0))
	{
		return 0;
	}
	if (func_41(iParam0, 3) || func_2114(iParam0, iLocal_341, 12))
	{
		return 0;
	}
	if (!func_73(iParam0, 19))
	{
		if (!func_2135(iParam0, 0))
		{
			return 0;
		}
	}
	if (func_2163(iParam0, bParam1))
	{
		return 0;
	}
	if (bParam1)
	{
		return 0;
	}
	return 1;
}

void func_2172(int iParam0, int iParam1)//Position - 0xB9A6D
{
	if (__LIB_16__::func_755(&(Local_228[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_2173(int iParam0, int iParam1)//Position - 0xB9A85
{
	if (__LIB_1__::func_458(&(Local_228[iParam0 /*19*/]), iParam1))
	{
	}
}

float func_2174()//Position - 0xB9A9D
{
	if (Local_222.f_156.f_132.f_7 != 0)
	{
		Call_Loc(Local_222.f_156.f_132.f_7);
		return StackVal;
	}
	return 20f;
}

bool func_2175()//Position - 0xB9AC4
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() > Local_378.f_98 + 2;
}

void func_2176()//Position - 0xB9AD8
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < Local_205.f_85)
	{
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_56[iVar3 /*5*/]);
		if (bVar1)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_378.f_56[iVar3 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_222.f_407.f_35 != 0)
			{
				Stack.Push(iVar3);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_222.f_407.f_35);
			}
			func_2203(iVar3, iVar0);
			func_2195(iVar3, iVar0, bVar2);
			func_2189(iVar3, iVar0);
			switch (func_148(iVar3))
			{
				case 2:
					func_2185(iVar3, iVar0);
					if (!bVar2)
					{
						func_2182(iVar3, iVar0);
						func_2178(iVar3, iVar0);
					}
					break;
				case 3:
					if (func_2177(iVar3))
					{
						if (__LIB_1__::func_561(Local_378.f_56[iVar3 /*5*/]))
						{
							__LIB_6__::func_843(&(Local_378.f_56[iVar3 /*5*/]));
						}
					}
					else if (func_146(iVar3))
					{
						if (__LIB_1__::func_561(Local_378.f_56[iVar3 /*5*/]))
						{
							__LIB_1__::func_518(&(Local_378.f_56[iVar3 /*5*/]));
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

int func_2177(int iParam0)//Position - 0xB9BE0
{
	if (Local_222.f_407.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_28);
		return StackVal;
	}
	return 0;
}

void func_2178(int iParam0, int iParam1)//Position - 0xB9C03
{
	if (func_2181(iParam0))
	{
		func_2141(2, iParam0, iParam1, func_2180(iParam0), func_2179(iParam0));
	}
}

float func_2179(var uParam0)//Position - 0xB9C29
{
	if (Local_222.f_407.f_41 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_407.f_41);
		return StackVal;
	}
	return 0.5f;
}

int func_2180(var uParam0)//Position - 0xB9C50
{
	if (Local_222.f_407.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_407.f_42);
		return StackVal;
	}
	return 18;
}

int func_2181(var uParam0)//Position - 0xB9C74
{
	if (Local_222.f_407.f_40 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_407.f_40);
		return StackVal;
	}
	return 0;
}

void func_2182(int iParam0, int iParam1)//Position - 0xB9C97
{
	if (func_145(iParam0, 5))
	{
		if (__LIB_19__::func_410(func_861()))
		{
			func_2183(2, iParam0, iParam1);
		}
		func_2151();
	}
}

void func_2183(int iParam0, int iParam1, int iParam2)//Position - 0xB9CC1
{
	switch (iParam0)
	{
		case 0:
			if (func_66(8))
			{
				func_2141(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 1:
			if (func_66(10))
			{
				func_2141(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 2:
			if (func_66(9))
			{
				func_2141(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
	}
}

void func_2185(int iParam0, int iParam1)//Position - 0xB9D59
{
	if (!func_2187(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_378.f_56[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2186(iParam0, 8);
	}
}

void func_2186(int iParam0, int iParam1)//Position - 0xB9D8D
{
	if (__LIB_1__::func_458(&(Local_385[iLocal_341 /*38*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2187(int iParam0)//Position - 0xB9DAC
{
	if (func_2188(iParam0, iLocal_341, 8))
	{
		return 0;
	}
	Stack.Push(Local_222.f_407.f_29 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_407.f_29);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_2188(int iParam0, int iParam1, int iParam2)//Position - 0xB9DE8
{
	return __LIB_0__::func_316(&(Local_385[iParam1 /*38*/].f_10[iParam0 /*2*/]), iParam2);
}

void func_2189(int iParam0, int iParam1)//Position - 0xB9E03
{
	float fVar0;
	if (!func_137(iParam0, 30))
	{
		return;
	}
	fVar0 = func_2194(iParam0);
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2188(iParam0, iLocal_341, 10))
	{
		if (func_2191(iParam1, fVar0, func_2193(iParam0), func_2192(iParam0)))
		{
			func_2186(iParam0, 11);
			func_2186(iParam0, 10);
			if (Local_222.f_407.f_45 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(1);
				Call_Loc(Local_222.f_407.f_45);
			}
		}
	}
	else if (!func_2191(iParam1, fVar0, func_2193(iParam0), func_2192(iParam0)))
	{
		func_2190(iParam0, 10);
		if (Local_222.f_407.f_45 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_222.f_407.f_45);
		}
	}
}

void func_2190(int iParam0, int iParam1)//Position - 0xB9EB5
{
	if (__LIB_16__::func_755(&(Local_385[iLocal_341 /*38*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2191(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0xB9ED4
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_342) > (fParam1 * fParam1))
	{
		return 0;
	}
	if (iParam2 && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_339, iParam0, 287))
	{
		return 0;
	}
	if (iParam3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_2192(int iParam0)//Position - 0xB9F2A
{
	if (Local_222.f_407.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_44);
		return StackVal;
	}
	return 0;
}

int func_2193(int iParam0)//Position - 0xB9F4D
{
	if (Local_222.f_407.f_43 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_43);
		return StackVal;
	}
	return 0;
}

float func_2194(int iParam0)//Position - 0xB9F70
{
	if (Local_222.f_407.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_39);
		return StackVal;
	}
	return 10f;
}

void func_2195(int iParam0, int iParam1, bool bParam2)//Position - 0xB9F97
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	if (bLocal_345 && func_2202(iParam0, bParam2))
	{
		iVar0 = func_2201(iParam0);
		iVar1 = func_2200(iParam0);
		fVar2 = func_2199(iParam0);
		bVar3 = func_2198(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_308[iParam0]))
		{
			Stack.Push(Local_222.f_407.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_407.f_14);
			bVar4 = (StackVal && StackVal);
			__LIB_19__::func_526(&(uLocal_308[iParam0]), iParam1, iVar1, iVar0, func_2197(iParam0), fVar2, 0, bVar3, func_2196(iParam0), bVar4);
			HUD::SET_BLIP_PRIORITY(uLocal_308[iParam0], 12);
		}
		else
		{
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_308[iParam0]))
			{
				if (iVar1 != -1)
				{
					HUD::SET_BLIP_SPRITE(uLocal_308[iParam0], iVar1);
				}
				HUD::SET_BLIP_SCALE(uLocal_308[iParam0], fVar2);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_308[iParam0], func_2197(iParam0));
			}
			if (bVar3 != HUD::IS_BLIP_SHORT_RANGE(uLocal_308[iParam0]))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_308[iParam0], bVar3);
			}
			if (__LIB_1__::func_389(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_308[iParam0]))
			{
				__LIB_2__::func_53(&(uLocal_308[iParam0]), iVar0);
			}
			if (func_137(iParam0, 23))
			{
				__LIB_20__::func_328(uLocal_308[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_222.f_407.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_407.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_308[iParam0]))
				{
					__LIB_19__::func_390(&(uLocal_308[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_308[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_308[iParam0]));
	}
}

int func_2196(int iParam0)//Position - 0xBA126
{
	if (Local_222.f_407.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_9);
		return StackVal;
	}
	return 0;
}

char* func_2197(int iParam0)//Position - 0xBA149
{
	if (Local_222.f_407.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_13);
		return StackVal;
	}
	if (__LIB_19__::func_410(func_861()) && func_145(iParam0, 5))
	{
		return "PB_TARGET" /* GXT: Target */;
	}
	return "BLIP_OBJ" /* GXT: Object */;
}

int func_2198(int iParam0)//Position - 0xBA18D
{
	if (Local_222.f_407.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_16);
		return StackVal;
	}
	return 0;
}

float func_2199(int iParam0)//Position - 0xBA1B0
{
	if (Local_222.f_407.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_6);
		return StackVal;
	}
	if (__LIB_19__::func_410(func_861()) && func_145(iParam0, 5))
	{
		return 1f;
	}
	return 1f;
}

int func_2200(int iParam0)//Position - 0xBA1EE
{
	if (Local_222.f_407.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_4);
		return StackVal;
	}
	if ((func_861() == 7 && func_145(iParam0, 5)) && !func_66(36))
	{
		return 432;
	}
	if (func_861() == 6 && func_145(iParam0, 5))
	{
		return 32;
	}
	return 32;
}

int func_2201(int iParam0)//Position - 0xBA253
{
	if (Local_222.f_407.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_5);
		return StackVal;
	}
	if (func_861() == 7 && func_145(iParam0, 5))
	{
		return 6;
	}
	if (func_861() == 6 && func_145(iParam0, 5))
	{
		return 10;
	}
	return 6;
}

int func_2202(int iParam0, bool bParam1)//Position - 0xBA2A9
{
	if (bParam1)
	{
		return 0;
	}
	if (!bLocal_346)
	{
		return 0;
	}
	if (Local_222.f_407 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407);
		return StackVal;
	}
	if (__LIB_19__::func_410(func_861()) && func_145(iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_2203(int iParam0, int iParam1)//Position - 0xBA2F7
{
	if (!func_2206(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_378.f_56[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, true);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iParam1, true), func_2205(iParam0), func_2204(iParam0), true, false, 1f, false);
		func_2186(iParam0, 9);
	}
}

float func_2204(int iParam0)//Position - 0xBA367
{
	if (Local_222.f_407.f_30.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_30.f_2);
		return StackVal;
	}
	return 1f;
}

int func_2205(int iParam0)//Position - 0xBA38E
{
	if (Local_222.f_407.f_30.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_407.f_30.f_1);
		return StackVal;
	}
	return 6;
}

int func_2206(int iParam0)//Position - 0xBA3B5
{
	if (func_2188(iParam0, iLocal_341, 9) || func_145(iParam0, 3))
	{
		return 0;
	}
	Stack.Push(Local_222.f_407.f_30 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_407.f_30);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_2207()//Position - 0xBA3FE
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
	fLocal_364 = 99999f;
	uLocal_296.f_2 = -1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_67)
	{
		func_2261(iVar0);
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_378.f_47[iVar0 /*8*/]);
			bVar3 = __LIB_0__::func_939(Local_378.f_47[iVar0 /*8*/]);
			bVar4 = __LIB_1__::func_483(iLocal_339, iVar2);
			bVar6 = false;
			if (bVar3)
			{
				iVar1 = func_424(iVar0, 2);
			}
			if (bVar4)
			{
				uLocal_296.f_2 = iVar0;
				func_2259(iVar0, 4);
				bVar6 = iLocal_339 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
				if (bVar6)
				{
					func_2259(iVar0, 9);
				}
			}
			if (func_153(iVar0, 14))
			{
				if (!func_2258(iVar0, NETWORK::PARTICIPANT_ID(), 10))
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iVar2)
					{
						func_2259(iVar0, 10);
					}
				}
			}
			if (Local_222.f_352.f_45 != 0)
			{
				Stack.Push(iVar0);
				Stack.Push(iVar2);
				Stack.Push(bVar3);
				Stack.Push(bVar4);
				Stack.Push(iVar1);
				Call_Loc(Local_222.f_352.f_45);
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
		func_2247(iVar0, iVar2, bVar3);
		if (bVar5)
		{
			func_2246(iVar0, iVar2);
			func_2244(iVar0, iVar2);
			func_2243(iVar0, iVar2);
			switch (func_119(iVar0))
			{
				case 0:
					break;
				case 2:
					break;
				case 4:
					if (bVar5)
					{
						func_2239(iVar0, iVar2);
						func_2238(iVar0);
						func_2237(iVar0, iVar2);
						func_2235(iVar0, iVar2, iVar1, bVar4);
						if (bVar3)
						{
							func_2234(iVar0, iVar2);
							func_2233(iVar0, iVar2);
							func_2226(iVar0, iVar2);
							func_2224(iVar0, iVar2);
							func_2215(iVar0, iVar2);
							func_2214(iVar0, iVar2);
							func_2213(iVar0, iVar2);
							if (func_2212(iVar0, iVar2))
							{
								bVar7 = true;
							}
						}
					}
					break;
				case 5:
					if (!func_66(7))
					{
						func_2104(iVar0, 2);
					}
					break;
				case 3:
					func_2209(iVar0, iVar2);
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
		func_2208(1);
	}
	else
	{
		func_2208(0);
	}
	fLocal_365 = fLocal_364;
	fLocal_364 = fLocal_365;
}

void func_2208(bool bParam0)//Position - 0xBA628
{
	if (bParam0)
	{
		if (!func_615(57))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_339, 426, true);
			func_505(57);
		}
	}
	else if (func_615(57))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_339, 426, false);
		func_726(57);
	}
}

void func_2209(int iParam0, int iParam1)//Position - 0xBA66D
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
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
		if (func_290(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			__LIB_19__::func_411(iParam0, 1, Local_378.f_98);
		}
	}
}

int func_2212(int iParam0, int iParam1)//Position - 0xBA7FD
{
	if (!func_155(iParam0, 31))
	{
		return 0;
	}
	return func_2191(iParam1, 12f, 0, 0);
}

void func_2213(int iParam0, int iParam1)//Position - 0xBA822
{
	if (!func_2258(iParam0, iLocal_341, 8))
	{
		if (func_155(iParam0, 9))
		{
			PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(iLocal_339, iParam1, 0, 1, -2);
		}
		func_2259(iParam0, 8);
	}
}

void func_2214(int iParam0, int iParam1)//Position - 0xBA85A
{
	if (Local_222.f_352.f_49 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_352.f_49);
	}
}

void func_2215(int iParam0, int iParam1)//Position - 0xBA87B
{
	if (func_153(iParam0, 16) && __LIB_19__::func_410(func_861()))
	{
		func_2183(1, iParam0, iParam1);
	}
	else if (func_2221(iParam0, iParam1))
	{
		func_2216(iParam0, iParam1);
	}
}

void func_2216(int iParam0, int iParam1)//Position - 0xBA8BA
{
	func_2141(1, iParam0, iParam1, func_2218(iParam0), func_2217(iParam0));
}

float func_2217(int iParam0)//Position - 0xBA8D7
{
	if (Local_222.f_352.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_20);
		return StackVal;
	}
	return 0.5f;
}

int func_2218(int iParam0)//Position - 0xBA8FE
{
	int iVar0;
	int iVar1;
	if (func_153(iParam0, 14))
	{
		iVar0 = func_424(iParam0, 2);
		iVar1 = func_856(iVar0, 0);
		return __LIB_19__::func_412(iVar1);
	}
	return func_2219(iParam0);
}

int func_2219(int iParam0)//Position - 0xBA932
{
	if (Local_222.f_352.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_5);
		return StackVal;
	}
	if (func_861() == 7 && func_153(iParam0, 16))
	{
		return 6;
	}
	if (func_861() == 6 && func_153(iParam0, 16))
	{
		return 10;
	}
	return 9;
}

int func_2221(int iParam0, int iParam1)//Position - 0xBA9BF
{
	if (func_2222(iParam0))
	{
		return 1;
	}
	if (Local_222.f_352.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_352.f_19);
		return StackVal;
	}
	return 0;
}

int func_2222(int iParam0)//Position - 0xBA9F1
{
	if (!func_153(iParam0, 14))
	{
		return 0;
	}
	if (!func_66(17) && !__LIB_0__::func_114())
	{
		return 0;
	}
	if (!func_153(iParam0, 13))
	{
		return 0;
	}
	if (func_861() != 22)
	{
		return 0;
	}
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	return 1;
}

void func_2224(int iParam0, int iParam1)//Position - 0xBAA56
{
	Stack.Push(!func_155(iParam0, 3));
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_222.f_352.f_31);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
	{
		func_2225(iParam0, iParam1);
	}
}

void func_2225(int iParam0, int iParam1)//Position - 0xBAA98
{
	if (func_155(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam1, bLocal_337, false);
	if (!__LIB_0__::func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!func_155(iParam0, 6))
	{
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, false);
	}
}

void func_2226(int iParam0, int iParam1)//Position - 0xBAAED
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (!func_155(iParam0, 14) || !func_2229(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
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
		Var2.f_0 = __LIB_1__::func_502();
		Var2.f_4 = __LIB_16__::func_764();
		Var2.f_1 = 1;
		Var2.f_12 = 1;
		Var2.f_13 = 0;
		Var2.f_5 = 1;
		if (func_290(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			if (Local_222.f_352.f_35 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_352.f_35);
			}
		}
	}
}

int func_2229(int iParam0, int iParam1)//Position - 0xBAC1E
{
	Stack.Push(Local_222.f_352.f_32 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_32);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (__LIB_19__::func_464(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_2233(int iParam0, int iParam1)//Position - 0xBACB1
{
	float fVar0;
	Stack.Push(Local_222.f_352.f_30 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_30);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(Local_342, ENTITY::GET_ENTITY_COORDS(iParam1, false));
	if (fVar0 < fLocal_364)
	{
		fLocal_364 = fVar0;
		iLocal_355 = iLocal_355;
		iLocal_355 = iParam0;
	}
}

void func_2234(int iParam0, int iParam1)//Position - 0xBAD06
{
	if (func_153(iParam0, 16))
	{
		func_2151();
	}
}

void func_2235(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBAD1D
{
	if (!func_2236(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2259(iParam0, 1);
	}
}

int func_2236(int iParam0, int iParam1, var uParam2)//Position - 0xBAD54
{
	if (func_2258(iParam0, iLocal_341, 1))
	{
		return 0;
	}
	if ((func_153(iParam0, 14) && uParam2) || ((iParam1 != -1 && func_436(iParam1, 7)) && func_436(iParam1, 1)))
	{
		return 1;
	}
	Stack.Push(Local_222.f_352.f_29 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_29);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_2237(int iParam0, int iParam1)//Position - 0xBADC7
{
	if ((!func_155(iParam0, 12) || func_153(iParam0, 11)) || func_2258(iParam0, iLocal_341, 7))
	{
		return;
	}
	if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iParam1))
	{
		if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
		{
			VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iParam1, 5f, 5f, false);
			func_2259(iParam0, 7);
		}
	}
}

void func_2238(int iParam0)//Position - 0xBAE25
{
	if (func_420(iLocal_341, 29))
	{
		return;
	}
	if (func_155(iParam0, 20) || func_155(iParam0, 21))
	{
		func_621(29);
	}
}

void func_2239(int iParam0, int iParam1)//Position - 0xBAE5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!func_155(iParam0, 15) || func_153(iParam0, 3)) || func_2258(iParam0, iLocal_341, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Local_378.f_47[iVar0 /*8*/];
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1) && __LIB_0__::func_939(iVar1))
	{
		iVar2 = NETWORK::NET_TO_VEH(iVar1);
		if (__LIB_15__::func_564(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam1))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iParam1, iVar2, 1f);
			}
			else
			{
				func_2259(iParam0, 3);
			}
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1, iVar2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar2, "chassis_dummy"), func_2241(iParam0), func_2240(iParam0), false, false, false, false, 2, true, 0);
		}
		else
		{
			func_2259(iParam0, 3);
		}
	}
}

Vector3 func_2240(int iParam0)//Position - 0xBAF27
{
	if (Local_222.f_352.f_50.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_50.f_1);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

Vector3 func_2241(int iParam0)//Position - 0xBAF50
{
	if (Local_222.f_352.f_50 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_50);
		return StackVal, StackVal, StackVal;
	}
	return 0f, -5.5f, 0.7f;
}

void func_2243(int iParam0, int iParam1)//Position - 0xBAFF7
{
	if (bLocal_334 && Local_320.f_10 <= 10f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
		{
			if (iParam1 == PED::GET_VEHICLE_PED_IS_IN(iLocal_339, false) && iLocal_354 != iParam0)
			{
				iLocal_354 = iParam0;
			}
		}
	}
	else if ((iLocal_354 != -1 && !Global_1952191.f_5314) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iLocal_354 = -1;
	}
	if (iParam0 == iLocal_354)
	{
		if (Global_1952191.f_5314 && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			__LIB_19__::func_411(iParam0, 0, Local_378.f_98);
			iLocal_354 = -1;
		}
	}
}

void func_2244(int iParam0, int iParam1)//Position - 0xBB08F
{
	float fVar0;
	if (!func_155(iParam0, 24))
	{
		return;
	}
	Stack.Push(func_153(iParam0, 6));
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_24);
	if (StackVal && !StackVal)
	{
		return;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352.f_25);
	fVar0 = StackVal;
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2258(iParam0, iLocal_341, 5))
	{
		Stack.Push(iParam1);
		Stack.Push(fVar0);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_26);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_27);
		if (func_2191(StackVal, StackVal, StackVal, StackVal))
		{
			func_2259(iParam0, 5);
			if (Local_222.f_352.f_28 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(1);
				Call_Loc(Local_222.f_352.f_28);
			}
		}
	}
	else
	{
		Stack.Push(iParam1);
		Stack.Push(fVar0);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_26);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_27);
		if (!func_2191(StackVal, StackVal, StackVal, StackVal))
		{
			func_2245(iParam0, 5);
			if (Local_222.f_352.f_28 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(0);
				Call_Loc(Local_222.f_352.f_28);
			}
		}
	}
}

void func_2245(int iParam0, int iParam1)//Position - 0xBB16D
{
	if (__LIB_16__::func_755(&(Local_385[iLocal_341 /*38*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2246(int iParam0, int iParam1)//Position - 0xBB18C
{
	if (Local_205.f_67.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (!func_153(iParam0, 2))
	{
		if (!func_153(iParam0, 0) && !func_2258(iParam0, iLocal_341, 0))
		{
			if (__LIB_1__::func_561(Local_378.f_47[iParam0 /*8*/]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_378.f_47[iParam0 /*8*/], true);
				func_2259(iParam0, 0);
			}
		}
	}
}

void func_2247(int iParam0, int iParam1, bool bParam2)//Position - 0xBB1F9
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	bool bVar6;
	if (bLocal_345 && func_2255(iParam0, iParam1, bParam2))
	{
		iVar0 = func_2219(iParam0);
		iVar1 = func_2254(iParam0);
		fVar2 = func_2253(iParam0);
		bVar3 = func_2252(iParam0);
		bVar4 = func_2251(iParam0);
		sVar5 = func_2250(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_296[iParam0]))
		{
			Stack.Push(Local_222.f_352.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_352.f_14);
			bVar6 = (StackVal && StackVal);
			__LIB_19__::func_526(&(uLocal_296[iParam0]), iParam1, iVar1, iVar0, sVar5, fVar2, 0, bVar3, bVar4, bVar6);
			HUD::SET_BLIP_PRIORITY(uLocal_296[iParam0], func_2249(iParam0));
			func_2259(iParam0, 11);
		}
		else
		{
			if (func_2248(iParam0))
			{
				HUD::SET_BLIP_ROTATION(uLocal_296[iParam0], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam1)));
			}
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_296[iParam0]))
			{
				HUD::SET_BLIP_SPRITE(uLocal_296[iParam0], iVar1);
				HUD::SET_BLIP_SCALE(uLocal_296[iParam0], fVar2);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_296[iParam0], sVar5);
				}
			}
			if (bVar3 != HUD::IS_BLIP_SHORT_RANGE(uLocal_296[iParam0]))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_296[iParam0], bVar3);
			}
			if (__LIB_1__::func_389(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_296[iParam0]))
			{
				__LIB_2__::func_53(&(uLocal_296[iParam0]), iVar0);
			}
			if (func_155(iParam0, 16))
			{
				__LIB_20__::func_328(uLocal_296[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_222.f_352.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_352.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_296[iParam0]))
				{
					__LIB_19__::func_390(&(uLocal_296[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_296[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_296[iParam0]));
	}
}

int func_2248(int iParam0)//Position - 0xBB3BC
{
	if (Local_222.f_352.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_18);
		return StackVal;
	}
	switch (func_2254(iParam0))
	{
		case 460:
			return 1;
		default:
	}
	return 0;
}

int func_2249(int iParam0)//Position - 0xBB3F4
{
	if (Local_222.f_352.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_7);
		return StackVal;
	}
	return 12;
}

char* func_2250(int iParam0)//Position - 0xBB418
{
	if (Local_222.f_352.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_13);
		return StackVal;
	}
	if (__LIB_19__::func_410(func_861()) && func_153(iParam0, 16))
	{
		return "PB_TARGET" /* GXT: Target */;
	}
	return "BLIP_VEH" /* GXT: Vehicle */;
}

int func_2251(int iParam0)//Position - 0xBB45D
{
	if (Local_222.f_352.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_9);
		return StackVal;
	}
	return 0;
}

int func_2252(int iParam0)//Position - 0xBB480
{
	if (Local_222.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_16);
		return StackVal;
	}
	return 0;
}

float func_2253(int iParam0)//Position - 0xBB4A3
{
	if (Local_222.f_352.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_6);
		return StackVal;
	}
	if (__LIB_19__::func_410(func_861()) && func_153(iParam0, 16))
	{
		return 1f;
	}
	return 1f;
}

int func_2254(int iParam0)//Position - 0xBB4E2
{
	if (Local_222.f_352.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_352.f_4);
		return StackVal;
	}
	switch (func_861())
	{
		case 7:
			if (func_153(iParam0, 16) && !func_66(36))
			{
				return 432;
			}
			break;
		case 6:
			if (func_153(iParam0, 16))
			{
				return 225;
			}
			break;
	}
	return 225;
}

int func_2255(int iParam0, int iParam1, bool bParam2)//Position - 0xBB54E
{
	if (!bParam2)
	{
		return 0;
	}
	if (iLocal_343 == iParam1)
	{
		return 0;
	}
	Stack.Push(Local_222.f_352 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_352);
	if (StackVal && StackVal)
	{
		return 1;
	}
	switch (func_861())
	{
		case 7:
		case 6:
			if (func_153(iParam0, 16))
			{
				return 1;
			}
			break;
		case 29:
			if ((__LIB_0__::func_162(func_424(iParam0, 2)) != -1 && !func_2256(func_424(iParam0, 2))) && !func_874(func_424(iParam0, 2), 1))
			{
				return 1;
			}
			break;
		case 33:
			if (__LIB_0__::func_162(func_424(iParam0, 2)) != -1 && !func_874(func_424(iParam0, 2), 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_2256(int iParam0)//Position - 0xBB620
{
	return Local_299[iParam0 /*7*/].f_4 != __LIB_0__::func_162();
}

bool func_2258(int iParam0, int iParam1, int iParam2)//Position - 0xBB63F
{
	return __LIB_0__::func_316(&(Local_385[iParam1 /*38*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_2259(int iParam0, int iParam1)//Position - 0xBB65A
{
	if (__LIB_1__::func_458(&(Local_385[iLocal_341 /*38*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2261(int iParam0)//Position - 0xBB6BD
{
	func_2245(iParam0, 4);
	func_2245(iParam0, 9);
}

void func_2262()//Position - 0xBB6D4
{
	if (__LIB_15__::func_358(bLocal_337, Local_378.f_135) > 0)
	{
		__LIB_15__::func_345(1, __LIB_0__::func_955(Local_347.f_0));
		func_2270(1);
		func_2264(1);
	}
	else
	{
		__LIB_15__::func_345(0, __LIB_0__::func_955(Local_347.f_0));
		func_2270(0);
		func_2264(0);
	}
	if (Local_320.f_11 > 0)
	{
		__LIB_0__::func_467();
	}
}

void func_2264(bool bParam0)//Position - 0xBB732
{
	if (bParam0)
	{
		if (__LIB_4__::func_380() == 0)
		{
			__LIB_19__::func_466(func_761(), Local_378.f_135);
		}
	}
	else
	{
		__LIB_19__::func_550(Local_378.f_135);
	}
}

void func_2270(bool bParam0)//Position - 0xBB91A
{
	if (bParam0 != func_2273(bLocal_337))
	{
		__LIB_20__::func_439(Local_347.f_1, bParam0);
	}
}

int func_2273(int iParam0)//Position - 0xBB9B1
{
	return __LIB_20__::func_408(iParam0, Local_347.f_1);
}

void func_2278()//Position - 0xBBAC9
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
						func_2312(iVar2);
						break;
					case -1544474774:
						func_2301(iVar2);
						break;
					case -1946222827:
						func_2300(iVar2);
						break;
					case 177099551:
						func_2299(iVar2);
						break;
					case 1592032725:
						func_2298(iVar2);
						break;
					case 1275205244:
						func_2291(iVar2);
						break;
				}
				break;
			case 186:
				func_2280(iVar2);
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
				func_2279(iVar2);
				break;
		}
		iVar2++;
	}
}

void func_2279(int iParam0)//Position - 0xBBBB6
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
	while (iVar3 < Local_205.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iVar3 /*24*/]))
		{
			iVar4 = NETWORK::NET_TO_PED(Local_378.f_22[iVar3 /*24*/]);
			if (iVar4 == Var0.f_1)
			{
				if (func_73(iVar3, 25) || func_2114(iVar3, iLocal_341, 15))
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
				func_2109(iVar1, 15);
			}
			else
			{
				iVar3++;
			}
		}
void func_2280(int iParam0)//Position - 0xBBC7E
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
		__LIB_0__::func_467(Var1);
		if (ENTITY::DOES_ENTITY_EXIST(Var1.f_0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var1.f_0))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) == 0)
				{
					if (__LIB_15__::func_407(iVar3))
					{
						if (func_2289(iVar3))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_339 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								uVar4 = func_63();
								func_1635(bLocal_337, uVar4, 1, 0);
							}
						}
					}
				}
				iVar5 = 0;
				while (iVar5 < Local_205.f_38.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iVar5 /*24*/]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_378.f_22[iVar5 /*24*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
								if (PED::IS_PED_A_PLAYER(iVar6))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
									if (__LIB_19__::func_469(Var1, iVar6))
									{
										func_2109(iVar5, 9);
									}
									if (Local_222.f_156.f_188 != 0)
									{
										Stack.Push(iVar5);
										Stack.Push(Var1);
										Stack.Push(iVar2);
										Call_Loc(Local_222.f_156.f_188);
									}
									if (iVar2 == bLocal_337)
									{
										__LIB_0__::func_467();
										if (Var1.f_5 && func_2286(iVar5))
										{
											Local_316.f_3++;
										}
									}
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
									{
									}
								}
							}
							else if (Local_222.f_156.f_189 != 0)
							{
								Stack.Push(iVar5);
								Stack.Push(Var1);
								Call_Loc(Local_222.f_156.f_189);
							}
						}
					}
					iVar5++;
				}
				if (((!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(Var1.f_0)) && Var1.f_5) && func_2285())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
							{
								Local_316.f_4++;
							}
						}
					}
				}
				func_2284(Var1, iVar3, iVar2);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(Var1.f_0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_337) < func_63())
				{
					iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
					iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), 0, false);
					if (__LIB_19__::func_468(Var1.f_0, iVar8, iVar9))
					{
						if (func_2289(iVar8))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_339 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								iVar10 = func_63();
								func_1635(bLocal_337, iVar10, 1, 0);
							}
						}
					}
				}
				iVar11 = 0;
				while (iVar11 < Local_205.f_67.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[iVar11 /*8*/]))
					{
						if (((((Local_222.f_352.f_48 != 0 && ENTITY::DOES_ENTITY_EXIST(Var1.f_1)) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_378.f_47[iVar11 /*8*/]), -1, false)) && Var1.f_9) && (Var1.f_6 == joaat("WEAPON_RAMMED_BY_CAR") || Var1.f_6 == joaat("WEAPON_RUN_OVER_BY_CAR")))
						{
							Stack.Push(iVar11);
							Stack.Push(Var1);
							Stack.Push(0);
							Call_Loc(Local_222.f_352.f_48);
						}
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_378.f_47[iVar11 /*8*/]))
						{
							iVar2 = 0;
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar2 == bLocal_337)
									{
										__LIB_0__::func_467();
									}
									iVar12 = func_2281(iVar11);
									if (iVar12 != -1)
									{
										func_2109(iVar12, 10);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
										{
										}
									}
								}
							}
							if (Local_222.f_352.f_47 != 0)
							{
								Stack.Push(iVar11);
								Stack.Push(Var1);
								Stack.Push(iVar2);
								Call_Loc(Local_222.f_352.f_47);
							}
						}
					}
					iVar11++;
				}
				iVar13 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					func_2284(Var1, iVar13, iVar2);
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(Var1.f_0))
			{
				iVar0 = 0;
				while (iVar0 < Local_205.f_19.f_5)
				{
					if (!func_436(iVar0, 4) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar0]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_378.f_2[iVar0]))
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
								func_851(iVar0, 9);
								func_851(iVar0, 47);
								if (Local_222.f_114.f_33 != 0)
								{
									Stack.Push(iVar0);
									Call_Loc(Local_222.f_114.f_33);
								}
							}
						}
					}
					iVar0++;
				}
				iVar14 = 0;
				while (iVar14 < Local_205.f_85.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_56[iVar14 /*5*/]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_378.f_56[iVar14 /*5*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar2 == bLocal_337)
									{
										__LIB_0__::func_467();
									}
									if (Local_222.f_407.f_34 != 0)
									{
										Stack.Push(iVar14);
										Stack.Push(Var1);
										Stack.Push(iVar2);
										Call_Loc(Local_222.f_407.f_34);
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

int func_2281(int iParam0)//Position - 0xBC1C1
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_378.f_47[iParam0 /*8*/]), -1, false))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_378.f_47[iParam0 /*8*/]), -1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_205.f_38.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iVar1 /*24*/]) && iVar0 == NETWORK::NET_TO_PED(Local_378.f_22[iVar1 /*24*/]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

void func_2284(struct<13> Param0, int iParam1, int iParam2)//Position - 0xBC3CF
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
					if (Local_222.f_15 != 0)
					{
						Stack.Push(iVar0);
						Stack.Push(Param0);
						Stack.Push(iParam2);
						Call_Loc(Local_222.f_15);
					}
					if (iParam2 == bLocal_337)
					{
						if (func_66(15))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
							{
								if (__LIB_0__::func_114(iVar0))
								{
									__LIB_0__::func_467();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_2285()//Position - 0xBC463
{
	if (Local_222.f_92.f_1 != 0)
	{
		Call_Loc(Local_222.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_2286(int iParam0)//Position - 0xBC482
{
	if (Local_222.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_92);
		return StackVal;
	}
	return 1;
}

int func_2289(int iParam0)//Position - 0xBC56A
{
	if (!func_2036() || !func_687(0, 0, 1))
	{
		return 0;
	}
	if (func_66(28))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2291(int iParam0)//Position - 0xBC5B6
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
	if (!func_2036())
	{
		return;
	}
	sVar1 = func_2297(Var0.f_3);
	sVar2 = func_2296(Var0.f_3);
	switch (Var0.f_2)
	{
		case 0:
			if (Var0.f_1 == bLocal_337)
			{
				__LIB_3__::func_218("FMC_TIC_HAXSPu" /* GXT: You hacked the security panel. */, 0);
			}
			else
			{
				__LIB_19__::func_874("FMC_TIC_HAXSPr" /* GXT: ~a~~s~ hacked the security panel. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 1:
			if (Var0.f_1 == bLocal_337)
			{
				__LIB_3__::func_218("FMC_TIC_HAXLAPu" /* GXT: You hacked a laptop. */, 0);
			}
			else
			{
				__LIB_19__::func_874("FMC_TIC_HAXLAPr" /* GXT: ~a~~s~ hacked a laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (Var0.f_1 == bLocal_337)
			{
				__LIB_3__::func_218("FMC_TIC_HKTLTPL" /* GXT: You hacked the laptop. */, 0);
			}
			else
			{
				__LIB_19__::func_874("FMC_TIC_HKTLTPR" /* GXT: ~a~~s~ hacked the laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 5:
			if (Var0.f_1 == bLocal_337 && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				__LIB_3__::func_218(sVar1, 0);
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && __LIB_1__::func_693(Var0.f_1, 0, 1))
			{
				__LIB_19__::func_874(sVar2, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
	}
}

char* func_2296(var uParam0, var uParam1)//Position - 0xBC91C
{
	if (Local_222.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_222.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_2297(var uParam0, var uParam1)//Position - 0xBC944
{
	if (Local_222.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_222.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

void func_2298(int iParam0)//Position - 0xBC96C
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Var0.f_3 != Local_347.f_0 || Var0.f_4 != NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT())
		{
			return;
		}
		func_582(Var0.f_2);
	}
}

void func_2299(int iParam0)//Position - 0xBC9A9
{
	struct<7> Var0;
	if (!bLocal_335)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != Local_347.f_0 || Var0.f_6 != NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT())
		{
			return;
		}
		Local_378.f_22[Var0.f_3 /*24*/].f_6 = Var0.f_2;
	}
}

void func_2300(int iParam0)//Position - 0xBC9F9
{
	struct<7> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7) || Local_347.f_0 != Var0.f_2)
	{
		return;
	}
	Local_313.f_0 = Var0.f_3;
	Local_313.f_2 = Var0.f_5;
	Local_313.f_1 = Var0.f_6;
	func_505(15);
}

void func_2301(int iParam0)//Position - 0xBCA3F
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
			iVar2 = (iVar2 + func_2306(Var0.f_15[iVar1], Var0.f_2[iVar1 /*2*/].f_1, Var0.f_1, Var0.f_21[iVar1]));
			iVar1++;
		}
		if (iVar2 > 0)
		{
			func_2304(Var0.f_1);
			func_2302(iVar2, Var0.f_1);
		}
	}
}

void func_2302(int iParam0, int iParam1)//Position - 0xBCAEA
{
	if (func_2303(iParam1))
	{
		Local_385[iLocal_340 /*38*/].f_13 = (Local_385[iLocal_340 /*38*/].f_13 + iParam0);
	}
}

bool func_2303(int iParam0)//Position - 0xBCB12
{
	return ((iParam0 == bLocal_337 && !__LIB_12__::func_548(1)) || __LIB_2__::func_39(iParam0) == bLocal_337);
}

void func_2304(int iParam0)//Position - 0xBCB3B
{
	if (!__LIB_1__::func_731(26))
	{
		if (!func_2305())
		{
		}
	}
	if (!func_66(27))
	{
		if (__LIB_1__::func_693(iParam0, 0, 1))
		{
			MISC::SET_BIT(&(Global_2815059.f_1814), iParam0);
			Global_2815059.f_1815[iParam0] = Local_347.f_0;
		}
	}
}

int func_2305()//Position - 0xBCB85
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (func_436(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2306(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBCBB1
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < func_721())
	{
		if (iParam0 != Local_378.f_160)
		{
		}
		else if (iParam1 != Local_378.f_160.f_1[iVar1 /*5*/].f_1)
		{
		}
		else
		{
			switch (func_882(iVar1))
			{
				case 0:
					func_2310(func_881(iVar1), iParam2);
					break;
				case 1:
					break;
			}
			if (iParam3 > 0)
			{
				func_2083();
				Local_385[iLocal_340 /*38*/].f_14++;
				return 0;
			}
			iVar0++;
			switch (func_882(iVar1))
			{
				case 0:
					func_2309(func_881(iVar1), iParam2);
					break;
				case 1:
					break;
			}
			if (bLocal_335)
			{
				if (__LIB_12__::func_486(iParam2, 1))
				{
					Local_378.f_160.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__::func_39(iParam2));
				}
				else
				{
					Local_378.f_160.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam2);
				}
			}
			if (Local_222.f_54.f_6 != 0)
			{
				Stack.Push(iParam2 == bLocal_337);
				Call_Loc(Local_222.f_54.f_6);
				__LIB_0__::func_467(StackVal);
			}
			if (Local_222.f_54.f_7 != 0)
			{
				Stack.Push(iParam2 == bLocal_337);
				Call_Loc(Local_222.f_54.f_7);
				__LIB_0__::func_467(StackVal);
			}
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_2309(int iParam0, int iParam1)//Position - 0xBCD02
{
	if (iParam1 == bLocal_337)
	{
		func_851(iParam0, 6);
	}
	else if (__LIB_3__::func_360(bLocal_337, iParam1))
	{
	}
	else
	{
		func_851(iParam0, 9);
		func_851(iParam0, 25);
	}
}

void func_2310(var uParam0, int iParam1)//Position - 0xBCD3B
{
	if (Local_222.f_114.f_31 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1 == bLocal_337);
		Call_Loc(Local_222.f_114.f_31);
	}
	__LIB_0__::func_467(uParam0, iParam1 == bLocal_337);
}

void func_2312(int iParam0)//Position - 0xBCD72
{
	struct<11> Var0;
	int iVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar1 = func_2306(Var0.f_5, Var0.f_2.f_1, Var0.f_1, Var0.f_7);
		if (iVar1 > 0)
		{
			func_2304(Var0.f_1);
			func_2302(iVar1, Var0.f_1);
		}
	}
}

void func_2313()//Position - 0xBCDD4
{
	var uVar0;
	bool bVar1;
	int iVar2;
	uVar0 = func_687(0, 0, 1);
	bVar1 = func_615(6);
	iVar2 = 0;
	while (iVar2 < func_37())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar2]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_378.f_2[iVar2]), false))
		{
			if (uVar0 && !func_774(iVar2, iLocal_341, 31))
			{
				OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_205.f_19.f_5[0 /*13*/].f_2, func_2314());
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_378.f_2[iVar2]), false, true);
				OBJECT::SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Local_205.f_19.f_5[0 /*13*/].f_2, true);
				func_505(6);
				bVar1 = true;
			}
			else
			{
				if (bVar1)
				{
					OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_205.f_19.f_5[0 /*13*/].f_2, -1);
					func_726(6);
					bVar1 = false;
				}
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_378.f_2[iVar2]), true, true);
				if (func_774(iVar2, iLocal_341, 1) && func_442(iVar2))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_2[iVar2]))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_378.f_2[iVar2]), true, true);
					}
				}
			}
		}
		iVar2++;
	}
}

int func_2314()//Position - 0xBCEEB
{
	if (Local_222.f_114.f_41 != 0)
	{
		Call_Loc(Local_222.f_114.f_41);
		return StackVal;
	}
	return 1;
}

void func_2315()//Position - 0xBCF0A
{
	if ((!func_615(31) && bLocal_345) && func_487() == 0)
	{
		func_2316();
		func_505(31);
	}
}

void func_2316()//Position - 0xBCF39
{
	Local_316.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_0__::func_467();
	__LIB_0__::func_467();
}

void func_2319()//Position - 0xBCF62
{
	func_2322();
	func_2321();
	func_2320();
}

void func_2320()//Position - 0xBCF76
{
	Local_320.f_11 = __LIB_15__::func_358(bLocal_337, Local_378.f_135);
}

void func_2321()//Position - 0xBCF91
{
	func_1654(24);
}

void func_2322()//Position - 0xBCF9F
{
	if (Local_310.f_0 > Local_310.f_1)
	{
		Local_310.f_1 = Local_310.f_0;
	}
	Local_310.f_0 = 0;
}

void func_2323()//Position - 0xBCFBE
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
	bool bVar13;
	Var3 = 1;
	Var3.f_1 = 1;
	Var4 = 1;
	Var4.f_1 = 1;
	uVar5 = 1;
	bVar6 = true;
	bVar7 = true;
	iVar1 = iVar1;
	iVar2 = 0;
	while (iVar2 < Local_205.f_19)
	{
		iLocal_368[iVar2] = __LIB_0__::func_162();
		Local_299[iVar2 /*7*/].f_4 = __LIB_0__::func_162();
		func_891(iVar2, 33);
		func_891(iVar2, 12);
		iVar2++;
	}
	func_726(79);
	if (bLocal_335)
	{
		func_16(4);
		func_2370(7);
		func_2370(10);
		func_2370(15);
	}
	if (Local_222.f_3.f_4 != 0)
	{
		Call_Loc(Local_222.f_3.f_4);
	}
	bVar10 = func_2368();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (bLocal_335)
		{
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar9 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar9);
			iVar1 = bVar8;
			if (__LIB_1__::func_693(bVar8, 0, 1))
			{
				func_2367(bVar8, iVar9);
				iVar11 = 0;
				iVar2 = 0;
				while (iVar2 < Local_205.f_19)
				{
					if (func_774(iVar2, iVar9, 1))
					{
						iLocal_368[iVar2] = iVar9;
						iLocal_368[iVar2] = iLocal_368[iVar2];
						Local_299[iVar2 /*7*/].f_4 = bVar8;
						if (bLocal_337 != bVar8)
						{
							if (__LIB_3__::func_360(bLocal_337, bVar8) && !func_66(21))
							{
								func_851(iVar2, 33);
							}
							else
							{
								func_851(iVar2, 12);
							}
						}
						if (!func_774(iVar2, iLocal_341, 14))
						{
							iVar11 = 1;
						}
					}
					iVar2++;
				}
				func_2360(bVar8, iVar11, bVar10, PLAYER::IS_PLAYER_PLAYING(bVar8));
				if (bLocal_335)
				{
					if ((!func_3(1) && func_420(iVar9, 1)) && !func_2358(iVar9))
					{
						func_16(1);
					}
					if (func_420(iVar9, 7))
					{
						func_16(7);
					}
					if (func_420(iVar9, 10))
					{
						func_16(10);
					}
					iVar2 = 0;
					while (iVar2 < Local_205.f_19)
					{
						if (func_774(iVar2, iVar9, 1))
						{
							if (func_420(iVar9, 2))
							{
								func_446(iVar2, 23);
							}
							else
							{
								func_441(iVar2, 23);
							}
						}
						func_2355(iVar2, iVar0, iVar9);
						func_2353(&Var3, iVar2, iVar9);
						iVar2++;
					}
					func_2350(iVar0, iVar9);
					func_2346(iVar0);
					iVar2 = 0;
					while (iVar2 < Local_205.f_67)
					{
						func_2343(iVar2, iVar0, iVar9);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_205.f_38)
					{
						func_2340(iVar2, iVar0, iVar9);
						func_2338(&Var4, iVar2, iVar9);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_205.f_85)
					{
						func_2335(iVar2, iVar0, iVar9);
						iVar2++;
					}
					if (!func_420(iVar9, 0))
					{
						bVar6 = false;
					}
					if (!func_420(iVar9, 23))
					{
						bVar7 = false;
					}
					if (!func_420(iVar9, 4))
					{
						func_2370(4);
					}
					iVar12 = 0;
					while (iVar12 < Local_205.f_111)
					{
						if (func_2334(iVar0, iVar12))
						{
							__LIB_19__::func_417(&uVar5, iVar12);
						}
						iVar12++;
					}
				}
				if (Local_222.f_3.f_4.f_1 != 0)
				{
					Stack.Push(iVar0);
					Stack.Push(iVar9);
					Call_Loc(Local_222.f_3.f_4.f_1);
				}
			}
		}
		iVar0++;
	}
	if (Local_299.f_9 != iLocal_338)
	{
		bVar13 = Local_299.f_9;
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar13))
		{
			if (!BitTest(Local_299.f_10, Local_299.f_9))
			{
				MISC::SET_BIT(&(Local_299.f_10), Local_299.f_9);
				func_1971(bVar13, __LIB_1__::func_693(bVar13, 1, 1), 1);
			}
		}
		else if (BitTest(Local_299.f_10, Local_299.f_9))
		{
			MISC::CLEAR_BIT(&(Local_299.f_10), Local_299.f_9);
		}
	}
	Local_299.f_9++;
	if (Local_299.f_9 >= 31)
	{
		Local_299.f_9 = 0;
	}
	if (bLocal_335)
	{
		func_2331(&Var3);
		func_2328(&Var4);
		func_2324(&uVar5);
		if (bVar6)
		{
			if (!func_3(0))
			{
				func_16(0);
			}
		}
		else if (func_3(0))
		{
			func_2370(0);
		}
		if (bVar7)
		{
			if (!func_3(20))
			{
				func_16(20);
			}
		}
		Stack.Push(Local_222.f_80.f_1 != 0);
		Stack.Push(NETWORK::NETWORK_GET_NUM_PARTICIPANTS());
		Call_Loc(Local_222.f_80.f_1);
		if (StackVal && StackVal < StackVal)
		{
			func_8(12);
		}
	}
	if (Local_222.f_3.f_4.f_2 != 0)
	{
		Call_Loc(Local_222.f_3.f_4.f_2);
	}
}

void func_2324(var uParam0)//Position - 0xBD3DE
{
	if (!__LIB_19__::func_414(&(Local_378.f_72), uParam0))
	{
		__LIB_19__::func_470(uParam0, &(Local_378.f_72));
	}
}

void func_2328(var uParam0)//Position - 0xBD486
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (__LIB_3__::func_479(uParam0[iVar0 /*2*/], iVar1))
			{
				func_72(iVar0, __LIB_19__::func_415(iVar1));
			}
			else
			{
				func_2329(iVar0, __LIB_19__::func_415(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_2329(int iParam0, var uParam1)//Position - 0xBD4DF
{
	if (__LIB_16__::func_755(&(Local_378.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
}

void func_2331(var uParam0)//Position - 0xBD520
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (__LIB_3__::func_479(uParam0[iVar0 /*2*/], iVar1))
			{
				func_446(iVar0, __LIB_19__::func_416(iVar1));
			}
			else
			{
				func_441(iVar0, __LIB_19__::func_416(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_2334(int iParam0, int iParam1)//Position - 0xBD5B1
{
	return __LIB_3__::func_479(&(Local_385[iParam0 /*38*/].f_24), iParam1);
}

void func_2335(int iParam0, int iParam1, int iParam2)//Position - 0xBD5C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_418(iVar1);
		if (iVar2 != 13)
		{
			if (func_2188(iParam0, iParam2, iVar1))
			{
				func_2336(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2336(int iParam0, int iParam1, var uParam2)//Position - 0xBD60D
{
	if (!func_145(iParam1, iParam0))
	{
		func_143(iParam1, iParam0);
	}
}

void func_2338(var uParam0, int iParam1, int iParam2)//Position - 0xBD677
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_419(iVar1);
		if (iVar2 != 17)
		{
			if (!__LIB_3__::func_479(uParam0[iParam1 /*2*/], iVar0) && func_2114(iParam1, iParam2, iVar2))
			{
				__LIB_7__::func_698(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

void func_2340(int iParam0, int iParam1, int iParam2)//Position - 0xBD6F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_420(iVar1);
		if (iVar2 != 32)
		{
			if (func_2114(iParam0, iParam2, iVar1))
			{
				func_2341(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2341(int iParam0, int iParam1, var uParam2)//Position - 0xBD739
{
	if (!func_73(iParam1, iParam0))
	{
		func_72(iParam1, iParam0);
	}
}

void func_2343(int iParam0, int iParam1, int iParam2)//Position - 0xBD7FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_421(iVar1);
		if (iVar2 != 25)
		{
			if (func_2258(iParam0, iParam2, iVar1))
			{
				func_2344(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2344(int iParam0, int iParam1, var uParam2)//Position - 0xBD841
{
	if (!func_153(iParam1, iParam0))
	{
		func_151(iParam1, iParam0);
	}
}

void func_2346(int iParam0)//Position - 0xBD8EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_20__::func_538(iVar1);
		if (iVar2 != 1)
		{
			func_2347(iVar1, iVar2, iParam0);
		}
		iVar0++;
	}
}

void func_2347(int iParam0, int iParam1, int iParam2)//Position - 0xBD925
{
	if (!func_570(iParam1))
	{
		if (func_569(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2), iParam0))
		{
			func_2348(iParam1);
		}
	}
}

void func_2348(var uParam0)//Position - 0xBD94C
{
	if (__LIB_1__::func_458(&(Local_378.f_122), uParam0))
	{
	}
}

void func_2350(int iParam0, int iParam1)//Position - 0xBD97C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = iVar0;
		if (func_420(iParam1, iVar1))
		{
			iVar2 = __LIB_19__::func_422(iVar1);
			if (iVar2 != 23)
			{
				func_2351(iVar2, iParam0);
			}
		}
		iVar0++;
	}
}

void func_2351(int iParam0, var uParam1)//Position - 0xBD9BD
{
	if (!func_3(iParam0))
	{
		func_16(iParam0);
	}
}

void func_2353(var uParam0, int iParam1, int iParam2)//Position - 0xBDA11
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_423(iVar1);
		if (iVar2 != 48)
		{
			if (!__LIB_3__::func_479(uParam0[iParam1 /*2*/], iVar0) && func_774(iParam1, iParam2, iVar2))
			{
				__LIB_7__::func_698(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

void func_2355(int iParam0, int iParam1, int iParam2)//Position - 0xBDA85
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_424(iVar1);
		if (iVar2 != 49)
		{
			if (func_774(iParam0, iParam2, iVar1))
			{
				if (iVar2 == 32)
				{
					func_16(12);
				}
				func_2356(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2356(int iParam0, int iParam1, var uParam2)//Position - 0xBDAD7
{
	if (!func_436(iParam1, iParam0))
	{
		func_446(iParam1, iParam0);
	}
}

int func_2358(int iParam0)//Position - 0xBDC5F
{
	int iVar0;
	int iVar1;
	iVar0 = func_2359(iParam0);
	iVar1 = 0;
	while (iVar1 < Local_227[iVar0 /*21*/].f_19)
	{
		if (Local_227[iVar0 /*21*/].f_1[iVar1 /*3*/].f_2 == func_22())
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

var func_2359(int iParam0)//Position - 0xBDCA4
{
	return Local_385[iParam0 /*38*/];
}

void func_2360(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xBDCB3
{
	if (iParam1 && func_2366(bParam0, bParam2, bParam3))
	{
		func_2361(bParam0, bParam3, !__LIB_3__::func_360(bLocal_337, bParam0));
	}
	else
	{
		func_1971(bParam0, bParam3, 0);
	}
}

void func_2361(bool bParam0, bool bParam1, bool bParam2)//Position - 0xBDCED
{
	int iVar0;
	iVar0 = func_1647(bParam0);
	if (!BitTest(Local_299.f_8, bParam0))
	{
		if (bParam0 != __LIB_0__::func_162())
		{
			if (bParam1)
			{
				if (__LIB_19__::func_392(func_867(iVar0)))
				{
					__LIB_19__::func_344(bParam0, 0, 1);
					__LIB_3__::func_459(bParam0, 1);
					if (!__LIB_19__::func_305(bParam0))
					{
						__LIB_15__::func_359(bParam0, 1, 1, 1);
					}
					__LIB_12__::func_535(bParam0, func_867(iVar0), 1, 1);
					__LIB_19__::func_340(bParam0, func_2363(iVar0), 1, 1);
					__LIB_12__::func_554(bParam0, func_856(iVar0, 0), 1, 0);
					if (__LIB_19__::func_293(bParam0))
					{
						if (!__LIB_19__::func_342(bParam0))
						{
							__LIB_19__::func_341(bParam0, 1, 1);
						}
					}
					__LIB_19__::func_359(bParam0, 0, 1);
					MISC::SET_BIT(&(Local_299.f_8), bParam0);
				}
			}
		}
	}
	else if (__LIB_19__::func_425(bParam0) != func_867(iVar0))
	{
		__LIB_12__::func_535(bParam0, func_867(iVar0), 1, 1);
		__LIB_19__::func_340(bParam0, func_2363(iVar0), 1, 1);
		__LIB_12__::func_554(bParam0, func_856(iVar0, 0), 1, 0);
	}
}

float func_2363(int iParam0)//Position - 0xBDDEF
{
	if (Local_222.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

int func_2366(int iParam0, bool bParam1, bool bParam2)//Position - 0xBDE72
{
	if (!bParam1)
	{
		return 0;
	}
	if (iParam0 == bLocal_337)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

void func_2367(int iParam0, int iParam1)//Position - 0xBDE9B
{
	if (bLocal_337 == iParam0)
	{
		return;
	}
	if ((func_420(iParam1, 27) && ENTITY::DOES_ENTITY_EXIST(iLocal_343)) && PLAYER::GET_PLAYER_PED(iParam0) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, -1, false))
	{
		func_505(79);
	}
}

int func_2368()//Position - 0xBDEE0
{
	if (!__LIB_19__::func_306())
	{
		return 0;
	}
	if (!func_615(7))
	{
		return 0;
	}
	if (func_2606() > 2)
	{
		return 0;
	}
	if (func_426() == 1)
	{
		return 0;
	}
	return 1;
}

void func_2370(int iParam0)//Position - 0xBDF29
{
	if (__LIB_16__::func_755(&(Local_378.f_88), iParam0))
	{
	}
}

void func_2371(int iParam0)//Position - 0xBDF3F
{
	Local_385[iLocal_340 /*38*/].f_22 = iParam0;
}

int func_2372()//Position - 0xBDF53
{
	bool bVar0;
	if (!func_502())
	{
		return 0;
	}
	func_2576();
	func_2547();
	func_2399();
	func_2398();
	__LIB_0__::func_467(1);
	func_2393();
	if (!func_2392())
	{
		return 0;
	}
	__LIB_0__::func_467();
	func_2377(1);
	func_2376();
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	Call_Loc(Local_222.f_2);
	bVar0 = StackVal;
	if (!bVar0)
	{
		return 0;
	}
	func_2374();
	func_2373();
	return 1;
}

void func_2373()//Position - 0xBDFC0
{
	Global_1943929.f_2 = Local_378.f_90;
	Global_1943929.f_3 = Local_378.f_91;
}

void func_2374()//Position - 0xBDFDE
{
	int iVar0;
	int iVar1;
	var uVar2;
	uVar2 = uVar2;
	__LIB_19__::func_383(iLocal_348, 5, "iNumModeStates", "MAX_NUM_STATES");
	__LIB_19__::func_383(iLocal_349, 7, "iNumClientModeStates", "MAX_NUM_CLIENT_STATES");
	iVar0 = 0;
	while (iVar0 < iLocal_348)
	{
		__LIB_19__::func_383(Local_226[iVar0 /*20*/].f_19, 5, "sModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_349)
	{
		__LIB_19__::func_383(Local_227[iVar0 /*21*/].f_19, 5, "sClientModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_19__::func_383(Local_228.f_23[iVar0 /*67*/], 5, "sPedLocal.sBehaviour[iLoop].iNumTasks", "MAX_NUM_PED_TASKS");
		iVar1 = 0;
		while (iVar1 < Local_228.f_23[iVar0 /*67*/])
		{
			__LIB_19__::func_383(Local_228.f_23[iVar0 /*67*/].f_1[iVar1 /*13*/].f_12, 3, "sPedLocal.sBehaviour[iLoop].Task[iLoop2].iNumTransitions", "MAX_NUM_PED_TASK_TRANSITIONS");
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		__LIB_19__::func_383(Local_228[iVar0 /*19*/].f_16, 5, "sPedLocal.sPed[iLoop].iNumTriggers", "MAX_NUM_PED_TRIGGERS");
		iVar0++;
	}
}

void func_2376()//Position - 0xBE0F2
{
	func_505(7);
}

void func_2377(bool bParam0)//Position - 0xBE0FF
{
	if (func_615(52) == bParam0)
	{
		return;
	}
	if (func_66(1))
	{
		if (bParam0)
		{
			__LIB_11__::func_662(8);
		}
		else
		{
			__LIB_11__::func_670(8);
		}
	}
	if (func_66(2))
	{
		if (bParam0)
		{
			__LIB_1__::func_950();
		}
		else
		{
			__LIB_2__::func_15();
		}
	}
	if (func_66(34))
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
	if (func_66(3))
	{
		__LIB_19__::func_429(bParam0);
	}
	if (func_66(4))
	{
		func_2384(bParam0);
		__LIB_19__::func_428(bParam0);
	}
	if (func_66(5))
	{
		if (bParam0)
		{
			__LIB_16__::func_789(2);
		}
		else
		{
			__LIB_16__::func_791(2);
		}
	}
	if (func_66(6))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_339, 432, bParam0);
	}
	__LIB_19__::func_427(!bParam0);
	func_2379(bParam0);
	if (Local_222.f_14 != 0)
	{
		Stack.Push(bParam0);
		Call_Loc(Local_222.f_14);
	}
	if (bParam0)
	{
		__LIB_19__::func_426(7);
		func_505(52);
	}
	else
	{
		__LIB_19__::func_286(7);
		func_726(52);
	}
}

void func_2379(bool bParam0)//Position - 0xBE215
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_378.f_2[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_378.f_2[iVar0], true);
				}
			}
			else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_378.f_2[iVar0]))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_378.f_2[iVar0], false);
			}
		}
		iVar0++;
	}
}

void func_2384(bool bParam0)//Position - 0xBE2D6
{
	Global_31967 = bParam0;
	if (bParam0)
	{
		__LIB_0__::func_483(7, iLocal_339, 0);
		__LIB_0__::func_483(8, iLocal_339, 0);
		__LIB_0__::func_483(20, iLocal_339, 0);
		__LIB_0__::func_483(21, iLocal_339, 0);
	}
}

int func_2392()//Position - 0xBE624
{
	int iVar0;
	if (func_615(53) || Local_222.f_466.f_4 == 0)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_320.f_1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_466.f_4);
		Local_320.f_1[iVar0 /*4*/] = StackVal;
		iVar0++;
	}
	Local_320.f_0 = iVar0;
	func_505(53);
	return 1;
}

void func_2393()//Position - 0xBE67F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (func_615(51))
	{
		return;
	}
	iVar0 = func_2396();
	iVar1 = func_2395();
	iVar2 = func_2394();
	iVar3 = (Local_205.f_38 - iVar0);
	iVar4 = (Local_205.f_67 - iVar1);
	iVar5 = (Local_205.f_85 - iVar2);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar4);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar5);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(iVar0);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(iVar1);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(iVar2);
	func_505(51);
}

int func_2394()//Position - 0xBE6EA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_85)
	{
		if (func_133(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2395()//Position - 0xBE718
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_67)
	{
		if (func_175(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2396()//Position - 0xBE746
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		if (func_113(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_2398()//Position - 0xBE77C
{
	switch (func_528())
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Killer_SackSlasher", false, -1);
			break;
		case 1:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Killer_Driver", false, -1);
			break;
		case 2:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Killer_Psycho", false, -1);
			break;
		case 3:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Killer_Clown", false, -1);
			break;
		case 4:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPSUM2/Mirror_Slash", false, -1);
			break;
	}
}

void func_2399()//Position - 0xBE7F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_615(50))
	{
		return;
	}
	if (Local_205.f_38 == 0)
	{
		func_505(50);
		return;
	}
	iVar1 = func_2546();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_156);
		func_2402(iVar0);
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Local_205.f_38)
	{
		Stack.Push(iVar2);
		Call_Loc(Local_222.f_156.f_132);
		func_2400(iVar2);
		iVar2++;
	}
	func_505(50);
}

void func_2400(int iParam0)//Position - 0xBE868
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < Local_205.f_122)
	{
		if (Local_205.f_122.f_1[iVar0 /*10*/] == iParam0)
		{
			StringCopy(&(Local_322[iVar0 /*4*/]), "miss_", 16);
			StringIntConCat(&(Local_322[iVar0 /*4*/]), Local_347.f_0, 16);
			StringConCat(&(Local_322[iVar0 /*4*/]), "_", 16);
			StringIntConCat(&(Local_322[iVar0 /*4*/]), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), 16);
			StringConCat(&(Local_322[iVar0 /*4*/]), "_", 16);
			StringIntConCat(&(Local_322[iVar0 /*4*/]), iVar0, 16);
			TASK::OPEN_PATROL_ROUTE(&(Local_322[iVar0 /*4*/]));
			while (iVar1 < 1 && !__LIB_0__::func_86(Local_205.f_122.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_1))
			{
				TASK::ADD_PATROL_ROUTE_NODE(iVar1, func_2401(iVar0, iVar1), Local_205.f_122.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_1, Local_205.f_122.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_4, Local_205.f_122.f_1[iVar0 /*10*/].f_1[iVar1 /*8*/].f_7);
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

char* func_2401(int iParam0, int iParam1)//Position - 0xBE997
{
	int iVar0;
	iVar0 = Local_205.f_122.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/];
	if (iVar0 != -1)
	{
	}
	return "";
}

void func_2402(int iParam0)//Position - 0xBE9BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar3 = Local_228.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/];
		if (iVar3 != -1)
		{
			if (Local_228.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_10 == 0)
			{
				func_2410(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_228.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_12)
			{
				if (Local_228.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/].f_1 == 0)
				{
					iVar2 = Local_228.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/];
					func_2403(iParam0, iVar3, Local_228.f_23[iParam0 /*67*/].f_1[iVar2 /*13*/], &(Local_228.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_2403(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xBEA8D
{
	switch (iParam2)
	{
		case 8:
			*uParam3 = 781183/*func_2409*/;
			break;
		case 21:
			*uParam3 = 781167/*func_2408*/;
			break;
		case 7:
			*uParam3 = 781152/*func_2407*/;
			break;
		case 23:
			*uParam3 = 781137/*func_2406*/;
			break;
		case 2:
			*uParam3 = 781137/*func_2406*/;
			break;
		case 10:
			*uParam3 = 781137/*func_2406*/;
			break;
		case 11:
			*uParam3 = 781137/*func_2406*/;
			break;
	}
	switch (iParam1)
	{
		case 12:
			*uParam3 = 781122/*func_2405*/;
			break;
		case 16:
			*uParam3 = 781107/*func_2404*/;
			break;
	}
}

bool func_2404(int iParam0, var uParam1)//Position - 0xBEB33
{
	return func_73(iParam0, 5);
}

bool func_2405(int iParam0, var uParam1)//Position - 0xBEB42
{
	return func_73(iParam0, 5);
}

int func_2406(int iParam0, var uParam1)//Position - 0xBEB51
{
	return func_2135(iParam0, 0);
}

int func_2407(int iParam0, var uParam1)//Position - 0xBEB60
{
	return func_2135(iParam0, 0);
}

bool func_2408(int iParam0, var uParam1)//Position - 0xBEB6F
{
	return func_73(iParam0, 21);
}

bool func_2409(int iParam0, var uParam1)//Position - 0xBEB7F
{
	return (Local_205.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_205.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

void func_2410(int iParam0, int iParam1, int iParam2)//Position - 0xBEBA8
{
	int iVar0;
	int iVar1;
	switch (iParam2)
	{
		case 8:
			iVar0 = 794743/*func_2543*/;
			break;
		case 10:
			iVar0 = 794643/*func_2542*/;
			break;
		case 11:
			iVar0 = 794596/*func_2541*/;
			break;
		case 15:
			iVar0 = 794158/*func_2539*/;
			break;
		case 13:
			iVar0 = 794009/*func_2536*/;
			break;
		case 14:
			iVar0 = 793923/*func_2535*/;
			break;
		case 9:
			iVar0 = 793757/*func_2534*/;
			break;
		case 7:
			iVar0 = 793660/*func_2533*/;
			break;
		case 18:
			iVar0 = 793577/*func_2532*/;
			break;
		case 19:
			iVar0 = 793469/*func_2531*/;
			break;
		case 20:
			iVar0 = 793349/*func_2530*/;
			break;
		case 12:
			iVar0 = 791137/*func_2509*/;
			iVar1 = 790451/*func_2502*/;
			break;
		case 6:
			iVar0 = 789981/*func_2496*/;
			break;
		case 26:
			iVar0 = 789772/*func_2494*/;
			break;
		case 28:
			iVar0 = 789353/*func_2489*/;
			break;
		case 38:
			iVar0 = 789252/*func_2487*/;
			break;
		case 21:
			iVar0 = 788772/*func_2480*/;
			iVar1 = 788359/*func_2478*/;
			break;
		case 40:
			iVar0 = 788111/*func_2473*/;
			break;
		case 23:
			iVar0 = 787800/*func_2468*/;
			break;
		case 1:
			iVar0 = 787455/*func_2464*/;
			break;
		case 2:
			iVar0 = 786892/*func_2459*/;
			break;
		case 39:
			iVar0 = 786377/*func_2455*/;
			break;
		case 16:
			iVar0 = 785697/*func_2447*/;
			iVar1 = 785324/*func_2441*/;
			break;
		case 29:
			iVar0 = 784894/*func_2439*/;
			break;
		case 34:
			iVar0 = 784877/*func_2438*/;
			break;
		case 35:
			iVar0 = 784410/*func_2436*/;
			break;
		case 32:
			iVar0 = 783967/*func_2431*/;
			break;
		case 41:
			iVar0 = 782790/*func_2425*/;
			break;
		case 42:
			iVar0 = 782586/*func_2422*/;
			break;
		case 43:
			iVar0 = 782011/*func_2414*/;
			break;
		case 44:
			iVar0 = 781740/*func_2411*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_591(iParam0, iParam1, iVar0, iVar1);
	}
}

void func_2411(int iParam0, int iParam1)//Position - 0xBEDAC
{
	int iVar0;
	struct<3> Var1;
	iVar0 = func_2413(iParam0, iParam1);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(iVar0), false))
		{
			if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar0)) != 21)
			{
				if (PED::IS_PED_IN_ANY_PLANE(iParam1))
				{
					if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
					{
						if (Local_222.f_156.f_2.f_52.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_222.f_156.f_2.f_52.f_1);
						}
						Var1 = { func_2412(iParam0, iParam1) };
						TASK::TASK_PLANE_MISSION(iParam1, NETWORK::NET_TO_VEH(iVar0), 0, 0, Var1, 21, 50f, 0f, -1f, 0f, 0f, true);
					}
				}
			}
		}
	}
}

Vector3 func_2412(int iParam0, int iParam1)//Position - 0xBEE45
{
	if (Local_222.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_2413(int iParam0, int iParam1)//Position - 0xBEE70
{
	int iVar0;
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
		return NETWORK::VEH_TO_NET(iVar0);
	}
	return 0;
}

void func_2414(int iParam0, int iParam1)//Position - 0xBEEBB
{
	struct<3> Var0;
	if (!func_73(iParam0, 28) && !func_2114(iParam0, iLocal_341, 16))
	{
		Var0 = { func_2421(iParam0, iParam1) };
		if (!__LIB_0__::func_86(Var0))
		{
			if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				if (func_2420(iParam0) != -1f && __LIB_0__::func_724(iParam1, Var0, 1) > func_2420(iParam0))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var0, 2f, 20000, func_2420(iParam0), 4, 40000f);
					}
				}
				else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_THROW_PROJECTILE"), 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam1, func_2417(iParam0), func_2416(iParam0), true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam1, func_2417(iParam0), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
					TASK::TASK_THROW_PROJECTILE(iParam1, Var0, 0, true);
					if (func_2415(iParam0))
					{
						func_2109(iParam0, 16);
					}
				}
			}
		}
	}
}

int func_2415(int iParam0)//Position - 0xBEFAC
{
	if (Local_222.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_2416(int iParam0)//Position - 0xBEFD5
{
	if (Local_222.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_2417(int iParam0)//Position - 0xBEFFE
{
	if (Local_222.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_2420(int iParam0)//Position - 0xBF0A7
{
	if (Local_222.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

Vector3 func_2421(int iParam0, var uParam1)//Position - 0xBF0D0
{
	if (Local_222.f_156.f_2.f_125 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_222.f_156.f_2.f_125);
		return StackVal, StackVal, StackVal;
	}
	return __LIB_3__::func_554();
}

void func_2422(int iParam0, int iParam1)//Position - 0xBF0FA
{
	struct<3> Var0;
	float fVar1;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_STAY_IN_COVER"), 1) && !PED::IS_PED_IN_COVER(iParam1, false))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, 0, 0);
			}
			else
			{
				Var0 = { func_2424(iParam0, iParam1) };
				fVar1 = func_2423(iParam0, iParam1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Var0, fVar1, false, false);
				TASK::TASK_STAY_IN_COVER(iParam1);
			}
		}
	}
}

float func_2423(int iParam0, int iParam1)//Position - 0xBF16E
{
	if (Local_222.f_156.f_2.f_123.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_123.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_2424(int iParam0, int iParam1)//Position - 0xBF199
{
	if (Local_222.f_156.f_2.f_123 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_123);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, false);
}

void func_2425(int iParam0, int iParam1)//Position - 0xBF1C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	if (Local_222.f_156.f_2.f_106 == 0)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_106);
		iVar1 = StackVal;
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iVar1)
		{
			if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				iVar2 = 0;
				iVar3 = 0;
				if (Local_222.f_156.f_2.f_106.f_1 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_106.f_1);
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
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, func_2430(iParam0, iVar1), func_2429(iParam0, iVar1), -1f, func_2428(iParam0, iVar1), func_2428(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, func_2430(iParam0, iVar1), func_2429(iParam0, iVar1), -1f, func_2428(iParam0, iVar1), func_2428(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, iVar1, func_2430(iParam0, iVar1), func_2427(iParam0, iVar1), func_2429(iParam0, iVar1), func_2426(iParam0, iVar1), true);
					}
				}
				else if (iVar3 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, func_2430(iParam0, iVar1), func_2429(iParam0, iVar1), -1f, func_2428(iParam0, iVar1), func_2428(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, func_2430(iParam0, iVar1), func_2429(iParam0, iVar1), -1f, func_2428(iParam0, iVar1), func_2428(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, iVar3, iVar1, func_2430(iParam0, iVar1), func_2427(iParam0, iVar1), func_2429(iParam0, iVar1), func_2426(iParam0, iVar1), true);
					}
				}
				else if (Local_222.f_156.f_2.f_106.f_2 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_106.f_2);
						TASK::TASK_PLANE_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, func_2430(iParam0, iVar1), func_2429(iParam0, iVar1), -1f, func_2428(iParam0, iVar1), func_2428(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_106.f_2);
						TASK::TASK_HELI_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, func_2430(iParam0, iVar1), func_2429(iParam0, iVar1), -1f, func_2428(iParam0, iVar1), func_2428(iParam0, iVar1), -1f, 128);
					}
					else
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_106.f_2);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, func_2430(iParam0, iVar1), func_2427(iParam0, iVar1), func_2429(iParam0, iVar1), func_2426(iParam0, iVar1), true);
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

float func_2426(int iParam0, int iParam1)//Position - 0xBF4FA
{
	if (Local_222.f_156.f_2.f_106.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_106.f_4);
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

int func_2427(int iParam0, int iParam1)//Position - 0xBF544
{
	if (Local_222.f_156.f_2.f_106.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_106.f_3);
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

int func_2428(int iParam0, int iParam1)//Position - 0xBF593
{
	if (Local_222.f_156.f_2.f_106.f_7 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_106.f_7);
		return StackVal;
	}
	return 100;
}

float func_2429(int iParam0, int iParam1)//Position - 0xBF5BF
{
	if (Local_222.f_156.f_2.f_106.f_5 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_106.f_5);
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

float func_2430(int iParam0, int iParam1)//Position - 0xBF60D
{
	if (Local_222.f_156.f_2.f_106.f_6 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_106.f_6);
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

void func_2431(int iParam0, int iParam1)//Position - 0xBF65F
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 19)
		{
			if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				Var1 = { func_2435(iParam0, iVar0) };
				fVar2 = func_2434(iParam0);
				TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 19, 30f, fVar2, func_2433(iParam0), 10, 10, -1f, 8225);
			}
		}
		else if (func_2432(iParam0) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 19)
		{
			if (__LIB_1__::func_561(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				VEHICLE::SET_SHORT_SLOWDOWN_FOR_LANDING(iVar0);
				VEHICLE::SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(iVar0, true);
			}
		}
	}
}

int func_2432(int iParam0)//Position - 0xBF746
{
	if (Local_222.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_2433(int iParam0)//Position - 0xBF76F
{
	if (Local_222.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_2434(int iParam0)//Position - 0xBF798
{
	if (Local_222.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_2435(int iParam0, int iParam1)//Position - 0xBF7C5
{
	struct<3> Var0;
	float fVar1;
	if (Local_222.f_156.f_2.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_102);
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

void func_2436(int iParam0, int iParam1)//Position - 0xBF81A
{
	func_2437(iParam0, iParam1, 1);
}

void func_2437(int iParam0, int iParam1, bool bParam2)//Position - 0xBF82B
{
	int iVar0;
	if (!((__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_STANDARD"), 1) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_IN_AREA"), 1)) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_SPECIFIC"), 1)))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			if (bParam2)
			{
				iVar0 = joaat("SCRIPT_TASK_WANDER_SPECIFIC");
			}
			else
			{
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2.f_114);
				iVar0 = StackVal;
			}
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_WANDER_STANDARD"):
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_114.f_1);
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_114.f_2);
					TASK::TASK_WANDER_STANDARD(StackVal, StackVal, StackVal);
					break;
				case joaat("SCRIPT_TASK_WANDER_IN_AREA"):
					Stack.Push((Local_222.f_156.f_2.f_114.f_3 != 0 && Local_222.f_156.f_2.f_114.f_4 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_114.f_3);
					Stack.Push((StackVal && !__LIB_0__::func_86(StackVal, StackVal, StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_114.f_4);
					if (StackVal && StackVal > 0f)
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_4);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_5);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_6);
						TASK::TASK_WANDER_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
					}
					break;
				case joaat("SCRIPT_TASK_WANDER_SPECIFIC"):
					Stack.Push((Local_222.f_156.f_2.f_114.f_7 != 0 && Local_222.f_156.f_2.f_114.f_8 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_114.f_7);
					Stack.Push((StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_114.f_8);
					if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_7);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_8);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_114.f_1);
						TASK::TASK_WANDER_SPECIFIC(StackVal, StackVal, StackVal, StackVal);
					}
					break;
				}
			}
	}
}

void func_2438(int iParam0, int iParam1)//Position - 0xBF9ED
{
	func_2437(iParam0, iParam1, 0);
}

void func_2439(int iParam0, int iParam1)//Position - 0xBF9FE
{
	int iVar0;
	struct<3> Var1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 4)
		{
			if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				Var1 = { func_2440(iParam0) };
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(Local_205.f_67.f_1[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
				{
					TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, 0, Var1, 4, 20f, 786469, 10f, 268);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_205.f_67.f_1[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
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

Vector3 func_2440(int iParam0)//Position - 0xBFB15
{
	struct<3> Var0;
	Var0 = { Local_205.f_67.f_1[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
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

void func_2441(int iParam0, int iParam1)//Position - 0xBFBAC
{
	struct<3> Var0;
	float fVar1;
	Var0 = { func_2446(iParam0, -1) };
	fVar1 = __LIB_0__::func_724(iParam1, Var0, func_2445(iParam0, Local_378.f_22[iParam0 /*24*/].f_5));
	if (fVar1 <= func_2443(iParam0))
	{
		Local_378.f_22[iParam0 /*24*/].f_5++;
		if (Local_378.f_22[iParam0 /*24*/].f_5 >= func_2442(iParam0))
		{
			Local_378.f_22[iParam0 /*24*/].f_5 = 0;
			func_72(iParam0, 5);
			func_16(3);
		}
	}
}

int func_2442(int iParam0)//Position - 0xBFC2C
{
	if (Local_222.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

float func_2443(int iParam0)//Position - 0xBFC55
{
	if (Local_222.f_156.f_2.f_91.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_3);
		return StackVal;
	}
	return (func_2444(iParam0) + 2.5f);
}

float func_2444(int iParam0)//Position - 0xBFC89
{
	if (Local_222.f_156.f_2.f_91.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_2);
		return StackVal;
	}
	return 10f;
}

int func_2445(int iParam0, var uParam1)//Position - 0xBFCB6
{
	if (Local_222.f_156.f_2.f_91.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_222.f_156.f_2.f_91.f_10);
		return StackVal;
	}
	return 0;
}

Vector3 func_2446(int iParam0, int iParam1)//Position - 0xBFCE1
{
	int iVar0;
	if (Local_222.f_156.f_2.f_91 != 0)
	{
		iVar0 = Local_378.f_22[iParam0 /*24*/].f_5;
		if (iParam1 != -1)
		{
			iVar0 = iParam1;
		}
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_156.f_2.f_91);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

void func_2447(int iParam0, int iParam1)//Position - 0xBFD21
{
	struct<3> Var0;
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		if (__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED"), 1))
		{
			if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5 && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iParam1))
			{
				TASK::CLEAR_PED_TASKS(iParam1);
			}
		}
		else
		{
			if (Local_378.f_22[iParam0 /*24*/].f_6 == -1)
			{
				TASK::CLEAR_PED_TASKS(iParam1);
			}
			if (func_73(iParam0, 19))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
			}
			Var0 = { func_2446(iParam0, -1) };
			TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var0, func_2454(iParam0), func_2453(iParam0), true, func_2452(iParam0), 50f, func_2451(iParam0), 10f, func_2450(iParam0), func_2449(iParam0), func_2444(iParam0));
			if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
			{
				func_2448(Local_378.f_22[iParam0 /*24*/].f_5, iParam0);
			}
		}
	}
}

void func_2448(var uParam0, int iParam1)//Position - 0xBFE12
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 177099551;
	Var0.f_1 = bLocal_337;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	Var0.f_5 = Local_347.f_0;
	Var0.f_6 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	iVar1 = __LIB_4__::func_970(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

float func_2449(int iParam0)//Position - 0xBFE65
{
	if (Local_222.f_156.f_2.f_91.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_9);
		return StackVal;
	}
	return 20f;
}

int func_2450(int iParam0)//Position - 0xBFE92
{
	if (Local_222.f_156.f_2.f_91.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_8);
		return StackVal;
	}
	return 25;
}

float func_2451(int iParam0)//Position - 0xBFEBC
{
	if (Local_222.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

int func_2452(int iParam0)//Position - 0xBFEE5
{
	if (Local_222.f_156.f_2.f_91.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_6);
		return StackVal;
	}
	return 1076642364;
}

int func_2453(int iParam0)//Position - 0xBFF12
{
	if (Local_222.f_156.f_2.f_91.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_5);
		return StackVal;
	}
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return 0;
}

float func_2454(int iParam0)//Position - 0xBFFA0
{
	if (Local_222.f_156.f_2.f_91.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_91.f_4);
		return StackVal;
	}
	return 2f;
}

void func_2455(int iParam0, int iParam1)//Position - 0xBFFC9
{
	if (!PED::IS_PED_IN_GROUP(iParam1))
	{
		if (func_2457(iParam0, iParam1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1);
				if (Local_222.f_156.f_2.f_85.f_3 != 0)
				{
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_85.f_3);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(StackVal, StackVal);
				}
				PED::SET_PED_CONFIG_FLAG(iParam1, 268, true);
				PED::SET_PED_AS_GROUP_MEMBER(iParam1, iLocal_315);
				PED::SET_GROUP_FORMATION_SPACING(iLocal_315, 2f, 0f, 0f);
				PED::SET_GROUP_SEPARATION_RANGE(iLocal_315, 36f);
				if (Local_222.f_156.f_2.f_85.f_4 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_85.f_4);
				}
			}
		}
		else if (Local_222.f_156.f_2.f_85.f_1 != 0)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2.f_85.f_1);
				switch (StackVal)
				{
					case 1:
						func_2543(iParam0, iParam1);
						break;
					case 2:
						func_2534(iParam0, iParam1);
						break;
					}
				}
		}
	}
	else if (PED::IS_PED_GROUP_MEMBER(iParam1, iLocal_315))
	{
		Stack.Push((__LIB_0__::func_76(iLocal_339, iParam1, 1) > __LIB_19__::func_322(iParam0) || !bLocal_334));
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_85);
		if (StackVal || !StackVal)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::REMOVE_PED_FROM_GROUP(iParam1);
				if (Local_222.f_156.f_2.f_85.f_5 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_222.f_156.f_2.f_85.f_5);
				}
			}
		}
	}
}

int func_2457(var uParam0, int iParam1)//Position - 0xC0148
{
	var uVar0;
	int iVar1;
	if (!bLocal_334)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_222.f_156.f_2.f_85);
	if (!StackVal)
	{
		return 0;
	}
	PED::GET_GROUP_SIZE(iLocal_315, &uVar0, &iVar1);
	if (iVar1 > 0)
	{
		return 0;
	}
	if (__LIB_0__::func_76(iLocal_339, iParam1, 1) > func_2458(uParam0))
	{
		return 0;
	}
	return 1;
}

float func_2458(var uParam0)//Position - 0xC019F
{
	if (Local_222.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

void func_2459(int iParam0, int iParam1)//Position - 0xC01CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		if (Local_222.f_156.f_2.f_79 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_2.f_79);
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
						iVar2 = iLocal_339;
						if (Local_222.f_156.f_2.f_79.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_222.f_156.f_2.f_79.f_1);
							iVar2 = StackVal;
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_2463(iParam0, 0), 10f, -1f, SYSTEM::ROUND(func_2462(iParam0)), func_2461(iParam0), -1f, 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							VEHICLE::SET_BOAT_ANCHOR(iVar0, false);
							TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, func_2463(iParam0, 1), 786469, -1f, 111);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, 8, func_2463(iParam0, 0), func_2460(iParam0), 1000f, 1000f, true);
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

int func_2460(int iParam0)//Position - 0xC0342
{
	if (Local_222.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_2461(int iParam0)//Position - 0xC036E
{
	if (Local_222.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_2462(int iParam0)//Position - 0xC0398
{
	if (Local_222.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_2463(int iParam0, bool bParam1)//Position - 0xC03C5
{
	if (Local_222.f_156.f_2.f_79.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_79.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

void func_2464(int iParam0, int iParam1)//Position - 0xC03FF
{
	int iVar0;
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		if (func_2467(iParam0, &iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, 0, 1, func_2466(iParam0), func_2465(iParam0), -1f, -1f, false);
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

int func_2465(int iParam0)//Position - 0xC0492
{
	if (Local_222.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_2466(int iParam0)//Position - 0xC04BD
{
	if (Local_222.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_2467(int iParam0, var uParam1)//Position - 0xC04EA
{
	int iVar0;
	if (Local_222.f_156.f_2.f_76 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_76);
		iVar0 = StackVal;
	}
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		iVar0 = Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iVar0)))
	{
		*uParam1 = NETWORK::NET_TO_VEH(iVar0);
		return 1;
	}
	return 0;
}

void func_2468(int iParam0, int iParam1)//Position - 0xC0558
{
	struct<3> Var0;
	if (!__LIB_0__::func_798(iParam1, -251125078, 1) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		func_2472(iParam0, iParam1);
		Var0 = { func_2471(iParam0) };
		TASK::TASK_SMART_FLEE_COORD(iParam1, Var0, func_2470(iParam0), func_2469(iParam0), false, false);
	}
}

int func_2469(int iParam0)//Position - 0xC05AC
{
	if (Local_222.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_2470(int iParam0)//Position - 0xC05D5
{
	if (Local_222.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

Vector3 func_2471(int iParam0)//Position - 0xC0602
{
	if (Local_222.f_156.f_2.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_72);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]), false);
}

void func_2472(int iParam0, int iParam1)//Position - 0xC0638
{
	if (Local_222.f_156.f_2.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_72.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
}

void func_2473(int iParam0, int iParam1)//Position - 0xC068F
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_HANDS_UP"), 1) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_222.f_156.f_2.f_67.f_4);
		TASK::TASK_HANDS_UP(iParam1, func_2477(iParam0), func_2476(iParam0), func_2475(iParam0), func_2474(iParam0));
	}
}

int func_2474(int iParam0)//Position - 0xC06E7
{
	if (Local_222.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_2475(int iParam0)//Position - 0xC0710
{
	if (Local_222.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_2476(int iParam0)//Position - 0xC0739
{
	if (Local_222.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_2477(int iParam0)//Position - 0xC0762
{
	if (Local_222.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

void func_2478(int iParam0, int iParam1)//Position - 0xC0787
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	Stack.Push(Local_222.f_156.f_2.f_62.f_3 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2.f_62.f_3);
	if (StackVal || StackVal == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_205.f_122)
	{
		if (Local_205.f_122.f_1[iVar0 /*10*/] == iParam0)
		{
			Var1 = { func_2479(iVar0, Local_378.f_22[iParam0 /*24*/].f_5) };
			fVar2 = __LIB_0__::func_724(iParam1, Var1, 1);
			if (fVar2 <= 2f)
			{
				if (Local_378.f_22[iParam0 /*24*/].f_6 != 1)
				{
					Local_378.f_22[iParam0 /*24*/].f_5++;
				}
				else
				{
					Local_378.f_22[iParam0 /*24*/].f_5 = (Local_378.f_22[iParam0 /*24*/].f_5 - 1);
				}
				if ((Local_378.f_22[iParam0 /*24*/].f_5 >= 1 || (__LIB_0__::func_86(Local_205.f_122.f_1[iVar0 /*10*/].f_1[Local_378.f_22[iParam0 /*24*/].f_5 /*8*/].f_1) && Local_378.f_22[iParam0 /*24*/].f_6 == 0)) || Local_378.f_22[iParam0 /*24*/].f_6 == -1)
				{
					Local_378.f_22[iParam0 /*24*/].f_5 = (Local_378.f_22[iParam0 /*24*/].f_5 - 1);
					Local_378.f_22[iParam0 /*24*/].f_6 = 1;
				}
				if ((Local_378.f_22[iParam0 /*24*/].f_5 <= 0 && Local_378.f_22[iParam0 /*24*/].f_6 == 1) || Local_378.f_22[iParam0 /*24*/].f_6 == -1)
				{
					Local_378.f_22[iParam0 /*24*/].f_6 = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_2479(int iParam0, int iParam1)//Position - 0xC0908
{
	return Local_205.f_122.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/].f_1;
}

void func_2480(int iParam0, int iParam1)//Position - 0xC0924
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_PATROL"), 1) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		iVar0 = func_2486(iParam0);
		if (iVar0 != -1)
		{
			if (!func_2485(iParam0))
			{
				Var1 = { func_2484(iVar0) };
				TASK::TASK_PATROL(iParam1, &Var1, func_2483(iVar0), func_2482(iVar0), true);
			}
			else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), 1))
			{
				iVar2 = 0;
				while (iVar2 < Local_205.f_122)
				{
					if (Local_205.f_122.f_1[iVar2 /*10*/] == iParam0)
					{
						if (func_2481(iParam0, Local_378.f_22[iParam0 /*24*/].f_5))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iParam1, Local_205.f_122.f_1[iVar2 /*10*/].f_1[Local_378.f_22[iParam0 /*24*/].f_5 /*8*/].f_1, 1f, -1, 40000f, 0.5f);
						}
					}
					iVar2++;
				}
			}
		}
	}
}

int func_2481(int iParam0, var uParam1)//Position - 0xC09FF
{
	if (Local_222.f_156.f_2.f_62.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_222.f_156.f_2.f_62.f_4);
		return StackVal;
	}
	return 1;
}

int func_2482(int iParam0)//Position - 0xC0A2A
{
	if (Local_222.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_2483(int iParam0)//Position - 0xC0A53
{
	if (Local_222.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

struct<4> func_2484(int iParam0)//Position - 0xC0A7C
{
	if (Local_222.f_156.f_2.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_62);
		return StackVal, StackVal, StackVal, StackVal;
	}
	return Local_322[iParam0 /*4*/];
}

int func_2485(int iParam0)//Position - 0xC0AA9
{
	if (Local_222.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

int func_2486(int iParam0)//Position - 0xC0AD2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_122)
	{
		if (Local_205.f_122.f_1[iVar0 /*10*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_2487(int iParam0, int iParam1)//Position - 0xC0B04
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ACHIEVE_HEADING"), 1) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		TASK::TASK_ACHIEVE_HEADING(iParam1, func_2488(iParam0), 0);
	}
}

var func_2488(int iParam0)//Position - 0xC0B3B
{
	if (Local_222.f_156.f_2.f_61 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_61);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_178);
	return StackVal;
}

void func_2489(int iParam0, int iParam1)//Position - 0xC0B69
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		if (Local_205.f_38.f_1[iParam0 /*21*/].f_8 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
					{
						TASK::CLEAR_PED_TASKS(iParam1);
						TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, Local_205.f_38.f_1[iParam0 /*21*/].f_9, func_2493(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
		{
			Var1 = { func_2492(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, func_2493(iParam0), func_2491(), 0.25f, 4096, func_2490(iParam0));
		}
	}
}

float func_2490(int iParam0)//Position - 0xC0C5F
{
	if (Local_222.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_2491()//Position - 0xC0C88
{
	if (Local_222.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_222.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_2492(int iParam0)//Position - 0xC0CB1
{
	if (Local_222.f_156.f_2.f_56.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_56.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

float func_2493(int iParam0)//Position - 0xC0CE3
{
	if (Local_222.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

void func_2494(int iParam0, int iParam1)//Position - 0xC0D0C
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		iVar0 = joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS");
		if (func_2495(iParam0))
		{
			iVar0 = joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD");
		}
		if (!__LIB_0__::func_798(iParam1, iVar0, 1))
		{
			Var1 = { func_2492(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"):
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, func_2493(iParam0), func_2491(), 0.25f, 4096, func_2490(iParam0));
					break;
				case joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS"):
					TASK::TASK_GO_TO_COORD_ANY_MEANS(iParam1, Var1, func_2493(iParam0), 0, false, 786603, -1f);
					break;
				}
			}
	}
}

int func_2495(int iParam0)//Position - 0xC0DB8
{
	if (Local_222.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

void func_2496(int iParam0, int iParam1)//Position - 0xC0DDD
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COMBAT"), 1))
	{
		if (func_2501(iParam0, &iVar0))
		{
			if (__LIB_19__::func_432(iVar0))
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
				{
					func_2498(iParam0, iParam1);
					iVar1 = func_2497(iParam0);
					TASK::TASK_COMBAT_PED(iParam1, iVar0, iVar1, 16);
				}
			}
		}
	}
}

int func_2497(int iParam0)//Position - 0xC0E35
{
	if (func_73(iParam0, 19))
	{
		return 67108864;
	}
	if (Local_222.f_156.f_2.f_54.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_54.f_1);
		return StackVal;
	}
	return 0;
}

void func_2498(int iParam0, int iParam1)//Position - 0xC0E71
{
	if (!func_2499(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam1, false);
	}
	else
	{
		func_100(iParam0, iParam1);
	}
	if (func_73(iParam0, 19))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	}
	if (func_41(iParam0, 9))
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

bool func_2499(int iParam0)//Position - 0xC0EE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_205.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_205.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1 && func_102(iVar2, 4))
		{
			return 1;
		}
		iVar1++;
	}
	return Local_205.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f;
}

int func_2501(var uParam0, var uParam1)//Position - 0xC0F8A
{
	if (Local_222.f_156.f_2.f_54 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_156.f_2.f_54);
		*uParam1 = StackVal;
		return 1;
	}
	return 0;
}

void func_2502(int iParam0, int iParam1)//Position - 0xC0FB3
{
	struct<3> Var0;
	float fVar1;
	Var0 = { func_2508(iParam0, -1) };
	Stack.Push(Local_222.f_156.f_2.f_25.f_21 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2.f_25.f_21);
	if (StackVal && StackVal)
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, PED::GET_PED_BONE_COORDS(iParam1, -1, 0f, 0f, 0f), func_2507(iParam0, Local_378.f_22[iParam0 /*24*/].f_5));
	}
	else
	{
		fVar1 = __LIB_0__::func_724(iParam1, Var0, func_2507(iParam0, Local_378.f_22[iParam0 /*24*/].f_5));
	}
	if (Local_222.f_156.f_2.f_25.f_22 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fVar1);
		Call_Loc(Local_222.f_156.f_2.f_25.f_22);
	}
	if (Local_222.f_156.f_2.f_25.f_24 != 0)
	{
		if (!__LIB_0__::func_864(&(Local_378.f_22[iParam0 /*24*/].f_20)))
		{
			__LIB_0__::func_795(&(Local_378.f_22[iParam0 /*24*/].f_20), 0, 0);
		}
		if (__LIB_0__::func_937(&(Local_378.f_22[iParam0 /*24*/].f_20), 60000, 0))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_222.f_156.f_2.f_25.f_24);
		}
	}
	if (fVar1 <= func_2506(iParam0) || func_2504(iParam0))
	{
		if (Local_222.f_156.f_2.f_25.f_23 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_222.f_156.f_2.f_25.f_23);
		}
		if (__LIB_0__::func_864(&(Local_378.f_22[iParam0 /*24*/].f_20)))
		{
			__LIB_0__::func_794(&(Local_378.f_22[iParam0 /*24*/].f_20));
		}
		Local_378.f_22[iParam0 /*24*/].f_5++;
		if (Local_378.f_22[iParam0 /*24*/].f_5 >= func_2503(iParam0))
		{
			Local_378.f_22[iParam0 /*24*/].f_5 = 0;
			func_72(iParam0, 5);
			func_16(3);
		}
	}
}

int func_2503(int iParam0)//Position - 0xC1145
{
	if (Local_222.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

int func_2504(int iParam0)//Position - 0xC116A
{
	int iVar0;
	struct<3> Var1;
	iVar0 = NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]);
	Var1 = { func_2508(iParam0, -1) };
	if (__LIB_0__::func_725(iVar0, Var1, func_2506(iParam0), 1))
	{
		return 1;
	}
	return 0;
}

float func_2506(int iParam0)//Position - 0xC11C3
{
	if (Local_222.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_2507(int iParam0, var uParam1)//Position - 0xC11F0
{
	if (Local_222.f_156.f_2.f_25.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_222.f_156.f_2.f_25.f_25);
		return StackVal;
	}
	return 0;
}

Vector3 func_2508(int iParam0, int iParam1)//Position - 0xC121B
{
	int iVar0;
	struct<3> Var1;
	iVar0 = Local_378.f_22[iParam0 /*24*/].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_222.f_156.f_2.f_25.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_1);
		Var1 = { StackVal, StackVal, StackVal };
	}
	return Var1;
}

void func_2509(int iParam0, int iParam1)//Position - 0xC1261
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
	bVar0 = func_2529(iParam0);
	iVar1 = func_2528(iParam0);
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
			if ((func_2527() && !bVar0) && !PED::IS_PED_IN_VEHICLE(iParam1, iVar2, false))
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar2)
					{
						Stack.Push(iParam1);
						Call_Loc(Local_222.f_156.f_2.f_5.f_5);
						Stack.Push(iParam1);
						Stack.Push(iVar2);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_5.f_1);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_5.f_2);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_5.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_222.f_156.f_2.f_5.f_4);
						TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(iParam1))
			{
				if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
					{
						Var3 = { func_2508(iParam0, -1) };
						PED::SET_PED_CONFIG_FLAG(iParam1, 429, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, false);
						VEHICLE::SET_HELI_BLADES_SPEED(iVar2, 1f);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
						if (Local_222.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_222.f_156.f_2.f_25.f_26);
						}
						TASK::TASK_HELI_MISSION(iParam1, iVar2, 0, 0, Var3, 4, func_2526(iParam0), 10f, func_2525(iParam0), SYSTEM::ROUND(func_2524()), func_2523(), -1f, 128);
						if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
						{
							func_2448(Local_378.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iParam1))
			{
				if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
					{
						Var4 = { func_2508(iParam0, -1) };
						PED::SET_PED_CONFIG_FLAG(iParam1, 429, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
						if (Local_222.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_222.f_156.f_2.f_25.f_26);
						}
						TASK::TASK_PLANE_MISSION(iParam1, iVar2, 0, 0, Var4, 4, func_2526(iParam0), func_2522(iParam0), func_2525(iParam0), SYSTEM::ROUND(func_2524()), func_2523(), true);
						if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
						{
							func_2448(Local_378.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_BOAT(iParam1))
			{
				if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar1)) != 4)
				{
					if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
					{
						fVar5 = func_2521(iParam0);
						Var6 = { func_2508(iParam0, -1) };
						if (Local_222.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_222.f_156.f_2.f_25.f_26);
						}
						VEHICLE::SET_BOAT_ANCHOR(iVar2, false);
						TASK::TASK_BOAT_MISSION(iParam1, iVar2, 0, 0, Var6, 4, fVar5, 786469, -1f, func_2520(iParam0));
					}
				}
			}
			else if (!__LIB_0__::func_798(iParam1, func_2519(iParam0), 1))
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]) && (bVar0 || __LIB_1__::func_561(iVar1)))
				{
					Var7 = { func_2508(iParam0, -1) };
					fVar8 = func_2521(iParam0);
					fVar9 = func_2518(iParam0);
					if (!bVar0)
					{
						__LIB_19__::func_433(iVar2);
					}
					if (Local_222.f_156.f_2.f_25.f_26 != 0)
					{
						Stack.Push(iParam0);
						Stack.Push(iParam1);
						Call_Loc(Local_222.f_156.f_2.f_25.f_26);
					}
					if (func_2516(iParam0))
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var7, func_2515(iParam0), iVar2, true, func_2514(iParam0), -1f, 0f, fVar9, func_2513(iParam0), fVar8, func_2522(iParam0));
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iVar2, Var7, fVar8, func_2512(iParam0), ENTITY::GET_ENTITY_MODEL(iVar2), func_2514(iParam0), func_2522(iParam0), fVar9);
					}
					if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
					{
						func_2448(Local_378.f_22[iParam0 /*24*/].f_5, iParam0);
					}
					if (func_2511(iParam0) != -1f)
					{
						if (!func_73(iParam0, 7) && !func_2114(iParam0, iLocal_341, 6))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar2, func_2511(iParam0));
							func_2109(iParam0, 6);
						}
					}
				}
			}
			else if (Local_378.f_22[iParam0 /*24*/].f_6 != Local_378.f_22[iParam0 /*24*/].f_5)
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
				}
			}
			if ((!func_73(iParam0, 6) && !func_2114(iParam0, iLocal_341, 5)) && func_2510(iParam0))
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
					func_2109(iParam0, 5);
				}
			}
		}
	}
}

int func_2510(int iParam0)//Position - 0xC1792
{
	if (Local_222.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_2511(int iParam0)//Position - 0xC17BB
{
	if (Local_222.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_2512(int iParam0)//Position - 0xC17E4
{
	if (Local_222.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_2513(int iParam0)//Position - 0xC180D
{
	if (Local_222.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_2514(int iParam0)//Position - 0xC1837
{
	if (Local_222.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_2515(int iParam0)//Position - 0xC1863
{
	if (Local_222.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_2516(int iParam0)//Position - 0xC188C
{
	if (Local_222.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_2518(int iParam0)//Position - 0xC18F7
{
	if (Local_222.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_2519(int iParam0)//Position - 0xC1920
{
	if (func_2516(iParam0))
	{
		return joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED");
	}
	return joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
}

int func_2520(int iParam0)//Position - 0xC193E
{
	if (Local_222.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_2521(int iParam0)//Position - 0xC1967
{
	if (Local_222.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_2522(int iParam0)//Position - 0xC1994
{
	if (Local_222.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_2523()//Position - 0xC19BD
{
	if (Local_222.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_222.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_2524()//Position - 0xC19E5
{
	if (Local_222.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_222.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_2525(int iParam0)//Position - 0xC1A10
{
	if (Local_222.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_2526(int iParam0)//Position - 0xC1A39
{
	if (Local_222.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_2527()//Position - 0xC1A66
{
	if (Local_222.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_222.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_2528(int iParam0)//Position - 0xC1A8D
{
	if (Local_222.f_156.f_2.f_25.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_2);
		return StackVal;
	}
	if (Local_205.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_378.f_47[Local_205.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	return 0;
}

int func_2529(var uParam0)//Position - 0xC1ADC
{
	if (Local_222.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_222.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

void func_2530(int iParam0, int iParam1)//Position - 0xC1B05
{
	int iVar0;
	if (Local_222.f_156.f_2.f_23 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_222.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
				{
					Stack.Push(iParam1);
					Stack.Push(NETWORK::NET_TO_ENT(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_222.f_156.f_2.f_23.f_1);
					TASK::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_2531(int iParam0, int iParam1)//Position - 0xC1B7D
{
	int iVar0;
	if (Local_222.f_156.f_2.f_22 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam1, iVar0, -1, false);
				}
			}
		}
	}
}

void func_2532(int iParam0, int iParam1)//Position - 0xC1BE9
{
	if (Local_222.f_156.f_2.f_21 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2.f_21);
				TASK::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, false, false);
			}
		}
	}
}

void func_2533(int iParam0, int iParam1)//Position - 0xC1C3C
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"), 1))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			func_2498(iParam0, iParam1);
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_222.f_156.f_2.f_18.f_2);
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_2.f_18);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_2.f_18.f_1);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
		}
	}
}

void func_2534(int iParam0, int iParam1)//Position - 0xC1C9D
{
	char* sVar0;
	char* sVar1;
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2.f_15);
	sVar0 = StackVal;
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2.f_15.f_1);
	sVar1 = StackVal;
	if ((!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(sVar0);
				Stack.Push(sVar1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2.f_15.f_2);
				TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0f, false, false, false);
			}
		}
	}
}

void func_2535(int iParam0, int iParam1)//Position - 0xC1D43
{
	if (func_2150(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_2536(int iParam0, int iParam1)//Position - 0xC1D99
{
	if (func_2150(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, func_2538(iParam0), func_2537(iParam0));
			}
		}
	}
}

int func_2537(int iParam0)//Position - 0xC1DE0
{
	if (Local_222.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_2538(int iParam0)//Position - 0xC1E09
{
	if (Local_222.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

void func_2539(int iParam0, int iParam1)//Position - 0xC1E2E
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!func_2150(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			if (func_2540(&iVar0, &uVar1, iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
						{
							iVar2 = -1;
							if (Local_222.f_156.f_2.f_5.f_2 != 0)
							{
								Stack.Push(iParam0);
								Call_Loc(Local_222.f_156.f_2.f_5.f_2);
								iVar2 = StackVal;
							}
							if (func_73(iParam0, 19))
							{
								iVar2 = Local_205.f_38.f_1[iParam0 /*21*/].f_9;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
							}
							else
							{
								Stack.Push(iParam1);
								Call_Loc(Local_222.f_156.f_2.f_5.f_5);
							}
							Stack.Push(iParam1);
							Stack.Push(iVar0);
							Stack.Push(iParam0);
							Call_Loc(Local_222.f_156.f_2.f_5.f_1);
							Stack.Push(iVar2);
							Stack.Push(iParam0);
							Call_Loc(Local_222.f_156.f_2.f_5.f_3);
							Stack.Push(iParam0);
							Call_Loc(Local_222.f_156.f_2.f_5.f_4);
							TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
						}
					}
				}
			}
		}
	}
	else
	{
		Stack.Push(Local_222.f_156.f_2.f_5.f_7 != 0);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_5.f_7);
		if (StackVal && StackVal)
		{
			if (func_2540(&iVar0, &uVar1, iParam0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(iParam1, false) != iVar0)
				{
					func_2536(iParam0, iParam1);
				}
			}
		}
	}
}

bool func_2540(int iParam0, var uParam1, int iParam2)//Position - 0xC1F5F
{
	Stack.Push(iParam2);
	Call_Loc(Local_222.f_156.f_2.f_5);
	*uParam1 = StackVal;
	if (func_73(iParam2, 19))
	{
		*uParam1 = Local_205.f_38.f_1[iParam2 /*21*/].f_8;
	}
	if (*uParam1 != -1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_378.f_47[*uParam1 /*8*/]))
	{
		*iParam0 = NETWORK::NET_TO_VEH(Local_378.f_47[*uParam1 /*8*/]);
	}
	else if (Local_222.f_156.f_2.f_5.f_6 != 0)
	{
		Stack.Push(iParam2);
		Call_Loc(Local_222.f_156.f_2.f_5.f_6);
		*iParam0 = StackVal;
	}
	return *iParam0 != 0;
}

void func_2541(int iParam0, int iParam1)//Position - 0xC1FE4
{
	if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_2542(int iParam0, int iParam1)//Position - 0xC2013
{
	if (!__LIB_0__::func_798(iParam1, -251125078, 1))
	{
		if (__LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

void func_2543(int iParam0, int iParam1)//Position - 0xC2077
{
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2);
		if (func_2545(StackVal, StackVal))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2);
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_222.f_156.f_2.f_2);
				TASK::TASK_START_SCENARIO_AT_POSITION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, true, true);
			}
		}
		else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1) && __LIB_1__::func_561(Local_378.f_22[iParam0 /*24*/]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_222.f_156.f_2);
			TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, false);
		}
		if (func_2544(iParam0))
		{
			if (__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_22[iParam0 /*24*/]))
				{
					if (!PED::IS_PED_HEADTRACKING_PED(iParam1, iLocal_339))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam1, iLocal_339, -1, 2048, 2);
					}
				}
			}
		}
	}
}

int func_2544(int iParam0)//Position - 0xC2180
{
	if (Local_222.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_2545(var uParam0, char* sParam1)//Position - 0xC21A5
{
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

var func_2546()//Position - 0xC2219
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < Local_205.f_38)
	{
		iVar2 = func_48(iVar1);
		if (iVar2 < 1 && iVar2 > iVar0)
		{
			iVar0 = iVar2;
		}
		iVar1++;
	}
	return iVar0 + 1;
}

void func_2547()//Position - 0xC2257
{
	if (func_615(49))
	{
		return;
	}
	Call_Loc(Local_222.f_11.f_1);
	func_2548();
	func_505(49);
}

void func_2548()//Position - 0xC227D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < iLocal_349)
	{
		iVar1 = Local_227[iVar0 /*21*/];
		if (iVar1 != -1)
		{
			iVar2 = 0;
			while (iVar2 < Local_227[iVar0 /*21*/].f_19)
			{
				if (Local_227[iVar0 /*21*/].f_1[iVar2 /*3*/].f_1 == 0 && Local_227[iVar0 /*21*/].f_1[iVar2 /*3*/].f_2 == -1)
				{
					iVar3 = Local_227[iVar0 /*21*/].f_1[iVar2 /*3*/];
					func_2557(iVar1, Local_227[iVar3 /*21*/], &(Local_227[iVar0 /*21*/].f_1[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
			if (Local_227[iVar0 /*21*/].f_18 == 0)
			{
				func_2553(iVar0, iVar1);
			}
			if (Local_227[iVar0 /*21*/].f_17 == 0)
			{
				func_2549(iVar0, iVar1);
			}
			if (Local_227[iVar0 /*21*/].f_20 == 0)
			{
				Local_227[iVar0 /*21*/].f_20 = 148096/*func_604*/;
			}
		}
		iVar0++;
	}
}

void func_2549(int iParam0, int iParam1)//Position - 0xC235B
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 795590/*func_2552*/;
			break;
		case 27:
			iVar0 = 795577/*func_2551*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2550(iParam0, iVar0);
	}
	else
	{
		Local_227[iParam0 /*21*/].f_17 = 148096/*func_604*/;
	}
}

void func_2550(int iParam0, int iParam1)//Position - 0xC23A6
{
	Local_227[iParam0 /*21*/].f_17 = iParam1;
}

void func_2551()//Position - 0xC23B9
{
	func_1654(4);
}

void func_2553(int iParam0, int iParam1)//Position - 0xC23CE
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 795705/*func_2556*/;
			break;
		case 27:
			iVar0 = 795692/*func_2555*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2554(iParam0, iVar0);
	}
	else
	{
		Local_227[iParam0 /*21*/].f_18 = 148096/*func_604*/;
	}
}

void func_2554(int iParam0, int iParam1)//Position - 0xC2419
{
	Local_227[iParam0 /*21*/].f_18 = iParam1;
}

void func_2555()//Position - 0xC242C
{
	func_1654(4);
}

void func_2556()//Position - 0xC2439
{
	func_1654(1);
	func_2016();
}

void func_2557(int iParam0, int iParam1, var uParam2)//Position - 0xC244A
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
					*uParam2 = 796776/*func_2575*/;
					break;
				case 24:
					*uParam2 = 796752/*func_2574*/;
					break;
				case 25:
					*uParam2 = 796689/*func_2573*/;
					break;
				case 23:
					*uParam2 = 796580/*func_2571*/;
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
					*uParam2 = 796458/*func_2569*/;
					break;
				case 30:
					*uParam2 = 796449/*func_2568*/;
					break;
				case 31:
					*uParam2 = 796440/*func_2567*/;
					break;
				case 32:
					*uParam2 = 796431/*func_2566*/;
					break;
				case 34:
					*uParam2 = 796422/*func_2565*/;
					break;
				case 33:
					*uParam2 = 796213/*func_2562*/;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case 46:
			*uParam2 = 796166/*func_2561*/;
			break;
		case 47:
			*uParam2 = 796028/*func_2558*/;
			break;
	}
}

int func_2558()//Position - 0xC257C
{
	if (!func_420(iLocal_341, 2))
	{
		return 0;
	}
	if (!func_2574() && func_2559())
	{
		return 0;
	}
	return 1;
}

int func_2559()//Position - 0xC25AA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_2560(iVar0) && !func_2256(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2560(int iParam0)//Position - 0xC25E1
{
	if (!func_907(iParam0) || func_436(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_2561()//Position - 0xC2606
{
	if (func_2574())
	{
		return 0;
	}
	if (func_420(iLocal_341, 2))
	{
		return 0;
	}
	if (!func_2559())
	{
		return 0;
	}
	return 1;
}

int func_2562()//Position - 0xC2635
{
	if ((!func_772(bLocal_337, 1) && !func_871(bLocal_337, 0, 1, 0)) && func_2563(0))
	{
		return 1;
	}
	return 0;
}

int func_2563(int iParam0)//Position - 0xC2668
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_436(iVar0, 6))
		{
			if (!func_436(iVar0, 3))
			{
				if (!func_436(iVar0, 4) || iParam0)
				{
					if (func_2256(iVar0))
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
	if (iVar1 > 0 && iVar1 == (func_37() - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_2569()//Position - 0xC272A
{
	if ((!func_772(bLocal_337, 1) && !func_871(bLocal_337, 0, 1, 0)) || func_874(func_2164(), 1))
	{
		if (!func_2563(0) && !func_2570(0))
		{
			return 1;
		}
	}
	return 0;
}

int func_2570(bool bParam0)//Position - 0xC2776
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (!func_874(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_2571()//Position - 0xC27A4
{
	if (func_2574())
	{
		return 0;
	}
	if (!func_2572())
	{
		return 0;
	}
	if (func_871(bLocal_337, 0, 0, 0))
	{
		return 0;
	}
	if (func_2570(1))
	{
		return 0;
	}
	return 1;
}

int func_2572()//Position - 0xC27E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_774(iVar0, iLocal_341, 12))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2573()//Position - 0xC2811
{
	if (func_2574())
	{
		return 0;
	}
	if (func_871(bLocal_337, 0, 0, 0) && !func_2256(func_2164()))
	{
		return 0;
	}
	if (func_2570(1))
	{
		return 0;
	}
	return 1;
}

int func_2574()//Position - 0xC2850
{
	if (func_772(bLocal_337, 1))
	{
		return 1;
	}
	return 0;
}

int func_2575()//Position - 0xC2868
{
	if (func_2574())
	{
		return 0;
	}
	if (func_2563(0))
	{
		return 0;
	}
	if (func_871(bLocal_337, 0, 0, 0))
	{
		return 0;
	}
	if (func_2570(1))
	{
		return 0;
	}
	return 1;
}

void func_2576()//Position - 0xC28A5
{
	if (func_615(48))
	{
		return;
	}
	Call_Loc(Local_222.f_11);
	func_2577();
	func_505(48);
}

void func_2577()//Position - 0xC28C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < iLocal_348)
	{
		iVar1 = Local_226[iVar0 /*20*/];
		if (iVar1 != -1)
		{
			iVar2 = 0;
			while (iVar2 < Local_226[iVar0 /*20*/].f_19)
			{
				if (Local_226[iVar0 /*20*/].f_1[iVar2 /*3*/].f_1 == 0)
				{
					func_2593(iVar1, &(Local_226[iVar0 /*20*/].f_1[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
			if (Local_226[iVar0 /*20*/].f_18 == 0)
			{
				func_2585(iVar0, iVar1);
			}
			if (Local_226[iVar0 /*20*/].f_17 == 0)
			{
				func_2578(iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_2578(int iParam0, int iParam1)//Position - 0xC2960
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 797208/*func_2584*/;
			break;
		case 48:
			iVar0 = 797187/*func_2583*/;
			break;
		case 27:
			iVar0 = 797179/*func_2582*/;
			break;
		case 7:
			iVar0 = 797171/*func_2581*/;
			break;
		case 6:
			iVar0 = 797163/*func_2580*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2579(iParam0, iVar0);
	}
	else
	{
		Local_226[iParam0 /*20*/].f_17 = 148096/*func_604*/;
	}
}

void func_2579(int iParam0, int iParam1)//Position - 0xC29D8
{
	Local_226[iParam0 /*20*/].f_17 = iParam1;
}

void func_2583()//Position - 0xC2A03
{
	if (func_487() == 0)
	{
		func_8(3);
	}
}

void func_2584()//Position - 0xC2A18
{
	func_2370(1);
}

void func_2585(int iParam0, int iParam1)//Position - 0xC2A25
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 797461/*func_2592*/;
			break;
		case 27:
			iVar0 = 797448/*func_2591*/;
			break;
		case 7:
			iVar0 = 797436/*func_2590*/;
			break;
		case 20:
			iVar0 = 797403/*func_2589*/;
			break;
		case 6:
			iVar0 = 797360/*func_2587*/;
			break;
	}
	if (iVar0 != 0)
	{
		func_2586(iParam0, iVar0);
	}
	else
	{
		Local_226[iParam0 /*20*/].f_18 = 148096/*func_604*/;
	}
}

void func_2586(int iParam0, int iParam1)//Position - 0xC2A9D
{
	Local_226[iParam0 /*20*/].f_18 = iParam1;
}

void func_2587()//Position - 0xC2AB0
{
	func_2588();
}

void func_2588()//Position - 0xC2ABC
{
	if (Local_378.f_101 + 1 < 1)
	{
		Local_378.f_101++;
	}
}

void func_2589()//Position - 0xC2ADB
{
	Local_378.f_68.f_2++;
	__LIB_0__::func_794(&(Local_378.f_68));
}

void func_2590()//Position - 0xC2AFC
{
	func_2588();
}

void func_2591()//Position - 0xC2B08
{
	func_2370(4);
}

void func_2593(int iParam0, var uParam1)//Position - 0xC2B1D
{
	*uParam1 = 797870/*func_2604*/;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 797861/*func_2603*/;
			break;
		case 22:
			*uParam1 = 797797/*func_2601*/;
			break;
		case 24:
			*uParam1 = 797776/*func_2600*/;
			break;
		case 7:
			*uParam1 = 797739/*func_2598*/;
			break;
		case 29:
			*uParam1 = 797660/*func_2596*/;
			break;
		case 27:
			*uParam1 = 797647/*func_2595*/;
			break;
		case 20:
			*uParam1 = 797603/*func_2594*/;
			break;
	}
}

int func_2594()//Position - 0xC2BA3
{
	if (Local_222.f_111 == 0)
	{
		return 0;
	}
	Stack.Push(&(Local_378.f_68));
	Stack.Push(Local_378.f_68.f_2);
	Call_Loc(Local_222.f_111);
	return __LIB_0__::func_937(StackVal, StackVal, 0);
}

bool func_2595()//Position - 0xC2BCF
{
	return func_3(4);
}

int func_2596()//Position - 0xC2BDC
{
	if (func_435())
	{
		return 1;
	}
	else if (func_2597())
	{
		return 1;
	}
	return 0;
}

int func_2597()//Position - 0xC2BFE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_19)
	{
		if (!func_436(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_2598()//Position - 0xC2C2B
{
	return func_2599();
}

bool func_2599()//Position - 0xC2C37
{
	return (Local_310.f_0 == 0 && Local_310.f_1 > 0);
}

int func_2600()//Position - 0xC2C50
{
	if (func_2570(0))
	{
		return 1;
	}
	return 0;
}

int func_2601()//Position - 0xC2C65
{
	if (func_2602())
	{
		return 1;
	}
	return 0;
}

int func_2602()//Position - 0xC2C79
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_436(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2605()//Position - 0xC2CB7
{
	return Local_378.f_81;
}

int func_2606()//Position - 0xC2CC4
{
	return Local_385[iLocal_340 /*38*/].f_22;
}

void func_2618()//Position - 0xC2E36
{
	Local_222.f_11 = 802168/*func_2720*/;
	Local_222.f_11.f_1 = 801705/*func_2715*/;
	Local_222.f_2 = 801696/*func_2714*/;
	Local_222.f_1 = 801687/*func_2713*/;
	Local_222.f_47 = 797870/*func_2604*/;
	Local_222.f_47.f_1 = 801676/*func_2712*/;
	Local_222.f_47.f_2 = 801667/*func_2711*/;
	Local_222.f_64.f_2 = 801658/*func_2710*/;
	Local_222.f_64 = 801646/*func_2709*/;
	Local_222.f_64.f_14 = 801637/*func_2708*/;
	Local_222.f_64.f_15 = 801628/*func_2707*/;
	Local_222.f_54 = 801619/*func_2706*/;
	Local_222.f_54.f_1 = 801610/*func_2705*/;
	Local_222.f_54.f_2 = 801601/*func_2704*/;
	Local_222.f_54.f_3 = 801592/*func_2703*/;
	Local_222.f_54.f_4 = 801580/*func_2702*/;
	Local_222.f_54.f_5 = 801571/*func_2701*/;
	Local_222.f_54.f_8 = 801562/*func_2700*/;
	Local_222.f_54.f_9 = 801549/*func_2699*/;
	Local_222.f_82 = 801540/*func_2698*/;
	Local_222.f_80 = 801529/*func_2697*/;
	Local_222.f_114.f_23 = 801520/*func_2696*/;
	Local_222.f_114.f_27 = 801509/*func_2695*/;
	Local_222.f_114 = 801463/*func_2694*/;
	Local_222.f_114.f_39 = 801454/*func_2693*/;
	Local_222.f_156.f_176 = 801434/*func_2692*/;
	Local_222.f_156.f_177 = 801371/*func_2691*/;
	Local_222.f_156.f_178 = 801310/*func_2690*/;
	Local_222.f_156.f_179 = 801290/*func_2689*/;
	Local_222.f_156.f_169 = 801281/*func_2688*/;
	Local_222.f_156.f_169.f_1 = 801259/*func_2687*/;
	Local_222.f_156.f_169.f_2 = 801239/*func_2686*/;
	Local_222.f_156 = 801067/*func_2684*/;
	Local_222.f_156.f_132 = 800638/*func_2674*/;
	Local_222.f_156.f_2 = 800626/*func_2673*/;
	Local_222.f_156.f_2.f_1 = 800608/*func_2672*/;
	Local_222.f_156.f_2.f_2 = 800590/*func_2671*/;
	Local_222.f_156.f_2.f_4 = 800581/*func_2670*/;
	Local_222.f_156.f_2.f_5 = 800561/*func_2669*/;
	Local_222.f_156.f_2.f_5.f_1 = 800552/*func_2668*/;
	Local_222.f_156.f_2.f_5.f_2 = 800532/*func_2667*/;
	Local_222.f_156.f_2.f_5.f_3 = 800523/*func_2666*/;
	Local_222.f_156.f_2.f_5.f_4 = 800498/*func_2665*/;
	Local_222.f_156.f_2.f_5.f_5 = 800484/*func_2664*/;
	Local_222.f_156.f_2.f_15 = 800472/*func_2663*/;
	Local_222.f_156.f_2.f_15.f_1 = 800460/*func_2662*/;
	Local_222.f_156.f_2.f_15.f_2 = 800451/*func_2661*/;
	Local_222.f_156.f_2.f_18 = 800381/*func_2660*/;
	Local_222.f_156.f_2.f_18.f_1 = 800368/*func_2659*/;
	Local_222.f_156.f_2.f_18.f_2 = 800166/*func_2658*/;
	Local_222.f_156.f_2.f_23.f_1 = 800153/*func_2657*/;
	Local_222.f_156.f_2.f_67.f_4 = 800133/*func_2656*/;
	Local_222.f_156.f_2.f_85 = 800124/*func_2655*/;
	Local_222.f_156.f_2.f_114 = 800111/*func_2654*/;
	Local_222.f_156.f_2.f_114.f_1 = 800098/*func_2653*/;
	Local_222.f_156.f_2.f_114.f_2 = 800089/*func_2652*/;
	Local_222.f_156.f_2.f_114.f_5 = 800080/*func_2651*/;
	Local_222.f_156.f_2.f_114.f_6 = 800071/*func_2650*/;
	Local_222.f_352.f_24 = 800062/*func_2649*/;
	Local_222.f_352.f_25 = 800053/*func_2648*/;
	Local_222.f_352.f_26 = 800044/*func_2647*/;
	Local_222.f_352.f_27 = 800035/*func_2646*/;
	Local_222.f_352.f_37 = 800026/*func_2645*/;
	Local_222.f_352.f_38 = 799874/*func_2644*/;
	Local_222.f_352.f_31 = 799865/*func_2643*/;
	Local_222.f_407.f_25 = 799856/*func_2642*/;
	Local_222.f_407.f_26 = 799847/*func_2641*/;
	Local_222.f_466.f_2 = 799838/*func_2640*/;
	Local_222.f_474.f_1 = 799813/*func_2639*/;
	Local_222.f_474.f_3 = 799804/*func_2638*/;
	Local_222.f_474.f_2 = 799796/*func_2637*/;
	Local_222.f_474.f_9 = 799787/*func_2636*/;
	Local_222.f_474.f_17 = 799585/*func_2635*/;
	Local_222.f_474.f_18.f_15 = 799576/*func_2634*/;
	Local_222.f_474.f_41 = 799564/*func_2633*/;
	Local_222.f_474.f_15 = 799555/*func_2632*/;
	Local_222.f_453 = 799512/*func_2631*/;
	Local_222.f_453.f_1 = 799503/*func_2630*/;
	Local_222.f_456 = 799463/*func_2629*/;
	Local_222.f_466.f_4.f_3 = 799454/*func_2628*/;
	Local_222.f_102.f_7 = 799443/*func_2627*/;
	Local_222.f_102.f_8 = 799430/*func_2626*/;
	Local_222.f_15.f_4 = 799421/*func_2625*/;
	Local_222.f_15.f_26 = 799412/*func_2624*/;
	Local_222.f_15.f_26.f_1 = 799402/*func_2623*/;
	Local_222.f_15.f_26.f_2 = 799393/*func_2622*/;
	Local_222.f_15.f_26.f_3 = 799359/*func_2621*/;
	Local_222.f_15.f_26.f_4 = 799350/*func_2620*/;
	Local_222.f_15.f_26.f_5 = 799341/*func_2619*/;
}

int func_2621()//Position - 0xC327F
{
	if (iLocal_344 == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iLocal_344))
	{
		return 0;
	}
	return 1;
}

int func_2629(var uParam0)//Position - 0xC32E7
{
	if (func_436(0, 1) || func_2079(bLocal_337, 0, -1))
	{
		return 0;
	}
	return func_2036();
}

int func_2631(int iParam0)//Position - 0xC3318
{
	if (func_102(iParam0, 2))
	{
		return 3000;
	}
	if (func_102(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

void func_2635(float fParam0)//Position - 0xC3361
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
		if (!func_1668(iVar0))
		{
		}
		else if (!func_1630(iVar0))
		{
		}
		else
		{
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_339, true), Local_205.f_141[iVar0 /*8*/], false);
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
			Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_205.f_141[iVar1 /*8*/], Local_205.f_141[iVar1 /*8*/].f_3, -fParam0, 0f, 1f) };
		}
		else
		{
			Var4 = { Local_205.f_141[iVar1 /*8*/] };
		}
		__LIB_3__::func_276(Var4, Local_205.f_141[iVar1 /*8*/].f_3, 0, 1, 0, 0, 1, 0, 1, 0, 0);
	}
}

bool func_2639(var uParam0, struct<3> Param1)//Position - 0xC3445
{
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_339, Param1, 1f, 1f, 2f, false, true, 0);
}

void func_2658(var uParam0, int iParam1)//Position - 0xC35A6
{
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_2);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

Vector3 func_2660(int iParam0)//Position - 0xC367D
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iParam0 /*24*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]), false))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_378.f_22[iParam0 /*24*/]), true);
		}
	}
	return 0f, 0f, 0f;
}

int func_2665(int iParam0)//Position - 0xC36F2
{
	if (func_73(iParam0, 19))
	{
		return 9;
	}
	return 1;
}

var func_2667(int iParam0)//Position - 0xC3714
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_2669(int iParam0)//Position - 0xC3731
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_2671(var uParam0)//Position - 0xC374E
{
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_178);
	return StackVal;
}

Vector3 func_2672(var uParam0)//Position - 0xC3760
{
	Stack.Push(uParam0);
	Call_Loc(Local_222.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_2674(int iParam0)//Position - 0xC377E
{
	if (func_66(30))
	{
		func_2681(iParam0);
		return;
	}
	func_2679(iParam0, 800914/*func_2680*/);
	func_2679(iParam0, 800786/*func_2678*/);
	func_2679(iParam0, 800762/*func_2677*/);
	func_2679(iParam0, 800738/*func_2676*/);
	func_2679(iParam0, 800714/*func_2675*/);
}

int func_2675(int iParam0)//Position - 0xC37CA
{
	if (func_73(iParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_2676(int iParam0)//Position - 0xC37E2
{
	if (func_73(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

int func_2677(int iParam0)//Position - 0xC37FA
{
	if (func_73(iParam0, 12))
	{
		return 1;
	}
	return 0;
}

int func_2678(int iParam0)//Position - 0xC3812
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = Local_205.f_38.f_1[iParam0 /*21*/].f_14;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = Local_205.f_38.f_23[iVar1 /*5*/].f_1[iVar0];
		if (iVar2 != -1)
		{
			if (func_1925(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_2679(int iParam0, int iParam1)//Position - 0xC3860
{
	Local_228[iParam0 /*19*/].f_10[Local_228[iParam0 /*19*/].f_16] = iParam1;
	Local_228[iParam0 /*19*/].f_16++;
}

int func_2680(int iParam0)//Position - 0xC3892
{
	func_72(iParam0, 16);
	if (func_73(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_2681(int iParam0)//Position - 0xC38B1
{
	func_2679(iParam0, 801035/*func_2683*/);
	func_2679(iParam0, 801003/*func_2682*/);
	func_2679(iParam0, 800762/*func_2677*/);
	func_2679(iParam0, 800738/*func_2676*/);
	func_2679(iParam0, 800714/*func_2675*/);
}

int func_2682(int iParam0)//Position - 0xC38EB
{
	func_72(iParam0, 15);
	if (func_73(iParam0, 14))
	{
		return 1;
	}
	return 0;
}

int func_2683(int iParam0)//Position - 0xC390B
{
	func_72(iParam0, 18);
	if (func_73(iParam0, 11))
	{
		return 1;
	}
	return 0;
}

void func_2684(int iParam0)//Position - 0xC392B
{
	func_598(iParam0, 0, 0);
	func_2685(iParam0, 0, 3);
	func_2685(iParam0, 0, 2);
	func_2685(iParam0, 0, 1);
	func_598(iParam0, 1, 8);
	func_2685(iParam0, 1, 3);
	func_598(iParam0, 2, 21);
	func_2685(iParam0, 2, 3);
	func_598(iParam0, 3, 7);
}

void func_2685(int iParam0, int iParam1, int iParam2)//Position - 0xC397D
{
	int iVar0;
	var uVar1;
	iVar0 = Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_228.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

var func_2686(int iParam0)//Position - 0xC39D7
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_2687(int iParam0)//Position - 0xC39EB
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_2689(int iParam0)//Position - 0xC3A0A
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_2690(int iParam0)//Position - 0xC3A1E
{
	Stack.Push(func_73(iParam0, 8));
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_169);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_169.f_2);
		return StackVal;
	}
	return Local_205.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_2691(int iParam0)//Position - 0xC3A5B
{
	Stack.Push(func_73(iParam0, 8));
	Stack.Push(iParam0);
	Call_Loc(Local_222.f_156.f_169);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_222.f_156.f_169.f_1);
		return StackVal, StackVal, StackVal;
	}
	return Local_205.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_2692(int iParam0)//Position - 0xC3A9A
{
	return Local_205.f_38.f_1[iParam0 /*21*/].f_2;
}

int func_2694(var uParam0)//Position - 0xC3AB7
{
	switch (func_861())
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

var func_2709()//Position - 0xC3B6E
{
	return Local_205.f_99;
}

void func_2715()//Position - 0xC3BA9
{
	func_603(0, 4, 148096/*func_604*/);
	func_2719(0, 1);
	func_2716(1, 2, 4, 5, 3, 148096/*func_604*/, 148096/*func_604*/, 148096/*func_604*/, 148096/*func_604*/, 1);
	func_603(3, 48, 148096/*func_604*/);
}

void func_2716(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xC3BE6
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
	func_603(iVar0, 22, iParam5);
	func_2717(iVar0, iParam4, 802089/*func_2718*/);
	func_2719(iVar0, iVar1);
	func_2719(iVar0, iVar4);
	func_2719(iVar0, iVar5);
	func_2719(iVar0, iVar2);
	func_603(iVar1, 24, iParam6);
	func_2717(iVar1, iParam4, 802089/*func_2718*/);
	func_2719(iVar1, iVar4);
	func_2719(iVar1, iVar5);
	func_2719(iVar1, iVar2);
	func_603(iVar2, 25, iParam7);
	func_2717(iVar2, iParam4, 802089/*func_2718*/);
	func_2719(iVar2, iVar1);
	func_2719(iVar2, iVar4);
	func_2719(iVar2, iVar5);
	func_603(iVar3, 23, iParam8);
	func_2717(iVar3, iParam4, 802089/*func_2718*/);
	func_2719(iVar3, iVar1);
	func_2719(iVar3, iVar4);
	func_2719(iVar3, iVar5);
	func_2719(iVar3, iVar2);
}

void func_2717(int iParam0, var uParam1, int iParam2)//Position - 0xC3CDE
{
	int iVar0;
	var uVar1;
	iVar0 = Local_227[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_227[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_227[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_227[iParam0 /*21*/].f_19++;
}

int func_2718()//Position - 0xC3D29
{
	if (func_2570(0))
	{
		return 1;
	}
	return 0;
}

void func_2719(int iParam0, int iParam1)//Position - 0xC3D3E
{
	int iVar0;
	var uVar1;
	iVar0 = Local_227[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_227[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_227[iParam0 /*21*/].f_19++;
}

void func_2720()//Position - 0xC3D78
{
	func_608(0, 4);
	func_606(0, 1, 797861/*func_2603*/);
	func_608(1, 22);
	func_606(1, 2, 797797/*func_2601*/);
	func_608(2, 24);
	func_606(2, 3, 797776/*func_2600*/);
	func_608(3, 48);
	func_2579(3, 797187/*func_2583*/);
}

void func_2722()//Position - 0xC3DE0
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_487() != false;
	bVar1 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (func_2758() && __LIB_0__::func_893())
	{
		func_1609(0, 0, 0);
	}
	if (func_615(71))
	{
		func_2042(0);
	}
	func_2049(0);
	func_2208(0);
	func_2757();
	func_2756();
	func_2755();
	func_2754();
	func_2071();
	if (bVar1)
	{
		func_1723();
	}
	func_2753();
	if (func_2752())
	{
		func_2751();
	}
	__LIB_15__::func_345(0, __LIB_0__::func_955(Local_347.f_0));
	__LIB_19__::func_455(0);
	func_2749(bVar0);
	if (bVar1)
	{
		__LIB_19__::func_465(Local_378.f_135);
		func_2748();
		if (__LIB_0__::func_114(bLocal_337))
		{
			__LIB_3__::func_157(0);
		}
	}
	func_1970(1, 1, 1);
	__LIB_19__::func_497();
	func_2747();
	func_2746();
	func_1651(1);
	func_724();
	func_2377(0);
	__LIB_0__::func_467(0);
	if (bVar0 || (bVar1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1))
	{
		func_2745();
		func_2743();
		func_2741();
		func_2740();
		if (bVar1)
		{
			func_719();
		}
	}
	OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_205.f_19.f_5[0 /*13*/].f_2, -1);
	__LIB_0__::func_467();
	__LIB_38__::func_423();
	if (Local_222.f_10 != 0)
	{
		Call_Loc(Local_222.f_10);
	}
	__LIB_0__::func_467();
	func_2270(0);
	if (bVar0)
	{
		func_2723();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2723()//Position - 0xC3F1F
{
	struct<3> Var0;
	if (Local_222.f_102.f_3 == 0)
	{
		return;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Stack.Push(&Var0);
	Call_Loc(Local_222.f_102.f_3);
	if (!StackVal)
	{
		return;
	}
	switch (Var0.f_0)
	{
		case 181:
			break;
		case 256:
			if (__LIB_1__::func_501())
			{
				__LIB_19__::func_871(Var0.f_1);
			}
			break;
		default:
			__LIB_19__::func_562(Var0.f_0, Var0.f_1, Var0.f_2);
			break;
	}
}

void func_2740()//Position - 0xC41AB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_85)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_56[iVar0 /*5*/]))
		{
			if (func_137(iVar0, 26))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_378.f_56[iVar0 /*5*/]), false, true);
			}
			if (func_137(iVar0, 31))
			{
				if (__LIB_1__::func_561(Local_378.f_56[iVar0 /*5*/]))
				{
					__LIB_6__::func_843(&(Local_378.f_56[iVar0 /*5*/]));
				}
			}
			else
			{
				__LIB_1__::func_518(&(Local_378.f_56[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
}

void func_2741()//Position - 0xC422E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < Local_205.f_67)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_378.f_47[iVar0 /*8*/]);
			if (func_155(iVar0, 22) && !__LIB_15__::func_400(iVar2, 0, 1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]))
				{
					return;
				}
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_378.f_47[iVar0 /*8*/]), false, true);
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_378.f_47[iVar0 /*8*/]), false, false);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_378.f_47[iVar0 /*8*/]), true);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_378.f_47[iVar0 /*8*/]), false), 1f, true, false, false, false);
			}
			if (iVar2 == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
			{
				VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
			}
			if (func_2742(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]))
				{
					if (bVar1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					__LIB_6__::func_843(&(Local_378.f_47[iVar0 /*8*/]));
				}
			}
			else
			{
				if (Local_222.f_352.f_53 != 0)
				{
					Stack.Push(iVar0);
					Call_Loc(Local_222.f_352.f_53);
				}
				if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Local_205.f_67.f_1[iVar0 /*15*/].f_3))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_47[iVar0 /*8*/]))
					{
						VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iVar2, false);
					}
				}
				else
				{
					__LIB_1__::func_518(&(Local_378.f_47[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

int func_2742(int iParam0)//Position - 0xC4399
{
	bool bVar0;
	bVar0 = !__LIB_15__::func_400(NETWORK::NET_TO_VEH(Local_378.f_47[iParam0 /*8*/]), 0, 1);
	if (func_153(iParam0, 2) && bVar0)
	{
		return 1;
	}
	if (func_155(iParam0, 29))
	{
		if (bVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_2743()//Position - 0xC43E4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_205.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_22[iVar0 /*24*/]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_378.f_22[iVar0 /*24*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_22[iVar0 /*24*/]))
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
			if (Local_222.f_156.f_191 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_222.f_156.f_191);
			}
			if (func_2744(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_22[iVar0 /*24*/]))
				{
					__LIB_6__::func_843(&(Local_378.f_22[iVar0 /*24*/]));
				}
			}
			else
			{
				__LIB_1__::func_518(&(Local_378.f_22[iVar0 /*24*/]));
			}
		}
		iVar0++;
	}
}

int func_2744(int iParam0)//Position - 0xC44B9
{
	if (func_70(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_2745()//Position - 0xC44CF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_378.f_2[iVar0]))
			{
				__LIB_6__::func_843(&(Local_378.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_378.f_2.f_15[iVar0]))
		{
			if (__LIB_1__::func_561(Local_378.f_2.f_15[iVar0]))
			{
				__LIB_6__::func_843(&(Local_378.f_2.f_15[iVar0]));
			}
			__LIB_1__::func_518(&(Local_378.f_2.f_15[iVar0]));
		}
		iVar0++;
	}
}

void func_2746()//Position - 0xC455B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_10__::func_399(&(Local_323.f_2[iVar0]));
		func_1948(iVar0);
		iVar0++;
	}
}

void func_2747()//Position - 0xC4588
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_111)
	{
		__LIB_10__::func_399(&(uLocal_321[iVar0]));
		iVar0++;
	}
}

void func_2748()//Position - 0xC45B0
{
	struct<3> Var0;
	Var0 = { func_754() };
	if (!__LIB_0__::func_86(Var0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Var0, 80f, false, false, true, true, true, false, 0);
	}
}

void func_2749(bool bParam0)//Position - 0xC45E0
{
	if (bParam0)
	{
	}
	else
	{
		func_2750();
	}
}

void func_2750()//Position - 0xC45F4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_205.f_122)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_322[iVar0 /*4*/])))
		{
			TASK::DELETE_PATROL_ROUTE(&(Local_322[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

void func_2751()//Position - 0xC462B
{
	Stack.Push(iLocal_339);
	Call_Loc(Local_222.f_15.f_18.f_2);
	WEAPON::REMOVE_WEAPON_FROM_PED(StackVal, StackVal);
}

int func_2752()//Position - 0xC4644
{
	if ((func_615(55) && !func_615(78)) && Local_222.f_15.f_18.f_2 != 0)
	{
		Call_Loc(Local_222.f_15.f_18.f_2);
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

void func_2753()//Position - 0xC46AF
{
	if (!func_66(31))
	{
		return;
	}
	func_1688(0);
}

void func_2754()//Position - 0xC46C9
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (func_615(54))
	{
		__LIB_15__::func_571();
		__LIB_19__::func_296(0, -1, 1);
	}
	func_775(0, 0);
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 = -1;
	}
	if (Global_2815059.f_6725 != 0)
	{
		Global_2815059.f_6725 = 0;
	}
}

void func_2755()//Position - 0xC472E
{
	if (func_615(40))
	{
		CAM::DO_SCREEN_FADE_IN(5000);
	}
}

void func_2756()//Position - 0xC4746
{
	if (func_615(41))
	{
		HUD::SET_RADAR_ZOOM_PRECISE(0f);
		__LIB_15__::func_553(0);
		if (func_2044())
		{
			func_2042(0);
		}
		func_726(41);
	}
}

void func_2757()//Position - 0xC4773
{
	func_1654(9);
	if (func_420(iLocal_341, 13))
	{
		func_1654(13);
		if (Local_319.f_0 == -1)
		{
			PED::CLEAR_PED_PROP(iLocal_339, 0);
		}
		else
		{
			PED::SET_PED_PROP_INDEX(iLocal_339, 0, Local_319.f_0, Local_319.f_1, false);
			Local_319.f_0 = -1;
			Local_319.f_1 = -1;
		}
	}
}

bool func_2758()//Position - 0xC47C0
{
	return func_615(26);
}

void func_2759(bool bParam0, bool bParam1)//Position - 0xC47CE
{
	if (!func_615(31))
	{
		return;
	}
	if (!func_615(0))
	{
		Local_316.f_2 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_316.f_1);
		func_2923();
		func_2760(bParam0, bParam1);
		func_505(0);
	}
}

void func_2760(bool bParam0, bool bParam1)//Position - 0xC480C
{
	var uVar0;
	uVar0 = func_2918(func_487(), bParam0, bParam1);
	Local_316.f_0 = uVar0;
	__LIB_20__::func_447(bParam0, uVar0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 1);
}

int func_2918(int iParam0, bool bParam1, bool bParam2)//Position - 0xC8B1E
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
	if (func_2922() && func_2921())
	{
		return 13;
	}
	if (bParam1)
	{
		if (func_2919())
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

bool func_2919()//Position - 0xC8B9A
{
	if (Local_222.f_102.f_1 != 0)
	{
		Call_Loc(Local_222.f_102.f_1);
		return StackVal;
	}
	if (!func_438())
	{
		return 0;
	}
	if (func_2597() && func_2920(bLocal_337) < func_37())
	{
		return 1;
	}
	return (func_1674(bLocal_337) && !func_2597());
}

int func_2920(int iParam0)//Position - 0xC8BF1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (func_436(iVar0, 4) && func_1672(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2921()//Position - 0xC8C2D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_37())
	{
		if (!func_436(iVar0, 33))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_2922()//Position - 0xC8C5B
{
	return func_37() > 0;
}

void func_2923()//Position - 0xC8C69
{
	Local_112.f_3 = Local_378.f_124.f_9;
	Local_112.f_0 = joaat("slasher");
	Local_112.f_1 = func_2924();
	Local_112.f_2 = Local_378.f_90;
	Local_112.f_5 = (300000 - __LIB_1__::func_724(&(Local_378.f_124.f_5), 0, 0));
	if (Local_112.f_5 < 0)
	{
		Local_112.f_5 = 0;
	}
	Local_112.f_6 = 300000;
	STATS::PLAYSTATS_EXTRA_EVENT(&Local_112);
}

int func_2924()//Position - 0xC8CC5
{
	switch (func_528())
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		default:
	}
	return -1;
}

int func_2925(struct<21> Param0)//Position - 0xC8D09
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_0__::func_895(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_378.f_2.f_11[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_368[iVar0] = __LIB_0__::func_162();
		uLocal_369[iVar0] = __LIB_0__::func_162();
		Local_299[iVar0 /*7*/].f_4 = __LIB_0__::func_162();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_201[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_130[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_323.f_2[iVar0] = -1;
		iVar0++;
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_378, 167, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_385, 1217, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_2929(__LIB_0__::func_956(Param0.f_0, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT());
	__LIB_0__::func_467();
	__LIB_19__::func_331();
	__LIB_0__::func_467();
	iLocal_315 = PLAYER::GET_PLAYER_GROUP(bLocal_337);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_378.f_96 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	}
	Local_385[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_16 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	return 1;
}

void func_2929(int iParam0, int iParam1)//Position - 0xC8E85
{
	Local_347.f_0 = iParam0;
	Local_347.f_1 = iParam1;
}

void func_2935(bool bParam0)//Position - 0xC9C9C
{
	bLocal_337 = PLAYER::PLAYER_ID();
	iLocal_338 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iLocal_339 = PLAYER::PLAYER_PED_ID();
	Local_342 = { ENTITY::GET_ENTITY_COORDS(iLocal_339, false) };
	bLocal_333 = __LIB_1__::func_693(bLocal_337, 0, 1);
	if (bParam0)
	{
		bLocal_335 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		iLocal_340 = NETWORK::PARTICIPANT_ID_TO_INT();
		iLocal_341 = NETWORK::PARTICIPANT_ID();
		bLocal_336 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_341);
	}
	if (bLocal_333)
	{
		bLocal_334 = PLAYER::IS_PLAYER_PLAYING(bLocal_337);
	}
	else
	{
		bLocal_334 = false;
	}
	if (bLocal_334)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_339, false))
		{
			iLocal_343 = PED::GET_VEHICLE_PED_IS_IN(iLocal_339, false);
			iLocal_344 = ENTITY::GET_ENTITY_MODEL(iLocal_343);
		}
		else
		{
			func_2936();
		}
	}
	else
	{
		func_2936();
	}
	if (__LIB_0__::func_937(&uLocal_374, 1000, 0))
	{
		if (bLocal_336)
		{
			if (!__LIB_0__::func_490(Local_385[iLocal_340 /*38*/].f_16, Local_342, 1f, 0))
			{
				Local_385[iLocal_340 /*38*/].f_16 = { Local_342 };
			}
		}
		__LIB_0__::func_794(&uLocal_374);
	}
	bLocal_335 = bLocal_335;
	iLocal_340 = iLocal_340;
	iLocal_341 = iLocal_341;
	Local_342 = { Local_342 };
	bLocal_336 = bLocal_336;
	iLocal_344 = iLocal_344;
	bLocal_345 = func_687(1, 0, 1);
	bLocal_346 = func_2018();
}

void func_2936()//Position - 0xC9DC1
{
	int iVar0;
	iLocal_343 = iVar0;
	iLocal_344 = 0;
}

