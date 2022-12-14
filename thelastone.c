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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<13> Local_42[10];
	struct<10> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<61> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_45 = { 0, 0, 0, 0, 0 } ;
	struct<2> Local_46 = { 0, 0 } ;
	struct<354> Local_47 = { 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_48 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	float fLocal_52 = 0f;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<16> Local_59[4];
	int iLocal_60 = 0;
	int* iLocal_61 = NULL;
	int* iLocal_62 = NULL;
	var uLocal_63 = 15;
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
	var uLocal_115 = 15;
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
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 16;
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
	int iLocal_364 = 0;
	char* sLocal_365[4] = { NULL, NULL, NULL, NULL };
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	char* sLocal_379 = NULL;
	char* sLocal_380 = NULL;
	char* sLocal_381 = NULL;
	int iLocal_382 = 0;
	struct<3> Local_383 = { 0, 0, 0 } ;
	float fLocal_384 = 0f;
	int iLocal_385 = 0;
	struct<3> Local_386 = { 0, 0, 0 } ;
	float fLocal_387 = 0f;
	struct<3> Local_388 = { 0, 0, 0 } ;
	struct<3> Local_389 = { 0, 0, 0 } ;
	struct<3> Local_390 = { 0, 0, 0 } ;
	struct<3> Local_391 = { 0, 0, 0 } ;
	struct<3> Local_392 = { 0, 0, 0 } ;
	struct<3> Local_393 = { 0, 0, 0 } ;
	float fLocal_394 = 0f;
	struct<3> Local_395 = { 0, 0, 0 } ;
	float fLocal_396 = 0f;
	struct<3> Local_397 = { 0, 0, 0 } ;
	struct<3> Local_398 = { 0, 0, 0 } ;
	struct<3> Local_399 = { 0, 0, 0 } ;
	struct<3> Local_400 = { 0, 0, 0 } ;
	struct<3> Local_401 = { 0, 0, 0 } ;
	struct<3> Local_402 = { 0, 0, 0 } ;
	float fLocal_403 = 0f;
	struct<3> Local_404 = { 0, 0, 0 } ;
	struct<3> Local_405 = { 0, 0, 0 } ;
	struct<3> Local_406 = { 0, 0, 0 } ;
	struct<3> Local_407 = { 0, 0, 0 } ;
	struct<3> Local_408 = { 0, 0, 0 } ;
	struct<3> Local_409 = { 0, 0, 0 } ;
	bool bLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	struct<61> Local_413 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_38 = joaat("IG_Hunter");
	Local_49 = { -1568.8677f, 4542.4253f, 16.1893f };
	Local_50 = { -1295.9691f, 4641.689f, 104.37865f };
	Local_51 = { -1303.0886f, 4639.4697f, 107.98408f };
	fLocal_52 = 6f;
	Local_53 = { -1568.3743f, 4546.2f, 15.217278f };
	Local_54 = { -1568.9556f, 4539.6367f, 18.19509f };
	fLocal_55 = 7f;
	Local_56 = { -1537.2278f, 4535.7803f, 45.627308f };
	Local_57 = { -1538.3394f, 4540.549f, 48.822357f };
	fLocal_58 = 8f;
	iLocal_173 = 1;
	iLocal_181 = 1;
	iLocal_182 = 1;
	iLocal_187 = -1;
	iLocal_188 = -1;
	iLocal_190 = -1;
	iLocal_191 = -1;
	iLocal_192 = -1;
	iLocal_368 = joaat("WEAPON_SNIPERRIFLE");
	iLocal_369 = joaat("WEAPON_PUMPSHOTGUN");
	iLocal_370 = joaat("IG_Orleans");
	iLocal_371 = joaat("IG_Hunter");
	iLocal_372 = joaat("dune");
	iLocal_373 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_368);
	iLocal_374 = WEAPON::GET_WEAPONTYPE_MODEL(iLocal_369);
	iLocal_375 = joaat("prop_crate_07a");
	iLocal_376 = joaat("prop_big_shit_02");
	iLocal_377 = joaat("rebel");
	iLocal_378 = joaat("A_C_MtLion");
	sLocal_379 = "rcmlastone1";
	sLocal_380 = "rcmlastone2leadinout";
	sLocal_381 = "EMPTY";
	iLocal_382 = 786440;
	Local_383 = { -1582.8912f, 4758.95f, 49.7778f };
	fLocal_384 = 357.0128f;
	Local_386 = { -1557.5588f, 4592.091f, 18.7528f };
	fLocal_387 = 352.949f;
	Local_390 = { -1581.1555f, 4698.4556f, 46.33023f };
	Local_397 = { -1297.85f, 4639.92f, 106.64f };
	Local_398 = { -1297.21f, 4637.65f, 105.66f };
	Local_399 = { -100.08f, -59.6f, -103.04f };
	Local_400 = { -1296.76f, 4637.52f, 105.67f };
	Local_401 = { -90f, -55.19f, -141.85f };
	Local_404 = { -1651.232f, 4672.7104f, 30.9844f };
	Local_405 = { -1625.1282f, 4586.0063f, 42.1184f };
	Local_406 = { -1486.2358f, 4551.295f, 42.7094f };
	Local_407 = { -1565.4634f, 4601.732f, 19.5286f };
	Local_408 = { -1315.8154f, 4627.9165f, 94.3871f };
	Local_409 = { -1273.392f, 4659.724f, 113.79751f };
	bLocal_410 = true;
	iLocal_411 = -1;
	iLocal_412 = 1;
	Local_44 = { ScriptParam_413 };
	__LIB_14__::func_801(&Local_44);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_509();
	}
	if (__LIB_0__::func_323())
	{
		if (__LIB_0__::func_344() == 0)
		{
			Global_78564 = 1;
			iLocal_37 = 0;
			while (!func_504(&Local_44))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_14__::func_800(&Local_44, 0, 1);
			Global_78564 = 0;
		}
	}
	func_491();
	func_490();
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TheLastOne", 0);
		__LIB_14__::func_863(Local_44.f_9, 0, 0, 0, 0, 0);
		__LIB_0__::func_187();
		if (ENTITY::DOES_ENTITY_EXIST(Local_48.f_2))
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_43.f_0)
			{
				case 0:
					func_469();
					break;
				case 1:
					func_461();
					break;
				case 2:
					func_414();
					break;
				case 3:
					func_380();
					break;
				case 4:
					func_242();
					break;
				case 5:
					func_17();
					break;
				case 6:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x3E3
{
	char* sVar0;
	switch (Local_43.f_1)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			if (func_16(Local_45.f_0))
			{
				Local_43.f_9 = 2;
			}
			if (!AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_DISTANT_SASQUATCH"))
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_DISTANT_SASQUATCH", true, true);
			}
			sVar0 = sLocal_381;
			switch (Local_43.f_9)
			{
				case 2:
					sVar0 = "SAS1_X0";
					break;
				case 3:
					sVar0 = "SAS1_X1";
					break;
				case 4:
					sVar0 = "SAS1_X6";
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sVar0, sLocal_381))
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			Local_43.f_1 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				__LIB_40__::func_611();
				func_10(1);
				func_8(1);
				func_2(1);
				func_509();
			}
			break;
	}
}

void func_2(bool bParam0)//Position - 0x4A3
{
	if (Local_45.f_4 == 1)
	{
		if (bParam0)
		{
			__LIB_0__::func_0(&Local_45);
			__LIB_0__::func_733(&(Local_45.f_2));
			__LIB_0__::func_733(&(Local_45.f_3));
			__LIB_0__::func_123(&(Local_45.f_1));
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_0))
			{
				if (__LIB_0__::func_692(Local_45.f_0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45.f_0, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_45.f_0, false);
				}
				__LIB_0__::func_124(&Local_45, 1, 0, 1);
			}
			__LIB_0__::func_733(&(Local_45.f_2));
			__LIB_0__::func_733(&(Local_45.f_3));
			__LIB_0__::func_122(&(Local_45.f_1), 0);
		}
		Local_45.f_4 = 0;
	}
}

void func_8(bool bParam0)//Position - 0x63E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_60)
	{
		if (Local_59[iVar0 /*16*/].f_1 != 0)
		{
			__LIB_0__::func_621(&(Local_59[iVar0 /*16*/].f_3));
			if (bParam0)
			{
				__LIB_0__::func_0(&(Local_59[iVar0 /*16*/]));
			}
			else
			{
				__LIB_0__::func_124(&(Local_59[iVar0 /*16*/]), 1, 0, 1);
			}
			Local_59[iVar0 /*16*/].f_1 = 0;
			Local_59[iVar0 /*16*/].f_2 = 0;
		}
		iVar0++;
	}
}

void func_10(bool bParam0)//Position - 0x71B
{
	__LIB_0__::func_714(&(Local_48.f_3));
	if (__LIB_0__::func_692(Local_48.f_2))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48.f_2, false, 1);
	}
	if (bParam0)
	{
		__LIB_0__::func_0(&(Local_48.f_2));
	}
	else
	{
		__LIB_0__::func_124(&(Local_48.f_2), 1, 0, 1);
	}
	AUDIO::STOP_SOUND(Local_48.f_6);
	AUDIO::STOP_SOUND(Local_48.f_7);
	Local_48.f_0 = 0;
}

int func_16(int iParam0)//Position - 0x828
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_17()//Position - 0x847
{
	switch (Local_43.f_1)
	{
		case 0:
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				__LIB_0__::func_222(&uLocal_199, 3, Local_48.f_2, "ORLEANS", 0, 1);
				if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_LEADOUT", 8, 0, 0, 0))
				{
					HUD::CLEAR_PRINTS();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 3);
					iLocal_189 = MISC::GET_GAME_TIMER() + 5000;
					Local_43.f_1 = 1;
				}
			}
			else
			{
				func_19();
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() > iLocal_189 && !__LIB_0__::func_75()) || !__LIB_0__::func_692(Local_48.f_2))
			{
				func_19();
			}
			break;
	}
}

