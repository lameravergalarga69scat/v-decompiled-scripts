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
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int* iLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<3> Local_230[1];
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<418> Local_238 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<32> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	struct<3> Local_286 = { 0, 0, 0 } ;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_291 = { 0, 0, 0 } ;
	struct<3> Local_292 = { 0, 0, 0 } ;
	struct<3> Local_293 = { 0, 0, 0 } ;
	struct<3> Local_294 = { 0, 0, 0 } ;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	struct<3> Local_298 = { 0, 0, 0 } ;
	struct<3> Local_299 = { 0, 0, 0 } ;
	struct<3> Local_300 = { 0, 0, 0 } ;
	struct<3> Local_301 = { 0, 0, 0 } ;
	struct<3> Local_302 = { 0, 0, 0 } ;
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	int iLocal_308 = 0;
	char cLocal_309[16] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	char cLocal_312[64] = "";
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	char cLocal_321[64] = "";
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	char cLocal_330[64] = "";
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	char cLocal_339[64] = "";
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_349 = { 0, 0, 0 } ;
	float fLocal_350 = 0f;
	bool bLocal_351 = 0;
	struct<28> Local_352 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 5;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
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
	var uLocal_369 = 0;
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
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 1097859072;
	var uLocal_401 = 1500;
	var uLocal_402 = 45;
	var uLocal_403 = 1103626240;
	var uLocal_404 = 5;
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
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_72 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_77 = { 500f, 500f, 500f };
	iLocal_253 = joaat("A_F_Y_GenHot_01");
	iLocal_254 = joaat("A_F_Y_BevHills_01");
	iLocal_255 = joaat("ambulance");
	iLocal_256 = joaat("bison");
	iLocal_263 = 1;
	iLocal_264 = 1000;
	Local_283 = { 1358.8215f, -1547.3961f, 53.7793f };
	Local_284 = { 1358.8215f, -1547.3961f, 53.7793f };
	Local_285 = { -694.2758f, -1119.4468f, 13.525f };
	Local_286 = { -683.1272f, -1102.1846f, 13.5257f };
	Local_287 = { 410.2629f, -1399.1598f, 28.4017f };
	Local_288 = { 371.3834f, -1482.9553f, 28.3418f };
	Local_289 = { 404.8026f, -1416.2942f, 28.435f };
	Local_290 = { 406.612f, -1419.9369f, 29.003754f };
	Local_291 = { -682.5392f, -1109.0822f, 13.6729f };
	Local_292 = { -688.6727f, -1117.512f, 13.52498f };
	Local_293 = { -667.136f, -1046.0604f, 15.9174f };
	Local_294 = { -703.1228f, -1142.4324f, 9.8127f };
	Local_298 = { -701.2533f, -1080.285f, 12.2884f };
	Local_299 = { -687.8794f, -1108.0731f, 13.5257f };
	Local_300 = { -703.0013f, -1084.073f, 12.1105f };
	fLocal_303 = 25.0227f;
	fLocal_304 = 226.3085f;
	fLocal_305 = -128.23294f;
	fLocal_306 = 238.4969f;
	fLocal_307 = 212.7682f;
	StringCopy(&cLocal_309, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_312, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_321, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_330, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_339, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	Local_348 = { -727.111f, -1046.3568f, 11.439257f };
	Local_349 = { -642.60974f, -1085.5381f, 28.429213f };
	fLocal_350 = 76.75f;
	iLocal_396 = 786468;
	iLocal_397 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_38__::func_753(2);
		func_458();
	}
	MISC::SET_MISSION_FLAG(true);
	func_444();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_238.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_39__::func_903(&Local_238);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x4BE
{
	if (__LIB_39__::func_842(&Local_238))
	{
		__LIB_39__::func_786(&Local_238);
		if (HUD::DOES_BLIP_EXIST(Local_251.f_4))
		{
			HUD::REMOVE_BLIP(&(Local_251.f_4));
		}
		if (__LIB_42__::func_711(&Local_238, 0))
		{
			func_439();
		}
	}
	else
	{
		__LIB_39__::func_893(&Local_238);
		if (Local_238.f_410 < 28)
		{
			func_404(&Local_238, &uLocal_398);
			__LIB_43__::func_582(&Local_238);
			__LIB_39__::func_841(&Local_238, &uLocal_265, 0);
		}
		if (Local_238.f_410 > 2)
		{
			if (!__LIB_39__::func_840(&Local_238))
			{
				func_370();
			}
			else
			{
				__LIB_42__::func_708(&Local_238, "Taxi Not Driveable", __LIB_39__::func_830(&Local_238));
			}
		}
		if (Local_238.f_410 >= 21 && !iLocal_272)
		{
			func_345();
		}
		if (iLocal_274)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		}
		if (Local_238.f_410 == 9 || Local_238.f_410 == 17)
		{
			func_321(&Local_238, 0, 0);
		}
		switch (Local_238.f_410)
		{
			case 0:
				func_318();
				__LIB_39__::func_933(&Local_238, 16, 4f, 0);
				__LIB_39__::func_914(&Local_238, Local_283, Local_284, "TaxiKeyla", iLocal_253, 41.1334f, 15f);
				__LIB_39__::func_900(&Local_238);
				__LIB_39__::func_931(&Local_238, 1);
				break;
			case 1:
				if (func_311())
				{
					__LIB_39__::func_820();
					func_290();
					__LIB_39__::func_812(&(Local_230[0 /*3*/]), "TAXI_SC_BN_04", 100);
					__LIB_39__::func_811(&Local_238, &Local_230);
					__LIB_39__::func_810(&Local_238);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287, Local_288, false, true);
					Local_238.f_14 = { Local_283 };
					__LIB_39__::func_931(&Local_238, 3);
				}
				break;
			case 3:
				if (func_280(&Local_238, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 2, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 4, 1, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_238.f_3, 8, 1, 0, 0);
					}
					__LIB_42__::func_713(&Local_238, 1, 0);
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Escapee", &(Local_251.f_30));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, Local_238.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, joaat("PLAYER"));
					PATHFIND::SET_ROADS_IN_AREA(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, false, true);
					__LIB_39__::func_931(&Local_238, 5);
				}
				break;
			case 5:
				if (func_260(&Local_238, 0, 1109393408))
				{
					func_259();
					__LIB_39__::func_931(&Local_238, 6);
				}
				break;
			case 6:
				if (__LIB_39__::func_868(&Local_238))
				{
					__LIB_43__::func_584(&Local_238, 9, 1, 0, 0);
					__LIB_39__::func_867(&Local_238);
					Local_238.f_17 = { 485.2039f, -1418.0643f, 28.2112f };
					func_252();
					__LIB_39__::func_806(392.8545f, -1379.5774f, 29.2837f, 0, 50f);
					__LIB_39__::func_931(&Local_238, 17);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_238.f_2, Local_238.f_4, false))
					{
						__LIB_42__::func_704(&Local_238);
						__LIB_39__::func_931(&Local_238, 5);
					}
				}
				break;
			case 17:
				func_248(&Local_238, &(Local_238.f_9));
				if (!ENTITY::DOES_ENTITY_EXIST(Local_251.f_3))
				{
					if (func_247())
					{
						func_246(&Local_251, Local_290, fLocal_305);
					}
				}
				else
				{
					func_245(&Local_238, &Local_251);
				}
				if (func_219(&Local_238, 9f, 1097859072, 1117782016))
				{
					if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_238.f_9))
					{
						HUD::SET_BLIP_ROUTE(Local_238.f_9, false);
					}
					HUD::REMOVE_BLIP(&(Local_238.f_9));
					__LIB_39__::func_931(&Local_238, 19);
				}
				break;
			case 19:
				if (func_212())
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_43__::func_584(&Local_238, 139, 1, 0, 0);
						iLocal_274 = 1;
						__LIB_39__::func_931(&Local_238, 9);
					}
				}
				break;
			case 9:
				func_245(&Local_238, &Local_251);
				func_210();
				if (__LIB_39__::func_913(Local_251.f_2, Local_251.f_3))
				{
					__LIB_39__::func_927(&Local_238, 2, 0);
					PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_251.f_2, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 17, true);
					__LIB_42__::func_713(&Local_238, 1, 0);
					Local_251.f_5 = ENTITY::GET_ENTITY_HEALTH(Local_251.f_3);
					Local_251.f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_251.f_3);
					Local_251.f_16 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_251.f_3);
					__LIB_39__::func_933(&Local_238, 13, 0f, 0);
					__LIB_39__::func_933(&Local_238, 20, 0f, 0);
					PED::SET_PED_NON_CREATION_AREA(Local_293, Local_294);
					iLocal_261 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_293, Local_294, false, true, true, true);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					__LIB_39__::func_931(&Local_238, 13);
				}
				break;
			case 13:
				func_210();
				func_245(&Local_238, &Local_251);
				func_248(&Local_238, &(Local_251.f_4));
				if (__LIB_39__::func_928(&Local_238))
				{
					if (func_206(Local_251.f_2, Local_251.f_4))
					{
						__LIB_43__::func_584(&Local_238, 51, 1, 0, 0);
						__LIB_39__::func_931(&Local_238, 25);
					}
					func_202(&Local_238);
					func_199(Local_251.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_352, 2);
					if (func_159())
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_251.f_3))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3);
							VEHICLE::REMOVE_VEHICLE_RECORDING(0, "taxi_oj_fc3");
						}
						__LIB_0__::func_345(&uLocal_45, 0, 0);
						func_156();
						__LIB_39__::func_931(&Local_238, 20);
					}
				}
				break;
			case 20:
				if (func_155())
				{
					if (func_134())
					{
						__LIB_39__::func_931(&Local_238, 14);
					}
				}
				break;
			case 14:
				func_133(&Local_238, &(Local_238.f_43));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_251.f_3, Local_285, 20f, 20f, 60f, true, true, 0) && ENTITY::GET_ENTITY_SPEED(Local_251.f_3) < 5f) || Local_251.f_31 > 2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
						{
							TASK::CLEAR_PED_TASKS(iLocal_257);
							ENTITY::SET_ENTITY_COORDS(iLocal_257, Local_292, true, false, false, true);
						}
						__LIB_43__::func_584(&Local_238, 37, 1, 0, 0);
						__LIB_39__::func_931(&Local_238, 21);
					}
				}
				break;
			case 21:
				func_133(&Local_238, &(Local_238.f_43));
				func_132(&Local_238, Local_251.f_2, 1, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				func_248(&Local_238, &(Local_238.f_9));
				if (HUD::DOES_BLIP_EXIST(Local_251.f_4))
				{
					HUD::REMOVE_BLIP(&(Local_251.f_4));
					Local_238.f_17 = { Local_286 };
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_238.f_9))
				{
					Local_238.f_9 = __LIB_0__::func_488(Local_238.f_17, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_238.f_2, Local_238.f_4, false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_238.f_4, -684.526f, -1105.7596f, 13.52571f, 1f, 1f, 2f, !Local_238.f_140, true, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, -685.0081f, -1101.2966f, 13.527f, -678.677f, -1110.6399f, 15.5871f, 2.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, -704.1705f, -1115.2262f, 13.525f, -700.2585f, -1121.2924f, 15.4336f, 2.25f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, -685.0081f, -1101.2966f, 13.527f, -678.677f, -1110.6399f, 15.5871f, 2.25f, false, true, 0))
							{
								iLocal_231 = 0;
							}
							else
							{
								iLocal_231 = 1;
							}
							Local_238.f_35 = 60f;
							Local_238.f_417 = 143;
							Local_238.f_416 = 143;
							iLocal_274 = 0;
							__LIB_39__::func_931(&Local_238, 22);
						}
					}
				}
				break;
			case 22:
				func_132(&Local_238, Local_251.f_2, 0, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				if (!PED::IS_PED_INJURED(Local_238.f_3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
					{
						if (Local_251.f_31 != 6)
						{
							if (__LIB_39__::func_925(&Local_238, 1, 3f))
							{
								iLocal_273 = 1;
								HUD::REMOVE_BLIP(&(Local_238.f_9));
								__LIB_39__::func_931(&Local_238, 27);
							}
						}
						else
						{
							if (!HUD::DOES_BLIP_EXIST(Local_238.f_9))
							{
								Local_238.f_9 = __LIB_0__::func_488(Local_238.f_17, 1);
							}
							if (func_219(&Local_238, 8f, 1097859072, 1117782016) || __LIB_39__::func_925(&Local_238, 1, 1084227584))
							{
								HUD::REMOVE_BLIP(&(Local_238.f_9));
								__LIB_39__::func_931(&Local_238, 27);
							}
						}
					}
				}
				break;
			case 25:
				func_132(&Local_238, Local_251.f_2, 0, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					__LIB_43__::func_584(&Local_238, 37, 1, 0, 0);
					__LIB_39__::func_931(&Local_238, 27);
				}
				break;
			case 27:
				func_132(&Local_238, Local_251.f_2, 0, 1);
				func_132(&Local_238, iLocal_257, 0, 0);
				if (!PED::IS_PED_INJURED(Local_238.f_3))
				{
					if (HUD::DOES_BLIP_EXIST(Local_251.f_4))
					{
						HUD::REMOVE_BLIP(&(Local_251.f_4));
					}
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
					if (Local_251.f_9 > 2)
					{
						Local_238.f_56 = -10;
					}
					else if (Local_251.f_9 == 0)
					{
						Local_238.f_56 = 7;
						__LIB_39__::func_795(&Local_238, 0);
					}
					else
					{
						Local_238.f_56 = 4;
					}
					__LIB_39__::func_882(&Local_238);
					__LIB_43__::func_914(&Local_238);
					__LIB_39__::func_943(&Local_238);
					__LIB_39__::func_931(&Local_238, 29);
				}
				break;
			case 29:
				HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
				if (func_83(&Local_238, &uLocal_405))
				{
					func_57(&Local_238);
					__LIB_39__::func_931(&Local_238, 28);
				}
				break;
			case 28:
				if (iLocal_272 || iLocal_271)
				{
					__LIB_39__::func_931(&Local_238, 30);
				}
				break;
			case 30:
				HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
				if ((!PED::IS_PED_INJURED(Local_238.f_3) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, Local_238.f_3, true)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, Local_238.f_3, true))
				{
					if (iLocal_277 || SYSTEM::TIMERA() > 20000)
					{
						func_54(1, &Local_238, 1);
						func_458();
					}
					else
					{
						iLocal_236 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_291, 10f, joaat("ambulance"), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_236, false))
						{
							iLocal_277 = 1;
						}
						iLocal_258 = PED::GET_RANDOM_PED_AT_COORD(Local_291, 5f, 5f, 5f, -1);
						if (!PED::IS_PED_INJURED(iLocal_258))
						{
							iLocal_277 = 1;
						}
						if (!iLocal_278)
						{
							if (MISC::CREATE_INCIDENT(5, Local_291, 1, 0f, &uLocal_262, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_278 = 1;
							}
						}
					}
				}
				if (__LIB_14__::func_523(Local_291, 1) > 100f || __LIB_9__::func_694(Local_238.f_3, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_54(1, &Local_238, 1);
					func_458();
				}
				else if ((PED::IS_PED_INJURED(Local_238.f_3) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, PLAYER::PLAYER_PED_ID(), true))
				{
					if (!PED::IS_PED_INJURED(Local_238.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_238.f_3, true);
						TASK::CLEAR_PED_TASKS(Local_238.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_COWER(0, 2000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_238.f_3, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_257, true);
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_COWER(0, 1000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(iLocal_257, true);
					}
					if (!PED::IS_PED_INJURED(Local_251.f_2))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						if (bLocal_275)
						{
							TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
					}
					func_54(1, &Local_238, 1);
					func_458();
				}
				else if ((iLocal_271 && !__LIB_0__::func_75()) && (MISC::GET_GAME_TIMER() - iLocal_267) > 500)
				{
					if (!PED::IS_PED_INJURED(Local_238.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_238.f_3, true);
						TASK::CLEAR_PED_TASKS(Local_238.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_238.f_3, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_257))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_257, true);
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_COWER(0, 1000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(iLocal_257, true);
					}
					if (!PED::IS_PED_INJURED(Local_251.f_2))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
						TASK::CLEAR_PED_TASKS(Local_251.f_2);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_238.f_17, 1000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
					}
					__LIB_39__::func_937(&Local_238, 1);
					func_458();
				}
				break;
			}
	}
}

