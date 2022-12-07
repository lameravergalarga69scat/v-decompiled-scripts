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
	var uLocal_230 = 0;
	struct<414> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = -1;
	var uLocal_237 = -1;
	var uLocal_238 = -1;
	var uLocal_239 = -1;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	int iLocal_248 = 0;
	struct<3> Local_249[1];
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	bool bLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	struct<3> Local_273 = { 0, 0, 0 } ;
	struct<3> Local_274 = { 0, 0, 0 } ;
	struct<3> Local_275 = { 0, 0, 0 } ;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	struct<3> Local_278 = { 0, 0, 0 } ;
	struct<3> Local_279 = { 0, 0, 0 } ;
	struct<3> Local_280 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	float fLocal_282 = 0f;
	char cLocal_283[24] = "";
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	struct<6> Local_287 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_288[64] = "";
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	char cLocal_297[64] = "";
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	char cLocal_306[64] = "";
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	char cLocal_315[64] = "";
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char cLocal_324[64] = "";
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	char cLocal_333[64] = "";
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	char cLocal_342[64] = "";
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	char cLocal_351[64] = "";
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	bool bLocal_362 = 0;
	struct<28> Local_363 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 5;
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
	var uLocal_396 = 0;
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
	int iLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 1097859072;
	var uLocal_411 = 1500;
	var uLocal_412 = 45;
	var uLocal_413 = 1103626240;
	var uLocal_414 = 5;
	int iLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
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
	iLocal_248 = joaat("G_M_Y_MexGoon_03");
	iLocal_257 = 1;
	iLocal_258 = -1;
	iLocal_263 = -1;
	bLocal_264 = true;
	Local_273 = { -1612.2349f, 189.1934f, 58.9435f };
	Local_274 = { -1612.457f, 184.5166f, 58.7712f };
	Local_275 = { 32.60266f, -1243.8374f, 28.45076f };
	Local_276 = { 33.2419f, -1234.3851f, 28.2953f };
	Local_277 = { -628.1456f, -760.3765f, 25.106f };
	Local_278 = { -584.7739f, -779.0701f, 24.0178f };
	Local_279 = { 47.56787f, -1234.6847f, 28.29707f };
	Local_280 = { -21.325907f, -1235.5492f, 32.475967f };
	Local_281 = { 37.51834f, -1239.0206f, 28.40267f };
	fLocal_282 = 33.75f;
	StringCopy(&cLocal_288, "amb@world_human_hang_out_street@male_a@enter", 64);
	StringCopy(&cLocal_297, "amb@world_human_hang_out_street@male_a@base", 64);
	StringCopy(&cLocal_306, "amb@world_human_hang_out_street@male_a@idle_a", 64);
	StringCopy(&cLocal_315, "amb@world_human_hang_out_street@male_a@exit", 64);
	StringCopy(&cLocal_324, "amb@world_human_hang_out_street@female_arm_side@enter", 64);
	StringCopy(&cLocal_333, "amb@world_human_hang_out_street@female_arm_side@base", 64);
	StringCopy(&cLocal_342, "amb@world_human_hang_out_street@female_arm_side@idle_a", 64);
	StringCopy(&cLocal_351, "amb@world_human_hang_out_street@female_arm_side@exit", 64);
	if (__LIB_0__::func_78(Local_276, 0f, 0f, 0f, 0))
	{
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_30__::func_728(2);
		func_436();
	}
	MISC::SET_MISSION_FLAG(true);
	func_423();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_40__::func_781(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x408
{
	if (__LIB_31__::func_419(&Local_231))
	{
		__LIB_31__::func_365(&Local_231);
		if (__LIB_39__::func_637(&Local_231, 0))
		{
			func_418();
		}
	}
	else
	{
		__LIB_35__::func_352(&Local_231);
		if ((Local_231.f_410 >= 5 && Local_231.f_410 <= 9) || Local_231.f_410 >= 22)
		{
			func_383(&Local_231, &uLocal_408);
			__LIB_42__::func_371(&Local_231);
		}
		__LIB_31__::func_418(&Local_231, &uLocal_260, 0);
		if (Local_231.f_410 > 5 && !BitTest(uLocal_259, 0))
		{
			Local_231.f_17 = { Local_276 };
			MISC::SET_BIT(&uLocal_259, 0);
		}
		if (Local_231.f_410 >= 5 && Local_231.f_410 < 10)
		{
			func_380(&Local_231);
		}
		if (Local_231.f_410 >= 2)
		{
			if (!__LIB_31__::func_417(&Local_231))
			{
				func_348();
			}
			else
			{
				__LIB_42__::func_45(&Local_231, "Taxi Not Driveable", __LIB_31__::func_407(&Local_231));
			}
		}
		if (Local_231.f_410 >= 12 && Local_231.f_410 < 27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_256))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
				{
					__LIB_42__::func_45(&Local_231, "Player killed his new booty call", 9);
				}
			}
			if (__LIB_31__::func_445(&Local_231, iLocal_255, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_255, false))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_255, true, false);
					__LIB_42__::func_45(&Local_231, "Player exploded the broke down car", 9);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_256))
			{
				if (__LIB_10__::func_589(iLocal_256, 1) > 50f)
				{
					__LIB_42__::func_45(&Local_231, "Player abandoned the girl", 9);
				}
			}
		}
		if (Local_231.f_410 == 9)
		{
			func_314(&Local_231, 0, 1);
		}
		switch (Local_231.f_410)
		{
			case 0:
				func_311();
				__LIB_35__::func_371(&Local_231, 16, 4f, 0);
				__LIB_35__::func_357(&Local_231, Local_273, Local_274, "TaxiAlonzo", iLocal_248, 196.3547f, 15f);
				__LIB_35__::func_370(&Local_231);
				__LIB_31__::func_444(&Local_231, 1);
				break;
			case 1:
				if (func_304())
				{
					__LIB_31__::func_398();
					__LIB_31__::func_390(&(Local_249[0 /*3*/]), "TAXI_SC_KO", 100);
					__LIB_31__::func_389(&Local_231, &Local_249);
					__LIB_31__::func_388(&Local_231);
					func_280();
					Local_231.f_14 = { Local_273 };
					__LIB_31__::func_444(&Local_231, 3);
				}
				break;
			case 3:
				if (func_271(&Local_231, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
					{
						PED::SET_PED_MONEY(Local_231.f_3, 200);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 0, 1, 0);
					}
					func_270(&Local_231, 1, 0);
					__LIB_31__::func_444(&Local_231, 5);
				}
				break;
			case 5:
				if (func_249(&Local_231, 0, 1109393408))
				{
					__LIB_31__::func_444(&Local_231, 15);
				}
				break;
			case 15:
				if (__LIB_31__::func_427(&Local_231))
				{
					func_247();
					func_243(&Local_231, 9, 1, 0, 0);
					__LIB_31__::func_426(&Local_231);
					func_241();
					__LIB_31__::func_444(&Local_231, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
					{
						__LIB_35__::func_375(&Local_231);
						__LIB_31__::func_444(&Local_231, 9);
					}
				}
				break;
			case 9:
				if (!iLocal_270)
				{
					if ((__LIB_31__::func_457(&Local_231, 0) || __LIB_31__::func_457(&Local_231, 1)) || __LIB_31__::func_456(&Local_231, 1))
					{
						iLocal_270 = 1;
					}
				}
				func_234();
				func_229();
				if (func_199(&Local_231, 9f, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_231.f_9));
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
					PED::SET_CREATE_RANDOM_COPS(false);
					MISC::CLEAR_AREA_OF_COPS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 50f, 0);
					PED::SET_PED_CONFIG_FLAG(Local_231.f_3, 42, true);
					__LIB_31__::func_444(&Local_231, 10);
				}
				if (iLocal_258 >= 2)
				{
					if (!iLocal_268 && ((((((PED::IS_PED_INJURED(iLocal_256) || ENTITY::IS_ENTITY_DEAD(iLocal_255, false)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_256))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_255, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_255))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_256, 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_255, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_255, 0, 2))) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_256, false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_10__::func_589(iLocal_256, 1) < 1f)))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(iLocal_255, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_255)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_255, false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_255, 0, 2)))
						{
							VEHICLE::EXPLODE_VEHICLE(iLocal_255, true, false);
						}
						if (!PED::IS_PED_INJURED(iLocal_256))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_256, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							PED::SET_PED_KEEP_TASK(iLocal_256, true);
						}
						if ((!ENTITY::IS_ENTITY_DEAD(iLocal_256, false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_10__::func_589(iLocal_256, 1) < 1f)
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_256, iLocal_253);
							PED::SET_PED_KEEP_TASK(iLocal_256, true);
						}
						__LIB_42__::func_45(&Local_231, "Aggro Heard Shot", 8);
						iLocal_268 = 1;
					}
				}
				break;
			case 10:
				if (func_175())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
					iLocal_407 = __LIB_0__::func_519(Local_231.f_3, 0, 0);
					__LIB_35__::func_371(&Local_231, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_256);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_256, PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_256, 115, 0);
					}
					iLocal_261 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
					iLocal_262 = ENTITY::GET_ENTITY_HEALTH(Local_231.f_3);
					AUDIO::START_AUDIO_SCENE("TAXI_GOT_U_NOW");
					__LIB_31__::func_444(&Local_231, 11);
				}
				break;
			case 11:
				PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 11);
				if (ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false) || ((!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false) && PED::IS_PED_FLEEING(Local_231.f_3)) && __LIB_0__::func_529(Local_231.f_3, Local_276, 1) > 25f))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_GYN");
					if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
					{
						HUD::REMOVE_BLIP(&(Local_231.f_9));
					}
					if (HUD::DOES_BLIP_EXIST(Local_231.f_8))
					{
						HUD::REMOVE_BLIP(&(Local_231.f_8));
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_407))
					{
						HUD::REMOVE_BLIP(&iLocal_407);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
						{
							AUDIO::STOP_AUDIO_SCENE("TAXI_GOT_U_NOW");
							WEAPON::GET_CURRENT_PED_WEAPON(Local_231.f_2, &uLocal_254, true);
							if (func_172(&uLocal_254) || !ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
							{
								bLocal_264 = true;
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_256, iLocal_253);
								func_243(&Local_231, 126, 1, 0, 0);
								Local_231.f_17 = { Local_277 };
								__LIB_35__::func_371(&Local_231, 19, 0, 0);
								__LIB_31__::func_444(&Local_231, 12);
							}
							else
							{
								bLocal_264 = false;
								TASK::TASK_SMART_FLEE_PED(iLocal_256, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								PED::SET_PED_KEEP_TASK(iLocal_256, true);
								func_243(&Local_231, 127, 1, 0, 1);
								__LIB_31__::func_444(&Local_231, 27);
							}
						}
					}
					else
					{
						__LIB_31__::func_444(&Local_231, 27);
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_279, Local_280, fLocal_282, false, true, 0))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(Local_231.f_3) == PED::GET_PED_MAX_HEALTH(Local_231.f_3) && !__LIB_0__::func_75()) && !iLocal_266)
					{
						func_243(&Local_231, 123, 1, 0, 0);
						iLocal_266 = 1;
					}
					if (!iLocal_265 && __LIB_37__::func_678(&Local_231, 0) > 1.5f)
					{
						func_168(&(Local_231.f_3));
						PED::SET_PED_CONFIG_FLAG(Local_231.f_3, 314, false);
						iLocal_265 = 1;
					}
					if (__LIB_37__::func_678(&Local_231, 0) > 10f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_256, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
							TASK::TASK_PLAY_ANIM(0, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "misscommon@response", "damn", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_256, iLocal_253);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_261 = (iLocal_261 - ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
								iLocal_262 = (iLocal_262 - ENTITY::GET_ENTITY_HEALTH(Local_231.f_3));
								if (iLocal_261 < iLocal_262)
								{
									func_243(&Local_231, 125, 1, 0, 0);
								}
								else
								{
									func_243(&Local_231, 124, 1, 0, 0);
								}
								iLocal_261 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
								iLocal_262 = ENTITY::GET_ENTITY_HEALTH(Local_231.f_3);
							}
						}
						else if (!iLocal_267)
						{
							__LIB_0__::func_296();
							ENTITY::SET_ENTITY_HEALTH(Local_231.f_3, PED::GET_PED_MAX_HEALTH(Local_231.f_3), 0);
							func_243(&Local_231, 128, 1, 0, 0);
							iLocal_267 = 1;
							bLocal_264 = false;
						}
						__LIB_35__::func_371(&Local_231, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
				}
				else if (!PED::IS_PED_FLEEING(Local_231.f_3))
				{
					if (iLocal_265)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_231.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
						if (PED::IS_PED_INJURED(iLocal_256))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_256, false), 3f, 20000, 40000f, 0.5f);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_256, false), 0);
						}
						else
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_256, 20000, 3.5f, 1f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_256, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
						TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_253);
						if (!PED::IS_PED_INJURED(iLocal_256))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_256, Local_231.f_3, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_265 = 0;
					}
					if (!PED::IS_PED_INJURED(iLocal_256))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_231.f_3, true), ENTITY::GET_ENTITY_COORDS(iLocal_256, false)) < 25f && (TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, joaat("SCRIPT_TASK_CHAT_TO_PED")) != 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, joaat("SCRIPT_TASK_CHAT_TO_PED")) != 0))
						{
							TASK::TASK_CHAT_TO_PED(iLocal_256, Local_231.f_3, 16, 0f, 0f, 0f, 0f, 0f);
							TASK::TASK_CHAT_TO_PED(Local_231.f_3, iLocal_256, 16, 0f, 0f, 0f, 0f, 0f);
						}
					}
					if (SYSTEM::TIMERA() > 30000)
					{
						__LIB_42__::func_45(&Local_231, "Player abandoned passenger", 8);
					}
				}
				if (__LIB_10__::func_567(Local_231.f_17, 1) > 250f && HUD::DOES_BLIP_EXIST(iLocal_407))
				{
					__LIB_42__::func_45(&Local_231, "Player abandoned passenger", 8);
				}
				break;
			case 12:
				if (!__LIB_0__::func_75() && __LIB_37__::func_678(&Local_231, 19) > 2f)
				{
					Local_231.f_8 = __LIB_6__::func_825(iLocal_256, 0, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_231.f_8, "TX_BLIP_GYN_TG");
					func_243(&Local_231, 11, 1, 0, 0);
					PED::SET_CREATE_RANDOM_COPS(true);
					__LIB_35__::func_371(&Local_231, 19, 0, 0);
					__LIB_31__::func_444(&Local_231, 18);
				}
				break;
			case 18:
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_256, 1) < 3f && !__LIB_9__::func_396())
				{
					__LIB_6__::func_771();
					Local_231.f_115 = 1;
					__LIB_35__::func_326(&(Local_231.f_81), 67108864);
					__LIB_31__::func_444(&Local_231, 19);
				}
				else if (!PED::IS_PED_INJURED(iLocal_256) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_256, PLAYER::PLAYER_PED_ID(), 0);
				}
				break;
			case 19:
				if (func_153())
				{
					if (HUD::DOES_BLIP_EXIST(Local_231.f_8))
					{
						HUD::REMOVE_BLIP(&(Local_231.f_8));
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_231.f_3));
					__LIB_31__::func_444(&Local_231, 21);
				}
				break;
			case 21:
				if (!Local_231.f_141 && !__LIB_0__::func_78(Local_231.f_29, Local_278, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_256, false) && !__LIB_0__::func_75())
					{
						Local_231.f_3 = iLocal_256;
						Local_231.f_29 = { Local_278 };
						Local_231.f_17 = { Local_277 };
						if (__LIB_0__::func_517(Local_231.f_98, 4))
						{
							__LIB_35__::func_326(&(Local_231.f_98), 4);
						}
						if (__LIB_0__::func_517(Local_231.f_98, 8))
						{
							__LIB_35__::func_326(&(Local_231.f_98), 8);
						}
						Local_231.f_86 = 0;
						func_243(&Local_231, 130, 1, 0, 0);
					}
				}
				else if (Local_231.f_141)
				{
					Local_231.f_9 = __LIB_0__::func_392(Local_277, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_231.f_9, "TX_BLIP_GYN_GF");
					func_148();
					__LIB_31__::func_440(&Local_231, 2, 0);
					__LIB_31__::func_436(&Local_363, 5, -1);
					__LIB_31__::func_444(&Local_231, 22);
				}
				break;
			case 22:
				if (func_199(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_231.f_9));
					__LIB_35__::func_330(&uLocal_366);
					__LIB_31__::func_381(&Local_363, -1, 1);
					func_243(&Local_231, 132, 1, 0, 0);
					__LIB_31__::func_444(&Local_231, 27);
				}
				break;
			case 27:
				if ((func_132(&Local_231, 1) || func_131(&iLocal_256, joaat("SCRIPT_TASK_SMART_FLEE_PED"))) || ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
				{
					if (bLocal_264)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -612.6458f, -777.7148f, 24.27f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -608.3197f, -775.0622f, 24.0547f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -589.0419f, -775.1888f, 24.0172f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_231.f_29, 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_256, iLocal_253);
						PED::SET_PED_KEEP_TASK(iLocal_256, true);
						__LIB_31__::func_374(&Local_231, 0);
						__LIB_42__::func_44(8, 1, -1);
					}
					__LIB_35__::func_355(&Local_231);
					func_107();
					__LIB_31__::func_444(&Local_231, 29);
				}
				break;
			case 29:
				if (func_74(&Local_231, &iLocal_415))
				{
					func_10(1, &Local_231, 1);
					__LIB_31__::func_444(&Local_231, 30);
				}
				break;
			case 30:
				func_436();
				break;
			}
	}
}