void func_19()//Position - 0x909
{
	if (bLocal_410)
	{
		__LIB_0__::func_630(809);
	}
	__LIB_40__::func_611();
	func_20(108, 1);
	func_509();
}

void func_20(int iParam0, bool bParam1)//Position - 0x92D
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__::func_775();
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
	__LIB_14__::func_873(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_14__::func_857(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_330(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_14__::func_792());
	func_48();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_14__::func_860();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_0__::func_716(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_0__::func_716(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_0__::func_716(iParam0, 0, 0);
	}
	__LIB_0__::func_210();
}

void func_48()//Position - 0x1ADF
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
			iVar3 = __LIB_0__::func_216(iVar1);
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
				if (func_166(iVar1, 14, iVar2))
				{
					func_49(iVar1, 14, iVar2);
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

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x1BA0
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_166(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_49(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_49(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_92(iParam0, iVar0, &iVar7, 0))
	{
		func_52(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_50(iParam0, iVar0, &iVar7))
	{
		func_52(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x1D5C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_166(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1E23
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
										func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_58(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_92(iParam0, iVar10, &iVar4, 1))
							{
								func_52(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_52(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_52(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_52(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_52(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_52(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_52(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_52(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_92(iParam0, iVar10, &iVar4, 0))
		{
			func_52(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_50(iParam0, iVar10, &iVar4))
		{
			func_52(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x2E60
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
				if (func_166(iParam0, iParam1, iVar0))
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
				if (func_166(iParam0, iParam1, iVar1))
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

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x953C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_166(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0, int iParam1, int iParam2)//Position - 0x1F975
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
				if (!func_166(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_166(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_166(iParam0, 14, iVar4))
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
			if (!func_166(iParam0, 14, uVar8[iVar7]))
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

void func_242()//Position - 0x27747
{
	int iVar0;
	int iVar1;
	if (Local_43.f_3 == 1)
	{
		func_378(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		func_377();
		while (!func_376())
		{
			SYSTEM::WAIT(0);
		}
		while (!ENTITY::DOES_ENTITY_EXIST(Local_48.f_2))
		{
			func_373();
			SYSTEM::WAIT(0);
		}
		func_372(Local_48.f_2, 1);
		while (!func_371())
		{
			SYSTEM::WAIT(0);
		}
		while (!func_370())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::REQUEST_MODEL(iLocal_377);
		STREAMING::REQUEST_MODEL(iLocal_370);
		__LIB_14__::func_851("sas_2_rcm_t7", 0);
		while (!__LIB_14__::func_740(1, 1093140480, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 1);
			__LIB_0__::func_84(500, 1);
			__LIB_14__::func_879(1, 1, 1);
		}
		else
		{
			__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
		}
		Local_43.f_3 = 0;
	}
	if (Local_43.f_1 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_377);
		STREAMING::REQUEST_MODEL(iLocal_370);
		__LIB_14__::func_851("sas_2_rcm_t7", 0);
		if (__LIB_14__::func_740(1, 1093140480, 0))
		{
			if (bLocal_180)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(2000);
				}
				func_347(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1);
				SYSTEM::WAIT(3000);
				if (ENTITY::DOES_ENTITY_EXIST(Local_48.f_2) && PED::IS_PED_INJURED(Local_48.f_2))
				{
					PED::RESURRECT_PED(Local_48.f_2);
				}
				if (__LIB_0__::func_692(Local_48.f_2))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 110, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_48.f_2, "Orleans", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE_AT_COORDS(Local_49, 0);
				SYSTEM::WAIT(0);
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TheLastOne", 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_14__::func_614(Local_53, Local_54, fLocal_55, -1519.915f, 4524.7f, 44.4031f, 116.3951f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				func_347(Local_49, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_48.f_2) && PED::IS_PED_INJURED(Local_48.f_2))
				{
					PED::RESURRECT_PED(Local_48.f_2);
				}
				if (__LIB_0__::func_692(Local_48.f_2))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 110, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_48.f_2, "Orleans", 0, 0, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_48.f_2, 0, 1, 1);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_48.f_2, 1, 1, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_48.f_2, 8, 1, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(Local_48.f_2, 7, 1, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TheLastOne", 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_14__::func_614(Local_56, Local_57, fLocal_58, -1530.6138f, 4538.0234f, 46.8171f, 318.992f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				func_347(Local_391, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			}
			func_8(0);
			func_2(1);
			iLocal_411 = MISC::GET_GAME_TIMER() + 500;
			iLocal_412 = 1;
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			MISC::CLEAR_AREA(Local_386, 200f, true, false, false, false);
			iLocal_197 = (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300);
			iLocal_198 = 1;
			if (__LIB_0__::func_695(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, Local_386, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_387);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
			}
			Local_43.f_1 = 1;
		}
	}
	if (Local_43.f_1 == 1)
	{
		if (!__LIB_0__::func_695(iLocal_385))
		{
			iLocal_385 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!__LIB_0__::func_695(iLocal_385) && STREAMING::HAS_MODEL_LOADED(iLocal_377))
			{
				iLocal_385 = VEHICLE::CREATE_VEHICLE(iLocal_377, Local_386, fLocal_387, true, true, false);
				if (__LIB_0__::func_695(iLocal_385))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_385, 1);
				}
			}
		}
		if (__LIB_7__::func_691())
		{
			if (iLocal_198)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > iLocal_197)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					iLocal_198 = 0;
				}
			}
		}
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-36.1791f, 1f);
		}
		if (__LIB_0__::func_692(Local_48.f_2))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Orleans", 0))
			{
				if (bLocal_180)
				{
					__LIB_14__::func_808(Local_48.f_2, -1569.3f, 4542.46f, 17.21f);
				}
				else
				{
					__LIB_14__::func_808(Local_48.f_2, -1538.96f, 4538.03f, 47.83f);
				}
				PED::SET_PED_CONFIG_FLAG(Local_48.f_2, 185, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_48.f_2, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_PLAY_ANIM(0, sLocal_380, "leadout_sas_3_rcm_sas", 1000f, -8f, -1, 17039368, 0f, false, true, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_380, "sas_idle_sit", 1000f, -1000f, -1, 17039369, 0f, false, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_48.f_2, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_48.f_2, true, false);
				PED::SET_PED_MONEY(Local_48.f_2, 0);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Local_48.f_2, 1, 0.81f, 0.733f, 1);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Local_48.f_2, 0, 0.94f, 0.59f, 1);
				if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_48.f_2, -1, 2050, 4);
					TASK::TASK_LOOK_AT_ENTITY(Local_48.f_2, PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
				}
			}
			if (iLocal_412)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_411)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 8, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 7, 1, 0, 0);
					iLocal_412 = 0;
				}
			}
		}
		if (Local_43.f_5)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			func_255();
			Local_43.f_4 = 0;
			Local_43.f_5 = 0;
			Local_43.f_6 = 0;
		}
		else if (Local_43.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			func_254(5);
			Local_43.f_1 = 3;
		}
		else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_254(5);
			Local_43.f_1 = 3;
		}
	}
	if (Local_43.f_1 == 3)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_14__::func_870(1, 1, 1, 1);
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-36.1791f, 1f);
				}
			}
			func_243();
			__LIB_0__::func_123(&iLocal_62);
		}
	}
}

void func_243()//Position - 0x27D41
{
	if ((Local_43.f_4 || Local_43.f_5) || Local_43.f_6)
	{
		Local_43.f_3 = 1;
	}
	else
	{
		Local_43.f_3 = 0;
	}
	if (Local_43.f_6)
	{
		switch (Local_43.f_7)
		{
			case 0:
				Local_43.f_8 = 1;
				break;
			case 1:
				Local_43.f_8 = 2;
				break;
			case 2:
				Local_43.f_8 = 3;
				break;
			case 4:
				Local_43.f_8 = 4;
				break;
			case 5:
				Local_43.f_8 = 2;
				break;
			case 3:
				Local_43.f_8 = 3;
				break;
			}
	}
	Local_43.f_0 = Local_43.f_8;
	Local_43.f_1 = 0;
	Local_43.f_2 = 0;
	if (Local_43.f_6 && Local_43.f_7 == 3)
	{
		func_255();
	}
	Local_43.f_4 = 0;
	Local_43.f_5 = 0;
	Local_43.f_6 = 0;
}

void func_254(int iParam0)//Position - 0x28161
{
	Local_43.f_8 = iParam0;
}

void func_255()//Position - 0x2816F
{
	func_378(1, 1);
	func_10(1);
	func_8(1);
	func_2(1);
	__LIB_8__::func_397(&(Local_44.f_35[0]));
	func_377();
	while (!func_376())
	{
		SYSTEM::WAIT(0);
	}
	func_373();
	__LIB_14__::func_659(Local_48.f_2, -1539.3424f, 4539.5303f, 46.8468f, 0, 0, 1);
	func_372(Local_48.f_2, 1);
	Local_48.f_0 = 5;
	Local_48.f_1 = 0;
	__LIB_0__::func_714(&(Local_48.f_3));
	Local_48.f_3 = __LIB_14__::func_661(Local_48.f_2, 1, 0, 5);
	HUD::SET_BLIP_SCALE(Local_48.f_3, 1f);
	Local_47.f_352 = (Local_47.f_353 - 1);
	Local_47.f_0 = 1;
	iLocal_179 = 1;
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -1518.7616f, 4540.3525f, 44.5008f, 95.2894f, 0, 1);
	}
	CUTSCENE::REQUEST_CUTSCENE("sas_2_rcm_t7", 8);
	__LIB_14__::func_874(3, "Kill Sasquatch", 1, 0, 0, 1);
	Local_43.f_0 = 3;
	Local_43.f_1 = 1;
	Local_43.f_8 = -1;
	Local_43.f_3 = 0;
	iLocal_183 = 1;
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	__LIB_14__::func_879(1, 1, 1);
}