void func_54(bool bParam0, var uParam1, bool bParam2)//Position - 0x1DF4
{
	if (bParam0)
	{
		func_57(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		__LIB_39__::func_852(1, 0);
	}
	__LIB_39__::func_937(uParam1, bParam2);
}

void func_57(int iParam0)//Position - 0x2229
{
	__LIB_39__::func_852(0, 0);
	if (iParam0->f_411 != 9)
	{
		__LIB_38__::func_753(1);
		__LIB_0__::func_746(15, 1);
	}
	__LIB_39__::func_780(&(Global_113386.f_19097), 1024);
	if (!__LIB_0__::func_703(Global_113386.f_19097, 64))
	{
		__LIB_0__::func_716(__LIB_39__::func_774(__LIB_39__::func_787(iParam0)), 0, 0);
	}
}

int func_83(int iParam0, var uParam1)//Position - 0x2CDF
{
	switch (iLocal_160)
	{
		case 0:
			if (!__LIB_0__::func_75() && __LIB_39__::func_934(iParam0, 0) > 1f)
			{
				if (__LIB_39__::func_878())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				__LIB_39__::func_932(iParam0);
				__LIB_39__::func_851(&(Global_113386.f_19097), 4096);
				__LIB_39__::func_879(uParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, __LIB_39__::func_926(iParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_0__::func_704(1);
				iLocal_160 = 6;
			}
			break;
		case 6:
			if (!__LIB_39__::func_864(uParam1, 0))
			{
				__LIB_39__::func_964(iParam0);
				__LIB_39__::func_933(iParam0, 0, 0, 0);
				__LIB_0__::func_704(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_132(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x47C0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
			{
				if (PED::IS_PED_BEING_JACKED(iParam1))
				{
					if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
					{
						if (Local_238.f_109 == 0)
						{
							__LIB_42__::func_708(&Local_238, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(iParam1))
		{
			if (bParam3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_257);
					TASK::TASK_SMART_FLEE_PED(iLocal_257, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_257, true);
				}
				__LIB_42__::func_708(iParam0, "Target injured.", 13);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					TASK::CLEAR_PED_TASKS(Local_251.f_2);
					TASK::TASK_SMART_FLEE_PED(Local_251.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
				}
				__LIB_42__::func_708(iParam0, "Mistress injured.", 14);
			}
		}
		else if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_257);
					TASK::TASK_SMART_FLEE_PED(iLocal_257, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_257, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					TASK::CLEAR_PED_TASKS(Local_251.f_2);
					TASK::TASK_SMART_FLEE_PED(Local_251.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					PED::SET_PED_KEEP_TASK(Local_251.f_2, true);
				}
				__LIB_42__::func_708(iParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_133(int iParam0, float* fParam1)//Position - 0x4956
{
	STATS::STAT_GET_FLOAT(iParam0->f_428, fParam1, -1);
	iParam0->f_41 = (*fParam1 - iParam0->f_42);
}

int func_134()//Position - 0x4977
{
	struct<3> Var0;
	__LIB_39__::func_898();
	if (iLocal_416 < 3 && iLocal_416 > 0)
	{
		if (__LIB_14__::func_562(iLocal_264))
		{
			iLocal_416 = 3;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_257))
	{
		if (!PED::IS_PED_INJURED(iLocal_257))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_257, true) };
		}
	}
	switch (iLocal_416)
	{
		case 0:
			if (__LIB_0__::func_494(1, 1, 1) && !Local_238.f_142)
			{
				iLocal_264 = MISC::GET_GAME_TIMER();
				__LIB_39__::func_856(&uLocal_355);
				__LIB_39__::func_802(&Local_352, -1, 1);
				__LIB_39__::func_806(Local_299, 0, 15f);
				__LIB_39__::func_806(Local_300, 0, 15f);
				__LIB_39__::func_870(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_144();
				__LIB_39__::func_933(&Local_238, 19, 0, 0);
				iLocal_416 = 1;
			}
			else
			{
				__LIB_39__::func_778("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_238.f_78), 1000);
			}
			break;
		case 1:
			if (__LIB_39__::func_934(&Local_238, 19) > 0.5f)
			{
				__LIB_14__::func_563(0, 0, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_299, 30f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_300, 30f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_299, 30f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_300, 30f, 0);
				func_140(Local_299, 1114636288, 1);
				func_140(Local_300, 1114636288, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_293, Local_294, false, true);
				__LIB_43__::func_584(&Local_238, 35, 1, 1, 0);
				CAM::SET_CAM_COORD(Local_238.f_0, func_139(0));
				CAM::SET_CAM_ROT(Local_238.f_0, func_138(0), 2);
				CAM::SET_CAM_FOV(Local_238.f_0, 44.5167f);
				CAM::SHAKE_CAM(Local_238.f_0, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(Local_238.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_251.f_3, Local_298, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_251.f_3, fLocal_304);
					if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&cLocal_309, Local_298, &iLocal_266))
					{
					}
					if (TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_309, iLocal_266, &uLocal_295))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_251.f_2, Local_251.f_3, &cLocal_309, iLocal_397, iLocal_266 + 4, 0, -1, -1f, false, 2f);
					}
				}
				__LIB_39__::func_933(&Local_238, 19, 0, 0);
				iLocal_416 = 2;
			}
			break;
		case 2:
			if (__LIB_39__::func_934(&Local_238, 19) > 5f)
			{
				__LIB_39__::func_933(&Local_238, 19, 0, 0);
				iLocal_416 = 4;
			}
			else if (__LIB_39__::func_934(&Local_238, 19) > 4.7f)
			{
				if (__LIB_7__::func_691())
				{
					if (!iLocal_282)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_282 = 1;
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_251.f_3, Local_285, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_251.f_3, fLocal_307);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3);
			}
			__LIB_39__::func_933(&Local_238, 19, 0, 0);
			iLocal_416 = 4;
			break;
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
			{
				Local_238.f_141 = 0;
				CAM::DO_SCREEN_FADE_IN(800);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_251.f_3, Local_285, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_251.f_3, fLocal_307);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3);
					if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_251.f_2);
						ENTITY::SET_ENTITY_COORDS(Local_251.f_2, -691.1571f, -1117.732f, 13.52498f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_251.f_2, -49.274364f);
					}
				}
				CAM::DESTROY_CAM(Local_238.f_0, false);
				CAM::DESTROY_CAM(iLocal_237, false);
				__LIB_14__::func_565(1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					SYSTEM::WAIT(0);
				}
				__LIB_39__::func_927(&Local_238, 19, 0);
				iLocal_416 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_138(int iParam0)//Position - 0x4DF7
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return Var0;
}

Vector3 func_139(int iParam0)//Position - 0x4E22
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -686.0368f, -1073.2203f, 16.1762f };
			break;
	}
	return Var0;
}