void func_10(bool bParam0, int iParam1, bool bParam2)//Position - 0x1269
{
	if (bParam0)
	{
		__LIB_42__::func_40(iParam1);
		if (!PED::IS_PED_INJURED(iParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam1->f_3, 317, true);
		}
	}
	else
	{
		__LIB_35__::func_327(1, 0);
	}
	__LIB_40__::func_779(iParam1, bParam2);
}

int func_74(int iParam0, int iParam1)//Position - 0x2C04
{
	switch (iLocal_160)
	{
		case 0:
			if (!__LIB_0__::func_75() && __LIB_37__::func_678(iParam0, 0) > 1f)
			{
				if (__LIB_35__::func_340())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				__LIB_35__::func_368(iParam0);
				__LIB_35__::func_326(&(Global_113386.f_19097), 4096);
				__LIB_35__::func_341(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, __LIB_31__::func_439(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_0__::func_518(1);
				iLocal_160 = 6;
			}
			break;
		case 6:
			if (!__LIB_35__::func_437(iParam1, 0))
			{
				func_75(iParam0);
				__LIB_35__::func_371(iParam0, 0, 0, 0);
				__LIB_0__::func_518(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_75(int iParam0)//Position - 0x2CD6
{
	int iVar0;
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		__LIB_42__::func_370(__LIB_18__::func_173(), 21, iVar0, 0, 0);
		__LIB_35__::func_327(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_107()//Position - 0x4240
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_231.f_4) < 500f)
			{
				Local_231.f_50 = 250;
			}
			else
			{
				Local_231.f_50 = 100;
			}
		}
	}
	Local_231.f_56 = (PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) - ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
	if (Local_231.f_56 <= 150)
	{
		Local_231.f_56 = 250;
	}
	else
	{
		Local_231.f_56 = 100;
	}
}

int func_131(int iParam0, int iParam1)//Position - 0x4B48
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, iParam1) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)//Position - 0x4B6E
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
	{
		if (__LIB_31__::func_382(iParam0) && __LIB_37__::func_668(iParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (__LIB_31__::func_459(iParam0, 2097152))
				{
					__LIB_37__::func_671(iParam0);
				}
			}
			else
			{
				__LIB_37__::func_671(iParam0);
			}
		}
		else if (!__LIB_31__::func_382(iParam0))
		{
			if (bParam1)
			{
				if (__LIB_31__::func_459(iParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_148()//Position - 0x5192
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_149(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_149(1));
	STREAMING::REMOVE_ANIM_SET("move_strafe_melee_unarmed");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@");
	STREAMING::REMOVE_ANIM_DICT("melee@unarmed@streamed_taunts");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_288);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_297);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_306);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_315);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_324);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_333);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_342);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_351);
	TASK::REMOVE_WAYPOINT_RECORDING("taxi_oj_gyn");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