void func_347(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2FE4A
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_14__::func_747(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_166(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_166(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_166(PLAYER::PLAYER_PED_ID(), 8, 1) || func_166(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_166(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_52(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			iLocal_34 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_370()//Position - 0x3072A
{
	if (Local_46.f_1)
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_376);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_376))
		{
			Local_46.f_0 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_376, Local_388, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_0))
			{
				ENTITY::SET_ENTITY_ROTATION(Local_46.f_0, Local_389, 2, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_376);
				ENTITY::FREEZE_ENTITY_POSITION(Local_46.f_0, true);
			}
			else
			{
				return 0;
			}
			Local_46.f_1 = 1;
			return 1;
		}
	}
	return 0;
}

int func_371()//Position - 0x3079D
{
	HUD::REQUEST_ADDITIONAL_TEXT("SAS1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("SAS1AUD", 6);
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		return 1;
	}
	return 0;
}

void func_372(int iParam0, bool bParam1)//Position - 0x307CD
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, !bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, bParam1, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, false);
}

int func_373()//Position - 0x307F0
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_48.f_2 = PED::CREATE_PED(25, iLocal_370, Local_47.f_1[1 /*14*/].f_1, 0f, true, true);
	}
	else
	{
		Local_48.f_2 = PED::CREATE_PED(25, iLocal_370, Local_47.f_1[0 /*14*/].f_1, 0f, true, true);
	}
	if (__LIB_0__::func_692(Local_48.f_2))
	{
		iLocal_188 = func_374(PLAYER::PLAYER_PED_ID(), Local_48.f_2, 0f);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48.f_2, true, 1);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_48.f_2, false);
		PED::SET_PED_CAN_BE_TARGETTED(Local_48.f_2, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48.f_2, true);
		WEAPON::GIVE_WEAPON_TO_PED(Local_48.f_2, joaat("WEAPON_UNARMED"), -1, true, true);
		PED::SET_PED_MONEY(Local_48.f_2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_48.f_2, 8, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(Local_48.f_2, 185, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48.f_2, 46, true);
		AUDIO::STOP_PED_SPEAKING(Local_48.f_2, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_48.f_2, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_48.f_2, 1);
		__LIB_0__::func_222(&uLocal_199, 3, Local_48.f_2, "ORLEANS", 0, 1);
		func_372(Local_48.f_2, 0);
		Local_48.f_0 = 0;
		Local_48.f_1 = 2;
		Local_48.f_4 = 0;
		Local_48.f_5 = AUDIO::GET_SOUND_ID();
		Local_48.f_6 = AUDIO::GET_SOUND_ID();
		Local_48.f_7 = AUDIO::GET_SOUND_ID();
		Local_48.f_11 = 0;
		return 1;
	}
	return 0;
}

int func_374(int iParam0, int iParam1, float fParam2)//Position - 0x30952
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		if (Local_42[iVar0 /*13*/].f_1 == iParam0 && Local_42[iVar0 /*13*/].f_2 == iParam1)
		{
			Local_42[iVar0 /*13*/].f_3 = fParam2;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = func_375();
	if (iVar0 == -1)
	{
		return -1;
	}
	Local_42[iVar0 /*13*/] = 0;
	Local_42[iVar0 /*13*/].f_1 = iParam0;
	Local_42[iVar0 /*13*/].f_2 = iParam1;
	Local_42[iVar0 /*13*/].f_4 = 0;
	Local_42[iVar0 /*13*/].f_3 = fParam2;
	Local_42[iVar0 /*13*/].f_5 = 0;
	Local_42[iVar0 /*13*/].f_12 = iVar0;
	return iVar0;
}

int func_375()//Position - 0x309ED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		if (Local_42[iVar0 /*13*/] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_376()//Position - 0x30A18
{
	if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_379)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_380))
	{
		return 1;
	}
	return 0;
}

void func_377()//Position - 0x30A47
{
	STREAMING::REQUEST_MODEL(iLocal_370);
	STREAMING::REQUEST_ANIM_DICT(sLocal_379);
	STREAMING::REQUEST_ANIM_DICT(sLocal_380);
}

void func_378(bool bParam0, bool bParam1)//Position - 0x30A64
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_347(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_380()//Position - 0x30AF6
{
	if (Local_43.f_3 == 1)
	{
		func_378(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_402, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_403);
		}
		while (!func_371())
		{
			SYSTEM::WAIT(0);
		}
		while (!func_370())
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 1);
		}
		else
		{
			__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
		}
		__LIB_14__::func_879(1, 1, 1);
		Local_43.f_3 = 0;
	}
	if (Local_43.f_1 == 0)
	{
		func_377();
		func_413();
		if (func_376() && func_412())
		{
			func_2(0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_48.f_2))
			{
				func_373();
			}
			func_411();
			func_410();
			func_409();
			CUTSCENE::REQUEST_CUTSCENE("sas_2_rcm_t7", 8);
			__LIB_14__::func_874(2, "Chase", 0, 0, 0, 1);
			iLocal_178 = 0;
			iLocal_179 = 0;
			PED::SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(0.2f);
			PED::SET_AI_WEAPON_DAMAGE_MODIFIER(0.2f);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			iLocal_185 = 0;
			iLocal_186 = 0;
			iLocal_171 = 0;
			iLocal_170 = 0;
			iLocal_168 = 0;
			iLocal_183 = 0;
			Local_43.f_1 = 1;
		}
	}
	if (Local_43.f_1 == 1)
	{
		if (!__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			func_254(6);
			Local_43.f_9 = 1;
			Local_43.f_1 = 3;
		}
		else if (func_408())
		{
			func_254(6);
			Local_43.f_9 = 4;
			Local_43.f_1 = 3;
		}
		else if (!__LIB_0__::func_692(Local_48.f_2))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_48.f_2, true), 4f) || iLocal_171)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 4);
				func_19();
			}
			else
			{
				func_254(4);
				__LIB_0__::func_429();
				iLocal_364 = MISC::GET_GAME_TIMER() + 3000;
				Local_43.f_1 = 3;
				__LIB_0__::func_714(&(Local_48.f_3));
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_48.f_2, true), 4f))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_186)
			{
				iLocal_185++;
				iLocal_186 = MISC::GET_GAME_TIMER() + 1000;
				__LIB_0__::func_497(807, 1, 0);
			}
			if ((iLocal_179 && iLocal_185 > 0) || (!iLocal_179 && iLocal_185 > 1))
			{
				if (__LIB_0__::func_692(Local_48.f_2))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 99, 0);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				func_19();
			}
		}
		else if (Local_43.f_6)
		{
			Local_43.f_1 = 3;
		}
		else if (Local_43.f_4)
		{
			if (iLocal_179)
			{
				func_254(4);
				__LIB_0__::func_429();
				iLocal_364 = MISC::GET_GAME_TIMER() + 3000;
				Local_43.f_1 = 3;
			}
			else
			{
				func_255();
				Local_43.f_4 = 0;
				Local_43.f_5 = 0;
				Local_43.f_6 = 0;
			}
		}
		else if (Local_43.f_5)
		{
			func_254(2);
			Local_43.f_1 = 3;
		}
		else
		{
			func_393();
			func_391();
			func_389();
			if (Local_47.f_0 == 2)
			{
				Local_47.f_0 = 0;
				if (Local_47.f_352 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_47.f_352 = 2;
				}
				else
				{
					Local_47.f_352++;
				}
			}
			if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_47.f_1[10 /*14*/].f_5, 100f, 1))
			{
				CUTSCENE::REQUEST_CUTSCENE("sas_2_rcm_t7", 8);
			}
			if (iLocal_170 == 0)
			{
				__LIB_0__::func_229("SAS1_C1", 7500, 0);
				iLocal_170 = 1;
				iLocal_184 = MISC::GET_GAME_TIMER() + 1000;
			}
			else if (iLocal_183 == 0)
			{
				if (iLocal_184 < MISC::GET_GAME_TIMER())
				{
					__LIB_0__::func_151("SAS1_H0", -1);
					iLocal_183 = 1;
				}
			}
			else if (iLocal_178 == 0)
			{
				if (Local_47.f_352 < 5)
				{
					if (!__LIB_0__::func_75() && func_385(iLocal_188, 250))
					{
						__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						__LIB_14__::func_654(&uLocal_199, "SAS1AUD", "SAS1_CHASE1b", 7, 1, 0);
						iLocal_178 = 1;
					}
				}
			}
			else if (iLocal_179 == 0)
			{
				if (Local_47.f_352 >= (Local_47.f_353 - 1))
				{
					if (!__LIB_0__::func_75() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_392, 35f, 35f, 35f, false, true, 0))
					{
						func_383();
						__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_CHASE3", 7, 0, 0, 0))
						{
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_48.f_2, -1536.6f, 4543.7f, 45.5f, -1538.2f, 4536.2f, 48.6f, 5f, false, false);
							iLocal_179 = 1;
						}
					}
				}
			}
			if (iLocal_168 == 0)
			{
				if (!__LIB_16__::func_325(&uLocal_63, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					__LIB_0__::func_229("SAS1_C2", 7500, 0);
					iLocal_168 = 1;
					iLocal_172 = MISC::GET_GAME_TIMER() + 30000;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_172)
			{
				if (__LIB_16__::func_325(&uLocal_63, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					iLocal_168 = 0;
				}
			}
		}
	}
	if (Local_43.f_1 == 3)
	{
		if (Local_43.f_8 == 4)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_364)
			{
				func_381();
			}
		}
		else
		{
			__LIB_0__::func_714(&(Local_48.f_3));
			HUD::CLEAR_PRINTS();
			func_243();
		}
	}
}

void func_381()//Position - 0x30FE6
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_714(&(Local_48.f_3));
	if (__LIB_16__::func_325(&uLocal_115, ENTITY::GET_ENTITY_COORDS(Local_48.f_2, false)))
	{
		bLocal_180 = false;
	}
	else
	{
		bLocal_180 = true;
	}
	func_243();
}

