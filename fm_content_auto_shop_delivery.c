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
	__LIB_21__::func_141(&(Local_365.f_129));
	func_2859();
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_6__::func_949())
		{
			func_3064(0, 1);
			func_2964();
		}
		if (__LIB_39__::func_979())
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
					func_3064(__LIB_13__::func_482(11), 0);
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
					if (__LIB_13__::func_466() == 0)
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
		__LIB_13__::func_438();
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
	return __LIB_0__::func_287(&(Local_365.f_88), iParam0);
}

bool func_5()//Position - 0x350
{
	return func_3(21);
}

void func_6()//Position - 0x35E
{
	__LIB_0__::func_371();
	if (Local_213.f_3 != 0)
	{
		Call_Loc(Local_213.f_3);
	}
	__LIB_13__::func_463();
	func_426();
	func_143();
	func_124();
	func_31();
	func_24();
	__LIB_0__::func_371();
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
	if (!__LIB_1__::func_264(__LIB_1__::func_301(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(__LIB_1__::func_301()))
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
	if (__LIB_13__::func_439() == -1)
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
			__LIB_0__::func_495(&(Local_365.f_106), 0, 0);
			func_16(5);
		}
	}
	if (!__LIB_0__::func_649(&(Local_365.f_106)))
	{
		__LIB_0__::func_580(&(Local_365.f_106), 0, 0);
	}
	else if (__LIB_0__::func_649(&(Local_365.f_106)))
	{
		if (__LIB_2__::func_47(&(Local_365.f_106), __LIB_13__::func_439(), 0))
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
	if (__LIB_1__::func_101(&(Local_365.f_88), iParam0))
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
	if (iVar1 < __LIB_13__::func_440())
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < __LIB_13__::func_440())
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
				if (iVar2 < (__LIB_13__::func_440() - 1))
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
					__LIB_13__::func_449(iVar5, 6);
				}
				else if (bVar3)
				{
					__LIB_13__::func_449(iVar5, 6);
				}
				else if (__LIB_0__::func_114(iVar5, iVar0))
				{
					__LIB_13__::func_449(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (__LIB_13__::func_449(iVar5))
				{
					__LIB_13__::func_449(iVar5, 2);
				}
				break;
			case 1:
				if (!bVar2)
				{
					if (func_117(iVar5))
					{
						func_116(iVar5);
						__LIB_13__::func_449(iVar5, 2);
					}
				}
				else if (__LIB_0__::func_109(iVar5))
				{
					__LIB_1__::func_162(&(Local_365.f_22[iVar5 /*24*/]));
				}
				break;
			case 2:
				if (!bVar1)
				{
					if (func_111(iVar5))
					{
						if (func_65(iVar5))
						{
							__LIB_13__::func_449(iVar5, 3);
							if (func_64(iVar5, 8))
							{
								func_63(iVar5, 31);
							}
							__LIB_0__::func_371(iVar5);
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
						__LIB_13__::func_449(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_40(iVar5);
						func_35(iVar5, iVar0, 1);
						if (__LIB_13__::func_442(iVar5))
						{
							__LIB_13__::func_449(iVar5, 4);
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
					if (__LIB_13__::func_442(iVar5))
					{
						__LIB_13__::func_449(iVar5, 4);
					}
				}
				if (func_33(iVar5))
				{
					if (__LIB_0__::func_109(iVar5))
					{
						__LIB_1__::func_162(&(Local_365.f_22[iVar5 /*24*/]));
					}
					__LIB_13__::func_449(iVar5, 1);
				}
				if (__LIB_13__::func_466() == 0)
				{
					if (__LIB_13__::func_441(iVar5, 0))
					{
						func_8(9);
					}
				}
				break;
			case 4:
				if (!__LIB_13__::func_441(iVar5, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_63(iVar5, 26);
					__LIB_13__::func_449(iVar5, 5);
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
	if (__LIB_13__::func_466() != 0)
	{
		return 0;
	}
	if (__LIB_13__::func_441(iParam0, 10))
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
	iVar0 = __LIB_13__::func_443(iParam0);
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
	if (__LIB_13__::func_329(Local_219.f_23[iVar0 /*67*/].f_1[func_38(iParam0) /*13*/]) != iParam2)
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
	if (__LIB_13__::func_445(28))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_10__::func_952(NETWORK::NET_TO_PED(Local_365.f_22[iParam0 /*24*/])))
		{
			func_42(__LIB_21__::func_143(), 1, 0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2)//Position - 0xE6A
{
	if (__LIB_19__::func_760(1))
	{
		__LIB_13__::func_330(Local_334.f_0, __LIB_26__::func_795(1), iParam0, iParam1, iParam2);
	}
	else
	{
		__LIB_13__::func_330(Local_334.f_0, __LIB_0__::func_679(bLocal_324), iParam0, iParam1, iParam2);
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
		if (__LIB_13__::func_856(iParam0))
		{
			__LIB_4__::func_509(&(Local_365.f_22[iParam0 /*24*/]));
		}
		else
		{
			__LIB_1__::func_162(&(Local_365.f_22[iParam0 /*24*/]));
		}
		return 1;
	}
	return 0;
}

void func_63(int iParam0, int iParam1)//Position - 0x121B
{
	if (__LIB_1__::func_101(&(Local_365.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_64(int iParam0, int iParam1)//Position - 0x1237
{
	return __LIB_0__::func_287(&(Local_365.f_22[iParam0 /*24*/].f_3), iParam1);
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
	if (__LIB_0__::func_584(iVar0))
	{
		iVar1 = Local_196.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (__LIB_0__::func_682(Local_365.f_47[iVar1 /*8*/]))
			{
				if (__LIB_0__::func_668(&(Local_365.f_22[iParam0 /*24*/]), Local_365.f_47[iVar1 /*8*/], 26, iVar0, Local_196.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
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
				if (!func_82(iParam0) || __LIB_36__::func_217(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (__LIB_1__::func_263(&(Local_365.f_22[iParam0 /*24*/]), 26, iVar0, Var2, fVar3, 1, 1, 1))
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
	if ((__LIB_13__::func_441(iParam0, 10) && func_64(iParam0, 8)) && !__LIB_13__::func_441(iParam0, 19))
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
	if (__LIB_13__::func_441(iParam0, 5))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
		__LIB_26__::func_824(iVar0, iParam0, 1, 0, 1, 1);
	}
}

int func_91(int iParam0, int iParam1)//Position - 0x2202
{
	if (__LIB_13__::func_441(iParam0, 9))
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
	if (__LIB_13__::func_441(iParam0, 6))
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
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, __LIB_13__::func_447());
	ENTITY::SET_ENTITY_HEALTH(iParam1, __LIB_13__::func_447(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	if (__LIB_13__::func_860(iParam0))
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
			if (func_95(iVar2, 4))
			{
				Var3 = { __LIB_13__::func_446(iVar2) };
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, false, false);
			}
		}
		iVar1++;
	}
}

bool func_95(int iParam0, int iParam1)//Position - 0x2430
{
	struct<9> Var0;
	Var0 = { __LIB_13__::func_446(iParam0) };
	return __LIB_0__::func_287(&Var0, iParam1);
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
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, __LIB_13__::func_447());
	ENTITY::SET_ENTITY_HEALTH(iParam1, __LIB_13__::func_447(), 0);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_101());
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}

void func_103(int iParam0, int iParam1)//Position - 0x2605
{
	int iVar0;
	int iVar1;
	if (__LIB_13__::func_448(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_365.f_22[iParam0 /*24*/]), true);
	}
	if (!__LIB_10__::func_952(iParam1))
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
	if (__LIB_13__::func_441(iParam0, 11))
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
	iVar1 = __LIB_13__::func_448(iParam0);
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
			if (!__LIB_2__::func_47(&(Local_365.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::func_579(&(Local_365.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
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
		if (__LIB_13__::func_455(iVar4) > 1 && __LIB_13__::func_455(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_141(iVar4, 3);
				}
				else if (__LIB_13__::func_455(iVar4))
				{
					func_141(iVar4, 3);
				}
			}
			else
			{
				func_141(iVar4, 3);
			}
		}
		__LIB_13__::func_453(iVar4, iVar0);
		switch (__LIB_13__::func_455(iVar4))
		{
			case 0:
				if (__LIB_13__::func_452(iVar4))
				{
					func_141(iVar4, 1);
				}
				break;
			case 1:
				if ((!bVar1 && __LIB_13__::func_451(iVar4)) && func_125(iVar4))
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
		Var1 = { __LIB_13__::func_450(iParam0) };
		Var2 = { __LIB_13__::func_451(iParam0) };
		if (__LIB_0__::func_86(Var1))
		{
			return 0;
		}
		iVar3 = Local_196.f_85.f_1[iParam0 /*12*/].f_3;
		if (!__LIB_0__::func_584(iVar3))
		{
			return 0;
		}
		if (__LIB_1__::func_262(&(Local_365.f_56[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, __LIB_13__::func_450(iParam0, 22), 1, 0, 0))
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
	ENTITY::SET_ENTITY_PROOFS(iParam1, __LIB_13__::func_450(iParam0, 17), __LIB_13__::func_450(iParam0, 18), __LIB_13__::func_450(iParam0, 19), __LIB_13__::func_450(iParam0, 20), __LIB_13__::func_450(iParam0, 21), false, false, false);
	func_128(iParam0, 0);
	if (__LIB_13__::func_450(iParam0, 32))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (!__LIB_13__::func_450(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]));
	}
	if (__LIB_13__::func_450(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_365.f_56[iParam0 /*5*/], true, true);
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_365.f_56[iParam0 /*5*/], 1);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (__LIB_13__::func_450(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (__LIB_13__::func_450(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, true);
	}
	if (__LIB_13__::func_450(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, false);
	}
	if (__LIB_13__::func_450(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
	}
	if (__LIB_13__::func_450(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (__LIB_13__::func_450(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]), 1200);
	}
	if (__LIB_13__::func_450(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (__LIB_13__::func_450(iParam0, 9))
	{
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_365.f_56[iParam0 /*5*/]), true);
	}
	if (__LIB_13__::func_450(iParam0, 34))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, __LIB_13__::func_450(iParam0), false, false, true);
	}
	else if (__LIB_13__::func_450(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, __LIB_13__::func_450(iParam0), true, false, false, true);
	}
	if (__LIB_13__::func_450(iParam0, 33))
	{
		ENTITY::SET_ENTITY_ROTATION(iParam1, __LIB_13__::func_451(iParam0), 2, true);
	}
	if (__LIB_13__::func_450(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (__LIB_13__::func_450(iParam0, 11))
	{
		ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iParam1, true);
	}
	if (__LIB_21__::func_220(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	if (__LIB_13__::func_450(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
	}
	if (__LIB_13__::func_450(iParam0, 14))
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
	if (__LIB_11__::func_631(&(Local_365.f_56[iParam0 /*5*/].f_2), iParam1))
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
	return __LIB_0__::func_287(&(Local_365.f_56[iParam0 /*5*/].f_2), iParam1);
}

void func_141(int iParam0, int iParam1)//Position - 0x31EB
{
	Local_365.f_56[iParam0 /*5*/].f_1 = iParam1;
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
			bVar4 = __LIB_2__::func_63(Local_365.f_47[iVar0 /*8*/]);
			bVar6 = __LIB_7__::func_181(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
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
					__LIB_21__::func_129(iVar0, 5);
				}
				else if (!bVar4)
				{
					__LIB_21__::func_129(iVar0, 5);
				}
				else if (__LIB_0__::func_114(iVar0, iVar2))
				{
					__LIB_21__::func_129(iVar0, 5);
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
				if (__LIB_13__::func_461(iVar0))
				{
					__LIB_21__::func_129(iVar0, 2);
				}
				break;
			case 1:
				if (!bVar5)
				{
					if (func_411(iVar0))
					{
						__LIB_21__::func_129(iVar0, 2);
					}
				}
				else
				{
					__LIB_1__::func_162(&(Local_365.f_47[iVar0 /*8*/]));
				}
				break;
			case 2:
				if (!bVar3)
				{
					if (func_410(iVar0))
					{
						if (func_152(iVar0))
						{
							__LIB_21__::func_129(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			case 4:
				if (bVar5)
				{
					if (__LIB_13__::func_456(iVar0, iVar2))
					{
						__LIB_21__::func_129(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_150(iVar0, iVar2);
						}
						break;
					case 5:
						if (__LIB_13__::func_456(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (__LIB_13__::func_456(iVar0, iVar2))
							{
							}
							else
							{
								if (__LIB_13__::func_456(iVar0, 23))
								{
									if (bVar5)
									{
										__LIB_1__::func_162(&(Local_365.f_47[iVar0 /*8*/]));
									}
								}
								if (func_148(iVar0))
								{
									__LIB_1__::func_162(&(Local_365.f_47[iVar0 /*8*/]));
									__LIB_21__::func_129(iVar0, 1);
								}
								break;
							case 3:
								break;
							case 6:
								if (bVar5 && func_146(iVar0, iVar2))
								{
									__LIB_1__::func_162(&(Local_365.f_47[iVar0 /*8*/]));
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
	if (__LIB_11__::func_631(&(Local_365.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x347E
{
	if (__LIB_1__::func_101(&(Local_365.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_146(int iParam0, int iParam1)//Position - 0x349A
{
	if (__LIB_13__::func_456(iParam0, 23) || func_147(iParam0, 15))
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
	return __LIB_0__::func_287(&(Local_365.f_47[iParam0 /*8*/].f_2), iParam1);
}

int func_148(int iParam0)//Position - 0x34FC
{
	if (__LIB_13__::func_466() != 0)
	{
		return 0;
	}
	if (__LIB_13__::func_456(iParam0, 13))
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

int func_152(int iParam0)//Position - 0x3629
{
	int iVar0;
	bool bVar1;
	int iVar2;
	func_110(1, iParam0);
	iVar0 = Local_196.f_67.f_1[iParam0 /*15*/].f_3;
	if (!__LIB_0__::func_584(iVar0))
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
			if (__LIB_13__::func_456(iParam0, 35) && !func_147(iParam0, 24))
			{
				if (!__LIB_36__::func_217(Local_196.f_67.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1))
				{
					func_145(iParam0, 24);
				}
			}
			if (__LIB_13__::func_456(iParam0, 17) || func_147(iParam0, 24))
			{
				if (!func_284(iParam0, &(Local_365.f_112), &(Local_365.f_121)))
				{
					bVar1 = false;
				}
			}
			else if (__LIB_13__::func_456(iParam0, 25))
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
			else if (__LIB_13__::func_456(iParam0, 18))
			{
				if (!func_280(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (__LIB_13__::func_456(iParam0, 19))
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
		if (!__LIB_13__::func_456(iParam0, 30))
		{
			__LIB_32__::func_562(Local_365.f_112, 30f, 0);
			MISC::CLEAR_AREA(Local_365.f_112, 30f, false, false, false, true);
		}
		if (__LIB_18__::func_220(&(Local_365.f_47[iParam0 /*8*/]), iVar0, Local_365.f_112, Local_365.f_121, 1, 1, 1, 0, 1, 1, 0, 0, Local_365.f_112.f_2 <= -100f, 0))
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
	if (!func_171(iParam0, iParam1))
	{
		__LIB_13__::func_459(iParam0, iParam1);
	}
	if (__LIB_13__::func_458(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, __LIB_13__::func_456(iParam0, 10));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, __LIB_13__::func_456(iParam0, 3));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, __LIB_13__::func_456(iParam0, 6));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, __LIB_13__::func_456(iParam0, 5));
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
	}
	if (__LIB_13__::func_456(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (__LIB_13__::func_456(iParam0, 25))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_365.f_112, false, false, true);
	}
	if (__LIB_13__::func_456(iParam0, 8))
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
		VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, false);
	}
	if (__LIB_13__::func_456(iParam0, 28))
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
		if (__LIB_13__::func_881(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, __LIB_13__::func_458(iParam0, iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
		}
		__LIB_21__::func_100(iParam1, iVar0);
		__LIB_1__::func_419(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
		VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, __LIB_13__::func_456(iParam0, 7), false);
		__LIB_13__::func_332(iParam0, iParam1);
		iVar1 = func_162(iParam0);
		if (iVar1 != -1 && func_161(iVar1) != -1)
		{
			__LIB_13__::func_260(NETWORK::NET_TO_ENT(Local_365.f_47[iParam0 /*8*/]), Local_365.f_155.f_1[func_161(iVar1) /*5*/].f_1);
		}
	}
	if (__LIB_13__::func_456(iParam0, 11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (__LIB_13__::func_456(iParam0, 32))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
		VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, true);
	}
	if (__LIB_13__::func_456(iParam0, 33))
	{
		VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
	}
	if (__LIB_13__::func_331(iParam1))
	{
		if (__LIB_13__::func_456(iParam0, 34))
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
			if (__LIB_13__::func_456(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1))
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
	if (func_147(iParam0, 15) || __LIB_13__::func_456(iParam0, 19))
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
		__LIB_21__::func_225(iParam0, iParam1);
	}
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, true);
	__LIB_21__::func_99(iParam1);
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
	while (iVar0 < __LIB_13__::func_440())
	{
		if (Local_365.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_171(var uParam0, int iParam1)//Position - 0x3F01
{
	struct<101> Var0;
	if (Local_213.f_352.f_44 != 0)
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
		Call_Loc(Local_213.f_352.f_44);
		if (StackVal)
		{
			__LIB_13__::func_459(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0)//Position - 0x123BE
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (func_277(iParam0, &Var2, &Var1, &uVar0))
	{
		if (__LIB_38__::func_219(iParam0, Var2, Var1, uVar0))
		{
			Local_365.f_112 = { Var2 };
			Local_365.f_121 = __LIB_0__::func_670(Var2, Var1);
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
	*uParam1 = { __LIB_1__::func_249(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_344) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_344) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + __LIB_13__::func_262());
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
			if (__LIB_38__::func_220(iParam0, Var3, Var2, uVar0))
			{
				Local_365.f_112 = { Var3 };
				Local_365.f_121 = __LIB_0__::func_670(Var3, Var2);
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
		__LIB_13__::func_460(uParam1);
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
	return __LIB_13__::func_460(Local_196.f_67.f_1[iParam0 /*15*/].f_4, Local_196.f_67.f_1[iParam0 /*15*/].f_4, Local_196.f_67.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

void func_300(struct<3> Param0, int iParam1)//Position - 0x13AE3
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_607(Param0, 0.01f))
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
		if (__LIB_18__::func_371(uParam0, 1))
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
	if (__LIB_6__::func_902(uParam2->f_34) != 0)
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
					if (!__LIB_24__::func_959(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__::func_38(Var1))
									{
										Var1 = { __LIB_24__::func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__::func_373(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__::func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__::func_371(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !__LIB_32__::func_84(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																					if (!__LIB_25__::func_72(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_36__::func_217(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_36__::func_217(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_38__::func_221(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_36__::func_218(Var1, uParam2->f_54, &fVar23);
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
																									if (__LIB_7__::func_119(Var1, uParam2))
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
						__LIB_31__::func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_350(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__::func_371(&Var27, bVar29))
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
				__LIB_37__::func_866(&Global_1574205, uParam0, uParam1, *uParam0);
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
	if (!__LIB_7__::func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_609(iParam0);
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
	if (__LIB_18__::func_494(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_607(*uParam1, 1056964608))
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
				__LIB_1__::func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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
				if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_353(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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
			if (__LIB_18__::func_371(uParam0, 1))
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
			__LIB_6__::func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_623();
		}
		else
		{
			__LIB_0__::func_622();
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
							if ((uParam2->f_12 && !__LIB_32__::func_84(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
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
										if (!__LIB_25__::func_72(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_36__::func_217(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_36__::func_217(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_38__::func_221(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_36__::func_218(Var3, uParam2->f_54, &fVar12);
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
			if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_7__::func_137(Param0, 1008981770))
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
				iVar0 = __LIB_7__::func_136(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
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
			if (!__LIB_2__::func_47(&(Local_365.f_47[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::func_579(&(Local_365.f_47[iParam0 /*8*/].f_6));
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
		if (__LIB_13__::func_461(iParam0, iParam1))
		{
			func_145(iParam0, 2);
		}
		else
		{
			func_144(iParam0, 2);
		}
	}
}

bool func_415(int iParam0, int iParam1)//Position - 0x1FE42
{
	return __LIB_0__::func_287(&(Local_372[iParam0 /*35*/].f_1), iParam1);
}

int func_419(int iParam0, int iParam1)//Position - 0x1FED3
{
	int iVar0;
	if (iParam1 != __LIB_13__::func_462())
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
		if (__LIB_13__::func_885() > 0 && Local_310.f_0 > 0)
		{
			if (__LIB_13__::func_482(53))
			{
				Var0 = { __LIB_13__::func_463(__LIB_1__::func_301()) };
				if (__LIB_32__::func_923(__LIB_1__::func_301(), Local_365.f_129, &Var0))
				{
					func_16(8);
				}
			}
		}
	}
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
	if (__LIB_13__::func_887())
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
	while (iVar0 < __LIB_13__::func_440())
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
	return __LIB_0__::func_287(&(Local_365.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_440()//Position - 0x20576
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
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
	while (iVar0 < __LIB_13__::func_440())
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
	if (__LIB_11__::func_631(&(Local_365.f_2.f_5[iParam0 /*3*/]), iParam1))
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
	return (func_447(iParam0) && __LIB_13__::func_462() == 2);
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
				if (__LIB_0__::func_584(Local_196.f_19.f_5[iParam0 /*13*/].f_2))
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
	if (__LIB_1__::func_101(&(Local_365.f_2.f_5[iParam0 /*3*/]), iParam1))
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
		Var0 = { __LIB_13__::func_464(iParam0) };
		fVar1 = Local_196.f_19.f_5[iParam0 /*13*/].f_6;
		Var2 = { Local_196.f_19.f_5[iParam0 /*13*/].f_7 };
		if (__LIB_0__::func_86(Var0))
		{
			return 0;
		}
		Local_365.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(__LIB_13__::func_465(iParam0), Var0, !__LIB_13__::func_464(iParam0, 0), Local_196.f_19.f_5[iParam0 /*13*/].f_2));
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
		if (func_451(&(Local_365.f_2.f_13[iParam0]), 0, iParam0, __LIB_13__::func_337(iParam0), __LIB_9__::func_957(), __LIB_0__::func_109(iParam0), __LIB_0__::func_114(iParam0)))
		{
			__LIB_13__::func_260(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), Local_365.f_155.f_1[func_161(iParam0) /*5*/].f_1);
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
	if (__LIB_32__::func_968(&(Local_365.f_155.f_1[*uParam0 /*5*/]), iParam3, *uParam0, Local_365.f_155, &(Local_365.f_129), uParam5, uParam6))
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
		if (!__LIB_2__::func_467(Local_365.f_155.f_1[iVar1 /*5*/]))
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
	else if (!__LIB_13__::func_464(iParam0, 7))
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
	if (!__LIB_13__::func_464(iParam0, 1))
	{
		OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]));
	}
	if (__LIB_13__::func_464(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), Param1, true, false, false, true);
	}
	if (__LIB_13__::func_464(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
	}
	if (__LIB_13__::func_464(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true);
	}
	if ((__LIB_13__::func_464(iParam0, 6) || __LIB_13__::func_464(iParam0, 7)) || func_447(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), false, false);
	}
	if (Local_196.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_449(iParam0, 23);
	}
	if (__LIB_21__::func_238(iParam0))
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]), true);
	}
	if (__LIB_13__::func_464(iParam0, 9) || Local_213.f_114.f_38 != 0)
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
	return !__LIB_13__::func_464(iParam0, 5);
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

void func_489(int iParam0)//Position - 0x215A2
{
	Local_365.f_81 = iParam0;
}

int func_490()//Position - 0x215B1
{
	int iVar0;
	if (!func_686(__LIB_21__::func_104(), __LIB_21__::func_103()))
	{
		return 0;
	}
	if (!func_505())
	{
		return 0;
	}
	__LIB_0__::func_371();
	func_501();
	Local_365.f_93 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(__LIB_1__::func_388(), -1, 0);
	func_499();
	__LIB_13__::func_467();
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
		Local_365.f_22[iVar0 /*24*/].f_15 = __LIB_13__::func_467(iVar0);
		iVar0++;
	}
}

void func_495()//Position - 0x2171B
{
	Local_365.f_83 = 2;
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
	Local_365.f_92 = __LIB_19__::func_834() + 1;
	Global_1892703[bLocal_324 /*599*/].f_10.f_391 = Local_365.f_92;
}

int func_505()//Position - 0x21919
{
	__LIB_0__::func_371();
	func_516();
	if (!func_507())
	{
		return 0;
	}
	__LIB_0__::func_371();
	Stack.Push(Local_213.f_0 != 0);
	Call_Loc(Local_213.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_507()//Position - 0x21958
{
	if (__LIB_13__::func_482(12))
	{
		return 1;
	}
	if (!__LIB_0__::func_109())
	{
		return 0;
	}
	func_511();
	__LIB_13__::func_468();
	__LIB_0__::func_371();
	if (Local_213.f_13 != 0)
	{
		Call_Loc(Local_213.f_13);
	}
	__LIB_13__::func_468(12);
	return 1;
}

void func_511()//Position - 0x21B28
{
	var uVar0;
	var uVar1;
	uVar0 = uVar0;
	uVar1 = uVar1;
	__LIB_13__::func_339(Local_196.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	__LIB_13__::func_339(Local_196.f_38, 1, "data.Ped.iCount", "MAX_NUM_PEDS");
	__LIB_13__::func_339(__LIB_13__::func_471(), 1, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
	__LIB_13__::func_339(Local_196.f_131, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	__LIB_13__::func_339(Local_196.f_111, 1, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
	__LIB_13__::func_339(Local_196.f_85, 1, "data.Prop.iCount", "MAX_NUM_PROPS");
	__LIB_13__::func_339(__LIB_13__::func_469(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
	__LIB_13__::func_339(Local_196.f_120, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	__LIB_13__::func_339(Local_196.f_67, 1, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

void func_516()//Position - 0x21C60
{
	if (__LIB_13__::func_482(21))
	{
		return;
	}
	func_517();
	__LIB_13__::func_468(21);
}

void func_517()//Position - 0x21C7E
{
	Local_213.f_13 = 184602/*func_668*/;
	Local_213.f_2 = 184593/*func_667*/;
	Local_213.f_465.f_4 = 184313/*func_664*/;
	Local_213.f_10 = 143280/*func_580*/;
	Local_213.f_11.f_1 = 140750/*func_554*/;
	Local_213.f_11 = 140626/*func_551*/;
	Local_213.f_515.f_3 = 140111/*func_547*/;
	Local_213.f_515 = 140102/*func_546*/;
	Local_213.f_515.f_1 = 140063/*func_545*/;
	Local_213.f_515.f_4 = 139996/*func_543*/;
	Local_213.f_515.f_2 = 139986/*func_542*/;
	Local_213.f_352.f_45 = 139543/*func_535*/;
	Local_213.f_352.f_36 = 139534/*func_534*/;
	Local_213.f_352.f_43 = 139508/*func_533*/;
	Local_213.f_352.f_44 = 139325/*func_530*/;
	Local_213.f_456 = 139290/*func_529*/;
	Local_213.f_456.f_1 = 139252/*func_528*/;
	Local_213.f_47.f_2.f_1 = 139212/*func_527*/;
	Local_213.f_47.f_2.f_2 = 139172/*func_526*/;
	Local_213.f_114.f_31 = 138961/*func_522*/;
	Local_213.f_114.f_13 = 138949/*func_521*/;
	Local_213.f_102.f_6 = 138817/*func_520*/;
	Local_213.f_54.f_6 = 138734/*func_519*/;
	Local_213.f_54.f_7 = 138642/*func_518*/;
}

int func_518(bool bParam0)//Position - 0x21D92
{
	if (bParam0)
	{
		if (__LIB_13__::func_258(bLocal_324, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_326, NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_0__::func_582()), NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
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
		if (__LIB_13__::func_258(bLocal_324, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_326, NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_0__::func_582()), NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
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
	if (!__LIB_13__::func_482(11))
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
			if (__LIB_2__::func_47(&uLocal_373, 2000, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_326, NETWORK::NET_TO_VEH(Local_365.f_47[0 /*8*/]), false))
				{
					__LIB_4__::func_509(&(Local_365.f_47[0 /*8*/]));
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
		*uParam1 = { __LIB_10__::func_392(__LIB_20__::func_60()) };
		return 1;
	}
	return 0;
}

void func_540(int iParam0)//Position - 0x222A9
{
	if (__LIB_1__::func_101(&(Local_365.f_122), iParam0))
	{
	}
}

bool func_541(int iParam0)//Position - 0x222BF
{
	return __LIB_0__::func_287(&(Local_365.f_122), iParam0);
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
	switch (__LIB_10__::func_228(iParam0))
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
	func_556(0, 1, 2, 3, 4, 143257/*func_579*/, 143235/*func_578*/, 141389/*func_564*/, 141381/*func_563*/, 1);
	__LIB_13__::func_479(4, 48, 141381/*func_563*/);
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
	__LIB_13__::func_479(iVar0, 22, iParam5);
	__LIB_13__::func_481(iVar0, iParam4, 141212/*func_559*/);
	__LIB_13__::func_480(iVar0, iVar1);
	__LIB_13__::func_480(iVar0, iVar4);
	__LIB_13__::func_480(iVar0, iVar5);
	__LIB_13__::func_480(iVar0, iVar2);
	__LIB_13__::func_479(iVar1, 24, iParam6);
	__LIB_13__::func_481(iVar1, iParam4, 141212/*func_559*/);
	__LIB_13__::func_480(iVar1, iVar4);
	__LIB_13__::func_480(iVar1, iVar5);
	__LIB_13__::func_480(iVar1, iVar2);
	__LIB_13__::func_479(iVar2, 25, iParam7);
	__LIB_13__::func_481(iVar2, iParam4, 141212/*func_559*/);
	__LIB_13__::func_480(iVar2, iVar1);
	__LIB_13__::func_480(iVar2, iVar4);
	__LIB_13__::func_480(iVar2, iVar5);
	__LIB_13__::func_479(iVar3, 23, iParam8);
	__LIB_13__::func_481(iVar3, iParam4, 141212/*func_559*/);
	__LIB_13__::func_480(iVar3, iVar1);
	__LIB_13__::func_480(iVar3, iVar4);
	__LIB_13__::func_480(iVar3, iVar5);
	__LIB_13__::func_480(iVar3, iVar2);
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
	while (iVar0 < __LIB_13__::func_440())
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
	return __LIB_0__::func_287(&(Local_372[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_564()//Position - 0x2284D
{
	__LIB_13__::func_474("TCD_OT_HDELI" /* GXT: Help deliver the ~a~~s~ to the ~HUD_COLOUR_YELLOW~customer.~s~ */, __LIB_13__::func_476(), 1, 0);
}

void func_578()//Position - 0x22F83
{
	__LIB_13__::func_474("TCD_OT_DELI" /* GXT: Deliver the ~a~~s~ to the ~HUD_COLOUR_YELLOW~customer.~s~ */, __LIB_13__::func_476(), 1, 0);
}

void func_579()//Position - 0x22F99
{
	__LIB_13__::func_474("TCD_OT_ENTER" /* GXT: Enter the ~a~.~s~ */, __LIB_13__::func_476(), 9, 0);
}

void func_580()//Position - 0x22FB0
{
	func_661();
	if (__LIB_13__::func_482(11))
	{
		if (!__LIB_13__::func_258(bLocal_324, 0))
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
	if (!__LIB_5__::func_568(iParam0))
	{
		return;
	}
	iVar0 = __LIB_5__::func_567(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_137(32249, -1))
			{
				__LIB_0__::func_521(32249, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 1:
			if (!__LIB_0__::func_137(32250, -1))
			{
				__LIB_0__::func_521(32250, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 2:
			if (!__LIB_0__::func_137(32251, -1))
			{
				__LIB_0__::func_521(32251, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 3:
			if (!__LIB_0__::func_137(32252, -1))
			{
				__LIB_0__::func_521(32252, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 4:
			if (!__LIB_0__::func_137(32253, -1))
			{
				__LIB_0__::func_521(32253, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 5:
			if (!__LIB_0__::func_137(32254, -1))
			{
				__LIB_0__::func_521(32254, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 6:
			if (!__LIB_0__::func_137(32255, -1))
			{
				__LIB_0__::func_521(32255, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 7:
			if (!__LIB_0__::func_137(32256, -1))
			{
				__LIB_0__::func_521(32256, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 8:
			if (!__LIB_0__::func_137(32257, -1))
			{
				__LIB_0__::func_521(32257, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 9:
			if (!__LIB_0__::func_137(32258, -1))
			{
				__LIB_0__::func_521(32258, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 10:
			if (__LIB_0__::func_137(32249, -1))
			{
				if (!__LIB_0__::func_137(32259, -1))
				{
					__LIB_0__::func_521(32259, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_137(32250, -1))
			{
				if (!__LIB_0__::func_137(32260, -1))
				{
					__LIB_0__::func_521(32260, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_137(32251, -1))
			{
				if (!__LIB_0__::func_137(32261, -1))
				{
					__LIB_0__::func_521(32261, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_137(32252, -1))
			{
				if (!__LIB_0__::func_137(32262, -1))
				{
					__LIB_0__::func_521(32262, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_137(32253, -1))
			{
				if (!__LIB_0__::func_137(32263, -1))
				{
					__LIB_0__::func_521(32263, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 15:
			if (!__LIB_0__::func_137(32264, -1))
			{
				__LIB_0__::func_521(32264, 1, -1);
				func_582(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 16:
			if (__LIB_0__::func_137(32254, -1))
			{
				if (!__LIB_0__::func_137(32265, -1))
				{
					__LIB_0__::func_521(32265, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 17:
			if (__LIB_0__::func_137(32255, -1))
			{
				if (!__LIB_0__::func_137(32266, -1))
				{
					__LIB_0__::func_521(32266, 1, -1);
					func_582(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 18:
			if (__LIB_0__::func_137(32256, -1))
			{
				if (!__LIB_0__::func_137(32267, -1))
				{
					__LIB_0__::func_521(32267, 1, -1);
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
	if ((((iParam0 <= 0 || PLAYER::PLAYER_ID() == __LIB_0__::func_160()) || Global_262145.f_31078 /* Tunable: -1782032913 */) || __LIB_8__::func_298() >= __LIB_19__::func_89()) || !__LIB_5__::func_570(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fParam3));
	}
	iVar0 = __LIB_8__::func_298();
	iVar1 = __LIB_8__::func_297(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = __LIB_19__::func_89();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = __LIB_8__::func_297(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	__LIB_1__::func_597(9834, iVar2, -1, 1, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_1 = iVar2;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_2 = iVar5;
	__LIB_32__::func_505(iParam0, iVar5, bVar4, iParam1, uParam2);
	__LIB_1__::func_634(107, iVar5, -1);
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
		__LIB_5__::func_564(&iVar1, &iVar2, iVar0);
		if (__LIB_19__::func_88(iVar1))
		{
			func_626(iVar1);
			func_607(iVar1, 1);
			__LIB_5__::func_556(iVar1);
		}
		if (__LIB_19__::func_88(iVar2))
		{
			func_626(iVar2);
			func_607(iVar2, 1);
			__LIB_5__::func_556(iVar2);
		}
		__LIB_39__::func_895(iVar0);
		__LIB_13__::func_479("CCR_INC_TCK" /* GXT: LS Car Meet reputation increased: Level ~1~. */, iVar0, 1);
		iVar0++;
	}
	__LIB_35__::func_481();
}

void func_589(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2370C
{
	int iVar0;
	if ((!__LIB_0__::func_236() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = __LIB_13__::func_480(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

void func_607(int iParam0, bool bParam1)//Position - 0x24A0A
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_5__::func_561(iParam0);
	if (!__LIB_5__::func_560(iVar0))
	{
		return;
	}
	bVar1 = !__LIB_6__::func_925();
	sVar2 = "";
	switch (iVar0)
	{
		case 7:
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			bVar3 = 14;
			if (iVar4 == 1)
			{
				bVar3 = 15;
			}
			__LIB_8__::func_295(bVar3);
			if (bParam1)
			{
				sVar2 = __LIB_19__::func_87(iParam0, bVar1, iVar4, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
				{
					func_615("CCR_UNL_VD" /* GXT: LS Car Meet Vehicle Discount Unlocked: ~a~ */, sVar2, 0, 0, 0);
				}
			}
			break;
		case 1:
			iVar5 = 0;
			if (__LIB_35__::func_591(&iVar5))
			{
				if (bParam1)
				{
					sVar2 = __LIB_19__::func_87(iParam0, bVar1, -1, iVar5);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						func_615("CCR_UNL_TP" /* GXT: LS Car Meet Trade Price Unlocked: ~a~ */, sVar2, 0, 0, 0);
					}
				}
			}
			break;
		case 3:
			if (iParam0 == 12)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 16);
				__LIB_0__::func_151("CCR_INC_FA" /* GXT: Your increased LS Car Meet reputation has earned you the ability to call in other car meet members for help during the final mission of any Auto Shop contract job. This can be accessed via the LS Car Meet Support section of the Interaction Menu while on the job. */, -1);
			}
			break;
		case 2:
			if (iParam0 == 6)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 15);
				MISC::SET_BIT(&(Global_1946250.f_9), 18);
			}
			break;
		case 4:
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&(Global_1946250.f_9), 17);
				MISC::SET_BIT(&(Global_1946250.f_9), 19);
			}
			break;
	}
}

int func_615(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x250B8
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2787505 = { __LIB_1__::func_267(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2787435.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar1, false, Global_2787435, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1576215, Global_1576216, Global_1576217);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_589(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_626(int iParam0)//Position - 0x28BE0
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	char* sVar3;
	iVar0 = __LIB_5__::func_561(iParam0);
	if (!__LIB_5__::func_560(iVar0))
	{
		return;
	}
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "CCR_UNL_CLTH" /* GXT: LS Car Meet Clothing Unlocked: ~a~ */;
			break;
		case 1:
			sVar1 = "";
			break;
		case 2:
			sVar1 = "CCR_UNL_RC" /* GXT: LS Car Meet Race Unlocked: ~a~ */;
			break;
		case 3:
			sVar1 = "CCR_UNL_FA" /* GXT: Auto Shop Contract Ability Unlocked: ~a~ */;
			break;
		case 4:
			sVar1 = "CCR_UNL_FT" /* GXT: LS Car Meet Feature Unlocked: ~a~ */;
			break;
		case 5:
			sVar1 = "CCR_UNL_WS" /* GXT: LS Car Meet Wheel Style Unlocked: ~a~ */;
			break;
		case 6:
			sVar1 = "CCR_UNL_LIV" /* GXT: LS Car Meet Livery Unlocked: ~a~ */;
			break;
		case 7:
			sVar1 = "";
			break;
	}
	bVar2 = !__LIB_6__::func_925();
	sVar3 = __LIB_19__::func_87(iParam0, bVar2, -1, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_615(sVar1, sVar3, 0, 0, 0);
	}
}

void func_653()//Position - 0x2CD01
{
	int iVar0;
	iVar0 = __LIB_1__::func_596(112, -1);
	iVar0++;
	__LIB_1__::func_634(112, iVar0, -1);
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
	iVar1 = (iVar0 - __LIB_36__::func_175());
	fVar2 = ((IntToFloat(iVar1) * 100f) / IntToFloat(iVar0));
	if (fVar2 > 80f && fVar2 <= 100f)
	{
		return 1;
	}
	return 0;
}

void func_661()//Position - 0x2CEFF
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !__LIB_13__::func_258(bLocal_324, 0))
	{
		Local_365.f_124.f_4 = __LIB_10__::func_755(func_550());
	}
	Global_1973252.f_1 = func_662();
	Global_1973252 = func_662();
	Global_1973252.f_2 = 3;
	Global_1973252.f_7[0] = func_547();
	Global_1973252.f_7[1] = Local_365.f_124.f_4;
	Global_1973252.f_11 = -__LIB_36__::func_175();
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
		if (__LIB_13__::func_258(bLocal_324, 0))
		{
			__LIB_2__::func_598(func_682(__LIB_0__::func_582()), iVar0, &(Local_196.f_19.f_5[0 /*13*/].f_3), &(Local_196.f_19.f_5[0 /*13*/].f_6));
		}
		else
		{
			__LIB_2__::func_598(func_682(bLocal_324), iVar0, &(Local_196.f_19.f_5[0 /*13*/].f_3), &(Local_196.f_19.f_5[0 /*13*/].f_6));
		}
		if (!__LIB_36__::func_217(Local_196.f_19.f_5[0 /*13*/].f_3, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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
			Var1 = { __LIB_32__::func_925(func_664(0)) };
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
	if (bParam0 != __LIB_0__::func_160())
	{
		iVar0 = __LIB_1__::func_196(bParam0);
		if (iVar0 != 0)
		{
			return __LIB_1__::func_195(iVar0);
		}
	}
	return -1;
}

int func_686(var uParam0, var uParam1)//Position - 0x2EA0A
{
	Local_365.f_124 = uParam0;
	Local_365.f_124.f_1 = uParam1;
	Local_365.f_124.f_2 = __LIB_10__::func_236(__LIB_20__::func_60());
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
	if (__LIB_13__::func_495())
	{
		return;
	}
	if (!__LIB_0__::func_109())
	{
		return;
	}
	if (__LIB_13__::func_482(46))
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
	__LIB_26__::func_903();
}

void func_697()//Position - 0x2EB9D
{
	int iVar0;
	if (func_415(iLocal_328, 0))
	{
		return;
	}
	if (__LIB_13__::func_466() != 0)
	{
		if (iLocal_112 == -1 && __LIB_13__::func_482(11))
		{
			if (__LIB_20__::func_60() != -1)
			{
				Local_365.f_124.f_3 = __LIB_10__::func_229(__LIB_20__::func_60());
			}
			iLocal_377 = __LIB_36__::func_175();
			iLocal_112 = (((func_547() + __LIB_10__::func_755(func_550())) - __LIB_36__::func_175()) + Local_365.f_124.f_3);
			if (iLocal_112 < 0)
			{
				iLocal_112 = 0;
			}
		}
		if (iLocal_112 == -1)
		{
			iLocal_112 = 0;
		}
		func_699(iLocal_112, 3, &(Global_1973252.f_68), __LIB_13__::func_482(11), -1);
		if (Global_1973252.f_68 == 2 || Global_1973252.f_68 == 3)
		{
			func_698(0);
		}
		iVar0 = __LIB_20__::func_60();
		if (iVar0 < 0 || iVar0 >= 2)
		{
			func_698(0);
		}
	}
}

void func_698(int iParam0)//Position - 0x2EC67
{
	if (__LIB_1__::func_101(&(Local_372[iLocal_327 /*35*/].f_1), iParam0))
	{
	}
}

void func_699(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x2EC82
{
	int iVar0;
	iVar0 = __LIB_20__::func_60();
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
			MONEY::NETWORK_EARN_AUTOSHOP_BUSINESS(iParam0, MISC::GET_HASH_KEY(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_10__::func_236(iVar0))));
		}
		if (bParam3)
		{
			__LIB_36__::func_167(iVar0);
		}
		__LIB_26__::func_800(iVar0);
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
		}
		__LIB_6__::func_881(1490700264, 10, 0);
		*uParam2 = 2;
	}
	else if (iParam0 <= 0 || func_700(iVar0, iParam0, iParam1, uParam2))
	{
		if (*uParam2 == 2 || iParam0 <= 0)
		{
			if (bParam3)
			{
				__LIB_36__::func_167(iVar0);
			}
			__LIB_26__::func_800(iVar0);
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
			}
			__LIB_6__::func_881(1490700264, 10, 0);
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
			iVar5 = __LIB_1__::func_556(__LIB_9__::func_678(iParam0), -1, 0);
			iVar0 = __LIB_24__::func_76(iVar5);
			if (iVar0 == 0)
			{
				iVar6 = __LIB_1__::func_556(__LIB_9__::func_947(iParam0), -1, 0);
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
			iVar1 = __LIB_10__::func_347(iParam0);
			iVar2 = __LIB_10__::func_346(__LIB_10__::func_228(iVar0), iParam0);
			iVar3 = __LIB_24__::func_75(iParam0);
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
			if (iParam2 == 0 || __LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar2, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, 0, 1, 4, iVar1, 3))
			{
				if (__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar3, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iVar5, 0, 1, 4, 0, 3))
				{
					if (__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), iVar4, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, iParam1, 0, 4, iVar3, 3))
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
			if (*uParam3 == 1 && __LIB_18__::func_472())
			{
			}
			else
			{
				*uParam3 = 3;
				__LIB_18__::func_226(__LIB_2__::func_345());
			}
			break;
		case 1:
			if (__LIB_2__::func_48(__LIB_2__::func_345()))
			{
				if (__LIB_2__::func_46(__LIB_2__::func_345()) == 2)
				{
					if (iParam1 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_375(__LIB_2__::func_345()));
						MONEY::NETWORK_EARN_AUTOSHOP_BUSINESS(iParam1, MISC::GET_HASH_KEY(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(__LIB_10__::func_236(iParam0))));
					}
					*uParam3 = 2;
					__LIB_18__::func_226(__LIB_2__::func_345());
				}
				else
				{
					*uParam3 = 3;
					__LIB_18__::func_226(__LIB_2__::func_345());
				}
			}
			break;
	}
	return *uParam3 != 1;
}

void func_733()//Position - 0x30652
{
	if (!__LIB_13__::func_482(8))
	{
		if (__LIB_13__::func_485())
		{
			if (__LIB_41__::func_683(0, 1, 1) && func_788())
			{
				func_734();
				__LIB_13__::func_468(8);
			}
		}
		else
		{
			__LIB_13__::func_468(8);
		}
	}
}

void func_734()//Position - 0x30691
{
	if (!__LIB_13__::func_482(11))
	{
		__LIB_41__::func_21(89, func_787(), func_786(), func_785(), -1, -1, -1082130432, 0, 1, 2, 0);
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
	return __LIB_13__::func_476();
}

bool func_788()//Position - 0x31B44
{
	return (func_790() || __LIB_0__::func_114());
}

bool func_790()//Position - 0x31B63
{
	return (func_415(iLocal_328, 3) || __LIB_21__::func_105(bLocal_324));
}

void func_869()//Position - 0x32F7E
{
	int iVar0;
	if (func_415(iLocal_328, 25))
	{
		return;
	}
	if (__LIB_19__::func_482())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_885())
	{
		if (Local_365.f_155.f_1[iVar0 /*5*/].f_1 != -1)
		{
			__LIB_13__::func_281(Local_365.f_155.f_1[iVar0 /*5*/]);
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
		__LIB_21__::func_108(1);
	}
	else
	{
		func_915(0, 0);
		__LIB_21__::func_108(0);
	}
	func_905();
	func_875();
	iLocal_354++;
	if (iLocal_354 >= __LIB_13__::func_440())
	{
		iLocal_354 = 0;
		__LIB_21__::func_146();
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
			__LIB_13__::func_486(iLocal_354, Var0);
			if (__LIB_2__::func_47(&(Local_290.f_12), 5000, 0))
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
	iVar0 = __LIB_31__::func_908(Param2, 6, -1, 0, 1, -1);
	Var1 = { __LIB_31__::func_882(iVar0, 0) };
	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, __LIB_18__::func_444(iVar0));
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar2 != 0 && iVar2 == iVar3)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			return;
		}
		if (!__LIB_6__::func_924(Local_365.f_2[iParam0]))
		{
			return;
		}
		if (__LIB_0__::func_332(iVar0, &Var1, &fVar4))
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

Vector3 func_897()//Position - 0x359BB
{
	if (Local_213.f_465.f_4.f_2 != 0)
	{
		Call_Loc(Local_213.f_465.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return __LIB_13__::func_487(func_903());
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
		if (__LIB_21__::func_147())
		{
			if (!__LIB_13__::func_482(35))
			{
				__LIB_0__::func_151(__LIB_13__::func_348(), -1);
				__LIB_13__::func_468(35);
			}
		}
	}
	else if (__LIB_13__::func_482(35))
	{
		if (__LIB_0__::func_1(__LIB_13__::func_348()))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_13__::func_475(35);
	}
}

int func_912()//Position - 0x35CD0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
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
	while (iVar0 < __LIB_13__::func_440())
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
			__LIB_21__::func_79(1);
		}
		__LIB_13__::func_349(Local_196.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		__LIB_21__::func_79(0);
		__LIB_13__::func_349(0);
	}
}

void func_923(int iParam0, bool bParam1)//Position - 0x35ED5
{
	if (!func_931(iParam0))
	{
		return;
	}
	if (bParam1 && __LIB_6__::func_924(Local_365.f_2[iParam0]))
	{
		__LIB_4__::func_509(&(Local_365.f_2[iParam0]));
	}
	func_925(iParam0);
	func_924(iParam0);
}

void func_924(int iParam0)//Position - 0x35F1B
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2.f_15[iParam0]) && __LIB_6__::func_924(Local_365.f_2.f_15[iParam0]))
	{
		__LIB_4__::func_509(&(Local_365.f_2.f_15[iParam0]));
		__LIB_1__::func_162(&(Local_365.f_2.f_15[iParam0]));
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
	if (!__LIB_13__::func_445(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_926(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_926(iParam0)), true, true);
	}
	if (__LIB_13__::func_445(11))
	{
		if (!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_926(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_926(iParam0)), true, true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_926(iParam0))))
		{
			__LIB_4__::func_509(&iVar0);
		}
	}
	else if (__LIB_13__::func_445(12))
	{
		__LIB_1__::func_162(&iVar0);
	}
	else if (!__LIB_13__::func_445(32))
	{
		__LIB_4__::func_509(&iVar0);
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
	switch (__LIB_13__::func_462())
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
	if (!__LIB_13__::func_445(12))
	{
		switch (__LIB_13__::func_462())
		{
			case 2:
				if (__LIB_21__::func_80(func_929(iParam0), 0, 1))
				{
					return 0;
				}
				break;
		}
		if (!__LIB_6__::func_924(func_926(iParam0)))
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
	if ((((func_439(iParam0, 19) || (func_439(iParam0, 3) && __LIB_2__::func_47(&(Local_365.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_439(iParam0, 4)) || func_439(iParam0, 25)) || func_439(iParam0, 33))
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
		__LIB_13__::func_486(iParam0);
	}
}

void func_934(int iParam0)//Position - 0x362D1
{
	if (!HUD::DOES_BLIP_EXIST(Local_290[iParam0 /*7*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iParam0]))
		{
			Local_290[iParam0 /*7*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_365.f_2[iParam0]));
			if (__LIB_13__::func_352(func_996(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_290[iParam0 /*7*/], func_996(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_290[iParam0 /*7*/], __LIB_21__::func_248(iParam0));
			HUD::SET_BLIP_COLOUR(Local_290[iParam0 /*7*/], func_988(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_290[iParam0 /*7*/], __LIB_21__::func_148(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_290[iParam0 /*7*/], 12);
			if (__LIB_13__::func_488(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_290[iParam0 /*7*/], true);
			}
			if (!func_562(iParam0, iLocal_328, 46))
			{
				__LIB_13__::func_350(&(Local_290[iParam0 /*7*/]), 1);
				__LIB_13__::func_493(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_290[iParam0 /*7*/], func_988(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_290[iParam0 /*7*/]) != func_996(iParam0) && __LIB_13__::func_352(func_996(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_290[iParam0 /*7*/], func_996(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_290[iParam0 /*7*/], __LIB_21__::func_148(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_290[iParam0 /*7*/]) != func_988(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_290[iParam0 /*7*/], func_988(iParam0, 0));
		}
		if (__LIB_13__::func_464(iParam0, 17))
		{
			func_936(Local_290[iParam0 /*7*/], 100, 5000f, 1137180672);
		}
		if (func_420(iParam0) > -1 && __LIB_13__::func_462() == 2)
		{
			if (__LIB_13__::func_487(iParam0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_47[func_420(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_365.f_47[func_420(iParam0) /*8*/]), false))
				{
					HUD::SET_BLIP_ROTATION(Local_290[iParam0 /*7*/], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_365.f_47[func_420(iParam0) /*8*/]))));
				}
			}
		}
	}
}

void func_936(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x364DF
{
	HUD::SET_BLIP_ALPHA(iParam0, func_937(iParam0, iParam1, fParam2, fParam3));
}

int func_937(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x364F9
{
	float fVar0;
	if (!__LIB_1__::func_454(Global_2703735) && !__LIB_0__::func_851())
	{
		fVar0 = func_939(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = __LIB_26__::func_339();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

float func_939(int iParam0, float fParam1, float fParam2)//Position - 0x36561
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = Global_2703735;
	Var2 = { __LIB_1__::func_293(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581351 || __LIB_20__::func_411())
	{
		if (__LIB_3__::func_859(iVar0))
		{
			Var3 = { func_942(iVar0) };
		}
		else if (__LIB_13__::func_284(iVar0))
		{
			Var3 = { __LIB_21__::func_109(iVar0) };
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var3.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_942(int iParam0)//Position - 0x366A1
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
	if (iParam0 == __LIB_0__::func_160())
	{
	}
	if (__LIB_13__::func_261(iParam0))
	{
		iVar0 = __LIB_1__::func_236(iParam0);
		if (iVar0 != __LIB_0__::func_160())
		{
			if (!__LIB_1__::func_251(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[__LIB_1__::func_236(iParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = __LIB_2__::func_210(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_968(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (__LIB_4__::func_972(iParam0) && !__LIB_8__::func_210(iParam0))
	{
		iVar2 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar2 != __LIB_0__::func_160())
		{
			iVar3 = __LIB_2__::func_210(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (__LIB_4__::func_958(iParam0) && !__LIB_8__::func_209(iParam0))
	{
		if (__LIB_3__::func_859(iParam0) && __LIB_1__::func_291())
		{
			return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar4 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_233(iVar4))
			{
				iVar5 = __LIB_13__::func_491(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_27(iParam0))
	{
		iVar6 = __LIB_1__::func_236(iParam0);
		if (iVar6 != __LIB_0__::func_160())
		{
			if (!__LIB_1__::func_237(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[__LIB_1__::func_236(iParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = __LIB_13__::func_491(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_969(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (__LIB_3__::func_903(iParam0) && !__LIB_5__::func_614(iParam0))
	{
		iVar8 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar8 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_186(iVar8))
			{
				iVar9 = __LIB_2__::func_209(iVar8);
				if (iVar9 != -1)
				{
					return __LIB_1__::func_290(iVar9);
				}
			}
		}
	}
	else if (__LIB_3__::func_903(iParam0) && !__LIB_5__::func_614(iParam0))
	{
		iVar10 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar10 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_235(iVar10))
			{
				iVar11 = __LIB_6__::func_932(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (__LIB_3__::func_902(iParam0, 0))
	{
		iVar12 = __LIB_1__::func_236(iParam0);
		if (iVar12 != __LIB_0__::func_160())
		{
			if (!__LIB_1__::func_229(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[__LIB_1__::func_236(iParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = __LIB_6__::func_932(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (__LIB_3__::func_813(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (__LIB_3__::func_849(iParam0))
	{
		iVar14 = __LIB_21__::func_106(iParam0);
		if (iVar14 != __LIB_0__::func_160())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_402[iVar14], false);
			}
			else
			{
				return Global_1911933[iVar14 /*260*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (__LIB_3__::func_903(iParam0))
	{
		return __LIB_1__::func_290(Global_2689235[iParam0 /*453*/].f_318.f_6);
	}
	if (__LIB_8__::func_458(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
}

int func_988(int iParam0, bool bParam1)//Position - 0x37727
{
	if (Local_213.f_114.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_5);
		return __LIB_1__::func_48(StackVal);
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
	if (!bParam1 && Local_290[iParam0 /*7*/].f_4 != __LIB_0__::func_160())
	{
		return __LIB_1__::func_48(__LIB_21__::func_110(Local_290[iParam0 /*7*/].f_4));
	}
	if (func_446(iParam0))
	{
		if (!__LIB_13__::func_445(7))
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
	return __LIB_14__::func_103();
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
	if (Local_290[iParam0 /*7*/].f_4 != __LIB_0__::func_160() && __LIB_13__::func_462() != 1)
	{
		return 0;
	}
	if (__LIB_13__::func_464(iParam0, 10) && !func_439(iParam0, 7))
	{
		return 0;
	}
	if (func_562(iParam0, iLocal_328, 14))
	{
		return 0;
	}
	if ((__LIB_13__::func_464(iParam0, 16) && func_439(iParam0, 23)) && !func_415(iLocal_328, 2))
	{
		return 0;
	}
	if (func_439(iParam0, 23) && __LIB_1__::func_454(bLocal_324))
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
	if (__LIB_13__::func_491())
	{
		return 1;
	}
	if (__LIB_13__::func_494())
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
	while (iVar0 < __LIB_13__::func_440())
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
		if ((!Global_1952191.f_5314 && !__LIB_4__::func_15(bLocal_324)) && !__LIB_19__::func_482())
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
	__LIB_21__::func_131(Local_365.f_155.f_1[iParam0 /*5*/]);
}

int func_1008(int iParam0)//Position - 0x37EC1
{
	if ((iParam0 == -1 || func_1010(iParam0) == -1) || func_1009(iParam0) == -1)
	{
		return 0;
	}
	return __LIB_2__::func_467(Local_365.f_155.f_1[iParam0 /*5*/]);
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
	__LIB_26__::func_831(Local_365.f_155.f_1[iParam0 /*5*/]);
}

int func_1014(int iParam0)//Position - 0x38017
{
	if (!func_1008(iParam0))
	{
		return 0;
	}
	return __LIB_13__::func_354(Local_365.f_155.f_1[iParam0 /*5*/]);
}

void func_1016(int iParam0)//Position - 0x380AD
{
	if (iLocal_355[iParam0] != __LIB_0__::func_160())
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
	if (!__LIB_13__::func_464(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_290[iParam0 /*7*/].f_1 < func_1022(iParam0))
	{
		bVar0 = true;
		if (__LIB_13__::func_493(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_326, iParam1, 287))
		{
			bVar0 = false;
		}
		if (__LIB_13__::func_492(iParam0) != -1f)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			if (MISC::ABSF((Var1.f_2 - Local_329.f_2)) > __LIB_13__::func_492(iParam0))
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
		__LIB_13__::func_493(iParam0, 35);
		__LIB_13__::func_493(iParam0, 0);
	}
	else
	{
		func_1019(iParam0, 0);
	}
}

void func_1019(int iParam0, int iParam1)//Position - 0x381AC
{
	if (__LIB_11__::func_631(&(Local_372[iLocal_327 /*35*/].f_3[iParam0 /*3*/]), iParam1))
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
			if (__LIB_6__::func_924(Local_365.f_2[iParam0]))
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_365.f_2[iParam0], true);
				OBJECT::ALLOW_PICKUP_BY_NONE_PARTICIPANT(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true);
				__LIB_13__::func_495(Local_334.f_0, 0, 0);
				__LIB_13__::func_493(iParam0, 24);
			}
		}
	}
	else
	{
		__LIB_26__::func_803(iParam1, &(Local_290[iParam0 /*7*/].f_5), func_1029(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_915(bParam2, iParam0);
	}
}

int func_1029(int iParam0)//Position - 0x3847F
{
	if ((func_439(iParam0, 3) || func_439(iParam0, 4)) || Local_290[iParam0 /*7*/].f_4 != __LIB_0__::func_160())
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
	if (__LIB_2__::func_47(&(Local_365.f_2.f_18), __LIB_21__::func_149(), 0))
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
	__LIB_21__::func_251(iParam1, iParam0);
}

void func_1041(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x38865
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_13__::func_464(iParam0, 9) || Local_213.f_114.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_38);
		if (StackVal)
		{
			if (!func_439(iParam0, 31))
			{
				if (__LIB_6__::func_924(Local_365.f_2[iParam0]))
				{
					func_477(iParam0, 0, 0);
					__LIB_13__::func_493(iParam0, 22);
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
							__LIB_13__::func_493(iParam0, 1);
							if (!func_439(iParam0, 1))
							{
								__LIB_13__::func_493(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_36__::func_208();
							*iParam3 = iParam0;
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						__LIB_13__::func_493(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_306))
						{
							__LIB_13__::func_493(iParam0, 1);
							if (!func_439(iParam0, 1))
							{
								__LIB_13__::func_493(iParam0, 18);
							}
							*uParam2 = 1;
							__LIB_36__::func_208();
							*iParam3 = iParam0;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_330)
					{
						__LIB_13__::func_493(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !__LIB_0__::func_114())
				{
					iVar4 = func_420(iParam0);
					if (!__LIB_13__::func_288(Local_196.f_67.f_1[iVar4 /*15*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
					{
						if (!__LIB_13__::func_288(iLocal_331))
						{
							__LIB_13__::func_493(iParam0, 21);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iLocal_326, false) == iVar3)
								{
									if (__LIB_0__::func_306(iLocal_326, 0) == -1)
									{
										__LIB_13__::func_493(iParam0, 1);
										if (!func_439(iParam0, 1))
										{
											__LIB_13__::func_493(iParam0, 18);
											__LIB_36__::func_208();
										}
										*uParam2 = 1;
										__LIB_36__::func_208();
										*iParam3 = iParam0;
									}
									__LIB_13__::func_493(iParam0, 14);
								}
								else
								{
									func_1045(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (__LIB_13__::func_466() == 0)
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
	if (__LIB_6__::func_924(Local_365.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), true, false);
		__LIB_13__::func_287(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]));
		__LIB_13__::func_493(iParam0, 45);
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
		fVar4 = __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0])));
		Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_365.f_2[iParam0]), Var1, true, false, false, true);
	}
}

void func_1045(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x38C38
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_330) && __LIB_0__::func_306(iLocal_326, 0) == -1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_330)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_330))
		{
			__LIB_13__::func_493(iParam1, 1);
			if (!func_439(iParam1, 1))
			{
				__LIB_13__::func_493(iParam1, 18);
			}
			*uParam2 = 1;
			__LIB_36__::func_208();
			*uParam3 = iParam1;
		}
	}
}

void func_1060(int iParam0, int iParam1)//Position - 0x39054
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!__LIB_13__::func_464(iParam0, 7) || func_439(iParam0, 39)) || func_562(iParam0, iLocal_328, 32))
	{
		return;
	}
	iVar0 = __LIB_0__::func_160();
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
	if (__LIB_1__::func_264(iVar0, 1, 1))
	{
		if (iVar0 == bLocal_324 && __LIB_0__::func_682(Local_365.f_2[iParam0]))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam1))
			{
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iLocal_326);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
			__LIB_13__::func_493(iParam0, 32);
		}
	}
	else if (__LIB_6__::func_924(Local_365.f_2[iParam0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
		__LIB_13__::func_493(iParam0, 32);
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
			if (__LIB_6__::func_924(Local_365.f_2[iParam0]) && __LIB_0__::func_682(iVar0))
			{
				if (__LIB_13__::func_765(iParam1, iVar1, __LIB_13__::func_766(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0))
				{
					__LIB_13__::func_764(iVar1);
					__LIB_13__::func_493(iParam0, 36);
				}
			}
		}
	}
}

var func_1065(int iParam0)//Position - 0x393EC
{
	var uVar0;
	switch (__LIB_13__::func_462())
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
			if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (__LIB_13__::func_456(iParam0, 20))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, -1000f);
				}
				if (__LIB_13__::func_456(iParam0, 21))
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
	if (!__LIB_13__::func_482(46))
	{
		return;
	}
	if (!func_1741())
	{
		__LIB_13__::func_475(46);
		return;
	}
	if (!__LIB_13__::func_482(26))
	{
		if (__LIB_13__::func_902(800))
		{
			Stack.Push(1);
			Stack.Push(1);
			Call_Loc(Local_213.f_15.f_26);
			func_1732(StackVal, StackVal, 0);
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
			__LIB_21__::func_243(800);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(Local_213.f_15.f_26);
			func_1732(StackVal, StackVal, 0);
			__LIB_13__::func_475(46);
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
	__LIB_0__::func_186();
	if (__LIB_2__::func_214(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_496() == 28)
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
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_638(0))
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
				if (!__LIB_13__::func_506())
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
						__LIB_32__::func_990(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_232();
						__LIB_38__::func_224(&iVar2);
					}
					if (__LIB_13__::func_506())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_4__::func_318();
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
							__LIB_25__::func_270(1);
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
					__LIB_25__::func_270(1);
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
					if (func_1329(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__::func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
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
				__LIB_41__::func_684(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_578(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_18__::func_391(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_32__::func_10();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_32__::func_10();
			}
			else if (__LIB_31__::func_915(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_4__::func_940())
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
				__LIB_32__::func_10();
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
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
					__LIB_18__::func_493(iParam9, 0, 0);
				}
			}
			__LIB_25__::func_132(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_4__::func_318();
			}
			if (!(__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_1092(0, 0);
			}
			__LIB_3__::func_678(0, 0);
			if (bParam10)
			{
				__LIB_1__::func_914();
			}
			__LIB_0__::func_744();
			__LIB_38__::func_216();
			if (bParam13)
			{
				__LIB_0__::func_639();
			}
			__LIB_0__::func_643();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_38__::func_224(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_643();
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
	if (!__LIB_1__::func_927(iParam0, iParam1, bVar0))
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
			if (__LIB_7__::func_131(ENTITY::GET_ENTITY_MODEL(iParam1)))
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
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_556(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { func_1280(__LIB_1__::func_558(), 14, iVar1, -1) };
			__LIB_1__::func_924(PLAYER::PLAYER_PED_ID(), 14, iVar1);
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
		Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { func_1280(iVar5, 10, 0, -1) };
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
					Global_78130[1 /*14*/] = { func_1280(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { func_1280(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
				Global_78130[1 /*14*/] = { func_1280(iVar5, iVar0, func_1260(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
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
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_1253(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_1280(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
						iVar3 = func_1251(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
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
				Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
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
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1130(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
					iVar27 = func_1241(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = func_1251(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1130(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = func_1236(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1130(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1130(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar32, -1) };
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
								func_1130(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = func_1236(iParam0, iParam2);
							Global_78130[1 /*14*/] = { func_1280(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar38, -1) };
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
								func_1130(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { func_1280(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
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
							Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1228(iVar5, iParam2);
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
				func_1184(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1241(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = func_1251(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1253(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				func_1228(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
						func_1130(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1130(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { func_1280(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1241(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1241(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = func_1251(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
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
								iVar6 = func_1241(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1130(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
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
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
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
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1130(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1130(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
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
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1130(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1251(iParam0, iVar5, iParam1, iParam2, 14, 1);
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
		iVar84 = __LIB_0__::func_254(iVar5, func_1260(iParam0, 3, -1), iVar10);
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
		if (!func_1157(iParam0, iVar1, iVar0))
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
	Global_78130[1 /*14*/] = { func_1280(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1157(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1157(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_1280(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1157(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { func_1280(iVar0, iVar4, iVar1, -1) };
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_1157(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_1219(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
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
							if (!func_1187(Var9.f_2, Var9.f_3, iVar10))
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

int func_1187(int iParam0, int iParam1, int iParam2)//Position - 0x4B7B7
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (__LIB_0__::func_137(34505, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
					break;
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (__LIB_0__::func_137(34375, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (__LIB_1__::func_596(116, -1) >= __LIB_0__::func_238(116, 5, 9) || __LIB_0__::func_137(31760, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
					break;
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (__LIB_1__::func_595(123, -1) || __LIB_0__::func_137(31761, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
					break;
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (__LIB_1__::func_595(124, -1) || __LIB_0__::func_137(31762, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
					break;
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (__LIB_1__::func_595(125, -1) || __LIB_0__::func_137(31763, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
					break;
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (__LIB_1__::func_595(126, -1) || __LIB_0__::func_137(31764, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
					break;
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (__LIB_0__::func_137(31768, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
					break;
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (__LIB_0__::func_137(31769, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
					break;
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (__LIB_0__::func_137(31770, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
					break;
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (__LIB_0__::func_137(31771, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
					break;
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (__LIB_0__::func_137(31772, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
					break;
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (__LIB_0__::func_137(31773, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
					break;
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (__LIB_0__::func_137(31774, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
					break;
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (__LIB_0__::func_137(31775, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (__LIB_0__::func_137(30533, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (__LIB_0__::func_137(30534, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (__LIB_0__::func_137(30535, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (__LIB_0__::func_137(30536, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (__LIB_0__::func_137(30537, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (__LIB_0__::func_137(30538, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (__LIB_0__::func_137(30539, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (__LIB_0__::func_137(30540, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (__LIB_0__::func_137(30541, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (__LIB_0__::func_137(30542, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (__LIB_0__::func_137(30543, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (__LIB_0__::func_137(30544, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (__LIB_0__::func_137(30545, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (__LIB_0__::func_137(30546, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (__LIB_0__::func_137(30547, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (__LIB_0__::func_137(30548, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (__LIB_0__::func_137(30549, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (__LIB_0__::func_137(30550, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (__LIB_0__::func_137(30551, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (__LIB_0__::func_137(30552, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (__LIB_0__::func_137(30553, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (__LIB_0__::func_137(30554, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (__LIB_0__::func_137(30555, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (__LIB_0__::func_137(30556, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (__LIB_0__::func_137(30557, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (__LIB_0__::func_137(30524, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (__LIB_0__::func_137(30525, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (__LIB_0__::func_137(30526, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (__LIB_0__::func_137(30527, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (__LIB_0__::func_137(30528, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (__LIB_0__::func_137(30529, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (__LIB_0__::func_137(30530, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (__LIB_0__::func_137(30531, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (__LIB_0__::func_137(30532, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (__LIB_0__::func_137(30570, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (__LIB_0__::func_137(30571, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (__LIB_0__::func_137(30568, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (__LIB_0__::func_137(30569, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (__LIB_0__::func_137(30634, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (__LIB_0__::func_137(30635, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (__LIB_0__::func_137(30636, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (__LIB_0__::func_137(30637, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (__LIB_0__::func_137(30703, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (__LIB_0__::func_137(30704, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (__LIB_0__::func_137(30700, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (__LIB_0__::func_137(30701, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (__LIB_0__::func_137(30702, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (__LIB_0__::func_137(30699, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (__LIB_0__::func_137(30260, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
					break;
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (__LIB_0__::func_137(30261, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
					break;
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (__LIB_0__::func_137(30262, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
					break;
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (__LIB_0__::func_137(30263, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
					break;
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (__LIB_0__::func_137(30264, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
					break;
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (__LIB_0__::func_137(30265, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
					break;
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (__LIB_0__::func_137(30266, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
					break;
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (__LIB_0__::func_137(30267, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
					break;
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (__LIB_0__::func_137(30268, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
					break;
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (__LIB_0__::func_137(30269, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
					break;
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (__LIB_0__::func_137(30270, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
					break;
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (__LIB_0__::func_137(30271, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
					break;
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (__LIB_0__::func_137(30272, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
					break;
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (__LIB_0__::func_137(30273, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
					break;
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (__LIB_0__::func_137(30274, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
					break;
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (__LIB_0__::func_137(30275, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
					break;
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (__LIB_0__::func_137(30276, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
					break;
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (__LIB_0__::func_137(30277, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
					break;
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (__LIB_0__::func_137(30278, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
					break;
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (__LIB_0__::func_137(30279, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
					break;
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (__LIB_0__::func_137(30280, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
					break;
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (__LIB_0__::func_137(30281, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
					break;
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (__LIB_0__::func_137(30282, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
					break;
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (__LIB_0__::func_137(30283, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
					break;
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (__LIB_0__::func_137(30284, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
					break;
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (__LIB_0__::func_137(30285, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
					break;
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (__LIB_0__::func_137(30286, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
					break;
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (__LIB_0__::func_137(30287, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
					break;
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (__LIB_0__::func_137(30288, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
					break;
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (__LIB_0__::func_137(30289, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (__LIB_0__::func_137(28255, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (__LIB_1__::func_595(89, -1) || __LIB_0__::func_137(30254, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
					break;
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (__LIB_1__::func_595(90, -1) || __LIB_0__::func_137(30255, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
					break;
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (__LIB_1__::func_595(92, -1) || __LIB_0__::func_137(30256, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
					break;
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if ((((__LIB_1__::func_595(89, -1) && __LIB_1__::func_595(90, -1)) && __LIB_1__::func_595(92, -1)) && __LIB_1__::func_595(91, -1)) || __LIB_0__::func_137(30257, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (__LIB_1__::func_595(78, -1) || __LIB_0__::func_137(28199, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((__LIB_1__::func_595(77, -1) && __LIB_1__::func_595(78, -1)) && __LIB_1__::func_596(92, -1) >= __LIB_0__::func_238(92, 5, 9)) || __LIB_0__::func_137(28200, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((__LIB_1__::func_596(93, -1) >= __LIB_0__::func_238(93, 5, 9) && __LIB_1__::func_595(79, -1)) && __LIB_1__::func_595(80, -1)) || __LIB_0__::func_137(28204, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (__LIB_1__::func_595(81, -1) || __LIB_0__::func_137(28206, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (__LIB_1__::func_596(94, -1) >= __LIB_0__::func_238(94, 5, 9) || __LIB_0__::func_137(28207, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((__LIB_1__::func_595(84, -1) && __LIB_1__::func_595(85, -1)) && __LIB_1__::func_596(97, -1) >= __LIB_0__::func_238(97, 5, 9)) || __LIB_0__::func_137(28212, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (__LIB_0__::func_137(28249, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (__LIB_0__::func_137(28183, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (__LIB_0__::func_137(28182, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (__LIB_0__::func_137(28184, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (__LIB_0__::func_137(28181, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (__LIB_0__::func_137(28178, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (__LIB_0__::func_137(28177, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (__LIB_0__::func_137(28176, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (__LIB_0__::func_137(28180, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (__LIB_0__::func_137(28179, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((__LIB_0__::func_137(28176, -1) && __LIB_0__::func_137(28177, -1)) && __LIB_0__::func_137(28178, -1)) && __LIB_0__::func_137(28179, -1)) && __LIB_0__::func_137(28180, -1)) && __LIB_0__::func_137(28181, -1)) && __LIB_0__::func_137(28182, -1)) && __LIB_0__::func_137(28183, -1)) && __LIB_0__::func_137(28184, -1)) || __LIB_0__::func_137(28221, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (__LIB_0__::func_137(28191, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (__LIB_0__::func_137(28190, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (__LIB_0__::func_137(28189, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (__LIB_6__::func_804(0, 1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((__LIB_1__::func_595(77, -1) && __LIB_1__::func_595(78, -1)) && __LIB_1__::func_596(92, -1) >= __LIB_0__::func_238(92, 5, 9)) && __LIB_1__::func_596(93, -1) >= __LIB_0__::func_238(93, 5, 9)) && __LIB_1__::func_595(79, -1)) && __LIB_1__::func_595(80, -1)) && __LIB_1__::func_595(81, -1)) && __LIB_1__::func_596(94, -1) >= __LIB_0__::func_238(94, 5, 9)) && __LIB_1__::func_596(95, -1) >= __LIB_0__::func_238(95, 5, 9)) && __LIB_1__::func_595(82, -1)) && __LIB_1__::func_595(83, -1)) && __LIB_1__::func_596(96, -1) >= __LIB_0__::func_238(96, 5, 9)) && __LIB_1__::func_595(84, -1)) && __LIB_1__::func_595(85, -1)) && __LIB_1__::func_596(97, -1) >= __LIB_0__::func_238(97, 5, 9)) && __LIB_1__::func_595(86, -1)) && __LIB_1__::func_595(87, -1)) && __LIB_1__::func_595(88, -1)) || __LIB_0__::func_137(28222, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (__LIB_0__::func_137(27109, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (__LIB_0__::func_137(27110, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (__LIB_0__::func_137(27111, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (__LIB_0__::func_137(27112, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (__LIB_0__::func_137(27113, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (__LIB_0__::func_137(27114, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (__LIB_0__::func_137(27115, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (__LIB_0__::func_137(25032, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (__LIB_0__::func_137(25033, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (__LIB_0__::func_137(25034, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (__LIB_0__::func_137(25035, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (__LIB_0__::func_137(25036, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (__LIB_0__::func_137(25037, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (__LIB_0__::func_137(25038, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (__LIB_0__::func_137(25039, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (__LIB_0__::func_137(25040, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (__LIB_0__::func_137(25041, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (__LIB_0__::func_137(25042, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (__LIB_0__::func_137(25043, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (__LIB_0__::func_137(25044, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (__LIB_0__::func_137(25045, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (__LIB_0__::func_137(25046, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (__LIB_0__::func_137(25047, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (__LIB_0__::func_137(25048, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (__LIB_0__::func_137(25049, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (__LIB_0__::func_137(25050, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (__LIB_0__::func_137(25051, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (__LIB_0__::func_137(25052, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (__LIB_0__::func_137(25053, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (__LIB_0__::func_137(25054, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (__LIB_0__::func_137(25055, -1))
					{
						return 0;
					}
					if (__LIB_0__::func_137(27077, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (__LIB_0__::func_137(25056, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (__LIB_0__::func_137(25057, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (__LIB_0__::func_137(25058, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (__LIB_0__::func_137(25059, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (__LIB_0__::func_137(25060, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (__LIB_0__::func_137(25061, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (__LIB_0__::func_137(25062, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (__LIB_0__::func_137(25063, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (__LIB_0__::func_137(25064, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (__LIB_0__::func_137(25065, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (__LIB_0__::func_137(25066, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (__LIB_0__::func_137(25067, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (__LIB_0__::func_137(25068, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (__LIB_0__::func_137(25069, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (__LIB_0__::func_137(25070, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (__LIB_0__::func_137(25071, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (__LIB_0__::func_137(25072, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (__LIB_0__::func_137(25073, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (__LIB_0__::func_137(25074, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (__LIB_0__::func_137(25075, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (__LIB_0__::func_137(25076, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (__LIB_0__::func_137(25077, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (__LIB_0__::func_137(25078, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (__LIB_0__::func_137(25079, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (__LIB_0__::func_137(25080, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (__LIB_0__::func_137(25081, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (__LIB_0__::func_137(25082, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (__LIB_0__::func_137(25083, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (__LIB_0__::func_137(25084, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (__LIB_0__::func_137(25085, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (__LIB_0__::func_137(25086, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (__LIB_0__::func_137(25087, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (__LIB_0__::func_137(25088, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (__LIB_0__::func_137(25089, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (__LIB_0__::func_137(25090, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (__LIB_0__::func_137(25091, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (__LIB_0__::func_137(25092, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (__LIB_0__::func_137(25093, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (__LIB_0__::func_137(25094, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (__LIB_0__::func_137(25095, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (__LIB_0__::func_137(25096, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (__LIB_0__::func_137(25097, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (__LIB_0__::func_137(25098, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (__LIB_0__::func_137(25099, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (__LIB_0__::func_137(22108, -1) || __LIB_0__::func_137(25006, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (__LIB_0__::func_137(9481, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (__LIB_0__::func_137(9470, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (__LIB_0__::func_137(9475, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (__LIB_0__::func_137(9472, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (__LIB_0__::func_137(9465, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (__LIB_0__::func_137(9463, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (__LIB_0__::func_137(9464, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (__LIB_0__::func_137(9468, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (__LIB_0__::func_137(9469, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (__LIB_0__::func_137(9479, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (__LIB_0__::func_137(9473, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (__LIB_0__::func_137(9480, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (__LIB_0__::func_137(9476, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (__LIB_0__::func_137(9477, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (__LIB_0__::func_137(9471, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (__LIB_0__::func_137(9474, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (__LIB_0__::func_137(9467, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (__LIB_0__::func_137(9478, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (__LIB_0__::func_137(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (__LIB_0__::func_137(27085, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__::func_137(27084, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (__LIB_0__::func_137(9466, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (__LIB_0__::func_137(22126, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (__LIB_0__::func_137(22127, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (__LIB_0__::func_137(22128, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (__LIB_0__::func_137(22124, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (__LIB_0__::func_137(22130, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (__LIB_0__::func_137(22125, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (__LIB_0__::func_137(22129, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (__LIB_0__::func_137(22131, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (__LIB_0__::func_137(22132, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (__LIB_0__::func_137(22147, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (__LIB_0__::func_137(22148, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (__LIB_0__::func_137(22149, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (__LIB_0__::func_137(22150, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (__LIB_0__::func_137(22151, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (__LIB_0__::func_137(22152, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (__LIB_0__::func_137(22153, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (__LIB_0__::func_137(22154, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (__LIB_0__::func_137(22155, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (__LIB_0__::func_137(22156, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (__LIB_0__::func_137(22157, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (__LIB_0__::func_137(22158, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (__LIB_0__::func_137(22159, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (__LIB_0__::func_137(22160, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (__LIB_0__::func_137(22161, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (__LIB_0__::func_137(22162, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (__LIB_0__::func_137(22163, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (__LIB_0__::func_137(22164, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (__LIB_0__::func_137(22165, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (__LIB_0__::func_137(22166, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (__LIB_0__::func_137(22167, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (__LIB_0__::func_137(22168, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (__LIB_0__::func_137(22169, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (__LIB_0__::func_137(22170, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (__LIB_0__::func_137(22171, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (__LIB_0__::func_137(22172, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (__LIB_0__::func_137(22173, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (__LIB_0__::func_137(22174, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (__LIB_0__::func_137(22175, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (__LIB_0__::func_137(22176, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (__LIB_0__::func_137(22177, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (__LIB_0__::func_137(22178, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (__LIB_0__::func_137(15426, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (__LIB_0__::func_137(15422, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (__LIB_0__::func_137(15423, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (__LIB_0__::func_137(15421, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (__LIB_0__::func_137(15427, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (__LIB_0__::func_137(15419, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (__LIB_0__::func_137(15420, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (__LIB_0__::func_137(15394, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (__LIB_1__::func_563(209, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (__LIB_0__::func_137(15406, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (__LIB_0__::func_137(15395, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (__LIB_1__::func_563(209, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (__LIB_0__::func_137(15410, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (__LIB_0__::func_137(15407, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (__LIB_1__::func_563(209, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (__LIB_1__::func_563(209, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (__LIB_0__::func_137(15414, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (__LIB_0__::func_137(15415, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (__LIB_0__::func_137(15399, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (__LIB_0__::func_137(15404, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (__LIB_1__::func_563(209, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (__LIB_0__::func_137(15392, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (__LIB_0__::func_137(15390, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (__LIB_0__::func_137(15402, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (__LIB_0__::func_137(15416, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (__LIB_1__::func_563(209, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (__LIB_0__::func_137(9366, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (__LIB_0__::func_137(9367, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (__LIB_0__::func_137(9369, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (__LIB_0__::func_137(9368, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (__LIB_0__::func_137(9365, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (__LIB_0__::func_137(9364, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (__LIB_0__::func_137(27078, -1))
					{
						return 0;
					}
					if (__LIB_0__::func_137(9363, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (__LIB_0__::func_137(9362, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (__LIB_0__::func_137(9370, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (__LIB_0__::func_137(9371, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (__LIB_0__::func_137(9372, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (__LIB_0__::func_137(9373, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (__LIB_0__::func_137(9374, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (__LIB_0__::func_137(9384, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (__LIB_0__::func_137(9385, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (__LIB_0__::func_137(7551, -1) || __LIB_1__::func_556(3792, -1, 0) >= Global_262145.f_16823 /* Tunable: DCTL_WIN_COUNT_REWARD */)
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (__LIB_0__::func_137(7467, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (__LIB_0__::func_137(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (__LIB_0__::func_137(27083, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__::func_137(27086, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (__LIB_0__::func_137(7469, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (__LIB_0__::func_137(7470, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (__LIB_0__::func_137(7471, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (__LIB_0__::func_137(7472, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (__LIB_0__::func_137(7473, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (__LIB_0__::func_137(7474, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (__LIB_0__::func_137(7475, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (__LIB_0__::func_137(7476, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (__LIB_0__::func_137(7477, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (__LIB_0__::func_137(7478, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (__LIB_0__::func_137(7479, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (__LIB_0__::func_137(7480, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (__LIB_0__::func_137(7481, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (__LIB_0__::func_137(4260, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (__LIB_0__::func_137(4257, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (__LIB_0__::func_137(4269, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (__LIB_0__::func_137(4261, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (__LIB_0__::func_137(4259, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (__LIB_0__::func_137(4268, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (__LIB_0__::func_137(4265, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (__LIB_0__::func_137(4258, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (__LIB_0__::func_137(4264, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (__LIB_0__::func_137(4267, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (__LIB_0__::func_137(4262, -1))
					{
						return 0;
					}
					if (__LIB_0__::func_137(27079, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (__LIB_0__::func_137(4263, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (__LIB_0__::func_137(4266, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (__LIB_1__::func_556(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (__LIB_0__::func_137(27068, -1))
						{
							return 0;
						}
					}
					return !func_1197(iParam2, iParam1, 1);
					break;
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (__LIB_1__::func_556(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (__LIB_0__::func_137(27068, -1))
						{
							return 0;
						}
					}
					return !func_1197(iParam2, iParam1, 0);
					break;
			}
			break;
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (__LIB_0__::func_137(113, -1))
					{
						return 0;
					}
					return !func_1197(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (__LIB_0__::func_137(27082, -1))
						{
							return 0;
						}
						if (__LIB_0__::func_137(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (__LIB_0__::func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (__LIB_0__::func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (__LIB_0__::func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (__LIB_0__::func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (__LIB_0__::func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (__LIB_0__::func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (__LIB_0__::func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (__LIB_0__::func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (__LIB_0__::func_137(3779, -1) || __LIB_0__::func_137(27084, -1))
						{
							return 0;
						}
					}
					return !func_1197(iParam2, iParam1, 1);
					break;
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (__LIB_0__::func_137(3770, -1))
						{
							return 0;
						}
						if (__LIB_0__::func_137(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (__LIB_0__::func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (__LIB_0__::func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (__LIB_0__::func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (__LIB_0__::func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (__LIB_0__::func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (__LIB_0__::func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (__LIB_0__::func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (__LIB_0__::func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (__LIB_0__::func_137(3779, -1) || __LIB_0__::func_137(27083, -1))
						{
							return 0;
						}
					}
					return !func_1197(iParam2, iParam1, 0);
					break;
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((__LIB_0__::func_137(3765, -1) && __LIB_0__::func_137(3766, -1)) && __LIB_0__::func_137(3767, -1)) && __LIB_0__::func_137(3768, -1)) && __LIB_0__::func_137(3769, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !__LIB_0__::func_137(3593, -1);
					break;
			}
			if (!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !func_1197(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return 1;
					break;
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return 1;
					break;
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!__LIB_1__::func_563(152, -1) && !__LIB_0__::func_137(9440, -1));
					break;
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!__LIB_1__::func_563(151, -1) && !__LIB_0__::func_137(9430, -1));
					break;
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9426, -1));
					break;
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9427, -1));
					break;
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9428, -1));
					break;
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9431, -1));
					break;
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9432, -1));
					break;
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9433, -1));
					break;
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9439, -1));
					break;
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9434, -1));
					break;
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9435, -1));
					break;
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9436, -1));
					break;
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9429, -1));
					break;
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!func_1188(iParam2, -1) && !__LIB_0__::func_137(9437, -1));
					break;
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !__LIB_0__::func_236();
					break;
			}
			break;
		case joaat("mpValentines_overlays"):
			if ((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !func_1188(iParam2, -1)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !__LIB_0__::func_137(3608, -1);
					break;
			}
			break;
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!__LIB_0__::func_137(3615, -1) && !__LIB_0__::func_137(9438, -1));
					break;
			}
			break;
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !__LIB_0__::func_137(3783, -1);
					break;
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !__LIB_0__::func_137(3784, -1);
					break;
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !__LIB_0__::func_137(3785, -1);
					break;
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !__LIB_0__::func_137(3786, -1);
					break;
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !__LIB_0__::func_137(3787, -1);
					break;
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !__LIB_0__::func_137(3788, -1);
					break;
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (__LIB_0__::func_137(27081, -1))
					{
						return 0;
					}
					return !__LIB_0__::func_137(3789, -1);
					break;
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !__LIB_0__::func_137(3790, -1);
					break;
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !__LIB_0__::func_137(3791, -1);
					break;
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !__LIB_0__::func_137(3792, -1);
					break;
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3793, -1);
					break;
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3794, -1);
					break;
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3795, -1);
					break;
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3796, -1);
					break;
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3797, -1);
					break;
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3798, -1);
					break;
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3799, -1);
					break;
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3800, -1);
					break;
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3801, -1);
					break;
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = __LIB_1__::func_556(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = __LIB_1__::func_556(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3802, -1);
					break;
			}
			break;
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return 1;
					break;
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return 1;
					break;
			}
			break;
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !__LIB_0__::func_116();
					break;
			}
			break;
	}
	return 0;
}

int func_1188(int iParam0, int iParam1)//Position - 0x50B78
{
	var uVar0;
	int iVar1;
	if (__LIB_2__::func_169(iParam0) == 13122)
	{
		return 0;
	}
	uVar0 = __LIB_21__::func_111(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_158(iVar1));
}

bool func_1197(int iParam0, int iParam1, bool bParam2)//Position - 0x53ABF
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = __LIB_0__::func_240(iParam1, 3);
		}
		else
		{
			iParam0 = __LIB_0__::func_240(iParam1, 4);
		}
	}
	return (func_1188(iParam0, -1) || __LIB_6__::func_784(iParam0, -1));
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1260(iParam0, 11, -1);
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
				iVar5 = func_1260(iParam0, 11, -1);
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
							iVar2 = func_1220(joaat("MP_M_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
						iVar3 = func_1260(iParam0, 11, -1);
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
						iVar5 = func_1260(iParam0, 8, -1);
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
							iVar7 = func_1220(joaat("MP_F_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
							iVar10 = func_1220(joaat("MP_F_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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
							iVar11 = func_1220(joaat("MP_F_Freemode_01"), 11, func_1260(iParam0, 11, -1), 0);
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

int func_1220(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5A0D3
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
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_1188(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_1188(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != joaat("0"))
								{
									return __LIB_0__::func_240(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_1__::func_556(1759, -1, 0);
						}
						return __LIB_0__::func_240(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_1188(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_1188(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_1188(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_1188(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = __LIB_0__::func_420(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != joaat("0"))
								{
									return __LIB_0__::func_240(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_1__::func_556(1759, -1, 0);
						}
						return __LIB_0__::func_240(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_1188(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_1188(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar13 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != joaat("0"))
								{
									return __LIB_0__::func_240(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_1__::func_556(1759, -1, 0);
						}
						return __LIB_0__::func_240(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_1188(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_1188(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_1188(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_1188(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = __LIB_0__::func_420(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar19 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != joaat("0"))
								{
									return __LIB_0__::func_240(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = __LIB_1__::func_556(1759, -1, 0);
						}
						return __LIB_0__::func_240(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_1228(int iParam0, int iParam1)//Position - 0x5CC63
{
	int iVar0;
	iVar0 = __LIB_18__::func_395();
	if (iVar0 != -1)
	{
		if (!func_1229(iParam0, iParam1, iVar0))
		{
			__LIB_18__::func_394(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

int func_1229(int iParam0, int iParam1, int iParam2)//Position - 0x5CC95
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_6__::func_808(iParam0, iParam1, -1))
	{
		if (iParam0 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = __LIB_0__::func_420(iParam0, iParam1, 11, 3);
				iVar0 = __LIB_0__::func_252(iVar1);
			}
			if (iVar1 != -1 && __LIB_0__::func_219(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && __LIB_0__::func_251(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NO_CREW_EMBLEM"), 0))
			{
				return 0;
			}
			if ((iVar1 == joaat("DLC_MP_VAL_M_JBIB2_0") || iVar1 == joaat("DLC_MP_VAL_M_JBIB2_1")) || iVar1 == joaat("DLC_MP_VAL_M_JBIB2_2"))
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_1220(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("MP_F_Freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = __LIB_0__::func_420(iParam0, iParam1, 11, 4);
				iVar2 = __LIB_0__::func_252(iVar3);
			}
			if (iVar3 != -1 && __LIB_0__::func_219(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && __LIB_0__::func_251(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("NO_CREW_EMBLEM"), 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_1220(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_1220(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1236(int iParam0, int iParam1)//Position - 0x5EF0B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_103234 != -99)
	{
		if (Global_103235 == 11)
		{
			Global_78130[1 /*14*/] = { func_1280(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_103234, -1) };
			iVar0 = __LIB_6__::func_809(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103234, iParam1, Global_78130[1 /*14*/].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_103235 == 8)
		{
			iVar1 = __LIB_6__::func_807(ENTITY::GET_ENTITY_MODEL(iParam0), Global_103234, Global_103236);
			if (iVar1 != -99)
			{
				Global_78130[1 /*14*/] = { func_1280(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, -1) };
				iVar2 = __LIB_6__::func_809(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_78130[1 /*14*/].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_103234;
			}
		}
	}
	return -99;
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
					iVar0 = func_1241(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1241(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_1260(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x65B65
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
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_1252(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = __LIB_6__::func_795(iParam0, 8);
					iVar15 = __LIB_0__::func_420(iParam1, iVar2, 8, 3);
					iVar16 = __LIB_0__::func_252(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar15, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_11"), 0))
						{
							iVar2 = __LIB_6__::func_795(iParam0, 8);
							iVar18 = __LIB_0__::func_420(iParam1, iVar2, 8, 3);
							iVar19 = __LIB_0__::func_252(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("VEST_SHIRT"), 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__::func_758(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar20 = __LIB_6__::func_795(iParam0, 11);
					iVar21 = __LIB_0__::func_420(iParam1, iVar20, 11, 3);
					if (iVar20 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("OPEN_SHORT"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam1, joaat("DLC_MP_H4_M_TORSO_0_0"), 3, 3);
					}
					else
					{
						iVar0 = 14;
					}
				}
				else if (iParam3 >= 241)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar22 = -1;
				if (iParam3 >= 237)
				{
					iVar22 = __LIB_0__::func_252(__LIB_0__::func_420(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar22 == 11)
				{
					iVar2 = __LIB_6__::func_795(iParam0, 8);
					iVar23 = __LIB_0__::func_420(iParam1, iVar2, 8, 3);
					iVar24 = __LIB_0__::func_252(iVar23);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar24 == 6)) || (iVar2 >= 241 && iVar24 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar23, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar25 = -1;
				iVar26 = -1;
				if (iParam3 >= 92)
				{
					iVar26 = __LIB_0__::func_420(iParam1, iParam3, 7, 3);
					iVar25 = __LIB_0__::func_252(iVar26);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar25 == 10) || iVar25 == 11) || iVar25 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("TIE"), 0)))
				{
					iVar2 = __LIB_6__::func_795(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = __LIB_0__::func_420(iParam1, iVar2, 8, 3);
						iVar27 = __LIB_0__::func_252(iVar14);
						bVar28 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TUX_VEST"), 0);
						if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("SLACK_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("LOOSE_BOWTIE"), 0)))
				{
					iVar14 = __LIB_0__::func_420(iParam1, iVar2, 8, 3);
					iVar29 = __LIB_0__::func_252(iVar14);
					bVar30 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("TUX_VEST"), 0);
					if (((iVar29 == 3 || iVar29 == 7) || iVar29 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar30) || (iVar7 == 10 && bVar30))
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar31 = -1;
				iVar32 = -1;
				if (iParam3 >= 92)
				{
					iVar32 = __LIB_0__::func_420(iParam1, iParam3, 7, 3);
					iVar31 = __LIB_0__::func_252(iVar32);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar31 == 10) || iVar31 == 11) || iVar31 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, joaat("TIE"), 0))
				{
					iVar33 = __LIB_6__::func_795(iParam0, 11);
					if (iVar33 >= 237)
					{
						iVar14 = __LIB_0__::func_420(iParam1, iVar33, 11, 3);
						if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SHIRT_BRACES"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("H3_DRAW_7"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != joaat("0"))
										{
											iVar0 = __LIB_6__::func_758(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar34 = __LIB_6__::func_795(iParam0, 11);
				if (iVar34 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iVar34, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("SHIRT_BRACES"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("H3_DRAW_7"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__::func_758(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						bVar35 = false;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("BASIC_VEST"), 0))
						{
							iVar2 = __LIB_6__::func_795(iParam0, 8);
							iVar36 = __LIB_0__::func_420(iParam1, iVar2, 8, 4);
							if (iVar2 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("VEST_SHIRT"), 0))
							{
							}
							else
							{
								iVar0 = __LIB_6__::func_758(iParam1, joaat("DLC_MP_H3_F_SPECIAL_6_0"), 8, 4);
								bVar35 = true;
							}
						}
						if (!bVar35)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != joaat("0"))
									{
										iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 4);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar37 = -1;
				if (iParam3 >= 55)
				{
					iVar37 = __LIB_0__::func_420(iParam1, iParam3, 7, 4);
				}
				if ((iVar37 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("TIE"), 0)) || (iVar37 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("BOWTIE"), 0)))
				{
					iVar14 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar38 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar37, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("CLOSED_COLLAR"), 0))
						{
							bVar38 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("OPEN_COLLAR"), 0))
					{
						bVar38 = true;
					}
					if (bVar38)
					{
						iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = __LIB_0__::func_420(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != joaat("0"))
								{
									iVar0 = __LIB_6__::func_758(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_1252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x67B0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= __LIB_0__::func_25(iParam1, 1))
					{
						func_1280(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = __LIB_6__::func_795(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = __LIB_0__::func_420(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = __LIB_0__::func_420(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = __LIB_6__::func_758(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= __LIB_0__::func_25(iParam1, 1))
					{
						func_1280(iParam1, 1, iParam3, -1);
						if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = __LIB_6__::func_795(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = __LIB_0__::func_420(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = __LIB_0__::func_420(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = __LIB_6__::func_758(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		__LIB_1__::func_597(754, iParam3, Global_78127, 1, 0);
		__LIB_1__::func_597(755, iParam2, Global_78127, 1, 0);
		return 1;
	}
	return 0;
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
				if (((((!func_1229(iVar0, iParam2, 13) && !func_1229(iVar0, iParam2, 14)) && !func_1229(iVar0, iParam2, 15)) && !func_1229(iVar0, iParam2, 16)) && !func_1229(iVar0, iParam2, 71)) && !func_1229(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_1220(iVar0, iParam1, iParam2, iParam4);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1260(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1260(iParam0, 11, -1);
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { func_1280(iParam0, iParam1, iParam2, -1) };
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
									func_1273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1273(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
				Global_78130[2 /*14*/] = { func_1280(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1273(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1273(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1273(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

struct<14> func_1280(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6F16F
{
	__LIB_0__::func_41();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		func_1305(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		func_1281(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_1281(int iParam0, int iParam1, int iParam2)//Position - 0x6F1B0
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__::func_406(iParam1, iParam2);
			break;
		case 11:
			func_1303(iParam1, iParam2);
			break;
		case 8:
			func_1302(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__::func_405(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__::func_404(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__::func_403(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__::func_402(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__::func_401(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__::func_400(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__::func_399(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__::func_398(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__::func_397(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__::func_396(iParam1, iParam2);
			break;
		case 0:
			__LIB_25__::func_29(iParam1, iParam2);
			break;
		case 13:
			__LIB_25__::func_19(iParam1);
			break;
	}
}

void func_1302(int iParam0, int iParam1)//Position - 0x7805C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			StringCopy(&Var2, "U_FMF_0_1" /* GXT: Salamanders T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		case 2:
			StringCopy(&Var2, "U_FMF_0_2" /* GXT: The Feud T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			StringCopy(&Var2, "U_FMF_0_3" /* GXT: Yellow T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 4:
			StringCopy(&Var2, "U_FMF_0_4" /* GXT: Red T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 5:
			StringCopy(&Var2, "U_FMF_0_5" /* GXT: Cyan T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 6:
			StringCopy(&Var2, "U_FMF_0_6" /* GXT: Blue T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 7:
			StringCopy(&Var2, "U_FMF_0_7" /* GXT: Tan T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 8:
			StringCopy(&Var2, "U_FMF_0_8" /* GXT: Pink T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 9:
			StringCopy(&Var2, "U_FMF_0_9" /* GXT: Mint T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&Var2, "U_FMF_0_10" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		case 11:
			StringCopy(&Var2, "U_FMF_0_11" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 12:
			StringCopy(&Var2, "U_FMF_0_12" /* GXT: Leopard T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		case 13:
			StringCopy(&Var2, "U_FMF_0_13" /* GXT: Two-Tone T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 14:
			StringCopy(&Var2, "U_FMF_0_14" /* GXT: Baby Blue T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 15:
			StringCopy(&Var2, "U_FMF_0_15" /* GXT: Two-Tone Striped T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		case 16:
			StringCopy(&Var2, "U_FMF_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&Var2, "U_FMF_0_1" /* GXT: Salamanders T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 18:
			StringCopy(&Var2, "U_FMF_0_2" /* GXT: The Feud T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 19:
			StringCopy(&Var2, "U_FMF_0_3" /* GXT: Yellow T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 20:
			StringCopy(&Var2, "U_FMF_0_4" /* GXT: Red T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 21:
			StringCopy(&Var2, "U_FMF_0_5" /* GXT: Cyan T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 22:
			StringCopy(&Var2, "U_FMF_0_6" /* GXT: Blue T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&Var2, "U_FMF_0_7" /* GXT: Tan T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 24:
			StringCopy(&Var2, "U_FMF_0_8" /* GXT: Pink T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&Var2, "U_FMF_0_9" /* GXT: Mint T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&Var2, "U_FMF_0_10" /* GXT: Ash T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		case 27:
			StringCopy(&Var2, "U_FMF_0_11" /* GXT: Gray T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 28:
			StringCopy(&Var2, "U_FMF_0_12" /* GXT: Leopard T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		case 29:
			StringCopy(&Var2, "U_FMF_0_13" /* GXT: Two-Tone T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 30:
			StringCopy(&Var2, "U_FMF_0_14" /* GXT: Baby Blue T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 31:
			StringCopy(&Var2, "U_FMF_0_15" /* GXT: Two-Tone Striped T-Shirt */, 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "U_FMF_4_13" /* GXT: Red Two-Tone Tank */, 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[77]));
			break;
		case 48:
			StringCopy(&Var2, "U_FMF_4_14" /* GXT: Two-Tone Tank */, 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[78]));
			break;
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&Var2, "U_FMF_5_0" /* GXT: Off-White Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[80]));
			break;
		case 51:
			StringCopy(&Var2, "U_FMF_5_1" /* GXT: Ash Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[81]));
			break;
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 57:
			StringCopy(&Var2, "U_FMF_5_7" /* GXT: Snakeskin Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[87]));
			break;
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 59:
			StringCopy(&Var2, "U_FMF_5_9" /* GXT: White Stripe Cropped Tank */, 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[89]));
			break;
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		case 71:
			StringCopy(&Var2, "U_FMF_11_0" /* GXT: Sky Blue Racerback */, 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[176]));
			break;
		case 72:
			StringCopy(&Var2, "U_FMF_11_1" /* GXT: Purple Racerback */, 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[177]));
			break;
		case 73:
			StringCopy(&Var2, "U_FMF_11_2" /* GXT: Gray Racerback */, 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[178]));
			break;
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&Var2, "U_FMF_11_10" /* GXT: Los Santos 01 Racerback */, 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[186]));
			break;
		case 82:
			StringCopy(&Var2, "U_FMF_11_11" /* GXT: LS Racerback */, 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[187]));
			break;
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 86:
			StringCopy(&Var2, "U_FMF_11_15" /* GXT: LC Penetrators Racerback */, 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[191]));
			break;
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "U_FMF_12_7" /* GXT: Neon Camisole */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[199]));
			break;
		case 95:
			StringCopy(&Var2, "U_FMF_12_8" /* GXT: Red Spotted Camisole */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[200]));
			break;
		case 96:
			StringCopy(&Var2, "U_FMF_12_9" /* GXT: Black Spotted Camisole */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[201]));
			break;
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 103:
			StringCopy(&Var2, "U_FMF_13_0" /* GXT: Black Bustier */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[208]));
			break;
		case 104:
			StringCopy(&Var2, "U_FMF_13_1" /* GXT: Pink Rose Bustier */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[209]));
			break;
		case 105:
			StringCopy(&Var2, "U_FMF_13_2" /* GXT: Olive Bustier */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[210]));
			break;
		case 106:
			StringCopy(&Var2, "U_FMF_13_3" /* GXT: Gray Bustier */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[211]));
			break;
		case 107:
			StringCopy(&Var2, "U_FMF_13_4" /* GXT: Floral Bustier */, 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[212]));
			break;
		case 108:
			StringCopy(&Var2, "U_FMF_13_5" /* GXT: Red Plaid Bustier */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[213]));
			break;
		case 109:
			StringCopy(&Var2, "U_FMF_13_6" /* GXT: Studded Bustier */, 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[214]));
			break;
		case 110:
			StringCopy(&Var2, "U_FMF_13_7" /* GXT: Pink Bustier */, 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[215]));
			break;
		case 111:
			StringCopy(&Var2, "U_FMF_13_8" /* GXT: White Bustier */, 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[216]));
			break;
		case 112:
			StringCopy(&Var2, "U_FMF_13_9" /* GXT: Vivid Blue Bustier */, 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[217]));
			break;
		case 113:
			StringCopy(&Var2, "U_FMF_13_10" /* GXT: Denim Bustier */, 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[218]));
			break;
		case 114:
			StringCopy(&Var2, "U_FMF_13_11" /* GXT: Pink Tribal Bustier */, 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[219]));
			break;
		case 115:
			StringCopy(&Var2, "U_FMF_13_12" /* GXT: Camo Bustier */, 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[220]));
			break;
		case 116:
			StringCopy(&Var2, "U_FMF_13_13" /* GXT: Blue Bustier */, 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[221]));
			break;
		case 117:
			StringCopy(&Var2, "U_FMF_13_14" /* GXT: Black & White Bustier */, 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[222]));
			break;
		case 118:
			StringCopy(&Var2, "U_FMF_13_15" /* GXT: Leopard Bustier */, 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[223]));
			break;
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		case 120:
			StringCopy(&Var2, "U_FMF_15_0" /* GXT: Black Bikini */, 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[240]));
			break;
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 123:
			StringCopy(&Var2, "U_FMF_15_3" /* GXT: Gray Bikini */, 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[243]));
			break;
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 130:
			StringCopy(&Var2, "U_FMF_15_10" /* GXT: Aqua Bikini */, 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[250]));
			break;
		case 131:
			StringCopy(&Var2, "U_FMF_15_11" /* GXT: Orange Bikini */, 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[251]));
			break;
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		default:
			Global_78130[0 /*14*/].f_5 = 4;
			__LIB_18__::func_374(iVar7, iParam0, 136, iParam1);
			if (Global_78130[0 /*14*/].f_7 > 0)
			{
				Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_1188(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_1188(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar9]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_24));
	__LIB_18__::func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_1303(int iParam0, int iParam1)//Position - 0x793FE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			break;
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			break;
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			break;
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			break;
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			break;
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			break;
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			break;
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			break;
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			break;
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			break;
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			break;
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			break;
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			break;
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			break;
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 265;
			break;
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 385;
			break;
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 345;
			break;
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 330;
			break;
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 430;
			break;
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 375;
			break;
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 375;
			break;
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 295;
			break;
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 360;
			break;
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 325;
			break;
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 340;
			break;
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 300;
			break;
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 315;
			break;
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 415;
			break;
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			break;
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			break;
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			break;
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 4)
	{
		if (func_1188(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[4]) * Global_295754.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */) * Global_295754.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_1188(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */) * Global_295754.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1512[9]) * Global_295754.f_24));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1512[iVar8]) * Global_295754.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_78130[0 /*14*/].f_5 = 4;
		__LIB_18__::func_374(iVar7, iParam0, 256, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_24));
		}
	}
	else
	{
		__LIB_18__::func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_1305(int iParam0, int iParam1, int iParam2)//Position - 0x7BA34
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__::func_417(iParam1, iParam2);
			break;
		case 11:
			func_1319(iParam1, iParam2);
			break;
		case 8:
			func_1318(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__::func_416(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__::func_415(iParam1, iParam2);
			break;
		case 4:
			__LIB_18__::func_414(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__::func_434(iParam1, iParam2);
			break;
		case 1:
			__LIB_18__::func_413(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__::func_412(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__::func_411(iParam1, iParam2);
			break;
		case 14:
			__LIB_18__::func_410(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__::func_409(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__::func_408(iParam1, iParam2);
			break;
		case 0:
			__LIB_18__::func_407(iParam1, iParam2);
			break;
		case 13:
			__LIB_18__::func_375(iParam1);
			break;
	}
}

void func_1318(int iParam0, int iParam1)//Position - 0x82C54
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			StringCopy(&Var2, "U_FMM_0_1" /* GXT: Yeti T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 2:
			StringCopy(&Var2, "U_FMM_0_2" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			StringCopy(&Var2, "U_FMM_0_3" /* GXT: Stank T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 4:
			StringCopy(&Var2, "U_FMM_0_4" /* GXT: Ranch T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 5:
			StringCopy(&Var2, "U_FMM_0_5" /* GXT: Pikeys T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&Var2, "U_FMM_0_7" /* GXT: Multi-Logo T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 8:
			StringCopy(&Var2, "U_FMM_0_8" /* GXT: Sweatbox T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&Var2, "U_FMM_0_11" /* GXT: Eris T-Shirt */, 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&Var2, "U_FMM_1_0" /* GXT: White V Neck */, 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 17:
			StringCopy(&Var2, "U_FMM_1_1" /* GXT: Ash V Neck */, 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&Var2, "U_FMM_1_3" /* GXT: Swallow V Neck */, 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 20:
			StringCopy(&Var2, "U_FMM_1_4" /* GXT: Harsh Souls V Neck */, 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		case 21:
			StringCopy(&Var2, "U_FMM_1_5" /* GXT: Broker V Neck */, 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		case 22:
			StringCopy(&Var2, "U_FMM_1_6" /* GXT: Hip-Hop Royalty V Neck */, 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		case 23:
			StringCopy(&Var2, "U_FMM_1_7" /* GXT: Green V Neck */, 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 24:
			StringCopy(&Var2, "U_FMM_1_8" /* GXT: G&B V Neck */, 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 27:
			StringCopy(&Var2, "U_FMM_1_11" /* GXT: Orange V Neck */, 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 28:
			StringCopy(&Var2, "U_FMM_1_12" /* GXT: Brown V Neck */, 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&Var2, "U_FMM_1_14" /* GXT: Signs V Neck */, 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		case 31:
			StringCopy(&Var2, "U_FMM_1_15" /* GXT: Blue Striped V Neck */, 16);
			iVar3 = 1;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 33:
			StringCopy(&Var2, "U_FMM_0_1" /* GXT: Yeti T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 34:
			StringCopy(&Var2, "U_FMM_0_2" /* GXT: Charcoal T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 35:
			StringCopy(&Var2, "U_FMM_0_3" /* GXT: Stank T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 36:
			StringCopy(&Var2, "U_FMM_0_4" /* GXT: Ranch T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 37:
			StringCopy(&Var2, "U_FMM_0_5" /* GXT: Pikeys T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 200;
			break;
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&Var2, "U_FMM_0_7" /* GXT: Multi-Logo T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 40:
			StringCopy(&Var2, "U_FMM_0_8" /* GXT: Sweatbox T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 220;
			break;
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 43:
			StringCopy(&Var2, "U_FMM_0_11" /* GXT: Eris T-Shirt */, 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 220;
			break;
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0" /* GXT: Black Vest */, 16);
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1" /* GXT: Gray Vest */, 16);
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2" /* GXT: Blue Vest */, 16);
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0" /* GXT: Black Vest */, 16);
			iVar3 = 4;
			iVar4 = 0;
			if (Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4190 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1" /* GXT: Gray Vest */, 16);
			iVar3 = 4;
			iVar4 = 1;
			if (Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4198 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2" /* GXT: Blue Vest */, 16);
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */ != -1)
			{
				iVar1 = Global_262145.f_4193 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 80:
			StringCopy(&Var2, "U_FMM_5_0" /* GXT: White Tank */, 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[80]));
			break;
		case 81:
			StringCopy(&Var2, "U_FMM_5_1" /* GXT: Gray Tank */, 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[81]));
			break;
		case 82:
			StringCopy(&Var2, "U_FMM_5_2" /* GXT: Black Tank */, 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[82]));
			break;
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 87:
			StringCopy(&Var2, "U_FMM_5_7" /* GXT: Red Tank */, 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[87]));
			break;
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0" /* GXT: White Shirt */, 16);
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6" /* GXT: Salmon Shirt */, 16);
			iVar3 = 6;
			iVar4 = 6;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 6;
			iVar4 = 7;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 6;
			iVar4 = 8;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9" /* GXT: Off-White Shirt */, 16);
			iVar3 = 6;
			iVar4 = 9;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10" /* GXT: Mint Shirt */, 16);
			iVar3 = 6;
			iVar4 = 10;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11" /* GXT: Tan Shirt */, 16);
			iVar3 = 6;
			iVar4 = 11;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12" /* GXT: Dark Salmon Shirt */, 16);
			iVar3 = 6;
			iVar4 = 12;
			if (Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 6;
			iVar4 = 13;
			if (Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14" /* GXT: Pink Shirt */, 16);
			iVar3 = 6;
			iVar4 = 14;
			if (Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15" /* GXT: Lemon Shirt */, 16);
			iVar3 = 6;
			iVar4 = 15;
			if (Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0" /* GXT: White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 7;
			iVar4 = 2;
			if (Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4189 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 7;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 7;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6" /* GXT: Salmon Shirt */, 16);
			iVar3 = 7;
			iVar4 = 6;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 7;
			iVar4 = 7;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 7;
			iVar4 = 8;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9" /* GXT: Off-White Shirt */, 16);
			iVar3 = 7;
			iVar4 = 9;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10" /* GXT: Mint Shirt */, 16);
			iVar3 = 7;
			iVar4 = 10;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11" /* GXT: Tan Shirt */, 16);
			iVar3 = 7;
			iVar4 = 11;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12" /* GXT: Dark Salmon Shirt */, 16);
			iVar3 = 7;
			iVar4 = 12;
			if (Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4196 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13" /* GXT: Blue Check Shirt */, 16);
			iVar3 = 7;
			iVar4 = 13;
			if (Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4191 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14" /* GXT: Pink Shirt */, 16);
			iVar3 = 7;
			iVar4 = 14;
			if (Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4206 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15" /* GXT: Lemon Shirt */, 16);
			iVar3 = 7;
			iVar4 = 15;
			if (Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4199 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0" /* GXT: Red Accent Tee */, 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			bVar0 = true;
			break;
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			bVar0 = true;
			break;
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			bVar0 = true;
			break;
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 138:
			StringCopy(&Var2, "U_FMM_8_10" /* GXT: Sky Blue Tee */, 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 141:
			StringCopy(&Var2, "U_FMM_8_13" /* GXT: Slate Tee */, 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 142:
			StringCopy(&Var2, "U_FMM_8_14" /* GXT: Gray Two-Tone Tee */, 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 144:
			StringCopy(&Var2, "U_FMM_9_0" /* GXT: White Striped Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		case 145:
			StringCopy(&Var2, "U_FMM_9_1" /* GXT: Metal Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		case 146:
			StringCopy(&Var2, "U_FMM_9_2" /* GXT: Night Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		case 147:
			StringCopy(&Var2, "U_FMM_9_3" /* GXT: Cupcake Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		case 148:
			StringCopy(&Var2, "U_FMM_9_4" /* GXT: Blue Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		case 149:
			StringCopy(&Var2, "U_FMM_9_5" /* GXT: Vibe Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		case 150:
			StringCopy(&Var2, "U_FMM_9_6" /* GXT: Salmon Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 151:
			StringCopy(&Var2, "U_FMM_9_7" /* GXT: Royale Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 154:
			StringCopy(&Var2, "U_FMM_9_10" /* GXT: Pro Lite Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		case 155:
			StringCopy(&Var2, "U_FMM_9_11" /* GXT: Ice Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		case 156:
			StringCopy(&Var2, "U_FMM_9_12" /* GXT: Money Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		case 157:
			StringCopy(&Var2, "U_FMM_9_13" /* GXT: Hunter Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		case 158:
			StringCopy(&Var2, "U_FMM_9_14" /* GXT: Red Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		case 159:
			StringCopy(&Var2, "U_FMM_9_15" /* GXT: Sunshine Polo Shirt */, 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0" /* GXT: White Shirt */, 16);
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 10;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 10;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 10;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6" /* GXT: Blue Woven Shirt */, 16);
			iVar3 = 10;
			iVar4 = 6;
			if (Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7" /* GXT: Salmon Shirt */, 16);
			iVar3 = 10;
			iVar4 = 7;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 10;
			iVar4 = 8;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 10;
			iVar4 = 9;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10" /* GXT: Off-White Shirt */, 16);
			iVar3 = 10;
			iVar4 = 10;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11" /* GXT: Mint Shirt */, 16);
			iVar3 = 10;
			iVar4 = 11;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12" /* GXT: Blue Striped Shirt */, 16);
			iVar3 = 10;
			iVar4 = 12;
			if (Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13" /* GXT: Pink Striped Shirt */, 16);
			iVar3 = 10;
			iVar4 = 13;
			if (Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14" /* GXT: Tan Shirt */, 16);
			iVar3 = 10;
			iVar4 = 14;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15" /* GXT: Ocean Stripe Shirt */, 16);
			iVar3 = 10;
			iVar4 = 15;
			if (Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0" /* GXT: White Shirt */, 16);
			iVar3 = 11;
			iVar4 = 0;
			if (Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4211 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1" /* GXT: Silver Shirt */, 16);
			iVar3 = 11;
			iVar4 = 1;
			if (Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4209 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2" /* GXT: Charcoal Shirt */, 16);
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4195 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3" /* GXT: Pale Blue Shirt */, 16);
			iVar3 = 11;
			iVar4 = 3;
			if (Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4203 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4" /* GXT: Barely Blue Shirt */, 16);
			iVar3 = 11;
			iVar4 = 4;
			if (Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4188 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5" /* GXT: Pink Check Shirt */, 16);
			iVar3 = 11;
			iVar4 = 5;
			if (Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4205 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6" /* GXT: Blue Woven Shirt */, 16);
			iVar3 = 11;
			iVar4 = 6;
			if (Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4194 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7" /* GXT: Salmon Shirt */, 16);
			iVar3 = 11;
			iVar4 = 7;
			if (Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4208 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8" /* GXT: Pale Olive Shirt */, 16);
			iVar3 = 11;
			iVar4 = 8;
			if (Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4204 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9" /* GXT: Fuchsia Shirt */, 16);
			iVar3 = 11;
			iVar4 = 9;
			if (Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4197 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10" /* GXT: Off-White Shirt */, 16);
			iVar3 = 11;
			iVar4 = 10;
			if (Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4202 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11" /* GXT: Mint Shirt */, 16);
			iVar3 = 11;
			iVar4 = 11;
			if (Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4200 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12" /* GXT: Blue Striped Shirt */, 16);
			iVar3 = 11;
			iVar4 = 12;
			if (Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4192 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13" /* GXT: Pink Striped Shirt */, 16);
			iVar3 = 11;
			iVar4 = 13;
			if (Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4207 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14" /* GXT: Tan Shirt */, 16);
			iVar3 = 11;
			iVar4 = 14;
			if (Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4210 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15" /* GXT: Ocean Stripe Shirt */, 16);
			iVar3 = 11;
			iVar4 = 15;
			if (Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_4201 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0" /* GXT: White Untucked */, 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 193:
			StringCopy(&Var2, "U_FMM_12_1" /* GXT: Steel Untucked */, 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 194:
			StringCopy(&Var2, "U_FMM_12_2" /* GXT: Black Untucked */, 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		case 195:
			StringCopy(&Var2, "U_FMM_12_3" /* GXT: Sky Untucked */, 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 196:
			StringCopy(&Var2, "U_FMM_12_4" /* GXT: Navy Untucked */, 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		case 197:
			StringCopy(&Var2, "U_FMM_12_5" /* GXT: Red Untucked */, 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 198:
			StringCopy(&Var2, "U_FMM_12_6" /* GXT: Moss Untucked */, 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 199:
			StringCopy(&Var2, "U_FMM_12_7" /* GXT: Ash Untucked */, 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		case 200:
			StringCopy(&Var2, "U_FMM_12_8" /* GXT: Mustard Untucked */, 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 201:
			StringCopy(&Var2, "U_FMM_12_9" /* GXT: Butter Untucked */, 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		case 202:
			StringCopy(&Var2, "U_FMM_12_10" /* GXT: Forest Untucked */, 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		case 203:
			StringCopy(&Var2, "U_FMM_12_11" /* GXT: Azure Untucked */, 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 208:
			StringCopy(&Var2, "U_FMM_13_0" /* GXT: White Tucked */, 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 209:
			StringCopy(&Var2, "U_FMM_13_1" /* GXT: Silver Tucked */, 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 210:
			StringCopy(&Var2, "U_FMM_13_2" /* GXT: Black Tucked */, 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		case 211:
			StringCopy(&Var2, "U_FMM_13_3" /* GXT: Blue Tucked */, 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			bVar0 = true;
			break;
		case 213:
			StringCopy(&Var2, "U_FMM_13_5" /* GXT: Burgundy Tucked */, 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			bVar0 = true;
			break;
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			bVar0 = true;
			break;
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			bVar0 = true;
			break;
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			bVar0 = true;
			break;
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			bVar0 = true;
			break;
		case 221:
			StringCopy(&Var2, "U_FMM_13_13" /* GXT: Green Plaid Tucked */, 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			bVar0 = true;
			break;
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0" /* GXT: White V Neck */, 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[16]));
			break;
		case 225:
			StringCopy(&Var2, "U_FMM_1_1" /* GXT: Ash V Neck */, 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[17]));
			break;
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			bVar0 = true;
			break;
		case 227:
			StringCopy(&Var2, "U_FMM_1_3" /* GXT: Swallow V Neck */, 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[19]));
			break;
		case 228:
			StringCopy(&Var2, "U_FMM_1_4" /* GXT: Harsh Souls V Neck */, 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[20]));
			break;
		case 229:
			StringCopy(&Var2, "U_FMM_1_5" /* GXT: Broker V Neck */, 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[21]));
			break;
		case 230:
			StringCopy(&Var2, "U_FMM_1_6" /* GXT: Hip-Hop Royalty V Neck */, 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[22]));
			break;
		case 231:
			StringCopy(&Var2, "U_FMM_1_7" /* GXT: Green V Neck */, 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[23]));
			break;
		case 232:
			StringCopy(&Var2, "U_FMM_1_8" /* GXT: G&B V Neck */, 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[24]));
			break;
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			bVar0 = true;
			break;
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			bVar0 = true;
			break;
		case 235:
			StringCopy(&Var2, "U_FMM_1_11" /* GXT: Orange V Neck */, 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[27]));
			break;
		case 236:
			StringCopy(&Var2, "U_FMM_1_12" /* GXT: Brown V Neck */, 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[28]));
			break;
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			bVar0 = true;
			break;
		case 238:
			StringCopy(&Var2, "U_FMM_1_14" /* GXT: Signs V Neck */, 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[30]));
			break;
		case 239:
			StringCopy(&Var2, "U_FMM_1_15" /* GXT: Blue Striped V Neck */, 16);
			iVar3 = 14;
			iVar4 = 15;
			bVar0 = true;
			break;
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_1188(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_442[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_1188(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_442[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar8]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar9 = (iParam0 - 32);
		if (iVar9 >= 0 && iVar9 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar9]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar10 = (iParam0 - 160) + 124;
		if (iVar10 >= 0 && iVar10 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar10]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar11 = (iParam0 - 160) + 188;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar11]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_295754.f_16));
	if (iParam0 >= 241)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		__LIB_18__::func_374(iVar7, iParam0, 241, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_16));
		}
	}
	else
	{
		__LIB_18__::func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_1319(int iParam0, int iParam1)//Position - 0x85146
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 160;
			break;
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 205;
			break;
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 110;
			break;
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 150;
			break;
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 115;
			break;
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 115;
			break;
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 150;
			break;
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 150;
			break;
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 115;
			break;
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 140;
			break;
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 125;
			break;
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 115;
			break;
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 150;
			break;
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 275;
			break;
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 460;
			break;
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 965;
			break;
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2520;
			break;
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 350;
			break;
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 3125;
			break;
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			break;
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			break;
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			break;
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2485;
			break;
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 2945;
			break;
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 3080;
			break;
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 2990;
			break;
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 3750;
			break;
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 515;
			break;
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 530;
			break;
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 2810;
			break;
		case 108:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		case 109:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 155;
			break;
		case 110:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 320;
			break;
		case 111:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 140;
			break;
		case 112:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 150;
			break;
		case 113:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 145;
			break;
		case 114:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 150;
			break;
		case 115:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 140;
			break;
		case 116:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 135;
			break;
		case 117:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 130;
			break;
		case 118:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 130;
			break;
		case 119:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 150;
			break;
		case 120:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 145;
			break;
		case 121:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 740;
			break;
		case 122:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 790;
			break;
		case 123:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		case 125:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 126:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 127:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 128:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 129:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 130:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 131:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 132:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 133:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 134:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		case 135:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 136:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 137:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		case 138:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		case 139:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 140:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		case 141:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		case 142:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		case 143:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		case 144:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		case 145:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		case 146:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 147:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		case 148:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 149:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 150:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		case 151:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		case 152:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		case 153:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		case 154:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		case 155:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 505;
			break;
		case 157:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 470;
			break;
		case 158:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		case 159:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 160:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 161:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 162:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 163:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 164:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 165:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 166:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 167:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 168:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 169:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 170:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 171:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 172:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 120;
			break;
		case 173:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		case 174:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 175:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 176:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 177:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 178:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 179:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 90;
			break;
		case 180:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 181:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 182:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 183:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 184:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 185:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 186:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 2450;
			break;
		case 187:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 189:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 190:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		case 191:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 192:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		case 193:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 194:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 195:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		case 196:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 197:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		case 198:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		case 199:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		case 200:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 201:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 202:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 203:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 204:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 205:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 206:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		case 207:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 208:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 209:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		case 210:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 211:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 212:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 213:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 214:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 215:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 216:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 217:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		case 218:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		case 219:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 420;
			break;
		case 221:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 415;
			break;
		case 222:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 440;
			break;
		case 223:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 385;
			break;
		case 224:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 330;
			break;
		case 225:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 445;
			break;
		case 226:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 340;
			break;
		case 227:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		case 228:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 295;
			break;
		case 229:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 340;
			break;
		case 230:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 325;
			break;
		case 231:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		case 232:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		case 233:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 440;
			break;
		case 234:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 325;
			break;
		case 235:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 325;
			break;
		case 236:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 23)
	{
		if (func_1188(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */) * Global_295754.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_442[23]) * Global_295754.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */) * Global_295754.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_1188(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */) * Global_295754.f_16));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_442[28]) * Global_295754.f_16));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_442[iVar8]) * Global_295754.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_78130[0 /*14*/].f_5 = 3;
		__LIB_18__::func_374(iVar7, iParam0, 237, iParam1);
		if (Global_78130[0 /*14*/].f_7 > 0)
		{
			Global_78130[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_78130[0 /*14*/].f_7) * Global_295754.f_16));
		}
	}
	else
	{
		__LIB_18__::func_326(&(Global_78130[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
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
	if (__LIB_18__::func_460(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_232();
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
				if (__LIB_4__::func_942(bVar2))
				{
					if (!bVar4)
					{
						func_1128(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_1__::func_946() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_1__::func_945(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false));
						iVar5 = __LIB_1__::func_944(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_1__::func_946(), false))
						{
							iVar5 = __LIB_1__::func_946();
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
		if (__LIB_7__::func_798(iVar0))
		{
			if ((__LIB_13__::func_506() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_13__::func_506())
			{
				if (!__LIB_32__::func_921(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1476(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__::func_851())
	{
		__LIB_38__::func_224(&iVar0);
	}
	if (func_1472())
	{
		__LIB_38__::func_224(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_65())
		{
			if (__LIB_1__::func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_64(), __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_64(), fParam1);
				func_1432(__LIB_2__::func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_662())
			{
				if (__LIB_7__::func_138(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_165(), 1))
				{
					func_1432(__LIB_2__::func_64());
					return 1;
				}
			}
			else if (func_1332(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_165(), 0, 1, 0))
			{
				func_1432(__LIB_2__::func_64());
				return 1;
			}
		}
		else if (__LIB_18__::func_220(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
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
				__LIB_1__::func_930(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_1__::func_929(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
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
	if (!__LIB_1__::func_190(8))
	{
		__LIB_3__::func_437(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_245(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_190(16))
		{
			__LIB_1__::func_245(16);
		}
	}
	__LIB_1__::func_245(31);
	if (!__LIB_7__::func_94())
	{
		if (!__LIB_1__::func_190(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_7__::func_194(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_648())
					{
						if (!__LIB_4__::func_316())
						{
							__LIB_37__::func_835(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_371(iVar1) || !__LIB_7__::func_193(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_35__::func_937(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_584(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_0__::func_747())
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
								if (__LIB_5__::func_694(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
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
									if (__LIB_13__::func_460(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (__LIB_13__::func_460(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_25__::func_21(&Param0, &fParam1))
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
										if (__LIB_13__::func_460(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (__LIB_13__::func_460(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_18__::func_220(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									func_1382(&iVar0, iParam3);
									if ((__LIB_1__::func_221() || __LIB_1__::func_936()) || __LIB_1__::func_935())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_31__::func_898(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_245(34);
									}
									else
									{
										__LIB_1__::func_191(34);
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
													__LIB_39__::func_768(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_35__::func_565(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
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
									__LIB_35__::func_565(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_18__::func_986(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_245(0);
									__LIB_1__::func_245(44);
									__LIB_1__::func_191(10);
									__LIB_1__::func_191(1);
									__LIB_1__::func_191(2);
									__LIB_1__::func_191(9);
									__LIB_1__::func_191(12);
									__LIB_1__::func_191(31);
									__LIB_1__::func_191(32);
									__LIB_1__::func_191(33);
									__LIB_1__::func_191(35);
									__LIB_1__::func_191(37);
									__LIB_1__::func_191(38);
									__LIB_1__::func_931();
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

void func_1382(int iParam0, int iParam1)//Position - 0x94F29
{
	__LIB_13__::func_459(*iParam0, &(Global_1585857[iParam1 /*142*/]), 1, 1, 0);
	__LIB_35__::func_581(iParam0, iParam1);
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
	__LIB_1__::func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		func_1449(iParam0, 1);
	}
	else
	{
		__LIB_32__::func_12(iParam0, __LIB_1__::func_267(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

void func_1449(int iParam0, bool bParam1)//Position - 0x971A3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		__LIB_13__::func_459(iParam0, &(Global_2667225.f_45.f_69), bParam1, 1, 0);
	}
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
		if (__LIB_1__::func_949())
		{
			iVar2 = __LIB_1__::func_947(__LIB_1__::func_948());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
				iVar5 = __LIB_1__::func_947(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_2__::func_214(bVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar7)))
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
						if (!__LIB_1__::func_389())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_264(bVar1, 0, 1))
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
									if (__LIB_1__::func_264(bVar1, 0, 1))
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
	if (__LIB_1__::func_389())
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
	else if (__LIB_1__::func_949())
	{
		return 1;
	}
	return 0;
}

int func_1466()//Position - 0x977BF
{
	var uVar0;
	if (__LIB_1__::func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
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
	if (__LIB_13__::func_506())
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
		if (__LIB_2__::func_65())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_165() /*142*/].f_66;
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
						if (__LIB_18__::func_460(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_32__::func_12(Global_2667225.f_2669, __LIB_1__::func_267(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_1__::func_953();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_1__::func_952();
			}
		}
		else if (!__LIB_2__::func_65())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_255())
				{
					__LIB_1__::func_953();
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
	if (__LIB_7__::func_129(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_1__::func_964(iParam0);
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
			if (__LIB_8__::func_764(PLAYER::PLAYER_ID()))
			{
				__LIB_19__::func_557(iParam0);
			}
		}
		__LIB_18__::func_379(iParam0);
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
			__LIB_1__::func_959(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_0__::func_851());
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
					__LIB_1__::func_958(iParam0, 1);
					__LIB_1__::func_957(iParam0, 1);
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
			if (__LIB_1__::func_956(ENTITY::GET_ENTITY_MODEL(iParam0)))
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
						__LIB_1__::func_955(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 189)
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
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_1__::func_954() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
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
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_638(0))
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
		__LIB_0__::func_636();
		if (bParam10)
		{
			__LIB_0__::func_639();
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
					__LIB_18__::func_380(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
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
						if (((Global_2667225.f_518 && !__LIB_6__::func_510()) && __LIB_6__::func_509(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_300(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_1__::func_967(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_18__::func_420(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
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
								bVar1 = __LIB_2__::func_68(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
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
						__LIB_1__::func_967(-1);
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
								__LIB_1__::func_967(-1);
							}
						}
					}
					else
					{
						__LIB_1__::func_967(-1);
					}
				}
				else
				{
					__LIB_1__::func_967(1);
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
		__LIB_0__::func_636();
		if (bParam10)
		{
			if (!__LIB_2__::func_202(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_639();
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
		if (!__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
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
				if (__LIB_32__::func_921(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_13__::func_505(Global_2676213);
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
		__LIB_7__::func_149();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_13__::func_503();
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
		if (Global_2667225.f_489 == 0 || __LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
		if (__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
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
			iVar20 = __LIB_18__::func_441(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_57(iVar20))
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
			if (__LIB_2__::func_1())
			{
				__LIB_1__::func_225();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_0(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_0(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_0(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_0(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_0(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_0(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_0(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_0(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_0(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_0(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_0(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_0(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_0(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_0(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_0(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_0(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_0(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_0(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_0(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_0(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_0(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_0(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_0(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_0(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_0(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_0(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_0(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_0(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_0(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_0(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_0(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_0(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_0(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_0(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_0(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_0(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_0(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_0(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_0(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_0(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_0(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_0(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_0(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_0(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_0(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_0(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_0(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_0(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_0(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_0(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				func_1698(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				func_1696(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				func_1695(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
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
					__LIB_3__::func_679();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				func_1695(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_7__::func_148();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_89(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
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
				if (__LIB_26__::func_806(PLAYER::PLAYER_ID()))
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
				iVar38 = __LIB_7__::func_135(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_1__::func_996(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
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
					if (__LIB_1__::func_264(Global_1888188, 0, 1))
					{
						if (__LIB_32__::func_922(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1888188) };
							if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
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
					if (__LIB_0__::func_613(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_26__::func_806(PLAYER::PLAYER_ID()))
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
				if (__LIB_26__::func_806(PLAYER::PLAYER_ID()))
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
				Var13 = { __LIB_36__::func_177(Global_2667225.f_555, fVar12) };
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
					iVar42 = __LIB_1__::func_994(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_13__::func_506() || iVar40)
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
					if (Global_1836068.f_14 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_265(Global_1836068.f_14) };
							if (__LIB_13__::func_506())
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
					if (__LIB_0__::func_613(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
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
				if (__LIB_13__::func_506())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_5__::func_703() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_88(__LIB_1__::func_265(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_88(Global_2667225.f_512);
				}
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_26__::func_806(PLAYER::PLAYER_ID()))
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
				if (!__LIB_6__::func_922(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_7__::func_202(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
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
				iVar30 = __LIB_36__::func_218(Var21, fVar35, &fVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_38__::func_225(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_38__::func_225(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_32__::func_993(Var21, fVar35) };
						Var23 = { __LIB_32__::func_992(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_602(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_6__::func_922(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_7__::func_202(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_36__::func_218(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_156(Var14, Var23) < 0f)
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
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_1__::func_990());
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar0 /*12*/]));
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
					Var17 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
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
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
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
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_1__::func_989(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_1__::func_993(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672120[0 /*12*/]));
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
				fVar10 = __LIB_1__::func_989(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
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
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
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
					iVar16 = __LIB_25__::func_340();
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
					iVar16 = __LIB_25__::func_340();
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
						__LIB_25__::func_53(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				if (__LIB_36__::func_169())
				{
					iVar20 = __LIB_1__::func_332(__LIB_0__::func_582());
					if (iVar20 <= 0)
					{
					}
					__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1654(__LIB_0__::func_582()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_4__::func_319();
				if (iVar20 <= 0)
				{
				}
				__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_222(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_146(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
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
				iVar20 = __LIB_4__::func_319();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_261())
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
								__LIB_18__::func_421(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_25__::func_340();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1303;
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
						switch (__LIB_1__::func_261())
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
								__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_8__::func_48(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var44, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_8__::func_48(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_18__::func_381(iVar15, 912, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				switch (__LIB_1__::func_261())
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
							switch (__LIB_0__::func_598(PLAYER::PLAYER_ID()))
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
							iVar46 = __LIB_1__::func_260(__LIB_2__::func_78(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_248(__LIB_1__::func_292(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_246(__LIB_1__::func_40(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_243(__LIB_1__::func_374(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_231(__LIB_1__::func_234(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_160())
								{
									iVar46 = __LIB_1__::func_227(__LIB_1__::func_228(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_227(__LIB_1__::func_228(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_222(__LIB_1__::func_223(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_218(__LIB_1__::func_219(PLAYER::PLAYER_ID()));
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
							iVar46 = __LIB_1__::func_195(__LIB_1__::func_196(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_166(__LIB_0__::func_598(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_25__::func_672(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
					Global_2667225.f_555 = { __LIB_5__::func_701() };
					Global_2667225.f_555 = { __LIB_2__::func_75(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__::func_581(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_6__::func_513(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
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
					Global_2667225.f_555 = { func_1654(__LIB_0__::func_582()) };
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
				if (__LIB_0__::func_581(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_6__::func_513(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
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
					Global_2667225.f_555 = { func_1654(__LIB_0__::func_582()) };
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
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
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
				Global_2667225.f_555 = { __LIB_7__::func_199(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_73(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
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
					if (__LIB_6__::func_509(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
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
				if (Global_2667225.f_490.f_3 && !__LIB_13__::func_496(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_21__::func_254() };
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
		if (__LIB_33__::func_16(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_13__::func_503())
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
					if (!__LIB_1__::func_977(Var17))
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
			if ((__LIB_0__::func_698() && __LIB_13__::func_506()) && func_353(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = func_1592();
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
			if (__LIB_2__::func_202(PLAYER::PLAYER_ID()))
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1586(&(Var18[iVar0 /*3*/]), __LIB_7__::func_137(Var18[iVar0 /*3*/], 1008981770)))
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
			if ((__LIB_1__::func_62(Global_2667225.f_489) && !__LIB_7__::func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_13__::func_503())
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
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_32__::func_921(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_32__::func_184(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_1__::func_973(&Var18, &iVar0);
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
		Global_2667225.f_520.f_9 = func_1592();
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
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_93();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_638(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_7__::func_98();
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
		__LIB_1__::func_93();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_36__::func_217(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
				__LIB_1__::func_87(Var6.f_0, Var6.f_1);
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
					if (__LIB_1__::func_86(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_305(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_613(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
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
				if (uParam0->f_5 && !__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
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
				__LIB_7__::func_97(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_85() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
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
				__LIB_7__::func_98();
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
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
				if (!__LIB_1__::func_66(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_65(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
					__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
										if (__LIB_0__::func_613(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_6__::func_903(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
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
				if (__LIB_1__::func_62(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam2, &(Global_2667225.f_2491.f_6));
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
			__LIB_1__::func_93();
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
						if (__LIB_1__::func_66(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
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
		if (__LIB_3__::func_902(PLAYER::PLAYER_ID(), 0))
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
		if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_1517(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
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
	if (__LIB_1__::func_64(Param0, uParam1))
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
			if (!__LIB_25__::func_373(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_70(uParam1, 0))
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
							if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
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
				__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1515(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_70(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1515(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1515(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
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
		__LIB_1__::func_67(*(uParam0[0 /*3*/]));
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
		if (__LIB_26__::func_806(PLAYER::PLAYER_ID()))
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
		if (!__LIB_7__::func_221(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_32__::func_921(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (func_1559(Param0, fParam1, uParam2->f_15, __LIB_1__::func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_32__::func_184(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_26__::func_931(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_26__::func_931(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
			if (!__LIB_0__::func_607(Param0, 0.5f))
			{
				if (func_397(Var12))
				{
					if (!func_353(&Param0, 0, 0, 0, 1) && !__LIB_24__::func_959(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_24__::func_959(&Param0, 0))
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
	else if (!__LIB_1__::func_81(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_7__::func_427(PLAYER::PLAYER_ID()) && __LIB_6__::func_936(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_71(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
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
		if (!__LIB_6__::func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_80(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
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
	if (__LIB_7__::func_117(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_62(Global_2667225.f_489))
			{
				if (__LIB_7__::func_137(Param0, 0.01f))
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
		if (__LIB_1__::func_79(Param0))
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
			if (!__LIB_18__::func_494(&Param0, 0, 0))
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
	if (!__LIB_2__::func_70(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_7__::func_136(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_1__::func_971(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_18__::func_329(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_25__::func_373(Param0, 1056964608))
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
	else if (__LIB_1__::func_76(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
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
				fVar0 = func_1538(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_1538(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__::func_220(Param0);
			}
			fVar7 = __LIB_32__::func_991(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_1__::func_969(Var19);
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
							fVar0 = func_1538(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_1538(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_62(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_7__::func_220(Param0);
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
						fVar5 = __LIB_7__::func_219(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_32__::func_991(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
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

float func_1538(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0xA1798
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = __LIB_1__::func_73(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 10000000f;
	fVar4 = __LIB_32__::func_991(Param0, 1, 0, 0, 1, 0);
	fVar0 = __LIB_1__::func_73(fVar4, 0f, func_1544(), func_1543(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = __LIB_7__::func_96(Param0);
	fVar0 = __LIB_1__::func_73(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = __LIB_6__::func_511(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = __LIB_1__::func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (__LIB_1__::func_74(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = __LIB_1__::func_73(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + __LIB_1__::func_73(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = __LIB_1__::func_73(SYSTEM::VDIST(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

float func_1543()//Position - 0xA1C7E
{
	if (__LIB_13__::func_506())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2667225.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

float func_1544()//Position - 0xA1CDA
{
	if (__LIB_13__::func_506())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2667225.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_1559(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0xA24B3
{
	Global_2667225.f_3 = 0;
	if (!__LIB_32__::func_184(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam3)
		{
			if (__LIB_36__::func_217(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_26__::func_805(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_25__::func_373(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (!bParam2)
		{
			if (__LIB_36__::func_217(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_26__::func_805(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_13__::func_496(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2667225.f_3++;
						if (!__LIB_25__::func_373(Param0, 1056964608))
						{
							Global_2667225.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (__LIB_36__::func_217(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!__LIB_26__::func_805(Param0, fParam10))
			{
				Global_2667225.f_3++;
				if (!__LIB_13__::func_496(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2667225.f_3++;
					if (!__LIB_25__::func_373(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
		}
	}
	return 0;
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
			if (__LIB_7__::func_255(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
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
		__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
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
				Var1 = { __LIB_2__::func_75(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_1__::func_974(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_72(Param0, Param1, fParam2) };
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
	if (__LIB_36__::func_217(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
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
	__LIB_1__::func_975(uParam0);
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
		if (__LIB_18__::func_494(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_24__::func_959(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_4__::func_944(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__::func_976(uParam0, 1120403456);
}

int func_1592()//Position - 0xA358D
{
	if (__LIB_13__::func_506())
	{
		if (!Global_2667225.f_45.f_67 == 0)
		{
			if (__LIB_4__::func_317(Global_2667225.f_45.f_67))
			{
				return 1;
			}
		}
	}
	return 0;
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
		if (__LIB_18__::func_494(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_24__::func_959(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_13__::func_503())
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
		Var0 = { __LIB_1__::func_293(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_293(Global_2678393.f_33[iParam0]) };
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
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
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
		Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1657(__LIB_1__::func_265(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_3__::func_859(iParam0))
	{
		Var1 = { func_942(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_4__::func_15(iParam0))
	{
		iVar2 = __LIB_1__::func_259(iParam0);
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
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
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
	return __LIB_1__::func_265(iParam0);
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
			if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
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
						Var1.f_2 = __LIB_1__::func_995(&(Global_2672169[iVar0 /*17*/]));
						__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_353(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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
				if (__LIB_1__::func_76(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_607(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_26__::func_931(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_26__::func_931(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_26__::func_931(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_6__::func_511(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_32__::func_991(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, func_1544(), func_1543(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_32__::func_991(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_7__::func_96(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, func_1544(), func_1543(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_1__::func_998(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, 65f, 0.8f, 1f);
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

void func_1695(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0xACCE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = (iVar0 + iVar2);
		if (!iVar1 < *uParam0)
		{
			iVar1 = (iVar1 - *uParam0);
		}
		if (func_1559(*(uParam0[iVar1 /*4*/]), (uParam0[iVar1 /*4*/])->f_3, 0, 1, 0, 0, fParam3, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			*uParam1 = { *(uParam0[iVar1 /*4*/]) };
			*uParam2 = (uParam0[iVar1 /*4*/])->f_3;
			return;
		}
		iVar0++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	*uParam1 = { *(uParam0[iVar0 /*4*/]) };
	*uParam2 = (uParam0[iVar0 /*4*/])->f_3;
}

void func_1696(var uParam0, var uParam1, float fParam2)//Position - 0xACD95
{
	var uVar0;
	uVar0 = 11;
	__LIB_1__::func_999(&uVar0);
	func_1695(&uVar0, uParam0, uParam1, fParam2);
}

void func_1698(var uParam0, var uParam1, float fParam2)//Position - 0xACF39
{
	struct<4> Var0[15];
	Var0[0 /*4*/] = { -1690.928f, -1052.085f, 12.5375f };
	Var0[0 /*4*/].f_3 = 46.44f;
	Var0[1 /*4*/] = { -1212.403f, -952.1625f, 1.6625f };
	Var0[1 /*4*/].f_3 = 117.6f;
	Var0[2 /*4*/] = { -1772.089f, -1141.589f, 12.5375f };
	Var0[2 /*4*/].f_3 = 46.44f;
	Var0[3 /*4*/] = { -116.325f, -441.075f, 35.4125f };
	Var0[3 /*4*/].f_3 = -132.84f;
	Var0[4 /*4*/] = { -1157.281f, 927.675f, 197.5375f };
	Var0[4 /*4*/].f_3 = -143.64f;
	Var0[5 /*4*/] = { -82.85f, -880.5125f, 40.0875f };
	Var0[5 /*4*/].f_3 = -66.24f;
	Var0[6 /*4*/] = { 195.7f, -962.1625f, 29.6f };
	Var0[6 /*4*/].f_3 = 115.28f;
	Var0[7 /*4*/] = { -885.4375f, -787.9f, 15.4375f };
	Var0[7 /*4*/].f_3 = 122.34f;
	Var0[8 /*4*/] = { -829.5f, -922.1375f, 16.0125f };
	Var0[8 /*4*/].f_3 = -125.28f;
	Var0[9 /*4*/] = { -1221.905f, -1571.869f, 3.675f };
	Var0[9 /*4*/].f_3 = -106.92f;
	Var0[10 /*4*/] = { -609.65f, -622.3375f, 34.1875f };
	Var0[10 /*4*/].f_3 = -90f;
	Var0[11 /*4*/] = { -894f, -1322.775f, 4.5125f };
	Var0[11 /*4*/].f_3 = -166.32f;
	Var0[12 /*4*/] = { 386.2375f, -1514.243f, 28.7875f };
	Var0[12 /*4*/].f_3 = 119.16f;
	Var0[13 /*4*/] = { -310.9625f, -1627.762f, 31.325f };
	Var0[13 /*4*/].f_3 = -117.72f;
	Var0[14 /*4*/] = { 171.775f, -677.0125f, 42.6375f };
	Var0[14 /*4*/].f_3 = -54.37f;
	func_1695(&Var0, uParam0, uParam1, fParam2);
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
					__LIB_3__::func_679();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_93())
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
				if (__LIB_2__::func_4(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_92() && (__LIB_13__::func_501(PLAYER::PLAYER_ID()) || __LIB_2__::func_3(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_697())
				{
					if (__LIB_13__::func_499(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_698())
				{
					return 20;
				}
				else if ((((((__LIB_19__::func_760(1) && __LIB_13__::func_499(PLAYER::PLAYER_ID())) && (__LIB_0__::func_396(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_582() != __LIB_1__::func_301()))) && !__LIB_2__::func_91()) && !__LIB_13__::func_498(PLAYER::PLAYER_ID())) && !__LIB_18__::func_447(1)) && !(__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0) == 0 && func_1710(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_36__::func_169())
					{
						return 34;
					}
					else if (__LIB_25__::func_531(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_4__::func_962(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_57(iVar0) && __LIB_21__::func_112(iVar0)) && (__LIB_32__::func_908(iVar0) || __LIB_0__::func_581(PLAYER::PLAYER_ID())))
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
				else if (__LIB_25__::func_531(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_4__::func_962(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_57(iVar0) && __LIB_21__::func_112(iVar0))
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
	if (__LIB_13__::func_258(bParam0, 0))
	{
		iVar0 = __LIB_2__::func_191(bParam0);
		Var1 = { func_1654(iVar0) };
		return func_353(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

void func_1732(bool bParam0, int iParam1, int iParam2)//Position - 0xADC4C
{
	if (bParam0)
	{
		func_1733(bLocal_324, 0, iParam1, iParam2);
		__LIB_13__::func_468(26);
	}
	else
	{
		func_1733(bLocal_324, 1, iParam1, iParam2);
		__LIB_13__::func_475(26);
	}
}

void func_1733(int iParam0, bool bParam1, var uParam2, int iParam3)//Position - 0xADC80
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (__LIB_0__::func_647())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = uParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = uParam2 & 2 != false;
		bVar3 = uParam2 & 4 != false;
		bVar4 = uParam2 & 8 != false;
		bVar5 = uParam2 & 16 != false;
		bVar6 = uParam2 & 32 != false;
		bVar7 = uParam2 & 64 != false;
		bVar8 = uParam2 & 128 != false;
		bVar9 = uParam2 & 256 != false;
		bVar10 = uParam2 & 512 != false;
		bVar11 = uParam2 & 1024 != false;
		bVar12 = uParam2 & 2048 != false;
		bVar13 = uParam2 & 4096 != false;
		bVar14 = uParam2 & 8192 != false;
		bVar15 = uParam2 & 16384 != false;
		bVar16 = uParam2 & 32768 != false;
		bVar17 = uParam2 & 65536 != false;
		bVar18 = uParam2 & 131072 != false;
		bVar19 = uParam2 & 262144 != false;
		bVar20 = uParam2 & 524288 != false;
		bVar21 = uParam2 & 1048576 != false;
		bVar22 = uParam2 & 2097152 != false;
		bVar23 = uParam2 & 4194304 != false;
		bVar24 = uParam2 & 8388608 != false;
		bVar25 = uParam2 & 16777216 != false;
		if (uParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!__LIB_4__::func_715())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!__LIB_6__::func_978(PLAYER::PLAYER_ID(), 0) && !__LIB_0__::func_81()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					__LIB_13__::func_510(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!__LIB_0__::func_644(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_0__::func_643();
					__LIB_0__::func_642();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!__LIB_0__::func_644(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (__LIB_0__::func_641(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

int func_1741()//Position - 0xAE2ED
{
	if ((!bLocal_321 || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324)) || func_990() == 21)
	{
		return 0;
	}
	if (__LIB_2__::func_214(PLAYER::PLAYER_ID(), 0, 0))
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
		if (!__LIB_13__::func_517(iVar0))
		{
		}
		else
		{
			func_1781(iVar0);
		}
		iVar0++;
	}
	if (__LIB_13__::func_495())
	{
		iVar0 = __LIB_13__::func_511();
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_473.f_3);
		bVar3 = StackVal;
		if (!bLocal_321)
		{
			func_1774(0);
			return;
		}
		if (__LIB_13__::func_510())
		{
			Stack.Push(Local_213.f_473.f_10 == 0);
			Stack.Push(__LIB_13__::func_511());
			Call_Loc(Local_213.f_473.f_10);
			Stack.Push((StackVal || MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
			Stack.Push(__LIB_13__::func_511());
			Call_Loc(Local_213.f_473.f_10);
			if (StackVal || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(StackVal, false, -1))
			{
				Stack.Push(__LIB_13__::func_511());
				Stack.Push(&(Local_317.f_2));
				Call_Loc(Local_213.f_473.f_8);
			}
		}
		if (__LIB_13__::func_509(0))
		{
			Stack.Push(__LIB_13__::func_519());
			Call_Loc(Local_213.f_473.f_6);
			if (!StackVal)
			{
				func_1768();
			}
			return;
		}
		bVar4 = true;
		if (!CAM::IS_SCREEN_FADED_OUT() && !__LIB_13__::func_508(__LIB_13__::func_511(), 6))
		{
			bVar4 = false;
		}
		Stack.Push(Local_213.f_473.f_8 != 0);
		Stack.Push(__LIB_13__::func_511());
		Call_Loc(Local_213.f_473.f_9);
		if (StackVal && StackVal)
		{
			if (!__LIB_13__::func_507())
			{
				bVar4 = false;
			}
		}
		if (__LIB_13__::func_482(79) && bVar3)
		{
			bVar4 = false;
		}
		Var1 = { __LIB_26__::func_836() };
		if (Local_213.f_473.f_14 != 0)
		{
			Stack.Push(__LIB_13__::func_511());
			Call_Loc(Local_213.f_473.f_14);
			Var2 = { StackVal, StackVal, StackVal };
			if (!__LIB_0__::func_86(Var2) && !__LIB_13__::func_505(Var1))
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
			if (iVar5 || __LIB_18__::func_391(Var1, __LIB_26__::func_835(), bVar3, 1, 0, 0, 1, 0, __LIB_26__::func_834(), 0, 0))
			{
				if (Local_213.f_473.f_6 == 0)
				{
					func_1768();
				}
				else
				{
					__LIB_13__::func_503(0);
				}
			}
		}
		return;
	}
	func_1757();
	if (__LIB_13__::func_509(1))
	{
		if (SYSTEM::VDIST(Local_329, Local_196.f_143[__LIB_13__::func_502() /*8*/]) > __LIB_26__::func_833())
		{
			__LIB_13__::func_517(1);
		}
		return;
	}
	iVar6 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_13__::func_517(iVar0))
		{
		}
		else if (!__LIB_13__::func_500(iVar0))
		{
		}
		else
		{
			__LIB_13__::func_514(iVar0);
			Stack.Push(((bLocal_321 && __LIB_13__::func_466() == 0) && (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, true) || __LIB_13__::func_513(iVar0))));
			Stack.Push(iVar0);
			Stack.Push(Local_196.f_143[iVar0 /*8*/]);
			Call_Loc(Local_213.f_473.f_1);
			if (StackVal && (StackVal || __LIB_13__::func_482(79)))
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
				Stack.Push(__LIB_13__::func_508(iVar0, 4));
				Stack.Push(iVar0);
				Call_Loc(Local_213.f_473.f_15);
				if (StackVal || StackVal)
				{
					__LIB_3__::func_988(__LIB_26__::func_832(iVar0));
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
				func_1732(StackVal, (StackVal || StackVal), 0);
				func_1744(iVar0);
				__LIB_13__::func_511(iVar0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Stack.Push(__LIB_13__::func_508(iVar0, 4));
		Stack.Push(iVar0);
		Call_Loc(Local_213.f_473.f_15);
		if (((StackVal || StackVal) && iVar6 != iVar0) && __LIB_0__::func_1(__LIB_26__::func_832(iVar0)))
		{
			HUD::CLEAR_HELP(true);
		}
		iVar0++;
	}
}

void func_1744(int iParam0)//Position - 0xAE6CB
{
	if (!__LIB_13__::func_512(iParam0))
	{
		__LIB_13__::func_902(800);
	}
	Stack.Push(__LIB_13__::func_511());
	Call_Loc(Local_213.f_473.f_3);
	if ((StackVal && PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false)) && (__LIB_13__::func_512(iParam0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		NETWORK::NETWORK_FADE_OUT_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_326, false), false, true);
	}
	__LIB_13__::func_468(40);
}

void func_1757()//Position - 0xAE91A
{
	int iVar0;
	if (!__LIB_13__::func_482(3))
	{
		if (Local_317.f_3 > 0)
		{
			if (bLocal_321)
			{
				iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324);
				if (Local_317.f_3 > iVar0)
				{
					__LIB_13__::func_910(bLocal_324, Local_317.f_3, 0, 0);
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
	func_1732(0, 0, 0);
	Stack.Push(__LIB_13__::func_511());
	Call_Loc(Local_213.f_473.f_2);
	if (__LIB_13__::func_508(__LIB_13__::func_511(), 0) && !__LIB_13__::func_508(__LIB_13__::func_519(), 0))
	{
		func_1769();
	}
	__LIB_13__::func_503(1);
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
	iVar0 = __LIB_13__::func_518(bLocal_324);
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
	if (iParam0 && !__LIB_13__::func_495())
	{
		return;
	}
	__LIB_13__::func_517(0);
	__LIB_6__::func_352(&(Local_317.f_2));
	Stack.Push(Local_213.f_473.f_10 != 0);
	Stack.Push(__LIB_13__::func_511());
	Call_Loc(Local_213.f_473.f_10);
	if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(__LIB_13__::func_511());
		Call_Loc(Local_213.f_473.f_10);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(StackVal);
	}
	__LIB_26__::func_837();
	func_1775();
}

void func_1775()//Position - 0xAECBC
{
	func_1777(8);
	func_1777(26);
	func_1777(27);
	__LIB_13__::func_358(3);
	Local_317.f_1 = Local_196.f_143[Local_317.f_0 /*8*/].f_4;
	Local_317.f_0 = -1;
}

void func_1777(int iParam0)//Position - 0xAED06
{
	if (__LIB_11__::func_631(&(Local_372[iLocal_327 /*35*/].f_1), iParam0))
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
			__LIB_21__::func_113(&(Local_317.f_4[iParam0]), Local_196.f_143[iParam0 /*8*/], __LIB_13__::func_516(iParam0), __LIB_13__::func_499(iParam0), __LIB_21__::func_150(iParam0), __LIB_13__::func_515(iParam0), 0, __LIB_13__::func_910(iParam0), 0, __LIB_13__::func_513(iParam0));
			iVar0 = __LIB_13__::func_512(iParam0);
			if (iVar0 != 5)
			{
				HUD::SET_BLIP_PRIORITY(Local_317.f_4[iParam0], iVar0);
			}
			Stack.Push(Local_213.f_473.f_18.f_9 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_473.f_18.f_9);
			if (StackVal && StackVal)
			{
				__LIB_13__::func_350(&(Local_317.f_4[iParam0]), 0);
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
			if (__LIB_13__::func_508(iParam0, 1))
			{
				func_936(Local_317.f_4[iParam0], 100, 5000f, 1137180672);
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
	if (__LIB_13__::func_495())
	{
		return 0;
	}
	if (!__LIB_13__::func_500(iParam0))
	{
		return 0;
	}
	if (__LIB_13__::func_509(1))
	{
		if (iParam0 == Local_317.f_1)
		{
			return 0;
		}
	}
	if (func_415(iLocal_328, 2))
	{
		if (!__LIB_13__::func_508(iParam0, 0))
		{
			return 0;
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
		{
			return 0;
		}
	}
	else if (__LIB_13__::func_508(iParam0, 0))
	{
		return 0;
	}
	if (Local_213.f_473.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18);
		return StackVal;
	}
	if (__LIB_13__::func_508(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1792()//Position - 0xAF178
{
	if (func_1793())
	{
		__LIB_13__::func_468(11);
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
		if (__LIB_13__::func_887())
		{
			return func_1797(bLocal_324);
		}
		return func_1794(bLocal_324);
	}
	return __LIB_13__::func_466() == 3;
}

int func_1794(int iParam0)//Position - 0xAF1D3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
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
	if (__LIB_13__::func_258(iParam0, 1) && !__LIB_13__::func_445(21))
	{
		return func_1796(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__::func_191(iParam0));
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
	while (iVar0 < __LIB_13__::func_440())
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
	__LIB_0__::func_371();
	if (Local_213.f_3.f_1 != 0)
	{
		Call_Loc(Local_213.f_3.f_1);
	}
	func_873();
	__LIB_13__::func_597();
	func_2286();
	func_2255();
	func_2183();
	func_2160();
	func_2140();
	func_2086();
	func_2049();
	__LIB_0__::func_371();
	func_2028();
	func_1742();
	func_2019();
	func_1900();
	__LIB_21__::func_152();
	func_1886();
	__LIB_39__::func_973();
	__LIB_21__::func_259();
	func_1072();
	func_1847();
	func_1840();
	func_1835();
	func_1810();
	func_1809();
	__LIB_21__::func_257();
	__LIB_13__::func_521();
	func_1800();
}

void func_1800()//Position - 0xAF352
{
	int iVar0;
	if (func_991() == -1)
	{
		__LIB_13__::func_520(0);
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
				__LIB_13__::func_520(Local_218[func_991() /*21*/].f_1[iVar0 /*3*/]);
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
		if (Global_2815059.f_6777 && __LIB_0__::func_684(Local_334.f_0) == 0)
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
	if (!__LIB_13__::func_445(31))
	{
		return;
	}
	if (__LIB_21__::func_105(bLocal_324))
	{
		__LIB_13__::func_522(func_1834());
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
					func_1130(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1130(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1813(1, 2);
		}
	}
}

void func_1813(int iParam0, int iParam1)//Position - 0xAFC7F
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (GRAPHICS::GET_USINGSEETHROUGH())
			{
				GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(Global_1930707);
				Global_1930707 = -1f;
				GRAPHICS::SET_SEETHROUGH(false);
				bVar2 = true;
			}
			GRAPHICS::SET_NIGHTVISION(bVar0);
			MISC::SET_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 0);
		}
		else
		{
			if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
			{
				GRAPHICS::SET_NIGHTVISION(false);
				bVar2 = true;
			}
			GRAPHICS::SET_SEETHROUGH(bVar0);
			Global_1930707 = GRAPHICS::SEETHROUGH_GET_MAX_THICKNESS();
			GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(0.5f);
			MISC::SET_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1930708 == -1)
			{
				Global_1930708 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1930708 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1930708))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "On", "GTAO_Vision_Modes_SoundSet", false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Switch", "GTAO_Vision_Modes_SoundSet", false);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "On", "GTAO_Vision_Modes_SoundSet", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Switch", "GTAO_Vision_Modes_SoundSet", true);
					}
				}
			}
		}
	}
	else
	{
		if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
		{
			GRAPHICS::SET_NIGHTVISION(bVar0);
			MISC::CLEAR_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 0);
		}
		if (GRAPHICS::GET_USINGSEETHROUGH())
		{
			GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(Global_1930707);
			Global_1930707 = -1f;
			GRAPHICS::SET_SEETHROUGH(bVar0);
			MISC::CLEAR_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1930708 == -1)
			{
				Global_1930708 = AUDIO::GET_SOUND_ID();
			}
			if (!Global_1930708 == -1 && AUDIO::HAS_SOUND_FINISHED(Global_1930708))
			{
				if (iParam1 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Off", "GTAO_Vision_Modes_SoundSet", false);
				}
				else if (bVar1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(Global_1930708, "Off", "GTAO_Vision_Modes_SoundSet", true);
				}
			}
		}
	}
	__LIB_13__::func_523(!bVar0);
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
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			__LIB_13__::func_526(iParam0);
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
					if (__LIB_13__::func_525(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_1260(iParam0, 7, -1), -1))
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

int func_1834()//Position - 0xB8E0E
{
	if (Local_213.f_15.f_3 != 0)
	{
		Call_Loc(Local_213.f_15.f_3);
		return StackVal;
	}
	return func_913(bLocal_324, 1);
}

void func_1835()//Position - 0xB8E34
{
	if (__LIB_13__::func_482(55))
	{
		return;
	}
	if (!__LIB_13__::func_912())
	{
		return;
	}
	if (Local_213.f_15.f_18.f_2 == 0)
	{
		return;
	}
	if (Local_213.f_15.f_18.f_3 == 0)
	{
		return;
	}
	Stack.Push(iLocal_326);
	Call_Loc(Local_213.f_15.f_18.f_2);
	if (WEAPON::HAS_PED_GOT_WEAPON(StackVal, StackVal, false))
	{
		__LIB_13__::func_468(78);
	}
	Stack.Push(iLocal_326);
	Call_Loc(Local_213.f_15.f_18.f_2);
	Call_Loc(Local_213.f_15.f_18.f_3);
	WEAPON::GIVE_WEAPON_TO_PED(StackVal, StackVal, StackVal, __LIB_13__::func_521(), __LIB_13__::func_520());
	if (Local_213.f_15.f_18.f_1 != 0)
	{
		Call_Loc(Local_213.f_15.f_18.f_1);
		func_1836(StackVal, 0);
	}
	__LIB_13__::func_468(55);
}

int func_1836(char* sParam0, bool bParam1)//Position - 0xB8ED4
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_589(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_1840()//Position - 0xB8F76
{
	if (__LIB_13__::func_913())
	{
		if (iLocal_345 == -1)
		{
			iLocal_345 = __LIB_1__::func_556(2048, -1, 0);
		}
		if (!__LIB_13__::func_482(60))
		{
			if (__LIB_13__::func_527(iLocal_326, 3, -1))
			{
				__LIB_13__::func_468(61);
			}
			if (__LIB_1__::func_556(2048, -1, 0) < __LIB_13__::func_522())
			{
				__LIB_6__::func_981(2048, __LIB_13__::func_522(), -1);
			}
			MISC::SET_BIT(&(Global_2815059.f_4660), 22);
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_324, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_326, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_326, false);
			Global_1957702 = 1;
			__LIB_13__::func_468(60);
		}
		else if (__LIB_1__::func_556(2048, -1, 0) > 0 && PED::GET_PED_DIES_IN_WATER(iLocal_326))
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_324, 100f);
			PED::SET_PED_DIES_IN_WATER(iLocal_326, false);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_326, false);
			Global_1957702 = 1;
		}
		if (!__LIB_13__::func_527(iLocal_326, 3, -1))
		{
			func_1843(0);
			func_1823(iLocal_326, 3, -1);
			__LIB_13__::func_289(1);
		}
	}
	else
	{
		func_1841();
	}
}

void func_1841()//Position - 0xB906B
{
	if (__LIB_13__::func_482(60))
	{
		if (__LIB_13__::func_527(iLocal_326, 3, -1))
		{
			if (!__LIB_13__::func_482(61))
			{
				func_1812(iLocal_326, 3, -1, -1);
			}
		}
		PED::SET_PED_DIES_IN_WATER(iLocal_326, true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(iLocal_326, true);
		PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(bLocal_324, 100f);
		MISC::SET_BIT(&(Global_2815059.f_4660), 22);
		__LIB_1__::func_597(2048, iLocal_345, -1, 1, 0);
		__LIB_13__::func_289(0);
		__LIB_13__::func_475(60);
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
	__LIB_13__::func_290(iLocal_326);
}

void func_1847()//Position - 0xB9230
{
	if (Local_213.f_15.f_13 == 0)
	{
		return;
	}
	if (!__LIB_13__::func_482(47))
	{
		if (!__LIB_13__::func_482(56))
		{
			Call_Loc(Local_213.f_15.f_13);
			if (StackVal)
			{
				__LIB_13__::func_468(56);
			}
		}
		if (__LIB_13__::func_482(56))
		{
			if (__LIB_26__::func_838() && func_1852())
			{
				__LIB_13__::func_468(47);
				__LIB_13__::func_475(56);
				if (__LIB_13__::func_524())
				{
					__LIB_1__::func_114(__LIB_4__::func_335(iLocal_330, 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				}
				if (__LIB_13__::func_523())
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
			__LIB_13__::func_475(47);
			__LIB_13__::func_475(56);
		}
	}
}

int func_1852()//Position - 0xB9407
{
	if (Local_213.f_15.f_13.f_3 != 0)
	{
		Stack.Push(&uLocal_359);
		Call_Loc(Local_213.f_15.f_13.f_3);
		return __LIB_2__::func_47(StackVal, StackVal, 0);
	}
	return 1;
}

void func_1886()//Position - 0xBBCB6
{
	int iVar0;
	if (__LIB_9__::func_294(bLocal_324))
	{
		return;
	}
	if (__LIB_13__::func_466() != 0)
	{
		return;
	}
	if (!bLocal_321)
	{
		return;
	}
	if (__LIB_13__::func_482(25))
	{
		__LIB_36__::func_208();
	}
	if (__LIB_21__::func_151(0))
	{
		__LIB_36__::func_208();
		if (__LIB_21__::func_105(bLocal_324))
		{
			return;
		}
	}
	if (func_1000(bLocal_324, 0, 1, 0))
	{
		__LIB_36__::func_208();
		if (__LIB_21__::func_105(bLocal_324))
		{
			return;
		}
	}
	iVar0 = 0;
	if (__LIB_13__::func_533(__LIB_13__::func_294()))
	{
		func_698(3);
	}
	else if (!__LIB_13__::func_533(__LIB_13__::func_293()))
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
	if (__LIB_0__::func_1(__LIB_13__::func_361()))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			__LIB_36__::func_208();
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_1889()//Position - 0xBBDB4
{
	if (!bLocal_332)
	{
		__LIB_13__::func_428();
		return;
	}
	if (!__LIB_21__::func_147())
	{
		return;
	}
	if (!func_415(iLocal_328, 5))
	{
		__LIB_0__::func_151(__LIB_13__::func_361(), -1);
		func_698(5);
	}
}

void func_1900()//Position - 0xBBF7E
{
	if (__LIB_13__::func_482(10) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_196.f_104)))
	{
		func_1901(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, &(Local_196.f_104));
	}
}

void func_1901(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xBBFC0
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
	if (__LIB_26__::func_819(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_32__::func_909() || iParam2 == 28)
	{
		if (func_1971(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_32__::func_422(), sParam7))
		{
			__LIB_1__::func_512(1);
			if ((!__LIB_1__::func_511() && !__LIB_1__::func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_509())
				{
					__LIB_6__::func_997();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_507(iParam1, 0, 0);
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
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__::func_978(bVar4, 0))
									{
										if (__LIB_21__::func_83(bVar4) || __LIB_9__::func_283(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_581(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_26__::func_808(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__::func_259(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_396(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_13__::func_808())
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_768(bVar4) && __LIB_26__::func_807(bVar4, iParam2, bVar3)) && __LIB_1__::func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_25__::func_941(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
								iVar6 = __LIB_35__::func_811(bVar4);
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
									if (!__LIB_13__::func_808())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__::func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_500(iParam5, 1, 0, 0), 16);
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
								iVar17 = __LIB_21__::func_114(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_13__::func_258(bVar4, 1) && iVar1[bVar10] != -1)
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
								if (__LIB_1__::func_499(iParam5))
								{
									__LIB_33__::func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_33__::func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_1__::func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_160();
							}
							if (__LIB_19__::func_768(bVar4))
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_25__::func_941(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
									iVar6 = __LIB_35__::func_811(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_21__::func_114(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_13__::func_258(bVar4, 1))
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
									__LIB_36__::func_233(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__::func_767(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_579(&(uParam3->f_21));
						__LIB_1__::func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_491(uParam3, iParam1);
							__LIB_1__::func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__::func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__::func_992(uParam3);
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
			__LIB_1__::func_492();
			__LIB_1__::func_508(0);
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

int func_1971(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0xBDD47
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = __LIB_1__::func_525(iParam1);
	fVar4 = __LIB_1__::func_524();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (__LIB_1__::func_383())
		{
			if (__LIB_1__::func_523() > 0 && Global_1836359)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!__LIB_26__::func_790())
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		__LIB_1__::func_586(iParam0, uParam2, 1);
		return 0;
	}
	if (!__LIB_0__::func_649(&(uParam2->f_19)))
	{
		if (__LIB_1__::func_523() == 1)
		{
			__LIB_1__::func_521(bVar3, iParam0, 0);
			__LIB_0__::func_580(&(uParam2->f_19), 0, 0);
			__LIB_1__::func_586(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (__LIB_0__::func_649(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (__LIB_2__::func_47(&(uParam2->f_19), 10000, 0) || (__LIB_1__::func_523() == 0 && !bParam5))
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				__LIB_1__::func_520();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					__LIB_1__::func_520();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (__LIB_1__::func_521(bVar3, iParam0, 0))
				{
					__LIB_1__::func_507(iParam0, 0, 0);
					sVar1 = __LIB_18__::func_271(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { __LIB_18__::func_270(iParam1) };
					if (bParam4)
					{
						__LIB_13__::func_535(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						__LIB_1__::func_515(iParam0, __LIB_6__::func_999(uParam2), __LIB_6__::func_998(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = __LIB_32__::func_419(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						__LIB_1__::func_514(iParam0, sVar6, __LIB_1__::func_584(), -1);
					}
					else if (__LIB_16__::func_405())
					{
						uParam2->f_34 = Global_1836358;
						__LIB_13__::func_535(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						uParam2->f_34 = Global_1836358;
						__LIB_13__::func_535(iParam0, sVar1, "", 0, iVar5, __LIB_1__::func_513(), 1);
					}
					else
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						__LIB_13__::func_535(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836357 = uParam3;
				Global_1836356 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836358)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_2019()//Position - 0xBF607
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	if (!__LIB_13__::func_536())
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
	iVar4 = SYSTEM::ROUND(((100f - fVar3) / __LIB_10__::func_897()));
	iVar1 = (__LIB_13__::func_473() - (iVar4 * __LIB_13__::func_535()));
	iVar2 = __LIB_36__::func_178(iVar0, __LIB_10__::func_897(), __LIB_13__::func_535());
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
	bVar3 = (PED::IS_PED_IN_FLYING_VEHICLE(iVar0) || __LIB_13__::func_360(iVar0));
	iVar1 = 0;
	while (iVar1 < Local_196.f_120)
	{
		bVar2 = false;
		Var7 = { __LIB_13__::func_446(iVar1) };
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
		if (((((((func_95(iVar1, 0) || func_95(iVar1, 1)) || func_95(iVar1, 2)) || func_95(iVar1, 6)) || func_95(iVar1, 7)) || func_95(iVar1, 8)) || func_95(iVar1, 9)) || func_95(iVar1, 5))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Var4, Var5, fVar6, false, true, 0))
			{
				Stack.Push(func_95(iVar1, 7));
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
				Stack.Push(func_95(iVar1, 0));
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					func_2043(iVar1, 1);
					bVar2 = true;
					if (!__LIB_13__::func_445(14))
					{
						__LIB_36__::func_208();
					}
				}
				Stack.Push(func_95(iVar1, 1));
				Stack.Push(iVar1);
				Stack.Push(1);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				Stack.Push((StackVal && StackVal));
				Stack.Push((func_95(iVar1, 2) && bVar3));
				Stack.Push(iVar1);
				Stack.Push(2);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal || (StackVal && StackVal))
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					if (!__LIB_13__::func_445(14))
					{
						__LIB_36__::func_208();
					}
				}
				Stack.Push(func_95(iVar1, 6));
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
				Stack.Push(func_95(iVar1, 8));
				Stack.Push(iVar1);
				Stack.Push(8);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					func_2038(iVar1);
				}
				Stack.Push(func_95(iVar1, 9));
				Stack.Push(iVar1);
				Stack.Push(9);
				Stack.Push(bVar3);
				Call_Loc(Local_213.f_453.f_1);
				if (StackVal && StackVal)
				{
					func_2046(iVar1, 1);
					bVar2 = true;
					__LIB_13__::func_468(46);
				}
				Stack.Push(func_95(iVar1, 5));
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
			if (func_95(iVar1, 1) || func_95(iVar1, 2))
			{
				if (__LIB_0__::func_109(iVar1))
				{
					func_2029(iVar1, bVar2, bVar3);
				}
			}
		}
		if (func_95(iVar1, 3))
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
		if (!__LIB_0__::func_649(&(Local_365.f_72.f_4[iParam0 /*4*/])))
		{
			__LIB_0__::func_580(&(Local_365.f_72.f_4[iParam0 /*4*/]), 0, 0);
		}
		else
		{
			Stack.Push(&(Local_365.f_72.f_4[iParam0 /*4*/]));
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_453);
			if (__LIB_2__::func_47(StackVal, StackVal, 0))
			{
				func_2043(iParam0, 1);
			}
		}
	}
	else
	{
		__LIB_0__::func_579(&(Local_365.f_72.f_4[iParam0 /*4*/]));
	}
}

bool func_2030(int iParam0)//Position - 0xBFC5A
{
	return __LIB_2__::func_319(&(Local_365.f_72), iParam0);
}

int func_2032()//Position - 0xBFC8C
{
	int iVar0;
	iVar0 = func_2036();
	if (iVar0 != -1)
	{
		__LIB_6__::func_834(NETWORK::NET_TO_PED(Local_365.f_22[iVar0 /*24*/]), __LIB_13__::func_364(iVar0), 35);
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
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_364(iVar0)))
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

void func_2038(int iParam0)//Position - 0xBFF81
{
	if (func_95(iParam0, 10))
	{
		if (bLocal_321)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_326, 0, 0);
		}
	}
	else if (__LIB_21__::func_261())
	{
	}
}

void func_2041(int iParam0)//Position - 0xC003A
{
	int iVar0;
	Stack.Push(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2));
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_453);
	if (!__LIB_2__::func_47(StackVal, StackVal, 0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_453);
		iVar0 = (StackVal - __LIB_1__::func_295(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2), 0, 0));
		if (iVar0 <= 1000)
		{
			__LIB_6__::func_352(&(uLocal_315[iParam0]));
			if (__LIB_13__::func_365(&(uLocal_315[iParam0]), "VULKAN_LOCK_ON_RED", 0, 1))
			{
			}
		}
		else if (__LIB_13__::func_365(&(uLocal_315[iParam0]), "VULKAN_LOCK_ON_AMBER", 0, 1))
		{
		}
	}
	else if (func_95(iParam0, 10))
	{
		if (bLocal_321)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_326, 0, 0);
		}
	}
	else if (__LIB_21__::func_261())
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
		if (!__LIB_2__::func_319(&(Local_372[iLocal_327 /*35*/].f_24), iParam0))
		{
			__LIB_4__::func_745(&(Local_372[iLocal_327 /*35*/].f_24), iParam0);
		}
	}
	else if (__LIB_2__::func_319(&(Local_372[iLocal_327 /*35*/].f_24), iParam0))
	{
		__LIB_4__::func_743(&(Local_372[iLocal_327 /*35*/].f_24), iParam0);
	}
}

void func_2046(int iParam0, bool bParam1)//Position - 0xC01BF
{
	if (bParam1)
	{
		if (!__LIB_2__::func_319(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0))
		{
			__LIB_4__::func_745(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0);
		}
	}
	else
	{
		if (__LIB_2__::func_319(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0))
		{
			__LIB_4__::func_743(&(Local_372[iLocal_327 /*35*/].f_24.f_2), iParam0);
		}
		if (func_95(iParam0, 6))
		{
			if (uLocal_315[iParam0] != -1)
			{
				__LIB_6__::func_352(&(uLocal_315[iParam0]));
			}
			if (__LIB_0__::func_649(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2)))
			{
				__LIB_0__::func_579(&(Local_372[iLocal_327 /*35*/].f_24.f_4[iParam0 /*4*/].f_2));
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
		__LIB_13__::func_540();
		return;
	}
	if (__LIB_0__::func_114())
	{
		func_2050(__LIB_2__::func_641(), 0);
	}
	else if (func_999())
	{
		func_2050("BBOT_LOSECOPS" /* GXT: Lose the Cops. */, 0);
	}
	else if (func_991() != -1)
	{
		Call_Loc(Local_218[func_991() /*21*/].f_20);
	}
}

void func_2050(char* sParam0, bool bParam1)//Position - 0xC0310
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (__LIB_13__::func_538(sParam0))
	{
		return;
	}
	__LIB_18__::func_388();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	__LIB_1__::func_270();
	__LIB_1__::func_269(bParam1);
	__LIB_1__::func_268();
}

void func_2058()//Position - 0xC0472
{
	__LIB_13__::func_540();
	func_2059(1, 1, 1);
}

void func_2059(bool bParam0, bool bParam1, bool bParam2)//Position - 0xC0485
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (bParam2)
	{
		__LIB_13__::func_916();
	}
	__LIB_13__::func_543();
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = 0;
			while (iVar0 < __LIB_13__::func_440())
			{
				if (uLocal_356[iVar0] != __LIB_0__::func_160())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uLocal_356[iVar0]))
					{
						bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(uLocal_356[iVar0]);
						bVar2 = __LIB_1__::func_264(bVar1, 1, 1);
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
	uVar0 = __LIB_13__::func_518(bParam0);
	if (bParam0 != __LIB_0__::func_160())
	{
		if (bParam1)
		{
			if (BitTest(Local_290.f_8, bParam0) || iParam2)
			{
				if (__LIB_13__::func_296(bParam0))
				{
					__LIB_21__::func_85(bParam0, __LIB_1__::func_48(__LIB_36__::func_172(bLocal_324, -2, 0, 0, 0)), 0, 0);
				}
				if (__LIB_13__::func_369(bParam0))
				{
					__LIB_2__::func_314(bParam0, 0);
				}
				if (__LIB_13__::func_295(bParam0))
				{
					__LIB_20__::func_361(bParam0, 0, 1, 0);
				}
				if (__LIB_13__::func_368(bParam0))
				{
					if (__LIB_21__::func_84(bParam0))
					{
						__LIB_21__::func_117(bParam0, 0, 1);
					}
				}
				if (__LIB_13__::func_367(bParam0))
				{
					__LIB_19__::func_770(bParam0, func_996(uVar0), 0, 0);
				}
				if (__LIB_13__::func_366(bParam0))
				{
					__LIB_21__::func_116(bParam0, 1f, 0, 0);
				}
				if (__LIB_13__::func_296(bParam0))
				{
					__LIB_21__::func_85(bParam0, 1, 0, 0);
				}
				if (__LIB_21__::func_115(bParam0))
				{
					__LIB_26__::func_791(bParam0, 0, 0);
				}
				MISC::CLEAR_BIT(&(Local_290.f_8), bParam0);
			}
		}
	}
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
	if (!__LIB_13__::func_482(7))
	{
		return 0;
	}
	if (__LIB_13__::func_482(8))
	{
		return 0;
	}
	if (!__LIB_13__::func_482(31))
	{
		return 0;
	}
	if (!__LIB_13__::func_466() == 0)
	{
		return 0;
	}
	if (__LIB_13__::func_544())
	{
		return 0;
	}
	return 1;
}

void func_2086()//Position - 0xC0AB0
{
	func_2128();
	func_2123();
	func_2116();
	if (bLocal_333)
	{
		func_2095();
		func_2091();
		__LIB_13__::func_545();
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
				Local_290.f_11 = __LIB_13__::func_518(bLocal_324);
				if (!func_562(iVar0, iLocal_328, 6) && !func_439(iVar0, 29))
				{
				}
			}
		}
		else if (Local_290[iVar0 /*7*/].f_4 == bLocal_324)
		{
			if (!func_562(iVar0, iLocal_328, 6) && !func_439(iVar0, 4))
			{
				if (__LIB_13__::func_917(iVar0))
				{
					Local_290.f_11 = iVar0;
					__LIB_21__::func_118(Local_334.f_0, bLocal_324, __LIB_0__::func_582(), 0, __LIB_13__::func_445(20), -1, 0);
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
	__LIB_13__::func_547();
	func_2107();
	__LIB_32__::func_927();
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
		if (!__LIB_13__::func_355())
		{
			if (!__LIB_13__::func_482(54))
			{
				__LIB_11__::func_53();
				__LIB_13__::func_297(1, 2147483647, 1);
				__LIB_13__::func_468(54);
				__LIB_0__::func_151("BBH_VISWARN" /* GXT: WARNING: You are visible ~HUD_COLOUR_RED~~BLIP_SIGHTSEER~~s~ to all players in session. */, -1);
			}
		}
		else if (__LIB_13__::func_482(54))
		{
			__LIB_11__::func_54();
			__LIB_13__::func_297(0, -1, 0);
			__LIB_13__::func_475(54);
		}
	}
	if (__LIB_0__::func_649(&(Local_365.f_2.f_18)))
	{
		if (!__LIB_2__::func_47(&(Local_365.f_2.f_18), __LIB_21__::func_149(), 0))
		{
			iVar0 = (__LIB_21__::func_149() - __LIB_1__::func_295(&(Local_365.f_2.f_18), 0, 0));
			if (iVar0 <= 0)
			{
				return;
			}
			iVar1 = 6;
			if (iVar0 > 5000)
			{
				iVar1 = 1;
			}
			__LIB_6__::func_929(iVar0, "GR_GLBPNG" /* GXT: GLOBAL SIGNAL */, 0, 0, -1, 0, 6, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
		}
	}
}

void func_2116()//Position - 0xC1717
{
	if (__LIB_13__::func_546())
	{
		if (__LIB_1__::func_523() != 2 && MISC::GET_PROFILE_SETTING(221) != 1)
		{
			HUD::SET_RADAR_ZOOM_PRECISE(__LIB_13__::func_550());
			__LIB_11__::func_35(1);
			if (__LIB_13__::func_544())
			{
				__LIB_21__::func_154(1);
			}
			__LIB_13__::func_468(41);
		}
	}
	else if (__LIB_13__::func_482(41))
	{
		HUD::SET_RADAR_ZOOM_PRECISE(0f);
		__LIB_11__::func_35(0);
		if (__LIB_13__::func_544())
		{
			__LIB_21__::func_154(0);
		}
		__LIB_13__::func_475(41);
	}
}

void func_2123()//Position - 0xC1853
{
	if (func_2127())
	{
		__LIB_21__::func_155(1);
	}
	else
	{
		__LIB_21__::func_155(0);
	}
}

int func_2127()//Position - 0xC1A25
{
	if ((((bLocal_333 && __LIB_13__::func_445(18)) && func_913(bLocal_324, 1)) && func_445(__LIB_13__::func_518(bLocal_324))) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
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
		if (!__LIB_13__::func_482(9))
		{
			if (__LIB_13__::func_552())
			{
				if (__LIB_21__::func_156())
				{
					Stack.Push(&uLocal_357);
					Call_Loc(Local_213.f_47.f_1);
					if (__LIB_2__::func_47(StackVal, StackVal, 0) && !__LIB_13__::func_300())
					{
						func_2131();
						__LIB_13__::func_468(9);
					}
				}
			}
			else
			{
				__LIB_13__::func_468(9);
				__LIB_13__::func_468(10);
			}
		}
		else if (!__LIB_13__::func_482(10))
		{
			if (__LIB_1__::func_480(86))
			{
				__LIB_13__::func_468(10);
			}
		}
		else if (!__LIB_1__::func_480(86))
		{
			__LIB_13__::func_468(69);
		}
	}
}

void func_2131()//Position - 0xC1B1E
{
	__LIB_41__::func_21(86, __LIB_2__::func_641(), func_2133(), func_785(), -1, -1, -1082130432, 0, 1, 2, 128);
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
	func_2154();
	__LIB_26__::func_840();
	__LIB_26__::func_912();
	func_2145();
	__LIB_21__::func_265();
	func_2143();
	func_2142();
	__LIB_21__::func_264();
}

void func_2142()//Position - 0xC1C98
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_13__::func_444() <= 0)
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
	if (!__LIB_2__::func_47(&(Local_304.f_5), 1000, 0))
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
				if (!__LIB_1__::func_264(iVar2, 1, 1) || iVar2 == PLAYER::PLAYER_ID())
				{
				}
				else
				{
					iVar3 = PLAYER::GET_PLAYER_WANTED_LEVEL(iVar2);
					if (iVar3 > 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_265(iVar2), PLAYER::GET_PLAYER_WANTED_CENTRE_POSITION(iVar2), true) < PLAYER::GET_WANTED_LEVEL_RADIUS(iVar3))
					{
						__LIB_13__::func_910(PLAYER::PLAYER_ID(), __LIB_13__::func_444(), 0, 0);
					}
					else
					{
						iVar0++;
					}
					__LIB_0__::func_579(&(Local_304.f_5));
				}
void func_2143()//Position - 0xC1D8F
{
	if (Local_213.f_64.f_8 == 0)
	{
		return;
	}
	if (!__LIB_1__::func_264(bLocal_324, 1, 1))
	{
		if (__LIB_13__::func_482(67))
		{
			__LIB_13__::func_468(66);
		}
		return;
	}
	if (__LIB_2__::func_214(bLocal_324, 0, 0))
	{
		return;
	}
	Call_Loc(Local_213.f_64.f_8);
	if (StackVal)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) > 0)
		{
			__LIB_13__::func_468(67);
		}
		else if (__LIB_13__::func_482(66))
		{
			__LIB_13__::func_910(bLocal_324, __LIB_13__::func_444(), 0, 0);
			__LIB_13__::func_475(66);
		}
		else
		{
			__LIB_13__::func_475(67);
		}
	}
	else
	{
		__LIB_13__::func_475(67);
	}
}

void func_2145()//Position - 0xC1E7B
{
	if (bLocal_332)
	{
		if (!__LIB_13__::func_482(13))
		{
			if (__LIB_13__::func_547())
			{
				if (bLocal_321 && Global_2689235[bLocal_324 /*453*/].f_230 == 99)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) == 0)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&(Global_1943920.f_3), 0);
						__LIB_13__::func_468(13);
					}
					if (func_415(iLocal_328, 2) || func_415(iLocal_328, 8))
					{
						PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
						if (!__LIB_13__::func_482(80))
						{
							PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
						}
						Call_Loc(Local_213.f_64.f_15);
						if (StackVal)
						{
							__LIB_13__::func_468(80);
						}
					}
					if (__LIB_2__::func_59(3))
					{
						PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), true);
					}
				}
				else
				{
					Call_Loc(Local_213.f_64.f_2);
					if (!StackVal)
					{
						__LIB_13__::func_468(14);
					}
				}
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() != __LIB_13__::func_444())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(__LIB_13__::func_444());
			}
		}
		else
		{
			if (!__LIB_13__::func_547())
			{
				__LIB_13__::func_475(13);
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) > 0)
			{
				__LIB_13__::func_475(13);
				return;
			}
			if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
			}
		}
	}
}

void func_2154()//Position - 0xC2189
{
	if (__LIB_13__::func_482(15))
	{
		if (!__LIB_13__::func_556(Local_304.f_2))
		{
			if (__LIB_13__::func_554(Local_304.f_0, Local_304.f_1))
			{
				if (__LIB_0__::func_684(Local_334.f_0) != 2)
				{
					if (Local_304.f_0 > __LIB_13__::func_444())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(Local_304.f_0);
					}
					else if (PLAYER::GET_MAX_WANTED_LEVEL() != __LIB_13__::func_444())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(__LIB_13__::func_444());
						__LIB_13__::func_475(13);
					}
				}
				if (BitTest(Global_1853348[bLocal_324 /*834*/].f_833, 17))
				{
					__LIB_10__::func_885();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_324, Local_304.f_0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(bLocal_324, false);
				Stack.Push(Local_213.f_64.f_12 != 0);
				Call_Loc(Local_213.f_64.f_12);
				if (StackVal && StackVal)
				{
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(104 /*EVENT_SHOCKING_PED_SHOT*/, iLocal_326, -1f);
					PED::TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(iLocal_326, Local_329, 20f, joaat("ARMY"));
				}
				__LIB_13__::func_550();
				__LIB_13__::func_475(15);
			}
			else
			{
				__LIB_13__::func_550();
				__LIB_13__::func_475(15);
			}
		}
	}
}

void func_2160()//Position - 0xC242E
{
	func_2182();
	__LIB_13__::func_557();
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
	fVar0 = __LIB_13__::func_558();
	__LIB_13__::func_357(func_897(), (fVar0 * 1.8f), (fVar0 * 1.8f), __LIB_13__::func_301(), 12, __LIB_13__::func_372());
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
	if (__LIB_0__::func_306(iVar0, 0) != -1)
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
		if (__LIB_0__::func_160() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_310.f_1[func_2169() /*4*/].f_1, __LIB_0__::func_160());
		}
		__LIB_6__::func_958(&(Local_310.f_1[func_2169() /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_310.f_1[func_2169() /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_310.f_1[func_2169() /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_310.f_1[func_2169() /*4*/].f_1, func_2167());
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_2__::func_641()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_310.f_1[func_2169() /*4*/].f_1, __LIB_2__::func_641());
		}
		if (Local_310.f_1[func_2169() /*4*/].f_2 && !Local_310.f_1[func_2169() /*4*/].f_3)
		{
			__LIB_13__::func_350(&(Local_310.f_1[func_2169() /*4*/].f_1), 0);
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

void func_2174(int iParam0)//Position - 0xC2925
{
	float fVar0;
	fVar0 = __LIB_13__::func_558();
	__LIB_13__::func_357(__LIB_13__::func_562(Local_310.f_1[iParam0 /*4*/]), (fVar0 * 1.8f), (fVar0 * 1.8f), 2.5f, 12, 0.7f);
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
		if (!__LIB_0__::func_86(__LIB_21__::func_107(func_903())))
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
		if (__LIB_0__::func_86(__LIB_13__::func_562(Local_310.f_1[iParam0 /*4*/])))
		{
			return 0;
		}
		Local_310.f_1[iParam0 /*4*/].f_1 = HUD::ADD_BLIP_FOR_COORD(__LIB_13__::func_562(Local_310.f_1[iParam0 /*4*/]));
		if (__LIB_0__::func_160() != -1)
		{
			HUD::SET_BLIP_SPRITE(Local_310.f_1[iParam0 /*4*/].f_1, __LIB_0__::func_160());
		}
		__LIB_6__::func_958(&(Local_310.f_1[iParam0 /*4*/].f_1), 12);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(Local_310.f_1[iParam0 /*4*/].f_1, 1);
		HUD::SET_BLIP_PRIORITY(Local_310.f_1[iParam0 /*4*/].f_1, 12);
		HUD::SET_BLIP_ROUTE(Local_310.f_1[iParam0 /*4*/].f_1, func_2177(iParam0));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_2__::func_641()))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_310.f_1[iParam0 /*4*/].f_1, __LIB_2__::func_641());
		}
		if (Local_310.f_1[iParam0 /*4*/].f_2 && !Local_310.f_1[iParam0 /*4*/].f_3)
		{
			__LIB_13__::func_350(&(Local_310.f_1[iParam0 /*4*/].f_1), 0);
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
	fVar6 = __LIB_13__::func_574();
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
					__LIB_13__::func_573(iVar7, 1);
				}
				else
				{
					__LIB_13__::func_572(iVar7, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					__LIB_13__::func_573(iVar7, 0);
				}
				else
				{
					__LIB_13__::func_572(iVar7, 0);
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
							__LIB_13__::func_567();
						}
						func_2220(iVar7, iVar0);
						__LIB_13__::func_573(iVar7, iVar0);
						__LIB_13__::func_572(iVar7, iVar0, 1);
						if (!__LIB_21__::func_265(iVar7, 0))
						{
							func_2209(iVar7, iVar0, bVar5);
							__LIB_13__::func_569(iVar7, iVar0, &bVar4);
							func_2199(iVar7, iVar0, fVar6);
							__LIB_13__::func_567(iVar7, iVar0);
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
				if (!__LIB_13__::func_445(7))
				{
					func_2184(iVar7, 1);
				}
				break;
			case 5:
				if (bVar2)
				{
					if (__LIB_13__::func_441(iVar7, 12) && __LIB_6__::func_924(Local_365.f_22[iVar7 /*24*/]))
					{
						__LIB_4__::func_509(&(Local_365.f_22[iVar7 /*24*/]));
					}
				}
				break;
		}
		iVar7++;
	}
	if (!bVar4)
	{
		if (__LIB_0__::func_649(&(Local_219.f_20)))
		{
			__LIB_0__::func_579(&(Local_219.f_20));
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
					__LIB_13__::func_572(iVar7, iVar0, 0);
				}
			}
			break;
	}
}

void func_2184(int iParam0, int iParam1)//Position - 0xC2EAC
{
	int iVar0;
	if (iParam1 != __LIB_13__::func_462())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_196.f_19)
	{
		if (((func_447(iVar0) && iParam0 == func_420(iVar0)) && !func_439(iVar0, 4)) && !func_562(iVar0, iLocal_328, 6))
		{
			__LIB_13__::func_493(iVar0, 9);
			__LIB_13__::func_493(iVar0, 47);
		}
		iVar0++;
	}
}

void func_2185(int iParam0, int iParam1)//Position - 0xC2F19
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_13__::func_441(iParam0, 13))
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
	if (!__LIB_13__::func_445(28))
	{
		if (__LIB_10__::func_952(iParam1))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) < __LIB_21__::func_143() || PLAYER::ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(bLocal_324))
			{
				Call_Loc(Local_213.f_64.f_14);
				iVar1 = StackVal;
				__LIB_13__::func_910(bLocal_324, __LIB_21__::func_143(), 1, iVar1);
			}
		}
	}
}

void func_2187(int iParam0, int iParam1)//Position - 0xC2FF6
{
	if (!__LIB_13__::func_566(iParam0))
	{
		return;
	}
	if (func_64(iParam0, 1) && !__LIB_13__::func_557(iParam0))
	{
		return;
	}
	if (!func_2194(iParam0, iLocal_328, 1))
	{
		if (__LIB_13__::func_554(iParam1, __LIB_13__::func_556(iParam0), __LIB_13__::func_555(iParam0)))
		{
			if (__LIB_2__::func_47(&(Local_219[iParam0 /*19*/].f_17), __LIB_13__::func_565(iParam0), 0))
			{
				__LIB_13__::func_564(iParam0, 1);
				if (Local_213.f_156.f_132.f_1.f_5 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(1);
					Call_Loc(Local_213.f_156.f_132.f_1.f_5);
				}
			}
		}
		else if (__LIB_0__::func_649(&(Local_219[iParam0 /*19*/].f_17)))
		{
			__LIB_0__::func_579(&(Local_219[iParam0 /*19*/].f_17));
		}
	}
	else if (!__LIB_13__::func_554(iParam1, __LIB_13__::func_556(iParam0), __LIB_13__::func_555(iParam0)))
	{
		__LIB_13__::func_563(iParam0, 1);
		if (Local_213.f_156.f_132.f_1.f_5 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(0);
			Call_Loc(Local_213.f_156.f_132.f_1.f_5);
		}
	}
}

bool func_2194(int iParam0, int iParam1, int iParam2)//Position - 0xC31E1
{
	return __LIB_0__::func_287(&(Local_372[iParam1 /*35*/].f_7[iParam0 /*2*/]), iParam2);
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
	if (__LIB_13__::func_568(iParam1, fParam2))
	{
		__LIB_13__::func_564(iParam0, 0);
	}
}

bool func_2201(int iParam0)//Position - 0xC332B
{
	return (func_64(iParam0, 16) && !func_64(iParam0, 0));
}

int func_2203(int iParam0)//Position - 0xC33DE
{
	bool bVar0;
	bVar0 = __LIB_13__::func_559();
	if (Local_213.f_156.f_183 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(bVar0);
		Call_Loc(Local_213.f_156.f_183);
		return StackVal;
	}
	if (__LIB_13__::func_570() && !bVar0)
	{
		return 8000;
	}
	return 1000;
}

int func_2206(int iParam0, int iParam1)//Position - 0xC345B
{
	if (bLocal_321)
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(iLocal_326))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iLocal_326, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iLocal_326, __LIB_13__::func_571(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
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
	if (__LIB_13__::func_441(iParam0, 8))
	{
		return 1;
	}
	if (__LIB_13__::func_445(30) && !func_64(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_2209(int iParam0, int iParam1, bool bParam2)//Position - 0xC352E
{
	if (!bParam2 || __LIB_13__::func_441(iParam0, 7))
	{
		return;
	}
	if (!__LIB_0__::func_649(&(Local_300[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*2*/])))
	{
		if (__LIB_13__::func_373(iParam0, iParam1))
		{
			__LIB_0__::func_580(&(Local_300[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), 0, 0);
		}
	}
	else if (func_2210(iParam0))
	{
		__LIB_13__::func_564(iParam0, 7);
	}
}

int func_2210(int iParam0)//Position - 0xC359A
{
	if (__LIB_2__::func_47(&(Local_300[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*2*/]), __LIB_13__::func_562(iParam0), 0))
	{
		if (!func_2211(__LIB_13__::func_561(iParam0), 1))
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

int func_2216(int iParam0)//Position - 0xC371D
{
	if (((((func_64(iParam0, 1) || func_64(iParam0, 0)) || func_64(iParam0, 14)) || func_64(iParam0, 12)) || func_64(iParam0, 11)) || func_64(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

void func_2220(int iParam0, int iParam1)//Position - 0xC3852
{
	if (func_2228(iParam0, iParam1))
	{
		func_2221(0, iParam0, iParam1, __LIB_13__::func_577(iParam0), __LIB_13__::func_576(iParam0));
	}
}

void func_2221(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xC387A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	HUD::GET_HUD_COLOUR(iParam3, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = __LIB_13__::func_564(iParam0, iParam1);
	fVar5 = __LIB_13__::func_575(iParam0, iParam1);
	switch (iParam0)
	{
		case 0:
		case 1:
			__LIB_10__::func_948(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, 0, 1, 0, fVar5);
			break;
		case 2:
			__LIB_10__::func_948(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, (Local_196.f_85.f_1[iParam1 /*12*/].f_8.f_1 > 170f && Local_196.f_85.f_1[iParam1 /*12*/].f_8.f_1 < 190f), 1, 0, fVar5);
			break;
	}
}

int func_2228(int iParam0, var uParam1)//Position - 0xC3AB9
{
	if ((__LIB_13__::func_441(iParam0, 0) && !__LIB_13__::func_566(iParam0, 0)) && !func_64(iParam0, 30))
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
	if (func_990() == 7 && __LIB_13__::func_445(36))
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
	if (__LIB_13__::func_586(iParam0, bParam2))
	{
		if (!BitTest(Local_219[iParam0 /*19*/].f_2.f_6, 2) && HUD::DOES_BLIP_EXIST(Local_219[iParam0 /*19*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_219[iParam0 /*19*/].f_2));
		}
		__LIB_7__::func_121(Local_365.f_22[iParam0 /*24*/], &(Local_219[iParam0 /*19*/].f_2), __LIB_13__::func_585(iParam0), 0, 0, 0, func_2248(iParam0), 1, -1, 0, 0);
	}
	else if ((bLocal_332 && !BitTest(Local_219[iParam0 /*19*/].f_2.f_6, 2)) && __LIB_13__::func_584(iParam0, bParam2))
	{
		iVar0 = __LIB_13__::func_578(iParam0);
		iVar1 = func_2242(iParam0);
		bVar2 = __LIB_13__::func_583(iParam0);
		if (!HUD::DOES_BLIP_EXIST(Local_219[iParam0 /*19*/].f_2))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
			{
				__LIB_0__::func_489(&(Local_219[iParam0 /*19*/].f_2));
			}
			Stack.Push(Local_213.f_156.f_140.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_140.f_14);
			bVar3 = (StackVal && StackVal);
			__LIB_13__::func_580(&(Local_219[iParam0 /*19*/].f_2), iParam1, iVar1, iVar0, func_2248(iParam0), __LIB_13__::func_582(iParam0), 0, bVar2, __LIB_13__::func_581(iParam0), bVar3);
			HUD::SET_BLIP_PRIORITY(Local_219[iParam0 /*19*/].f_2, __LIB_13__::func_579(iParam0));
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
				HUD::SET_BLIP_SCALE(Local_219[iParam0 /*19*/].f_2, __LIB_13__::func_582(iParam0));
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_219[iParam0 /*19*/].f_2, func_2248(iParam0));
				if (__LIB_13__::func_568(iParam0))
				{
					__LIB_13__::func_350(&(Local_219[iParam0 /*19*/].f_2), 0);
				}
			}
			if (__LIB_1__::func_48(iVar0) != HUD::GET_BLIP_COLOUR(Local_219[iParam0 /*19*/].f_2))
			{
				__LIB_6__::func_958(&(Local_219[iParam0 /*19*/].f_2), iVar0);
				HUD::SET_BLIP_SCALE(Local_219[iParam0 /*19*/].f_2, __LIB_13__::func_582(iParam0));
				if (__LIB_13__::func_568(iParam0))
				{
					__LIB_13__::func_350(&(Local_219[iParam0 /*19*/].f_2), 0);
				}
			}
			if (bVar2 != HUD::IS_BLIP_SHORT_RANGE(Local_219[iParam0 /*19*/].f_2))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_219[iParam0 /*19*/].f_2, bVar2);
			}
			if (__LIB_13__::func_924(iParam0, &iVar4, &fVar5, &fVar6))
			{
				func_936(Local_219[iParam0 /*19*/].f_2, iVar4, fVar5, fVar6);
			}
			Stack.Push(Local_213.f_156.f_140.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_140.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(Local_219[iParam0 /*19*/].f_2))
				{
					__LIB_13__::func_350(&(Local_219[iParam0 /*19*/].f_2), 0);
				}
			}
		}
	}
	else if (BitTest(Local_219[iParam0 /*19*/].f_2.f_6, 2))
	{
		__LIB_0__::func_489(&(Local_219[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_PED_HAVE_AI_BLIP(iParam1))
	{
		__LIB_0__::func_489(&(Local_219[iParam0 /*19*/].f_2));
	}
	else if (HUD::DOES_BLIP_EXIST(Local_219[iParam0 /*19*/].f_2))
	{
		HUD::REMOVE_BLIP(&(Local_219[iParam0 /*19*/].f_2));
	}
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
			if (func_64(iParam0, 20) && !__LIB_13__::func_445(36))
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
			if (__LIB_0__::func_160(iParam0) != -1)
			{
				return 280;
			}
			break;
	}
	return -1;
}

int func_2244()//Position - 0xC4216
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
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
	if (__LIB_13__::func_441(iParam0, 4))
	{
		return "PB_COP" /* GXT: Cop */;
	}
	if (__LIB_13__::func_441(iParam0, 3))
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
			switch (__LIB_13__::func_455(iVar3))
			{
				case 2:
					func_2264(iVar3, iVar0);
					if (!bVar2)
					{
						__LIB_13__::func_588(iVar3, iVar0);
						func_2257(iVar3, iVar0);
					}
					break;
				case 3:
					if (__LIB_13__::func_575(iVar3))
					{
						if (__LIB_6__::func_924(Local_365.f_56[iVar3 /*5*/]))
						{
							__LIB_4__::func_509(&(Local_365.f_56[iVar3 /*5*/]));
						}
					}
					else if (__LIB_13__::func_455(iVar3))
					{
						if (__LIB_6__::func_924(Local_365.f_56[iVar3 /*5*/]))
						{
							__LIB_1__::func_162(&(Local_365.f_56[iVar3 /*5*/]));
						}
					}
					break;
				}
		}
		iVar3++;
	}
}

void func_2257(int iParam0, int iParam1)//Position - 0xC47B3
{
	if (__LIB_13__::func_578(iParam0))
	{
		func_2221(2, iParam0, iParam1, __LIB_13__::func_577(iParam0), __LIB_13__::func_587(iParam0));
	}
}

void func_2262(int iParam0, int iParam1, int iParam2)//Position - 0xC4871
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_13__::func_445(8))
			{
				func_2221(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 1:
			if (__LIB_13__::func_445(10))
			{
				func_2221(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 2:
			if (__LIB_13__::func_445(9))
			{
				func_2221(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
	}
}

void func_2264(int iParam0, int iParam1)//Position - 0xC4909
{
	if (!func_2266(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_924(Local_365.f_56[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		func_2265(iParam0, 8);
	}
}

void func_2265(int iParam0, int iParam1)//Position - 0xC493D
{
	if (__LIB_1__::func_101(&(Local_372[iLocal_328 /*35*/].f_10[iParam0 /*2*/]), iParam1))
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
	return __LIB_0__::func_287(&(Local_372[iParam1 /*35*/].f_10[iParam0 /*2*/]), iParam2);
}

void func_2268(int iParam0, int iParam1)//Position - 0xC49B3
{
	float fVar0;
	if (!__LIB_13__::func_450(iParam0, 30))
	{
		return;
	}
	fVar0 = __LIB_13__::func_582(iParam0);
	if (fVar0 == -1f)
	{
		return;
	}
	if (!func_2267(iParam0, iLocal_328, 10))
	{
		if (__LIB_13__::func_579(iParam1, fVar0, __LIB_13__::func_581(iParam0), __LIB_13__::func_580(iParam0)))
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
	else if (!__LIB_13__::func_579(iParam1, fVar0, __LIB_13__::func_581(iParam0), __LIB_13__::func_580(iParam0)))
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
	if (__LIB_11__::func_631(&(Local_372[iLocal_328 /*35*/].f_10[iParam0 /*2*/]), iParam1))
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
		bVar3 = __LIB_13__::func_584(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_299[iParam0]))
		{
			Stack.Push(Local_213.f_407.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_407.f_14);
			bVar4 = (StackVal && StackVal);
			__LIB_13__::func_580(&(uLocal_299[iParam0]), iParam1, iVar1, iVar0, func_2276(iParam0), fVar2, 0, bVar3, __LIB_13__::func_583(iParam0), bVar4);
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
			if (__LIB_1__::func_48(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_299[iParam0]))
			{
				__LIB_6__::func_958(&(uLocal_299[iParam0]), iVar0);
			}
			if (__LIB_13__::func_450(iParam0, 23))
			{
				func_936(uLocal_299[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_213.f_407.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_407.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_299[iParam0]))
				{
					__LIB_13__::func_350(&(uLocal_299[iParam0]), 0);
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
	if (__LIB_13__::func_374(func_990()) && func_139(iParam0, 5))
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
	if (__LIB_13__::func_374(func_990()) && func_139(iParam0, 5))
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
	if ((func_990() == 7 && func_139(iParam0, 5)) && !__LIB_13__::func_445(36))
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
	if (__LIB_13__::func_374(func_990()) && func_139(iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_2282(int iParam0, int iParam1)//Position - 0xC4EA7
{
	if (!__LIB_13__::func_590(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_924(Local_365.f_56[iParam0 /*5*/]))
	{
		ENTITY::SET_ENTITY_PROOFS(iParam1, false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, true);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iParam1, true), __LIB_13__::func_589(iParam0), __LIB_13__::func_585(iParam0), true, false, 1f, false);
		func_2265(iParam0, 9);
	}
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
			bVar3 = __LIB_2__::func_63(Local_365.f_47[iVar0 /*8*/]);
			bVar4 = __LIB_1__::func_126(iLocal_326, iVar2);
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
							__LIB_13__::func_591(iVar0, iVar2);
							__LIB_13__::func_587(iVar0, iVar2);
							func_2291(iVar0, iVar2);
							if (__LIB_13__::func_927(iVar0, iVar2))
							{
								bVar7 = true;
							}
						}
					}
					break;
				case 5:
					if (!__LIB_13__::func_445(7))
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
		__LIB_13__::func_926(1);
	}
	else
	{
		__LIB_13__::func_926(0);
	}
	fLocal_352 = fLocal_351;
	fLocal_351 = fLocal_352;
}

void func_2288(int iParam0, int iParam1)//Position - 0xC521D
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
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
		if (__LIB_13__::func_460(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
		{
			NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Var0, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam1, 5f);
			__LIB_13__::func_375(iParam0, 1, Local_365.f_98);
		}
	}
}

void func_2291(int iParam0, int iParam1)//Position - 0xC5375
{
	if (!func_2336(iParam0, iLocal_328, 8))
	{
		if (__LIB_13__::func_456(iParam0, 9))
		{
			PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(iLocal_326, iParam1, 0, 1, -2);
		}
		func_2337(iParam0, 8);
	}
}

void func_2294(int iParam0, int iParam1)//Position - 0xC540D
{
	func_2221(1, iParam0, iParam1, __LIB_13__::func_593(iParam0), __LIB_13__::func_592(iParam0));
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
	if (__LIB_13__::func_594(iParam0))
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

void func_2302(int iParam0, int iParam1)//Position - 0xC55A9
{
	Stack.Push(!__LIB_13__::func_456(iParam0, 3));
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_213.f_352.f_31);
	if (StackVal || !StackVal)
	{
		return;
	}
	if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
	{
		__LIB_13__::func_928(iParam0, iParam1);
	}
}

void func_2304(int iParam0, int iParam1)//Position - 0xC5640
{
	struct<3> Var0;
	float fVar1;
	struct<31> Var2;
	if (!__LIB_13__::func_456(iParam0, 14) || !__LIB_26__::func_841(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
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
		Var2.f_0 = __LIB_1__::func_146();
		Var2.f_4 = __LIB_11__::func_638();
		Var2.f_1 = 1;
		Var2.f_12 = 1;
		Var2.f_13 = 0;
		Var2.f_5 = 1;
		if (__LIB_13__::func_460(ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0f, ENTITY::GET_ENTITY_MODEL(iParam1), 1, &Var0, &fVar1, &Var2))
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
		__LIB_13__::func_567();
	}
}

void func_2313(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xC5870
{
	if (!func_2314(iParam0, iParam2, bParam3))
	{
		return;
	}
	if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
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
	if ((!__LIB_13__::func_456(iParam0, 12) || func_147(iParam0, 11)) || func_2336(iParam0, iLocal_328, 7))
	{
		return;
	}
	if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iParam1))
	{
		if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
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
	if (__LIB_13__::func_456(iParam0, 20) || __LIB_13__::func_456(iParam0, 21))
	{
		func_698(29);
	}
}

void func_2317(int iParam0, int iParam1)//Position - 0xC59AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((!__LIB_13__::func_456(iParam0, 15) || func_147(iParam0, 3)) || func_2336(iParam0, iLocal_328, 3))
	{
		return;
	}
	iVar0 = -1;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Local_365.f_47[iVar0 /*8*/];
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1) && __LIB_2__::func_63(iVar1))
	{
		iVar2 = NETWORK::NET_TO_VEH(iVar1);
		if (__LIB_11__::func_47(ENTITY::GET_ENTITY_MODEL(iParam1)))
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
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1, iVar2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar2, "chassis_dummy"), __LIB_13__::func_590(iParam0), __LIB_13__::func_589(iParam0), false, false, false, false, 2, true, 0);
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
			__LIB_13__::func_375(iParam0, 0, Local_365.f_98);
			iLocal_341 = -1;
		}
	}
}

void func_2322(int iParam0, int iParam1)//Position - 0xC5BE2
{
	float fVar0;
	if (!__LIB_13__::func_456(iParam0, 24))
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
		if (__LIB_13__::func_579(StackVal, StackVal, StackVal, StackVal))
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
		if (!__LIB_13__::func_579(StackVal, StackVal, StackVal, StackVal))
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
	if (__LIB_11__::func_631(&(Local_372[iLocal_328 /*35*/].f_19[iParam0 /*2*/]), iParam1))
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
			if (__LIB_6__::func_924(Local_365.f_47[iParam0 /*8*/]))
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
		bVar3 = __LIB_13__::func_596(iParam0);
		bVar4 = __LIB_13__::func_595(iParam0);
		sVar5 = func_2328(iParam0);
		if (!HUD::DOES_BLIP_EXIST(uLocal_287[iParam0]))
		{
			Stack.Push(Local_213.f_352.f_14 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_352.f_14);
			bVar6 = (StackVal && StackVal);
			__LIB_13__::func_580(&(uLocal_287[iParam0]), iParam1, iVar1, iVar0, sVar5, fVar2, 0, bVar3, bVar4, bVar6);
			HUD::SET_BLIP_PRIORITY(uLocal_287[iParam0], __LIB_13__::func_591(iParam0));
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
			if (__LIB_1__::func_48(iVar0) != HUD::GET_BLIP_COLOUR(uLocal_287[iParam0]))
			{
				__LIB_6__::func_958(&(uLocal_287[iParam0]), iVar0);
			}
			if (__LIB_13__::func_456(iParam0, 16))
			{
				func_936(uLocal_287[iParam0], 100, 5000f, 1137180672);
			}
			Stack.Push(Local_213.f_352.f_11 != 0);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_352.f_11);
			if (StackVal && StackVal)
			{
				if (!HUD::IS_BLIP_FLASHING(uLocal_287[iParam0]))
				{
					__LIB_13__::func_350(&(uLocal_287[iParam0]), 0);
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
	if (__LIB_13__::func_374(func_990()) && func_147(iParam0, 16))
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
	if (__LIB_13__::func_374(func_990()) && func_147(iParam0, 16))
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
			if (func_147(iParam0, 16) && !__LIB_13__::func_445(36))
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
			if ((__LIB_0__::func_160(func_419(iParam0, 2)) != -1 && !__LIB_13__::func_594(func_419(iParam0, 2))) && !func_561(func_419(iParam0, 2), 1))
			{
				return 1;
			}
			break;
		case 33:
			if (__LIB_0__::func_160(func_419(iParam0, 2)) != -1 && !func_561(func_419(iParam0, 2), 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_2336(int iParam0, int iParam1, int iParam2)//Position - 0xC6192
{
	return __LIB_0__::func_287(&(Local_372[iParam1 /*35*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_2337(int iParam0, int iParam1)//Position - 0xC61AD
{
	if (__LIB_1__::func_101(&(Local_372[iLocal_328 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_2339(int iParam0)//Position - 0xC6210
{
	func_2323(iParam0, 4);
	func_2323(iParam0, 9);
}

void func_2342(bool bParam0)//Position - 0xC6285
{
	if (bParam0)
	{
		if (__LIB_3__::func_161() == 0)
		{
			__LIB_21__::func_134(func_903(), Local_365.f_129);
		}
	}
	else
	{
		__LIB_26__::func_809(Local_365.f_129);
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
						__LIB_13__::func_932(iVar2);
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
				__LIB_13__::func_564(iVar1, 15);
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
		__LIB_0__::func_371(Var1);
		if (ENTITY::DOES_ENTITY_EXIST(Var1.f_0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var1.f_0))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) == 0)
				{
					if (__LIB_10__::func_952(iVar3))
					{
						if (func_2367(iVar3))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_326 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								uVar4 = __LIB_21__::func_143();
								__LIB_13__::func_910(bLocal_324, uVar4, 1, 0);
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
									if (__LIB_21__::func_121(Var1, iVar6))
									{
										__LIB_13__::func_564(iVar5, 9);
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
										__LIB_36__::func_208();
										if (Var1.f_5 && __LIB_13__::func_596(iVar5))
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
				if (((!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(Var1.f_0)) && Var1.f_5) && __LIB_13__::func_595())
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
				__LIB_38__::func_241(Var1, iVar3, iVar2);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(Var1.f_0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_324) < __LIB_21__::func_143())
				{
					iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), -1, false);
					iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var1.f_0), 0, false);
					if (__LIB_14__::func_825(Var1.f_0, iVar8, iVar9))
					{
						if (func_2367(iVar8))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1)) && iLocal_326 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))
							{
								iVar10 = __LIB_21__::func_143();
								__LIB_13__::func_910(bLocal_324, iVar10, 1, 0);
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
										__LIB_36__::func_208();
									}
									iVar12 = func_2359(iVar11);
									if (iVar12 != -1)
									{
										__LIB_13__::func_564(iVar12, 10);
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
					__LIB_38__::func_241(Var1, iVar13, iVar2);
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
								__LIB_13__::func_493(iVar0, 9);
								__LIB_13__::func_493(iVar0, 47);
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
										__LIB_36__::func_208();
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
	if (!func_790() || !__LIB_41__::func_683(0, 0, 1))
	{
		return 0;
	}
	if (__LIB_13__::func_445(28))
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
	sVar1 = __LIB_13__::func_598(Var0.f_3);
	sVar2 = __LIB_13__::func_597(Var0.f_3);
	switch (Var0.f_2)
	{
		case 0:
			if (Var0.f_1 == bLocal_324)
			{
				func_1836("FMC_TIC_HAXSPu" /* GXT: You hacked the security panel. */, 0);
			}
			else
			{
				func_2370("FMC_TIC_HAXSPr" /* GXT: ~a~~s~ hacked the security panel. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 1:
			if (Var0.f_1 == bLocal_324)
			{
				func_1836("FMC_TIC_HAXLAPu" /* GXT: You hacked a laptop. */, 0);
			}
			else
			{
				func_2370("FMC_TIC_HAXLAPr" /* GXT: ~a~~s~ hacked a laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (Var0.f_1 == bLocal_324)
			{
				func_1836("FMC_TIC_HKTLTPL" /* GXT: You hacked the laptop. */, 0);
			}
			else
			{
				func_2370("FMC_TIC_HKTLTPR" /* GXT: ~a~~s~ hacked the laptop. */, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
		case 5:
			if (Var0.f_1 == bLocal_324 && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				func_1836(sVar1, 0);
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && __LIB_1__::func_264(Var0.f_1, 0, 1))
			{
				func_2370(sVar2, Var0.f_1, 0, 1, 0, 1, 0);
			}
			break;
	}
}

int func_2370(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC7248
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_26__::func_802(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_36__::func_172(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_36__::func_172(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__::func_957(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__::func_267(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar3 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { __LIB_2__::func_40(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_589(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
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
	if (__LIB_21__::func_157(iParam1))
	{
		Local_372[iLocal_327 /*35*/].f_13 = (Local_372[iLocal_327 /*35*/].f_13 + iParam0);
	}
}

void func_2381(int iParam0)//Position - 0xC7643
{
	if (!__LIB_1__::func_302(26))
	{
		if (!func_2382())
		{
		}
	}
	if (!__LIB_13__::func_445(27))
	{
		if (__LIB_1__::func_264(iParam0, 0, 1))
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
	while (iVar1 < __LIB_13__::func_885())
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
					__LIB_21__::func_158(func_1009(iVar1), iParam2);
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
				if (__LIB_13__::func_258(iParam2, 1))
				{
					Local_365.f_155.f_1[iVar1 /*5*/].f_4 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(__LIB_2__::func_191(iParam2));
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
		func_2385(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), 1814661405, iParam0, 1, -1, 0, 0, 0);
		Local_307.f_6 = (Local_307.f_6 + iParam0);
	}
}

int func_2385(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xC7837
{
	return func_2386(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_2386(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xC7859
{
	int iVar0;
	int iVar1;
	iVar0 = func_2396(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				__LIB_6__::func_970(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		__LIB_18__::func_311(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

var func_2396(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC7BFE
{
	var uVar0;
	uVar0 = __LIB_21__::func_158(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

void func_2424(int iParam0)//Position - 0xC873D
{
	var uVar0;
	if (iParam0 > 0)
	{
		if (__LIB_0__::func_112())
		{
			__LIB_36__::func_241(joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"), iParam0, &uVar0, 0, 0, 0);
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
		__LIB_13__::func_493(iParam0, 6);
	}
	else if (__LIB_2__::func_457(bLocal_324, iParam1))
	{
	}
	else
	{
		__LIB_13__::func_493(iParam0, 9);
		__LIB_13__::func_493(iParam0, 25);
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
	uVar0 = __LIB_41__::func_683(0, 0, 1);
	bVar1 = __LIB_13__::func_482(6);
	iVar2 = 0;
	while (iVar2 < __LIB_13__::func_440())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar2]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_365.f_2[iVar2]), false))
		{
			if (uVar0 && !func_562(iVar2, iLocal_328, 31))
			{
				OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_196.f_19.f_5[0 /*13*/].f_2, __LIB_13__::func_599());
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_365.f_2[iVar2]), false, true);
				OBJECT::SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Local_196.f_19.f_5[0 /*13*/].f_2, true);
				__LIB_13__::func_468(6);
				bVar1 = true;
			}
			else
			{
				if (bVar1)
				{
					OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_196.f_19.f_5[0 /*13*/].f_2, -1);
					__LIB_13__::func_475(6);
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
	if ((!__LIB_13__::func_482(31) && bLocal_332) && __LIB_13__::func_466() == 0)
	{
		func_2432();
		__LIB_13__::func_468(31);
	}
}

void func_2432()//Position - 0xC89B5
{
	Local_307.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_2434();
	__LIB_0__::func_371();
}

void func_2434()//Position - 0xC89D6
{
	__LIB_13__::func_433(__LIB_1__::func_337(bLocal_324), 0, 0, -1, 0, 0);
	Local_307.f_7 = func_903();
}

void func_2533()//Position - 0xCB870
{
	__LIB_13__::func_600();
	func_2535();
	func_2534();
}

void func_2534()//Position - 0xCB884
{
	Local_310.f_11 = __LIB_19__::func_481(bLocal_324, Local_365.f_129);
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
		iLocal_355[iVar2] = __LIB_0__::func_160();
		Local_290[iVar2 /*7*/].f_4 = __LIB_0__::func_160();
		func_1019(iVar2, 33);
		func_1019(iVar2, 12);
		iVar2++;
	}
	__LIB_13__::func_475(79);
	if (bLocal_322)
	{
		func_16(4);
		__LIB_21__::func_161(7);
		__LIB_21__::func_161(10);
		__LIB_21__::func_161(15);
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
			if (__LIB_1__::func_264(bVar8, 0, 1))
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
							if (__LIB_2__::func_457(bLocal_324, bVar8) && !__LIB_13__::func_445(21))
							{
								__LIB_13__::func_493(iVar2, 33);
							}
							else
							{
								__LIB_13__::func_493(iVar2, 12);
							}
						}
						if (!func_562(iVar2, iLocal_328, 14))
						{
							iVar11 = 1;
						}
					}
					iVar2++;
				}
				__LIB_21__::func_160(bVar8, iVar11, bVar10, PLAYER::IS_PLAYER_PLAYING(bVar8));
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
					__LIB_13__::func_603(iVar0, iVar9);
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
						__LIB_21__::func_161(4);
					}
					iVar12 = 0;
					while (iVar12 < Local_196.f_120)
					{
						if (__LIB_13__::func_601(iVar0, iVar12))
						{
							__LIB_13__::func_384(&uVar5, iVar12);
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
				func_2060(bVar13, __LIB_1__::func_264(bVar13, 1, 1), 1);
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
		__LIB_21__::func_134(&Var3);
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
			__LIB_21__::func_161(0);
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
	if (!__LIB_13__::func_381(&(Local_365.f_72), uParam0))
	{
		__LIB_14__::func_369(uParam0, &(Local_365.f_72));
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
			if (__LIB_2__::func_319(uParam0[iVar0 /*2*/], iVar1))
			{
				func_63(iVar0, __LIB_13__::func_382(iVar1));
			}
			else
			{
				func_2543(iVar0, __LIB_13__::func_382(iVar1));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_2543(int iParam0, var uParam1)//Position - 0xCBDE7
{
	if (__LIB_11__::func_631(&(Local_365.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
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
		iVar2 = __LIB_13__::func_385(iVar1);
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
		__LIB_13__::func_454(iParam1, iParam0);
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
		iVar2 = __LIB_13__::func_386(iVar1);
		if (iVar2 != 17)
		{
			if (!__LIB_2__::func_319(uParam0[iParam1 /*2*/], iVar0) && func_2194(iParam1, iParam2, iVar2))
			{
				__LIB_4__::func_745(uParam0[iParam1 /*2*/], iVar0);
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
		iVar2 = __LIB_13__::func_387(iVar1);
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
		iVar2 = __LIB_13__::func_388(iVar1);
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
		iVar2 = __LIB_13__::func_390(iVar1);
		if (iVar2 != 48)
		{
			if (!__LIB_2__::func_319(uParam0[iParam1 /*2*/], iVar0) && func_562(iParam1, iParam2, iVar2))
			{
				__LIB_4__::func_745(uParam0[iParam1 /*2*/], iVar0);
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
		iVar2 = __LIB_13__::func_391(iVar1);
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

void func_2571(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCC56C
{
	int iVar0;
	iVar0 = __LIB_13__::func_518(bParam0);
	if (!BitTest(Local_290.f_8, bParam0))
	{
		if (bParam0 != __LIB_0__::func_160())
		{
			if (bParam1)
			{
				if (__LIB_13__::func_352(func_996(iVar0)))
				{
					__LIB_21__::func_122(bParam0, 0, 1);
					__LIB_2__::func_314(bParam0, 1);
					if (!__LIB_13__::func_304(bParam0))
					{
						__LIB_20__::func_361(bParam0, 1, 1, 1);
					}
					__LIB_19__::func_770(bParam0, func_996(iVar0), 1, 1);
					__LIB_21__::func_116(bParam0, __LIB_13__::func_601(iVar0), 1, 1);
					__LIB_21__::func_85(bParam0, func_988(iVar0, 0), 1, 0);
					if (__LIB_13__::func_368(bParam0))
					{
						if (!__LIB_21__::func_84(bParam0))
						{
							__LIB_21__::func_117(bParam0, 1, 1);
						}
					}
					__LIB_26__::func_791(bParam0, 0, 1);
					MISC::SET_BIT(&(Local_290.f_8), bParam0);
				}
			}
		}
	}
	else if (__LIB_13__::func_392(bParam0) != func_996(iVar0))
	{
		__LIB_19__::func_770(bParam0, func_996(iVar0), 1, 1);
		__LIB_21__::func_116(bParam0, __LIB_13__::func_601(iVar0), 1, 1);
		__LIB_21__::func_85(bParam0, func_988(iVar0, 0), 1, 0);
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
		__LIB_13__::func_468(79);
	}
}

int func_2578()//Position - 0xCC75F
{
	if (!__LIB_13__::func_305())
	{
		return 0;
	}
	if (!__LIB_13__::func_482(7))
	{
		return 0;
	}
	if (func_2846() > 2)
	{
		return 0;
	}
	if (__LIB_13__::func_462() == 1)
	{
		return 0;
	}
	return 1;
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
	func_2611();
	__LIB_0__::func_371(1);
	func_2606();
	if (!__LIB_21__::func_161())
	{
		return 0;
	}
	__LIB_0__::func_371();
	__LIB_21__::func_162(1);
	__LIB_21__::func_159();
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
	__LIB_26__::func_842();
	func_2583();
	return 1;
}

void func_2583()//Position - 0xCC83F
{
	Global_1943929.f_2 = Local_365.f_90;
	Global_1943929.f_3 = Local_365.f_91;
}

void func_2590(bool bParam0)//Position - 0xCCAE1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
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

void func_2606()//Position - 0xCD11F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_13__::func_482(51))
	{
		return;
	}
	iVar0 = func_2609();
	iVar1 = func_2608();
	iVar2 = __LIB_26__::func_843();
	iVar3 = (Local_196.f_38 - iVar0);
	iVar4 = (Local_196.f_67 - iVar1);
	iVar5 = (Local_196.f_85 - iVar2);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar3);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar4);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar5);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(iVar0);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(iVar1);
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(iVar2);
	__LIB_13__::func_468(51);
}

int func_2608()//Position - 0xCD1B8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_67)
	{
		if (__LIB_13__::func_458(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_2609()//Position - 0xCD1E6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (__LIB_13__::func_448(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_2611()//Position - 0xCD21C
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_829();
	iVar1 = __LIB_4__::func_828();
	if (__LIB_1__::func_301() != __LIB_0__::func_160() && __LIB_1__::func_301() != bLocal_324)
	{
		if (iVar0 == -1)
		{
			iVar0 = __LIB_1__::func_337(__LIB_1__::func_301());
		}
		if (iVar1 == -1)
		{
			iVar1 = __LIB_13__::func_400(__LIB_1__::func_301());
		}
	}
	func_2618(Local_334.f_0, 1, iVar0, 1);
	__LIB_21__::func_123();
	PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_324, 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(bLocal_324, false);
	if (iVar0 != -1)
	{
		__LIB_10__::func_959(iVar0);
	}
	if (iVar1 != -1)
	{
		__LIB_13__::func_318(iVar1);
	}
	__LIB_21__::func_162();
	switch (__LIB_1__::func_297(Local_334.f_0))
	{
		case 3:
			__LIB_32__::func_914(0);
			__LIB_26__::func_820(1);
			break;
		case 0:
			__LIB_13__::func_397(1);
			break;
	}
}

void func_2618(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xCD3A2
{
	float fVar0;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		__LIB_4__::func_830(-1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (__LIB_4__::func_829() != -1)
		{
			__LIB_4__::func_831(-1);
		}
		if (__LIB_4__::func_828() != -1)
		{
			__LIB_5__::func_746(-1);
		}
		__LIB_10__::func_959(iParam2);
		__LIB_13__::func_610(iParam0);
		if (!__LIB_10__::func_958(iParam0))
		{
			fVar0 = __LIB_10__::func_957(iParam0);
			if (fVar0 != 1f)
			{
				__LIB_7__::func_230(fVar0);
				MISC::SET_BIT(&(Global_1943920.f_3), 1);
			}
		}
		if (!__LIB_10__::func_956(iParam0) || iParam3)
		{
			if (__LIB_10__::func_955(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1943920.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (__LIB_0__::func_674())
		{
			__LIB_1__::func_484(27);
		}
		if (bParam1)
		{
			if (!__LIB_25__::func_938())
			{
				__LIB_13__::func_606(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2815059.f_4624, 1) || BitTest(Global_2815059.f_4624, 4)) || BitTest(Global_2815059.f_4624, 0))
			{
				__LIB_1__::func_447(6);
			}
			__LIB_10__::func_885();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (__LIB_0__::func_738(PLAYER::PLAYER_ID()) && __LIB_0__::func_286(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		__LIB_26__::func_844();
		if (__LIB_10__::func_943(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_2638()//Position - 0xCDE86
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_13__::func_482(50))
	{
		return;
	}
	if (Local_196.f_38 == 0)
	{
		__LIB_13__::func_468(50);
		return;
	}
	iVar1 = __LIB_13__::func_953();
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
		__LIB_13__::func_612(iVar2);
		iVar2++;
	}
	__LIB_13__::func_468(50);
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
				__LIB_13__::func_620(iParam0, iVar0, iVar3);
			}
			iVar1 = 0;
			while (iVar1 < Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_12)
			{
				if (Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/].f_1 == 0)
				{
					iVar2 = Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/];
					__LIB_13__::func_614(iParam0, iVar3, Local_219.f_23[iParam0 /*67*/].f_1[iVar2 /*13*/], &(Local_219.f_23[iParam0 /*67*/].f_1[iVar0 /*13*/].f_1[iVar1 /*2*/].f_1));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_2647(int iParam0, var uParam1)//Position - 0xCE204
{
	return func_64(iParam0, 21);
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
		Var0 = { __LIB_13__::func_626(iParam0, iParam1) };
		if (!__LIB_0__::func_86(Var0))
		{
			if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
			{
				if (__LIB_13__::func_625(iParam0) != -1f && __LIB_0__::func_529(iParam1, Var0, 1) > __LIB_13__::func_625(iParam0))
				{
					if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var0, 2f, 20000, __LIB_13__::func_625(iParam0), 4, 40000f);
					}
				}
				else if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_THROW_PROJECTILE"), 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam1, __LIB_13__::func_610(iParam0), __LIB_13__::func_623(iParam0), true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam1, __LIB_13__::func_610(iParam0), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
					TASK::TASK_THROW_PROJECTILE(iParam1, Var0, 0, true);
					if (__LIB_13__::func_608(iParam0))
					{
						__LIB_13__::func_564(iParam0, 16);
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
	if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_STAY_IN_COVER"), 1) && !PED::IS_PED_IN_COVER(iParam1, false))
	{
		if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, 0, 0);
			}
			else
			{
				Var0 = { __LIB_13__::func_628(iParam0, iParam1) };
				fVar1 = __LIB_13__::func_627(iParam0, iParam1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Var0, fVar1, false, false);
				TASK::TASK_STAY_IN_COVER(iParam1);
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
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 19)
		{
			if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
			{
				Var1 = { __LIB_13__::func_622(iParam0, iVar0) };
				fVar2 = __LIB_13__::func_633(iParam0);
				TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 19, 30f, fVar2, __LIB_13__::func_620(iParam0), 10, 10, -1f, 8225);
			}
		}
		else if (__LIB_13__::func_619(iParam0) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 19)
		{
			if (__LIB_6__::func_924(Local_365.f_47[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				VEHICLE::SET_SHORT_SLOWDOWN_FOR_LANDING(iVar0);
				VEHICLE::SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(iVar0, true);
			}
		}
	}
}

void func_2688(int iParam0, int iParam1)//Position - 0xCF3EF
{
	struct<3> Var0;
	if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED"), 1))
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
			Var0 = { __LIB_13__::func_641(iParam0, -1) };
			TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var0, __LIB_13__::func_632(iParam0), __LIB_13__::func_646(iParam0), true, __LIB_13__::func_645(iParam0), 50f, __LIB_13__::func_644(iParam0), 10f, __LIB_13__::func_643(iParam0), __LIB_13__::func_628(iParam0), __LIB_13__::func_625(iParam0));
			if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
			{
				__LIB_13__::func_642(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
			}
		}
	}
}

void func_2706(int iParam0, int iParam1)//Position - 0xCFB2A
{
	int iVar0;
	if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		if (__LIB_13__::func_657(iParam0, &iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, 0, 1, __LIB_13__::func_656(iParam0), __LIB_13__::func_655(iParam0), -1f, -1f, false);
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
	if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_HANDS_UP"), 1) && __LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_67.f_4);
		TASK::TASK_HANDS_UP(iParam1, __LIB_13__::func_646(iParam0), __LIB_13__::func_660(iParam0), __LIB_13__::func_644(iParam0), __LIB_13__::func_643(iParam0));
	}
}

void func_2722(int iParam0, int iParam1)//Position - 0xD0051
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_PATROL"), 1) && __LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		iVar0 = __LIB_13__::func_665(iParam0);
		if (iVar0 != -1)
		{
			if (!__LIB_13__::func_664(iParam0))
			{
				Var1 = { __LIB_13__::func_651(iVar0) };
				TASK::TASK_PATROL(iParam1, &Var1, __LIB_13__::func_650(iVar0), __LIB_13__::func_663(iVar0), true);
			}
			else if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"), 1))
			{
				iVar2 = 0;
				while (iVar2 < Local_196.f_131)
				{
					if (Local_196.f_131.f_1[iVar2 /*10*/] == iParam0)
					{
						if (__LIB_13__::func_662(iParam0, Local_365.f_22[iParam0 /*24*/].f_5))
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

void func_2736(int iParam0, int iParam1)//Position - 0xD0439
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		iVar0 = joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS");
		if (__LIB_13__::func_672(iParam0))
		{
			iVar0 = joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD");
		}
		if (!__LIB_0__::func_583(iParam1, iVar0, 1))
		{
			Var1 = { __LIB_13__::func_657(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"):
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, __LIB_13__::func_671(iParam0), __LIB_13__::func_670(), 0.25f, 4096, __LIB_13__::func_669(iParam0));
					break;
				case joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS"):
					TASK::TASK_GO_TO_COORD_ANY_MEANS(iParam1, Var1, __LIB_13__::func_671(iParam0), 0, false, 786603, -1f);
					break;
				}
			}
	}
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
	bVar0 = __LIB_13__::func_686(iParam0);
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
			if ((__LIB_13__::func_679() && !bVar0) && !PED::IS_PED_IN_VEHICLE(iParam1, iVar2, false))
			{
				if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
				{
					if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar2)
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
				if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
						TASK::TASK_HELI_MISSION(iParam1, iVar2, 0, 0, Var3, 4, __LIB_13__::func_678(iParam0), 10f, __LIB_13__::func_685(iParam0), SYSTEM::ROUND(__LIB_13__::func_676()), __LIB_13__::func_675(), -1f, 128);
						if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
						{
							__LIB_13__::func_642(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iParam1))
			{
				if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
				{
					if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
						TASK::TASK_PLANE_MISSION(iParam1, iVar2, 0, 0, Var4, 4, __LIB_13__::func_678(iParam0), __LIB_13__::func_674(iParam0), __LIB_13__::func_685(iParam0), SYSTEM::ROUND(__LIB_13__::func_676()), __LIB_13__::func_675(), true);
						if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
						{
							__LIB_13__::func_642(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
						}
					}
				}
				else if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
				{
					if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam1);
					}
				}
			}
			else if (PED::IS_PED_IN_ANY_BOAT(iParam1))
			{
				if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(NETWORK::NET_TO_VEH(iVar1)) != 4)
				{
					if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
					{
						fVar5 = __LIB_13__::func_673(iParam0);
						Var6 = { func_2750(iParam0, -1) };
						if (Local_213.f_156.f_2.f_25.f_26 != 0)
						{
							Stack.Push(iParam0);
							Stack.Push(iParam1);
							Call_Loc(Local_213.f_156.f_2.f_25.f_26);
						}
						VEHICLE::SET_BOAT_ANCHOR(iVar2, false);
						TASK::TASK_BOAT_MISSION(iParam1, iVar2, 0, 0, Var6, 4, fVar5, 786469, -1f, __LIB_13__::func_684(iParam0));
					}
				}
			}
			else if (!__LIB_0__::func_583(iParam1, __LIB_13__::func_683(iParam0), 1))
			{
				if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]) && (bVar0 || __LIB_6__::func_924(iVar1)))
				{
					Var7 = { func_2750(iParam0, -1) };
					fVar8 = __LIB_13__::func_673(iParam0);
					fVar9 = __LIB_13__::func_671(iParam0);
					if (!bVar0)
					{
						__LIB_13__::func_402(iVar2);
					}
					if (Local_213.f_156.f_2.f_25.f_26 != 0)
					{
						Stack.Push(iParam0);
						Stack.Push(iParam1);
						Call_Loc(Local_213.f_156.f_2.f_25.f_26);
					}
					if (__LIB_13__::func_670(iParam0))
					{
						TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iParam1, Var7, __LIB_13__::func_669(iParam0), iVar2, true, __LIB_13__::func_668(iParam0), -1f, 0f, fVar9, __LIB_13__::func_682(iParam0), fVar8, __LIB_13__::func_674(iParam0));
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iVar2, Var7, fVar8, __LIB_13__::func_681(iParam0), ENTITY::GET_ENTITY_MODEL(iVar2), __LIB_13__::func_668(iParam0), __LIB_13__::func_674(iParam0), fVar9);
					}
					if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
					{
						__LIB_13__::func_642(Local_365.f_22[iParam0 /*24*/].f_5, iParam0);
					}
					if (__LIB_13__::func_665(iParam0) != -1f)
					{
						if (!func_64(iParam0, 7) && !func_2194(iParam0, iLocal_328, 6))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar2, __LIB_13__::func_665(iParam0));
							__LIB_13__::func_564(iParam0, 6);
						}
					}
				}
			}
			else if (Local_365.f_22[iParam0 /*24*/].f_6 != Local_365.f_22[iParam0 /*24*/].f_5)
			{
				if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
				}
			}
			if ((!func_64(iParam0, 6) && !func_2194(iParam0, iLocal_328, 5)) && __LIB_13__::func_664(iParam0))
			{
				if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS(iParam1);
					__LIB_13__::func_564(iParam0, 5);
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
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_213.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
	if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA"), 1))
	{
		if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
		{
			__LIB_13__::func_675(iParam0, iParam1);
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
	if ((!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
	if (__LIB_13__::func_566(iParam0, 0))
	{
		if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_2778(int iParam0, int iParam1)//Position - 0xD14C6
{
	if (__LIB_13__::func_566(iParam0, 0))
	{
		if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, __LIB_13__::func_682(iParam0), __LIB_13__::func_681(iParam0));
			}
		}
	}
}

void func_2781(int iParam0, int iParam1)//Position - 0xD155B
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!__LIB_13__::func_566(iParam0, 0))
	{
		if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
		{
			if (func_2782(&iVar0, &uVar1, iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
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
	if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_2784(int iParam0, int iParam1)//Position - 0xD1740
{
	if (!__LIB_0__::func_583(iParam1, -251125078, 1))
	{
		if (__LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
		if (__LIB_13__::func_684(StackVal, StackVal))
		{
			if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) && __LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
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
		else if (!__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1) && __LIB_6__::func_924(Local_365.f_22[iParam0 /*24*/]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_213.f_156.f_2);
			TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, false);
		}
		if (__LIB_13__::func_683(iParam0))
		{
			if (__LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) || __LIB_0__::func_583(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1))
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
	if (__LIB_13__::func_482(49))
	{
		return;
	}
	Call_Loc(Local_213.f_11.f_1);
	func_2790();
	__LIB_13__::func_468(49);
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
				__LIB_13__::func_687(iVar0, iVar1);
			}
			if (Local_218[iVar0 /*21*/].f_17 == 0)
			{
				func_2791(iVar0, iVar1);
			}
			if (Local_218[iVar0 /*21*/].f_20 == 0)
			{
				Local_218[iVar0 /*21*/].f_20 = 141381/*func_563*/;
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
			iVar0 = 858867/*func_2794*/;
			break;
		case 27:
			iVar0 = 858854/*func_2793*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_13__::func_685(iParam0, iVar0);
	}
	else
	{
		Local_218[iParam0 /*21*/].f_17 = 141381/*func_563*/;
	}
}

void func_2793()//Position - 0xD1AE6
{
	func_1777(4);
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
					*uParam2 = 859726/*func_2810*/;
					break;
				case 31:
					*uParam2 = 859717/*func_2809*/;
					break;
				case 32:
					*uParam2 = 859708/*func_2808*/;
					break;
				case 34:
					*uParam2 = 859699/*func_2807*/;
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
	while (iVar0 < __LIB_13__::func_440())
	{
		if (__LIB_13__::func_688(iVar0) && !__LIB_13__::func_594(iVar0))
		{
			return 1;
		}
		iVar0++;
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
	while (iVar0 < __LIB_13__::func_440())
	{
		if (func_439(iVar0, 6))
		{
			if (!func_439(iVar0, 3))
			{
				if (!func_439(iVar0, 4) || iParam0)
				{
					if (__LIB_13__::func_594(iVar0))
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
	if (iVar1 > 0 && iVar1 == (__LIB_13__::func_440() - iVar2))
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
	while (iVar0 < __LIB_13__::func_440())
	{
		if (func_562(iVar0, iLocal_328, 12))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
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
	if (__LIB_13__::func_482(48))
	{
		return;
	}
	Call_Loc(Local_213.f_11);
	func_2818();
	__LIB_13__::func_468(48);
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
			iVar0 = 860410/*func_2823*/;
			break;
		case 7:
			iVar0 = 860402/*func_2822*/;
			break;
		case 6:
			iVar0 = 860394/*func_2821*/;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_13__::func_687(iParam0, iVar0);
	}
	else
	{
		Local_217[iParam0 /*20*/].f_17 = 141381/*func_563*/;
	}
}

void func_2824()//Position - 0xD2102
{
	if (__LIB_13__::func_466() == 0)
	{
		func_8(3);
	}
}

void func_2825()//Position - 0xD2117
{
	__LIB_21__::func_161(1);
}

void func_2826(int iParam0, int iParam1)//Position - 0xD2124
{
	int iVar0;
	switch (iParam1)
	{
		case 4:
			iVar0 = 860692/*func_2833*/;
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
		__LIB_13__::func_688(iParam0, iVar0);
	}
	else
	{
		Local_217[iParam0 /*20*/].f_18 = 141381/*func_563*/;
	}
}

void func_2828()//Position - 0xD21AF
{
	__LIB_21__::func_139();
}

void func_2830()//Position - 0xD21DA
{
	Local_365.f_68.f_2++;
	__LIB_0__::func_579(&(Local_365.f_68));
}

void func_2832()//Position - 0xD2207
{
	__LIB_21__::func_161(4);
}

void func_2834(int iParam0, var uParam1)//Position - 0xD221C
{
	*uParam1 = 861056/*func_2844*/;
	switch (iParam0)
	{
		case 4:
			*uParam1 = 861047/*func_2843*/;
			break;
		case 22:
			*uParam1 = 860983/*func_2841*/;
			break;
		case 24:
			*uParam1 = 860962/*func_2840*/;
			break;
		case 7:
			*uParam1 = 860925/*func_2838*/;
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
	return __LIB_2__::func_47(StackVal, StackVal, 0);
}

bool func_2836()//Position - 0xD22CE
{
	return func_3(4);
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
	while (iVar0 < __LIB_13__::func_440())
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
	Local_213.f_2 = 865498/*func_2959*/;
	Local_213.f_1 = 865489/*func_2958*/;
	Local_213.f_47 = 861056/*func_2844*/;
	Local_213.f_47.f_1 = 865478/*func_2957*/;
	Local_213.f_47.f_2 = 865469/*func_2956*/;
	Local_213.f_64.f_2 = 865460/*func_2955*/;
	Local_213.f_64 = 865448/*func_2954*/;
	Local_213.f_64.f_14 = 865439/*func_2953*/;
	Local_213.f_64.f_15 = 865430/*func_2952*/;
	Local_213.f_54 = 865421/*func_2951*/;
	Local_213.f_54.f_1 = 865412/*func_2950*/;
	Local_213.f_54.f_2 = 865403/*func_2949*/;
	Local_213.f_54.f_3 = 865394/*func_2948*/;
	Local_213.f_54.f_4 = 865382/*func_2947*/;
	Local_213.f_54.f_5 = 865373/*func_2946*/;
	Local_213.f_54.f_8 = 865364/*func_2945*/;
	Local_213.f_54.f_9 = 865351/*func_2944*/;
	Local_213.f_82 = 865342/*func_2943*/;
	Local_213.f_80 = 865331/*func_2942*/;
	Local_213.f_114.f_23 = 865322/*func_2941*/;
	Local_213.f_114.f_27 = 865311/*func_2940*/;
	Local_213.f_114 = 865265/*func_2939*/;
	Local_213.f_114.f_39 = 865256/*func_2938*/;
	Local_213.f_156.f_176 = 865236/*func_2937*/;
	Local_213.f_156.f_177 = 865173/*func_2936*/;
	Local_213.f_156.f_178 = 865112/*func_2935*/;
	Local_213.f_156.f_179 = 865092/*func_2934*/;
	Local_213.f_156.f_169 = 865083/*func_2933*/;
	Local_213.f_156.f_169.f_1 = 865061/*func_2932*/;
	Local_213.f_156.f_169.f_2 = 865041/*func_2931*/;
	Local_213.f_156 = 864824/*func_2928*/;
	Local_213.f_156.f_132 = 864395/*func_2918*/;
	Local_213.f_156.f_2 = 864383/*func_2917*/;
	Local_213.f_156.f_2.f_1 = 864365/*func_2916*/;
	Local_213.f_156.f_2.f_2 = 864347/*func_2915*/;
	Local_213.f_156.f_2.f_4 = 864338/*func_2914*/;
	Local_213.f_156.f_2.f_5 = 864318/*func_2913*/;
	Local_213.f_156.f_2.f_5.f_1 = 864309/*func_2912*/;
	Local_213.f_156.f_2.f_5.f_2 = 864289/*func_2911*/;
	Local_213.f_156.f_2.f_5.f_3 = 864280/*func_2910*/;
	Local_213.f_156.f_2.f_5.f_4 = 864255/*func_2909*/;
	Local_213.f_156.f_2.f_5.f_5 = 864241/*func_2908*/;
	Local_213.f_156.f_2.f_15 = 864229/*func_2907*/;
	Local_213.f_156.f_2.f_15.f_1 = 864217/*func_2906*/;
	Local_213.f_156.f_2.f_15.f_2 = 864208/*func_2905*/;
	Local_213.f_156.f_2.f_18 = 864138/*func_2904*/;
	Local_213.f_156.f_2.f_18.f_1 = 864125/*func_2903*/;
	Local_213.f_156.f_2.f_18.f_2 = 863923/*func_2902*/;
	Local_213.f_156.f_2.f_23.f_1 = 863910/*func_2901*/;
	Local_213.f_156.f_2.f_67.f_4 = 863890/*func_2900*/;
	Local_213.f_156.f_2.f_85 = 863881/*func_2899*/;
	Local_213.f_156.f_2.f_114 = 863868/*func_2898*/;
	Local_213.f_156.f_2.f_114.f_1 = 863855/*func_2897*/;
	Local_213.f_156.f_2.f_114.f_2 = 863846/*func_2896*/;
	Local_213.f_156.f_2.f_114.f_5 = 863837/*func_2895*/;
	Local_213.f_156.f_2.f_114.f_6 = 863828/*func_2894*/;
	Local_213.f_352.f_24 = 863819/*func_2893*/;
	Local_213.f_352.f_25 = 863810/*func_2892*/;
	Local_213.f_352.f_26 = 863801/*func_2891*/;
	Local_213.f_352.f_27 = 863792/*func_2890*/;
	Local_213.f_352.f_37 = 863783/*func_2889*/;
	Local_213.f_352.f_38 = 863631/*func_2888*/;
	Local_213.f_352.f_31 = 863622/*func_2887*/;
	Local_213.f_407.f_25 = 863613/*func_2886*/;
	Local_213.f_407.f_26 = 863604/*func_2885*/;
	Local_213.f_465.f_2 = 863595/*func_2884*/;
	Local_213.f_473.f_1 = 863570/*func_2883*/;
	Local_213.f_473.f_3 = 863561/*func_2882*/;
	Local_213.f_473.f_2 = 863553/*func_2881*/;
	Local_213.f_473.f_9 = 863544/*func_2880*/;
	Local_213.f_473.f_17 = 863342/*func_2879*/;
	Local_213.f_473.f_18.f_15 = 863333/*func_2878*/;
	Local_213.f_473.f_41 = 863321/*func_2877*/;
	Local_213.f_473.f_15 = 863312/*func_2876*/;
	Local_213.f_453 = 863269/*func_2875*/;
	Local_213.f_453.f_1 = 863260/*func_2874*/;
	Local_213.f_456.f_2 = 863251/*func_2873*/;
	Local_213.f_456.f_6 = 863242/*func_2872*/;
	Local_213.f_456.f_8 = 863233/*func_2871*/;
	Local_213.f_456.f_5 = 863224/*func_2870*/;
	Local_213.f_465.f_4.f_3 = 863215/*func_2869*/;
	Local_213.f_102.f_7 = 863204/*func_2868*/;
	Local_213.f_102.f_8 = 863191/*func_2867*/;
	Local_213.f_15.f_4 = 863182/*func_2866*/;
	Local_213.f_15.f_26 = 863173/*func_2865*/;
	Local_213.f_15.f_26.f_1 = 863163/*func_2864*/;
	Local_213.f_15.f_26.f_2 = 863154/*func_2863*/;
	Local_213.f_15.f_26.f_3 = 863120/*func_2862*/;
	Local_213.f_15.f_26.f_4 = 863111/*func_2861*/;
	Local_213.f_15.f_26.f_5 = 863102/*func_2860*/;
}

int func_2875(int iParam0)//Position - 0xD2C25
{
	if (func_95(iParam0, 2))
	{
		return 3000;
	}
	if (func_95(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

void func_2918(int iParam0)//Position - 0xD308B
{
	if (__LIB_13__::func_445(30))
	{
		func_2925(iParam0);
		return;
	}
	__LIB_13__::func_697(iParam0, 864671/*func_2924*/);
	__LIB_13__::func_697(iParam0, 864543/*func_2922*/);
	__LIB_13__::func_697(iParam0, 864519/*func_2921*/);
	__LIB_13__::func_697(iParam0, 864495/*func_2920*/);
	__LIB_13__::func_697(iParam0, 864471/*func_2919*/);
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
	__LIB_13__::func_697(iParam0, 864792/*func_2927*/);
	__LIB_13__::func_697(iParam0, 864760/*func_2926*/);
	__LIB_13__::func_697(iParam0, 864519/*func_2921*/);
	__LIB_13__::func_697(iParam0, 864495/*func_2920*/);
	__LIB_13__::func_697(iParam0, 864471/*func_2919*/);
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

void func_2928(int iParam0)//Position - 0xD3238
{
	__LIB_13__::func_699(iParam0, 0, 0);
	__LIB_13__::func_705(iParam0, 0, 3);
	__LIB_13__::func_705(iParam0, 0, 2);
	__LIB_13__::func_705(iParam0, 0, 1);
	__LIB_13__::func_699(iParam0, 1, 8);
	__LIB_13__::func_705(iParam0, 1, 3);
	__LIB_13__::func_699(iParam0, 2, 21);
	__LIB_13__::func_705(iParam0, 2, 3);
	__LIB_13__::func_699(iParam0, 3, 7);
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
	__LIB_13__::func_479(0, 4, 141381/*func_563*/);
	__LIB_13__::func_480(0, 1);
	func_556(1, 2, 4, 5, 3, 141381/*func_563*/, 141381/*func_563*/, 141381/*func_563*/, 141381/*func_563*/, 1);
	__LIB_13__::func_479(3, 48, 141381/*func_563*/);
}

void func_2961()//Position - 0xD3520
{
	__LIB_13__::func_478(0, 4);
	__LIB_13__::func_706(0, 1, 861047/*func_2843*/);
	__LIB_13__::func_478(1, 22);
	__LIB_13__::func_706(1, 2, 860983/*func_2841*/);
	__LIB_13__::func_478(2, 24);
	__LIB_13__::func_706(2, 3, 860962/*func_2840*/);
	__LIB_13__::func_478(3, 48);
	__LIB_13__::func_687(3, 860418/*func_2824*/);
}

void func_2964()//Position - 0xD35D3
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_13__::func_466() != false;
	bVar1 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (__LIB_13__::func_963() && __LIB_4__::func_715())
	{
		func_1732(0, 0, 0);
	}
	if (__LIB_13__::func_482(71))
	{
		__LIB_21__::func_154(0);
	}
	__LIB_21__::func_155(0);
	__LIB_13__::func_926(0);
	func_3062();
	__LIB_26__::func_848();
	__LIB_13__::func_962();
	func_3059();
	__LIB_13__::func_920();
	if (bVar1)
	{
		func_1841();
	}
	func_3058();
	if (__LIB_13__::func_961())
	{
		__LIB_13__::func_709();
	}
	__LIB_18__::func_369(0, __LIB_0__::func_684(Local_334.f_0));
	__LIB_21__::func_108(0);
	__LIB_26__::func_847(bVar0);
	if (bVar1)
	{
		__LIB_21__::func_86(Local_365.f_129);
		func_3053();
		if (__LIB_21__::func_105(bLocal_324))
		{
			__LIB_2__::func_229(0);
		}
	}
	func_2059(1, 1, 1);
	__LIB_13__::func_540();
	__LIB_13__::func_707();
	func_1774(1);
	__LIB_21__::func_162(0);
	__LIB_0__::func_371(0);
	if (bVar0 || (bVar1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1))
	{
		func_3051();
		__LIB_13__::func_709();
		func_3047();
		func_3046();
		if (bVar1)
		{
			func_869();
		}
	}
	OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Local_196.f_19.f_5[0 /*13*/].f_2, -1);
	__LIB_0__::func_371();
	__LIB_0__::func_371();
	if (Local_213.f_10 != 0)
	{
		Call_Loc(Local_213.f_10);
	}
	func_2973();
	__LIB_32__::func_976(0);
	if (bVar0)
	{
		__LIB_38__::func_226();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2973()//Position - 0xD38CA
{
	func_2974(1, 0);
	__LIB_10__::func_959(-1);
	__LIB_13__::func_318(-1);
	__LIB_13__::func_397(0);
}

void func_2974(bool bParam0, int iParam1)//Position - 0xD38E7
{
	int iVar0;
	int iVar1;
	if (Global_1637407.f_1.f_108 != 0)
	{
		Global_1637407.f_1.f_108 = 0;
	}
	Global_1637407.f_1.f_109 = -1;
	Global_1637407.f_1.f_110 = -1;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 167 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 168)
	{
		__LIB_20__::func_360();
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 4);
	}
	if ((__LIB_4__::func_728() && iParam1 != 0) && Global_262145.f_17496 /* Tunable: 35628303 */)
	{
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 190 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 192)
		{
			__LIB_39__::func_964(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 164 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 208) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 250) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = -1;
		if (!BitTest(Global_1836844.f_1, 14) && !__LIB_0__::func_738(PLAYER::PLAYER_ID()))
		{
			__LIB_13__::func_606(0);
		}
	}
	else if (__LIB_7__::func_304(PLAYER::PLAYER_ID()) != -1)
	{
		__LIB_4__::func_830(-1);
	}
	__LIB_13__::func_415(__LIB_0__::func_160());
	if (__LIB_1__::func_302(16))
	{
		__LIB_9__::func_32(16);
	}
	__LIB_21__::func_125(0);
	__LIB_10__::func_959(-1);
	__LIB_10__::func_966();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_20__::func_358(iVar0);
		iVar0++;
	}
	if (BitTest(Global_1943920.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 0);
	}
	if (BitTest(Global_1943920.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 5);
	}
	iVar1 = __LIB_9__::func_308();
	if ((__LIB_6__::func_951(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		__LIB_21__::func_91(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || __LIB_2__::func_491(iVar1))
	{
		__LIB_21__::func_124(-1, 1);
	}
	else if (((((__LIB_1__::func_38(iVar1) || __LIB_10__::func_964(iVar1)) || __LIB_3__::func_609(iVar1)) || __LIB_3__::func_524(iVar1)) || __LIB_1__::func_204(iVar1)) || __LIB_0__::func_787(iVar1))
	{
	}
	else
	{
		__LIB_21__::func_124(-1, 1);
	}
	__LIB_1__::func_485(19);
	__LIB_1__::func_485(20);
	__LIB_1__::func_485(21);
	__LIB_1__::func_485(22);
	__LIB_1__::func_485(27);
	__LIB_9__::func_32(3);
	__LIB_9__::func_32(4);
	__LIB_9__::func_32(7);
	__LIB_13__::func_414();
	if (__LIB_0__::func_286(PLAYER::PLAYER_ID()))
	{
		__LIB_26__::func_820(0);
	}
	__LIB_1__::func_485(29);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_160();
	if (Global_2815059.f_5195.f_43 != 0)
	{
		Global_2815059.f_5195.f_43 = 0;
	}
	if (bParam0)
	{
		__LIB_38__::func_236();
	}
	if (!__LIB_0__::func_738(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_533();
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 1);
	}
	if (BitTest(Global_1943920.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 6);
	}
	if (BitTest(Global_1943920.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 7);
	}
	if (BitTest(Global_1943920.f_3, 8))
	{
		__LIB_9__::func_306("IMPEXP_SELFDES" /* GXT: The SecuroServ modified vehicle will now self-destruct. Please stand clear. */, 0);
		__LIB_36__::func_409("IMPEXP_SELFDES" /* GXT: The SecuroServ modified vehicle will now self-destruct. Please stand clear. */);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 8);
	}
	__LIB_20__::func_418(iVar1, 0);
}

void func_3046()//Position - 0xD6588
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_85)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_56[iVar0 /*5*/]))
		{
			if (__LIB_13__::func_450(iVar0, 26))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_365.f_56[iVar0 /*5*/]), false, true);
			}
			if (__LIB_13__::func_450(iVar0, 31))
			{
				if (__LIB_6__::func_924(Local_365.f_56[iVar0 /*5*/]))
				{
					__LIB_4__::func_509(&(Local_365.f_56[iVar0 /*5*/]));
				}
			}
			else
			{
				__LIB_1__::func_162(&(Local_365.f_56[iVar0 /*5*/]));
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
			if (__LIB_13__::func_456(iVar0, 22) && !__LIB_21__::func_80(iVar2, 0, 1))
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
			if (__LIB_13__::func_708(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_47[iVar0 /*8*/]))
				{
					if (bVar1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					__LIB_4__::func_509(&(Local_365.f_47[iVar0 /*8*/]));
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
					__LIB_1__::func_162(&(Local_365.f_47[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_3051()//Position - 0xD68AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__::func_440())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_365.f_2[iVar0]))
			{
				__LIB_4__::func_509(&(Local_365.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_365.f_2.f_15[iVar0]))
		{
			if (__LIB_6__::func_924(Local_365.f_2.f_15[iVar0]))
			{
				__LIB_4__::func_509(&(Local_365.f_2.f_15[iVar0]));
			}
			__LIB_1__::func_162(&(Local_365.f_2.f_15[iVar0]));
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
	if (!__LIB_13__::func_445(31))
	{
		return;
	}
	__LIB_13__::func_522(0);
}

void func_3059()//Position - 0xD6A79
{
	if (!__LIB_0__::func_114())
	{
		return;
	}
	if (__LIB_13__::func_482(54))
	{
		__LIB_11__::func_54();
		__LIB_13__::func_297(0, -1, 1);
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
	if (!__LIB_13__::func_482(31))
	{
		return;
	}
	if (!__LIB_13__::func_482(0))
	{
		Local_307.f_2 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_307.f_1);
		__LIB_0__::func_371();
		__LIB_21__::func_140(bParam0, bParam1);
		__LIB_13__::func_468(0);
	}
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
	if (__LIB_13__::func_798() && func_3136())
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
	if (!__LIB_13__::func_887())
	{
		return 0;
	}
	if (func_662() && func_3135(bLocal_324) < __LIB_13__::func_440())
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
	while (iVar0 < __LIB_13__::func_440())
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
	while (iVar0 < __LIB_13__::func_440())
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
	__LIB_0__::func_673(__LIB_6__::func_875(Param0.f_0), Param0);
	__LIB_1__::func_569(0, -1, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_365.f_2.f_11[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_355[iVar0] = __LIB_0__::func_160();
		uLocal_356[iVar0] = __LIB_0__::func_160();
		Local_290[iVar0 /*7*/].f_4 = __LIB_0__::func_160();
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
	__LIB_13__::func_711(__LIB_0__::func_685(Param0.f_0, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT());
	func_3142();
	__LIB_13__::func_328();
	__LIB_0__::func_371();
	iLocal_306 = PLAYER::GET_PLAYER_GROUP(bLocal_324);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_365.f_96 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	}
	Local_372[NETWORK::PARTICIPANT_ID_TO_INT() /*35*/].f_16 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	return 1;
}

void func_3142()//Position - 0xD93EC
{
	func_3143(Local_334.f_0, 0, 1);
}

void func_3143(int iParam0, int iParam1, bool bParam2)//Position - 0xD93FD
{
	__LIB_10__::func_977();
	if (__LIB_8__::func_546(PLAYER::PLAYER_ID()))
	{
		__LIB_32__::func_920(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && __LIB_21__::func_127(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1943915, 0);
				break;
			}
	}
	if (!__LIB_1__::func_145() && !__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_7__::func_186())
		{
			__LIB_9__::func_40(3);
		}
	}
	__LIB_9__::func_40(4);
	if (__LIB_19__::func_760(0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_582();
	}
	if ((__LIB_10__::func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		__LIB_10__::func_916();
		Global_1943947.f_18 = __LIB_13__::func_379(__LIB_1__::func_301());
	}
	else if (__LIB_9__::func_286(__LIB_7__::func_304(PLAYER::PLAYER_ID())))
	{
		__LIB_10__::func_915();
		Global_1944003.f_18 = __LIB_13__::func_379(__LIB_1__::func_301());
	}
	if (bParam2)
	{
		if (!__LIB_25__::func_938())
		{
			__LIB_13__::func_606(1);
		}
	}
	__LIB_10__::func_969();
}

void func_3191(bool bParam0)//Position - 0xDAF54
{
	bLocal_324 = PLAYER::PLAYER_ID();
	iLocal_325 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iLocal_326 = PLAYER::PLAYER_PED_ID();
	Local_329 = { ENTITY::GET_ENTITY_COORDS(iLocal_326, false) };
	bLocal_320 = __LIB_1__::func_264(bLocal_324, 0, 1);
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
			__LIB_13__::func_711();
		}
	}
	else
	{
		__LIB_13__::func_711();
	}
	if (__LIB_2__::func_47(&uLocal_361, 1000, 0))
	{
		if (bLocal_323)
		{
			if (!__LIB_0__::func_394(Local_372[iLocal_327 /*35*/].f_16, Local_329, 1f, 0))
			{
				Local_372[iLocal_327 /*35*/].f_16 = { Local_329 };
			}
		}
		__LIB_0__::func_579(&uLocal_361);
	}
	bLocal_322 = bLocal_322;
	iLocal_327 = iLocal_327;
	iLocal_328 = iLocal_328;
	Local_329 = { Local_329 };
	bLocal_323 = bLocal_323;
	iLocal_331 = iLocal_331;
	bLocal_332 = __LIB_41__::func_683(1, 0, 1);
	bLocal_333 = func_2084();
}