int func_149(int iParam0)//Position - 0x5210
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("gauntlet");
			break;
		case 1:
			iVar0 = joaat("A_F_Y_EastSA_03");
			break;
	}
	return iVar0;
}

int func_153()//Position - 0x5293
{
	int iVar0;
	int iVar1;
	__LIB_37__::func_674();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
	{
		switch (iLocal_425)
		{
			case 0:
				if (__LIB_0__::func_398(1, 0, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_256, PLAYER::PLAYER_PED_ID(), -1, 2049, 3);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_256, -1, 2049, 3);
					__LIB_35__::func_330(&uLocal_366);
					__LIB_31__::func_381(&Local_363, -1, 1);
					iLocal_425 = 1;
				}
				break;
			case 1:
				if (__LIB_37__::func_678(&Local_231, 19) > 2f)
				{
					func_243(&Local_231, 129, 1, 0, 1);
					__LIB_35__::func_371(&Local_231, 19, 0, 0);
					iLocal_425 = 5;
				}
				break;
			case 5:
				Local_287 = { __LIB_9__::func_980() };
				if (__LIB_37__::func_678(&Local_231, 19) > 15f || MISC::ARE_STRINGS_EQUAL(&cLocal_283, &Local_287))
				{
					iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_231.f_4);
					if (ENTITY::GET_ENTITY_MODEL(Local_231.f_4) == joaat("sentinel2"))
					{
						iVar0 = 1;
					}
					if (iVar0 > 1)
					{
						iVar1 = 2;
					}
					else
					{
						iVar1 = 0;
					}
					TASK::TASK_ENTER_VEHICLE(iLocal_256, Local_231.f_4, 40000, iVar1, 1f, 1, 0);
					__LIB_35__::func_371(&Local_231, 19, 0, 0);
					iLocal_425 = 6;
				}
				else if ((MISC::GET_GAME_TIMER() % 1500) < 50)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_256, PLAYER::PLAYER_PED_ID(), 0);
				}
				break;
			case 6:
				if (__LIB_37__::func_678(&Local_231, 19) > 20f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_256);
						TASK::TASK_WANDER_STANDARD(iLocal_256, 40000f, 0);
					}
					__LIB_42__::func_45(&Local_231, "Player not letting the chick in the car", 20);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_256, false))
						{
							iLocal_425 = 8;
						}
						else if ((MISC::GET_GAME_TIMER() % 2500) < 50)
						{
						}
					}
				}
				break;
			case 7:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_256, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_256, Local_231.f_4, 2);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_231.f_4, -1);
					}
				}
				__LIB_35__::func_371(&Local_231, 19, 0, 0);
				iLocal_425 = 8;
				break;
			case 8:
				GRAPHICS::DRAW_DEBUG_TEXT_2D("GYN_CS_END", 0.75f, 0.75f, 0f, 0, 0, 255, 255);
				Local_231.f_141 = 0;
				if (CAM::DOES_CAM_EXIST(Local_231.f_0))
				{
					CAM::DESTROY_CAM(Local_231.f_0, false);
				}
				if (CAM::DOES_CAM_EXIST(Local_231.f_1))
				{
					CAM::DESTROY_CAM(Local_231.f_1, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_361))
				{
					CAM::DESTROY_CAM(iLocal_361, false);
				}
				__LIB_31__::func_440(&Local_231, 19, 0);
				iLocal_425 = 9;
				return 1;
				break;
		}
	}
	return 0;
}

void func_168(var uParam0)//Position - 0x5846
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, true);
			PED::SET_PED_SEEING_RANGE(*uParam0, 300f);
			PED::SET_PED_HEARING_RANGE(*uParam0, 300f);
			PED::SET_PED_ID_RANGE(*uParam0, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
			PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
			PED::SET_PED_ACCURACY(*uParam0, 75);
			PED::SET_PED_COMBAT_RANGE(*uParam0, 1);
			PED::SET_COMBAT_FLOAT(*uParam0, 7, 1f);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, Local_231.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, joaat("PLAYER"));
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
		}
	}
}

int func_172(var uParam0)//Position - 0x5961
{
	if ((((*uParam0 == joaat("WEAPON_UNARMED") || *uParam0 == joaat("WEAPON_SMOKEGRENADE")) || *uParam0 == joaat("WEAPON_FIREEXTINGUISHER")) || *uParam0 == joaat("WEAPON_PETROLCAN")) || *uParam0 == joaat("WEAPON_RUBBERGUN"))
	{
		return 1;
	}
	return 0;
}

int func_175()//Position - 0x5A94
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	__LIB_37__::func_674();
	if (iLocal_251 < 3 && iLocal_251 > 0)
	{
		if (__LIB_26__::func_226(iLocal_80))
		{
			iLocal_251 = 7;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player INSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		else
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player OUTSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player INSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
		else
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player OUTSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
	}
	switch (iLocal_251)
	{
		case 0:
			if (!__LIB_0__::func_75())
			{
				__LIB_26__::func_227(0, 0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				__LIB_31__::func_429(&Local_231, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				Var0 = { 30.8062f, -1242.6118f, 29.1026f };
				Var1 = { 7.5623f, -0.0714f, 149.3929f };
				CAM::SET_CAM_COORD(Local_231.f_0, Var0);
				CAM::SET_CAM_ROT(Local_231.f_0, Var1, 2);
				CAM::SET_CAM_FOV(Local_231.f_0, 35f);
				CAM::SHAKE_CAM(Local_231.f_0, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE(Local_231.f_0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (!PED::IS_PED_INJURED(Local_231.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_231.f_4, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_231.f_4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_255, 0f, 8.25f, 0f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_231.f_4, 114.629f);
					TASK::TASK_LOOK_AT_ENTITY(Local_231.f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
				func_243(&Local_231, 121, 1, 1, 0);
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				iLocal_251 = 1;
			}
			else
			{
				__LIB_0__::func_296();
			}
			break;
		case 1:
			if (__LIB_37__::func_678(&Local_231, 0) > 2f && !__LIB_0__::func_75())
			{
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_ENTER_VEHICLE(0, Local_231.f_4, 20000, -1, 1f, 524296, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_253);
					__LIB_35__::func_901(&(Local_231.f_244), Local_231.f_144, "txm9_figt1", "txm9_figt1_1", 8, 0, 0);
				}
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				if (__LIB_4__::func_739())
				{
					if (!iLocal_272)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_272 = 1;
					}
				}
				iLocal_251 = 2;
			}
			break;
		case 2:
			if (__LIB_37__::func_678(&Local_231, 0) > 0.3f)
			{
				iLocal_251 = 3;
			}
			break;
		case 3:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_35__::func_371(&Local_231, 0, 0, 0);
			iLocal_251 = 4;
			break;
		case 4:
			if (!__LIB_31__::func_441(&Local_231) && !PED::IS_PED_INJURED(Local_231.f_3))
			{
				PED::SET_PED_CONFIG_FLAG(Local_231.f_3, 314, true);
				func_168(&(Local_231.f_3));
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				iLocal_251 = 5;
			}
			else if (!PED::IS_PED_INJURED(Local_231.f_3))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_ENTER_VEHICLE(0, Local_231.f_4, 20000, -1, 1f, 524296, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_253);
				}
			}
			break;
		case 5:
			if (__LIB_37__::func_678(&Local_231, 0) > 0.5f && !__LIB_0__::func_75())
			{
				__LIB_35__::func_901(&(Local_231.f_244), Local_231.f_144, "txm9_figt1", "txm9_figt1_2", 9, 0, 0);
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				iLocal_251 = 6;
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(Local_231.f_3))
			{
				PED::SET_PED_RESET_FLAG(Local_231.f_3, 69, true);
			}
			if (__LIB_37__::func_678(&Local_231, 0) > 1f)
			{
				func_243(&Local_231, 11, 1, 0, 0);
				__LIB_32__::func_557(1, 1, 1);
				if (CAM::DOES_CAM_EXIST(Local_231.f_0))
				{
					CAM::DESTROY_CAM(Local_231.f_0, false);
				}
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				return 1;
			}
			break;
		case 7:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_231.f_3)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_231.f_3);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_296();
				}
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				iLocal_251 = 8;
			}
			break;
		case 8:
			if (__LIB_37__::func_678(&Local_231, 0) > 0.3f)
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_231.f_3)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_231.f_3);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_231.f_4, 0, true);
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_231.f_4, -1.6f, 0f, 0f) };
					Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_231.f_4, -4f, 2f, 0f) };
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var3, true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(Local_231.f_3, Var2, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_231.f_3, true)));
					ENTITY::SET_ENTITY_HEADING(Local_231.f_3, __LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(Local_231.f_3, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
					func_168(&(Local_231.f_3));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(Local_231.f_0))
				{
					CAM::DESTROY_CAM(Local_231.f_0, false);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				iLocal_251 = 9;
			}
			break;
		case 9:
			if (!CAM::IS_SCREEN_FADING_IN() && __LIB_37__::func_678(&Local_231, 0) > 1f)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				iLocal_251 = 10;
			}
			break;
		case 10:
			if (!__LIB_31__::func_441(&Local_231))
			{
				__LIB_32__::func_557(1, 1, 1);
				func_243(&Local_231, 11, 1, 0, 0);
				__LIB_35__::func_371(&Local_231, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x68EE
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !iParam0->f_142)
	{
		if (func_215(iParam0))
		{
			__LIB_31__::func_375(iParam0, &(iParam0->f_43));
			func_209(iParam0);
			func_208(iParam0);
			func_205(iParam0);
			func_202(iParam0, fParam2, fParam3);
			func_201(iParam0);
			return __LIB_37__::func_672(iParam0, fParam1);
		}
	}
	return 0;
}