void func_383()//Position - 0x310DA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_60)
	{
		if (__LIB_0__::func_692(Local_59[iVar0 /*16*/]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_59[iVar0 /*16*/], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			__LIB_0__::func_124(&(Local_59[iVar0 /*16*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

bool func_385(int iParam0, int iParam1)//Position - 0x31164
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= Local_42.f_0)
	{
		return 0;
	}
	if (Local_42[iParam0 /*13*/] == 1 || Local_42[iParam0 /*13*/].f_4 == 0)
	{
		return 0;
	}
	return (MISC::GET_GAME_TIMER() - Local_42[iParam0 /*13*/].f_4) < iParam1;
}

void func_389()//Position - 0x311FE
{
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_48.f_2, true), 1.5f, true, true))
	{
		if (Local_47.f_352 < (Local_47.f_353 - 1))
		{
			func_390();
			__LIB_0__::func_497(807, 1, 0);
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_CHASE2", 7, 0, 0, 0);
			}
		}
	}
	else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_48.f_2, true), 5f, true, true))
	{
		if (Local_47.f_352 < (Local_47.f_353 - 1))
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_MISS", 7, 0, 0, 0);
			}
		}
	}
}

void func_390()//Position - 0x312BE
{
	if ((Local_48.f_0 == 3 && Local_48.f_1 == 1) && __LIB_0__::func_692(Local_48.f_2))
	{
		AUDIO::STOP_SOUND(Local_48.f_6);
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_48.f_6, "WOUNDED", Local_48.f_2, "SASQUATCH_01_SOUNDSET", false, 0);
		Local_48.f_10 = 1;
	}
}

void func_391()//Position - 0x3130F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (func_392(iVar3))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar3, false))
							{
								__LIB_0__::func_497(808, 1, 0);
							}
							else if (PED::IS_PED_INJURED(iVar3))
							{
								ENTITY::SET_ENTITY_HEALTH(iVar3, 0, 0);
								__LIB_0__::func_497(808, 1, 0);
							}
						}
					}
				}
				break;
		}
		iVar2++;
	}
}

int func_392(int iParam0)//Position - 0x313A7
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((((((((((((iVar0 == joaat("A_C_Boar") || iVar0 == joaat("A_C_Chickenhawk")) || iVar0 == joaat("A_C_Chimp")) || iVar0 == joaat("A_C_Chop")) || iVar0 == joaat("A_C_Cormorant")) || iVar0 == joaat("A_C_Cow")) || iVar0 == joaat("A_C_Coyote")) || iVar0 == joaat("A_C_Crow")) || iVar0 == joaat("A_C_Deer")) || iVar0 == joaat("A_C_Hen")) || iVar0 == joaat("A_C_MtLion")) || iVar0 == joaat("A_C_Pig")) || iVar0 == joaat("A_C_Pigeon")) || iVar0 == joaat("A_C_Rat")) || iVar0 == joaat("A_C_Retriever")) || iVar0 == joaat("A_C_Rhesus")) || iVar0 == joaat("A_C_Rottweiler")) || iVar0 == joaat("A_C_Seagull"))
	{
		return 1;
	}
	return 0;
}

void func_393()//Position - 0x314B5
{
	int iVar0;
	switch (Local_47.f_1[Local_47.f_352 /*14*/])
	{
		case 0:
		case 1:
			if (Local_47.f_0 == 0)
			{
				func_404(Local_47.f_352);
				Local_47.f_0 = 1;
			}
			else if (Local_47.f_0 == 1)
			{
				func_397(&(Local_47.f_1[Local_48.f_8 /*14*/]));
				if (Local_48.f_0 == 0 && Local_48.f_1 == 2)
				{
					Local_47.f_0 = 2;
				}
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_60)
	{
		func_394(&(Local_59[iVar0 /*16*/]));
		iVar0++;
	}
}

void func_394(int* iParam0)//Position - 0x31545
{
	__LIB_0__::func_631(*iParam0, &(iParam0->f_3), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	switch (iParam0->f_1)
	{
		case 1:
			if (!__LIB_0__::func_692(*iParam0))
			{
				iParam0->f_1 = 0;
				iParam0->f_2 = 0;
			}
			else if (__LIB_0__::func_687(*iParam0, PLAYER::PLAYER_PED_ID(), iParam0->f_15, 1))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 17))
				{
					iParam0->f_1 = 2;
					iParam0->f_2 = 0;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_692(*iParam0))
			{
				iParam0->f_1 = 0;
				iParam0->f_2 = 0;
			}
			else if (iParam0->f_2 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iParam0->f_2 = 1;
			}
			break;
		case 0:
			if (iParam0->f_2 == 0)
			{
				__LIB_0__::func_124(iParam0, 1, 0, 1);
				iParam0->f_2 = 1;
			}
			break;
	}
}

void func_397(var uParam0)//Position - 0x31849
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	fVar0 = uParam0->f_8;
	iVar1 = uParam0->f_10;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar0 = uParam0->f_9;
		iVar1 = 2000;
	}
	switch (Local_48.f_0)
	{
		case 1:
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				if (Local_48.f_1 == 0)
				{
					func_372(Local_48.f_2, 0);
					if (Local_48.f_8 > 0)
					{
						__LIB_0__::func_714(&(Local_48.f_3));
					}
					ENTITY::SET_ENTITY_COORDS(Local_48.f_2, uParam0->f_1, true, false, false, true);
					if (*uParam0 == 1)
					{
						__LIB_14__::func_670(Local_48.f_2, uParam0->f_5);
					}
					Local_48.f_4 = (MISC::GET_GAME_TIMER() + iVar1);
					Local_48.f_1 = 1;
				}
				else if (Local_48.f_1 == 1)
				{
					if (fVar0 == -1f)
					{
						Local_48.f_0 = 0;
						Local_48.f_1 = 0;
					}
					else if (MISC::GET_GAME_TIMER() > Local_48.f_4)
					{
						Local_48.f_0 = 2;
						Local_48.f_1 = 0;
					}
					else if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), uParam0->f_1, fVar0, 1))
					{
						Local_48.f_0 = 2;
						Local_48.f_1 = 0;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				if (Local_48.f_1 == 0)
				{
					Local_48.f_12 = (MISC::GET_GAME_TIMER() + 60000);
					Local_48.f_4 = 0;
					Local_48.f_1 = 1;
				}
				else if (fVar0 == -1f || __LIB_0__::func_687(Local_48.f_2, PLAYER::PLAYER_PED_ID(), fVar0, 1))
				{
					if ((*uParam0 == 1 && fVar0 != -1f) && func_402(uParam0))
					{
						Local_48.f_0 = 3;
						Local_48.f_1 = 0;
					}
					else
					{
						Local_48.f_0 = 4;
						Local_48.f_1 = 0;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_48.f_3))
				{
					iVar2 = (HUD::GET_BLIP_ALPHA(Local_48.f_3) - 5);
					if (iVar2 > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_48.f_3, iVar2);
					}
					else
					{
						__LIB_0__::func_714(&(Local_48.f_3));
					}
				}
				else if (MISC::GET_GAME_TIMER() > Local_48.f_12)
				{
					Local_48.f_11 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > Local_48.f_4)
				{
					if ((AUDIO::HAS_SOUND_FINISHED(Local_48.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_7))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_48.f_5, "ALERT", Local_48.f_2, "SASQUATCH_01_SOUNDSET", false, 0);
						HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(Local_48.f_2, true), 30f, 6);
					}
					Local_48.f_4 = MISC::GET_GAME_TIMER() + 7500;
				}
				HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
				func_401();
			}
			break;
		case 3:
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				if (Local_48.f_1 == 0)
				{
					func_372(Local_48.f_2, 1);
					TASK::TASK_GO_STRAIGHT_TO_COORD(Local_48.f_2, uParam0->f_5, 3f, -1, 40000f, 0.5f);
					if ((AUDIO::HAS_SOUND_FINISHED(Local_48.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_7))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_48.f_6, "RUNNING", Local_48.f_2, "SASQUATCH_01_SOUNDSET", false, 0);
					}
					Local_48.f_10 = 0;
					if (!HUD::DOES_BLIP_EXIST(Local_48.f_3))
					{
						Local_48.f_3 = __LIB_14__::func_661(Local_48.f_2, 1, 0, 5);
						HUD::SET_BLIP_SCALE(Local_48.f_3, 1f);
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_48.f_3, 255);
					}
					if (Local_47.f_352 == (Local_47.f_353 - 1))
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_48.f_2, true);
						PED::SET_PED_CAN_BE_TARGETTED(Local_48.f_2, true);
						ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 110, 0);
					}
					Local_48.f_1 = 1;
				}
				else if (Local_48.f_1 == 1)
				{
					if ((Local_47.f_352 < (Local_47.f_353 - 1) && __LIB_0__::func_725(Local_48.f_2, uParam0->f_5, 4f, 1)) && !__LIB_6__::func_572(Local_48.f_2, joaat("SCRIPT_TASK_PLAY_ANIM")))
					{
						TASK::TASK_PLAY_ANIM(Local_48.f_2, sLocal_379, "tlo_leap_out", 8f, -8f, -1, 512, 0f, false, false, false);
						Local_48.f_1 = 2;
					}
					else if (Local_47.f_352 >= (Local_47.f_353 - 1) && __LIB_0__::func_725(Local_48.f_2, uParam0->f_5, 1.5f, 1))
					{
						Local_48.f_1 = 2;
					}
					else if ((AUDIO::HAS_SOUND_FINISHED(Local_48.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_7))
					{
						if (Local_48.f_10 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_48.f_6, "RUNNING", Local_48.f_2, "SASQUATCH_01_SOUNDSET", false, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_48.f_6, "WOUNDED", Local_48.f_2, "SASQUATCH_01_SOUNDSET", false, 0);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (__LIB_0__::func_695(iVar3) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, Local_48.f_2))
						{
							Local_48.f_0 = 6;
							Local_48.f_1 = 0;
						}
					}
				}
				func_400();
				if ((Local_48.f_1 == 2 && __LIB_0__::func_692(Local_48.f_2)) && !__LIB_6__::func_572(Local_48.f_2, joaat("SCRIPT_TASK_PLAY_ANIM")))
				{
					TASK::CLEAR_PED_TASKS(Local_48.f_2);
					if (Local_47.f_352 < (Local_47.f_353 - 1))
					{
						if ((AUDIO::HAS_SOUND_FINISHED(Local_48.f_6) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_6)) && AUDIO::HAS_SOUND_FINISHED(Local_48.f_7))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_48.f_7, "COUGH", Local_48.f_2, "SASQUATCH_01_SOUNDSET", false, 0);
						}
						Local_48.f_0 = 4;
						Local_48.f_1 = 0;
					}
					else
					{
						Local_48.f_0 = 5;
						Local_48.f_1 = 0;
					}
				}
			}
			break;
		case 4:
			if (Local_48.f_1 == 0)
			{
				func_372(Local_48.f_2, 0);
				Local_48.f_1 = 1;
			}
			func_401();
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				if (HUD::DOES_BLIP_EXIST(Local_48.f_3))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar5 = 16;
					}
					else
					{
						iVar5 = 8;
					}
					iVar4 = (HUD::GET_BLIP_ALPHA(Local_48.f_3) - iVar5);
					if (iVar4 > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_48.f_3, iVar4);
					}
					else
					{
						__LIB_0__::func_714(&(Local_48.f_3));
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_48.f_3))
			{
				Local_48.f_0 = 0;
				Local_48.f_1 = 0;
			}
			break;
		case 5:
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				if (Local_48.f_1 == 0)
				{
					__LIB_0__::func_222(&uLocal_199, 3, Local_48.f_2, "ORLEANS", 0, 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_48.f_2, true);
					PED::SET_PED_CAN_BE_TARGETTED(Local_48.f_2, true);
					func_372(Local_48.f_2, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_48.f_3))
					{
						Local_48.f_3 = __LIB_14__::func_661(Local_48.f_2, 1, 0, 5);
						HUD::SET_BLIP_SCALE(Local_48.f_3, 1f);
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_48.f_3, 255);
					}
					__LIB_14__::func_874(3, "Kill Sasquatch", 1, 0, 0, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
					TASK::TASK_COWER(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iVar6);
					TASK::TASK_PERFORM_SEQUENCE(Local_48.f_2, iVar6);
					func_383();
					Local_48.f_1 = 1;
					Local_48.f_9 = 0;
				}
				else if (Local_48.f_1 == 1)
				{
					if (Local_48.f_9 == 0)
					{
						if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_48.f_2, 20f, 1))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 110, 0);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_48.f_2, joaat("HATES_PLAYER"));
							PED::SET_PED_CONFIG_FLAG(Local_48.f_2, 185, true);
							func_383();
							iLocal_366 = 0;
							iLocal_367 = MISC::GET_GAME_TIMER();
							Local_48.f_9 = 1;
						}
					}
					else if (Local_48.f_9 == 1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_367)
						{
							if (__LIB_14__::func_535(&uLocal_199, "SAS1AUD", "SAS1_LEADOUT", sLocal_365[iLocal_366], 7, 0, 0))
							{
								iLocal_367 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
								iLocal_366 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							}
						}
					}
					func_398();
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_692(Local_48.f_2))
			{
				if (Local_48.f_1 == 0)
				{
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_48.f_2, true);
					PED::SET_PED_CAN_BE_TARGETTED(Local_48.f_2, true);
					ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 120, 0);
					func_372(Local_48.f_2, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_48.f_3))
					{
						Local_48.f_3 = __LIB_14__::func_661(Local_48.f_2, 1, 0, 5);
						HUD::SET_BLIP_SCALE(Local_48.f_3, 1f);
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_48.f_3, 255);
					}
					iLocal_171 = 1;
					TASK::TASK_COMBAT_PED(Local_48.f_2, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_383();
					Local_48.f_1 = 1;
				}
				else if (Local_48.f_1 == 1)
				{
				}
			}
			break;
		case 0:
			if (Local_48.f_1 == 0)
			{
				__LIB_0__::func_714(&(Local_48.f_3));
				Local_48.f_1 = 2;
			}
			break;
	}
}