void func_140(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x4E51
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, &Var1, &fVar0, 1, 3f, 0f);
	Var2 = { __LIB_1__::func_657(Var1, __LIB_28__::func_371(fVar0), fParam1, fParam1, 5f) };
	Var3 = { __LIB_1__::func_657(Var1, fVar0, fParam1, fParam1, -5f) };
	Var3.f_2 = (Var3.f_2 - 22f);
	Var2.f_2 = (Var2.f_2 + 22f);
	if (bParam2)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var3, Var2, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var3, Var2, 1);
	}
}

void func_144()//Position - 0x4F7B
{
	int iVar0;
	iLocal_257 = PED::CREATE_PED(26, iLocal_254, Local_291, fLocal_303, true, true);
	PED::SET_PED_MAX_HEALTH(iLocal_257, 5);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_257, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_257, 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_257, 2, 1, 2, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_257, 20, true);
	__LIB_0__::func_222(&(Local_238.f_244), 5, iLocal_257, "TaxiCarrie", 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_257, fLocal_303);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_STAND_STILL(0, 2500);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0f, false, false, false);
		TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_292, 1f, 0, false, 786603, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_155()//Position - 0x52E0
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_254))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_DUCK_FOR_COVER"))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_156()//Position - 0x5316
{
	STREAMING::REQUEST_MODEL(iLocal_254);
	STREAMING::REQUEST_ANIM_DICT("MOVE_DUCK_FOR_COVER");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_312);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_321);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_330);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_339);
}

int func_159()//Position - 0x5436
{
	if (__LIB_39__::func_934(&Local_238, 20) > 2f)
	{
		if (!Local_238.f_142)
		{
			func_188(&Local_238, &Local_251, (MISC::GET_GAME_TIMER() - iLocal_308) > 15000, 0);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_238.f_4, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_238.f_4, Local_348, Local_349, fLocal_350, false, true, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_238.f_4, 5f, 1, false);
				return 1;
			}
		}
		__LIB_17__::func_112(&uLocal_45, Local_251.f_3, 0, 0, 1, 1, 1);
		func_133(&Local_238, &(Local_238.f_43));
		if (!iLocal_270)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_251.f_3) && IntToFloat((MISC::GET_GAME_TIMER() - iLocal_308)) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(120, "txm_fc_h1_"))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_251.f_2, Local_251.f_3, Local_298, 28f, 0, Local_251.f_1, iLocal_396, 13.75f, -1f);
					iLocal_270 = 1;
				}
			}
		}
	}
	return 0;
}