void func_201(var uParam0)//Position - 0x6A3D
{
	float fVar0;
	if ((__LIB_31__::func_382(uParam0) && __LIB_0__::func_517(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = __LIB_10__::func_567(uParam0->f_17, 1);
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
			func_243(uParam0, 136, 1, 0, 1);
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
			if (!__LIB_31__::func_382(uParam0))
			{
			}
			if (!__LIB_0__::func_517(uParam0->f_81, 67108864))
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

void func_202(var uParam0, float fParam1, float fParam2)//Position - 0x6B13
{
	if (__LIB_31__::func_382(uParam0) && __LIB_0__::func_517(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && __LIB_31__::func_441(uParam0))
		{
			if (!__LIB_31__::func_442(uParam0, 2))
			{
				__LIB_35__::func_356(uParam0, 2);
			}
			else if (__LIB_31__::func_382(uParam0))
			{
				if (__LIB_37__::func_678(uParam0, 2) > fParam1 && !__LIB_31__::func_442(uParam0, 14))
				{
					if (__LIB_31__::func_364())
					{
						func_243(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_243(uParam0, 48, 1, 0, 0);
					}
					__LIB_35__::func_371(uParam0, 2, 0, 0);
					if (__LIB_31__::func_442(uParam0, 10))
					{
						__LIB_35__::func_371(uParam0, 10, 0, 0);
					}
				}
				if (!__LIB_31__::func_442(uParam0, 3))
				{
					__LIB_35__::func_371(uParam0, 3, 0, 0);
				}
				else if (__LIB_37__::func_678(uParam0, 3) >= fParam2)
				{
					__LIB_31__::func_440(uParam0, 3, 0);
					__LIB_42__::func_45(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (__LIB_31__::func_442(uParam0, 2))
			{
				__LIB_31__::func_440(uParam0, 2, 0);
			}
			if (__LIB_31__::func_442(uParam0, 3))
			{
				__LIB_31__::func_440(uParam0, 3, 0);
			}
		}
	}
}

void func_205(var uParam0)//Position - 0x6C56
{
	if (__LIB_31__::func_378(uParam0))
	{
		func_206(uParam0);
	}
}

void func_206(var uParam0)//Position - 0x6C6D
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			__LIB_31__::func_440(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (__LIB_37__::func_678(uParam0, 20) > 3f)
				{
					func_243(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!__LIB_0__::func_517(uParam0->f_81, 262144) || !__LIB_0__::func_517(uParam0->f_81, 1048576))
				{
					if (__LIB_37__::func_678(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_243(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!__LIB_0__::func_517(uParam0->f_82, 67108864))
				{
					if (__LIB_37__::func_678(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_243(uParam0, 85, 1, 0, 0);
						__LIB_31__::func_440(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (__LIB_37__::func_678(uParam0, 20) > 8f)
				{
					func_243(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_517(uParam0->f_81, 262144) || __LIB_0__::func_517(uParam0->f_82, 67108864))
			{
				if (!__LIB_31__::func_442(uParam0, 22))
				{
					__LIB_35__::func_356(uParam0, 22);
				}
			}
			if (__LIB_31__::func_442(uParam0, 22) && __LIB_37__::func_678(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!__LIB_0__::func_517(uParam0->f_81, 1048576))
					{
						func_243(uParam0, 84, 1, 0, 0);
						__LIB_31__::func_440(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!__LIB_0__::func_517(uParam0->f_82, 134217728))
					{
						func_243(uParam0, 85, 1, 0, 0);
						__LIB_31__::func_440(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_208(var uParam0)//Position - 0x6EF4
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !__LIB_0__::func_517(uParam0->f_44, 2))
	{
		__LIB_31__::func_446(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_517(uParam0->f_44, 2))
	{
		__LIB_35__::func_326(&(uParam0->f_44), 2);
		uParam0->f_47++;
		__LIB_35__::func_327(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_243(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_209(var uParam0)//Position - 0x6F7D
{
	if (!__LIB_0__::func_517(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (__LIB_37__::func_678(uParam0, 9) > 1f)
					{
						__LIB_31__::func_380(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_243(uParam0, 50, 1, 1, 0);
						}
						__LIB_35__::func_371(uParam0, 9, 0, 0);
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
				if (!__LIB_0__::func_75() && __LIB_37__::func_678(uParam0, 9) > 4f)
				{
					func_243(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_405("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_243(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), __LIB_31__::func_379(uParam0)))
				{
					__LIB_31__::func_380(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_35__::func_327(6, 0);
				}
				if (!__LIB_15__::func_87(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_37__::func_678(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_243(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (__LIB_0__::func_405("TAXI_OBJ_POL", 0, 0))
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
						func_243(uParam0, 53, 1, 0, 1);
					}
					__LIB_35__::func_327(7, __LIB_31__::func_379(uParam0));
					__LIB_31__::func_380(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					__LIB_31__::func_440(uParam0, 9, 0);
					__LIB_35__::func_371(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_215(var uParam0)//Position - 0x720F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				__LIB_42__::func_45(uParam0, "Passenger left car.", 9);
			}
			else if (func_225(uParam0))
			{
				if (__LIB_0__::func_405("TAXI_OBJ_PICKUP", 0, 0))
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
				func_216(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_216(var uParam0, bool bParam1)//Position - 0x729E
{
	__LIB_42__::func_577(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!__LIB_31__::func_442(uParam0, 14))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_488(1);
				}
				__LIB_31__::func_376(uParam0, 11, 1);
				func_217(uParam0, 1);
				__LIB_35__::func_371(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!__LIB_31__::func_382(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (__LIB_37__::func_678(uParam0, 15) > 5f)
						{
							__LIB_35__::func_371(uParam0, 15, 0f, 1);
						}
					}
					if (__LIB_37__::func_678(uParam0, 14) > 20f)
					{
						__LIB_42__::func_45(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (__LIB_37__::func_678(uParam0, 14) > 20f)
				{
					if (__LIB_10__::func_589(uParam0->f_4, 1) > 40f)
					{
						__LIB_42__::func_45(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						__LIB_42__::func_45(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_217(var uParam0, bool bParam1)//Position - 0x73A9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_221(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (__LIB_31__::func_382(uParam0))
				{
					func_243(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_221(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_218(uParam0, 0, 0);
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

void func_218(var uParam0, bool bParam1, bool bParam2)//Position - 0x74C7
{
	if (bParam1)
	{
		__LIB_31__::func_365(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = __LIB_0__::func_519(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, true);
		__LIB_37__::func_680(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_243(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_221(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7561
{
	if (!__LIB_0__::func_517(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_243(uParam0, iParam3, 1, 0, 0);
		__LIB_31__::func_446(uParam1, iParam2);
	}
}

int func_225(var uParam0)//Position - 0x7613
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (__LIB_31__::func_442(uParam0, 14))
			{
				__LIB_35__::func_369(uParam0);
			}
			func_217(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_229()//Position - 0x76BF
{
	switch (iLocal_252)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false) && __LIB_0__::func_529(Local_231.f_4, Local_231.f_17, 1) < 300f)
			{
				func_233();
				iLocal_252 = 1;
			}
			break;
		case 1:
			if (func_231())
			{
				iLocal_252 = 2;
			}
			break;
		case 2:
			func_230();
			if (iLocal_258 > 1)
			{
				iLocal_252 = 3;
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false) && __LIB_0__::func_529(Local_231.f_4, Local_231.f_17, 1) > 350f)
			{
				func_148();
				iLocal_258 = -1;
				iLocal_252 = 0;
			}
			break;
	}
}

void func_230()//Position - 0x7773
{
	struct<3> Var0;
	switch (iLocal_258)
	{
		case -1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_255))
			{
				iLocal_255 = VEHICLE::CREATE_VEHICLE(func_149(0), 27.1498f, -1246.5232f, 28.4013f, 297.629f, true, true, false);
				iLocal_258++;
			}
			break;
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_255, false))
			{
				AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_255, true);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_255, true);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_255, "SNAKEYES");
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_255, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_255, 10);
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_255, 0f, 3f, 0f) };
				iLocal_256 = PED::CREATE_PED(26, func_149(1), Var0, (ENTITY::GET_ENTITY_HEADING(iLocal_255) - 180f), true, true);
				iLocal_258++;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_256, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_255, false))
			{
				__LIB_0__::func_203(&(Local_231.f_244), 5, iLocal_256, "TaxiLiz", 0, 1);
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_256, "TaxiLiz");
				PED::SET_PED_CONFIG_FLAG(iLocal_256, 317, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_256, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_256, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_256, 2, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_256, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_256, false);
				PED::PED_HAS_SEXINESS_FLAG_SET(iLocal_256, 1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_256, iLocal_255, -1, 2048, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_253);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@", "idle_b_ped", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_253);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_256, iLocal_253);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_253);
				iLocal_258++;
			}
			break;
	}
}

int func_231()//Position - 0x7913
{
	if (!STREAMING::HAS_MODEL_LOADED(func_149(0)))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading Gaunlet ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_149(1)))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading A_F_Y_EastSA_03", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_SET_LOADED("move_strafe_melee_unarmed"))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading move_strafe_melee_unarmed ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading misscommon@response ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_288))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sMaleChatEnter ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_297))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sMaleChatBase ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_315))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sMaleChatExit ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_306))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sMaleChatIdle ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_333))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sFemaleChatBase ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_324))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sFemaleChatEnter ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_351))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sFemaleChatExit ", &iLocal_257, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_342))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading sFemaleChatIdle ", &iLocal_257, 1000);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("taxi_oj_gyn"))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMING - Way point Recording Loading taxi_oj_gyn...", &iLocal_257, 1000);
		return 0;
	}
	return 1;
}

void func_233()//Position - 0x7ABB
{
	STREAMING::REQUEST_MODEL(func_149(0));
	STREAMING::REQUEST_MODEL(func_149(1));
	STREAMING::REQUEST_ANIM_SET("move_strafe_melee_unarmed");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	STREAMING::REQUEST_ANIM_DICT("melee@unarmed@streamed_taunts");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_288);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_297);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_306);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_315);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_324);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_333);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_342);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_351);
	TASK::REQUEST_WAYPOINT_RECORDING("taxi_oj_gyn");
}

void func_234()//Position - 0x7B35
{
	switch (iLocal_250)
	{
		case 0:
			if (!__LIB_0__::func_517(Local_231.f_82, 16384) && __LIB_31__::func_383(&Local_231) != 35)
			{
				if (__LIB_31__::func_382(&Local_231))
				{
					if (func_225(&Local_231))
					{
						if (__LIB_1__::func_844(Local_231.f_4, Local_231.f_17, 1) <= 85f && iLocal_258 > 1)
						{
							Local_231.f_17 = { Local_275 };
							HUD::SET_BLIP_COORDS(Local_231.f_9, Local_275);
							__LIB_35__::func_330(&uLocal_366);
							__LIB_31__::func_381(&Local_363, 3, 0);
							func_243(&Local_231, 36, 1, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_255, false))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_255, 4, false, false);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_255, 0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_255, 150f);
								VEHICLE::SET_VEHICLE_DAMAGE(iLocal_255, 0f, 0f, 0f, 1000f, 0f, true);
							}
							ENTITY::CREATE_MODEL_HIDE(Local_281, 5f, joaat("prop_skid_chair_02"), true);
							ENTITY::CREATE_MODEL_HIDE(Local_281, 5f, joaat("prop_rub_couch03"), true);
							iLocal_250 = 1;
							if (bLocal_362)
							{
							}
						}
					}
				}
			}
			break;
		case 1:
			__LIB_31__::func_443(&uLocal_360, Local_275, 30f, 0);
			iLocal_250 = 2;
			break;
		case 2:
			break;
	}
}

void func_241()//Position - 0x7E24
{
	__LIB_31__::func_446(&(Local_231.f_55), 2);
	__LIB_31__::func_446(&(Local_231.f_55), 4);
	__LIB_31__::func_446(&(Local_231.f_55), 16);
	__LIB_31__::func_446(&(Local_231.f_55), 64);
	__LIB_31__::func_446(&(Local_231.f_55), 256);
	__LIB_31__::func_446(&(Local_231.f_55), 512);
	__LIB_31__::func_446(&(Local_231.f_55), 1024);
	__LIB_31__::func_446(&(Local_231.f_55), 2048);
	__LIB_31__::func_446(&(Local_231.f_55), 4096);
	__LIB_31__::func_446(&(Local_231.f_55), 1073741824);
	__LIB_31__::func_446(&(Local_231.f_100), 8);
	__LIB_31__::func_446(&(Local_231.f_100), 2048);
	__LIB_31__::func_446(&(Local_231.f_100), 256);
	__LIB_31__::func_446(&uLocal_408, 2);
}

void func_243(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7EEE
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		__LIB_35__::func_371(iParam0, 16, 4f, 0);
		if (__LIB_35__::func_342(iParam0))
		{
			__LIB_6__::func_771();
		}
	}
	func_270(iParam0, iParam2, bParam3);
}

void func_247()//Position - 0x7FBD
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_248);
}

int func_249(var uParam0, bool bParam1, float fParam2)//Position - 0x8020
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
			func_216(uParam0, 1);
			if (__LIB_35__::func_340())
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
			__LIB_42__::func_722(uParam0);
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
			if (__LIB_31__::func_442(uParam0, 14))
			{
				__LIB_35__::func_369(uParam0);
				func_217(uParam0, 0);
			}
			if (__LIB_31__::func_442(uParam0, 9))
			{
				__LIB_31__::func_440(uParam0, 9, 0);
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
				if (uParam0->f_141 && __LIB_31__::func_447(uParam0, uParam0->f_3) > 300f)
				{
					__LIB_42__::func_45(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && __LIB_0__::func_529(uParam0->f_3, uParam0->f_11, 1) <= 28f) && __LIB_0__::func_529(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_264(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					case 1:
						if (__LIB_39__::func_634(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = __LIB_31__::func_430(uParam0->f_4, uParam0->f_3);
								iVar0 = __LIB_31__::func_370(uParam0, &iVar1);
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
							if (!__LIB_31__::func_441(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7) && __LIB_31__::func_447(uParam0, uParam0->f_3) > 8f)
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
								if (!__LIB_31__::func_387(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__::func_45(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!__LIB_31__::func_357(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__::func_45(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						__LIB_42__::func_578(uParam0);
						if (__LIB_31__::func_447(uParam0, uParam0->f_3) < fVar4 || __LIB_35__::func_340())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (func_251(uParam0))
								{
									__LIB_31__::func_377(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									__LIB_31__::func_440(uParam0, 5, 0);
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

int func_251(var uParam0)//Position - 0x8557
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	__LIB_31__::func_358("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		__LIB_37__::func_674();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (__LIB_26__::func_226(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (__LIB_37__::func_668(uParam0, 0, 1084227584) && __LIB_0__::func_398(1, 1, 1))
			{
				if (__LIB_31__::func_387(uParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					__LIB_42__::func_45(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = __LIB_31__::func_430(uParam0->f_4, uParam0->f_3);
				iVar3 = __LIB_31__::func_370(uParam0, &iVar4);
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
			iVar6 = __LIB_31__::func_386(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
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
				__LIB_26__::func_227(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_6__::func_833();
				func_270(uParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, __LIB_35__::func_343(uParam0));
				__LIB_31__::func_429(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			__LIB_31__::func_358("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, __LIB_31__::func_428(uParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam0, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_6__::func_833();
				func_270(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				__LIB_32__::func_557(1, 1, 1);
				return 1;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*uParam0, false);
			CAM::DESTROY_CAM(uParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_32__::func_557(1, 1, 1);
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

int func_264(var uParam0, float fParam1)//Position - 0x8FFF
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
		Var2.f_1 = (Var2.f_1 + 1f);
	}
	else
	{
		Var2 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		case 1:
			if ((__LIB_0__::func_76(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 7);
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, true);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!__LIB_0__::func_517(uParam0->f_44, 128))
				{
					func_243(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				__LIB_5__::func_759(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, false, false, false);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_270(var uParam0, int iParam1, bool bParam2)//Position - 0x95B0
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		__LIB_6__::func_771();
		__LIB_35__::func_371(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_271(var uParam0, int iParam1)//Position - 0x95D5
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	__LIB_29__::func_780(12);
	if (__LIB_0__::func_517(uParam0->f_44, 8))
	{
		if (!__LIB_0__::func_517(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_517(uParam0->f_44, 256))
			{
				__LIB_31__::func_446(&(uParam0->f_44), 256);
			}
			if (__LIB_0__::func_517(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_243(uParam0, 135, 1, 0, 1);
				__LIB_31__::func_446(&(uParam0->f_44), 128);
			}
		}
	}
	if (!__LIB_35__::func_344(uParam0, iParam1))
	{
		if (__LIB_10__::func_589(uParam0->f_3, 1) < 35f)
		{
			if (!__LIB_0__::func_517(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_243(uParam0, 133, 1, 0, 1);
				__LIB_31__::func_446(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || __LIB_10__::func_589(uParam0->f_3, 1) > 400f)
		{
			__LIB_42__::func_45(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			__LIB_35__::func_332(uParam0);
			__LIB_35__::func_327(2, 0);
			bLocal_86 = true;
			__LIB_18__::func_364(&iLocal_82);
			return 1;
		}
		else
		{
			__LIB_42__::func_45(uParam0, "No Taxi", 21);
			__LIB_0__::func_151("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_280()//Position - 0x9E4C
{
	Local_165.f_0 = 0;
	__LIB_31__::func_396(41473/*func_299*/, 41448/*func_298*/, 1);
	__LIB_31__::func_396(41209/*func_295*/, 41185/*func_294*/, 1);
	__LIB_31__::func_396(41123/*func_293*/, 41098/*func_292*/, 1);
	__LIB_31__::func_396(41026/*func_291*/, 41002/*func_290*/, 1);
	__LIB_31__::func_396(40892/*func_289*/, 40871/*func_288*/, 1);
	__LIB_31__::func_396(40818/*func_286*/, 40793/*func_285*/, 1);
	__LIB_31__::func_396(40651/*func_282*/, 40627/*func_281*/, 1);
}

int func_304()//Position - 0xA4CD
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_248))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_257, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_415))
	{
		return 0;
	}
	if (!__LIB_31__::func_432(&iLocal_257, 1))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_257, 1000);
		return 0;
	}
	return 1;
}

void func_311()//Position - 0xAA2C
{
	STREAMING::REQUEST_MODEL(iLocal_248);
	__LIB_35__::func_335(1);
	iLocal_415 = __LIB_1__::func_638();
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\TREVOR_2_BIKER_RINGTONE", false, -1);
}

void func_314(var uParam0, int iParam1, bool bParam2)//Position - 0xAABE
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (__LIB_37__::func_678(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_243(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_243(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					__LIB_35__::func_371(uParam0, 10, 0f, 1);
				}
			}
			else if (__LIB_37__::func_678(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_243(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_243(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_35__::func_371(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (__LIB_37__::func_678(uParam0, 10) > 30f)
		{
			if (!__LIB_0__::func_75())
			{
				if (uParam0->f_112)
				{
					func_243(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_243(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_35__::func_371(uParam0, 10, 0f, 1);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 64))
	{
		if (!__LIB_0__::func_516(&(Local_162[5 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[5 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (__LIB_35__::func_367(uParam0))
			{
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(5, uParam0);
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 1))
	{
		if (!__LIB_0__::func_516(&(Local_162[0 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[0 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (__LIB_35__::func_365(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(0, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 2))
	{
		if (!__LIB_0__::func_516(&(Local_162[1 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[1 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (__LIB_35__::func_364(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(1, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 2048))
	{
		if (!__LIB_0__::func_516(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				__LIB_18__::func_364(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (__LIB_5__::func_736(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_330(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(8, uParam0);
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 128))
	{
		if (!__LIB_0__::func_516(&(Local_162[6 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[6 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (__LIB_35__::func_363(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(6, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 32))
	{
		if (!__LIB_0__::func_516(&(Local_162[4 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[4 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (__LIB_35__::func_362(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(4, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 256))
	{
		if (!__LIB_0__::func_516(&(Local_162[7 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[7 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (__LIB_31__::func_402(uParam0))
			{
				__LIB_35__::func_366(7, uParam0);
				__LIB_31__::func_404(uParam0, 1);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 8))
	{
		if (!__LIB_0__::func_516(&(Local_162[9 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[9 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (__LIB_5__::func_736(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (__LIB_31__::func_401(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(9, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 16384))
	{
		if (!__LIB_0__::func_516(&(Local_162[13 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[13 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (__LIB_39__::func_636(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(13, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 32768))
	{
		if (!__LIB_0__::func_516(&(Local_162[14 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[14 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (__LIB_35__::func_361(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(14, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 4096))
	{
		if (!__LIB_0__::func_516(&(Local_162[11 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[11 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (__LIB_35__::func_360(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(11, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 8192))
	{
		if (!__LIB_0__::func_516(&(Local_162[12 /*10*/].f_6)))
		{
			__LIB_18__::func_364(&(Local_162[12 /*10*/].f_6));
		}
		else if (__LIB_5__::func_736(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (__LIB_35__::func_359(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(12, uParam0);
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_35__::func_384(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 4))
	{
		if (!__LIB_0__::func_516(&(Local_162[2 /*10*/].f_6)))
		{
			__LIB_31__::func_359(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (__LIB_5__::func_736(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (__LIB_35__::func_358(uParam0))
			{
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_31__::func_404(uParam0, 1);
				__LIB_35__::func_366(2, uParam0);
				__LIB_35__::func_384(uParam0);
			}
		}
	}
}

int func_330(var uParam0)//Position - 0xBBF3
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_243(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_243(uParam0, 72, 1, 0, 1);
				}
				__LIB_1__::func_37(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

void func_348()//Position - 0xC8BB
{
	__LIB_35__::func_373(&Local_231);
	if (__LIB_31__::func_449(&Local_231, &Local_363))
	{
		switch (Local_363.f_27)
		{
			case 0:
				if (Local_231.f_410 == 9)
				{
					if (!__LIB_35__::func_372(&Local_231))
					{
						if (__LIB_31__::func_416("TX_OBJ_GYN_DO") || HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							Local_363.f_27++;
						}
						else if (__LIB_31__::func_383(&Local_231) != 10)
						{
							func_243(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((__LIB_31__::func_383(&Local_231) > 10 && __LIB_31__::func_383(&Local_231) != 15) && !__LIB_35__::func_372(&Local_231))
				{
					func_243(&Local_231, 15, 1, 0, 0);
					if (bLocal_362)
					{
					}
					__LIB_35__::func_356(&Local_231, 7);
				}
				break;
			case 2:
				if (__LIB_37__::func_678(&Local_231, 18) > 4f && !iLocal_269)
				{
					iLocal_263 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_263, "Biker_Ring_Tone", Local_231.f_4, "TREVOR_2_SOUNDS", false, 0);
					iLocal_269 = 1;
				}
				else if (((__LIB_37__::func_678(&Local_231, 18) > 7f && __LIB_31__::func_383(&Local_231) != 16) && iLocal_269) && !iLocal_271)
				{
					__LIB_2__::func_29(&iLocal_263);
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_231.f_3, true, 1);
					}
					func_243(&Local_231, 16, 1, 0, 0);
					if (bLocal_362)
					{
					}
					iLocal_271 = 1;
				}
				break;
			case 3:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					TASK::TASK_USE_MOBILE_PHONE(Local_231.f_3, false, 1);
				}
				Local_363.f_27++;
				break;
			case 5:
				if (__LIB_37__::func_678(&Local_231, 18) > 2f && __LIB_31__::func_383(&Local_231) != 131)
				{
					func_243(&Local_231, 131, 1, 0, 0);
					if (bLocal_362)
					{
					}
					Local_363.f_27++;
				}
				break;
			}
	}
	func_349(&Local_231, &uLocal_366, &Local_363, bLocal_362);
}

int func_349(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xCAB6
{
	func_357(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !__LIB_31__::func_442(uParam0, 2))
	{
		if (__LIB_31__::func_409(uParam1))
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
				if (!__LIB_31__::func_415(uParam0))
				{
					uParam2->f_7 = { __LIB_35__::func_337(uParam1) };
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_75())
				{
					uParam2->f_13 = { __LIB_0__::func_390() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_371(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (__LIB_15__::func_87(uParam0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_35__::func_371(uParam0, 17, 0f, 1);
						uParam2->f_1 = { __LIB_0__::func_389() };
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
					uParam2->f_19 = { __LIB_9__::func_980() };
				}
				else
				{
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_371(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!__LIB_31__::func_442(uParam0, 14) && !__LIB_0__::func_75()) && !__LIB_15__::func_87(uParam0)) && __LIB_37__::func_678(uParam0, 18) > 1f)
				{
					__LIB_35__::func_371(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_37__::func_678(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							__LIB_36__::func_42(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
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
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_371(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

void func_357(var uParam0, var uParam1)//Position - 0xD166
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	if (__LIB_31__::func_415(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (__LIB_31__::func_442(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_31__::func_383(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_351(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
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
						func_371(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					__LIB_35__::func_386(uParam0, Var0, __LIB_31__::func_414(uParam0, 2));
				}
				if (__LIB_0__::func_517(uParam0->f_98, 4))
				{
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					func_270(uParam0, 0, 0);
				}
				func_221(uParam0, &(uParam0->f_98), 4, 3);
				break;
			case 3:
				if (__LIB_37__::func_678(uParam0, 16) > 1f)
				{
					__LIB_0__::func_488(1);
					if (uParam0->f_411 == 9)
					{
						__LIB_0__::func_210("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						__LIB_0__::func_210("TAXI_VIP_RETURN", 7500, 1);
					}
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					func_270(uParam0, 0, 0);
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
					func_371(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_5__::func_759(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((__LIB_37__::func_678(uParam0, 16) > __LIB_0__::func_316(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !__LIB_0__::func_75()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_31__::func_383(uParam0))
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
				func_371(uParam0, &Var0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_351(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 0:
				if (uParam0->f_411 == 9)
				{
					__LIB_35__::func_536(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_243(uParam0, 1, 1, 0, 0);
				break;
			case 1:
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_243(uParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!__LIB_0__::func_517(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						__LIB_31__::func_435(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_371(uParam0, &Var0, 0, 0, 8);
					}
				}
				__LIB_35__::func_371(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 5:
				if (uParam0->f_411 == 7)
				{
					__LIB_0__::func_210("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					__LIB_0__::func_210("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_392(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_243(uParam0, 10, 1, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					__LIB_5__::func_759(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_392(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_243(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				__LIB_40__::func_786(uParam0, 33554432, Var0, "", 1, 8);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_243(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 10:
				if (!__LIB_0__::func_75())
				{
					__LIB_31__::func_412(uParam0, 0);
					__LIB_31__::func_446(&(uParam0->f_44), 4);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					func_243(uParam0, 13, 0, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 11, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 15:
				if (__LIB_37__::func_678(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_349(Var0, uParam1);
					__LIB_31__::func_446(&(uParam0->f_81), 67108864);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					__LIB_35__::func_371(uParam0, 11, 0, 0);
					func_270(uParam0, 0, 0);
				}
				break;
			case 16:
				if (__LIB_37__::func_678(uParam0, 11) > uParam0->f_36)
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
							__LIB_31__::func_385(&Var0);
						}
					}
					__LIB_35__::func_349(Var0, uParam1);
					__LIB_35__::func_371(uParam0, 11, 0, 0);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					func_270(uParam0, 0, 0);
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
					__LIB_31__::func_385(&Var0);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 11, 0, 0);
				func_270(uParam0, 0, 0);
				__LIB_31__::func_446(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 24, 1, 0, 0);
				break;
			case 24:
				uParam0->f_417 = 24;
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 1, 0, 8);
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
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
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
					__LIB_31__::func_434(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_31__::func_434(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_351(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 6, 0f, 1);
				func_270(uParam0, 0, 0);
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
					__LIB_31__::func_434(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_31__::func_434(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_351(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 6, 0f, 1);
				func_270(uParam0, 0, 0);
				break;
			case 12:
				__LIB_0__::func_210("TAXI_OBJ_GYB", 3500, 1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					__LIB_0__::func_210("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					__LIB_0__::func_210("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					__LIB_0__::func_210("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
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
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!__LIB_0__::func_517(uParam0->f_98, 268435456))
				{
					__LIB_0__::func_210("TAXI_OBJ_CYI_01", 7500, 1);
					__LIB_31__::func_446(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 33:
				__LIB_0__::func_210("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 34:
				if (!__LIB_0__::func_517(uParam0->f_82, 8192))
				{
					if (__LIB_37__::func_678(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						__LIB_31__::func_385(&Var0);
						if (uParam0->f_411 == 5)
						{
							__LIB_35__::func_349(Var0, uParam1);
						}
						else
						{
							func_371(uParam0, &Var0, 0, 0, 8);
						}
						__LIB_31__::func_446(&(uParam0->f_82), 8192);
						__LIB_35__::func_371(uParam0, 16, 0, 0);
						__LIB_35__::func_371(uParam0, 11, 0, 0);
						func_270(uParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!__LIB_0__::func_517(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					__LIB_31__::func_385(&Var0);
					func_371(uParam0, &Var0, 0, 0, 8);
					__LIB_31__::func_446(&(uParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!__LIB_0__::func_517(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					__LIB_31__::func_385(&Var0);
					func_371(uParam0, &Var0, 0, 0, 8);
					__LIB_31__::func_446(&(uParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 46, 1, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_270(uParam0, 0, 0);
				break;
			case 139:
				__LIB_0__::func_210("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_243(uParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!__LIB_0__::func_517(uParam0->f_82, 268435456))
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
					__LIB_31__::func_446(&(uParam0->f_82), 268435456);
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
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!__LIB_0__::func_517(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					__LIB_31__::func_446(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 44, 1, 0, 0);
				break;
			case 44:
				__LIB_0__::func_210("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_270(uParam0, 0, 0);
				func_243(uParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_210("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_270(uParam0, 0, 0);
					func_243(uParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				__LIB_0__::func_210("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_270(uParam0, 0, 0);
				break;
			case 21:
				if (!__LIB_0__::func_517(uParam0->f_81, 1))
				{
					__LIB_40__::func_785(uParam0, 1, Var0, "_sick1", 8);
					__LIB_35__::func_326(&(uParam0->f_81), 2);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 2))
				{
					__LIB_40__::func_785(uParam0, 2, Var0, "_sick2", 8);
					__LIB_35__::func_326(&(uParam0->f_81), 1);
				}
				__LIB_35__::func_351(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 22:
				if (!__LIB_0__::func_517(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_351(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_270(uParam0, 0, 0);
				break;
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_351(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_351(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_351(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 71:
				if (!__LIB_0__::func_517(uParam0->f_81, 4))
				{
					__LIB_40__::func_785(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 8))
				{
					__LIB_40__::func_785(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					__LIB_40__::func_785(uParam0, 8, Var0, "_turns3", 8);
					__LIB_35__::func_326(&(uParam0->f_81), 4);
					__LIB_35__::func_326(&(uParam0->f_81), 8);
				}
				__LIB_35__::func_351(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 72:
				if (__LIB_31__::func_410(uParam0))
				{
					__LIB_35__::func_386(uParam0, Var0, __LIB_31__::func_414(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						__LIB_31__::func_435(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						__LIB_31__::func_435(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				__LIB_35__::func_351(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 75:
				if (!__LIB_0__::func_517(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 128);
					__LIB_35__::func_326(&(uParam0->f_83), 256);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 256);
					__LIB_35__::func_326(&(uParam0->f_83), 512);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 512);
					__LIB_35__::func_326(&(uParam0->f_83), 128);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				func_270(uParam0, 0, 0);
				break;
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_517(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 1);
					__LIB_35__::func_326(&(uParam0->f_83), 2);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						__LIB_35__::func_326(&(uParam0->f_83), 4);
					}
					else
					{
						__LIB_35__::func_326(&(uParam0->f_83), 1);
					}
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 4);
					__LIB_35__::func_326(&(uParam0->f_83), 1);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				__LIB_35__::func_351(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_517(uParam0->f_81, 4096))
				{
					__LIB_40__::func_786(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 8192))
				{
					__LIB_40__::func_786(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				__LIB_35__::func_351(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_517(uParam0->f_81, 16384))
				{
					__LIB_40__::func_786(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 32768))
				{
					__LIB_40__::func_786(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				__LIB_35__::func_351(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!__LIB_0__::func_517(uParam0->f_82, 8))
					{
						__LIB_40__::func_784(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!__LIB_0__::func_517(uParam0->f_82, 16))
					{
						__LIB_40__::func_784(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!__LIB_0__::func_517(uParam0->f_82, 32))
					{
						__LIB_40__::func_784(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					__LIB_35__::func_351(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_270(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_35__::func_351(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					func_270(uParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 81:
				if (!__LIB_0__::func_517(uParam0->f_81, 65536))
				{
					__LIB_40__::func_786(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 131072))
				{
					__LIB_40__::func_786(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_270(uParam0, 0, 0);
				break;
			case 82:
				if (__LIB_31__::func_410(uParam0))
				{
					__LIB_35__::func_386(uParam0, Var0, __LIB_31__::func_414(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 8);
					__LIB_35__::func_326(&(uParam0->f_83), 16);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 16);
					__LIB_35__::func_326(&(uParam0->f_83), 32);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						__LIB_35__::func_326(&(uParam0->f_83), 64);
					}
					else
					{
						__LIB_35__::func_326(&(uParam0->f_83), 8);
					}
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 64);
					__LIB_35__::func_326(&(uParam0->f_83), 8);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
				}
				__LIB_35__::func_351(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
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
					func_371(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_35__::func_386(uParam0, Var0, __LIB_31__::func_414(uParam0, 65));
					func_270(uParam0, 0, 0);
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
					func_371(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_35__::func_386(uParam0, Var0, __LIB_31__::func_414(uParam0, 66));
					func_270(uParam0, 0, 0);
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
								func_371(uParam0, &Var0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_371(uParam0, &Var0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_371(uParam0, &Var0, 0, 0, 8);
								__LIB_35__::func_351(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_371(uParam0, &Var0, 0, 0, 8);
								__LIB_35__::func_351(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_371(uParam0, &Var0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								__LIB_31__::func_435(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								__LIB_35__::func_351(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								__LIB_35__::func_371(uParam0, 16, 0, 0);
								func_270(uParam0, 0, 0);
								break;
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_371(uParam0, &Var0, 0, 0, 8);
									__LIB_35__::func_371(uParam0, 16, 0, 0);
									__LIB_35__::func_371(uParam0, 11, 0, 0);
									func_270(uParam0, 0, 0);
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
									__LIB_31__::func_385(&Var0);
									func_371(uParam0, &Var0, 0, 0, 8);
									__LIB_35__::func_371(uParam0, 16, 0, 0);
									__LIB_35__::func_371(uParam0, 11, 0, 0);
									func_270(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_371(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_243(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 25:
				if (!__LIB_0__::func_517(uParam0->f_82, 1))
				{
					__LIB_40__::func_784(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 2))
				{
					__LIB_40__::func_784(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 4))
				{
					__LIB_40__::func_784(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_270(uParam0, 0, 0);
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
				__LIB_31__::func_435(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_5__::func_759(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_351(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 74:
				if (__LIB_31__::func_410(uParam0))
				{
					__LIB_35__::func_386(uParam0, Var0, __LIB_31__::func_414(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					__LIB_41__::func_496(uParam0, Var0, 8);
				}
				__LIB_35__::func_351(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 70:
				if (!__LIB_0__::func_517(uParam0->f_83, 1024))
				{
					__LIB_31__::func_446(&(uParam0->f_83), 1024);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 2048))
				{
					__LIB_31__::func_446(&(uParam0->f_83), 2048);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 4096))
				{
					__LIB_31__::func_446(&(uParam0->f_83), 4096);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_270(uParam0, 0, 0);
				break;
			case 69:
				if (!__LIB_0__::func_517(uParam0->f_82, 1024))
				{
					__LIB_40__::func_784(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					__LIB_35__::func_326(&(uParam0->f_82), 2048);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 2048))
				{
					__LIB_40__::func_784(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_270(uParam0, 0, 0);
				break;
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 52, 1, 0, 0);
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
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_5__::func_759(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 51:
				if (__LIB_31__::func_410(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_371(uParam0, &Var0, 0, 0, 8);
						func_243(uParam0, 52, 1, 0, 0);
						__LIB_35__::func_371(uParam0, 16, 0, 0);
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
						func_371(uParam0, &Var0, 0, 0, 8);
						__LIB_35__::func_371(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_35__::func_371(uParam0, 16, 0, 0);
					func_270(uParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				__LIB_35__::func_351(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_371(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_371(uParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					__LIB_0__::func_210("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_270(uParam0, 0, 0);
				break;
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 84:
				if (!__LIB_0__::func_517(uParam0->f_81, 262144))
				{
					__LIB_40__::func_786(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						__LIB_40__::func_786(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						__LIB_40__::func_786(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				__LIB_35__::func_351(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 85:
				if (!__LIB_0__::func_517(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						__LIB_40__::func_783(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 134217728))
				{
					__LIB_40__::func_783(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				__LIB_35__::func_351(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 100:
				__LIB_0__::func_210("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_270(uParam0, 0, 0);
				break;
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_31__::func_385(&Var0);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_31__::func_385(&Var0);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_371(uParam0, &Var0, 0, 0, 8);
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
					__LIB_31__::func_385(&Var0);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 97:
				if (!__LIB_0__::func_517(uParam0->f_82, 65536))
				{
					if (__LIB_37__::func_678(uParam0, 11) > uParam0->f_36)
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
						__LIB_31__::func_385(&Var0);
						__LIB_35__::func_349(Var0, uParam1);
						__LIB_31__::func_446(&(uParam0->f_82), 65536);
						__LIB_35__::func_371(uParam0, 16, 0, 0);
						__LIB_35__::func_371(uParam0, 11, 0, 0);
						func_270(uParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!__LIB_0__::func_517(uParam0->f_82, 131072))
				{
					if (__LIB_37__::func_678(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						__LIB_31__::func_385(&Var0);
						__LIB_35__::func_349(Var0, uParam1);
						__LIB_31__::func_446(&(uParam0->f_82), 131072);
						__LIB_35__::func_371(uParam0, 16, 0, 0);
						__LIB_35__::func_371(uParam0, 11, 0, 0);
						func_270(uParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!__LIB_0__::func_517(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					__LIB_31__::func_446(&(uParam0->f_82), 8388608);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					__LIB_31__::func_446(&(uParam0->f_82), 16777216);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					__LIB_31__::func_446(&(uParam0->f_82), 33554432);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_371(uParam0, &Var0, 0, 0, 8);
				}
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 11, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 11, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 11, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_243(uParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_31__::func_446(&(uParam0->f_81), 67108864);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				__LIB_35__::func_371(uParam0, 11, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				break;
			case 105:
				if (!__LIB_0__::func_517(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					__LIB_40__::func_786(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_243(uParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&Var0, "_foot", 24);
				__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 107:
				if (!__LIB_0__::func_517(uParam0->f_81, 268435456))
				{
					__LIB_40__::func_786(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_243(uParam0, 52, 1, 0, 0);
				break;
			case 108:
				__LIB_0__::func_210("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_270(uParam0, 0, 0);
				break;
			case 109:
				if (!__LIB_0__::func_517(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						__LIB_40__::func_786(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							__LIB_5__::func_759(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						__LIB_40__::func_786(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_243(uParam0, 111, 1, 0, 0);
				break;
			case 111:
				__LIB_0__::func_210("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_270(uParam0, 0, 0);
				break;
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_35__::func_371(uParam0, 16, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			case 141:
				if (!__LIB_0__::func_517(uParam0->f_81, 16777216))
				{
					__LIB_40__::func_786(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_270(uParam0, 0, 0);
				break;
			case 88:
				__LIB_0__::func_210("TAXI_TIEFLEE", 7500, 1);
				func_270(uParam0, 0, 0);
				break;
			case 57:
				if (!__LIB_0__::func_517(uParam0->f_98, 536870912))
				{
					__LIB_0__::func_210("TAXI_OBJ_CYI_1B", 7500, 1);
					__LIB_31__::func_446(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_270(uParam0, 0, 0);
				break;
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				__LIB_31__::func_385(&Var0);
				func_371(uParam0, &Var0, 0, 0, 8);
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
				func_371(uParam0, &Var0, 0, 0, 8);
				func_270(uParam0, 0, 0);
				break;
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_371(uParam0, &Var0, 0, 0, 8);
				func_270(uParam0, 0, 0);
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
				func_371(uParam0, &Var0, 0, 0, 8);
				func_270(uParam0, 0, 0);
				break;
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_371(uParam0, &Var0, 1, 0, 8);
				func_243(uParam0, 134, 1, 0, 0);
				break;
			case 134:
				__LIB_0__::func_210("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_243(uParam0, 0, 0, 0, 0);
				func_270(uParam0, 0, 0);
				break;
			}
	}
}

int func_371(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x10D60
{
	__LIB_35__::func_371(uParam0, 16, 0, 0);
	if (bParam3)
	{
		__LIB_35__::func_371(uParam0, 17, 0f, 1);
	}
	func_270(uParam0, iParam2, 0);
	return __LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_380(var uParam0)//Position - 0x1152D
{
	if (!__LIB_31__::func_441(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_216(uParam0, 1);
	}
	else if (__LIB_31__::func_442(uParam0, 14))
	{
		__LIB_35__::func_369(uParam0);
		func_217(uParam0, 0);
	}
}

int func_383(var uParam0, var uParam1)//Position - 0x11707
{
	var uVar0;
	if (!__LIB_31__::func_442(uParam0, 27))
	{
		__LIB_35__::func_356(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && __LIB_37__::func_678(uParam0, 27) > 5f)
	{
		if (__LIB_37__::func_677(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			__LIB_35__::func_371(uParam0, 27, 0, 0);
			__LIB_35__::func_371(uParam0, 10, 0, 0);
			func_408(uParam0, &uVar0, uParam1);
		}
		func_405(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		__LIB_42__::func_372(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_75())
	{
		if (__LIB_37__::func_678(uParam0, 26) > 10f)
		{
			__LIB_31__::func_440(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (__LIB_31__::func_442(uParam0, 26))
	{
		__LIB_31__::func_440(uParam0, 26, 0);
	}
	return 0;
}

void func_405(var uParam0)//Position - 0x11F66
{
	var uVar0;
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && __LIB_31__::func_360()) && !__LIB_31__::func_441(uParam0)) || ((uParam0->f_411 != 9 && __LIB_35__::func_344(uParam0, 1)) && !__LIB_31__::func_441(uParam0)))
		{
			uVar0 = __LIB_1__::func_192(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			__LIB_35__::func_369(uParam0);
			func_217(uParam0, 0);
		}
	}
}

void func_408(var uParam0, var uParam1, var uParam2)//Position - 0x1205D
{
	switch (*uParam1)
	{
		case 1:
			if (func_409(uParam0, 0, 1))
			{
				__LIB_42__::func_45(uParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (func_409(uParam0, 0, 4))
			{
				__LIB_42__::func_45(uParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (func_409(uParam0, 0, 8))
			{
				__LIB_42__::func_45(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (func_409(uParam0, 1, 1))
			{
				__LIB_42__::func_45(uParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (func_409(uParam0, 0, 1))
			{
				__LIB_42__::func_45(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!__LIB_0__::func_517(*uParam2, 2) && __LIB_31__::func_382(uParam0))
			{
				__LIB_42__::func_45(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_409(var uParam0, int iParam1, int iParam2)//Position - 0x12138
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_243(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_243(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

void func_418()//Position - 0x1286E
{
	func_419(&Local_231);
	func_436();
}

void func_419(var uParam0)//Position - 0x12881
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		__LIB_30__::func_728(2);
	}
}

void func_423()//Position - 0x12A01
{
	int iVar0;
	Local_231.f_23 = { -1583.5905f, 169.2662f, 57.6205f };
	Local_231.f_33 = 116f;
	Local_231.f_26 = { 49.0898f, -1178.9226f, 28.2091f };
	Local_231.f_34 = 185.975f;
	__LIB_39__::func_638(&Local_231, 6);
	Local_231.f_410 = 0;
	__LIB_31__::func_420(&Local_231, 3, 6);
	iVar0 = __LIB_18__::func_168(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		StringCopy(&cLocal_283, "txm9_gHelp1M_4", 24);
	}
	else if (iVar0 == 2)
	{
		StringCopy(&cLocal_283, "txm9_gHelp1T_4", 24);
	}
	else if (iVar0 == 1)
	{
		StringCopy(&cLocal_283, "txm9_gHelp1F_7", 24);
	}
}

void func_436()//Position - 0x12FFC
{
	__LIB_31__::func_443(&uLocal_360, Local_275, 100f, 1);
	TASK::REMOVE_WAYPOINT_RECORDING("taxi_oj_gyn");
	PED::SET_CREATE_RANDOM_COPS(true);
	func_247();
	func_148();
	ENTITY::REMOVE_MODEL_HIDE(Local_281, 5f, joaat("prop_skid_chair_02"), false);
	ENTITY::REMOVE_MODEL_HIDE(Local_281, 5f, joaat("prop_rub_couch03"), false);
	AUDIO::STOP_AUDIO_SCENE("TAXI_GOT_U_NOW");
	SCRIPT::TERMINATE_THIS_THREAD();
}