void func_398()//Position - 0x32051
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_48.f_2, PLAYER::PLAYER_PED_ID(), true))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_48.f_2, 99, 0);
	}
}

void func_400()//Position - 0x320CA
{
	if (iLocal_191 < 0)
	{
		iLocal_191 = MISC::GET_GAME_TIMER() + 7000;
		iLocal_192 = -1;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_191)
	{
		if ((!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_RUNS", 7, 0, 0, 0))
			{
				iLocal_191 = MISC::GET_GAME_TIMER() + 7000;
			}
		}
	}
}

void func_401()//Position - 0x32133
{
	if (iLocal_192 < 0)
	{
		iLocal_192 = MISC::GET_GAME_TIMER() + 7000;
		iLocal_191 = -1;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_192)
	{
		if ((!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_HIDE", 7, 0, 0, 0))
			{
				iLocal_192 = MISC::GET_GAME_TIMER() + 7000;
			}
		}
	}
}

int func_402(var uParam0)//Position - 0x3219C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (Local_47.f_352 == (Local_47.f_353 - 1))
	{
		return 1;
	}
	Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0->f_1) };
	Var1 = { __LIB_0__::func_79(uParam0->f_5 - uParam0->f_1) };
	if ((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1)) < SYSTEM::COS(SYSTEM::TO_FLOAT(uParam0->f_11))
	{
		if (uParam0->f_1 < uParam0->f_5)
		{
			Var2.f_0 = (uParam0->f_1 - 4f);
			Var3.f_0 = (uParam0->f_5 + 4f);
		}
		else
		{
			Var2.f_0 = (uParam0->f_5 - 4f);
			Var3.f_0 = (uParam0->f_1 + 4f);
		}
		if (uParam0->f_1.f_1 < uParam0->f_5.f_1)
		{
			Var2.f_1 = (uParam0->f_1.f_1 - 4f);
			Var3.f_1 = (uParam0->f_5.f_1 + 4f);
		}
		else
		{
			Var2.f_1 = (uParam0->f_5.f_1 - 4f);
			Var3.f_1 = (uParam0->f_1.f_1 + 4f);
		}
		if (uParam0->f_1.f_2 < uParam0->f_5.f_2)
		{
			Var2.f_2 = (uParam0->f_1.f_2 - 4f);
			Var3.f_2 = (uParam0->f_5.f_2 + 4f);
		}
		else
		{
			Var2.f_2 = (uParam0->f_5.f_2 - 4f);
			Var3.f_2 = (uParam0->f_1.f_2 + 4f);
		}
		return !MISC::IS_AREA_OCCUPIED(Var2, Var3, false, true, false, false, false, 0, false);
	}
	return 0;
}

int func_404(int iParam0)//Position - 0x32331
{
	if (Local_48.f_0 == 0)
	{
		if (iParam0 <= 1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_48.f_0 = 3;
		}
		else
		{
			Local_48.f_0 = 1;
		}
		Local_48.f_1 = 0;
		Local_48.f_8 = iParam0;
		return 1;
	}
	return 0;
}

bool func_408()//Position - 0x3244D
{
	return Local_48.f_11;
}

void func_409()//Position - 0x3245A
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_378);
}

void func_410()//Position - 0x32469
{
	Local_47.f_0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_47.f_352 = 1;
	}
	else
	{
		Local_47.f_352 = 0;
	}
}

void func_411()//Position - 0x32492
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_60)
	{
		Local_59[iVar0 /*16*/] = PED::CREATE_PED(25, iLocal_378, Local_59[iVar0 /*16*/].f_11, Local_59[iVar0 /*16*/].f_14, true, true);
		if (__LIB_0__::func_692(Local_59[iVar0 /*16*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_59[iVar0 /*16*/], true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_59[iVar0 /*16*/], 1);
			TASK::TASK_WANDER_IN_AREA(Local_59[iVar0 /*16*/], Local_59[iVar0 /*16*/].f_11, 15f, 3f, 6f);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_59[iVar0 /*16*/], 46, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(Local_59[iVar0 /*16*/], joaat("WEAPON_COUGAR"), -1, true);
			Local_59[iVar0 /*16*/].f_1 = 1;
			Local_59[iVar0 /*16*/].f_2 = 0;
		}
		iVar0++;
	}
}

bool func_412()//Position - 0x32556
{
	return STREAMING::HAS_MODEL_LOADED(iLocal_378);
}

void func_413()//Position - 0x32565
{
	STREAMING::REQUEST_MODEL(iLocal_378);
}

