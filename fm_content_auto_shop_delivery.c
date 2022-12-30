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
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	float fLocal_120 = 0f;
	int iLocal_121[5] = { 0, 0, 0, 0, 0 };
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 8;
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
	var uLocal_153 = 8;
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
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	var uLocal_191 = 0;
	int iLocal_192[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	struct<144> Local_196 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 1443296302, 1, -1, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 2 } ;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = -1;
	var uLocal_203 = 1;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = -1;
	var uLocal_211 = 1;
	var uLocal_212 = 0;
	struct<527> Local_213 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	struct<20> Local_216 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_217[5];
	struct<21> Local_218[7];
	struct<24> Local_219 = { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_220 = 0;
	var uLocal_221 = 5;
	var uLocal_222 = -1;
	var uLocal_223 = 3;
	var uLocal_224 = -1;
	var uLocal_225 = 0;
	var uLocal_226 = -1;
	var uLocal_227 = 0;
	var uLocal_228 = -1;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = 3;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = -1;
	var uLocal_240 = 0;
	var uLocal_241 = -1;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = -1;
	var uLocal_249 = 3;
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = -1;
	var uLocal_253 = 0;
	var uLocal_254 = -1;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = -1;
	var uLocal_262 = 3;
	var uLocal_263 = -1;
	var uLocal_264 = 0;
	var uLocal_265 = -1;
	var uLocal_266 = 0;
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = -1;
	var uLocal_275 = 3;
	var uLocal_276 = -1;
	var uLocal_277 = 0;
	var uLocal_278 = -1;
	var uLocal_279 = 0;
	var uLocal_280 = -1;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	struct<7> Local_290 = { 1, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = -1;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299[1] = { 0 };
	struct<2> Local_300[1];
	struct<2> Local_301 = { 0, 0 } ;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	struct<6> Local_304 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_305 = 0;
	int iLocal_306 = 0;
	struct<8> Local_307 = { 0, -1, -1, 0, 0, 0, 0, 0 } ;
	int iLocal_308 = 0;
	struct<2> Local_309 = { -1, -1 } ;
	struct<12> Local_310 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	var uLocal_311 = 1;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315[1] = { -1 };
	struct<4> Local_316[1];
	struct<8> Local_317 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_318 = 0;
	int iLocal_319 = 0;
	bool bLocal_320 = 0;
	bool bLocal_321 = 0;
	bool bLocal_322 = 0;
	bool bLocal_323 = 0;
	bool bLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	struct<3> Local_329 = { 0, 0, 0 } ;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	bool bLocal_332 = 0;
	bool bLocal_333 = 0;
	struct<2> Local_334 = { -1, -1 } ;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 3;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	int iLocal_348[2] = { 0, 0 };
	int iLocal_349 = 0;
	float fLocal_350 = 0f;
	float fLocal_351 = 0f;
	float fLocal_352 = 0f;
	float fLocal_353 = 0f;
	int iLocal_354 = 0;
	int iLocal_355[1] = { 0 };
	var uLocal_356[1] = { 0 };
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	int iLocal_363 = 0;
	struct<16> Local_364 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<156> Local_365 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, -1, -1, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_366 = 1;
	var uLocal_367 = 0;
	var uLocal_368 = -1;
	var uLocal_369 = -1;
	var uLocal_370 = -1;
	var uLocal_371 = 0;
	struct<35> Local_372[8];
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	struct<21> Local_378 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_112 = -1;
	fLocal_120 = 0f;
	fLocal_122 = 0f;
	fLocal_123 = 0f;
	fLocal_124 = 0f;
	fLocal_187 = 0.62f;
	fLocal_188 = 0.51f;
	fLocal_189 = 0.55f;
	fLocal_190 = 25f;
	iLocal_341 = -1;
	iLocal_342 = -1;
	iLocal_345 = -1;
	fLocal_350 = 99999f;
	fLocal_351 = 99999f;
	fLocal_352 = 99999f;
	fLocal_353 = 999999f;
	iLocal_377 = -1;
	StringCopy(&Local_364, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_364 = { Local_364 };
	Local_216 = { Local_216 };
	func_3191(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_320)
		{
			if (!func_3139(ScriptParam_378))
			{
				func_3064(0, 1);
				func_2964();
			}
		}
		else
		{
			func_2964();
		}
	}
	else
	{
		func_3064(0, 1);
		func_2964();
	}
	__LIB_19__::func_549(&(Local_365.f_129));
	func_2859();
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_3064(0, 1);
			func_2964();
		}
		if (__LIB_20__::func_386())
		{
			func_3064(0, 1);
			func_2964();
		}
		if (Local_213.f_102.f_4 != 0)
		{
			Call_Loc(Local_213.f_102.f_4);
			if (StackVal)
			{
				func_3064(0, 1);
				func_2964();
			}
		}
		func_3191(1);
		switch (func_2846())
		{
			case 0:
				switch (func_2845())
				{
					case 1:
						if (func_2582())
						{
							func_2581(1);
						}
						break;
					case 2:
					case 3:
						func_2581(3);
						break;
				}
				break;
			case 1:
				func_2537();
				func_1799();
				__LIB_0__::func_109();
				if (func_2845() != 1)
				{
					func_1792();
					if (Local_213.f_102.f_5 != 0)
					{
						Call_Loc(Local_213.f_102.f_5);
					}
					func_2581(func_2845());
				}
				break;
			case 2:
				func_2537();
				func_1069();
				func_693();
				if (func_2845() > 2)
				{
					func_3064(__LIB_19__::func_628(11), 0);
					func_2581(3);
				}
				break;
			case 3:
				func_2964();
				break;
		}
		if (bLocal_322)
		{
			switch (func_2845())
			{
				case 0:
					if (func_490())
					{
						func_489(1);
					}
					break;
				case 1:
					if (func_488() == 0)
					{
						func_6();
					}
					else
					{
						func_489(2);
					}
					break;
				case 2:
					if (func_2())
					{
						func_489(3);
					}
					break;
				case 3:
					func_2964();
					break;
				}
		}
		__LIB_19__::func_584();
	}
}