void func_188(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x657F
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_42__::func_708(iParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		__LIB_42__::func_708(iParam0, "Followee died", 13);
	}
	if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false)) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
	{
		TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
		PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
		__LIB_42__::func_708(iParam0, "Player went wanted", 4);
	}
	func_197(iParam0, uParam1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam3)
		{
			if (func_196(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), 22.5f, 255, 0, 0, 60);
			}
			else if (func_195(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), func_194(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_193(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), 13f, 125, 0, 125, 60);
			}
		}
		if ((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3) < uParam1->f_15 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), true)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam1->f_3) < uParam1->f_16)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_42__::func_708(iParam0, "Taxi shot up the car", 12);
			}
			if (__LIB_39__::func_934(iParam0, 13) > 5f)
			{
				func_192(iParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3);
				uParam1->f_5 = ENTITY::GET_ENTITY_HEALTH(uParam1->f_3);
				uParam1->f_16 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam1->f_3);
			}
		}
		if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				__LIB_43__::func_584(iParam0, 143, 0, 0, 0);
				__LIB_42__::func_708(iParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((__LIB_39__::func_808(&(iParam0->f_409), ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), ENTITY::GET_ENTITY_COORDS(uParam1->f_3, true), 0) == -1 && __LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) >= 150f) && __LIB_39__::func_934(iParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					__LIB_39__::func_933(iParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
						{
							TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
							PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
						}
						__LIB_42__::func_708(iParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_190(iParam0, 6, 1);
					}
					else
					{
						func_190(iParam0, 1, 1);
					}
					__LIB_43__::func_584(iParam0, 13, 1, 0, 0);
				}
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				__LIB_39__::func_933(iParam0, 8, 0, 0);
			}
			else if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				__LIB_43__::func_584(iParam0, 143, 0, 0, 0);
				__LIB_42__::func_708(iParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) < 22.5f && func_196(&(uParam1->f_3))) || (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) < 13f && func_193(&(uParam1->f_3)))) || (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) < func_194(&(uParam1->f_3)) && func_195(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || __LIB_39__::func_929(iParam0, 21))
			{
				if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0->f_4, uParam1->f_3, 17) && __LIB_39__::func_934(iParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					__LIB_39__::func_933(iParam0, 8, 0, 0);
					if (!__LIB_39__::func_929(iParam0, 21))
					{
						__LIB_39__::func_933(iParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!__LIB_0__::func_75())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
							{
								TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
								PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
							}
							__LIB_42__::func_708(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							__LIB_0__::func_325();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_190(iParam0, 3, 1);
					}
					else
					{
						func_190(iParam0, 2, 1);
					}
					if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_43__::func_584(iParam0, 143, 0, 0, 0);
							__LIB_0__::func_429();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
							{
								TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
								PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
							}
							__LIB_42__::func_708(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							__LIB_0__::func_325();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						__LIB_43__::func_584(iParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3);
				}
			}
		}
		else
		{
			if (__LIB_39__::func_929(iParam0, 21))
			{
				__LIB_39__::func_927(iParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					__LIB_39__::func_933(iParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) < 150f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					__LIB_39__::func_933(iParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_190(iParam0, 8, 1);
					__LIB_43__::func_584(iParam0, 13, 1, 0, 0);
					__LIB_39__::func_933(iParam0, 8, 0, 0);
				}
			}
			else
			{
				if (iParam0->f_80 > iParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (__LIB_39__::func_934(iParam0, 8) > 15f && !__LIB_0__::func_75())
					{
						func_190(iParam0, 9, 1);
						__LIB_43__::func_584(iParam0, 13, 1, 0, 0);
						__LIB_39__::func_933(iParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

void func_190(int iParam0, int iParam1, bool bParam2)//Position - 0x6C3E
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_192(int iParam0, var uParam1, bool bParam2)//Position - 0x6CCC
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!__LIB_0__::func_75())
		{
			__LIB_42__::func_713(iParam0, 0, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, false))
			{
				TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, true);
				PED::SET_PED_KEEP_TASK(uParam1->f_2, true);
			}
			__LIB_42__::func_708(iParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			__LIB_0__::func_325();
		}
	}
	else
	{
		__LIB_39__::func_933(iParam0, 13, 0, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam1->f_3);
		func_190(iParam0, 10, 1);
		__LIB_42__::func_713(iParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_193(var uParam0)//Position - 0x6D87
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(*uParam0) || ENTITY::GET_ENTITY_SPEED(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_194(var uParam0)//Position - 0x6DB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_195(var uParam0)//Position - 0x6DF9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 4f && ENTITY::GET_ENTITY_SPEED(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_196(var uParam0)//Position - 0x6E2F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_197(int iParam0, var uParam1)//Position - 0x6E57
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (iParam0->f_414 == 6 || iParam0->f_414 == 1)
			{
				if (func_198(iParam0) == 13)
				{
					__LIB_0__::func_638();
				}
			}
		}
		if (__LIB_0__::func_76(iParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (iParam0->f_414 == 3 || iParam0->f_414 == 2)
			{
				if (func_198(iParam0) == 13)
				{
					__LIB_0__::func_638();
				}
			}
		}
	}
}

int func_198(int iParam0)//Position - 0x6EF1
{
	return iParam0->f_416;
}

void func_199(int iParam0, struct<3> Param1, float fParam2, var uParam3, int iParam4)//Position - 0x6EFE
{
	if (!__LIB_0__::func_75())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (__LIB_2__::func_485(iParam0, Param1, 1) < fParam2)
			{
				if (__LIB_1__::func_52(uParam3))
				{
					__LIB_39__::func_912(uParam3, iParam4, -1);
				}
			}
		}
	}
}

void func_202(int iParam0)//Position - 0x6F61
{
	if (__LIB_39__::func_799(iParam0))
	{
		func_203(iParam0);
	}
}

void func_203(var uParam0)//Position - 0x6F78
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			__LIB_39__::func_927(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (__LIB_39__::func_934(uParam0, 20) > 3f)
				{
					__LIB_43__::func_584(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!__LIB_0__::func_703(uParam0->f_81, 262144) || !__LIB_0__::func_703(uParam0->f_81, 1048576))
				{
					if (__LIB_39__::func_934(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						__LIB_43__::func_584(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!__LIB_0__::func_703(uParam0->f_82, 67108864))
				{
					if (__LIB_39__::func_934(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						__LIB_43__::func_584(uParam0, 85, 1, 0, 0);
						__LIB_39__::func_927(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (__LIB_39__::func_934(uParam0, 20) > 8f)
				{
					__LIB_43__::func_584(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_703(uParam0->f_81, 262144) || __LIB_0__::func_703(uParam0->f_82, 67108864))
			{
				if (!__LIB_39__::func_929(uParam0, 22))
				{
					__LIB_39__::func_855(uParam0, 22);
				}
			}
			if (__LIB_39__::func_929(uParam0, 22) && __LIB_39__::func_934(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!__LIB_0__::func_703(uParam0->f_81, 1048576))
					{
						__LIB_43__::func_584(uParam0, 84, 1, 0, 0);
						__LIB_39__::func_927(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!__LIB_0__::func_703(uParam0->f_82, 134217728))
					{
						__LIB_43__::func_584(uParam0, 85, 1, 0, 0);
						__LIB_39__::func_927(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

int func_206(int iParam0, int iParam1)//Position - 0x7213
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
					if (HUD::DOES_BLIP_EXIST(iParam1))
					{
						HUD::REMOVE_BLIP(&iParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_210()//Position - 0x7305
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 402.42f, -1457.19f, 28.82f };
	Var1 = { -701.25f, -1080.29f, 12.29f };
	if (Var1.f_0 <= Var0.f_0)
	{
		Local_301.f_0 = Var1.f_0;
		Local_302.f_0 = Var0.f_0;
	}
	else
	{
		Local_301.f_0 = Var0.f_0;
		Local_302.f_0 = Var1.f_0;
	}
	if (Var1.f_1 <= Var0.f_1)
	{
		Local_301.f_1 = Var1.f_1;
		Local_302.f_1 = Var0.f_1;
	}
	else
	{
		Local_301.f_1 = Var0.f_1;
		Local_302.f_1 = Var1.f_1;
	}
	Local_301 = { Local_301 - Vector(20f, 20f, 20f) };
	Local_302 = { Local_302 + Vector(20f, 20f, 20f) };
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Local_301.f_0, Local_301.f_1, Local_302.f_0, Local_302.f_1);
}

int func_212()//Position - 0x73F0
{
	__LIB_39__::func_898();
	if (iLocal_417 < 9 && iLocal_417 > 2)
	{
		if (__LIB_14__::func_562(iLocal_264))
		{
			iLocal_417 = 9;
		}
	}
	switch (iLocal_417)
	{
		case 0:
			if (__LIB_0__::func_494(1, 1, 1))
			{
				iLocal_264 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_563(256, 0, 1);
				__LIB_39__::func_856(&uLocal_355);
				__LIB_39__::func_802(&Local_352, 2, 0);
				if (func_218(&Local_251, Local_289, fLocal_306))
				{
					PATHFIND::SET_ROADS_IN_AREA(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, true, true);
					__LIB_39__::func_870(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					__LIB_43__::func_584(&Local_238, 138, 1, 0, 0);
					iLocal_417 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_39__::func_934(&Local_238, 19) > 3f)
			{
				if (!PED::IS_PED_INJURED(Local_251.f_2))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
					TASK::CLEAR_PED_TASKS(Local_251.f_2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_ENTER_VEHICLE(0, Local_251.f_3, 20000, -1, 1f, 1, 0);
						TASK::TASK_PLAY_ANIM(0, "veh@truck@ds@base", "start_engine", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_251.f_3, 1);
					}
				}
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_238.f_17);
				CAM::SET_CAM_COORD(Local_238.f_0, func_217(0));
				CAM::SET_CAM_ROT(Local_238.f_0, func_216(0), 2);
				CAM::SET_CAM_FOV(Local_238.f_0, 17.2f);
				CAM::SHAKE_CAM(Local_238.f_0, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(Local_238.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				__LIB_39__::func_933(&Local_238, 19, 0, 0);
				iLocal_417 = 2;
			}
			break;
		case 2:
			iLocal_237 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
			CAM::SET_CAM_COORD(iLocal_237, func_217(4));
			CAM::SET_CAM_ROT(iLocal_237, func_216(0), 2);
			CAM::SET_CAM_FOV(iLocal_237, 17.2f);
			CAM::SHAKE_CAM(iLocal_237, "HAND_SHAKE", 0.1f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_237, Local_238.f_0, 6000, 1, 1);
			__LIB_39__::func_933(&Local_238, 19, 0, 0);
			iLocal_417 = 3;
			break;
		case 3:
			if (__LIB_39__::func_934(&Local_238, 19) > 7.85f && !iLocal_279)
			{
				if (func_198(&Local_238) > 10)
				{
					func_213();
				}
				iLocal_279 = 1;
			}
			if (__LIB_39__::func_934(&Local_238, 19) > 8f && iLocal_279)
			{
				CAM::SET_CAM_COORD(Local_238.f_0, func_217(2));
				CAM::POINT_CAM_AT_ENTITY(Local_238.f_0, Local_251.f_3, 0f, 0f, 0f, true);
				CAM::SET_CAM_FOV(Local_238.f_0, 35f);
				CAM::SHAKE_CAM(Local_238.f_0, "HAND_SHAKE", 0.2f);
				CAM::SET_CAM_ACTIVE(Local_238.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				__LIB_39__::func_933(&Local_238, 19, 0, 0);
				iLocal_417 = 4;
			}
			break;
		case 4:
			CAM::SET_CAM_COORD(iLocal_237, func_217(2));
			CAM::POINT_CAM_AT_ENTITY(iLocal_237, Local_251.f_3, 0f, 0f, 0f, true);
			CAM::SET_CAM_FOV(iLocal_237, 45f);
			CAM::SHAKE_CAM(iLocal_237, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_237, Local_238.f_0, 10000, 1, 1);
			__LIB_39__::func_933(&Local_238, 19, 0, 0);
			iLocal_417 = 11;
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_3, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_251.f_2, false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_251.f_2, Local_251.f_3, -1);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_251.f_3, 10f);
				__LIB_1__::func_31(&(Local_251.f_27));
				__LIB_39__::func_933(&Local_238, 19, 2f, 0);
				iLocal_417 = 11;
				if (!bLocal_268)
				{
					func_213();
				}
			}
			break;
		case 11:
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, false, 0.85f, false);
			}
			if (__LIB_39__::func_934(&Local_238, 19) > 4f)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_1__::func_31(&(Local_251.f_27));
				CAM::DESTROY_CAM(Local_238.f_0, false);
				CAM::DESTROY_CAM(iLocal_237, false);
				__LIB_14__::func_565(1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				__LIB_39__::func_927(&Local_238, 19, 0);
				iLocal_417 = 12;
			}
			else if (__LIB_39__::func_934(&Local_238, 19) > 3.7f)
			{
				if (__LIB_7__::func_691())
				{
					if (!iLocal_281)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_281 = 1;
					}
				}
			}
			break;
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_213()//Position - 0x78AE
{
	bLocal_268 = true;
	if (!PED::IS_PED_INJURED(Local_251.f_2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251.f_3, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_251.f_2, Local_251.f_3, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_251.f_3, 406.612f, -1419.9369f, 29.003754f, true, false, false, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_251.f_2, Local_251.f_30);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 1, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 6, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 3, false);
				PED::SET_PED_SEEING_RANGE(Local_251.f_2, 500f);
				PED::SET_PED_HEARING_RANGE(Local_251.f_2, 500f);
				PED::SET_PED_ID_RANGE(Local_251.f_2, 500f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_251.f_3, 500);
				ENTITY::SET_ENTITY_LOD_DIST(Local_251.f_2, 500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_251.f_3, true, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_251.f_2, true, 1);
				if (!HUD::DOES_BLIP_EXIST(Local_251.f_4))
				{
					Local_251.f_4 = __LIB_0__::func_639(Local_251.f_3, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_251.f_3, 120, "txm_fc_h1_", true);
				VEHICLE::SET_PLAYBACK_SPEED(Local_251.f_3, 0.8f);
				iLocal_308 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

Vector3 func_216(int iParam0)//Position - 0x7AA2
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		case 1:
			Var0 = { 4.2328f, 0f, 165.0072f };
			break;
		case 2:
			Var0 = { -0.3221f, 0f, 68.7635f };
			break;
		case 3:
			Var0 = { -0.3614f, 0f, -145.1533f };
			break;
		case 4:
			Var0 = { -5.4284f, 0f, 1.8065f };
			break;
		case 5:
			Var0 = { 1.2038f, 0f, 68.7635f };
			break;
		case 6:
			Var0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return Var0;
}

Vector3 func_217(int iParam0)//Position - 0x7B61
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 495.4f, -1416.8f, 30.2f };
			break;
		case 1:
			Var0 = { 429.6911f, -1385.4146f, 29.7266f };
			break;
		case 2:
			Var0 = { 417.9f, -1419.4f, 30.6f };
			break;
		case 3:
			Var0 = { 426.754f, -1386.5096f, 29.6201f };
			break;
		case 4:
			Var0 = { 493.7f, -1416.9f, 30.2f };
			break;
		case 5:
			Var0 = { 450.0146f, -1414.5232f, 34.4507f };
			break;
		case 6:
			Var0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return Var0;
}

int func_218(var uParam0, struct<3> Param1, float fParam2)//Position - 0x7C38
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = PED::CREATE_PED(26, *uParam0, Param1, fParam2, true, true);
	}
	__LIB_0__::func_222(&(Local_238.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_2, "TaxiJames");
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_257, 20, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2, false))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 11, 0, 1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2, uParam0->f_30);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 6, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 3, false);
		PED::SET_PED_SEEING_RANGE(uParam0->f_2, 300f);
		PED::SET_PED_HEARING_RANGE(uParam0->f_2, 300f);
		PED::SET_PED_ID_RANGE(uParam0->f_2, 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	}
	return 1;
}

int func_219(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x7D48
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_231(uParam0))
		{
			func_133(uParam0, &(uParam0->f_43));
			func_226(uParam0);
			func_225(uParam0);
			func_202(uParam0);
			func_224(uParam0, fParam2, fParam3);
			func_222(uParam0);
			return __LIB_39__::func_935(uParam0, fParam1);
		}
	}
	return 0;
}

void func_222(var uParam0)//Position - 0x7ED1
{
	float fVar0;
	if ((__LIB_39__::func_803(uParam0) && __LIB_0__::func_703(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = __LIB_14__::func_523(uParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !__LIB_0__::func_75())
		{
			__LIB_43__::func_584(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!__LIB_39__::func_803(uParam0))
			{
			}
			if (!__LIB_0__::func_703(uParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

void func_224(var uParam0, float fParam1, float fParam2)//Position - 0x7FDC
{
	if (__LIB_39__::func_803(uParam0) && __LIB_0__::func_703(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && __LIB_39__::func_928(uParam0))
		{
			if (!__LIB_39__::func_929(uParam0, 2))
			{
				__LIB_39__::func_855(uParam0, 2);
			}
			else if (__LIB_39__::func_803(uParam0))
			{
				if (__LIB_39__::func_934(uParam0, 2) > fParam1 && !__LIB_39__::func_929(uParam0, 14))
				{
					if (__LIB_39__::func_785())
					{
						__LIB_43__::func_584(uParam0, 48, 1, 0, 0);
					}
					else
					{
						__LIB_43__::func_584(uParam0, 48, 1, 0, 0);
					}
					__LIB_39__::func_933(uParam0, 2, 0, 0);
					if (__LIB_39__::func_929(uParam0, 10))
					{
						__LIB_39__::func_933(uParam0, 10, 0, 0);
					}
				}
				if (!__LIB_39__::func_929(uParam0, 3))
				{
					__LIB_39__::func_933(uParam0, 3, 0, 0);
				}
				else if (__LIB_39__::func_934(uParam0, 3) >= fParam2)
				{
					__LIB_39__::func_927(uParam0, 3, 0);
					__LIB_42__::func_708(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (__LIB_39__::func_929(uParam0, 2))
			{
				__LIB_39__::func_927(uParam0, 2, 0);
			}
			if (__LIB_39__::func_929(uParam0, 3))
			{
				__LIB_39__::func_927(uParam0, 3, 0);
			}
		}
	}
}

void func_225(var uParam0)//Position - 0x80FB
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !__LIB_0__::func_703(uParam0->f_44, 2))
	{
		__LIB_39__::func_780(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_703(uParam0->f_44, 2))
	{
		__LIB_39__::func_851(&(uParam0->f_44), 2);
		uParam0->f_47++;
		__LIB_39__::func_852(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		__LIB_43__::func_584(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_226(var uParam0)//Position - 0x8184
{
	if (!__LIB_0__::func_703(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (__LIB_39__::func_934(uParam0, 9) > 1f)
					{
						__LIB_39__::func_801(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							__LIB_43__::func_584(uParam0, 50, 1, 1, 0);
						}
						__LIB_39__::func_933(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75() && __LIB_39__::func_934(uParam0, 9) > 4f)
				{
					__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_43__::func_584(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), __LIB_39__::func_800(uParam0)))
				{
					__LIB_39__::func_801(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_39__::func_852(6, 0);
				}
				if (!__LIB_21__::func_727(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_39__::func_934(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								__LIB_43__::func_584(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_43__::func_584(uParam0, 53, 1, 0, 1);
					}
					__LIB_39__::func_852(7, __LIB_39__::func_800(uParam0));
					__LIB_39__::func_801(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_927(uParam0, 9, 0);
					__LIB_39__::func_933(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_231(var uParam0)//Position - 0x83F5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				__LIB_42__::func_708(uParam0, "Passenger left car.", 9);
			}
			else if (func_241(uParam0))
			{
				if (__LIB_0__::func_501("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_232(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_232(var uParam0, bool bParam1)//Position - 0x8484
{
	__LIB_43__::func_574(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!__LIB_39__::func_929(uParam0, 14))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_620(1);
				}
				func_190(uParam0, 11, 1);
				func_234(uParam0, 1);
				__LIB_39__::func_933(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!__LIB_39__::func_803(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (__LIB_39__::func_934(uParam0, 15) > 5f)
						{
							__LIB_39__::func_933(uParam0, 15, 0f, 1);
						}
					}
					if (__LIB_39__::func_934(uParam0, 14) > 20f)
					{
						__LIB_42__::func_708(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (__LIB_39__::func_934(uParam0, 14) > 20f)
				{
					if (__LIB_14__::func_556(uParam0->f_4, 1) > 40f)
					{
						__LIB_42__::func_708(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						__LIB_42__::func_708(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_234(var uParam0, bool bParam1)//Position - 0x85A7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				__LIB_43__::func_916(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (__LIB_39__::func_803(uParam0))
				{
					__LIB_43__::func_584(uParam0, 2, 1, 0, 0);
				}
				else
				{
					__LIB_43__::func_916(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			__LIB_43__::func_915(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

int func_241(var uParam0)//Position - 0x87FD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (__LIB_39__::func_929(uParam0, 14))
			{
				__LIB_39__::func_944(uParam0);
			}
			func_234(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_245(int iParam0, var uParam1)//Position - 0x88A9
{
	func_132(iParam0, uParam1->f_2, 1, 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_42__::func_708(&Local_238, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				__LIB_0__::func_325();
			}
		}
	}
	else if (!__LIB_0__::func_75())
	{
		__LIB_42__::func_708(&Local_238, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		__LIB_0__::func_325();
	}
}

int func_246(var uParam0, struct<3> Param1, float fParam2)//Position - 0x8913
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam2;
	uParam0->f_3 = VEHICLE::CREATE_VEHICLE(uParam0->f_1, uParam0->f_17, uParam0->f_10, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(uParam0->f_1, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
	iLocal_235[0] = VEHICLE::CREATE_VEHICLE(iLocal_255, 404.9912f, -1423.9735f, 28.4638f, 227.5235f, true, true, false);
	iLocal_235[1] = VEHICLE::CREATE_VEHICLE(iLocal_255, 402.2958f, -1427.0176f, 28.4632f, 226.6982f, true, true, false);
	iLocal_235[2] = VEHICLE::CREATE_VEHICLE(iLocal_256, 398.415f, -1428.1665f, 28.4504f, 226.4081f, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_235[0], 2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_235[1], 2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_235[2], 2);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_235[0], "BRAVEST");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_235[1], "BOLDEST");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_235[2], "BADDEST");
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, 800, 0);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_3, "PUSSYWAG");
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam0->f_3, true);
	VEHICLE::SET_VEHICLE_ALARM(uParam0->f_3, true);
	uParam0->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_3);
	uParam0->f_31 = 1;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_3, true);
	__LIB_39__::func_806(Local_238.f_14, 1, 1114636288);
	__LIB_39__::func_806(Local_299, 1, 15f);
	__LIB_39__::func_806(Local_300, 1, 15f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_3, 2);
	return 1;
}

int func_247()//Position - 0x8A89
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_251.f_0))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_251.f_1))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_255))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_256))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_263, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(120, "txm_fc_h1_"))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_263, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "taxi_oj_fc3"))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_263, 1000);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_309))
	{
		__LIB_39__::func_778("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_248(int iParam0, var uParam1)//Position - 0x8B77
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if (!__LIB_39__::func_929(iParam0, 14))
			{
				if (HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) > 0)
				{
					HUD::SET_BLIP_ALPHA(*uParam1, 0);
				}
				__LIB_43__::func_915(iParam0, 0, 0);
				__LIB_43__::func_584(iParam0, 2, 1, 0, 0);
			}
			else if (__LIB_39__::func_934(iParam0, 14) > 20f)
			{
				__LIB_42__::func_708(iParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (__LIB_39__::func_929(iParam0, 14))
			{
				__LIB_39__::func_933(iParam0, 2, 0, 0);
				__LIB_39__::func_944(iParam0);
			}
			if (HUD::DOES_BLIP_EXIST(iParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(iParam0->f_10));
			}
			if ((HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) < 255) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
			{
				HUD::SET_BLIP_ALPHA(*uParam1, 255);
				HUD::SET_BLIP_ROUTE(*uParam1, true);
			}
		}
	}
}

void func_252()//Position - 0x8D5E
{
	__LIB_39__::func_780(&(Local_238.f_55), 2);
	__LIB_39__::func_780(&(Local_238.f_55), 4);
	__LIB_39__::func_780(&(Local_238.f_55), 16);
	__LIB_39__::func_780(&(Local_238.f_55), 64);
	__LIB_39__::func_780(&(Local_238.f_55), 256);
	__LIB_39__::func_780(&(Local_238.f_55), 512);
	__LIB_39__::func_780(&(Local_238.f_55), 1024);
	__LIB_39__::func_780(&(Local_238.f_55), 2048);
	__LIB_39__::func_780(&(Local_238.f_55), 1073741824);
	__LIB_39__::func_780(&(Local_238.f_55), 8388608);
	__LIB_39__::func_780(&(Local_238.f_55), 33554432);
	__LIB_39__::func_780(&(Local_238.f_55), 16777216);
	__LIB_39__::func_780(&(Local_238.f_55), 4096);
	__LIB_39__::func_780(&(Local_238.f_100), 8);
	__LIB_39__::func_780(&(Local_238.f_100), 2048);
	__LIB_39__::func_780(&(Local_238.f_100), 256);
	__LIB_39__::func_780(&uLocal_398, 2);
}

void func_259()//Position - 0x8F73
{
	STREAMING::REQUEST_MODEL(Local_251.f_0);
	STREAMING::REQUEST_MODEL(Local_251.f_1);
	STREAMING::REQUEST_MODEL(iLocal_255);
	STREAMING::REQUEST_MODEL(iLocal_256);
	VEHICLE::REQUEST_VEHICLE_RECORDING(120, "txm_fc_h1_");
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, "taxi_oj_fc3");
	TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_309);
	STREAMING::REQUEST_ANIM_DICT("veh@truck@ds@base");
}

int func_260(var uParam0, bool bParam1, float fParam2)//Position - 0x8FBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_232(uParam0, 1);
			if (__LIB_39__::func_878())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			__LIB_43__::func_913(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (__LIB_39__::func_929(uParam0, 14))
			{
				__LIB_39__::func_944(uParam0);
				func_234(uParam0, 0);
			}
			if (__LIB_39__::func_929(uParam0, 9))
			{
				__LIB_39__::func_927(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && __LIB_39__::func_939(uParam0, uParam0->f_3) > 300f)
				{
					__LIB_42__::func_708(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && __LIB_0__::func_724(uParam0->f_3, uParam0->f_11, 1) <= 28f) && __LIB_0__::func_724(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (__LIB_43__::func_917(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					case 1:
						if (__LIB_42__::func_706(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = __LIB_39__::func_871(uParam0->f_4, uParam0->f_3);
								iVar0 = __LIB_39__::func_791(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!__LIB_39__::func_928(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7) && __LIB_39__::func_939(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_86)
						{
							if (__LIB_0__::func_76(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!__LIB_39__::func_809(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__::func_708(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!__LIB_39__::func_777(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__::func_708(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						__LIB_43__::func_575(uParam0);
						if (__LIB_39__::func_939(uParam0, uParam0->f_3) < fVar4 || __LIB_39__::func_878())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_262(uParam0))
								{
									__LIB_39__::func_798(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									__LIB_39__::func_927(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_262(var uParam0)//Position - 0x94F2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	__LIB_39__::func_778("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		__LIB_39__::func_898();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (__LIB_14__::func_562(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (__LIB_39__::func_925(uParam0, 0, 1084227584) && __LIB_0__::func_494(1, 1, 1))
			{
				if (__LIB_39__::func_809(uParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					__LIB_42__::func_708(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = __LIB_39__::func_871(uParam0->f_4, uParam0->f_3);
				iVar3 = __LIB_39__::func_791(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var2 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var2 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = __LIB_39__::func_808(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				__LIB_14__::func_563(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				__LIB_42__::func_713(uParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, __LIB_39__::func_884(uParam0));
				__LIB_39__::func_870(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var1, true);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		case 5:
			__LIB_39__::func_778("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, __LIB_39__::func_869(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				__LIB_42__::func_713(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				__LIB_14__::func_565(1, 1, 1);
				return 1;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_14__::func_565(1, 1, 1);
			return 1;
			break;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_280(var uParam0, int iParam1)//Position - 0xA4DC
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	__LIB_37__::func_274(12);
	if (__LIB_0__::func_703(uParam0->f_44, 8))
	{
		if (!__LIB_0__::func_703(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_703(uParam0->f_44, 256))
			{
				__LIB_39__::func_780(&(uParam0->f_44), 256);
			}
			if (__LIB_0__::func_703(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_43__::func_584(uParam0, 135, 1, 0, 1);
				__LIB_39__::func_780(&(uParam0->f_44), 128);
			}
		}
	}
	if (!__LIB_39__::func_885(uParam0, iParam1))
	{
		if (__LIB_14__::func_556(uParam0->f_3, 1) < 35f)
		{
			if (!__LIB_0__::func_703(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				__LIB_43__::func_584(uParam0, 133, 1, 0, 1);
				__LIB_39__::func_780(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || __LIB_14__::func_556(uParam0->f_3, 1) > 400f)
		{
			__LIB_42__::func_708(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			__LIB_39__::func_857(uParam0);
			__LIB_39__::func_852(2, 0);
			bLocal_86 = true;
			__LIB_3__::func_128(&iLocal_82);
			return 1;
		}
		else
		{
			__LIB_42__::func_708(uParam0, "No Taxi", 21);
			__LIB_0__::func_151("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_290()//Position - 0xADDD
{
	Local_165.f_0 = 0;
	__LIB_39__::func_818(45458/*__LIB_39__::func_819*/, 45433/*__LIB_43__::func_581*/, 1);
	__LIB_39__::func_818(45194/*__LIB_39__::func_887*/, 45170/*__LIB_43__::func_580*/, 1);
	__LIB_39__::func_818(45108/*__LIB_39__::func_816*/, 45083/*__LIB_43__::func_579*/, 1);
	__LIB_39__::func_818(45011/*__LIB_39__::func_815*/, 44987/*__LIB_43__::func_578*/, 1);
	__LIB_39__::func_818(44877/*__LIB_42__::func_707*/, 44856/*__LIB_39__::func_873*/, 1);
	__LIB_39__::func_818(44803/*__LIB_39__::func_858*/, 44778/*__LIB_43__::func_577*/, 1);
	__LIB_39__::func_818(44636/*__LIB_39__::func_886*/, 44612/*__LIB_43__::func_576*/, 1);
}

int func_311()//Position - 0xB3AA
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_253))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!__LIB_39__::func_821(&iLocal_263, 0))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_318()//Position - 0xB8FC
{
	STREAMING::REQUEST_MODEL(iLocal_253);
	__LIB_39__::func_860(0);
	uLocal_405 = __LIB_2__::func_214();
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
}

void func_321(var uParam0, int iParam1, bool bParam2)//Position - 0xB98B
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (__LIB_39__::func_934(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						__LIB_43__::func_584(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						__LIB_43__::func_584(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					__LIB_39__::func_933(uParam0, 10, 0f, 1);
				}
			}
			else if (__LIB_39__::func_934(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					__LIB_43__::func_584(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_39__::func_933(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (__LIB_39__::func_934(uParam0, 10) > 30f)
		{
			if (!__LIB_0__::func_75())
			{
				if (uParam0->f_112)
				{
					__LIB_43__::func_584(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_39__::func_933(uParam0, 10, 0f, 1);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 64))
	{
		if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[5 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (__LIB_39__::func_924(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(5, uParam0);
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 1))
	{
		if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[0 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_922(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(0, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 2))
	{
		if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[1 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_921(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(1, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 2048))
	{
		if (!__LIB_0__::func_702(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				__LIB_3__::func_128(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (__LIB_3__::func_108(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (__LIB_43__::func_918(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(8, uParam0);
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 128))
	{
		if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[6 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_920(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(6, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 32))
	{
		if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[4 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (__LIB_39__::func_919(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(4, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 256))
	{
		if (!__LIB_0__::func_702(&(Local_162[7 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[7 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (__LIB_39__::func_825(uParam0))
			{
				__LIB_39__::func_923(7, uParam0);
				__LIB_39__::func_827(uParam0, 1);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 8))
	{
		if (!__LIB_0__::func_702(&(Local_162[9 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[9 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (__LIB_3__::func_108(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (__LIB_39__::func_824(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(9, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 16384))
	{
		if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[13 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (__LIB_39__::func_936(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(13, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 32768))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[14 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (__LIB_39__::func_918(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(14, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 4096))
	{
		if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[11 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (__LIB_39__::func_917(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(11, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 8192))
	{
		if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[12 /*10*/].f_6));
		}
		else if (__LIB_3__::func_108(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_916(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(12, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 4))
	{
		if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_6)))
		{
			__LIB_38__::func_939(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (__LIB_3__::func_108(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_915(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(2, uParam0);
				__LIB_39__::func_953(uParam0);
			}
		}
	}
}

void func_345()//Position - 0xCD74
{
	struct<3> Var0;
	__LIB_39__::func_778("UPDATE_FINAL_SCENE()", &iLocal_263, 1000);
	if ((Local_238.f_410 >= 28 && !iLocal_272) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_238.f_3, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_257, PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, PLAYER::PLAYER_PED_ID(), true)))
	{
		iLocal_272 = 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_251.f_2, Local_238.f_3, true) && iLocal_415 < 6)
		{
			iLocal_272 = 1;
		}
	}
	if (iLocal_415 >= 4)
	{
		if (__LIB_14__::func_556(Local_238.f_3, 1) < 3f && !iLocal_271)
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_2__::func_859(&(Local_238.f_244), Local_238.f_144, "txm4_aggro", 8, 0, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_238.f_3, PLAYER::PLAYER_PED_ID(), -1, false);
				iLocal_267 = MISC::GET_GAME_TIMER();
				iLocal_271 = 1;
			}
			else if (!iLocal_280)
			{
				__LIB_0__::func_325();
				iLocal_280 = 1;
			}
		}
	}
	switch (iLocal_415)
	{
		case 0:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
			{
				PED::ADD_RELATIONSHIP_GROUP("TAXI_Whore", &iLocal_260);
				iLocal_259 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_238.f_3);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, iLocal_260);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_251.f_30, iLocal_259);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_251.f_2, Local_251.f_30);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_257, iLocal_260);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_251.f_2, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_2, 17, true);
				ENTITY::SET_ENTITY_HEALTH(Local_251.f_2, 130, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_251.f_2, true);
				PED::SET_PED_DIES_WHEN_INJURED(Local_251.f_2, true);
				TASK::CLEAR_PED_TASKS(Local_251.f_2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_257, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_257, 17, true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_257, 130, 0);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_257, true);
				PED::SET_PED_DIES_WHEN_INJURED(iLocal_257, true);
				TASK::CLEAR_PED_TASKS(iLocal_257);
				iLocal_415 = 1;
			}
			break;
		case 1:
			if (((!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_257, false)) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_3, false))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_257, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_312, "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, &cLocal_321, "exit", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
				TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_233);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_251.f_2, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_330, "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_233);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_233);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
				iLocal_415 = 2;
			}
			break;
		case 2:
			if (iLocal_273)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_257, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_238.f_3, iLocal_259);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_238.f_3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_238.f_3, 13, true);
					PED::SET_PED_SHOOT_RATE(Local_238.f_3, 100);
					PED::SET_PED_ACCURACY(Local_238.f_3, 100);
					ENTITY::SET_ENTITY_HEALTH(Local_238.f_3, 105, 0);
					TASK::CLEAR_PED_TASKS(Local_238.f_3);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_STAND_STILL(0, 5000);
					func_347(&Local_238, -691.48f, -1113.31f, 13.53f);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_346(iLocal_231), iLocal_257, 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, iLocal_257, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_234);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					iLocal_269 = 1;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					WEAPON::GIVE_WEAPON_TO_PED(Local_238.f_3, joaat("WEAPON_PISTOL"), 100, true, true);
					iLocal_415 = 3;
				}
			}
			else if (!iLocal_276)
			{
				if (!PED::IS_PED_INJURED(Local_251.f_2) && !PED::IS_PED_INJURED(iLocal_257))
				{
					if (__LIB_14__::func_556(Local_251.f_2, 1) < 2f || __LIB_14__::func_556(iLocal_257, 1) < 2f)
					{
						TASK::CLEAR_PED_TASKS(Local_251.f_2);
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::TASK_LOOK_AT_ENTITY(Local_251.f_2, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
						TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_257, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_233);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_233);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_257, iLocal_233);
						iLocal_276 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_INJURED(Local_251.f_2))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_251.f_2);
						TASK::TASK_SMART_FLEE_PED(Local_251.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					}
					if (PED::IS_PED_INJURED(iLocal_257))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_257);
						TASK::TASK_SMART_FLEE_PED(iLocal_257, PLAYER::PLAYER_PED_ID(), 100f, 20000, false, false);
					}
				}
			}
			break;
		case 3:
			__LIB_39__::func_778("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_263, 1000);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_238.f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(Local_238.f_3) > 0 && iLocal_269)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_269 = 0;
					}
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (((!PED::IS_PED_INJURED(iLocal_257) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_257)) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false)) && !bLocal_275)
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_251.f_2, Local_238.f_3, -1, 2048, 4);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_238.f_3, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
				TASK::TASK_PERFORM_SEQUENCE(Local_251.f_2, iLocal_232);
				bLocal_275 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(Local_238.f_3) > 2)
				{
					__LIB_43__::func_584(&Local_238, 58, 1, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_251.f_2, 2000, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
					TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_234);
					iLocal_415 = 4;
				}
			}
			break;
		case 4:
			__LIB_39__::func_778("FINAL_SCENE_KILL_WOMAN", &iLocal_263, 1000);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_257, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_233);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_233);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -691.48f, -1113.31f, 13.53f, Local_251.f_2, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_251.f_2, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_233);
						TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_233);
					}
				}
				iLocal_415 = 6;
			}
			break;
		case 6:
			__LIB_39__::func_778("FINAL_SCENE_KILL_MAN", &iLocal_263, 1000);
			if (!__LIB_0__::func_75())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false) && !ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false))
				{
					TASK::TASK_SHOOT_AT_ENTITY(Local_238.f_3, Local_251.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_415 = 7;
				}
			}
			break;
		case 7:
			__LIB_39__::func_778("FINAL_SCENE_FLEE", &iLocal_263, 1000);
			if (ENTITY::IS_ENTITY_DEAD(Local_251.f_2, false) && !ENTITY::IS_ENTITY_DEAD(Local_238.f_3, false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_251.f_2, false) };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_234);
				TASK::TASK_AIM_GUN_AT_COORD(0, Var0, 1000, false, false);
				TASK::TASK_SWAP_WEAPON(0, false);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_SMART_FLEE_COORD(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_234);
				TASK::TASK_PERFORM_SEQUENCE(Local_238.f_3, iLocal_234);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_234);
				PED::SET_PED_KEEP_TASK(Local_238.f_3, true);
				iLocal_272 = 1;
			}
			break;
	}
}

Vector3 func_346(int iParam0)//Position - 0xD5EE
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		default:
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_347(var uParam0, struct<3> Param1)//Position - 0xD63C
{
	struct<3> Var0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 131584);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 262656);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 512);
			}
		}
	}
}

void func_370()//Position - 0xE7AA
{
	__LIB_42__::func_710(&Local_238);
	if (__LIB_39__::func_941(&Local_238, &Local_352))
	{
		switch (Local_352.f_27)
		{
			case 0:
				if (Local_238.f_410 == 17)
				{
					if (!__LIB_42__::func_709(&Local_238))
					{
						if (__LIB_39__::func_839("TAXI_OBJ_FTC1") || HUD::DOES_BLIP_EXIST(Local_238.f_9))
						{
							Local_352.f_27++;
						}
						else if (func_198(&Local_238) != 10)
						{
							__LIB_43__::func_584(&Local_238, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((func_198(&Local_238) > 10 && func_198(&Local_238) != 15) && !__LIB_42__::func_709(&Local_238))
				{
					__LIB_43__::func_584(&Local_238, 15, 1, 0, 0);
					__LIB_39__::func_855(&Local_238, 7);
				}
				break;
			}
	}
	func_371(&Local_238, &uLocal_355, &Local_352, bLocal_351);
}

int func_371(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xE887
{
	func_379(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !__LIB_39__::func_929(uParam0, 2))
	{
		if (__LIB_39__::func_832(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!__LIB_39__::func_838(uParam0))
				{
					uParam2->f_7 = { __LIB_39__::func_862(uParam1) };
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_75())
				{
					uParam2->f_13 = { __LIB_0__::func_486() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					__LIB_0__::func_989(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_39__::func_889(uParam1);
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (__LIB_21__::func_727(uParam0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_39__::func_933(uParam0, 17, 0f, 1);
						uParam2->f_1 = { __LIB_0__::func_485() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (__LIB_0__::func_75())
				{
					uParam2->f_19 = { __LIB_13__::func_743() };
				}
				else
				{
					__LIB_0__::func_989(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_39__::func_889(uParam1);
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!__LIB_39__::func_929(uParam0, 14) && !__LIB_0__::func_75()) && !__LIB_21__::func_727(uParam0)) && __LIB_39__::func_934(uParam0, 18) > 1f)
				{
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_39__::func_934(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							__LIB_14__::func_782(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_989(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_39__::func_889(uParam1);
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

void func_379(var uParam0, var uParam1)//Position - 0xEF37
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	if (__LIB_39__::func_838(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (__LIB_39__::func_929(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_198(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 2));
				}
				if (__LIB_0__::func_703(uParam0->f_98, 4))
				{
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				__LIB_43__::func_916(uParam0, &(uParam0->f_98), 4, 3);
				break;
			case 3:
				if (__LIB_39__::func_934(uParam0, 16) > 1f)
				{
					__LIB_0__::func_620(1);
					if (uParam0->f_411 == 9)
					{
						__LIB_0__::func_229("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						__LIB_0__::func_229("TAXI_VIP_RETURN", 7500, 1);
					}
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((__LIB_39__::func_934(uParam0, 16) > __LIB_0__::func_373(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !__LIB_0__::func_75()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_198(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_43__::func_585(uParam0, &Var0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 0:
				if (uParam0->f_411 == 9)
				{
					__LIB_2__::func_859(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				__LIB_43__::func_584(uParam0, 1, 1, 0, 0);
				break;
			case 1:
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_43__::func_584(uParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!__LIB_0__::func_703(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						__LIB_39__::func_876(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					}
				}
				__LIB_39__::func_933(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 5:
				if (uParam0->f_411 == 7)
				{
					__LIB_0__::func_229("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					__LIB_0__::func_229("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_488(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_43__::func_584(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				__LIB_39__::func_807(&Var0);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_488(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_43__::func_584(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				__LIB_39__::func_962(uParam0, 33554432, Var0, "", 1, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_43__::func_584(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 10:
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_835(uParam0, 0);
					__LIB_39__::func_780(&(uParam0->f_44), 4);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_43__::func_584(uParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 15:
				if (__LIB_39__::func_934(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						__LIB_39__::func_807(&Var0);
					}
					__LIB_39__::func_890(Var0, uParam1);
					__LIB_39__::func_780(&(uParam0->f_81), 67108864);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_39__::func_933(uParam0, 11, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 16:
				if (__LIB_39__::func_934(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							__LIB_39__::func_807(&Var0);
						}
					}
					__LIB_39__::func_890(Var0, uParam1);
					__LIB_39__::func_933(uParam0, 11, 0, 0);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				__LIB_39__::func_780(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 24, 1, 0, 0);
				break;
			case 24:
				uParam0->f_417 = 24;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 1, 0, 8);
				break;
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					__LIB_39__::func_875(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_39__::func_875(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_892(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 6, 0f, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					__LIB_39__::func_875(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_39__::func_875(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_892(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 6, 0f, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 12:
				__LIB_0__::func_229("TAXI_OBJ_GYB", 3500, 1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!__LIB_0__::func_703(uParam0->f_98, 268435456))
				{
					__LIB_0__::func_229("TAXI_OBJ_CYI_01", 7500, 1);
					__LIB_39__::func_780(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 33:
				__LIB_0__::func_229("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 34:
				if (!__LIB_0__::func_703(uParam0->f_82, 8192))
				{
					if (__LIB_39__::func_934(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						__LIB_39__::func_807(&Var0);
						if (uParam0->f_411 == 5)
						{
							__LIB_39__::func_890(Var0, uParam1);
						}
						else
						{
							__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
						}
						__LIB_39__::func_780(&(uParam0->f_82), 8192);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
						__LIB_39__::func_933(uParam0, 11, 0, 0);
						__LIB_42__::func_713(uParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!__LIB_0__::func_703(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					__LIB_39__::func_780(&(uParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!__LIB_0__::func_703(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					__LIB_39__::func_780(&(uParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&Var0, "_done1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 139:
				__LIB_0__::func_229("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				__LIB_43__::func_584(uParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!__LIB_0__::func_703(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					__LIB_39__::func_780(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!__LIB_0__::func_703(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					__LIB_39__::func_780(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 44, 1, 0, 0);
				break;
			case 44:
				__LIB_0__::func_229("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				__LIB_42__::func_713(uParam0, 0, 0);
				__LIB_43__::func_584(uParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					__LIB_42__::func_713(uParam0, 0, 0);
					__LIB_43__::func_584(uParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				__LIB_0__::func_229("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 21:
				if (!__LIB_0__::func_703(uParam0->f_81, 1))
				{
					__LIB_39__::func_961(uParam0, 1, Var0, "_sick1", 8);
					__LIB_39__::func_851(&(uParam0->f_81), 2);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 2))
				{
					__LIB_39__::func_961(uParam0, 2, Var0, "_sick2", 8);
					__LIB_39__::func_851(&(uParam0->f_81), 1);
				}
				__LIB_39__::func_892(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 22:
				if (!__LIB_0__::func_703(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_892(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_892(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_892(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 71:
				if (!__LIB_0__::func_703(uParam0->f_81, 4))
				{
					__LIB_39__::func_961(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 8))
				{
					__LIB_39__::func_961(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					__LIB_39__::func_961(uParam0, 8, Var0, "_turns3", 8);
					__LIB_39__::func_851(&(uParam0->f_81), 4);
					__LIB_39__::func_851(&(uParam0->f_81), 8);
				}
				__LIB_39__::func_892(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 72:
				if (__LIB_39__::func_833(uParam0))
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						__LIB_39__::func_876(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						__LIB_39__::func_876(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				__LIB_39__::func_892(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 75:
				if (!__LIB_0__::func_703(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 128);
					__LIB_39__::func_851(&(uParam0->f_83), 256);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 256);
					__LIB_39__::func_851(&(uParam0->f_83), 512);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 512);
					__LIB_39__::func_851(&(uParam0->f_83), 128);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						__LIB_39__::func_807(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 1);
					__LIB_39__::func_851(&(uParam0->f_83), 2);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						__LIB_39__::func_807(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						__LIB_39__::func_851(&(uParam0->f_83), 4);
					}
					else
					{
						__LIB_39__::func_851(&(uParam0->f_83), 1);
					}
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						__LIB_39__::func_807(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 4);
					__LIB_39__::func_851(&(uParam0->f_83), 1);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				__LIB_39__::func_892(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_81, 4096))
				{
					__LIB_39__::func_962(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 8192))
				{
					__LIB_39__::func_962(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				__LIB_39__::func_892(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_81, 16384))
				{
					__LIB_39__::func_962(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 32768))
				{
					__LIB_39__::func_962(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				__LIB_39__::func_892(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!__LIB_0__::func_703(uParam0->f_82, 8))
					{
						__LIB_39__::func_960(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!__LIB_0__::func_703(uParam0->f_82, 16))
					{
						__LIB_39__::func_960(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!__LIB_0__::func_703(uParam0->f_82, 32))
					{
						__LIB_39__::func_960(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					__LIB_39__::func_892(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_39__::func_892(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 81:
				if (!__LIB_0__::func_703(uParam0->f_81, 65536))
				{
					__LIB_39__::func_962(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 131072))
				{
					__LIB_39__::func_962(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 82:
				if (__LIB_39__::func_833(uParam0))
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 8);
					__LIB_39__::func_851(&(uParam0->f_83), 16);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 16);
					__LIB_39__::func_851(&(uParam0->f_83), 32);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						__LIB_39__::func_851(&(uParam0->f_83), 64);
					}
					else
					{
						__LIB_39__::func_851(&(uParam0->f_83), 8);
					}
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 64);
					__LIB_39__::func_851(&(uParam0->f_83), 8);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				__LIB_39__::func_892(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 65:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					__LIB_43__::func_585(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 65));
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			case 66:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					__LIB_43__::func_585(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 66));
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !__LIB_0__::func_75())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&Var0, "_far1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								__LIB_39__::func_892(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 2:
								StringConCat(&Var0, "_close1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								__LIB_39__::func_892(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								__LIB_39__::func_876(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								__LIB_39__::func_892(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								__LIB_39__::func_933(uParam0, 16, 0, 0);
								__LIB_42__::func_713(uParam0, 0, 0);
								break;
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
									__LIB_39__::func_933(uParam0, 16, 0, 0);
									__LIB_39__::func_933(uParam0, 11, 0, 0);
									__LIB_42__::func_713(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_60 = 1;
									}
									__LIB_39__::func_807(&Var0);
									__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
									__LIB_39__::func_933(uParam0, 16, 0, 0);
									__LIB_39__::func_933(uParam0, 11, 0, 0);
									__LIB_42__::func_713(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							case 7:
								StringConCat(&Var0, "_done1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
						}
						__LIB_43__::func_584(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 25:
				if (!__LIB_0__::func_703(uParam0->f_82, 1))
				{
					__LIB_39__::func_960(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 2))
				{
					__LIB_39__::func_960(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 4))
				{
					__LIB_39__::func_960(uParam0, 4, Var0, "_close3", 8, 0);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 74:
				if (__LIB_39__::func_833(uParam0))
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					__LIB_39__::func_963(uParam0, Var0, 8);
				}
				__LIB_39__::func_892(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 70:
				if (!__LIB_0__::func_703(uParam0->f_83, 1024))
				{
					__LIB_39__::func_780(&(uParam0->f_83), 1024);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 2048))
				{
					__LIB_39__::func_780(&(uParam0->f_83), 2048);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 4096))
				{
					__LIB_39__::func_780(&(uParam0->f_83), 4096);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 69:
				if (!__LIB_0__::func_703(uParam0->f_82, 1024))
				{
					__LIB_39__::func_960(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					__LIB_39__::func_851(&(uParam0->f_82), 2048);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 2048))
				{
					__LIB_39__::func_960(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 51:
				if (__LIB_39__::func_833(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
						__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				__LIB_39__::func_892(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					__LIB_0__::func_229("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 84:
				if (!__LIB_0__::func_703(uParam0->f_81, 262144))
				{
					__LIB_39__::func_962(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						__LIB_39__::func_962(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						__LIB_39__::func_962(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				__LIB_39__::func_892(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 85:
				if (!__LIB_0__::func_703(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						__LIB_39__::func_959(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 134217728))
				{
					__LIB_39__::func_959(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				__LIB_39__::func_892(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 100:
				__LIB_0__::func_229("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 97:
				if (!__LIB_0__::func_703(uParam0->f_82, 65536))
				{
					if (__LIB_39__::func_934(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						__LIB_39__::func_807(&Var0);
						__LIB_39__::func_890(Var0, uParam1);
						__LIB_39__::func_780(&(uParam0->f_82), 65536);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
						__LIB_39__::func_933(uParam0, 11, 0, 0);
						__LIB_42__::func_713(uParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!__LIB_0__::func_703(uParam0->f_82, 131072))
				{
					if (__LIB_39__::func_934(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						__LIB_39__::func_807(&Var0);
						__LIB_39__::func_890(Var0, uParam1);
						__LIB_39__::func_780(&(uParam0->f_82), 131072);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
						__LIB_39__::func_933(uParam0, 11, 0, 0);
						__LIB_42__::func_713(uParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!__LIB_0__::func_703(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					__LIB_39__::func_780(&(uParam0->f_82), 8388608);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					__LIB_39__::func_780(&(uParam0->f_82), 16777216);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					__LIB_39__::func_780(&(uParam0->f_82), 33554432);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					__LIB_39__::func_807(&Var0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_780(&(uParam0->f_81), 67108864);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 105:
				if (!__LIB_0__::func_703(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					__LIB_39__::func_962(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				__LIB_43__::func_584(uParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&Var0, "_foot", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 107:
				if (!__LIB_0__::func_703(uParam0->f_81, 268435456))
				{
					__LIB_39__::func_962(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
				break;
			case 108:
				__LIB_0__::func_229("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 109:
				if (!__LIB_0__::func_703(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						__LIB_39__::func_962(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							__LIB_0__::func_709(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						__LIB_39__::func_962(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				__LIB_43__::func_584(uParam0, 111, 1, 0, 0);
				break;
			case 111:
				__LIB_0__::func_229("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 141:
				if (!__LIB_0__::func_703(uParam0->f_81, 16777216))
				{
					__LIB_39__::func_962(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 88:
				__LIB_0__::func_229("TAXI_TIEFLEE", 7500, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 57:
				if (!__LIB_0__::func_703(uParam0->f_98, 536870912))
				{
					__LIB_0__::func_229("TAXI_OBJ_CYI_1B", 7500, 1);
					__LIB_39__::func_780(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 140:
				StringConCat(&Var0, "_shout", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				__LIB_43__::func_585(uParam0, &Var0, 1, 0, 8);
				__LIB_43__::func_584(uParam0, 134, 1, 0, 0);
				break;
			case 134:
				__LIB_0__::func_229("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				__LIB_43__::func_584(uParam0, 0, 0, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			}
	}
}

int func_404(var uParam0, var uParam1)//Position - 0x134CA
{
	var uVar0;
	if (!__LIB_39__::func_929(uParam0, 27))
	{
		__LIB_39__::func_855(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && __LIB_39__::func_934(uParam0, 27) > 5f)
	{
		if (__LIB_39__::func_902(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			__LIB_39__::func_933(uParam0, 27, 0, 0);
			__LIB_39__::func_933(uParam0, 10, 0, 0);
			func_429(uParam0, &uVar0, uParam1);
		}
		func_426(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		__LIB_43__::func_583(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_75())
	{
		if (__LIB_39__::func_934(uParam0, 26) > 10f)
		{
			__LIB_39__::func_927(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (__LIB_39__::func_929(uParam0, 26))
	{
		__LIB_39__::func_927(uParam0, 26, 0);
	}
	return 0;
}

void func_426(var uParam0)//Position - 0x13D29
{
	var uVar0;
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && __LIB_39__::func_779()) && !__LIB_39__::func_928(uParam0)) || ((uParam0->f_411 != 9 && __LIB_39__::func_885(uParam0, 1)) && !__LIB_39__::func_928(uParam0)))
		{
			uVar0 = __LIB_1__::func_601(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			__LIB_39__::func_944(uParam0);
			func_234(uParam0, 0);
		}
	}
}

void func_429(var uParam0, var uParam1, var uParam2)//Position - 0x13E20
{
	switch (*uParam1)
	{
		case 1:
			if (__LIB_43__::func_919(uParam0, 0, 1))
			{
				__LIB_42__::func_708(uParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (__LIB_43__::func_919(uParam0, 0, 4))
			{
				__LIB_42__::func_708(uParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (__LIB_43__::func_919(uParam0, 0, 8))
			{
				__LIB_42__::func_708(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (__LIB_43__::func_919(uParam0, 1, 1))
			{
				__LIB_42__::func_708(uParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (__LIB_43__::func_919(uParam0, 0, 1))
			{
				__LIB_42__::func_708(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!__LIB_0__::func_703(*uParam2, 2) && __LIB_39__::func_803(uParam0))
			{
				__LIB_42__::func_708(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

void func_439()//Position - 0x14632
{
	func_440(&Local_238);
	__LIB_38__::func_753(2);
	func_458();
}

void func_440(var uParam0)//Position - 0x1464A
{
	func_54(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		__LIB_38__::func_753(2);
	}
}

void func_444()//Position - 0x147CA
{
	__LIB_42__::func_712(&Local_238, 8);
	Local_238.f_410 = 0;
	__LIB_39__::func_843(&Local_238, 3, 6);
	Local_238.f_23 = { 1412.3242f, -1518.3154f, 58.4644f };
	Local_238.f_33 = 114.1f;
	Local_238.f_26 = { Local_286 };
	Local_238.f_34 = 95.93f;
	func_445(&Local_238, &Local_251);
	Local_251.f_0 = joaat("S_M_M_Doctor_01");
	Local_251.f_1 = joaat("bison");
}

void func_445(var uParam0, var uParam1)//Position - 0x1483D
{
	int iVar0;
	iVar0 = Global_113386.f_19097.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_458()//Position - 0x14DF9
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_287, Local_288, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_293, Local_294, true, true);
	func_140(Local_299, 60f, 0);
	func_140(Local_300, 60f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_261, false);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_260);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_259);
	TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_309);
	__LIB_39__::func_806(385.1685f, -1372.7186f, 29.8554f, 1, 50f);
	func_461();
	func_460();
	func_459();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_251.f_1, false);
	__LIB_0__::func_345(&uLocal_45, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_459()//Position - 0x14E9B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_254);
	STREAMING::REMOVE_ANIM_DICT("MOVE_DUCK_FOR_COVER");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_312);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_321);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_330);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_339);
}

void func_460()//Position - 0x14ECE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251.f_0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_255);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_256);
	TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_309);
	STREAMING::REMOVE_ANIM_DICT("veh@truck@ds@base");
}

void func_461()//Position - 0x14F03
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_253);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
}