void func_414()//Position - 0x32574
{
	bool bVar0;
	if (MISC::GET_GAME_TIMER() > iLocal_187 && iLocal_187 > 0)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_187 = -1;
		}
	}
	if (Local_43.f_3 == 1)
	{
		func_378(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		__LIB_14__::func_871(&Local_44, 1, 1, 1);
		iLocal_37 = 0;
		while (!func_504(&Local_44))
		{
			SYSTEM::WAIT(0);
		}
		func_452();
		while (!func_451())
		{
			SYSTEM::WAIT(0);
		}
		func_448(1);
		while (!func_371())
		{
			SYSTEM::WAIT(0);
		}
		while (!func_370())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_181 = 1;
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 1);
		}
		else
		{
			__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
		}
		__LIB_14__::func_879(1, 1, 1);
		Local_43.f_3 = 0;
	}
	if (Local_43.f_1 == 0)
	{
		func_452();
		if (func_451())
		{
			func_447();
			if (__LIB_0__::func_692(Local_45.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_45.f_0, 185, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_45.f_0, false);
			}
			iLocal_61 = HUD::ADD_BLIP_FOR_RADIUS(Local_390, 75f);
			HUD::SET_BLIP_COLOUR(iLocal_61, 5);
			HUD::SET_BLIP_ALPHA(iLocal_61, 128);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_61, false);
			MISC::CLEAR_AREA(Local_404, 100f, true, false, false, false);
			MISC::CLEAR_AREA(Local_405, 100f, true, false, false, false);
			MISC::CLEAR_AREA(Local_406, 100f, true, false, false, false);
			MISC::CLEAR_AREA(Local_407, 100f, true, false, false, false);
			iLocal_167 = 0;
			iLocal_168 = 0;
			iLocal_169 = 0;
			iLocal_174 = 0;
			iLocal_175 = 0;
			iLocal_176 = 0;
			iLocal_177 = 0;
			iLocal_173 = 1;
			iLocal_181 = 1;
			iLocal_182 = 1;
			iLocal_196 = (MISC::GET_GAME_TIMER() + 40000);
			AUDIO::START_AUDIO_SCENE("SASQUATCH_MIX");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			Local_43.f_1 = 1;
		}
	}
	if (Local_43.f_1 == 1)
	{
		func_391();
		func_443();
		func_442();
		if (!__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			func_254(6);
			Local_43.f_9 = 1;
			Local_43.f_1 = 3;
		}
		else if (func_16(Local_45.f_0))
		{
			func_254(6);
			__LIB_0__::func_229("Hunnter dead", 7000, 1);
			Local_43.f_9 = 2;
			Local_43.f_1 = 3;
		}
		else if ((__LIB_17__::func_123(Local_45.f_0, 0, 70f, 170f, 1, 0, 0, 0) || !__LIB_0__::func_725(Local_45.f_0, Local_397, 1.5f, 1)) || PED::IS_PED_RAGDOLL(Local_45.f_0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_45.f_0, joaat("HATES_PLAYER"));
			TASK::TASK_COMBAT_PED(Local_45.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
			__LIB_0__::func_429();
			func_254(6);
			Local_43.f_9 = 3;
			Local_43.f_1 = 3;
		}
		else if (Local_43.f_6)
		{
			Local_43.f_1 = 3;
		}
		else if (Local_43.f_4)
		{
			func_254(3);
			Local_43.f_1 = 3;
		}
		else if (Local_43.f_5)
		{
			func_254(1);
			Local_43.f_1 = 3;
		}
		else
		{
			bVar0 = __LIB_16__::func_325(&uLocal_63, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			if (iLocal_182 && __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_388, 250f, 1))
			{
				func_377();
				func_413();
				iLocal_182 = 0;
			}
			if (bLocal_410)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					bLocal_410 = false;
				}
			}
			func_422();
			if (iLocal_174 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_222(&uLocal_199, 4, Local_45.f_0, "HUNTER" /* GXT: FH-1 Hunter */, 0, 1);
					if (func_419(&uLocal_199, "SAS1AUD", "SAS1_LO", "SAS1_LO_1", "SAS1_START1", "SAS1_START1_1", "SAS1_START1", "SAS1_START1_2", 7, 0, 0))
					{
						iLocal_174 = 1;
					}
				}
			}
			else if (iLocal_175 == 0)
			{
				func_418();
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_222(&uLocal_199, 4, Local_45.f_0, "HUNTER" /* GXT: FH-1 Hunter */, 0, 1);
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_45.f_0, 25f, 25f, 25f, false, true, 0))
					{
						if ((((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ADVANCEDRIFLE"), false) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false))
						{
							if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_START2", 7, 0, 0, 0))
							{
								iLocal_175 = 1;
							}
						}
						else if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_START1B", 7, 0, 0, 0))
						{
							iLocal_175 = 1;
						}
					}
					else
					{
						iLocal_175 = 1;
					}
				}
			}
			else if (iLocal_167 == 0)
			{
				func_418();
				if (__LIB_0__::func_75())
				{
					if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_45.f_0) > 25f)
					{
						__LIB_0__::func_429();
					}
				}
				else
				{
					__LIB_0__::func_229("SAS1_B1", 7500, 0);
					iLocal_167 = 1;
				}
			}
			else
			{
				if (iLocal_169 == 0)
				{
					if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_388, 5f, 1))
					{
						__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_SCAT", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 3);
							iLocal_169 = 1;
						}
					}
				}
				if (iLocal_176 == 0)
				{
					if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_47.f_1[0 /*14*/].f_1, 40f, 1))
					{
						if (func_373())
						{
							__LIB_0__::func_714(&iLocal_61);
							Local_48.f_3 = __LIB_14__::func_661(Local_48.f_2, 1, 0, 5);
							HUD::SET_BLIP_SCALE(Local_48.f_3, 1f);
							AUDIO::PLAY_SOUND_FROM_COORD(Local_48.f_5, "ALERT", -1541.9651f, 4692.7246f, 44.0651f, "SASQUATCH_01_SOUNDSET", false, 0, false);
							HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(Local_48.f_2, true), 30f, 6);
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_47.f_1[0 /*14*/].f_1, 6000, 1024, 2);
							iLocal_176 = 1;
							iLocal_190 = -1;
							func_415();
						}
					}
				}
				else if (iLocal_177 == 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (iLocal_190 < 0)
						{
							iLocal_190 = MISC::GET_GAME_TIMER() + 2000;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_190)
						{
							__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_CHASE1a", 7, 0, 0, 0))
							{
								iLocal_177 = 1;
								func_254(3);
								Local_43.f_1 = 3;
							}
						}
					}
				}
				if (iLocal_168 == 0)
				{
					if (bVar0 == 0)
					{
						__LIB_0__::func_229("SAS1_A0", 7500, 0);
						iLocal_168 = 1;
						iLocal_172 = MISC::GET_GAME_TIMER() + 30000;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_172)
				{
					if (bVar0)
					{
						iLocal_168 = 0;
					}
				}
			}
		}
	}
	if (Local_43.f_1 == 3)
	{
		__LIB_0__::func_714(&iLocal_61);
		func_243();
	}
}

void func_415()//Position - 0x32BBA
{
	int iVar0;
	MISC::CLEAR_AREA(Local_404, 50f, true, false, false, false);
	MISC::CLEAR_AREA(Local_405, 50f, true, false, false, false);
	MISC::CLEAR_AREA(Local_406, 50f, true, false, false, false);
	MISC::CLEAR_AREA(Local_407, 20f, true, false, false, false);
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (((__LIB_0__::func_725(iVar0, Local_404, 50f, 1) || __LIB_0__::func_725(iVar0, Local_405, 50f, 1)) || __LIB_0__::func_725(iVar0, Local_406, 50f, 1)) || __LIB_0__::func_725(iVar0, Local_407, 20f, 1))
		{
			ENTITY::SET_ENTITY_COORDS(iVar0, Local_383, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_384);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
		}
	}
}

void func_418()//Position - 0x32D12
{
	if (iLocal_173)
	{
		if (!__LIB_0__::func_695(Local_44.f_35[0]) && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_45.f_0) < 25f)
		{
			__LIB_0__::func_429();
			if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", "SAS1_BUGGY", 8, 0, 0, 0))
			{
				iLocal_173 = 0;
			}
		}
	}
}

bool func_419(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x32D63
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam9, iParam10, 0);
	if (iParam8 > 7)
	{
		if (iParam8 < 12)
		{
			iParam8 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_421(3, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_16__::func_607(&uVar0, &uVar1, iParam8, 0);
}

void func_421(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x33129
{
	Global_21602 = iParam0;
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_422()//Position - 0x331B1
{
	if (__LIB_0__::func_692(Local_45.f_0) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_45.f_0, 50f, 1))
		{
			if (__LIB_17__::func_114(Local_45.f_0, 1126825984))
			{
				func_423(&uLocal_194, 7000, "SAS1_TARGET");
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_423(&uLocal_195, 7000, "SAS1_GUN");
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_45.f_0))
			{
				func_423(&uLocal_193, 10000, "SAS1_BUMP");
			}
			func_423(&iLocal_196, 40000, "SAS1_RETURN");
		}
	}
}

void func_423(int iParam0, int iParam1, char* sParam2)//Position - 0x33245
{
	if (MISC::GET_GAME_TIMER() > *iParam0)
	{
		__LIB_0__::func_222(&uLocal_199, 4, Local_45.f_0, "HUNTER" /* GXT: FH-1 Hunter */, 0, 1);
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", sParam2, 7, 1, 0, 0))
			{
				*iParam0 = (MISC::GET_GAME_TIMER() + iParam1);
			}
		}
		else if (__LIB_2__::func_859(&uLocal_199, "SAS1AUD", sParam2, 7, 0, 0, 0))
		{
			*iParam0 = (MISC::GET_GAME_TIMER() + iParam1);
		}
	}
}

void func_442()//Position - 0x33BDE
{
	int iVar0;
	if (iLocal_181 && __LIB_0__::func_692(Local_45.f_0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_45.f_0, sLocal_379, "hunter_leadout", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_45.f_0, sLocal_379, "hunter_leadout") > 0.9f)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_379))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle", 8f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle_action", 1000f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle_look", 1000f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle_action", 1000f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle", 1000f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle", 1000f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_379, "hunter_idle_look", 1000f, -1000f, -1, iLocal_382, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_45.f_0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_181 = 0;
				}
			}
		}
	}
}