int func_2()//Position - 0x2E5
{
	if (Local_213.f_3.f_2 != 0)
	{
		Call_Loc(Local_213.f_3.f_2);
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

bool func_3(int iParam0)//Position - 0x31A
{
	return __LIB_0__::func_316(&(Local_365.f_88), iParam0);
}

bool func_5()//Position - 0x350
{
	return func_3(21);
}

void func_6()//Position - 0x35E
{
	__LIB_0__::func_467();
	if (Local_213.f_3 != 0)
	{
		Call_Loc(Local_213.f_3);
	}
	func_436();
	func_426();
	func_143();
	func_124();
	func_31();
	func_24();
	__LIB_0__::func_467();
	func_20();
	func_12();
	func_7();
}

void func_7()//Position - 0x3A1
{
	if (!__LIB_0__::func_109())
	{
		return;
	}
	if (!__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(__LIB_1__::func_730()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)//Position - 0x3D6
{
	if (!bLocal_322)
	{
		return;
	}
	Local_365.f_82 = iParam0;
}

void func_12()//Position - 0x46F
{
	if (__LIB_19__::func_585() == -1)
	{
		return;
	}
	if (Local_213.f_82 == 0)
	{
		return;
	}
	Call_Loc(Local_213.f_82);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_213.f_82.f_1 != 0)
	{
		Call_Loc(Local_213.f_82.f_1);
		if (StackVal)
		{
			__LIB_0__::func_627(&(Local_365.f_106), 0, 0);
			func_16(5);
		}
	}
	if (!__LIB_0__::func_864(&(Local_365.f_106)))
	{
		__LIB_0__::func_795(&(Local_365.f_106), 0, 0);
	}
	else if (__LIB_0__::func_864(&(Local_365.f_106)))
	{
		if (__LIB_0__::func_937(&(Local_365.f_106), __LIB_19__::func_585(), 0))
		{
			if (Local_213.f_82.f_3 != 0)
			{
				Call_Loc(Local_213.f_82.f_3);
			}
			func_8(1);
		}
	}
}

void func_16(int iParam0)//Position - 0x5CC
{
	if (__LIB_1__::func_458(&(Local_365.f_88), iParam0))
	{
	}
}

void func_20()//Position - 0x677
{
	int iVar0;
	if (func_22() == -1)
	{
		func_21(0);
		Call_Loc(Local_217[func_22() /*20*/].f_17);
		return;
	}
	while ((func_22() < iLocal_335 && iVar0 < Local_217[func_22() /*20*/].f_19) && Local_217[func_22() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_217[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_22() != Local_217[func_22() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_217[func_22() /*20*/].f_18);
				Local_365.f_86 = func_22();
				func_21(Local_217[func_22() /*20*/].f_1[iVar0 /*3*/]);
				MISC::SET_BIT(&(Local_365.f_87), func_22());
				Call_Loc(Local_217[func_22() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_21(int iParam0)//Position - 0x747
{
	if (!bLocal_322)
	{
		return;
	}
	Local_365.f_85 = iParam0;
}

int func_22()//Position - 0x760
{
	return Local_365.f_85;
}

void func_24()//Position - 0x775
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_25(&(Local_365.f_63), &(Local_365.f_63.f_3)))
		{
			func_16(2);
		}
	}
}

int func_25(var uParam0, int* iParam1)//Position - 0x7A9
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
	if (iVar1 < __LIB_19__::func_586())
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < __LIB_19__::func_586())
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
				if (iVar2 < (__LIB_19__::func_586() - 1))
				{
					func_26(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
					iVar1 = (iVar1 - 1);
				}
			}
			iVar2++;
			return 1;
		}
void func_26(var uParam0, var uParam1)//Position - 0x86F
{
	var uVar0;
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

void func_31()//Position - 0x8AE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 < Local_196.f_38)
	{
		func_122(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_213.f_156.f_182 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_156.f_182);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_121(iVar5, 6);
				}
				else if (bVar3)
				{
					func_121(iVar5, 6);
				}
				else if (__LIB_0__::func_114(iVar5, iVar0))
				{
					func_121(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (__LIB_19__::func_595(iVar5))
				{
					func_121(iVar5, 2);
				}
				break;
			case 1:
				if (!bVar2)
				{
					if (func_117(iVar5))
					{
						func_116(iVar5);
						func_121(iVar5, 2);
					}
				}
				else if (__LIB_0__::func_109(iVar5))
				{
					__LIB_1__::func_518(&(Local_365.f_22[iVar5 /*24*/]));
				}
				break;
			case 2:
				if (!bVar1)
				{
					if (func_111(iVar5))
					{
						if (func_65(iVar5))
						{
							func_121(iVar5, 3);
							if (func_64(iVar5, 8))
							{
								func_63(iVar5, 31);
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
					if (func_59(iVar5, iVar0))
					{
						func_121(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_40(iVar5);
						func_35(iVar5, iVar0, 1);
						if (__LIB_19__::func_588(iVar5))
						{
							func_121(iVar5, 4);
						}
					}
				}
				break;
			case 6:
				func_63(iVar5, 8);
				if (bVar2)
				{
					if (func_59(iVar5, iVar0))
					{
						break;
					}
					if (__LIB_19__::func_588(iVar5))
					{
						func_121(iVar5, 4);
					}
				}
				if (func_33(iVar5))
				{
					if (__LIB_0__::func_109(iVar5))
					{
						__LIB_1__::func_518(&(Local_365.f_22[iVar5 /*24*/]));
					}
					func_121(iVar5, 1);
				}
				if (func_488() == 0)
				{
					if (__LIB_19__::func_587(iVar5, 0))
					{
						func_8(9);
					}
				}
				break;
			case 4:
				if (!__LIB_19__::func_587(iVar5, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_63(iVar5, 26);
					func_121(iVar5, 5);
				}
				break;
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_219.f_22;
	func_122(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_35(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

int func_33(int iParam0)//Position - 0xB24
{
	if (func_488() != 0)
	{
		return 0;
	}
	if (__LIB_19__::func_587(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_169);
		return StackVal;
	}
	return 0;
}

void func_35(int iParam0, int iParam1, int iParam2)//Position - 0xB72
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_19__::func_589(iParam0);
	if (func_38(iParam0) == -1)
	{
		func_37(iParam0, 0);
		if (Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (__LIB_19__::func_384(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_11);
	}
	while ((func_38(iParam0) < Local_219.f_23[iVar0 /*67*/] && iVar1 < Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_12) && Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_9);
			}
			func_37(iParam0, Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

void func_37(int iParam0, int iParam1)//Position - 0xD3F
{
	if (!bLocal_322)
	{
		return;
	}
	Local_365.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_38(int iParam0)//Position - 0xD5E
{
	return Local_365.f_22[iParam0 /*24*/].f_2;
}

void func_40(int iParam0)//Position - 0xD92
{
	bool bVar0;
	int iVar1;
	bVar0 = Local_196.f_38.f_1[iParam0 /*21*/].f_14;
	if (func_58(bVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < Local_219[iParam0 /*19*/].f_16)
	{
		if (Local_219[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_219[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				if (!BitTest(Local_365.f_62, bVar0))
				{
					func_41(iParam0);
				}
				MISC::SET_BIT(&(Local_365.f_62), bVar0);
				if (Local_213.f_156.f_174 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(bVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_213.f_156.f_174);
				}
			}
		}
		iVar1++;
	}
}

void func_41(int iParam0)//Position - 0xE28
{
	if (__LIB_19__::func_591(28))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_15__::func_407(NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/])))
		{
			__LIB_20__::func_321(__LIB_20__::func_270(), 1, 0);
		}
	}
}

bool func_58(var uParam0)//Position - 0x112E
{
	return BitTest(Local_365.f_62, uParam0);
}

int func_59(int iParam0, int iParam1)//Position - 0x113E
{
	Stack.Push(Local_213.f_156.f_192 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_213.f_156.f_192);
	if (StackVal && StackVal)
	{
		if (Local_213.f_156.f_191 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_191);
		}
		if (__LIB_20__::func_163(iParam0))
		{
			__LIB_6__::func_843(&(Local_365.f_22[iParam0 /*24*/]));
		}
		else
		{
			__LIB_1__::func_518(&(Local_365.f_22[iParam0 /*24*/]));
		}
		return 1;
	}
	return 0;
}

void func_63(int iParam0, int iParam1)//Position - 0x121B
{
	if (__LIB_1__::func_458(&(Local_365.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_64(int iParam0, int iParam1)//Position - 0x1237
{
	return __LIB_0__::func_316(&(Local_365.f_22[iParam0 /*24*/].f_3), iParam1);
}

int func_65(int iParam0)//Position - 0x1250
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	func_110(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_176);
	iVar0 = StackVal;
	if (__LIB_0__::func_799(iVar0))
	{
		iVar1 = Local_196.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_953(Local_365.f_47[iVar1 /*8*/]))
			{
				if (__LIB_0__::func_930(&(Local_365.f_22[iParam0 /*24*/]), Local_365.f_47[iVar1 /*8*/], 26, iVar0, Local_196.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_85(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_84();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_177);
			Var2 = { StackVal, StackVal, StackVal };
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_178);
			fVar3 = StackVal;
			if (!__LIB_0__::func_86(Var2))
			{
				if (!func_82(iParam0) || __LIB_20__::func_381(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_1__::func_672(&(Local_365.f_22[iParam0 /*24*/]), 26, iVar0, Var2, fVar3, 1, 1, 1))
					{
						func_85(iParam0);
						func_84();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return 1;
					}
				}
				else
				{
					func_84();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x19F7
{
	if ((__LIB_19__::func_587(iParam0, 10) && func_64(iParam0, 8)) && !__LIB_19__::func_587(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_84()//Position - 0x1A54
{
	if (Local_365.f_99 != -1)
	{
		Local_365.f_112 = { 0f, 0f, 0f };
		Local_365.f_121 = 0f;
		iLocal_344 = 0;
		Local_365.f_84 = -1;
		Local_365.f_99 = -1;
	}
}

void func_85(int iParam0)//Position - 0x1A85
{
	int iVar0;
	bool bVar1;
	iVar0 = NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/]);
	bVar1 = func_64(iParam0, 19);
	func_103(iParam0, iVar0);
	if (bVar1)
	{
		func_102(iParam0, iVar0);
	}
	else
	{
		func_92(iParam0, iVar0);
	}
	if (func_91(iParam0, iVar0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
		PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
	}
	if (Local_213.f_156.f_180 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_213.f_156.f_180);
	}
	if (__LIB_19__::func_587(iParam0, 5))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
		__LIB_19__::func_871(iVar0, iParam0, 1, 0, 1, 1);
	}
}

int func_91(int iParam0, int iParam1)//Position - 0x2202
{
	if (__LIB_19__::func_587(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)//Position - 0x221A
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
	if (__LIB_19__::func_587(iParam0, 6))
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
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_196.f_38.f_1[iParam0 /*21*/].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_101());
	PED::SET_PED_ACCURACY(iParam1, func_100(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_99());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_98());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_98(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	if (__LIB_20__::func_167(iParam0))
	{
		AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, true);
	}
	func_93(iParam0, iParam1);
}

void func_93(int iParam0, int iParam1)//Position - 0x22DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	if (func_64(iParam0, 19))
	{
		return;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), Local_196.f_38.f_1[iParam0 /*21*/].f_20, false, false);
		return;
	}
	else if (Local_196.f_38.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_196.f_38.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_196.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_196.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (__LIB_20__::func_271(iVar2, 4))
			{
				Var3 = { __LIB_19__::func_592(iVar2) };
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, false, false);
			}
		}
		iVar1++;
	}
}

int func_98()//Position - 0x247B
{
	switch (Local_365.f_83)
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

int func_99()//Position - 0x24B2
{
	switch (Local_365.f_83)
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

int func_100(int iParam0)//Position - 0x24E7
{
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_179);
	Stack.Push(StackVal == joaat("WEAPON_RPG"));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_179);
	if (StackVal || StackVal == joaat("WEAPON_RAILGUN"))
	{
		return 2;
	}
	switch (Local_365.f_83)
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

int func_101()//Position - 0x2549
{
	switch (Local_365.f_83)
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

void func_102(int iParam0, int iParam1)//Position - 0x257A
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
	PED::SET_PED_ACCURACY(iParam1, func_100(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_99());
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_98());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_98(), 0);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_101());
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}

void func_103(int iParam0, int iParam1)//Position - 0x2605
{
	int iVar0;
	int iVar1;
	if (__LIB_20__::func_172(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_365.f_22[iParam0 /*24*/]), true);
	}
	if (!__LIB_15__::func_407(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_2 == joaat("MP_G_M_Pros_01"))
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
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_63(iParam0, 2);
		PHYSICS::ACTIVATE_PHYSICS(iParam1);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
	}
	if (__LIB_19__::func_587(iParam0, 11))
	{
		NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_179);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_105(iParam0), true);
		}
	}
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_SEEING_RANGE(iParam1, Local_196.f_38.f_1[iParam0 /*21*/].f_17);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_196.f_38.f_1[iParam0 /*21*/].f_18);
	PED::SET_PED_HEARING_RANGE(iParam1, Local_196.f_38.f_1[iParam0 /*21*/].f_19);
	PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
	iVar1 = __LIB_19__::func_594(iParam0);
	if (iVar1 != joaat("COP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
	}
}

int func_105(int iParam0)//Position - 0x2794
{
	if (Local_213.f_156.f_193 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_193);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2);
	if (StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_64(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

void func_110(int iParam0, var uParam1)//Position - 0x28CE
{
	if (Local_365.f_99 == -1)
	{
		Local_365.f_84 = iParam0;
		Local_365.f_99 = uParam1;
	}
}

int func_111(int iParam0)//Position - 0x28ED
{
	if (!func_113(0, iParam0))
	{
		return 0;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (func_112(Local_196.f_38.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324))
	{
		return 0;
	}
	Stack.Push(Local_213.f_156.f_194 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_194);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_112(int iParam0)//Position - 0x295B
{
	return Local_365.f_47[iParam0 /*8*/].f_1;
}

int func_113(int iParam0, int iParam1)//Position - 0x296E
{
	if (Local_365.f_84 == -1)
	{
		return 1;
	}
	if (Local_365.f_84 == iParam0)
	{
		if (Local_365.f_99 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_116(int iParam0)//Position - 0x29C9
{
	func_37(iParam0, 0);
	if (Local_213.f_156.f_169.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_169.f_3);
	}
}

int func_117(int iParam0)//Position - 0x29F1
{
	int iVar0;
	if (Local_213.f_156.f_169.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_169.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_0__::func_937(&(Local_365.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::clearF_1Prop(&(Local_365.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

void func_121(int iParam0, int iParam1)//Position - 0x2A7E
{
	if (!bLocal_322)
	{
		return;
	}
	Local_365.f_22[iParam0 /*24*/].f_1 = iParam1;
}

void func_122(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x2A9D
{
	*iParam4 = func_123(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

int func_123(int iParam0)//Position - 0x2ADE
{
	return Local_365.f_22[iParam0 /*24*/].f_1;
}

void func_124()//Position - 0x2AF1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	iVar4 = 0;
	while (iVar4 < Local_196.f_85)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_365.f_56[iVar4 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_213.f_407.f_36 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_213.f_407.f_36);
			}
		}
		if (func_142(iVar4) > 1 && func_142(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_141(iVar4, 3);
				}
				else if (__LIB_19__::func_601(iVar4))
				{
					func_141(iVar4, 3);
				}
			}
			else
			{
				func_141(iVar4, 3);
			}
		}
		func_136(iVar4, iVar0);
		switch (func_142(iVar4))
		{
			case 0:
				if (__LIB_19__::func_600(iVar4))
				{
					func_141(iVar4, 1);
				}
				break;
			case 1:
				if ((!bVar1 && __LIB_19__::func_599(iVar4)) && func_125(iVar4))
				{
					func_141(iVar4, 2);
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

int func_125(int iParam0)//Position - 0x2C08
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iParam0 /*5*/]))
	{
		Var1 = { __LIB_19__::func_598(iParam0) };
		Var2 = { __LIB_19__::func_597(iParam0) };
		if (__LIB_0__::func_86(Var1))
		{
			return 0;
		}
		iVar3 = Local_196.f_85.f_1[iParam0 /*12*/].f_3;
		if (!__LIB_0__::func_799(iVar3))
		{
			return 0;
		}
		if (__LIB_1__::func_671(&(Local_365.f_56[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, __LIB_19__::func_596(iParam0, 22), 1, 0, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]);
			ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, true);
			func_126(iParam0, iVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1)//Position - 0x2CC2
{
	var uVar0;
	var uVar1;
	NETWORK::NETWORK_SET_OBJECT_SCOPE_DISTANCE(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]), 4.2E-43f);
	ENTITY::SET_ENTITY_PROOFS(iParam1, __LIB_19__::func_596(iParam0, 17), __LIB_19__::func_596(iParam0, 18), __LIB_19__::func_596(iParam0, 19), __LIB_19__::func_596(iParam0, 20), __LIB_19__::func_596(iParam0, 21), false, false, false);
	func_128(iParam0, 0);
	if (__LIB_19__::func_596(iParam0, 32))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (!__LIB_19__::func_596(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]));
	}
	if (__LIB_19__::func_596(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_365.f_56[iParam0 /*5*/], true, true);
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_365.f_56[iParam0 /*5*/], 1);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (__LIB_19__::func_596(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (__LIB_19__::func_596(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, true);
	}
	if (__LIB_19__::func_596(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, false);
	}
	if (__LIB_19__::func_596(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
	}
	if (__LIB_19__::func_596(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (__LIB_19__::func_596(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]), 1200);
	}
	if (__LIB_19__::func_596(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (__LIB_19__::func_596(iParam0, 9))
	{
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]), true);
	}
	if (__LIB_19__::func_596(iParam0, 34))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, __LIB_19__::func_598(iParam0), false, false, true);
	}
	else if (__LIB_19__::func_596(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, __LIB_19__::func_598(iParam0), true, false, false, true);
	}
	if (__LIB_19__::func_596(iParam0, 33))
	{
		ENTITY::SET_ENTITY_ROTATION(iParam1, __LIB_19__::func_597(iParam0), 2, true);
	}
	if (__LIB_19__::func_596(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (__LIB_19__::func_596(iParam0, 11))
	{
		ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iParam1, true);
	}
	if (__LIB_20__::func_273(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	if (__LIB_19__::func_596(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
	}
	if (__LIB_19__::func_596(iParam0, 14))
	{
		Stack.Push(Local_213.f_407.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar1);
		Call_Loc(Local_213.f_407.f_24);
		if (StackVal && StackVal)
		{
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, true);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar1);
		}
	}
	if (Local_213.f_407.f_33 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_407.f_33);
	}
}

void func_128(int iParam0, int iParam1)//Position - 0x2F57
{
	if (__LIB_16__::func_758(&(Local_365.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

void func_136(int iParam0, int iParam1)//Position - 0x3129
{
	if (Local_196.f_85.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_142(iParam0) > 1 && func_142(iParam0) < 3)
	{
		if (func_138(iParam0, iParam1))
		{
			func_137(iParam0, 8);
		}
		else
		{
			func_128(iParam0, 8);
		}
	}
}

void func_137(int iParam0, int iParam1)//Position - 0x317A
{
	if (__LIB_1__::func_458(&(Local_365.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_138(int iParam0, int iParam1)//Position - 0x3196
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	return func_139(iParam0, 8);
}

bool func_139(int iParam0, int iParam1)//Position - 0x31AF
{
	return __LIB_0__::func_316(&(Local_365.f_56[iParam0 /*5*/].f_2), iParam1);
}

void func_141(int iParam0, int iParam1)//Position - 0x31EB
{
	Local_365.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_142(int iParam0)//Position - 0x3200
{
	return Local_365.f_56[iParam0 /*5*/].f_1;
}

void func_143()//Position - 0x3213
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
	while (iVar0 < Local_196.f_67)
	{
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_365.f_47[iVar0 /*8*/]);
			bVar4 = __LIB_0__::func_939(Local_365.f_47[iVar0 /*8*/]);
			bVar6 = __LIB_3__::func_161(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_419(iVar0, 2);
			}
		}
		if (func_112(iVar0) > 2)
		{
			if (func_112(iVar0) != 5 && func_112(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_418(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_418(iVar0, 5);
				}
				else if (__LIB_0__::func_114(iVar0, iVar2))
				{
					func_418(iVar0, 5);
				}
			}
		}
		if (Local_213.f_352.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_213.f_352.f_46);
		}
		func_413(iVar0, iVar2);
		switch (func_112(iVar0))
		{
			case 0:
				if (__LIB_19__::func_607(iVar0))
				{
					func_418(iVar0, 2);
				}
				break;
			case 1:
				if (!bVar5)
				{
					if (func_411(iVar0))
					{
						func_418(iVar0, 2);
					}
				}
				else
				{
					__LIB_1__::func_518(&(Local_365.f_47[iVar0 /*8*/]));
				}
				break;
			case 2:
				if (!bVar3)
				{
					if (func_410(iVar0))
					{
						if (func_152(iVar0))
						{
							func_418(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			case 4:
				if (bVar5)
				{
					if (func_151(iVar0, iVar2))
					{
						func_418(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_150(iVar0, iVar2);
						}
						break;
					case 5:
						if (__LIB_19__::func_602(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (func_151(iVar0, iVar2))
							{
							}
							else
							{
								if (__LIB_19__::func_602(iVar0, 23))
								{
									if (bVar5)
									{
										__LIB_1__::func_518(&(Local_365.f_47[iVar0 /*8*/]));
									}
								}
								if (func_148(iVar0))
								{
									__LIB_1__::func_518(&(Local_365.f_47[iVar0 /*8*/]));
									func_418(iVar0, 1);
								}
								break;
							case 3:
								break;
							case 6:
								if (bVar5 && func_146(iVar0, iVar2))
								{
									__LIB_1__::func_518(&(Local_365.f_47[iVar0 /*8*/]));
								}
								break;
							case 7:
								break;
						}
						if (bVar6)
						{
							func_145(iVar0, 13);
						}
						else
						{
							func_144(iVar0, 13);
						}
					}
					iVar0++;
				}
void func_144(int iParam0, int iParam1)//Position - 0x3462
{
	if (__LIB_16__::func_758(&(Local_365.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x347E
{
	if (__LIB_1__::func_458(&(Local_365.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_146(int iParam0, int iParam1)//Position - 0x349A
{
	if (__LIB_19__::func_602(iParam0, 23) || func_147(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_213.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_213.f_352.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_147(int iParam0, int iParam1)//Position - 0x34E3
{
	return __LIB_0__::func_316(&(Local_365.f_47[iParam0 /*8*/].f_2), iParam1);
}

int func_148(int iParam0)//Position - 0x34FC
{
	if (func_488() != 0)
	{
		return 0;
	}
	if (__LIB_19__::func_602(iParam0, 13))
	{
		if (Local_213.f_352.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_352.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

void func_150(int iParam0, int iParam1)//Position - 0x3552
{
	struct<3> Var0;
	float fVar1;
	if (iParam0 != Local_196.f_67.f_17)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar1 = 500f;
	if (__LIB_0__::func_86(Local_365.f_118))
	{
		Local_365.f_118 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_365.f_118) > (550f * 550f))
	{
		if (Local_365.f_103 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_365.f_103, false);
		}
		Local_365.f_118 = { Var0 };
		Local_365.f_103 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_365.f_118, fVar1, 1f, 0.02f, false, true);
	}
}

int func_151(int iParam0, int iParam1)//Position - 0x35F0
{
	Stack.Push(Local_213.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_213.f_352.f_52);
	if (StackVal && StackVal)
	{
		__LIB_1__::func_518(&(Local_365.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x3629
{
	int iVar0;
	bool bVar1;
	int iVar2;
	func_110(1, iParam0);
	iVar0 = Local_196.f_67.f_1[iParam0 /*15*/].f_3;
	if (!__LIB_0__::func_799(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (__LIB_0__::func_86(Local_365.f_112))
	{
		if (func_147(iParam0, 15))
		{
		}
		else
		{
			if (__LIB_19__::func_602(iParam0, 35) && !func_147(iParam0, 24))
			{
				if (!__LIB_20__::func_381(Local_196.f_67.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
				{
					func_145(iParam0, 24);
				}
			}
			if (__LIB_19__::func_602(iParam0, 17) || func_147(iParam0, 24))
			{
				if (!func_284(iParam0, &(Local_365.f_112), &(Local_365.f_121)))
				{
					bVar1 = false;
				}
			}
			else if (__LIB_19__::func_602(iParam0, 25))
			{
				Stack.Push(iParam0);
				Stack.Push(&(Local_365.f_112));
				Stack.Push(&(Local_365.f_121));
				Call_Loc(Local_213.f_352.f_37);
				if (!StackVal)
				{
					bVar1 = false;
				}
			}
			else if (__LIB_19__::func_602(iParam0, 18))
			{
				if (!func_280(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (__LIB_19__::func_602(iParam0, 19))
			{
				if (!func_274(iParam0))
				{
					bVar1 = false;
				}
			}
			else
			{
				Local_365.f_112 = { Local_196.f_67.f_1[iParam0 /*15*/].f_4 };
				Local_365.f_121 = Local_196.f_67.f_1[iParam0 /*15*/].f_7;
			}
		}
	}
	if (bVar1)
	{
		if (!__LIB_19__::func_602(iParam0, 30))
		{
			__LIB_14__::func_588(Local_365.f_112, 30f, 0);
			MISC::CLEAR_AREA(Local_365.f_112, 30f, false, false, false, true);
		}
		if (__LIB_0__::func_957(&(Local_365.f_47[iParam0 /*8*/]), iVar0, Local_365.f_112, Local_365.f_121, 1, 1, 1, 0, 1, 1, 0, 0, Local_365.f_112.f_2 <= -100f, 0))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_365.f_47[iParam0 /*8*/]);
			func_153(iParam0, iVar2);
			func_84();
			return 1;
		}
	}
	else
	{
		func_84();
	}
	return 0;
}

void func_153(int iParam0, int iParam1)//Position - 0x380F
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!__LIB_32__::func_253(iParam0, iParam1))
	{
		__LIB_19__::func_605(iParam0, iParam1);
	}
	if (__LIB_20__::func_172(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, __LIB_19__::func_602(iParam0, 10));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, __LIB_19__::func_602(iParam0, 3));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, __LIB_19__::func_602(iParam0, 6));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, __LIB_19__::func_602(iParam0, 5));
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
	}
	if (__LIB_19__::func_602(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (__LIB_19__::func_602(iParam0, 25))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_365.f_112, false, false, true);
	}
	if (__LIB_19__::func_602(iParam0, 8))
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
		VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, false);
	}
	if (__LIB_19__::func_602(iParam0, 28))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_365.f_47[iParam0 /*8*/], true, true);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_147(iParam0, 14))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
		VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
		if (__LIB_20__::func_188(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, __LIB_19__::func_604(iParam0, iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
		}
		__LIB_19__::func_457(iParam1, iVar0);
		__LIB_1__::func_901(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
		VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, __LIB_19__::func_602(iParam0, 7), false);
		__LIB_19__::func_387(iParam0, iParam1);
		iVar1 = func_162(iParam0);
		if (iVar1 != -1 && func_161(iVar1) != -1)
		{
			__LIB_19__::func_267(NETWORK::NET_TO_ENT(Local_365.f_47[iParam0 /*8*/]), Local_365.f_155.f_1[func_161(iVar1) /*5*/].f_1);
		}
	}
	if (__LIB_19__::func_602(iParam0, 11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (__LIB_19__::func_602(iParam0, 32))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
		VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, true);
	}
	if (__LIB_19__::func_602(iParam0, 33))
	{
		VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
	}
	if (__LIB_19__::func_386(iParam1))
	{
		if (__LIB_19__::func_602(iParam0, 34))
		{
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, true, true);
		}
		else
		{
			VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, false, true);
		}
	}
	if (func_147(iParam0, 15))
	{
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			if (__LIB_19__::func_602(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1))
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
	if (func_147(iParam0, 15) || __LIB_19__::func_602(iParam0, 19))
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
	if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_196.f_67.f_1[iParam0 /*15*/].f_3))
	{
		__LIB_20__::func_275(iParam0, iParam1);
	}
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, true);
	__LIB_19__::func_456(iParam1);
	NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_365.f_47[iParam0 /*8*/], true);
	if (Local_213.f_352.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_352.f_43);
	}
}

int func_161(int iParam0)//Position - 0x3D56
{
	return Local_365.f_2.f_13[iParam0];
}

int func_162(int iParam0)//Position - 0x3D69
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (Local_365.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_274(int iParam0)//Position - 0x123BE
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (func_277(iParam0, &Var2, &Var1, &uVar0))
	{
		if (__LIB_32__::func_212(iParam0, Var2, Var1, uVar0))
		{
			Local_365.f_112 = { Var2 };
			Local_365.f_121 = __LIB_0__::func_932(Var2, Var1);
			return 1;
		}
	}
	return 0;
}

int func_277(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x12492
{
	float fVar0;
	fVar0 = 200f;
	if (func_147(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_196.f_67.f_1[iParam0 /*15*/].f_4 };
	}
	*uParam1 = { __LIB_1__::func_657(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_344) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_344) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + __LIB_19__::func_269());
	iLocal_344++;
	if (iLocal_344 >= 12)
	{
		iLocal_344 = 0;
	}
	return 1;
}

int func_280(int iParam0)//Position - 0x12575
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (func_282(iParam0, &Var1, &Var2, &fVar4, &uVar0))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var2, Var1, fVar4, &Var3))
		{
			if (__LIB_32__::func_213(iParam0, Var3, Var2, uVar0))
			{
				Local_365.f_112 = { Var3 };
				Local_365.f_121 = __LIB_0__::func_932(Var3, Var2);
				return 1;
			}
		}
	}
	return 0;
}

int func_282(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1263B
{
	if (func_147(iParam0, 15))
	{
	}
	else if (Local_213.f_352.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_196.f_67.f_1[iParam0 /*15*/].f_4 };
		*uParam2 = { Local_196.f_67.f_1[iParam0 /*15*/].f_4 };
	}
	if (iLocal_344 > 0)
	{
		__LIB_19__::func_606(uParam1);
	}
	if (!func_147(iParam0, 15) && Local_213.f_352.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_41);
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

bool func_284(int iParam0, var uParam1, var uParam2)//Position - 0x127CB
{
	struct<35> Var0;
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_285(Local_196.f_67.f_1[iParam0 /*15*/].f_4, Local_196.f_67.f_1[iParam0 /*15*/].f_4, Local_196.f_67.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_285(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x12816
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
		if (func_397(Param0))
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
		if (!uParam6->f_27 || (((((((__LIB_20__::func_53(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_20__::func_331(Param0, iParam2);
		}
		if (__LIB_20__::func_330(Param0))
		{
			__LIB_20__::func_331(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_20__::func_381(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_4__::func_986(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
					func_305(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
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
						func_300(Global_2667225.f_683, 0);
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
								if (__LIB_4__::func_985(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_19__::func_887(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_300(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_300(Global_2667225.f_683, 0);
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
			func_305(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
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

void func_300(struct<3> Param0, int iParam1)//Position - 0x13AE3
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
		func_300(Var0, iParam1 + 1);
	}
}

void func_305(var uParam0, var uParam1, var uParam2)//Position - 0x13CF7
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_354(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_306(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_306(var uParam0, var uParam1, var uParam2)//Position - 0x13D66
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
		if (func_350(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
																			if (!uParam2->f_15 || !func_350(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																							if (__LIB_20__::func_381(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_20__::func_381(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_19__::func_887(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_20__::func_382(Var1, uParam2->f_54, &fVar23);
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
																													func_314(Var1, fVar2, iVar14);
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
							func_312(0, uParam2);
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
						if (func_350(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
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

void func_312(int iParam0, var uParam1)//Position - 0x14AC6
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_312(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_312(iParam0 + 1, uParam1);
	}
}

void func_314(struct<3> Param0, float fParam1, int iParam2)//Position - 0x14B6C
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
			func_314(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_350(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x16531
{
	int iVar0;
	bool bVar1;
	if (func_397(Param0))
	{
		if (func_353(uParam1, bParam4, 0, 1, 1))
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

int func_353(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1677B
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
							if (func_353(&Var1, 0, 0, 0, 1))
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

int func_354(var uParam0, var uParam1, var uParam2)//Position - 0x16856
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
			if (func_350(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
								if (!uParam2->f_15 || !func_350(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
												if (__LIB_20__::func_381(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_20__::func_381(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_19__::func_887(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_20__::func_382(Var3, uParam2->f_54, &fVar12);
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
																		func_314(Var3, fVar4, iVar5);
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
					func_312(0, uParam2);
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

int func_397(struct<3> Param0)//Position - 0x1F94B
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
				if (!func_353(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_353(&Param0, 0, 1, 0, 1))
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
					if (!func_353(&Var1, 0, 0, 0, 1))
					{
						if (!func_353(&Param0, 0, 0, 0, 1))
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

int func_410(int iParam0)//Position - 0x1FCED
{
	if (!func_113(1, iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324))
	{
		return 0;
	}
	Stack.Push(Local_213.f_352.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_411(int iParam0)//Position - 0x1FD35
{
	int iVar0;
	if (Local_213.f_352.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_0__::func_937(&(Local_365.f_47[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::clearF_1Prop(&(Local_365.f_47[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

void func_413(int iParam0, int iParam1)//Position - 0x1FDAC
{
	if (Local_196.f_67.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (func_112(iParam0) > 2 && func_112(iParam0) < 5)
	{
		if (func_414(iParam0, iParam1))
		{
			func_145(iParam0, 2);
		}
		else
		{
			func_144(iParam0, 2);
		}
	}
}

bool func_414(int iParam0, int iParam1)//Position - 0x1FDFB
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = __LIB_19__::func_270(iParam1);
		if (iVar0 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			return func_415(iVar1, 2);
		}
	}
	return func_147(iParam0, 2);
}

bool func_415(int iParam0, int iParam1)//Position - 0x1FE42
{
	return __LIB_0__::func_316(&(Local_372[iParam0 /*35*/].f_1), iParam1);
}

void func_418(int iParam0, int iParam1)//Position - 0x1FEBE
{
	Local_365.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_419(int iParam0, int iParam1)//Position - 0x1FED3
{
	int iVar0;
	if (iParam1 != __LIB_19__::func_608())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (iParam0 == func_420(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_420(int iParam0)//Position - 0x1FF0E
{
	return Local_365.f_2.f_9[iParam0];
}

void func_426()//Position - 0x2010D
{
	func_427();
}

void func_427()//Position - 0x20119
{
	struct<20> Var0;
	if (!func_3(8))
	{
		if (__LIB_20__::func_191() > 0 && Local_310.f_0 > 0)
		{
			if (__LIB_19__::func_628(53))
			{
				Var0 = { __LIB_19__::func_609(__LIB_1__::func_730()) };
				if (__LIB_19__::func_565(__LIB_1__::func_730(), Local_365.f_129, &Var0))
				{
					func_16(8);
				}
			}
		}
	}
}

void func_436()//Position - 0x204A8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		func_448(iVar0);
		func_443(iVar0);
		iVar0++;
	}
	func_437();
}

void func_437()//Position - 0x204D5
{
	if (Local_196.f_19 <= 0)
	{
		return;
	}
	if (!func_442())
	{
		return;
	}
	Stack.Push(Local_213.f_114.f_36 != 0);
	Call_Loc(Local_213.f_114.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (__LIB_20__::func_193())
	{
		if (func_440())
		{
			func_8(5);
		}
	}
	else if (func_438())
	{
		func_8(5);
	}
}

int func_438()//Position - 0x20531
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_439(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_439(int iParam0, int iParam1)//Position - 0x2055D
{
	return __LIB_0__::func_316(&(Local_365.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_440()//Position - 0x20576
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (!func_439(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_442()//Position - 0x205B0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (!func_439(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_443(int iParam0)//Position - 0x205DD
{
	if (func_439(iParam0, 29) && func_446(iParam0))
	{
		if (func_445(iParam0))
		{
			func_444(iParam0, 29);
		}
	}
}

void func_444(int iParam0, int iParam1)//Position - 0x2060C
{
	if (__LIB_16__::func_758(&(Local_365.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_445(int iParam0)//Position - 0x20628
{
	int iVar0;
	if (func_446(iParam0))
	{
		iVar0 = func_420(iParam0);
		return (Local_365.f_47[iVar0 /*8*/].f_1 == 5 || func_439(iParam0, 0));
	}
	return 1;
}

bool func_446(int iParam0)//Position - 0x2065F
{
	return (func_447(iParam0) && __LIB_19__::func_608() == 2);
}

bool func_447(int iParam0)//Position - 0x20678
{
	return Local_365.f_2.f_9[iParam0] != -1;
}

void func_448(int iParam0)//Position - 0x2068D
{
	if (Local_196.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_23);
		if (StackVal)
		{
			if (!func_439(iParam0, 6))
			{
				if (__LIB_0__::func_799(Local_196.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PICKUPS(1))
					{
						if (func_450(iParam0))
						{
							func_449(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_449(int iParam0, int iParam1)//Position - 0x206EB
{
	if (__LIB_1__::func_458(&(Local_365.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_450(int iParam0)//Position - 0x20707
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_365.f_2[iParam0]))
	{
		Var0 = { func_484(iParam0) };
		fVar1 = Local_196.f_19.f_5[iParam0 /*13*/].f_6;
		Var2 = { Local_196.f_19.f_5[iParam0 /*13*/].f_7 };
		if (__LIB_0__::func_86(Var0))
		{
			return 0;
		}
		Local_365.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(__LIB_19__::func_611(iParam0), Var0, !__LIB_19__::func_610(iParam0, 0), Local_196.f_19.f_5[iParam0 /*13*/].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), fVar1);
		if (!__LIB_0__::func_86(Var2))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), Var2, 2, true);
		}
		func_476(iParam0, Var0);
		if (Local_213.f_114.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_114.f_30);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_365.f_2[iParam0]))
	{
		if (func_451(&(Local_365.f_2.f_13[iParam0]), 0, iParam0, __LIB_19__::func_391(iParam0), __LIB_13__::func_664(), __LIB_0__::func_109(iParam0), __LIB_0__::func_114(iParam0)))
		{
			__LIB_19__::func_267(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), Local_365.f_155.f_1[func_161(iParam0) /*5*/].f_1);
			Local_365.f_2.f_11[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
			return 1;
		}
	}
	return 0;
}

int func_451(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x2084E
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_471();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_365.f_155 != iParam4)
	{
		Local_365.f_155 = iParam4;
	}
	if (Local_365.f_155.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_365.f_155.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_365.f_155.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (__LIB_19__::func_878(&(Local_365.f_155.f_1[*uParam0 /*5*/]), iParam3, *uParam0, Local_365.f_155, &(Local_365.f_129), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_471()//Position - 0x2104C
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!__LIB_3__::func_487(Local_365.f_155.f_1[iVar1 /*5*/]))
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

void func_476(int iParam0, struct<3> Param1)//Position - 0x210AF
{
	if (func_447(iParam0))
	{
		func_449(iParam0, 29);
		if (iParam0 != func_481(func_420(iParam0)))
		{
			func_449(iParam0, 40);
		}
	}
	else if (!__LIB_19__::func_610(iParam0, 7))
	{
		func_449(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_365.f_2[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, true, false, true, true, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true);
	OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	if (__LIB_0__::func_114())
	{
		OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	}
	if (func_479(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	}
	else
	{
		func_449(iParam0, 28);
	}
	if (!__LIB_19__::func_610(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]));
	}
	if (__LIB_19__::func_610(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), Param1, true, false, false, true);
	}
	if (__LIB_19__::func_610(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	}
	if (__LIB_19__::func_610(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true);
	}
	if ((__LIB_19__::func_610(iParam0, 6) || __LIB_19__::func_610(iParam0, 7)) || func_447(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), false, false);
	}
	if (Local_196.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_449(iParam0, 23);
	}
	if (__LIB_20__::func_277(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true);
	}
	if (__LIB_19__::func_610(iParam0, 9) || Local_213.f_114.f_38 != 0)
	{
		func_477(iParam0, 1, 0);
	}
}

void func_477(int iParam0, bool bParam1, bool bParam2)//Position - 0x212F2
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), bParam1, bParam2);
}

bool func_479(int iParam0)//Position - 0x21334
{
	if (func_439(iParam0, 29))
	{
		return 0;
	}
	return !__LIB_19__::func_610(iParam0, 5);
}

int func_481(int iParam0)//Position - 0x2135C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (Local_365.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_484(int iParam0)//Position - 0x213CC
{
	if (__LIB_19__::func_612(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_446(iParam0))
	{
		return Local_196.f_67.f_1[func_420(iParam0) /*15*/].f_4 + __LIB_19__::func_392(iParam0, Local_196.f_67.f_1[func_420(iParam0) /*15*/].f_3);
	}
	return Local_196.f_19.f_5[iParam0 /*13*/].f_3;
}

int func_488()//Position - 0x21595
{
	return Local_365.f_82;
}

void func_489(int iParam0)//Position - 0x215A2
{
	Local_365.f_81 = iParam0;
}

int func_490()//Position - 0x215B1
{
	int iVar0;
	if (!func_686(__LIB_19__::func_461(), __LIB_19__::func_460()))
	{
		return 0;
	}
	if (!func_505())
	{
		return 0;
	}
	__LIB_0__::func_467();
	func_501();
	Local_365.f_93 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(__LIB_1__::func_834(), -1, 0);
	func_499();
	func_496();
	func_495();
	func_493();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_365.f_63[iVar0] = -1;
		iVar0++;
	}
	Local_365.f_97 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_365.f_90), &(Local_365.f_91));
	Global_1892703[iLocal_325 /*599*/].f_526 = Local_365.f_90;
	Global_1892703[iLocal_325 /*599*/].f_527 = Local_365.f_91;
	func_492();
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	Call_Loc(Local_213.f_1);
	return StackVal;
}

void func_492()//Position - 0x2167D
{
	if (Local_365.f_98 == -1)
	{
		Local_365.f_98 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_493()//Position - 0x21697
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		Local_365.f_22[iVar0 /*24*/].f_15 = __LIB_19__::func_613(iVar0);
		iVar0++;
	}
}

void func_495()//Position - 0x2171B
{
	Local_365.f_83 = 2;
}

void func_496()//Position - 0x21729
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		Local_365.f_2.f_13[iVar0] = -1;
		iVar0++;
	}
	func_497();
}

void func_497()//Position - 0x21756
{
	int iVar0;
	if (__LIB_0__::func_114())
	{
		if (func_25(&(Local_365.f_2.f_9), &(Local_365.f_63.f_3)))
		{
			func_16(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_19)
		{
			Local_365.f_2.f_9[iVar0] = Local_196.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

void func_499()//Position - 0x217B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		iVar3 = Local_196.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_196.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_145(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_196.f_38)
	{
		iVar2 = Local_196.f_38.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_147(iVar2, 15))
		{
			func_63(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_196.f_131)
		{
			if (Local_196.f_131.f_1[iVar5 /*10*/] == iVar1)
			{
				func_63(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
}

void func_501()//Position - 0x218A5
{
	Local_365.f_92 = __LIB_13__::func_61() + 1;
	Global_1892703[bLocal_324 /*599*/].f_10.f_391 = Local_365.f_92;
}

int func_505()//Position - 0x21919
{
	__LIB_0__::func_467();
	func_516();
	if (!__LIB_41__::func_83())
	{
		return 0;
	}
	__LIB_0__::func_467();
	Stack.Push(Local_213.f_0 != 0);
	Call_Loc(Local_213.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

void func_516()//Position - 0x21C60
{
	if (__LIB_19__::func_628(21))
	{
		return;
	}
	func_517();
	__LIB_19__::func_614(21);
}

void func_517()//Position - 0x21C7E
{
	Local_213.f_13 = 184602/*func_668*/;
	Local_213.f_2 = 184593/*__LIB_0__::func_109*/;
	Local_213.f_465.f_4 = 184313/*func_664*/;
	Local_213.f_10 = 143280/*func_580*/;
	Local_213.f_11.f_1 = 140750/*func_554*/;
	Local_213.f_11 = 140626/*__LIB_20__::func_281*/;
	Local_213.f_515.f_3 = 140111/*func_547*/;
	Local_213.f_515 = 140102/*__LIB_0__::func_109*/;
	Local_213.f_515.f_1 = 140063/*func_545*/;
	Local_213.f_515.f_4 = 139996/*func_543*/;
	Local_213.f_515.f_2 = 139986/*__LIB_19__::func_622*/;
	Local_213.f_352.f_45 = 139543/*func_535*/;
	Local_213.f_352.f_36 = 139534/*__LIB_15__::func_529*/;
	Local_213.f_352.f_43 = 139508/*__LIB_19__::func_620*/;
	Local_213.f_352.f_44 = 139325/*func_530*/;
	Local_213.f_456 = 139290/*func_529*/;
	Local_213.f_456.f_1 = 139252/*__LIB_32__::func_217*/;
	Local_213.f_47.f_2.f_1 = 139212/*func_527*/;
	Local_213.f_47.f_2.f_2 = 139172/*func_526*/;
	Local_213.f_114.f_31 = 138961/*__LIB_41__::func_85*/;
	Local_213.f_114.f_13 = 138949/*func_521*/;
	Local_213.f_102.f_6 = 138817/*func_520*/;
	Local_213.f_54.f_6 = 138734/*func_519*/;
	Local_213.f_54.f_7 = 138642/*func_518*/;
}

int func_518(bool bParam0)//Position - 0x21D92
{
	if (bParam0)
	{
		if (__LIB_12__::func_486(bLocal_324, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_326, NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
				{
					return 500;
				}
			}
		}
		else
		{
			return 500;
		}
	}
	return 0;
}

int func_519(bool bParam0)//Position - 0x21DEE
{
	if (bParam0)
	{
		if (__LIB_12__::func_486(bLocal_324, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_326, NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_0__::func_797()), NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
				{
					return 5000;
				}
			}
		}
	}
	return 0;
}

int func_520()//Position - 0x21E41
{
	if (!__LIB_19__::func_628(11))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[0 /*8*/]))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_365.f_47[0 /*8*/])))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_47[0 /*8*/]))
		{
			if (__LIB_0__::func_937(&uLocal_373, 2000, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_326, NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
				{
					__LIB_6__::func_843(&(Local_365.f_47[0 /*8*/]));
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_521(var uParam0)//Position - 0x21EC5
{
	return "TR_BLIP_CVEH" /* GXT: Customer Vehicle */;
}

char* func_526(var uParam0)//Position - 0x21FA4
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "TR_TIC_CUSDELR" /* GXT: ~a~ delivered the customer vehicle. */;
			}
		default:
	}
	return "";
}

char* func_527(var uParam0)//Position - 0x21FCC
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "TR_TIC_CUSDELL" /* GXT: You delivered the customer vehicle. */;
			}
		default:
	}
	return "";
}

char* func_529(int iParam0)//Position - 0x2201A
{
	switch (iParam0)
	{
		case 0:
			return "TR_HT_ASDEL" /* GXT: The customer will pay the full service cost for all modifications but the additional bonus payment will reduce if the vehicle has been damaged upon delivery. */;
			break;
	}
	return "";
}

int func_530(int iParam0, var uParam1)//Position - 0x2203D
{
	if (iParam0 == 0)
	{
		*uParam1 = { __LIB_14__::func_199(__LIB_14__::func_389()) };
		return 1;
	}
	return 0;
}

void func_535(int iParam0, int iParam1, var uParam2, bool bParam3, var uParam4)//Position - 0x22117
{
	if (func_488() != 0)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING() && iParam0 == 0)
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_365.f_47[0 /*8*/]), true, true);
		}
	}
	if (func_488() == 0)
	{
		if ((iParam0 == 0 && uParam2) && (__LIB_0__::func_797() == bLocal_324 || !__LIB_12__::func_486(bLocal_324, 0)))
		{
			if (!iLocal_375)
			{
				if (!bParam3 && !func_541(0))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_326, iParam1, 20000, -1, 2f, 16, 0);
					iLocal_375 = 1;
					func_540(0);
				}
			}
			else if (!iLocal_376)
			{
				if (!__LIB_3__::func_559() && !__LIB_0__::func_833())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (__LIB_3__::func_99(&uLocal_373, 2000, 0))
						{
							__LIB_20__::func_280(800);
							iLocal_376 = 1;
						}
					}
				}
			}
		}
	}
}

void func_540(int iParam0)//Position - 0x222A9
{
	if (__LIB_1__::func_458(&(Local_365.f_122), iParam0))
	{
	}
}

bool func_541(int iParam0)//Position - 0x222BF
{
	return __LIB_0__::func_316(&(Local_365.f_122), iParam0);
}

int func_543()//Position - 0x222DC
{
	int iVar0;
	if (func_544() >= 1)
	{
		iVar0 += 400;
	}
	if (func_544() >= 2)
	{
		iVar0 += 320;
	}
	if (func_544() >= 3)
	{
		iVar0 += 240;
	}
	return iVar0;
}

int func_544()//Position - 0x22312
{
	return Local_365.f_154;
}

int func_545()//Position - 0x2231F
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[0 /*8*/]))
	{
		return NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]);
	}
	return -1;
}

int func_547()//Position - 0x2234F
{
	return func_548(func_550());
}

int func_548(int iParam0)//Position - 0x2235F
{
	switch (__LIB_14__::func_37(iParam0))
	{
		case 1:
			return Global_262145.f_31124 /* Tunable: 57116119 */;
		case 2:
			return Global_262145.f_31125 /* Tunable: 856543826 */;
		case 3:
			return Global_262145.f_31126 /* Tunable: 1457082947 */;
		default:
	}
	return 0;
}

int func_550()//Position - 0x22543
{
	return Local_365.f_124.f_2;
}

void func_554()//Position - 0x225CE
{
	func_556(0, 1, 2, 3, 4, 143257/*func_579*/, 143235/*func_578*/, 141389/*func_564*/, 141381/*__LIB_0__::func_467*/, 1);
	__LIB_19__::func_625(4, 48, 141381/*__LIB_0__::func_467*/);
}

void func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2261F
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
	__LIB_19__::func_625(iVar0, 22, iParam5);
	__LIB_19__::func_627(iVar0, iParam4, 141212/*func_559*/);
	__LIB_19__::func_626(iVar0, iVar1);
	__LIB_19__::func_626(iVar0, iVar4);
	__LIB_19__::func_626(iVar0, iVar5);
	__LIB_19__::func_626(iVar0, iVar2);
	__LIB_19__::func_625(iVar1, 24, iParam6);
	__LIB_19__::func_627(iVar1, iParam4, 141212/*func_559*/);
	__LIB_19__::func_626(iVar1, iVar4);
	__LIB_19__::func_626(iVar1, iVar5);
	__LIB_19__::func_626(iVar1, iVar2);
	__LIB_19__::func_625(iVar2, 25, iParam7);
	__LIB_19__::func_627(iVar2, iParam4, 141212/*func_559*/);
	__LIB_19__::func_626(iVar2, iVar1);
	__LIB_19__::func_626(iVar2, iVar4);
	__LIB_19__::func_626(iVar2, iVar5);
	__LIB_19__::func_625(iVar3, 23, iParam8);
	__LIB_19__::func_627(iVar3, iParam4, 141212/*func_559*/);
	__LIB_19__::func_626(iVar3, iVar1);
	__LIB_19__::func_626(iVar3, iVar4);
	__LIB_19__::func_626(iVar3, iVar5);
	__LIB_19__::func_626(iVar3, iVar2);
}

int func_559()//Position - 0x2279C
{
	if (func_560(0))
	{
		return 1;
	}
	return 0;
}

int func_560(bool bParam0)//Position - 0x227B1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (!func_561(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_561(int iParam0, bool bParam1)//Position - 0x227DF
{
	if (func_439(iParam0, 4) || func_439(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_562(iParam0, iLocal_328, 6) || func_562(iParam0, iLocal_328, 9))
		{
			return 1;
		}
	}
	return 0;
}

bool func_562(int iParam0, int iParam1, int iParam2)//Position - 0x2282A
{
	return __LIB_0__::func_316(&(Local_372[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_564()//Position - 0x2284D
{
	__LIB_19__::func_883("TCD_OT_HDELI" /* GXT: Help deliver the ~a~~s~ to the ~HUD_COLOUR_YELLOW~customer.~s~ */, func_577(), 1, 0);
}

char* func_577()//Position - 0x22D66
{
	switch (func_550())
	{
		case joaat("weevil"):
			return "WEEVIL_TCD" /* GXT: Weevil */;
		case joaat("brioso2"):
			return "BRIOSO2_TCD" /* GXT: Brioso 300 */;
		case joaat("rhapsody"):
			return "RHAPSODY_TCD" /* GXT: Rhapsody */;
		case joaat("club"):
			return "CLUB_TCD" /* GXT: Club */;
		case joaat("issi3"):
			return "ISSI3_TCD" /* GXT: Issi Classic */;
		case joaat("nebula"):
			return "NEBULA_TCD" /* GXT: Nebula Turbo */;
		case joaat("dynasty"):
			return "DYNASTY_TCD" /* GXT: Dynasty */;
		case joaat("fagaloa"):
			return "FAGALOA_TCD" /* GXT: Fagaloa */;
		case joaat("futo"):
			return "FUTO_TCD" /* GXT: Futo */;
		case joaat("asbo"):
			return "ASBO_TCD" /* GXT: Asbo */;
		case joaat("sentinel"):
			return "SENTINEL3_TCD" /* GXT: Sentinel Classic */;
		case joaat("dominator3"):
			return "DOMINATOR3_TCD" /* GXT: Dominator GTX */;
		case joaat("vamos"):
			return "VAMOS_TCD" /* GXT: Vamos */;
		case joaat("hermes"):
			return "HERMES_TCD" /* GXT: Hermes */;
		case joaat("coquette3"):
			return "COQUETTE3_TCD" /* GXT: Coquette BlackFin */;
		case joaat("riata"):
			return "RIATA_TCD" /* GXT: Riata */;
		case joaat("everon"):
			return "EVERON_TCD" /* GXT: Everon */;
		case joaat("glendale2"):
			return "GLENDALE2_TCD" /* GXT: Glendale Custom */;
		case joaat("schafter3"):
			return "SCHAFTER3_TCD" /* GXT: Schafter V12 */;
		case joaat("warrener"):
			return "WARRENER_TCD" /* GXT: Warrener */;
		case joaat("primo2"):
			return "PRIMO2_TCD" /* GXT: Primo Custom */;
		case joaat("seminole2"):
			return "SEMINOLE2_TCD" /* GXT: Seminole Frontier */;
		case joaat("rebla"):
			return "REBLA_TCD" /* GXT: Rebla GTS */;
		case joaat("swinger"):
			return "SWINGER_TCD" /* GXT: Swinger */;
		case joaat("flashgt"):
			return "FLASHGT_TCD" /* GXT: Flash GT */;
		case joaat("raiden"):
			return "RAIDEN_TCD" /* GXT: Raiden */;
		case joaat("surano"):
			return "SURANO_CON_TCD";
		case joaat("penumbra2"):
			return "PENUMBRA2_TCD" /* GXT: Penumbra FF */;
		case joaat("vstr"):
			return "VSTR_TCD" /* GXT: V-STR */;
		case joaat("jugular"):
			return "jugular_TCD" /* GXT: Jugular */;
		case joaat("toros"):
			return "TOROS_TCD" /* GXT: Toros */;
		case joaat("entity2"):
			return "ENTITY2_TCD" /* GXT: Entity XXR */;
		case joaat("tempesta"):
			return "TEMPESTA_TCD" /* GXT: Tempesta */;
		case joaat("thrax"):
			return "THRAX_TCD" /* GXT: Thrax */;
		case joaat("sc1"):
			return "SC1_TCD" /* GXT: SC1 */;
		case joaat("gp1"):
			return "GP1_TCD" /* GXT: GP1 */;
		case joaat("cheetah2"):
			return "CHEETAH2_TCD" /* GXT: Cheetah Classic */;
		case joaat("neo"):
			return "NEO_TCD" /* GXT: Neo */;
		case joaat("comet2"):
			return "COMET2_TCD" /* GXT: Pfister Comet */;
		case joaat("paragon"):
			return "PARAGON_TCD" /* GXT: Paragon R */;
		default:
	}
	return "";
}

void func_578()//Position - 0x22F83
{
	__LIB_19__::func_883("TCD_OT_DELI" /* GXT: Deliver the ~a~~s~ to the ~HUD_COLOUR_YELLOW~customer.~s~ */, func_577(), 1, 0);
}

void func_579()//Position - 0x22F99
{
	__LIB_19__::func_883("TCD_OT_ENTER" /* GXT: Enter the ~a~.~s~ */, func_577(), 9, 0);
}

void func_580()//Position - 0x22FB0
{
	func_661();
	if (__LIB_19__::func_628(11))
	{
		if (!__LIB_12__::func_486(bLocal_324, 0))
		{
			func_655();
			func_653();
			func_581(34, -1, -1, -1, 1065353216);
		}
	}
	Global_1973252.f_68 = 0;
}

void func_581(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x22FEE
{
	int iVar0;
	if (!__LIB_9__::func_18(iParam0))
	{
		return;
	}
	iVar0 = __LIB_9__::func_17(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_137(32249, -1))
			{
				__LIB_0__::func_186(32249, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 1:
			if (!__LIB_0__::func_137(32250, -1))
			{
				__LIB_0__::func_186(32250, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 2:
			if (!__LIB_0__::func_137(32251, -1))
			{
				__LIB_0__::func_186(32251, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 3:
			if (!__LIB_0__::func_137(32252, -1))
			{
				__LIB_0__::func_186(32252, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 4:
			if (!__LIB_0__::func_137(32253, -1))
			{
				__LIB_0__::func_186(32253, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 5:
			if (!__LIB_0__::func_137(32254, -1))
			{
				__LIB_0__::func_186(32254, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 6:
			if (!__LIB_0__::func_137(32255, -1))
			{
				__LIB_0__::func_186(32255, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 7:
			if (!__LIB_0__::func_137(32256, -1))
			{
				__LIB_0__::func_186(32256, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 8:
			if (!__LIB_0__::func_137(32257, -1))
			{
				__LIB_0__::func_186(32257, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 9:
			if (!__LIB_0__::func_137(32258, -1))
			{
				__LIB_0__::func_186(32258, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 10:
			if (__LIB_0__::func_137(32249, -1))
			{
				if (!__LIB_0__::func_137(32259, -1))
				{
					__LIB_0__::func_186(32259, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_137(32250, -1))
			{
				if (!__LIB_0__::func_137(32260, -1))
				{
					__LIB_0__::func_186(32260, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_137(32251, -1))
			{
				if (!__LIB_0__::func_137(32261, -1))
				{
					__LIB_0__::func_186(32261, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_137(32252, -1))
			{
				if (!__LIB_0__::func_137(32262, -1))
				{
					__LIB_0__::func_186(32262, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_137(32253, -1))
			{
				if (!__LIB_0__::func_137(32263, -1))
				{
					__LIB_0__::func_186(32263, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 15:
			if (!__LIB_0__::func_137(32264, -1))
			{
				__LIB_0__::func_186(32264, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 16:
			if (__LIB_0__::func_137(32254, -1))
			{
				if (!__LIB_0__::func_137(32265, -1))
				{
					__LIB_0__::func_186(32265, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 17:
			if (__LIB_0__::func_137(32255, -1))
			{
				if (!__LIB_0__::func_137(32266, -1))
				{
					__LIB_0__::func_186(32266, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 18:
			if (__LIB_0__::func_137(32256, -1))
			{
				if (!__LIB_0__::func_137(32267, -1))
				{
					__LIB_0__::func_186(32267, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_582(iVar0, iParam0, iParam3, fParam4);
			break;
		case 24:
		case 25:
		case 26:
			func_582(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_582(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 32:
		case 33:
		case 34:
		case 35:
			func_582(iVar0, iParam0, iParam3, 1065353216);
			break;
	}
}

void func_582(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x23479
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if ((((iParam0 <= 0 || PLAYER::PLAYER_ID() == __LIB_0__::getMinusOneOrNull()) || Global_262145.f_31078 /* Tunable: -1782032913 */) || __LIB_9__::func_128() >= __LIB_13__::func_688()) || !__LIB_1__::func_687(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fParam3));
	}
	iVar0 = __LIB_9__::func_128();
	iVar1 = __LIB_9__::func_127(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = __LIB_13__::func_688();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = __LIB_9__::func_127(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	__LIB_1__::func_354(9834, iVar2, -1, 1, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_1 = iVar2;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_2 = iVar5;
	__LIB_14__::func_456(iParam0, iVar5, bVar4, iParam1, uParam2);
	__LIB_1__::func_875(107, iVar5, -1);
	if (bVar4)
	{
		func_583(iVar1, iVar5);
	}
}

void func_583(int iParam0, int iParam1)//Position - 0x23570
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		__LIB_9__::func_14(&iVar1, &iVar2, iVar0);
		if (__LIB_13__::func_687(iVar1))
		{
			__LIB_19__::func_493(iVar1);
			__LIB_40__::func_611(iVar1, 1);
			__LIB_9__::func_6(iVar1);
		}
		if (__LIB_13__::func_687(iVar2))
		{
			__LIB_19__::func_493(iVar2);
			__LIB_40__::func_611(iVar2, 1);
			__LIB_9__::func_6(iVar2);
		}
		__LIB_16__::func_575(iVar0);
		__LIB_11__::func_817("CCR_INC_TCK" /* GXT: LS Car Meet reputation increased: Level ~1~. */, iVar0, 1);
		iVar0++;
	}
	__LIB_40__::func_594();
}

void func_653()//Position - 0x2CD01
{
	int iVar0;
	iVar0 = __LIB_1__::func_677(112, -1);
	iVar0++;
	__LIB_1__::func_875(112, iVar0, -1);
}

void func_655()//Position - 0x2CD4D
{
	MISC::SET_BIT(&(Global_1976948.f_14), 20);
	if (iLocal_377 == 0)
	{
		if (Local_365.f_124.f_3 == 0)
		{
			Global_1976948.f_18 = 0;
		}
		else if (Local_365.f_124.f_3 > 0)
		{
			Global_1976948.f_18 = 1;
		}
		else
		{
			Global_1976948.f_18 = 2;
		}
	}
	else if (iLocal_377 > 0 && func_656())
	{
		if (Local_365.f_124.f_3 == 0)
		{
			Global_1976948.f_18 = 3;
		}
		else if (Local_365.f_124.f_3 > 0)
		{
			Global_1976948.f_18 = 4;
		}
		else
		{
			Global_1976948.f_18 = 5;
		}
	}
	else if (iLocal_377 > 0 && !func_656())
	{
		if (Local_365.f_124.f_3 == 0)
		{
			Global_1976948.f_18 = 6;
		}
		else if (Local_365.f_124.f_3 > 0)
		{
			Global_1976948.f_18 = 7;
		}
		else
		{
			Global_1976948.f_18 = 8;
		}
	}
	if (Global_1976948.f_18 != -1)
	{
		Global_1976948.f_17 = 1;
	}
}

int func_656()//Position - 0x2CE36
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = func_547();
	iVar1 = (iVar0 - __LIB_41__::func_84());
	fVar2 = ((IntToFloat(iVar1) * 100f) / IntToFloat(iVar0));
	if (fVar2 > 80f && fVar2 <= 100f)
	{
		return 1;
	}
	return 0;
}

void func_661()//Position - 0x2CEFF
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !__LIB_12__::func_486(bLocal_324, 0))
	{
		Local_365.f_124.f_4 = __LIB_14__::func_902(func_550());
	}
	Global_1973252.f_1 = func_662();
	Global_1973252 = func_662();
	Global_1973252.f_2 = 3;
	Global_1973252.f_7[0] = func_547();
	Global_1973252.f_7[1] = Local_365.f_124.f_4;
	Global_1973252.f_11 = -__LIB_41__::func_84();
	Global_1973252.f_21[0 /*11*/].f_9 = Local_365.f_124.f_3;
	Global_1973252.f_5 = func_550();
}

int func_662()//Position - 0x2CF88
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (!func_439(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_664(int iParam0)//Position - 0x2CFF9
{
	if (iParam0 == 0)
	{
		switch (func_666())
		{
			case 0:
				switch (func_665())
				{
					case 0:
						return 773;
					case 1:
						return 774;
					case 2:
						return 775;
					case 3:
						return 776;
					case 4:
						return 777;
					case 5:
						return 778;
					case 6:
						return 779;
					case 7:
						return 780;
					default:
				}
				break;
			case 1:
				switch (func_665())
				{
					case 8:
						return 781;
					case 9:
						return 782;
					case 10:
						return 783;
					case 11:
						return 784;
					case 12:
						return 785;
					case 13:
						return 786;
					case 14:
						return 787;
					case 15:
						return 788;
					default:
				}
				break;
			}
	}
	return 0;
}

int func_665()//Position - 0x2D0F5
{
	return Local_365.f_124.f_1;
}

int func_666()//Position - 0x2D104
{
	return Local_365.f_124;
}

void func_668()//Position - 0x2D11A
{
	int iVar0;
	struct<3> Var1;
	Local_196.f_19 = 1;
	Local_196.f_19.f_5[0 /*13*/].f_10 = 0;
	Local_196.f_19.f_5[0 /*13*/].f_2 = joaat("prop_drug_package");
	iVar0 = 0;
	while (true)
	{
		if (__LIB_12__::func_486(bLocal_324, 0))
		{
			__LIB_3__::func_817(func_682(__LIB_0__::func_797()), iVar0, &(Local_196.f_19.f_5[0 /*13*/].f_3), &(Local_196.f_19.f_5[0 /*13*/].f_6));
		}
		else
		{
			__LIB_3__::func_817(func_682(bLocal_324), iVar0, &(Local_196.f_19.f_5[0 /*13*/].f_3), &(Local_196.f_19.f_5[0 /*13*/].f_6));
		}
		if (!__LIB_20__::func_381(Local_196.f_19.f_5[0 /*13*/].f_3, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			if (iVar0 < 3)
			{
				iVar0++;
			}
		else
		{
			}
			else
			{
				Jump @213; //curOff = 207
			}
			Local_196.f_67 = 1;
			Local_196.f_67.f_1[0 /*15*/].f_4 = { Local_196.f_19.f_5[0 /*13*/].f_3 };
			Local_196.f_67.f_1[0 /*15*/].f_7 = Local_196.f_19.f_5[0 /*13*/].f_6;
			Local_196.f_67.f_1[0 /*15*/].f_3 = func_550();
			Var1 = { __LIB_32__::func_218(func_664(0)) };
			Local_196.f_111.f_1[0 /*7*/] = 1;
			Local_196.f_111.f_1[0 /*7*/].f_1 = { func_669(Var1, 55f, 0) };
			Local_196.f_111.f_1[0 /*7*/].f_4 = { func_669(Var1, 55f, 1) };
			Local_196.f_111 = 1;
			Local_196.f_102 = 30;
			Local_196.f_102.f_1 = 2;
		}
Vector3 func_669(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x2D298
{
	if (bParam2)
	{
		return Param0 + Vector(fParam1, fParam1, fParam1);
	}
	return Param0 - Vector(fParam1, fParam1, fParam1);
}

int func_682(bool bParam0)//Position - 0x2E96E
{
	int iVar0;
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		iVar0 = __LIB_1__::func_605(bParam0);
		if (iVar0 != 0)
		{
			return __LIB_1__::func_604(iVar0);
		}
	}
	return -1;
}

int func_686(var uParam0, var uParam1)//Position - 0x2EA0A
{
	Local_365.f_124 = uParam0;
	Local_365.f_124.f_1 = uParam1;
	Local_365.f_124.f_2 = __LIB_14__::func_45(__LIB_14__::func_389());
	return 1;
}

void func_693()//Position - 0x2EAAE
{
	if (Local_213.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_213.f_3.f_2.f_1);
	}
	if (Local_213.f_102.f_6 != 0)
	{
		Call_Loc(Local_213.f_102.f_6);
		if (StackVal)
		{
			return;
		}
	}
	if (__LIB_19__::func_640())
	{
		return;
	}
	if (!__LIB_0__::func_109())
	{
		return;
	}
	if (__LIB_19__::func_628(46))
	{
		return;
	}
	if (!__LIB_0__::func_109())
	{
		return;
	}
	func_873();
	func_869();
	func_733();
	func_697();
	__LIB_20__::func_316();
}

void func_697()//Position - 0x2EB9D
{
	int iVar0;
	if (func_415(iLocal_328, 0))
	{
		return;
	}
	if (func_488() != 0)
	{
		if (iLocal_112 == -1 && __LIB_19__::func_628(11))
		{
			if (__LIB_14__::func_389() != -1)
			{
				Local_365.f_124.f_3 = __LIB_14__::func_38(__LIB_14__::func_389());
			}
			iLocal_377 = __LIB_41__::func_84();
			iLocal_112 = (((func_547() + __LIB_14__::func_902(func_550())) - __LIB_41__::func_84()) + Local_365.f_124.f_3);
			if (iLocal_112 < 0)
			{
				iLocal_112 = 0;
			}
		}
		if (iLocal_112 == -1)
		{
			iLocal_112 = 0;
		}
		func_699(iLocal_112, 3, &(Global_1973252.f_68), __LIB_19__::func_628(11), -1);
		if (Global_1973252.f_68 == 2 || Global_1973252.f_68 == 3)
		{
			func_698(0);
		}
		iVar0 = __LIB_14__::func_389();
		if (iVar0 < 0 || iVar0 >= 2)
		{
			func_698(0);
		}
	}
}

void func_698(int iParam0)//Position - 0x2EC67
{
	if (__LIB_1__::func_458(&(Local_372[iLocal_327 /*35*/].f_1), iParam0))
	{
	}
}

void func_699(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x2EC82
{
	int iVar0;
	iVar0 = __LIB_14__::func_389();
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (iVar0 < 0 || iVar0 >= 2)
	{
		return;
	}
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	if (!__LIB_0__::func_112())
	{
		if (iParam0 > 0)
		{
			MONEY::NETWORK_EARN_AUTOSHOP_BUSINESS(iParam0, MISC::GET_HASH_KEY(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_14__::func_45(iVar0))));
		}
		if (bParam3)
		{
			__LIB_39__::func_347(iVar0);
		}
		__LIB_30__::func_159(iVar0);
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
		}
		__LIB_1__::func_333(1490700264, 10, 0);
		*uParam2 = 2;
	}
	else if (iParam0 <= 0 || func_700(iVar0, iParam0, iParam1, uParam2))
	{
		if (*uParam2 == 2 || iParam0 <= 0)
		{
			if (bParam3)
			{
				__LIB_39__::func_347(iVar0);
			}
			__LIB_30__::func_159(iVar0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
			}
			__LIB_1__::func_333(1490700264, 10, 0);
			*uParam2 = 2;
		}
		else if (*uParam2 == 3)
		{
			*uParam2 = 3;
		}
	}
}

bool func_700(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2ED7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (*uParam3 != 0 && *uParam3 != 1)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			iVar5 = __LIB_1__::func_360(__LIB_13__::func_207(iParam0), -1, 0);
			iVar0 = __LIB_29__::func_156(iVar5);
			if (iVar0 == 0)
			{
				iVar6 = __LIB_1__::func_360(__LIB_13__::func_652(iParam0), -1, 0);
				switch (iVar6)
				{
					case 1:
						iVar0 = joaat("weevil");
						break;
					case 2:
						iVar0 = joaat("sentinel");
						break;
					case 3:
						iVar0 = joaat("toros");
						break;
					}
			}
			iVar1 = __LIB_14__::func_154(iParam0);
			iVar2 = __LIB_14__::func_153(__LIB_14__::func_37(iVar0), iParam0);
			iVar3 = __LIB_29__::func_155(iParam0);
			switch (iParam2)
			{
				case 0:
					iVar4 = joaat("CF_ATTACKED");
					break;
				case 1:
					iVar4 = joaat("CF_MISSION_STARTED");
					break;
				case 2:
					iVar4 = joaat("CF_MISSION_FAILED");
					break;
				case 3:
					iVar4 = joaat("CF_TUNER_MISSION_PASSED");
					break;
			}
			if (iParam2 == 0 || __LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar2, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, 0, 1, 4, iVar1, 3))
			{
				if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar3, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iVar5, 0, 1, 4, 0, 3))
				{
					if (__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), iVar4, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, iParam1, 0, 4, iVar3, 3))
					{
						*uParam3 = 1;
					}
					else
					{
						*uParam3 = 3;
					}
				}
				else
				{
					*uParam3 = 3;
				}
			}
			else
			{
				*uParam3 = 3;
			}
			if (*uParam3 == 1 && __LIB_12__::func_387())
			{
			}
			else
			{
				*uParam3 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					if (iParam1 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						MONEY::NETWORK_EARN_AUTOSHOP_BUSINESS(iParam1, MISC::GET_HASH_KEY(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_14__::func_45(iParam0))));
					}
					*uParam3 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam3 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam3 != 1;
}

void func_733()//Position - 0x30652
{
	if (!__LIB_19__::func_628(8))
	{
		if (func_867())
		{
			if (__LIB_41__::func_87(0, 1, 1) && func_788())
			{
				func_734();
				__LIB_19__::func_614(8);
			}
		}
		else
		{
			__LIB_19__::func_614(8);
		}
	}
}

void func_734()//Position - 0x30691
{
	if (!__LIB_19__::func_628(11))
	{
		__LIB_20__::func_387(89, func_787(), func_786(), func_785(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
}

char* func_785()//Position - 0x31B20
{
	return "TCD_BM_TITLE" /* GXT: AUTO SHOP SERVICE */;
}

char* func_786()//Position - 0x31B2C
{
	return "TCD_BM_FAIL" /* GXT: The ~a~ was not delivered */;
}

char* func_787()//Position - 0x31B38
{
	return func_577();
}

bool func_788()//Position - 0x31B44
{
	return (func_790() || __LIB_0__::func_114());
}

bool func_790()//Position - 0x31B63
{
	return (func_415(iLocal_328, 3) || __LIB_19__::func_462(bLocal_324));
}

int func_867()//Position - 0x32CF6
{
	if (func_488() == 2 && __LIB_1__::func_726(Local_334.f_0) != 3)
	{
		return 0;
	}
	if (__LIB_19__::func_628(11))
	{
		if (__LIB_19__::func_591(24) || __LIB_19__::func_591(23))
		{
			return 0;
		}
	}
	return 1;
}

void func_869()//Position - 0x32F7E
{
	int iVar0;
	if (func_415(iLocal_328, 25))
	{
		return;
	}
	if (__LIB_12__::func_311())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_20__::func_191())
	{
		if (Local_365.f_155.f_1[iVar0 /*5*/].f_1 != -1)
		{
			__LIB_19__::func_286(Local_365.f_155.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_698(25);
}

void func_873()//Position - 0x33089
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_196.f_19)
	{
		func_1066(iVar4);
		bVar0 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = NETWORK::NET_TO_ENT(Local_365.f_2[iVar4]);
			bVar1 = ENTITY::IS_ENTITY_DEAD(iVar3, false);
			if (Local_213.f_114.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_213.f_114.f_34);
			}
			if (!bVar1)
			{
				func_1061(iVar4, iVar3);
				func_1060(iVar4, iVar3);
				func_1041(iVar4, iVar3, &bVar2, &iVar5);
				func_1036(iVar4, iVar3);
				func_1023(iVar4, iVar3, bVar2);
				func_1018(iVar4, iVar3);
			}
			func_1016(iVar4);
			func_1003(iVar4, Local_310.f_11);
			func_932(iVar4);
		}
		else
		{
			Local_290[iVar4 /*7*/].f_1 = 99999f;
			Local_290[iVar4 /*7*/].f_2 = 99999f;
			Local_290[iVar4 /*7*/].f_3 = 99999f;
		}
		func_923(iVar4, bVar0);
		iVar4++;
	}
	if (bVar2)
	{
		__LIB_19__::func_465(1);
	}
	else
	{
		func_915(0, 0);
		__LIB_19__::func_465(0);
	}
	func_905();
	func_875();
	iLocal_354++;
	if (iLocal_354 >= __LIB_19__::func_586())
	{
		iLocal_354 = 0;
		__LIB_19__::func_858();
	}
}

void func_875()//Position - 0x331E7
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iLocal_354]))
	{
		iVar2 = NETWORK::NET_TO_ENT(Local_365.f_2[iLocal_354]);
		bVar1 = ENTITY::IS_ENTITY_DEAD(iVar2, false);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, false) };
		if (!bVar1)
		{
			func_896(iLocal_354, Var0);
			if (__LIB_0__::func_937(&(Local_290.f_12), 5000, 0))
			{
				if (iLocal_354 == 0)
				{
					Local_290.f_14 = 1;
				}
				func_876(iLocal_354, iVar2, Var0);
			}
		}
	}
}

void func_876(int iParam0, int iParam1, struct<3> Param2)//Position - 0x3325F
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
		if (!__LIB_1__::func_561(Local_365.f_2[iParam0]))
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

void func_896(int iParam0, struct<3> Param1)//Position - 0x35957
{
	Local_290[iParam0 /*7*/].f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_329, __LIB_19__::func_630(iParam0));
	Local_290[iParam0 /*7*/].f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, func_897(), __LIB_19__::func_630(iParam0));
	Local_290[iParam0 /*7*/].f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_196.f_19.f_5[iParam0 /*13*/].f_3, __LIB_19__::func_630(iParam0));
}

Vector3 func_897()//Position - 0x359BB
{
	if (Local_213.f_465.f_4.f_2 != 0)
	{
		Call_Loc(Local_213.f_465.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return __LIB_19__::func_873(func_903());
}

int func_903()//Position - 0x35B4F
{
	if (Local_213.f_465.f_4.f_1 != 0)
	{
		Call_Loc(Local_213.f_465.f_4.f_1);
		return StackVal;
	}
	if (iLocal_327 != -1)
	{
		return Local_310.f_1[Local_372[iLocal_327 /*35*/].f_14 /*4*/];
	}
	return 0;
}

void func_905()//Position - 0x35BAE
{
	if (func_913(bLocal_324, 1) && func_912())
	{
		if (__LIB_20__::func_282())
		{
			if (!__LIB_19__::func_628(35))
			{
				__LIB_0__::func_151(__LIB_19__::func_398(), -1);
				__LIB_19__::func_614(35);
			}
		}
	}
	else if (__LIB_19__::func_628(35))
	{
		if (__LIB_0__::func_1(__LIB_19__::func_398()))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_19__::func_621(35);
	}
}

int func_912()//Position - 0x35CD0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar0]))
		{
			if (iLocal_355[iVar0] != iLocal_328)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_365.f_2[iVar0])))
				{
					if (Local_290[iVar0 /*7*/].f_1 < 2f)
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

int func_913(bool bParam0, bool bParam1)//Position - 0x35D32
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_914(bParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_914(int iParam0, int iParam1, bool bParam2)//Position - 0x35D61
{
	if (Local_290[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_439(iParam1, 4) || func_562(iParam1, iLocal_328, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_915(bool bParam0, int iParam1)//Position - 0x35D9F
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (bParam0)
	{
		if (func_439(iParam1, 32))
		{
			__LIB_19__::func_346(1);
		}
		__LIB_19__::func_399(Local_196.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		__LIB_19__::func_346(0);
		__LIB_19__::func_399(0);
	}
}

void func_923(int iParam0, bool bParam1)//Position - 0x35ED5
{
	if (!func_931(iParam0))
	{
		return;
	}
	if (bParam1 && __LIB_1__::func_561(Local_365.f_2[iParam0]))
	{
		__LIB_6__::func_843(&(Local_365.f_2[iParam0]));
	}
	func_925(iParam0);
	func_924(iParam0);
}

void func_924(int iParam0)//Position - 0x35F1B
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2.f_15[iParam0]) && __LIB_1__::func_561(Local_365.f_2.f_15[iParam0]))
	{
		__LIB_6__::func_843(&(Local_365.f_2.f_15[iParam0]));
		__LIB_1__::func_518(&(Local_365.f_2.f_15[iParam0]));
	}
}

int func_925(int iParam0)//Position - 0x35F67
{
	int iVar0;
	if (!func_439(iParam0, 4) || !func_930(iParam0))
	{
		return 1;
	}
	if (!func_927(iParam0))
	{
		return 0;
	}
	iVar0 = func_926(iParam0);
	if (!__LIB_19__::func_591(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_926(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_926(iParam0)), true, true);
	}
	if (__LIB_19__::func_591(11))
	{
		if (!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_926(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_926(iParam0)), true, true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_926(iParam0))))
		{
			__LIB_6__::func_843(&iVar0);
		}
	}
	else if (__LIB_19__::func_591(12))
	{
		__LIB_1__::func_518(&iVar0);
	}
	else if (!__LIB_19__::func_591(32))
	{
		__LIB_6__::func_843(&iVar0);
	}
	return 0;
}

int func_926(int iParam0)//Position - 0x36037
{
	var uVar0;
	int iVar1;
	if (!func_447(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_420(iParam0);
	switch (__LIB_19__::func_608())
	{
		case 2:
			return Local_365.f_47[iVar1 /*8*/];
		case 1:
			return Local_365.f_22[iVar1 /*24*/];
		default:
	}
	return uVar0;
}

int func_927(int iParam0)//Position - 0x36085
{
	if (!__LIB_19__::func_591(12))
	{
		switch (__LIB_19__::func_608())
		{
			case 2:
				if (__LIB_15__::func_400(func_929(iParam0), 0, 1))
				{
					return 0;
				}
				break;
		}
		if (!__LIB_1__::func_561(func_926(iParam0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_929(int iParam0)//Position - 0x36189
{
	var uVar0;
	int iVar1;
	iVar1 = func_926(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		return NETWORK::NET_TO_VEH(iVar1);
	}
	return uVar0;
}

int func_930(int iParam0)//Position - 0x361AD
{
	if (!func_447(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_926(iParam0)))
	{
		return 0;
	}
	if ((func_439(iParam0, 35) || func_439(iParam0, 36)) || func_439(iParam0, 37))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_926(iParam0)), false))
	{
		return 0;
	}
	return 1;
}

int func_931(int iParam0)//Position - 0x36217
{
	if ((((func_439(iParam0, 19) || (func_439(iParam0, 3) && __LIB_0__::func_937(&(Local_365.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_439(iParam0, 4)) || func_439(iParam0, 25)) || func_439(iParam0, 33))
	{
		return (func_439(iParam0, 4) || func_439(iParam0, 3));
	}
	return 0;
}

void func_932(int iParam0)//Position - 0x36290
{
	if (func_998(iParam0))
	{
		func_934(iParam0);
	}
	else
	{
		__LIB_19__::func_631(iParam0);
	}
}

void func_934(int iParam0)//Position - 0x362D1
{
	if (!HUD::DOES_BLIP_EXIST(Local_290[iParam0 /*7*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iParam0]))
		{
			Local_290[iParam0 /*7*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]));
			if (__LIB_19__::func_402(func_996(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_290[iParam0 /*7*/], func_996(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_290[iParam0 /*7*/], __LIB_20__::func_283(iParam0));
			HUD::SET_BLIP_COLOUR(Local_290[iParam0 /*7*/], func_988(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_290[iParam0 /*7*/], __LIB_19__::func_859(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_290[iParam0 /*7*/], 12);
			if (__LIB_19__::func_633(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_290[iParam0 /*7*/], true);
			}
			if (!func_562(iParam0, iLocal_328, 46))
			{
				__LIB_19__::func_400(&(Local_290[iParam0 /*7*/]), 1);
				func_983(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_290[iParam0 /*7*/], func_988(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_290[iParam0 /*7*/]) != func_996(iParam0) && __LIB_19__::func_402(func_996(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_290[iParam0 /*7*/], func_996(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_290[iParam0 /*7*/], __LIB_19__::func_859(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_290[iParam0 /*7*/]) != func_988(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_290[iParam0 /*7*/], func_988(iParam0, 0));
		}
		if (__LIB_19__::func_610(iParam0, 17))
		{
			__LIB_20__::func_338(Local_290[iParam0 /*7*/], 100, 5000f, 1137180672);
		}
		if (func_420(iParam0) > -1 && __LIB_19__::func_608() == 2)
		{
			if (__LIB_19__::func_632(iParam0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[func_420(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_365.f_47[func_420(iParam0) /*8*/]), false))
				{
					HUD::SET_BLIP_ROTATION(Local_290[iParam0 /*7*/], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_365.f_47[func_420(iParam0) /*8*/]))));
				}
			}
		}
	}
}

void func_983(int iParam0, int iParam1)//Position - 0x37684
{
	if (__LIB_1__::func_458(&(Local_372[iLocal_327 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_988(int iParam0, bool bParam1)//Position - 0x37727
{
	if (Local_213.f_114.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_5);
		return __LIB_1__::func_389(StackVal);
	}
	if (!bParam1)
	{
		if (func_562(iParam0, iLocal_328, 12))
		{
			return 1;
		}
	}
	else if (func_990() == 23 && func_562(iParam0, iLocal_328, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_290[iParam0 /*7*/].f_4 != __LIB_0__::getMinusOneOrNull())
	{
		return __LIB_1__::func_389(__LIB_19__::func_467(Local_290[iParam0 /*7*/].f_4));
	}
	if (func_446(iParam0))
	{
		if (!__LIB_19__::func_591(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_990()//Position - 0x377E9
{
	if (func_991() != -1)
	{
		return Local_218[func_991() /*21*/];
	}
	return -1;
}

int func_991()//Position - 0x37806
{
	return Local_372[iLocal_327 /*35*/];
}

int func_996(int iParam0)//Position - 0x37AD2
{
	if (Local_213.f_114.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_4);
		return StackVal;
	}
	if (Local_196.f_19.f_1 != -1)
	{
		return Local_196.f_19.f_1;
	}
	return __LIB_20__::func_552();
}

int func_998(int iParam0)//Position - 0x37B14
{
	if (!bLocal_333)
	{
		return 0;
	}
	if (func_561(iParam0, 1))
	{
		return 0;
	}
	if (Local_290[iParam0 /*7*/].f_4 != __LIB_0__::getMinusOneOrNull() && __LIB_19__::func_608() != 1)
	{
		return 0;
	}
	if (__LIB_19__::func_610(iParam0, 10) && !func_439(iParam0, 7))
	{
		return 0;
	}
	if (func_562(iParam0, iLocal_328, 14))
	{
		return 0;
	}
	if ((__LIB_19__::func_610(iParam0, 16) && func_439(iParam0, 23)) && !func_415(iLocal_328, 2))
	{
		return 0;
	}
	if (func_439(iParam0, 23) && __LIB_1__::func_936(bLocal_324))
	{
		return 0;
	}
	if (func_439(iParam0, 29) && func_439(iParam0, 40))
	{
		return 0;
	}
	if (func_999())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_114);
	return StackVal;
}

int func_999()//Position - 0x37BF7
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_324) < 1)
	{
		return 0;
	}
	if (__LIB_19__::func_636())
	{
		return 1;
	}
	if (__LIB_19__::func_635())
	{
		if (func_1000(bLocal_324, 0, 1, 0) || func_913(bLocal_324, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1000(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37C4F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if ((((iParam1 || !func_439(iVar0, 4)) && (iParam2 || !func_562(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 1))) && (iParam3 || !func_562(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 12))) && func_562(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1003(int iParam0, int iParam1)//Position - 0x37D0C
{
	if (Local_290[iParam0 /*7*/].f_4 == bLocal_324)
	{
		if (iParam1 != 5)
		{
			if (!func_1014(func_161(iParam0)))
			{
				func_1012(func_161(iParam0));
				if (Local_213.f_114.f_32 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_114.f_32);
				}
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1952191.f_5314 && !__LIB_5__::func_241(bLocal_324)) && !__LIB_12__::func_311())
		{
			if (func_1014(func_161(iParam0)))
			{
				func_1004(func_161(iParam0));
			}
		}
	}
}

void func_1004(int iParam0)//Position - 0x37D98
{
	if (!func_1008(iParam0))
	{
		return;
	}
	__LIB_19__::func_468(Local_365.f_155.f_1[iParam0 /*5*/]);
}

int func_1008(int iParam0)//Position - 0x37EC1
{
	if ((iParam0 == -1 || func_1010(iParam0) == -1) || func_1009(iParam0) == -1)
	{
		return 0;
	}
	return __LIB_3__::func_487(Local_365.f_155.f_1[iParam0 /*5*/]);
}

int func_1009(int iParam0)//Position - 0x37F01
{
	return Local_365.f_155.f_1[iParam0 /*5*/].f_3;
}

int func_1010(int iParam0)//Position - 0x37F16
{
	return Local_365.f_155.f_1[iParam0 /*5*/].f_2;
}

void func_1012(int iParam0)//Position - 0x37F6D
{
	if (!func_1008(iParam0))
	{
		return;
	}
	__LIB_19__::func_555(Local_365.f_155.f_1[iParam0 /*5*/]);
}

int func_1014(int iParam0)//Position - 0x38017
{
	if (!func_1008(iParam0))
	{
		return 0;
	}
	return __LIB_19__::func_292(Local_365.f_155.f_1[iParam0 /*5*/]);
}

void func_1016(int iParam0)//Position - 0x380AD
{
	if (iLocal_355[iParam0] != __LIB_0__::getMinusOneOrNull())
	{
		if (uLocal_356[iParam0] != iLocal_355[iParam0])
		{
			uLocal_356[iParam0] = iLocal_355[iParam0];
		}
	}
}

void func_1018(int iParam0, int iParam1)//Position - 0x380EB
{
	bool bVar0;
	struct<3> Var1;
	if (!__LIB_19__::func_610(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_290[iParam0 /*7*/].f_1 < func_1022(iParam0))
	{
		bVar0 = true;
		if (__LIB_19__::func_638(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_326, iParam1, 287))
		{
			bVar0 = false;
		}
		if (__LIB_19__::func_637(iParam0) != -1f)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			if (MISC::ABSF((Var1.f_2 - Local_329.f_2)) > __LIB_19__::func_637(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_213.f_114.f_35 != 0)
		{
			if (!func_562(iParam0, iLocal_328, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_114.f_35);
			}
		}
		func_983(iParam0, 35);
		func_983(iParam0, 0);
	}
	else
	{
		func_1019(iParam0, 0);
	}
}

void func_1019(int iParam0, int iParam1)//Position - 0x381AC
{
	if (__LIB_16__::func_758(&(Local_372[iLocal_327 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_1022(int iParam0)//Position - 0x3820D
{
	if (Local_213.f_114.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_24);
		return StackVal;
	}
	if (func_446(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_1023(int iParam0, int iParam1, bool bParam2)//Position - 0x38243
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (!func_439(iParam0, 32) && !func_562(iParam0, iLocal_328, 24))
	{
		if (func_1032(iParam0))
		{
			if (__LIB_1__::func_561(Local_365.f_2[iParam0]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_365.f_2[iParam0], true);
				OBJECT::ALLOW_PICKUP_BY_NONE_PARTICIPANT(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
				__LIB_19__::func_557(Local_334.f_0, 0, 0);
				func_983(iParam0, 24);
			}
		}
	}
	else
	{
		__LIB_19__::func_556(iParam1, &(Local_290[iParam0 /*7*/].f_5), func_1029(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_915(bParam2, iParam0);
	}
}

int func_1029(int iParam0)//Position - 0x3847F
{
	if ((func_439(iParam0, 3) || func_439(iParam0, 4)) || Local_290[iParam0 /*7*/].f_4 != __LIB_0__::getMinusOneOrNull())
	{
		return 1;
	}
	return 0;
}

int func_1032(int iParam0)//Position - 0x3853F
{
	if (!func_1035(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_114.f_39);
	if (!StackVal)
	{
		return 0;
	}
	if (__LIB_0__::func_937(&(Local_365.f_2.f_18), __LIB_19__::func_860(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_1035(int iParam0)//Position - 0x385B0
{
	return func_439(iParam0, 1);
}

void func_1036(int iParam0, int iParam1)//Position - 0x385BF
{
	if (func_439(iParam0, 29) || !__LIB_0__::func_114(iParam0))
	{
		return;
	}
	__LIB_20__::func_285(iParam1, iParam0);
}

void func_1041(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x38865
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_19__::func_610(iParam0, 9) || Local_213.f_114.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_38);
		if (StackVal)
		{
			if (!func_439(iParam0, 31))
			{
				if (__LIB_1__::func_561(Local_365.f_2[iParam0]))
				{
					func_477(iParam0, 0, 0);
					func_983(iParam0, 22);
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
					if (iVar2 == bLocal_324)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_2[iParam0]))
						{
							OBJECT::HIDE_PORTABLE_PICKUP_WHEN_DETACHED(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), false);
							func_983(iParam0, 1);
							if (!func_439(iParam0, 1))
							{
								func_983(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_20__::func_332();
							*iParam3 = iParam0;
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_983(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_306))
						{
							func_983(iParam0, 1);
							if (!func_439(iParam0, 1))
							{
								func_983(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_20__::func_332();
							*iParam3 = iParam0;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_330)
					{
						func_983(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !__LIB_0__::func_114())
				{
					iVar4 = func_420(iParam0);
					if (!__LIB_19__::func_295(Local_196.f_67.f_1[iVar4 /*15*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
					{
						if (!__LIB_19__::func_295(iLocal_331))
						{
							func_983(iParam0, 21);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iLocal_326, false) == iVar3)
								{
									if (__LIB_0__::func_336(iLocal_326, 0) == -1)
									{
										func_983(iParam0, 1);
										if (!func_439(iParam0, 1))
										{
											func_983(iParam0, 18);
											__LIB_20__::func_332();
										}
										*uParam2 = 1;
										__LIB_20__::func_332();
										*iParam3 = iParam0;
									}
									func_983(iParam0, 14);
								}
								else
								{
									func_1045(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_488() == 0)
				{
					func_1042(iParam0);
				}
			}
		}
	}
}

void func_1042(int iParam0)//Position - 0x38AD0
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (__LIB_1__::func_561(Local_365.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, false);
		__LIB_19__::func_294(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]));
		func_983(iParam0, 45);
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true) };
		Var1 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1.2f, 1.5f) };
		if (Var1.f_0 == Var0.f_0 && Var1.f_1 == Var0.f_1)
		{
			iVar2 = func_420(iParam0);
			if (iVar2 != -1)
			{
				iVar3 = Local_365.f_47[iVar2 /*8*/];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar3))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar3), false) };
				}
			}
		}
		fVar4 = __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0])));
		Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), Var1, true, false, false, true);
	}
}

void func_1045(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x38C38
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_330) && __LIB_0__::func_336(iLocal_326, 0) == -1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_330)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_330))
		{
			func_983(iParam1, 1);
			if (!func_439(iParam1, 1))
			{
				func_983(iParam1, 18);
			}
			*uParam2 = 1;
			__LIB_20__::func_332();
			*uParam3 = iParam1;
		}
	}
}

void func_1060(int iParam0, int iParam1)//Position - 0x39054
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!__LIB_19__::func_610(iParam0, 7) || func_439(iParam0, 39)) || func_562(iParam0, iLocal_328, 32))
	{
		return;
	}
	iVar0 = __LIB_0__::getMinusOneOrNull();
	if (Local_213.f_114.f_37 != 0)
	{
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			Stack.Push(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2));
			Stack.Push(iParam0);
			Stack.Push(iVar2);
			Call_Loc(Local_213.f_114.f_37);
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
		if (iVar0 == bLocal_324 && __LIB_0__::func_953(Local_365.f_2[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam1))
			{
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iLocal_326);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
			func_983(iParam0, 32);
		}
	}
	else if (__LIB_1__::func_561(Local_365.f_2[iParam0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
		func_983(iParam0, 32);
	}
}

void func_1061(int iParam0, int iParam1)//Position - 0x3914C
{
	int iVar0;
	int iVar1;
	if ((!func_447(iParam0) || func_439(iParam0, 39)) || func_562(iParam0, iLocal_328, 36))
	{
		return;
	}
	iVar0 = func_1065(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		iVar1 = NETWORK::NET_TO_ENT(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (__LIB_1__::func_561(Local_365.f_2[iParam0]) && __LIB_0__::func_953(iVar0))
			{
				if (__LIB_19__::func_966(iParam1, iVar1, __LIB_19__::func_967(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
				{
					__LIB_19__::func_965(iVar1);
					func_983(iParam0, 36);
				}
			}
		}
	}
}

var func_1065(int iParam0)//Position - 0x393EC
{
	var uVar0;
	switch (__LIB_19__::func_608())
	{
		case 2:
			return Local_365.f_47[func_420(iParam0) /*8*/];
		case 1:
			return Local_365.f_22[func_420(iParam0) /*24*/];
		default:
	}
	return uVar0;
}

void func_1066(int iParam0)//Position - 0x3942B
{
	func_1019(iParam0, 1);
	func_1019(iParam0, 21);
	func_1019(iParam0, 14);
}

void func_1069()//Position - 0x39460
{
	func_1742();
	func_1072();
	func_1070();
}

void func_1070()//Position - 0x39474
{
	int iVar0;
	if (!func_415(iLocal_328, 29))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_196.f_67)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]))
		{
			func_1071(iVar0, NETWORK::NET_TO_VEH(Local_365.f_47[iVar0 /*8*/]), func_419(iVar0, 2));
		}
		iVar0++;
	}
}

void func_1071(int iParam0, int iParam1, int iParam2)//Position - 0x394CB
{
	bool bVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (func_147(iParam0, 14))
		{
			if (iParam2 != -1 && !func_439(iParam2, 4))
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
			if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (__LIB_19__::func_602(iParam0, 20))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, -1000f);
				}
				if (__LIB_19__::func_602(iParam0, 21))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_196.f_67.f_1[iParam0 /*15*/].f_3))
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

void func_1072()//Position - 0x3956B
{
	if (!__LIB_19__::func_628(46))
	{
		return;
	}
	if (!func_1741())
	{
		__LIB_19__::func_621(46);
		return;
	}
	if (!__LIB_19__::func_628(26))
	{
		if (__LIB_20__::func_208(800))
		{
			Stack.Push(1);
			Stack.Push(1);
			Call_Loc(Local_213.f_15.f_26);
			__LIB_20__::func_333(StackVal, StackVal, 0);
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
	else
	{
		Call_Loc(Local_213.f_15.f_26.f_1);
		Stack.Push(0);
		Call_Loc(Local_213.f_15.f_26.f_2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(Local_213.f_15.f_26.f_3);
		Call_Loc(Local_213.f_15.f_26.f_4);
		Stack.Push(3000);
		Stack.Push(1);
		Stack.Push(1);
		Call_Loc(Local_213.f_15.f_26.f_5);
		if (func_1073(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 1, 0))
		{
			__LIB_20__::func_280(800);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(Local_213.f_15.f_26);
			__LIB_20__::func_333(StackVal, StackVal, 0);
			__LIB_19__::func_621(46);
		}
	}
}

int func_1073(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x39627
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
				if (!__LIB_19__::func_497())
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
			else if (func_1503(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, uParam5, iParam6, uParam8, uParam12, 0, bParam13, iParam17))
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
						__LIB_20__::func_375(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_32__::func_254(&iVar2);
					}
					if (__LIB_19__::func_497())
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
							func_1476(iVar2);
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
			if (func_1472())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_1329(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
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
					func_1128(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
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
				__LIB_41__::func_92(Global_2667225.f_706);
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
				func_1092(0, 0);
			}
			__LIB_3__::func_138(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_19__::func_579();
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
		__LIB_32__::func_254(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_1092(int iParam0, bool bParam1)//Position - 0x3A65C
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
			func_1092(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_1128(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3BDD4
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
				func_1129(0);
			}
		}
	}
}

void func_1129(bool bParam0)//Position - 0x3BEDE
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
			func_1130(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1130(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_1130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3BFB5
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
			func_1273(iVar5, iParam1, iParam2, 1);
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
						func_1273(iVar5, 10, 0, 1);
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
									func_1273(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1130(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1273(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_1260(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1130(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1253(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1273(iVar5, 14, uVar18[iVar1], 1);
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
							func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1273(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1130(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1245(iParam0);
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
						func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1241(iVar5, iVar24, iVar23, iVar25);
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
							func_1130(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1130(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1130(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1130(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1130(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1130(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1130(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1253(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, func_1260(iParam0, 8, -1), iParam2, func_1260(iParam0, 4, -1));
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
				func_1184(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1241(iVar5, iParam2, iVar44, iVar45);
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
			func_1253(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1130(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1130(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1241(iVar5, iVar58, iVar57, iParam2);
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
						func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1241(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1157(iParam0, 9, iVar63))
						{
							func_1130(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1130(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1130(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1130(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1260(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1260(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1130(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1130(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1245(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1131(iParam0, &uVar4))
		{
			func_1130(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1130(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1130(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1130(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_1260(iParam0, 3, -1), iVar10);
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
				func_1130(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1131(int iParam0, var uParam1)//Position - 0x3DE61
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1260(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_1157(iParam0, iVar1, iVar0))
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

int func_1157(int iParam0, int iParam1, int iParam2)//Position - 0x4267F
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
				if (!func_1157(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1157(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1157(iParam0, 14, iVar6))
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
			if (!func_1157(iParam0, 14, uVar11[iVar10]))
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
						return func_1157(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_1157(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1184(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4A3AF
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
	func_1185(iParam0, bParam3, 0, -1);
}

void func_1185(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4A3FC
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
		bVar3 = func_1219(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1212(iParam0, iParam3);
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

int func_1212(int iParam0, int iParam1)//Position - 0x5948B
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
				iVar3 = func_1260(iParam0, 11, -1);
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
				iVar5 = func_1260(iParam0, 11, -1);
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

int func_1219(int iParam0, bool bParam1)//Position - 0x59899
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
						iVar3 = func_1260(iParam0, 11, -1);
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
						iVar5 = func_1260(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
						iVar8 = func_1260(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
						iVar12 = func_1260(iParam0, 8, -1);
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

int func_1241(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x635E3
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
					iVar0 = func_1241(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1241(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1245(int iParam0)//Position - 0x64AF1
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
		if (!func_1250(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1250(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1250(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x654BB
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_1260(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x67DD5
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1255(iParam0))
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

int func_1255(int iParam0)//Position - 0x67F64
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
				iVar1 = func_1260(iParam0, 11, -1);
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
				iVar3 = func_1260(iParam0, 11, -1);
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

int func_1260(int iParam0, int iParam1, int iParam2)//Position - 0x683CF
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
				if (func_1157(iParam0, iParam1, iVar0))
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
				if (func_1157(iParam0, iParam1, iVar1))
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

void func_1273(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6B42C
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
							func_1273(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1273(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1273(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1273(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1273(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1329(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x8780A
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
	if (func_1466() && !bVar3)
	{
		if (func_1465())
		{
			if (func_1459(&bVar2))
			{
				if (__LIB_3__::func_173(bVar2))
				{
					if (!bVar4)
					{
						func_1128(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
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
						func_1128(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), iVar5, 0);
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
			if ((__LIB_19__::func_497() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_19__::func_497())
			{
				if (!__LIB_19__::func_875(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1476(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_32__::func_254(&iVar0);
	}
	if (func_1472())
	{
		__LIB_32__::func_254(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_1432(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_1432(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_1332(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_1432(__LIB_2__::func_638());
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
			func_1432(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_1332(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x87EA0
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
									if (func_285(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_285(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
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
										if (func_285(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (func_285(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
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
									__LIB_20__::func_760(&iVar0, iParam3);
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

void func_1432(int iParam0)//Position - 0x96738
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
	func_1476(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_20__::func_759(iParam0, 1);
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

int func_1459(var uParam0)//Position - 0x974D2
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
			if (*uParam0 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
											if (func_1460(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
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
int func_1460(bool bParam0)//Position - 0x97701
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

int func_1465()//Position - 0x9777A
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_1459(&bVar0))
		{
			if (func_1460(bVar0))
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

int func_1466()//Position - 0x977BF
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_1459(&uVar0))
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

int func_1472()//Position - 0x97934
{
	bool bVar0;
	var uVar1;
	if (__LIB_19__::func_497())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1466())
		{
			if (func_1465())
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

void func_1476(int iParam0)//Position - 0x97C0E
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
			func_1128(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
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

int func_1503(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x98B20
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
			if (func_1512(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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
							func_300(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
						func_1504(&(Global_2667225.f_623));
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
								func_300(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
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
			if (func_1512(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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

void func_1504(var uParam0)//Position - 0x990A8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_300(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1512(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x994D4
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
				if (__LIB_19__::func_875(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
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
		Global_2667225.f_520.f_30 = __LIB_19__::func_571();
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
			Global_2667225.f_489 = func_1703();
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
				__LIB_41__::func_89(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_41__::func_88(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_32__::func_350(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1692(bParam2) };
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
				__LIB_32__::func_350(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
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
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
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
						if (__LIB_19__::func_877(Global_1888188))
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
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
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
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
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
				Var13 = { __LIB_20__::func_379(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1682(&(Global_2667225.f_555), 1))
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
				if (__LIB_19__::func_497() || iVar40)
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
				if (func_1682(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_19__::func_497())
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
				if (__LIB_19__::func_497())
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
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
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
				iVar30 = __LIB_20__::func_382(Var21, fVar35, &fVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_32__::func_225(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_32__::func_225(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_20__::func_378(Var21, fVar35) };
						Var23 = { __LIB_20__::func_377(Var21, fVar35) };
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
							uVar26[iVar0] = __LIB_20__::func_382(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
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
				if (func_353(&(Global_2667225.f_555), 0, 0, 0, 1))
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
					Var17 = { func_1654(PLAYER::PLAYER_ID()) };
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
					Var17 = { func_1654(PLAYER::PLAYER_ID()) };
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
				if (__LIB_19__::func_515())
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
					Global_2667225.f_555 = { func_1654(__LIB_0__::func_797()) };
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
								if (iVar47 != __LIB_0__::getMinusOneOrNull())
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
					if (!iVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_1654(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1654(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1654(__LIB_0__::func_797()) };
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
					if (!iVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_1654(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1654(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1654(__LIB_0__::func_797()) };
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
				Global_2667225.f_555 = { func_1654(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1654(PLAYER::PLAYER_ID()) };
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
				if (Global_2667225.f_490.f_3 && !__LIB_32__::func_224(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_32__::func_353() };
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
				if (func_353(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_20__::func_56(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_19__::func_571())
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
			func_1593();
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
			if ((__LIB_0__::func_975() && __LIB_19__::func_497()) && func_353(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_19__::func_570();
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
			func_305(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1586(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1583(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1583(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1583(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
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
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_19__::func_571())
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
						func_1593();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_19__::func_875(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_9__::func_516(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						func_1593();
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
		Global_2667225.f_520.f_9 = __LIB_19__::func_570();
		Global_2667225.f_520.f_10 = 0;
		if (func_1513(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
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

int func_1513(var uParam0, var uParam1, var uParam2)//Position - 0x9E7CC
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
				if (__LIB_20__::func_381(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
					func_305(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
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
			if (func_1523(uParam2, uParam0, uParam1, 0))
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
			if (func_1523(uParam2, uParam0, uParam1, 1))
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
						func_1515(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				func_1515(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
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

void func_1515(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x9F814
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
	if (func_1517(*uParam0, &Var0, iVar6, iParam3, 1))
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
		func_305(&Var0, &uVar1, &Var2);
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
			if (func_1517(*uParam0, &Var0, iVar6, iParam3, 0))
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
			else if (func_353(uParam0, 1, 1, 1, 1))
			{
				func_1515(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_1517(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x9FCF4
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_1518(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1518(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1518(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x9FD50
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_350(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
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

int func_1523(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xA0020
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
					func_1568(uParam1, uParam2);
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
									func_1515(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1515(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1568(uParam1, uParam2);
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
					func_1568(uParam1, uParam2);
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
				func_1568(uParam1, uParam2);
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
		func_1565(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1531(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_1531(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
					func_1515(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
					func_1515(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1515(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
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
				func_1515(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_1515(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1531(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xA08E4
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
		if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
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
		if (!__LIB_19__::func_875(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_32__::func_223(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
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
		if (!__LIB_19__::func_502(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_19__::func_502(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
				if (func_397(Var12))
				{
					if (!func_353(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
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
		if (!(__LIB_1__::func_456(PLAYER::PLAYER_ID()) && __LIB_1__::func_872(PLAYER::PLAYER_ID())))
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
		if (!__LIB_1__::func_872(PLAYER::PLAYER_ID()))
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
				fVar0 = __LIB_32__::func_222(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_32__::func_222(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_20__::func_376(Param0, 1, 0, 0, 0, 0);
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
							fVar0 = __LIB_32__::func_222(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_32__::func_222(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
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
							func_1534(Var19, iVar18);
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
						func_1534(Var19, iVar18);
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
						fVar6 = __LIB_20__::func_376(Param0, 1, 1, 1, 1, 0);
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
						func_1534(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1534(struct<10> Param0, int iParam1)//Position - 0xA14D7
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1534(Var0, iParam1 + 1);
	}
}

void func_1565(struct<3> Param0, var uParam1, var uParam2)//Position - 0xA29C2
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
					func_1567(&Var3, uParam1, iVar0);
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
				func_1567(&Var3, uParam1, iVar0);
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
					func_1567(&Var3, uParam1, iVar0);
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
				func_1566(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1566(var uParam0, var uParam1, int iParam2)//Position - 0xA2CE2
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1566(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1567(var uParam0, var uParam1, int iParam2)//Position - 0xA2D20
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1567(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1568(var uParam0, var uParam1)//Position - 0xA2D5A
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
				func_1531(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
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

Vector3 func_1583(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xA313B
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
		if (func_1586(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1586(var uParam0, bool bParam1)//Position - 0xA327C
{
	func_1587(uParam0, bParam1);
	if (__LIB_20__::func_381(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1587(var uParam0, bool bParam1)//Position - 0xA32B3
{
	float fVar0;
	if (!bParam1)
	{
		func_1589(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1589(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_1589(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xA3389
{
	if (bParam1)
	{
		if (func_397(Global_2667225.f_512))
		{
			if (func_353(uParam0, 1, 0, 0, bParam5))
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

void func_1593()//Position - 0xA35BE
{
	if (!Global_2667225.f_701)
	{
		if (func_397(Global_2667225.f_555))
		{
			if (func_353(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1682(&(Global_2667225.f_555), 1))
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
	if (__LIB_19__::func_571())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1654(int iParam0)//Position - 0xA85AD
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
	return func_1655(iParam0);
}

Vector3 func_1655(int iParam0)//Position - 0xA8621
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
		func_1657(__LIB_1__::func_694(iParam0), &iVar0);
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
		Var1 = { __LIB_19__::func_554(iParam0) };
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

void func_1657(struct<3> Param0, var uParam1)//Position - 0xA8817
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1658(Param0, iVar0, 0))
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
		if (func_1658(Param0, iVar0, 0))
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
		if (func_1658(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1658(Param0, iVar0, 0))
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
	if (func_1658(Param0, iVar0, 0))
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

int func_1658(struct<3> Param0, int iParam1, float fParam2)//Position - 0xA895B
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
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1658(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1658(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1658(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1682(var uParam0, bool bParam1)//Position - 0xABDB8
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
						if (func_353(&Var1, 0, 0, 0, 1))
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

struct<18> func_1692(bool bParam0)//Position - 0xAC7D7
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
			if (__LIB_19__::func_502(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_19__::func_502(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_19__::func_502(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
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
				fVar5 = __LIB_20__::func_376(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_19__::func_569(), __LIB_19__::func_568(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_20__::func_376(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
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
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_19__::func_569(), __LIB_19__::func_568(), fVar8, 0.3f);
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
					func_1693(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1693(&Var0, iVar1, fVar4, iVar7, fVar6);
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

void func_1693(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0xACC3A
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
		func_1693(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1703()//Position - 0xAD283
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
					if (func_1714(PLAYER::PLAYER_ID()))
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
				else if ((((((__LIB_12__::func_548(1) && func_1714(PLAYER::PLAYER_ID())) && (__LIB_0__::func_492(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_2__::func_939(PLAYER::PLAYER_ID())) && !__LIB_1__::func_375(1)) && !(__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) == 0 && func_1710(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_19__::func_515())
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
						if ((__LIB_2__::func_867(iVar0) && __LIB_19__::func_861(iVar0)) && (__LIB_19__::func_505(iVar0) || __LIB_0__::func_796(PLAYER::PLAYER_ID())))
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
					if (__LIB_2__::func_867(iVar0) && __LIB_19__::func_861(iVar0))
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

int func_1710(bool bParam0)//Position - 0xAD743
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_12__::func_486(bParam0, 0))
	{
		iVar0 = __LIB_2__::func_39(bParam0);
		Var1 = { func_1654(iVar0) };
		return func_353(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1714(bool bParam0)//Position - 0xAD827
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_1654(bParam0) };
	if (__LIB_12__::func_486(bParam0, 0))
	{
		iVar1 = __LIB_2__::func_39(bParam0);
		Var2 = { func_1654(iVar1) };
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
		if (!iVar3 == __LIB_0__::getMinusOneOrNull())
		{
			Var4 = { func_1654(iVar3) };
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

int func_1741()//Position - 0xAE2ED
{
	if ((!bLocal_321 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324)) || func_990() == 21)
	{
		return 0;
	}
	if (__LIB_3__::func_144(PLAYER::PLAYER_ID(), 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1742()//Position - 0xAE32C
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
		if (!__LIB_19__::func_661(iVar0))
		{
		}
		else
		{
			func_1781(iVar0);
		}
		iVar0++;
	}
	if (__LIB_19__::func_640())
	{
		iVar0 = __LIB_19__::func_655();
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_473.f_3);
		bVar3 = StackVal;
		if (!bLocal_321)
		{
			func_1774(0);
			return;
		}
		if (__LIB_19__::func_654())
		{
			Stack.Push(Local_213.f_473.f_10 == 0);
			Stack.Push(__LIB_19__::func_655());
			Call_Loc(Local_213.f_473.f_10);
			Stack.Push((StackVal || MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
			Stack.Push(__LIB_19__::func_655());
			Call_Loc(Local_213.f_473.f_10);
			if (StackVal || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1))
			{
				Stack.Push(__LIB_19__::func_655());
				Stack.Push(&(Local_317.f_2));
				Call_Loc(Local_213.f_473.f_8);
			}
		}
		if (__LIB_19__::func_653(0))
		{
			Stack.Push(__LIB_32__::func_233());
			Call_Loc(Local_213.f_473.f_6);
			if (!StackVal)
			{
				func_1768();
			}
			return;
		}
		bVar4 = true;
		if (!CAM::IS_SCREEN_FADED_OUT() && !__LIB_19__::func_652(__LIB_19__::func_655(), 6))
		{
			bVar4 = false;
		}
		Stack.Push(Local_213.f_473.f_8 != 0);
		Stack.Push(__LIB_19__::func_655());
		Call_Loc(Local_213.f_473.f_9);
		if (StackVal && StackVal)
		{
			if (!__LIB_19__::func_651())
			{
				bVar4 = false;
			}
		}
		if (__LIB_19__::func_628(79) && bVar3)
		{
			bVar4 = false;
		}
		Var1 = { __LIB_32__::func_232() };
		if (Local_213.f_473.f_14 != 0)
		{
			Stack.Push(__LIB_19__::func_655());
			Call_Loc(Local_213.f_473.f_14);
			Var2 = { StackVal, StackVal, StackVal };
			if (!__LIB_0__::func_86(Var2) && !__LIB_19__::func_649(Var1))
			{
				Var1 = { Var2 };
			}
		}
		if (bVar4)
		{
			iVar5 = 0;
			if ((bVar3 && ENTITY::DOES_ENTITY_EXIST(iLocal_330)) && iLocal_326 != VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_330, -1, true))
			{
				iVar5 = 1;
			}
			if (iVar5 || __LIB_3__::func_276(Var1, __LIB_32__::func_231(), bVar3, 1, 0, 0, 1, 0, __LIB_32__::func_230(), 0, 0))
			{
				if (Local_213.f_473.f_6 == 0)
				{
					func_1768();
				}
				else
				{
					__LIB_19__::func_647(0);
				}
			}
		}
		return;
	}
	func_1757();
	if (__LIB_19__::func_653(1))
	{
		if (SYSTEM::VDIST(Local_329, Local_196.f_143[__LIB_19__::func_646() /*8*/]) > __LIB_32__::func_229())
		{
			__LIB_19__::func_645(1);
		}
		return;
	}
	iVar6 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_19__::func_661(iVar0))
		{
		}
		else if (!__LIB_19__::func_644(iVar0))
		{
		}
		else
		{
			__LIB_41__::func_90(iVar0);
			Stack.Push(((bLocal_321 && func_488() == 0) && (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, true) || __LIB_19__::func_642(iVar0))));
			Stack.Push(iVar0);
			Stack.Push(Local_196.f_143[iVar0 /*8*/]);
			Call_Loc(Local_213.f_473.f_1);
			if (StackVal && (StackVal || __LIB_19__::func_628(79)))
			{
				iVar6 = iVar0;
				Stack.Push(Local_213.f_473.f_10 != 0);
				Stack.Push(iVar0);
				Call_Loc(Local_213.f_473.f_10);
				if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
				{
					Stack.Push(iVar0);
					Call_Loc(Local_213.f_473.f_10);
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1);
				}
				Stack.Push(__LIB_19__::func_652(iVar0, 4));
				Stack.Push(iVar0);
				Call_Loc(Local_213.f_473.f_15);
				if (StackVal || StackVal)
				{
					__LIB_5__::func_401(__LIB_32__::func_227(iVar0));
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
				Local_317.f_3 = PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324);
				Stack.Push(1);
				Stack.Push(49280);
				Stack.Push(iVar0);
				Call_Loc(Local_213.f_473.f_41);
				__LIB_20__::func_333(StackVal, (StackVal || StackVal), 0);
				__LIB_32__::func_226(iVar0);
				func_1743(iVar0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Stack.Push(__LIB_19__::func_652(iVar0, 4));
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_473.f_15);
		if (((StackVal || StackVal) && iVar6 != iVar0) && __LIB_0__::func_1(__LIB_32__::func_227(iVar0)))
		{
			HUD::CLEAR_HELP(true);
		}
		iVar0++;
	}
}

void func_1743(int iParam0)//Position - 0xAE6B0
{
	if (Local_317.f_0 != iParam0)
	{
		Local_317.f_0 = iParam0;
		func_698(27);
	}
}

void func_1757()//Position - 0xAE91A
{
	int iVar0;
	if (!__LIB_19__::func_628(3))
	{
		if (Local_317.f_3 > 0)
		{
			if (bLocal_321)
			{
				iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324);
				if (Local_317.f_3 > iVar0)
				{
					__LIB_20__::func_215(bLocal_324, Local_317.f_3, 0, 0);
					Local_317.f_3 = 0;
				}
				else
				{
					Local_317.f_3 = 0;
				}
			}
		}
	}
}

void func_1768()//Position - 0xAEB41
{
	__LIB_20__::func_333(0, 0, 0);
	Stack.Push(__LIB_19__::func_655());
	Call_Loc(Local_213.f_473.f_2);
	if (__LIB_19__::func_652(__LIB_19__::func_655(), 0) && !__LIB_19__::func_652(__LIB_32__::func_233(), 0))
	{
		func_1769();
	}
	__LIB_19__::func_647(1);
	func_1774(0);
	NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(2500);
}

void func_1769()//Position - 0xAEB8D
{
	int iVar0;
	int iVar1;
	if (!func_913(bLocal_324, 1))
	{
		return;
	}
	iVar0 = __LIB_20__::func_216(bLocal_324);
	if (iVar0 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar0]))
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_OBJ(Local_365.f_2[iVar0]);
	OBJECT::FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(iVar1);
}

void func_1774(int iParam0)//Position - 0xAEC57
{
	if (iParam0 && !__LIB_19__::func_640())
	{
		return;
	}
	__LIB_19__::func_645(0);
	__LIB_10__::func_399(&(Local_317.f_2));
	Stack.Push(Local_213.f_473.f_10 != 0);
	Stack.Push(__LIB_19__::func_655());
	Call_Loc(Local_213.f_473.f_10);
	if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(__LIB_19__::func_655());
		Call_Loc(Local_213.f_473.f_10);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(StackVal);
	}
	__LIB_32__::func_234();
	func_1775();
}

void func_1775()//Position - 0xAECBC
{
	func_1777(8);
	func_1777(26);
	func_1777(27);
	__LIB_19__::func_296(3);
	Local_317.f_1 = Local_196.f_143[Local_317.f_0 /*8*/].f_4;
	Local_317.f_0 = -1;
}

void func_1777(int iParam0)//Position - 0xAED06
{
	if (__LIB_16__::func_758(&(Local_372[iLocal_327 /*35*/].f_1), iParam0))
	{
	}
}

void func_1781(int iParam0)//Position - 0xAED9B
{
	int iVar0;
	if (bLocal_332 && func_1790(iParam0))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_317.f_4[iParam0]))
		{
			__LIB_19__::func_544(&(Local_317.f_4[iParam0]), Local_196.f_143[iParam0 /*8*/], __LIB_19__::func_660(iParam0), __LIB_19__::func_643(iParam0), __LIB_32__::func_235(iParam0), __LIB_19__::func_659(iParam0), 0, __LIB_19__::func_658(iParam0), 0, __LIB_19__::func_657(iParam0));
			iVar0 = __LIB_19__::func_656(iParam0);
			if (iVar0 != 5)
			{
				HUD::SET_BLIP_PRIORITY(Local_317.f_4[iParam0], iVar0);
			}
			Stack.Push(Local_213.f_473.f_18.f_9 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_473.f_18.f_9);
			if (StackVal && StackVal)
			{
				__LIB_19__::func_400(&(Local_317.f_4[iParam0]), 0);
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_473.f_18.f_15);
			if (StackVal)
			{
				if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_317.f_4[iParam0]))
				{
					HUD::SET_BLIP_ROUTE(Local_317.f_4[iParam0], true);
				}
			}
			else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_317.f_4[iParam0]))
			{
				HUD::SET_BLIP_ROUTE(Local_317.f_4[iParam0], false);
			}
			if (__LIB_19__::func_652(iParam0, 1))
			{
				__LIB_20__::func_338(Local_317.f_4[iParam0], 100, 5000f, 1137180672);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_317.f_4[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_317.f_4[iParam0]));
	}
}

int func_1790(int iParam0)//Position - 0xAF089
{
	if (__LIB_19__::func_640())
	{
		return 0;
	}
	if (!__LIB_19__::func_644(iParam0))
	{
		return 0;
	}
	if (__LIB_19__::func_653(1))
	{
		if (iParam0 == Local_317.f_1)
		{
			return 0;
		}
	}
	if (func_415(iLocal_328, 2))
	{
		if (!__LIB_19__::func_652(iParam0, 0))
		{
			return 0;
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
		{
			return 0;
		}
	}
	else if (__LIB_19__::func_652(iParam0, 0))
	{
		return 0;
	}
	if (Local_213.f_473.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18);
		return StackVal;
	}
	if (__LIB_19__::func_652(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1792()//Position - 0xAF178
{
	if (func_1793())
	{
		__LIB_19__::func_614(11);
	}
}

bool func_1793()//Position - 0xAF190
{
	if (Local_213.f_102 != 0)
	{
		Call_Loc(Local_213.f_102);
		return StackVal;
	}
	if (Local_196.f_19 > 0)
	{
		if (__LIB_20__::func_193())
		{
			return func_1797(bLocal_324);
		}
		return func_1794(bLocal_324);
	}
	return func_488() == 3;
}

int func_1794(int iParam0)//Position - 0xAF1D3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (!func_439(iVar0, 4) || !func_1795(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1795(int iParam0, int iParam1)//Position - 0xAF20F
{
	int iVar0;
	iVar0 = func_161(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (__LIB_12__::func_486(iParam0, 1) && !__LIB_19__::func_591(21))
	{
		return func_1796(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__::func_39(iParam0));
	}
	return func_1796(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0);
}

int func_1796(int iParam0)//Position - 0xAF260
{
	return Local_365.f_155.f_1[iParam0 /*5*/].f_4;
}

int func_1797(int iParam0)//Position - 0xAF275
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_439(iVar0, 4) && func_1795(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1799()//Position - 0xAF2B7
{
	func_2533();
	func_2431();
	func_2429();
	func_2356();
	__LIB_0__::func_467();
	if (Local_213.f_3.f_1 != 0)
	{
		Call_Loc(Local_213.f_3.f_1);
	}
	func_873();
	func_2340();
	func_2286();
	func_2255();
	func_2183();
	func_2160();
	func_2140();
	func_2086();
	func_2049();
	__LIB_0__::func_467();
	func_2028();
	func_1742();
	func_2019();
	__LIB_20__::func_344();
	__LIB_19__::func_863();
	func_1886();
	__LIB_20__::func_343();
	__LIB_20__::func_289();
	func_1072();
	func_1847();
	func_1840();
	__LIB_32__::func_255();
	func_1810();
	func_1809();
	__LIB_20__::func_287();
	func_1804();
	func_1800();
}

void func_1800()//Position - 0xAF352
{
	int iVar0;
	if (func_991() == -1)
	{
		func_1803(0);
		Call_Loc(Local_218[func_991() /*21*/].f_17);
		return;
	}
	while ((func_991() < iLocal_336 && iVar0 < Local_218[func_991() /*21*/].f_19) && Local_218[func_991() /*21*/].f_1[iVar0 /*3*/] != -1)
	{
		if (func_1801(func_991(), iVar0))
		{
			if (func_991() != Local_218[func_991() /*21*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_218[func_991() /*21*/].f_18);
				func_1803(Local_218[func_991() /*21*/].f_1[iVar0 /*3*/]);
				Call_Loc(Local_218[func_991() /*21*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

int func_1801(int iParam0, int iParam1)//Position - 0xAF404
{
	if (Local_218[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1 != 0)
	{
		Call_Loc(Local_218[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1);
		return StackVal;
	}
	if (Local_218[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 != -1)
	{
		if (Global_2815059.f_6777 && __LIB_0__::func_955(Local_334.f_0) == 0)
		{
			return (Local_218[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == func_22() || Local_218[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == Local_365.f_86);
		}
		else
		{
			return BitTest(Local_365.f_87, Local_218[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2);
		}
	}
	return 0;
}

void func_1803(int iParam0)//Position - 0xAF60F
{
	Local_372[iLocal_327 /*35*/] = iParam0;
}

void func_1804()//Position - 0xAF621
{
	int iVar0;
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (__LIB_0__::func_864(&(Local_365.f_106)) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 == -1)
	{
		iVar0 = ((__LIB_19__::func_585() - __LIB_1__::func_724(&(Local_365.f_106), 0, 0)) / 1000);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 = (NETWORK::GET_CLOUD_TIME_AS_INT() + iVar0);
	}
}

void func_1809()//Position - 0xAF921
{
	Call_Loc(Local_213.f_102.f_7);
	if (__LIB_0__::func_86(StackVal, StackVal, StackVal))
	{
		func_1777(15);
		fLocal_353 = 999999f;
		return;
	}
	Stack.Push(Local_329);
	Call_Loc(Local_213.f_102.f_7);
	fLocal_353 = SYSTEM::VDIST(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
	Stack.Push(fLocal_353);
	Call_Loc(Local_213.f_102.f_8);
	if (StackVal <= StackVal)
	{
		func_698(15);
	}
	else
	{
		func_1777(15);
	}
}

void func_1810()//Position - 0xAF97B
{
	if (!__LIB_19__::func_591(31))
	{
		return;
	}
	if (__LIB_19__::func_462(bLocal_324))
	{
		func_1811(func_1834());
	}
}

void func_1811(int iParam0)//Position - 0xAF9A2
{
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (iParam0 && __LIB_19__::func_348())
	{
		if (!__LIB_3__::func_521(Global_2703735.f_4.f_15, __LIB_19__::func_558(), -1))
		{
			STREAMING::REQUEST_CLIP_SET("move_m@bag");
			if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
			{
				func_1823(Global_2703735.f_4.f_15, __LIB_19__::func_558(), -1);
				PED::SET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, "move_m@bag", 0.25f);
			}
		}
	}
	else if (__LIB_3__::func_521(Global_2703735.f_4.f_15, __LIB_19__::func_558(), -1))
	{
		func_1812(Global_2703735.f_4.f_15, __LIB_19__::func_558(), -1, -1);
		STREAMING::REMOVE_CLIP_SET("move_m@bag");
		PED::RESET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, 0.25f);
	}
}

void func_1812(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAFA60
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
					func_1130(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1130(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_1823(int iParam0, int iParam1, int iParam2)//Position - 0xB7B61
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
			func_1827(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1260(iParam0, 7, -1), -1))
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

void func_1827(int iParam0)//Position - 0xB89EE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1812(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

int func_1834()//Position - 0xB8E0E
{
	if (Local_213.f_15.f_3 != 0)
	{
		Call_Loc(Local_213.f_15.f_3);
		return StackVal;
	}
	return func_913(bLocal_324, 1);
}

void func_1840()//Position - 0xB8F76
{
	if (__LIB_20__::func_218())
	{
		if (iLocal_345 == -1)
		{
			iLocal_345 = __LIB_1__::func_360(2048, -1, 0);
		}
		if (!__LIB_19__::func_628(60))
		{
			if (__LIB_3__::func_521(iLocal_326, 3, -1))
			{
				__LIB_19__::func_614(61);
			}
			if (__LIB_1__::func_360(2048, -1, 0) < __LIB_19__::func_666())
			{
				__LIB_1__::func_746(2048, __LIB_19__::func_666(), -1);
			}
			MISC::SET_BIT(&(Global_2815059.f_4660), 22);
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_324, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_326, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_326, false);
			Global_1957702 = 1;
			__LIB_19__::func_614(60);
		}
		else if (__LIB_1__::func_360(2048, -1, 0) > 0 && PED::GET_PED_DIES_IN_WATER(iLocal_326))
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_324, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_326, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_326, false);
			Global_1957702 = 1;
		}
		if (!__LIB_3__::func_521(iLocal_326, 3, -1))
		{
			func_1843(0);
			func_1823(iLocal_326, 3, -1);
			__LIB_19__::func_297(1);
		}
	}
	else
	{
		func_1841();
	}
}

void func_1841()//Position - 0xB906B
{
	if (__LIB_19__::func_628(60))
	{
		if (__LIB_3__::func_521(iLocal_326, 3, -1))
		{
			if (!__LIB_19__::func_628(61))
			{
				func_1812(iLocal_326, 3, -1, -1);
			}
		}
		PED::SET_PED_DIES_IN_WATER(iLocal_326, true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_326, true);
		PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_324, 100f);
		MISC::SET_BIT(&(Global_2815059.f_4660), 22);
		__LIB_1__::func_354(2048, iLocal_345, -1, 1, 0);
		__LIB_19__::func_297(0);
		__LIB_19__::func_621(60);
	}
}

void func_1843(bool bParam0)//Position - 0xB90F8
{
	func_698(13);
	if (bParam0)
	{
		func_698(9);
	}
	Local_309.f_0 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	Local_309.f_1 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	__LIB_19__::func_298(iLocal_326);
}

void func_1847()//Position - 0xB9230
{
	if (Local_213.f_15.f_13 == 0)
	{
		return;
	}
	if (!__LIB_19__::func_628(47))
	{
		if (!__LIB_19__::func_628(56))
		{
			Call_Loc(Local_213.f_15.f_13);
			if (StackVal)
			{
				__LIB_19__::func_614(56);
			}
		}
		if (__LIB_19__::func_628(56))
		{
			if (__LIB_20__::func_317() && func_1852())
			{
				__LIB_19__::func_614(47);
				__LIB_19__::func_621(56);
				if (__LIB_19__::func_668())
				{
					__LIB_1__::func_473(__LIB_6__::func_281(iLocal_330, 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				}
				if (__LIB_19__::func_667())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_330, true);
				}
			}
		}
	}
	else
	{
		Call_Loc(Local_213.f_15.f_13);
		if (!StackVal)
		{
			__LIB_19__::func_621(47);
			__LIB_19__::func_621(56);
		}
	}
}

int func_1852()//Position - 0xB9407
{
	if (Local_213.f_15.f_13.f_3 != 0)
	{
		Stack.Push(&uLocal_359);
		Call_Loc(Local_213.f_15.f_13.f_3);
		return __LIB_0__::func_937(StackVal, StackVal, 0);
	}
	return 1;
}

void func_1886()//Position - 0xBBCB6
{
	int iVar0;
	if (__LIB_12__::func_487(bLocal_324))
	{
		return;
	}
	if (func_488() != 0)
	{
		return;
	}
	if (!bLocal_321)
	{
		return;
	}
	if (__LIB_19__::func_628(25))
	{
		__LIB_20__::func_332();
	}
	if (__LIB_19__::func_862(0))
	{
		__LIB_20__::func_332();
		if (__LIB_19__::func_462(bLocal_324))
		{
			return;
		}
	}
	if (func_1000(bLocal_324, 0, 1, 0))
	{
		__LIB_20__::func_332();
		if (__LIB_19__::func_462(bLocal_324))
		{
			return;
		}
	}
	iVar0 = 0;
	if (__LIB_19__::func_677(__LIB_19__::func_302()))
	{
		func_698(3);
	}
	else if (!__LIB_19__::func_677(__LIB_19__::func_301()))
	{
		if (func_415(iLocal_328, 3))
		{
			func_1777(3);
			iVar0 = 1;
		}
	}
	func_1887(iVar0);
}

void func_1887(int iParam0)//Position - 0xBBD5F
{
	if (__LIB_0__::func_114(iParam0))
	{
		func_1889();
	}
	if (__LIB_0__::func_1(__LIB_19__::func_408()))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			__LIB_20__::func_332();
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_1889()//Position - 0xBBDB4
{
	if (!bLocal_332)
	{
		__LIB_19__::func_531();
		return;
	}
	if (!__LIB_20__::func_282())
	{
		return;
	}
	if (!func_415(iLocal_328, 5))
	{
		__LIB_0__::func_151(__LIB_19__::func_408(), -1);
		func_698(5);
	}
}

void func_2019()//Position - 0xBF607
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	if (!__LIB_19__::func_680())
	{
		return;
	}
	Call_Loc(Local_213.f_515.f_1);
	iVar0 = StackVal;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	fVar3 = VEHICLE::GET_VEHICLE_HEALTH_PERCENTAGE(iVar0, 1000f, 1000f, 1000f, 1000f, 1000f, 1000f);
	iVar4 = SYSTEM::ROUND(((100f - fVar3) / __LIB_15__::func_314()));
	iVar1 = (__LIB_19__::func_619() - (iVar4 * __LIB_19__::func_679()));
	iVar2 = __LIB_32__::func_256(iVar0, __LIB_15__::func_314(), __LIB_19__::func_679());
	iVar1 = (iVar1 - iVar2);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	func_2020(iVar1);
}

void func_2020(int iParam0)//Position - 0xBF69F
{
	if (iLocal_319 != iParam0)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && iParam0 < iLocal_319)
		{
			Local_365.f_154++;
		}
		iLocal_319 = iParam0;
	}
}

void func_2028()//Position - 0xBF90D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<9> Var7;
	iVar0 = iLocal_326;
	if (!func_2047())
	{
		return;
	}
	bVar3 = (PED::IS_PED_IN_FLYING_VEHICLE(iVar0) || __LIB_19__::func_407(iVar0));
	iVar1 = 0;
	while (iVar1 < Local_196.f_120)
	{
		bVar2 = false;
		Var7 = { __LIB_19__::func_592(iVar1) };
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
		if (((((((__LIB_20__::func_271(iVar1, 0) || __LIB_20__::func_271(iVar1, 1)) || __LIB_20__::func_271(iVar1, 2)) || __LIB_20__::func_271(iVar1, 6)) || __LIB_20__::func_271(iVar1, 7)) || __LIB_20__::func_271(iVar1, 8)) || __LIB_20__::func_271(iVar1, 9)) || __LIB_20__::func_271(iVar1, 5))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Var4, Var5, fVar6, false, true, 0))
			{
				Stack.Push(__LIB_20__::func_271(iVar1, 7));
				Stack.Push(iVar1);
				Stack.Push(7);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					if (func_990() == 4)
					{
						func_698(1);
					}
				}
				Stack.Push(__LIB_20__::func_271(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					func_2043(iVar1, 1);
					bVar2 = true;
					if (!__LIB_19__::func_591(14))
					{
						__LIB_20__::func_332();
					}
				}
				Stack.Push(__LIB_20__::func_271(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((__LIB_20__::func_271(iVar1, 2) && bVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					if (!__LIB_19__::func_591(14))
					{
						__LIB_20__::func_332();
					}
				}
				Stack.Push(__LIB_20__::func_271(iVar1, 6));
				Stack.Push(iVar1);
				Stack.Push(6);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					func_2041(iVar1);
				}
				Stack.Push(__LIB_20__::func_271(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					__LIB_32__::func_257(iVar1);
				}
				Stack.Push(__LIB_20__::func_271(iVar1, 9));
				Stack.Push(iVar1);
				Stack.Push(9);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					__LIB_19__::func_614(46);
				}
				Stack.Push(__LIB_20__::func_271(iVar1, 5));
				Stack.Push(iVar1);
				Stack.Push(5);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					if (__LIB_0__::func_109(iVar1))
					{
						func_2032();
					}
				}
			}
			if (!bVar2)
			{
				func_2046(iVar1, 0);
			}
			if (__LIB_20__::func_271(iVar1, 1) || __LIB_20__::func_271(iVar1, 2))
			{
				if (__LIB_0__::func_109(iVar1))
				{
					func_2029(iVar1, bVar2, bVar3);
				}
			}
		}
		if (__LIB_20__::func_271(iVar1, 3))
		{
		}
		iVar1++;
	}
}

void func_2029(int iParam0, bool bParam1, bool bParam2)//Position - 0xBFBE5
{
	if (func_2030(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_864(&(Local_365.f_72.f_4[iParam0 /*4*/])))
		{
			__LIB_0__::func_795(&(Local_365.f_72.f_4[iParam0 /*4*/]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_365.f_72.f_4[iParam0 /*4*/]));
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_453);
			if (__LIB_0__::func_937(StackVal, StackVal, 0))
			{
				func_2043(iParam0, 1);
			}
		}
	}
	else
	{
		__LIB_0__::clearF_1Prop(&(Local_365.f_72.f_4[iParam0 /*4*/]));
	}
}

bool func_2030(int iParam0)//Position - 0xBFC5A
{
	return __LIB_3__::func_479(&(Local_365.f_72), iParam0);
}

int func_2032()//Position - 0xBFC8C
{
	int iVar0;
	iVar0 = func_2036();
	if (iVar0 != -1)
	{
		__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_365.f_22[iVar0 /*24*/]), __LIB_19__::func_411(iVar0), 35);
		return 1;
	}
	return 0;
}

int func_2036()//Position - 0xBFED6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	iVar1 = -1;
	fVar4 = 999999.9f;
	Var2 = { Local_329 };
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iVar0 /*24*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_22[iVar0 /*24*/]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_19__::func_411(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_365.f_22[iVar0 /*24*/]), true))
					{
						fVar3 = SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_365.f_22[iVar0 /*24*/]), false));
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

void func_2041(int iParam0)//Position - 0xC003A
{
	int iVar0;
	Stack.Push(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_453);
	if (!__LIB_0__::func_937(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_453);
		iVar0 = (StackVal - __LIB_1__::func_724(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			__LIB_10__::func_399(&(uLocal_315[iParam0]));
			if (__LIB_19__::func_412(&(uLocal_315[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (__LIB_19__::func_412(&(uLocal_315[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (__LIB_20__::func_271(iParam0, 10))
	{
		if (bLocal_321)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_326, 0, 0);
		}
	}
	else if (__LIB_20__::func_291())
	{
	}
}

void func_2043(int iParam0, bool bParam1)//Position - 0xC0117
{
	if (!__LIB_0__::func_109(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Local_372[iLocal_327 /*35*/].f_24), iParam0))
		{
			__LIB_7__::func_698(&(Local_372[iLocal_327 /*35*/].f_24), iParam0);
		}
	}
	else if (__LIB_3__::func_479(&(Local_372[iLocal_327 /*35*/].f_24), iParam0))
	{
		__LIB_7__::func_696(&(Local_372[iLocal_327 /*35*/].f_24), iParam0);
	}
}

void func_2046(int iParam0, bool bParam1)//Position - 0xC01BF
{
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0))
		{
			__LIB_7__::func_698(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0);
		}
	}
	else
	{
		if (__LIB_3__::func_479(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0))
		{
			__LIB_7__::func_696(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0);
		}
		if (__LIB_20__::func_271(iParam0, 6))
		{
			if (uLocal_315[iParam0] != -1)
			{
				__LIB_10__::func_399(&(uLocal_315[iParam0]));
			}
			if (__LIB_0__::func_864(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2)))
			{
				__LIB_0__::clearF_1Prop(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2));
			}
		}
	}
}

int func_2047()//Position - 0xC026D
{
	if (((!bLocal_321 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324)) || func_990() == 21) || func_990() == 48)
	{
		return 0;
	}
	return 1;
}

void func_2049()//Position - 0xC02B0
{
	if (!func_2084())
	{
		func_2058();
		return;
	}
	if (!func_788())
	{
		__LIB_19__::func_507();
		return;
	}
	if (__LIB_0__::func_114())
	{
		__LIB_3__::func_198(__LIB_3__::func_860(), 0);
	}
	else if (func_999())
	{
		__LIB_3__::func_198("BBOT_LOSECOPS" /* GXT: Lose the Cops. */, 0);
	}
	else if (func_991() != -1)
	{
		Call_Loc(Local_218[func_991() /*21*/].f_20);
	}
}

void func_2058()//Position - 0xC0472
{
	__LIB_19__::func_507();
	func_2059(1, 1, 1);
}

void func_2059(bool bParam0, bool bParam1, bool bParam2)//Position - 0xC0485
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (bParam2)
	{
		__LIB_20__::func_221();
	}
	func_2081();
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = 0;
			while (iVar0 < __LIB_19__::func_586())
			{
				if (uLocal_356[iVar0] != __LIB_0__::getMinusOneOrNull())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uLocal_356[iVar0]))
					{
						bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(uLocal_356[iVar0]);
						bVar2 = __LIB_1__::func_693(bVar1, 1, 1);
						func_2060(bVar1, bVar2, 0);
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

void func_2060(bool bParam0, bool bParam1, int iParam2)//Position - 0xC04FC
{
	var uVar0;
	uVar0 = __LIB_20__::func_216(bParam0);
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (bParam1)
		{
			if (BitTest(Local_290.f_8, bParam0) || iParam2)
			{
				if (__LIB_19__::func_305(bParam0))
				{
					__LIB_12__::func_554(bParam0, __LIB_1__::func_389(__LIB_19__::func_574(bLocal_324, -2, 0, 0, 0)), 0, 0);
				}
				if (__LIB_19__::func_415(bParam0))
				{
					__LIB_3__::func_459(bParam0, 0);
				}
				if (__LIB_19__::func_304(bParam0))
				{
					__LIB_15__::func_359(bParam0, 0, 1, 0);
				}
				if (__LIB_19__::func_303(bParam0))
				{
					if (__LIB_19__::func_352(bParam0))
					{
						__LIB_19__::func_351(bParam0, 0, 1);
					}
				}
				if (__LIB_19__::func_414(bParam0))
				{
					__LIB_12__::func_535(bParam0, func_996(uVar0), 0, 0);
				}
				if (__LIB_19__::func_413(bParam0))
				{
					__LIB_19__::func_350(bParam0, 1f, 0, 0);
				}
				if (__LIB_19__::func_305(bParam0))
				{
					__LIB_12__::func_554(bParam0, 1, 0, 0);
				}
				if (__LIB_19__::func_472(bParam0))
				{
					__LIB_19__::func_369(bParam0, 0, 0);
				}
				MISC::CLEAR_BIT(&(Local_290.f_8), bParam0);
			}
		}
	}
}

void func_2081()//Position - 0xC0A06
{
	func_2082();
}

void func_2082()//Position - 0xC0A12
{
	if (HUD::DOES_BLIP_EXIST(iLocal_363))
	{
		HUD::REMOVE_BLIP(&iLocal_363);
	}
}

int func_2084()//Position - 0xC0A4D
{
	if (!bLocal_332)
	{
		return 0;
	}
	if (!__LIB_19__::func_628(7))
	{
		return 0;
	}
	if (__LIB_19__::func_628(8))
	{
		return 0;
	}
	if (!__LIB_19__::func_628(31))
	{
		return 0;
	}
	if (!func_488() == 0)
	{
		return 0;
	}
	if (__LIB_19__::func_682())
	{
		return 0;
	}
	return 1;
}

void func_2086()//Position - 0xC0AB0
{
	func_2128();
	func_2123();
	__LIB_32__::func_258();
	if (bLocal_333)
	{
		func_2095();
		func_2091();
		__LIB_32__::func_236();
	}
}

void func_2091()//Position - 0xC0C42
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (Local_290.f_11 != -1)
		{
			if (Local_290.f_11 == iVar0 && Local_290[iVar0 /*7*/].f_4 != bLocal_324)
			{
				Local_290.f_11 = __LIB_20__::func_216(bLocal_324);
				if (!func_562(iVar0, iLocal_328, 6) && !func_439(iVar0, 29))
				{
				}
			}
		}
		else if (Local_290[iVar0 /*7*/].f_4 == bLocal_324)
		{
			if (!func_562(iVar0, iLocal_328, 6) && !func_439(iVar0, 4))
			{
				if (__LIB_20__::func_222(iVar0))
				{
					Local_290.f_11 = iVar0;
					__LIB_19__::func_473(Local_334.f_0, bLocal_324, __LIB_0__::func_797(), 0, __LIB_19__::func_591(20), -1, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_2095()//Position - 0xC0DF7
{
	if (!func_788())
	{
		return;
	}
	func_2112();
	func_2107();
	__LIB_41__::func_91();
}

void func_2107()//Position - 0xC11E5
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (func_3(12))
	{
		if (!__LIB_19__::func_403())
		{
			if (!__LIB_19__::func_628(54))
			{
				__LIB_15__::func_570();
				__LIB_19__::func_306(1, 2147483647, 1);
				__LIB_19__::func_614(54);
				__LIB_0__::func_151("BBH_VISWARN" /* GXT: WARNING: You are visible ~HUD_COLOUR_RED~~BLIP_SIGHTSEER~~s~ to all players in session. */, -1);
			}
		}
		else if (__LIB_19__::func_628(54))
		{
			__LIB_15__::func_571();
			__LIB_19__::func_306(0, -1, 0);
			__LIB_19__::func_621(54);
		}
	}
	if (__LIB_0__::func_864(&(Local_365.f_2.f_18)))
	{
		if (!__LIB_0__::func_937(&(Local_365.f_2.f_18), __LIB_19__::func_860(), 0))
		{
			iVar0 = (__LIB_19__::func_860() - __LIB_1__::func_724(&(Local_365.f_2.f_18), 0, 0));
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

void func_2112()//Position - 0xC1553
{
	int iVar0;
	int iVar1;
	if (Local_196.f_102 == -1 || Local_196.f_102.f_1 == 1)
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_365.f_106)))
	{
		return;
	}
	if (NETWORK::IS_PLAYER_IN_CUTSCENE(bLocal_324))
	{
		return;
	}
	iVar0 = (__LIB_19__::func_585() - __LIB_1__::func_724(&(Local_365.f_106), 0, 0));
	if (iVar0 <= __LIB_19__::func_687() && !__LIB_19__::func_628(59))
	{
		__LIB_19__::func_614(59);
	}
	if (Local_196.f_102.f_1 == 2 && !__LIB_19__::func_628(59))
	{
		return;
	}
	if (Local_196.f_102.f_1 == 3 && (!func_790() || !__LIB_19__::func_628(59)))
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
	if (__LIB_2__::func_815(Local_365.f_106, (__LIB_19__::func_585() - 5000), 0) && !__LIB_2__::func_815(Local_365.f_106, (__LIB_19__::func_585() - 4000), 0))
	{
		if (!__LIB_19__::func_628(22))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			__LIB_19__::func_614(22);
		}
	}
	else if (__LIB_19__::func_628(22))
	{
		__LIB_19__::func_621(22);
	}
}

void func_2123()//Position - 0xC1853
{
	if (func_2127())
	{
		__LIB_20__::func_293(1);
	}
	else
	{
		__LIB_20__::func_293(0);
	}
}

int func_2127()//Position - 0xC1A25
{
	if ((((bLocal_333 && __LIB_19__::func_591(18)) && func_913(bLocal_324, 1)) && func_445(__LIB_20__::func_216(bLocal_324))) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
	{
		return 1;
	}
	return 0;
}

void func_2128()//Position - 0xC1A6E
{
	func_2129();
}

void func_2129()//Position - 0xC1A7A
{
	if (func_2846() > 0)
	{
		if (!__LIB_19__::func_628(9))
		{
			if (__LIB_20__::func_223())
			{
				if (__LIB_19__::func_864())
				{
					Stack.Push(&uLocal_357);
					Call_Loc(Local_213.f_47.f_1);
					if (__LIB_0__::func_937(StackVal, StackVal, 0) && !__LIB_19__::func_309())
					{
						func_2131();
						__LIB_19__::func_614(9);
					}
				}
			}
			else
			{
				__LIB_19__::func_614(9);
				__LIB_19__::func_614(10);
			}
		}
		else if (!__LIB_19__::func_628(10))
		{
			if (__LIB_1__::func_962(86))
			{
				__LIB_19__::func_614(10);
			}
		}
		else if (!__LIB_1__::func_962(86))
		{
			__LIB_19__::func_614(69);
		}
	}
}

void func_2131()//Position - 0xC1B1E
{
	__LIB_20__::func_387(86, __LIB_3__::func_860(), func_2133(), func_785(), -1, -1, -1082130432, 0, 1, 2, 128);
}

char* func_2133()//Position - 0xC1B51
{
	return func_2134();
}

char* func_2134()//Position - 0xC1B5D
{
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_550());
}

void func_2140()//Position - 0xC1C24
{
	__LIB_32__::func_260();
	__LIB_32__::func_259();
	__LIB_32__::func_311();
	func_2145();
	__LIB_32__::func_310();
	func_2143();
	func_2142();
	__LIB_32__::func_309();
}

void func_2142()//Position - 0xC1C98
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_19__::func_590() <= 0)
	{
		return;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_330))
	{
		return;
	}
	if (!__LIB_0__::func_937(&(Local_304.f_5), 1000, 0))
	{
		return;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_330, iVar0, false))
		{
		}
		else
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_330, iVar0, false);
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
						__LIB_20__::func_215(PLAYER::PLAYER_ID(), __LIB_19__::func_590(), 0, 0);
					}
					else
					{
						iVar0++;
					}
					__LIB_0__::clearF_1Prop(&(Local_304.f_5));
				}
void func_2143()//Position - 0xC1D8F
{
	if (Local_213.f_64.f_8 == 0)
	{
		return;
	}
	if (!__LIB_1__::func_693(bLocal_324, 1, 1))
	{
		if (__LIB_19__::func_628(67))
		{
			__LIB_19__::func_614(66);
		}
		return;
	}
	if (__LIB_3__::func_144(bLocal_324, 0, 0))
	{
		return;
	}
	Call_Loc(Local_213.f_64.f_8);
	if (StackVal)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) > 0)
		{
			__LIB_19__::func_614(67);
		}
		else if (__LIB_19__::func_628(66))
		{
			__LIB_20__::func_215(bLocal_324, __LIB_19__::func_590(), 0, 0);
			__LIB_19__::func_621(66);
		}
		else
		{
			__LIB_19__::func_621(67);
		}
	}
	else
	{
		__LIB_19__::func_621(67);
	}
}

void func_2145()//Position - 0xC1E7B
{
	if (bLocal_332)
	{
		if (!__LIB_19__::func_628(13))
		{
			if (__LIB_19__::func_691())
			{
				if (bLocal_321 && Global_2689235[bLocal_324 /*453*/].f_230 == 99)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) == 0)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&(Global_1943920.f_3), 0);
						__LIB_19__::func_614(13);
					}
					if (func_415(iLocal_328, 2) || func_415(iLocal_328, 8))
					{
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
						if (!__LIB_19__::func_628(80))
						{
							PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
						}
						Call_Loc(Local_213.f_64.f_15);
						if (StackVal)
						{
							__LIB_19__::func_614(80);
						}
					}
					if (__LIB_0__::func_523(3))
					{
						PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), true);
					}
				}
				else
				{
					Call_Loc(Local_213.f_64.f_2);
					if (!StackVal)
					{
						__LIB_19__::func_614(14);
					}
				}
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() != __LIB_19__::func_590())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(__LIB_19__::func_590());
			}
		}
		else
		{
			if (!__LIB_19__::func_691())
			{
				__LIB_19__::func_621(13);
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) > 0)
			{
				__LIB_19__::func_621(13);
				return;
			}
			if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
			}
		}
	}
}

void func_2160()//Position - 0xC242E
{
	func_2182();
	func_2161();
}

void func_2161()//Position - 0xC243E
{
	int iVar0;
	int iVar1;
	int iVar2;
	Stack.Push((Local_365.f_132.f_19 > 1 && Local_213.f_465.f_3 != 0));
	Call_Loc(Local_213.f_465.f_3);
	if (StackVal && StackVal)
	{
		Local_310.f_9 = func_903();
		iVar0 = 0;
		while (iVar0 < Local_365.f_132.f_19)
		{
			Stack.Push(func_2181());
			Stack.Push(iVar0);
			Call_Loc(Local_213.f_465.f_4.f_3);
			if (StackVal && StackVal)
			{
				if (func_2180(iVar0))
				{
					if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(Local_310.f_1[iVar0 /*4*/].f_1), __LIB_20__::func_319(Local_310.f_1[iVar0 /*4*/]), 10f, 0) && !__LIB_0__::func_86(func_897()))
					{
						HUD::SET_BLIP_COORDS(Local_310.f_1[iVar0 /*4*/].f_1, __LIB_20__::func_319(Local_310.f_1[iVar0 /*4*/]));
						HUD::SET_BLIP_ROUTE(Local_310.f_1[iVar0 /*4*/].f_1, func_2177(iVar0));
					}
					iVar1 = __LIB_0__::getMinusOneOrNull();
					if (iVar1 != -1)
					{
						HUD::SET_BLIP_ROTATION(Local_310.f_1[iVar0 /*4*/].f_1, iVar1);
					}
					if (func_2175())
					{
						__LIB_32__::func_261(iVar0);
					}
				}
			}
			else
			{
				__LIB_19__::func_696(iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		if (func_2181())
		{
			if (func_2170())
			{
				if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(Local_310.f_1[func_2169() /*4*/].f_1), func_897(), 10f, 0) && !__LIB_0__::func_86(func_897()))
				{
					HUD::SET_BLIP_COORDS(Local_310.f_1[func_2169() /*4*/].f_1, func_897());
					HUD::SET_BLIP_ROUTE(Local_310.f_1[func_2169() /*4*/].f_1, func_2167());
				}
				iVar2 = __LIB_0__::getMinusOneOrNull();
				if (iVar2 != -1)
				{
					HUD::SET_BLIP_ROTATION(Local_310.f_1[func_2169() /*4*/].f_1, iVar2);
				}
				if (func_2175())
				{
					func_2163();
				}
			}
		}
		else
		{
			func_2162();
		}
		Local_310.f_9 = func_903();
	}
}

void func_2162()//Position - 0xC25F4
{
	if (HUD::DOES_BLIP_EXIST(Local_310.f_1[func_2169() /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_310.f_1[func_2169() /*4*/].f_1));
	}
}

void func_2163()//Position - 0xC2621
{
	float fVar0;
	fVar0 = __LIB_19__::func_695();
	__LIB_19__::func_405(func_897(), (fVar0 * 1.8f), (fVar0 * 1.8f), __LIB_19__::func_310(), 12, __LIB_19__::func_418());
}

int func_2167()//Position - 0xC268B
{
	if (func_990() == 24)
	{
		Stack.Push(func_2169());
		Call_Loc(Local_213.f_465.f_2);
		return StackVal;
	}
	else if (func_990() == 25 && func_2168(bLocal_324))
	{
		Stack.Push(func_2169());
		Call_Loc(Local_213.f_465.f_2);
		return StackVal;
	}
	return 0;
}

int func_2168(int iParam0)//Position - 0xC26D6
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
						if (func_913(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), 1))
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

int func_2169()//Position - 0xC2774
{
	return Local_372[iLocal_327 /*35*/].f_14;
}

int func_2170()//Position - 0xC2786
{
	if (!HUD::DOES_BLIP_EXIST(Local_310.f_1[func_2169() /*4*/].f_1))
	{
		if (__LIB_0__::func_86(func_897()))
		{
			return 0;
		}
		Local_310.f_1[func_2169() /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(func_897());
		if (__LIB_0__::getMinusOneOrNull() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_310.f_1[func_2169() /*4*/].f_1, __LIB_0__::getMinusOneOrNull());
		}
		__LIB_2__::func_53(&(Local_310.f_1[func_2169() /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_310.f_1[func_2169() /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_310.f_1[func_2169() /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_310.f_1[func_2169() /*4*/].f_1, func_2167());
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_3__::func_860()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_310.f_1[func_2169() /*4*/].f_1, __LIB_3__::func_860());
		}
		if (Local_310.f_1[func_2169() /*4*/].f_2 && !Local_310.f_1[func_2169() /*4*/].f_3)
		{
			__LIB_19__::func_400(&(Local_310.f_1[func_2169() /*4*/].f_1), 0);
			Local_310.f_1[func_2169() /*4*/].f_3 = 1;
		}
		return 0;
	}
	else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_310.f_1[func_2169() /*4*/].f_1))
	{
		if (!func_2167())
		{
			HUD::SET_BLIP_ROUTE(Local_310.f_1[func_2169() /*4*/].f_1, false);
		}
	}
	else if (func_2167())
	{
		HUD::SET_BLIP_ROUTE(Local_310.f_1[func_2169() /*4*/].f_1, true);
	}
	return 1;
}

int func_2175()//Position - 0xC2960
{
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	Stack.Push(Local_213.f_465.f_1 != 0);
	Call_Loc(Local_213.f_465.f_1);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	if (iLocal_331 != 0 && VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_331))
	{
		if (!__LIB_0__::func_86(__LIB_19__::func_464(func_903())))
		{
			return 0;
		}
	}
	return 1;
}

int func_2177(int iParam0)//Position - 0xC29C8
{
	if (func_990() == 24)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_465.f_2);
		return StackVal;
	}
	else if (func_990() == 25 && func_2168(bLocal_324))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_465.f_2);
		return StackVal;
	}
	return 0;
}

int func_2180(int iParam0)//Position - 0xC2A98
{
	if (!HUD::DOES_BLIP_EXIST(Local_310.f_1[iParam0 /*4*/].f_1))
	{
		if (__LIB_0__::func_86(__LIB_20__::func_319(Local_310.f_1[iParam0 /*4*/])))
		{
			return 0;
		}
		Local_310.f_1[iParam0 /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(__LIB_20__::func_319(Local_310.f_1[iParam0 /*4*/]));
		if (__LIB_0__::getMinusOneOrNull() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_310.f_1[iParam0 /*4*/].f_1, __LIB_0__::getMinusOneOrNull());
		}
		__LIB_2__::func_53(&(Local_310.f_1[iParam0 /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_310.f_1[iParam0 /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_310.f_1[iParam0 /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_310.f_1[iParam0 /*4*/].f_1, func_2177(iParam0));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_3__::func_860()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_310.f_1[iParam0 /*4*/].f_1, __LIB_3__::func_860());
		}
		if (Local_310.f_1[iParam0 /*4*/].f_2 && !Local_310.f_1[iParam0 /*4*/].f_3)
		{
			__LIB_19__::func_400(&(Local_310.f_1[iParam0 /*4*/].f_1), 0);
			Local_310.f_1[iParam0 /*4*/].f_3 = 1;
		}
		return 0;
	}
	else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_310.f_1[iParam0 /*4*/].f_1))
	{
		if (!func_2177(iParam0))
		{
			HUD::SET_BLIP_ROUTE(Local_310.f_1[iParam0 /*4*/].f_1, false);
		}
	}
	else if (func_2177(iParam0))
	{
		HUD::SET_BLIP_ROUTE(Local_310.f_1[iParam0 /*4*/].f_1, true);
	}
	return 1;
}

int func_2181()//Position - 0xC2BF3
{
	if (!bLocal_333)
	{
		return 0;
	}
	Stack.Push(Local_213.f_465 != 0);
	Call_Loc(Local_213.f_465);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	if (func_415(iLocal_328, 2))
	{
		return 0;
	}
	if (func_990() != 24 && func_990() != 25)
	{
		return 0;
	}
	if (Local_310.f_9 != func_903())
	{
		return 0;
	}
	if (func_999())
	{
		return 0;
	}
	return 1;
}

void func_2182()//Position - 0xC2C67
{
	fLocal_350 = 99999f;
	if (!bLocal_321 || __LIB_0__::func_86(func_897()))
	{
		return;
	}
	Local_310.f_10 = SYSTEM::VDIST(Local_329, func_897());
	fLocal_350 = Local_310.f_10;
	Local_310.f_10 = fLocal_350;
}

void func_2183()//Position - 0xC2CB1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	bVar5 = func_2254();
	fVar6 = __LIB_19__::func_718();
	fVar6 = (fVar6 * fVar6);
	iVar7 = 0;
	while (iVar7 < Local_196.f_38)
	{
		bVar2 = false;
		bVar3 = false;
		func_122(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
				{
					__LIB_19__::func_717(iVar7, 1);
				}
				else
				{
					__LIB_19__::func_716(iVar7, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					__LIB_19__::func_717(iVar7, 0);
				}
				else
				{
					__LIB_19__::func_716(iVar7, 0);
				}
			}
			if (Local_213.f_156.f_181 != 0)
			{
				Stack.Push(iVar7);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_156.f_181);
			}
			func_2232(iVar7, iVar0, bVar3);
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
						if (func_64(iVar7, 20))
						{
							__LIB_19__::func_711();
						}
						func_2220(iVar7, iVar0);
						func_2218(iVar7, iVar0);
						func_2217(iVar7, iVar0, 1);
						if (!func_2215(iVar7, 0))
						{
							func_2209(iVar7, iVar0, bVar5);
							func_2202(iVar7, iVar0, &bVar4);
							func_2199(iVar7, iVar0, fVar6);
							func_2197(iVar7, iVar0);
						}
						func_2187(iVar7, iVar0);
						func_2186(iVar7, iVar0);
					}
				}
				break;
			case 4:
				func_2185(iVar7, iVar0);
				break;
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
					}
				}
				if (!__LIB_19__::func_591(7))
				{
					func_2184(iVar7, 1);
				}
				break;
			case 5:
				if (bVar2)
				{
					if (__LIB_19__::func_587(iVar7, 12) && __LIB_1__::func_561(Local_365.f_22[iVar7 /*24*/]))
					{
						__LIB_6__::func_843(&(Local_365.f_22[iVar7 /*24*/]));
					}
				}
				break;
		}
		iVar7++;
	}
	if (!bVar4)
	{
		if (__LIB_0__::func_864(&(Local_219.f_20)))
		{
			__LIB_0__::clearF_1Prop(&(Local_219.f_20));
		}
	}
	iVar7 = Local_219.f_22;
	func_122(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_2217(iVar7, iVar0, 0);
				}
			}
			break;
	}
}

void func_2184(int iParam0, int iParam1)//Position - 0xC2EAC
{
	int iVar0;
	if (iParam1 != __LIB_19__::func_608())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (((func_447(iVar0) && iParam0 == func_420(iVar0)) && !func_439(iVar0, 4)) && !func_562(iVar0, iLocal_328, 6))
		{
			func_983(iVar0, 9);
			func_983(iVar0, 47);
		}
		iVar0++;
	}
}

void func_2185(int iParam0, int iParam1)//Position - 0xC2F19
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_19__::func_587(iParam0, 13))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
}

void func_2186(int iParam0, int iParam1)//Position - 0xC2F6F
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
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) != iLocal_326)
	{
		return;
	}
	func_698(24);
	if (!__LIB_19__::func_591(28))
	{
		if (__LIB_15__::func_407(iParam1))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) < __LIB_20__::func_270() || PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(bLocal_324))
			{
				Call_Loc(Local_213.f_64.f_14);
				iVar1 = StackVal;
				__LIB_20__::func_215(bLocal_324, __LIB_20__::func_270(), 1, iVar1);
			}
		}
	}
}

void func_2187(int iParam0, int iParam1)//Position - 0xC2FF6
{
	if (!func_2196(iParam0))
	{
		return;
	}
	if (func_64(iParam0, 1) && !__LIB_19__::func_701(iParam0))
	{
		return;
	}
	if (!func_2194(iParam0, iLocal_328, 1))
	{
		if (__LIB_19__::func_698(iParam1, __LIB_19__::func_700(iParam0), __LIB_19__::func_699(iParam0)))
		{
			if (__LIB_0__::func_937(&(Local_219[iParam0 /*19*/].f_17), __LIB_19__::func_697(iParam0), 0))
			{
				func_2189(iParam0, 1);
				if (Local_213.f_156.f_132.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_213.f_156.f_132.f_1.f_5);
				}
			}
		}
		else if (__LIB_0__::func_864(&(Local_219[iParam0 /*19*/].f_17)))
		{
			__LIB_0__::clearF_1Prop(&(Local_219[iParam0 /*19*/].f_17));
		}
	}
	else if (!__LIB_19__::func_698(iParam1, __LIB_19__::func_700(iParam0), __LIB_19__::func_699(iParam0)))
	{
		func_2188(iParam0, 1);
		if (Local_213.f_156.f_132.f_1.f_5 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_213.f_156.f_132.f_1.f_5);
		}
	}
}

void func_2188(int iParam0, int iParam1)//Position - 0xC30E1
{
	if (__LIB_16__::func_758(&(Local_372[iLocal_328 /*35*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2189(int iParam0, int iParam1)//Position - 0xC3100
{
	if (__LIB_1__::func_458(&(Local_372[iLocal_328 /*35*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_2194(int iParam0, int iParam1, int iParam2)//Position - 0xC31E1
{
	return __LIB_0__::func_316(&(Local_372[iParam1 /*35*/].f_7[iParam0 /*2*/]), iParam2);
}

bool func_2196(int iParam0)//Position - 0xC3225
{
	if (Local_213.f_156.f_132.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1);
		return StackVal;
	}
	return func_64(iParam0, 17);
}

void func_2197(int iParam0, int iParam1)//Position - 0xC3251
{
	if (!bLocal_321)
	{
		return;
	}
	if (!func_2198(iParam0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iLocal_326))
	{
		func_2189(iParam0, 11);
		if (Local_213.f_156.f_190 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_190);
		}
	}
}

bool func_2198(int iParam0)//Position - 0xC32A4
{
	return func_64(iParam0, 15);
}

void func_2199(int iParam0, int iParam1, float fParam2)//Position - 0xC32B4
{
	if (!bLocal_321)
	{
		return;
	}
	if (!func_2201(iParam0))
	{
		return;
	}
	if (__LIB_19__::func_702(iParam1, fParam2))
	{
		func_2189(iParam0, 0);
	}
}

bool func_2201(int iParam0)//Position - 0xC332B
{
	return (func_64(iParam0, 16) && !func_64(iParam0, 0));
}

void func_2202(int iParam0, int iParam1, var uParam2)//Position - 0xC3348
{
	if (!func_64(iParam0, 18) && !func_2208(iParam0))
	{
		return;
	}
	if (__LIB_20__::func_294(iParam0, iParam1))
	{
		*uParam2 = 1;
		if (!__LIB_0__::func_864(&(Local_219.f_20)))
		{
			__LIB_0__::func_795(&(Local_219.f_20), 0, 0);
			if (Local_213.f_156.f_185 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_213.f_156.f_185);
			}
		}
		else if (__LIB_0__::func_937(&(Local_219.f_20), func_2203(iParam0), 0))
		{
			func_2189(iParam0, 8);
			if (Local_213.f_156.f_186 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_213.f_156.f_186);
			}
		}
	}
}

int func_2203(int iParam0)//Position - 0xC33DE
{
	bool bVar0;
	bVar0 = __LIB_19__::func_703();
	if (Local_213.f_156.f_183 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bVar0);
		Call_Loc(Local_213.f_156.f_183);
		return StackVal;
	}
	if (func_2204() && !bVar0)
	{
		return 8000;
	}
	return 1000;
}

bool func_2204()//Position - 0xC341E
{
	return func_415(iLocal_328, 9);
}

int func_2208(int iParam0)//Position - 0xC34D0
{
	if (func_64(iParam0, 19))
	{
		return 0;
	}
	if (Local_213.f_156.f_140.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_12);
		return StackVal;
	}
	if (__LIB_19__::func_587(iParam0, 8))
	{
		return 1;
	}
	if (__LIB_19__::func_591(30) && !func_64(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_2209(int iParam0, int iParam1, bool bParam2)//Position - 0xC352E
{
	if (!bParam2 || __LIB_19__::func_587(iParam0, 7))
	{
		return;
	}
	if (!__LIB_0__::func_864(&(Local_300[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*2*/])))
	{
		if (__LIB_19__::func_419(iParam0, iParam1))
		{
			__LIB_0__::func_795(&(Local_300[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), 0, 0);
		}
	}
	else if (func_2210(iParam0))
	{
		func_2189(iParam0, 7);
	}
}

int func_2210(int iParam0)//Position - 0xC359A
{
	if (__LIB_0__::func_937(&(Local_300[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), __LIB_19__::func_706(iParam0), 0))
	{
		if (!func_2211(__LIB_19__::func_705(iParam0), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_2211(int iParam0, int iParam1)//Position - 0xC35D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (Local_196.f_38.f_1[iVar0 /*21*/].f_14 == iParam0)
		{
			if (iParam1 && func_64(iVar0, 19))
			{
			}
			else if (func_123(iVar0) < 6)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_2215(int iParam0, int iParam1)//Position - 0xC36CB
{
	if (func_58(Local_196.f_38.f_1[iParam0 /*21*/].f_14))
	{
		if ((__LIB_0__::func_937(&(Local_365.f_22[iParam0 /*24*/].f_13), Local_365.f_22[iParam0 /*24*/].f_15, 0) || func_2216(iParam0)) || iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_2216(int iParam0)//Position - 0xC371D
{
	if (((((func_64(iParam0, 1) || func_64(iParam0, 0)) || func_64(iParam0, 14)) || func_64(iParam0, 12)) || func_64(iParam0, 11)) || func_64(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

void func_2217(int iParam0, int iParam1, int iParam2)//Position - 0xC3779
{
	int iVar0;
	int iVar1;
	iVar0 = func_38(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = __LIB_19__::func_589(iParam0);
	if (__LIB_19__::func_384(Local_219.f_23[iVar1 /*67*/].f_1[iVar0 /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_219.f_23[iVar1 /*67*/].f_1[iVar0 /*13*/].f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_219.f_23[iVar1 /*67*/].f_1[iVar0 /*13*/].f_10);
	}
}

void func_2218(int iParam0, int iParam1)//Position - 0xC37E0
{
	func_2219(iParam0, iParam1);
}

void func_2219(int iParam0, int iParam1)//Position - 0xC37F0
{
	if (!func_2194(iParam0, iLocal_328, 12))
	{
		if (Local_196.f_38.f_23[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*5*/] == Global_1837194 || Local_196.f_38.f_23[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*5*/] == Global_1837195)
		{
			PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 1);
			func_2189(iParam0, 12);
		}
	}
}

void func_2220(int iParam0, int iParam1)//Position - 0xC3852
{
	if (func_2228(iParam0, iParam1))
	{
		__LIB_20__::func_295(0, iParam0, iParam1, func_2225(iParam0), __LIB_19__::func_709(iParam0));
	}
}

int func_2225(int iParam0)//Position - 0xC39F2
{
	if (__LIB_19__::func_587(iParam0, 0))
	{
		return 9;
	}
	if (func_64(iParam0, 20))
	{
		return 6;
	}
	return func_2226(iParam0);
}

int func_2226(int iParam0)//Position - 0xC3A1E
{
	if (Local_213.f_156.f_140.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_5);
		return StackVal;
	}
	switch (func_990())
	{
		case 7:
			if (func_64(iParam0, 20))
			{
				return 6;
			}
			break;
		case 6:
			if (func_64(iParam0, 20))
			{
				return 10;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__::getMinusOneOrNull(iParam0) != -1)
			{
				return 9;
			}
			break;
	}
	if (__LIB_19__::func_587(iParam0, 3))
	{
		return 9;
	}
	return 6;
}

int func_2228(int iParam0, var uParam1)//Position - 0xC3AB9
{
	if ((__LIB_19__::func_587(iParam0, 0) && !__LIB_19__::func_710(iParam0, 0)) && !func_64(iParam0, 30))
	{
		return 1;
	}
	if (func_64(iParam0, 20) && func_2229(iParam0))
	{
		return 1;
	}
	if (Local_213.f_156.f_140.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_140.f_19);
		return StackVal;
	}
	return 0;
}

bool func_2229(int iParam0)//Position - 0xC3B23
{
	if (Local_213.f_521.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_521.f_4);
		return StackVal;
	}
	if (func_990() == 7 && __LIB_19__::func_591(36))
	{
		return 0;
	}
	return (func_990() == 7 || func_990() == 6);
}

void func_2232(int iParam0, int iParam1, bool bParam2)//Position - 0xC3B94
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	if (func_2250(iParam0, bParam2))
	{
		if (!BitTest(Local_219[iParam0 /*19*/].f_2.f_6, 2) && HUD::DOES_BLIP_EXIST(Local_219[iParam0 /*19*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_219[iParam0 /*19*/].f_2));
		}
		__LIB_2__::func_848(Local_365.f_22[iParam0 /*24*/], &(Local_219[iParam0 /*19*/].f_2), func_2249(iParam0), 0, 0, 0, func_2248(iParam0), 1, -1, 0, 0);
	}
	else if ((bLocal_332 && !BitTest(Local_219[iParam0 /*19*/].f_2.f_6, 2)) && func_2243(iParam0, bParam2))
	{
		iVar0 = func_2226(iParam0);
		iVar1 = func_2242(iParam0);
		bVar2 = __LIB_19__::func_715(iParam0);
		if (!HUD::DOES_BLIP_EXIST(Local_219[iParam0 /*19*/].f_2))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
			{
				__LIB_0__::func_621(&(Local_219[iParam0 /*19*/].f_2));
			}
			Stack.Push(Local_213.f_156.f_140.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_140.f_14);
			bVar3 = (StackVal && StackVal);
			__LIB_19__::func_536(&(Local_219[iParam0 /*19*/].f_2), iParam1, iVar1, iVar0, func_2248(iParam0), func_2239(iParam0), 0, bVar2, __LIB_19__::func_714(iParam0), bVar3);
			HUD::SET_BLIP_PRIORITY(Local_219[iParam0 /*19*/].f_2, __LIB_19__::func_713(iParam0));
		}
		else
		{
			if (__LIB_0__::func_114(iParam0))
			{
				HUD::SET_BLIP_ROTATION(Local_219[iParam0 /*19*/].f_2, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam1)));
			}
			if (func_2208(iParam0))
			{
				HUD::SET_BLIP_SHOW_CONE(Local_219[iParam0 /*19*/].f_2, true, 11);
			}
			if (iVar1 != -1 && iVar1 != HUD::GET_BLIP_SPRITE(Local_219[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_SPRITE(Local_219[iParam0 /*19*/].f_2, iVar1);
				HUD::SET_BLIP_SCALE(Local_219[iParam0 /*19*/].f_2, func_2239(iParam0));
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_219[iParam0 /*19*/].f_2, func_2248(iParam0));
				if (__LIB_19__::func_712(iParam0))
				{
					__LIB_19__::func_400(&(Local_219[iParam0 /*19*/].f_2), 0);
				}
			}
			if (__LIB_1__::func_389(iVar0) != HUD::GET_BLIP_COLOUR(Local_219[iParam0 /*19*/].f_2))
			{
				__LIB_2__::func_53(&(Local_219[iParam0 /*19*/].f_2), iVar0);
				HUD::SET_BLIP_SCALE(Local_219[iParam0 /*19*/].f_2, func_2239(iParam0));
				if (__LIB_19__::func_712(iParam0))
				{
					__LIB_19__::func_400(&(Local_219[iParam0 /*19*/].f_2), 0);
				}
			}
			if (bVar2 != HUD::IS_BLIP_SHORT_RANGE(Local_219[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_219[iParam0 /*19*/].f_2, bVar2);
			}
			if (__LIB_20__::func_228(iParam0, &iVar4, &fVar5, &fVar6))
			{
				__LIB_20__::func_338(Local_219[iParam0 /*19*/].f_2, iVar4, fVar5, fVar6);
			}
			Stack.Push(Local_213.f_156.f_140.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_140.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(Local_219[iParam0 /*19*/].f_2))
				{
					__LIB_19__::func_400(&(Local_219[iParam0 /*19*/].f_2), 0);
				}
			}
		}
	}
	else if (BitTest(Local_219[iParam0 /*19*/].f_2.f_6, 2))
	{
		__LIB_0__::func_621(&(Local_219[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
	{
		__LIB_0__::func_621(&(Local_219[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_BLIP_EXIST(Local_219[iParam0 /*19*/].f_2))
	{
		HUD::REMOVE_BLIP(&(Local_219[iParam0 /*19*/].f_2));
	}
}

float func_2239(int iParam0)//Position - 0xC3FE2
{
	if (Local_213.f_156.f_140.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_6);
		return StackVal;
	}
	switch (func_990())
	{
		case 7:
			if (func_64(iParam0, 20))
			{
				return 0.75f;
			}
			break;
	}
	if (func_2208(iParam0))
	{
		return 0.5f;
	}
	return 1f;
}

int func_2242(int iParam0)//Position - 0xC40D6
{
	if (Local_213.f_156.f_140.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_4);
		return StackVal;
	}
	switch (func_990())
	{
		case 7:
			if (func_64(iParam0, 20) && !__LIB_19__::func_591(36))
			{
				return 432;
			}
			break;
		case 6:
			if (func_64(iParam0, 20))
			{
				return 280;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__::getMinusOneOrNull(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_2243(int iParam0, bool bParam1)//Position - 0xC4169
{
	if (bParam1 && !__LIB_19__::func_587(iParam0, 20))
	{
		return 0;
	}
	if (Local_213.f_156.f_140 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140);
		return StackVal;
	}
	if (!__LIB_0__::func_109(iParam0))
	{
		return 0;
	}
	switch (func_990())
	{
		case 7:
		case 6:
			if (func_64(iParam0, 20))
			{
				return 1;
			}
			break;
		case 30:
		case 31:
		case 32:
			if (__LIB_0__::getMinusOneOrNull(iParam0) == func_2244())
			{
				return 1;
			}
			break;
	}
	if (func_2208(iParam0) && !func_2215(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_2244()//Position - 0xC4216
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (Local_290[iVar0 /*7*/].f_4 == bLocal_324 || func_562(iVar0, iLocal_328, 14))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_2248(int iParam0)//Position - 0xC44CF
{
	if (Local_213.f_156.f_140.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_13);
		return StackVal;
	}
	if (__LIB_19__::func_587(iParam0, 4))
	{
		return "PB_COP" /* GXT: Cop */;
	}
	if (__LIB_19__::func_587(iParam0, 3))
	{
		return "PB_CIV" /* GXT: Civilian */;
	}
	switch (func_990())
	{
		case 7:
		case 6:
			if (func_64(iParam0, 20))
			{
				return "PB_TARGET" /* GXT: Target */;
			}
			break;
	}
	return "PB_ENEMY" /* GXT: Enemy */;
}

float func_2249(int iParam0)//Position - 0xC4543
{
	if (func_64(iParam0, 19))
	{
		return 300f;
	}
	return -1f;
}

int func_2250(int iParam0, bool bParam1)//Position - 0xC455F
{
	Stack.Push(Local_213.f_156.f_187 != 0);
	Stack.Push(iParam0);
	Stack.Push(bParam1);
	Call_Loc(Local_213.f_156.f_187);
	if (StackVal && StackVal)
	{
		return 0;
	}
	if (!func_415(iLocal_328, 2) && __LIB_3__::func_559())
	{
		return 0;
	}
	if (func_415(iLocal_328, 2) && __LIB_1__::func_936(bLocal_324))
	{
		return 0;
	}
	if (!__LIB_0__::func_109(iParam0))
	{
		return 0;
	}
	if (__LIB_19__::func_587(iParam0, 3) || func_2194(iParam0, iLocal_328, 12))
	{
		return 0;
	}
	if (!func_64(iParam0, 19))
	{
		if (!func_2215(iParam0, 0))
		{
			return 0;
		}
	}
	if (func_2243(iParam0, bParam1))
	{
		return 0;
	}
	if (bParam1)
	{
		return 0;
	}
	return 1;
}

bool func_2254()//Position - 0xC4674
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() > Local_365.f_98 + 2;
}

void func_2255()//Position - 0xC4688
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < Local_196.f_85)
	{
		bVar1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iVar3 /*5*/]);
		if (bVar1)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_365.f_56[iVar3 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_213.f_407.f_35 != 0)
			{
				Stack.Push(iVar3);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_213.f_407.f_35);
			}
			func_2282(iVar3, iVar0);
			func_2274(iVar3, iVar0, bVar2);
			func_2268(iVar3, iVar0);
			switch (func_142(iVar3))
			{
				case 2:
					func_2264(iVar3, iVar0);
					if (!bVar2)
					{
						func_2261(iVar3, iVar0);
						__LIB_32__::func_238(iVar3, iVar0);
					}
					break;
				case 3:
					if (__LIB_19__::func_719(iVar3))
					{
						if (__LIB_1__::func_561(Local_365.f_56[iVar3 /*5*/]))
						{
							__LIB_6__::func_843(&(Local_365.f_56[iVar3 /*5*/]));
						}
					}
					else if (__LIB_19__::func_601(iVar3))
					{
						if (__LIB_1__::func_561(Local_365.f_56[iVar3 /*5*/]))
						{
							__LIB_1__::func_518(&(Local_365.f_56[iVar3 /*5*/]));
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

void func_2261(int iParam0, int iParam1)//Position - 0xC4847
{
	if (func_139(iParam0, 5))
	{
		if (__LIB_19__::func_420(func_990()))
		{
			__LIB_32__::func_239(2, iParam0, iParam1);
		}
		__LIB_19__::func_711();
	}
}

void func_2264(int iParam0, int iParam1)//Position - 0xC4909
{
	if (!func_2266(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_365.f_56[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2265(iParam0, 8);
	}
}

void func_2265(int iParam0, int iParam1)//Position - 0xC493D
{
	if (__LIB_1__::func_458(&(Local_372[iLocal_328 /*35*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_2266(int iParam0)//Position - 0xC495C
{
	if (func_2267(iParam0, iLocal_328, 8))
	{
		return 0;
	}
	Stack.Push(Local_213.f_407.f_29 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_407.f_29);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_2267(int iParam0, int iParam1, int iParam2)//Position - 0xC4998
{
	return __LIB_0__::func_316(&(Local_372[iParam1 /*35*/].f_10[iParam0 /*2*/]), iParam2);
}

void func_2268(int iParam0, int iParam1)//Position - 0xC49B3
{
	float fVar0;
	if (!__LIB_19__::func_596(iParam0, 30))
	{
		return;
	}
	fVar0 = __LIB_19__::func_726(iParam0);
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2267(iParam0, iLocal_328, 10))
	{
		if (__LIB_19__::func_723(iParam1, fVar0, __LIB_19__::func_725(iParam0), __LIB_19__::func_724(iParam0)))
		{
			func_2265(iParam0, 11);
			func_2265(iParam0, 10);
			if (Local_213.f_407.f_45 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(1);
				Call_Loc(Local_213.f_407.f_45);
			}
		}
	}
	else if (!__LIB_19__::func_723(iParam1, fVar0, __LIB_19__::func_725(iParam0), __LIB_19__::func_724(iParam0)))
	{
		func_2269(iParam0, 10);
		if (Local_213.f_407.f_45 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_213.f_407.f_45);
		}
	}
}

void func_2269(int iParam0, int iParam1)//Position - 0xC4A65
{
	if (__LIB_16__::func_758(&(Local_372[iLocal_328 /*35*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2274(int iParam0, int iParam1, bool bParam2)//Position - 0xC4B47
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	if (bLocal_332 && func_2281(iParam0, bParam2))
	{
		iVar0 = func_2280(iParam0);
		iVar1 = func_2279(iParam0);
		fVar2 = func_2278(iParam0);
		bVar3 = __LIB_19__::func_728(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_299[iParam0]))
		{
			Stack.Push(Local_213.f_407.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_407.f_14);
			bVar4 = (StackVal && StackVal);
			__LIB_19__::func_536(&(uLocal_299[iParam0]), iParam1, iVar1, iVar0, func_2276(iParam0), fVar2, 0, bVar3, __LIB_19__::func_727(iParam0), bVar4);
			HUD::SET_BLIP_PRIORITY(uLocal_299[iParam0], 12);
		}
		else
		{
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_299[iParam0]))
			{
				if (iVar1 != -1)
				{
					HUD::SET_BLIP_SPRITE(uLocal_299[iParam0], iVar1);
				}
				HUD::SET_BLIP_SCALE(uLocal_299[iParam0], fVar2);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_299[iParam0], func_2276(iParam0));
			}
			if (bVar3 != HUD::IS_BLIP_SHORT_RANGE(uLocal_299[iParam0]))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_299[iParam0], bVar3);
			}
			if (__LIB_1__::func_389(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_299[iParam0]))
			{
				__LIB_2__::func_53(&(uLocal_299[iParam0]), iVar0);
			}
			if (__LIB_19__::func_596(iParam0, 23))
			{
				__LIB_20__::func_338(uLocal_299[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_213.f_407.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_407.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_299[iParam0]))
				{
					__LIB_19__::func_400(&(uLocal_299[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_299[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_299[iParam0]));
	}
}

char* func_2276(int iParam0)//Position - 0xC4CF9
{
	if (Local_213.f_407.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_13);
		return StackVal;
	}
	if (__LIB_19__::func_420(func_990()) && func_139(iParam0, 5))
	{
		return "PB_TARGET" /* GXT: Target */;
	}
	return "BLIP_OBJ" /* GXT: Object */;
}

float func_2278(int iParam0)//Position - 0xC4D60
{
	if (Local_213.f_407.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_6);
		return StackVal;
	}
	if (__LIB_19__::func_420(func_990()) && func_139(iParam0, 5))
	{
		return 1f;
	}
	return 1f;
}

int func_2279(int iParam0)//Position - 0xC4D9E
{
	if (Local_213.f_407.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_4);
		return StackVal;
	}
	if ((func_990() == 7 && func_139(iParam0, 5)) && !__LIB_19__::func_591(36))
	{
		return 432;
	}
	if (func_990() == 6 && func_139(iParam0, 5))
	{
		return 32;
	}
	return 32;
}

int func_2280(int iParam0)//Position - 0xC4E03
{
	if (Local_213.f_407.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_5);
		return StackVal;
	}
	if (func_990() == 7 && func_139(iParam0, 5))
	{
		return 6;
	}
	if (func_990() == 6 && func_139(iParam0, 5))
	{
		return 10;
	}
	return 6;
}

int func_2281(int iParam0, bool bParam1)//Position - 0xC4E59
{
	if (bParam1)
	{
		return 0;
	}
	if (!bLocal_333)
	{
		return 0;
	}
	if (Local_213.f_407 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407);
		return StackVal;
	}
	if (__LIB_19__::func_420(func_990()) && func_139(iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_2282(int iParam0, int iParam1)//Position - 0xC4EA7
{
	if (!func_2285(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_365.f_56[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, true);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iParam1, true), __LIB_19__::func_730(iParam0), __LIB_19__::func_729(iParam0), true, false, 1f, false);
		func_2265(iParam0, 9);
	}
}

int func_2285(int iParam0)//Position - 0xC4F65
{
	if (func_2267(iParam0, iLocal_328, 9) || func_139(iParam0, 3))
	{
		return 0;
	}
	Stack.Push(Local_213.f_407.f_30 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_407.f_30);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_2286()//Position - 0xC4FAE
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
	fLocal_351 = 99999f;
	uLocal_287.f_2 = -1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_67)
	{
		func_2339(iVar0);
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_365.f_47[iVar0 /*8*/]);
			bVar3 = __LIB_0__::func_939(Local_365.f_47[iVar0 /*8*/]);
			bVar4 = __LIB_1__::func_483(iLocal_326, iVar2);
			bVar6 = false;
			if (bVar3)
			{
				iVar1 = func_419(iVar0, 2);
			}
			if (bVar4)
			{
				uLocal_287.f_2 = iVar0;
				func_2337(iVar0, 4);
				bVar6 = iLocal_326 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
				if (bVar6)
				{
					func_2337(iVar0, 9);
				}
			}
			if (func_147(iVar0, 14))
			{
				if (!func_2336(iVar0, NETWORK::PARTICIPANT_ID(), 10))
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iVar2)
					{
						func_2337(iVar0, 10);
					}
				}
			}
			if (Local_213.f_352.f_45 != 0)
			{
				Stack.Push(iVar0);
				Stack.Push(iVar2);
				Stack.Push(bVar3);
				Stack.Push(bVar4);
				Stack.Push(iVar1);
				Call_Loc(Local_213.f_352.f_45);
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
		func_2325(iVar0, iVar2, bVar3);
		if (bVar5)
		{
			func_2324(iVar0, iVar2);
			func_2322(iVar0, iVar2);
			func_2321(iVar0, iVar2);
			switch (func_112(iVar0))
			{
				case 0:
					break;
				case 2:
					break;
				case 4:
					if (bVar5)
					{
						func_2317(iVar0, iVar2);
						func_2316(iVar0);
						func_2315(iVar0, iVar2);
						func_2313(iVar0, iVar2, iVar1, bVar4);
						if (bVar3)
						{
							func_2312(iVar0, iVar2);
							func_2311(iVar0, iVar2);
							func_2304(iVar0, iVar2);
							func_2302(iVar0, iVar2);
							func_2293(iVar0, iVar2);
							__LIB_19__::func_731(iVar0, iVar2);
							func_2291(iVar0, iVar2);
							if (__LIB_20__::func_231(iVar0, iVar2))
							{
								bVar7 = true;
							}
						}
					}
					break;
				case 5:
					if (!__LIB_19__::func_591(7))
					{
						func_2184(iVar0, 2);
					}
					break;
				case 3:
					func_2288(iVar0, iVar2);
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
		__LIB_20__::func_230(1);
	}
	else
	{
		__LIB_20__::func_230(0);
	}
	fLocal_352 = fLocal_351;
	fLocal_351 = fLocal_352;
}

void func_2288(int iParam0, int iParam1)//Position - 0xC521D
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
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
		if (func_285(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			__LIB_19__::func_421(iParam0, 1, Local_365.f_98);
		}
	}
}

void func_2291(int iParam0, int iParam1)//Position - 0xC5375
{
	if (!func_2336(iParam0, iLocal_328, 8))
	{
		if (__LIB_19__::func_602(iParam0, 9))
		{
			PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(iLocal_326, iParam1, 0, 1, -2);
		}
		func_2337(iParam0, 8);
	}
}

void func_2293(int iParam0, int iParam1)//Position - 0xC53CE
{
	if (func_147(iParam0, 16) && __LIB_19__::func_420(func_990()))
	{
		__LIB_32__::func_239(1, iParam0, iParam1);
	}
	else if (func_2299(iParam0, iParam1))
	{
		func_2294(iParam0, iParam1);
	}
}

void func_2294(int iParam0, int iParam1)//Position - 0xC540D
{
	__LIB_20__::func_295(1, iParam0, iParam1, func_2296(iParam0), __LIB_19__::func_732(iParam0));
}

int func_2296(int iParam0)//Position - 0xC5451
{
	int iVar0;
	int iVar1;
	if (func_147(iParam0, 14))
	{
		iVar0 = func_419(iParam0, 2);
		iVar1 = func_988(iVar0, 0);
		return __LIB_19__::func_422(iVar1);
	}
	return func_2297(iParam0);
}

int func_2297(int iParam0)//Position - 0xC5485
{
	if (Local_213.f_352.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_5);
		return StackVal;
	}
	if (func_990() == 7 && func_147(iParam0, 16))
	{
		return 6;
	}
	if (func_990() == 6 && func_147(iParam0, 16))
	{
		return 10;
	}
	return 9;
}

int func_2299(int iParam0, int iParam1)//Position - 0xC5512
{
	if (func_2300(iParam0))
	{
		return 1;
	}
	if (Local_213.f_352.f_19 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_352.f_19);
		return StackVal;
	}
	return 0;
}

int func_2300(int iParam0)//Position - 0xC5544
{
	if (!func_147(iParam0, 14))
	{
		return 0;
	}
	if (!__LIB_19__::func_591(17) && !__LIB_0__::func_109())
	{
		return 0;
	}
	if (!func_147(iParam0, 13))
	{
		return 0;
	}
	if (func_990() != 22)
	{
		return 0;
	}
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	return 1;
}

void func_2302(int iParam0, int iParam1)//Position - 0xC55A9
{
	Stack.Push(!__LIB_19__::func_602(iParam0, 3));
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_213.f_352.f_31);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
	{
		__LIB_20__::func_232(iParam0, iParam1);
	}
}

void func_2304(int iParam0, int iParam1)//Position - 0xC5640
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (!__LIB_19__::func_602(iParam0, 14) || !__LIB_19__::func_874(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
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
		Var2.f_4 = __LIB_16__::func_767();
		Var2.f_1 = 1;
		Var2.f_12 = 1;
		Var2.f_13 = 0;
		Var2.f_5 = 1;
		if (func_285(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			if (Local_213.f_352.f_35 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_352.f_35);
			}
		}
	}
}

void func_2311(int iParam0, int iParam1)//Position - 0xC5804
{
	float fVar0;
	Stack.Push(Local_213.f_352.f_30 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_30);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(Local_329, ENTITY::GET_ENTITY_COORDS(iParam1, false));
	if (fVar0 < fLocal_351)
	{
		fLocal_351 = fVar0;
		iLocal_342 = iLocal_342;
		iLocal_342 = iParam0;
	}
}

void func_2312(int iParam0, int iParam1)//Position - 0xC5859
{
	if (func_147(iParam0, 16))
	{
		__LIB_19__::func_711();
	}
}

void func_2313(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xC5870
{
	if (!func_2314(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2337(iParam0, 1);
	}
}

int func_2314(int iParam0, int iParam1, var uParam2)//Position - 0xC58A7
{
	if (func_2336(iParam0, iLocal_328, 1))
	{
		return 0;
	}
	if ((func_147(iParam0, 14) && uParam2) || ((iParam1 != -1 && func_439(iParam1, 7)) && func_439(iParam1, 1)))
	{
		return 1;
	}
	Stack.Push(Local_213.f_352.f_29 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_29);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

void func_2315(int iParam0, int iParam1)//Position - 0xC591A
{
	if ((!__LIB_19__::func_602(iParam0, 12) || func_147(iParam0, 11)) || func_2336(iParam0, iLocal_328, 7))
	{
		return;
	}
	if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iParam1))
	{
		if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
		{
			VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iParam1, 5f, 5f, false);
			func_2337(iParam0, 7);
		}
	}
}

void func_2316(int iParam0)//Position - 0xC5978
{
	if (func_415(iLocal_328, 29))
	{
		return;
	}
	if (__LIB_19__::func_602(iParam0, 20) || __LIB_19__::func_602(iParam0, 21))
	{
		func_698(29);
	}
}

void func_2317(int iParam0, int iParam1)//Position - 0xC59AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!__LIB_19__::func_602(iParam0, 15) || func_147(iParam0, 3)) || func_2336(iParam0, iLocal_328, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Local_365.f_47[iVar0 /*8*/];
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
				func_2337(iParam0, 3);
			}
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1, iVar2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar2, "chassis_dummy"), __LIB_19__::func_734(iParam0), __LIB_19__::func_733(iParam0), false, false, false, false, 2, true, 0);
		}
		else
		{
			func_2337(iParam0, 3);
		}
	}
}

void func_2321(int iParam0, int iParam1)//Position - 0xC5B4A
{
	if (bLocal_321 && Local_310.f_10 <= 10f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
		{
			if (iParam1 == PED::GET_VEHICLE_PED_IS_IN(iLocal_326, false) && iLocal_341 != iParam0)
			{
				iLocal_341 = iParam0;
			}
		}
	}
	else if ((iLocal_341 != -1 && !Global_1952191.f_5314) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iLocal_341 = -1;
	}
	if (iParam0 == iLocal_341)
	{
		if (Global_1952191.f_5314 && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			__LIB_19__::func_421(iParam0, 0, Local_365.f_98);
			iLocal_341 = -1;
		}
	}
}

void func_2322(int iParam0, int iParam1)//Position - 0xC5BE2
{
	float fVar0;
	if (!__LIB_19__::func_602(iParam0, 24))
	{
		return;
	}
	Stack.Push(func_147(iParam0, 6));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_24);
	if (StackVal && !StackVal)
	{
		return;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_25);
	fVar0 = StackVal;
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2336(iParam0, iLocal_328, 5))
	{
		Stack.Push(iParam1);
		Stack.Push(fVar0);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_26);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_27);
		if (__LIB_19__::func_723(StackVal, StackVal, StackVal, StackVal))
		{
			func_2337(iParam0, 5);
			if (Local_213.f_352.f_28 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(1);
				Call_Loc(Local_213.f_352.f_28);
			}
		}
	}
	else
	{
		Stack.Push(iParam1);
		Stack.Push(fVar0);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_26);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_27);
		if (!__LIB_19__::func_723(StackVal, StackVal, StackVal, StackVal))
		{
			func_2323(iParam0, 5);
			if (Local_213.f_352.f_28 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(0);
				Call_Loc(Local_213.f_352.f_28);
			}
		}
	}
}

void func_2323(int iParam0, int iParam1)//Position - 0xC5CC0
{
	if (__LIB_16__::func_758(&(Local_372[iLocal_328 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2324(int iParam0, int iParam1)//Position - 0xC5CDF
{
	if (Local_196.f_67.f_1[iParam0 /*15*/].f_9 == -1)
	{
		return;
	}
	if (!func_147(iParam0, 2))
	{
		if (!func_147(iParam0, 0) && !func_2336(iParam0, iLocal_328, 0))
		{
			if (__LIB_1__::func_561(Local_365.f_47[iParam0 /*8*/]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_365.f_47[iParam0 /*8*/], true);
				func_2337(iParam0, 0);
			}
		}
	}
}

void func_2325(int iParam0, int iParam1, bool bParam2)//Position - 0xC5D4C
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	bool bVar6;
	if (bLocal_332 && func_2333(iParam0, iParam1, bParam2))
	{
		iVar0 = func_2297(iParam0);
		iVar1 = func_2332(iParam0);
		fVar2 = func_2331(iParam0);
		bVar3 = __LIB_19__::func_737(iParam0);
		bVar4 = __LIB_19__::func_736(iParam0);
		sVar5 = func_2328(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_287[iParam0]))
		{
			Stack.Push(Local_213.f_352.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_352.f_14);
			bVar6 = (StackVal && StackVal);
			__LIB_19__::func_536(&(uLocal_287[iParam0]), iParam1, iVar1, iVar0, sVar5, fVar2, 0, bVar3, bVar4, bVar6);
			HUD::SET_BLIP_PRIORITY(uLocal_287[iParam0], __LIB_19__::func_735(iParam0));
			func_2337(iParam0, 11);
		}
		else
		{
			if (func_2326(iParam0))
			{
				HUD::SET_BLIP_ROTATION(uLocal_287[iParam0], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam1)));
			}
			if (iVar1 != HUD::GET_BLIP_SPRITE(uLocal_287[iParam0]))
			{
				HUD::SET_BLIP_SPRITE(uLocal_287[iParam0], iVar1);
				HUD::SET_BLIP_SCALE(uLocal_287[iParam0], fVar2);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_287[iParam0], sVar5);
				}
			}
			if (bVar3 != HUD::IS_BLIP_SHORT_RANGE(uLocal_287[iParam0]))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_287[iParam0], bVar3);
			}
			if (__LIB_1__::func_389(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_287[iParam0]))
			{
				__LIB_2__::func_53(&(uLocal_287[iParam0]), iVar0);
			}
			if (__LIB_19__::func_602(iParam0, 16))
			{
				__LIB_20__::func_338(uLocal_287[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_213.f_352.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_352.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_287[iParam0]))
				{
					__LIB_19__::func_400(&(uLocal_287[iParam0]), 0);
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_287[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_287[iParam0]));
	}
}

int func_2326(int iParam0)//Position - 0xC5F0F
{
	if (Local_213.f_352.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_18);
		return StackVal;
	}
	switch (func_2332(iParam0))
	{
		case 460:
			return 1;
		default:
	}
	return 0;
}

char* func_2328(int iParam0)//Position - 0xC5F6B
{
	if (Local_213.f_352.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_13);
		return StackVal;
	}
	if (__LIB_19__::func_420(func_990()) && func_147(iParam0, 16))
	{
		return "PB_TARGET" /* GXT: Target */;
	}
	return "BLIP_VEH" /* GXT: Vehicle */;
}

float func_2331(int iParam0)//Position - 0xC5FF6
{
	if (Local_213.f_352.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_6);
		return StackVal;
	}
	if (__LIB_19__::func_420(func_990()) && func_147(iParam0, 16))
	{
		return 1f;
	}
	return 1f;
}

int func_2332(int iParam0)//Position - 0xC6035
{
	if (Local_213.f_352.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_4);
		return StackVal;
	}
	switch (func_990())
	{
		case 7:
			if (func_147(iParam0, 16) && !__LIB_19__::func_591(36))
			{
				return 432;
			}
			break;
		case 6:
			if (func_147(iParam0, 16))
			{
				return 225;
			}
			break;
	}
	return 225;
}

int func_2333(int iParam0, int iParam1, bool bParam2)//Position - 0xC60A1
{
	if (!bParam2)
	{
		return 0;
	}
	if (iLocal_330 == iParam1)
	{
		return 0;
	}
	Stack.Push(Local_213.f_352 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352);
	if (StackVal && StackVal)
	{
		return 1;
	}
	switch (func_990())
	{
		case 7:
		case 6:
			if (func_147(iParam0, 16))
			{
				return 1;
			}
			break;
		case 29:
			if ((__LIB_0__::getMinusOneOrNull(func_419(iParam0, 2)) != -1 && !__LIB_19__::func_738(func_419(iParam0, 2))) && !func_561(func_419(iParam0, 2), 1))
			{
				return 1;
			}
			break;
		case 33:
			if (__LIB_0__::getMinusOneOrNull(func_419(iParam0, 2)) != -1 && !func_561(func_419(iParam0, 2), 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_2336(int iParam0, int iParam1, int iParam2)//Position - 0xC6192
{
	return __LIB_0__::func_316(&(Local_372[iParam1 /*35*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_2337(int iParam0, int iParam1)//Position - 0xC61AD
{
	if (__LIB_1__::func_458(&(Local_372[iLocal_328 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2339(int iParam0)//Position - 0xC6210
{
	func_2323(iParam0, 4);
	func_2323(iParam0, 9);
}

void func_2340()//Position - 0xC6227
{
	if (__LIB_15__::func_358(bLocal_324, Local_365.f_129) > 0)
	{
		__LIB_15__::func_345(1, __LIB_0__::func_955(Local_334.f_0));
		__LIB_20__::func_327(1);
		func_2342(1);
	}
	else
	{
		__LIB_15__::func_345(0, __LIB_0__::func_955(Local_334.f_0));
		__LIB_20__::func_327(0);
		func_2342(0);
	}
	if (Local_310.f_11 > 0)
	{
		__LIB_0__::func_467();
	}
}

void func_2342(bool bParam0)//Position - 0xC6285
{
	if (bParam0)
	{
		if (__LIB_4__::func_380() == 0)
		{
			__LIB_19__::func_476(func_903(), Local_365.f_129);
		}
	}
	else
	{
		__LIB_19__::func_560(Local_365.f_129);
	}
}

void func_2356()//Position - 0xC6616
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
						func_2428(iVar2);
						break;
					case -1544474774:
						func_2378(iVar2);
						break;
					case -1946222827:
						__LIB_20__::func_236(iVar2);
						break;
					case 177099551:
						func_2376(iVar2);
						break;
					case 1592032725:
						break;
					case 1275205244:
						func_2369(iVar2);
						break;
				}
				break;
			case 186:
				func_2358(iVar2);
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
				func_2357(iVar2);
				break;
		}
		iVar2++;
	}
}

void func_2357(int iParam0)//Position - 0xC66FD
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
	while (iVar3 < Local_196.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iVar3 /*24*/]))
		{
			iVar4 = NETWORK::NET_TO_PED(Local_365.f_22[iVar3 /*24*/]);
			if (iVar4 == Var0.f_1)
			{
				if (func_64(iVar3, 25) || func_2194(iVar3, iLocal_328, 15))
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
				func_2189(iVar1, 15);
			}
			else
			{
				iVar3++;
			}
		}
void func_2358(int iParam0)//Position - 0xC67C5
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
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) == 0)
				{
					if (__LIB_15__::func_407(iVar3))
					{
						if (func_2367(iVar3))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_326 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								uVar4 = __LIB_20__::func_270();
								__LIB_20__::func_215(bLocal_324, uVar4, 1, 0);
							}
						}
					}
				}
				iVar5 = 0;
				while (iVar5 < Local_196.f_38.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iVar5 /*24*/]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_365.f_22[iVar5 /*24*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
								if (PED::IS_PED_A_PLAYER(iVar6))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
									if (__LIB_19__::func_479(Var1, iVar6))
									{
										func_2189(iVar5, 9);
									}
									if (Local_213.f_156.f_188 != 0)
									{
										Stack.Push(iVar5);
										Stack.Push(Var1);
										Stack.Push(iVar2);
										Call_Loc(Local_213.f_156.f_188);
									}
									if (iVar2 == bLocal_324)
									{
										__LIB_20__::func_332();
										if (Var1.f_5 && __LIB_19__::func_740(iVar5))
										{
											Local_307.f_3++;
										}
									}
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
									{
									}
								}
							}
							else if (Local_213.f_156.f_189 != 0)
							{
								Stack.Push(iVar5);
								Stack.Push(Var1);
								Call_Loc(Local_213.f_156.f_189);
							}
						}
					}
					iVar5++;
				}
				if (((!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(Var1.f_0)) && Var1.f_5) && __LIB_19__::func_739())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
							{
								Local_307.f_4++;
							}
						}
					}
				}
				__LIB_32__::func_240(Var1, iVar3, iVar2);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(Var1.f_0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) < __LIB_20__::func_270())
				{
					iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
					iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), 0, false);
					if (__LIB_19__::func_478(Var1.f_0, iVar8, iVar9))
					{
						if (func_2367(iVar8))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_326 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								iVar10 = __LIB_20__::func_270();
								__LIB_20__::func_215(bLocal_324, iVar10, 1, 0);
							}
						}
					}
				}
				iVar11 = 0;
				while (iVar11 < Local_196.f_67.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[iVar11 /*8*/]))
					{
						if (((((Local_213.f_352.f_48 != 0 && ENTITY::DOES_ENTITY_EXIST(Var1.f_1)) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_365.f_47[iVar11 /*8*/]), -1, false)) && Var1.f_9) && (Var1.f_6 == joaat("WEAPON_RAMMED_BY_CAR") || Var1.f_6 == joaat("WEAPON_RUN_OVER_BY_CAR")))
						{
							Stack.Push(iVar11);
							Stack.Push(Var1);
							Stack.Push(0);
							Call_Loc(Local_213.f_352.f_48);
						}
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_365.f_47[iVar11 /*8*/]))
						{
							iVar2 = 0;
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar2 == bLocal_324)
									{
										__LIB_20__::func_332();
									}
									iVar12 = func_2359(iVar11);
									if (iVar12 != -1)
									{
										func_2189(iVar12, 10);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
										{
										}
									}
								}
							}
							if (Local_213.f_352.f_47 != 0)
							{
								Stack.Push(iVar11);
								Stack.Push(Var1);
								Stack.Push(iVar2);
								Call_Loc(Local_213.f_352.f_47);
							}
						}
					}
					iVar11++;
				}
				iVar13 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					__LIB_32__::func_240(Var1, iVar13, iVar2);
				}
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(Var1.f_0))
			{
				iVar0 = 0;
				while (iVar0 < Local_196.f_19.f_5)
				{
					if (!func_439(iVar0, 4) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar0]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_365.f_2[iVar0]))
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
								func_983(iVar0, 9);
								func_983(iVar0, 47);
								if (Local_213.f_114.f_33 != 0)
								{
									Stack.Push(iVar0);
									Call_Loc(Local_213.f_114.f_33);
								}
							}
						}
					}
					iVar0++;
				}
				iVar14 = 0;
				while (iVar14 < Local_196.f_85.f_1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iVar14 /*5*/]))
					{
						if (Var1.f_0 == NETWORK::NET_TO_ENT(Local_365.f_56[iVar14 /*5*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
							{
								if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1));
									if (iVar2 == bLocal_324)
									{
										__LIB_20__::func_332();
									}
									if (Local_213.f_407.f_34 != 0)
									{
										Stack.Push(iVar14);
										Stack.Push(Var1);
										Stack.Push(iVar2);
										Call_Loc(Local_213.f_407.f_34);
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

int func_2359(int iParam0)//Position - 0xC6D06
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_365.f_47[iParam0 /*8*/]), -1, false))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_365.f_47[iParam0 /*8*/]), -1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_196.f_38.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iVar1 /*24*/]) && iVar0 == NETWORK::NET_TO_PED(Local_365.f_22[iVar1 /*24*/]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

int func_2367(int iParam0)//Position - 0xC70AF
{
	if (!func_790() || !__LIB_41__::func_87(0, 0, 1))
	{
		return 0;
	}
	if (__LIB_19__::func_591(28))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2369(int iParam0)//Position - 0xC70FB
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
	if (!func_790())
	{
		return;
	}
	sVar1 = __LIB_19__::func_742(Var0.f_3);
	sVar2 = __LIB_19__::func_741(Var0.f_3);
	switch (Var0.f_2)
	{
		case 0:
			if (Var0.f_1 == bLocal_324)
			{
				__LIB_3__::func_218("FMC_TIC_HAXSPu" /* GXT: You hacked the security panel. */, 0);
			}
			else
			{
				__LIB_19__::func_884("FMC_TIC_HAXSPr" /* GXT: ~a~~s~ hacked the security panel. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 1:
			if (Var0.f_1 == bLocal_324)
			{
				__LIB_3__::func_218("FMC_TIC_HAXLAPu" /* GXT: You hacked a laptop. */, 0);
			}
			else
			{
				__LIB_19__::func_884("FMC_TIC_HAXLAPr" /* GXT: ~a~~s~ hacked a laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (Var0.f_1 == bLocal_324)
			{
				__LIB_3__::func_218("FMC_TIC_HKTLTPL" /* GXT: You hacked the laptop. */, 0);
			}
			else
			{
				__LIB_19__::func_884("FMC_TIC_HKTLTPR" /* GXT: ~a~~s~ hacked the laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 5:
			if (Var0.f_1 == bLocal_324 && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				__LIB_3__::func_218(sVar1, 0);
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && __LIB_1__::func_693(Var0.f_1, 0, 1))
			{
				__LIB_19__::func_884(sVar2, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
	}
}

void func_2376(int iParam0)//Position - 0xC74B1
{
	struct<7> Var0;
	if (!bLocal_322)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != Local_334.f_0 || Var0.f_6 != NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT())
		{
			return;
		}
		Local_365.f_22[Var0.f_3 /*24*/].f_6 = Var0.f_2;
	}
}

void func_2378(int iParam0)//Position - 0xC7547
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
			iVar2 = (iVar2 + func_2383(Var0.f_15[iVar1], Var0.f_2[iVar1 /*2*/].f_1, Var0.f_1, Var0.f_21[iVar1]));
			iVar1++;
		}
		if (iVar2 > 0)
		{
			func_2381(Var0.f_1);
			func_2379(iVar2, Var0.f_1);
		}
	}
}

void func_2379(int iParam0, int iParam1)//Position - 0xC75F2
{
	if (__LIB_19__::func_866(iParam1))
	{
		Local_372[iLocal_327 /*35*/].f_13 = (Local_372[iLocal_327 /*35*/].f_13 + iParam0);
	}
}

void func_2381(int iParam0)//Position - 0xC7643
{
	if (!__LIB_1__::func_731(26))
	{
		if (!func_2382())
		{
		}
	}
	if (!__LIB_19__::func_591(27))
	{
		if (__LIB_1__::func_693(iParam0, 0, 1))
		{
			MISC::SET_BIT(&(Global_2815059.f_1814), iParam0);
			Global_2815059.f_1815[iParam0] = Local_334.f_0;
		}
	}
}

int func_2382()//Position - 0xC768D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (func_439(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2383(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC76B9
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < __LIB_20__::func_191())
	{
		if (iParam0 != Local_365.f_155)
		{
		}
		else if (iParam1 != Local_365.f_155.f_1[iVar1 /*5*/].f_1)
		{
		}
		else
		{
			switch (func_1010(iVar1))
			{
				case 0:
					__LIB_19__::func_867(func_1009(iVar1), iParam2);
					break;
				case 1:
					break;
			}
			if (iParam3 > 0)
			{
				func_2162();
				Local_372[iLocal_327 /*35*/].f_14++;
				return 0;
			}
			iVar0++;
			switch (func_1010(iVar1))
			{
				case 0:
					func_2425(func_1009(iVar1), iParam2);
					break;
				case 1:
					break;
			}
			if (bLocal_322)
			{
				if (__LIB_12__::func_486(iParam2, 1))
				{
					Local_365.f_155.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__::func_39(iParam2));
				}
				else
				{
					Local_365.f_155.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam2);
				}
			}
			if (Local_213.f_54.f_6 != 0)
			{
				Stack.Push(iParam2 == bLocal_324);
				Call_Loc(Local_213.f_54.f_6);
				func_2424(StackVal);
			}
			if (Local_213.f_54.f_7 != 0)
			{
				Stack.Push(iParam2 == bLocal_324);
				Call_Loc(Local_213.f_54.f_7);
				func_2384(StackVal);
			}
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_2384(int iParam0)//Position - 0xC77FA
{
	if (iParam0 > 0)
	{
		__LIB_32__::func_209(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), 1814661405, iParam0, 1, -1, 0, 0, 0);
		Local_307.f_6 = (Local_307.f_6 + iParam0);
	}
}

void func_2424(int iParam0)//Position - 0xC873D
{
	var uVar0;
	if (iParam0 > 0)
	{
		if (__LIB_0__::func_112())
		{
			__LIB_16__::func_241(joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"), iParam0, &uVar0, 0, 0, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_AUTOSHOP_INCOME(iParam0, 277);
		}
		Local_307.f_5 = (Local_307.f_5 + iParam0);
	}
}

void func_2425(int iParam0, int iParam1)//Position - 0xC877E
{
	if (iParam1 == bLocal_324)
	{
		func_983(iParam0, 6);
	}
	else if (__LIB_3__::func_360(bLocal_324, iParam1))
	{
	}
	else
	{
		func_983(iParam0, 9);
		func_983(iParam0, 25);
	}
}

void func_2428(int iParam0)//Position - 0xC87EE
{
	struct<11> Var0;
	int iVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar1 = func_2383(Var0.f_5, Var0.f_2.f_1, Var0.f_1, Var0.f_7);
		if (iVar1 > 0)
		{
			func_2381(Var0.f_1);
			func_2379(iVar1, Var0.f_1);
		}
	}
}

void func_2429()//Position - 0xC8850
{
	var uVar0;
	bool bVar1;
	int iVar2;
	uVar0 = __LIB_41__::func_87(0, 0, 1);
	bVar1 = __LIB_19__::func_628(6);
	iVar2 = 0;
	while (iVar2 < __LIB_19__::func_586())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar2]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_365.f_2[iVar2]), false))
		{
			if (uVar0 && !func_562(iVar2, iLocal_328, 31))
			{
				OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_196.f_19.f_5[0 /*13*/].f_2, __LIB_19__::func_743());
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_365.f_2[iVar2]), false, true);
				OBJECT::SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Local_196.f_19.f_5[0 /*13*/].f_2, true);
				__LIB_19__::func_614(6);
				bVar1 = true;
			}
			else
			{
				if (bVar1)
				{
					OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_196.f_19.f_5[0 /*13*/].f_2, -1);
					__LIB_19__::func_621(6);
					bVar1 = false;
				}
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_365.f_2[iVar2]), true, true);
				if (func_562(iVar2, iLocal_328, 1) && func_445(iVar2))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_2[iVar2]))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_365.f_2[iVar2]), true, true);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_2431()//Position - 0xC8986
{
	if ((!__LIB_19__::func_628(31) && bLocal_332) && func_488() == 0)
	{
		func_2432();
		__LIB_19__::func_614(31);
	}
}

void func_2432()//Position - 0xC89B5
{
	Local_307.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_2434();
	__LIB_0__::func_467();
}

void func_2434()//Position - 0xC89D6
{
	__LIB_19__::func_583(__LIB_0__::func_525(bLocal_324), 0, 0, -1, 0, 0);
	Local_307.f_7 = func_903();
}

void func_2533()//Position - 0xCB870
{
	__LIB_19__::func_744();
	func_2535();
	func_2534();
}

void func_2534()//Position - 0xCB884
{
	Local_310.f_11 = __LIB_15__::func_358(bLocal_324, Local_365.f_129);
}

void func_2535()//Position - 0xCB89F
{
	func_1777(24);
}

void func_2537()//Position - 0xCB8CC
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
	while (iVar2 < Local_196.f_19)
	{
		iLocal_355[iVar2] = __LIB_0__::getMinusOneOrNull();
		Local_290[iVar2 /*7*/].f_4 = __LIB_0__::getMinusOneOrNull();
		func_1019(iVar2, 33);
		func_1019(iVar2, 12);
		iVar2++;
	}
	__LIB_19__::func_621(79);
	if (bLocal_322)
	{
		func_16(4);
		func_2580(7);
		func_2580(10);
		func_2580(15);
	}
	if (Local_213.f_3.f_4 != 0)
	{
		Call_Loc(Local_213.f_3.f_4);
	}
	bVar10 = func_2578();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (bLocal_322)
		{
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar9 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			bVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar9);
			iVar1 = bVar8;
			if (__LIB_1__::func_693(bVar8, 0, 1))
			{
				func_2577(bVar8, iVar9);
				iVar11 = 0;
				iVar2 = 0;
				while (iVar2 < Local_196.f_19)
				{
					if (func_562(iVar2, iVar9, 1))
					{
						iLocal_355[iVar2] = iVar9;
						iLocal_355[iVar2] = iLocal_355[iVar2];
						Local_290[iVar2 /*7*/].f_4 = bVar8;
						if (bLocal_324 != bVar8)
						{
							if (__LIB_3__::func_360(bLocal_324, bVar8) && !__LIB_19__::func_591(21))
							{
								func_983(iVar2, 33);
							}
							else
							{
								func_983(iVar2, 12);
							}
						}
						if (!func_562(iVar2, iLocal_328, 14))
						{
							iVar11 = 1;
						}
					}
					iVar2++;
				}
				func_2570(bVar8, iVar11, bVar10, PLAYER::IS_PLAYER_PLAYING(bVar8));
				if (bLocal_322)
				{
					if ((!func_3(1) && func_415(iVar9, 1)) && !func_2568(iVar9))
					{
						func_16(1);
					}
					if (func_415(iVar9, 7))
					{
						func_16(7);
					}
					if (func_415(iVar9, 10))
					{
						func_16(10);
					}
					iVar2 = 0;
					while (iVar2 < Local_196.f_19)
					{
						if (func_562(iVar2, iVar9, 1))
						{
							if (func_415(iVar9, 2))
							{
								func_449(iVar2, 23);
							}
							else
							{
								func_444(iVar2, 23);
							}
						}
						func_2565(iVar2, iVar0, iVar9);
						func_2563(&Var3, iVar2, iVar9);
						iVar2++;
					}
					func_2560(iVar0, iVar9);
					iVar2 = 0;
					while (iVar2 < Local_196.f_67)
					{
						func_2557(iVar2, iVar0, iVar9);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_196.f_38)
					{
						func_2554(iVar2, iVar0, iVar9);
						func_2552(&Var4, iVar2, iVar9);
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_196.f_85)
					{
						func_2549(iVar2, iVar0, iVar9);
						iVar2++;
					}
					if (!func_415(iVar9, 0))
					{
						bVar6 = false;
					}
					if (!func_415(iVar9, 23))
					{
						bVar7 = false;
					}
					if (!func_415(iVar9, 4))
					{
						func_2580(4);
					}
					iVar12 = 0;
					while (iVar12 < Local_196.f_120)
					{
						if (func_2548(iVar0, iVar12))
						{
							__LIB_19__::func_427(&uVar5, iVar12);
						}
						iVar12++;
					}
				}
				if (Local_213.f_3.f_4.f_1 != 0)
				{
					Stack.Push(iVar0);
					Stack.Push(iVar9);
					Call_Loc(Local_213.f_3.f_4.f_1);
				}
			}
		}
		iVar0++;
	}
	if (Local_290.f_9 != iLocal_325)
	{
		bVar13 = Local_290.f_9;
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar13))
		{
			if (!BitTest(Local_290.f_10, Local_290.f_9))
			{
				MISC::SET_BIT(&(Local_290.f_10), Local_290.f_9);
				func_2060(bVar13, __LIB_1__::func_693(bVar13, 1, 1), 1);
			}
		}
		else if (BitTest(Local_290.f_10, Local_290.f_9))
		{
			MISC::CLEAR_BIT(&(Local_290.f_10), Local_290.f_9);
		}
	}
	Local_290.f_9++;
	if (Local_290.f_9 >= 31)
	{
		Local_290.f_9 = 0;
	}
	if (bLocal_322)
	{
		func_2545(&Var3);
		func_2542(&Var4);
		func_2538(&uVar5);
		if (bVar6)
		{
			if (!func_3(0))
			{
				func_16(0);
			}
		}
		else if (func_3(0))
		{
			func_2580(0);
		}
		if (bVar7)
		{
			if (!func_3(20))
			{
				func_16(20);
			}
		}
		Stack.Push(Local_213.f_80.f_1 != 0);
		Stack.Push(NETWORK::NETWORK_GET_NUM_PARTICIPANTS());
		Call_Loc(Local_213.f_80.f_1);
		if (StackVal && StackVal < StackVal)
		{
			func_8(12);
		}
	}
	if (Local_213.f_3.f_4.f_2 != 0)
	{
		Call_Loc(Local_213.f_3.f_4.f_2);
	}
}

void func_2538(var uParam0)//Position - 0xCBCE6
{
	if (!__LIB_19__::func_424(&(Local_365.f_72), uParam0))
	{
		__LIB_19__::func_480(uParam0, &(Local_365.f_72));
	}
}

void func_2542(var uParam0)//Position - 0xCBD8E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (__LIB_3__::func_479(uParam0[iVar0 /*2*/], iVar1))
			{
				func_63(iVar0, __LIB_19__::func_425(iVar1));
			}
			else
			{
				func_2543(iVar0, __LIB_19__::func_425(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_2543(int iParam0, var uParam1)//Position - 0xCBDE7
{
	if (__LIB_16__::func_758(&(Local_365.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
}

void func_2545(var uParam0)//Position - 0xCBE28
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (__LIB_3__::func_479(uParam0[iVar0 /*2*/], iVar1))
			{
				func_449(iVar0, __LIB_19__::func_426(iVar1));
			}
			else
			{
				func_444(iVar0, __LIB_19__::func_426(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_2548(int iParam0, int iParam1)//Position - 0xCBEB9
{
	return __LIB_3__::func_479(&(Local_372[iParam0 /*35*/].f_24), iParam1);
}

void func_2549(int iParam0, int iParam1, int iParam2)//Position - 0xCBED0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_428(iVar1);
		if (iVar2 != 13)
		{
			if (func_2267(iParam0, iParam2, iVar1))
			{
				func_2550(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2550(int iParam0, int iParam1, var uParam2)//Position - 0xCBF15
{
	if (!func_139(iParam1, iParam0))
	{
		func_137(iParam1, iParam0);
	}
}

void func_2552(var uParam0, int iParam1, int iParam2)//Position - 0xCBF7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_429(iVar1);
		if (iVar2 != 17)
		{
			if (!__LIB_3__::func_479(uParam0[iParam1 /*2*/], iVar0) && func_2194(iParam1, iParam2, iVar2))
			{
				__LIB_7__::func_698(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

void func_2554(int iParam0, int iParam1, int iParam2)//Position - 0xCBFFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_430(iVar1);
		if (iVar2 != 32)
		{
			if (func_2194(iParam0, iParam2, iVar1))
			{
				func_2555(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2555(int iParam0, int iParam1, var uParam2)//Position - 0xCC045
{
	if (!func_64(iParam1, iParam0))
	{
		func_63(iParam1, iParam0);
	}
}

void func_2557(int iParam0, int iParam1, int iParam2)//Position - 0xCC108
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_431(iVar1);
		if (iVar2 != 25)
		{
			if (func_2336(iParam0, iParam2, iVar1))
			{
				func_2558(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2558(int iParam0, int iParam1, var uParam2)//Position - 0xCC14D
{
	if (!func_147(iParam1, iParam0))
	{
		func_145(iParam1, iParam0);
	}
}

void func_2560(int iParam0, int iParam1)//Position - 0xCC1FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = iVar0;
		if (func_415(iParam1, iVar1))
		{
			iVar2 = __LIB_19__::func_432(iVar1);
			if (iVar2 != 23)
			{
				func_2561(iVar2, iParam0);
			}
		}
		iVar0++;
	}
}

void func_2561(int iParam0, var uParam1)//Position - 0xCC23C
{
	if (!func_3(iParam0))
	{
		func_16(iParam0);
	}
}

void func_2563(var uParam0, int iParam1, int iParam2)//Position - 0xCC290
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_433(iVar1);
		if (iVar2 != 48)
		{
			if (!__LIB_3__::func_479(uParam0[iParam1 /*2*/], iVar0) && func_562(iParam1, iParam2, iVar2))
			{
				__LIB_7__::func_698(uParam0[iParam1 /*2*/], iVar0);
			}
		}
		iVar0++;
	}
}

void func_2565(int iParam0, int iParam1, int iParam2)//Position - 0xCC304
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 48)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_19__::func_434(iVar1);
		if (iVar2 != 49)
		{
			if (func_562(iParam0, iParam2, iVar1))
			{
				if (iVar2 == 32)
				{
					func_16(12);
				}
				func_2566(iVar2, iParam0, iParam1);
			}
		}
		iVar0++;
	}
}

void func_2566(int iParam0, int iParam1, var uParam2)//Position - 0xCC356
{
	if (!func_439(iParam1, iParam0))
	{
		func_449(iParam1, iParam0);
	}
}

int func_2568(int iParam0)//Position - 0xCC4DE
{
	int iVar0;
	int iVar1;
	iVar0 = func_2569(iParam0);
	iVar1 = 0;
	while (iVar1 < Local_218[iVar0 /*21*/].f_19)
	{
		if (Local_218[iVar0 /*21*/].f_1[iVar1 /*3*/].f_2 == func_22())
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

var func_2569(int iParam0)//Position - 0xCC523
{
	return Local_372[iParam0 /*35*/];
}

void func_2570(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xCC532
{
	if (iParam1 && __LIB_19__::func_746(bParam0, bParam2, bParam3))
	{
		func_2571(bParam0, bParam3, !__LIB_3__::func_360(bLocal_324, bParam0));
	}
	else
	{
		func_2060(bParam0, bParam3, 0);
	}
}

void func_2571(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCC56C
{
	int iVar0;
	iVar0 = __LIB_20__::func_216(bParam0);
	if (!BitTest(Local_290.f_8, bParam0))
	{
		if (bParam0 != __LIB_0__::getMinusOneOrNull())
		{
			if (bParam1)
			{
				if (__LIB_19__::func_402(func_996(iVar0)))
				{
					__LIB_19__::func_354(bParam0, 0, 1);
					__LIB_3__::func_459(bParam0, 1);
					if (!__LIB_19__::func_315(bParam0))
					{
						__LIB_15__::func_359(bParam0, 1, 1, 1);
					}
					__LIB_12__::func_535(bParam0, func_996(iVar0), 1, 1);
					__LIB_19__::func_350(bParam0, __LIB_19__::func_745(iVar0), 1, 1);
					__LIB_12__::func_554(bParam0, func_988(iVar0, 0), 1, 0);
					if (__LIB_19__::func_303(bParam0))
					{
						if (!__LIB_19__::func_352(bParam0))
						{
							__LIB_19__::func_351(bParam0, 1, 1);
						}
					}
					__LIB_19__::func_369(bParam0, 0, 1);
					MISC::SET_BIT(&(Local_290.f_8), bParam0);
				}
			}
		}
	}
	else if (__LIB_19__::func_435(bParam0) != func_996(iVar0))
	{
		__LIB_12__::func_535(bParam0, func_996(iVar0), 1, 1);
		__LIB_19__::func_350(bParam0, __LIB_19__::func_745(iVar0), 1, 1);
		__LIB_12__::func_554(bParam0, func_988(iVar0, 0), 1, 0);
	}
}

void func_2577(int iParam0, int iParam1)//Position - 0xCC71A
{
	if (bLocal_324 == iParam0)
	{
		return;
	}
	if ((func_415(iParam1, 27) && ENTITY::DOES_ENTITY_EXIST(iLocal_330)) && PLAYER::GET_PLAYER_PED(iParam0) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_330, -1, false))
	{
		__LIB_19__::func_614(79);
	}
}

int func_2578()//Position - 0xCC75F
{
	if (!__LIB_19__::func_316())
	{
		return 0;
	}
	if (!__LIB_19__::func_628(7))
	{
		return 0;
	}
	if (func_2846() > 2)
	{
		return 0;
	}
	if (__LIB_19__::func_608() == 1)
	{
		return 0;
	}
	return 1;
}

void func_2580(int iParam0)//Position - 0xCC7A8
{
	if (__LIB_16__::func_758(&(Local_365.f_88), iParam0))
	{
	}
}

void func_2581(int iParam0)//Position - 0xCC7BE
{
	Local_372[iLocal_327 /*35*/].f_22 = iParam0;
}

int func_2582()//Position - 0xCC7D2
{
	bool bVar0;
	if (!func_505())
	{
		return 0;
	}
	func_2817();
	func_2789();
	func_2638();
	__LIB_20__::func_334();
	__LIB_0__::func_467(1);
	__LIB_32__::func_347();
	if (!__LIB_32__::func_243())
	{
		return 0;
	}
	__LIB_0__::func_467();
	func_2588(1);
	__LIB_32__::func_242();
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	Call_Loc(Local_213.f_2);
	bVar0 = StackVal;
	if (!bVar0)
	{
		return 0;
	}
	__LIB_32__::func_241();
	func_2583();
	return 1;
}

void func_2583()//Position - 0xCC83F
{
	Global_1943929.f_2 = Local_365.f_90;
	Global_1943929.f_3 = Local_365.f_91;
}

void func_2588(bool bParam0)//Position - 0xCC9C5
{
	if (__LIB_19__::func_628(52) == bParam0)
	{
		return;
	}
	func_2602(bParam0);
	if (__LIB_19__::func_591(1))
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
	if (__LIB_19__::func_591(2))
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
	if (__LIB_19__::func_591(34))
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
	if (__LIB_19__::func_591(3))
	{
		__LIB_19__::func_439(bParam0);
	}
	if (__LIB_19__::func_591(4))
	{
		__LIB_19__::func_868(bParam0);
		__LIB_19__::func_438(bParam0);
	}
	if (__LIB_19__::func_591(5))
	{
		if (bParam0)
		{
			__LIB_16__::func_792(2);
		}
		else
		{
			__LIB_16__::func_794(2);
		}
	}
	if (__LIB_19__::func_591(6))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_326, 432, bParam0);
	}
	__LIB_19__::func_437(!bParam0);
	func_2590(bParam0);
	if (Local_213.f_14 != 0)
	{
		Stack.Push(bParam0);
		Call_Loc(Local_213.f_14);
	}
	if (bParam0)
	{
		__LIB_19__::func_436(7);
		__LIB_19__::func_614(52);
	}
	else
	{
		__LIB_19__::func_296(7);
		__LIB_19__::func_621(52);
	}
}

void func_2590(bool bParam0)//Position - 0xCCAE1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_365.f_2[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_365.f_2[iVar0], true);
				}
			}
			else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_365.f_2[iVar0]))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_365.f_2[iVar0], false);
			}
		}
		iVar0++;
	}
}

void func_2602(bool bParam0)//Position - 0xCCEE8
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_111)
		{
			func_2603(bParam0, iVar0);
			iVar0++;
		}
	}
	else
	{
		iVar0 = (Local_196.f_111 - 1);
		while (iVar0 >= 0)
		{
			func_2603(bParam0, iVar0);
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_2603(bool bParam0, int iParam1)//Position - 0xCCF34
{
	if (!__LIB_0__::func_86(Local_196.f_111.f_1[iParam1 /*7*/].f_1) && !__LIB_0__::func_86(Local_196.f_111.f_1[iParam1 /*7*/].f_4))
	{
		if (iParam1 >= 10)
		{
			return;
		}
		switch (Local_196.f_111.f_1[iParam1 /*7*/])
		{
			case 0:
				if (bParam0)
				{
					if (iLocal_349 < 2)
					{
						iLocal_348[iLocal_349] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_196.f_111.f_1[iParam1 /*7*/].f_1, Local_196.f_111.f_1[iParam1 /*7*/].f_4, false, true, true, true);
						iLocal_349++;
					}
				}
				else if (iLocal_349 < 2)
				{
					if (iLocal_348[iLocal_349] != -1)
					{
						PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_348[iLocal_349], false);
						iLocal_348[iLocal_349] = -1;
						iLocal_349 = (iLocal_349 - 1);
					}
				}
				break;
			case 1:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_196.f_111.f_1[iParam1 /*7*/].f_1, Local_196.f_111.f_1[iParam1 /*7*/].f_4, !bParam0, false);
				break;
			case 2:
				if (bParam0)
				{
					if (iLocal_349 < 2)
					{
						iLocal_348[iLocal_349] = MISC::ADD_POP_MULTIPLIER_AREA(Local_196.f_111.f_1[iParam1 /*7*/].f_1, Local_196.f_111.f_1[iParam1 /*7*/].f_4, 1f, 0.25f, true, true);
						iLocal_349++;
					}
				}
				else if (iLocal_348[iLocal_349] != -1)
				{
					if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(iLocal_348[iLocal_349]))
					{
						MISC::REMOVE_POP_MULTIPLIER_AREA(iLocal_348[iLocal_349], true);
						iLocal_348[iLocal_349] = -1;
						iLocal_349 = (iLocal_349 - 1);
					}
				}
				break;
			}
	}
}

void func_2638()//Position - 0xCDE86
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_19__::func_628(50))
	{
		return;
	}
	if (Local_196.f_38 == 0)
	{
		__LIB_19__::func_614(50);
		return;
	}
	iVar1 = __LIB_20__::func_257();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_156);
		func_2641(iVar0);
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Local_196.f_38)
	{
		Stack.Push(iVar2);
		Call_Loc(Local_213.f_156.f_132);
		__LIB_32__::func_246(iVar2);
		iVar2++;
	}
	__LIB_19__::func_614(50);
}

void func_2641(int iParam0)//Position - 0xCE050
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar3 = Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/];
		if (iVar3 != -1)
		{
			if (Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_10 == 0)
			{
				func_2649(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_12)
			{
				if (Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/].f_1 == 0)
				{
					iVar2 = Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/];
					func_2642(iParam0, iVar3, Local_219.f_23[iParam0 /*67*/].f_1[iVar2 /*13*/], &(Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_2642(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xCE122
{
	switch (iParam2)
	{
		case 8:
			*uParam3 = 844308/*__LIB_19__::func_749*/;
			break;
		case 21:
			*uParam3 = 844292/*func_2647*/;
			break;
		case 7:
			*uParam3 = 844277/*func_2646*/;
			break;
		case 23:
			*uParam3 = 844262/*func_2645*/;
			break;
		case 2:
			*uParam3 = 844262/*func_2645*/;
			break;
		case 10:
			*uParam3 = 844262/*func_2645*/;
			break;
		case 11:
			*uParam3 = 844262/*func_2645*/;
			break;
	}
	switch (iParam1)
	{
		case 12:
			*uParam3 = 844247/*func_2644*/;
			break;
		case 16:
			*uParam3 = 844232/*func_2643*/;
			break;
	}
}

bool func_2643(int iParam0, var uParam1)//Position - 0xCE1C8
{
	return func_64(iParam0, 5);
}

bool func_2644(int iParam0, var uParam1)//Position - 0xCE1D7
{
	return func_64(iParam0, 5);
}

int func_2645(int iParam0, var uParam1)//Position - 0xCE1E6
{
	return func_2215(iParam0, 0);
}

int func_2646(int iParam0, var uParam1)//Position - 0xCE1F5
{
	return func_2215(iParam0, 0);
}

bool func_2647(int iParam0, var uParam1)//Position - 0xCE204
{
	return func_64(iParam0, 21);
}

void func_2649(int iParam0, int iParam1, int iParam2)//Position - 0xCE23D
{
	int iVar0;
	int iVar1;
	switch (iParam2)
	{
		case 8:
			iVar0 = 858020/*func_2785*/;
			break;
		case 10:
			iVar0 = 857920/*func_2784*/;
			break;
		case 11:
			iVar0 = 857873/*func_2783*/;
			break;
		case 15:
			iVar0 = 857435/*func_2781*/;
			break;
		case 13:
			iVar0 = 857286/*func_2778*/;
			break;
		case 14:
			iVar0 = 857200/*func_2777*/;
			break;
		case 9:
			iVar0 = 857034/*func_2776*/;
			break;
		case 7:
			iVar0 = 856937/*func_2775*/;
			break;
		case 18:
			iVar0 = 856854/*func_2774*/;
			break;
		case 19:
			iVar0 = 856746/*func_2773*/;
			break;
		case 20:
			iVar0 = 856626/*func_2772*/;
			break;
		case 12:
			iVar0 = 854414/*func_2751*/;
			iVar1 = 853728/*func_2744*/;
			break;
		case 6:
			iVar0 = 853258/*func_2738*/;
			break;
		case 26:
			iVar0 = 853049/*func_2736*/;
			break;
		case 28:
			iVar0 = 852630/*func_2731*/;
			break;
		case 38:
			iVar0 = 852529/*func_2729*/;
			break;
		case 21:
			iVar0 = 852049/*func_2722*/;
			iVar1 = 851634/*func_2720*/;
			break;
		case 40:
			iVar0 = 851386/*func_2715*/;
			break;
		case 23:
			iVar0 = 851075/*func_2710*/;
			break;
		case 1:
			iVar0 = 850730/*func_2706*/;
			break;
		case 2:
			iVar0 = 850167/*func_2701*/;
			break;
		case 39:
			iVar0 = 849559/*func_2696*/;
			break;
		case 16:
			iVar0 = 848879/*func_2688*/;
			iVar1 = 848506/*func_2682*/;
			break;
		case 29:
			iVar0 = 848076/*func_2680*/;
			break;
		case 34:
			iVar0 = 848059/*func_2679*/;
			break;
		case 35:
			iVar0 = 847592/*func_2677*/;
			break;
		case 32:
			iVar0 = 847149/*func_2672*/;
			break;
		case 41:
			iVar0 = 845972/*func_2666*/;
			break;
		case 42:
			iVar0 = 845768/*func_2663*/;
			break;
		case 43:
			iVar0 = 845182/*func_2654*/;
			break;
		case 44:
			iVar0 = 844911/*func_2651*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_19__::func_750(iParam0, iParam1, iVar0, iVar1);
	}
}

void func_2651(int iParam0, int iParam1)//Position - 0xCE46F
{
	int iVar0;
	struct<3> Var1;
	iVar0 = func_2653(iParam0, iParam1);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(iVar0), false))
		{
			if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar0)) != 21)
			{
				if (PED::IS_PED_IN_ANY_PLANE(iParam1))
				{
					if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
					{
						if (Local_213.f_156.f_2.f_52.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_213.f_156.f_2.f_52.f_1);
						}
						Var1 = { __LIB_19__::func_751(iParam0, iParam1) };
						TASK::TASK_PLANE_MISSION(iParam1, NETWORK::NET_TO_VEH(iVar0), 0, 0, Var1, 21, 50f, 0f, -1f, 0f, 0f, true);
					}
				}
			}
		}
	}
}

int func_2653(int iParam0, int iParam1)//Position - 0xCE533
{
	int iVar0;
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
		return NETWORK::VEH_TO_NET(iVar0);
	}
	return 0;
}

void func_2654(int iParam0, int iParam1)//Position - 0xCE57E
{
	struct<3> Var0;
	if (!func_64(iParam0, 28) && !func_2194(iParam0, iLocal_328, 16))
	{
		Var0 = { __LIB_19__::func_870(iParam0, iParam1) };
		if (!__LIB_0__::func_86(Var0))
		{
			if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				if (__LIB_19__::func_755(iParam0) != -1f && __LIB_0__::func_724(iParam1, Var0, 1) > __LIB_19__::func_755(iParam0))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var0, 2f, 20000, __LIB_19__::func_755(iParam0), 4, 40000f);
					}
				}
				else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_THROW_PROJECTILE"), 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam1, __LIB_19__::func_754(iParam0), __LIB_19__::func_753(iParam0), true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam1, __LIB_19__::func_754(iParam0), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
					TASK::TASK_THROW_PROJECTILE(iParam1, Var0, 0, true);
					if (__LIB_19__::func_752(iParam0))
					{
						func_2189(iParam0, 16);
					}
				}
			}
		}
	}
}

void func_2663(int iParam0, int iParam1)//Position - 0xCE7C8
{
	struct<3> Var0;
	float fVar1;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_STAY_IN_COVER"), 1) && !PED::IS_PED_IN_COVER(iParam1, false))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, 0, 0);
			}
			else
			{
				Var0 = { __LIB_19__::func_757(iParam0, iParam1) };
				fVar1 = __LIB_19__::func_756(iParam0, iParam1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Var0, fVar1, false, false);
				TASK::TASK_STAY_IN_COVER(iParam1);
			}
		}
	}
}

void func_2666(int iParam0, int iParam1)//Position - 0xCE894
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	if (Local_213.f_156.f_2.f_106 == 0)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_106);
		iVar1 = StackVal;
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iVar1)
		{
			if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				iVar2 = 0;
				iVar3 = 0;
				if (Local_213.f_156.f_2.f_106.f_1 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_106.f_1);
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
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), -1f, __LIB_19__::func_760(iParam0, iVar1), __LIB_19__::func_760(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), -1f, __LIB_19__::func_760(iParam0, iVar1), __LIB_19__::func_760(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_759(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), __LIB_19__::func_758(iParam0, iVar1), true);
					}
				}
				else if (iVar3 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), -1f, __LIB_19__::func_760(iParam0, iVar1), __LIB_19__::func_760(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), -1f, __LIB_19__::func_760(iParam0, iVar1), __LIB_19__::func_760(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, iVar3, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_759(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), __LIB_19__::func_758(iParam0, iVar1), true);
					}
				}
				else if (Local_213.f_156.f_2.f_106.f_2 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_106.f_2);
						TASK::TASK_PLANE_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), -1f, __LIB_19__::func_760(iParam0, iVar1), __LIB_19__::func_760(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_106.f_2);
						TASK::TASK_HELI_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), -1f, __LIB_19__::func_760(iParam0, iVar1), __LIB_19__::func_760(iParam0, iVar1), -1f, 128);
					}
					else
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_106.f_2);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, __LIB_19__::func_762(iParam0, iVar1), __LIB_19__::func_759(iParam0, iVar1), __LIB_19__::func_761(iParam0, iVar1), __LIB_19__::func_758(iParam0, iVar1), true);
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

void func_2672(int iParam0, int iParam1)//Position - 0xCED2D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 19)
		{
			if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				Var1 = { __LIB_19__::func_766(iParam0, iVar0) };
				fVar2 = __LIB_19__::func_765(iParam0);
				TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 19, 30f, fVar2, __LIB_19__::func_764(iParam0), 10, 10, -1f, 8225);
			}
		}
		else if (__LIB_19__::func_763(iParam0) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 19)
		{
			if (__LIB_1__::func_561(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				VEHICLE::SET_SHORT_SLOWDOWN_FOR_LANDING(iVar0);
				VEHICLE::SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(iVar0, true);
			}
		}
	}
}

void func_2677(int iParam0, int iParam1)//Position - 0xCEEE8
{
	func_2678(iParam0, iParam1, 1);
}

void func_2678(int iParam0, int iParam1, bool bParam2)//Position - 0xCEEF9
{
	int iVar0;
	if (!((__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_STANDARD"), 1) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_IN_AREA"), 1)) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_SPECIFIC"), 1)))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			if (bParam2)
			{
				iVar0 = joaat("SCRIPT_TASK_WANDER_SPECIFIC");
			}
			else
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_114);
				iVar0 = StackVal;
			}
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_WANDER_STANDARD"):
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_1);
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_2);
					TASK::TASK_WANDER_STANDARD(StackVal, StackVal, StackVal);
					break;
				case joaat("SCRIPT_TASK_WANDER_IN_AREA"):
					Stack.Push((Local_213.f_156.f_2.f_114.f_3 != 0 && Local_213.f_156.f_2.f_114.f_4 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_3);
					Stack.Push((StackVal && !__LIB_0__::func_86(StackVal, StackVal, StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_4);
					if (StackVal && StackVal > 0f)
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_4);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_5);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_6);
						TASK::TASK_WANDER_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
					}
					break;
				case joaat("SCRIPT_TASK_WANDER_SPECIFIC"):
					Stack.Push((Local_213.f_156.f_2.f_114.f_7 != 0 && Local_213.f_156.f_2.f_114.f_8 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_7);
					Stack.Push((StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_114.f_8);
					if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_7);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_8);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_114.f_1);
						TASK::TASK_WANDER_SPECIFIC(StackVal, StackVal, StackVal, StackVal);
					}
					break;
				}
			}
	}
}

void func_2679(int iParam0, int iParam1)//Position - 0xCF0BB
{
	func_2678(iParam0, iParam1, 0);
}

void func_2680(int iParam0, int iParam1)//Position - 0xCF0CC
{
	int iVar0;
	struct<3> Var1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 4)
		{
			if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				Var1 = { __LIB_19__::func_767(iParam0) };
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(Local_196.f_67.f_1[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
				{
					TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, 0, Var1, 4, 20f, 786469, 10f, 268);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_196.f_67.f_1[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
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

void func_2682(int iParam0, int iParam1)//Position - 0xCF27A
{
	struct<3> Var0;
	float fVar1;
	Var0 = { func_2687(iParam0, -1) };
	fVar1 = __LIB_0__::func_724(iParam1, Var0, __LIB_19__::func_770(iParam0, Local_365.f_22[iParam0 /*24*/].f_5));
	if (fVar1 <= __LIB_20__::func_301(iParam0))
	{
		Local_365.f_22[iParam0 /*24*/].f_5++;
		if (Local_365.f_22[iParam0 /*24*/].f_5 >= __LIB_19__::func_768(iParam0))
		{
			Local_365.f_22[iParam0 /*24*/].f_5 = 0;
			func_63(iParam0, 5);
			func_16(3);
		}
	}
}

Vector3 func_2687(int iParam0, int iParam1)//Position - 0xCF3AF
{
	int iVar0;
	if (Local_213.f_156.f_2.f_91 != 0)
	{
		iVar0 = Local_365.f_22[iParam0 /*24*/].f_5;
		if (iParam1 != -1)
		{
			iVar0 = iParam1;
		}
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_156.f_2.f_91);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

void func_2688(int iParam0, int iParam1)//Position - 0xCF3EF
{
	struct<3> Var0;
	if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED"), 1))
		{
			if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5 && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iParam1))
			{
				TASK::CLEAR_PED_TASKS(iParam1);
			}
		}
		else
		{
			if (Local_365.f_22[iParam0 /*24*/].f_6 == -1)
			{
				TASK::CLEAR_PED_TASKS(iParam1);
			}
			if (func_64(iParam0, 19))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
			}
			Var0 = { func_2687(iParam0, -1) };
			TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var0, __LIB_19__::func_776(iParam0), func_2694(iParam0), true, __LIB_19__::func_775(iParam0), 50f, __LIB_19__::func_774(iParam0), 10f, __LIB_19__::func_773(iParam0), __LIB_19__::func_772(iParam0), __LIB_19__::func_769(iParam0));
			if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
			{
				__LIB_19__::func_771(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
			}
		}
	}
}

int func_2694(int iParam0)//Position - 0xCF5E0
{
	if (Local_213.f_156.f_2.f_91.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_5);
		return StackVal;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return 0;
}

void func_2696(int iParam0, int iParam1)//Position - 0xCF697
{
	if (!PED::IS_PED_IN_GROUP(iParam1))
	{
		if (__LIB_20__::func_302(iParam0, iParam1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
				TASK::CLEAR_PED_TASKS(iParam1);
				if (Local_213.f_156.f_2.f_85.f_3 != 0)
				{
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_85.f_3);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(StackVal, StackVal);
				}
				PED::SET_PED_CONFIG_FLAG(iParam1, 268, true);
				PED::SET_PED_AS_GROUP_MEMBER(iParam1, iLocal_306);
				PED::SET_GROUP_FORMATION_SPACING(iLocal_306, 2f, 0f, 0f);
				PED::SET_GROUP_SEPARATION_RANGE(iLocal_306, 36f);
				if (Local_213.f_156.f_2.f_85.f_4 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_85.f_4);
				}
			}
		}
		else if (Local_213.f_156.f_2.f_85.f_1 != 0)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_85.f_1);
				switch (StackVal)
				{
					case 1:
						func_2785(iParam0, iParam1);
						break;
					case 2:
						func_2776(iParam0, iParam1);
						break;
					}
				}
		}
	}
	else if (PED::IS_PED_GROUP_MEMBER(iParam1, iLocal_306))
	{
		Stack.Push((__LIB_0__::func_76(iLocal_326, iParam1, 1) > __LIB_19__::func_332(iParam0) || !bLocal_321));
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_85);
		if (StackVal || !StackVal)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
			}
			else
			{
				PED::REMOVE_PED_FROM_GROUP(iParam1);
				if (Local_213.f_156.f_2.f_85.f_5 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_213.f_156.f_2.f_85.f_5);
				}
			}
		}
	}
}

void func_2701(int iParam0, int iParam1)//Position - 0xCF8F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		if (Local_213.f_156.f_2.f_79 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2.f_79);
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
						iVar2 = iLocal_326;
						if (Local_213.f_156.f_2.f_79.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_213.f_156.f_2.f_79.f_1);
							iVar2 = StackVal;
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, __LIB_19__::func_781(iParam0, 0), 10f, -1f, SYSTEM::ROUND(__LIB_19__::func_780(iParam0)), __LIB_19__::func_779(iParam0), -1f, 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							VEHICLE::SET_BOAT_ANCHOR(iVar0, false);
							TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, __LIB_19__::func_781(iParam0, 1), 786469, -1f, 111);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, 8, __LIB_19__::func_781(iParam0, 0), __LIB_19__::func_778(iParam0), 1000f, 1000f, true);
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

void func_2706(int iParam0, int iParam1)//Position - 0xCFB2A
{
	int iVar0;
	if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		if (func_2709(iParam0, &iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, 0, 1, __LIB_19__::func_783(iParam0), __LIB_19__::func_782(iParam0), -1f, -1f, false);
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

int func_2709(int iParam0, var uParam1)//Position - 0xCFC15
{
	int iVar0;
	if (Local_213.f_156.f_2.f_76 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_76);
		iVar0 = StackVal;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		iVar0 = Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iVar0)))
	{
		*uParam1 = NETWORK::NET_TO_VEH(iVar0);
		return 1;
	}
	return 0;
}

void func_2710(int iParam0, int iParam1)//Position - 0xCFC83
{
	struct<3> Var0;
	if (!__LIB_0__::func_798(iParam1, -251125078, 1) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		__LIB_19__::func_786(iParam0, iParam1);
		Var0 = { func_2713(iParam0) };
		TASK::TASK_SMART_FLEE_COORD(iParam1, Var0, __LIB_19__::func_785(iParam0), __LIB_19__::func_784(iParam0), false, false);
	}
}

Vector3 func_2713(int iParam0)//Position - 0xCFD2D
{
	if (Local_213.f_156.f_2.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_72);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/]), false);
}

void func_2715(int iParam0, int iParam1)//Position - 0xCFDBA
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_HANDS_UP"), 1) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_67.f_4);
		TASK::TASK_HANDS_UP(iParam1, __LIB_19__::func_790(iParam0), __LIB_19__::func_789(iParam0), __LIB_19__::func_788(iParam0), __LIB_19__::func_787(iParam0));
	}
}

void func_2720(int iParam0, int iParam1)//Position - 0xCFEB2
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	Stack.Push(Local_213.f_156.f_2.f_62.f_3 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2.f_62.f_3);
	if (StackVal || StackVal == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_196.f_131)
	{
		if (Local_196.f_131.f_1[iVar0 /*10*/] == iParam0)
		{
			Var1 = { __LIB_19__::func_791(iVar0, Local_365.f_22[iParam0 /*24*/].f_5) };
			fVar2 = __LIB_0__::func_724(iParam1, Var1, 1);
			if (fVar2 <= 2f)
			{
				if (Local_365.f_22[iParam0 /*24*/].f_6 != 1)
				{
					Local_365.f_22[iParam0 /*24*/].f_5++;
				}
				else
				{
					Local_365.f_22[iParam0 /*24*/].f_5 = (Local_365.f_22[iParam0 /*24*/].f_5 - 1);
				}
				if ((Local_365.f_22[iParam0 /*24*/].f_5 >= 1 || (__LIB_0__::func_86(Local_196.f_131.f_1[iVar0 /*10*/].f_1[Local_365.f_22[iParam0 /*24*/].f_5 /*8*/].f_1) && Local_365.f_22[iParam0 /*24*/].f_6 == 0)) || Local_365.f_22[iParam0 /*24*/].f_6 == -1)
				{
					Local_365.f_22[iParam0 /*24*/].f_5 = (Local_365.f_22[iParam0 /*24*/].f_5 - 1);
					Local_365.f_22[iParam0 /*24*/].f_6 = 1;
				}
				if ((Local_365.f_22[iParam0 /*24*/].f_5 <= 0 && Local_365.f_22[iParam0 /*24*/].f_6 == 1) || Local_365.f_22[iParam0 /*24*/].f_6 == -1)
				{
					Local_365.f_22[iParam0 /*24*/].f_6 = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_2722(int iParam0, int iParam1)//Position - 0xD0051
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_PATROL"), 1) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		iVar0 = __LIB_19__::func_797(iParam0);
		if (iVar0 != -1)
		{
			if (!__LIB_19__::func_796(iParam0))
			{
				Var1 = { __LIB_19__::func_795(iVar0) };
				TASK::TASK_PATROL(iParam1, &Var1, __LIB_19__::func_794(iVar0), __LIB_19__::func_793(iVar0), true);
			}
			else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), 1))
			{
				iVar2 = 0;
				while (iVar2 < Local_196.f_131)
				{
					if (Local_196.f_131.f_1[iVar2 /*10*/] == iParam0)
					{
						if (__LIB_19__::func_792(iParam0, Local_365.f_22[iParam0 /*24*/].f_5))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(iParam1, Local_196.f_131.f_1[iVar2 /*10*/].f_1[Local_365.f_22[iParam0 /*24*/].f_5 /*8*/].f_1, 1f, -1, 40000f, 0.5f);
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_2729(int iParam0, int iParam1)//Position - 0xD0231
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ACHIEVE_HEADING"), 1) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		TASK::TASK_ACHIEVE_HEADING(iParam1, __LIB_19__::func_798(iParam0), 0);
	}
}

void func_2731(int iParam0, int iParam1)//Position - 0xD0296
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
					{
						TASK::CLEAR_PED_TASKS(iParam1);
						TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, Local_196.f_38.f_1[iParam0 /*21*/].f_9, __LIB_19__::func_802(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
		{
			Var1 = { __LIB_19__::func_801(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, __LIB_19__::func_802(iParam0), __LIB_19__::func_800(), 0.25f, 4096, __LIB_19__::func_799(iParam0));
		}
	}
}

void func_2736(int iParam0, int iParam1)//Position - 0xD0439
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		iVar0 = joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS");
		if (__LIB_19__::func_803(iParam0))
		{
			iVar0 = joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD");
		}
		if (!__LIB_0__::func_798(iParam1, iVar0, 1))
		{
			Var1 = { __LIB_19__::func_801(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"):
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, __LIB_19__::func_802(iParam0), __LIB_19__::func_800(), 0.25f, 4096, __LIB_19__::func_799(iParam0));
					break;
				case joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS"):
					TASK::TASK_GO_TO_COORD_ANY_MEANS(iParam1, Var1, __LIB_19__::func_802(iParam0), 0, false, 786603, -1f);
					break;
				}
			}
	}
}

void func_2738(int iParam0, int iParam1)//Position - 0xD050A
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COMBAT"), 1))
	{
		if (__LIB_19__::func_804(iParam0, &iVar0))
		{
			if (__LIB_19__::func_442(iVar0))
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
				{
					func_2740(iParam0, iParam1);
					iVar1 = func_2739(iParam0);
					TASK::TASK_COMBAT_PED(iParam1, iVar0, iVar1, 16);
				}
			}
		}
	}
}

int func_2739(int iParam0)//Position - 0xD0562
{
	if (func_64(iParam0, 19))
	{
		return 67108864;
	}
	if (Local_213.f_156.f_2.f_54.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_54.f_1);
		return StackVal;
	}
	return 0;
}

void func_2740(int iParam0, int iParam1)//Position - 0xD059E
{
	if (!__LIB_32__::func_247(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam1, false);
	}
	else
	{
		func_93(iParam0, iParam1);
	}
	if (func_64(iParam0, 19))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	}
	if (__LIB_19__::func_587(iParam0, 9))
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

void func_2744(int iParam0, int iParam1)//Position - 0xD06E0
{
	struct<3> Var0;
	float fVar1;
	Var0 = { func_2750(iParam0, -1) };
	Stack.Push(Local_213.f_156.f_2.f_25.f_21 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2.f_25.f_21);
	if (StackVal && StackVal)
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, PED::GET_PED_BONE_COORDS(iParam1, -1, 0f, 0f, 0f), __LIB_19__::func_807(iParam0, Local_365.f_22[iParam0 /*24*/].f_5));
	}
	else
	{
		fVar1 = __LIB_0__::func_724(iParam1, Var0, __LIB_19__::func_807(iParam0, Local_365.f_22[iParam0 /*24*/].f_5));
	}
	if (Local_213.f_156.f_2.f_25.f_22 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Stack.Push(fVar1);
		Call_Loc(Local_213.f_156.f_2.f_25.f_22);
	}
	if (Local_213.f_156.f_2.f_25.f_24 != 0)
	{
		if (!__LIB_0__::func_864(&(Local_365.f_22[iParam0 /*24*/].f_20)))
		{
			__LIB_0__::func_795(&(Local_365.f_22[iParam0 /*24*/].f_20), 0, 0);
		}
		if (__LIB_0__::func_937(&(Local_365.f_22[iParam0 /*24*/].f_20), 60000, 0))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_213.f_156.f_2.f_25.f_24);
		}
	}
	if (fVar1 <= __LIB_19__::func_806(iParam0) || func_2746(iParam0))
	{
		if (Local_213.f_156.f_2.f_25.f_23 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_213.f_156.f_2.f_25.f_23);
		}
		if (__LIB_0__::func_864(&(Local_365.f_22[iParam0 /*24*/].f_20)))
		{
			__LIB_0__::clearF_1Prop(&(Local_365.f_22[iParam0 /*24*/].f_20));
		}
		Local_365.f_22[iParam0 /*24*/].f_5++;
		if (Local_365.f_22[iParam0 /*24*/].f_5 >= __LIB_19__::func_805(iParam0))
		{
			Local_365.f_22[iParam0 /*24*/].f_5 = 0;
			func_63(iParam0, 5);
			func_16(3);
		}
	}
}

int func_2746(int iParam0)//Position - 0xD0897
{
	int iVar0;
	struct<3> Var1;
	iVar0 = NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/]);
	Var1 = { func_2750(iParam0, -1) };
	if (__LIB_0__::func_725(iVar0, Var1, __LIB_19__::func_806(iParam0), 1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_2750(int iParam0, int iParam1)//Position - 0xD0948
{
	int iVar0;
	struct<3> Var1;
	iVar0 = Local_365.f_22[iParam0 /*24*/].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_213.f_156.f_2.f_25.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_1);
		Var1 = { StackVal, StackVal, StackVal };
	}
	return Var1;
}

void func_2751(int iParam0, int iParam1)//Position - 0xD098E
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
	bVar0 = __LIB_19__::func_824(iParam0);
	iVar1 = func_2770(iParam0);
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
			if ((__LIB_19__::func_823() && !bVar0) && !PED::IS_PED_IN_VEHICLE(iParam1, iVar2, false))
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar2)
					{
						Stack.Push(iParam1);
						Call_Loc(Local_213.f_156.f_2.f_5.f_5);
						Stack.Push(iParam1);
						Stack.Push(iVar2);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_5.f_1);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_5.f_2);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_5.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_213.f_156.f_2.f_5.f_4);
						TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(iParam1))
			{
				if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
					{
						Var3 = { func_2750(iParam0, -1) };
						PED::SET_PED_CONFIG_FLAG(iParam1, 429, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, false);
						VEHICLE::SET_HELI_BLADES_SPEED(iVar2, 1f);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
						if (Local_213.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_213.f_156.f_2.f_25.f_26);
						}
						TASK::TASK_HELI_MISSION(iParam1, iVar2, 0, 0, Var3, 4, __LIB_19__::func_822(iParam0), 10f, __LIB_19__::func_821(iParam0), SYSTEM::ROUND(__LIB_19__::func_820()), __LIB_19__::func_819(), -1f, 128);
						if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
						{
							__LIB_19__::func_771(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iParam1))
			{
				if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
					{
						Var4 = { func_2750(iParam0, -1) };
						PED::SET_PED_CONFIG_FLAG(iParam1, 429, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, true, false);
						if (Local_213.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_213.f_156.f_2.f_25.f_26);
						}
						TASK::TASK_PLANE_MISSION(iParam1, iVar2, 0, 0, Var4, 4, __LIB_19__::func_822(iParam0), __LIB_19__::func_818(iParam0), __LIB_19__::func_821(iParam0), SYSTEM::ROUND(__LIB_19__::func_820()), __LIB_19__::func_819(), true);
						if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
						{
							__LIB_19__::func_771(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_BOAT(iParam1))
			{
				if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar1)) != 4)
				{
					if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
					{
						fVar5 = __LIB_19__::func_817(iParam0);
						Var6 = { func_2750(iParam0, -1) };
						if (Local_213.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_213.f_156.f_2.f_25.f_26);
						}
						VEHICLE::SET_BOAT_ANCHOR(iVar2, false);
						TASK::TASK_BOAT_MISSION(iParam1, iVar2, 0, 0, Var6, 4, fVar5, 786469, -1f, __LIB_19__::func_816(iParam0));
					}
				}
			}
			else if (!__LIB_0__::func_798(iParam1, __LIB_20__::func_248(iParam0), 1))
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]) && (bVar0 || __LIB_1__::func_561(iVar1)))
				{
					Var7 = { func_2750(iParam0, -1) };
					fVar8 = __LIB_19__::func_817(iParam0);
					fVar9 = __LIB_19__::func_815(iParam0);
					if (!bVar0)
					{
						__LIB_19__::func_443(iVar2);
					}
					if (Local_213.f_156.f_2.f_25.f_26 != 0)
					{
						Stack.Push(iParam0);
						Stack.Push(iParam1);
						Call_Loc(Local_213.f_156.f_2.f_25.f_26);
					}
					if (__LIB_19__::func_814(iParam0))
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var7, __LIB_19__::func_813(iParam0), iVar2, true, __LIB_19__::func_812(iParam0), -1f, 0f, fVar9, __LIB_19__::func_811(iParam0), fVar8, __LIB_19__::func_818(iParam0));
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iVar2, Var7, fVar8, __LIB_19__::func_810(iParam0), ENTITY::GET_ENTITY_MODEL(iVar2), __LIB_19__::func_812(iParam0), __LIB_19__::func_818(iParam0), fVar9);
					}
					if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
					{
						__LIB_19__::func_771(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
					}
					if (__LIB_19__::func_809(iParam0) != -1f)
					{
						if (!func_64(iParam0, 7) && !func_2194(iParam0, iLocal_328, 6))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar2, __LIB_19__::func_809(iParam0));
							func_2189(iParam0, 6);
						}
					}
				}
			}
			else if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
				}
			}
			if ((!func_64(iParam0, 6) && !func_2194(iParam0, iLocal_328, 5)) && __LIB_19__::func_808(iParam0))
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
					func_2189(iParam0, 5);
				}
			}
		}
	}
}

int func_2770(int iParam0)//Position - 0xD11BA
{
	if (Local_213.f_156.f_2.f_25.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_2);
		return StackVal;
	}
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	return 0;
}

void func_2772(int iParam0, int iParam1)//Position - 0xD1232
{
	int iVar0;
	if (Local_213.f_156.f_2.f_23 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_213.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
				{
					Stack.Push(iParam1);
					Stack.Push(NETWORK::NET_TO_ENT(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_213.f_156.f_2.f_23.f_1);
					TASK::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_2773(int iParam0, int iParam1)//Position - 0xD12AA
{
	int iVar0;
	if (Local_213.f_156.f_2.f_22 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam1, iVar0, -1, false);
				}
			}
		}
	}
}

void func_2774(int iParam0, int iParam1)//Position - 0xD1316
{
	if (Local_213.f_156.f_2.f_21 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_21);
				TASK::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, false, false);
			}
		}
	}
}

void func_2775(int iParam0, int iParam1)//Position - 0xD1369
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"), 1))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			func_2740(iParam0, iParam1);
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_213.f_156.f_2.f_18.f_2);
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2.f_18);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2.f_18.f_1);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
		}
	}
}

void func_2776(int iParam0, int iParam1)//Position - 0xD13CA
{
	char* sVar0;
	char* sVar1;
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2.f_15);
	sVar0 = StackVal;
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2.f_15.f_1);
	sVar1 = StackVal;
	if ((!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(sVar0);
				Stack.Push(sVar1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_15.f_2);
				TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0f, false, false, false);
			}
		}
	}
}

void func_2777(int iParam0, int iParam1)//Position - 0xD1470
{
	if (__LIB_19__::func_710(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_2778(int iParam0, int iParam1)//Position - 0xD14C6
{
	if (__LIB_19__::func_710(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, __LIB_19__::func_826(iParam0), __LIB_19__::func_825(iParam0));
			}
		}
	}
}

void func_2781(int iParam0, int iParam1)//Position - 0xD155B
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!__LIB_19__::func_710(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			if (func_2782(&iVar0, &uVar1, iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
						{
							iVar2 = -1;
							if (Local_213.f_156.f_2.f_5.f_2 != 0)
							{
								Stack.Push(iParam0);
								Call_Loc(Local_213.f_156.f_2.f_5.f_2);
								iVar2 = StackVal;
							}
							if (func_64(iParam0, 19))
							{
								iVar2 = Local_196.f_38.f_1[iParam0 /*21*/].f_9;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
							}
							else
							{
								Stack.Push(iParam1);
								Call_Loc(Local_213.f_156.f_2.f_5.f_5);
							}
							Stack.Push(iParam1);
							Stack.Push(iVar0);
							Stack.Push(iParam0);
							Call_Loc(Local_213.f_156.f_2.f_5.f_1);
							Stack.Push(iVar2);
							Stack.Push(iParam0);
							Call_Loc(Local_213.f_156.f_2.f_5.f_3);
							Stack.Push(iParam0);
							Call_Loc(Local_213.f_156.f_2.f_5.f_4);
							TASK::TASK_ENTER_VEHICLE(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0);
						}
					}
				}
			}
		}
	}
	else
	{
		Stack.Push(Local_213.f_156.f_2.f_5.f_7 != 0);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_5.f_7);
		if (StackVal && StackVal)
		{
			if (func_2782(&iVar0, &uVar1, iParam0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(iParam1, false) != iVar0)
				{
					func_2778(iParam0, iParam1);
				}
			}
		}
	}
}

bool func_2782(int iParam0, var uParam1, int iParam2)//Position - 0xD168C
{
	Stack.Push(iParam2);
	Call_Loc(Local_213.f_156.f_2.f_5);
	*uParam1 = StackVal;
	if (func_64(iParam2, 19))
	{
		*uParam1 = Local_196.f_38.f_1[iParam2 /*21*/].f_8;
	}
	if (*uParam1 != -1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_365.f_47[*uParam1 /*8*/]))
	{
		*iParam0 = NETWORK::NET_TO_VEH(Local_365.f_47[*uParam1 /*8*/]);
	}
	else if (Local_213.f_156.f_2.f_5.f_6 != 0)
	{
		Stack.Push(iParam2);
		Call_Loc(Local_213.f_156.f_2.f_5.f_6);
		*iParam0 = StackVal;
	}
	return *iParam0 != 0;
}

void func_2783(int iParam0, int iParam1)//Position - 0xD1711
{
	if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_2784(int iParam0, int iParam1)//Position - 0xD1740
{
	if (!__LIB_0__::func_798(iParam1, -251125078, 1))
	{
		if (__LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

void func_2785(int iParam0, int iParam1)//Position - 0xD17A4
{
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2);
		if (__LIB_19__::func_828(StackVal, StackVal))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_156.f_2.f_2);
				TASK::TASK_START_SCENARIO_AT_POSITION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, true, true);
			}
		}
		else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1) && __LIB_1__::func_561(Local_365.f_22[iParam0 /*24*/]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2);
			TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, false);
		}
		if (__LIB_19__::func_827(iParam0))
		{
			if (__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_22[iParam0 /*24*/]))
				{
					if (!PED::IS_PED_HEADTRACKING_PED(iParam1, iLocal_326))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam1, iLocal_326, -1, 2048, 2);
					}
				}
			}
		}
	}
}

void func_2789()//Position - 0xD1984
{
	if (__LIB_19__::func_628(49))
	{
		return;
	}
	Call_Loc(Local_213.f_11.f_1);
	func_2790();
	__LIB_19__::func_614(49);
}

void func_2790()//Position - 0xD19AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < iLocal_336)
	{
		iVar1 = Local_218[iVar0 /*21*/];
		if (iVar1 != -1)
		{
			iVar2 = 0;
			while (iVar2 < Local_218[iVar0 /*21*/].f_19)
			{
				if (Local_218[iVar0 /*21*/].f_1[iVar2 /*3*/].f_1 == 0 && Local_218[iVar0 /*21*/].f_1[iVar2 /*3*/].f_2 == -1)
				{
					iVar3 = Local_218[iVar0 /*21*/].f_1[iVar2 /*3*/];
					func_2799(iVar1, Local_218[iVar3 /*21*/], &(Local_218[iVar0 /*21*/].f_1[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
			if (Local_218[iVar0 /*21*/].f_18 == 0)
			{
				func_2795(iVar0, iVar1);
			}
			if (Local_218[iVar0 /*21*/].f_17 == 0)
			{
				func_2791(iVar0, iVar1);
			}
			if (Local_218[iVar0 /*21*/].f_20 == 0)
			{
				Local_218[iVar0 /*21*/].f_20 = 141381/*__LIB_0__::func_467*/;
			}
		}
		iVar0++;
	}
}

void func_2791(int iParam0, int iParam1)//Position - 0xD1A88
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 858867/*__LIB_0__::func_467*/;
			break;
		case 27:
			iVar0 = 858854/*func_2793*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_19__::func_829(iParam0, iVar0);
	}
	else
	{
		Local_218[iParam0 /*21*/].f_17 = 141381/*__LIB_0__::func_467*/;
	}
}

void func_2793()//Position - 0xD1AE6
{
	func_1777(4);
}

void func_2795(int iParam0, int iParam1)//Position - 0xD1AFB
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 858982/*func_2798*/;
			break;
		case 27:
			iVar0 = 858969/*func_2797*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_19__::func_830(iParam0, iVar0);
	}
	else
	{
		Local_218[iParam0 /*21*/].f_18 = 141381/*__LIB_0__::func_467*/;
	}
}

void func_2797()//Position - 0xD1B59
{
	func_1777(4);
}

void func_2798()//Position - 0xD1B66
{
	func_1777(1);
	func_2082();
}

void func_2799(int iParam0, int iParam1, var uParam2)//Position - 0xD1B77
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
					*uParam2 = 860007/*func_2816*/;
					break;
				case 24:
					*uParam2 = 859983/*func_2815*/;
					break;
				case 25:
					*uParam2 = 859920/*func_2814*/;
					break;
				case 23:
					*uParam2 = 859811/*func_2812*/;
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
					*uParam2 = 859735/*func_2811*/;
					break;
				case 30:
					*uParam2 = 859726/*__LIB_0__::func_114*/;
					break;
				case 31:
					*uParam2 = 859717/*__LIB_0__::func_114*/;
					break;
				case 32:
					*uParam2 = 859708/*__LIB_0__::func_114*/;
					break;
				case 34:
					*uParam2 = 859699/*__LIB_0__::func_114*/;
					break;
				case 33:
					*uParam2 = 859490/*func_2804*/;
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case 46:
			*uParam2 = 859443/*func_2803*/;
			break;
		case 47:
			*uParam2 = 859305/*func_2800*/;
			break;
	}
}

int func_2800()//Position - 0xD1CA9
{
	if (!func_415(iLocal_328, 2))
	{
		return 0;
	}
	if (!func_2815() && func_2801())
	{
		return 0;
	}
	return 1;
}

int func_2801()//Position - 0xD1CD7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_2802(iVar0) && !__LIB_19__::func_738(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2802(int iParam0)//Position - 0xD1D0E
{
	if (!func_1035(iParam0) || func_439(iParam0, 23))
	{
		return 1;
	}
	return 0;
}

int func_2803()//Position - 0xD1D33
{
	if (func_2815())
	{
		return 0;
	}
	if (func_415(iLocal_328, 2))
	{
		return 0;
	}
	if (!func_2801())
	{
		return 0;
	}
	return 1;
}

int func_2804()//Position - 0xD1D62
{
	if ((!func_913(bLocal_324, 1) && !func_1000(bLocal_324, 0, 1, 0)) && func_2805(0))
	{
		return 1;
	}
	return 0;
}

int func_2805(int iParam0)//Position - 0xD1D95
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_439(iVar0, 6))
		{
			if (!func_439(iVar0, 3))
			{
				if (!func_439(iVar0, 4) || iParam0)
				{
					if (__LIB_19__::func_738(iVar0))
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
	if (iVar1 > 0 && iVar1 == (__LIB_19__::func_586() - iVar2))
	{
		return 1;
	}
	return 0;
}

int func_2811()//Position - 0xD1E57
{
	if ((!func_913(bLocal_324, 1) && !func_1000(bLocal_324, 0, 1, 0)) || func_561(func_2244(), 1))
	{
		if (!func_2805(0) && !func_560(0))
		{
			return 1;
		}
	}
	return 0;
}

int func_2812()//Position - 0xD1EA3
{
	if (func_2815())
	{
		return 0;
	}
	if (!func_2813())
	{
		return 0;
	}
	if (func_1000(bLocal_324, 0, 0, 0))
	{
		return 0;
	}
	if (func_560(1))
	{
		return 0;
	}
	return 1;
}

int func_2813()//Position - 0xD1EE0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_562(iVar0, iLocal_328, 12))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2814()//Position - 0xD1F10
{
	if (func_2815())
	{
		return 0;
	}
	if (func_1000(bLocal_324, 0, 0, 0) && !__LIB_19__::func_738(func_2244()))
	{
		return 0;
	}
	if (func_560(1))
	{
		return 0;
	}
	return 1;
}

int func_2815()//Position - 0xD1F4F
{
	if (func_913(bLocal_324, 1))
	{
		return 1;
	}
	return 0;
}

int func_2816()//Position - 0xD1F67
{
	if (func_2815())
	{
		return 0;
	}
	if (func_2805(0))
	{
		return 0;
	}
	if (func_1000(bLocal_324, 0, 0, 0))
	{
		return 0;
	}
	if (func_560(1))
	{
		return 0;
	}
	return 1;
}

void func_2817()//Position - 0xD1FA4
{
	if (__LIB_19__::func_628(48))
	{
		return;
	}
	Call_Loc(Local_213.f_11);
	func_2818();
	__LIB_19__::func_614(48);
}

void func_2818()//Position - 0xD1FC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < iLocal_335)
	{
		iVar1 = Local_217[iVar0 /*20*/];
		if (iVar1 != -1)
		{
			iVar2 = 0;
			while (iVar2 < Local_217[iVar0 /*20*/].f_19)
			{
				if (Local_217[iVar0 /*20*/].f_1[iVar2 /*3*/].f_1 == 0)
				{
					func_2834(iVar1, &(Local_217[iVar0 /*20*/].f_1[iVar2 /*3*/].f_1));
				}
				iVar2++;
			}
			if (Local_217[iVar0 /*20*/].f_18 == 0)
			{
				func_2826(iVar0, iVar1);
			}
			if (Local_217[iVar0 /*20*/].f_17 == 0)
			{
				func_2819(iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_2819(int iParam0, int iParam1)//Position - 0xD205F
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 860439/*func_2825*/;
			break;
		case 48:
			iVar0 = 860418/*func_2824*/;
			break;
		case 27:
			iVar0 = 860410/*__LIB_0__::func_467*/;
			break;
		case 7:
			iVar0 = 860402/*__LIB_0__::func_467*/;
			break;
		case 6:
			iVar0 = 860394/*__LIB_0__::func_467*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_19__::func_831(iParam0, iVar0);
	}
	else
	{
		Local_217[iParam0 /*20*/].f_17 = 141381/*__LIB_0__::func_467*/;
	}
}

void func_2824()//Position - 0xD2102
{
	if (func_488() == 0)
	{
		func_8(3);
	}
}

void func_2825()//Position - 0xD2117
{
	func_2580(1);
}

void func_2826(int iParam0, int iParam1)//Position - 0xD2124
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 860692/*__LIB_0__::func_467*/;
			break;
		case 27:
			iVar0 = 860679/*func_2832*/;
			break;
		case 7:
			iVar0 = 860667/*func_2831*/;
			break;
		case 20:
			iVar0 = 860634/*func_2830*/;
			break;
		case 6:
			iVar0 = 860591/*func_2828*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_19__::func_832(iParam0, iVar0);
	}
	else
	{
		Local_217[iParam0 /*20*/].f_18 = 141381/*__LIB_0__::func_467*/;
	}
}

void func_2828()//Position - 0xD21AF
{
	func_2829();
}

void func_2829()//Position - 0xD21BB
{
	if (Local_365.f_101 + 1 < 1)
	{
		Local_365.f_101++;
	}
}

void func_2830()//Position - 0xD21DA
{
	Local_365.f_68.f_2++;
	__LIB_0__::clearF_1Prop(&(Local_365.f_68));
}

void func_2831()//Position - 0xD21FB
{
	func_2829();
}

void func_2832()//Position - 0xD2207
{
	func_2580(4);
}

void func_2834(int iParam0, var uParam1)//Position - 0xD221C
{
	*uParam1 = 861056/*__LIB_0__::func_114*/;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 861047/*__LIB_0__::func_114*/;
			break;
		case 22:
			*uParam1 = 860983/*func_2841*/;
			break;
		case 24:
			*uParam1 = 860962/*func_2840*/;
			break;
		case 7:
			*uParam1 = 860925/*__LIB_20__::func_312*/;
			break;
		case 29:
			*uParam1 = 860891/*func_2837*/;
			break;
		case 27:
			*uParam1 = 860878/*func_2836*/;
			break;
		case 20:
			*uParam1 = 860834/*func_2835*/;
			break;
	}
}

int func_2835()//Position - 0xD22A2
{
	if (Local_213.f_111 == 0)
	{
		return 0;
	}
	Stack.Push(&(Local_365.f_68));
	Stack.Push(Local_365.f_68.f_2);
	Call_Loc(Local_213.f_111);
	return __LIB_0__::func_937(StackVal, StackVal, 0);
}

bool func_2836()//Position - 0xD22CE
{
	return func_3(4);
}

int func_2837()//Position - 0xD22DB
{
	if (func_438())
	{
		return 1;
	}
	else if (func_662())
	{
		return 1;
	}
	return 0;
}

int func_2840()//Position - 0xD2322
{
	if (func_560(0))
	{
		return 1;
	}
	return 0;
}

int func_2841()//Position - 0xD2337
{
	if (func_2842())
	{
		return 1;
	}
	return 0;
}

int func_2842()//Position - 0xD234B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_439(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2845()//Position - 0xD2389
{
	return Local_365.f_81;
}

int func_2846()//Position - 0xD2396
{
	return Local_372[iLocal_327 /*35*/].f_22;
}

void func_2859()//Position - 0xD2721
{
	Local_213.f_11 = 865568/*func_2961*/;
	Local_213.f_11.f_1 = 865507/*func_2960*/;
	Local_213.f_2 = 865498/*__LIB_0__::func_109*/;
	Local_213.f_1 = 865489/*__LIB_0__::func_109*/;
	Local_213.f_47 = 861056/*__LIB_0__::func_114*/;
	Local_213.f_47.f_1 = 865478/*__LIB_19__::func_452*/;
	Local_213.f_47.f_2 = 865469/*__LIB_0__::func_109*/;
	Local_213.f_64.f_2 = 865460/*__LIB_0__::func_109*/;
	Local_213.f_64 = 865448/*__LIB_19__::func_849*/;
	Local_213.f_64.f_14 = 865439/*__LIB_0__::func_114*/;
	Local_213.f_64.f_15 = 865430/*__LIB_0__::func_114*/;
	Local_213.f_54 = 865421/*__LIB_0__::func_114*/;
	Local_213.f_54.f_1 = 865412/*__LIB_0__::func_114*/;
	Local_213.f_54.f_2 = 865403/*__LIB_0__::func_114*/;
	Local_213.f_54.f_3 = 865394/*__LIB_0__::func_114*/;
	Local_213.f_54.f_4 = 865382/*__LIB_19__::func_451*/;
	Local_213.f_54.f_5 = 865373/*__LIB_15__::func_529*/;
	Local_213.f_54.f_8 = 865364/*__LIB_0__::func_114*/;
	Local_213.f_54.f_9 = 865351/*__LIB_19__::func_848*/;
	Local_213.f_82 = 865342/*__LIB_0__::func_109*/;
	Local_213.f_80 = 865331/*__LIB_3__::func_554*/;
	Local_213.f_114.f_23 = 865322/*__LIB_0__::func_109*/;
	Local_213.f_114.f_27 = 865311/*__LIB_3__::func_554*/;
	Local_213.f_114 = 865265/*func_2939*/;
	Local_213.f_114.f_39 = 865256/*__LIB_0__::func_109*/;
	Local_213.f_156.f_176 = 865236/*__LIB_19__::func_847*/;
	Local_213.f_156.f_177 = 865173/*func_2936*/;
	Local_213.f_156.f_178 = 865112/*func_2935*/;
	Local_213.f_156.f_179 = 865092/*__LIB_19__::func_846*/;
	Local_213.f_156.f_169 = 865083/*__LIB_0__::func_109*/;
	Local_213.f_156.f_169.f_1 = 865061/*__LIB_19__::func_845*/;
	Local_213.f_156.f_169.f_2 = 865041/*__LIB_19__::func_844*/;
	Local_213.f_156 = 864824/*__LIB_20__::func_313*/;
	Local_213.f_156.f_132 = 864395/*func_2918*/;
	Local_213.f_156.f_2 = 864383/*__LIB_3__::func_860*/;
	Local_213.f_156.f_2.f_1 = 864365/*__LIB_19__::func_840*/;
	Local_213.f_156.f_2.f_2 = 864347/*__LIB_19__::func_839*/;
	Local_213.f_156.f_2.f_4 = 864338/*__LIB_0__::func_114*/;
	Local_213.f_156.f_2.f_5 = 864318/*__LIB_19__::func_838*/;
	Local_213.f_156.f_2.f_5.f_1 = 864309/*__LIB_0__::getMinusOneOrNull*/;
	Local_213.f_156.f_2.f_5.f_2 = 864289/*__LIB_19__::func_837*/;
	Local_213.f_156.f_2.f_5.f_3 = 864280/*__LIB_19__::func_336*/;
	Local_213.f_156.f_2.f_5.f_4 = 864255/*func_2909*/;
	Local_213.f_156.f_2.f_5.f_5 = 864241/*__LIB_19__::func_450*/;
	Local_213.f_156.f_2.f_15 = 864229/*__LIB_3__::func_860*/;
	Local_213.f_156.f_2.f_15.f_1 = 864217/*__LIB_3__::func_860*/;
	Local_213.f_156.f_2.f_15.f_2 = 864208/*__LIB_0__::func_109*/;
	Local_213.f_156.f_2.f_18 = 864138/*func_2904*/;
	Local_213.f_156.f_2.f_18.f_1 = 864125/*__LIB_15__::func_567*/;
	Local_213.f_156.f_2.f_18.f_2 = 863923/*__LIB_19__::func_836*/;
	Local_213.f_156.f_2.f_23.f_1 = 863910/*__LIB_19__::func_449*/;
	Local_213.f_156.f_2.f_67.f_4 = 863890/*__LIB_19__::func_448*/;
	Local_213.f_156.f_2.f_85 = 863881/*__LIB_0__::func_109*/;
	Local_213.f_156.f_2.f_114 = 863868/*__LIB_19__::func_447*/;
	Local_213.f_156.f_2.f_114.f_1 = 863855/*__LIB_19__::func_446*/;
	Local_213.f_156.f_2.f_114.f_2 = 863846/*__LIB_0__::func_114*/;
	Local_213.f_156.f_2.f_114.f_5 = 863837/*__LIB_19__::func_336*/;
	Local_213.f_156.f_2.f_114.f_6 = 863828/*__LIB_19__::func_335*/;
	Local_213.f_352.f_24 = 863819/*__LIB_0__::func_114*/;
	Local_213.f_352.f_25 = 863810/*__LIB_19__::func_334*/;
	Local_213.f_352.f_26 = 863801/*__LIB_0__::func_114*/;
	Local_213.f_352.f_27 = 863792/*__LIB_0__::func_114*/;
	Local_213.f_352.f_37 = 863783/*__LIB_0__::func_114*/;
	Local_213.f_352.f_38 = 863631/*__LIB_19__::func_445*/;
	Local_213.f_352.f_31 = 863622/*__LIB_0__::func_114*/;
	Local_213.f_407.f_25 = 863613/*__LIB_0__::func_114*/;
	Local_213.f_407.f_26 = 863604/*__LIB_0__::func_114*/;
	Local_213.f_465.f_2 = 863595/*__LIB_0__::func_109*/;
	Local_213.f_473.f_1 = 863570/*__LIB_19__::func_835*/;
	Local_213.f_473.f_3 = 863561/*__LIB_0__::func_114*/;
	Local_213.f_473.f_2 = 863553/*__LIB_0__::func_467*/;
	Local_213.f_473.f_9 = 863544/*__LIB_0__::func_109*/;
	Local_213.f_473.f_17 = 863342/*__LIB_32__::func_249*/;
	Local_213.f_473.f_18.f_15 = 863333/*__LIB_0__::func_109*/;
	Local_213.f_473.f_41 = 863321/*__LIB_19__::func_444*/;
	Local_213.f_473.f_15 = 863312/*__LIB_0__::func_114*/;
	Local_213.f_453 = 863269/*__LIB_32__::func_248*/;
	Local_213.f_453.f_1 = 863260/*__LIB_0__::func_109*/;
	Local_213.f_456.f_2 = 863251/*__LIB_0__::func_114*/;
	Local_213.f_456.f_6 = 863242/*__LIB_0__::func_109*/;
	Local_213.f_456.f_8 = 863233/*__LIB_0__::func_114*/;
	Local_213.f_456.f_5 = 863224/*__LIB_0__::getMinusOneOrNull*/;
	Local_213.f_465.f_4.f_3 = 863215/*__LIB_0__::func_109*/;
	Local_213.f_102.f_7 = 863204/*__LIB_3__::func_554*/;
	Local_213.f_102.f_8 = 863191/*__LIB_19__::func_333*/;
	Local_213.f_15.f_4 = 863182/*__LIB_0__::func_114*/;
	Local_213.f_15.f_26 = 863173/*__LIB_0__::func_114*/;
	Local_213.f_15.f_26.f_1 = 863163/*__LIB_4__::func_261*/;
	Local_213.f_15.f_26.f_2 = 863154/*__LIB_0__::func_114*/;
	Local_213.f_15.f_26.f_3 = 863120/*__LIB_19__::func_834*/;
	Local_213.f_15.f_26.f_4 = 863111/*__LIB_0__::func_109*/;
	Local_213.f_15.f_26.f_5 = 863102/*__LIB_0__::func_114*/;
}

Vector3 func_2904(int iParam0)//Position - 0xD2F8A
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iParam0 /*24*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/]), false))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/]), true);
		}
	}
	return 0f, 0f, 0f;
}

int func_2909(int iParam0)//Position - 0xD2FFF
{
	if (func_64(iParam0, 19))
	{
		return 9;
	}
	return 1;
}

void func_2918(int iParam0)//Position - 0xD308B
{
	if (__LIB_19__::func_591(30))
	{
		func_2925(iParam0);
		return;
	}
	__LIB_19__::func_841(iParam0, 864671/*func_2924*/);
	__LIB_19__::func_841(iParam0, 864543/*func_2922*/);
	__LIB_19__::func_841(iParam0, 864519/*func_2921*/);
	__LIB_19__::func_841(iParam0, 864495/*func_2920*/);
	__LIB_19__::func_841(iParam0, 864471/*func_2919*/);
}

int func_2919(int iParam0)//Position - 0xD30D7
{
	if (func_64(iParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_2920(int iParam0)//Position - 0xD30EF
{
	if (func_64(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

int func_2921(int iParam0)//Position - 0xD3107
{
	if (func_64(iParam0, 12))
	{
		return 1;
	}
	return 0;
}

int func_2922(int iParam0)//Position - 0xD311F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = Local_196.f_38.f_1[iParam0 /*21*/].f_14;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar2 = Local_196.f_38.f_23[iVar1 /*5*/].f_1[iVar0];
		if (iVar2 != -1)
		{
			if (func_2030(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_2924(int iParam0)//Position - 0xD319F
{
	func_63(iParam0, 16);
	if (func_64(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_2925(int iParam0)//Position - 0xD31BE
{
	__LIB_19__::func_841(iParam0, 864792/*func_2927*/);
	__LIB_19__::func_841(iParam0, 864760/*func_2926*/);
	__LIB_19__::func_841(iParam0, 864519/*func_2921*/);
	__LIB_19__::func_841(iParam0, 864495/*func_2920*/);
	__LIB_19__::func_841(iParam0, 864471/*func_2919*/);
}

int func_2926(int iParam0)//Position - 0xD31F8
{
	func_63(iParam0, 15);
	if (func_64(iParam0, 14))
	{
		return 1;
	}
	return 0;
}

int func_2927(int iParam0)//Position - 0xD3218
{
	func_63(iParam0, 18);
	if (func_64(iParam0, 11))
	{
		return 1;
	}
	return 0;
}

var func_2935(int iParam0)//Position - 0xD3358
{
	Stack.Push(func_64(iParam0, 8));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_169);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_169.f_2);
		return StackVal;
	}
	return Local_196.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_2936(int iParam0)//Position - 0xD3395
{
	Stack.Push(func_64(iParam0, 8));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_169);
	if (StackVal && StackVal)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_169.f_1);
		return StackVal, StackVal, StackVal;
	}
	return Local_196.f_38.f_1[iParam0 /*21*/].f_3;
}

int func_2939(var uParam0)//Position - 0xD33F1
{
	switch (func_990())
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

void func_2960()//Position - 0xD34E3
{
	__LIB_19__::func_625(0, 4, 141381/*__LIB_0__::func_467*/);
	__LIB_19__::func_626(0, 1);
	func_556(1, 2, 4, 5, 3, 141381/*__LIB_0__::func_467*/, 141381/*__LIB_0__::func_467*/, 141381/*__LIB_0__::func_467*/, 141381/*__LIB_0__::func_467*/, 1);
	__LIB_19__::func_625(3, 48, 141381/*__LIB_0__::func_467*/);
}

void func_2961()//Position - 0xD3520
{
	__LIB_19__::func_624(0, 4);
	__LIB_19__::func_850(0, 1, 861047/*__LIB_0__::func_114*/);
	__LIB_19__::func_624(1, 22);
	__LIB_19__::func_850(1, 2, 860983/*func_2841*/);
	__LIB_19__::func_624(2, 24);
	__LIB_19__::func_850(2, 3, 860962/*func_2840*/);
	__LIB_19__::func_624(3, 48);
	__LIB_19__::func_831(3, 860418/*func_2824*/);
}

void func_2964()//Position - 0xD35D3
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_488() != false;
	bVar1 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (__LIB_20__::func_267() && __LIB_0__::func_893())
	{
		__LIB_20__::func_333(0, 0, 0);
	}
	if (__LIB_19__::func_628(71))
	{
		__LIB_20__::func_292(0);
	}
	__LIB_20__::func_293(0);
	__LIB_20__::func_230(0);
	func_3062();
	__LIB_32__::func_252();
	__LIB_20__::func_266();
	func_3059();
	__LIB_20__::func_224();
	if (bVar1)
	{
		func_1841();
	}
	func_3058();
	if (__LIB_20__::func_265())
	{
		__LIB_19__::func_853();
	}
	__LIB_15__::func_345(0, __LIB_0__::func_955(Local_334.f_0));
	__LIB_19__::func_465(0);
	__LIB_32__::func_251(bVar0);
	if (bVar1)
	{
		__LIB_19__::func_475(Local_365.f_129);
		func_3053();
		if (__LIB_19__::func_462(bLocal_324))
		{
			__LIB_3__::func_157(0);
		}
	}
	func_2059(1, 1, 1);
	__LIB_19__::func_507();
	__LIB_19__::func_851();
	func_1774(1);
	func_2588(0);
	__LIB_0__::func_467(0);
	if (bVar0 || (bVar1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1))
	{
		func_3051();
		func_3049();
		func_3047();
		func_3046();
		if (bVar1)
		{
			func_869();
		}
	}
	OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_196.f_19.f_5[0 /*13*/].f_2, -1);
	__LIB_0__::func_467();
	__LIB_0__::func_467();
	if (Local_213.f_10 != 0)
	{
		Call_Loc(Local_213.f_10);
	}
	__LIB_20__::func_156();
	__LIB_20__::func_327(0);
	if (bVar0)
	{
		__LIB_20__::func_335();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3046()//Position - 0xD6588
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_85)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iVar0 /*5*/]))
		{
			if (__LIB_19__::func_596(iVar0, 26))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_365.f_56[iVar0 /*5*/]), false, true);
			}
			if (__LIB_19__::func_596(iVar0, 31))
			{
				if (__LIB_1__::func_561(Local_365.f_56[iVar0 /*5*/]))
				{
					__LIB_6__::func_843(&(Local_365.f_56[iVar0 /*5*/]));
				}
			}
			else
			{
				__LIB_1__::func_518(&(Local_365.f_56[iVar0 /*5*/]));
			}
		}
		iVar0++;
	}
}

void func_3047()//Position - 0xD660B
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < Local_196.f_67)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_365.f_47[iVar0 /*8*/]);
			if (__LIB_19__::func_602(iVar0, 22) && !__LIB_15__::func_400(iVar2, 0, 1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]))
				{
					return;
				}
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_365.f_47[iVar0 /*8*/]), false, true);
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_365.f_47[iVar0 /*8*/]), false, false);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_365.f_47[iVar0 /*8*/]), true);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_365.f_47[iVar0 /*8*/]), false), 1f, true, false, false, false);
			}
			if (iVar2 == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
			{
				VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
			}
			if (func_3048(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]))
				{
					if (bVar1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					__LIB_6__::func_843(&(Local_365.f_47[iVar0 /*8*/]));
				}
			}
			else
			{
				if (Local_213.f_352.f_53 != 0)
				{
					Stack.Push(iVar0);
					Call_Loc(Local_213.f_352.f_53);
				}
				if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Local_196.f_67.f_1[iVar0 /*15*/].f_3))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]))
					{
						VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iVar2, false);
					}
				}
				else
				{
					__LIB_1__::func_518(&(Local_365.f_47[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

int func_3048(int iParam0)//Position - 0xD6776
{
	bool bVar0;
	bVar0 = !__LIB_15__::func_400(NETWORK::NET_TO_VEH(Local_365.f_47[iParam0 /*8*/]), 0, 1);
	if (func_147(iParam0, 2) && bVar0)
	{
		return 1;
	}
	if (__LIB_19__::func_602(iParam0, 29))
	{
		if (bVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_3049()//Position - 0xD67C1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iVar0 /*24*/]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_365.f_22[iVar0 /*24*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_22[iVar0 /*24*/]))
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
			if (Local_213.f_156.f_191 != 0)
			{
				Stack.Push(iVar0);
				Call_Loc(Local_213.f_156.f_191);
			}
			if (__LIB_32__::func_250(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_22[iVar0 /*24*/]))
				{
					__LIB_6__::func_843(&(Local_365.f_22[iVar0 /*24*/]));
				}
			}
			else
			{
				__LIB_1__::func_518(&(Local_365.f_22[iVar0 /*24*/]));
			}
		}
		iVar0++;
	}
}

void func_3051()//Position - 0xD68AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_2[iVar0]))
			{
				__LIB_6__::func_843(&(Local_365.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2.f_15[iVar0]))
		{
			if (__LIB_1__::func_561(Local_365.f_2.f_15[iVar0]))
			{
				__LIB_6__::func_843(&(Local_365.f_2.f_15[iVar0]));
			}
			__LIB_1__::func_518(&(Local_365.f_2.f_15[iVar0]));
		}
		iVar0++;
	}
}

void func_3053()//Position - 0xD6960
{
	struct<3> Var0;
	Var0 = { func_897() };
	if (!__LIB_0__::func_86(Var0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Var0, 80f, false, false, true, true, true, false, 0);
	}
}

void func_3058()//Position - 0xD6A5F
{
	if (!__LIB_19__::func_591(31))
	{
		return;
	}
	func_1811(0);
}

void func_3059()//Position - 0xD6A79
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (__LIB_19__::func_628(54))
	{
		__LIB_15__::func_571();
		__LIB_19__::func_306(0, -1, 1);
	}
	func_915(0, 0);
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_408 = -1;
	}
	if (Global_2815059.f_6725 != 0)
	{
		Global_2815059.f_6725 = 0;
	}
}

void func_3062()//Position - 0xD6B23
{
	func_1777(9);
	if (func_415(iLocal_328, 13))
	{
		func_1777(13);
		if (Local_309.f_0 == -1)
		{
			PED::CLEAR_PED_PROP(iLocal_326, 0);
		}
		else
		{
			PED::SET_PED_PROP_INDEX(iLocal_326, 0, Local_309.f_0, Local_309.f_1, false);
			Local_309.f_0 = -1;
			Local_309.f_1 = -1;
		}
	}
}

void func_3064(bool bParam0, bool bParam1)//Position - 0xD6B7E
{
	if (!__LIB_19__::func_628(31))
	{
		return;
	}
	if (!__LIB_19__::func_628(0))
	{
		Local_307.f_2 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_307.f_1);
		__LIB_0__::func_467();
		func_3065(bParam0, bParam1);
		__LIB_19__::func_614(0);
	}
}

void func_3065(bool bParam0, bool bParam1)//Position - 0xD6BBC
{
	var uVar0;
	uVar0 = func_3133(func_488(), bParam0, bParam1);
	Local_307.f_0 = uVar0;
	__LIB_19__::func_573(bParam0, uVar0, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
}

int func_3133(int iParam0, bool bParam1, bool bParam2)//Position - 0xD9125
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
	if (__LIB_19__::func_999() && func_3136())
	{
		return 13;
	}
	if (bParam1)
	{
		if (func_3134())
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

bool func_3134()//Position - 0xD91A1
{
	if (Local_213.f_102.f_1 != 0)
	{
		Call_Loc(Local_213.f_102.f_1);
		return StackVal;
	}
	if (!__LIB_20__::func_193())
	{
		return 0;
	}
	if (func_662() && func_3135(bLocal_324) < __LIB_19__::func_586())
	{
		return 1;
	}
	return (func_1797(bLocal_324) && !func_662());
}

int func_3135(int iParam0)//Position - 0xD91F8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (func_439(iVar0, 4) && func_1795(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_3136()//Position - 0xD9234
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_19__::func_586())
	{
		if (!func_439(iVar0, 33))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_3139(struct<21> Param0)//Position - 0xD9278
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_0__::func_895(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_365.f_2.f_11[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_355[iVar0] = __LIB_0__::getMinusOneOrNull();
		uLocal_356[iVar0] = __LIB_0__::getMinusOneOrNull();
		Local_290[iVar0 /*7*/].f_4 = __LIB_0__::getMinusOneOrNull();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_192[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_121[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_348)
	{
		iLocal_348[iVar0] = -1;
		iVar0++;
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_365, 162, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_372, 281, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_19__::func_854(__LIB_0__::func_956(Param0.f_0, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT());
	__LIB_20__::func_340();
	__LIB_19__::func_341();
	__LIB_0__::func_467();
	iLocal_306 = PLAYER::GET_PLAYER_GROUP(bLocal_324);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_365.f_96 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	}
	Local_372[NETWORK::PARTICIPANT_ID_TO_INT() /*35*/].f_16 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	return 1;
}

void func_3191(bool bParam0)//Position - 0xDAF54
{
	bLocal_324 = PLAYER::PLAYER_ID();
	iLocal_325 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iLocal_326 = PLAYER::PLAYER_PED_ID();
	Local_329 = { ENTITY::GET_ENTITY_COORDS(iLocal_326, false) };
	bLocal_320 = __LIB_1__::func_693(bLocal_324, 0, 1);
	if (bParam0)
	{
		bLocal_322 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		iLocal_327 = NETWORK::PARTICIPANT_ID_TO_INT();
		iLocal_328 = NETWORK::PARTICIPANT_ID();
		bLocal_323 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_328);
	}
	if (bLocal_320)
	{
		bLocal_321 = PLAYER::IS_PLAYER_PLAYING(bLocal_324);
	}
	else
	{
		bLocal_321 = false;
	}
	if (bLocal_321)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
		{
			iLocal_330 = PED::GET_VEHICLE_PED_IS_IN(iLocal_326, false);
			iLocal_331 = ENTITY::GET_ENTITY_MODEL(iLocal_330);
		}
		else
		{
			__LIB_19__::func_855();
		}
	}
	else
	{
		__LIB_19__::func_855();
	}
	if (__LIB_0__::func_937(&uLocal_361, 1000, 0))
	{
		if (bLocal_323)
		{
			if (!__LIB_0__::func_490(Local_372[iLocal_327 /*35*/].f_16, Local_329, 1f, 0))
			{
				Local_372[iLocal_327 /*35*/].f_16 = { Local_329 };
			}
		}
		__LIB_0__::clearF_1Prop(&uLocal_361);
	}
	bLocal_322 = bLocal_322;
	iLocal_327 = iLocal_327;
	iLocal_328 = iLocal_328;
	Local_329 = { Local_329 };
	bLocal_323 = bLocal_323;
	iLocal_331 = iLocal_331;
	bLocal_332 = __LIB_41__::func_87(1, 0, 1);
	bLocal_333 = func_2084();
}