void func_443()//Position - 0x33D23
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		if (!(Local_42[iVar0 /*13*/].f_11 == 3 && MISC::GET_GAME_TIMER() < Local_42[iVar0 /*13*/].f_10))
		{
			Local_42[iVar0 /*13*/].f_11 = func_444(&(Local_42[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

int func_444(var uParam0)//Position - 0x33D70
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	bool bVar12;
	float fVar13;
	iVar1 = 0;
	if (*uParam0 == 1)
	{
		return 1;
	}
	if (!__LIB_0__::func_121(uParam0->f_1) || !__LIB_0__::func_121(uParam0->f_2))
	{
		if (uParam0->f_5 != 0)
		{
			iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_5, &iVar1, &Var2, &uVar3, &uVar4);
			uParam0->f_5 = 0;
		}
		if (!__LIB_0__::func_121(uParam0->f_1))
		{
			func_445(uParam0->f_1);
		}
		if (!__LIB_0__::func_121(uParam0->f_2))
		{
			func_445(uParam0->f_2);
		}
		return 1;
	}
	fVar6 = (uParam0->f_3 / 2f);
	Var7 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true) };
	Var8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2, true) };
	if (uParam0->f_3 > 0f)
	{
		Var9 = { __LIB_0__::func_79(Var8 - Var7) };
		fVar10 = __LIB_0__::func_158(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), Var9);
		if (fVar10 <= SYSTEM::COS(fVar6))
		{
			if (uParam0->f_5 != 0)
			{
				iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_5, &iVar1, &Var2, &uVar3, &uVar4);
				uParam0->f_5 = 0;
			}
			return 1;
		}
	}
	if (uParam0->f_5 == 0)
	{
		Var7 = { PED::GET_PED_BONE_COORDS(uParam0->f_1, 31086, 0f, 0.6f, 0f) };
		uParam0->f_7 = { Var8 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_2) * FtoV(MISC::GET_FRAME_TIME()) };
		Var0 = { uParam0->f_7 - Var7 * Vector(1.25f, 1.25f, 1.25f) + Var7 };
		uParam0->f_5 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var7, Var0, 511, 0, 7);
		return 2;
	}
	bVar12 = false;
	iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_5, &iVar1, &Var2, &uVar3, &uVar4);
	if (iVar5 == 0)
	{
		uParam0->f_5 = 0;
		return 1;
	}
	else if (iVar5 == 1)
	{
		return 2;
	}
	if (iVar1 == 0)
	{
		uParam0->f_4 = MISC::GET_GAME_TIMER();
	}
	else
	{
		fVar13 = MISC::ABSF((ENTITY::GET_ENTITY_SPEED(uParam0->f_1) * MISC::GET_FRAME_TIME()));
		fVar13 = 0f;
		fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_7, Var2, false);
		if (PED::IS_PED_IN_ANY_HELI(uParam0->f_1))
		{
			bVar12 = fVar11 <= (5f + fVar13);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
		{
			bVar12 = fVar11 <= (2.5f + fVar13);
		}
		else if (TASK::IS_PED_RUNNING(uParam0->f_2))
		{
			bVar12 = fVar11 <= (0.8f + fVar13);
		}
		else if (PED::IS_PED_IN_COVER(uParam0->f_2, false))
		{
			bVar12 = fVar11 <= (0.31f + fVar13);
		}
		else
		{
			bVar12 = fVar11 <= (0.5f + fVar13);
		}
		if (bVar12 && MISC::ABSF((uParam0->f_7.f_2 - Var2.f_2)) > 1f)
		{
			bVar12 = false;
		}
		uParam0->f_6 = bVar12;
		if (bVar12)
		{
			uParam0->f_4 = MISC::GET_GAME_TIMER();
		}
	}
	uParam0->f_10 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(64, 256));
	uParam0->f_5 = 0;
	return 3;
}

void func_445(int iParam0)//Position - 0x33FFD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		if (Local_42[iVar0 /*13*/] == 0)
		{
			if (Local_42[iVar0 /*13*/].f_1 == iParam0 || Local_42[iVar0 /*13*/].f_2 == iParam0)
			{
				func_446(&(Local_42[iVar0 /*13*/]));
			}
		}
		iVar0++;
	}
}

void func_446(var uParam0)//Position - 0x3404E
{
	if (*uParam0 == 0)
	{
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		uParam0->f_4 = 0;
		uParam0->f_10 = 0;
		uParam0->f_11 = 1;
		uParam0->f_5 = 0;
	}
}

void func_447()//Position - 0x3407F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_373);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_374);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_375);
}

void func_448(bool bParam0)//Position - 0x340AA
{
	if (Local_45.f_4 == 0)
	{
		if (bParam0)
		{
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_324())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_393, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_394);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (__LIB_0__::func_692(Local_44.f_28[0]))
			{
				Local_45.f_0 = Local_44.f_28[0];
				ENTITY::SET_ENTITY_COORDS(Local_45.f_0, Local_395, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_45.f_0, fLocal_396);
			}
			else
			{
				Local_45.f_0 = PED::CREATE_PED(26, iLocal_371, Local_395, fLocal_396, true, true);
				__LIB_0__::func_0(&(Local_44.f_28[0]));
			}
			if (func_450(Local_45.f_0, joaat("PLAYER"), iLocal_368))
			{
				if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_45.f_0, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
				}
			}
		}
		func_449();
		Local_45.f_4 = 1;
	}
}

void func_449()//Position - 0x3418D
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 4);
	if (!OBJECT::DOES_PICKUP_EXIST(Local_45.f_2))
	{
		Local_45.f_2 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_SNIPERRIFLE"), Local_398, Local_399, iVar0, 100, 0, true, 0);
	}
	if (!OBJECT::DOES_PICKUP_EXIST(Local_45.f_3))
	{
		if (Local_400.f_2 != 0f)
		{
			Local_45.f_3 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PUMPSHOTGUN"), Local_400, Local_401, iVar0, 48, 0, true, 0);
		}
	}
}

int func_450(int iParam0, int iParam1, int iParam2)//Position - 0x34201
{
	if (__LIB_0__::func_692(iParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
		if (iParam2 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam2, 100, true, true);
			PED::SET_PED_ACCURACY(iParam0, 10);
		}
		return 1;
	}
	return 0;
}

int func_451()//Position - 0x3425B
{
	if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_371) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_373)) && STREAMING::HAS_MODEL_LOADED(iLocal_374)) && STREAMING::HAS_MODEL_LOADED(iLocal_375)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_372)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_379)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_380))
	{
		return 1;
	}
	return 0;
}

void func_452()//Position - 0x342C6
{
	STREAMING::REQUEST_MODEL(iLocal_371);
	STREAMING::REQUEST_MODEL(iLocal_372);
	STREAMING::REQUEST_MODEL(iLocal_373);
	STREAMING::REQUEST_MODEL(iLocal_374);
	STREAMING::REQUEST_MODEL(iLocal_375);
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_372, 3);
	STREAMING::REQUEST_ANIM_DICT(sLocal_379);
	STREAMING::REQUEST_ANIM_DICT(sLocal_380);
}

void func_461()//Position - 0x34451
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (Local_43.f_3 == 1)
	{
		func_378(1, 1);
		func_10(1);
		func_8(1);
		func_2(1);
		__LIB_14__::func_871(&Local_44, 1, 1, 1);
		iLocal_37 = 0;
		while (!func_504(&Local_44))
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_90())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		__LIB_14__::func_748(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
		__LIB_14__::func_879(1, 1, 1);
		Local_43.f_3 = 0;
	}
	if (Local_43.f_1 == 0)
	{
		__LIB_14__::func_747(0);
		fVar0 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1295.8436f, 4641.9883f, 105.33246f, 1);
		fVar1 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1301.4353f, 4641.214f, 105.62495f, 1);
		fVar2 = (fVar0 - fVar1);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
		if (fVar0 < fVar1)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("sas_1_rcm_concat", 5, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("sas_1_rcm_concat", 6, 8);
		}
		if (__LIB_14__::func_740(1, 1093140480, 0))
		{
			func_449();
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			if (__LIB_0__::func_692(Local_44.f_28[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_44.f_28[0], "Hunter" /* GXT: FH-1 Hunter */, 0, 0, 0);
				iLocal_62 = __LIB_42__::func_876(Local_44.f_28[0], 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_62, "SAS_SniperRifle", 0, 0, 0);
				}
			}
			__LIB_0__::func_84(500, 0);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_408, Local_409, false, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			__LIB_14__::func_841();
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TheLastOne", 0);
			RECORDING::REPLAY_START_EVENT(4);
			__LIB_14__::func_614(Local_50, Local_51, fLocal_52, -1310.38f, 4642.96f, 107.35f, 313.34f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
			func_347(-1298.98f, 4640.16f, 105.67f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			MISC::CLEAR_AREA(-1561.7932f, 4668.8057f, 48.043373f, 218.90741f, true, false, false, false);
			func_452();
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			Local_43.f_1 = 1;
		}
	}
	if (Local_43.f_1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
			}
		}
		if (__LIB_0__::func_692(Local_44.f_28[0]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Hunter" /* GXT: FH-1 Hunter */, 0))
			{
				Local_45.f_0 = Local_44.f_28[0];
				if (func_450(Local_45.f_0, joaat("PLAYER"), iLocal_368))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_379))
					{
						TASK::TASK_PLAY_ANIM(Local_45.f_0, sLocal_379, "hunter_leadout", 1000f, -8f, -1, iLocal_382, 0f, false, false, false);
					}
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
		}
		if (Local_43.f_4)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			func_254(2);
			Local_43.f_1 = 3;
		}
		else if (Local_43.f_6)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			Local_43.f_1 = 3;
		}
		else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			func_452();
			if (func_451())
			{
				Local_43.f_1 = 3;
			}
		}
	}
	if (Local_43.f_1 == 3)
	{
		if (CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_14__::func_870(1, 1, 1, 0);
			__LIB_14__::func_800(&Local_44, 0, 1);
			__LIB_0__::func_123(&iLocal_62);
			iLocal_187 = MISC::GET_GAME_TIMER() + 500;
			func_254(2);
			func_243();
		}
	}
}

void func_469()//Position - 0x34D56
{
	int iVar0;
	int iVar1;
	if ((((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SAS_BANK_01", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SAS_BANK_02", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAS_BANK_03", false, -1)) && func_371()) && func_370())
	{
		if (AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_DISTANT_SASQUATCH"))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_DISTANT_SASQUATCH", false, true);
		}
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_378, true);
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&uLocal_199, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (__LIB_0__::func_323())
		{
			iVar0 = __LIB_0__::func_344();
			if (Global_94618 == 1)
			{
				if (iVar0 == 0)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0++;
				}
				bLocal_410 = false;
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
			{
				iVar1 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"));
				if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar1) < 8)
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 8, true, true);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 8, true, true);
			}
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_427(Local_393, fLocal_394, 1, 0);
					func_470(1);
					func_243();
					break;
				case 2:
					__LIB_0__::func_427(Local_402, fLocal_403, 1, 0);
					func_470(2);
					func_243();
					break;
				case 3:
					__LIB_0__::func_427(-1518.7616f, 4540.3525f, 44.5008f, 95.2894f, 1, 0);
					func_470(3);
					func_243();
					break;
				case 4:
					func_470(4);
					func_243();
					break;
				default:
					break;
			}
		}
		else
		{
			if (__LIB_0__::func_2(0))
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("sas_1_rcm_concat", 5, 8);
				while (!__LIB_0__::func_90())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			STREAMING::REQUEST_ANIM_DICT(sLocal_379);
			STREAMING::REQUEST_ANIM_DICT(sLocal_380);
			func_254(1);
			func_243();
		}
	}
}

void func_470(int iParam0)//Position - 0x34F2C
{
	Local_43.f_7 = iParam0;
	Local_43.f_6 = 1;
}

void func_490()//Position - 0x35A1F
{
	Local_43.f_4 = 0;
	Local_43.f_5 = 0;
	Local_43.f_6 = 0;
	Local_43.f_3 = 0;
	Local_43.f_8 = -1;
}

void func_491()//Position - 0x35A40
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	Local_47.f_353 = 0;
	Local_402.f_2 = 0f;
	Local_393.f_2 = 0f;
	Local_395.f_2 = 0f;
	func_502(-1301.927f, 4640.9043f, 105.6265f, 105.2908f);
	func_501(-1298.7554f, 4639.871f, 105.6797f, 31.4224f);
	func_500(-1562.72f, 4699.07f, 49.81f, 9f, 3f, 0f);
	func_499(-1562.8904f, 4699.2236f, 49.9836f, 81.8633f);
	func_497(-1608.569f, 4704.6196f, 40.975f, -1638.4121f, 4669.233f, 33.017025f, 46.5f, -1f, 0, 60);
	func_497(-1641.1367f, 4665.74f, 31.6091f, -1636.5812f, 4651.8643f, 32.58714f, 70f, 80f, 2000, 60);
	func_496(-1628.3339f, 4624.631f, 40.8662f, 19.5915f, 30f);
	func_497(-1640.1631f, 4616.7466f, 42.6314f, -1629.5735f, 4595.201f, 40.98951f, 30f, -1f, 2000, 60);
	func_497(-1617.9073f, 4577.033f, 42.3259f, -1594.5806f, 4587.9233f, 35.4044f, 40f, 50f, 6000, 60);
	func_497(-1579.0415f, 4612.706f, 29.0916f, -1547.6313f, 4600.6743f, 21.0284f, 30f, -1f, 4000, 60);
	func_497(-1530.2128f, 4619.2285f, 29.8095f, -1508.77f, 4618.628f, 38.1616f, 25f, 45f, 4000, 60);
	func_497(-1499.0764f, 4618.7544f, 42.87984f, -1491.3115f, 4608.316f, 43.9719f, 25f, 45f, 2500, 60);
	func_497(-1476.7128f, 4613.295f, 47.398f, -1469.9266f, 4596.369f, 45.796448f, 22.5f, -1f, 2500, 60);
	func_496(-1458.9276f, 4590.8887f, 46.9975f, 25.5399f, 25f);
	func_496(-1495.7543f, 4569.3555f, 37.398315f, -70.47f, 25f);
	func_496(-1487.8613f, 4550.3735f, 42.688f, 149.2f, 25f);
	func_497(-1453.76f, 4579.5317f, 44.3204f, -1461.2246f, 4559.684f, 43.08227f, 27.5f, 80f, 3000, 60);
	func_497(-1469.6111f, 4552.7456f, 45.561f, -1490.8536f, 4546.8696f, 43.323307f, 27.5f, 2250f, 4000, 60);
	func_497(-1505.9806f, 4534.826f, 44.4468f, -1539.3424f, 4539.5303f, 46.8468f, 45f, 80f, 0, 60);
	func_495(-1537.53f, 4539.51f, 47.87f, -1537.53f, 4539.51f, 47.87f, 10f);
	__LIB_16__::func_329(&uLocal_63);
	__LIB_16__::func_328(&uLocal_63, -1241.7709f, 4394.9653f, 3.8679f);
	__LIB_16__::func_328(&uLocal_63, -1240.532f, 4611.695f, 130.3852f);
	__LIB_16__::func_328(&uLocal_63, -1221.6125f, 4702.2856f, 125.4371f);
	__LIB_16__::func_328(&uLocal_63, -1461.1195f, 4795.8184f, 84.8864f);
	__LIB_16__::func_328(&uLocal_63, -1545.0295f, 4769.5073f, 61.4836f);
	__LIB_16__::func_328(&uLocal_63, -1649.4033f, 4828.1045f, 59.7308f);
	__LIB_16__::func_328(&uLocal_63, -1828.7227f, 4677.121f, 56.0479f);
	__LIB_16__::func_328(&uLocal_63, -1721.5918f, 4503.2275f, 0.0447f);
	__LIB_16__::func_328(&uLocal_63, -1640.8074f, 4488.236f, 0.3443f);
	__LIB_16__::func_328(&uLocal_63, -1561.4725f, 4377.0366f, 2.2095f);
	__LIB_16__::func_328(&uLocal_63, -1359.1692f, 4339.5312f, 3.8651f);
	__LIB_16__::func_327(&uLocal_63);
	__LIB_16__::func_329(&uLocal_115);
	__LIB_16__::func_328(&uLocal_115, -1541.9324f, 4538.0264f, 46.205505f);
	__LIB_16__::func_328(&uLocal_115, -1530.1727f, 4515.1997f, 41.436943f);
	__LIB_16__::func_328(&uLocal_115, -1507.4967f, 4498.376f, 45.2857f);
	__LIB_16__::func_328(&uLocal_115, -1489.4603f, 4511.4023f, 47.72325f);
	__LIB_16__::func_328(&uLocal_115, -1507.9269f, 4587.8716f, 34.033413f);
	__LIB_16__::func_328(&uLocal_115, -1535.4941f, 4571.5083f, 38.508503f);
	__LIB_16__::func_328(&uLocal_115, -1543.2806f, 4554.6255f, 35.515556f);
	__LIB_16__::func_328(&uLocal_115, -1539.6567f, 4545.945f, 45.68447f);
	__LIB_16__::func_327(&uLocal_115);
	sLocal_365[0] = "SAS1_LEADOUT_3";
	sLocal_365[1] = "SAS1_LEADOUT_4";
	sLocal_365[2] = "SAS1_LEADOUT_5";
	sLocal_365[3] = "SAS1_LEADOUT_6";
}

void func_495(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x36051
{
	Local_391 = { Param0 };
	Local_392 = { Param1 };
	fParam2 = fParam2;
}

void func_496(struct<3> Param0, float fParam1, float fParam2)//Position - 0x3606F
{
	int iVar0;
	if (iLocal_60 >= 4)
	{
	}
	iVar0 = iLocal_60;
	Local_59[iVar0 /*16*/].f_1 = 0;
	Local_59[iVar0 /*16*/].f_11 = { Param0 };
	Local_59[iVar0 /*16*/].f_14 = fParam1;
	Local_59[iVar0 /*16*/].f_15 = fParam2;
	iLocal_60++;
}

void func_497(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, int iParam4, int iParam5)//Position - 0x360BA
{
	func_498(1, Param0, 0f, Param1, fParam2, fParam3, iParam4, iParam5);
}

void func_498(int iParam0, struct<3> Param1, float fParam2, struct<3> Param3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x360D8
{
	int iVar0;
	if (Local_47.f_353 >= 25)
	{
	}
	iVar0 = Local_47.f_353;
	Local_47.f_1[iVar0 /*14*/] = iParam0;
	Local_47.f_1[iVar0 /*14*/].f_12 = 0;
	Local_47.f_1[iVar0 /*14*/].f_13 = 0;
	Local_47.f_1[iVar0 /*14*/].f_1 = { Param1 };
	Local_47.f_1[iVar0 /*14*/].f_4 = fParam2;
	Local_47.f_1[iVar0 /*14*/].f_5 = { Param3 };
	Local_47.f_1[iVar0 /*14*/].f_8 = uParam4;
	Local_47.f_1[iVar0 /*14*/].f_9 = uParam5;
	Local_47.f_1[iVar0 /*14*/].f_10 = uParam6;
	Local_47.f_1[iVar0 /*14*/].f_11 = uParam7;
	Local_47.f_353++;
}

void func_499(struct<3> Param0, float fParam1)//Position - 0x36187
{
	Local_402 = { Param0 };
	fLocal_403 = fParam1;
}

void func_500(struct<3> Param0, struct<3> Param1)//Position - 0x3619D
{
	Local_388 = { Param0 };
	Local_389 = { Param1 };
}

void func_501(struct<3> Param0, float fParam1)//Position - 0x361B7
{
	Local_395 = { Param0 };
	fLocal_396 = fParam1;
}

void func_502(struct<3> Param0, float fParam1)//Position - 0x361CD
{
	Local_393 = { Param0 };
	fLocal_394 = fParam1;
}

int func_504(var uParam0)//Position - 0x362D8
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = iLocal_38;
	iVar0[1] = joaat("dune");
	iVar0[2] = joaat("prop_crate_07a");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "sas_1_rcm_concat", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmlastone1");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SNIPERRIFLE"), 31, 0);
			iLocal_37 = 1;
			break;
		case 1:
			if (((!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmlastone1")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN"))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SNIPERRIFLE")))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar2 = true;
			uParam0->f_28[0] = PED::CREATE_PED(25, iLocal_38, -1299.02f, 4639.86f, 106.66f, 345.7769f, true, true);
			if (__LIB_0__::func_692(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_SNIPERRIFLE"), 100, true, true);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmlastone1", "idle_action_01", 8f, -8f, -1, 1, 0f, false, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
			}
			else
			{
				bVar2 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[1], -1303.1628f, 4648.085f, 104.9664f, 293.1504f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_509()//Position - 0x3657F
{
	__LIB_14__::func_841();
	if (__LIB_14__::func_843())
	{
		func_510();
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (__LIB_0__::func_75())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	PED::RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER();
	PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, true);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SASQUATCH_MIX"))
	{
		AUDIO::STOP_AUDIO_SCENE("SASQUATCH_MIX");
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_378, false);
	func_10(0);
	func_8(0);
	func_2(0);
	__LIB_0__::func_106(&iLocal_385);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_408, Local_409, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
	__LIB_14__::func_871(&Local_44, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_510()//Position - 0x36635
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370);
}

